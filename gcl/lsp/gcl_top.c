
#include "cmpinclude.h"
#include "gcl_top.h"
void init_gcl_top(){do_init(VV);}
/*	local entry for function TOP-LEVEL	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[0],Cnil);
	bds_bind(VV[1],Cnil);
	bds_bind(VV[2],Cnil);
	bds_bind(VV[3],Cnil);
	bds_bind(VV[4],Cnil);
	bds_bind(VV[5],Cnil);
	bds_bind(VV[6],Cnil);
	bds_bind(VV[7],Cnil);
	bds_bind(VV[8],Cnil);
	bds_bind(VV[9],Cnil);
	(VV[10]->s.s_dbind)= Ct;
	frs_push(FRS_CATCH,(VV[11]->s.s_dbind));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	goto T3;}
	else{
	if(((VV[12]->s.s_dbind))==Cnil){
	goto T8;}
	(VV[12]->s.s_dbind)= Cnil;
	goto T6;
	goto T8;
T8:;
	if(!((file_exists(VV[13])))){
	goto T6;}
	base[10]= VV[14];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk151)();
	vs_top=sup;
	goto T6;
T6:;
	bds_bind(VV[15],Cnil);
	V1= (*(LnkLI152))((VV[16]->s.s_dbind));
	bds_unwind1;
	base[10]= (VV[17]->s.s_dbind);
	vs_top=(vs_base=base+10)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T14;}
	frs_pop();
	goto T3;
	goto T14;
T14:;
	V2= (
	(type_of((VV[17]->s.s_dbind)) == t_sfun ?(*(((VV[17]->s.s_dbind))->sfn.sfn_self)):
	(fcall.fun=((VV[17]->s.s_dbind)),fcall.argd=0,fcalln))());
	frs_pop();}
	goto T3;
T3:;
	goto T18;
T18:;
	(VV[2]->s.s_dbind)= (VV[1]->s.s_dbind);
	(VV[1]->s.s_dbind)= (VV[0]->s.s_dbind);
	(VV[0]->s.s_dbind)= (VV[3]->s.s_dbind);
	if(((VV[18]->s.s_dbind))==Cnil){
	goto T28;}
	(VV[18]->s.s_dbind)= Cnil;
	goto T26;
	goto T28;
T28:;
	base[10]= Ct;
	base[11]= VV[19];{VOL object V3;
	V3= (VV[20]->s.s_dbind);
	base[13]= VV[21];
	vs_top=(vs_base=base+13)+1;
	Lfind_package();
	vs_top=sup;
	V4= vs_base[0];
	if(!((V3)==(V4))){
	goto T35;}}
	base[12]= VV[22];
	goto T33;
	goto T35;
T35:;
	base[13]= (VV[20]->s.s_dbind);
	vs_top=(vs_base=base+13)+1;
	Lpackage_name();
	vs_top=sup;
	base[12]= vs_base[0];
	goto T33;
T33:;
	vs_top=(vs_base=base+10)+3;
	Lformat();
	vs_top=sup;
	goto T26;
T26:;
	vs_base=vs_top;
	siLreset_stack_limits();
	vs_top=sup;
	if(((VV[12]->s.s_dbind))==Cnil){
	goto T41;}
	{object V5 = Cnil;
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
	VMR1(V5)}
	goto T41;
T41:;
	frs_push(FRS_CATCH,(VV[11]->s.s_dbind));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T19;}
	goto T45;}
	else{
	base[10]= (VV[23]->s.s_dbind);
	base[11]= Cnil;
	base[12]= (VV[24]->s.s_dbind);
	(VV[3]->s.s_dbind)= simple_symlispcall(VV[153],base+10,3);
	if(!(((VV[3]->s.s_dbind))==((VV[24]->s.s_dbind)))){
	goto T52;}
	vs_base=vs_top;
	Lby();
	vs_top=sup;
	goto T52;
T52:;
	{object V6;
	base[10]= (VV[3]->s.s_dbind);
	symlispcall(VV[154],base+10,1);
	Llist();
	vs_top=sup;
	V6= vs_base[0];
	(VV[9]->s.s_dbind)= (VV[8]->s.s_dbind);
	(VV[8]->s.s_dbind)= (VV[7]->s.s_dbind);
	(VV[7]->s.s_dbind)= (V6);
	(VV[6]->s.s_dbind)= (VV[5]->s.s_dbind);
	(VV[5]->s.s_dbind)= (VV[4]->s.s_dbind);
	(VV[4]->s.s_dbind)= CMPcar((VV[7]->s.s_dbind));
	vs_base=vs_top;
	Lfresh_line();
	vs_top=sup;
	{register object V7;
	register object V8;
	V7= (VV[7]->s.s_dbind);
	V8= CMPcar((V7));
	goto T75;
T75:;
	if(!(((V7))==Cnil)){
	goto T76;}
	goto T71;
	goto T76;
T76:;
	base[11]= (V8);
	(void)simple_symlispcall(VV[155],base+11,1);
	princ_char(10,Cnil);
	V7= CMPcdr((V7));
	V8= CMPcar((V7));
	goto T75;}
	goto T71;
T71:;
	frs_pop();
	goto T19;}}
	goto T45;
T45:;
	(VV[25]->s.s_dbind)= Cnil;
	(VV[26]->s.s_dbind)= Cnil;
	princ_char(10,VV[27]);
	vs_base=vs_top;
	(void) (*Lnk156)();
	vs_top=sup;
	goto T19;
T19:;
	goto T18;
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PROCESS-SOME-ARGS	*/

static object LI2(V10)

register object V10;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	goto T95;
T95:;
	{register object V11;
	register object V12;
	V11= CMPcar((V10));
	V12= Cnil;
	if(!(equal((V11),VV[28]))){
	goto T101;}
	base[0]= CMPcadr((V10));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk151)();
	vs_top=sup;
	goto T99;
	goto T101;
T101:;
	if(!(equal((V11),VV[29]))){
	goto T105;}
	base[1]= CMPcadr((V10));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk157)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	goto T99;
	goto T105;
T105:;
	V12= Ct;
	goto T99;
T99:;
	if((V12)!=Cnil){
	goto T110;}
	V10= CMPcdr((V10));
	goto T110;
T110:;
	V10= CMPcdr((V10));}
	if((V10)!=Cnil){
	goto T96;}
	{object V13 = Cnil;
	VMR2(V13)}
	goto T96;
T96:;
	goto T95;
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DBL-READ	*/

static object LI3(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB3 VMS3 VMV3
	{register object V14;
	register object V15;
	register object V16;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T114;
	else {
	V14= first;}
	if (--narg <= 0) goto T115;
	else {
	V15= va_arg(ap,object);}
	if (--narg <= 0) goto T116;
	else {
	V16= va_arg(ap,object);}
	--narg; goto T117;
	goto T114;
T114:;
	V14= (VV[23]->s.s_dbind);
	goto T115;
T115:;
	V15= Ct;
	goto T116;
T116:;
	V16= Cnil;
	goto T117;
T117:;
	{object V17;
	register object V18;
	V17= Cnil;
	V18= Cnil;
	goto T125;
T125:;
	base[0]= (V14);
	base[1]= (V15);
	base[2]= (V16);
	vs_top=(vs_base=base+0)+3;
	Lread_char();
	vs_top=sup;
	V18= vs_base[0];
	if(!(eql((V18),VV[30]))){
	goto T133;}
	goto T125;
	goto T133;
T133:;
	if(!(((V18))==((V16)))){
	goto T131;}
	{object V19 = (V16);
	VMR3(V19)}
	goto T131;
T131:;
	base[0]= (V18);
	base[1]= (V14);
	vs_top=(vs_base=base+0)+2;
	Lunread_char();
	vs_top=sup;
	goto T123;
	goto T123;
T123:;
	if(!(eql(VV[31],(V18)))){
	goto T141;}
	base[0]= VV[32];
	base[2]= (V14);
	base[3]= (V15);
	base[4]= (V16);
	vs_top=(vs_base=base+2)+3;
	Lread_line();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= VV[33];
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk158)();
	vs_top=sup;
	V17= vs_base[0];
	base[1]= (V17);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk159)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V15);
	base[2]= (V16);
	vs_top=(vs_base=base+0)+3;
	Lread();
	vs_top=sup;
	{object V20 = vs_base[0];
	VMR3(V20)}
	goto T141;
