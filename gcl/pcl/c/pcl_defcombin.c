
#include "cmpinclude.h"
#include "pcl_defcombin.h"
void init_pcl_defcombin(){do_init(VV);}
/*	macro definition for DEFINE-METHOD-COMBINATION	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	base[2]= V1;}
	if((CMPcddr(base[0]))==Cnil){
	goto T2;}
	{object V2= CMPcaddr(base[0]);
	if(!(type_of(V2)==t_cons||(V2)==Cnil)){
	goto T2;}}
	base[3]= (*(LnkLI139))(base[0]);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2;
T2:;
	base[3]= (*(LnkLI140))(base[0]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for (FAST-METHOD COMPUTE-EFFECTIVE-METHOD :AROUND (GENERIC-FUNCTION METHOD-COMBINATION T))	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	bds_check;
	{object V3;
	check_arg(5);
	V3=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[5]=make_cclosure_new(LC6,Cnil,Cnil,Cdata);
	base[5]=MMcons(base[5],Cnil);
	base[6]=make_cclosure_new(LC7,Cnil,base[5],Cdata);
	base[6]=MMcons(base[6],base[5]);
	base[7]= (base[5]->c.c_car);
	base[8]= (base[6]->c.c_car);
	bds_bind(VV[0],base[7]);
	bds_bind(VV[1],base[8]);
	vs_base=vs_top;
	L5(base);
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function (FAST-METHOD FIND-METHOD-COMBINATION (GENERIC-FUNCTION (EQL STANDARD) T))	*/

static object LI8(V10,V11,V12,V13,V14)

object V10;object V11;object V12;object V13;object V14;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	if(((V14))==Cnil){
	goto T12;}
	base[0]= VV[15];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk141)();
	vs_top=sup;
	goto T12;
T12:;
	{object V16 = (VV[16]->s.s_dbind);
	VMR3(V16)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass SHORT-METHOD-COMBINATION9981	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[17];
	base[1]= VV[18];
	base[2]= VV[19];
	V17= listA(9,VV[5],VV[20],VV[21],VV[22],VV[23],Cnil,VV[24],VV[25],Cnil);
	base[3]= list(2,/* INLINE-ARGS */V17,listA(9,VV[5],VV[26],VV[21],VV[27],VV[23],Cnil,VV[24],VV[28],Cnil));
	base[4]= list(2,VV[29],VV[30]);
	base[5]= Cnil;
	symlispcall(VV[142],base+0,6);
	return;
}
/*	local entry for function EXPAND-SHORT-DEFCOMBIN	*/

static object LI10(V19)

register object V19;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{object V20;
	object V21;
	object V22;
	object V23;
	V20= CMPcadr((V19));
	base[4]= CMPcddr((V19));
	base[5]= VV[31];
	base[6]= VV[32];
	vs_top=(vs_base=base+4)+3;
	Lgetf();
	vs_top=sup;
	V21= vs_base[0];
	base[4]= CMPcddr((V19));
	base[5]= VV[33];
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	Lgetf();
	vs_top=sup;
	V22= vs_base[0];
	base[4]= CMPcddr((V19));
	base[5]= VV[34];
	base[6]= (V20);
	vs_top=(vs_base=base+4)+3;
	Lgetf();
	vs_top=sup;
	V23= vs_base[0];
	V24= list(2,VV[35],(V20));
	V25= list(2,VV[38],(V20));
	V26= list(2,VV[38],(V23));
	V27= list(2,VV[38],(V22));
	V28= list(5,VV[37],/* INLINE-ARGS */V25,/* INLINE-ARGS */V26,/* INLINE-ARGS */V27,list(2,VV[38],(V21)));
	{object V29 = (*(LnkLI143))(/* INLINE-ARGS */V24,VV[36],/* INLINE-ARGS */V28);
	VMR5(V29)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOAD-SHORT-DEFCOMBIN	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V30;
	check_arg(4);
	V30=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	base[2]=MMcons(base[2],base[1]);
	base[3]=MMcons(base[3],base[2]);
	vs_top=sup;
	{object V31;
	object V32;
	object V33;
	vs_base=vs_top;
	(void) (*Lnk144)();
	vs_top=sup;
	V31= vs_base[0];
	V34= (VFUN_NARGS=1,(*(LnkLI145))(VV[39]));
	V35= (*(LnkLI146))((V30));
	V32= list(3,/* INLINE-ARGS */V34,/* INLINE-ARGS */V35,(VV[40]->s.s_dbind));
	V36= (VV[148]->s.s_gfdef);
	V33= (VFUN_NARGS=4,(*(LnkLI147))(V36,Cnil,(V32),Cnil));
	base[7]=MMcons(Cnil,base[3]);
	base[8]= VV[41];
	base[9]= VV[42];
	base[10]= Cnil;
	base[11]= VV[43];
	base[12]= (V32);
	base[13]= VV[44];
	base[14]= VV[45];
	base[15]= VV[46];
	base[16]= 
	make_cclosure_new(LC28,Cnil,base[7],Cdata);
	base[17]= VV[47];
	base[18]= list(2,list(2,VV[35],(V30)),(V31));
	vs_top=(vs_base=base+8)+11;
	(void) (*Lnk149)(Lclptr149);
	vs_top=sup;
	(base[7]->c.c_car)= vs_base[0];
	if(((V33))==Cnil){
	goto T52;}
	base[8]=(VV[150]->s.s_gfdef);
	base[9]= (VV[148]->s.s_gfdef);
	base[10]= (V33);
	(void)simple_lispcall(base+8,2);
	goto T52;
T52:;
	base[8]=(VV[151]->s.s_gfdef);
	base[9]= (VV[148]->s.s_gfdef);
	base[10]= (base[7]->c.c_car);
	(void)simple_lispcall(base+8,2);
	base[8]= (V30);
	vs_top=(vs_base=base+8)+1;
	return;}
	}
}
/*	function definition for MAKE-SHORT-METHOD-COMBINATION	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	{object V37;
	register object V38;
	object V39;
	object V40;
	object V41;
	object V42;
	check_arg(6);
	V37=(base[0]);
	V38=(base[1]);
	V39=(base[2]);
	V40=(base[3]);
	V41=(base[4]);
	V42=(base[5]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V38))!=Cnil){
	goto T62;}
	V38= VV[48];
	goto T60;
	goto T62;
T62:;
	{object V43;
	V43= (equal((V38),VV[49])?Ct:Cnil);
	if(((V43))==Cnil){
	goto T67;}
	goto T60;
	goto T67;
T67:;
	{object V44;
	V44= (equal((V38),VV[50])?Ct:Cnil);
	if(((V44))==Cnil){
	goto T71;}
	goto T60;
	goto T71;
T71:;
	base[6]= VV[51];
	base[7]= (V37);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk141)();
	vs_top=sup;}}
	goto T60;
T60:;
	base[6]= VV[17];
	base[7]= VV[52];
	base[8]= (V37);
	base[9]= VV[53];
	base[10]= (V38);
	base[11]= VV[34];
	base[12]= (V39);
	base[13]= VV[33];
	base[14]= (V40);
	base[15]= VV[47];
	base[16]= (V41);
	base[17]= VV[31];
	base[18]= (V42);
	vs_top=(vs_base=base+6)+13;
	(void) (*Lnk149)(Lclptr149);
	return;
	}
}
/*	local entry for function (FAST-METHOD COMPUTE-EFFECTIVE-METHOD (GENERIC-FUNCTION SHORT-METHOD-COMBINATION T))	*/

