
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
	base[3]= (*(LnkLI123))(base[0]);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2;
T2:;
	base[3]= (*(LnkLI124))(base[0]);
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
	register object V4;
	register object V5;
	register object V6;
	object V7;
	check_arg(5);
	V3=(base[0]);
	V4=(base[1]);
	V5=(base[2]);
	V6=(base[3]);
	V7=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[5]=make_cclosure_new(LC3,Cnil,Cnil,Cdata);
	base[5]=MMcons(base[5],Cnil);
	base[6]=make_cclosure_new(LC4,Cnil,base[5],Cdata);
	base[6]=MMcons(base[6],base[5]);
	base[7]= (base[5]->c.c_car);
	base[8]= (base[6]->c.c_car);
	bds_bind(VV[0],base[7]);
	bds_bind(VV[1],base[8]);
	if(((V4))==Cnil){
	goto T13;}
	base[9]= (V4);
	base[10]= VV[2];
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk125)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T17;}
	base[9]= STREF(object,(V4),0);
	base[10]= STREF(object,(V4),4);
	base[11]= STREF(object,(V4),8);
	base[12]= (V5);
	base[13]= (V6);
	base[14]= (V7);
	vs_top=(vs_base=base+10)+5;
	{object _funobj = base[9];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	bds_unwind1;
	bds_unwind1;
	return;
	goto T17;
T17:;
	{register object V9;
	V9= (V4);
	base[9]= (V9);
	base[10]= VV[3];
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk125)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T28;}
	{object V10;
	object V11;
	register object V12;
	V10= STREF(object,(V4),0);
	V11= list(3,(V5),(V6),(V7));
	V12= STREF(object,(V4),4);
	if(((V12))==Cnil){
	goto T36;}
	if((CMPcdr((V12)))!=Cnil){
	goto T36;}
	base[9]= (V11);
	base[10]= CMPcar((V12));
	vs_top=(vs_base=base+9)+2;
	{object _funobj = (V10);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	bds_unwind1;
	bds_unwind1;
	return;
	goto T36;
T36:;
	base[9]= (V10);
	base[10]= (V11);
	{object V13;
	V13= (V12);
	 vs_top=base+11;
	 while(V13!=Cnil)
	 {vs_push((V13)->c.c_car);V13=(V13)->c.c_cdr;}
	vs_base=base+10;}
	{object _funobj = base[9];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	bds_unwind1;
	bds_unwind1;
	return;}
	goto T28;
T28:;
	base[9]= (V9);
	vs_top=(vs_base=base+9)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T46;}
	base[9]= (V5);
	base[10]= (V6);
	base[11]= (V7);
	vs_top=(vs_base=base+9)+3;
	{object _funobj = (V4);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	bds_unwind1;
	bds_unwind1;
	return;
	goto T46;
T46:;
	base[10]= VV[4];
	base[11]= (V9);
	base[12]= VV[5];
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk126)();
	vs_top=sup;
	base[9]= vs_base[0];
	vs_top=(vs_base=base+9)+1;
	Lerror();
	bds_unwind1;
	bds_unwind1;
	return;}
	goto T13;
T13:;
	base[9]= VV[6];
	vs_top=(vs_base=base+9)+1;
	Lerror();
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function (FAST-METHOD FIND-METHOD-COMBINATION (GENERIC-FUNCTION (EQL STANDARD) T))	*/

static object LI5(V19,V20,V21,V22,V23)

object V19;object V20;object V21;object V22;object V23;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	if(((V23))==Cnil){
	goto T61;}
	base[0]= VV[7];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk127)();
	vs_top=sup;
	goto T61;
T61:;
	{object V25 = (VV[8]->s.s_dbind);
	VMR3(V25)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass SHORT-METHOD-COMBINATION8916	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[9];
	base[1]= VV[10];
	base[2]= VV[11];
	V26= listA(9,VV[12],VV[13],VV[14],VV[15],VV[16],Cnil,VV[17],VV[18],Cnil);
	base[3]= list(2,/* INLINE-ARGS */V26,listA(9,VV[12],VV[19],VV[14],VV[20],VV[16],Cnil,VV[17],VV[21],Cnil));
	base[4]= list(2,VV[22],VV[23]);
	base[5]= Cnil;
	symlispcall(VV[128],base+0,6);
	return;
}
/*	local entry for function EXPAND-SHORT-DEFCOMBIN	*/

static object LI7(V28)