T141:;
	base[0]= (V14);
	base[1]= (V15);
	base[2]= (V16);
	vs_top=(vs_base=base+0)+3;
	Lread();
	vs_top=sup;
	{object V21 = vs_base[0];
	VMR3(V21)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BREAK-LEVEL	*/

static object LI4(object V22,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB4 VMS4 VMV4
	bds_check;
	{VOL object V23;
	VOL object V24;
	va_start(ap,first);
	V23= V22;
	narg = narg - 1;
	if (narg <= 0) goto T158;
	else {
	V24= first;}
	--narg; goto T159;
	goto T158;
T158:;
	V24= Cnil;
	goto T159;
T159:;
	{VOL object V25;
	if(!(type_of((V23))==t_string)){
	goto T163;}
	bds_bind(VV[34],(V23));
	goto T161;
	goto T163;
T163:;
	bds_bind(VV[34],(VV[34]->s.s_dbind));
	goto T161;
T161:;
	V26= make_cons((VV[36]->s.s_dbind),(VV[11]->s.s_dbind));
	bds_bind(VV[35],make_cons(/* INLINE-ARGS */V26,(VV[35]->s.s_dbind)));
	bds_bind(VV[11],make_cons(Cnil,Cnil));
	if(((V23))!=Cnil){
	goto T169;}
	bds_bind(VV[36],(VV[36]->s.s_dbind));
	goto T167;
	goto T169;
T169:;
	bds_bind(VV[36],make_cons(Ct,(VV[36]->s.s_dbind)));
	goto T167;
T167:;
	bds_bind(VV[37],one_plus((VV[38]->s.s_dbind)));
	vs_base=vs_top;
	(void) (*Lnk160)();
	vs_top=sup;
	V27= vs_base[0];
	bds_bind(VV[38],one_minus(V27));
	bds_bind(VV[39],(VV[38]->s.s_dbind));{VOL object V28;
	base[23]= (VV[41]->s.s_dbind);
	base[24]= (VV[37]->s.s_dbind);
	vs_top=(vs_base=base+23)+2;
	(void) (*Lnk161)();
	vs_top=sup;
	V28= vs_base[0];
	if(V28==Cnil)goto T175;
	bds_bind(VV[40],V28);
	goto T174;
	goto T175;
T175:;}
	vs_base=vs_top;
	(void) (*Lnk162)();
	vs_top=sup;
	V29= vs_base[0];
	bds_bind(VV[40],one_plus(V29));
	goto T174;
T174:;
	vs_base=vs_top;
	(void) (*Lnk162)();
	vs_top=sup;
	bds_bind(VV[41],vs_base[0]);
	bds_bind(VV[42],Cnil);
	V25= (VV[43]->s.s_dbind);
	if(!(type_of((V23))==t_string)){
	goto T184;}
	bds_bind(VV[43],Cnil);
	goto T182;
	goto T184;
T184:;
	bds_bind(VV[43],(V25));
	goto T182;
T182:;
	if((VV[45]->s.s_dbind)!=Cnil){
	bds_bind(VV[44],(VV[45]->s.s_dbind));
	goto T186;}
	bds_bind(VV[44],(VV[44]->s.s_dbind));
	goto T186;
T186:;
	bds_bind(VV[46],Cnil);
	bds_bind(VV[0],(VV[0]->s.s_dbind));
	bds_bind(VV[1],(VV[1]->s.s_dbind));
	bds_bind(VV[2],(VV[2]->s.s_dbind));
	bds_bind(VV[3],(VV[3]->s.s_dbind));
	bds_bind(VV[4],(VV[4]->s.s_dbind));
	bds_bind(VV[5],(VV[5]->s.s_dbind));
	bds_bind(VV[6],(VV[6]->s.s_dbind));
	bds_bind(VV[7],(VV[7]->s.s_dbind));
	bds_bind(VV[8],(VV[8]->s.s_dbind));
	bds_bind(VV[9],(VV[9]->s.s_dbind));
	if(((V25))!=Cnil){
	goto T187;}
	if(!(type_of((V23))==t_string)){
	goto T187;}
	vs_base=vs_top;
	(void) (*Lnk163)();
	vs_top=sup;
	base[23]= make_fixnum((long)length(CMPcdr((VV[36]->s.s_dbind))));
	vs_top=(vs_base=base+23)+1;
	(void) (*Lnk164)();
	vs_top=sup;
	goto T187;
T187:;
	base[23]= small_fixnum(1);
	vs_top=(vs_base=base+23)+1;
	(void) (*Lnk165)();
	vs_top=sup;
	(VV[47]->s.s_dbind)= Ct;
	if(!(type_of((V23))==t_string)){
	goto T200;}
	(void)((*(LnkLI166))());
	princ_char(10,VV[27]);
	(VV[18]->s.s_dbind)= Cnil;
	goto T198;
	goto T200;
T200:;
	(void)((*(LnkLI167))((V23),(V24)));
	goto T198;
T198:;
	goto T206;
T206:;
	(VV[2]->s.s_dbind)= (VV[1]->s.s_dbind);
	(VV[1]->s.s_dbind)= (VV[0]->s.s_dbind);
	(VV[0]->s.s_dbind)= (VV[3]->s.s_dbind);
	if(((VV[18]->s.s_dbind))==Cnil){
	goto T216;}
	(VV[18]->s.s_dbind)= Cnil;
	goto T214;
	goto T216;
T216:;
	base[23]= (VV[48]->s.s_dbind);
	base[24]= VV[49];
	if(!(type_of((V23))==t_string)){
	goto T223;}
	base[25]= VV[50];
	goto T221;
	goto T223;
T223:;
	base[25]= VV[51];
	goto T221;
T221:;{VOL object V30;
	V30= (VV[20]->s.s_dbind);
	base[27]= VV[21];
	vs_top=(vs_base=base+27)+1;
	Lfind_package();
	vs_top=sup;
	V31= vs_base[0];
	if(!((V30)==(V31))){
	goto T227;}}
	base[26]= VV[52];
	goto T225;
	goto T227;
T227:;
	base[27]= (VV[20]->s.s_dbind);
	vs_top=(vs_base=base+27)+1;
	Lpackage_name();
	vs_top=sup;
	base[26]= vs_base[0];
	goto T225;
T225:;
	base[27]= (VV[36]->s.s_dbind);
	vs_top=(vs_base=base+23)+5;
	Lformat();
	vs_top=sup;
	goto T214;
T214:;
	base[23]= (VV[27]->s.s_dbind);
	vs_top=(vs_base=base+23)+1;
	Lforce_output();
	vs_top=sup;
	frs_push(FRS_CATCH,VV[53]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T207;}
	goto T236;}
	else{
	frs_push(FRS_CATCH,(VV[11]->s.s_dbind));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	frs_pop();
	goto T207;}
	frs_pop();
	goto T236;}
	else{
	(VV[3]->s.s_dbind)= (VFUN_NARGS=3,(*(LnkLI168))((VV[48]->s.s_dbind),Cnil,(VV[24]->s.s_dbind)));
	if(!(((VV[3]->s.s_dbind))==((VV[24]->s.s_dbind)))){
	goto T241;}
	vs_base=vs_top;
	Lby();
	vs_top=sup;
	goto T241;
T241:;
	{object V32;
	object V33;
	V32= Cnil;
	if(!((type_of((VV[3]->s.s_dbind))==t_symbol&&((VV[3]->s.s_dbind))->s.s_hpack==keyword_package))){
	goto T248;}
	(VV[3]->s.s_dbind)= make_cons((VV[3]->s.s_dbind),Cnil);
	goto T248;
T248:;
	if(!(type_of((VV[3]->s.s_dbind))==t_cons)){
	goto T253;}
	{object V34= CMPcar((VV[3]->s.s_dbind));
	if(!((type_of(V34)==t_symbol&&(V34)->s.s_hpack==keyword_package))){
	goto T253;}}
	V32= Ct;
	base[24]= CMPcar((VV[3]->s.s_dbind));
	base[25]= CMPcdr((VV[3]->s.s_dbind));
	base[26]= VV[54];
	symlispcall(VV[169],base+24,3);
	goto T247;
	goto T253;
T253:;
	base[24]= (VV[3]->s.s_dbind);
	base[25]= Cnil;
	base[26]= Cnil;
	base[27]= (VV[42]->s.s_dbind);
	symlispcall(VV[170],base+24,4);
	goto T247;
T247:;
	Llist();
	vs_top=sup;
	V33= vs_base[0];
	if((V32)==Cnil){
	goto T266;}
	if((CMPcar((V33)))==(VV[55])){
	goto T267;}
	goto T266;
	goto T267;
T267:;
	frs_pop();
	frs_pop();
	{object V35 = Cnil;
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
	VMR4(V35)}
	goto T266;
T266:;
	(VV[9]->s.s_dbind)= (VV[8]->s.s_dbind);
	(VV[8]->s.s_dbind)= (VV[7]->s.s_dbind);
	(VV[7]->s.s_dbind)= (V33);
	(VV[6]->s.s_dbind)= (VV[5]->s.s_dbind);
	(VV[5]->s.s_dbind)= (VV[4]->s.s_dbind);
	(VV[4]->s.s_dbind)= CMPcar((VV[7]->s.s_dbind));
	base[24]= (VV[48]->s.s_dbind);
	vs_top=(vs_base=base+24)+1;
	Lfresh_line();
	vs_top=sup;
	{register object V36;
	register object V37;
	V36= (VV[7]->s.s_dbind);
	V37= CMPcar((V36));
	goto T286;
T286:;
	if(!(((V36))==Cnil)){
	goto T287;}
	goto T244;
	goto T287;
T287:;
	base[25]= (V37);
	base[26]= (VV[48]->s.s_dbind);
	(void)simple_symlispcall(VV[155],base+25,2);
	princ_char(10,VV[48]);
	V36= CMPcdr((V36));
	V37= CMPcar((V36));
	goto T286;}}
	goto T244;
T244:;
	frs_pop();
	frs_pop();
	goto T207;}}
	goto T236;
T236:;
	princ_char(10,VV[48]);
	vs_base=vs_top;
	(void) (*Lnk156)();
	vs_top=sup;
	goto T207;
T207:;
	goto T206;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function WARN	*/

static object LI5(object V38,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB5 VMS5 VMV5
	bds_check;
	{object V39;
	object V40;
	va_start(ap,first);
	V39= V38;
	narg= narg - 1;
	V41 = list_vector_new(narg,first,ap);
	V40= V41;
	bds_bind(VV[56],small_fixnum(4));
	bds_bind(VV[57],small_fixnum(4));
	bds_bind(VV[58],VV[59]);
	if(((VV[60]->s.s_dbind))==Cnil){
	goto T303;}
	base[3]= (V39);
	{object V42;
	V42= (V40);
	 vs_top=base+4;
	 while(V42!=Cnil)
	 {vs_push((V42)->c.c_car);V42=(V42)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk171)();
	vs_top=sup;
	{object V43 = vs_base[0];
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR5(V43)}
	goto T303;
T303:;
	base[3]= (VV[27]->s.s_dbind);
	base[4]= VV[61];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;
	bds_bind(VV[62],Ct);
	base[4]= (VV[27]->s.s_dbind);
	base[5]= (V39);
	{object V44;
	V44= (V40);
	 vs_top=base+6;
	 while(V44!=Cnil)
	 {vs_push((V44)->c.c_car);V44=(V44)->c.c_cdr;}
	vs_base=base+4;}
	Lformat();
	vs_top=sup;
	bds_unwind1;
	{object V45 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR5(V45)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function UNIVERSAL-ERROR-HANDLER	*/

static object LI6(object V50,object V49,object V48,object V47,object V46,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	bds_check;
	{object V51;
	object V52;
	register object V53;
	object V54;
	register object V55;
	register object V56;
	va_start(ap,first);
	V51= V50;
	V52= V49;
	V53= V48;
	V54= V47;
	V55= V46;
	narg= narg - 5;
	V57 = list_vector_new(narg,first,ap);
	V56= V57;
	{object V58;
	V58= Cnil;
	bds_bind(VV[63],Cnil);
	bds_bind(VV[56],(VV[64]->s.s_dbind));
	bds_bind(VV[57],(VV[64]->s.s_dbind));
	bds_bind(VV[58],VV[59]);
	princ_char(10,VV[27]);
	if(((V52))==Cnil){
	goto T318;}
	if(((VV[43]->s.s_dbind))==Cnil){
	goto T318;}
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[65];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	bds_bind(VV[62],Ct);
	base[5]= (VV[27]->s.s_dbind);
	base[6]= (V55);
	{object V59;
	V59= (V56);
	 vs_top=base+7;
	 while(V59!=Cnil)
	 {vs_push((V59)->c.c_car);V59=(V59)->c.c_cdr;}
	vs_base=base+5;}
	Lformat();
	vs_top=sup;
	bds_unwind1;
	princ_char(10,VV[27]);
	base[4]= Cnil;
	base[5]= (V55);
	{object V60;
	V60= (V56);
	 vs_top=base+6;
	 while(V60!=Cnil)
	 {vs_push((V60)->c.c_car);V60=(V60)->c.c_cdr;}
	vs_base=base+4;}
	Lformat();
	vs_top=sup;
	V58= vs_base[0];
	if(((V53))==Cnil){
	goto T337;}
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[66];
	base[6]= (V53);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T335;
	goto T337;
T337:;
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[67];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	goto T335;
T335:;
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[68];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	bds_bind(VV[62],Ct);
	base[5]= (VV[27]->s.s_dbind);
	base[6]= VV[69];
	base[7]= (V54);
	base[8]= (V56);
	vs_top=(vs_base=base+5)+4;
	Lformat();
	vs_top=sup;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T315;
	goto T318;
T318:;
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[70];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	bds_bind(VV[62],Ct);
	base[5]= (VV[27]->s.s_dbind);
	base[6]= (V55);
	{object V61;
	V61= (V56);
	 vs_top=base+7;
	 while(V61!=Cnil)
	 {vs_push((V61)->c.c_car);V61=(V61)->c.c_cdr;}
	vs_base=base+5;}
	Lformat();
	vs_top=sup;
	bds_unwind1;
	princ_char(10,VV[27]);
	if(!(((long)length((VV[71]->s.s_dbind)))>(0))){
	goto T359;}
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[72];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	goto T359;
T359:;
	base[4]= Cnil;
	base[5]= (V55);
	{object V62;
	V62= (V56);
	 vs_top=base+6;
	 while(V62!=Cnil)
	 {vs_push((V62)->c.c_car);V62=(V62)->c.c_cdr;}
	vs_base=base+4;}
	Lformat();
	vs_top=sup;
	V58= vs_base[0];
	if(((V53))==Cnil){
	goto T370;}
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[73];
	base[6]= (V53);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T315;
	goto T370;
T370:;
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[74];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T315;
T315:;
	base[0]= (VV[27]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	Lforce_output();
	vs_top=sup;
	(void)((VFUN_NARGS=1,(*(LnkLI172))((V58))));
	if(((V52))!=Cnil){
	goto T381;}
	{frame_ptr fr;
	fr=frs_sch_catch((VV[11]->s.s_dbind));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,(VV[11]->s.s_dbind));
	base[0]= (VV[11]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	unwind(fr,(VV[11]->s.s_dbind));}
	goto T381;
T381:;
	{object V63 = Cnil;
	VMR6(V63)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BREAK	*/

static object LI7(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	bds_check;
	{object V64;
	object V65;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T384;
	else {
	V64= first;}
	--narg; goto T385;
	goto T384;
T384:;
	V64= Cnil;
	goto T385;
T385:;
	V66 = list_vector_new(narg,first,ap);
	V65= V66;
	{object V67;
	V67= Cnil;
	bds_bind(VV[63],Cnil);
	bds_bind(VV[56],small_fixnum(4));
	bds_bind(VV[57],small_fixnum(4));
	bds_bind(VV[58],VV[59]);
	princ_char(10,VV[27]);
	if(((V64))==Cnil){
	goto T391;}
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[75];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	bds_bind(VV[62],Ct);
	base[5]= (VV[27]->s.s_dbind);
	base[6]= (V64);
	{object V68;
	V68= (V65);
	 vs_top=base+7;
	 while(V68!=Cnil)
	 {vs_push((V68)->c.c_car);V68=(V68)->c.c_cdr;}
	vs_base=base+5;}
	Lformat();
	vs_top=sup;
	bds_unwind1;
	princ_char(10,VV[27]);
	base[4]= Cnil;
	base[5]= (V64);
	{object V69;
	V69= (V65);
	 vs_top=base+6;
	 while(V69!=Cnil)
	 {vs_push((V69)->c.c_car);V69=(V69)->c.c_cdr;}
	vs_base=base+4;}
	Lformat();
	vs_top=sup;
	V67= vs_base[0];
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T388;
	goto T391;
T391:;
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[76];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	V67= VV[77];
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T388;
T388:;
	bds_bind(VV[43],Ct);
	V70= (VFUN_NARGS=1,(*(LnkLI172))((V67)));
	bds_unwind1;
	{object V71 = Cnil;
	VMR7(V71)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function TERMINAL-INTERRUPT	*/

static object LI8(V73)

object V73;
{	 VMB8 VMS8 VMV8
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[43],Ct);
	if(((V73))==Cnil){
	goto T411;}
	base[1]= VV[78];
	base[2]= VV[79];
	vs_top=(vs_base=base+1)+2;
	Lcerror();
	vs_top=sup;
	{object V74 = vs_base[0];
	bds_unwind1;
	VMR8(V74)}
	goto T411;
T411:;
	base[1]= VV[80];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	{object V75 = vs_base[0];
	bds_unwind1;
	VMR8(V75)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BREAK-CALL	*/

static object LI9(object V77,object V76,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V78;
	register object V79;
	object V80;
	va_start(ap,first);
	V78= V77;
	V79= V76;
	narg = narg - 2;
	if (narg <= 0) goto T416;
	else {
	V80= first;}
	--narg; goto T417;
	goto T416;
T416:;
	V80= VV[54];
	goto T417;
T417:;
	{register object V81;
	V81= Cnil;
	V81= (VFUN_NARGS=3,(*(LnkLI173))((V78),VV[81],(V80)));
	if((V81)!=Cnil){
	goto T422;}
	{object V82 = Cnil;
	VMR9(V82)}
	goto T422;
T422:;
	{object V83 =((V81))->s.s_plist;
	 object ind= (V80);
	while(V83!=Cnil){
	if(V83->c.c_car==ind){
	V81= (V83->c.c_cdr->c.c_car);
	goto T424;
	}else V83=V83->c.c_cdr->c.c_cdr;}
	V81= Cnil;}
	goto T424;
T424:;
	if(((V81))==Cnil){
	goto T426;}
	V79= make_cons((V81),(V79));
	if(!(type_of((V81))==t_symbol)){
	goto T431;}
	goto T430;
	goto T431;
T431:;
	V79= make_cons(VV[82],(V79));
	goto T430;
T430:;
	base[0]= (V79);
	base[1]= Cnil;
	base[2]= Cnil;
	base[3]= (VV[42]->s.s_dbind);
	vs_top=(vs_base=base+0)+4;
	Levalhook();
	vs_top=sup;
	{object V84 = vs_base[0];
	VMR9(V84)}
	goto T426;
T426:;
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[83];
	base[2]= (V78);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V85 = vs_base[0];
	VMR9(V85)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for BREAK-QUIT	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V86;
	if(vs_base>=vs_top){vs_top=sup;goto T441;}
	V86=(base[0]);
	vs_top=sup;
	goto T442;
	goto T441;
T441:;
	V86= small_fixnum(0);
	goto T442;
T442:;
	{object V87;
	V87= make_fixnum((long)length((VV[36]->s.s_dbind)));
	if(!(number_compare((V86),small_fixnum(0))>=0)){
	goto T445;}
	if(!(number_compare((V86),(V87))<0)){
	goto T445;}
	{object V88;
	base[2]= (V87);
	base[3]= (V86);
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+2)+3;
	Lminus();
	vs_top=sup;
	V89= vs_base[0];
	V88= nth(fix(V89),(VV[35]->s.s_dbind));
	{frame_ptr fr;
	base[2]= CMPcdr((V88));
	fr=frs_sch_catch(base[2]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,base[2]);
	base[3]= CMPcdr((V88));
	vs_top=(vs_base=base+3)+1;
	unwind(fr,base[2]);}}
	goto T445;
T445:;
	vs_base=vs_top;
	(void) (*Lnk156)();
	return;}
	}
}
/*	function definition for BREAK-PREVIOUS	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{register object V90;
	if(vs_base>=vs_top){vs_top=sup;goto T457;}
	V90=(base[0]);
	vs_top=sup;
	goto T458;
	goto T457;
T457:;
	V90= small_fixnum(1);
	goto T458;
T458:;
	{register object V91;
	V91= one_minus((VV[39]->s.s_dbind));
	goto T462;
T462:;
	if(number_compare((V91),(VV[37]->s.s_dbind))<0){
	goto T464;}
	if(!(number_compare((V90),small_fixnum(0))<=0)){
	goto T463;}
	goto T464;
T464:;
	(void)((*(LnkLI174))());
	vs_base=vs_top;
	(void) (*Lnk156)();
	return;
	goto T463;
T463:;
	if(((*(LnkLI175))((V91)))==Cnil){
	goto T470;}
	(VV[39]->s.s_dbind)= (V91);
	V90= one_minus((V90));
	goto T470;
T470:;
	V91= one_minus((V91));
	goto T462;}
	}
}
/*	local entry for function SET-CURRENT	*/

static object LI12()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{register object V92;
	V92= (VV[39]->s.s_dbind);
	goto T480;
T480:;
	if(((*(LnkLI175))((V92)))!=Cnil){
	goto T482;}
	if(!(number_compare((V92),(VV[37]->s.s_dbind))<=0)){
	goto T481;}
	goto T482;
T482:;
	(VV[39]->s.s_dbind)= (V92);
	(void)((*(LnkLI174))());
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[84];
	base[3]= (VV[39]->s.s_dbind);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk176)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= CMPcdr((VV[36]->s.s_dbind));
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V93 = vs_base[0];
	VMR12(V93)}
	goto T481;
T481:;
	V92= one_minus((V92));
	goto T480;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for BREAK-NEXT	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{register object V94;
	if(vs_base>=vs_top){vs_top=sup;goto T498;}
	V94=(base[0]);
	vs_top=sup;
	goto T499;
	goto T498;
T498:;
	V94= small_fixnum(1);
	goto T499;
T499:;
	{register object V95;
	V95= (VV[39]->s.s_dbind);
	goto T502;
T502:;
	if(number_compare((V95),(VV[38]->s.s_dbind))>0){
	goto T504;}
	if(!(number_compare((V94),small_fixnum(0))<0)){
	goto T503;}
	goto T504;
T504:;
	(void)((*(LnkLI174))());
	vs_base=vs_top;
	(void) (*Lnk156)();
	return;
	goto T503;
T503:;
	if(((*(LnkLI175))((V95)))==Cnil){
	goto T510;}
	(VV[39]->s.s_dbind)= (V95);
	V94= one_minus((V94));
	goto T510;
T510:;
	V95= one_plus((V95));
	goto T502;}
	}
}
/*	function definition for BREAK-GO	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V96;
	V96=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V97= (number_compare((V96),(VV[37]->s.s_dbind))>=0?((V96)):(VV[37]->s.s_dbind));
	(VV[39]->s.s_dbind)= (number_compare(V97,(VV[38]->s.s_dbind))<=0?(V97):(VV[38]->s.s_dbind));}
	if(((*(LnkLI175))((VV[39]->s.s_dbind)))==Cnil){
	goto T522;}
	(void)((*(LnkLI174))());
	vs_base=vs_top;
	(void) (*Lnk156)();
	return;
	goto T522;
T522:;
	vs_base=vs_top;
	(void) (*Lnk177)();
	return;
	}
}
/*	function definition for BREAK-MESSAGE	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	(void)(princ((VV[34]->s.s_dbind),(VV[48]->s.s_dbind)));
	princ_char(10,VV[48]);
	vs_base=vs_top=base+0;
	vs_base[0]=Cnil;
	return;
}
/*	local entry for function DESCRIBE-ENVIRONMENT	*/

static object LI16(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB16 VMS16 VMV16
	{object V98;
	register object V99;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T527;
	else {
	V98= first;}
	if (--narg <= 0) goto T528;
	else {
	V99= va_arg(ap,object);}
	--narg; goto T529;
	goto T527;
T527:;
	V98= (VV[42]->s.s_dbind);
	goto T528;
T528:;
	V99= (VV[48]->s.s_dbind);
	goto T529;
T529:;
	if(!(((long)length((V98)))==(3))){
	goto T533;}
	goto T532;
	goto T533;
T533:;
	base[0]= VV[85];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T532;
T532:;
	{register object V100;
	V100= VV[86];
	base[0]= (V99);
	base[1]= (V100);
	base[2]= VV[87];
	{object V101;
	{object V102;
	object V103= CMPcar((VV[42]->s.s_dbind));
	if(V103==Cnil){
	V101= Cnil;
	goto T540;}
	base[3]=V102=MMcons(Cnil,Cnil);
	goto T541;
T541:;
	(V102->c.c_car)= CMPcar((V103->c.c_car));
	if((V103=MMcdr(V103))==Cnil){
	V101= base[3];
	goto T540;}
	V102=MMcdr(V102)=MMcons(Cnil,Cnil);
	goto T541;}
	goto T540;
T540:;
	 vs_top=base+3;
	 while(V101!=Cnil)
	 {vs_push((V101)->c.c_car);V101=(V101)->c.c_cdr;}
	vs_base=base+0;}
	Lformat();
	vs_top=sup;
	base[0]= (V99);
	base[1]= (V100);
	base[2]= VV[88];
	{object V104;
	{object V105;
	object V106= CMPcadr((VV[42]->s.s_dbind));
	if(V106==Cnil){
	V104= Cnil;
	goto T547;}
	base[3]=V105=MMcons(Cnil,Cnil);
	goto T548;
T548:;
	(V105->c.c_car)= CMPcar((V106->c.c_car));
	if((V106=MMcdr(V106))==Cnil){
	V104= base[3];
	goto T547;}
	V105=MMcdr(V105)=MMcons(Cnil,Cnil);
	goto T548;}
	goto T547;
T547:;
	 vs_top=base+3;
	 while(V104!=Cnil)
	 {vs_push((V104)->c.c_car);V104=(V104)->c.c_cdr;}
	vs_base=base+0;}
	Lformat();
	vs_top=sup;
	base[0]= (V99);
	base[1]= (V100);
	base[2]= VV[89];
	{object V107;
	{object V108;
	object V109= CMPcaddr((VV[42]->s.s_dbind));
	if(V109==Cnil){
	V107= Cnil;
	goto T554;}
	base[3]=V108=MMcons(Cnil,Cnil);
	goto T555;
T555:;
	if(!((CMPcadr((V109->c.c_car)))==(VV[90]))){
	goto T558;}
	(V108->c.c_cdr)= make_cons(CMPcar((V109->c.c_car)),Cnil);
	goto T556;
	goto T558;
T558:;
	(V108->c.c_cdr)= Cnil;
	goto T556;
T556:;
	while(MMcdr(V108)!=Cnil)V108=MMcdr(V108);
	if((V109=MMcdr(V109))==Cnil){
	base[3]=base[3]->c.c_cdr;
	V107= base[3];
	goto T554;}
	goto T555;}
	goto T554;
T554:;
	 vs_top=base+3;
	 while(V107!=Cnil)
	 {vs_push((V107)->c.c_car);V107=(V107)->c.c_cdr;}
	vs_base=base+0;}
	Lformat();
	vs_top=sup;
	base[0]= (V99);
	base[1]= (V100);
	base[2]= VV[91];
	{object V111;
	{object V112;
	object V113= CMPcaddr((VV[42]->s.s_dbind));
	if(V113==Cnil){
	V111= Cnil;
	goto T563;}
	base[3]=V112=MMcons(Cnil,Cnil);
	goto T564;
T564:;
	if(!((CMPcadr((V113->c.c_car)))==(VV[92]))){
	goto T567;}
	(V112->c.c_cdr)= make_cons(CMPcar((V113->c.c_car)),Cnil);
	goto T565;
	goto T567;
T567:;
	(V112->c.c_cdr)= Cnil;
	goto T565;
T565:;
	while(MMcdr(V112)!=Cnil)V112=MMcdr(V112);
	if((V113=MMcdr(V113))==Cnil){
	base[3]=base[3]->c.c_cdr;
	V111= base[3];
	goto T563;}
	goto T564;}
	goto T563;
T563:;
	 vs_top=base+3;
	 while(V111!=Cnil)
	 {vs_push((V111)->c.c_car);V111=(V111)->c.c_cdr;}
	vs_base=base+0;}
	Lformat();
	vs_top=sup;
	{object V115 = vs_base[0];
	VMR16(V115)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for BREAK-VS	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{register object V116;
	object V117;
	if(vs_base>=vs_top){vs_top=sup;goto T569;}
	V116=(base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T570;}
	V117=(base[1]);
	vs_top=sup;
	goto T571;
	goto T569;
T569:;
	base[2]= (VV[37]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk178)();
	vs_top=sup;
	V116= vs_base[0];
	goto T570;
T570:;
	base[2]= (VV[38]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk178)();
	vs_top=sup;
	V117= vs_base[0];
	goto T571;
T571:;
	base[2]= (VV[37]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk178)();
	vs_top=sup;
	V118= vs_base[0];
	V116= (number_compare((V116),V118)>=0?((V116)):V118);
	base[2]= one_plus((VV[38]->s.s_dbind));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk178)();
	vs_top=sup;
	V119= vs_base[0];
	V120= one_minus(V119);
	V117= (number_compare((V117),/* INLINE-ARGS */V120)<=0?((V117)):/* INLINE-ARGS */V120);
	{register object V121;
	V121= (VV[37]->s.s_dbind);
	goto T585;
T585:;
	if(number_compare((V121),(VV[38]->s.s_dbind))>=0){
	goto T587;}
	base[2]= (V121);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk178)();
	vs_top=sup;
	V122= vs_base[0];
	if(!(number_compare(V122,(V116))>=0)){
	goto T586;}
	goto T587;
T587:;
	{register object V123;
	V123= (V116);
	goto T594;
T594:;
	if(!(number_compare((V123),(V117))>0)){
	goto T595;}
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	return;
	goto T595;
T595:;
	goto T601;
T601:;
	base[2]= (V121);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk178)();
	vs_top=sup;
	V124= vs_base[0];
	if(!(number_compare(V124,(V123))>0)){
	goto T602;}
	goto T599;
	goto T602;
T602:;
	if(((*(LnkLI175))((V121)))==Cnil){
	goto T608;}
	(void)((*(LnkLI179))((V121)));
	goto T608;
T608:;
	V121= number_plus((V121),small_fixnum(1));
	goto T601;
	goto T599;
T599:;
	base[2]= (VV[48]->s.s_dbind);
	base[3]= VV[93];
	base[4]= (V123);
	base[6]= (V123);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk180)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+2)+4;
	Lformat();
	vs_top=sup;
	V123= one_plus((V123));
	goto T594;}
	goto T586;
T586:;
	V121= one_plus((V121));
	goto T585;}
	}
}
/*	function definition for BREAK-LOCAL	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{object V125;
	if(vs_base>=vs_top){vs_top=sup;goto T628;}
	V125=(base[0]);
	vs_top=sup;
	goto T629;
	goto T628;
T628:;
	V125= small_fixnum(0);
	goto T629;
T629:;
	{object V126;
	base[2]= (VV[39]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk178)();
	vs_top=sup;
	V127= vs_base[0];
	V126= number_plus(V127,(V125));
	base[2]= (V126);
	base[3]= (V126);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk181)();
	return;}
	}
}
/*	function definition for BREAK-BDS	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{register object V128;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V128=(base[0]);
	vs_top=sup;
	{register object V129;
	V129= (VV[40]->s.s_dbind);
	{register object V130;
	register object V131;
	base[1]= one_minus((VV[40]->s.s_dbind));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk182)();
	vs_top=sup;
	V132= vs_base[0];
	V130= one_plus(V132);
	base[1]= one_plus((VV[41]->s.s_dbind));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk182)();
	vs_top=sup;
	V131= vs_base[0];
	goto T643;
T643:;
	if(!(number_compare((V130),(V131))>0)){
	goto T644;}
	vs_base=vs_top=base+1;
	vs_base[0]=Cnil;
	return;
	goto T644;
T644:;
	if(((V128))==Cnil){
	goto T649;}
	base[1]= (V130);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk183)();
	vs_top=sup;
	V134= vs_base[0];
	{register object x= V134,V133= (V128);
	while(V133!=Cnil)
	if(eql(x,V133->c.c_car)){
	goto T652;
	}else V133=V133->c.c_cdr;
	goto T648;}
	goto T652;
T652:;
	goto T649;
T649:;
	goto T657;
T657:;
	if(number_compare((V129),(VV[41]->s.s_dbind))>0){
	goto T659;}
	base[1]= (V129);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk182)();
	vs_top=sup;
	V135= vs_base[0];
	if(!(number_compare(V135,(V130))>0)){
	goto T658;}
	goto T659;
T659:;
	goto T655;
	goto T658;
T658:;
	(void)((*(LnkLI184))((V129)));
	V129= number_plus((V129),small_fixnum(1));
	goto T657;
	goto T655;
T655:;
	base[1]= (VV[48]->s.s_dbind);
	base[2]= VV[94];
	base[3]= (V130);
	base[5]= (V130);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk183)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[6]= (V130);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk185)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+1)+5;
	Lformat();
	vs_top=sup;
	goto T648;
T648:;
	V130= one_plus((V130));
	goto T643;}}
	}
}
/*	function definition for SIMPLE-BACKTRACE	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	princ_str("Backtrace: ",VV[48]);
	{register object V136;
	register object V137;
	V136= (VV[37]->s.s_dbind);
	V137= Cnil;
	goto T685;
T685:;
	if(!(number_compare((V136),(VV[38]->s.s_dbind))>0)){
	goto T686;}
	princ_char(10,VV[48]);
	vs_base=vs_top=base+0;
	vs_base[0]=Cnil;
	return;
	goto T686;
T686:;
	if(((*(LnkLI175))((V136)))==Cnil){
	goto T691;}
	if(((V137))==Cnil){
	goto T694;}
	princ_str(" > ",VV[48]);
	goto T694;
T694:;
	base[1]= (V136);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk176)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= VV[95];
	base[2]= (VV[48]->s.s_dbind);
	base[3]= VV[96];
	base[4]= Ct;
	base[5]= VV[97];
	if(!(number_compare((V136),(VV[39]->s.s_dbind))==0)){
	goto T706;}
	base[6]= VV[59];
	goto T704;
	goto T706;
T706:;
	base[6]= VV[98];
	goto T704;
T704:;
	vs_top=(vs_base=base+0)+7;
	Lwrite();
	vs_top=sup;
	goto T691;
T691:;
	V136= one_plus((V136));
	V137= Ct;
	goto T685;}
}
/*	function definition for IHS-BACKTRACE	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{object V138;
	register object V139;
	if(vs_base>=vs_top){vs_top=sup;goto T713;}
	V138=(base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T714;}
	V139=(base[1]);
	vs_top=sup;
	goto T715;
	goto T713;
T713:;
	V138= (VV[37]->s.s_dbind);
	goto T714;
T714:;
	V139= (VV[38]->s.s_dbind);
	goto T715;
T715:;
	V138= (number_compare((V138),(VV[37]->s.s_dbind))>=0?((V138)):(VV[37]->s.s_dbind));
	V139= (number_compare((V139),(VV[38]->s.s_dbind))<=0?((V139)):(VV[38]->s.s_dbind));
	{register object V140;
	register object V141;
	V140= (V138);{object V142;
	base[3]= (VV[40]->s.s_dbind);
	base[4]= (V138);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk161)();
	vs_top=sup;
	V142= vs_base[0];
	if(V142==Cnil)goto T724;
	V141= V142;
	goto T723;
	goto T724;
T724:;}
	V141= one_plus((VV[41]->s.s_dbind));
	goto T723;
T723:;
	goto T729;
T729:;
	if(!(number_compare((V140),(V139))>0)){
	goto T730;}
	vs_base=vs_top=base+3;
	vs_base[0]=Cnil;
	return;
	goto T730;
T730:;
	if(((*(LnkLI175))((V140)))==Cnil){
	goto T734;}
	(void)((*(LnkLI179))((V140)));
	goto T734;
T734:;
	goto T739;
T739:;
	if(number_compare((V141),(VV[41]->s.s_dbind))>0){
	goto T741;}
	base[3]= (V141);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk186)();
	vs_top=sup;
	V143= vs_base[0];
	if(!(number_compare(V143,(V140))>0)){
	goto T740;}
	goto T741;
T741:;
	goto T737;
	goto T740;
T740:;
	(void)((*(LnkLI184))((V141)));
	V141= number_plus((V141),small_fixnum(1));
	goto T739;
	goto T737;
T737:;
	V140= one_plus((V140));
	goto T729;}
	}
}
/*	local entry for function PRINT-IHS	*/

static object LI22(V145)

register object V145;
{	 VMB22 VMS22 VMV22
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[56],small_fixnum(2));
	bds_bind(VV[57],small_fixnum(4));
	base[2]= Ct;
	base[3]= VV[99];
	base[4]= (number_compare((V145),(VV[39]->s.s_dbind))==0?Ct:Cnil);
	base[5]= (V145);
	{register object V146;
	base[7]= (V145);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk187)();
	vs_top=sup;
	V146= vs_base[0];
	if(type_of((V146))==t_symbol){
	goto T763;}
	base[7]= (V146);
	vs_top=(vs_base=base+7)+1;
	Lcompiled_function_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T764;}
	goto T763;
T763:;
	base[6]= (V146);
	goto T760;
	goto T764;
T764:;
	if(!(type_of((V146))==t_cons)){
	goto T770;}
	{object V147= CMPcar((V146));
	if((V147!= VV[100]))goto T772;
	base[6]= (V146);
	goto T760;
	goto T772;
T772:;
	if((V147!= VV[188])
	&& (V147!= VV[189]))goto T773;
	base[6]= CMPcdr((V146));
	goto T760;
	goto T773;
T773:;
	if((V147!= VV[117]))goto T774;
	base[6]= make_cons(VV[100],CMPcddddr((V146)));
	goto T760;
	goto T774;
T774:;
	if((V147!= VV[190]))goto T775;
	base[6]= CMPcddddr((V146));
	goto T760;
	goto T775;
T775:;
	if(!(type_of(CMPcar((V146)))==t_symbol)){
	goto T777;}
	base[7]= CMPcar((V146));
	vs_top=(vs_base=base+7)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T776;}
	base[7]= CMPcar((V146));
	vs_top=(vs_base=base+7)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T777;}
	goto T776;
T776:;
	base[6]= CMPcar((V146));
	goto T760;
	goto T777;
T777:;
	base[6]= VV[101];
	goto T760;}
	goto T770;
T770:;
	(void)(print((V146),Cnil));
	base[6]= VV[102];}
	goto T760;
T760:;
	base[8]= (V145);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk178)();
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+2)+6;
	Lformat();
	vs_top=sup;
	{object V148 = vs_base[0];
	bds_unwind1;
	bds_unwind1;
	VMR22(V148)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PRINT-FRS	*/

static object LI23(V150)

register object V150;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[103];
	base[2]= (V150);
	base[3]= (*(LnkLI191))((V150));
	base[5]= (V150);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk186)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[6]= (V150);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk192)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[7]= (V150);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk182)();
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+0)+7;
	Lformat();
	vs_top=sup;
	{object V151 = vs_base[0];
	VMR23(V151)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FRS-KIND	*/

static object LI24(V153)

register object V153;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{register object V154;
	V154= Cnil;
	base[0]= (V153);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk193)();
	vs_top=sup;
	V156= vs_base[0];
	{object V155= V156;
	if((V155!= VV[194]))goto T801;
	base[1]= (V153);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk195)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk196)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T803;}{object V157;
	base[1]= (V153);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk195)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[3]= (V153);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk192)();
	vs_top=sup;
	V158= vs_base[0];
	base[2]= number_plus(V158,small_fixnum(2));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk180)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= VV[104];
	base[3]= (VV[197]->s.s_gfdef);
	base[4]= VV[105];
	base[5]= (VV[198]->s.s_gfdef);
	vs_top=(vs_base=base+0)+6;
	Lmember();
	vs_top=sup;
	V154= vs_base[0];
	if(((V154))!=Cnil){
	goto T809;}
	V157= Cnil;
	goto T808;
	goto T809;
