
#include "cmpinclude.h"
#include "listlib.h"
void init_listlib(){do_init(VV);}
/*	local entry for function UNION	*/

static object LI1(V2,V1,va_alist)
	object V2,V1;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{object V3;
	register object V4;
	register object V5;
	Vcs[0]=Vcs[0];
	va_start(ap);
	V3= V2;
	V4= V1;
	narg= narg - 2;
	V6 = list_vector(narg,ap);
	V5= V6;
	{register object V7;
	register object V8;
	V7= Cnil;
	V8= Cnil;
	{register object V9;
	V9= (V3);
goto T4;
T4:;
	if(((V9))!=Cnil){
	goto T5;}
	if(((V8))==Cnil){
	goto T8;}
	((V8))->c.c_cdr = (V4);
goto T8;
T8:;
	if((V7)!=Cnil){
	{object V10 = (V7);
	VMR1(V10)}}
	{object V11 = (V4);
	VMR1(V11)}
goto T5;
T5:;
	if(!(type_of((V9))==t_cons)){
	goto T13;}
	goto T12;
goto T13;
T13:;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T12;
T12:;
	base[0]=VV[11]->s.s_gfdef;
	base[1]= CMPcar((V9));
	base[2]= (V4);
	{object V12;
	V12= (V5);
	 vs_top=base+3;
	 while(V12!=Cnil)
	 {vs_push((V12)->c.c_car);V12=(V12)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk11)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T16;}
	if(((V8))==Cnil){
	goto T23;}
	V13= make_cons(CMPcar((V9)),Cnil);
	((V8))->c.c_cdr = /* INLINE-ARGS */V13;
	V8= CMPcdr((V8));
	goto T16;
goto T23;
T23:;
	V7= make_cons(CMPcar((V9)),Cnil);
	V8= (V7);
goto T16;
T16:;
	V9= CMPcdr((V9));
	goto T4;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function NUNION	*/

static object LI2(V15,V14,va_alist)
	object V15,V14;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB2 VMS2 VMV2
	{object V16;
	register object V17;
	register object V18;
	Vcs[0]=Vcs[0];
	va_start(ap);
	V16= V15;
	V17= V14;
	narg= narg - 2;
	V19 = list_vector(narg,ap);
	V18= V19;
	{register object V20;
	register object V21;
	V20= Cnil;
	V21= Cnil;
	{register object V22;
	V22= (V16);
goto T36;
T36:;
	if(((V22))!=Cnil){
	goto T37;}
	if(((V21))==Cnil){
	goto T40;}
	((V21))->c.c_cdr = (V17);
goto T40;
T40:;
	if((V20)!=Cnil){
	{object V23 = (V20);
	VMR2(V23)}}
	{object V24 = (V17);
	VMR2(V24)}
goto T37;
T37:;
	if(!(type_of((V22))==t_cons)){
	goto T45;}
	goto T44;
goto T45;
T45:;
	base[0]= VV[1];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T44;
T44:;
	base[0]=VV[11]->s.s_gfdef;
	base[1]= CMPcar((V22));
	base[2]= (V17);
	{object V25;
	V25= (V18);
	 vs_top=base+3;
	 while(V25!=Cnil)
	 {vs_push((V25)->c.c_car);V25=(V25)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk11)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T48;}
	if(((V21))==Cnil){
	goto T56;}
	((V21))->c.c_cdr = (V22);
	goto T54;
goto T56;
T56:;
	V20= (V22);
goto T54;
T54:;
	V21= (V22);
goto T48;
T48:;
	V22= CMPcdr((V22));
	goto T36;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function INTERSECTION	*/

static object LI3(V27,V26,va_alist)
	object V27,V26;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB3 VMS3 VMV3
	{object V28;
	register object V29;
	register object V30;
	Vcs[0]=Vcs[0];
	va_start(ap);
	V28= V27;
	V29= V26;
	narg= narg - 2;
	V31 = list_vector(narg,ap);
	V30= V31;
	{register object V32;
	V32= Cnil;
	{register object V33;
	V33= (V28);
goto T65;
T65:;
	if(((V33))!=Cnil){
	goto T66;}
	{object V34 = (V32);
	VMR3(V34)}
goto T66;
T66:;
	if(!(type_of((V33))==t_cons)){
	goto T71;}
	goto T70;
goto T71;
T71:;
	base[0]= VV[2];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T70;
T70:;
	base[0]=VV[11]->s.s_gfdef;
	base[1]= CMPcar((V33));
	base[2]= (V29);
	{object V35;
	V35= (V30);
	 vs_top=base+3;
	 while(V35!=Cnil)
	 {vs_push((V35)->c.c_car);V35=(V35)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk11)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T74;}
	V32= make_cons(CMPcar((V33)),(V32));
goto T74;
T74:;
	V33= CMPcdr((V33));
	goto T65;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function NINTERSECTION	*/

static object LI4(V37,V36,va_alist)
	object V37,V36;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB4 VMS4 VMV4
	{object V38;
	register object V39;
	register object V40;
	Vcs[0]=Vcs[0];
	va_start(ap);
	V38= V37;
	V39= V36;
	narg= narg - 2;
	V41 = list_vector(narg,ap);
	V40= V41;
	{register object V42;
	register object V43;
	V42= Cnil;
	V43= Cnil;
	{register object V44;
	V44= (V38);
goto T87;
T87:;
	if(((V44))!=Cnil){
	goto T88;}
	if(((V43))==Cnil){
	goto T91;}
	((V43))->c.c_cdr = Cnil;
goto T91;
T91:;
	{object V45 = (V42);
	VMR4(V45)}
goto T88;
T88:;
	if(!(type_of((V44))==t_cons)){
	goto T96;}
	goto T95;
goto T96;
T96:;
	base[0]= VV[3];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T95;
T95:;
	base[0]=VV[11]->s.s_gfdef;
	base[1]= CMPcar((V44));
	base[2]= (V39);
	{object V46;
	V46= (V40);
	 vs_top=base+3;
	 while(V46!=Cnil)
	 {vs_push((V46)->c.c_car);V46=(V46)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk11)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T99;}
	if(((V43))==Cnil){
	goto T107;}
	((V43))->c.c_cdr = (V44);
	goto T105;
goto T107;
T107:;
	V42= (V44);
goto T105;
T105:;
	V43= (V44);
goto T99;
T99:;
	V44= CMPcdr((V44));
	goto T87;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SET-DIFFERENCE	*/

static object LI5(V48,V47,va_alist)
	object V48,V47;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB5 VMS5 VMV5
	{object V49;
	register object V50;
	register object V51;
	Vcs[0]=Vcs[0];
	va_start(ap);
	V49= V48;
	V50= V47;
	narg= narg - 2;
	V52 = list_vector(narg,ap);
	V51= V52;
	{register object V53;
	V53= Cnil;
	{register object V54;
	V54= (V49);
goto T116;
T116:;
	if(((V54))!=Cnil){
	goto T117;}
	{object V55 = (V53);
	VMR5(V55)}
goto T117;
T117:;
	if(!(type_of((V54))==t_cons)){
	goto T122;}
	goto T121;
goto T122;
T122:;
	base[0]= VV[4];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T121;
T121:;
	base[0]=VV[11]->s.s_gfdef;
	base[1]= CMPcar((V54));
	base[2]= (V50);
	{object V56;
	V56= (V51);
	 vs_top=base+3;
	 while(V56!=Cnil)
	 {vs_push((V56)->c.c_car);V56=(V56)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk11)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T125;}
	V53= make_cons(CMPcar((V54)),(V53));
goto T125;
T125:;
	V54= CMPcdr((V54));
	goto T116;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for SET-DIFFERENCE-REV	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V57;
	register object V58;
	register object V59;
	V57=(base[0]);
	V58=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V59=(base[2]);
	vs_top=sup;
	{register object V60;
	V60= Cnil;
	{register object V61;
	V61= (V57);
goto T137;
T137:;
	if(((V61))!=Cnil){
	goto T138;}
	base[3]= (V60);
	vs_top=(vs_base=base+3)+1;
	return;
goto T138;
T138:;
	if(!(type_of((V61))==t_cons)){
	goto T143;}
	goto T142;
goto T143;
T143:;
	base[3]= VV[5];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
goto T142;
T142:;
	base[3]=VV[11]->s.s_gfdef;
	base[4]= CMPcar((V61));
	base[5]= (V58);
	base[6]= VV[6];
	base[7]= Ct;
	{object V62;
	V62= (V59);
	 vs_top=base+8;
	 while(V62!=Cnil)
	 {vs_push((V62)->c.c_car);V62=(V62)->c.c_cdr;}
	vs_base=base+4;}
	(void) (*Lnk11)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T146;}
	V60= make_cons(CMPcar((V61)),(V60));
goto T146;
T146:;
	V61= CMPcdr((V61));
	goto T137;}}
	}
}
/*	local entry for function NSET-DIFFERENCE	*/

static object LI7(V64,V63,va_alist)
	object V64,V63;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	{object V65;
	register object V66;
	register object V67;
	Vcs[0]=Vcs[0];
	va_start(ap);
	V65= V64;
	V66= V63;
	narg= narg - 2;
	V68 = list_vector(narg,ap);
	V67= V68;
	{register object V69;
	register object V70;
	V69= Cnil;
	V70= Cnil;
	{register object V71;
	V71= (V65);
goto T161;
T161:;
	if(((V71))!=Cnil){
	goto T162;}
	if(((V70))==Cnil){
	goto T165;}
	((V70))->c.c_cdr = Cnil;
goto T165;
T165:;
	{object V72 = (V69);
	VMR7(V72)}
goto T162;
T162:;
	if(!(type_of((V71))==t_cons)){
	goto T170;}
	goto T169;
goto T170;
T170:;
	base[0]= VV[7];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T169;
T169:;
	base[0]=VV[11]->s.s_gfdef;
	base[1]= CMPcar((V71));
	base[2]= (V66);
	{object V73;
	V73= (V67);
	 vs_top=base+3;
	 while(V73!=Cnil)
	 {vs_push((V73)->c.c_car);V73=(V73)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk11)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T173;}
	if(((V70))==Cnil){
	goto T181;}
	((V70))->c.c_cdr = (V71);
	goto T179;
goto T181;
T181:;
	V69= (V71);
goto T179;
T179:;
	V70= (V71);
goto T173;
T173:;
	V71= CMPcdr((V71));
	goto T161;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for NSET-DIFFERENCE-REV	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	{object V74;
	register object V75;
	register object V76;
	V74=(base[0]);
	V75=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V76=(base[2]);
	vs_top=sup;
	{register object V77;
	register object V78;
	V77= Cnil;
	V78= Cnil;
	{register object V79;
	V79= (V74);
goto T191;
T191:;
	if(((V79))!=Cnil){
	goto T192;}
	if(((V78))==Cnil){
	goto T195;}
	((V78))->c.c_cdr = Cnil;
goto T195;
T195:;
	base[3]= (V77);
	vs_top=(vs_base=base+3)+1;
	return;
goto T192;
T192:;
	if(!(type_of((V79))==t_cons)){
	goto T200;}
	goto T199;
goto T200;
T200:;
	base[3]= VV[8];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
goto T199;
T199:;
	base[3]=VV[11]->s.s_gfdef;
	base[4]= CMPcar((V79));
	base[5]= (V75);
	base[6]= VV[6];
	base[7]= Ct;
	{object V80;
	V80= (V76);
	 vs_top=base+8;
	 while(V80!=Cnil)
	 {vs_push((V80)->c.c_car);V80=(V80)->c.c_cdr;}
	vs_base=base+4;}
	(void) (*Lnk11)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T203;}
	if(((V78))==Cnil){
	goto T213;}
	((V78))->c.c_cdr = (V79);
	goto T211;
goto T213;
T213:;
	V77= (V79);
goto T211;
T211:;
	V78= (V79);
goto T203;
T203:;
	V79= CMPcdr((V79));
	goto T191;}}
	}
}
/*	local entry for function SET-EXCLUSIVE-OR	*/

static object LI9(V82,V81,va_alist)
	object V82,V81;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V83;
	object V84;
	object V85;
	object V86;
	object V87;
	object V88;
	Vcs[0]=Vcs[0];
	va_start(ap);
	V83= V82;
	V84= V81;
	narg= narg - 2;
	V89 = make_list(narg);
	V85= V89;
	{
	parse_key_rest(V89,narg,Vcs +3,(struct key *)&LI9key,ap);
	V86=(Vcs[3]);
	V87=(Vcs[4]);
	V88=(Vcs[5]);
	base[0]= (V83);
	base[1]= (V84);
	{object V91;
	V91= (V85);
	 vs_top=base+2;
	 while(V91!=Cnil)
	 {vs_push((V91)->c.c_car);V91=(V91)->c.c_cdr;}
	vs_base=base+0;}
	(void) (*Lnk15)();
	vs_top=sup;
	V90= vs_base[0];
	base[0]= (V84);
	base[1]= (V83);
	{object V93;
	V93= (V85);
	 vs_top=base+2;
	 while(V93!=Cnil)
	 {vs_push((V93)->c.c_car);V93=(V93)->c.c_cdr;}
	vs_base=base+0;}
	(void) (*Lnk16)();
	vs_top=sup;
	V92= vs_base[0];
	{object V94 = nconc(V90,V92);
	VMR9(V94)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function NSET-EXCLUSIVE-OR	*/

static object LI10(V96,V95,va_alist)
	object V96,V95;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{object V97;
	register object V98;
	register object V99;
	Vcs[0]=Vcs[0];
	va_start(ap);
	V97= V96;
	V98= V95;
	narg= narg - 2;
	V100 = list_vector(narg,ap);
	V99= V100;
	{object V101;
	register object V102;
	register object V103;
	register object V104;
	V101= Cnil;
	V102= Cnil;
	V103= Cnil;
	V104= Cnil;
	{register object V105;
	V105= (V97);
goto T233;
T233:;
	if(((V105))!=Cnil){
	goto T234;}
	if(((V104))==Cnil){
	goto T237;}
	((V104))->c.c_cdr = Cnil;
goto T237;
T237:;
	if(((V102))==Cnil){
	goto T241;}
	base[0]= (V98);
	base[1]= (V103);
	{object V107;
	V107= (V99);
	 vs_top=base+2;
	 while(V107!=Cnil)
	 {vs_push((V107)->c.c_car);V107=(V107)->c.c_cdr;}
	vs_base=base+0;}
	(void) (*Lnk17)();
	vs_top=sup;
	V106= vs_base[0];
	((V102))->c.c_cdr = V106;
	{object V108 = (V101);
	VMR10(V108)}
goto T241;
T241:;
	base[0]= (V98);
	base[1]= (V103);
	{object V109;
	V109= (V99);
	 vs_top=base+2;
	 while(V109!=Cnil)
	 {vs_push((V109)->c.c_car);V109=(V109)->c.c_cdr;}
	vs_base=base+0;}
	(void) (*Lnk17)();
	vs_top=sup;
	{object V110 = vs_base[0];
	VMR10(V110)}
goto T234;
T234:;
	if(!(type_of((V105))==t_cons)){
	goto T253;}
	goto T252;
goto T253;
T253:;
	base[0]= VV[9];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T252;
T252:;
	base[0]=VV[11]->s.s_gfdef;
	base[1]= CMPcar((V105));
	base[2]= (V98);
	{object V111;
	V111= (V99);
	 vs_top=base+3;
	 while(V111!=Cnil)
	 {vs_push((V111)->c.c_car);V111=(V111)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk11)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T258;}
	if(((V104))==Cnil){
	goto T265;}
	((V104))->c.c_cdr = (V105);
	goto T263;
goto T265;
T265:;
	V103= (V105);
goto T263;
T263:;
	V104= (V105);
	goto T256;
goto T258;
T258:;
	if(((V102))==Cnil){
	goto T271;}
	((V102))->c.c_cdr = (V105);
	goto T269;
goto T271;
T271:;
	V101= (V105);
goto T269;
T269:;
	V102= (V105);
goto T256;
T256:;
	V105= CMPcdr((V105));
	goto T233;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SUBSETP	*/

static object LI11(V113,V112,va_alist)
	object V113,V112;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V114;
	register object V115;
	register object V116;
	object V117;
	object V118;
	object V119;
	Vcs[0]=Vcs[0];
	va_start(ap);
	V114= V113;
	V115= V112;
	narg= narg - 2;
	V120 = make_list(narg);
	V116= V120;
	{
	parse_key_rest(V120,narg,Vcs +3,(struct key *)&LI11key,ap);
	V117=(Vcs[3]);
	V118=(Vcs[4]);
	V119=(Vcs[5]);
	{register object V121;
	V121= (V114);
goto T279;
T279:;
	if(((V121))!=Cnil){
	goto T280;}
	{object V122 = Ct;
	VMR11(V122)}
goto T280;
T280:;
	if(!(type_of((V121))==t_cons)){
	goto T285;}
	goto T284;
goto T285;
T285:;
	base[0]= VV[10];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T284;
T284:;
	base[0]=VV[11]->s.s_gfdef;
	base[1]= CMPcar((V121));
	base[2]= (V115);
	{object V123;
	V123= (V116);
	 vs_top=base+3;
	 while(V123!=Cnil)
	 {vs_push((V123)->c.c_car);V123=(V123)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk11)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T288;}
	{object V124 = Cnil;
	VMR11(V124)}
goto T288;
T288:;
	V121= CMPcdr((V121));
	goto T279;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
static void LnkT17(){ call_or_link(VV[17],(void **)&Lnk17);} /* NSET-DIFFERENCE-REV */
static void LnkT16(){ call_or_link(VV[16],(void **)&Lnk16);} /* SET-DIFFERENCE-REV */
static void LnkT15(){ call_or_link(VV[15],(void **)&Lnk15);} /* SET-DIFFERENCE */
static void LnkT11(){ call_or_link(VV[11],(void **)&Lnk11);} /* MEMBER1 */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

