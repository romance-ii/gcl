
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
	base[3]= (*(LnkLI116))(base[0]);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2;
T2:;
	base[3]= (*(LnkLI117))(base[0]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function (FAST-METHOD FIND-METHOD-COMBINATION (GENERIC-FUNCTION (EQL STANDARD) T))	*/

static object LI2(V8,V9,V10,V11,V12)

object V8;object V9;object V10;object V11;object V12;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if(((V12))==Cnil){
	goto T10;}
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk118)();
	vs_top=sup;
	goto T10;
T10:;
	{object V14 = (VV[1]->s.s_dbind);
	VMR2(V14)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass SHORT-METHOD-COMBINATION8895	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[2];
	base[1]= VV[3];
	base[2]= VV[4];
	V15= listA(9,VV[5],VV[6],VV[7],VV[8],VV[9],Cnil,VV[10],VV[11],Cnil);
	base[3]= list(2,/* INLINE-ARGS */V15,listA(9,VV[5],VV[12],VV[7],VV[13],VV[9],Cnil,VV[10],VV[14],Cnil));
	base[4]= list(2,VV[15],VV[16]);
	base[5]= Cnil;
	symlispcall(VV[119],base+0,6);
	return;
}
/*	local entry for function EXPAND-SHORT-DEFCOMBIN	*/

static object LI4(V17)

register object V17;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{object V18;
	object V19;
	object V20;
	object V21;
	V18= CMPcadr((V17));
	base[4]= CMPcddr((V17));
	base[5]= VV[17];
	base[6]= VV[18];
	vs_top=(vs_base=base+4)+3;
	Lgetf();
	vs_top=sup;
	V19= vs_base[0];
	base[4]= CMPcddr((V17));
	base[5]= VV[19];
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	Lgetf();
	vs_top=sup;
	V20= vs_base[0];
	base[4]= CMPcddr((V17));
	base[5]= VV[20];
	base[6]= (V18);
	vs_top=(vs_base=base+4)+3;
	Lgetf();
	vs_top=sup;
	V21= vs_base[0];
	V22= list(2,VV[21],(V18));
	V23= list(2,VV[24],(V18));
	V24= list(2,VV[24],(V21));
	V25= list(2,VV[24],(V20));
	V26= list(5,VV[23],/* INLINE-ARGS */V23,/* INLINE-ARGS */V24,/* INLINE-ARGS */V25,list(2,VV[24],(V19)));
	{object V27 = (*(LnkLI120))(/* INLINE-ARGS */V22,VV[22],/* INLINE-ARGS */V26);
	VMR4(V27)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOAD-SHORT-DEFCOMBIN	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	{object V28;
	check_arg(4);
	V28=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	base[2]=MMcons(base[2],base[1]);
	base[3]=MMcons(base[3],base[2]);
	vs_top=sup;
	{object V29;
	object V30;
	object V31;
	vs_base=vs_top;
	(void) (*Lnk121)();
	vs_top=sup;
	V29= vs_base[0];
	V32= (VFUN_NARGS=1,(*(LnkLI122))(VV[25]));
	V33= (*(LnkLI123))((V28));
	V34 = (VV[26]->s.s_dbind);
	V30= list(3,/* INLINE-ARGS */V32,/* INLINE-ARGS */V33,V34);
	V35= (VV[125]->s.s_gfdef);
	V36 = (V30);
	V31= (VFUN_NARGS=4,(*(LnkLI124))(V35,Cnil,V36,Cnil));
	base[7]=MMcons(Cnil,base[3]);
	base[8]= VV[27];
	base[9]= VV[28];
	base[10]= Cnil;
	base[11]= VV[29];
	base[12]= (V30);
	base[13]= VV[30];
	base[14]= VV[31];
	base[15]= VV[32];
	base[16]= 
	make_cclosure_new(LC20,Cnil,base[7],Cdata);
	base[17]= VV[33];
	base[18]= list(2,list(2,VV[21],(V28)),(V29));
	vs_top=(vs_base=base+8)+11;
	(void) (*Lnk126)(Lclptr126);
	vs_top=sup;
	(base[7]->c.c_car)= vs_base[0];
	if(((V31))==Cnil){
	goto T50;}
	base[8]=(VV[127]->s.s_gfdef);
	base[9]= (VV[125]->s.s_gfdef);
	base[10]= (V31);
	(void)simple_lispcall(base+8,2);
	goto T50;
T50:;
	base[8]=(VV[128]->s.s_gfdef);
	base[9]= (VV[125]->s.s_gfdef);
	base[10]= (base[7]->c.c_car);
	lispcall(base+8,2);
	return;}
	}
}
/*	function definition for DO-SHORT-METHOD-COMBINATION	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
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
	goto T59;}
	V38= VV[34];
	goto T57;
	goto T59;
T59:;
	{object V43;
	V43= (equal((V38),VV[35])?Ct:Cnil);
	if(((V43))==Cnil){
	goto T64;}
	goto T57;
	goto T64;
T64:;
	{object V44;
	V44= (equal((V38),VV[36])?Ct:Cnil);
	if(((V44))==Cnil){
	goto T68;}
	goto T57;
	goto T68;
T68:;
	base[6]= VV[37];
	base[7]= (V37);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk118)();
	vs_top=sup;}}
	goto T57;
T57:;
	base[6]= VV[2];
	base[7]= VV[38];
	base[8]= (V37);
	base[9]= VV[39];
	base[10]= (V38);
	base[11]= VV[20];
	base[12]= (V39);
	base[13]= VV[19];
	base[14]= (V40);
	base[15]= VV[33];
	base[16]= (V41);
	base[17]= VV[17];
	base[18]= (V42);
	vs_top=(vs_base=base+6)+13;
	(void) (*Lnk126)(Lclptr126);
	return;
	}
}
/*	local entry for function (FAST-METHOD COMPUTE-EFFECTIVE-METHOD (GENERIC-FUNCTION SHORT-METHOD-COMBINATION T))	*/

static object LI7(V50,V51,V52,V53,V54)

object V50;object V51;object V52;object V53;object V54;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V56;
	object V57;
	object V58;
	register object V59;
	base[1]= (V53);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk129)(Lclptr129);
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V53);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk130)(Lclptr130);
	vs_top=sup;
	V56= vs_base[0];
	base[1]= (V53);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk131)(Lclptr131);
	vs_top=sup;
	V57= vs_base[0];
	V58= Cnil;
	V59= Cnil;
	{register object V60;
	register object V61;
	V60= (V54);
	V61= CMPcar((V60));
	goto T99;
T99:;
	if(!(((V60))==Cnil)){
	goto T100;}
	goto T95;
	goto T100;
T100:;
	{register object V62;
	base[2]= (V61);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk132)(Lclptr132);
	vs_top=sup;
	V62= vs_base[0];
	if(((V62))!=Cnil){
	goto T108;}
	base[2]= (V61);
	base[3]= VV[40];
	vs_top=(vs_base=base+2)+2;
	L8(base);
	vs_top=sup;
	goto T104;
	goto T108;
T108:;
	if((CMPcdr((V62)))==Cnil){
	goto T113;}
	base[2]= (V61);
	base[3]= VV[41];
	vs_top=(vs_base=base+2)+2;
	L8(base);
	vs_top=sup;
	goto T104;
	goto T113;
T113:;
	if(!((CMPcar((V62)))==(VV[42]))){
	goto T118;}
	V58= make_cons(V61,(V58));
	goto T104;
	goto T118;
T118:;
	if(!((CMPcar((V62)))==(base[0]))){
	goto T122;}
	V59= make_cons(V61,(V59));
	goto T104;
	goto T122;
T122:;
	base[2]= (V61);
	base[3]= VV[43];
	vs_top=(vs_base=base+2)+2;
	L8(base);
	vs_top=sup;}
	goto T104;