register object V28;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{object V29;
	object V30;
	object V31;
	object V32;
	V29= CMPcadr((V28));
	base[4]= CMPcddr((V28));
	base[5]= VV[24];
	base[6]= VV[25];
	vs_top=(vs_base=base+4)+3;
	Lgetf();
	vs_top=sup;
	V30= vs_base[0];
	base[4]= CMPcddr((V28));
	base[5]= VV[26];
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	Lgetf();
	vs_top=sup;
	V31= vs_base[0];
	base[4]= CMPcddr((V28));
	base[5]= VV[27];
	base[6]= (V29);
	vs_top=(vs_base=base+4)+3;
	Lgetf();
	vs_top=sup;
	V32= vs_base[0];
	V33= list(2,VV[28],(V29));
	V34= list(2,VV[31],(V29));
	V35= list(2,VV[31],(V32));
	V36= list(2,VV[31],(V31));
	V37= list(5,VV[30],/* INLINE-ARGS */V34,/* INLINE-ARGS */V35,/* INLINE-ARGS */V36,list(2,VV[31],(V30)));
	{object V38 = (*(LnkLI129))(/* INLINE-ARGS */V33,VV[29],/* INLINE-ARGS */V37);
	VMR5(V38)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOAD-SHORT-DEFCOMBIN	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V39;
	check_arg(4);
	V39=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	base[2]=MMcons(base[2],base[1]);
	base[3]=MMcons(base[3],base[2]);
	vs_top=sup;
	{object V40;
	object V41;
	object V42;
	vs_base=vs_top;
	(void) (*Lnk130)();
	vs_top=sup;
	V40= vs_base[0];
	V43= (VFUN_NARGS=1,(*(LnkLI131))(VV[32]));
	V44= (*(LnkLI132))((V39));
	V45 = (VV[33]->s.s_dbind);
	V41= list(3,/* INLINE-ARGS */V43,/* INLINE-ARGS */V44,V45);
	V46= (VV[134]->s.s_gfdef);
	V47 = (V41);
	V42= (VFUN_NARGS=4,(*(LnkLI133))(V46,Cnil,V47,Cnil));
	base[7]=MMcons(Cnil,base[3]);
	base[8]= VV[34];
	base[9]= VV[35];
	base[10]= Cnil;
	base[11]= VV[36];
	base[12]= (V41);
	base[13]= VV[37];
	base[14]= VV[38];
	base[15]= VV[39];
	base[16]= 
	make_cclosure_new(LC23,Cnil,base[7],Cdata);
	base[17]= VV[40];
	base[18]= list(2,list(2,VV[28],(V39)),(V40));
	vs_top=(vs_base=base+8)+11;
	(void) (*Lnk135)(Lclptr135);
	vs_top=sup;
	(base[7]->c.c_car)= vs_base[0];
	if(((V42))==Cnil){
	goto T101;}
	base[8]=(VV[136]->s.s_gfdef);
	base[9]= (VV[134]->s.s_gfdef);
	base[10]= (V42);
	(void)simple_lispcall(base+8,2);
	goto T101;
T101:;
	base[8]=(VV[137]->s.s_gfdef);
	base[9]= (VV[134]->s.s_gfdef);
	base[10]= (base[7]->c.c_car);
	lispcall(base+8,2);
	return;}
	}
}
/*	function definition for DO-SHORT-METHOD-COMBINATION	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	{object V48;
	register object V49;
	object V50;
	object V51;
	object V52;
	object V53;
	check_arg(6);
	V48=(base[0]);
	V49=(base[1]);
	V50=(base[2]);
	V51=(base[3]);
	V52=(base[4]);
	V53=(base[5]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V49))!=Cnil){
	goto T110;}
	V49= VV[41];
	goto T108;
	goto T110;
T110:;
	{object V54;
	V54= (equal((V49),VV[42])?Ct:Cnil);
	if(((V54))==Cnil){
	goto T115;}
	goto T108;
	goto T115;
T115:;
	{object V55;
	V55= (equal((V49),VV[43])?Ct:Cnil);
	if(((V55))==Cnil){
	goto T119;}
	goto T108;
	goto T119;
T119:;
	base[6]= VV[44];
	base[7]= (V48);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk127)();
	vs_top=sup;}}
	goto T108;
T108:;
	base[6]= VV[9];
	base[7]= VV[45];
	base[8]= (V48);
	base[9]= VV[46];
	base[10]= (V49);
	base[11]= VV[27];
	base[12]= (V50);
	base[13]= VV[26];
	base[14]= (V51);
	base[15]= VV[40];
	base[16]= (V52);
	base[17]= VV[24];
	base[18]= (V53);
	vs_top=(vs_base=base+6)+13;
	(void) (*Lnk135)(Lclptr135);
	return;
	}
}
/*	local entry for function (FAST-METHOD COMPUTE-EFFECTIVE-METHOD (GENERIC-FUNCTION SHORT-METHOD-COMBINATION T))	*/

static object LI10(V61,V62,V63,V64,V65)

object V61;object V62;object V63;object V64;object V65;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V67;
	object V68;
	object V69;
	object V70;
	register object V71;
	base[1]= (V64);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk138)(Lclptr138);
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V64);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk139)(Lclptr139);
	vs_top=sup;
	V67= vs_base[0];
	base[1]= (V64);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk140)(Lclptr140);
	vs_top=sup;
	V68= vs_base[0];
	base[1]= (V64);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk141)(Lclptr141);
	vs_top=sup;
	V72= vs_base[0];
	V69= CMPcar(V72);
	V70= Cnil;
	V71= Cnil;
	{register object V73;
	register object V74;
	V73= (V65);
	V74= CMPcar((V73));
	goto T153;
T153:;
	if(!(((V73))==Cnil)){
	goto T154;}
	goto T149;
	goto T154;
T154:;
	{register object V75;
	base[2]= (V74);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk142)(Lclptr142);
	vs_top=sup;
	V75= vs_base[0];
	if(((V75))!=Cnil){
	goto T162;}
	base[2]= (V74);
	base[3]= VV[47];
	vs_top=(vs_base=base+2)+2;
	L11(base);
	vs_top=sup;
	goto T158;
	goto T162;
T162:;
	if((CMPcdr((V75)))==Cnil){
	goto T167;}
	base[2]= (V74);
	base[3]= VV[48];
	vs_top=(vs_base=base+2)+2;
	L11(base);
	vs_top=sup;
	goto T158;
	goto T167;
T167:;
	if(!((CMPcar((V75)))==(VV[49]))){
	goto T172;}
	V70= make_cons(V74,(V70));
	goto T158;
	goto T172;
T172:;
	if(!((CMPcar((V75)))==(base[0]))){
	goto T176;}
	V71= make_cons(V74,(V71));
	goto T158;
	goto T176;
T176:;
	base[2]= (V74);
	base[3]= VV[50];
	vs_top=(vs_base=base+2)+2;
	L11(base);
	vs_top=sup;}
	goto T158;