static object LI13(V50,V51,V52,V53,V54)

object V50;object V51;object V52;object V53;object V54;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V56;
	object V57;
	object V58;
	object V59;
	register object V60;
	base[1]= (V53);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk152)(Lclptr152);
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V53);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk153)(Lclptr153);
	vs_top=sup;
	V56= vs_base[0];
	base[1]= (V53);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk154)(Lclptr154);
	vs_top=sup;
	V57= vs_base[0];
	base[1]= (V53);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk155)(Lclptr155);
	vs_top=sup;
	V61= vs_base[0];
	V58= CMPcar(V61);
	V59= Cnil;
	V60= Cnil;
	{register object V62;
	register object V63;
	V62= (V54);
	V63= CMPcar((V62));
	goto T103;
T103:;
	if(!(((V62))==Cnil)){
	goto T104;}
	goto T99;
	goto T104;
T104:;
	{register object V64;
	base[2]= (V63);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk156)(Lclptr156);
	vs_top=sup;
	V64= vs_base[0];
	if(((V64))!=Cnil){
	goto T112;}
	base[2]= (V63);
	base[3]= VV[54];
	vs_top=(vs_base=base+2)+2;
	L15(base);
	vs_top=sup;
	goto T108;
	goto T112;
T112:;
	if((CMPcdr((V64)))==Cnil){
	goto T117;}
	base[2]= (V63);
	base[3]= VV[55];
	vs_top=(vs_base=base+2)+2;
	L15(base);
	vs_top=sup;
	goto T108;
	goto T117;
T117:;
	if(!((CMPcar((V64)))==(VV[56]))){
	goto T122;}
	V59= make_cons(V63,(V59));
	goto T108;
	goto T122;
T122:;
	if(!((CMPcar((V64)))==(base[0]))){
	goto T126;}
	V60= make_cons(V63,(V60));
	goto T108;
	goto T126;
T126:;
	base[2]= (V63);
	base[3]= VV[57];
	vs_top=(vs_base=base+2)+2;
	L15(base);
	vs_top=sup;}
	goto T108;
T108:;
	V62= CMPcdr((V62));
	V63= CMPcar((V62));
	goto T103;}
	goto T99;
T99:;
	V59= nreverse((V59));
	if(((V58))==(VV[59])){
	goto T138;}
	V60= nreverse((V60));
	goto T138;