T104:;
	V60= CMPcdr((V60));
	V61= CMPcar((V60));
	goto T99;}
	goto T95;
T95:;
	V58= nreverse((V58));
	V59= nreverse((V59));
	{object V65;
	if((CMPcdr((V59)))!=Cnil){
	goto T138;}
	if(((V57))==Cnil){
	goto T138;}
	V65= list(3,VV[45],CMPcar((V59)),Cnil);
	goto T136;
	goto T138;
T138:;
	V66 = (V56);
	{object V68;
	object V69= (V59);
	if(V69==Cnil){
	V67= Cnil;
	goto T142;}
	base[1]=V68=MMcons(Cnil,Cnil);
	goto T143;
T143:;
	(V68->c.c_car)= list(3,VV[45],(V69->c.c_car),Cnil);
	if((V69=MMcdr(V69))==Cnil){
	V67= base[1];
	goto T142;}
	V68=MMcdr(V68)=MMcons(Cnil,Cnil);
	goto T143;}
	goto T142;
T142:;
	V65= make_cons(V66,V67);
	goto T136;
T136:;
	if(((V59))!=Cnil){
	goto T146;}
	V71= list(2,VV[24],base[0]);
	{object V72 = list(4,VV[46],VV[47],/* INLINE-ARGS */V71,list(2,VV[24],(V52)));
	VMR7(V72)}
	goto T146;
T146:;
	if(((V58))!=Cnil){
	goto T149;}
	{object V73 = (V65);
	VMR7(V73)}
	goto T149;
T149:;
	V74= CMPcar((V58));
	V75= CMPcdr((V58));
	V76= list(2,VV[48],(V65));
	V77= make_cons(/* INLINE-ARGS */V76,Cnil);
	{object V78 = list(3,VV[45],/* INLINE-ARGS */V74,append(/* INLINE-ARGS */V75,/* INLINE-ARGS */V77));
	VMR7(V78)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass LONG-METHOD-COMBINATION8918	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[49];
	base[1]= VV[3];
	base[2]= VV[50];
	V79= listA(9,VV[5],VV[51],VV[7],VV[52],VV[9],Cnil,VV[10],VV[53],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V79,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[119],base+0,6);
	return;
}
/*	local entry for function EXPAND-LONG-DEFCOMBIN	*/

static object LI10(V81)

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
	if(!((CMPcaar((V85)))==(VV[54]))){
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
	if(!((CMPcaar((V85)))==(VV[55]))){
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
	(void) (*Lnk133)();
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
	V94= list(2,VV[21],(V82));
	V95= list(2,VV[24],(V82));
	V96= list(2,VV[24],(V92));
	V97= list(4,VV[57],/* INLINE-ARGS */V95,/* INLINE-ARGS */V96,list(2,VV[51],(V93)));
	{object V98 = (*(LnkLI120))(/* INLINE-ARGS */V94,VV[56],/* INLINE-ARGS */V97);
	VMR9(V98)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOAD-LONG-DEFCOMBIN	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V99;
	object V100;
	check_arg(3);
	V99=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	V100=(base[2]);
	vs_top=sup;
	{object V101;
	object V102;
	object V103;
	V104= (VFUN_NARGS=1,(*(LnkLI122))(VV[25]));
	V105= (*(LnkLI123))((V99));
	V106 = (VV[26]->s.s_dbind);
	V101= list(3,/* INLINE-ARGS */V104,/* INLINE-ARGS */V105,V106);
	V107= (VV[125]->s.s_gfdef);
	V108 = (V101);
	V102= (VFUN_NARGS=4,(*(LnkLI124))(V107,Cnil,V108,Cnil));
	base[6]= VV[27];
	base[7]= VV[28];
	base[8]= Cnil;
	base[9]= VV[29];
	base[10]= (V101);
	base[11]= VV[30];
	base[12]= VV[58];
	base[13]= VV[32];
	base[14]= 
	make_cclosure_new(LC21,Cnil,base[1],Cdata);
	base[15]= VV[33];
	V109= list(2,VV[21],(V99));
	vs_base=vs_top;
	(void) (*Lnk121)();
	vs_top=sup;
	V110= vs_base[0];
	base[16]= list(2,/* INLINE-ARGS */V109,V110);
	vs_top=(vs_base=base+6)+11;
	(void) (*Lnk126)(Lclptr126);
	vs_top=sup;
	V103= vs_base[0];
	{object V112;
	V112= (VV[59]->s.s_dbind);
	base[6]= V99;
	base[7]= (V112);
	base[8]= V100;
	vs_top=(vs_base=base+6)+3;
	siLhash_set();
	vs_top=sup;}
	if(((V102))==Cnil){
	goto T212;}
	base[6]=(VV[127]->s.s_gfdef);
	base[7]= (VV[125]->s.s_gfdef);
	base[8]= (V102);
	(void)simple_lispcall(base+6,2);
	goto T212;
T212:;
	base[6]=(VV[128]->s.s_gfdef);
	base[7]= (VV[125]->s.s_gfdef);
	base[8]= (V103);
	lispcall(base+6,2);
	return;}
	}
}
/*	function definition for (FAST-METHOD COMPUTE-EFFECTIVE-METHOD (GENERIC-FUNCTION LONG-METHOD-COMBINATION T))	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{object V114;
	object V115;
	object V116;
	object V117;
	object V118;
	check_arg(5);
	V114=(base[0]);
	V115=(base[1]);
	V116=(base[2]);
	V117=(base[3]);
	V118=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[7]= (V117);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk129)(Lclptr129);
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= (VV[59]->s.s_dbind);
	vs_top=(vs_base=base+6)+2;
	Lgethash();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (V116);
	base[7]= (V117);
	base[8]= (V118);
	vs_top=(vs_base=base+6)+3;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	function definition for MAKE-LONG-METHOD-COMBINATION-FUNCTION	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{object V120;
	object V121;
	object V122;
	object V123;
	object V124;
	object V125;
	check_arg(6);
	V120=(base[0]);
	V121=(base[1]);
	V122=(base[2]);
	V123=(base[3]);
	V124=(base[4]);
	V125=(base[5]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V126;
	object V127;
	object V128;
	base[6]= (V125);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk134)();
	if(vs_base>=vs_top){vs_top=sup;goto T232;}
	V126= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T233;}
	V127= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T234;}
	V128= vs_base[0];
	vs_top=sup;
	goto T235;
	goto T232;
T232:;
	V126= Cnil;
	goto T233;
T233:;
	V127= Cnil;
	goto T234;
T234:;
	V128= Cnil;
	goto T235;
T235:;
	{register object V129;
	V129= (*(LnkLI135))((V122),(V127),(V128));
	if(((V124))==Cnil){
	goto T237;}
	{object V130;
	object V132;
	V130= list(2,(V124),VV[60]);
	V132= make_cons((V130),CMPcadr(V129));
	(CMPcdr(V129))->c.c_car = (V132);
	(void)(CMPcdr(V129));}
	goto T237;
T237:;
	if(((V123))==Cnil){
	goto T243;}
	V129= (*(LnkLI136))((V129),(V123));
	goto T243;
T243:;
	if(((V121))==Cnil){
	goto T247;}
	V129= list(3,VV[61],list(2,VV[51],list(3,VV[62],(V121),(V129))),VV[63]);
	goto T247;
T247:;
	base[6]= (V126);
	base[7]= list(4,VV[62],VV[64],VV[65],list(3,VV[66],VV[67],(V129)));
	vs_top=(vs_base=base+6)+2;
	return;}}
	}
}
/*	local entry for function WRAP-METHOD-GROUP-SPECIFIER-BINDINGS	*/

static object LI14(V136,V137,V138)

object V136;object V137;object V138;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{object V139;
	object V140;
	object V141;
	object V142;
	object V143;
	{object V144;
	register object V145;
	object V146;
	register object V147;
	object V148;
	register object V149;
	object V150;
	register object V151;
	object V152;
	register object V153;
	V144= Cnil;
	V145= Cnil;
	V146= Cnil;
	V147= Cnil;
	V148= Cnil;
	V149= Cnil;
	V150= Cnil;
	V151= Cnil;
	V152= Cnil;
	V153= Cnil;
	{register object V154;
	object V155;
	V154= (V136);
	V155= CMPcar((V154));
	goto T268;
T268:;
	if(!(((V154))==Cnil)){
	goto T269;}
	goto T264;
	goto T269;
T269:;
	{register object V156;
	object V157;
	register object V158;
	register object V159;
	object V160;
	base[1]= (V155);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk137)();
	if(vs_base>=vs_top){vs_top=sup;goto T276;}
	V156= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T277;}
	V157= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T278;}
	V158= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T279;}
	V159= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T280;}
	V160= vs_base[0];
	vs_top=sup;
	goto T281;
	goto T276;
T276:;
	V156= Cnil;
	goto T277;
T277:;
	V157= Cnil;
	goto T278;
T278:;
	V158= Cnil;
	goto T279;
T279:;
	V159= Cnil;
	goto T280;
T280:;
	V160= Cnil;
	goto T281;
T281:;
	{register object V161;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V161= vs_base[0];
	if(((V144))!=Cnil){
	goto T285;}
	V145= make_cons(V156,Cnil);
	V144= (V145);
	goto T283;
	goto T285;
T285:;
	V164= make_cons(V156,Cnil);
	((V145))->c.c_cdr = /* INLINE-ARGS */V164;
	V163= (V145);
	V145= CMPcdr(V163);
	goto T283;
T283:;
	if(((V146))!=Cnil){
	goto T293;}
	V147= make_cons(V161,Cnil);
	V146= (V147);
	goto T291;
	goto T293;
T293:;
	V167= make_cons(V161,Cnil);
	((V147))->c.c_cdr = /* INLINE-ARGS */V167;
	V166= (V147);
	V147= CMPcdr(V166);
	goto T291;
T291:;
	{object V168;
	V169= make_cons(VV[68],(V157));
	V170= list(3,VV[70],(V161),VV[71]);
	V171= list(3,VV[72],VV[67],list(2,VV[24],list(3,VV[46],VV[73],list(2,VV[24],(V156)))));
	V172= list(4,VV[69],/* INLINE-ARGS */V170,/* INLINE-ARGS */V171,list(3,VV[74],(V161),VV[71]));
	V168= list(3,/* INLINE-ARGS */V169,/* INLINE-ARGS */V172,list(3,VV[75],VV[76],(V156)));
	if(((V148))!=Cnil){
	goto T302;}
	V149= make_cons((V168),Cnil);
	V148= (V149);
	goto T299;
	goto T302;
T302:;
	V174= make_cons((V168),Cnil);
	((V149))->c.c_cdr = /* INLINE-ARGS */V174;
	V173= (V149);
	V149= CMPcdr(V173);}
	goto T299;
T299:;
	if(((V160))==Cnil){
	goto T308;}
	{object V175;
	V176= list(2,VV[78],(V156));
	V175= list(3,VV[77],/* INLINE-ARGS */V176,list(3,VV[72],VV[67],list(2,VV[24],list(3,VV[46],VV[79],list(2,VV[24],(V156))))));
	if(((V150))!=Cnil){
	goto T313;}
	V151= make_cons((V175),Cnil);
	V150= (V151);
	goto T308;
	goto T313;
T313:;
	V178= make_cons((V175),Cnil);
	((V151))->c.c_cdr = /* INLINE-ARGS */V178;
	V177= (V151);
	V151= CMPcdr(V177);}
	goto T308;
T308:;
	goto T321;
T321:;
	base[1]= (V159);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T323;}{object V179;
	V179= (V159);
	base[1]= (V159);
	vs_top=(vs_base=base+1)+1;
	Leval();
	vs_top=sup;
	V159= vs_base[0];
	V180 = (V159);
	if((((V179)==(V180)?Ct:Cnil))==Cnil){
	goto T322;}}
	goto T323;
T323:;
	goto T319;
	goto T322;
T322:;
	goto T321;
	goto T319;
T319:;
	{object V181;
	if(!(((V159))==(VV[80]))){
	goto T333;}
	V181= list(3,VV[74],(V156),list(2,VV[81],(V156)));
	goto T331;
	goto T333;
T333:;
	if(!(((V159))==(VV[82]))){
	goto T336;}
	V181= Cnil;
	goto T331;
	goto T336;
T336:;
	V181= list(4,VV[83],(V159),list(2,VV[80],list(3,VV[74],(V156),list(2,VV[81],(V156)))),VV[84]);
	goto T331;
T331:;
	if(((V152))!=Cnil){
	goto T339;}
	V153= make_cons((V181),Cnil);
	V152= (V153);
	goto T273;
	goto T339;
T339:;
	V183= make_cons((V181),Cnil);
	((V153))->c.c_cdr = /* INLINE-ARGS */V183;
	V182= (V153);
	V153= CMPcdr(V182);}}}
	goto T273;