T158:;
	V73= CMPcdr((V73));
	V74= CMPcar((V73));
	goto T153;}
	goto T149;
T149:;
	V70= nreverse((V70));
	if(((V69))==(VV[52])){
	goto T188;}
	V71= nreverse((V71));
	goto T188;
T188:;
	{object V78;
	if((CMPcdr((V71)))!=Cnil){
	goto T194;}
	if(((V68))==Cnil){
	goto T194;}
	V78= list(3,VV[53],CMPcar((V71)),Cnil);
	goto T192;
	goto T194;
T194:;
	V79 = (V67);
	{object V81;
	object V82= (V71);
	if(V82==Cnil){
	V80= Cnil;
	goto T198;}
	base[1]=V81=MMcons(Cnil,Cnil);
	goto T199;
T199:;
	(V81->c.c_car)= list(3,VV[53],(V82->c.c_car),Cnil);
	if((V82=MMcdr(V82))==Cnil){
	V80= base[1];
	goto T198;}
	V81=MMcdr(V81)=MMcons(Cnil,Cnil);
	goto T199;}
	goto T198;
T198:;
	V78= make_cons(V79,V80);
	goto T192;
T192:;
	if(((V71))!=Cnil){
	goto T202;}
	V84= list(2,VV[31],base[0]);
	{object V85 = list(4,VV[54],VV[55],/* INLINE-ARGS */V84,list(2,VV[31],(V63)));
	VMR8(V85)}
	goto T202;
T202:;
	if(((V70))!=Cnil){
	goto T205;}
	{object V86 = (V78);
	VMR8(V86)}
	goto T205;
T205:;
	V87= CMPcar((V70));
	V88= CMPcdr((V70));
	V89= list(2,VV[56],(V78));
	V90= make_cons(/* INLINE-ARGS */V89,Cnil);
	{object V91 = list(3,VV[53],/* INLINE-ARGS */V87,append(/* INLINE-ARGS */V88,/* INLINE-ARGS */V90));
	VMR8(V91)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass LONG-METHOD-COMBINATION8939	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[57];
	base[1]= VV[10];
	base[2]= VV[58];
	V92= listA(9,VV[12],VV[59],VV[14],VV[60],VV[16],Cnil,VV[17],VV[61],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V92,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[128],base+0,6);
	return;
}
/*	local entry for function EXPAND-LONG-DEFCOMBIN	*/

static object LI13(V94)

register object V94;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V95;
	object V96;
	object V97;
	register object V98;
	object V99;
	object V100;
	V95= CMPcadr((V94));
	V96= CMPcaddr((V94));
	V97= CMPcadddr((V94));
	V98= CMPcddddr((V94));
	V99= Cnil;
	V100= Cnil;
	if(!(type_of(CMPcar((V98)))==t_cons)){
	goto T217;}
	if(!((CMPcaar((V98)))==(VV[62]))){
	goto T217;}
	{object V102;
	V102= CMPcar((V98));
	V98= CMPcdr((V98));
	V101= (V102);}
	V99= CMPcdr(V101);
	goto T217;
T217:;
	if(!(type_of(CMPcar((V98)))==t_cons)){
	goto T227;}
	if(!((CMPcaar((V98)))==(VV[63]))){
	goto T227;}
	{object V104;
	V104= CMPcar((V98));
	V98= CMPcdr((V98));
	V103= (V104);}
	V100= CMPcadr(V103);
	goto T227;
T227:;
	{object V105;
	object V106;
	base[0]= (V95);
	base[1]= (V96);
	base[2]= (V97);
	base[3]= (V99);
	base[4]= (V100);
	base[5]= (V98);
	vs_top=(vs_base=base+0)+6;
	(void) (*Lnk143)();
	if(vs_base>=vs_top){vs_top=sup;goto T244;}
	V105= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T245;}
	V106= vs_base[0];
	vs_top=sup;
	goto T246;
	goto T244;
T244:;
	V105= Cnil;
	goto T245;
T245:;
	V106= Cnil;
	goto T246;
T246:;
	V107= list(2,VV[28],(V95));
	V108= list(2,VV[31],(V95));
	V109= list(2,VV[31],(V105));
	V110= list(4,VV[65],/* INLINE-ARGS */V108,/* INLINE-ARGS */V109,list(2,VV[59],(V106)));
	{object V111 = (*(LnkLI129))(/* INLINE-ARGS */V107,VV[64],/* INLINE-ARGS */V110);
	VMR10(V111)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOAD-LONG-DEFCOMBIN	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{object V112;
	object V113;
	check_arg(3);
	V112=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	V113=(base[2]);
	vs_top=sup;
	{object V114;
	object V115;
	object V116;
	V117= (VFUN_NARGS=1,(*(LnkLI131))(VV[32]));
	V118= (*(LnkLI132))((V112));
	V119 = (VV[33]->s.s_dbind);
	V114= list(3,/* INLINE-ARGS */V117,/* INLINE-ARGS */V118,V119);
	V120= (VV[134]->s.s_gfdef);
	V121 = (V114);
	V115= (VFUN_NARGS=4,(*(LnkLI133))(V120,Cnil,V121,Cnil));
	base[6]= VV[34];
	base[7]= VV[35];
	base[8]= Cnil;
	base[9]= VV[36];
	base[10]= (V114);
	base[11]= VV[37];
	base[12]= VV[66];
	base[13]= VV[39];
	base[14]= 
	make_cclosure_new(LC24,Cnil,base[1],Cdata);
	base[15]= VV[40];
	V122= list(2,VV[28],(V112));
	vs_base=vs_top;
	(void) (*Lnk130)();
	vs_top=sup;
	V123= vs_base[0];
	base[16]= list(2,/* INLINE-ARGS */V122,V123);
	vs_top=(vs_base=base+6)+11;
	(void) (*Lnk135)(Lclptr135);
	vs_top=sup;
	V116= vs_base[0];
	{object V125;
	V125= (VV[67]->s.s_dbind);
	base[6]= V112;
	base[7]= (V125);
	base[8]= V113;
	vs_top=(vs_base=base+6)+3;
	siLhash_set();
	vs_top=sup;}
	if(((V115))==Cnil){
	goto T268;}
	base[6]=(VV[136]->s.s_gfdef);
	base[7]= (VV[134]->s.s_gfdef);
	base[8]= (V115);
	(void)simple_lispcall(base+6,2);
	goto T268;
T268:;
	base[6]=(VV[137]->s.s_gfdef);
	base[7]= (VV[134]->s.s_gfdef);
	base[8]= (V116);
	lispcall(base+6,2);
	return;}
	}
}
/*	function definition for (FAST-METHOD COMPUTE-EFFECTIVE-METHOD (GENERIC-FUNCTION LONG-METHOD-COMBINATION T))	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{object V127;
	object V128;
	object V129;
	object V130;
	object V131;
	check_arg(5);
	V127=(base[0]);
	V128=(base[1]);
	V129=(base[2]);
	V130=(base[3]);
	V131=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[7]= (V130);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk138)(Lclptr138);
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= (VV[67]->s.s_dbind);
	vs_top=(vs_base=base+6)+2;
	Lgethash();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (V129);
	base[7]= (V130);
	base[8]= (V131);
	vs_top=(vs_base=base+6)+3;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	function definition for MAKE-LONG-METHOD-COMBINATION-FUNCTION	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V133;
	object V134;
	object V135;
	object V136;
	object V137;
	object V138;
	check_arg(6);
	V133=(base[0]);
	V134=(base[1]);
	V135=(base[2]);
	V136=(base[3]);
	V137=(base[4]);
	V138=(base[5]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V139;
	object V140;
	object V141;
	base[6]= (V138);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk144)();
	if(vs_base>=vs_top){vs_top=sup;goto T288;}
	V139= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T289;}
	V140= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T290;}
	V141= vs_base[0];
	vs_top=sup;
	goto T291;
	goto T288;
T288:;
	V139= Cnil;
	goto T289;
T289:;
	V140= Cnil;
	goto T290;
T290:;
	V141= Cnil;
	goto T291;
T291:;
	{register object V142;
	V142= (*(LnkLI145))((V135),(V140),(V141));
	if(((V137))==Cnil){
	goto T293;}
	{object V143;
	object V145;
	V143= list(2,(V137),VV[68]);
	V145= make_cons((V143),CMPcadr(V142));
	(CMPcdr(V142))->c.c_car = (V145);
	(void)(CMPcdr(V142));}
	goto T293;
T293:;
	if(((V136))==Cnil){
	goto T299;}
	V142= (*(LnkLI146))((V142),(V136));
	goto T299;
T299:;
	if(((V134))==Cnil){
	goto T303;}
	V142= list(3,VV[69],list(2,VV[59],list(3,VV[70],(V134),(V142))),VV[71]);
	goto T303;
T303:;
	base[6]= (V139);
	base[7]= list(4,VV[70],VV[72],VV[73],list(3,VV[74],VV[75],(V142)));
	vs_top=(vs_base=base+6)+2;
	return;}}
	}
}
/*	local entry for function WRAP-METHOD-GROUP-SPECIFIER-BINDINGS	*/

static object LI17(V149,V150,V151)

object V149;object V150;object V151;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{object V152;
	object V153;
	object V154;
	object V155;
	object V156;
	{object V157;
	register object V158;
	object V159;
	register object V160;
	object V161;
	register object V162;
	object V163;
	register object V164;
	object V165;
	register object V166;
	V157= Cnil;
	V158= Cnil;
	V159= Cnil;
	V160= Cnil;
	V161= Cnil;
	V162= Cnil;
	V163= Cnil;
	V164= Cnil;
	V165= Cnil;
	V166= Cnil;
	{register object V167;
	object V168;
	V167= (V149);
	V168= CMPcar((V167));
	goto T324;
T324:;
	if(!(((V167))==Cnil)){
	goto T325;}
	goto T320;
	goto T325;
T325:;
	{register object V169;
	object V170;
	register object V171;
	register object V172;
	object V173;
	base[1]= (V168);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk147)();
	if(vs_base>=vs_top){vs_top=sup;goto T332;}
	V169= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T333;}
	V170= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T334;}
	V171= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T335;}
	V172= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T336;}
	V173= vs_base[0];
	vs_top=sup;
	goto T337;
	goto T332;