T138:;
	{object V67;
	if((CMPcdr((V60)))!=Cnil){
	goto T144;}
	if(((V57))==Cnil){
	goto T144;}
	V67= list(3,VV[60],CMPcar((V60)),Cnil);
	goto T142;
	goto T144;
T144:;
	{object V69;
	object V70= (V60);
	if(V70==Cnil){
	V68= Cnil;
	goto T148;}
	base[1]=V69=MMcons(Cnil,Cnil);
	goto T149;
T149:;
	(V69->c.c_car)= list(3,VV[60],(V70->c.c_car),Cnil);
	if((V70=MMcdr(V70))==Cnil){
	V68= base[1];
	goto T148;}
	V69=MMcdr(V69)=MMcons(Cnil,Cnil);
	goto T149;}
	goto T148;
T148:;
	V67= make_cons((V56),V68);
	goto T142;
T142:;
	if(((V60))!=Cnil){
	goto T152;}
	V72= list(2,VV[38],base[0]);
	{object V73 = list(4,VV[61],VV[62],/* INLINE-ARGS */V72,list(2,VV[38],(V52)));
	VMR8(V73)}
	goto T152;
T152:;
	if(((V59))!=Cnil){
	goto T155;}
	{object V74 = (V67);
	VMR8(V74)}
	goto T155;
T155:;
	V75= CMPcar((V59));
	V76= CMPcdr((V59));
	V77= list(2,VV[63],(V67));
	V78= make_cons(/* INLINE-ARGS */V77,Cnil);
	{object V79 = list(3,VV[60],/* INLINE-ARGS */V75,append(/* INLINE-ARGS */V76,/* INLINE-ARGS */V78));
	VMR8(V79)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXPAND-LONG-DEFCOMBIN	*/

static object LI16(V81)

register object V81;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{object V82;
	object V83;
	object V84;
	register object V85;
	object V86;
	object V87;
	V82= CMPcadr((V81));
	V83= CMPcaddr((V81));
	V84= CMPcadddr((V81));
	V85= CMPcddddr((V81));
	V86= Cnil;
	V87= Cnil;
	if(!(type_of(CMPcar((V85)))==t_cons)){
	goto T161;}
	if(!((CMPcaar((V85)))==(VV[64]))){
	goto T161;}
	{object V89;
	V89= CMPcar((V85));
	V85= CMPcdr((V85));
	V88= (V89);}
	V86= CMPcdr(V88);
	goto T161;
T161:;
	if(!(type_of(CMPcar((V85)))==t_cons)){
	goto T171;}
	if(!((CMPcaar((V85)))==(VV[65]))){
	goto T171;}
	{object V91;
	V91= CMPcar((V85));
	V85= CMPcdr((V85));
	V90= (V91);}
	V87= CMPcadr(V90);
	goto T171;
T171:;
	{object V92;
	object V93;
	base[0]= (V82);
	base[1]= (V83);
	base[2]= (V84);
	base[3]= (V86);
	base[4]= (V87);
	base[5]= (V85);
	vs_top=(vs_base=base+0)+6;
	(void) (*Lnk157)();
	if(vs_base>=vs_top){vs_top=sup;goto T188;}
	V92= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T189;}
	V93= vs_base[0];
	vs_top=sup;
	goto T190;
	goto T188;
T188:;
	V92= Cnil;
	goto T189;
T189:;
	V93= Cnil;
	goto T190;
T190:;
	V94= list(2,VV[35],(V82));
	V95= list(2,VV[38],(V82));
	V96= list(2,VV[38],(V92));
	V97= list(2,VV[68],(V93));
	V98= list(5,VV[67],/* INLINE-ARGS */V95,/* INLINE-ARGS */V96,/* INLINE-ARGS */V97,list(2,VV[38],(V86)));
	{object V99 = (*(LnkLI143))(/* INLINE-ARGS */V94,VV[66],/* INLINE-ARGS */V98);
	VMR9(V99)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOAD-LONG-DEFCOMBIN	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{register object V100;
	check_arg(4);
	V100=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	base[2]=MMcons(base[2],base[1]);
	base[3]=MMcons(base[3],base[2]);
	vs_top=sup;
	{object V101;
	object V102;
	object V103;
	V104= (VFUN_NARGS=1,(*(LnkLI145))(VV[39]));
	V105= (*(LnkLI146))((V100));
	V101= list(3,/* INLINE-ARGS */V104,/* INLINE-ARGS */V105,(VV[40]->s.s_dbind));
	V106= (VV[148]->s.s_gfdef);
	V102= (VFUN_NARGS=4,(*(LnkLI147))(V106,Cnil,(V101),Cnil));
	base[7]= VV[41];
	base[8]= VV[42];
	base[9]= Cnil;
	base[10]= VV[43];
	base[11]= (V101);
	base[12]= VV[44];
	base[13]= VV[69];
	base[14]= VV[46];
	base[15]= 
	make_cclosure_new(LC29,Cnil,base[3],Cdata);
	base[16]= VV[47];
	V107= list(2,VV[35],(V100));
	vs_base=vs_top;
	(void) (*Lnk144)();
	vs_top=sup;
	V108= vs_base[0];
	base[17]= list(2,/* INLINE-ARGS */V107,V108);
	vs_top=(vs_base=base+7)+11;
	(void) (*Lnk149)(Lclptr149);
	vs_top=sup;
	V103= vs_base[0];
	{object V110;
	object V111;
	V110= (VV[72]->s.s_dbind);
	V111= (base[2]->c.c_car);
	base[7]= V100;
	base[8]= (V110);
	base[9]= (V111);
	vs_top=(vs_base=base+7)+3;
	siLhash_set();
	vs_top=sup;}
	if(((V102))==Cnil){
	goto T213;}
	base[7]=(VV[150]->s.s_gfdef);
	base[8]= (VV[148]->s.s_gfdef);
	base[9]= (V102);
	(void)simple_lispcall(base+7,2);
	goto T213;
T213:;
	base[7]=(VV[151]->s.s_gfdef);
	base[8]= (VV[148]->s.s_gfdef);
	base[9]= (V103);
	(void)simple_lispcall(base+7,2);
	base[7]= (V100);
	vs_top=(vs_base=base+7)+1;
	return;}
	}
}
/*	function definition for (FAST-METHOD COMPUTE-EFFECTIVE-METHOD (GENERIC-FUNCTION LONG-METHOD-COMBINATION T))	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{object V112;
	object V113;
	object V114;
	register object V115;
	object V116;
	check_arg(5);
	V112=(base[0]);
	V113=(base[1]);
	V114=(base[2]);
	V115=(base[3]);
	V116=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[7]= (V115);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk152)(Lclptr152);
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= (VV[72]->s.s_dbind);
	vs_top=(vs_base=base+6)+2;
	Lgethash();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (V114);
	base[7]= (V115);
	base[8]= (V116);
	vs_top=(vs_base=base+6)+3;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	function definition for MAKE-LONG-METHOD-COMBINATION-FUNCTION	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{object V118;
	object V119;
	object V120;
	object V121;
	object V122;
	object V123;
	check_arg(6);
	V118=(base[0]);
	V119=(base[1]);
	V120=(base[2]);
	V121=(base[3]);
	V122=(base[4]);
	V123=(base[5]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V124;
	object V125;
	object V126;
	base[6]= (V123);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk158)();
	if(vs_base>=vs_top){vs_top=sup;goto T232;}
	V124= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T233;}
	V125= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T234;}
	V126= vs_base[0];
	vs_top=sup;
	goto T235;
	goto T232;
T232:;
	V124= Cnil;
	goto T233;
T233:;
	V125= Cnil;
	goto T234;
T234:;
	V126= Cnil;
	goto T235;
T235:;
	{register object V127;
	V127= (*(LnkLI159))((V120),(V125),(V126));
	if(((V122))==Cnil){
	goto T237;}
	{object V128;
	object V130;
	V128= list(2,(V122),VV[73]);
	V130= make_cons((V128),CMPcadr(V127));
	(CMPcdr(V127))->c.c_car = (V130);
	(void)(CMPcdr(V127));}
	goto T237;
T237:;
	if(((V121))==Cnil){
	goto T243;}
	V127= (*(LnkLI160))((V127),(V121));
	goto T243;
T243:;
	if(((V119))==Cnil){
	goto T247;}
	V127= list(3,VV[74],list(3,VV[75],(V119),(V127)),VV[76]);
	goto T247;
T247:;
	base[6]= (V124);
	base[7]= list(4,VV[75],VV[77],VV[78],list(3,VV[79],VV[80],(V127)));
	vs_top=(vs_base=base+6)+2;
	return;}}
	}
}
/*	local entry for function WRAP-METHOD-GROUP-SPECIFIER-BINDINGS	*/

static object LI20(V134,V135,V136)

object V134;object V135;object V136;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{register object V137;
	register object V138;
	register object V139;
	register object V140;
	register object V141;
	V137= Cnil;
	V138= Cnil;
	V139= Cnil;
	V140= Cnil;
	V141= Cnil;
	{register object V142;
	object V143;
	V142= (V134);
	V143= CMPcar((V142));
	goto T257;
T257:;
	if(!(((V142))==Cnil)){
	goto T258;}
	goto T253;
	goto T258;
T258:;
	{register object V144;
	object V145;
	register object V146;
	register object V147;
	object V148;
	base[1]= (V143);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk161)();
	if(vs_base>=vs_top){vs_top=sup;goto T265;}
	V144= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T266;}
	V145= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T267;}
	V146= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T268;}
	V147= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T269;}
	V148= vs_base[0];
	vs_top=sup;
	goto T270;
	goto T265;
T265:;
	V144= Cnil;
	goto T266;
T266:;
	V145= Cnil;
	goto T267;
T267:;
	V146= Cnil;
	goto T268;
T268:;
	V147= Cnil;
	goto T269;
T269:;
	V148= Cnil;
	goto T270;
T270:;
	{register object V149;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V149= vs_base[0];
	V137= make_cons(V144,(V137));
	V138= make_cons(V149,(V138));
	{object V152;
	V153= make_cons(VV[81],(V145));
	V154= list(3,VV[83],list(3,VV[84],(V149),VV[85]),VV[86]);
	V155= list(3,VV[87],VV[80],list(2,VV[38],list(3,VV[61],VV[88],list(2,VV[38],(V144)))));
	V156= list(4,VV[82],/* INLINE-ARGS */V154,/* INLINE-ARGS */V155,list(3,VV[89],(V149),VV[85]));
	V152= list(3,/* INLINE-ARGS */V153,/* INLINE-ARGS */V156,list(3,VV[90],VV[91],(V144)));
	V139= make_cons((V152),(V139));}
	if(((V148))==Cnil){
	goto T279;}
	{object V157;
	V158= list(2,VV[93],(V144));
	V157= list(3,VV[92],/* INLINE-ARGS */V158,list(3,VV[87],VV[80],list(2,VV[38],list(3,VV[61],VV[94],list(2,VV[38],(V144))))));
	V140= make_cons((V157),(V140));}
	goto T279;
T279:;
	goto T286;
T286:;
	base[1]= (V147);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T288;}{object V159;
	V159= (V147);
	base[1]= (V147);
	vs_top=(vs_base=base+1)+1;
	Leval();
	vs_top=sup;
	V147= vs_base[0];
	if((((V159)==((V147))?Ct:Cnil))==Cnil){
	goto T287;}}
	goto T288;
T288:;
	goto T284;
	goto T287;
T287:;
	goto T286;
	goto T284;
T284:;
	{object V160;
	if(!(((V147))==(VV[95]))){
	goto T298;}
	V160= list(3,VV[89],(V144),list(2,VV[96],(V144)));
	goto T296;
	goto T298;
T298:;
	if(!(((V147))==(VV[59]))){
	goto T301;}
	V160= Cnil;
	goto T296;
	goto T301;
T301:;
	V160= list(4,VV[97],(V147),list(2,VV[95],list(3,VV[89],(V144),list(2,VV[96],(V144)))),VV[98]);
	goto T296;
T296:;
	V141= make_cons((V160),(V141));}}}
	V142= CMPcdr((V142));
	V143= CMPcar((V142));
	goto T257;}
	goto T253;
