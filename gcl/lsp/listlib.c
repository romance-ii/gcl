
#include "cmpinclude.h"
#include "listlib.h"
init_listlib(){do_init(VV);}
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
	V3= V2;
	V4= V1;
	narg= narg - 2;
	va_start(ap);
	V6 = list_vector(narg,ap);
	V5= V6;
	{register object V7;
	register object V8;
	V7= Cnil;
	V8= Cnil;
	{register object V9;
	V9= (V3);
T4:;
	if(((V9))!=Cnil){
	goto T5;}
	if(((V8))==Cnil){
	goto T8;}
	((V8))->c.c_cdr = (V4);
T8:;
	if((V7)!=Cnil){
	{object V10 = (V7);
	VMR1(V10)}}
	{object V11 = (V4);
	VMR1(V11)}
T5:;
	if(!(type_of((V9))==t_cons)){
	goto T13;}
	goto T12;
T13:;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T12:;
	base[0]=VV[8]->s.s_gfdef;
	base[1]= CMPcar((V9));
	base[2]= (V4);
	{object V12;
	V12= (V5);
	 vs_top=base+3;
	 while(V12!=Cnil)
	 {vs_push((V12)->c.c_car);V12=(V12)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk8)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T16;}
	if(((V8))==Cnil){
	goto T23;}
	V13= make_cons(CMPcar((V9)),Cnil);
	((V8))->c.c_cdr = /* INLINE-ARGS */V13;
	V8= CMPcdr((V8));
	goto T16;
T23:;
	V7= make_cons(CMPcar((V9)),Cnil);
	V8= (V7);
T16:;
	V9= CMPcdr((V9));
	goto T4;}}}
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
	V16= V15;
	V17= V14;
	narg= narg - 2;
	va_start(ap);
	V19 = list_vector(narg,ap);
	V18= V19;
	{register object V20;
	register object V21;
	V20= Cnil;
	V21= Cnil;
	{register object V22;
	V22= (V16);
T36:;
	if(((V22))!=Cnil){
	goto T37;}
	if(((V21))==Cnil){
	goto T40;}
	((V21))->c.c_cdr = (V17);
T40:;
	if((V20)!=Cnil){
	{object V23 = (V20);
	VMR2(V23)}}
	{object V24 = (V17);
	VMR2(V24)}
T37:;
	if(!(type_of((V22))==t_cons)){
	goto T45;}
	goto T44;
T45:;
	base[0]= VV[1];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T44:;
	base[0]=VV[8]->s.s_gfdef;
	base[1]= CMPcar((V22));
	base[2]= (V17);
	{object V25;
	V25= (V18);
	 vs_top=base+3;
	 while(V25!=Cnil)
	 {vs_push((V25)->c.c_car);V25=(V25)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk8)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T48;}
	if(((V21))==Cnil){
	goto T56;}
	((V21))->c.c_cdr = (V22);
	goto T54;
T56:;
	V20= (V22);
T54:;
	V21= (V22);
T48:;
	V22= CMPcdr((V22));
	goto T36;}}}
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
	V28= V27;
	V29= V26;
	narg= narg - 2;
	va_start(ap);
	V31 = list_vector(narg,ap);
	V30= V31;
	{register object V32;
	V32= Cnil;
	{register object V33;
	V33= (V28);
T65:;
	if(((V33))!=Cnil){
	goto T66;}
	{object V34 = (V32);
	VMR3(V34)}
T66:;
	if(!(type_of((V33))==t_cons)){
	goto T71;}
	goto T70;
T71:;
	base[0]= VV[2];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T70:;
	base[0]=VV[8]->s.s_gfdef;
	base[1]= CMPcar((V33));
	base[2]= (V29);
	{object V35;
	V35= (V30);
	 vs_top=base+3;
	 while(V35!=Cnil)
	 {vs_push((V35)->c.c_car);V35=(V35)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk8)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T74;}
	V32= make_cons(CMPcar((V33)),(V32));
T74:;
	V33= CMPcdr((V33));
	goto T65;}}}
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
	V38= V37;
	V39= V36;
	narg= narg - 2;
	va_start(ap);
	V41 = list_vector(narg,ap);
	V40= V41;
	{register object V42;
	register object V43;
	V42= Cnil;
	V43= Cnil;
	{register object V44;
	V44= (V38);
T87:;
	if(((V44))!=Cnil){
	goto T88;}
	if(((V43))==Cnil){
	goto T91;}
	((V43))->c.c_cdr = Cnil;
T91:;
	{object V45 = (V42);
	VMR4(V45)}
T88:;
	if(!(type_of((V44))==t_cons)){
	goto T96;}
	goto T95;
T96:;
	base[0]= VV[3];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T95:;
	base[0]=VV[8]->s.s_gfdef;
	base[1]= CMPcar((V44));
	base[2]= (V39);
	{object V46;
	V46= (V40);
	 vs_top=base+3;
	 while(V46!=Cnil)
	 {vs_push((V46)->c.c_car);V46=(V46)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk8)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T99;}
	if(((V43))==Cnil){
	goto T107;}
	((V43))->c.c_cdr = (V44);
	goto T105;
T107:;
	V42= (V44);
T105:;
	V43= (V44);
T99:;
	V44= CMPcdr((V44));
	goto T87;}}}
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
	V49= V48;
	V50= V47;
	narg= narg - 2;
	va_start(ap);
	V52 = list_vector(narg,ap);
	V51= V52;
	{register object V53;
	V53= Cnil;
	{register object V54;
	V54= (V49);
T116:;
	if(((V54))!=Cnil){
	goto T117;}
	{object V55 = (V53);
	VMR5(V55)}
T117:;
	if(!(type_of((V54))==t_cons)){
	goto T122;}
	goto T121;
T122:;
	base[0]= VV[4];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T121:;
	base[0]=VV[8]->s.s_gfdef;
	base[1]= CMPcar((V54));
	base[2]= (V50);
	{object V56;
	V56= (V51);
	 vs_top=base+3;
	 while(V56!=Cnil)
	 {vs_push((V56)->c.c_car);V56=(V56)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk8)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T125;}
	V53= make_cons(CMPcar((V54)),(V53));
T125:;
	V54= CMPcdr((V54));
	goto T116;}}}
	}