T332:;
	V169= Cnil;
	goto T333;
T333:;
	V170= Cnil;
	goto T334;
T334:;
	V171= Cnil;
	goto T335;
T335:;
	V172= Cnil;
	goto T336;
T336:;
	V173= Cnil;
	goto T337;
T337:;
	{register object V174;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V174= vs_base[0];
	if(((V157))!=Cnil){
	goto T341;}
	V158= make_cons(V169,Cnil);
	V157= (V158);
	goto T339;
	goto T341;
T341:;
	V177= make_cons(V169,Cnil);
	((V158))->c.c_cdr = /* INLINE-ARGS */V177;
	V176= (V158);
	V158= CMPcdr(V176);
	goto T339;
T339:;
	if(((V159))!=Cnil){
	goto T349;}
	V160= make_cons(V174,Cnil);
	V159= (V160);
	goto T347;
	goto T349;
T349:;
	V180= make_cons(V174,Cnil);
	((V160))->c.c_cdr = /* INLINE-ARGS */V180;
	V179= (V160);
	V160= CMPcdr(V179);
	goto T347;
T347:;
	{object V181;
	V182= make_cons(VV[76],(V170));
	V183= list(3,VV[78],(V174),VV[79]);
	V184= list(3,VV[80],VV[75],list(2,VV[31],list(3,VV[54],VV[81],list(2,VV[31],(V169)))));
	V185= list(4,VV[77],/* INLINE-ARGS */V183,/* INLINE-ARGS */V184,list(3,VV[82],(V174),VV[79]));
	V181= list(3,/* INLINE-ARGS */V182,/* INLINE-ARGS */V185,list(3,VV[83],VV[84],(V169)));
	if(((V161))!=Cnil){
	goto T358;}
	V162= make_cons((V181),Cnil);
	V161= (V162);
	goto T355;
	goto T358;
T358:;
	V187= make_cons((V181),Cnil);
	((V162))->c.c_cdr = /* INLINE-ARGS */V187;
	V186= (V162);
	V162= CMPcdr(V186);}
	goto T355;
T355:;
	if(((V173))==Cnil){
	goto T364;}
	{object V188;
	V189= list(2,VV[86],(V169));
	V188= list(3,VV[85],/* INLINE-ARGS */V189,list(3,VV[80],VV[75],list(2,VV[31],list(3,VV[54],VV[87],list(2,VV[31],(V169))))));
	if(((V163))!=Cnil){
	goto T369;}
	V164= make_cons((V188),Cnil);
	V163= (V164);
	goto T364;
	goto T369;
T369:;
	V191= make_cons((V188),Cnil);
	((V164))->c.c_cdr = /* INLINE-ARGS */V191;
	V190= (V164);
	V164= CMPcdr(V190);}
	goto T364;
T364:;
	goto T377;
T377:;
	base[1]= (V172);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T379;}{object V192;
	V192= (V172);
	base[1]= (V172);
	vs_top=(vs_base=base+1)+1;
	Leval();
	vs_top=sup;
	V172= vs_base[0];
	V193 = (V172);
	if((((V192)==(V193)?Ct:Cnil))==Cnil){
	goto T378;}}
	goto T379;