T253:;
	V161= nreverse((V137));
	V162= nreverse((V138));
	V163= append(/* INLINE-ARGS */V161,/* INLINE-ARGS */V162);
	V164= nreverse((V139));
	V165= list(3,VV[100],VV[101],list(4,VV[99],VV[102],VV[103],make_cons(VV[104],/* INLINE-ARGS */V164)));
	base[0]= nreverse((V140));
	base[1]= nreverse((V141));
	base[2]= (V136);
	vs_top=(vs_base=base+0)+3;
	Lappend();
	vs_top=sup;
	V166= vs_base[0];
	V167= make_cons(/* INLINE-ARGS */V165,V166);
	{object V168 = listA(3,VV[99],/* INLINE-ARGS */V163,append((V135),/* INLINE-ARGS */V167));
	VMR13(V168)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for PARSE-METHOD-GROUP-SPECIFIER	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V169;
	check_arg(1);
	V169=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V170;
	{object V171;
	V171= CMPcar((V169));
	V169= CMPcdr((V169));
	V170= (V171);}
	{register object V172;
	V172= (V169);
	{register object V173;
	V173= Cnil;
	{register object V174;
	register object V175;
	register object V176;
	V174= make_cons(Cnil,Cnil);
	V175= (V174);
	V176= Cnil;
	{register object V177;
	register object V178;
	register object V179;
	V177= make_cons(Cnil,Cnil);
	V178= (V177);
	V179= Cnil;
	goto T324;
T324:;
	if(!(type_of((V172))!=t_cons)){
	goto T326;}
	goto T325;
	goto T326;
T326:;
	V173= CMPcar((V172));
	{register object x= (V173),V180= VV[105];
	while(V180!=Cnil)
	if(x==(V180->c.c_car)){
	goto T333;
	}else V180=V180->c.c_cdr;
	goto T331;}
	goto T333;
T333:;
	goto T325;
	goto T331;
T331:;{object V181;
	V181= (V175);
	V175= make_cons((V173),Cnil);
	(V181)->c.c_cdr = (V175);}
	V176= CMPcdr((V174));{object V182;
	V182= (V178);
	V183= (*(LnkLI162))((V170),(V173));
	V178= make_cons(/* INLINE-ARGS */V183,Cnil);
	(V182)->c.c_cdr = (V178);}
	V179= CMPcdr((V177));
	V172= CMPcdr((V172));
	goto T324;
	goto T325;
T325:;
	base[3]= (V170);
	base[4]= (V179);
	base[6]= (V172);
	base[7]= VV[106];
	V184= nreverse((V176));
	base[8]= (*(LnkLI163))(/* INLINE-ARGS */V184);
	vs_top=(vs_base=base+6)+3;
	Lgetf();
	vs_top=sup;
	base[5]= vs_base[0];
	base[7]= (V172);
	base[8]= VV[107];
	base[9]= VV[95];
	vs_top=(vs_base=base+7)+3;
	Lgetf();
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= (V172);
	base[9]= VV[108];
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	Lgetf();
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+3)+5;
	return;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}}}}}
	}
}
/*	local entry for function PARSE-QUALIFIER-PATTERN	*/