T809:;
	if(!((CMPcadar((V154)))==(VV[90]))){
	goto T823;}
	V157= list(3,VV[90],CMPcaar((V154)),VV[6]);
	goto T808;
	goto T823;
T823:;
	base[1]= (V153);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk195)();
	vs_top=sup;
	V162= vs_base[0];
	V163= (VV[198]->s.s_gfdef);
	V164= (VV[197]->s.s_gfdef);
	V165= (VFUN_NARGS=6,(*(LnkLI199))(V162,(V154),VV[107],V163,VV[104],V164));
	{object V160;
	object V161= /* INLINE-ARGS */V165;
	if(V161==Cnil){
	V159= Cnil;
	goto T825;}
	base[0]=V160=MMcons(Cnil,Cnil);
	goto T826;
T826:;
	(V160->c.c_car)= CMPcar((V161->c.c_car));
	if((V161=MMcdr(V161))==Cnil){
	V159= base[0];
	goto T825;}
	V160=MMcdr(V160)=MMcons(Cnil,Cnil);
	goto T826;}
	goto T825;
T825:;
	V166= reverse(V159);
	V167= append(/* INLINE-ARGS */V166,VV[108]);
	V157= make_cons(VV[106],/* INLINE-ARGS */V167);
	goto T808;
T808:;
	if(V157==Cnil)goto T807;
	{object V168 = V157;
	VMR24(V168)}
	goto T807;
