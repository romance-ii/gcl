
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
	V30= list(3,/* INLINE-ARGS */V32,/* INLINE-ARGS */V33,(VV[26]->s.s_dbind));
	V34= (VV[125]->s.s_gfdef);
	V31= (VFUN_NARGS=4,(*(LnkLI124))(V34,Cnil,(V30),Cnil));
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
	{object V35;
	register object V36;
	object V37;
	object V38;
	object V39;
	object V40;
	check_arg(6);
	V35=(base[0]);
	V36=(base[1]);
	V37=(base[2]);
	V38=(base[3]);
	V39=(base[4]);
	V40=(base[5]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V36))!=Cnil){
	goto T59;}
	V36= VV[34];
	goto T57;
	goto T59;
T59:;
	{object V41;
	V41= (equal((V36),VV[35])?Ct:Cnil);
	if(((V41))==Cnil){
	goto T64;}
	goto T57;
	goto T64;
T64:;
	{object V42;
	V42= (equal((V36),VV[36])?Ct:Cnil);
	if(((V42))==Cnil){
	goto T68;}
	goto T57;
	goto T68;
T68:;
	base[6]= VV[37];
	base[7]= (V35);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk118)();
	vs_top=sup;}}
	goto T57;
T57:;
	base[6]= VV[2];
	base[7]= VV[38];
	base[8]= (V35);
	base[9]= VV[39];
	base[10]= (V36);
	base[11]= VV[20];
	base[12]= (V37);
	base[13]= VV[19];
	base[14]= (V38);
	base[15]= VV[33];
	base[16]= (V39);
	base[17]= VV[17];
	base[18]= (V40);
	vs_top=(vs_base=base+6)+13;
	(void) (*Lnk126)(Lclptr126);
	return;
	}
}
/*	local entry for function (FAST-METHOD COMPUTE-EFFECTIVE-METHOD (GENERIC-FUNCTION SHORT-METHOD-COMBINATION T))	*/

static object LI7(V48,V49,V50,V51,V52)

object V48;object V49;object V50;object V51;object V52;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V54;
	object V55;
	object V56;
	register object V57;
	base[1]= (V51);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk129)(Lclptr129);
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V51);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk130)(Lclptr130);
	vs_top=sup;
	V54= vs_base[0];
	base[1]= (V51);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk131)(Lclptr131);
	vs_top=sup;
	V55= vs_base[0];
	V56= Cnil;
	V57= Cnil;
	{register object V58;
	register object V59;
	V58= (V52);
	V59= CMPcar((V58));
	goto T99;
T99:;
	if(!(((V58))==Cnil)){
	goto T100;}
	goto T95;
	goto T100;
T100:;
	{register object V60;
	base[2]= (V59);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk132)(Lclptr132);
	vs_top=sup;
	V60= vs_base[0];
	if(((V60))!=Cnil){
	goto T108;}
	base[2]= (V59);
	base[3]= VV[40];
	vs_top=(vs_base=base+2)+2;
	L8(base);
	vs_top=sup;
	goto T104;
	goto T108;
T108:;
	if((CMPcdr((V60)))==Cnil){
	goto T113;}
	base[2]= (V59);
	base[3]= VV[41];
	vs_top=(vs_base=base+2)+2;
	L8(base);
	vs_top=sup;
	goto T104;
	goto T113;
T113:;
	if(!((CMPcar((V60)))==(VV[42]))){
	goto T118;}
	V56= make_cons(V59,(V56));
	goto T104;
	goto T118;
T118:;
	if(!((CMPcar((V60)))==(base[0]))){
	goto T122;}
	V57= make_cons(V59,(V57));
	goto T104;
	goto T122;
T122:;
	base[2]= (V59);
	base[3]= VV[43];
	vs_top=(vs_base=base+2)+2;
	L8(base);
	vs_top=sup;}
	goto T104;
T104:;
	V58= CMPcdr((V58));
	V59= CMPcar((V58));
	goto T99;}
	goto T95;