static object LI22(V187,V188)

object V187;register object V188;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(!(((V188))==(Cnil))){
	goto T360;}
	{object V189 = VV[109];
	VMR15(V189)}
	goto T360;
T360:;
	if(!(((V188))==(VV[110]))){
	goto T363;}
	{object V190 = Ct;
	VMR15(V190)}
	goto T363;
T363:;
	if(!(type_of((V188))==t_symbol)){
	goto T366;}
	{object V191 = list(2,(V188),VV[111]);
	VMR15(V191)}
	goto T366;
T366:;
	if(!(type_of((V188))==t_cons||((V188))==Cnil)){
	goto T369;}
	{object V192 = list(3,VV[112],list(2,VV[38],(V188)),VV[111]);
	VMR15(V192)}
	goto T369;
T369:;
	base[0]= VV[113];
	base[1]= (V187);
	base[2]= (V188);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V193 = vs_base[0];
	VMR15(V193)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function QUALIFIER-CHECK-RUNTIME	*/

static object LI23(V196,V197)

register object V196;register object V197;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	goto T375;
T375:;
	if(((V196))!=Cnil){
	goto T378;}
	if(((V197))!=Cnil){
	goto T378;}
	{object V198 = Ct;
	VMR16(V198)}
	goto T378;
T378:;
	if(!(((V196))==(VV[110]))){
	goto T383;}
	{object V199 = Ct;
	VMR16(V199)}
	goto T383;
T383:;
	if(((V196))==Cnil){
	goto T386;}
	if(((V197))==Cnil){
	goto T386;}
	{register object V200;
	V200= CMPcar((V196));
	if(!(((V200))==(CMPcar((V197))))){
	goto T393;}
	goto T391;
	goto T393;
T393:;
	if(!(((V200))==(VV[110]))){
	goto T386;}}
	goto T391;
T391:;
	{register object V201;
	V201= CMPcar((V196));
	V196= CMPcdr((V196));}
	{register object V202;
	V202= CMPcar((V197));
	V197= CMPcdr((V197));
	goto T376;}
	goto T386;
T386:;
	{object V203 = Cnil;
	VMR16(V203)}
	goto T376;
T376:;
	goto T375;
	return Cnil;
}
/*	local entry for function MAKE-DEFAULT-METHOD-GROUP-DESCRIPTION	*/

static object LI24(V205)

register object V205;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if((CMPcdr((V205)))==Cnil){
	goto T404;}
	base[0]= Cnil;
	base[1]= VV[114];
	base[3]= (V205);
	vs_top=(vs_base=base+3)+1;
	Lbutlast();
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= (V205);
	vs_top=(vs_base=base+4)+1;
	Llast();
	vs_top=sup;
	V206= vs_base[0];
	base[3]= CMPcar(V206);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V207 = vs_base[0];
	VMR17(V207)}
	goto T404;
T404:;
	base[0]= Cnil;
	base[1]= VV[115];
	base[2]= CMPcar((V205));
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V208 = vs_base[0];
	VMR17(V208)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DEAL-WITH-ARGUMENTS-OPTION	*/

static object LI25(V211,V212)

object V211;object V212;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V213;
	register object V214;
	register object V215;
	object V216;
	{register object V217;
	register object V218;
	V217= Cnil;
	V218= (V212);
	{object V219;
	object V220;
	V219= make_cons(Cnil,Cnil);
	V220= (V219);
	goto T420;
T420:;
	if(!(((V218))==Cnil)){
	goto T422;}
	goto T421;
	goto T422;
T422:;
	V217= CMPcar((V218));
	V218= CMPcdr((V218));
	{register object x= (V217),V221= VV[116];
	while(V221!=Cnil)
	if(x==(V221->c.c_car)){
	goto T429;
	}else V221=V221->c.c_cdr;}{object V222;
	V222= (V220);
	V223= list(2,(V217),list(2,VV[38],(V217)));
	V220= make_cons(/* INLINE-ARGS */V223,Cnil);
	(V222)->c.c_cdr = (V220);}
	goto T429;
T429:;
	goto T420;
	goto T421;
T421:;
	V213= CMPcdr((V219));
	goto T416;
	V213= Cnil;
	goto T416;}}
	goto T416;
T416:;
	V214= small_fixnum(0);
	V215= small_fixnum(0);
	V216= Cnil;
	{register object V224;
	V224= VV[117];
	{register object V225;
	register object V226;
	V225= Cnil;
	V226= (V212);
	goto T436;
T436:;
	if(!(((V226))==Cnil)){
	goto T438;}
	goto T437;
	goto T438;
T438:;
	V225= CMPcar((V226));
	V226= CMPcdr((V226));
	{register object x= (V225),V227= VV[116];
	while(V227!=Cnil)
	if(x==(V227->c.c_car)){
	goto T448;
	}else V227=V227->c.c_cdr;
	goto T447;}
	goto T448;
T448:;
	V224= (V225);
	goto T445;
	goto T447;
T447:;
	{object V228= (V224);
	if((V228!= VV[117]))goto T450;
	V214= number_plus((V214),small_fixnum(1));
	goto T445;
	goto T450;
T450:;
	if((V228!= VV[138]))goto T452;
	V215= number_plus((V215),small_fixnum(1));
	goto T445;
	goto T452;
T452:;
	if((V228!= VV[164]))goto T454;
	V216= (V225);
	V224= VV[117];
	goto T445;
	goto T454;
T454:;}
	goto T445;
T445:;
	goto T436;
	goto T437;
T437:;
	goto T434;}}
	goto T434;
T434:;
	goto T460;
T460:;
	{register object x= CMPcar((V211)),V229= VV[118];
	while(V229!=Cnil)
	if(x==(V229->c.c_car)){
	goto T461;
	}else V229=V229->c.c_cdr;}
	base[1]= VV[119];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk165)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= Cnil;
	base[3]= VV[120];
	base[4]= VV[166];
	goto T460;
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk167)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk168)();
	vs_top=sup;
	goto T461;
T461:;
	goto T458;
	goto T458;