T379:;
	goto T375;
	goto T378;
T378:;
	goto T377;
	goto T375;
T375:;
	{object V194;
	if(!(((V172))==(VV[88]))){
	goto T389;}
	V194= list(3,VV[82],(V169),list(2,VV[89],(V169)));
	goto T387;
	goto T389;
T389:;
	if(!(((V172))==(VV[52]))){
	goto T392;}
	V194= Cnil;
	goto T387;
	goto T392;
T392:;
	V194= list(4,VV[90],(V172),list(2,VV[88],list(3,VV[82],(V169),list(2,VV[89],(V169)))),VV[91]);
	goto T387;
T387:;
	if(((V165))!=Cnil){
	goto T395;}
	V166= make_cons((V194),Cnil);
	V165= (V166);
	goto T329;
	goto T395;
T395:;
	V196= make_cons((V194),Cnil);
	((V166))->c.c_cdr = /* INLINE-ARGS */V196;
	V195= (V166);
	V166= CMPcdr(V195);}}}
	goto T329;
T329:;
	V167= CMPcdr((V167));
	V168= CMPcar((V167));
	goto T324;}
	goto T320;
T320:;
	base[0]= (V157);
	base[1]= (V159);
	base[2]= (V161);
	base[3]= (V163);
	base[4]= (V165);
	vs_top=(vs_base=base+0)+5;}
	if(vs_base>=vs_top){vs_top=sup;goto T411;}
	V152= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T412;}
	V153= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T413;}
	V154= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T414;}
	V155= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T415;}
	V156= vs_base[0];
	vs_top=sup;
	goto T416;
	goto T411;
T411:;
	V152= Cnil;
	goto T412;
T412:;
	V153= Cnil;
	goto T413;
T413:;
	V154= Cnil;
	goto T414;
T414:;
	V155= Cnil;
	goto T415;
T415:;
	V156= Cnil;
	goto T416;
