
#include "cmpinclude.h"
#include "gcl_listlib.h"
void init_gcl_listlib(){do_init(VV);}
/*	local entry for function KEY-LIST	*/

static object LI1(V4,V5,V6)

object V4;object V5;object V6;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	{register object V7;
	V7= Cnil;
	if(((V4))==Cnil){
	goto T2;}
	V7= make_cons(VV[0],(V7));
	V7= make_cons(V4,(V7));
	goto T2;
T2:;
	if(((V5))==Cnil){
	goto T8;}
	V7= make_cons(VV[1],(V7));
	V7= make_cons(V5,(V7));
	goto T8;
T8:;
	if(((V6))==Cnil){
	goto T14;}
	V7= make_cons(VV[2],(V7));
	V7= make_cons(V6,(V7));
	goto T14;
T14:;
	{object V14 = nreverse((V7));
	VMR1(V14)}}
	return Cnil;
}
/*	local entry for function UNION	*/

static object LI2(object V16,object V15,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB2 VMS2 VMV2
	{object V17;
	register object V18;
	register object V19;
	register object V20;
	register object V21;
	va_start(ap,first);
	V17= V16;
	V18= V15;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI2key,first,ap);
	V19=(Vcs[2]);
	V20=(Vcs[3]);
	V21=(Vcs[4]);
	{register object V22;
	register object V23;
	V22= Cnil;
	V23= Cnil;
	{register object V24;
	V24= (V17);
	goto T23;
T23:;
	if(((V24))!=Cnil){
	goto T24;}
	if(((V23))==Cnil){
	goto T27;}
	((V23))->c.c_cdr = (V18);
	goto T27;
T27:;
	if((V22)!=Cnil){
	{object V25 = (V22);
	VMR2(V25)}}
	{object V26 = (V18);
	VMR2(V26)}
	goto T24;
T24:;
	if(!(type_of((V24))==t_cons)){
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
	base[1]= CMPcar((V24));
	base[2]= (V18);
	{object V27;
	V27= (*(LnkLI15))((V21),(V19),(V20));
	 vs_top=base+3;
	 while(V27!=Cnil)
	 {vs_push((V27)->c.c_car);V27=(V27)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T35;}
	if(((V23))==Cnil){
	goto T42;}
	V28= make_cons(CMPcar((V24)),Cnil);
	((V23))->c.c_cdr = /* INLINE-ARGS */V28;
	V23= CMPcdr((V23));
	goto T35;
	goto T42;
T42:;
	V22= make_cons(CMPcar((V24)),Cnil);
	V23= (V22);
	goto T35;
T35:;
	V24= CMPcdr((V24));
	goto T23;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function NUNION	*/

static object LI3(object V30,object V29,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB3 VMS3 VMV3
	{object V31;
	register object V32;
	register object V33;
	register object V34;
	register object V35;
	va_start(ap,first);
	V31= V30;
	V32= V29;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI3key,first,ap);
	V33=(Vcs[2]);
	V34=(Vcs[3]);
	V35=(Vcs[4]);
	{register object V36;
	register object V37;
	V36= Cnil;
	V37= Cnil;
	{register object V38;
	V38= (V31);
	goto T55;
T55:;
	if(((V38))!=Cnil){
	goto T56;}
	if(((V37))==Cnil){
	goto T59;}
	((V37))->c.c_cdr = (V32);
	goto T59;
T59:;
	if((V36)!=Cnil){
	{object V39 = (V36);
	VMR3(V39)}}
	{object V40 = (V32);
	VMR3(V40)}
	goto T56;
T56:;
	if(!(type_of((V38))==t_cons)){
	goto T64;}
	goto T63;
	goto T64;
T64:;
	base[0]= VV[4];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T63;
T63:;
	base[0]=VV[14]->s.s_gfdef;
	base[1]= CMPcar((V38));
	base[2]= (V32);
	{object V41;
	V41= (*(LnkLI15))((V35),(V33),(V34));
	 vs_top=base+3;
	 while(V41!=Cnil)
	 {vs_push((V41)->c.c_car);V41=(V41)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T67;}
	if(((V37))==Cnil){
	goto T75;}
	((V37))->c.c_cdr = (V38);
	goto T73;
	goto T75;
T75:;
	V36= (V38);
	goto T73;
T73:;
	V37= (V38);
	goto T67;
T67:;
	V38= CMPcdr((V38));
	goto T55;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function INTERSECTION	*/

static object LI4(object V43,object V42,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB4 VMS4 VMV4
	{object V44;
	register object V45;
	register object V46;
	register object V47;
	register object V48;
	va_start(ap,first);
	V44= V43;
	V45= V42;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI4key,first,ap);
	V46=(Vcs[2]);
	V47=(Vcs[3]);
	V48=(Vcs[4]);
	{register object V49;
	V49= Cnil;
	{register object V50;
	V50= (V44);
	goto T84;
T84:;
	if(((V50))!=Cnil){
	goto T85;}
	{object V51 = (V49);
	VMR4(V51)}
	goto T85;
T85:;
	if(!(type_of((V50))==t_cons)){
	goto T90;}
	goto T89;
	goto T90;
T90:;
	base[0]= VV[5];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T89;
T89:;
	base[0]=VV[14]->s.s_gfdef;
	base[1]= CMPcar((V50));
	base[2]= (V45);
	{object V52;
	V52= (*(LnkLI15))((V48),(V46),(V47));
	 vs_top=base+3;
	 while(V52!=Cnil)
	 {vs_push((V52)->c.c_car);V52=(V52)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T93;}
	V49= make_cons(CMPcar((V50)),(V49));
	goto T93;
T93:;
	V50= CMPcdr((V50));
	goto T84;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function NINTERSECTION	*/

static object LI5(object V54,object V53,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB5 VMS5 VMV5
	{object V55;
	register object V56;
	register object V57;
	register object V58;
	register object V59;
	va_start(ap,first);
	V55= V54;
	V56= V53;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI5key,first,ap);
	V57=(Vcs[2]);
	V58=(Vcs[3]);
	V59=(Vcs[4]);
	{register object V60;
	register object V61;
	V60= Cnil;
	V61= Cnil;
	{register object V62;
	V62= (V55);
	goto T106;
T106:;
	if(((V62))!=Cnil){
	goto T107;}
	if(((V61))==Cnil){
	goto T110;}
	((V61))->c.c_cdr = Cnil;
	goto T110;
T110:;
	{object V63 = (V60);
	VMR5(V63)}
	goto T107;
T107:;
	if(!(type_of((V62))==t_cons)){
	goto T115;}
	goto T114;
	goto T115;
T115:;
	base[0]= VV[6];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T114;
T114:;
	base[0]=VV[14]->s.s_gfdef;
	base[1]= CMPcar((V62));
	base[2]= (V56);
	{object V64;
	V64= (*(LnkLI15))((V59),(V57),(V58));
	 vs_top=base+3;
	 while(V64!=Cnil)
	 {vs_push((V64)->c.c_car);V64=(V64)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T118;}
	if(((V61))==Cnil){
	goto T126;}
	((V61))->c.c_cdr = (V62);
	goto T124;
	goto T126;
T126:;
	V60= (V62);
	goto T124;
T124:;
	V61= (V62);
	goto T118;
T118:;
	V62= CMPcdr((V62));
	goto T106;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function SET-DIFFERENCE	*/

static object LI6(object V66,object V65,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	{object V67;
	register object V68;
	register object V69;
	register object V70;
	register object V71;
	va_start(ap,first);
	V67= V66;
	V68= V65;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI6key,first,ap);
	V69=(Vcs[2]);
	V70=(Vcs[3]);
	V71=(Vcs[4]);
	{register object V72;
	V72= Cnil;
	{register object V73;
	V73= (V67);
	goto T135;
T135:;
	if(((V73))!=Cnil){
	goto T136;}
	{object V74 = (V72);
	VMR6(V74)}
	goto T136;
T136:;
	if(!(type_of((V73))==t_cons)){
	goto T141;}
	goto T140;
	goto T141;
T141:;
	base[0]= VV[7];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T140;
T140:;
	base[0]=VV[14]->s.s_gfdef;
	base[1]= CMPcar((V73));
	base[2]= (V68);
	{object V75;
	V75= (*(LnkLI15))((V71),(V69),(V70));
	 vs_top=base+3;
	 while(V75!=Cnil)
	 {vs_push((V75)->c.c_car);V75=(V75)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T144;}
	V72= make_cons(CMPcar((V73)),(V72));
	goto T144;
T144:;
	V73= CMPcdr((V73));
	goto T135;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function SET-DIFFERENCE-REV	*/

static object LI7(object V77,object V76,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	{object V78;
	register object V79;
	register object V80;
	register object V81;
	register object V82;
	va_start(ap,first);
	V78= V77;
	V79= V76;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI7key,first,ap);
	V80=(Vcs[2]);
	V81=(Vcs[3]);
	V82=(Vcs[4]);
	{register object V83;
	V83= Cnil;
	{register object V84;
	V84= (V78);
	goto T156;
T156:;
	if(((V84))!=Cnil){
	goto T157;}
	{object V85 = (V83);
	VMR7(V85)}
	goto T157;
T157:;
	if(!(type_of((V84))==t_cons)){
	goto T162;}
	goto T161;
	goto T162;
T162:;
	base[0]= VV[8];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T161;
T161:;
	base[0]=VV[14]->s.s_gfdef;
	base[1]= CMPcar((V84));
	base[2]= (V79);
	base[3]= VV[9];
	base[4]= Ct;
	{object V86;
	V86= (*(LnkLI15))((V82),(V80),(V81));
	 vs_top=base+5;
	 while(V86!=Cnil)
	 {vs_push((V86)->c.c_car);V86=(V86)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T165;}
	V83= make_cons(CMPcar((V84)),(V83));
	goto T165;
T165:;
	V84= CMPcdr((V84));
	goto T156;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function NSET-DIFFERENCE	*/

static object LI8(object V88,object V87,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB8 VMS8 VMV8
	{object V89;
	register object V90;
	register object V91;
	register object V92;
	register object V93;
	va_start(ap,first);
	V89= V88;
	V90= V87;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI8key,first,ap);
	V91=(Vcs[2]);
	V92=(Vcs[3]);
	V93=(Vcs[4]);
	{register object V94;
	register object V95;
	V94= Cnil;
	V95= Cnil;
	{register object V96;
	V96= (V89);
	goto T180;
T180:;
	if(((V96))!=Cnil){
	goto T181;}
	if(((V95))==Cnil){
	goto T184;}
	((V95))->c.c_cdr = Cnil;
	goto T184;
T184:;
	{object V97 = (V94);
	VMR8(V97)}
	goto T181;
T181:;
	if(!(type_of((V96))==t_cons)){
	goto T189;}
	goto T188;
	goto T189;
T189:;
	base[0]= VV[10];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T188;
T188:;
	base[0]=VV[14]->s.s_gfdef;
	base[1]= CMPcar((V96));
	base[2]= (V90);
	{object V98;
	V98= (*(LnkLI15))((V93),(V91),(V92));
	 vs_top=base+3;
	 while(V98!=Cnil)
	 {vs_push((V98)->c.c_car);V98=(V98)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T192;}
	if(((V95))==Cnil){
	goto T200;}
	((V95))->c.c_cdr = (V96);
	goto T198;
	goto T200;
T200:;
	V94= (V96);
	goto T198;
T198:;
	V95= (V96);
	goto T192;
T192:;
	V96= CMPcdr((V96));
	goto T180;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function NSET-DIFFERENCE-REV	*/

static object LI9(object V100,object V99,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V101;
	register object V102;
	register object V103;
	register object V104;
	register object V105;
	va_start(ap,first);
	V101= V100;
	V102= V99;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI9key,first,ap);
	V103=(Vcs[2]);
	V104=(Vcs[3]);
	V105=(Vcs[4]);
	{register object V106;
	register object V107;
	V106= Cnil;
	V107= Cnil;
	{register object V108;
	V108= (V101);
	goto T210;
T210:;
	if(((V108))!=Cnil){
	goto T211;}
	if(((V107))==Cnil){
	goto T214;}
	((V107))->c.c_cdr = Cnil;
	goto T214;
T214:;
	{object V109 = (V106);
	VMR9(V109)}
	goto T211;
T211:;
	if(!(type_of((V108))==t_cons)){
	goto T219;}
	goto T218;
	goto T219;
T219:;
	base[0]= VV[11];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T218;
T218:;
	base[0]=VV[14]->s.s_gfdef;
	base[1]= CMPcar((V108));
	base[2]= (V102);
	base[3]= VV[9];
	base[4]= Ct;
	{object V110;
	V110= (*(LnkLI15))((V105),(V103),(V104));
	 vs_top=base+5;
	 while(V110!=Cnil)
	 {vs_push((V110)->c.c_car);V110=(V110)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T222;}
	if(((V107))==Cnil){
	goto T232;}
	((V107))->c.c_cdr = (V108);
	goto T230;
	goto T232;
T232:;
	V106= (V108);
	goto T230;
T230:;
	V107= (V108);
	goto T222;
T222:;
	V108= CMPcdr((V108));
	goto T210;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function SET-EXCLUSIVE-OR	*/

static object LI10(object V112,object V111,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{object V113;
	object V114;
	object V115;
	object V116;
	object V117;
	va_start(ap,first);
	V113= V112;
	V114= V111;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI10key,first,ap);
	V115=(Vcs[2]);
	V116=(Vcs[3]);
	V117=(Vcs[4]);
	base[0]= (V113);
	base[1]= (V114);
	{object V119;
	V119= (*(LnkLI15))((V117),(V115),(V116));
	 vs_top=base+2;
	 while(V119!=Cnil)
	 {vs_push((V119)->c.c_car);V119=(V119)->c.c_cdr;}
	vs_base=base+0;}
	(void) (*Lnk16)();
	vs_top=sup;
	V118= vs_base[0];
	base[0]= (V114);
	base[1]= (V113);
	{object V121;
	V121= (*(LnkLI15))((V117),(V115),(V116));
	 vs_top=base+2;
	 while(V121!=Cnil)
	 {vs_push((V121)->c.c_car);V121=(V121)->c.c_cdr;}
	vs_base=base+0;}
	(void) (*Lnk17)();
	vs_top=sup;
	V120= vs_base[0];
	{object V122 = nconc(V118,V120);
	VMR10(V122)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function NSET-EXCLUSIVE-OR	*/

static object LI11(object V124,object V123,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V125;
	register object V126;
	register object V127;
	register object V128;
	register object V129;
	va_start(ap,first);
	V125= V124;
	V126= V123;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI11key,first,ap);
	V127=(Vcs[2]);
	V128=(Vcs[3]);
	V129=(Vcs[4]);
	{object V130;
	register object V131;
	register object V132;
	register object V133;
	V130= Cnil;
	V131= Cnil;
	V132= Cnil;
	V133= Cnil;
	{register object V134;
	V134= (V125);
	goto T252;
T252:;
	if(((V134))!=Cnil){
	goto T253;}
	if(((V133))==Cnil){
	goto T256;}
	((V133))->c.c_cdr = Cnil;
	goto T256;
T256:;
	if(((V131))==Cnil){
	goto T260;}
	base[0]= (V126);
	base[1]= (V132);
	{object V136;
	V136= (*(LnkLI15))((V129),(V127),(V128));
	 vs_top=base+2;
	 while(V136!=Cnil)
	 {vs_push((V136)->c.c_car);V136=(V136)->c.c_cdr;}
	vs_base=base+0;}
	(void) (*Lnk18)();
	vs_top=sup;
	V135= vs_base[0];
	((V131))->c.c_cdr = V135;
	{object V137 = (V130);
	VMR11(V137)}
	goto T260;
T260:;
	base[0]= (V126);
	base[1]= (V132);
	{object V138;
	V138= (*(LnkLI15))((V129),(V127),(V128));
	 vs_top=base+2;
	 while(V138!=Cnil)
	 {vs_push((V138)->c.c_car);V138=(V138)->c.c_cdr;}
	vs_base=base+0;}
	(void) (*Lnk18)();
	vs_top=sup;
	{object V139 = vs_base[0];
	VMR11(V139)}
	goto T253;
T253:;
	if(!(type_of((V134))==t_cons)){
	goto T272;}
	goto T271;
	goto T272;
T272:;
	base[0]= VV[12];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T271;
T271:;
	base[0]=VV[14]->s.s_gfdef;
	base[1]= CMPcar((V134));
	base[2]= (V126);
	{object V140;
	V140= (*(LnkLI15))((V129),(V127),(V128));
	 vs_top=base+3;
	 while(V140!=Cnil)
	 {vs_push((V140)->c.c_car);V140=(V140)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T277;}
	if(((V133))==Cnil){
	goto T284;}
	((V133))->c.c_cdr = (V134);
	goto T282;
	goto T284;
T284:;
	V132= (V134);
	goto T282;
T282:;
	V133= (V134);
	goto T275;
	goto T277;
T277:;
	if(((V131))==Cnil){
	goto T290;}
	((V131))->c.c_cdr = (V134);
	goto T288;
	goto T290;
T290:;
	V130= (V134);
	goto T288;
T288:;
	V131= (V134);
	goto T275;
T275:;
	V134= CMPcdr((V134));
	goto T252;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function SUBSETP	*/

static object LI12(object V142,object V141,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V143;
	register object V144;
	register object V145;
	register object V146;
	register object V147;
	va_start(ap,first);
	V143= V142;
	V144= V141;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI12key,first,ap);
	V145=(Vcs[2]);
	V146=(Vcs[3]);
	V147=(Vcs[4]);
	{register object V148;
	V148= (V143);
	goto T298;
T298:;
	if(((V148))!=Cnil){
	goto T299;}
	{object V149 = Ct;
	VMR12(V149)}
	goto T299;
T299:;
	if(!(type_of((V148))==t_cons)){
	goto T304;}
	goto T303;
	goto T304;
T304:;
	base[0]= VV[13];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T303;
T303:;
	base[0]=VV[14]->s.s_gfdef;
	base[1]= CMPcar((V148));
	base[2]= (V144);
	{object V150;
	V150= (*(LnkLI15))((V147),(V145),(V146));
	 vs_top=base+3;
	 while(V150!=Cnil)
	 {vs_push((V150)->c.c_car);V150=(V150)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T307;}
	{object V151 = Cnil;
	VMR12(V151)}
	goto T307;
T307:;
	V148= CMPcdr((V148));
	goto T298;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
static void LnkT18(){ call_or_link(VV[18],(void **)(void *)&Lnk18);} /* NSET-DIFFERENCE-REV */
static void LnkT17(){ call_or_link(VV[17],(void **)(void *)&Lnk17);} /* SET-DIFFERENCE-REV */
static void LnkT16(){ call_or_link(VV[16],(void **)(void *)&Lnk16);} /* SET-DIFFERENCE */
static void LnkT14(){ call_or_link(VV[14],(void **)(void *)&Lnk14);} /* MEMBER1 */
static object  LnkTLI15(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[15],(void **)(void *)&LnkLI15,3,first,ap);va_end(ap);return V1;} /* KEY-LIST */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