T458:;
	{object V231;
	V231= append((V213),CMPcadr((V211)));
	(CMPcdr(V211))->c.c_car = (V231);
	(void)(CMPcdr(V211));}
	{register object x= VV[121],V232= (V212);
	while(V232!=Cnil)
	if(x==(V232->c.c_car)){
	goto T474;
	}else V232=V232->c.c_cdr;}
	{register object x= VV[122],V233= (V212);
	while(V233!=Cnil)
	if(x==(V233->c.c_car)){
	goto T474;
	}else V233=V233->c.c_cdr;}
	{object V234;
	{register object x= VV[123],V235= (V212);
	while(V235!=Cnil)
	if(x==(V235->c.c_car)){
	V234= V235;
	goto T479;
	}else V235=V235->c.c_cdr;
	V234= Cnil;}
	goto T479;
T479:;
	base[1]= (V212);
	base[2]= (V234);
	vs_top=(vs_base=base+1)+2;
	Lldiff();
	vs_top=sup;
	base[0]= vs_base[0];
	{register object x= VV[124],V236= (V212);
	while(V236!=Cnil)
	if(x==(V236->c.c_car)){
	goto T487;
	}else V236=V236->c.c_cdr;
	goto T486;}
	goto T487;
T487:;
	base[1]= VV[125];
	goto T484;
	goto T486;
T486:;
	base[1]= VV[126];
	goto T484;
T484:;
	base[2]= (V234);
	vs_top=(vs_base=base+0)+3;
	Lappend();
	vs_top=sup;
	V212= vs_base[0];}
	goto T474;
T474:;
	V237= list(2,list(2,VV[127],(V211)),VV[128]);
	V238= list(2,VV[38],(V212));
	V239= list(2,VV[38],(V214));
	V240= list(6,VV[129],VV[131],VV[132],VV[133],/* INLINE-ARGS */V239,list(2,VV[38],(V215)));
	{register object x= VV[134],V242= (V212);
	while(V242!=Cnil)
	if(x==(V242->c.c_car)){
	goto T492;
	}else V242=V242->c.c_cdr;
	goto T491;}
	goto T492;
T492:;
	V241= VV[135];
	goto T489;
	goto T491;
T491:;
	V241= Cnil;
	goto T489;
T489:;
	if(((V216))==Cnil){
	goto T495;}
	V243= list(4,VV[129],VV[136],list(2,VV[38],(V216)),VV[137]);
	goto T493;
	goto T495;
T495:;
	V243= Cnil;
	goto T493;