T95:;
	V56= nreverse((V56));
	V57= nreverse((V57));
	{object V63;
	if((CMPcdr((V57)))!=Cnil){
	goto T138;}
	if(((V55))==Cnil){
	goto T138;}
	V63= list(3,VV[45],CMPcar((V57)),Cnil);
	goto T136;
	goto T138;
T138:;
	{object V65;
	object V66= (V57);
	if(V66==Cnil){
	V64= Cnil;
	goto T142;}
	base[1]=V65=MMcons(Cnil,Cnil);
	goto T143;
T143:;
	(V65->c.c_car)= list(3,VV[45],(V66->c.c_car),Cnil);
	if((V66=MMcdr(V66))==Cnil){
	V64= base[1];
	goto T142;}
	V65=MMcdr(V65)=MMcons(Cnil,Cnil);
	goto T143;}
	goto T142;
T142:;
	V63= make_cons((V54),V64);
	goto T136;
T136:;
	if(((V57))!=Cnil){
	goto T146;}
	V68= list(2,VV[24],base[0]);
	{object V69 = list(4,VV[46],VV[47],/* INLINE-ARGS */V68,list(2,VV[24],(V50)));
	VMR7(V69)}
	goto T146;
T146:;
	if(((V56))!=Cnil){
	goto T149;}
	{object V70 = (V63);
	VMR7(V70)}
	goto T149;
T149:;
	V71= CMPcar((V56));
	V72= CMPcdr((V56));
	V73= list(2,VV[48],(V63));
	V74= make_cons(/* INLINE-ARGS */V73,Cnil);
	{object V75 = list(3,VV[45],/* INLINE-ARGS */V71,append(/* INLINE-ARGS */V72,/* INLINE-ARGS */V74));
	VMR7(V75)}}}
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
	V76= listA(9,VV[5],VV[51],VV[7],VV[52],VV[9],Cnil,VV[10],VV[53],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V76,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[119],base+0,6);
	return;
}
/*	local entry for function EXPAND-LONG-DEFCOMBIN	*/

static object LI10(V78)