T273:;
	V154= CMPcdr((V154));
	V155= CMPcar((V154));
	goto T268;}
	goto T264;
T264:;
	base[0]= (V144);
	base[1]= (V146);
	base[2]= (V148);
	base[3]= (V150);
	base[4]= (V152);
	vs_top=(vs_base=base+0)+5;}
	if(vs_base>=vs_top){vs_top=sup;goto T355;}
	V139= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T356;}
	V140= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T357;}
	V141= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T358;}
	V142= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T359;}
	V143= vs_base[0];
	vs_top=sup;
	goto T360;
	goto T355;
T355:;
	V139= Cnil;
	goto T356;
T356:;
	V140= Cnil;
	goto T357;
T357:;
	V141= Cnil;
	goto T358;
T358:;
	V142= Cnil;
	goto T359;
T359:;
	V143= Cnil;
	goto T360;
T360:;
	V184= append((V139),(V140));
	V185= list(3,VV[86],VV[87],list(4,VV[85],VV[88],VV[89],make_cons(VV[90],(V141))));
	base[0]= (V142);
	base[1]= (V143);
	base[2]= (V138);
	vs_top=(vs_base=base+0)+3;
	Lappend();
	vs_top=sup;
	V186= vs_base[0];
	V187= make_cons(/* INLINE-ARGS */V185,V186);
	{object V188 = listA(3,VV[85],/* INLINE-ARGS */V184,append((V137),/* INLINE-ARGS */V187));
	VMR13(V188)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for PARSE-METHOD-GROUP-SPECIFIER	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{register object V189;
	check_arg(1);
	V189=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V190;
	register object V191;
	object V192;
	{object V193;
	V193= CMPcar((V189));
	V189= CMPcdr((V189));
	V190= (V193);}
	V191= Cnil;
	{register object V194;
	register object V195;
	V194= Cnil;
	V195= Cnil;
	goto T375;
T375:;
	if(((V189))==Cnil){
	goto T377;}
	{register object x= CMPcar((V189)),V196= VV[91];
	while(V196!=Cnil)
	if(x==(V196->c.c_car)){
	goto T381;
	}else V196=V196->c.c_cdr;
	goto T378;}
	goto T381;
T381:;
	goto T377;
T377:;
	goto T373;
	goto T378;
T378:;
	{register object V197;
	{object V198;
	V198= CMPcar((V189));
	V189= CMPcdr((V189));
	V197= (V198);}
	V191= make_cons(V197,(V191));
	{register object V200;
	V200= (*(LnkLI138))((V190),(V197));
	if(((V194))!=Cnil){
	goto T390;}
	V195= make_cons((V200),Cnil);
	V194= (V195);
	goto T376;
	goto T390;
T390:;
	V202= make_cons((V200),Cnil);
	((V195))->c.c_cdr = /* INLINE-ARGS */V202;
	V201= (V195);
	V195= CMPcdr(V201);}}
	goto T376;
T376:;
	goto T375;
	goto T373;
T373:;
	V192= (V194);}
	base[3]= (V190);
	base[4]= (V192);
	base[6]= (V189);
	base[7]= VV[92];
	base[8]= (*(LnkLI139))((V191));
	vs_top=(vs_base=base+6)+3;
	Lgetf();
	vs_top=sup;
	base[5]= vs_base[0];
	base[7]= (V189);
	base[8]= VV[93];
	base[9]= VV[80];
	vs_top=(vs_base=base+7)+3;
	Lgetf();
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= (V189);
	base[9]= VV[94];
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

static object LI16(V205,V206)

object V205;register object V206;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(!(((V206))==(Cnil))){
	goto T412;}
	{object V207 = VV[95];
	VMR15(V207)}
	goto T412;
T412:;
	if(!(((V206))==(VV[96]))){
	goto T415;}
	{object V208 = Ct;
	VMR15(V208)}
	goto T415;
T415:;
	if(!(type_of((V206))==t_symbol)){
	goto T418;}
	{object V209 = list(2,(V206),VV[97]);
	VMR15(V209)}
	goto T418;
T418:;
	if(!(type_of((V206))==t_cons||((V206))==Cnil)){
	goto T421;}
	{object V210 = list(3,VV[98],list(2,VV[24],(V206)),VV[97]);
	VMR15(V210)}
	goto T421;
T421:;
	base[0]= VV[99];
	base[1]= (V205);
	base[2]= (V206);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V211 = vs_base[0];
	VMR15(V211)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function QUALIFIER-CHECK-RUNTIME	*/

static object LI17(V214,V215)

register object V214;register object V215;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	goto T427;
T427:;
	if(((V214))!=Cnil){
	goto T430;}
	if(((V215))!=Cnil){
	goto T430;}
	{object V216 = Ct;
	VMR16(V216)}
	goto T430;
T430:;
	if(!(((V214))==(VV[96]))){
	goto T435;}
	{object V217 = Ct;
	VMR16(V217)}
	goto T435;
T435:;
	if(((V214))==Cnil){
	goto T438;}
	if(((V215))==Cnil){
	goto T438;}
	if(!((CMPcar((V214)))==(CMPcar((V215))))){
	goto T438;}
	{register object V218;
	V218= CMPcar((V214));
	V214= CMPcdr((V214));}
	{register object V219;
	V219= CMPcar((V215));
	V215= CMPcdr((V215));
	goto T428;}
	goto T438;
T438:;
	{object V220 = Cnil;
	VMR16(V220)}
	goto T428;
T428:;
	goto T427;
	return Cnil;
}
/*	local entry for function MAKE-DEFAULT-METHOD-GROUP-DESCRIPTION	*/

static object LI18(V222)

register object V222;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if((CMPcdr((V222)))==Cnil){
	goto T453;}
	base[0]= Cnil;
	base[1]= VV[100];
	base[3]= (V222);
	vs_top=(vs_base=base+3)+1;
	Lbutlast();
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= (V222);
	vs_top=(vs_base=base+4)+1;
	Llast();
	vs_top=sup;
	V223= vs_base[0];
	base[3]= CMPcar(V223);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V224 = vs_base[0];
	VMR17(V224)}
	goto T453;