T807:;}
	base[0]= (V153);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk195)();
	vs_top=sup;
	V169= vs_base[0];
	{object V170 = list(2,VV[109],V169);
	VMR24(V170)}
	goto T803;
T803:;
	base[0]= (V153);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk195)();
	vs_top=sup;
	V171= vs_base[0];
	{object V172 = list(3,VV[110],list(2,VV[111],V171),VV[6]);
	VMR24(V172)}
	goto T801;
T801:;
	if((V155!= VV[200]))goto T836;
	{object V173 = VV[112];
	VMR24(V173)}
	goto T836;
T836:;
	base[0]= (V153);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk195)();
	vs_top=sup;
	V174= vs_base[0];
	{object V175 = list(2,VV[113],V174);
	VMR24(V175)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for BREAK-CURRENT	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[36]->s.s_dbind))==Cnil){
	goto T841;}
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[114];
	base[3]= (VV[39]->s.s_dbind);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk176)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T839;
	goto T841;
T841:;
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[115];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	goto T839;
T839:;
	vs_base=vs_top=base+0;
	vs_base[0]=Cnil;
	return;
}
/*	local entry for function IHS-VISIBLE	*/

static object LI26(V177)

object V177;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V178;
	base[1]= (V177);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk176)();
	vs_top=sup;
	V178= vs_base[0];
	if((V178)==Cnil){
	{object V179 = Cnil;
	VMR26(V179)}}
	{register object x= (V178),V181= (VV[116]->s.s_dbind);
	while(V181!=Cnil)
	if(eql(x,V181->c.c_car)){
	V180= V181;
	goto T851;
	}else V181=V181->c.c_cdr;
	V180= Cnil;}
	goto T851;