/*	local entry for function NSET-DIFFERENCE	*/

static object LI6(V58,V57,va_alist)
	object V58,V57;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	{object V59;
	register object V60;
	register object V61;
	V59= V58;
	V60= V57;
	narg= narg - 2;
	va_start(ap);
	V62 = list_vector(narg,ap);
	V61= V62;
	{register object V63;
	register object V64;
	V63= Cnil;
	V64= Cnil;
	{register object V65;
	V65= (V59);
T138:;
	if(((V65))!=Cnil){
	goto T139;}
	if(((V64))==Cnil){
	goto T142;}
	((V64))->c.c_cdr = Cnil;
T142:;
	{object V66 = (V63);
	VMR6(V66)}
T139:;
	if(!(type_of((V65))==t_cons)){
	goto T147;}
	goto T146;
T147:;
	base[0]= VV[5];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T146:;
	base[0]=VV[8]->s.s_gfdef;
	base[1]= CMPcar((V65));
	base[2]= (V60);
	{object V67;
	V67= (V61);
	 vs_top=base+3;
	 while(V67!=Cnil)
	 {vs_push((V67)->c.c_car);V67=(V67)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk8)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T150;}
	if(((V64))==Cnil){
	goto T158;}
	((V64))->c.c_cdr = (V65);
	goto T156;
T158:;
	V63= (V65);
T156:;
	V64= (V65);
T150:;
	V65= CMPcdr((V65));
	goto T138;}}}
	}
/*	local entry for function SET-EXCLUSIVE-OR	*/

static object LI7(V69,V68,va_alist)
	object V69,V68;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	{object V70;
	object V71;
	object V72;
	object V73;
	object V74;
	object V75;
	V70= V69;
	V71= V68;
	narg= narg - 2;
	va_start(ap);
	V76 = make_list(narg);
	V72= V76;
	{
	parse_key_rest(V76,narg,Vcs +3,&LI7key,ap);
	V73=(Vcs[3]);
	V74=(Vcs[4]);
	V75=(Vcs[5]);
	base[0]= (V70);
	base[1]= (V71);
	{object V78;
	V78= (V72);
	 vs_top=base+2;
	 while(V78!=Cnil)
	 {vs_push((V78)->c.c_car);V78=(V78)->c.c_cdr;}
	vs_base=base+0;}
	(void) (*Lnk12)();
	vs_top=sup;
	V77= vs_base[0];
	base[0]= (V71);
	base[1]= (V70);
	{object V80;
	V80= (V72);
	 vs_top=base+2;
	 while(V80!=Cnil)
	 {vs_push((V80)->c.c_car);V80=(V80)->c.c_cdr;}
	vs_base=base+0;}
	(void) (*Lnk12)();
	vs_top=sup;
	V79= vs_base[0];
	{object V81 = nconc(V77,V79);
	VMR7(V81)}}
	}}