T453:;
	base[0]= Cnil;
	base[1]= VV[101];
	base[2]= CMPcar((V222));
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V225 = vs_base[0];
	VMR17(V225)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DEAL-WITH-ARGUMENTS-OPTION	*/

static object LI19(V228,V229)

object V228;object V229;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V230;
	object V231;
	{register object V232;
	register object V233;
	V232= Cnil;
	V233= Cnil;
	{register object V234;
	register object V235;
	V234= (V229);
	V235= CMPcar((V234));
	goto T472;
T472:;
	if(!(((V234))==Cnil)){
	goto T473;}
	goto T468;
	goto T473;
T473:;
	{register object x= (V235),V236= VV[102];
	while(V236!=Cnil)
	if(x==(V236->c.c_car)){
	goto T480;
	}else V236=V236->c.c_cdr;
	goto T479;}
	goto T480;
T480:;
	if(((V232))!=Cnil){
	goto T482;}
	V233= make_cons(V235,Cnil);
	V232= (V233);
	goto T477;
	goto T482;
T482:;
	V239= make_cons(V235,Cnil);
	((V233))->c.c_cdr = /* INLINE-ARGS */V239;
	V238= (V233);
	V233= CMPcdr(V238);
	goto T477;
	goto T479;
T479:;
	{object V240;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V240= vs_base[0];
	if(((V232))!=Cnil){
	goto T490;}
	V233= make_cons((V240),Cnil);
	V232= (V233);
	goto T477;
	goto T490;
T490:;
	V242= make_cons((V240),Cnil);
	((V233))->c.c_cdr = /* INLINE-ARGS */V242;
	V241= (V233);
	V233= CMPcdr(V241);}
	goto T477;
T477:;
	V234= CMPcdr((V234));
	V235= CMPcar((V234));
	goto T472;}
	goto T468;
T468:;
	V230= (V232);}
	{object V243;
	register object V244;
	V243= Cnil;
	V244= Cnil;
	{register object V245;
	register object V246;
	register object V247;
	object V248;
	V245= (V229);
	V246= Cnil;
	V247= (V230);
	V248= Cnil;
	goto T510;
T510:;
	{object V249;
	if(!(((V245))==Cnil)){
	goto T516;}
	goto T504;
	goto T516;
T516:;
	V249= CMPcar((V245));
	V245= CMPcdr((V245));
	V246= (V249);}
	{object V250;
	if(!(((V247))==Cnil)){
	goto T524;}
	goto T504;
	goto T524;
T524:;
	V250= CMPcar((V247));
	V247= CMPcdr((V247));
	V248= (V250);}
	{register object x= (V246),V251= VV[102];
	while(V251!=Cnil)
	if(x==(V251->c.c_car)){
	goto T511;
	}else V251=V251->c.c_cdr;}
	{object V252;
	V252= list(2,(V246),list(2,VV[24],(V248)));
	if(((V243))!=Cnil){
	goto T532;}
	V244= make_cons((V252),Cnil);
	V243= (V244);
	goto T511;
	goto T532;
T532:;
	V254= make_cons((V252),Cnil);
	((V244))->c.c_cdr = /* INLINE-ARGS */V254;
	V253= (V244);
	V244= CMPcdr(V253);}
	goto T511;
T511:;
	goto T510;}
	goto T504;
T504:;
	V231= (V243);}
	{object V256;
	V256= append((V231),CMPcadr((V228)));
	(CMPcdr(V228))->c.c_car = (V256);
	(void)(CMPcdr(V228));}
	{object V257;
	{register object x= VV[103],V258= (V230);
	while(V258!=Cnil)
	if(x==(V258->c.c_car)){
	V257= V258;
	goto T543;
	}else V258=V258->c.c_cdr;
	V257= Cnil;}
	goto T543;
T543:;
	if(((V257))==Cnil){
	goto T545;}
	goto T542;
	goto T545;
T545:;
	{object V259;
	{register object x= VV[104],V260= (V230);
	while(V260!=Cnil)
	if(x==(V260->c.c_car)){
	V259= V260;
	goto T547;
	}else V260=V260->c.c_cdr;
	V259= Cnil;}
	goto T547;
T547:;
	if(((V259))==Cnil){
	goto T549;}
	goto T542;
	goto T549;
T549:;
	{register object x= VV[105],V261= (V230);
	while(V261!=Cnil)
	if(x==(V261->c.c_car)){
	goto T553;
	}else V261=V261->c.c_cdr;
	goto T552;}
	goto T553;
T553:;
	V230= append((V230),VV[106]);
	goto T542;
	goto T552;
T552:;
	V230= append((V230),VV[107]);}}
	goto T542;