register object V78;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{object V79;
	object V80;
	object V81;
	register object V82;
	object V83;
	object V84;
	V79= CMPcadr((V78));
	V80= CMPcaddr((V78));
	V81= CMPcadddr((V78));
	V82= CMPcddddr((V78));
	V83= Cnil;
	V84= Cnil;
	if(!(type_of(CMPcar((V82)))==t_cons)){
	goto T161;}
	if(!((CMPcaar((V82)))==(VV[54]))){
	goto T161;}
	{object V86;
	V86= CMPcar((V82));
	V82= CMPcdr((V82));
	V85= (V86);}
	V83= CMPcdr(V85);
	goto T161;
T161:;
	if(!(type_of(CMPcar((V82)))==t_cons)){
	goto T171;}
	if(!((CMPcaar((V82)))==(VV[55]))){
	goto T171;}
	{object V88;
	V88= CMPcar((V82));
	V82= CMPcdr((V82));
	V87= (V88);}
	V84= CMPcadr(V87);
	goto T171;
T171:;
	{object V89;
	object V90;
	base[0]= (V79);
	base[1]= (V80);
	base[2]= (V81);
	base[3]= (V83);
	base[4]= (V84);
	base[5]= (V82);
	vs_top=(vs_base=base+0)+6;
	(void) (*Lnk133)();
	if(vs_base>=vs_top){vs_top=sup;goto T188;}
	V89= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T189;}
	V90= vs_base[0];
	vs_top=sup;
	goto T190;
	goto T188;
T188:;
	V89= Cnil;
	goto T189;
T189:;
	V90= Cnil;
	goto T190;
T190:;
	V91= list(2,VV[21],(V79));
	V92= list(2,VV[24],(V79));
	V93= list(2,VV[24],(V89));
	V94= list(4,VV[57],/* INLINE-ARGS */V92,/* INLINE-ARGS */V93,list(2,VV[51],(V90)));
	{object V95 = (*(LnkLI120))(/* INLINE-ARGS */V91,VV[56],/* INLINE-ARGS */V94);
	VMR9(V95)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOAD-LONG-DEFCOMBIN	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V96;
	object V97;
	check_arg(3);
	V96=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	V97=(base[2]);
	vs_top=sup;
	{object V98;
	object V99;
	object V100;
	V101= (VFUN_NARGS=1,(*(LnkLI122))(VV[25]));
	V102= (*(LnkLI123))((V96));
	V98= list(3,/* INLINE-ARGS */V101,/* INLINE-ARGS */V102,(VV[26]->s.s_dbind));
	V103= (VV[125]->s.s_gfdef);
	V99= (VFUN_NARGS=4,(*(LnkLI124))(V103,Cnil,(V98),Cnil));
	base[6]= VV[27];
	base[7]= VV[28];
	base[8]= Cnil;
	base[9]= VV[29];
	base[10]= (V98);
	base[11]= VV[30];
	base[12]= VV[58];
	base[13]= VV[32];
	base[14]= 
	make_cclosure_new(LC21,Cnil,base[1],Cdata);
	base[15]= VV[33];
	V104= list(2,VV[21],(V96));
	vs_base=vs_top;
	(void) (*Lnk121)();
	vs_top=sup;
	V105= vs_base[0];
	base[16]= list(2,/* INLINE-ARGS */V104,V105);
	vs_top=(vs_base=base+6)+11;
	(void) (*Lnk126)(Lclptr126);
	vs_top=sup;
	V100= vs_base[0];
	{object V107;
	V107= (VV[59]->s.s_dbind);
	base[6]= V96;
	base[7]= (V107);
	base[8]= V97;
	vs_top=(vs_base=base+6)+3;
	siLhash_set();
	vs_top=sup;}
	if(((V99))==Cnil){
	goto T212;}
	base[6]=(VV[127]->s.s_gfdef);
	base[7]= (VV[125]->s.s_gfdef);
	base[8]= (V99);
	(void)simple_lispcall(base+6,2);
	goto T212;
T212:;
	base[6]=(VV[128]->s.s_gfdef);
	base[7]= (VV[125]->s.s_gfdef);
	base[8]= (V100);
	lispcall(base+6,2);
	return;}
	}
}
/*	function definition for (FAST-METHOD COMPUTE-EFFECTIVE-METHOD (GENERIC-FUNCTION LONG-METHOD-COMBINATION T))	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{object V109;
	object V110;
	object V111;
	object V112;
	object V113;
	check_arg(5);
	V109=(base[0]);
	V110=(base[1]);
	V111=(base[2]);
	V112=(base[3]);
	V113=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[7]= (V112);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk129)(Lclptr129);
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= (VV[59]->s.s_dbind);
	vs_top=(vs_base=base+6)+2;
	Lgethash();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (V111);
	base[7]= (V112);
	base[8]= (V113);
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
	{object V115;
	object V116;
	object V117;
	object V118;
	object V119;
	object V120;
	check_arg(6);
	V115=(base[0]);
	V116=(base[1]);
	V117=(base[2]);
	V118=(base[3]);
	V119=(base[4]);
	V120=(base[5]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V121;
	object V122;
	object V123;
	base[6]= (V120);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk134)();
	if(vs_base>=vs_top){vs_top=sup;goto T232;}
	V121= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T233;}
	V122= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T234;}
	V123= vs_base[0];
	vs_top=sup;
	goto T235;
	goto T232;
T232:;
	V121= Cnil;
	goto T233;
T233:;
	V122= Cnil;
	goto T234;
T234:;
	V123= Cnil;
	goto T235;
T235:;
	{register object V124;
	V124= (*(LnkLI135))((V117),(V122),(V123));
	if(((V119))==Cnil){
	goto T237;}
	{object V125;
	object V127;
	V125= list(2,(V119),VV[60]);
	V127= make_cons((V125),CMPcadr(V124));
	(CMPcdr(V124))->c.c_car = (V127);
	(void)(CMPcdr(V124));}
	goto T237;
T237:;
	if(((V118))==Cnil){
	goto T243;}
	V124= (*(LnkLI136))((V124),(V118));
	goto T243;
T243:;
	if(((V116))==Cnil){
	goto T247;}
	V124= list(3,VV[61],list(2,VV[51],list(3,VV[62],(V116),(V124))),VV[63]);
	goto T247;
T247:;
	base[6]= (V121);
	base[7]= list(4,VV[62],VV[64],VV[65],list(3,VV[66],VV[67],(V124)));
	vs_top=(vs_base=base+6)+2;
	return;}}
	}
}
/*	local entry for function WRAP-METHOD-GROUP-SPECIFIER-BINDINGS	*/

static object LI14(V131,V132,V133)