/*	local entry for function NSET-EXCLUSIVE-OR	*/

static object LI8(V83,V82,va_alist)
	object V83,V82;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB8 VMS8 VMV8
	{object V84;
	register object V85;
	register object V86;
	V84= V83;
	V85= V82;
	narg= narg - 2;
	va_start(ap);
	V87 = list_vector(narg,ap);
	V86= V87;
	{object V88;
	register object V89;
	register object V90;
	register object V91;
	V88= Cnil;
	V89= Cnil;
	V90= Cnil;
	V91= Cnil;
	{register object V92;
	V92= (V84);
T178:;
	if(((V92))!=Cnil){
	goto T179;}
	if(((V91))==Cnil){
	goto T182;}
	((V91))->c.c_cdr = Cnil;
T182:;
	if(((V89))==Cnil){
	goto T186;}
	base[0]= (V85);
	base[1]= (V90);
	{object V94;
	V94= (V86);
	 vs_top=base+2;
	 while(V94!=Cnil)
	 {vs_push((V94)->c.c_car);V94=(V94)->c.c_cdr;}
	vs_base=base+0;}
	(void) (*Lnk13)();
	vs_top=sup;
	V93= vs_base[0];
	((V89))->c.c_cdr = V93;
	{object V95 = (V88);
	VMR8(V95)}
T186:;
	base[0]= (V85);
	base[1]= (V90);
	{object V96;
	V96= (V86);
	 vs_top=base+2;
	 while(V96!=Cnil)
	 {vs_push((V96)->c.c_car);V96=(V96)->c.c_cdr;}
	vs_base=base+0;}
	(void) (*Lnk13)();
	vs_top=sup;
	{object V97 = vs_base[0];
	VMR8(V97)}
T179:;
	if(!(type_of((V92))==t_cons)){
	goto T198;}
	goto T197;
T198:;
	base[0]= VV[6];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T197:;
	base[0]=VV[8]->s.s_gfdef;
	base[1]= CMPcar((V92));
	base[2]= (V85);
	{object V98;
	V98= (V86);
	 vs_top=base+3;
	 while(V98!=Cnil)
	 {vs_push((V98)->c.c_car);V98=(V98)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk8)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T203;}
	if(((V91))==Cnil){
	goto T210;}
	((V91))->c.c_cdr = (V92);
	goto T208;
T210:;
	V90= (V92);
T208:;
	V91= (V92);
	goto T201;
T203:;
	if(((V89))==Cnil){
	goto T216;}
	((V89))->c.c_cdr = (V92);
	goto T214;
T216:;
	V88= (V92);
T214:;
	V89= (V92);
T201:;
	V92= CMPcdr((V92));
	goto T178;}}}
	}
/*	local entry for function SUBSETP	*/

static object LI9(V100,V99,va_alist)
	object V100,V99;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V101;
	register object V102;
	register object V103;
	object V104;
	object V105;
	object V106;
	V101= V100;
	V102= V99;
	narg= narg - 2;
	va_start(ap);
	V107 = make_list(narg);
	V103= V107;
	{
	parse_key_rest(V107,narg,Vcs +3,&LI9key,ap);
	V104=(Vcs[3]);
	V105=(Vcs[4]);
	V106=(Vcs[5]);
	{register object V108;
	V108= (V101);
T224:;
	if(((V108))!=Cnil){
	goto T225;}
	{object V109 = Ct;
	VMR9(V109)}
T225:;
	if(!(type_of((V108))==t_cons)){
	goto T230;}
	goto T229;
T230:;
	base[0]= VV[7];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T229:;
	base[0]=VV[8]->s.s_gfdef;
	base[1]= CMPcar((V108));
	base[2]= (V102);
	{object V110;
	V110= (V103);
	 vs_top=base+3;
	 while(V110!=Cnil)
	 {vs_push((V110)->c.c_car);V110=(V110)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk8)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T233;}
	{object V111 = Cnil;
	VMR9(V111)}
T233:;
	V108= CMPcdr((V108));
	goto T224;}}
	}}
static LnkT13(){ call_or_link(VV[13],&Lnk13);} /* NSET-DIFFERENCE */
static LnkT12(){ call_or_link(VV[12],&Lnk12);} /* SET-DIFFERENCE */
static LnkT8(){ call_or_link(VV[8],&Lnk8);} /* MEMBER1 */