T851:;
	{object V182 = ((V180)==Cnil?Ct:Cnil);
	VMR26(V182)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for IHS-FNAME	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	{object V183;
	V183=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V184;
	base[1]= (V183);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk187)();
	vs_top=sup;
	V184= vs_base[0];
	if(!(type_of((V184))==t_symbol)){
	goto T855;}
	base[1]= (V184);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T855;
T855:;
	if(!(type_of((V184))==t_cons)){
	goto T858;}
	{object V185= CMPcar((V184));
	if((V185!= VV[100]))goto T860;
	base[1]= VV[100];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T860;
T860:;
	if((V185!= VV[188])
	&& (V185!= VV[189]))goto T861;
	base[1]= CMPcadr((V184));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T861;
T861:;
	if((V185!= VV[190]))goto T862;
	base[1]= CMPcar(CMPcddddr((V184)));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T862;
T862:;
	if((V185!= VV[117]))goto T863;
	base[1]= VV[117];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T863;
T863:;
	if(!(type_of(CMPcar((V184)))==t_symbol)){
	goto T865;}
	base[1]= CMPcar((V184));
	vs_top=(vs_base=base+1)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T864;}
	base[1]= CMPcar((V184));
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T865;}
	goto T864;
T864:;
	base[1]= CMPcar((V184));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T865;
T865:;
	base[1]= VV[102];
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T858;
T858:;
	base[1]= (V184);
	vs_top=(vs_base=base+1)+1;
	Lcompiled_function_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T874;}
	base[1]= (V184);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk201)();
	return;
	goto T874;
T874:;
	base[1]= VV[102];
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local entry for function IHS-NOT-INTERPRETED-ENV	*/

static object LI28(V187)

object V187;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{object V188;
	base[0]= (V187);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk187)();
	vs_top=sup;
	V188= vs_base[0];
	if(!(type_of((V188))==t_cons)){
	goto T881;}
	if(!(number_compare((V187),small_fixnum(3))>0)){
	goto T881;}
	{object V189 = Cnil;
	VMR28(V189)}
	goto T881;
T881:;
	{object V190 = Ct;
	VMR28(V190)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SET-ENV	*/

static object LI29()

{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	if(((*(LnkLI202))((VV[39]->s.s_dbind)))==Cnil){
	goto T887;}
	(VV[42]->s.s_dbind)= Cnil;
	goto T885;
	goto T887;
T887:;
	{object V191;
	base[0]= (VV[39]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk178)();
	vs_top=sup;
	V191= vs_base[0];
	base[0]= (V191);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk180)();
	vs_top=sup;
	V192= vs_base[0];
	base[0]= one_plus((V191));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk180)();
	vs_top=sup;
	V193= vs_base[0];
	base[0]= number_plus((V191),small_fixnum(2));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk180)();
	vs_top=sup;
	V194= vs_base[0];
	(VV[42]->s.s_dbind)= list(3,V192,V193,V194);}
	goto T885;
