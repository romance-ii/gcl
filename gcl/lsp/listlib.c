
#include "cmpinclude.h"
#include "listlib.h"
void init_listlib(){do_init(VV);}
/*	function definition for KEY-LIST	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	{object V1;
	object V2;
	object V3;
	V1=(base[0]);
	V2=(base[1]);
	V3=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V4;
	V4= Cnil;
	if(((V1))==Cnil){
	goto T2;}
	V4= make_cons(VV[0],(V4));
	V4= make_cons(V1,(V4));
	goto T2;
T2:;
	if(((V2))==Cnil){
	goto T8;}
	V4= make_cons(VV[1],(V4));
	V4= make_cons(V2,(V4));
	goto T8;
T8:;
	if(((V3))==Cnil){
	goto T14;}
	V4= make_cons(VV[2],(V4));
	V4= make_cons(V3,(V4));
	goto T14;
T14:;
	base[3]= nreverse((V4));
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local entry for function UNION	*/

static object LI2(object V12,object V11,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB2 VMS2 VMV2
	{object V13;
	register object V14;
	register object V15;
	register object V16;
	register object V17;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	V13= V12;
	V14= V11;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI2key,first,ap);
	V15=(Vcs[2]);
	V16=(Vcs[3]);
	V17=(Vcs[4]);
	{register object V18;
	register object V19;
	V18= Cnil;
	V19= Cnil;
	{register object V20;
	V20= (V13);
	goto T23;
T23:;
	if(((V20))!=Cnil){
	goto T24;}
	if(((V19))==Cnil){
	goto T27;}
	((V19))->c.c_cdr = (V14);
	goto T27;
T27:;
	if((V18)!=Cnil){
	{object V21 = (V18);
	VMR2(V21)}}
	{object V22 = (V14);
	VMR2(V22)}
	goto T24;
T24:;
	if(!(type_of((V20))==t_cons)){
	goto T32;}
	goto T31;
	goto T32;
T32:;
	base[0]= VV[3];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T31;
T31:;
	base[0]=VV[14]->s.s_gfdef;
	base[1]= CMPcar((V20));
	base[2]= (V14);
	{object V23;
	base[3]= (V17);
	base[4]= (V15);
	base[5]= (V16);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk15)();
	vs_top=sup;
	V23= vs_base[0];
	 vs_top=base+3;
	 while(V23!=Cnil)
	 {vs_push((V23)->c.c_car);V23=(V23)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T35;}
	if(((V19))==Cnil){
	goto T45;}
	V24= make_cons(CMPcar((V20)),Cnil);
	((V19))->c.c_cdr = /* INLINE-ARGS */V24;
	V19= CMPcdr((V19));
	goto T35;
	goto T45;
T45:;
	V18= make_cons(CMPcar((V20)),Cnil);
	V19= (V18);
	goto T35;
T35:;
	V20= CMPcdr((V20));
	goto T23;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function NUNION	*/

static object LI3(object V26,object V25,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB3 VMS3 VMV3
	{object V27;
	register object V28;
	register object V29;
	register object V30;
	register object V31;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	V27= V26;
	V28= V25;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI3key,first,ap);
	V29=(Vcs[2]);
	V30=(Vcs[3]);
	V31=(Vcs[4]);
	{register object V32;
	register object V33;
	V32= Cnil;
	V33= Cnil;
	{register object V34;
	V34= (V27);
	goto T58;
T58:;
	if(((V34))!=Cnil){
	goto T59;}
	if(((V33))==Cnil){
	goto T62;}
	((V33))->c.c_cdr = (V28);
	goto T62;
T62:;
	if((V32)!=Cnil){
	{object V35 = (V32);
	VMR3(V35)}}
	{object V36 = (V28);
	VMR3(V36)}
	goto T59;
T59:;
	if(!(type_of((V34))==t_cons)){
	goto T67;}
	goto T66;
	goto T67;
T67:;
	base[0]= VV[4];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T66;
T66:;
	base[0]=VV[14]->s.s_gfdef;
	base[1]= CMPcar((V34));
	base[2]= (V28);
	{object V37;
	base[3]= (V31);
	base[4]= (V29);
	base[5]= (V30);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk15)();
	vs_top=sup;
	V37= vs_base[0];
	 vs_top=base+3;
	 while(V37!=Cnil)
	 {vs_push((V37)->c.c_car);V37=(V37)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T70;}
	if(((V33))==Cnil){
	goto T81;}
	((V33))->c.c_cdr = (V34);
	goto T79;
	goto T81;
T81:;
	V32= (V34);
	goto T79;
T79:;
	V33= (V34);
	goto T70;
T70:;
	V34= CMPcdr((V34));
	goto T58;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function INTERSECTION	*/

static object LI4(object V39,object V38,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB4 VMS4 VMV4
	{object V40;
	register object V41;
	register object V42;
	register object V43;
	register object V44;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	V40= V39;
	V41= V38;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI4key,first,ap);
	V42=(Vcs[2]);
	V43=(Vcs[3]);
	V44=(Vcs[4]);
	{register object V45;
	V45= Cnil;
	{register object V46;
	V46= (V40);
	goto T90;
T90:;
	if(((V46))!=Cnil){
	goto T91;}
	{object V47 = (V45);
	VMR4(V47)}
	goto T91;
T91:;
	if(!(type_of((V46))==t_cons)){
	goto T96;}
	goto T95;
	goto T96;
T96:;
	base[0]= VV[5];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T95;
T95:;
	base[0]=VV[14]->s.s_gfdef;
	base[1]= CMPcar((V46));
	base[2]= (V41);
	{object V48;
	base[3]= (V44);
	base[4]= (V42);
	base[5]= (V43);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk15)();
	vs_top=sup;
	V48= vs_base[0];
	 vs_top=base+3;
	 while(V48!=Cnil)
	 {vs_push((V48)->c.c_car);V48=(V48)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T99;}
	V45= make_cons(CMPcar((V46)),(V45));
	goto T99;
T99:;
	V46= CMPcdr((V46));
	goto T90;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function NINTERSECTION	*/

static object LI5(object V50,object V49,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB5 VMS5 VMV5
	{object V51;
	register object V52;
	register object V53;
	register object V54;
	register object V55;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	V51= V50;
	V52= V49;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI5key,first,ap);
	V53=(Vcs[2]);
	V54=(Vcs[3]);
	V55=(Vcs[4]);
	{register object V56;
	register object V57;
	V56= Cnil;
	V57= Cnil;
	{register object V58;
	V58= (V51);
	goto T115;
T115:;
	if(((V58))!=Cnil){
	goto T116;}
	if(((V57))==Cnil){
	goto T119;}
	((V57))->c.c_cdr = Cnil;
	goto T119;
T119:;
	{object V59 = (V56);
	VMR5(V59)}
	goto T116;
T116:;
	if(!(type_of((V58))==t_cons)){
	goto T124;}
	goto T123;
	goto T124;
T124:;
	base[0]= VV[6];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T123;
T123:;
	base[0]=VV[14]->s.s_gfdef;
	base[1]= CMPcar((V58));
	base[2]= (V52);
	{object V60;
	base[3]= (V55);
	base[4]= (V53);
	base[5]= (V54);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk15)();
	vs_top=sup;
	V60= vs_base[0];
	 vs_top=base+3;
	 while(V60!=Cnil)
	 {vs_push((V60)->c.c_car);V60=(V60)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T127;}
	if(((V57))==Cnil){
	goto T138;}
	((V57))->c.c_cdr = (V58);
	goto T136;
	goto T138;
T138:;
	V56= (V58);
	goto T136;
T136:;
	V57= (V58);
	goto T127;
T127:;
	V58= CMPcdr((V58));
	goto T115;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function SET-DIFFERENCE	*/

static object LI6(object V62,object V61,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	{object V63;
	register object V64;
	register object V65;
	register object V66;
	register object V67;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	V63= V62;
	V64= V61;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI6key,first,ap);
	V65=(Vcs[2]);
	V66=(Vcs[3]);
	V67=(Vcs[4]);
	{register object V68;
	V68= Cnil;
	{register object V69;
	V69= (V63);
	goto T147;
T147:;
	if(((V69))!=Cnil){
	goto T148;}
	{object V70 = (V68);
	VMR6(V70)}
	goto T148;
T148:;
	if(!(type_of((V69))==t_cons)){
	goto T153;}
	goto T152;
	goto T153;
T153:;
	base[0]= VV[7];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T152;
T152:;
	base[0]=VV[14]->s.s_gfdef;
	base[1]= CMPcar((V69));
	base[2]= (V64);
	{object V71;
	base[3]= (V67);
	base[4]= (V65);
	base[5]= (V66);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk15)();
	vs_top=sup;
	V71= vs_base[0];
	 vs_top=base+3;
	 while(V71!=Cnil)
	 {vs_push((V71)->c.c_car);V71=(V71)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T156;}
	V68= make_cons(CMPcar((V69)),(V68));
	goto T156;
T156:;
	V69= CMPcdr((V69));
	goto T147;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for SET-DIFFERENCE-REV	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	{object V72;
	register object V73;
	register object V74;
	register object V75;
	register object V76;
	parse_key(vs_base+2,FALSE,FALSE,3,VV[1],VV[2],VV[0]);
	V72=(base[0]);
	V73=(base[1]);
	vs_top=sup;
	V74=(base[2]);
	V75=(base[3]);
	V76=(base[4]);
	{register object V77;
	V77= Cnil;
	{register object V78;
	V78= (V72);
	goto T171;
T171:;
	if(((V78))!=Cnil){
	goto T172;}
	base[8]= (V77);
	vs_top=(vs_base=base+8)+1;
	return;
	goto T172;
T172:;
	if(!(type_of((V78))==t_cons)){
	goto T177;}
	goto T176;
	goto T177;
T177:;
	base[8]= VV[8];
	vs_top=(vs_base=base+8)+1;
	Lerror();
	vs_top=sup;
	goto T176;
T176:;
	base[8]=VV[14]->s.s_gfdef;
	base[9]= CMPcar((V78));
	base[10]= (V73);
	base[11]= VV[9];
	base[12]= Ct;
	{object V79;
	base[13]= (V76);
	base[14]= (V74);
	base[15]= (V75);
	vs_top=(vs_base=base+13)+3;
	(void) (*Lnk15)();
	vs_top=sup;
	V79= vs_base[0];
	 vs_top=base+13;
	 while(V79!=Cnil)
	 {vs_push((V79)->c.c_car);V79=(V79)->c.c_cdr;}
	vs_base=base+9;}
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T180;}
	V77= make_cons(CMPcar((V78)),(V77));
	goto T180;
T180:;
	V78= CMPcdr((V78));
	goto T171;}}
	}
}
/*	local entry for function NSET-DIFFERENCE	*/

static object LI8(object V81,object V80,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB8 VMS8 VMV8
	{object V82;
	register object V83;
	register object V84;
	register object V85;
	register object V86;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	V82= V81;
	V83= V80;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI8key,first,ap);
	V84=(Vcs[2]);
	V85=(Vcs[3]);
	V86=(Vcs[4]);
	{register object V87;
	register object V88;
	V87= Cnil;
	V88= Cnil;
	{register object V89;
	V89= (V82);
	goto T198;
T198:;
	if(((V89))!=Cnil){
	goto T199;}
	if(((V88))==Cnil){
	goto T202;}
	((V88))->c.c_cdr = Cnil;
	goto T202;
T202:;
	{object V90 = (V87);
	VMR8(V90)}
	goto T199;
T199:;
	if(!(type_of((V89))==t_cons)){
	goto T207;}
	goto T206;
	goto T207;
T207:;
	base[0]= VV[10];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T206;
T206:;
	base[0]=VV[14]->s.s_gfdef;
	base[1]= CMPcar((V89));
	base[2]= (V83);
	{object V91;
	base[3]= (V86);
	base[4]= (V84);
	base[5]= (V85);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk15)();
	vs_top=sup;
	V91= vs_base[0];
	 vs_top=base+3;
	 while(V91!=Cnil)
	 {vs_push((V91)->c.c_car);V91=(V91)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T210;}
	if(((V88))==Cnil){
	goto T221;}
	((V88))->c.c_cdr = (V89);
	goto T219;
	goto T221;
T221:;
	V87= (V89);
	goto T219;
T219:;
	V88= (V89);
	goto T210;
T210:;
	V89= CMPcdr((V89));
	goto T198;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for NSET-DIFFERENCE-REV	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	{object V92;
	register object V93;
	register object V94;
	register object V95;
	register object V96;
	parse_key(vs_base+2,FALSE,FALSE,3,VV[1],VV[2],VV[0]);
	V92=(base[0]);
	V93=(base[1]);
	vs_top=sup;
	V94=(base[2]);
	V95=(base[3]);
	V96=(base[4]);
	{register object V97;
	register object V98;
	V97= Cnil;
	V98= Cnil;
	{register object V99;
	V99= (V92);
	goto T231;
T231:;
	if(((V99))!=Cnil){
	goto T232;}
	if(((V98))==Cnil){
	goto T235;}
	((V98))->c.c_cdr = Cnil;
	goto T235;
T235:;
	base[8]= (V97);
	vs_top=(vs_base=base+8)+1;
	return;
	goto T232;
T232:;
	if(!(type_of((V99))==t_cons)){
	goto T240;}
	goto T239;
	goto T240;
T240:;
	base[8]= VV[11];
	vs_top=(vs_base=base+8)+1;
	Lerror();
	vs_top=sup;
	goto T239;
T239:;
	base[8]=VV[14]->s.s_gfdef;
	base[9]= CMPcar((V99));
	base[10]= (V93);
	base[11]= VV[9];
	base[12]= Ct;
	{object V100;
	base[13]= (V96);
	base[14]= (V94);
	base[15]= (V95);
	vs_top=(vs_base=base+13)+3;
	(void) (*Lnk15)();
	vs_top=sup;
	V100= vs_base[0];
	 vs_top=base+13;
	 while(V100!=Cnil)
	 {vs_push((V100)->c.c_car);V100=(V100)->c.c_cdr;}
	vs_base=base+9;}
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T243;}
	if(((V98))==Cnil){
	goto T256;}
	((V98))->c.c_cdr = (V99);
	goto T254;
	goto T256;
T256:;
	V97= (V99);
	goto T254;
T254:;
	V98= (V99);
	goto T243;
T243:;
	V99= CMPcdr((V99));
	goto T231;}}
	}
}
/*	local entry for function SET-EXCLUSIVE-OR	*/

static object LI10(object V102,object V101,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{object V103;
	object V104;
	object V105;
	object V106;
	object V107;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	V103= V102;
	V104= V101;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI10key,first,ap);
	V105=(Vcs[2]);
	V106=(Vcs[3]);
	V107=(Vcs[4]);
	base[0]= (V103);
	base[1]= (V104);
	{object V109;
	base[2]= (V107);
	base[3]= (V105);
	base[4]= (V106);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk15)();
	vs_top=sup;
	V109= vs_base[0];
	 vs_top=base+2;
	 while(V109!=Cnil)
	 {vs_push((V109)->c.c_car);V109=(V109)->c.c_cdr;}
	vs_base=base+0;}
	(void) (*Lnk16)();
	vs_top=sup;
	V108= vs_base[0];
	base[0]= (V104);
	base[1]= (V103);
	{object V111;
	base[2]= (V107);
	base[3]= (V105);
	base[4]= (V106);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk15)();
	vs_top=sup;
	V111= vs_base[0];
	 vs_top=base+2;
	 while(V111!=Cnil)
	 {vs_push((V111)->c.c_car);V111=(V111)->c.c_cdr;}
	vs_base=base+0;}
	(void) (*Lnk17)();
	vs_top=sup;
	V110= vs_base[0];
	{object V112 = nconc(V108,V110);
	VMR10(V112)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function NSET-EXCLUSIVE-OR	*/

static object LI11(object V114,object V113,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V115;
	register object V116;
	register object V117;
	register object V118;
	register object V119;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	V115= V114;
	V116= V113;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI11key,first,ap);
	V117=(Vcs[2]);
	V118=(Vcs[3]);
	V119=(Vcs[4]);
	{object V120;
	register object V121;
	register object V122;
	register object V123;
	V120= Cnil;
	V121= Cnil;
	V122= Cnil;
	V123= Cnil;
	{register object V124;
	V124= (V115);
	goto T282;
T282:;
	if(((V124))!=Cnil){
	goto T283;}
	if(((V123))==Cnil){
	goto T286;}
	((V123))->c.c_cdr = Cnil;
	goto T286;
T286:;
	if(((V121))==Cnil){
	goto T290;}
	base[0]= (V116);
	base[1]= (V122);
	{object V126;
	base[2]= (V119);
	base[3]= (V117);
	base[4]= (V118);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk15)();
	vs_top=sup;
	V126= vs_base[0];
	 vs_top=base+2;
	 while(V126!=Cnil)
	 {vs_push((V126)->c.c_car);V126=(V126)->c.c_cdr;}
	vs_base=base+0;}
	(void) (*Lnk18)();
	vs_top=sup;
	V125= vs_base[0];
	((V121))->c.c_cdr = V125;
	{object V127 = (V120);
	VMR11(V127)}
	goto T290;
T290:;
	base[0]= (V116);
	base[1]= (V122);
	{object V128;
	base[2]= (V119);
	base[3]= (V117);
	base[4]= (V118);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk15)();
	vs_top=sup;
	V128= vs_base[0];
	 vs_top=base+2;
	 while(V128!=Cnil)
	 {vs_push((V128)->c.c_car);V128=(V128)->c.c_cdr;}
	vs_base=base+0;}
	(void) (*Lnk18)();
	vs_top=sup;
	{object V129 = vs_base[0];
	VMR11(V129)}
	goto T283;
T283:;
	if(!(type_of((V124))==t_cons)){
	goto T308;}
	goto T307;
	goto T308;
T308:;
	base[0]= VV[12];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T307;
T307:;
	base[0]=VV[14]->s.s_gfdef;
	base[1]= CMPcar((V124));
	base[2]= (V116);
	{object V130;
	base[3]= (V119);
	base[4]= (V117);
	base[5]= (V118);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk15)();
	vs_top=sup;
	V130= vs_base[0];
	 vs_top=base+3;
	 while(V130!=Cnil)
	 {vs_push((V130)->c.c_car);V130=(V130)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T313;}
	if(((V123))==Cnil){
	goto T323;}
	((V123))->c.c_cdr = (V124);
	goto T321;
	goto T323;
T323:;
	V122= (V124);
	goto T321;
T321:;
	V123= (V124);
	goto T311;
	goto T313;
T313:;
	if(((V121))==Cnil){
	goto T329;}
	((V121))->c.c_cdr = (V124);
	goto T327;
	goto T329;
T329:;
	V120= (V124);
	goto T327;
T327:;
	V121= (V124);
	goto T311;
T311:;
	V124= CMPcdr((V124));
	goto T282;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function SUBSETP	*/

static object LI12(object V132,object V131,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V133;
	register object V134;
	register object V135;
	register object V136;
	register object V137;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	V133= V132;
	V134= V131;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI12key,first,ap);
	V135=(Vcs[2]);
	V136=(Vcs[3]);
	V137=(Vcs[4]);
	{register object V138;
	V138= (V133);
	goto T337;
T337:;
	if(((V138))!=Cnil){
	goto T338;}
	{object V139 = Ct;
	VMR12(V139)}
	goto T338;
T338:;
	if(!(type_of((V138))==t_cons)){
	goto T343;}
	goto T342;
	goto T343;
T343:;
	base[0]= VV[13];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T342;
T342:;
	base[0]=VV[14]->s.s_gfdef;
	base[1]= CMPcar((V138));
	base[2]= (V134);
	{object V140;
	base[3]= (V137);
	base[4]= (V135);
	base[5]= (V136);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk15)();
	vs_top=sup;
	V140= vs_base[0];
	 vs_top=base+3;
	 while(V140!=Cnil)
	 {vs_push((V140)->c.c_car);V140=(V140)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T346;}
	{object V141 = Cnil;
	VMR12(V141)}
	goto T346;
T346:;
	V138= CMPcdr((V138));
	goto T337;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
static void LnkT18(){ call_or_link(VV[18],(void **)(void *)&Lnk18);} /* NSET-DIFFERENCE-REV */
static void LnkT17(){ call_or_link(VV[17],(void **)(void *)&Lnk17);} /* SET-DIFFERENCE-REV */
static void LnkT16(){ call_or_link(VV[16],(void **)(void *)&Lnk16);} /* SET-DIFFERENCE */
static void LnkT14(){ call_or_link(VV[14],(void **)(void *)&Lnk14);} /* MEMBER1 */
static void LnkT15(){ call_or_link(VV[15],(void **)(void *)&Lnk15);} /* KEY-LIST */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