object V131;object V132;object V133;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{object V134;
	object V135;
	object V136;
	object V137;
	object V138;
	{object V139;
	register object V140;
	object V141;
	register object V142;
	object V143;
	register object V144;
	object V145;
	register object V146;
	object V147;
	register object V148;
	V139= Cnil;
	V140= Cnil;
	V141= Cnil;
	V142= Cnil;
	V143= Cnil;
	V144= Cnil;
	V145= Cnil;
	V146= Cnil;
	V147= Cnil;
	V148= Cnil;
	{register object V149;
	object V150;
	V149= (V131);
	V150= CMPcar((V149));
	goto T268;
T268:;
	if(!(((V149))==Cnil)){
	goto T269;}
	goto T264;
	goto T269;
T269:;
	{register object V151;
	object V152;
	register object V153;
	register object V154;
	object V155;
	base[1]= (V150);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk137)();
	if(vs_base>=vs_top){vs_top=sup;goto T276;}
	V151= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T277;}
	V152= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T278;}
	V153= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T279;}
	V154= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T280;}
	V155= vs_base[0];
	vs_top=sup;
	goto T281;
	goto T276;
T276:;
	V151= Cnil;
	goto T277;
T277:;
	V152= Cnil;
	goto T278;
T278:;
	V153= Cnil;
	goto T279;
T279:;
	V154= Cnil;
	goto T280;
T280:;
	V155= Cnil;
	goto T281;
T281:;
	{register object V156;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V156= vs_base[0];
	if(((V139))!=Cnil){
	goto T285;}
	V140= make_cons(V151,Cnil);
	V139= (V140);
	goto T283;
	goto T285;
T285:;
	V159= make_cons(V151,Cnil);
	((V140))->c.c_cdr = /* INLINE-ARGS */V159;
	V158= (V140);
	V140= CMPcdr(V158);
	goto T283;
T283:;
	if(((V141))!=Cnil){
	goto T293;}
	V142= make_cons(V156,Cnil);
	V141= (V142);
	goto T291;
	goto T293;
T293:;
	V162= make_cons(V156,Cnil);
	((V142))->c.c_cdr = /* INLINE-ARGS */V162;
	V161= (V142);
	V142= CMPcdr(V161);
	goto T291;
T291:;
	{object V163;
	V164= make_cons(VV[68],(V152));
	V165= list(3,VV[70],(V156),VV[71]);
	V166= list(3,VV[72],VV[67],list(2,VV[24],list(3,VV[46],VV[73],list(2,VV[24],(V151)))));
	V167= list(4,VV[69],/* INLINE-ARGS */V165,/* INLINE-ARGS */V166,list(3,VV[74],(V156),VV[71]));
	V163= list(3,/* INLINE-ARGS */V164,/* INLINE-ARGS */V167,list(3,VV[75],VV[76],(V151)));
	if(((V143))!=Cnil){
	goto T302;}
	V144= make_cons((V163),Cnil);
	V143= (V144);
	goto T299;
	goto T302;
T302:;
	V169= make_cons((V163),Cnil);
	((V144))->c.c_cdr = /* INLINE-ARGS */V169;
	V168= (V144);
	V144= CMPcdr(V168);}
	goto T299;
T299:;
	if(((V155))==Cnil){
	goto T308;}
	{object V170;
	V171= list(2,VV[78],(V151));
	V170= list(3,VV[77],/* INLINE-ARGS */V171,list(3,VV[72],VV[67],list(2,VV[24],list(3,VV[46],VV[79],list(2,VV[24],(V151))))));
	if(((V145))!=Cnil){
	goto T313;}
	V146= make_cons((V170),Cnil);
	V145= (V146);
	goto T308;
	goto T313;
T313:;
	V173= make_cons((V170),Cnil);
	((V146))->c.c_cdr = /* INLINE-ARGS */V173;
	V172= (V146);
	V146= CMPcdr(V172);}
	goto T308;
T308:;
	goto T321;
T321:;
	base[1]= (V154);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T323;}{object V174;
	V174= (V154);
	base[1]= (V154);
	vs_top=(vs_base=base+1)+1;
	Leval();
	vs_top=sup;
	V154= vs_base[0];
	if((((V174)==((V154))?Ct:Cnil))==Cnil){
	goto T322;}}
	goto T323;
T323:;
	goto T319;
	goto T322;
T322:;
	goto T321;
	goto T319;