T885:;
	{object V195 = (VV[42]->s.s_dbind);
	VMR29(V195)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LIST-DELQ	*/

static object LI30(V198,V199)

object V198;register object V199;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	if(((V199))!=Cnil){
	goto T898;}
	{object V200 = Cnil;
	VMR30(V200)}
	goto T898;
T898:;
	if(!(((V198))==(CMPcar((V199))))){
	goto T901;}
	{object V201 = CMPcdr((V199));
	VMR30(V201)}
	goto T901;
T901:;
	V202= (*(LnkLI203))((V198),CMPcdr((V199)));
	((V199))->c.c_cdr = /* INLINE-ARGS */V202;
	{object V203 = (V199);
	VMR30(V203)}
	return Cnil;
}
/*	local entry for function SUPER-GO	*/

static object LI31(V206,V207)

register object V206;register object V207;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{object V208;
	V208= Cnil;
	if(!(number_compare((V206),(VV[40]->s.s_dbind))>=0)){
	goto T904;}
	if(!(number_compare((V206),(VV[41]->s.s_dbind))<=0)){
	goto T904;}
	base[1]= (V206);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk195)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk196)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T904;}
	base[1]= (V206);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk195)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[3]= (V206);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk192)();
	vs_top=sup;
	V209= vs_base[0];
	base[2]= number_plus(V209,small_fixnum(2));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk180)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= VV[104];
	base[3]= (VV[197]->s.s_gfdef);
	base[4]= VV[105];
	base[5]= (VV[198]->s.s_gfdef);
	vs_top=(vs_base=base+0)+6;
	Lmember();
	vs_top=sup;
	V208= vs_base[0];
	if(((V208))==Cnil){
	goto T914;}
	if(!((CMPcadar((V208)))==(VV[92]))){
	goto T904;}
	base[1]= (V206);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk195)();
	vs_top=sup;
	V214= vs_base[0];
	V215= (VV[198]->s.s_gfdef);
	V216= (VV[197]->s.s_gfdef);
	V217= (VFUN_NARGS=6,(*(LnkLI199))(V214,(V208),VV[107],V215,VV[104],V216));
	{object V212;
	object V213= /* INLINE-ARGS */V217;
	if(V213==Cnil){
	V211= Cnil;
	goto T931;}
	base[0]=V212=MMcons(Cnil,Cnil);
	goto T932;
T932:;
	(V212->c.c_car)= CMPcar((V213->c.c_car));
	if((V213=MMcdr(V213))==Cnil){
	V211= base[0];
	goto T931;}
	V212=MMcdr(V212)=MMcons(Cnil,Cnil);
	goto T932;}
	goto T931;
T931:;
	{register object x= (V207),V210= V211;
	while(V210!=Cnil)
	if(eql(x,V210->c.c_car)){
	goto T930;
	}else V210=V210->c.c_cdr;
	goto T904;}
	goto T930;
T930:;
	base[1]= (V206);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk195)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V207);
	base[2]= Ct;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk204)();
	vs_top=sup;
	goto T904;
	goto T914;
T914:;
	base[1]= (V206);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk195)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V207);
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk204)();
	vs_top=sup;
	goto T904;
T904:;
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[118];
	base[2]= (V206);
	base[3]= (V207);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V218 = vs_base[0];
	VMR31(V218)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BREAK-BACKWARD-SEARCH-STACK	*/

static object LI32(V220)

object V220;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	{register object V221;
	V221= Cnil;
	V221= coerce_to_string((V220));
	{register object V222;
	register object V223;
	V222= one_minus((VV[39]->s.s_dbind));
	base[2]= (V222);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk176)();
	vs_top=sup;
	V223= vs_base[0];
	goto T957;
T957:;
	if(!(number_compare((V222),(VV[37]->s.s_dbind))<0)){
	goto T958;}
	base[2]= (VV[48]->s.s_dbind);
	base[3]= VV[119];
	base[4]= (V221);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	{object V224 = vs_base[0];
	VMR32(V224)}
	goto T958;
T958:;
	if(((*(LnkLI175))((V222)))==Cnil){
	goto T965;}
	V225= symbol_name((V223));
	V226= (VV[206]->s.s_gfdef);
	if(((VFUN_NARGS=4,(*(LnkLI205))((V221),/* INLINE-ARGS */V225,VV[105],V226)))==Cnil){
	goto T965;}
	base[2]= (V222);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk207)();
	vs_top=sup;
	{object V227 = Cnil;
	VMR32(V227)}
	goto T965;
T965:;
	V222= one_minus((V222));
	base[2]= (V222);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk176)();
	vs_top=sup;
	V223= vs_base[0];
	goto T957;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BREAK-FORWARD-SEARCH-STACK	*/

static object LI33(V229)

object V229;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{register object V230;
	V230= Cnil;
	V230= coerce_to_string((V229));
	{register object V231;
	register object V232;
	V231= one_plus((VV[39]->s.s_dbind));
	base[2]= (V231);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk176)();
	vs_top=sup;
	V232= vs_base[0];
	goto T986;
T986:;
	if(!(number_compare((V231),(VV[38]->s.s_dbind))>0)){
	goto T987;}
	base[2]= (VV[48]->s.s_dbind);
	base[3]= VV[120];
	base[4]= (V230);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	{object V233 = vs_base[0];
	VMR33(V233)}
	goto T987;
T987:;
	if(((*(LnkLI175))((V231)))==Cnil){
	goto T994;}
	V234= symbol_name((V232));
	V235= (VV[206]->s.s_gfdef);
	if(((VFUN_NARGS=4,(*(LnkLI205))((V230),/* INLINE-ARGS */V234,VV[105],V235)))==Cnil){
	goto T994;}
	base[2]= (V231);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk207)();
	vs_top=sup;
	{object V236 = Cnil;
	VMR33(V236)}
	goto T994;
T994:;
	V231= one_plus((V231));
	base[2]= (V231);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk176)();
	vs_top=sup;
	V232= vs_base[0];
	goto T986;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BREAK-HELP	*/

static object LI34()

{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	{object V237;
	object V238;
	V237= VV[121];
	V238= CMPcar((V237));
	goto T1012;
T1012:;
	if(!(((V237))==Cnil)){
	goto T1013;}
	goto T1008;
	goto T1013;
T1013:;
	base[1]= (VV[48]->s.s_dbind);
	base[2]= (V238);
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	V237= CMPcdr((V237));
	V238= CMPcar((V237));
	goto T1012;}
	goto T1008;
T1008:;
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[122];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	{register object V239;
	register object V240;
	register object V241;
	{object V242;
	base[0]= VV[123];
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V242= vs_base[0];
	base[0]= (V242);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1032;}
	base[0]= coerce_to_string((V242));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V242= vs_base[0];
	if(((V242))!=Cnil){
	goto T1032;}
	base[0]= VV[124];
	base[1]= VV[125];
	base[3]= VV[123];
	vs_top=(vs_base=base+3)+1;
	Lfind_package();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk208)();
	vs_top=sup;
	goto T1032;
T1032:;
	V239= (V242);}
	V240= Cnil;
	V241= Cnil;
	{object V243;
	register object V244;
	base[2]= (V239);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V245= vs_base[0];
	V243= make_cons((V239),V245);
	V244= CMPcar((V243));
	goto T1049;
T1049:;
	if(!(((V243))==Cnil)){
	goto T1050;}
	V240= Cnil;
	goto T1028;
	goto T1050;
T1050:;
	{long V246;
	long V247;
	base[2]= (V244);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk209)();
	if(vs_base>=vs_top){vs_top=sup;goto T1059;}
	V246= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1060;}
	V247= fix(vs_base[0]);
	vs_top=sup;
	goto T1061;
	goto T1059;
T1059:;
	V246= fix(Cnil);
	goto T1060;
T1060:;
	V247= fix(Cnil);
	goto T1061;
T1061:;
	if(((V239))==((V244))){
	goto T1062;}
	V247= 0;
	goto T1062;
T1062:;
	{object V248;
	register object V249;
	V250 = make_fixnum(V247);
	V251 = make_fixnum(V246);
	V248= number_plus(V250,V251);
	V249= small_fixnum(0);
	goto T1069;
T1069:;
	if(!(number_compare((V249),(V248))>=0)){
	goto T1070;}
	goto T1056;
	goto T1070;
T1070:;
	V252 = make_fixnum(V247);
	if(!(number_compare((V249),V252)<0)){
	goto T1079;}
	base[3]= (V244);
	base[4]= (V249);
	vs_top=(vs_base=base+3)+2;
	siLpackage_internal();
	vs_top=sup;
	V241= vs_base[0];
	goto T1077;
	goto T1079;
T1079:;
	base[3]= (V244);
	V253 = make_fixnum(V247);
	base[4]= number_minus((V249),V253);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V241= vs_base[0];
	goto T1077;
T1077:;
	goto T1075;
T1075:;
	if(((V241))!=Cnil){
	goto T1085;}
	goto T1076;
	goto T1085;
T1085:;
	V240= CMPcar((V241));
	if(((V244))==((V239))){
	goto T1091;}
	base[4]= symbol_name((V240));
	base[5]= (V239);
	vs_top=(vs_base=base+4)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V254= vs_base[0];
	if(!((VV[126])==(CMPcar(V254)))){
	goto T1090;}
	goto T1091;
T1091:;
	{object V255 =((V240))->s.s_plist;
	 object ind= VV[54];
	while(V255!=Cnil){
	if(V255->c.c_car==ind){
	if(((V255->c.c_cdr->c.c_car))==Cnil){
	goto T1100;}
	goto T1102;
	}else V255=V255->c.c_cdr->c.c_cdr;}
	goto T1100;}
	goto T1102;
T1102:;
	base[3]= (VV[48]->s.s_dbind);
	base[4]= VV[127];
	base[5]= (V240);
	{object V256 =((V240))->s.s_plist;
	 object ind= VV[54];
	while(V256!=Cnil){
	if(V256->c.c_car==ind){
	base[6]= (V256->c.c_cdr->c.c_car);
	goto T1106;
	}else V256=V256->c.c_cdr->c.c_cdr;}
	base[6]= Cnil;}
	goto T1106;
T1106:;
	vs_top=(vs_base=base+3)+4;
	Lformat();
	vs_top=sup;
	goto T1100;
T1100:;
	goto T1090;
T1090:;
	V241= CMPcdr((V241));
	goto T1075;
	goto T1076;
T1076:;
	goto T1073;
	goto T1073;
T1073:;
	V249= one_plus((V249));
	goto T1069;}}
	goto T1056;
T1056:;
	V243= CMPcdr((V243));
	V244= CMPcar((V243));
	goto T1049;}}
	goto T1028;