T542:;
	V262= list(2,VV[108],(V228));
	V263= make_cons(/* INLINE-ARGS */V262,Cnil);
	V264= list(2,VV[24],(V230));
	{register object x= VV[113],V266= (V230);
	while(V266!=Cnil)
	if(x==(V266->c.c_car)){
	goto T559;
	}else V266=V266->c.c_cdr;
	goto T558;}
	goto T559;
T559:;
	V265= VV[114];
	goto T556;
	goto T558;
T558:;
	V265= Cnil;
	goto T556;
T556:;
	{object V267 = list(3,VV[85],/* INLINE-ARGS */V263,list(4,VV[109],VV[110],list(3,VV[109],VV[111],list(5,VV[109],VV[112],/* INLINE-ARGS */V264,V265,VV[108])),VV[115]));
	VMR18(V267)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC21(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{object V268;
	object V269;
	object V270;
	check_arg(3);
	V268=(base[0]);
	V269=(base[1]);
	V270=(base[2]);
	vs_top=sup;
	base[3]= VV[49];
	base[4]= VV[38];
	base[5]= (V269);
	base[6]= VV[17];
	base[7]= (base0[0]->c.c_car);
	base[8]= VV[39];
	base[9]= (V270);
	vs_top=(vs_base=base+3)+7;
	(void) (*Lnk126)(Lclptr126);
	return;
	}
}
/*	local function LOSE	*/

static void L8(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{register object V271;
	object V272;
	check_arg(2);
	V271=(base[0]);
	V272=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V271);
	base[3]= VV[44];
	base[4]= (V271);
	base[5]= (V272);
	base[6]= base0[0];
	base[7]= base0[0];
	vs_top=(vs_base=base+2)+6;
	(void) (*Lnk140)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC20(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{object V273;
	object V274;
	object V275;
	check_arg(3);
	V273=(base[0]);
	V274=(base[1]);
	V275=(base[2]);
	vs_top=sup;
	base[3]= (V274);
	base[4]= (V275);
	base[5]= (base0[3]->c.c_car);
	base[6]= (base0[2]->c.c_car);
	base[7]= (base0[0]->c.c_car);
	base[8]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk141)();
	return;
	}
}
static void LnkT141(){ call_or_link(VV[141],(void **)(void *)&Lnk141);} /* DO-SHORT-METHOD-COMBINATION */
static void LnkT140(){ call_or_link(VV[140],(void **)(void *)&Lnk140);} /* INVALID-METHOD-ERROR */
static object  LnkTLI139(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[139],(void **)(void *)&LnkLI139,1,first,ap);va_end(ap);return V1;} /* MAKE-DEFAULT-METHOD-GROUP-DESCRIPTION */
static object  LnkTLI138(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[138],(void **)(void *)&LnkLI138,2,first,ap);va_end(ap);return V1;} /* PARSE-QUALIFIER-PATTERN */
static void LnkT137(){ call_or_link(VV[137],(void **)(void *)&Lnk137);} /* PARSE-METHOD-GROUP-SPECIFIER */
static object  LnkTLI136(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[136],(void **)(void *)&LnkLI136,2,first,ap);va_end(ap);return V1;} /* DEAL-WITH-ARGUMENTS-OPTION */
static object  LnkTLI135(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[135],(void **)(void *)&LnkLI135,3,first,ap);va_end(ap);return V1;} /* WRAP-METHOD-GROUP-SPECIFIER-BINDINGS */
static void LnkT134(){ call_or_link(VV[134],(void **)(void *)&Lnk134);} /* EXTRACT-DECLARATIONS */
static void LnkT133(){ call_or_link(VV[133],(void **)(void *)&Lnk133);} /* MAKE-LONG-METHOD-COMBINATION-FUNCTION */
static void LnkT132(ptr) object *ptr;{ call_or_link_closure(VV[132],(void **)(void *)&Lnk132,(void **)(void *)&Lclptr132);} /* METHOD-QUALIFIERS */
static void LnkT131(ptr) object *ptr;{ call_or_link_closure(VV[131],(void **)(void *)&Lnk131,(void **)(void *)&Lclptr131);} /* SHORT-COMBINATION-IDENTITY-WITH-ONE-ARGUMENT */
static void LnkT130(ptr) object *ptr;{ call_or_link_closure(VV[130],(void **)(void *)&Lnk130,(void **)(void *)&Lclptr130);} /* SHORT-COMBINATION-OPERATOR */
static void LnkT129(ptr) object *ptr;{ call_or_link_closure(VV[129],(void **)(void *)&Lnk129,(void **)(void *)&Lclptr129);} /* METHOD-COMBINATION-TYPE */
static void LnkT126(ptr) object *ptr;{ call_or_link_closure(VV[126],(void **)(void *)&Lnk126,(void **)(void *)&Lclptr126);} /* MAKE-INSTANCE */
static object  LnkTLI124(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[124],(void **)(void *)&LnkLI124,first,ap);va_end(ap);return V1;} /* GET-METHOD */
static object  LnkTLI123(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[123],(void **)(void *)&LnkLI123,1,first,ap);va_end(ap);return V1;} /* INTERN-EQL-SPECIALIZER */
static object  LnkTLI122(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[122],(void **)(void *)&LnkLI122,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static void LnkT121(){ call_or_link(VV[121],(void **)(void *)&Lnk121);} /* LOAD-TRUENAME */
static object  LnkTLI120(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[120],(void **)(void *)&LnkLI120,3,first,ap);va_end(ap);return V1;} /* MAKE-TOP-LEVEL-FORM */
static void LnkT118(){ call_or_link(VV[118],(void **)(void *)&Lnk118);} /* METHOD-COMBINATION-ERROR */
static object  LnkTLI117(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[117],(void **)(void *)&LnkLI117,1,first,ap);va_end(ap);return V1;} /* EXPAND-SHORT-DEFCOMBIN */
static object  LnkTLI116(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[116],(void **)(void *)&LnkLI116,1,first,ap);va_end(ap);return V1;} /* EXPAND-LONG-DEFCOMBIN */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