T319:;
	{object V175;
	if(!(((V154))==(VV[80]))){
	goto T333;}
	V175= list(3,VV[74],(V151),list(2,VV[81],(V151)));
	goto T331;
	goto T333;
T333:;
	if(!(((V154))==(VV[82]))){
	goto T336;}
	V175= Cnil;
	goto T331;
	goto T336;
T336:;
	V175= list(4,VV[83],(V154),list(2,VV[80],list(3,VV[74],(V151),list(2,VV[81],(V151)))),VV[84]);
	goto T331;
T331:;
	if(((V147))!=Cnil){
	goto T339;}
	V148= make_cons((V175),Cnil);
	V147= (V148);
	goto T273;
	goto T339;
T339:;
	V177= make_cons((V175),Cnil);
	((V148))->c.c_cdr = /* INLINE-ARGS */V177;
	V176= (V148);
	V148= CMPcdr(V176);}}}
	goto T273;
T273:;
	V149= CMPcdr((V149));
	V150= CMPcar((V149));
	goto T268;}
	goto T264;
T264:;
	base[0]= (V139);
	base[1]= (V141);
	base[2]= (V143);
	base[3]= (V145);
	base[4]= (V147);
	vs_top=(vs_base=base+0)+5;}
	if(vs_base>=vs_top){vs_top=sup;goto T355;}
	V134= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T356;}
	V135= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T357;}
	V136= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T358;}
	V137= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T359;}
	V138= vs_base[0];
	vs_top=sup;
	goto T360;
	goto T355;
T355:;
	V134= Cnil;
	goto T356;
T356:;
	V135= Cnil;
	goto T357;
T357:;
	V136= Cnil;
	goto T358;
T358:;
	V137= Cnil;
	goto T359;
T359:;
	V138= Cnil;
	goto T360;
T360:;
	V178= append((V134),(V135));
	V179= list(3,VV[86],VV[87],list(4,VV[85],VV[88],VV[89],make_cons(VV[90],(V136))));
	base[0]= (V137);
	base[1]= (V138);
	base[2]= (V133);
	vs_top=(vs_base=base+0)+3;
	Lappend();
	vs_top=sup;
	V180= vs_base[0];
	V181= make_cons(/* INLINE-ARGS */V179,V180);
	{object V182 = listA(3,VV[85],/* INLINE-ARGS */V178,append((V132),/* INLINE-ARGS */V181));
	VMR13(V182)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for PARSE-METHOD-GROUP-SPECIFIER	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{register object V183;
	check_arg(1);
	V183=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V184;
	register object V185;
	object V186;
	{object V187;
	V187= CMPcar((V183));
	V183= CMPcdr((V183));
	V184= (V187);}
	V185= Cnil;
	{register object V188;
	register object V189;
	V188= Cnil;
	V189= Cnil;
	goto T375;
T375:;
	if(((V183))==Cnil){
	goto T377;}
	{register object x= CMPcar((V183)),V190= VV[91];
	while(V190!=Cnil)
	if(x==(V190->c.c_car)){
	goto T381;
	}else V190=V190->c.c_cdr;
	goto T378;}
	goto T381;
T381:;
	goto T377;
T377:;
	goto T373;
	goto T378;
T378:;
	{register object V191;
	{object V192;
	V192= CMPcar((V183));
	V183= CMPcdr((V183));
	V191= (V192);}
	V185= make_cons(V191,(V185));
	{register object V194;
	V194= (*(LnkLI138))((V184),(V191));
	if(((V188))!=Cnil){
	goto T390;}
	V189= make_cons((V194),Cnil);
	V188= (V189);
	goto T376;
	goto T390;
T390:;
	V196= make_cons((V194),Cnil);
	((V189))->c.c_cdr = /* INLINE-ARGS */V196;
	V195= (V189);
	V189= CMPcdr(V195);}}
	goto T376;
T376:;
	goto T375;
	goto T373;
T373:;
	V186= (V188);}
	base[3]= (V184);
	base[4]= (V186);
	base[6]= (V183);
	base[7]= VV[92];
	base[8]= (*(LnkLI139))((V185));
	vs_top=(vs_base=base+6)+3;
	Lgetf();
	vs_top=sup;
	base[5]= vs_base[0];
	base[7]= (V183);
	base[8]= VV[93];
	base[9]= VV[80];
	vs_top=(vs_base=base+7)+3;
	Lgetf();
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= (V183);
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

static object LI16(V199,V200)

object V199;register object V200;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(!(((V200))==(Cnil))){
	goto T412;}
	{object V201 = VV[95];
	VMR15(V201)}
	goto T412;
T412:;
	if(!(((V200))==(VV[96]))){
	goto T415;}
	{object V202 = Ct;
	VMR15(V202)}
	goto T415;
T415:;
	if(!(type_of((V200))==t_symbol)){
	goto T418;}
	{object V203 = list(2,(V200),VV[97]);
	VMR15(V203)}
	goto T418;
T418:;
	if(!(type_of((V200))==t_cons||((V200))==Cnil)){
	goto T421;}
	{object V204 = list(3,VV[98],list(2,VV[24],(V200)),VV[97]);
	VMR15(V204)}
	goto T421;
T421:;
	base[0]= VV[99];
	base[1]= (V199);
	base[2]= (V200);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V205 = vs_base[0];
	VMR15(V205)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function QUALIFIER-CHECK-RUNTIME	*/

static object LI17(V208,V209)

register object V208;register object V209;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	goto T427;
T427:;
	if(((V208))!=Cnil){
	goto T430;}
	if(((V209))!=Cnil){
	goto T430;}
	{object V210 = Ct;
	VMR16(V210)}
	goto T430;
T430:;
	if(!(((V208))==(VV[96]))){
	goto T435;}
	{object V211 = Ct;
	VMR16(V211)}
	goto T435;
T435:;
	if(((V208))==Cnil){
	goto T438;}
	if(((V209))==Cnil){
	goto T438;}
	if(!((CMPcar((V208)))==(CMPcar((V209))))){
	goto T438;}
	{register object V212;
	V212= CMPcar((V208));
	V208= CMPcdr((V208));}
	{register object V213;
	V213= CMPcar((V209));
	V209= CMPcdr((V209));
	goto T428;}
	goto T438;
T438:;
	{object V214 = Cnil;
	VMR16(V214)}
	goto T428;
T428:;
	goto T427;
	return Cnil;
}
/*	local entry for function MAKE-DEFAULT-METHOD-GROUP-DESCRIPTION	*/

static object LI18(V216)

register object V216;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if((CMPcdr((V216)))==Cnil){
	goto T453;}
	base[0]= Cnil;
	base[1]= VV[100];
	base[3]= (V216);
	vs_top=(vs_base=base+3)+1;
	Lbutlast();
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= (V216);
	vs_top=(vs_base=base+4)+1;
	Llast();
	vs_top=sup;
	V217= vs_base[0];
	base[3]= CMPcar(V217);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V218 = vs_base[0];
	VMR17(V218)}
	goto T453;