T1028:;
	vs_base=vs_top=base+0;
	vs_base[0]=Cnil;
	vs_top=sup;
	{object V257 = vs_base[0];
	VMR34(V257)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COERCE-SLASH-TERMINATED	*/

static object LI35(V259)

register object V259;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	if(!(type_of((V259))==t_string)){
	goto T1118;}
	goto T1117;
	goto T1118;
T1118:;
	base[0]= VV[128];
	base[1]= (V259);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T1117;
T1117:;
	{long V260;
	V260= (long)((V259))->v.v_fillp;
	if(!((V260)>(0))){
	goto T1124;}
	if((((V259))->ust.ust_self[(long)(V260)-(1)])==(47)){
	goto T1122;}
	goto T1124;
T1124:;
	base[0]= Cnil;
	base[1]= VV[130];
	base[2]= (V259);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V259= vs_base[0];}
	goto T1122;
T1122:;
	{object V261 = (V259);
	VMR35(V261)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIX-LOAD-PATH	*/

static object LI36(V263)

object V263;
{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	if(equal((V263),(VV[131]->s.s_dbind))){
	goto T1132;}
	{register object V264;
	V264= (V263);
	goto T1137;
T1137:;
	if(!(type_of((V264))!=t_cons)){
	goto T1138;}
	goto T1135;
	goto T1138;
T1138:;
	{register object V266;
	V266= (*(LnkLI210))(CMPcar((V264)));
	(V264)->c.c_car = (V266);}
	V264= CMPcdr((V264));
	goto T1137;}
	goto T1135;
T1135:;
	{register object V267;
	V267= (V263);
	goto T1149;
T1149:;
	if(!(type_of((V267))!=t_cons)){
	goto T1150;}
	goto T1132;
	goto T1150;
T1150:;
	{register object V268;
	V268= (V267);
	goto T1156;
T1156:;
	if(!(type_of(CMPcdr((V268)))!=t_cons)){
	goto T1157;}
	goto T1154;
	goto T1157;
T1157:;
	if(!(equal(CMPcadr((V268)),CMPcar((V267))))){
	goto T1161;}
	{register object V269;
	register object V270;
	V269= (V268);
	V270= CMPcddr((V268));
	((V269))->c.c_cdr = (V270);}
	goto T1161;
T1161:;
	V268= CMPcdr((V268));
	goto T1156;}
	goto T1154;
T1154:;
	V267= CMPcdr((V267));
	goto T1149;}
	goto T1132;
T1132:;
	(VV[131]->s.s_dbind)= (V263);
	{object V271 = (VV[131]->s.s_dbind);
	VMR36(V271)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FILE-SEARCH	*/

static object LI37(object V272,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB37 VMS37 VMV37
	bds_check;
	{register object V273;
	object V274;
	object V275;
	object V276;
	va_start(ap,first);
	V273= V272;
	narg = narg - 1;
	if (narg <= 0) goto T1174;
	else {
	V274= first;}
	if (--narg <= 0) goto T1175;
	else {
	V275= va_arg(ap,object);}
	if (--narg <= 0) goto T1176;
	else {
	V276= va_arg(ap,object);}
	--narg; goto T1177;
	goto T1174;
T1174:;
	V274= (VV[132]->s.s_dbind);
	goto T1175;
T1175:;
	V275= (VV[133]->s.s_dbind);
	goto T1176;
T1176:;
	V276= Ct;
	goto T1177;
T1177:;
	{register object V277;
	V277= Cnil;
	(void)((*(LnkLI211))((V274)));
	{register object V278;
	register object V279;
	V278= (V274);
	V279= CMPcar((V278));
	goto T1187;
T1187:;
	if(!(((V278))==Cnil)){
	goto T1188;}
	goto T1183;
	goto T1188;
T1188:;
	{register object V280;
	register object V281;
	V280= (V275);
	V281= CMPcar((V280));
	goto T1196;
T1196:;
	if(!(((V280))==Cnil)){
	goto T1197;}
	goto T1192;
	goto T1197;
T1197:;
	base[2]= (V279);
	base[3]= (V273);
	base[4]= (V281);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk158)();
	vs_top=sup;
	V277= vs_base[0];
	if(!((file_exists((V277))))){
	goto T1201;}
	{object V282 = (V277);
	VMR37(V282)}
	goto T1201;
T1201:;
	V280= CMPcdr((V280));
	V281= CMPcar((V280));
	goto T1196;}
	goto T1192;
T1192:;
	V278= CMPcdr((V278));
	V279= CMPcar((V278));
	goto T1187;}
	goto T1183;
T1183:;
	if(((V276))==Cnil){
	goto T1219;}
	bds_bind(VV[134],Cnil);
	base[1]= VV[135];
	base[2]= VV[136];
	base[3]= (V274);
	base[4]= (V273);
	base[5]= (V275);
	vs_top=(vs_base=base+1)+5;
	Lcerror();
	vs_top=sup;
	{object V283 = (VV[134]->s.s_dbind);
	bds_unwind1;
	VMR37(V283)}
	goto T1219;
T1219:;
	{object V284 = Cnil;
	VMR37(V284)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for ALOAD	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	{object V285;
	V285=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (VFUN_NARGS=3,(*(LnkLI212))((V285),(VV[132]->s.s_dbind),(VV[133]->s.s_dbind)));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk151)();
	return;
	}
}
/*	local entry for function AUTOLOAD	*/

static object LI40(V288,V289)

object V288;object V289;
{	 VMB39 VMS39 VMV39
	bds_check;
	goto TTL;
TTL:;
	base[0]=MMcons((V289),Cnil);
	base[1]=MMcons((V288),base[0]);
	bds_bind(VV[137],Ct);
	base[3]= (base[1]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1228;}
	{object V290 = Ct;
	bds_unwind1;
	VMR39(V290)}
	goto T1228;
T1228:;
	base[3]= (base[1]->c.c_car);
	base[4]= 
	make_cclosure_new(LC47,Cnil,base[1],Cdata);
	vs_top=(vs_base=base+3)+2;
	siLfset();
	vs_top=sup;
	{object V291 = vs_base[0];
	bds_unwind1;
	VMR39(V291)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function AUTOLOAD-MACRO	*/

static object LI42(V294,V295)

object V294;object V295;
{	 VMB40 VMS40 VMV40
	bds_check;
	goto TTL;
TTL:;
	base[0]=MMcons((V295),Cnil);
	base[1]=MMcons((V294),base[0]);
	bds_bind(VV[137],Ct);
	base[3]= (base[1]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1233;}
	{object V296 = Ct;
	bds_unwind1;
	VMR40(V296)}
	goto T1233;
T1233:;
	{object V297;
	object V298;
	V297= (base[1]->c.c_car);
	V298= 
	make_cclosure_new(LC48,Cnil,base[1],Cdata);
	base[4]= (V297);
	base[5]= make_cons(VV[138],(V298));
	vs_top=(vs_base=base+4)+2;
	siLfset();
	vs_top=sup;
	{object V299 = (V298);
	bds_unwind1;
	VMR40(V299)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-COMMAND-ARG	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_check;
	{register object V300;
	register object V301;
	V300=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1241;}
	V301=(base[1]);
	vs_top=sup;
	goto T1242;
	goto T1241;
T1241:;
	V301= Cnil;
	goto T1242;
T1242:;
	{register object V302;
	V302= (VV[16]->s.s_dbind);
	goto T1246;
T1246:;
	V302= CMPcdr((V302));
	if((V302)!=Cnil){
	goto T1250;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1250;
T1250:;
	{register object V303;
	V303= CMPcar((V302));
	if(!((((V303))->ust.ust_self[0])==(((V300))->ust.ust_self[0]))){
	goto T1247;}
	if(!((((V303))->ust.ust_self[1])==(((V300))->ust.ust_self[1]))){
	goto T1247;}
	if(!(equal((V303),(V300)))){
	goto T1247;}
	{register object V304;
	V304= (V301);
	if(((V304))==Cnil){
	goto T1259;}
	base[2]= (V304);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1259;
T1259:;
	if((CMPcadr((V302)))==Cnil){
	goto T1262;}
	base[2]= CMPcadr((V302));
	base[3]= CMPcdr((V302));
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1262;
T1262:;
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;}}
	goto T1247;
T1247:;
	goto T1246;}
	}
}
/*	local entry for function SET-DIR	*/

static object LI44(V307,V308)

object V307;object V308;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	{object V309;{object V310;
	base[0]= (V308);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk213)();
	vs_top=sup;
	V310= vs_base[0];
	if(V310==Cnil)goto T1268;
	V309= V310;
	goto T1267;
	goto T1268;
T1268:;}
	if(((V307))->s.s_dbind!=OBJNULL){
	goto T1271;}
	V309= Cnil;
	goto T1267;
	goto T1271;
T1271:;
	base[0]= (V307);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_value();
	vs_top=sup;
	V309= vs_base[0];
	goto T1267;
T1267:;
	if(((V309))==Cnil){
	goto T1275;}
	base[0]= (V307);
	base[1]= (*(LnkLI210))((V309));
	vs_top=(vs_base=base+0)+2;
	Lset();
	vs_top=sup;
	{object V311 = vs_base[0];
	VMR42(V311)}
	goto T1275;
T1275:;
	{object V312 = Cnil;
	VMR42(V312)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SET-UP-TOP-LEVEL	*/

static object LI45()

{	 VMB43 VMS43 VMV43
	bds_check;
	goto TTL;
TTL:;
	{register long V313;
	register object V314;
	vs_base=vs_top;
	(void) (*Lnk214)();
	vs_top=sup;
	V313= fix(vs_base[0]);
	V314= Cnil;
	goto T1283;
T1283:;
	V313= (long)(V313)-(1);
	if(!((V313)<(0))){
	goto T1288;}
	goto T1281;
	goto T1288;
T1288:;
	base[0]= make_fixnum(V313);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk215)();
	vs_top=sup;
	V315= vs_base[0];
	V314= make_cons(V315,(V314));
	goto T1283;
	goto T1281;
T1281:;
	(VV[16]->s.s_dbind)= (V314);
	V314= (VV[139]->s.s_dbind);
	{object V316;
	base[0]= VV[140];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk216)();
	vs_top=sup;
	V316= vs_base[0];{object V317;
	V317= (*(LnkLI217))(VV[139],VV[141]);
	if(V317==Cnil)goto T1301;
	goto T1300;
	goto T1301;
T1301:;}
	if(((V316))==Cnil){
	goto T1300;}
	(VV[139]->s.s_dbind)= (*(LnkLI210))((V316));
	goto T1300;
T1300:;
	if(((VV[132]->s.s_dbind))==Cnil){
	goto T1307;}
	if(equal((V314),(VV[139]->s.s_dbind))){
	goto T1306;}
	goto T1307;
T1307:;
	base[0]= (VV[139]->s.s_dbind);
	base[1]= VV[142];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk158)();
	vs_top=sup;
	V318= vs_base[0];
	(VV[132]->s.s_dbind)= make_cons(V318,(VV[132]->s.s_dbind));
	base[0]= (VV[139]->s.s_dbind);
	base[1]= VV[143];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk158)();
	vs_top=sup;
	V319= vs_base[0];
	(VV[132]->s.s_dbind)= make_cons(V319,(VV[132]->s.s_dbind));
	goto T1306;
T1306:;
	if((VV[144])->s.s_dbind!=OBJNULL){
	goto T1320;}
	base[2]= VV[145];
	base[3]= Cnil;
	base[4]= VV[146];
	base[5]= Cnil;
	base[6]= VV[147];
	base[8]= small_fixnum(0);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk215)();
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+2)+6;
	Lmake_pathname();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	Ltruename();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lnamestring();
	vs_top=sup;
	(VV[144]->s.s_dbind)= vs_base[0];
	goto T1320;
T1320:;
	(void)((*(LnkLI217))(VV[144],VV[148]));
	base[0]= VV[149];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk213)();
	if(vs_base<vs_top){
	V314= vs_base[0];
	vs_base++;
	}else{
	V314= Cnil;}
	if(vs_base<vs_top){
	V314= vs_base[0];
	}else{
	V314= Cnil;}
	vs_top=sup;
	if(((V314))==Cnil){
	goto T1335;}
	bds_bind(VV[15],Cnil);
	(void)((*(LnkLI152))((VV[16]->s.s_dbind)));
	(VV[16]->s.s_dbind)= (V314);
	{object V320 = (*(LnkLI218))(CMPcar((VV[16]->s.s_dbind)));
	bds_unwind1;
	VMR43(V320)}
	goto T1335;
T1335:;
	{object V321 = Cnil;
	VMR43(V321)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DO-F	*/

static object LI46(V323)

VOL object V323;
{	 VMB44 VMS44 VMV44
	bds_check;
	goto TTL;
TTL:;
	base[0]= VV[150];
	base[1]= Cnil;
	bds_bind(VV[43],Cnil);
	frs_push(FRS_CATCH,(VV[11]->s.s_dbind));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	goto T1342;}
	else{
	base[4]= (V323);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk219)();
	vs_top=sup;
	base[3]= vs_base[0];
	frs_push(FRS_PROTECT,Cnil);
	{object tag=Cnil;frame_ptr fr=NULL;object p;bool active;
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	base[5]= base[3];
	vs_top=(vs_base=base+5)+1;
	Lread_line();
	vs_top=sup;
	goto T1351;
T1351:;
	base[5]= base[3];
	base[6]= Cnil;
	base[7]= base[0];
	vs_top=(vs_base=base+5)+3;
	Lread();
	vs_top=sup;
	base[1]= vs_base[0];
	if(!((base[0])==(base[1]))){
	goto T1358;}
	base[5]= Cnil;
	vs_top=(vs_base=base+5)+1;
	goto T1347;
	goto T1358;
T1358:;
	base[5]= base[1];
	vs_top=(vs_base=base+5)+1;
	Leval();
	vs_top=sup;
	goto T1351;
	goto T1347;
T1347:;
	active=FALSE;}
	base[4]=Cnil;
	while(vs_base<vs_top)
	{base[4]=MMcons(vs_top[-1],base[4]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if((base[3])==Cnil){
	goto T1363;}
	base[5]= base[3];
	vs_top=(vs_base=base+5)+1;
	Lclose();
	vs_top=sup;
	goto T1363;
T1363:;
	vs_base=vs_top=base+5;
	for(p= base[4];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	vs_top=sup;}}
	vs_base=vs_top;
	Lby();
	vs_top=sup;
	frs_pop();}
	goto T1342;
T1342:;
	base[3]= small_fixnum(1);
	vs_top=(vs_base=base+3)+1;
	Lby();
	vs_top=sup;
	{object V324 = vs_base[0];
	bds_unwind1;
	VMR44(V324)}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC48(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	{object V325;
	object V326;
	V325=(base[0]);
	V326=(base[1]);
	vs_top=sup;
	base[2]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk220)();
	vs_top=sup;
	base[2]= (V325);
	base[3]= (V326);
	vs_top=(vs_base=base+2)+2;
	super_funcall_no_event((base0[0]->c.c_car));
	return;
	}
}
/*	local function CLOSURE	*/

static void LC47(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	{object V327;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V327=(base[0]);
	vs_top=sup;
	base[1]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk220)();
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	{object V328;
	V328= (V327);
	 vs_top=base+2;
	 while(V328!=Cnil)
	 {vs_push((V328)->c.c_car);V328=(V328)->c.c_cdr;}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	return;
	}
}
static void LnkT220(){ call_or_link(VV[220],(void **)(void *)&Lnk220);} /* ALOAD */
static void LnkT219(){ call_or_link(VV[219],(void **)(void *)&Lnk219);} /* OPEN */
static object  LnkTLI218(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[218],(void **)(void *)&LnkLI218,1,first,ap);va_end(ap);return V1;} /* DO-F */
static object  LnkTLI217(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[217],(void **)(void *)&LnkLI217,2,first,ap);va_end(ap);return V1;} /* SET-DIR */
static void LnkT216(){ call_or_link(VV[216],(void **)(void *)&Lnk216);} /* GETENV */
static void LnkT215(){ call_or_link(VV[215],(void **)(void *)&Lnk215);} /* ARGV */
static void LnkT214(){ call_or_link(VV[214],(void **)(void *)&Lnk214);} /* ARGC */
static void LnkT213(){ call_or_link(VV[213],(void **)(void *)&Lnk213);} /* GET-COMMAND-ARG */
static object  LnkTLI212(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[212],(void **)(void *)&LnkLI212,first,ap);va_end(ap);return V1;} /* FILE-SEARCH */
static object  LnkTLI211(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[211],(void **)(void *)&LnkLI211,1,first,ap);va_end(ap);return V1;} /* FIX-LOAD-PATH */
static object  LnkTLI210(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[210],(void **)(void *)&LnkLI210,1,first,ap);va_end(ap);return V1;} /* COERCE-SLASH-TERMINATED */
static void LnkT209(){ call_or_link(VV[209],(void **)(void *)&Lnk209);} /* PACKAGE-SIZE */
static void LnkT208(){ call_or_link(VV[208],(void **)(void *)&Lnk208);} /* SPECIFIC-ERROR */
static void LnkT207(){ call_or_link(VV[207],(void **)(void *)&Lnk207);} /* BREAK-GO */
static object  LnkTLI205(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[205],(void **)(void *)&LnkLI205,first,ap);va_end(ap);return V1;} /* SEARCH */
static void LnkT204(){ call_or_link(VV[204],(void **)(void *)&Lnk204);} /* INTERNAL-SUPER-GO */
static object  LnkTLI203(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[203],(void **)(void *)&LnkLI203,2,first,ap);va_end(ap);return V1;} /* LIST-DELQ */
static object  LnkTLI202(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[202],(void **)(void *)&LnkLI202,1,first,ap);va_end(ap);return V1;} /* IHS-NOT-INTERPRETED-ENV */
static void LnkT201(){ call_or_link(VV[201],(void **)(void *)&Lnk201);} /* COMPILED-FUNCTION-NAME */
static object  LnkTLI199(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[199],(void **)(void *)&LnkLI199,first,ap);va_end(ap);return V1;} /* REMOVE */
static void LnkT196(){ call_or_link(VV[196],(void **)(void *)&Lnk196);} /* SPICEP */
static void LnkT195(){ call_or_link(VV[195],(void **)(void *)&Lnk195);} /* FRS-TAG */
static void LnkT193(){ call_or_link(VV[193],(void **)(void *)&Lnk193);} /* FRS-CLASS */
static void LnkT192(){ call_or_link(VV[192],(void **)(void *)&Lnk192);} /* FRS-VS */
static object  LnkTLI191(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[191],(void **)(void *)&LnkLI191,1,first,ap);va_end(ap);return V1;} /* FRS-KIND */
static void LnkT187(){ call_or_link(VV[187],(void **)(void *)&Lnk187);} /* IHS-FUN */
static void LnkT186(){ call_or_link(VV[186],(void **)(void *)&Lnk186);} /* FRS-IHS */
static void LnkT185(){ call_or_link(VV[185],(void **)(void *)&Lnk185);} /* BDS-VAL */
static object  LnkTLI184(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[184],(void **)(void *)&LnkLI184,1,first,ap);va_end(ap);return V1;} /* PRINT-FRS */
static void LnkT183(){ call_or_link(VV[183],(void **)(void *)&Lnk183);} /* BDS-VAR */
static void LnkT182(){ call_or_link(VV[182],(void **)(void *)&Lnk182);} /* FRS-BDS */
static void LnkT181(){ call_or_link(VV[181],(void **)(void *)&Lnk181);} /* BREAK-VS */
static void LnkT180(){ call_or_link(VV[180],(void **)(void *)&Lnk180);} /* VS */
static object  LnkTLI179(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[179],(void **)(void *)&LnkLI179,1,first,ap);va_end(ap);return V1;} /* PRINT-IHS */
static void LnkT178(){ call_or_link(VV[178],(void **)(void *)&Lnk178);} /* IHS-VS */
static void LnkT177(){ call_or_link(VV[177],(void **)(void *)&Lnk177);} /* BREAK-PREVIOUS */
static void LnkT176(){ call_or_link(VV[176],(void **)(void *)&Lnk176);} /* IHS-FNAME */
static object  LnkTLI175(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[175],(void **)(void *)&LnkLI175,1,first,ap);va_end(ap);return V1;} /* IHS-VISIBLE */
static object  LnkTLI174(){return call_proc0(VV[174],(void **)(void *)&LnkLI174);} /* SET-ENV */
static object  LnkTLI173(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[173],(void **)(void *)&LnkLI173,first,ap);va_end(ap);return V1;} /* COMPLETE-PROP */
static object  LnkTLI172(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[172],(void **)(void *)&LnkLI172,first,ap);va_end(ap);return V1;} /* BREAK-LEVEL */
static void LnkT171(){ call_or_link(VV[171],(void **)(void *)&Lnk171);} /* BREAK */
static object  LnkTLI168(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[168],(void **)(void *)&LnkLI168,first,ap);va_end(ap);return V1;} /* DBL-READ */
static object  LnkTLI167(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[167],(void **)(void *)&LnkLI167,2,first,ap);va_end(ap);return V1;} /* SET-BACK */
static object  LnkTLI166(){return call_proc0(VV[166],(void **)(void *)&LnkLI166);} /* SET-CURRENT */
static void LnkT165(){ call_or_link(VV[165],(void **)(void *)&Lnk165);} /* CATCH-FATAL */
static void LnkT164(){ call_or_link(VV[164],(void **)(void *)&Lnk164);} /* BREAK-QUIT */
static void LnkT163(){ call_or_link(VV[163],(void **)(void *)&Lnk163);} /* SIMPLE-BACKTRACE */
static void LnkT162(){ call_or_link(VV[162],(void **)(void *)&Lnk162);} /* FRS-TOP */
static void LnkT161(){ call_or_link(VV[161],(void **)(void *)&Lnk161);} /* SCH-FRS-BASE */
static void LnkT160(){ call_or_link(VV[160],(void **)(void *)&Lnk160);} /* IHS-TOP */
static void LnkT159(){ call_or_link(VV[159],(void **)(void *)&Lnk159);} /* MAKE-STRING-INPUT-STREAM */
static void LnkT158(){ call_or_link(VV[158],(void **)(void *)&Lnk158);} /* STRING-CONCATENATE */
static void LnkT157(){ call_or_link(VV[157],(void **)(void *)&Lnk157);} /* READ-FROM-STRING */
static void LnkT156(){ call_or_link(VV[156],(void **)(void *)&Lnk156);} /* BREAK-CURRENT */
static object  LnkTLI152(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[152],(void **)(void *)&LnkLI152,1,first,ap);va_end(ap);return V1;} /* PROCESS-SOME-ARGS */
static void LnkT151(){ call_or_link(VV[151],(void **)(void *)&Lnk151);} /* LOAD */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

