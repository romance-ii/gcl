
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
	V34 = base[3];
	base[6]= list(3,VV[9],list(2,VV[10],base[3]),base[5]);
	base[7]= (V26);
	vs_top=(vs_base=base+6)+2;
	L8(base);
	vs_top=sup;
	V35= vs_base[0];
	V32= list(3,VV[11],V34,V35);
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
	{object V36=base[0]->c.c_cdr;
	base[2]= (V36->c.c_car);
	V36=V36->c.c_cdr;
	if(endp(V36)){
	base[3]= Cnil;
	} else {
	base[3]= (V36->c.c_car);}}
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
	{object V37;
	object V38;
	object V39;
	object V40;
	object V41;
	object V42;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI10key,first,ap);
	V37=(Vcs[0]);
	V38=(Vcs[1]);
	V39=(Vcs[2]);
	V40=(Vcs[3]);
	V41=(Vcs[4]);
	V42=(Vcs[5]);
	base[0]= VV[18];
	base[1]= (V37);
	base[2]= (V38);
	base[3]= (V39);
	base[4]= (V40);
	base[5]= (V41);
	base[6]= (V42);
	vs_top=(vs_base=base+0)+7;
	siLmake_structure();
	vs_top=sup;
	{object V43 = vs_base[0];
	VMR9(V43)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function MAKE-LOOP-MINIMAX	*/

static object LI11(V46,V47)

object V46;object V47;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V48;
	base[0]= (V47);
	base[1]= (VV[19]->s.s_dbind);
	base[2]= VV[20];
	base[3]= (VV[333]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	Lassoc();
	vs_top=sup;
	V49= vs_base[0];
	V48= CMPcdr(V49);
	V50 = (V46);
	V51 = (V47);
	V52= (VFUN_NARGS=1,(*(LnkLI335))(VV[24]));
	if(((V48))==Cnil){
	goto T68;}
	V53= Cnil;
	goto T67;
	goto T68;
T68:;
	V53= (VFUN_NARGS=1,(*(LnkLI335))(VV[26]));
	goto T67;
T67:;
	V54 = (V48);
	{object V55 = (VFUN_NARGS=12,(*(LnkLI334))(VV[21],V50,VV[22],V51,VV[23],/* INLINE-ARGS */V52,VV[25],V53,VV[27],Cnil,VV[28],V54));
	VMR10(V55)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-NOTE-MINIMAX-OPERATION	*/

static object LI12(V58,V59)

object V58;register object V59;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{object V62;
	base[1]= V58;
	base[2]= STREF(object,V59,16);
	vs_top=(vs_base=base+1)+2;
	Ladjoin();
	vs_top=sup;
	V62= vs_base[0];
	V63 = V59;
	V64 = (V62);
	V65= Ct;
	STSET(object,V63,16, V64);
	(void)(V64);}
	if((CMPcdr(STREF(object,(V59),16)))==Cnil){
	goto T74;}
	if((STREF(object,(V59),12))!=Cnil){
	goto T74;}
	V66 = (V59);
	V67= (VFUN_NARGS=1,(*(LnkLI335))(VV[26]));
	V68= Ct;
	STSET(object,V66,12, /* INLINE-ARGS */V67);
	(void)(/* INLINE-ARGS */V67);
	goto T74;
T74:;
	{object V69 = (V58);
	VMR11(V69)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for WITH-MINIMAX-VALUE	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	vs_top=sup;
	{object V70=base[0]->c.c_cdr;
	base[2]= (V70->c.c_car);
	V70=V70->c.c_cdr;
	base[3]= V70;}
	{object V71;
	object V72;
	object V73;
	register object V74;
	register object V75;
	object V76;
	object V77;
	V71= (*(LnkLI336))(STREF(object,base[2],4));
	V72= CMPcar(STREF(object,base[2],16));
	V73= STREF(object,base[2],20);
	V74= STREF(object,base[2],0);
	V75= STREF(object,base[2],8);
	V76= STREF(object,base[2],12);
	V77= STREF(object,base[2],4);
	if(((V76))==Cnil){
	goto T87;}
	V78= list(2,(V74),(V71));
	V79= list(2,(V75),(V71));
	V80= list(3,/* INLINE-ARGS */V78,/* INLINE-ARGS */V79,list(2,(V76),Cnil));
	base[4]= listA(4,VV[29],/* INLINE-ARGS */V80,list(2,VV[30],list(4,VV[31],(V77),(V74),(V75))),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T87;
T87:;
	V81 = (V74);
	if(!(((V72))==(VV[32]))){
	goto T91;}
	V82= CMPcar((V73));
	goto T89;
	goto T91;
T91:;
	V82= CMPcadr((V73));
	goto T89;
T89:;
	V83= list(2,V81,V82);
	V84= list(2,/* INLINE-ARGS */V83,list(2,(V75),(V71)));
	base[4]= listA(4,VV[29],/* INLINE-ARGS */V84,list(2,VV[30],list(4,VV[31],(V77),(V74),(V75))),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for LOOP-ACCUMULATE-MINIMAX-VALUE	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	vs_top=sup;
	{object V85=base[0]->c.c_cdr;
	base[2]= (V85->c.c_car);
	V85=V85->c.c_cdr;
	base[3]= (V85->c.c_car);
	V85=V85->c.c_cdr;
	base[4]= (V85->c.c_car);}
	{object V86;
	object V87;
	register object V88;
	object V89;
	V86= STREF(object,base[2],0);
	V87= STREF(object,base[2],8);
	V88= STREF(object,base[2],12);
	{object V91= base[3];
	if((V91!= VV[32]))goto T98;
	V90= VV[33];
	goto T97;
	goto T98;
T98:;
	if((V91!= VV[338]))goto T99;
	V90= VV[34];
	goto T97;
	goto T99;
T99:;
	FEerror("The ECASE key value ~s is illegal.",1,V91);
	V90= Cnil;
	goto T97;}
	goto T97;
T97:;
	V92 = (V87);
	V93 = (V86);
	V94= list(3,V90,V92,V93);
	V89= (*(LnkLI337))(Ct,STREF(object,base[2],0),/* INLINE-ARGS */V94);
	V95= list(3,VV[11],(V87),base[4]);
	if(((V88))==Cnil){
	goto T102;}
	V96= list(3,VV[35],list(2,VV[36],(V88)),(V89));
	goto T100;
	goto T102;
T102:;
	V96= (V89);
	goto T100;
T100:;
	if((V88)==Cnil){
	V97= Cnil;
	goto T104;}
	V97= list(2,(V88),Ct);
	goto T104;
T104:;
	V98= list(2,(V86),(V87));
	V99= append(V97,/* INLINE-ARGS */V98);
	base[9]= list(3,VV[14],/* INLINE-ARGS */V95,list(3,VV[8],V96,make_cons(VV[11],/* INLINE-ARGS */V99)));
	vs_top=(vs_base=base+9)+1;
	return;}
}
/*	local entry for function LOOP-TEQUAL	*/

static object LI15(V102,V103)

object V102;object V103;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	if(type_of((V102))==t_symbol){
	goto T105;}
	{object V104 = Cnil;
	VMR14(V104)}
	goto T105;
T105:;
	base[0]= (V102);
	base[1]= (V103);
	vs_top=(vs_base=base+0)+2;
	Lstring_eq();
	vs_top=sup;
	{object V105 = vs_base[0];
	VMR14(V105)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-TASSOC	*/

static object LI16(V108,V109)

object V108;object V109;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(type_of((V108))==t_symbol){
	goto T109;}
	{object V110 = Cnil;
	VMR15(V110)}
	goto T109;
T109:;
	base[0]= (V108);
	base[1]= (V109);
	base[2]= VV[20];
	base[3]= (VV[339]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	Lassoc();
	vs_top=sup;
	{object V111 = vs_base[0];
	VMR15(V111)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-TMEMBER	*/

static object LI17(V114,V115)

object V114;object V115;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	if(type_of((V114))==t_symbol){
	goto T115;}
	{object V116 = Cnil;
	VMR16(V116)}
	goto T115;
T115:;
	base[0]= (V114);
	base[1]= (V115);
	base[2]= VV[20];
	base[3]= (VV[339]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	Lmember();
	vs_top=sup;
	{object V117 = vs_base[0];
	VMR16(V117)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-LOOKUP-KEYWORD	*/

static object LI18(V120,V121)

object V120;object V121;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if(type_of((V120))==t_symbol){
	goto T121;}
	{object V122 = Cnil;
	VMR17(V122)}
	goto T121;
T121:;
	base[1]= symbol_name((V120));
	base[2]= (V121);
	vs_top=(vs_base=base+1)+2;
	Lgethash();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	vs_top=sup;
	{object V123 = vs_base[0];
	VMR17(V123)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for LOOP-STORE-TABLE-DATA	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	vs_top=sup;
	{object V124=base[0]->c.c_cdr;
	base[2]= (V124->c.c_car);
	V124=V124->c.c_cdr;
	base[3]= (V124->c.c_car);
	V124=V124->c.c_cdr;
	base[4]= (V124->c.c_car);}
	base[5]= list(3,VV[9],list(3,VV[37],list(2,VV[38],base[2]),base[3]),base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function MAKE-LOOP-UNIVERSE	*/

static object LI20(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB19 VMS19 VMV19
	{object V125;
	object V126;
	object V127;
	object V128;
	object V129;
	object V130;
	object V131;
	object V132;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI20key,first,ap);
	V125=(Vcs[0]);
	V126=(Vcs[1]);
	V127=(Vcs[2]);
	V128=(Vcs[3]);
	V129=(Vcs[4]);
	V130=(Vcs[5]);
	V131=(Vcs[6]);
	V132=(Vcs[7]);
	base[0]= VV[39];
	base[1]= (V125);
	base[2]= (V126);
	base[3]= (V127);
	base[4]= (V128);
	base[5]= (V129);
	base[6]= (V130);
	base[7]= (V131);
	base[8]= (V132);
	vs_top=(vs_base=base+0)+9;
	siLmake_structure();
	vs_top=sup;
	{object V133 = vs_base[0];
	VMR19(V133)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function PRINT-LOOP-UNIVERSE	*/

static object LI21(V137,V138,V139)

object V137;object V138;object V139;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V140;
	{object V141= STREF(object,(V137),24);
	if((V141!= Cnil))goto T136;
	V140= VV[40];
	goto T135;
	goto T136;
T136:;
	if((V141!= Ct))goto T137;
	V140= VV[41];
	goto T135;
	goto T137;
T137:;
	if((V141!= VV[314]))goto T138;
	V140= VV[42];
	goto T135;
	goto T138;
T138:;
	V140= STREF(object,(V137),24);}
	goto T135;
T135:;
	base[0]= (V138);
	base[1]= VV[43];
	base[3]= (V137);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V140);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V142 = vs_base[0];
	VMR20(V142)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-STANDARD-LOOP-UNIVERSE	*/

static object LI22(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB21 VMS21 VMV21
	bds_check;
	{object V143;
	object V144;
	object V145;
	object V146;
	object V147;
	object V148;
	register object V149;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI22key,first,ap);
	V143=(Vcs[0]);
	V144=(Vcs[1]);
	V145=(Vcs[2]);
	V146=(Vcs[3]);
	V147=(Vcs[4]);
	V148=(Vcs[5]);
	V149=(Vcs[6]);
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
	goto T146;
T146:;
	base[2]= (V149);
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
	base[5]= (V149);
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
	V149= vs_base[0];
	base[2]= (VV[50]->s.s_dbind);
	base[3]= VV[52];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	goto T146;
	goto T144;
T144:;
	base[0]= (V143);
	vs_top=(vs_base=base+0)+1;
	L23(base);
	vs_top=sup;
	V150= vs_base[0];
	base[0]= (V144);
	vs_top=(vs_base=base+0)+1;
	L23(base);
	vs_top=sup;
	V151= vs_base[0];
	base[0]= (V145);
	vs_top=(vs_base=base+0)+1;
	L23(base);
	vs_top=sup;
	V152= vs_base[0];
	base[0]= (V146);
	vs_top=(vs_base=base+0)+1;
	L23(base);
	vs_top=sup;
	V153= vs_base[0];
	V154 = (V149);
	V155= (((((V149))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	base[0]= (V147);
	vs_top=(vs_base=base+0)+1;
	L23(base);
	vs_top=sup;
	V156= vs_base[0];
	{object V158;
	object V159;
	V158= CMPmake_fixnum((long)length((V148)));
	base[2]= VV[61];
	if(!(number_compare((V158),small_fixnum(10))<0)){
	goto T188;}
	base[3]= small_fixnum(10);
	goto T186;
	goto T188;
T188:;
	base[3]= (V158);
	goto T186;
T186:;
	base[4]= VV[20];
	base[5]= (VV[342]->s.s_gfdef);
	vs_top=(vs_base=base+2)+4;
	Lmake_hash_table();
	vs_top=sup;
	V159= vs_base[0];
	{register object V160;
	register object V161;
	V160= (V148);
	V161= CMPcar((V160));
	goto T196;
T196:;
	if(!(((V160))==Cnil)){
	goto T197;}
	goto T192;
	goto T197;
T197:;
	if(!(type_of((V161))!=t_cons)){
	goto T203;}
	base[3]= V161;
	base[4]= V159;
	base[5]= V161;
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;
	goto T201;
	goto T203;
T203:;
	{object V165;
	object V167;
	V165= CMPcar((V161));
	V167= CMPcadr((V161));
	base[5]= (V165);
	base[6]= V159;
	base[7]= (V167);
	vs_top=(vs_base=base+5)+3;
	siLhash_set();
	vs_top=sup;}
	goto T201;
T201:;
	V160= CMPcdr((V160));
	V161= CMPcar((V160));
	goto T196;}
	goto T192;
T192:;
	V157= (V159);}
	{object V168 = (VFUN_NARGS=16,(*(LnkLI341))(VV[53],V150,VV[54],V151,VV[55],V152,VV[56],V153,VV[57],V154,VV[58],/* INLINE-ARGS */V155,VV[59],V156,VV[60],V157));
	VMR21(V168)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function LOOP-MAKE-PSETQ	*/

static object LI24(V170)

register object V170;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	if((V170)==Cnil){
	{object V171 = Cnil;
	VMR22(V171)}}
	V172= CMPcar((V170));
	if((CMPcddr((V170)))!=Cnil){
	goto T220;}
	V173= CMPcadr((V170));
	goto T218;
	goto T220;
T220:;
	V174= CMPcadr((V170));
	V173= list(3,VV[62],/* INLINE-ARGS */V174,(*(LnkLI344))(CMPcddr((V170))));
	goto T218;
T218:;
	V175= list(2,/* INLINE-ARGS */V172,V173);
	{object V176 = (*(LnkLI343))(/* INLINE-ARGS */V175);
	VMR22(V176)}
	return Cnil;
}
/*	local entry for function LOOP-MAKE-DESETQ	*/

static object LI25(V178)

object V178;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	if(((V178))!=Cnil){
	goto T223;}
	{object V179 = Cnil;
	VMR23(V179)}
	goto T223;
T223:;
	if(((VV[63]->s.s_dbind))==Cnil){
	goto T227;}
	V180= CMPcadr((VV[63]->s.s_dbind));
	goto T225;
	goto T227;
T227:;
	V180= VV[64];
	goto T225;
T225:;
	V181 = (V178);
	{object V182 = make_cons(V180,V181);
	VMR23(V182)}
	return Cnil;
}
/*	macro definition for LOOP-REALLY-DESETQ	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	vs_top=sup;
	{object V183=base[0]->c.c_cdr;
	base[2]= V183;}
	{register object V184;
	V184= Cnil;
	goto T230;
T230:;
	if((base[2])!=Cnil){
	goto T231;}
	if((CMPcdr((V184)))!=Cnil){
	goto T235;}
	base[3]= CMPcar((V184));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T235;
T235:;
	V185= nreverse((V184));
	base[3]= make_cons(VV[14],/* INLINE-ARGS */V185);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T231;
T231:;
	{register object V186;
	V186= CMPcar(base[2]);
	base[2]= CMPcdr(base[2]);
	base[4]= (V186);}
	{register object V187;
	V187= CMPcar(base[2]);
	base[2]= CMPcdr(base[2]);
	base[5]= (V187);}
	vs_top=(vs_base=base+4)+2;
	L28(base);
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V184);
	vs_top=(vs_base=base+3)+2;
	Lrevappend();
	vs_top=sup;
	V184= vs_base[0];
	goto T230;}
}
/*	function definition for LOOP-CONSTANT-FOLD-IF-POSSIBLE	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	{object V188;
	object V189;
	V188=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T252;}
	V189=(base[1]);
	vs_top=sup;
	goto T253;
	goto T252;
T252:;
	V189= Cnil;
	goto T253;
T253:;
	{register object V191;
	register object V192;
	V191= Cnil;
	V192= Cnil;
	base[2]= V188;
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	V191= vs_base[0];
	if(((V191))==Cnil){
	goto T255;}
	base[2]= V188;
	vs_top=(vs_base=base+2)+1;
	Leval();
	vs_top=sup;
	V192= vs_base[0];
	goto T255;
T255:;
	if(((V191))==Cnil){
	goto T262;}
	if(((V189))==Cnil){
	goto T262;}
	base[2]= (V192);
	base[3]= (V189);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk340)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T262;}
	(void)((VFUN_NARGS=4,(*(LnkLI345))(VV[67],(V188),(V192),(V189))));
	V191= Cnil;
	V192= Cnil;
	goto T262;
T262:;
	base[2]= V188;
	base[3]= (V191);
	base[4]= (V192);
	vs_top=(vs_base=base+2)+3;
	return;}
	}
}
/*	local entry for function LOOP-CONSTANTP	*/

static object LI30(V194)

object V194;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	base[0]= (V194);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	{object V195 = vs_base[0];
	VMR26(V195)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-CODE-DUPLICATION-THRESHOLD	*/

static object LI31(V197)

object V197;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V198;
	object V199;
	base[0]= (V197);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk346)();
	if(vs_base>=vs_top){vs_top=sup;goto T281;}
	V198= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T282;}
	V199= vs_base[0];
	vs_top=sup;
	goto T283;
	goto T281;
T281:;
	V198= Cnil;
	goto T282;
T282:;
	V199= Cnil;
	goto T283;
T283:;
	V200= number_minus((V198),(V199));
	V201= number_times(/* INLINE-ARGS */V200,small_fixnum(10));
	{object V202 = number_plus(small_fixnum(40),/* INLINE-ARGS */V201);
	VMR27(V202)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for LOOP-BODY	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	vs_top=sup;
	{object V203=base[0]->c.c_cdr;
	base[2]= (V203->c.c_car);
	V203=V203->c.c_cdr;
	base[3]= (V203->c.c_car);
	V203=V203->c.c_cdr;
	base[4]= (V203->c.c_car);
	V203=V203->c.c_cdr;
	base[5]= (V203->c.c_car);
	V203=V203->c.c_cdr;
	base[6]= (V203->c.c_car);
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
	{register long V204;
	V204= fix((*(LnkLI347))(base[1]));
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
	{register object V205;
	{register object V206;
	V206= CMPcar(base[7]);
	base[7]= CMPcdr(base[7]);
	V205= (V206);}
	base[4]= make_cons((V205),base[4]);}
	{register object V207;
	V207= CMPcar(base[8]);
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
	{register object V208;
	register object V209;
	register object V210;
	register object V211;
	register object V212;
	V208= base[7];
	V209= base[8];
	V210= Cnil;
	V211= small_fixnum(0);
	V212= Cnil;
	goto T331;
T331:;
	if(((V208))!=Cnil){
	goto T332;}
	vs_base=vs_top;
	L35(base);
	return;
	goto T332;
T332:;
	if(equal(CMPcar((V208)),CMPcar((V209)))){
	goto T338;}
	V210= (V208);
	V211= small_fixnum(0);
	goto T336;
	goto T338;
T338:;
	base[10]= CMPcar((V208));
	base[11]= base[1];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	V212= vs_base[0];
	if(((V212))==Cnil){
	goto T343;}
	V211= number_plus((V211),(V212));
	V213 = (V211);
	V214 = CMPmake_fixnum(V204);
	if(!(number_compare(V213,V214)>0)){
	goto T336;}
	goto T343;
T343:;
	{register object V215;
	register object V216;
	V215= Cnil;
	V216= Cnil;
	goto T354;
T354:;
	{register object V217;
	{register object V218;
	V218= CMPcar(base[7]);
	base[7]= CMPcdr(base[7]);
	V217= (V218);}
	V216= make_cons((V217),(V216));}
	{register object V219;
	{register object V220;
	V220= CMPcar(base[8]);
	base[8]= CMPcdr(base[8]);
	V219= (V220);}
	V215= make_cons((V219),(V215));}
	if(!((base[7])==(CMPcdr((V210))))){
	goto T369;}
	goto T352;
	goto T369;
T369:;
	goto T354;
	goto T352;
T352:;
	if((base[9])!=Cnil){
	goto T374;}
	{register object V221;
	base[9]= (VV[70]->s.s_dbind);
	V222 = base[9];
	V221= list(3,VV[11],V222,Ct);
	V216= make_cons((V221),(V216));}
	goto T374;
T374:;
	{register object V223;
	V224 = base[9];
	base[12]= (V215);
	vs_top=(vs_base=base+12)+1;
	L33(base);
	vs_top=sup;
	base[11]= vs_base[0];
	vs_top=(vs_base=base+11)+1;
	L34(base);
	vs_top=sup;
	V225= vs_base[0];
	base[12]= (V216);
	vs_top=(vs_base=base+12)+1;
	L33(base);
	vs_top=sup;
	base[11]= vs_base[0];
	vs_top=(vs_base=base+11)+1;
	L34(base);
	vs_top=sup;
	V226= vs_base[0];
	V223= list(4,VV[71],V224,V225,V226);
	base[4]= make_cons((V223),base[4]);}}
	goto T390;
T390:;
	{register object V227;
	V227= CMPcar(base[8]);
	base[8]= CMPcdr(base[8]);}
	{register object V228;
	{register object V229;
	V229= CMPcar(base[7]);
	base[7]= CMPcdr(base[7]);
	V228= (V229);}
	base[4]= make_cons((V228),base[4]);}
	if(!((base[7])==(CMPcdr((V208))))){
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
	V208= CMPcdr((V208));
	V209= CMPcdr((V209));
	goto T331;}
	goto T329;
T329:;
	goto T302;}
}
/*	local entry for function DUPLICATABLE-CODE-P	*/

static object LI36(V232,V233)

object V232;object V233;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	if(((V232))!=Cnil){
	goto T415;}
	{long V234 = 0;
	VMR29((object)V234)}
	goto T415;
T415:;
	{long V235;
	base[0]= (V232);
	base[1]= (V233);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	V235= fix(vs_base[0]);
	{long V236 = V235;
	VMR29((object)V236)}}
	base[0]=base[0];
}
/*	local entry for function DESTRUCTURING-SIZE	*/

static object LI37(V238)

object V238;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{register object V239;
	register object V240;
	V239= (V238);
	V240= small_fixnum(0);
	goto T421;
T421:;
	if(!(type_of((V239))!=t_cons)){
	goto T422;}
	V241 = (V240);
	if(((V239))!=Cnil){
	goto T427;}
	V242= small_fixnum(0);
	goto T425;
	goto T427;
T427:;
	V242= small_fixnum(1);
	goto T425;
T425:;
	{object V243 = number_plus(V241,V242);
	VMR30(V243)}
	goto T422;
T422:;
	{object V244;
	V244= CMPcdr((V239));
	V245= (*(LnkLI348))(CMPcar((V239)));
	V246 = (V240);
	V240= number_plus(/* INLINE-ARGS */V245,V246);
	V239= (V244);}
	goto T421;}
	return Cnil;
}
/*	function definition for ESTIMATE-CODE-SIZE	*/

static void L38()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM31; VC31
	vs_check;
	{VOL object V247;
	VOL object V248;
	V247=(base[0]);
	V248=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	frs_push(FRS_CATCH,VV[77]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	base[2]= (V247);
	base[3]= (V248);
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
	{object V249;
	V249=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V249);
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
	if(!(type_of((V249))==t_symbol)){
	goto T442;}
	{object V250;
	object V251;
	base[2]= (V249);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	Lmacroexpand_1();
	if(vs_base>=vs_top){vs_top=sup;goto T447;}
	V250= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T448;}
	V251= vs_base[0];
	vs_top=sup;
	goto T449;
	goto T447;
T447:;
	V250= Cnil;
	goto T448;
T448:;
	V251= Cnil;
	goto T449;
T449:;
	if(((V251))==Cnil){
	goto T451;}
	V249= (V250);
	goto TTL;
	goto T451;
T451:;
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T442;
T442:;
	if(!(type_of((V249))!=t_cons)){
	goto T457;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T457;
T457:;
	if(!(type_of(CMPcar((V249)))==t_symbol)){
	goto T460;}
	{object V252;
	object V253;
	register long V254;
	V252= CMPcar((V249));
	V254= 0;
	V253= Cnil;
	{object V255 =((V252))->s.s_plist;
	 object ind= VV[77];
	while(V255!=Cnil){
	if(V255->c.c_car==ind){
	V253= (V255->c.c_cdr->c.c_car);
	goto T467;
	}else V255=V255->c.c_cdr->c.c_cdr;}
	V253= Cnil;}
	goto T467;
T467:;
	if(((V253))==Cnil){
	goto T465;}
	if(!(type_of(V253)==t_fixnum)){
	goto T469;}
	V257 = fix((V253));
	base[2]= CMPcdr((V249));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V258= fix(vs_base[0]);
	base[2]= CMPmake_fixnum((long)(V257)+(V258));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T469;
T469:;
	base[2]= (V249);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	super_funcall_no_event((V253));
	return;
	goto T465;
T465:;
	{register object x= (V252),V259= (VV[78]->s.s_dbind);
	while(V259!=Cnil)
	if(eql(x,V259->c.c_car->c.c_car) &&V259->c.c_car != Cnil){
	V253= (V259->c.c_car);
	goto T478;
	}else V259=V259->c.c_cdr;
	V253= Cnil;}
	goto T478;
T478:;
	if(((V253))==Cnil){
	goto T476;}
	{long V260= fix(CMPcadr((V253)));
	base[2]= CMPcdr((V249));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V261= fix(vs_base[0]);
	base[2]= CMPmake_fixnum((long)(/* INLINE-ARGS */V260)+(V261));
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T476;
T476:;
	if(!(((V252))==(VV[79]))){
	goto T482;}
	{register object V262;
	object V263;
	V262= CMPcdr((V249));
	V263= CMPcar((V262));
	goto T487;
T487:;
	if(!(((V262))==Cnil)){
	goto T488;}
	base[4]= CMPmake_fixnum(V254);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T488;
T488:;
	V264 = CMPmake_fixnum(V254);
	base[4]= (V263);
	vs_top=(vs_base=base+4)+1;
	L40(base);
	vs_top=sup;
	V265= vs_base[0];
	V254= fix(number_plus(V264,V265));
	V254= (long)(V254)+(1);
	V262= CMPcdr((V262));
	V263= CMPcar((V262));
	goto T487;}
	goto T482;
T482:;
	if(!(((V252))==(VV[80]))){
	goto T504;}
	{register object V266;
	V266= CMPcdr((V249));
	goto T508;
T508:;
	if(((V266))!=Cnil){
	goto T509;}
	base[2]= CMPmake_fixnum(V254);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T509;
T509:;
	base[2]= CMPmake_fixnum(V254);
	base[3]= (*(LnkLI348))(CMPcar((V266)));
	base[5]= CMPcadr((V266));
	base[6]= base[1];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+2)+3;
	Lplus();
	vs_top=sup;
	V254= fix(vs_base[0]);
	V266= CMPcdr((V266));
	goto T508;}
	goto T504;
T504:;
	{register object x= (V252),V267= VV[81];
	while(V267!=Cnil)
	if(eql(x,V267->c.c_car)){
	goto T525;
	}else V267=V267->c.c_cdr;
	goto T524;}
	goto T525;
T525:;
	{register object V268;
	V268= CMPcdr((V249));
	goto T528;
T528:;
	if(((V268))!=Cnil){
	goto T529;}
	base[2]= CMPmake_fixnum(V254);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T529;
T529:;
	base[2]= CMPmake_fixnum(V254);
	base[4]= CMPcadr((V268));
	base[5]= base[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+2)+3;
	Lplus();
	vs_top=sup;
	V254= fix(vs_base[0]);
	V268= CMPcdr((V268));
	goto T528;}
	goto T524;
T524:;
	if(!(((V252))==(VV[82]))){
	goto T544;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T544;
T544:;
	if(!(((V252))==(VV[83]))){
	goto T547;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T547;
T547:;
	if(!(((V252))==(VV[84]))){
	goto T550;}
	{long V269= (long)length(CMPcadr((V249)));
	base[2]= CMPcddr((V249));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V270= fix(vs_base[0]);
	base[2]= CMPmake_fixnum((long)(/* INLINE-ARGS */V269)+(V270));
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T550;
T550:;
	if(!(((V252))==(VV[85]))){
	goto T555;}
	base[2]= CMPcaddr((V249));
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	V271= vs_base[0];
	base[2]= one_plus(V271);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T555;
T555:;
	base[2]= (V252);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk350)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T560;}
	{register object x= (V252),V272= (VV[86]->s.s_dbind);
	while(V272!=Cnil)
	if(eql(x,V272->c.c_car)){
	goto T565;
	}else V272=V272->c.c_cdr;
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
	{object V273;
	object V274;
	base[2]= (V249);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	Lmacroexpand_1();
	if(vs_base>=vs_top){vs_top=sup;goto T570;}
	V273= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T571;}
	V274= vs_base[0];
	vs_top=sup;
	goto T572;
	goto T570;
T570:;
	V273= Cnil;
	goto T571;
T571:;
	V274= Cnil;
	goto T572;
T572:;
	if(((V274))==Cnil){
	goto T574;}
	V249= (V273);
	goto TTL;
	goto T574;
T574:;
	base[2]= CMPcdr((V249));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V275= fix(vs_base[0]);
	base[2]= CMPmake_fixnum((long)(3)+(V275));
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
	{register object V276;
	register object V277;
	V276= (VV[87]->s.s_dbind);
	V277= Cnil;
	goto T583;
T583:;
	if(!(((V276))==(CMPcdr((VV[88]->s.s_dbind))))){
	goto T584;}
	{object V278 = nreverse((V277));
	VMR33(V278)}
	goto T584;
T584:;
	{object V279;
	V279= CMPcdr((V276));
	V277= make_cons(CMPcar((V276)),(V277));
	V276= (V279);}
	goto T583;}
	return Cnil;
}
/*	function definition for LOOP-ERROR	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	{object V280;
	object V281;
	V280=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V281=(base[1]);
	vs_top=sup;
	base[2]= VV[89];
	base[3]= VV[90];
	base[4]= (V280);
	base[5]= (V281);
	base[6]= (*(LnkLI351))();
	vs_top=(vs_base=base+2)+5;
	(void) (*Lnk352)();
	return;
	}
}
/*	local entry for function LOOP-WARN	*/

static object LI43(object V282,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB35 VMS35 VMV35
	{object V283;
	object V284;
	va_start(ap,first);
	V283= V282;
	narg= narg - 1;
	V285 = list_vector_new(narg,first,ap);
	V284= V285;
	base[0]= VV[91];
	base[1]= (V283);
	base[2]= (V284);
	base[3]= (*(LnkLI351))();
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk353)();
	vs_top=sup;
	{object V286 = vs_base[0];
	VMR35(V286)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LOOP-CHECK-DATA-TYPE	*/

static object LI44(object V288,object V287,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB36 VMS36 VMV36
	{register object V289;
	register object V290;
	object V291;
	va_start(ap,first);
	V289= V288;
	V290= V287;
	narg = narg - 2;
	if (narg <= 0) goto T601;
	else {
	V291= first;}
	--narg; goto T602;
	goto T601;
T601:;
	V291= (V290);
	goto T602;
T602:;
	if(((V289))!=Cnil){
	goto T605;}
	{object V292 = (V291);
	VMR36(V292)}
	goto T605;
T605:;
	{object V293;
	object V294;
	base[0]= (V289);
	base[1]= (V290);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk333)();
	if(vs_base>=vs_top){vs_top=sup;goto T610;}
	V293= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T611;}
	V294= vs_base[0];
	vs_top=sup;
	goto T612;
	goto T610;
T610:;
	V293= Cnil;
	goto T611;
T611:;
	V294= Cnil;
	goto T612;
T612:;
	if(((V294))!=Cnil){
	goto T615;}
	(void)((VFUN_NARGS=3,(*(LnkLI345))(VV[92],(V289),(V290))));
	goto T613;
	goto T615;
T615:;
	if(((V293))!=Cnil){
	goto T613;}
	base[0]= VV[93];
	base[1]= (V289);
	base[2]= (V290);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T613;
T613:;
	{object V295 = (V289);
	VMR36(V295)}}
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

static object LI46(V298)

register object V298;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	if(((V298))!=Cnil){
	goto T623;}
	{object V300;
	V300= (VFUN_NARGS=0,(*(LnkLI335))());
	(VV[95]->s.s_dbind)= make_cons((V300),(VV[95]->s.s_dbind));
	V299= (VV[95]->s.s_dbind);}
	{object V301 = CMPcar(V299);
	VMR38(V301)}
	goto T623;
T623:;
	if(!(type_of((V298))!=t_cons)){
	goto T629;}
	{object V302 = (V298);
	VMR38(V302)}
	goto T629;
T629:;
	V303= (*(LnkLI355))(CMPcar((V298)));
	V304= (*(LnkLI355))(CMPcdr((V298)));
	{object V305 = make_cons(/* INLINE-ARGS */V303,/* INLINE-ARGS */V304);
	VMR38(V305)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-BUILD-DESTRUCTURING-BINDINGS	*/

static object LI47(V308,V309)

register object V308;object V309;
{	 VMB39 VMS39 VMV39
	bds_check;
	goto TTL;
TTL:;
	if(((V308))==Cnil){
	goto T632;}
	bds_bind(VV[95],Cnil);
	V310= (*(LnkLI355))(CMPcar((V308)));
	V311= CMPcadr((V308));
	V312= list(2,VV[30],make_cons(VV[97],(VV[95]->s.s_dbind)));
	V313= listA(5,VV[96],/* INLINE-ARGS */V310,/* INLINE-ARGS */V311,/* INLINE-ARGS */V312,(*(LnkLI356))(CMPcddr((V308)),(V309)));
	{object V314 = make_cons(/* INLINE-ARGS */V313,Cnil);
	bds_unwind1;
	VMR39(V314)}
	goto T632;
T632:;
	{object V315 = (V309);
	VMR39(V315)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-TRANSLATE	*/

static object LI48(V319,V320,V321)

object V319;object V320;object V321;
{	 VMB40 VMS40 VMV40
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[99],V321);
	bds_bind(VV[98],V320);
	bds_bind(VV[88],V319);
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
	{register object V322;
	V323= nreverse((VV[108]->s.s_dbind));
	V324= nreverse((VV[110]->s.s_dbind));
	V325= nreverse((VV[111]->s.s_dbind));
	V326= nreverse((VV[113]->s.s_dbind));
	base[23]= (VV[114]->s.s_dbind);
	base[24]= nreverse((VV[115]->s.s_dbind));
	vs_top=(vs_base=base+23)+2;
	Lreconc();
	vs_top=sup;
	V327= vs_base[0];
	V322= list(6,VV[122],/* INLINE-ARGS */V323,/* INLINE-ARGS */V324,/* INLINE-ARGS */V325,/* INLINE-ARGS */V326,V327);
	{register object V328;
	register object V329;
	V328= (VV[107]->s.s_dbind);
	V329= CMPcar((V328));
	goto T644;
T644:;
	if(!(((V328))==Cnil)){
	goto T645;}
	goto T640;
	goto T645;
T645:;
	{object V330;
	object V331;
	object V332;
	object V333;
	V330= CMPcar((V329));
	V331= CMPcadr((V329));
	V332= CMPcaddr((V329));
	V333= CMPcadddr((V329));
	{register object V334;
	register object V335;
	V334= (V333);
	V335= CMPcar((V334));
	goto T658;
T658:;
	if(!(((V334))==Cnil)){
	goto T659;}
	goto T654;
	goto T659;
T659:;
	V336= make_cons((V322),Cnil);
	V322= append((V335),/* INLINE-ARGS */V336);
	V334= CMPcdr((V334));
	V335= CMPcar((V334));
	goto T658;}
	goto T654;
T654:;
	if(((V330))!=Cnil){
	goto T670;}
	if(((V331))!=Cnil){
	goto T670;}
	if(((V332))==Cnil){
	goto T649;}
	goto T670;
T670:;
	{object V337;
	V337= make_cons((V322),Cnil);
	if(((V331))==Cnil){
	goto T677;}
	{object V338;
	V338= make_cons(VV[30],(V331));
	V337= make_cons((V338),(V337));}
	goto T677;
T677:;
	if(((V330))!=Cnil){
	goto T685;}
	V339= VV[123];
	goto T683;
	goto T685;
T685:;
	if(((VV[63]->s.s_dbind))==Cnil){
	goto T688;}
	V339= CMPcar((VV[63]->s.s_dbind));
	goto T683;
	goto T688;
T688:;
	V339= VV[29];
	goto T683;
T683:;
	V340 = (V330);
	V322= listA(3,V339,V340,(*(LnkLI356))((V332),(V337)));}}
	goto T649;
T649:;
	V328= CMPcdr((V328));
	V329= CMPcar((V328));
	goto T644;}
	goto T640;
T640:;
	if(((VV[120]->s.s_dbind))==Cnil){
	goto T696;}
	goto T699;
T699:;
	if((CMPcar((VV[120]->s.s_dbind)))!=Cnil){
	goto T700;}
	{object V341 = (V322);
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
	VMR40(V341)}
	goto T700;
T700:;
	{object V343;
	V343= CMPcar((VV[120]->s.s_dbind));
	(VV[120]->s.s_dbind)= CMPcdr((VV[120]->s.s_dbind));
	V342= (V343);}
	V344 = (V322);
	V322= list(3,VV[124],V342,V344);
	goto T699;
	goto T696;
T696:;
	{object V345 = list(3,VV[124],Cnil,(V322));
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
	VMR40(V345)}}
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
	{object V346 = Cnil;
	VMR41(V346)}
	goto T714;
T714:;
	{register object V347;
	register object V348;
	V347= CMPcar((VV[88]->s.s_dbind));
	V348= Cnil;
	if(type_of((V347))==t_symbol){
	goto T721;}
	base[0]= VV[125];
	base[1]= (V347);
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
	V348= (*(LnkLI360))((V347),STREF(object,(VV[99]->s.s_dbind),0));
	if(((V348))==Cnil){
	goto T729;}
	base[1]= CMPcar((V348));
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	base[0]= vs_base[0];
	{object V349;
	V349= CMPcdr((V348));
	 vs_top=base+1;
	 while(V349!=Cnil)
	 {vs_push((V349)->c.c_car);V349=(V349)->c.c_cdr;}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	goto T718;
	goto T729;
T729:;
	V348= (*(LnkLI360))((V347),STREF(object,(VV[99]->s.s_dbind),4));
	if(((V348))==Cnil){
	goto T736;}
	(void)((*(LnkLI361))((V348)));
	goto T718;
	goto T736;
T736:;
	if(((*(LnkLI362))((V347),VV[126]))==Cnil){
	goto T740;}
	base[0]= VV[127];
	base[1]= (V347);
	base[2]= CMPcar((VV[88]->s.s_dbind));
	base[3]= CMPcadr((VV[88]->s.s_dbind));
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T718;
	goto T740;
T740:;
	base[0]= VV[128];
	base[1]= (V347);
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
	{object V350;
	V350= CMPcar((VV[88]->s.s_dbind));
	(VV[88]->s.s_dbind)= CMPcdr((VV[88]->s.s_dbind));
	base[0]= (V350);
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
	{object V351;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V351= vs_base[0];
	if(type_of((V351))==t_cons){
	goto T758;}
	base[0]= VV[130];
	base[1]= (V351);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T758;
T758:;
	{object V352 = (V351);
	VMR43(V352)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-GET-PROGN	*/

static object LI52()

{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	{register object V353;
	register object V354;
	V355= (*(LnkLI364))();
	V353= make_cons(/* INLINE-ARGS */V355,Cnil);
	V354= CMPcar((VV[88]->s.s_dbind));
	goto T766;
T766:;
	if(!(type_of((V354))!=t_cons)){
	goto T767;}
	if((CMPcdr((V353)))!=Cnil){
	goto T771;}
	{object V356 = CMPcar((V353));
	VMR44(V356)}
	goto T771;
T771:;
	V357= nreverse((V353));
	{object V358 = make_cons(VV[14],/* INLINE-ARGS */V357);
	VMR44(V358)}
	goto T767;
T767:;
	V359= (*(LnkLI364))();
	V360 = (V353);
	V353= make_cons(/* INLINE-ARGS */V359,V360);
	V354= CMPcar((VV[88]->s.s_dbind));
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

static object LI54(V362)

object V362;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{object V363 = list(3,VV[85],CMPcar((VV[120]->s.s_dbind)),(V362));
	VMR46(V363)}
	return Cnil;
}
/*	local entry for function LOOP-PSEUDO-BODY	*/

static object LI55(V365)

object V365;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	if(((VV[112]->s.s_dbind))!=Cnil){
	goto T782;}
	if(((VV[117]->s.s_dbind))==Cnil){
	goto T783;}
	goto T782;
T782:;
	(VV[111]->s.s_dbind)= make_cons(V365,(VV[111]->s.s_dbind));
	{object V367 = (VV[111]->s.s_dbind);
	VMR47(V367)}
	goto T783;
T783:;
	(VV[110]->s.s_dbind)= make_cons(V365,(VV[110]->s.s_dbind));
	(VV[113]->s.s_dbind)= make_cons(V365,(VV[113]->s.s_dbind));
	{object V370 = (VV[113]->s.s_dbind);
	VMR47(V370)}
	return Cnil;
}
/*	local entry for function LOOP-EMIT-BODY	*/

static object LI56(V372)

object V372;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	(VV[112]->s.s_dbind)= Ct;
	{object V373 = (*(LnkLI365))((V372));
	VMR48(V373)}
	return Cnil;
}
/*	local entry for function LOOP-EMIT-FINAL-VALUE	*/

static object LI57(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB49 VMS49 VMV49
	{object V374;
	object V375;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T793;
	else {
	V374= first;}
	V375= Ct;
	--narg; goto T794;
	goto T793;
T793:;
	V374= Cnil;
	V375= Cnil;
	goto T794;
T794:;
	if(((V375))==Cnil){
	goto T796;}
	{object V376;
	V376= (*(LnkLI366))((V374));
	(VV[115]->s.s_dbind)= make_cons((V376),(VV[115]->s.s_dbind));}
	goto T796;
T796:;
	if(((VV[116]->s.s_dbind))==Cnil){
	goto T801;}
	(void)((VFUN_NARGS=2,(*(LnkLI345))(VV[132],(VV[116]->s.s_dbind))));
	goto T801;
T801:;
	(VV[116]->s.s_dbind)= CMPcar((VV[87]->s.s_dbind));
	{object V377 = (VV[116]->s.s_dbind);
	VMR49(V377)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for LOOP-DISALLOW-CONDITIONAL	*/

static void L58()
{register object *base=vs_base;
	register object *sup=base+VM50; VC50
	vs_check;
	{object V378;
	if(vs_base>=vs_top){vs_top=sup;goto T805;}
	V378=(base[0]);
	vs_top=sup;
	goto T806;
	goto T805;
T805:;
	V378= Cnil;
	goto T806;
T806:;
	if(((VV[117]->s.s_dbind))==Cnil){
	goto T809;}
	base[1]= VV[133];
	base[2]= (V378);
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

static object LI61(V380)

register object V380;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	if(((V380))==Cnil){
	goto T824;}
	base[0]= (V380);
	base[1]= VV[138];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk333)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T824;}
	base[0]= (V380);
	base[1]= VV[139];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk333)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T830;}
	base[0]= (V380);
	base[1]= VV[140];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk333)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T831;}
	goto T830;
T830:;
	base[0]= small_fixnum(0);
	base[1]= (V380);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk368)();
	vs_top=sup;
	{object V381 = vs_base[0];
	VMR53(V381)}
	goto T831;
T831:;
	{object V382 = small_fixnum(0);
	VMR53(V382)}
	goto T824;
T824:;
	{object V383 = Cnil;
	VMR53(V383)}
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
	{object V384;{object V385;
	base[2]= base[1];
	base[3]= STREF(object,(VV[99]->s.s_dbind),16);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V385= vs_base[0];
	if(V385==Cnil)goto T853;
	V384= V385;
	goto T852;
	goto T853;
T853:;}
	base[2]= symbol_name(base[1]);
	base[3]= STREF(object,(VV[99]->s.s_dbind),20);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V384= vs_base[0];
	goto T852;
T852:;
	if(((V384))==Cnil){
	goto T860;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	base[2]= (V384);
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
	{object V386;
	V387= nreverse((VV[102]->s.s_dbind));
	V388 = (VV[105]->s.s_dbind);
	V389 = (VV[106]->s.s_dbind);
	V390 = (VV[109]->s.s_dbind);
	V386= list(4,/* INLINE-ARGS */V387,V388,V389,V390);
	(VV[107]->s.s_dbind)= make_cons((V386),(VV[107]->s.s_dbind));}
	(VV[102]->s.s_dbind)= Cnil;
	(VV[105]->s.s_dbind)= Cnil;
	(VV[106]->s.s_dbind)= Cnil;
	(VV[109]->s.s_dbind)= Cnil;
	{object V391 = Cnil;
	VMR55(V391)}
	goto T877;
T877:;
	{object V392 = Cnil;
	VMR55(V392)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-VARIABLE-P	*/

static object LI66(V394)

register object V394;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{register object V395;
	V395= (VV[107]->s.s_dbind);
	goto T894;
T894:;
	if(((V395))!=Cnil){
	goto T899;}
	{object V396 = Cnil;
	VMR56(V396)}
	goto T899;
T899:;
	{register object x= (V394),V397= CMPcaar((V395));
	while(V397!=Cnil)
	if(EQ(x,V397->c.c_car->c.c_car) &&V397->c.c_car != Cnil){
	goto T902;
	}else V397=V397->c.c_cdr;
	goto T897;}
	goto T902;
T902:;
	{object V398 = Ct;
	VMR56(V398)}
	goto T897;
T897:;
	V395= CMPcdr((V395));
	goto T894;}
	return Cnil;
}
/*	local entry for function LOOP-MAKE-VARIABLE	*/

static object LI67(object V401,object V400,object V399,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB57 VMS57 VMV57
	{register object V402;
	register object V403;
	register object V404;
	object V405;
	va_start(ap,first);
	V402= V401;
	V403= V400;
	V404= V399;
	narg = narg - 3;
	if (narg <= 0) goto T906;
	else {
	V405= first;}
	--narg; goto T907;
	goto T906;
T906:;
	V405= Cnil;
	goto T907;
T907:;
	if(((V402))!=Cnil){
	goto T911;}
	if(((V403))==Cnil){
	goto T909;}
	{object V406;
	V402= (VFUN_NARGS=1,(*(LnkLI335))(VV[146]));
	V407 = (V402);
	V408 = (V403);
	V406= list(2,V407,V408);
	(VV[102]->s.s_dbind)= make_cons((V406),(VV[102]->s.s_dbind));}
	{object V409;
	V409= list(2,VV[97],(V402));
	(VV[105]->s.s_dbind)= make_cons((V409),(VV[105]->s.s_dbind));
	goto T909;}
	goto T911;
T911:;
	if(!(type_of((V402))!=t_cons)){
	goto T922;}
	if(((V405))==Cnil){
	goto T926;}
	{register object x= (V402),V410= (VV[101]->s.s_dbind);
	while(V410!=Cnil)
	if(eql(x,V410->c.c_car)){
	goto T930;
	}else V410=V410->c.c_cdr;
	goto T929;}
	goto T930;
T930:;
	base[0]= VV[147];
	base[1]= (V402);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T924;
	goto T929;
T929:;
	(VV[101]->s.s_dbind)= make_cons(V402,(VV[101]->s.s_dbind));
	goto T924;
	goto T926;
T926:;
	{register object x= (V402),V412= (VV[102]->s.s_dbind);
	while(V412!=Cnil)
	if(eql(x,V412->c.c_car->c.c_car) &&V412->c.c_car != Cnil){
	goto T935;
	}else V412=V412->c.c_cdr;
	goto T924;}
	goto T935;
T935:;
	base[0]= VV[148];
	base[1]= (V402);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T924;
T924:;
	if(type_of((V402))==t_symbol){
	goto T938;}
	base[0]= VV[149];
	base[1]= (V402);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T938;
T938:;
	(void)((*(LnkLI370))((V402),(V404)));
	{object V413;
	V414 = (V402);
	if((V403)!=Cnil){
	V415= (V403);
	goto T945;}
	V415= (*(LnkLI336))((V404));
	goto T945;
T945:;
	V413= list(2,V414,V415);
	(VV[102]->s.s_dbind)= make_cons((V413),(VV[102]->s.s_dbind));
	goto T909;}
	goto T922;
T922:;
	if(((V403))==Cnil){
	goto T948;}
	if(((VV[63]->s.s_dbind))==Cnil){
	goto T951;}
	(void)((*(LnkLI370))((V402),(V404)));
	{object V416;
	V416= list(2,(V402),(V403));
	(VV[102]->s.s_dbind)= make_cons((V416),(VV[102]->s.s_dbind));
	goto T909;}
	goto T951;
T951:;
	{object V417;
	V417= (VFUN_NARGS=1,(*(LnkLI335))(VV[150]));
	(void)((*(LnkLI370))((V402),(V404)));
	{object V418;
	V418= list(2,(V417),(V403));
	(VV[102]->s.s_dbind)= make_cons((V418),(VV[102]->s.s_dbind));}
	(VV[106]->s.s_dbind)= listA(3,(V402),(V417),(VV[106]->s.s_dbind));
	goto T909;}
	goto T948;
T948:;
	{object V419;
	object V420;
	V419= Cnil;
	V420= Cnil;
	if(!(type_of((V404))!=t_cons)){
	goto T964;}
	V420= (V404);
	V419= (V420);
	goto T962;
	goto T964;
T964:;
	V419= CMPcar((V404));
	V420= CMPcdr((V404));
	goto T962;
T962:;
	(void)((VFUN_NARGS=4,(*(LnkLI371))(CMPcar((V402)),Cnil,(V419),(V405))));
	(void)((VFUN_NARGS=4,(*(LnkLI371))(CMPcdr((V402)),Cnil,(V420),(V405))));}
	goto T909;
T909:;
	{object V421 = (V402);
	VMR57(V421)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LOOP-MAKE-ITERATION-VARIABLE	*/

static object LI68(V425,V426,V427)

object V425;object V426;object V427;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	{object V428 = (VFUN_NARGS=4,(*(LnkLI371))((V425),(V426),(V427),Ct));
	VMR58(V428)}
	return Cnil;
}
/*	local entry for function LOOP-DECLARE-VARIABLE	*/

static object LI69(V431,V432)

register object V431;register object V432;
{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	if(((V431))==Cnil){
	goto T972;}
	if(((V432))==Cnil){
	goto T972;}
	if(!(((V432))==(Ct))){
	goto T973;}
	goto T972;
T972:;
	{object V433 = Cnil;
	VMR59(V433)}
	goto T973;
T973:;
	if(!(type_of((V431))==t_symbol)){
	goto T980;}
	if(((V432))==(Ct)){
	goto T983;}
	{register object x= (V431),V434= (VV[103]->s.s_dbind);
	while(V434!=Cnil)
	if(eql(x,V434->c.c_car)){
	goto T983;
	}else V434=V434->c.c_cdr;}
	{object V436;
	V436= list(3,VV[31],V432,(V431));
	(VV[105]->s.s_dbind)= make_cons((V436),(VV[105]->s.s_dbind));
	{object V437 = (VV[105]->s.s_dbind);
	VMR59(V437)}}
	goto T983;
T983:;
	{object V438 = Cnil;
	VMR59(V438)}
	goto T980;
T980:;
	if(!(type_of((V431))==t_cons)){
	goto T990;}
	if(!(type_of((V432))==t_cons)){
	goto T993;}
	(void)((*(LnkLI370))(CMPcar((V431)),CMPcar((V432))));
	V431= CMPcdr((V431));
	V432= CMPcdr((V432));
	goto TTL;
	goto T993;
T993:;
	(void)((*(LnkLI370))(CMPcar((V431)),(V432)));
	V431= CMPcdr((V431));
	goto TTL;
	goto T990;
T990:;
	base[0]= VV[151];
	base[1]= (V431);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V439 = vs_base[0];
	VMR59(V439)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-MAYBE-BIND-FORM	*/

static object LI70(V442,V443)

object V442;object V443;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;
	if(((*(LnkLI372))((V442)))==Cnil){
	goto T1006;}
	{object V444 = (V442);
	VMR60(V444)}
	goto T1006;
T1006:;
	V445= (VFUN_NARGS=1,(*(LnkLI335))(VV[152]));
	V446 = (V442);
	V447 = (V443);
	{object V448 = (VFUN_NARGS=3,(*(LnkLI371))(/* INLINE-ARGS */V445,V446,V447));
	VMR60(V448)}
	return Cnil;
}
/*	local entry for function LOOP-DO-IF	*/

static object LI71(V451,V452)

object V451;object V452;
{	 VMB61 VMS61 VMV61
	bds_check;
	goto TTL;
TTL:;
	{object V453;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V453= vs_base[0];
	bds_bind(VV[117],Ct);
	base[1]= Cnil;
	base[2]= Ct;
	{object V454;
	object V455;
	base[3]= (V451);
	vs_top=(vs_base=base+3)+1;
	L72(base);
	vs_top=sup;
	V454= vs_base[0];
	if(((*(LnkLI369))(CMPcar((VV[88]->s.s_dbind)),VV[153]))==Cnil){
	goto T1013;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	base[3]= VV[153];
	vs_top=(vs_base=base+3)+1;
	L72(base);
	vs_top=sup;
	V456= vs_base[0];
	V455= make_cons(V456,Cnil);
	goto T1011;
	goto T1013;
T1013:;
	V455= Cnil;
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
	V453= list(3,VV[11],base[1],(V453));
	goto T1021;
T1021:;
	if(((V452))==Cnil){
	goto T1027;}
	V457= list(2,VV[36],(V453));
	goto T1025;
	goto T1027;
T1027:;
	V457= (V453);
	goto T1025;
T1025:;
	V458 = (V454);
	V459 = (V455);
	V460= listA(4,VV[71],V457,V458,V459);
	{object V461 = (*(LnkLI365))(/* INLINE-ARGS */V460);
	bds_unwind1;
	VMR61(V461)}}}
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
	{object V462;
	V462= (*(LnkLI374))();
	(VV[108]->s.s_dbind)= make_cons((V462),(VV[108]->s.s_dbind));
	{object V463 = (VV[108]->s.s_dbind);
	VMR62(V463)}}
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
	{object V464;
	V464= (*(LnkLI374))();
	(VV[114]->s.s_dbind)= make_cons((V464),(VV[114]->s.s_dbind));
	{object V465 = (VV[114]->s.s_dbind);
	VMR63(V465)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-DO-DO	*/

static object LI75()

{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	V466= (*(LnkLI374))();
	{object V467 = (*(LnkLI375))(/* INLINE-ARGS */V466);
	VMR64(V467)}
	return Cnil;
}
/*	local entry for function LOOP-DO-NAMED	*/

static object LI76()

{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	{register object V468;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V468= vs_base[0];
	if(type_of((V468))==t_symbol){
	goto T1038;}
	base[0]= VV[161];
	base[1]= (V468);
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
	base[1]= (V468);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1043;
T1043:;
	if(((VV[120]->s.s_dbind))==Cnil){
	goto T1054;}
	base[0]= VV[163];
	base[1]= CMPcar((VV[120]->s.s_dbind));
	base[2]= (V468);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1054;
T1054:;
	(VV[120]->s.s_dbind)= list(2,(V468),Cnil);
	{object V469 = (VV[120]->s.s_dbind);
	VMR65(V469)}}
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
	V470= vs_base[0];
	V471= (*(LnkLI366))(V470);
	{object V472 = (*(LnkLI365))(/* INLINE-ARGS */V471);
	VMR66(V472)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-LOOP-COLLECTOR	*/

static object LI78(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB67 VMS67 VMV67
	{object V473;
	object V474;
	object V475;
	object V476;
	object V477;
	object V478;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI78key,first,ap);
	V473=(Vcs[0]);
	V474=(Vcs[1]);
	V475=(Vcs[2]);
	V476=(Vcs[3]);
	V477=(Vcs[4]);
	V478=(Vcs[5]);
	base[0]= VV[164];
	base[1]= (V473);
	base[2]= (V474);
	base[3]= (V475);
	base[4]= (V476);
	base[5]= (V477);
	base[6]= (V478);
	vs_top=(vs_base=base+0)+7;
	siLmake_structure();
	vs_top=sup;
	{object V479 = vs_base[0];
	VMR67(V479)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for LOOP-GET-COLLECTION-INFO	*/

static void L79()
{register object *base=vs_base;
	register object *sup=base+VM68; VC68
	vs_check;
	{object V480;
	object V481;
	object V482;
	V480=(base[0]);
	V481=(base[1]);
	V482=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V483;
	register object V484;
	register object V485;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V483= vs_base[0];
	if((STREF(object,(VV[99]->s.s_dbind),24))==Cnil){
	goto T1071;}
	V484= Cnil;
	goto T1070;
	goto T1071;
T1071:;
	vs_base=vs_top;
	(void) (*Lnk378)();
	vs_top=sup;
	V484= vs_base[0];
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
	V485= vs_base[0];
	goto T1073;
	goto T1075;
T1075:;
	V485= Cnil;
	goto T1073;
T1073:;
	if(type_of((V485))==t_symbol){
	goto T1078;}
	base[3]= VV[166];
	base[4]= (V485);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1078;
T1078:;
	if(((V485))!=Cnil){
	goto T1083;}
	vs_base=vs_top;
	(void) (*Lnk379)();
	vs_top=sup;
	goto T1083;
T1083:;
	if(((V484))!=Cnil){
	goto T1086;}{object V486;
	vs_base=vs_top;
	(void) (*Lnk378)();
	vs_top=sup;
	V486= vs_base[0];
	if(V486==Cnil)goto T1090;
	V484= V486;
	goto T1089;
	goto T1090;
T1090:;}
	V484= (V482);
	goto T1089;
T1089:;
	goto T1086;
T1086:;
	{register object V487;
	base[3]= (V485);
	base[4]= (VV[121]->s.s_dbind);
	base[5]= VV[167];
	base[6]= (VV[134]->s.s_gfdef);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk380)();
	vs_top=sup;
	V487= vs_base[0];
	if(((V487))!=Cnil){
	goto T1099;}
	if(((V485))==Cnil){
	goto T1101;}
	if(((*(LnkLI381))((V485)))==Cnil){
	goto T1101;}
	base[3]= VV[168];
	base[4]= (V485);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1101;
T1101:;
	{object V488;
	V489= make_cons((V480),Cnil);
	V487= (VFUN_NARGS=8,(*(LnkLI382))(VV[169],(V485),VV[170],(V481),VV[171],/* INLINE-ARGS */V489,VV[172],(V484)));
	V488= (V487);
	(VV[121]->s.s_dbind)= make_cons((V488),(VV[121]->s.s_dbind));
	goto T1097;}
	goto T1099;
T1099:;
	if((STREF(object,(V487),4))==((V481))){
	goto T1111;}
	base[3]= VV[173];
	base[4]= (V485);
	base[5]= CMPcar(STREF(object,(V487),8));
	base[6]= (V480);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1111;
T1111:;
	if(equal((V484),STREF(object,(V487),16))){
	goto T1118;}
	(void)((VFUN_NARGS=4,(*(LnkLI345))(VV[174],(V485),(V484),STREF(object,(V487),16))));
	if(!((STREF(object,(V487),16))==(Ct))){
	goto T1118;}
	V490 = (V487);
	V491 = (V484);
	V492= Ct;
	STSET(object,V490,16, V491);
	(void)(V491);
	goto T1118;
T1118:;
	{object V495;
	V495= make_cons(V480,STREF(object,V487,8));
	V496 = V487;
	V497 = (V495);
	V498= Ct;
	STSET(object,V496,8, V497);
	(void)(V497);}
	goto T1097;
T1097:;
	base[3]= (V487);
	base[4]= (V483);
	vs_top=(vs_base=base+3)+2;
	return;}}
	}
}
/*	local entry for function LOOP-LIST-COLLECTION	*/

static object LI80(V500)

object V500;
{	 VMB69 VMS69 VMV69
	goto TTL;
TTL:;
	{register object V501;
	register object V502;
	base[0]= (V500);
	base[1]= VV[5];
	base[2]= VV[5];
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk383)();
	if(vs_base>=vs_top){vs_top=sup;goto T1131;}
	V501= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1132;}
	V502= vs_base[0];
	vs_top=sup;
	goto T1133;
	goto T1131;
T1131:;
	V501= Cnil;
	goto T1132;
T1132:;
	V502= Cnil;
	goto T1133;
T1133:;
	{register object V503;
	V503= STREF(object,(V501),12);
	if(((V503))!=Cnil){
	goto T1135;}
	V504 = (V501);
	V505= (VFUN_NARGS=1,(*(LnkLI335))(VV[175]));
	V506= (VFUN_NARGS=1,(*(LnkLI335))(VV[176]));
	if((STREF(object,(V501),0))!=Cnil){
	goto T1141;}
	V507= Cnil;
	goto T1140;
	goto T1141;
T1141:;
	V507= make_cons(STREF(object,(V501),0),Cnil);
	goto T1140;
T1140:;
	V503= listA(3,/* INLINE-ARGS */V505,/* INLINE-ARGS */V506,V507);
	V508 = (V503);
	V509= Ct;
	STSET(object,V504,12, V508);
	(void)(V508);
	{object V510;
	V510= list(2,VV[177],(V503));
	(VV[109]->s.s_dbind)= make_cons((V510),(VV[109]->s.s_dbind));}
	if((STREF(object,(V501),0))!=Cnil){
	goto T1135;}
	V511= listA(3,VV[178],CMPcar((V503)),CMPcddr((V503)));
	(void)((VFUN_NARGS=1,(*(LnkLI384))(/* INLINE-ARGS */V511)));
	goto T1135;
T1135:;
	{object V512= (V500);
	if((V512!= VV[5]))goto T1149;
	V502= list(2,VV[5],(V502));
	goto T1148;
	goto T1149;
T1149:;
	if((V512!= VV[385]))goto T1151;
	goto T1148;
	goto T1151;
T1151:;
	if((V512!= VV[386]))goto T1152;
	if(!(type_of((V502))==t_cons)){
	goto T1153;}
	if((CMPcar((V502)))==(VV[5])){
	goto T1148;}
	goto T1153;
T1153:;
	V502= list(2,VV[179],(V502));
	goto T1148;
	goto T1152;
T1152:;
	FEerror("The ECASE key value ~s is illegal.",1,V512);
	goto T1148;}
	goto T1148;
T1148:;
	V513= list(3,VV[180],(V503),(V502));
	{object V514 = (*(LnkLI375))(/* INLINE-ARGS */V513);
	VMR69(V514)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-SUM-COLLECTION	*/

static object LI81(V518,V519,V520)

object V518;object V519;object V520;
{	 VMB70 VMS70 VMV70
	goto TTL;
TTL:;
	{register object V521;
	object V522;
	base[0]= (V518);
	base[1]= VV[181];
	base[2]= (V520);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk383)();
	if(vs_base>=vs_top){vs_top=sup;goto T1162;}
	V521= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1163;}
	V522= vs_base[0];
	vs_top=sup;
	goto T1164;
	goto T1162;
T1162:;
	V521= Cnil;
	goto T1163;
T1163:;
	V522= Cnil;
	goto T1164;
T1164:;
	(void)((VFUN_NARGS=2,(*(LnkLI387))(STREF(object,(V521),16),(V519))));
	{register object V523;
	V523= STREF(object,(V521),12);
	if(((V523))!=Cnil){
	goto T1167;}
	V524 = (V521);{object V526;
	V526= STREF(object,(V521),0);
	if(V526==Cnil)goto T1173;
	V525= V526;
	goto T1172;
	goto T1173;
T1173:;}
	V525= (VFUN_NARGS=1,(*(LnkLI335))(VV[182]));
	goto T1172;
T1172:;
	V527= (VFUN_NARGS=3,(*(LnkLI371))(V525,Cnil,STREF(object,(V521),16)));
	V523= make_cons(/* INLINE-ARGS */V527,Cnil);
	V528 = (V523);
	V529= Ct;
	STSET(object,V524,12, V528);
	(void)(V528);
	if((STREF(object,(V521),0))!=Cnil){
	goto T1167;}
	(void)((VFUN_NARGS=1,(*(LnkLI384))(CMPcar(STREF(object,(V521),12)))));
	goto T1167;
T1167:;
	if(!(((V518))==(VV[183]))){
	goto T1179;}
	V531= CMPcar((V523));
	V532= CMPcar((V523));
	V533= list(2,VV[184],CMPcar((V523)));
	V530= list(3,VV[8],(V522),list(3,VV[11],/* INLINE-ARGS */V531,(*(LnkLI337))(Ct,/* INLINE-ARGS */V532,/* INLINE-ARGS */V533)));
	goto T1177;
	goto T1179;
T1179:;
	V534= CMPcar((V523));
	V535= (*(LnkLI337))(Ct,CMPcar((V523)),CMPcar((V523)));
	V536 = (V522);
	V530= list(3,VV[11],/* INLINE-ARGS */V534,list(3,VV[185],/* INLINE-ARGS */V535,V536));
	goto T1177;
T1177:;
	{object V537 = (*(LnkLI375))(V530);
	VMR70(V537)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-MAXMIN-COLLECTION	*/

static object LI82(V539)

object V539;
{	 VMB71 VMS71 VMV71
	goto TTL;
TTL:;
	{register object V540;
	object V541;
	base[0]= (V539);
	base[1]= VV[186];
	base[2]= (VV[187]->s.s_dbind);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk383)();
	if(vs_base>=vs_top){vs_top=sup;goto T1185;}
	V540= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1186;}
	V541= vs_base[0];
	vs_top=sup;
	goto T1187;
	goto T1185;
T1185:;
	V540= Cnil;
	goto T1186;
T1186:;
	V541= Cnil;
	goto T1187;
T1187:;
	(void)((VFUN_NARGS=2,(*(LnkLI387))(STREF(object,(V540),16),(VV[187]->s.s_dbind))));
	{register object V542;
	V542= STREF(object,(V540),20);
	if(((V542))!=Cnil){
	goto T1190;}
	V543 = (V540);{object V545;
	V545= STREF(object,(V540),0);
	if(V545==Cnil)goto T1196;
	V544= V545;
	goto T1195;
	goto T1196;
T1196:;}
	V544= (VFUN_NARGS=1,(*(LnkLI335))(VV[188]));
	goto T1195;
T1195:;
	V542= (*(LnkLI388))(V544,STREF(object,(V540),16));
	V546 = (V542);
	V547= Ct;
	STSET(object,V543,20, V546);
	(void)(V546);
	if((STREF(object,(V540),0))!=Cnil){
	goto T1190;}
	(void)((VFUN_NARGS=1,(*(LnkLI384))(STREF(object,(V542),0))));
	goto T1190;
T1190:;
	(void)((*(LnkLI389))((V539),(V542)));
	{object V548;
	V548= list(2,VV[189],(V542));
	(VV[109]->s.s_dbind)= make_cons((V548),(VV[109]->s.s_dbind));}
	V549= list(4,VV[190],(V542),(V539),(V541));
	{object V550 = (*(LnkLI375))(/* INLINE-ARGS */V549);
	VMR71(V550)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-DO-ALWAYS	*/

static object LI83(V553,V554)

object V553;object V554;
{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V555;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V555= vs_base[0];
	if(((V553))==Cnil){
	goto T1205;}
	vs_base=vs_top;
	(void) (*Lnk373)();
	vs_top=sup;
	goto T1205;
T1205:;
	vs_base=vs_top;
	(void) (*Lnk390)();
	vs_top=sup;
	if(((V554))==Cnil){
	goto T1212;}
	V556= VV[8];
	goto T1210;
	goto T1212;
T1212:;
	V556= VV[191];
	goto T1210;
T1210:;
	V557 = (V555);
	V558= list(3,V556,V557,(*(LnkLI366))(Cnil));
	(void)((*(LnkLI375))(/* INLINE-ARGS */V558));
	{object V559 = (VFUN_NARGS=1,(*(LnkLI384))(Ct));
	VMR72(V559)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-DO-THEREIS	*/

static object LI84(V561)

object V561;
{	 VMB73 VMS73 VMV73
	goto TTL;
TTL:;
	if(((V561))==Cnil){
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
	V562= (*(LnkLI391))();
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V563= vs_base[0];
	V564= list(3,VV[11],/* INLINE-ARGS */V562,V563);
	V565= list(3,VV[8],/* INLINE-ARGS */V564,(*(LnkLI366))((VV[118]->s.s_dbind)));
	{object V566 = (*(LnkLI375))(/* INLINE-ARGS */V565);
	VMR73(V566)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-DO-WHILE	*/

static object LI85(V569,V570)

object V569;object V570;
{	 VMB74 VMS74 VMV74
	goto TTL;
TTL:;
	{object V571;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V571= vs_base[0];
	base[1]= (V570);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk373)();
	vs_top=sup;
	if(((V569))==Cnil){
	goto T1225;}
	V572= VV[8];
	goto T1223;
	goto T1225;
T1225:;
	V572= VV[191];
	goto T1223;
T1223:;
	V573 = (V571);
	V574= list(3,V572,V573,VV[192]);
	{object V575 = (*(LnkLI365))(/* INLINE-ARGS */V574);
	VMR74(V575)}}
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
	{register object V576;
	register object V577;
	register object V578;
	V576= Cnil;
	V577= Cnil;
	V578= Cnil;
	goto T1230;
T1230:;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V576= vs_base[0];
	base[0]= (V576);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk378)();
	vs_top=sup;
	V578= vs_base[0];
	if(((*(LnkLI369))(CMPcar((VV[88]->s.s_dbind)),VV[194]))==Cnil){
	goto T1241;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V577= vs_base[0];
	goto T1239;
	goto T1241;
T1241:;
	V577= Cnil;
	goto T1239;
T1239:;
	if(((V576))==Cnil){
	goto T1244;}
	if(((*(LnkLI381))((V576)))==Cnil){
	goto T1244;}
	base[0]= VV[195];
	base[1]= (V576);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1244;
T1244:;
	(void)((VFUN_NARGS=3,(*(LnkLI371))((V576),(V577),(V578))));
	if(((*(LnkLI369))(CMPcar((VV[88]->s.s_dbind)),VV[158]))==Cnil){
	goto T1254;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	goto T1252;
	goto T1254;
T1254:;
	{object V579 = (*(LnkLI358))();
	VMR75(V579)}
	goto T1252;
T1252:;
	goto T1230;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-HACK-ITERATION	*/

static object LI87(V581)

register object V581;
{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	{register object V582;
	register object V583;
	register object V584;
	register object V585;
	register object V586;
	register object V587;
	register object V588;
	register object V589;
	register object V590;
	object V591;
	V582= Cnil;
	V583= Cnil;
	V584= Cnil;
	V585= Cnil;
	V586= Cnil;
	V587= Cnil;
	V588= Cnil;
	V589= Cnil;
	V590= Cnil;
	V591= Cnil;
	goto T1259;
T1259:;
	base[1]= CMPcar((V581));
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	base[0]= vs_base[0];
	{object V592;
	V592= CMPcdr((V581));
	 vs_top=base+1;
	 while(V592!=Cnil)
	 {vs_push((V592)->c.c_car);V592=(V592)->c.c_cdr;}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V591= vs_base[0];
	V590= (V591);
	if((CMPcar((V590)))!=Cnil){
	goto T1269;}
	goto T1268;
	goto T1269;
T1269:;
	{object V593;
	V593= CMPcar((V590));
	V582= make_cons((V593),(V582));}
	goto T1268;
T1268:;
	V594 = (V583);
	V590= CMPcdr((V590));
	V596 = (V590);
	base[0]= CMPcar(V596);
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V595= vs_base[0];
	V583= nconc(V594,V595);
	V590= CMPcdr((V590));
	V597 = (V590);
	if((CMPcar(V597))!=Cnil){
	goto T1279;}
	goto T1278;
	goto T1279;
T1279:;
	{object V598;
	V598= CMPcar((V590));
	V584= make_cons((V598),(V584));}
	goto T1278;
T1278:;
	V599 = (V585);
	V590= CMPcdr((V590));
	V601 = (V590);
	base[0]= CMPcar(V601);
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V600= vs_base[0];
	V585= nconc(V599,V600);
	V590= CMPcdr((V590));
	if(((VV[112]->s.s_dbind))==Cnil){
	goto T1291;}
	base[0]= VV[196];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1291;
T1291:;
	if(((V590))!=Cnil){
	goto T1295;}
	V590= (V591);
	goto T1295;
T1295:;
	if((CMPcar((V590)))==Cnil){
	goto T1299;}
	{object V602;
	V602= CMPcar((V590));
	V586= make_cons((V602),(V586));}
	goto T1299;
T1299:;
	V603 = (V587);
	V590= CMPcdr((V590));
	V605 = (V590);
	base[0]= CMPcar(V605);
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V604= vs_base[0];
	V587= nconc(V603,V604);
	V590= CMPcdr((V590));
	V606 = (V590);
	if((CMPcar(V606))==Cnil){
	goto T1309;}
	{object V607;
	V607= CMPcar((V590));
	V588= make_cons((V607),(V588));}
	goto T1309;
T1309:;
	V608 = (V589);
	base[0]= CMPcadr((V590));
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V609= vs_base[0];
	V589= nconc(V608,V609);
	if(((*(LnkLI369))(CMPcar((VV[88]->s.s_dbind)),VV[158]))!=Cnil){
	goto T1319;}
	V610= (*(LnkLI343))((V589));
	base[0]= (V588);
	vs_top=(vs_base=base+0)+1;
	L88(base);
	vs_top=sup;
	V611= vs_base[0];
	V612= (*(LnkLI344))((V587));
	base[0]= (V586);
	vs_top=(vs_base=base+0)+1;
	L88(base);
	vs_top=sup;
	V613= vs_base[0];
	V614 = (VV[110]->s.s_dbind);
	(VV[110]->s.s_dbind)= listA(5,/* INLINE-ARGS */V610,V611,/* INLINE-ARGS */V612,V613,V614);
	V615= (*(LnkLI343))((V585));
	base[0]= (V584);
	vs_top=(vs_base=base+0)+1;
	L88(base);
	vs_top=sup;
	V616= vs_base[0];
	V617= (*(LnkLI344))((V583));
	base[0]= (V582);
	vs_top=(vs_base=base+0)+1;
	L88(base);
	vs_top=sup;
	V618= vs_base[0];
	V619 = (VV[113]->s.s_dbind);
	(VV[113]->s.s_dbind)= listA(5,/* INLINE-ARGS */V615,V616,/* INLINE-ARGS */V617,V618,V619);
	(void)((*(LnkLI358))());
	{object V620 = Cnil;
	VMR76(V620)}
	goto T1319;
T1319:;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	if((STREF(object,(VV[99]->s.s_dbind),28))!=Cnil){
	goto T1336;}
	V590= (*(LnkLI360))(CMPcar((VV[88]->s.s_dbind)),STREF(object,(VV[99]->s.s_dbind),4));
	if(((V590))==Cnil){
	goto T1336;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V581= (V590);
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
	{object V621;
	object V622;
	object V623;
	object V624;
	object V625;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V621= vs_base[0];
	base[3]= (V621);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk378)();
	vs_top=sup;
	V622= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V623= vs_base[0];
	V624= Cnil;
	V625= Cnil;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V624= vs_base[0];
	if(!(type_of((V623))==t_symbol)){
	goto T1355;}
	V625= (*(LnkLI360))((V623),STREF(object,(VV[99]->s.s_dbind),8));
	if(((V625))!=Cnil){
	goto T1354;}
	goto T1355;
T1355:;
	base[3]= VV[199];
	base[4]= (V623);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1354;
T1354:;
	base[3]= CMPcar((V625));
	base[4]= (V621);
	base[5]= (V624);
	base[6]= (V622);
	{object V626;
	V626= CMPcdr((V625));
	 vs_top=base+7;
	 while(V626!=Cnil)
	 {vs_push((V626)->c.c_car);V626=(V626)->c.c_cdr;}
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
	{object V627;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V627= vs_base[0];
	{object V629;
	V630= (VFUN_NARGS=0,(*(LnkLI335))());
	V631 = (V627);
	V632 = VV[201];
	V629= (VFUN_NARGS=3,(*(LnkLI371))(/* INLINE-ARGS */V630,V631,V632));
	{object V633;
	V633= list(3,VV[8],list(2,VV[202],list(2,VV[203],(V629))),VV[204]);
	(VV[110]->s.s_dbind)= make_cons((V633),(VV[110]->s.s_dbind));}
	{object V634;
	V634= list(3,VV[8],list(2,VV[202],list(2,VV[203],(V629))),VV[205]);
	(VV[113]->s.s_dbind)= make_cons((V634),(VV[113]->s.s_dbind));
	{object V635 = (VV[113]->s.s_dbind);
	VMR78(V635)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-WHEN-IT-VARIABLE	*/

static object LI91()

{	 VMB79 VMS79 VMV79
	goto TTL;
TTL:;
	if((VV[118]->s.s_dbind)!=Cnil){
	{object V636 = (VV[118]->s.s_dbind);
	VMR79(V636)}}
	V637= (VFUN_NARGS=1,(*(LnkLI335))(VV[206]));
	(VV[118]->s.s_dbind)= (VFUN_NARGS=3,(*(LnkLI371))(/* INLINE-ARGS */V637,Cnil,Cnil));
	{object V638 = (VV[118]->s.s_dbind);
	VMR79(V638)}
	return Cnil;
}
/*	local entry for function LOOP-ANSI-FOR-EQUALS	*/

static object LI92(V642,V643,V644)

register object V642;object V643;object V644;
{	 VMB80 VMS80 VMV80
	goto TTL;
TTL:;
	(void)((*(LnkLI392))((V642),Cnil,(V644)));
	if(((*(LnkLI369))(CMPcar((VV[88]->s.s_dbind)),VV[207]))==Cnil){
	goto T1379;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V645 = (V642);
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V646= vs_base[0];
	V647= list(2,V645,V646);
	{object V648 = listA(7,Cnil,/* INLINE-ARGS */V647,Cnil,Cnil,Cnil,list(2,(V642),(V643)),VV[208]);
	VMR80(V648)}
	goto T1379;
T1379:;
	{object V649 = listA(3,Cnil,list(2,(V642),(V643)),VV[209]);
	VMR80(V649)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-FOR-ACROSS	*/

static object LI93(V653,V654,V655)

object V653;object V654;object V655;
{	 VMB81 VMS81 VMV81
	goto TTL;
TTL:;
	(void)((*(LnkLI392))((V653),Cnil,(V655)));
	{object V656;
	register object V657;
	V656= (VFUN_NARGS=1,(*(LnkLI335))(VV[210]));
	V657= (VFUN_NARGS=1,(*(LnkLI335))(VV[211]));
	{register object V658;
	object V659;
	object V660;
	base[0]= (V654);
	base[1]= VV[212];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk393)();
	if(vs_base>=vs_top){vs_top=sup;goto T1389;}
	V658= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1390;}
	V659= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1391;}
	V660= vs_base[0];
	vs_top=sup;
	goto T1392;
	goto T1389;
T1389:;
	V658= Cnil;
	goto T1390;
T1390:;
	V659= Cnil;
	goto T1391;
T1391:;
	V660= Cnil;
	goto T1392;
T1392:;
	V661 = (V656);
	V662 = (V658);
	if(!(type_of((V658))==t_cons)){
	goto T1396;}
	if(!((CMPcar((V658)))==(VV[213]))){
	goto T1396;}
	V663= CMPcadr((V658));
	goto T1394;
	goto T1396;
T1396:;
	V663= VV[212];
	goto T1394;
T1394:;
	(void)((VFUN_NARGS=3,(*(LnkLI371))(V661,V662,V663)));
	(void)((VFUN_NARGS=3,(*(LnkLI371))((V657),small_fixnum(0),VV[214])));
	{long V664;
	object V665;
	register object V666;
	object V667;
	object V668;
	object V669;
	V664= 0;
	if(((V659))!=Cnil){
	goto T1404;}
	{object V670;
	V670= (VFUN_NARGS=1,(*(LnkLI335))(VV[215]));
	{object V671;
	V671= list(3,VV[11],(V670),list(2,VV[216],(V656)));
	(VV[108]->s.s_dbind)= make_cons((V671),(VV[108]->s.s_dbind));}
	V665= (VFUN_NARGS=3,(*(LnkLI371))((V670),small_fixnum(0),VV[214]));
	goto T1402;}
	goto T1404;
T1404:;
	V664= (long)length((V660));
	V665= CMPmake_fixnum(V664);
	goto T1402;
T1402:;
	V666= list(3,VV[217],(V657),(V665));
	V667= (V666);
	V668= list(2,(V653),list(3,VV[218],(V656),(V657)));
	V669= list(2,(V657),list(2,VV[184],(V657)));
	if(((V659))==Cnil){
	goto T1415;}
	V666= ((V664)==(0)?Ct:Cnil);
	if(!((V664)<=(1))){
	goto T1415;}
	V667= Ct;
	goto T1415;
T1415:;
	V672 = (V667);
	V673 = (V668);
	V674 = (V669);
	if(((((V666))==((V667))?Ct:Cnil))==Cnil){
	goto T1424;}
	V675= Cnil;
	goto T1423;
	goto T1424;
T1424:;
	V675= list(4,(V666),(V668),Cnil,(V669));
	goto T1423;
T1423:;
	{object V676 = listA(5,V672,V673,Cnil,V674,V675);
	VMR81(V676)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOOP-LIST-STEP	*/

static void L94()
{register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_check;
	{object V677;
	V677=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V678;
	if(((*(LnkLI369))(CMPcar((VV[88]->s.s_dbind)),VV[219]))==Cnil){
	goto T1428;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V678= vs_base[0];
	goto T1426;
	goto T1428;
T1428:;
	V678= VV[220];
	goto T1426;
T1426:;
	if(!(type_of((V678))==t_cons)){
	goto T1432;}
	if(!((CMPcar((V678)))==(VV[221]))){
	goto T1432;}
	(void)((VFUN_NARGS=1,(*(LnkLI345))(VV[222])));
	base[1]= list(3,VV[223],(V678),(V677));
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
	goto T1432;
T1432:;
	if(!(type_of((V678))==t_cons)){
	goto T1440;}
	if(!((CMPcar((V678)))==(VV[83]))){
	goto T1440;}
	base[1]= list(2,CMPcadr((V678)),(V677));
	base[2]= CMPcadr((V678));
	vs_top=(vs_base=base+1)+2;
	return;
	goto T1440;
T1440:;
	V679= (VFUN_NARGS=1,(*(LnkLI335))(VV[224]));
	V680 = (V678);
	V681= (VFUN_NARGS=3,(*(LnkLI371))(/* INLINE-ARGS */V679,V680,VV[83]));
	V682 = (V677);
	base[1]= list(3,VV[223],/* INLINE-ARGS */V681,V682);
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	local entry for function LOOP-FOR-ON	*/

static object LI95(V686,V687,V688)

register object V686;object V687;object V688;
{	 VMB83 VMS83 VMV83
	goto TTL;
TTL:;
	{object V689;
	object V690;
	object V691;
	base[0]= (V687);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk393)();
	if(vs_base>=vs_top){vs_top=sup;goto T1450;}
	V689= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1451;}
	V690= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1452;}
	V691= vs_base[0];
	vs_top=sup;
	goto T1453;
	goto T1450;
T1450:;
	V689= Cnil;
	goto T1451;
T1451:;
	V690= Cnil;
	goto T1452;
T1452:;
	V691= Cnil;
	goto T1453;
T1453:;
	{register object V692;
	V692= (V686);
	if(((V686))==Cnil){
	goto T1456;}
	if(!(type_of((V686))==t_symbol)){
	goto T1456;}
	(void)((*(LnkLI392))((V686),(V689),(V688)));
	goto T1454;
	goto T1456;
T1456:;
	V692= (VFUN_NARGS=0,(*(LnkLI335))());
	V693 = (V692);
	V694 = (V689);
	(void)((VFUN_NARGS=3,(*(LnkLI371))(V693,V694,VV[5])));
	(void)((*(LnkLI392))((V686),Cnil,(V688)));
	goto T1454;
T1454:;
	{object V695;
	object V696;
	base[0]= (V692);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk394)();
	if(vs_base>=vs_top){vs_top=sup;goto T1464;}
	V695= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1465;}
	V696= vs_base[0];
	vs_top=sup;
	goto T1466;
	goto T1464;
T1464:;
	V695= Cnil;
	goto T1465;
T1465:;
	V696= Cnil;
	goto T1466;
T1466:;
	{register object V697;
	object V698;
	V699= (((V686))==((V692))?Ct:Cnil);
	V700= list(2,VV[225],(V692));
	V697= (*(LnkLI337))(/* INLINE-ARGS */V699,(V692),/* INLINE-ARGS */V700);
	V698= (V697);
	if(((V690))==Cnil){
	goto T1469;}
	if(!(type_of((V691))==t_cons||((V691))==Cnil)){
	goto T1469;}
	V697= (((V691))==Cnil?Ct:Cnil);
	goto T1469;
T1469:;
	if(!(((V686))==((V692)))){
	goto T1476;}
	V701 = (V692);
	{object V702 = list(8,Cnil,list(2,V701,(*(LnkLI337))(Ct,(V692),(V695))),(V698),Cnil,Cnil,Cnil,(V697),Cnil);
	VMR83(V702)}
	goto T1476;
T1476:;
	{object V703;
	object V704;
	V703= list(2,(V686),(V692));
	V704= list(2,(V692),(V695));
	V705 = (V698);
	V706 = (V703);
	V707 = (V704);
	if(((((V697))==((V698))?Ct:Cnil))==Cnil){
	goto T1481;}
	V708= Cnil;
	goto T1480;
	goto T1481;
T1481:;
	V708= list(4,(V697),(V703),Cnil,(V704));
	goto T1480;
T1480:;
	{object V709 = listA(5,V705,V706,Cnil,V707,V708);
	VMR83(V709)}}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-FOR-IN	*/

static object LI96(V713,V714,V715)

object V713;object V714;object V715;
{	 VMB84 VMS84 VMV84
	goto TTL;
TTL:;
	{object V716;
	object V717;
	object V718;
	base[0]= (V714);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk393)();
	if(vs_base>=vs_top){vs_top=sup;goto T1485;}
	V716= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1486;}
	V717= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1487;}
	V718= vs_base[0];
	vs_top=sup;
	goto T1488;
	goto T1485;
T1485:;
	V716= Cnil;
	goto T1486;
T1486:;
	V717= Cnil;
	goto T1487;
T1487:;
	V718= Cnil;
	goto T1488;
T1488:;
	{register object V719;
	V719= (VFUN_NARGS=1,(*(LnkLI335))(VV[226]));
	(void)((*(LnkLI392))((V713),Cnil,(V715)));
	(void)((VFUN_NARGS=3,(*(LnkLI371))((V719),(V716),VV[5])));
	{object V720;
	object V721;
	base[0]= (V719);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk394)();
	if(vs_base>=vs_top){vs_top=sup;goto T1494;}
	V720= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1495;}
	V721= vs_base[0];
	vs_top=sup;
	goto T1496;
	goto T1494;
T1494:;
	V720= Cnil;
	goto T1495;
T1495:;
	V721= Cnil;
	goto T1496;
T1496:;
	{register object V722;
	object V723;
	object V724;
	object V725;
	V722= list(2,VV[227],(V719));
	V723= (V722);
	V724= list(2,(V713),list(2,VV[65],(V719)));
	V725= list(2,(V719),(V720));
	if(((V717))==Cnil){
	goto T1501;}
	if(!(type_of((V718))==t_cons||((V718))==Cnil)){
	goto T1501;}
	V722= (((V718))==Cnil?Ct:Cnil);
	goto T1501;
T1501:;
	V726 = (V723);
	V727 = (V724);
	V728 = (V725);
	if(((((V722))==((V723))?Ct:Cnil))==Cnil){
	goto T1508;}
	V729= Cnil;
	goto T1507;
	goto T1508;
T1508:;
	V729= list(4,(V722),(V724),Cnil,(V725));
	goto T1507;
T1507:;
	{object V730 = listA(5,V726,V727,Cnil,V728,V729);
	VMR84(V730)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-LOOP-PATH	*/

static object LI97(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB85 VMS85 VMV85
	{object V731;
	object V732;
	object V733;
	object V734;
	object V735;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI97key,first,ap);
	V731=(Vcs[0]);
	V732=(Vcs[1]);
	V733=(Vcs[2]);
	V734=(Vcs[3]);
	V735=(Vcs[4]);
	base[0]= VV[228];
	base[1]= (V731);
	base[2]= (V732);
	base[3]= (V733);
	base[4]= (V734);
	base[5]= (V735);
	vs_top=(vs_base=base+0)+6;
	siLmake_structure();
	vs_top=sup;
	{object V736 = vs_base[0];
	VMR85(V736)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function ADD-LOOP-PATH	*/

static object LI98(object V739,object V738,object V737,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB86 VMS86 VMV86
	bds_check;
	{object V740;
	object V741;
	register object V742;
	object V743;
	object V744;
	object V745;
	va_start(ap,first);
	V740= V739;
	V741= V738;
	V742= V737;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI98key,first,ap);
	V743=(Vcs[3]);
	V744=(Vcs[4]);
	V745=(Vcs[5]);
	if(type_of((V740))==t_cons||((V740))==Cnil){
	goto T1516;}
	V740= make_cons((V740),Cnil);
	goto T1516;
T1516:;
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
	goto T1522;
T1522:;
	base[2]= (V742);
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
	base[5]= (V742);
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
	V742= vs_base[0];
	base[2]= (VV[50]->s.s_dbind);
	base[3]= VV[52];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	goto T1522;
	goto T1520;
T1520:;
	{object V746;
	object V747;
	V746= STREF(object,(V742),12);
	{object V749;
	object V750= (V740);
	if(V750==Cnil){
	V748= Cnil;
	goto T1550;}
	base[0]=V749=MMcons(Cnil,Cnil);
	goto T1551;
T1551:;
	(V749->c.c_car)= symbol_name((V750->c.c_car));
	if((V750=MMcdr(V750))==Cnil){
	V748= base[0];
	goto T1550;}
	V749=MMcdr(V749)=MMcons(Cnil,Cnil);
	goto T1551;}
	goto T1550;
T1550:;
	V751 = (V741);
	V752 = (V745);
	{object V754;
	object V755= (V743);
	if(V755==Cnil){
	V753= Cnil;
	goto T1553;}
	base[0]=V754=MMcons(Cnil,Cnil);
	goto T1554;
T1554:;
	if(!(type_of((V755->c.c_car))==t_cons||((V755->c.c_car))==Cnil)){
	goto T1557;}
	(V754->c.c_car)= (V755->c.c_car);
	goto T1555;
	goto T1557;
T1557:;
	(V754->c.c_car)= make_cons((V755->c.c_car),Cnil);
	goto T1555;
T1555:;
	if((V755=MMcdr(V755))==Cnil){
	V753= base[0];
	goto T1553;}
	V754=MMcdr(V754)=MMcons(Cnil,Cnil);
	goto T1554;}
	goto T1553;
T1553:;
	V757 = (V744);
	V747= (VFUN_NARGS=10,(*(LnkLI396))(VV[230],V748,VV[231],V751,VV[232],V752,VV[233],V753,VV[234],V757));
	{register object V758;
	register object V759;
	V758= (V740);
	V759= CMPcar((V758));
	goto T1563;
T1563:;
	if(!(((V758))==Cnil)){
	goto T1564;}
	goto T1559;
	goto T1564;
T1564:;
	{register object V760;
	register object V761;
	register object V762;
	V760= symbol_name((V759));
	V761= (V746);
	V762= (V747);
	base[2]= (V760);
	base[3]= (V761);
	base[4]= (V762);
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	vs_top=sup;}
	V758= CMPcdr((V758));
	V759= CMPcar((V758));
	goto T1563;}
	goto T1559;
T1559:;
	{object V763 = (V747);
	VMR86(V763)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function LOOP-FOR-BEING	*/

static object LI99(V767,V768,V769)

object V767;object V768;object V769;
{	 VMB87 VMS87 VMV87
	goto TTL;
TTL:;
	{register object V770;
	object V771;
	object V772;
	object V773;
	object V774;
	V770= Cnil;
	V771= Cnil;
	V772= Cnil;
	V773= Cnil;
	V774= Cnil;
	if(((*(LnkLI362))((V768),VV[235]))==Cnil){
	goto T1582;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V770= vs_base[0];
	goto T1580;
	goto T1582;
T1582:;
	if(((*(LnkLI369))(CMPcar((VV[88]->s.s_dbind)),VV[158]))==Cnil){
	goto T1586;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V772= Ct;
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
	V770= vs_base[0];
	V775= list(2,VV[238],(V768));
	V774= make_cons(/* INLINE-ARGS */V775,Cnil);
	goto T1580;
	goto T1586;
T1586:;
	base[0]= VV[239];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1580;
T1580:;
	if(type_of((V770))==t_symbol){
	goto T1603;}
	base[0]= VV[240];
	base[1]= (V770);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1601;
	goto T1603;
T1603:;
	V771= (*(LnkLI360))((V770),STREF(object,(VV[99]->s.s_dbind),12));
	if(((V771))!=Cnil){
	goto T1608;}
	base[0]= VV[241];
	base[1]= (V770);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1601;
	goto T1608;
T1608:;
	if(((V772))==Cnil){
	goto T1601;}
	if((STREF(object,(V771),8))!=Cnil){
	goto T1601;}
	base[0]= VV[242];
	base[1]= (V770);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1601;
T1601:;
	{object V776;
	object V777;
	object V778;
	V776= STREF(object,(V771),12);
	V779 = (V774);
	V780= (VFUN_NARGS=2,(*(LnkLI397))(STREF(object,(V771),4),Ct));
	V777= nconc(V779,/* INLINE-ARGS */V780);
	V778= STREF(object,(V771),16);
	if(!(type_of((V776))==t_symbol)){
	goto T1623;}
	base[0]= (V776);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V776= vs_base[0];
	goto T1623;
T1623:;
	if(((V772))==Cnil){
	goto T1630;}
	base[0]= (V776);
	base[1]= (V767);
	base[2]= (V769);
	base[3]= (V777);
	base[4]= VV[243];
	base[5]= Ct;
	{object V781;
	V781= (V778);
	 vs_top=base+6;
	 while(V781!=Cnil)
	 {vs_push((V781)->c.c_car);V781=(V781)->c.c_cdr;}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V773= vs_base[0];
	goto T1628;
	goto T1630;
T1630:;
	base[0]= (V776);
	base[1]= (V767);
	base[2]= (V769);
	base[3]= (V777);
	{object V782;
	V782= (V778);
	 vs_top=base+4;
	 while(V782!=Cnil)
	 {vs_push((V782)->c.c_car);V782=(V782)->c.c_cdr;}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V773= vs_base[0];
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
	V784 = CMPmake_fixnum((long)length((V773)));
	{register object x= V784,V783= VV[245];
	while(V783!=Cnil)
	if(eql(x,V783->c.c_car)){
	goto T1649;
	}else V783=V783->c.c_cdr;}
	base[0]= VV[246];
	base[1]= (V770);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1649;
T1649:;
	{register object V785;
	register object V786;
	V785= CMPcar((V773));
	V786= Cnil;
	goto T1657;
T1657:;
	if(((V785))!=Cnil){
	goto T1658;}
	goto T1654;
	goto T1658;
T1658:;
	V786= CMPcar((V785));
	V787 = (V786);
	if(!(type_of(V787)!=t_cons)){
	goto T1664;}
	(void)((*(LnkLI392))((V786),Cnil,Cnil));
	goto T1662;
	goto T1664;
T1664:;
	(void)((*(LnkLI392))(CMPcar((V786)),CMPcadr((V786)),CMPcaddr((V786))));
	goto T1662;
T1662:;
	V785= CMPcdr((V785));
	goto T1657;}
	goto T1654;
T1654:;
	V788= reverse(CMPcadr((V773)));
	(VV[108]->s.s_dbind)= nconc(/* INLINE-ARGS */V788,(VV[108]->s.s_dbind));
	{object V789 = CMPcddr((V773));
	VMR87(V789)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for NAMED-VARIABLE	*/

static void L100()
{register object *base=vs_base;
	register object *sup=base+VM88; VC88
	vs_check;
	{object V790;
	V790=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V791;
	V791= (*(LnkLI398))((V790),(VV[104]->s.s_dbind));
	if(((V791))!=Cnil){
	goto T1674;}
	base[1]= (VFUN_NARGS=0,(*(LnkLI335))());
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
	goto T1674;
T1674:;
	base[1]= (V791);
	base[2]= (VV[104]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk399)();
	vs_top=sup;
	(VV[104]->s.s_dbind)= vs_base[0];
	base[1]= CMPcdr((V791));
	base[2]= Ct;
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	local entry for function LOOP-COLLECT-PREPOSITIONAL-PHRASES	*/

static object LI101(object V792,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB89 VMS89 VMV89
	{object V793;
	object V794;
	object V795;
	va_start(ap,first);
	V793= V792;
	narg = narg - 1;
	if (narg <= 0) goto T1684;
	else {
	V794= first;}
	if (--narg <= 0) goto T1685;
	else {
	V795= va_arg(ap,object);}
	--narg; goto T1686;
	goto T1684;
T1684:;
	V794= Cnil;
	goto T1685;
T1685:;
	V795= Cnil;
	goto T1686;
T1686:;
	base[0]=make_cclosure_new(LC102,Cnil,Cnil,Cdata);
	base[0]=MMcons(base[0],Cnil);
	{object V796;
	object V797;
	register object V798;
	register object V799;
	object V800;
	object V801;
	{object V802;
	object V803= (V795);
	if(V803==Cnil){
	V800= Cnil;
	goto T1689;}
	base[1]=V802=MMcons(Cnil,Cnil);
	goto T1690;
T1690:;
	base[3]= CMPcar((V803->c.c_car));
	base[4]= (V793);
	base[5]= VV[20];
	base[6]= (base[0]->c.c_car);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk380)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	(V802->c.c_cdr)= vs_base[0];
	while(MMcdr(V802)!=Cnil)V802=MMcdr(V802);
	if((V803=MMcdr(V803))==Cnil){
	base[1]=base[1]->c.c_cdr;
	V800= base[1];
	goto T1689;}
	goto T1690;}
	goto T1689;
T1689:;
	{object V805;
	object V806= (V795);
	if(V806==Cnil){
	V801= Cnil;
	goto T1697;}
	base[1]=V805=MMcons(Cnil,Cnil);
	goto T1698;
T1698:;
	(V805->c.c_car)= CMPcar((V806->c.c_car));
	if((V806=MMcdr(V806))==Cnil){
	V801= base[1];
	goto T1697;}
	V805=MMcdr(V805)=MMcons(Cnil,Cnil);
	goto T1698;}
	goto T1697;
T1697:;
	V796= Cnil;
	V797= (V795);
	V798= Cnil;
	V799= Cnil;
	goto T1701;
T1701:;
	if(((VV[88]->s.s_dbind))!=Cnil){
	goto T1702;}
	{object V807 = nreverse((V797));
	VMR89(V807)}
	goto T1702;
T1702:;
	V796= CMPcar((VV[88]->s.s_dbind));
	{register object V808;
	register object V809;
	V808= (V793);
	V809= CMPcar((V808));
	goto T1712;
T1712:;
	if(!(((V808))==Cnil)){
	goto T1713;}
	goto T1708;
	goto T1713;
T1713:;
	base[2]= (V796);
	base[3]= (V809);
	vs_top=(vs_base=base+2)+2;
	L102(base);
	vs_top=sup;
	V799= vs_base[0];
	if(((V799))==Cnil){
	goto T1717;}
	V798= (V809);
	goto T1708;
	goto T1717;
T1717:;
	V808= CMPcdr((V808));
	V809= CMPcar((V808));
	goto T1712;}
	goto T1708;
T1708:;
	if(((V798))==Cnil){
	goto T1731;}
	{register object x= (V799),V810= (V800);
	while(V810!=Cnil)
	if(eql(x,V810->c.c_car)){
	goto T1735;
	}else V810=V810->c.c_cdr;
	goto T1733;}
	goto T1735;
T1735:;
	{register object x= (V799),V811= (V801);
	while(V811!=Cnil)
	if(eql(x,V811->c.c_car)){
	goto T1739;
	}else V811=V811->c.c_cdr;
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
	base[2]= (V796);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1733;
T1733:;
	if(!(type_of((V798))==t_cons||((V798))==Cnil)){
	goto T1744;}
	V801= append((V798),(V801));
	goto T1742;
	goto T1744;
T1744:;
	V801= make_cons((V798),(V801));
	goto T1742;
T1742:;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	{object V812;
	V813 = (V799);
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V814= vs_base[0];
	V812= list(2,V813,V814);
	V797= make_cons((V812),(V797));
	goto T1729;}
	goto T1731;
T1731:;
	if(((V794))==Cnil){
	goto T1751;}
	if(((*(LnkLI369))((V796),VV[249]))==Cnil){
	goto T1751;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	{register object V815;
	object V816;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V815= vs_base[0];
	V816= Cnil;
	goto T1758;
T1758:;
	if((CMPcadr((V815)))==Cnil){
	goto T1761;}
	V816= (*(LnkLI398))(CMPcar((V815)),(VV[104]->s.s_dbind));
	if(((V816))==Cnil){
	goto T1765;}
	base[1]= VV[250];
	base[2]= CMPcar((V815));
	base[3]= CMPcadr((V815));
	base[4]= CMPcadr((V816));
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1761;
	goto T1765;
T1765:;
	{object V817;
	V817= make_cons(CMPcar((V815)),CMPcadr((V815)));
	(VV[104]->s.s_dbind)= make_cons((V817),(VV[104]->s.s_dbind));}
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
	V815= vs_base[0];
	goto T1758;}
	goto T1751;
T1751:;
	{object V818 = nreverse((V797));
	VMR89(V818)}
	goto T1729;
T1729:;
	V798= Cnil;
	V799= Cnil;
	goto T1701;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LOOP-SEQUENCER	*/

static object LI103(V829,V830,V831,V832,V833,V834,V835,V836,V837,V838)

object V829;register object V830;object V831;object V832;object V833;object V834;object V835;object V836;object V837;object V838;
{	 VMB90 VMS90 VMV90
	goto TTL;
TTL:;
	{object V839;
	object V840;
	object V841;
	object V842;
	object V843;
	object V844;
	object V845;
	register object V846;
	register object V847;
	object V848;
	object V849;
	object V850;
	object V851;
	object V852;
	object V853;{object V855;
	V855= (*(LnkLI336))((V830));
	if(V855==Cnil)goto T1788;
	V854= V855;
	goto T1787;
	goto T1788;
T1788:;}
	V854= small_fixnum(0);
	goto T1787;
T1787:;
	V843= one_plus(V854);
	V839= Cnil;
	V840= Cnil;
	V841= Cnil;
	V842= Cnil;
	V844= Ct;
	V845= Cnil;
	V846= Cnil;
	V847= Cnil;
	V848= Cnil;
	V849= Cnil;
	V850= Cnil;
	V851= Cnil;
	V852= Cnil;
	V853= Cnil;
	if(((V832))==Cnil){
	goto T1790;}
	(void)((*(LnkLI392))((V832),Cnil,(V833)));
	goto T1790;
T1790:;
	{register object V856;
	register object V857;
	register object V858;
	object V859;
	V856= (V838);
	V857= Cnil;
	V858= Cnil;
	V859= Cnil;
	goto T1795;
T1795:;
	if(((V856))!=Cnil){
	goto T1796;}
	goto T1793;
	goto T1796;
T1796:;
	V857= CMPcaar((V856));
	V858= CMPcadar((V856));
	{object V860= (V857);
	if((V860!= VV[400])
	&& (V860!= VV[238]))goto T1805;
	V840= Ct;
	(void)((VFUN_NARGS=3,(*(LnkLI371))((V834),(V858),(V835))));
	goto T1804;
	goto T1805;
T1805:;
	if((V860!= VV[401])
	&& (V860!= VV[251])
	&& (V860!= VV[253]))goto T1808;
	V848= Ct;
	if(!(((V857))==(VV[251]))){
	goto T1813;}
	V846= VV[252];
	goto T1811;
	goto T1813;
T1813:;
	if(!(((V857))==(VV[253]))){
	goto T1811;}
	V846= VV[254];
	goto T1811;
T1811:;
	base[0]= (V858);
	base[1]= (V830);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk393)();
	if(vs_base<vs_top){
	V858= vs_base[0];
	vs_base++;
	}else{
	V858= Cnil;}
	if(vs_base<vs_top){
	V850= vs_base[0];
	vs_base++;
	}else{
	V850= Cnil;}
	if(vs_base<vs_top){
	V849= vs_base[0];
	}else{
	V849= Cnil;}
	vs_top=sup;
	(void)((*(LnkLI392))((V829),(V858),(V830)));
	goto T1804;
	goto T1808;
T1808:;
	if((V860!= VV[255])
	&& (V860!= VV[256])
	&& (V860!= VV[257])
	&& (V860!= VV[258])
	&& (V860!= VV[259]))goto T1823;
	if(((*(LnkLI369))((V857),VV[255]))==Cnil){
	goto T1826;}
	V846= VV[254];
	V847= VV[254];
	goto T1824;
	goto T1826;
T1826:;
	if(((*(LnkLI369))((V857),VV[256]))==Cnil){
	goto T1831;}
	V847= Ct;
	goto T1824;
	goto T1831;
T1831:;
	if(((*(LnkLI369))((V857),VV[257]))==Cnil){
	goto T1835;}
	V846= VV[252];
	V847= VV[252];
	goto T1824;
	goto T1835;
T1835:;
	if(((*(LnkLI369))((V857),VV[258]))==Cnil){
	goto T1840;}
	V846= VV[252];
	goto T1824;
	goto T1840;
T1840:;
	if(((*(LnkLI369))((V857),VV[259]))==Cnil){
	goto T1824;}
	V846= VV[254];
	goto T1824;
T1824:;
	V851= Ct;
	base[0]= (V858);
	base[1]= (V830);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk393)();
	if(vs_base<vs_top){
	V858= vs_base[0];
	vs_base++;
	}else{
	V858= Cnil;}
	if(vs_base<vs_top){
	V852= vs_base[0];
	vs_base++;
	}else{
	V852= Cnil;}
	if(vs_base<vs_top){
	V853= vs_base[0];
	}else{
	V853= Cnil;}
	vs_top=sup;
	if(((V852))==Cnil){
	goto T1854;}
	V839= list(2,VV[221],(V853));
	goto T1852;
	goto T1854;
T1854:;
	V861= (VFUN_NARGS=1,(*(LnkLI335))(VV[260]));
	V862 = (V858);
	V863 = (V830);
	V839= (VFUN_NARGS=3,(*(LnkLI371))(/* INLINE-ARGS */V861,V862,V863));
	goto T1852;
T1852:;
	goto T1804;
	goto T1823;
T1823:;
	if((V860!= VV[219]))goto T1856;
	base[0]= (V858);
	base[1]= (V830);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk393)();
	if(vs_base<vs_top){
	V858= vs_base[0];
	vs_base++;
	}else{
	V858= Cnil;}
	if(vs_base<vs_top){
	V844= vs_base[0];
	vs_base++;
	}else{
	V844= Cnil;}
	if(vs_base<vs_top){
	V843= vs_base[0];
	}else{
	V843= Cnil;}
	vs_top=sup;
	if(((V844))!=Cnil){
	goto T1804;}
	V843= (VFUN_NARGS=1,(*(LnkLI335))(VV[261]));
	V864 = (V843);
	V865 = (V858);
	V866 = (V830);
	(void)((VFUN_NARGS=3,(*(LnkLI371))(V864,V865,V866)));
	goto T1804;
	goto T1856;
T1856:;
	base[0]= VV[262];
	base[1]= (V857);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;}
	goto T1804;
T1804:;
	if(((V859))==Cnil){
	goto T1866;}
	if(((V846))==Cnil){
	goto T1866;}
	if(((V846))==((V859))){
	goto T1866;}
	base[0]= VV[263];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1866;
T1866:;
	V859= (V846);
	V856= CMPcdr((V856));
	goto T1795;}
	goto T1793;
T1793:;
	if(((V834))==Cnil){
	goto T1879;}
	if(((V840))!=Cnil){
	goto T1879;}
	base[0]= VV[264];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1879;
T1879:;
	if(((V848))!=Cnil){
	goto T1885;}
	V867 = (V829);
	V850= Ct;{object V869;
	V869= (*(LnkLI336))((V830));
	if(V869==Cnil)goto T1892;
	V849= V869;
	goto T1891;
	goto T1892;
T1892:;}
	V849= small_fixnum(0);
	goto T1891;
T1891:;
	V868= (V849);
	V870 = (V830);
	(void)((*(LnkLI392))(V867,V868,V870));
	goto T1885;
T1885:;
	{register object x= (V846),V871= VV[265];
	while(V871!=Cnil)
	if(eql(x,V871->c.c_car)){
	goto T1897;
	}else V871=V871->c.c_cdr;
	goto T1896;}
	goto T1897;
T1897:;
	if(((V851))!=Cnil){
	goto T1899;}
	if(((V837))==Cnil){
	goto T1898;}
	goto T1899;
T1899:;
	if(((V851))!=Cnil){
	goto T1903;}
	V839= (VFUN_NARGS=1,(*(LnkLI335))(VV[266]));
	V872 = (V839);
	V873 = (V830);
	(void)((VFUN_NARGS=3,(*(LnkLI371))(V872,Cnil,V873)));
	{object V874;
	V874= list(3,VV[11],(V839),(V837));
	(VV[108]->s.s_dbind)= make_cons((V874),(VV[108]->s.s_dbind));}
	goto T1903;
T1903:;
	if(((V847))==Cnil){
	goto T1912;}
	V841= VV[34];
	goto T1910;
	goto T1912;
T1912:;
	V841= VV[217];
	goto T1910;
T1910:;
	goto T1898;
T1898:;
	if(!(eql((V843),small_fixnum(1)))){
	goto T1916;}
	V845= list(2,VV[184],(V829));
	goto T1914;
	goto T1916;
T1916:;
	V845= list(3,VV[185],(V829),(V843));
	goto T1914;
T1914:;
	goto T1894;
	goto T1896;
T1896:;
	if(((V848))!=Cnil){
	goto T1918;}
	if(((V837))!=Cnil){
	goto T1921;}
	base[0]= VV[267];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1921;
T1921:;
	{object V875;
	V875= list(3,VV[11],(V829),list(2,VV[268],(V837)));
	(VV[108]->s.s_dbind)= make_cons((V875),(VV[108]->s.s_dbind));}
	goto T1918;
T1918:;
	if(((V837))==Cnil){
	goto T1927;}
	if(((V839))!=Cnil){
	goto T1927;}
	V839= (*(LnkLI336))((V830));
	V847= Ct;
	goto T1927;
T1927:;
	if(((V839))==Cnil){
	goto T1935;}
	if(((V847))==Cnil){
	goto T1940;}
	V841= VV[33];
	goto T1938;
	goto T1940;
T1940:;
	V841= VV[269];
	goto T1938;
T1938:;
	goto T1935;
T1935:;
	if(!(eql((V843),small_fixnum(1)))){
	goto T1944;}
	V845= list(2,VV[268],(V829));
	goto T1942;
	goto T1944;
T1944:;
	V845= list(3,VV[270],(V829),(V843));
	goto T1942;
T1942:;
	goto T1894;
T1894:;
	if(((V841))==Cnil){
	goto T1946;}
	V876= list(3,(V841),(V829),(V839));
	V842= (*(LnkLI337))(Ct,(V829),/* INLINE-ARGS */V876);
	goto T1946;
T1946:;
	if(((V836))==Cnil){
	goto T1950;}
	V877 = (V832);
	V836= list(2,V877,(*(LnkLI337))((V831),(V829),(V836)));
	goto T1950;
T1950:;
	{object V878;
	object V879;
	V878= (V842);
	V879= (V842);
	if(((V844))==Cnil){
	goto T1954;}
	if(((V850))==Cnil){
	goto T1954;}
	if(((V852))==Cnil){
	goto T1954;}
	base[0]= (V841);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V880= vs_base[0];
	V881 = (V849);
	V882 = (V853);
	V878= (
	V883 = V880,
	(type_of(V883) == t_sfun ?(*((V883)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V883)==t_vfun) ?
	(*((V883)->sfn.sfn_self)):
	(fcall.fun=(V883),fcalln))(V881,V882));
	if(((V878))==Cnil){
	goto T1954;}
	V879= Ct;
	goto T1954;
T1954:;
	V884 = (V829);
	{object V885 = list(8,Cnil,list(2,V884,(*(LnkLI337))(Ct,(V829),(V845))),(V879),(V836),Cnil,Cnil,(V878),(V836));
	VMR90(V885)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-FOR-ARITHMETIC	*/

static object LI104(V890,V891,V892,V893)

object V890;object V891;object V892;object V893;
{	 VMB91 VMS91 VMV91
	goto TTL;
TTL:;
	V894 = (V890);
	V895= (VFUN_NARGS=2,(*(LnkLI387))((V892),(VV[187]->s.s_dbind)));
	V896= list(2,(V893),(V891));
	V897= make_cons(/* INLINE-ARGS */V896,Cnil);
	V898= (VFUN_NARGS=3,(*(LnkLI397))(VV[271],Cnil,/* INLINE-ARGS */V897));
	{object V899 = (*(LnkLI402))(V894,/* INLINE-ARGS */V895,Ct,Cnil,Cnil,Cnil,Cnil,Cnil,Cnil,/* INLINE-ARGS */V898);
	VMR91(V899)}
	return Cnil;
}
/*	local entry for function LOOP-SEQUENCE-ELEMENTS-PATH	*/

static object LI105(object V902,object V901,object V900,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB92 VMS92 VMV92
	{object V903;
	object V904;
	object V905;
	object V906;
	object V907;
	object V908;
	object V909;
	va_start(ap,first);
	V903= V902;
	V904= V901;
	V905= V900;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI105key,first,ap);
	V906=(Vcs[3]);
	V907=(Vcs[4]);
	V908=(Vcs[5]);
	V909=(Vcs[6]);
	{object V910;
	object V911;
	base[0]= VV[272];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk407)();
	if(vs_base>=vs_top){vs_top=sup;goto T1969;}
	V910= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1970;}
	V911= vs_base[0];
	vs_top=sup;
	goto T1971;
	goto T1969;
T1969:;
	V910= Cnil;
	goto T1970;
T1970:;
	V911= Cnil;
	goto T1971;
T1971:;
	{object V912;
	base[0]= VV[273];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk407)();
	vs_top=sup;
	V912= vs_base[0];
	V913 = (V910);
	V914 = (V911);
	V915 = (V903);
	if((V904)!=Cnil){
	V916= (V904);
	goto T1974;}
	V916= (V909);
	goto T1974;
T1974:;
	V917 = (V912);
	V918 = (V908);
	V919= list(3,(V906),(V912),(V910));
	V920= list(2,(V907),(V912));
	V921 = (V905);
	{object V922 = listA(3,Cnil,Cnil,(*(LnkLI402))(V913,VV[214],V914,V915,V916,V917,V918,/* INLINE-ARGS */V919,/* INLINE-ARGS */V920,V921));
	VMR92(V922)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function LOOP-HASH-TABLE-ITERATION-PATH	*/

static object LI106(object V925,object V924,object V923,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB93 VMS93 VMV93
	bds_check;
	{object V926;
	object V927;
	object V928;
	register object V929;
	va_start(ap,first);
	V926= V925;
	V927= V924;
	V928= V923;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI106key,first,ap);
	V929=(Vcs[3]);
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
	goto T1977;
T1977:;
	base[2]= (V929);
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
	base[5]= (V929);
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
	V929= vs_base[0];
	base[2]= (VV[50]->s.s_dbind);
	base[3]= VV[52];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	goto T1977;
	goto T1975;
T1975:;
	if((CMPcdr((V928)))!=Cnil){
	goto T2004;}
	{register object x= CMPcaar((V928)),V930= VV[276];
	while(V930!=Cnil)
	if(eql(x,V930->c.c_car)){
	goto T2005;
	}else V930=V930->c.c_cdr;}
	goto T2004;
T2004:;
	base[0]= VV[277];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T2003;
	goto T2005;
T2005:;
	if(((V928))!=Cnil){
	goto T2003;}
	base[0]= VV[278];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T2003;
T2003:;
	{object V931;
	object V932;
	object V933;
	register object V934;
	V931= (VFUN_NARGS=1,(*(LnkLI335))(VV[279]));
	V932= (VFUN_NARGS=1,(*(LnkLI335))(VV[280]));
	V933= Cnil;
	V934= Cnil;
	{object V935;
	object V936;
	if(!(((V929))==(VV[281]))){
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
	V935= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2021;}
	V936= vs_base[0];
	vs_top=sup;
	goto T2022;
	goto T2020;
T2020:;
	V935= Cnil;
	goto T2021;
T2021:;
	V936= Cnil;
	goto T2022;
T2022:;
	V936= Ct;
	V933= (*(LnkLI391))();
	{register object V937;
	register object V938;
	object V939;
	object V940;
	object V941;
	object V942;
	register object V943;
	V937= Cnil;
	V938= Cnil;
	V939= (VFUN_NARGS=1,(*(LnkLI335))(VV[283]));
	V940= (VFUN_NARGS=1,(*(LnkLI335))(VV[284]));
	V941= (VFUN_NARGS=1,(*(LnkLI335))(VV[285]));
	if((V926)!=Cnil){
	V942= (V926);
	goto T2032;}
	V942= (VFUN_NARGS=0,(*(LnkLI335))());
	goto T2032;
T2032:;
	V944= list(3,(V942),Cnil,(V927));
	V945= list(2,(V931),CMPcadar((V928)));
	if((V936)==Cnil){
	V946= Cnil;
	goto T2034;}
	if((V935)==Cnil){
	V946= Cnil;
	goto T2034;}
	V947= list(2,(V935),Cnil);
	V946= make_cons(/* INLINE-ARGS */V947,Cnil);
	goto T2034;
T2034:;
	V943= listA(3,/* INLINE-ARGS */V944,/* INLINE-ARGS */V945,V946);
	if(!(((V929))==(VV[281]))){
	goto T2037;}
	V937= (V942);
	if((V936)==Cnil){
	V938= Cnil;
	goto T2041;}
	V938= (V935);
	goto T2041;
T2041:;
	goto T2035;
	goto T2037;
T2037:;
	if((V936)==Cnil){
	V937= Cnil;
	goto T2043;}
	V937= (V935);
	goto T2043;
T2043:;
	V938= (V942);
	goto T2035;
T2035:;
	{object V948;
	V948= list(2,VV[286],list(2,(V932),(V931)));
	(VV[109]->s.s_dbind)= make_cons((V948),(VV[109]->s.s_dbind));}
	if(!(type_of((V937))==t_cons)){
	goto T2048;}{object V949;
	V949= (V937);
	V937= (VFUN_NARGS=1,(*(LnkLI335))(VV[284]));
	V950 = (V937);
	V951 = (V934);
	V934= listA(3,V949,V950,V951);}
	{object V952;
	V952= list(2,(V937),Cnil);
	V943= make_cons((V952),(V943));}
	goto T2048;
T2048:;
	if(!(type_of((V938))==t_cons)){
	goto T2056;}{object V953;
	V953= (V938);
	V938= (VFUN_NARGS=1,(*(LnkLI335))(VV[283]));
	V954 = (V938);
	V955 = (V934);
	V934= listA(3,V953,V954,V955);}
	{object V956;
	V956= list(2,(V938),Cnil);
	V943= make_cons((V956),(V943));}
	goto T2056;
T2056:;
	V957= list(3,(V941),(V940),(V939));
	V958= make_cons((V932),Cnil);
	V959= list(3,VV[11],(V938),(V939));
	V960= list(4,VV[8],(V941),/* INLINE-ARGS */V959,list(3,VV[11],(V937),(V940)));
	{object V961 = list(6,(V943),Cnil,Cnil,Cnil,list(2,VV[36],list(5,VV[287],/* INLINE-ARGS */V957,/* INLINE-ARGS */V958,/* INLINE-ARGS */V960,list(3,VV[11],(V933),(V941)))),(V934));
	VMR93(V961)}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function LOOP-PACKAGE-SYMBOLS-ITERATION-PATH	*/

static object LI107(object V964,object V963,object V962,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB94 VMS94 VMV94
	{object V965;
	object V966;
	register object V967;
	object V968;
	va_start(ap,first);
	V965= V964;
	V966= V963;
	V967= V962;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI107key,first,ap);
	V968=(Vcs[3]);
	if(((V967))==Cnil){
	goto T2066;}
	if((CMPcdr((V967)))==Cnil){
	goto T2066;}
	base[0]= VV[288];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T2064;
	goto T2066;
T2066:;
	if(((V967))==Cnil){
	goto T2064;}
	{register object x= CMPcaar((V967)),V969= VV[289];
	while(V969!=Cnil)
	if(eql(x,V969->c.c_car)){
	goto T2064;
	}else V969=V969->c.c_cdr;}
	base[0]= VV[290];
	base[1]= CMPcaar((V967));
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T2064;
T2064:;
	if(type_of((V965))==t_symbol){
	goto T2077;}
	base[0]= VV[291];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T2077;
T2077:;
	{object V970;
	object V971;
	object V972;
	object V973;
	V970= (VFUN_NARGS=1,(*(LnkLI335))(VV[292]));
	V971= (VFUN_NARGS=1,(*(LnkLI335))(VV[293]));
	if((V965)!=Cnil){
	V972= (V965);
	goto T2083;}
	V972= (VFUN_NARGS=0,(*(LnkLI335))());
	goto T2083;
T2083:;{object V974;
	V974= CMPcadar((V967));
	if(V974==Cnil)goto T2085;
	V973= V974;
	goto T2084;
	goto T2085;
T2085:;}
	V973= VV[294];
	goto T2084;
T2084:;
	{object V975;
	V975= list(2,VV[295],listA(3,(V971),(V970),(V968)));
	(VV[109]->s.s_dbind)= make_cons((V975),(VV[109]->s.s_dbind));}
	V976= list(3,(V972),Cnil,(V966));
	V977= list(2,/* INLINE-ARGS */V976,list(2,(V970),(V973)));
	V978= (*(LnkLI391))();
	V979 = (V972);
	V980= list(2,/* INLINE-ARGS */V978,V979);
	{object V981 = list(6,/* INLINE-ARGS */V977,Cnil,Cnil,Cnil,list(2,VV[36],list(3,VV[84],/* INLINE-ARGS */V980,make_cons((V971),Cnil))),Cnil);
	VMR94(V981)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function MAKE-ANSI-LOOP-UNIVERSE	*/

static object LI108(V983)

object V983;
{	 VMB95 VMS95 VMV95
	goto TTL;
TTL:;
	{register object V984;
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
	V985= vs_base[0];
	if(((V983))==Cnil){
	goto T2109;}
	V986= VV[314];
	goto T2107;
	goto T2109;
T2109:;
	V986= Ct;
	goto T2107;
T2107:;
	V984= (VFUN_NARGS=12,(*(LnkLI410))(VV[53],V985,VV[54],VV[311],VV[55],VV[312],VV[60],VV[313],VV[59],Cnil,VV[57],V986));
	(void)((VFUN_NARGS=9,(*(LnkLI411))(VV[315],VV[316],(V984),VV[233],VV[317],VV[234],Cnil,VV[232],VV[318])));
	(void)((VFUN_NARGS=9,(*(LnkLI411))(VV[319],VV[316],(V984),VV[233],VV[320],VV[234],Cnil,VV[232],VV[321])));
	(void)((VFUN_NARGS=9,(*(LnkLI411))(VV[322],VV[323],(V984),VV[233],VV[324],VV[234],Cnil,VV[232],VV[325])));
	(void)((VFUN_NARGS=9,(*(LnkLI411))(VV[326],VV[323],(V984),VV[233],VV[327],VV[234],Cnil,VV[232],VV[328])));
	(void)((VFUN_NARGS=9,(*(LnkLI411))(VV[329],VV[323],(V984),VV[233],VV[330],VV[234],Cnil,VV[232],VV[331])));
	{object V987 = (V984);
	VMR95(V987)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-STANDARD-EXPANSION	*/

static object LI109(V991,V992,V993)

register object V991;object V992;object V993;
{	 VMB96 VMS96 VMV96
	goto TTL;
TTL:;
	if(((V991))==Cnil){
	goto T2117;}
	if(!(type_of(CMPcar((V991)))==t_symbol)){
	goto T2117;}
	{object V994 = (*(LnkLI412))((V991),(V992),(V993));
	VMR96(V994)}
	goto T2117;
T2117:;
	{object V995;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V995= vs_base[0];
	V996= make_cons(VV[14],(V991));
	{object V997 = list(3,VV[124],Cnil,list(4,VV[73],(V995),/* INLINE-ARGS */V996,list(2,VV[82],(V995))));
	VMR96(V997)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for LOOP	*/

static void L110()
{register object *base=vs_base;
	register object *sup=base+VM97; VC97
	vs_check;
	vs_top=sup;
	{object V998=base[0]->c.c_cdr;
	base[2]= V998;}
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
	{object V999;
	object V1000;
	V999=(base[0]);
	V1000=(base[1]);
	vs_top=sup;
	V1001= (*(LnkLI362))((V999),(V1000));
	base[2]= CMPcar(/* INLINE-ARGS */V1001);
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
	{object V1002;
	object V1003;
	V1002=(base[0]);
	V1003=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	V1004= (*(LnkLI362))((V1002),(V1003));
	base[2]= CMPcar(/* INLINE-ARGS */V1004);
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
	{object V1005;
	V1005=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1005))!=Cnil){
	goto T2123;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2123;
T2123:;
	{register object x= Ct,V1006= (V1005);
	while(V1006!=Cnil)
	if(eql(x,V1006->c.c_car)){
	goto T2127;
	}else V1006=V1006->c.c_cdr;
	goto T2126;}
	goto T2127;
T2127:;
	base[1]= VV[197];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2126;
T2126:;
	V1005= nreverse((V1005));
	V1008 = (V1005);
	if((CMPcdr(V1008))!=Cnil){
	goto T2130;}
	V1007= CMPcar((V1005));
	goto T2128;
	goto T2130;
T2130:;
	V1007= make_cons(VV[35],(V1005));
	goto T2128;
T2128:;
	base[1]= list(3,VV[8],V1007,VV[198]);
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
	{object V1009;
	V1009=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1010;
	V1010= Cnil;
	goto T2134;
T2134:;
	{register object V1011;
	register object V1012;
	V1011= CMPcar((VV[88]->s.s_dbind));
	bds_bind(VV[111],Cnil);
	V1012= Cnil;
	if(type_of((V1011))==t_symbol){
	goto T2140;}
	base[2]= VV[155];
	base[3]= (V1011);
	base[4]= (V1009);
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
	V1013= base0[1];
	goto T2154;}
	base0[1]= (*(LnkLI391))();
	V1013= base0[1];
	goto T2154;
T2154:;
	(VV[88]->s.s_dbind)= make_cons(V1013,CMPcdr((VV[88]->s.s_dbind)));
	goto T2148;
T2148:;
	V1012= (*(LnkLI360))((V1011),STREF(object,(VV[99]->s.s_dbind),0));
	if(((V1012))==Cnil){
	goto T2156;}
	base[3]= CMPcar((V1012));
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	base[2]= vs_base[0];
	{object V1014;
	V1014= CMPcdr((V1012));
	 vs_top=base+3;
	 while(V1014!=Cnil)
	 {vs_push((V1014)->c.c_car);V1014=(V1014)->c.c_cdr;}
	vs_base=base+3;}
	super_funcall_no_event(base[2]);
	vs_top=sup;
	if(!(((VV[111]->s.s_dbind))==Cnil)){
	goto T2157;}
	goto T2156;
T2156:;
	base[2]= VV[157];
	base[3]= (V1011);
	base[4]= (V1009);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk354)();
	vs_top=sup;
	bds_unwind1;
	goto T2137;
	goto T2157;
T2157:;
	base[2]= (VV[111]->s.s_dbind);
	base[3]= (V1010);
	vs_top=(vs_base=base+2)+2;
	Lreconc();
	vs_top=sup;
	V1010= vs_base[0];
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
	if((CMPcdr((V1010)))==Cnil){
	goto T2179;}
	V1015= nreverse((V1010));
	base[1]= make_cons(VV[14],/* INLINE-ARGS */V1015);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2179;
T2179:;
	base[1]= CMPcar((V1010));
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
	{object V1016;
	object V1017;
	V1016=(base[0]);
	V1017=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V1017))!=t_cons)){
	goto T2184;}
	base[2]= (V1016);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2184;
T2184:;
	base[2]= (V1016);
	base[3]= CMPcar((V1017));
	vs_top=(vs_base=base+2)+2;
	L64(base0);
	vs_top=sup;
	V1018= vs_base[0];
	base[2]= (V1016);
	base[3]= CMPcdr((V1017));
	vs_top=(vs_base=base+2)+2;
	L64(base0);
	vs_top=sup;
	V1019= vs_base[0];
	base[2]= make_cons(V1018,V1019);
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
	{register object V1020;
	register object V1021;
	V1020=(base[0]);
	V1021=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1020))!=Cnil){
	goto T2193;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2193;
T2193:;
	if(!(type_of((V1020))!=t_cons)){
	goto T2196;}{object V1022;
	base[3]= (V1020);
	base[4]= STREF(object,(VV[99]->s.s_dbind),16);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V1022= vs_base[0];
	if(V1022==Cnil)goto T2199;
	base[2]= V1022;
	goto T2198;
	goto T2199;
T2199:;}{object V1023;
	base[3]= symbol_name((V1020));
	base[4]= STREF(object,(VV[99]->s.s_dbind),20);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V1023= vs_base[0];
	if(V1023==Cnil)goto T2203;
	base[2]= V1023;
	goto T2198;
	goto T2203;
T2203:;}
	base[3]= VV[144];
	base[4]= base0[1];
	base[5]= (V1020);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk354)();
	vs_top=sup;
	base[2]= vs_base[0];
	goto T2198;
T2198:;
	base[3]= (V1021);
	vs_top=(vs_base=base+2)+2;
	L64(base0);
	return;
	goto T2196;
T2196:;
	if(!(type_of((V1021))!=t_cons)){
	goto T2212;}
	base[2]= VV[145];
	base[3]= base0[1];
	base[4]= base0[0];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk354)();
	return;
	goto T2212;
T2212:;
	base[2]= CMPcar((V1020));
	base[3]= CMPcar((V1021));
	vs_top=(vs_base=base+2)+2;
	L63(base0);
	vs_top=sup;
	V1024= vs_base[0];
	base[2]= CMPcdr((V1020));
	base[3]= CMPcdr((V1021));
	vs_top=(vs_base=base+2)+2;
	L63(base0);
	vs_top=sup;
	V1025= vs_base[0];
	base[2]= make_cons(V1024,V1025);
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
	{object V1026;
	V1026=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{long V1027;
	V1027= 0;
	{register object V1028;
	object V1029;
	V1028= (V1026);
	V1029= CMPcar((V1028));
	goto T2227;
T2227:;
	if(!(((V1028))==Cnil)){
	goto T2228;}
	base[2]= CMPmake_fixnum(V1027);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2228;
T2228:;
	V1030 = CMPmake_fixnum(V1027);
	base[2]= (V1029);
	base[3]= base0[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	V1031= vs_base[0];
	V1027= fix(number_plus(V1030,V1031));
	V1028= CMPcdr((V1028));
	V1029= CMPcar((V1028));
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
	{object V1032;
	V1034 = base0[2];
	V1035= nreverse(base0[7]);
	base[0]= append(V1034,/* INLINE-ARGS */V1035);
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V1033= vs_base[0];
	V1037 = base0[4];
	base[1]= base0[8];
	base[2]= VV[75];
	vs_top=(vs_base=base+1)+2;
	Lreconc();
	vs_top=sup;
	V1038= vs_base[0];
	base[0]= append(V1037,V1038);
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V1036= vs_base[0];
	base[0]= base0[6];
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V1039= vs_base[0];
	V1040= make_cons(VV[76],V1039);
	V1041= append(V1036,/* INLINE-ARGS */V1040);
	V1042= make_cons(VV[74],/* INLINE-ARGS */V1041);
	V1043= append(V1033,/* INLINE-ARGS */V1042);
	V1032= make_cons(VV[73],/* INLINE-ARGS */V1043);
	if((base0[9])==Cnil){
	goto T2253;}
	V1044= list(2,base0[9],Cnil);
	base[0]= list(3,VV[29],make_cons(/* INLINE-ARGS */V1044,Cnil),(V1032));
	vs_top=(vs_base=base+0)+1;
	return;
	goto T2253;
T2253:;
	base[0]= (V1032);
	vs_top=(vs_base=base+0)+1;
	return;}
}
/*	local function PIFY	*/

static void L34(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM106; VC106
	vs_check;
	{object V1045;
	V1045=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((CMPcdr((V1045)))!=Cnil){
	goto T2256;}
	base[1]= CMPcar((V1045));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2256;
T2256:;
	base[1]= make_cons(VV[14],(V1045));
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
	{object V1046;
	V1046=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1047;
	V1047= Cnil;
	{register object V1048;
	register object V1049;
	V1048= (V1046);
	V1049= CMPcar((V1048));
	goto T2262;
T2262:;
	if(!(((V1048))==Cnil)){
	goto T2263;}
	goto T2258;
	goto T2263;
T2263:;
	if(((V1049))==Cnil){
	goto T2267;}
	{register object V1050;
	V1050= (V1049);
	V1047= make_cons((V1050),(V1047));}
	if(!(type_of((V1049))==t_cons)){
	goto T2267;}
	{register object x= CMPcar((V1049)),V1051= VV[72];
	while(V1051!=Cnil)
	if(eql(x,V1051->c.c_car)){
	goto T2276;
	}else V1051=V1051->c.c_cdr;
	goto T2267;}
	goto T2276;
T2276:;
	goto T2258;
	goto T2267;
T2267:;
	V1048= CMPcdr((V1048));
	V1049= CMPcar((V1048));
	goto T2262;}
	goto T2258;
T2258:;
	base[1]= nreverse((V1047));
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
	{object V1052;
	V1052=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1053;
	V1053= (V1052);
	goto T2283;
T2283:;
	if(type_of((V1053))==t_cons){
	goto T2284;}
	base[1]= (V1053);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2284;
T2284:;
	{register object V1054;
	V1054= CMPcar((V1053));
	V1053= CMPcdr((V1053));
	base[1]= (V1054);}
	vs_top=(vs_base=base+1)+1;
	L27(base0);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2288;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2288;
T2288:;
	goto T2283;}
	}
}
/*	local function LOOP-DESETQ-INTERNAL	*/

static void L28(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM109; VC109
	vs_check;
	{register object V1055;
	register object V1056;
	object V1057;
	V1055=(base[0]);
	V1056=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T2297;}
	V1057=(base[2]);
	vs_top=sup;
	goto T2298;
	goto T2297;
T2297:;
	V1057= Cnil;
	goto T2298;
T2298:;
	{register object V1058;
	V1058= (V1055);
	if(!(((V1058))==Cnil)){
	goto T2301;}
	if(!(type_of((V1056))==t_cons)){
	goto T2304;}
	if(!((CMPcar((V1056)))==(VV[62]))){
	goto T2307;}
	{object V1059;
	object V1060= CMPcdr((V1056));
	if(V1060==Cnil){
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	base[3]=V1059=MMcons(Cnil,Cnil);
	goto T2309;
T2309:;
	{register object V1061;
	V1061= (V1060->c.c_car);
	if(type_of((V1061))==t_cons){
	goto T2311;}
	(V1059->c.c_cdr)= Cnil;
	goto T2310;
	goto T2311;
T2311:;
	if(!((((CMPcar((V1061)))==(VV[65])?Ct:Cnil))==Cnil)){
	goto T2315;}
	goto T2313;
	goto T2315;
T2315:;
	if(!(((type_of(CMPcadr((V1061)))==t_symbol?Ct:Cnil))==Cnil)){
	goto T2317;}
	goto T2313;
	goto T2317;
T2317:;
	base[4]= (V1061);
	base[5]= base0[1];
	vs_top=(vs_base=base+4)+2;
	Lmacroexpand();
	vs_top=sup;
	V1061= vs_base[0];
	V1062 = (V1061);
	if(((type_of(V1062)==t_symbol?Ct:Cnil))==Cnil){
	goto T2313;}
	(V1059->c.c_cdr)= Cnil;
	goto T2310;
	goto T2313;
T2313:;
	(V1059->c.c_cdr)= make_cons((V1061),Cnil);}
	goto T2310;
T2310:;
	while(MMcdr(V1059)!=Cnil)V1059=MMcdr(V1059);
	if((V1060=MMcdr(V1060))==Cnil){
	base[3]=base[3]->c.c_cdr;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2309;}
	goto T2307;
T2307:;
	base[3]= make_cons((V1056),Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2304;
T2304:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2301;
T2301:;
	if(!(type_of((V1058))==t_cons)){
	goto T2323;}
	{object V1063;
	object V1064;
	object V1065;
	object V1066;
	V1063= CMPcar((V1055));
	V1064= CMPcdr((V1055));
	base[7]= (V1063);
	vs_top=(vs_base=base+7)+1;
	L27(base0);
	vs_top=sup;
	V1065= vs_base[0];
	base[7]= (V1064);
	vs_top=(vs_base=base+7)+1;
	L27(base0);
	vs_top=sup;
	V1066= vs_base[0];
	if(((V1065))!=Cnil){
	goto T2331;}
	if(((V1066))==Cnil){
	goto T2332;}
	goto T2331;
T2331:;
	if(((V1066))==Cnil){
	goto T2337;}
	{register object V1068;
	object V1069;
	if((V1057)!=Cnil){
	V1068= (V1057);
	goto T2339;}
	V1068= (VV[66]->s.s_dbind);
	goto T2339;
T2339:;
	base[9]= (V1063);
	base[10]= list(2,VV[65],(V1068));
	vs_top=(vs_base=base+9)+2;
	L28(base0);
	vs_top=sup;
	V1070= vs_base[0];
	V1071= list(3,VV[11],(V1068),list(2,VV[10],(V1068)));
	base[9]= (V1064);
	base[10]= (V1068);
	base[11]= (V1068);
	vs_top=(vs_base=base+9)+3;
	L28(base0);
	vs_top=sup;
	V1072= vs_base[0];
	V1073= make_cons(/* INLINE-ARGS */V1071,V1072);
	V1069= append(V1070,/* INLINE-ARGS */V1073);
	if((V1057)==Cnil){
	goto T2349;}
	if(((V1068))==((V1056))){
	goto T2353;}
	V1075= list(3,VV[11],(V1068),(V1056));
	V1074= make_cons(/* INLINE-ARGS */V1075,Cnil);
	goto T2351;
	goto T2353;
T2353:;
	V1074= Cnil;
	goto T2351;
T2351:;
	V1076 = (V1069);
	base[9]= append(V1074,V1076);
	vs_top=(vs_base=base+9)+1;
	return;
	goto T2349;
T2349:;
	V1077= list(2,(V1068),(V1056));
	V1078= listA(3,VV[29],make_cons(/* INLINE-ARGS */V1077,Cnil),(V1069));
	base[9]= make_cons(/* INLINE-ARGS */V1078,Cnil);
	vs_top=(vs_base=base+9)+1;
	return;}
	goto T2337;
T2337:;
	base[7]= (V1063);
	base[8]= list(2,VV[65],(V1056));
	base[9]= (V1057);
	vs_top=(vs_base=base+7)+3;
	L28(base0);
	return;
	goto T2332;
T2332:;
	base[7]= Cnil;
	vs_top=(vs_base=base+7)+1;
	return;}
	goto T2323;
T2323:;
	if(((V1055))==((V1056))){
	goto T2359;}
	V1079= list(3,VV[11],(V1055),(V1056));
	base[3]= make_cons(/* INLINE-ARGS */V1079,Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2359;
T2359:;
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
	{object V1080;
	V1080=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1081;
	object V1082;
	V1081= CMPmake_fixnum((long)length((V1080)));
	base[3]= VV[61];
	if(!(number_compare((V1081),small_fixnum(10))<0)){
	goto T2366;}
	base[4]= small_fixnum(10);
	goto T2364;
	goto T2366;
T2366:;
	base[4]= (V1081);
	goto T2364;
T2364:;
	base[5]= VV[20];
	base[6]= (VV[414]->s.s_gfdef);
	vs_top=(vs_base=base+3)+4;
	Lmake_hash_table();
	vs_top=sup;
	V1082= vs_base[0];
	{register object V1083;
	register object V1084;
	V1083= (V1080);
	V1084= CMPcar((V1083));
	goto T2374;
T2374:;
	if(!(((V1083))==Cnil)){
	goto T2375;}
	goto T2370;
	goto T2375;
T2375:;
	{object V1085;
	object V1087;
	V1085= symbol_name(CMPcar((V1084)));
	V1087= CMPcadr((V1084));
	base[6]= (V1085);
	base[7]= V1082;
	base[8]= (V1087);
	vs_top=(vs_base=base+6)+3;
	siLhash_set();
	vs_top=sup;}
	V1083= CMPcdr((V1083));
	V1084= CMPcar((V1083));
	goto T2374;}
	goto T2370;
T2370:;
	base[3]= (V1082);
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
	{register object V1088;
	register long V1089;
	V1088=(base[0]);
	V1089=fix(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	goto T2391;
T2391:;
	if(!((V1089)<=(4))){
	goto T2392;}switch(V1089){
	case 1:
	goto T2398;
T2398:;
	V1090= VV[10];
	goto T2396;
	case 2:
	goto T2399;
T2399:;
	V1090= VV[15];
	goto T2396;
	case 3:
	goto T2400;
T2400:;
	V1090= VV[16];
	goto T2396;
	case 4:
	goto T2401;
T2401:;
	V1090= VV[17];
	goto T2396;
	default:
	goto T2402;
T2402:;
	V1090= Cnil;
	goto T2396;}
	V1090= Cnil;
	goto T2396;
T2396:;
	V1091 = (V1088);
	V1088= list(2,V1090,V1091);
	base[2]= (V1088);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2392;
T2392:;
	V1088= list(2,VV[17],(V1088));
	V1089= (long)(V1089)-(4);
	goto T2391;
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