T416:;
	V197= append((V152),(V153));
	V198= list(3,VV[93],VV[94],list(4,VV[92],VV[95],VV[96],make_cons(VV[97],(V154))));
	base[0]= (V155);
	base[1]= (V156);
	base[2]= (V151);
	vs_top=(vs_base=base+0)+3;
	Lappend();
	vs_top=sup;
	V199= vs_base[0];
	V200= make_cons(/* INLINE-ARGS */V198,V199);
	{object V201 = listA(3,VV[92],/* INLINE-ARGS */V197,append((V150),/* INLINE-ARGS */V200));
	VMR14(V201)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for PARSE-METHOD-GROUP-SPECIFIER	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	{register object V202;
	check_arg(1);
	V202=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V203;
	register object V204;
	object V205;
	{object V206;
	V206= CMPcar((V202));
	V202= CMPcdr((V202));
	V203= (V206);}
	V204= Cnil;
	{register object V207;
	register object V208;
	V207= Cnil;
	V208= Cnil;
	goto T431;
T431:;
	if(((V202))==Cnil){
	goto T433;}
	{register object x= CMPcar((V202)),V209= VV[98];
	while(V209!=Cnil)
	if(x==(V209->c.c_car)){
	goto T437;
	}else V209=V209->c.c_cdr;
	goto T434;}
	goto T437;
T437:;
	goto T433;
T433:;
	goto T429;
	goto T434;
T434:;
	{register object V210;
	{object V211;
	V211= CMPcar((V202));
	V202= CMPcdr((V202));
	V210= (V211);}
	V204= make_cons(V210,(V204));
	{register object V213;
	V213= (*(LnkLI148))((V203),(V210));
	if(((V207))!=Cnil){
	goto T446;}
	V208= make_cons((V213),Cnil);
	V207= (V208);
	goto T432;
	goto T446;
T446:;
	V215= make_cons((V213),Cnil);
	((V208))->c.c_cdr = /* INLINE-ARGS */V215;
	V214= (V208);
	V208= CMPcdr(V214);}}
	goto T432;
T432:;
	goto T431;
	goto T429;
T429:;
	V205= (V207);}
	base[3]= (V203);
	base[4]= (V205);
	base[6]= (V202);
	base[7]= VV[99];
	base[8]= (*(LnkLI149))((V204));
	vs_top=(vs_base=base+6)+3;
	Lgetf();
	vs_top=sup;
	base[5]= vs_base[0];
	base[7]= (V202);
	base[8]= VV[100];
	base[9]= VV[88];
	vs_top=(vs_base=base+7)+3;
	Lgetf();
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= (V202);
	base[9]= VV[101];
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	Lgetf();
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+3)+5;
	return;}
	}
}
/*	local entry for function PARSE-QUALIFIER-PATTERN	*/

static object LI19(V218,V219)

object V218;register object V219;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	if(!(((V219))==(Cnil))){
	goto T468;}
	{object V220 = VV[102];
	VMR16(V220)}
	goto T468;
T468:;
	if(!(((V219))==(VV[103]))){
	goto T471;}
	{object V221 = Ct;
	VMR16(V221)}
	goto T471;
T471:;
	if(!(type_of((V219))==t_symbol)){
	goto T474;}
	{object V222 = list(2,(V219),VV[104]);
	VMR16(V222)}
	goto T474;
T474:;
	if(!(type_of((V219))==t_cons||((V219))==Cnil)){
	goto T477;}
	{object V223 = list(3,VV[105],list(2,VV[31],(V219)),VV[104]);
	VMR16(V223)}
	goto T477;
T477:;
	base[0]= VV[106];
	base[1]= (V218);
	base[2]= (V219);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V224 = vs_base[0];
	VMR16(V224)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function QUALIFIER-CHECK-RUNTIME	*/

static object LI20(V227,V228)

register object V227;register object V228;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	goto T483;
T483:;
	if(((V227))!=Cnil){
	goto T486;}
	if(((V228))!=Cnil){
	goto T486;}
	{object V229 = Ct;
	VMR17(V229)}
	goto T486;
T486:;
	if(!(((V227))==(VV[103]))){
	goto T491;}
	{object V230 = Ct;
	VMR17(V230)}
	goto T491;
T491:;
	if(((V227))==Cnil){
	goto T494;}
	if(((V228))==Cnil){
	goto T494;}
	if(!((CMPcar((V227)))==(CMPcar((V228))))){
	goto T494;}
	{register object V231;
	V231= CMPcar((V227));
	V227= CMPcdr((V227));}
	{register object V232;
	V232= CMPcar((V228));
	V228= CMPcdr((V228));
	goto T484;}
	goto T494;
T494:;
	{object V233 = Cnil;
	VMR17(V233)}
	goto T484;
T484:;
	goto T483;
	return Cnil;
}
/*	local entry for function MAKE-DEFAULT-METHOD-GROUP-DESCRIPTION	*/

static object LI21(V235)

register object V235;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	if((CMPcdr((V235)))==Cnil){
	goto T509;}
	base[0]= Cnil;
	base[1]= VV[107];
	base[3]= (V235);
	vs_top=(vs_base=base+3)+1;
	Lbutlast();
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= (V235);
	vs_top=(vs_base=base+4)+1;
	Llast();
	vs_top=sup;
	V236= vs_base[0];
	base[3]= CMPcar(V236);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V237 = vs_base[0];
	VMR18(V237)}
	goto T509;
T509:;
	base[0]= Cnil;
	base[1]= VV[108];
	base[2]= CMPcar((V235));
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V238 = vs_base[0];
	VMR18(V238)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DEAL-WITH-ARGUMENTS-OPTION	*/

static object LI22(V241,V242)