T493:;
	{object V244 = list(3,VV[99],/* INLINE-ARGS */V237,list(7,VV[129],VV[130],/* INLINE-ARGS */V238,/* INLINE-ARGS */V240,V241,V243,VV[127]));
	VMR18(V244)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FROB-COMBINED-METHOD-ARGS	*/

static object LI26(V249,V250,V251,V252)

register object V249;object V250;object V251;object V252;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{register object V253;
	V253= VV[117];
	{register object V254;
	register object V255;
	V254= Cnil;
	V255= (V250);
	{register long V256;
	register long V257;
	V256= 0;
	V257= 0;
	{object V258;
	object V259;
	object V260;
	V258= make_cons(Cnil,Cnil);
	V259= (V258);
	V260= Cnil;
	{object V261;
	object V262;
	object V263;
	V261= make_cons(Cnil,Cnil);
	V262= (V261);
	V263= Cnil;
	goto T506;
T506:;
	if(!(((V255))==Cnil)){
	goto T508;}
	goto T507;
	goto T508;
T508:;
	V254= CMPcar((V255));
	V255= CMPcdr((V255));
	{register object x= (V254),V264= VV[116];
	while(V264!=Cnil)
	if(x==(V264->c.c_car)){
	goto T518;
	}else V264=V264->c.c_cdr;
	goto T517;}
	goto T518;
T518:;
	V253= (V254);
	if(((V253))==(VV[138])){
	goto T515;}
	vs_base=vs_top;
	(void) (*Lnk169)();
	vs_top=sup;
	goto T515;
	goto T517;
T517:;
	if(!(((V253))==(VV[117]))){
	goto T524;}
	V256= (long)(V256)+1;{object V265;
	V265= (V259);
	{object V267;
	V267= CMPcar((V249));
	V249= CMPcdr((V249));
	V266= (V267);}
	V259= make_cons(V266,Cnil);
	(V265)->c.c_cdr = (V259);}
	V260= CMPcdr((V258));
	goto T515;
	goto T524;
T524:;
	if(!(((V253))==(VV[138]))){
	goto T515;}
	V257= (long)(V257)+1;{object V268;
	V268= (V262);
	{object V270;
	V270= CMPcar((V249));
	V249= CMPcdr((V249));
	V269= (V270);}
	V262= make_cons(V269,Cnil);
	(V268)->c.c_cdr = (V262);}
	V263= CMPcdr((V261));
	goto T515;
T515:;
	goto T506;
	goto T507;
T507:;
	base[3]= (V260);
	base[4]= CMPmake_fixnum(V256);
	base[5]= (V251);
	vs_top=(vs_base=base+3)+3;
	L27(base);
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= (V263);
	base[5]= CMPmake_fixnum(V257);
	base[6]= (V252);
	vs_top=(vs_base=base+4)+3;
	L27(base);
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V249);
	vs_top=(vs_base=base+2)+3;
	Lnconc();
	vs_top=sup;
	{object V271 = vs_base[0];
	VMR19(V271)}
	{object V272 = Cnil;
	VMR19(V272)}}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local function FROB	*/

static void L27(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{object V273;
	object V274;
	object V275;
	check_arg(3);
	V273=(base[0]);
	V274=(base[1]);
	V275=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(number_compare((V274),(V275))>0)){
	goto T557;}
	base[3]= (V273);
	base[4]= number_minus((V274),(V275));
	vs_top=(vs_base=base+3)+2;
	Lbutlast();
	return;
	goto T557;
T557:;
	if(!(number_compare((V274),(V275))<0)){
	goto T562;}
	base[3]= number_minus((V275),(V274));
	vs_top=(vs_base=base+3)+1;
	Lmake_list();
	vs_top=sup;
	V276= vs_base[0];
	base[3]= nconc((V273),V276);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T562;
T562:;
	base[3]= (V273);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC30(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{object V277;
	check_arg(1);
	V277=(base[0]);
	vs_top=sup;
	base[1]= Cnil;
	base[2]= (V277);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk170)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC29(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	{object V278;
	object V279;
	object V280;
	if(vs_top-vs_base<2) too_few_arguments();
	V278=(base[0]);
	V279=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V280=(base[2]);
	vs_top=sup;
	ck_larg_exactly(3,V278);
	base[3]=(V278)->c.c_car;
	base[4]=((V278
	)->c.c_cdr)->c.c_car;
	base[5]=(((V278
	)->c.c_cdr
	)->c.c_cdr)->c.c_car;
	base[6]= VV[70];
	base[7]= VV[52];
	base[8]= base[4];
	base[9]= VV[53];
	base[10]= base[5];
	base[11]= VV[46];
	base[12]= (base0[1]->c.c_car);
	base[13]= VV[71];
	base[14]= (base0[0]->c.c_car);
	base[15]= VV[31];
	base[16]= (base0[2]->c.c_car);
	vs_top=(vs_base=base+6)+11;
	(void) (*Lnk149)(Lclptr149);
	return;
	}
}
/*	local function LOSE	*/

static void L15(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{register object V282;
	object V283;
	check_arg(2);
	V282=(base[0]);
	V283=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V282);
	base[3]= VV[58];
	base[4]= (V282);
	base[5]= (V283);
	base[6]= base0[0];
	base[7]= base0[0];
	vs_top=(vs_base=base+2)+6;
	(void) (*Lnk171)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC28(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{object V284;
	object V285;
	object V286;
	if(vs_top-vs_base<2) too_few_arguments();
	V284=(base[0]);
	V285=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V286=(base[2]);
	vs_top=sup;
	ck_larg_exactly(3,V284);
	base[3]=(V284)->c.c_car;
	base[4]=((V284
	)->c.c_cdr)->c.c_car;
	base[5]=(((V284
	)->c.c_cdr
	)->c.c_cdr)->c.c_car;
	base[6]= base[4];
	base[7]= base[5];
	base[8]= (base0[3]->c.c_car);
	base[9]= (base0[2]->c.c_car);
	base[10]= (base0[0]->c.c_car);
	base[11]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+6)+6;
	(void) (*Lnk172)();
	return;
	}
}
/*	local function REAL-METHOD-COMBINATION-ERROR	*/

static void LC7(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	{object V288;
	object V289;
	if(vs_top-vs_base<1) too_few_arguments();
	V288=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V289=(base[1]);
	vs_top=sup;
	base[2]= (V288);
	{object V290;
	V290= (V289);
	 vs_top=base+3;
	 while(V290!=Cnil)
	 {vs_push((V290)->c.c_car);V290=(V290)->c.c_cdr;}
	vs_base=base+2;}
	Lerror();
	return;
	}
}
/*	local function REAL-INVALID-METHOD-ERROR	*/

static void LC6(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	{object V291;
	object V292;
	object V293;
	if(vs_top-vs_base<2) too_few_arguments();
	V291=(base[0]);
	V292=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V293=(base[2]);
	vs_top=sup;
	base[3]= (V292);
	{object V294;
	V294= (V293);
	 vs_top=base+4;
	 while(V294!=Cnil)
	 {vs_push((V294)->c.c_car);V294=(V294)->c.c_cdr;}
	vs_base=base+3;}
	Lerror();
	return;
	}
}
/*	local function CALL-NEXT-METHOD	*/

static void L5(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	{object V295;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V295=(base[0]);
	vs_top=sup;
	if((base0[1])==Cnil){
	goto T596;}
	if(((V295))==Cnil){
	goto T599;}
	{register object V296;
	object V297;
	object V298;
	object V299;
	V296= (V295);
	{object V300;
	V300= CMPcar((V296));
	V296= CMPcdr((V296));
	V297= (V300);}
	{object V301;
	V301= CMPcar((V296));
	V296= CMPcdr((V296));
	V298= (V301);}
	{object V302;
	V302= CMPcar((V296));
	V296= CMPcdr((V296));
	V299= (V302);}
	base[4]= base0[1];
	base[5]= VV[2];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk173)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T616;}
	base[4]= STREF(object,base0[1],0);
	base[5]= STREF(object,base0[1],4);
	base[6]= STREF(object,base0[1],8);
	base[7]= (V297);
	base[8]= (V298);
	base[9]= (V299);
	vs_top=(vs_base=base+5)+5;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T616;
T616:;
	{register object V304;
	V304= base0[1];
	base[4]= (V304);
	base[5]= VV[3];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk173)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T627;}
	{object V305;
	object V306;
	register object V307;
	V305= STREF(object,base0[1],0);
	V306= list(3,(V297),(V298),(V299));
	V307= STREF(object,base0[1],4);
	if(((V307))==Cnil){
	goto T635;}
	if((CMPcdr((V307)))!=Cnil){
	goto T635;}
	base[4]= (V306);
	base[5]= CMPcar((V307));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V305);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T635;
T635:;
	base[4]= (V305);
	base[5]= (V306);
	{object V308;
	V308= (V307);
	 vs_top=base+6;
	 while(V308!=Cnil)
	 {vs_push((V308)->c.c_car);V308=(V308)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T627;
T627:;
	base[4]= (V304);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T645;}
	base[4]= (V297);
	base[5]= (V298);
	base[6]= (V299);
	vs_top=(vs_base=base+4)+3;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T645;
T645:;
	base[4]= VV[4];
	base[5]= VV[5];
	base[6]= VV[6];
	base[7]= VV[7];
	base[8]= base0[1];
	base[9]= VV[8];
	base[10]= VV[9];
	base[11]= VV[10];
	base[12]= VV[11];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk174)();
	return;}}
	goto T599;
T599:;
	base[1]= base0[1];
	base[2]= VV[2];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk173)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T662;}
	base[1]= STREF(object,base0[1],0);
	base[2]= STREF(object,base0[1],4);
	base[3]= STREF(object,base0[1],8);
	base[4]= base0[2];
	base[5]= base0[3];
	base[6]= base0[4];
	vs_top=(vs_base=base+2)+5;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T662;
T662:;
	{register object V310;
	V310= base0[1];
	base[1]= (V310);
	base[2]= VV[3];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk173)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T673;}
	{object V311;
	object V312;
	register object V313;
	V311= STREF(object,base0[1],0);
	V312= list(3,base0[2],base0[3],base0[4]);
	V313= STREF(object,base0[1],4);
	if(((V313))==Cnil){
	goto T681;}
	if((CMPcdr((V313)))!=Cnil){
	goto T681;}
	base[1]= (V312);
	base[2]= CMPcar((V313));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V311);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T681;
T681:;
	base[1]= (V311);
	base[2]= (V312);
	{object V314;
	V314= (V313);
	 vs_top=base+3;
	 while(V314!=Cnil)
	 {vs_push((V314)->c.c_car);V314=(V314)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T673;
T673:;
	base[1]= (V310);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T691;}
	base[1]= base0[2];
	base[2]= base0[3];
	base[3]= base0[4];
	vs_top=(vs_base=base+1)+3;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T691;
T691:;
	base[1]= VV[4];
	base[2]= VV[5];
	base[3]= VV[6];
	base[4]= VV[7];
	base[5]= base0[1];
	base[6]= VV[8];
	base[7]= VV[12];
	base[8]= VV[10];
	base[9]= VV[13];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk174)();
	return;}
	goto T596;