T453:;
	base[0]= Cnil;
	base[1]= VV[101];
	base[2]= CMPcar((V216));
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V219 = vs_base[0];
	VMR17(V219)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DEAL-WITH-ARGUMENTS-OPTION	*/

static object LI19(V222,V223)

object V222;object V223;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V224;
	object V225;
	{register object V226;
	register object V227;
	V226= Cnil;
	V227= Cnil;
	{register object V228;
	register object V229;
	V228= (V223);
	V229= CMPcar((V228));
	goto T472;
T472:;
	if(!(((V228))==Cnil)){
	goto T473;}
	goto T468;
	goto T473;
T473:;
	{register object x= (V229),V230= VV[102];
	while(V230!=Cnil)
	if(x==(V230->c.c_car)){
	goto T480;
	}else V230=V230->c.c_cdr;
	goto T479;}
	goto T480;
T480:;
	if(((V226))!=Cnil){
	goto T482;}
	V227= make_cons(V229,Cnil);
	V226= (V227);
	goto T477;
	goto T482;
T482:;
	V233= make_cons(V229,Cnil);
	((V227))->c.c_cdr = /* INLINE-ARGS */V233;
	V232= (V227);
	V227= CMPcdr(V232);
	goto T477;
	goto T479;
T479:;
	{object V234;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V234= vs_base[0];
	if(((V226))!=Cnil){
	goto T490;}
	V227= make_cons((V234),Cnil);
	V226= (V227);
	goto T477;
	goto T490;
T490:;
	V236= make_cons((V234),Cnil);
	((V227))->c.c_cdr = /* INLINE-ARGS */V236;
	V235= (V227);
	V227= CMPcdr(V235);}
	goto T477;
T477:;
	V228= CMPcdr((V228));
	V229= CMPcar((V228));
	goto T472;}
	goto T468;
T468:;
	V224= (V226);}
	{object V237;
	register object V238;
	V237= Cnil;
	V238= Cnil;
	{register object V239;
	register object V240;
	register object V241;
	object V242;
	V239= (V223);
	V240= Cnil;
	V241= (V224);
	V242= Cnil;
	goto T510;
T510:;
	{object V243;
	if(!(((V239))==Cnil)){
	goto T516;}
	goto T504;
	goto T516;
T516:;
	V243= CMPcar((V239));
	V239= CMPcdr((V239));
	V240= (V243);}
	{object V244;
	if(!(((V241))==Cnil)){
	goto T524;}
	goto T504;
	goto T524;
T524:;
	V244= CMPcar((V241));
	V241= CMPcdr((V241));
	V242= (V244);}
	{register object x= (V240),V245= VV[102];
	while(V245!=Cnil)
	if(x==(V245->c.c_car)){
	goto T511;
	}else V245=V245->c.c_cdr;}
	{object V246;
	V246= list(2,(V240),list(2,VV[24],(V242)));
	if(((V237))!=Cnil){
	goto T532;}
	V238= make_cons((V246),Cnil);
	V237= (V238);
	goto T511;
	goto T532;
T532:;
	V248= make_cons((V246),Cnil);
	((V238))->c.c_cdr = /* INLINE-ARGS */V248;
	V247= (V238);
	V238= CMPcdr(V247);}
	goto T511;
T511:;
	goto T510;}
	goto T504;
T504:;
	V225= (V237);}
	{object V250;
	V250= append((V225),CMPcadr((V222)));
	(CMPcdr(V222))->c.c_car = (V250);
	(void)(CMPcdr(V222));}
	{object V251;
	{register object x= VV[103],V252= (V224);
	while(V252!=Cnil)
	if(x==(V252->c.c_car)){
	V251= V252;
	goto T543;
	}else V252=V252->c.c_cdr;
	V251= Cnil;}
	goto T543;
T543:;
	if(((V251))==Cnil){
	goto T545;}
	goto T542;
	goto T545;
T545:;
	{object V253;
	{register object x= VV[104],V254= (V224);
	while(V254!=Cnil)
	if(x==(V254->c.c_car)){
	V253= V254;
	goto T547;
	}else V254=V254->c.c_cdr;
	V253= Cnil;}
	goto T547;
T547:;
	if(((V253))==Cnil){
	goto T549;}
	goto T542;
	goto T549;
T549:;
	{register object x= VV[105],V255= (V224);
	while(V255!=Cnil)
	if(x==(V255->c.c_car)){
	goto T553;
	}else V255=V255->c.c_cdr;
	goto T552;}
	goto T553;
T553:;
	V224= append((V224),VV[106]);
	goto T542;
	goto T552;
T552:;
	V224= append((V224),VV[107]);}}
	goto T542;