object V241;object V242;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{object V243;
	object V244;
	{register object V245;
	register object V246;
	V245= Cnil;
	V246= Cnil;
	{register object V247;
	register object V248;
	V247= (V242);
	V248= CMPcar((V247));
	goto T528;
T528:;
	if(!(((V247))==Cnil)){
	goto T529;}
	goto T524;
	goto T529;
T529:;
	{register object x= (V248),V249= VV[109];
	while(V249!=Cnil)
	if(x==(V249->c.c_car)){
	goto T536;
	}else V249=V249->c.c_cdr;
	goto T535;}
	goto T536;
T536:;
	if(((V245))!=Cnil){
	goto T538;}
	V246= make_cons(V248,Cnil);
	V245= (V246);
	goto T533;
	goto T538;
T538:;
	V252= make_cons(V248,Cnil);
	((V246))->c.c_cdr = /* INLINE-ARGS */V252;
	V251= (V246);
	V246= CMPcdr(V251);
	goto T533;
	goto T535;
T535:;
	{object V253;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V253= vs_base[0];
	if(((V245))!=Cnil){
	goto T546;}
	V246= make_cons((V253),Cnil);
	V245= (V246);
	goto T533;
	goto T546;
T546:;
	V255= make_cons((V253),Cnil);
	((V246))->c.c_cdr = /* INLINE-ARGS */V255;
	V254= (V246);
	V246= CMPcdr(V254);}
	goto T533;
T533:;
	V247= CMPcdr((V247));
	V248= CMPcar((V247));
	goto T528;}
	goto T524;
T524:;
	V243= (V245);}
	{object V256;
	register object V257;
	V256= Cnil;
	V257= Cnil;
	{register object V258;
	register object V259;
	register object V260;
	object V261;
	V258= (V242);
	V259= Cnil;
	V260= (V243);
	V261= Cnil;
	goto T566;
T566:;
	{object V262;
	if(!(((V258))==Cnil)){
	goto T572;}
	goto T560;
	goto T572;
T572:;
	V262= CMPcar((V258));
	V258= CMPcdr((V258));
	V259= (V262);}
	{object V263;
	if(!(((V260))==Cnil)){
	goto T580;}
	goto T560;
	goto T580;
T580:;
	V263= CMPcar((V260));
	V260= CMPcdr((V260));
	V261= (V263);}
	{register object x= (V259),V264= VV[109];
	while(V264!=Cnil)
	if(x==(V264->c.c_car)){
	goto T567;
	}else V264=V264->c.c_cdr;}
	{object V265;
	V265= list(2,(V259),list(2,VV[31],(V261)));
	if(((V256))!=Cnil){
	goto T588;}
	V257= make_cons((V265),Cnil);
	V256= (V257);
	goto T567;
	goto T588;
T588:;
	V267= make_cons((V265),Cnil);
	((V257))->c.c_cdr = /* INLINE-ARGS */V267;
	V266= (V257);
	V257= CMPcdr(V266);}
	goto T567;
T567:;
	goto T566;}
	goto T560;
T560:;
	V244= (V256);}
	{object V269;
	V269= append((V244),CMPcadr((V241)));
	(CMPcdr(V241))->c.c_car = (V269);
	(void)(CMPcdr(V241));}
	{object V270;
	{register object x= VV[110],V271= (V243);
	while(V271!=Cnil)
	if(x==(V271->c.c_car)){
	V270= V271;
	goto T599;
	}else V271=V271->c.c_cdr;
	V270= Cnil;}
	goto T599;
T599:;
	if(((V270))==Cnil){
	goto T601;}
	goto T598;
	goto T601;
T601:;
	{object V272;
	{register object x= VV[111],V273= (V243);
	while(V273!=Cnil)
	if(x==(V273->c.c_car)){
	V272= V273;
	goto T603;
	}else V273=V273->c.c_cdr;
	V272= Cnil;}
	goto T603;
T603:;
	if(((V272))==Cnil){
	goto T605;}
	goto T598;
	goto T605;
T605:;
	{register object x= VV[112],V274= (V243);
	while(V274!=Cnil)
	if(x==(V274->c.c_car)){
	goto T609;
	}else V274=V274->c.c_cdr;
	goto T608;}
	goto T609;
T609:;
	V243= append((V243),VV[113]);
	goto T598;
	goto T608;
T608:;
	V243= append((V243),VV[114]);}}
	goto T598;
T598:;
	V275= list(2,VV[115],(V241));
	V276= make_cons(/* INLINE-ARGS */V275,Cnil);
	V277= list(2,VV[31],(V243));
	{register object x= VV[120],V279= (V243);
	while(V279!=Cnil)
	if(x==(V279->c.c_car)){
	goto T615;
	}else V279=V279->c.c_cdr;
	goto T614;}
	goto T615;
T615:;
	V278= VV[121];
	goto T612;
	goto T614;
T614:;
	V278= Cnil;
	goto T612;
T612:;
	{object V280 = list(3,VV[92],/* INLINE-ARGS */V276,list(4,VV[116],VV[117],list(3,VV[116],VV[118],list(5,VV[116],VV[119],/* INLINE-ARGS */V277,V278,VV[115])),VV[122]));
	VMR19(V280)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC24(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{object V281;
	object V282;
	object V283;
	check_arg(3);
	V281=(base[0]);
	V282=(base[1]);
	V283=(base[2]);
	vs_top=sup;
	base[3]= VV[57];
	base[4]= VV[45];
	base[5]= (V282);
	base[6]= VV[24];
	base[7]= (base0[0]->c.c_car);
	base[8]= VV[46];
	base[9]= (V283);
	vs_top=(vs_base=base+3)+7;
	(void) (*Lnk135)(Lclptr135);
	return;
	}
}
/*	local function LOSE	*/

static void L11(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{register object V284;
	object V285;
	check_arg(2);
	V284=(base[0]);
	V285=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V284);
	base[3]= VV[51];
	base[4]= (V284);
	base[5]= (V285);
	base[6]= base0[0];
	base[7]= base0[0];
	vs_top=(vs_base=base+2)+6;
	(void) (*Lnk150)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	{object V286;
	object V287;
	object V288;
	if(vs_top-vs_base<2) too_few_arguments();
	V286=(base[0]);
	V287=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V288=(base[2]);
	vs_top=sup;
	ck_larg_exactly(3,V286);
	base[3]=(V286)->c.c_car;
	base[4]=((V286
	)->c.c_cdr)->c.c_car;
	base[5]=(((V286
	)->c.c_cdr
	)->c.c_cdr)->c.c_car;
	base[6]= base[4];
	base[7]= base[5];
	base[8]= (base0[3]->c.c_car);
	base[9]= (base0[2]->c.c_car);
	base[10]= (base0[0]->c.c_car);
	base[11]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+6)+6;
	(void) (*Lnk151)();
	return;
	}
}
/*	local function REAL-METHOD-COMBINATION-ERROR	*/

static void LC4(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{object V290;
	object V291;
	if(vs_top-vs_base<1) too_few_arguments();
	V290=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V291=(base[1]);
	vs_top=sup;
	base[2]= (V290);
	{object V292;
	V292= (V291);
	 vs_top=base+3;
	 while(V292!=Cnil)
	 {vs_push((V292)->c.c_car);V292=(V292)->c.c_cdr;}
	vs_base=base+2;}
	Lerror();
	return;
	}
}
/*	local function REAL-INVALID-METHOD-ERROR	*/

static void LC3(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{object V293;
	object V294;
	object V295;
	if(vs_top-vs_base<2) too_few_arguments();
	V293=(base[0]);
	V294=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V295=(base[2]);
	vs_top=sup;
	base[3]= (V294);
	{object V296;
	V296= (V295);
	 vs_top=base+4;
	 while(V296!=Cnil)
	 {vs_push((V296)->c.c_car);V296=(V296)->c.c_cdr;}
	vs_base=base+3;}
	Lerror();
	return;
	}
}
static void LnkT151(){ call_or_link(VV[151],(void **)(void *)&Lnk151);} /* DO-SHORT-METHOD-COMBINATION */
static void LnkT150(){ call_or_link(VV[150],(void **)(void *)&Lnk150);} /* INVALID-METHOD-ERROR */
static object  LnkTLI149(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[149],(void **)(void *)&LnkLI149,1,first,ap);va_end(ap);return V1;} /* MAKE-DEFAULT-METHOD-GROUP-DESCRIPTION */
static object  LnkTLI148(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[148],(void **)(void *)&LnkLI148,2,first,ap);va_end(ap);return V1;} /* PARSE-QUALIFIER-PATTERN */
static void LnkT147(){ call_or_link(VV[147],(void **)(void *)&Lnk147);} /* PARSE-METHOD-GROUP-SPECIFIER */
static object  LnkTLI146(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[146],(void **)(void *)&LnkLI146,2,first,ap);va_end(ap);return V1;} /* DEAL-WITH-ARGUMENTS-OPTION */
static object  LnkTLI145(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[145],(void **)(void *)&LnkLI145,3,first,ap);va_end(ap);return V1;} /* WRAP-METHOD-GROUP-SPECIFIER-BINDINGS */
static void LnkT144(){ call_or_link(VV[144],(void **)(void *)&Lnk144);} /* EXTRACT-DECLARATIONS */
static void LnkT143(){ call_or_link(VV[143],(void **)(void *)&Lnk143);} /* MAKE-LONG-METHOD-COMBINATION-FUNCTION */
static void LnkT142(ptr) object *ptr;{ call_or_link_closure(VV[142],(void **)(void *)&Lnk142,(void **)(void *)&Lclptr142);} /* METHOD-QUALIFIERS */
static void LnkT141(ptr) object *ptr;{ call_or_link_closure(VV[141],(void **)(void *)&Lnk141,(void **)(void *)&Lclptr141);} /* METHOD-COMBINATION-OPTIONS */
static void LnkT140(ptr) object *ptr;{ call_or_link_closure(VV[140],(void **)(void *)&Lnk140,(void **)(void *)&Lclptr140);} /* SHORT-COMBINATION-IDENTITY-WITH-ONE-ARGUMENT */
static void LnkT139(ptr) object *ptr;{ call_or_link_closure(VV[139],(void **)(void *)&Lnk139,(void **)(void *)&Lclptr139);} /* SHORT-COMBINATION-OPERATOR */
static void LnkT138(ptr) object *ptr;{ call_or_link_closure(VV[138],(void **)(void *)&Lnk138,(void **)(void *)&Lclptr138);} /* METHOD-COMBINATION-TYPE */
static void LnkT135(ptr) object *ptr;{ call_or_link_closure(VV[135],(void **)(void *)&Lnk135,(void **)(void *)&Lclptr135);} /* MAKE-INSTANCE */
static object  LnkTLI133(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[133],(void **)(void *)&LnkLI133,first,ap);va_end(ap);return V1;} /* GET-METHOD */
static object  LnkTLI132(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[132],(void **)(void *)&LnkLI132,1,first,ap);va_end(ap);return V1;} /* INTERN-EQL-SPECIALIZER */
static object  LnkTLI131(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[131],(void **)(void *)&LnkLI131,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static void LnkT130(){ call_or_link(VV[130],(void **)(void *)&Lnk130);} /* LOAD-TRUENAME */
static object  LnkTLI129(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[129],(void **)(void *)&LnkLI129,3,first,ap);va_end(ap);return V1;} /* MAKE-TOP-LEVEL-FORM */
static void LnkT127(){ call_or_link(VV[127],(void **)(void *)&Lnk127);} /* METHOD-COMBINATION-ERROR */
static void LnkT126(){ call_or_link(VV[126],(void **)(void *)&Lnk126);} /* TYPECASE-ERROR-STRING */
static void LnkT125(){ call_or_link(VV[125],(void **)(void *)&Lnk125);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI124(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[124],(void **)(void *)&LnkLI124,1,first,ap);va_end(ap);return V1;} /* EXPAND-SHORT-DEFCOMBIN */
static object  LnkTLI123(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[123],(void **)(void *)&LnkLI123,1,first,ap);va_end(ap);return V1;} /* EXPAND-LONG-DEFCOMBIN */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