T596:;
	base[1]= VV[14];
	base[2]= base0[2];
	base[3]= base0[3];
	base[4]= base0[4];
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk175)();
	return;
	}
}
static void LnkT175(){ call_or_link(VV[175],(void **)(void *)&Lnk175);} /* CALL-NO-NEXT-METHOD */
static void LnkT174(){ call_or_link(VV[174],(void **)(void *)&Lnk174);} /* ERROR */
static void LnkT173(){ call_or_link(VV[173],(void **)(void *)&Lnk173);} /* STRUCTURE-SUBTYPE-P */
static void LnkT172(){ call_or_link(VV[172],(void **)(void *)&Lnk172);} /* MAKE-SHORT-METHOD-COMBINATION */
static void LnkT171(){ call_or_link(VV[171],(void **)(void *)&Lnk171);} /* INVALID-METHOD-ERROR */
static void LnkT170(){ call_or_link(VV[170],(void **)(void *)&Lnk170);} /* ASSERT-REPORT */
static void LnkT169(){ call_or_link(VV[169],(void **)(void *)&Lnk169);} /* LOOP-FINISH */
static void LnkT168(){ call_or_link(VV[168],(void **)(void *)&Lnk168);} /* RESTART-CASE */
static void LnkT167(){ call_or_link(VV[167],(void **)(void *)&Lnk167);} /* CONTINUE */
static void LnkT165(){ call_or_link(VV[165],(void **)(void *)&Lnk165);} /* SIMPLE-ASSERTION-FAILURE */
static object  LnkTLI163(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[163],(void **)(void *)&LnkLI163,1,first,ap);va_end(ap);return V1;} /* MAKE-DEFAULT-METHOD-GROUP-DESCRIPTION */
static object  LnkTLI162(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[162],(void **)(void *)&LnkLI162,2,first,ap);va_end(ap);return V1;} /* PARSE-QUALIFIER-PATTERN */
static void LnkT161(){ call_or_link(VV[161],(void **)(void *)&Lnk161);} /* PARSE-METHOD-GROUP-SPECIFIER */
static object  LnkTLI160(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[160],(void **)(void *)&LnkLI160,2,first,ap);va_end(ap);return V1;} /* DEAL-WITH-ARGUMENTS-OPTION */
static object  LnkTLI159(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[159],(void **)(void *)&LnkLI159,3,first,ap);va_end(ap);return V1;} /* WRAP-METHOD-GROUP-SPECIFIER-BINDINGS */
static void LnkT158(){ call_or_link(VV[158],(void **)(void *)&Lnk158);} /* EXTRACT-DECLARATIONS */
static void LnkT157(){ call_or_link(VV[157],(void **)(void *)&Lnk157);} /* MAKE-LONG-METHOD-COMBINATION-FUNCTION */
static void LnkT156(ptr) object *ptr;{ call_or_link_closure(VV[156],(void **)(void *)&Lnk156,(void **)(void *)&Lclptr156);} /* METHOD-QUALIFIERS */
static void LnkT155(ptr) object *ptr;{ call_or_link_closure(VV[155],(void **)(void *)&Lnk155,(void **)(void *)&Lclptr155);} /* METHOD-COMBINATION-OPTIONS */
static void LnkT154(ptr) object *ptr;{ call_or_link_closure(VV[154],(void **)(void *)&Lnk154,(void **)(void *)&Lclptr154);} /* SHORT-COMBINATION-IDENTITY-WITH-ONE-ARGUMENT */
static void LnkT153(ptr) object *ptr;{ call_or_link_closure(VV[153],(void **)(void *)&Lnk153,(void **)(void *)&Lclptr153);} /* SHORT-COMBINATION-OPERATOR */
static void LnkT152(ptr) object *ptr;{ call_or_link_closure(VV[152],(void **)(void *)&Lnk152,(void **)(void *)&Lclptr152);} /* METHOD-COMBINATION-TYPE */
static void LnkT149(ptr) object *ptr;{ call_or_link_closure(VV[149],(void **)(void *)&Lnk149,(void **)(void *)&Lclptr149);} /* MAKE-INSTANCE */
static object  LnkTLI147(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[147],(void **)(void *)&LnkLI147,first,ap);va_end(ap);return V1;} /* GET-METHOD */
static object  LnkTLI146(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[146],(void **)(void *)&LnkLI146,1,first,ap);va_end(ap);return V1;} /* INTERN-EQL-SPECIALIZER */
static object  LnkTLI145(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[145],(void **)(void *)&LnkLI145,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static void LnkT144(){ call_or_link(VV[144],(void **)(void *)&Lnk144);} /* LOAD-TRUENAME */
static object  LnkTLI143(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[143],(void **)(void *)&LnkLI143,3,first,ap);va_end(ap);return V1;} /* MAKE-TOP-LEVEL-FORM */
static void LnkT141(){ call_or_link(VV[141],(void **)(void *)&Lnk141);} /* METHOD-COMBINATION-ERROR */
static object  LnkTLI140(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[140],(void **)(void *)&LnkLI140,1,first,ap);va_end(ap);return V1;} /* EXPAND-SHORT-DEFCOMBIN */
static object  LnkTLI139(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[139],(void **)(void *)&LnkLI139,1,first,ap);va_end(ap);return V1;} /* EXPAND-LONG-DEFCOMBIN */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