T542:;
	V256= list(2,VV[108],(V222));
	V257= make_cons(/* INLINE-ARGS */V256,Cnil);
	V258= list(2,VV[24],(V224));
	{register object x= VV[113],V260= (V224);
	while(V260!=Cnil)
	if(x==(V260->c.c_car)){
	goto T559;
	}else V260=V260->c.c_cdr;
	goto T558;}
	goto T559;
T559:;
	V259= VV[114];
	goto T556;
	goto T558;
T558:;
	V259= Cnil;
	goto T556;
T556:;
	{object V261 = list(3,VV[85],/* INLINE-ARGS */V257,list(4,VV[109],VV[110],list(3,VV[109],VV[111],list(5,VV[109],VV[112],/* INLINE-ARGS */V258,V259,VV[108])),VV[115]));
	VMR18(V261)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC21(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{object V262;
	object V263;
	object V264;
	check_arg(3);
	V262=(base[0]);
	V263=(base[1]);
	V264=(base[2]);
	vs_top=sup;
	base[3]= VV[49];
	base[4]= VV[38];
	base[5]= (V263);
	base[6]= VV[17];
	base[7]= (base0[0]->c.c_car);
	base[8]= VV[39];
	base[9]= (V264);
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
	{register object V265;
	object V266;
	check_arg(2);
	V265=(base[0]);
	V266=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V265);
	base[3]= VV[44];
	base[4]= (V265);
	base[5]= (V266);
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
	{object V267;
	object V268;
	object V269;
	check_arg(3);
	V267=(base[0]);
	V268=(base[1]);
	V269=(base[2]);
	vs_top=sup;
	base[3]= (V268);
	base[4]= (V269);
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

