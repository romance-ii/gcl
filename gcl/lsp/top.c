
#include "cmpinclude.h"
#include "top.h"
void init_top(){do_init(VV);}
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
	(void) (*Lnk149)();
	vs_top=sup;
	goto T6;
T6:;
	bds_bind(VV[15],Cnil);
	base[11]= (VV[16]->s.s_dbind);
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk150)();
	vs_top=sup;
	bds_unwind1;
	base[10]= (VV[17]->s.s_dbind);
	vs_top=(vs_base=base+10)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T15;}
	frs_pop();
	goto T3;
	goto T15;
T15:;
	V1= (
	(type_of((VV[17]->s.s_dbind)) == t_sfun ?(*(((VV[17]->s.s_dbind))->sfn.sfn_self)):
	(fcall.fun=((VV[17]->s.s_dbind)),fcall.argd=0,fcalln))());
	frs_pop();}
	goto T3;
T3:;
	goto T19;
T19:;
	(VV[2]->s.s_dbind)= (VV[1]->s.s_dbind);
	(VV[1]->s.s_dbind)= (VV[0]->s.s_dbind);
	(VV[0]->s.s_dbind)= (VV[3]->s.s_dbind);
	if(((VV[18]->s.s_dbind))==Cnil){
	goto T29;}
	(VV[18]->s.s_dbind)= Cnil;
	goto T27;
	goto T29;
T29:;
	base[10]= Ct;
	base[11]= VV[19];{VOL object V2;
	V2= (VV[20]->s.s_dbind);
	base[13]= VV[21];
	vs_top=(vs_base=base+13)+1;
	Lfind_package();
	vs_top=sup;
	V3= vs_base[0];
	if(!((V2)==(V3))){
	goto T36;}}
	base[12]= VV[22];
	goto T34;
	goto T36;
T36:;
	base[13]= (VV[20]->s.s_dbind);
	vs_top=(vs_base=base+13)+1;
	Lpackage_name();
	vs_top=sup;
	base[12]= vs_base[0];
	goto T34;
T34:;
	vs_top=(vs_base=base+10)+3;
	Lformat();
	vs_top=sup;
	goto T27;
T27:;
	vs_base=vs_top;
	siLreset_stack_limits();
	vs_top=sup;
	if(((VV[12]->s.s_dbind))==Cnil){
	goto T42;}
	{object V4 = Cnil;
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
	VMR1(V4)}
	goto T42;
T42:;
	frs_push(FRS_CATCH,(VV[11]->s.s_dbind));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T20;}
	goto T46;}
	else{
	base[10]= (VV[23]->s.s_dbind);
	base[11]= Cnil;
	base[12]= (VV[24]->s.s_dbind);
	(VV[3]->s.s_dbind)= simple_symlispcall(VV[151],base+10,3);
	if(!(((VV[3]->s.s_dbind))==((VV[24]->s.s_dbind)))){
	goto T53;}
	vs_base=vs_top;
	Lby();
	vs_top=sup;
	goto T53;
T53:;
	{object V5;
	base[10]= (VV[3]->s.s_dbind);
	symlispcall(VV[152],base+10,1);
	Llist();
	vs_top=sup;
	V5= vs_base[0];
	(VV[9]->s.s_dbind)= (VV[8]->s.s_dbind);
	(VV[8]->s.s_dbind)= (VV[7]->s.s_dbind);
	(VV[7]->s.s_dbind)= (V5);
	(VV[6]->s.s_dbind)= (VV[5]->s.s_dbind);
	(VV[5]->s.s_dbind)= (VV[4]->s.s_dbind);
	(VV[4]->s.s_dbind)= CMPcar((VV[7]->s.s_dbind));
	vs_base=vs_top;
	Lfresh_line();
	vs_top=sup;
	{register object V6;
	register object V7;
	V6= (VV[7]->s.s_dbind);
	V7= CMPcar((V6));
	goto T76;
T76:;
	if(!(((V6))==Cnil)){
	goto T77;}
	goto T72;
	goto T77;
T77:;
	base[11]= (V7);
	(void)simple_symlispcall(VV[153],base+11,1);
	princ_char(10,Cnil);
	V6= CMPcdr((V6));
	V7= CMPcar((V6));
	goto T76;}
	goto T72;
T72:;
	frs_pop();
	goto T20;}}
	goto T46;
T46:;
	(VV[25]->s.s_dbind)= Cnil;
	(VV[26]->s.s_dbind)= Cnil;
	princ_char(10,VV[27]);
	vs_base=vs_top;
	(void) (*Lnk154)();
	vs_top=sup;
	goto T20;
T20:;
	goto T19;
	base[0]=base[0];
	return Cnil;
}
/*	function definition for PROCESS-SOME-ARGS	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{register object V8;
	V8=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	goto T96;
T96:;
	{register object V9;
	register object V10;
	V9= CMPcar((V8));
	V10= Cnil;
	if(!(equal((V9),VV[28]))){
	goto T102;}
	base[1]= CMPcadr((V8));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk149)();
	vs_top=sup;
	goto T100;
	goto T102;
T102:;
	if(!(equal((V9),VV[29]))){
	goto T106;}
	base[2]= CMPcadr((V8));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk155)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	Leval();
	vs_top=sup;
	goto T100;
	goto T106;
T106:;
	V10= Ct;
	goto T100;
T100:;
	if((V10)!=Cnil){
	goto T111;}
	V8= CMPcdr((V8));
	goto T111;
T111:;
	V8= CMPcdr((V8));}
	if((V8)!=Cnil){
	goto T97;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T97;
T97:;
	goto T96;
	}
}
/*	function definition for DBL-READ	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{register object V11;
	register object V12;
	register object V13;
	if(vs_base>=vs_top){vs_top=sup;goto T115;}
	V11=(base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T116;}
	V12=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T117;}
	V13=(base[2]);
	vs_top=sup;
	goto T118;
	goto T115;
T115:;
	V11= (VV[23]->s.s_dbind);
	goto T116;
T116:;
	V12= Ct;
	goto T117;
T117:;
	V13= Cnil;
	goto T118;
T118:;
	{object V14;
	register object V15;
	V14= Cnil;
	V15= Cnil;
	goto T126;
T126:;
	base[3]= (V11);
	base[4]= (V12);
	base[5]= (V13);
	vs_top=(vs_base=base+3)+3;
	Lread_char();
	vs_top=sup;
	V15= vs_base[0];
	if(!(eql((V15),VV[30]))){
	goto T134;}
	goto T126;
	goto T134;
T134:;
	if(!(((V15))==((V13)))){
	goto T132;}
	base[3]= (V13);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T132;
T132:;
	base[3]= (V15);
	base[4]= (V11);
	vs_top=(vs_base=base+3)+2;
	Lunread_char();
	vs_top=sup;
	goto T124;
	goto T124;
T124:;
	if(!(eql(VV[31],(V15)))){
	goto T142;}
	base[3]= VV[32];
	base[5]= (V11);
	base[6]= (V12);
	base[7]= (V13);
	vs_top=(vs_base=base+5)+3;
	Lread_line();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[33];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk156)();
	vs_top=sup;
	V14= vs_base[0];
	base[4]= (V14);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk157)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V12);
	base[5]= (V13);
	vs_top=(vs_base=base+3)+3;
	Lread();
	return;
	goto T142;
T142:;
	base[3]= (V11);
	base[4]= (V12);
	base[5]= (V13);
	vs_top=(vs_base=base+3)+3;
	Lread();
	return;}
	}
}
/*	function definition for BREAK-LEVEL	*/

static void L4()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM4; VC4
	vs_check;
	bds_check;
	{VOL object V16;
	VOL object V17;
	V16=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T159;}
	V17=(base[1]);
	vs_top=sup;
	goto T160;
	goto T159;
T159:;
	V17= Cnil;
	goto T160;
T160:;
	{VOL object V18;
	if(!(type_of((V16))==t_string)){
	goto T164;}
	bds_bind(VV[34],(V16));
	goto T162;
	goto T164;
T164:;
	bds_bind(VV[34],(VV[34]->s.s_dbind));
	goto T162;
T162:;
	V19= make_cons((VV[36]->s.s_dbind),(VV[11]->s.s_dbind));
	bds_bind(VV[35],make_cons(/* INLINE-ARGS */V19,(VV[35]->s.s_dbind)));
	bds_bind(VV[11],make_cons(Cnil,Cnil));
	if(((V16))!=Cnil){
	goto T170;}
	bds_bind(VV[36],(VV[36]->s.s_dbind));
	goto T168;
	goto T170;
T170:;
	bds_bind(VV[36],make_cons(Ct,(VV[36]->s.s_dbind)));
	goto T168;
T168:;
	bds_bind(VV[37],one_plus((VV[38]->s.s_dbind)));
	vs_base=vs_top;
	(void) (*Lnk158)();
	vs_top=sup;
	V20= vs_base[0];
	bds_bind(VV[38],one_minus(V20));
	bds_bind(VV[39],(VV[38]->s.s_dbind));{VOL object V21;
	base[25]= (VV[41]->s.s_dbind);
	base[26]= (VV[37]->s.s_dbind);
	vs_top=(vs_base=base+25)+2;
	(void) (*Lnk159)();
	vs_top=sup;
	V21= vs_base[0];
	if(V21==Cnil)goto T176;
	bds_bind(VV[40],V21);
	goto T175;
	goto T176;
T176:;}
	vs_base=vs_top;
	(void) (*Lnk160)();
	vs_top=sup;
	V22= vs_base[0];
	bds_bind(VV[40],one_plus(V22));
	goto T175;
T175:;
	vs_base=vs_top;
	(void) (*Lnk160)();
	vs_top=sup;
	bds_bind(VV[41],vs_base[0]);
	bds_bind(VV[42],Cnil);
	V18= (VV[43]->s.s_dbind);
	if(!(type_of((V16))==t_string)){
	goto T185;}
	bds_bind(VV[43],Cnil);
	goto T183;
	goto T185;
T185:;
	bds_bind(VV[43],(V18));
	goto T183;
T183:;
	if((VV[45]->s.s_dbind)!=Cnil){
	bds_bind(VV[44],(VV[45]->s.s_dbind));
	goto T187;}
	bds_bind(VV[44],(VV[44]->s.s_dbind));
	goto T187;
T187:;
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
	if(((V18))!=Cnil){
	goto T188;}
	if(!(type_of((V16))==t_string)){
	goto T188;}
	vs_base=vs_top;
	(void) (*Lnk161)();
	vs_top=sup;
	base[25]= make_fixnum((long)length(CMPcdr((VV[36]->s.s_dbind))));
	vs_top=(vs_base=base+25)+1;
	(void) (*Lnk162)();
	vs_top=sup;
	goto T188;
T188:;
	base[25]= small_fixnum(1);
	vs_top=(vs_base=base+25)+1;
	(void) (*Lnk163)();
	vs_top=sup;
	(VV[47]->s.s_dbind)= Ct;
	if(!(type_of((V16))==t_string)){
	goto T201;}
	(void)((*(LnkLI164))());
	princ_char(10,VV[27]);
	(VV[18]->s.s_dbind)= Cnil;
	goto T199;
	goto T201;
T201:;
	base[25]= (V16);
	base[26]= (V17);
	vs_top=(vs_base=base+25)+2;
	(void) (*Lnk165)();
	vs_top=sup;
	goto T199;
T199:;
	goto T209;
T209:;
	(VV[2]->s.s_dbind)= (VV[1]->s.s_dbind);
	(VV[1]->s.s_dbind)= (VV[0]->s.s_dbind);
	(VV[0]->s.s_dbind)= (VV[3]->s.s_dbind);
	if(((VV[18]->s.s_dbind))==Cnil){
	goto T219;}
	(VV[18]->s.s_dbind)= Cnil;
	goto T217;
	goto T219;
T219:;
	base[25]= (VV[48]->s.s_dbind);
	base[26]= VV[49];
	if(!(type_of((V16))==t_string)){
	goto T226;}
	base[27]= VV[50];
	goto T224;
	goto T226;
T226:;
	base[27]= VV[51];
	goto T224;
T224:;{VOL object V23;
	V23= (VV[20]->s.s_dbind);
	base[29]= VV[21];
	vs_top=(vs_base=base+29)+1;
	Lfind_package();
	vs_top=sup;
	V24= vs_base[0];
	if(!((V23)==(V24))){
	goto T230;}}
	base[28]= VV[52];
	goto T228;
	goto T230;
T230:;
	base[29]= (VV[20]->s.s_dbind);
	vs_top=(vs_base=base+29)+1;
	Lpackage_name();
	vs_top=sup;
	base[28]= vs_base[0];
	goto T228;
T228:;
	base[29]= (VV[36]->s.s_dbind);
	vs_top=(vs_base=base+25)+5;
	Lformat();
	vs_top=sup;
	goto T217;
T217:;
	base[25]= (VV[27]->s.s_dbind);
	vs_top=(vs_base=base+25)+1;
	Lforce_output();
	vs_top=sup;
	frs_push(FRS_CATCH,VV[53]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T210;}
	goto T239;}
	else{
	frs_push(FRS_CATCH,(VV[11]->s.s_dbind));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	frs_pop();
	goto T210;}
	frs_pop();
	goto T239;}
	else{
	base[25]= (VV[48]->s.s_dbind);
	base[26]= Cnil;
	base[27]= (VV[24]->s.s_dbind);
	vs_top=(vs_base=base+25)+3;
	(void) (*Lnk166)();
	vs_top=sup;
	(VV[3]->s.s_dbind)= vs_base[0];
	if(!(((VV[3]->s.s_dbind))==((VV[24]->s.s_dbind)))){
	goto T247;}
	vs_base=vs_top;
	Lby();
	vs_top=sup;
	goto T247;
T247:;
	{object V25;
	object V26;
	V25= Cnil;
	if(!((type_of((VV[3]->s.s_dbind))==t_symbol&&((VV[3]->s.s_dbind))->s.s_hpack==keyword_package))){
	goto T254;}
	(VV[3]->s.s_dbind)= make_cons((VV[3]->s.s_dbind),Cnil);
	goto T254;
T254:;
	if(!(type_of((VV[3]->s.s_dbind))==t_cons)){
	goto T259;}
	{object V27= CMPcar((VV[3]->s.s_dbind));
	if(!((type_of(V27)==t_symbol&&(V27)->s.s_hpack==keyword_package))){
	goto T259;}}
	V25= Ct;
	base[26]= CMPcar((VV[3]->s.s_dbind));
	base[27]= CMPcdr((VV[3]->s.s_dbind));
	base[28]= VV[54];
	symlispcall(VV[167],base+26,3);
	goto T253;
	goto T259;
T259:;
	base[26]= (VV[3]->s.s_dbind);
	base[27]= Cnil;
	base[28]= Cnil;
	base[29]= (VV[42]->s.s_dbind);
	symlispcall(VV[168],base+26,4);
	goto T253;
T253:;
	Llist();
	vs_top=sup;
	V26= vs_base[0];
	if((V25)==Cnil){
	goto T272;}
	if((CMPcar((V26)))==(VV[55])){
	goto T273;}
	goto T272;
	goto T273;
T273:;
	frs_pop();
	frs_pop();
	base[26]= Cnil;
	vs_top=(vs_base=base+26)+1;
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
	return;
	goto T272;
T272:;
	(VV[9]->s.s_dbind)= (VV[8]->s.s_dbind);
	(VV[8]->s.s_dbind)= (VV[7]->s.s_dbind);
	(VV[7]->s.s_dbind)= (V26);
	(VV[6]->s.s_dbind)= (VV[5]->s.s_dbind);
	(VV[5]->s.s_dbind)= (VV[4]->s.s_dbind);
	(VV[4]->s.s_dbind)= CMPcar((VV[7]->s.s_dbind));
	base[26]= (VV[48]->s.s_dbind);
	vs_top=(vs_base=base+26)+1;
	Lfresh_line();
	vs_top=sup;
	{register object V28;
	register object V29;
	V28= (VV[7]->s.s_dbind);
	V29= CMPcar((V28));
	goto T292;
T292:;
	if(!(((V28))==Cnil)){
	goto T293;}
	goto T250;
	goto T293;
T293:;
	base[27]= (V29);
	base[28]= (VV[48]->s.s_dbind);
	(void)simple_symlispcall(VV[153],base+27,2);
	princ_char(10,VV[48]);
	V28= CMPcdr((V28));
	V29= CMPcar((V28));
	goto T292;}}
	goto T250;
T250:;
	frs_pop();
	frs_pop();
	goto T210;}}
	goto T239;
T239:;
	princ_char(10,VV[48]);
	vs_base=vs_top;
	(void) (*Lnk154)();
	vs_top=sup;
	goto T210;
T210:;
	goto T209;}
	}
}
/*	local entry for function WARN	*/

static object LI5(object V30,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB5 VMS5 VMV5
	bds_check;
	{object V31;
	object V32;
	va_start(ap,first);
	V31= V30;
	narg= narg - 1;
	V33 = list_vector_new(narg,first,ap);
	V32= V33;
	bds_bind(VV[56],small_fixnum(4));
	bds_bind(VV[57],small_fixnum(4));
	bds_bind(VV[58],VV[59]);
	if(((VV[60]->s.s_dbind))==Cnil){
	goto T309;}
	base[3]= (V31);
	{object V34;
	V34= (V32);
	 vs_top=base+4;
	 while(V34!=Cnil)
	 {vs_push((V34)->c.c_car);V34=(V34)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk169)();
	vs_top=sup;
	{object V35 = vs_base[0];
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR5(V35)}
	goto T309;
T309:;
	base[3]= (VV[27]->s.s_dbind);
	base[4]= VV[61];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;
	bds_bind(VV[62],Ct);
	base[4]= (VV[27]->s.s_dbind);
	base[5]= (V31);
	{object V36;
	V36= (V32);
	 vs_top=base+6;
	 while(V36!=Cnil)
	 {vs_push((V36)->c.c_car);V36=(V36)->c.c_cdr;}
	vs_base=base+4;}
	Lformat();
	vs_top=sup;
	bds_unwind1;
	{object V37 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR5(V37)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function UNIVERSAL-ERROR-HANDLER	*/

static object LI6(object V42,object V41,object V40,object V39,object V38,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	bds_check;
	{object V43;
	object V44;
	register object V45;
	object V46;
	register object V47;
	register object V48;
	va_start(ap,first);
	V43= V42;
	V44= V41;
	V45= V40;
	V46= V39;
	V47= V38;
	narg= narg - 5;
	V49 = list_vector_new(narg,first,ap);
	V48= V49;
	{object V50;
	V50= Cnil;
	bds_bind(VV[63],Cnil);
	bds_bind(VV[56],(VV[64]->s.s_dbind));
	bds_bind(VV[57],(VV[64]->s.s_dbind));
	bds_bind(VV[58],VV[59]);
	princ_char(10,VV[27]);
	if(((V44))==Cnil){
	goto T324;}
	if(((VV[43]->s.s_dbind))==Cnil){
	goto T324;}
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[65];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	bds_bind(VV[62],Ct);
	base[5]= (VV[27]->s.s_dbind);
	base[6]= (V47);
	{object V51;
	V51= (V48);
	 vs_top=base+7;
	 while(V51!=Cnil)
	 {vs_push((V51)->c.c_car);V51=(V51)->c.c_cdr;}
	vs_base=base+5;}
	Lformat();
	vs_top=sup;
	bds_unwind1;
	princ_char(10,VV[27]);
	base[4]= Cnil;
	base[5]= (V47);
	{object V52;
	V52= (V48);
	 vs_top=base+6;
	 while(V52!=Cnil)
	 {vs_push((V52)->c.c_car);V52=(V52)->c.c_cdr;}
	vs_base=base+4;}
	Lformat();
	vs_top=sup;
	V50= vs_base[0];
	if(((V45))==Cnil){
	goto T343;}
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[66];
	base[6]= (V45);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T341;
	goto T343;
T343:;
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[67];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	goto T341;
T341:;
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[68];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	bds_bind(VV[62],Ct);
	base[5]= (VV[27]->s.s_dbind);
	base[6]= VV[69];
	base[7]= (V46);
	base[8]= (V48);
	vs_top=(vs_base=base+5)+4;
	Lformat();
	vs_top=sup;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T321;
	goto T324;
T324:;
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[70];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	bds_bind(VV[62],Ct);
	base[5]= (VV[27]->s.s_dbind);
	base[6]= (V47);
	{object V53;
	V53= (V48);
	 vs_top=base+7;
	 while(V53!=Cnil)
	 {vs_push((V53)->c.c_car);V53=(V53)->c.c_cdr;}
	vs_base=base+5;}
	Lformat();
	vs_top=sup;
	bds_unwind1;
	princ_char(10,VV[27]);
	if(!(((long)length((VV[71]->s.s_dbind)))>(0))){
	goto T365;}
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[72];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	goto T365;
T365:;
	base[4]= Cnil;
	base[5]= (V47);
	{object V54;
	V54= (V48);
	 vs_top=base+6;
	 while(V54!=Cnil)
	 {vs_push((V54)->c.c_car);V54=(V54)->c.c_cdr;}
	vs_base=base+4;}
	Lformat();
	vs_top=sup;
	V50= vs_base[0];
	if(((V45))==Cnil){
	goto T376;}
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[73];
	base[6]= (V45);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T321;
	goto T376;
T376:;
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[74];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T321;
T321:;
	base[0]= (VV[27]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	Lforce_output();
	vs_top=sup;
	base[0]= (V50);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk170)();
	vs_top=sup;
	if(((V44))!=Cnil){
	goto T388;}
	{frame_ptr fr;
	fr=frs_sch_catch((VV[11]->s.s_dbind));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,(VV[11]->s.s_dbind));
	base[0]= (VV[11]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	unwind(fr,(VV[11]->s.s_dbind));}
	goto T388;
T388:;
	{object V55 = Cnil;
	VMR6(V55)}}
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
	{object V56;
	object V57;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T391;
	else {
	V56= first;}
	--narg; goto T392;
	goto T391;
T391:;
	V56= Cnil;
	goto T392;
T392:;
	V58 = list_vector_new(narg,first,ap);
	V57= V58;
	{object V59;
	V59= Cnil;
	bds_bind(VV[63],Cnil);
	bds_bind(VV[56],small_fixnum(4));
	bds_bind(VV[57],small_fixnum(4));
	bds_bind(VV[58],VV[59]);
	princ_char(10,VV[27]);
	if(((V56))==Cnil){
	goto T398;}
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[75];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	bds_bind(VV[62],Ct);
	base[5]= (VV[27]->s.s_dbind);
	base[6]= (V56);
	{object V60;
	V60= (V57);
	 vs_top=base+7;
	 while(V60!=Cnil)
	 {vs_push((V60)->c.c_car);V60=(V60)->c.c_cdr;}
	vs_base=base+5;}
	Lformat();
	vs_top=sup;
	bds_unwind1;
	princ_char(10,VV[27]);
	base[4]= Cnil;
	base[5]= (V56);
	{object V61;
	V61= (V57);
	 vs_top=base+6;
	 while(V61!=Cnil)
	 {vs_push((V61)->c.c_car);V61=(V61)->c.c_cdr;}
	vs_base=base+4;}
	Lformat();
	vs_top=sup;
	V59= vs_base[0];
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T395;
	goto T398;
T398:;
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[76];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	V59= VV[77];
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T395;
T395:;
	bds_bind(VV[43],Ct);
	base[1]= (V59);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk170)();
	vs_top=sup;
	bds_unwind1;
	{object V62 = Cnil;
	VMR7(V62)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function TERMINAL-INTERRUPT	*/

static object LI8(V64)

object V64;
{	 VMB8 VMS8 VMV8
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[43],Ct);
	if(((V64))==Cnil){
	goto T419;}
	base[1]= VV[78];
	base[2]= VV[79];
	vs_top=(vs_base=base+1)+2;
	Lcerror();
	vs_top=sup;
	{object V65 = vs_base[0];
	bds_unwind1;
	VMR8(V65)}
	goto T419;
T419:;
	base[1]= VV[80];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	{object V66 = vs_base[0];
	bds_unwind1;
	VMR8(V66)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for BREAK-CALL	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	{object V67;
	register object V68;
	object V69;
	V67=(base[0]);
	V68=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T424;}
	V69=(base[2]);
	vs_top=sup;
	goto T425;
	goto T424;
T424:;
	V69= VV[54];
	goto T425;
T425:;
	{register object V70;
	V70= Cnil;
	base[3]= (V67);
	base[4]= VV[81];
	base[5]= (V69);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk171)();
	vs_top=sup;
	V70= vs_base[0];
	if((V70)!=Cnil){
	goto T433;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T433;
T433:;
	{object V71 =((V70))->s.s_plist;
	 object ind= (V69);
	while(V71!=Cnil){
	if(V71->c.c_car==ind){
	V70= (V71->c.c_cdr->c.c_car);
	goto T435;
	}else V71=V71->c.c_cdr->c.c_cdr;}
	V70= Cnil;}
	goto T435;
T435:;
	if(((V70))==Cnil){
	goto T437;}
	V68= make_cons((V70),(V68));
	if(!(type_of((V70))==t_symbol)){
	goto T442;}
	goto T441;
	goto T442;
T442:;
	V68= make_cons(VV[82],(V68));
	goto T441;
T441:;
	base[3]= (V68);
	base[4]= Cnil;
	base[5]= Cnil;
	base[6]= (VV[42]->s.s_dbind);
	vs_top=(vs_base=base+3)+4;
	Levalhook();
	return;
	goto T437;
T437:;
	base[3]= (VV[48]->s.s_dbind);
	base[4]= VV[83];
	base[5]= (V67);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	return;}
	}
}
/*	function definition for BREAK-QUIT	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V72;
	if(vs_base>=vs_top){vs_top=sup;goto T452;}
	V72=(base[0]);
	vs_top=sup;
	goto T453;
	goto T452;
T452:;
	V72= small_fixnum(0);
	goto T453;
T453:;
	{object V73;
	V73= make_fixnum((long)length((VV[36]->s.s_dbind)));
	if(!(number_compare((V72),small_fixnum(0))>=0)){
	goto T456;}
	if(!(number_compare((V72),(V73))<0)){
	goto T456;}
	{object V74;
	base[2]= (V73);
	base[3]= (V72);
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+2)+3;
	Lminus();
	vs_top=sup;
	V75= vs_base[0];
	V74= nth(fix(V75),(VV[35]->s.s_dbind));
	{frame_ptr fr;
	base[2]= CMPcdr((V74));
	fr=frs_sch_catch(base[2]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,base[2]);
	base[3]= CMPcdr((V74));
	vs_top=(vs_base=base+3)+1;
	unwind(fr,base[2]);}}
	goto T456;
T456:;
	vs_base=vs_top;
	(void) (*Lnk154)();
	return;}
	}
}
/*	function definition for BREAK-PREVIOUS	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{register object V76;
	if(vs_base>=vs_top){vs_top=sup;goto T468;}
	V76=(base[0]);
	vs_top=sup;
	goto T469;
	goto T468;
T468:;
	V76= small_fixnum(1);
	goto T469;
T469:;
	{register object V77;
	V77= one_minus((VV[39]->s.s_dbind));
	goto T473;
T473:;
	if(number_compare((V77),(VV[37]->s.s_dbind))<0){
	goto T475;}
	if(!(number_compare((V76),small_fixnum(0))<=0)){
	goto T474;}
	goto T475;
T475:;
	(void)((*(LnkLI172))());
	vs_base=vs_top;
	(void) (*Lnk154)();
	return;
	goto T474;
T474:;
	if(((*(LnkLI173))((V77)))==Cnil){
	goto T481;}
	(VV[39]->s.s_dbind)= (V77);
	V76= one_minus((V76));
	goto T481;
T481:;
	V77= one_minus((V77));
	goto T473;}
	}
}
/*	local entry for function SET-CURRENT	*/

static object LI12()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{register object V78;
	V78= (VV[39]->s.s_dbind);
	goto T491;
T491:;
	if(((*(LnkLI173))((V78)))!=Cnil){
	goto T493;}
	if(!(number_compare((V78),(VV[37]->s.s_dbind))<=0)){
	goto T492;}
	goto T493;
T493:;
	(VV[39]->s.s_dbind)= (V78);
	(void)((*(LnkLI172))());
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[84];
	base[3]= (VV[39]->s.s_dbind);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk174)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= CMPcdr((VV[36]->s.s_dbind));
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V79 = vs_base[0];
	VMR12(V79)}
	goto T492;
T492:;
	V78= one_minus((V78));
	goto T491;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for BREAK-NEXT	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{register object V80;
	if(vs_base>=vs_top){vs_top=sup;goto T509;}
	V80=(base[0]);
	vs_top=sup;
	goto T510;
	goto T509;
T509:;
	V80= small_fixnum(1);
	goto T510;
T510:;
	{register object V81;
	V81= (VV[39]->s.s_dbind);
	goto T513;
T513:;
	if(number_compare((V81),(VV[38]->s.s_dbind))>0){
	goto T515;}
	if(!(number_compare((V80),small_fixnum(0))<0)){
	goto T514;}
	goto T515;
T515:;
	(void)((*(LnkLI172))());
	vs_base=vs_top;
	(void) (*Lnk154)();
	return;
	goto T514;
T514:;
	if(((*(LnkLI173))((V81)))==Cnil){
	goto T521;}
	(VV[39]->s.s_dbind)= (V81);
	V80= one_minus((V80));
	goto T521;
T521:;
	V81= one_plus((V81));
	goto T513;}
	}
}
/*	function definition for BREAK-GO	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V82;
	V82=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V83= (number_compare((V82),(VV[37]->s.s_dbind))>=0?((V82)):(VV[37]->s.s_dbind));
	(VV[39]->s.s_dbind)= (number_compare(V83,(VV[38]->s.s_dbind))<=0?(V83):(VV[38]->s.s_dbind));}
	if(((*(LnkLI173))((VV[39]->s.s_dbind)))==Cnil){
	goto T533;}
	(void)((*(LnkLI172))());
	vs_base=vs_top;
	(void) (*Lnk154)();
	return;
	goto T533;
T533:;
	vs_base=vs_top;
	(void) (*Lnk175)();
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
/*	function definition for DESCRIBE-ENVIRONMENT	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V84;
	register object V85;
	if(vs_base>=vs_top){vs_top=sup;goto T538;}
	V84=(base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T539;}
	V85=(base[1]);
	vs_top=sup;
	goto T540;
	goto T538;
T538:;
	V84= (VV[42]->s.s_dbind);
	goto T539;
T539:;
	V85= (VV[48]->s.s_dbind);
	goto T540;
T540:;
	if(!(((long)length((V84)))==(3))){
	goto T544;}
	goto T543;
	goto T544;
T544:;
	base[2]= VV[85];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T543;
T543:;
	{register object V86;
	V86= VV[86];
	base[2]= (V85);
	base[3]= (V86);
	base[4]= VV[87];
	{object V87;
	{object V88;
	object V89= CMPcar((VV[42]->s.s_dbind));
	if(V89==Cnil){
	V87= Cnil;
	goto T551;}
	base[5]=V88=MMcons(Cnil,Cnil);
	goto T552;
T552:;
	(V88->c.c_car)= CMPcar((V89->c.c_car));
	if((V89=MMcdr(V89))==Cnil){
	V87= base[5];
	goto T551;}
	V88=MMcdr(V88)=MMcons(Cnil,Cnil);
	goto T552;}
	goto T551;
T551:;
	 vs_top=base+5;
	 while(V87!=Cnil)
	 {vs_push((V87)->c.c_car);V87=(V87)->c.c_cdr;}
	vs_base=base+2;}
	Lformat();
	vs_top=sup;
	base[2]= (V85);
	base[3]= (V86);
	base[4]= VV[88];
	{object V90;
	{object V91;
	object V92= CMPcadr((VV[42]->s.s_dbind));
	if(V92==Cnil){
	V90= Cnil;
	goto T558;}
	base[5]=V91=MMcons(Cnil,Cnil);
	goto T559;
T559:;
	(V91->c.c_car)= CMPcar((V92->c.c_car));
	if((V92=MMcdr(V92))==Cnil){
	V90= base[5];
	goto T558;}
	V91=MMcdr(V91)=MMcons(Cnil,Cnil);
	goto T559;}
	goto T558;
T558:;
	 vs_top=base+5;
	 while(V90!=Cnil)
	 {vs_push((V90)->c.c_car);V90=(V90)->c.c_cdr;}
	vs_base=base+2;}
	Lformat();
	vs_top=sup;
	base[2]= (V85);
	base[3]= (V86);
	base[4]= VV[89];
	{object V93;
	{object V94;
	object V95= CMPcaddr((VV[42]->s.s_dbind));
	if(V95==Cnil){
	V93= Cnil;
	goto T565;}
	base[5]=V94=MMcons(Cnil,Cnil);
	goto T566;
T566:;
	if(!((CMPcadr((V95->c.c_car)))==(VV[90]))){
	goto T569;}
	(V94->c.c_cdr)= make_cons(CMPcar((V95->c.c_car)),Cnil);
	goto T567;
	goto T569;
T569:;
	(V94->c.c_cdr)= Cnil;
	goto T567;
T567:;
	while(MMcdr(V94)!=Cnil)V94=MMcdr(V94);
	if((V95=MMcdr(V95))==Cnil){
	base[5]=base[5]->c.c_cdr;
	V93= base[5];
	goto T565;}
	goto T566;}
	goto T565;
T565:;
	 vs_top=base+5;
	 while(V93!=Cnil)
	 {vs_push((V93)->c.c_car);V93=(V93)->c.c_cdr;}
	vs_base=base+2;}
	Lformat();
	vs_top=sup;
	base[2]= (V85);
	base[3]= (V86);
	base[4]= VV[91];
	{object V97;
	{object V98;
	object V99= CMPcaddr((VV[42]->s.s_dbind));
	if(V99==Cnil){
	V97= Cnil;
	goto T574;}
	base[5]=V98=MMcons(Cnil,Cnil);
	goto T575;
T575:;
	if(!((CMPcadr((V99->c.c_car)))==(VV[92]))){
	goto T578;}
	(V98->c.c_cdr)= make_cons(CMPcar((V99->c.c_car)),Cnil);
	goto T576;
	goto T578;
T578:;
	(V98->c.c_cdr)= Cnil;
	goto T576;
T576:;
	while(MMcdr(V98)!=Cnil)V98=MMcdr(V98);
	if((V99=MMcdr(V99))==Cnil){
	base[5]=base[5]->c.c_cdr;
	V97= base[5];
	goto T574;}
	goto T575;}
	goto T574;
T574:;
	 vs_top=base+5;
	 while(V97!=Cnil)
	 {vs_push((V97)->c.c_car);V97=(V97)->c.c_cdr;}
	vs_base=base+2;}
	Lformat();
	return;}
	}
}
/*	function definition for BREAK-VS	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{register object V101;
	object V102;
	if(vs_base>=vs_top){vs_top=sup;goto T580;}
	V101=(base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T581;}
	V102=(base[1]);
	vs_top=sup;
	goto T582;
	goto T580;
T580:;
	base[2]= (VV[37]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk176)();
	vs_top=sup;
	V101= vs_base[0];
	goto T581;
T581:;
	base[2]= (VV[38]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk176)();
	vs_top=sup;
	V102= vs_base[0];
	goto T582;
T582:;
	base[2]= (VV[37]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk176)();
	vs_top=sup;
	V103= vs_base[0];
	V101= (number_compare((V101),V103)>=0?((V101)):V103);
	base[2]= one_plus((VV[38]->s.s_dbind));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk176)();
	vs_top=sup;
	V104= vs_base[0];
	V105= one_minus(V104);
	V102= (number_compare((V102),/* INLINE-ARGS */V105)<=0?((V102)):/* INLINE-ARGS */V105);
	{register object V106;
	V106= (VV[37]->s.s_dbind);
	goto T596;
T596:;
	if(number_compare((V106),(VV[38]->s.s_dbind))>=0){
	goto T598;}
	base[2]= (V106);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk176)();
	vs_top=sup;
	V107= vs_base[0];
	if(!(number_compare(V107,(V101))>=0)){
	goto T597;}
	goto T598;
T598:;
	{register object V108;
	V108= (V101);
	goto T605;
T605:;
	if(!(number_compare((V108),(V102))>0)){
	goto T606;}
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	return;
	goto T606;
T606:;
	goto T612;
T612:;
	base[2]= (V106);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk176)();
	vs_top=sup;
	V109= vs_base[0];
	if(!(number_compare(V109,(V108))>0)){
	goto T613;}
	goto T610;
	goto T613;
T613:;
	if(((*(LnkLI173))((V106)))==Cnil){
	goto T619;}
	(void)((*(LnkLI177))((V106)));
	goto T619;
T619:;
	V106= number_plus((V106),small_fixnum(1));
	goto T612;
	goto T610;
T610:;
	base[2]= (VV[48]->s.s_dbind);
	base[3]= VV[93];
	base[4]= (V108);
	base[6]= (V108);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk178)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+2)+4;
	Lformat();
	vs_top=sup;
	V108= one_plus((V108));
	goto T605;}
	goto T597;
T597:;
	V106= one_plus((V106));
	goto T596;}
	}
}
/*	function definition for BREAK-LOCAL	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{object V110;
	if(vs_base>=vs_top){vs_top=sup;goto T639;}
	V110=(base[0]);
	vs_top=sup;
	goto T640;
	goto T639;
T639:;
	V110= small_fixnum(0);
	goto T640;
T640:;
	{object V111;
	base[2]= (VV[39]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk176)();
	vs_top=sup;
	V112= vs_base[0];
	V111= number_plus(V112,(V110));
	base[2]= (V111);
	base[3]= (V111);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk179)();
	return;}
	}
}
/*	function definition for BREAK-BDS	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{register object V113;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V113=(base[0]);
	vs_top=sup;
	{register object V114;
	V114= (VV[40]->s.s_dbind);
	{register object V115;
	register object V116;
	base[1]= one_minus((VV[40]->s.s_dbind));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk180)();
	vs_top=sup;
	V117= vs_base[0];
	V115= one_plus(V117);
	base[1]= one_plus((VV[41]->s.s_dbind));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk180)();
	vs_top=sup;
	V116= vs_base[0];
	goto T654;
T654:;
	if(!(number_compare((V115),(V116))>0)){
	goto T655;}
	vs_base=vs_top=base+1;
	vs_base[0]=Cnil;
	return;
	goto T655;
T655:;
	if(((V113))==Cnil){
	goto T660;}
	base[1]= (V115);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk181)();
	vs_top=sup;
	V119= vs_base[0];
	{register object x= V119,V118= (V113);
	while(V118!=Cnil)
	if(eql(x,V118->c.c_car)){
	goto T663;
	}else V118=V118->c.c_cdr;
	goto T659;}
	goto T663;
T663:;
	goto T660;
T660:;
	goto T668;
T668:;
	if(number_compare((V114),(VV[41]->s.s_dbind))>0){
	goto T670;}
	base[1]= (V114);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk180)();
	vs_top=sup;
	V120= vs_base[0];
	if(!(number_compare(V120,(V115))>0)){
	goto T669;}
	goto T670;
T670:;
	goto T666;
	goto T669;
T669:;
	(void)((*(LnkLI182))((V114)));
	V114= number_plus((V114),small_fixnum(1));
	goto T668;
	goto T666;
T666:;
	base[1]= (VV[48]->s.s_dbind);
	base[2]= VV[94];
	base[3]= (V115);
	base[5]= (V115);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk181)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[6]= (V115);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk183)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+1)+5;
	Lformat();
	vs_top=sup;
	goto T659;
T659:;
	V115= one_plus((V115));
	goto T654;}}
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
	{register object V121;
	register object V122;
	V121= (VV[37]->s.s_dbind);
	V122= Cnil;
	goto T696;
T696:;
	if(!(number_compare((V121),(VV[38]->s.s_dbind))>0)){
	goto T697;}
	princ_char(10,VV[48]);
	vs_base=vs_top=base+0;
	vs_base[0]=Cnil;
	return;
	goto T697;
T697:;
	if(((*(LnkLI173))((V121)))==Cnil){
	goto T702;}
	if(((V122))==Cnil){
	goto T705;}
	princ_str(" > ",VV[48]);
	goto T705;
T705:;
	base[1]= (V121);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk174)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= VV[95];
	base[2]= (VV[48]->s.s_dbind);
	base[3]= VV[96];
	base[4]= Ct;
	base[5]= VV[97];
	if(!(number_compare((V121),(VV[39]->s.s_dbind))==0)){
	goto T717;}
	base[6]= VV[59];
	goto T715;
	goto T717;
T717:;
	base[6]= VV[98];
	goto T715;
T715:;
	vs_top=(vs_base=base+0)+7;
	Lwrite();
	vs_top=sup;
	goto T702;
T702:;
	V121= one_plus((V121));
	V122= Ct;
	goto T696;}
}
/*	function definition for IHS-BACKTRACE	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{object V123;
	register object V124;
	if(vs_base>=vs_top){vs_top=sup;goto T724;}
	V123=(base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T725;}
	V124=(base[1]);
	vs_top=sup;
	goto T726;
	goto T724;
T724:;
	V123= (VV[37]->s.s_dbind);
	goto T725;
T725:;
	V124= (VV[38]->s.s_dbind);
	goto T726;
T726:;
	V123= (number_compare((V123),(VV[37]->s.s_dbind))>=0?((V123)):(VV[37]->s.s_dbind));
	V124= (number_compare((V124),(VV[38]->s.s_dbind))<=0?((V124)):(VV[38]->s.s_dbind));
	{register object V125;
	register object V126;
	V125= (V123);{object V127;
	base[3]= (VV[40]->s.s_dbind);
	base[4]= (V123);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk159)();
	vs_top=sup;
	V127= vs_base[0];
	if(V127==Cnil)goto T735;
	V126= V127;
	goto T734;
	goto T735;
T735:;}
	V126= one_plus((VV[41]->s.s_dbind));
	goto T734;
T734:;
	goto T740;
T740:;
	if(!(number_compare((V125),(V124))>0)){
	goto T741;}
	vs_base=vs_top=base+3;
	vs_base[0]=Cnil;
	return;
	goto T741;
T741:;
	if(((*(LnkLI173))((V125)))==Cnil){
	goto T745;}
	(void)((*(LnkLI177))((V125)));
	goto T745;
T745:;
	goto T750;
T750:;
	if(number_compare((V126),(VV[41]->s.s_dbind))>0){
	goto T752;}
	base[3]= (V126);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk184)();
	vs_top=sup;
	V128= vs_base[0];
	if(!(number_compare(V128,(V125))>0)){
	goto T751;}
	goto T752;
T752:;
	goto T748;
	goto T751;
T751:;
	(void)((*(LnkLI182))((V126)));
	V126= number_plus((V126),small_fixnum(1));
	goto T750;
	goto T748;
T748:;
	V125= one_plus((V125));
	goto T740;}
	}
}
/*	local entry for function PRINT-IHS	*/

static object LI22(V130)

register object V130;
{	 VMB22 VMS22 VMV22
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[56],small_fixnum(2));
	bds_bind(VV[57],small_fixnum(4));
	base[2]= Ct;
	base[3]= VV[99];
	base[4]= (number_compare((V130),(VV[39]->s.s_dbind))==0?Ct:Cnil);
	base[5]= (V130);
	{register object V131;
	base[7]= (V130);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk185)();
	vs_top=sup;
	V131= vs_base[0];
	if(type_of((V131))==t_symbol){
	goto T774;}
	base[7]= (V131);
	vs_top=(vs_base=base+7)+1;
	Lcompiled_function_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T775;}
	goto T774;
T774:;
	base[6]= (V131);
	goto T771;
	goto T775;
T775:;
	if(!(type_of((V131))==t_cons)){
	goto T781;}
	{object V132= CMPcar((V131));
	if((V132!= VV[100]))goto T783;
	base[6]= (V131);
	goto T771;
	goto T783;
T783:;
	if((V132!= VV[186])
	&& (V132!= VV[187]))goto T784;
	base[6]= CMPcdr((V131));
	goto T771;
	goto T784;
T784:;
	if((V132!= VV[117]))goto T785;
	base[6]= make_cons(VV[100],CMPcddddr((V131)));
	goto T771;
	goto T785;
T785:;
	if((V132!= VV[188]))goto T786;
	base[6]= CMPcddddr((V131));
	goto T771;
	goto T786;
T786:;
	if(!(type_of(CMPcar((V131)))==t_symbol)){
	goto T788;}
	base[7]= CMPcar((V131));
	vs_top=(vs_base=base+7)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T787;}
	base[7]= CMPcar((V131));
	vs_top=(vs_base=base+7)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T788;}
	goto T787;
T787:;
	base[6]= CMPcar((V131));
	goto T771;
	goto T788;
T788:;
	base[6]= VV[101];
	goto T771;}
	goto T781;
T781:;
	(void)(print((V131),Cnil));
	base[6]= VV[102];}
	goto T771;
T771:;
	base[8]= (V130);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk176)();
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+2)+6;
	Lformat();
	vs_top=sup;
	{object V133 = vs_base[0];
	bds_unwind1;
	bds_unwind1;
	VMR22(V133)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PRINT-FRS	*/

static object LI23(V135)

register object V135;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[103];
	base[2]= (V135);
	base[3]= (*(LnkLI189))((V135));
	base[5]= (V135);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk184)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[6]= (V135);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk190)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[7]= (V135);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk180)();
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+0)+7;
	Lformat();
	vs_top=sup;
	{object V136 = vs_base[0];
	VMR23(V136)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FRS-KIND	*/

static object LI24(V138)

register object V138;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{register object V139;
	V139= Cnil;
	base[0]= (V138);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk191)();
	vs_top=sup;
	V141= vs_base[0];
	{object V140= V141;
	if((V140!= VV[192]))goto T812;
	base[1]= (V138);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk193)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk194)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T814;}{object V142;
	base[1]= (V138);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk193)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[3]= (V138);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk190)();
	vs_top=sup;
	V143= vs_base[0];
	base[2]= number_plus(V143,small_fixnum(2));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk178)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= VV[104];
	base[3]= (VV[195]->s.s_gfdef);
	base[4]= VV[105];
	base[5]= (VV[196]->s.s_gfdef);
	vs_top=(vs_base=base+0)+6;
	Lmember();
	vs_top=sup;
	V139= vs_base[0];
	if(((V139))!=Cnil){
	goto T820;}
	V142= Cnil;
	goto T819;
	goto T820;
T820:;
	if(!((CMPcadar((V139)))==(VV[90]))){
	goto T834;}
	V142= list(3,VV[90],CMPcaar((V139)),VV[6]);
	goto T819;
	goto T834;
T834:;
	base[1]= (V138);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk193)();
	vs_top=sup;
	V147= vs_base[0];
	V148= (VV[196]->s.s_gfdef);
	V149= (VV[195]->s.s_gfdef);
	V150= (VFUN_NARGS=6,(*(LnkLI197))(V147,(V139),VV[107],V148,VV[104],V149));
	{object V145;
	object V146= /* INLINE-ARGS */V150;
	if(V146==Cnil){
	V144= Cnil;
	goto T836;}
	base[0]=V145=MMcons(Cnil,Cnil);
	goto T837;
T837:;
	(V145->c.c_car)= CMPcar((V146->c.c_car));
	if((V146=MMcdr(V146))==Cnil){
	V144= base[0];
	goto T836;}
	V145=MMcdr(V145)=MMcons(Cnil,Cnil);
	goto T837;}
	goto T836;
T836:;
	V151= reverse(V144);
	V152= append(/* INLINE-ARGS */V151,VV[108]);
	V142= make_cons(VV[106],/* INLINE-ARGS */V152);
	goto T819;
T819:;
	if(V142==Cnil)goto T818;
	{object V153 = V142;
	VMR24(V153)}
	goto T818;
T818:;}
	base[0]= (V138);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk193)();
	vs_top=sup;
	V154= vs_base[0];
	{object V155 = list(2,VV[109],V154);
	VMR24(V155)}
	goto T814;
T814:;
	base[0]= (V138);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk193)();
	vs_top=sup;
	V156= vs_base[0];
	{object V157 = list(3,VV[110],list(2,VV[111],V156),VV[6]);
	VMR24(V157)}
	goto T812;
T812:;
	if((V140!= VV[198]))goto T847;
	{object V158 = VV[112];
	VMR24(V158)}
	goto T847;
T847:;
	base[0]= (V138);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk193)();
	vs_top=sup;
	V159= vs_base[0];
	{object V160 = list(2,VV[113],V159);
	VMR24(V160)}}}
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
	goto T852;}
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[114];
	base[3]= (VV[39]->s.s_dbind);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk174)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T850;
	goto T852;
T852:;
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[115];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	goto T850;
T850:;
	vs_base=vs_top=base+0;
	vs_base[0]=Cnil;
	return;
}
/*	local entry for function IHS-VISIBLE	*/

static object LI26(V162)

object V162;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V163;
	base[1]= (V162);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk174)();
	vs_top=sup;
	V163= vs_base[0];
	if((V163)==Cnil){
	{object V164 = Cnil;
	VMR26(V164)}}
	{register object x= (V163),V166= (VV[116]->s.s_dbind);
	while(V166!=Cnil)
	if(eql(x,V166->c.c_car)){
	V165= V166;
	goto T862;
	}else V166=V166->c.c_cdr;
	V165= Cnil;}
	goto T862;
T862:;
	{object V167 = ((V165)==Cnil?Ct:Cnil);
	VMR26(V167)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for IHS-FNAME	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	{object V168;
	V168=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V169;
	base[1]= (V168);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk185)();
	vs_top=sup;
	V169= vs_base[0];
	if(!(type_of((V169))==t_symbol)){
	goto T866;}
	base[1]= (V169);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T866;
T866:;
	if(!(type_of((V169))==t_cons)){
	goto T869;}
	{object V170= CMPcar((V169));
	if((V170!= VV[100]))goto T871;
	base[1]= VV[100];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T871;
T871:;
	if((V170!= VV[186])
	&& (V170!= VV[187]))goto T872;
	base[1]= CMPcadr((V169));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T872;
T872:;
	if((V170!= VV[188]))goto T873;
	base[1]= CMPcar(CMPcddddr((V169)));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T873;
T873:;
	if((V170!= VV[117]))goto T874;
	base[1]= VV[117];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T874;
T874:;
	if(!(type_of(CMPcar((V169)))==t_symbol)){
	goto T876;}
	base[1]= CMPcar((V169));
	vs_top=(vs_base=base+1)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T875;}
	base[1]= CMPcar((V169));
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T876;}
	goto T875;
T875:;
	base[1]= CMPcar((V169));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T876;
T876:;
	base[1]= VV[102];
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T869;
T869:;
	base[1]= (V169);
	vs_top=(vs_base=base+1)+1;
	Lcompiled_function_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T885;}
	base[1]= (V169);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk199)();
	return;
	goto T885;
T885:;
	base[1]= VV[102];
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for IHS-NOT-INTERPRETED-ENV	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	{object V171;
	V171=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V172;
	base[1]= (V171);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk185)();
	vs_top=sup;
	V172= vs_base[0];
	if(!(type_of((V172))==t_cons)){
	goto T892;}
	if(!(number_compare((V171),small_fixnum(3))>0)){
	goto T892;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T892;
T892:;
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local entry for function SET-ENV	*/

static object LI29()

{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	base[0]= (VV[39]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk200)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T898;}
	(VV[42]->s.s_dbind)= Cnil;
	goto T896;
	goto T898;
T898:;
	{object V173;
	base[0]= (VV[39]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk176)();
	vs_top=sup;
	V173= vs_base[0];
	base[0]= (V173);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk178)();
	vs_top=sup;
	V174= vs_base[0];
	base[0]= one_plus((V173));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk178)();
	vs_top=sup;
	V175= vs_base[0];
	base[0]= number_plus((V173),small_fixnum(2));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk178)();
	vs_top=sup;
	V176= vs_base[0];
	(VV[42]->s.s_dbind)= list(3,V174,V175,V176);}
	goto T896;
T896:;
	{object V177 = (VV[42]->s.s_dbind);
	VMR29(V177)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LIST-DELQ	*/

static object LI30(V180,V181)

object V180;register object V181;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	if(((V181))!=Cnil){
	goto T910;}
	{object V182 = Cnil;
	VMR30(V182)}
	goto T910;
T910:;
	if(!(((V180))==(CMPcar((V181))))){
	goto T913;}
	{object V183 = CMPcdr((V181));
	VMR30(V183)}
	goto T913;
T913:;
	V184= (*(LnkLI201))((V180),CMPcdr((V181)));
	((V181))->c.c_cdr = /* INLINE-ARGS */V184;
	{object V185 = (V181);
	VMR30(V185)}
	return Cnil;
}
/*	local entry for function SUPER-GO	*/

static object LI31(V188,V189)

register object V188;register object V189;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{object V190;
	V190= Cnil;
	if(!(number_compare((V188),(VV[40]->s.s_dbind))>=0)){
	goto T916;}
	if(!(number_compare((V188),(VV[41]->s.s_dbind))<=0)){
	goto T916;}
	base[1]= (V188);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk193)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk194)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T916;}
	base[1]= (V188);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk193)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[3]= (V188);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk190)();
	vs_top=sup;
	V191= vs_base[0];
	base[2]= number_plus(V191,small_fixnum(2));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk178)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= VV[104];
	base[3]= (VV[195]->s.s_gfdef);
	base[4]= VV[105];
	base[5]= (VV[196]->s.s_gfdef);
	vs_top=(vs_base=base+0)+6;
	Lmember();
	vs_top=sup;
	V190= vs_base[0];
	if(((V190))==Cnil){
	goto T926;}
	if(!((CMPcadar((V190)))==(VV[92]))){
	goto T916;}
	base[1]= (V188);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk193)();
	vs_top=sup;
	V196= vs_base[0];
	V197= (VV[196]->s.s_gfdef);
	V198= (VV[195]->s.s_gfdef);
	V199= (VFUN_NARGS=6,(*(LnkLI197))(V196,(V190),VV[107],V197,VV[104],V198));
	{object V194;
	object V195= /* INLINE-ARGS */V199;
	if(V195==Cnil){
	V193= Cnil;
	goto T943;}
	base[0]=V194=MMcons(Cnil,Cnil);
	goto T944;
T944:;
	(V194->c.c_car)= CMPcar((V195->c.c_car));
	if((V195=MMcdr(V195))==Cnil){
	V193= base[0];
	goto T943;}
	V194=MMcdr(V194)=MMcons(Cnil,Cnil);
	goto T944;}
	goto T943;
T943:;
	{register object x= (V189),V192= V193;
	while(V192!=Cnil)
	if(eql(x,V192->c.c_car)){
	goto T942;
	}else V192=V192->c.c_cdr;
	goto T916;}
	goto T942;
T942:;
	base[1]= (V188);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk193)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V189);
	base[2]= Ct;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk202)();
	vs_top=sup;
	goto T916;
	goto T926;
T926:;
	base[1]= (V188);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk193)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V189);
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk202)();
	vs_top=sup;
	goto T916;
T916:;
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[118];
	base[2]= (V188);
	base[3]= (V189);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V200 = vs_base[0];
	VMR31(V200)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BREAK-BACKWARD-SEARCH-STACK	*/

static object LI32(V202)

object V202;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	{register object V203;
	V203= Cnil;
	V203= coerce_to_string((V202));
	{register object V204;
	register object V205;
	V204= one_minus((VV[39]->s.s_dbind));
	base[2]= (V204);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk174)();
	vs_top=sup;
	V205= vs_base[0];
	goto T969;
T969:;
	if(!(number_compare((V204),(VV[37]->s.s_dbind))<0)){
	goto T970;}
	base[2]= (VV[48]->s.s_dbind);
	base[3]= VV[119];
	base[4]= (V203);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	{object V206 = vs_base[0];
	VMR32(V206)}
	goto T970;
T970:;
	if(((*(LnkLI173))((V204)))==Cnil){
	goto T977;}
	V207= symbol_name((V205));
	V208= (VV[204]->s.s_gfdef);
	if(((VFUN_NARGS=4,(*(LnkLI203))((V203),/* INLINE-ARGS */V207,VV[105],V208)))==Cnil){
	goto T977;}
	base[2]= (V204);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk205)();
	vs_top=sup;
	{object V209 = Cnil;
	VMR32(V209)}
	goto T977;
T977:;
	V204= one_minus((V204));
	base[2]= (V204);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk174)();
	vs_top=sup;
	V205= vs_base[0];
	goto T969;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BREAK-FORWARD-SEARCH-STACK	*/

static object LI33(V211)

object V211;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{register object V212;
	V212= Cnil;
	V212= coerce_to_string((V211));
	{register object V213;
	register object V214;
	V213= one_plus((VV[39]->s.s_dbind));
	base[2]= (V213);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk174)();
	vs_top=sup;
	V214= vs_base[0];
	goto T998;
T998:;
	if(!(number_compare((V213),(VV[38]->s.s_dbind))>0)){
	goto T999;}
	base[2]= (VV[48]->s.s_dbind);
	base[3]= VV[120];
	base[4]= (V212);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	{object V215 = vs_base[0];
	VMR33(V215)}
	goto T999;
T999:;
	if(((*(LnkLI173))((V213)))==Cnil){
	goto T1006;}
	V216= symbol_name((V214));
	V217= (VV[204]->s.s_gfdef);
	if(((VFUN_NARGS=4,(*(LnkLI203))((V212),/* INLINE-ARGS */V216,VV[105],V217)))==Cnil){
	goto T1006;}
	base[2]= (V213);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk205)();
	vs_top=sup;
	{object V218 = Cnil;
	VMR33(V218)}
	goto T1006;
T1006:;
	V213= one_plus((V213));
	base[2]= (V213);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk174)();
	vs_top=sup;
	V214= vs_base[0];
	goto T998;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BREAK-HELP	*/

static object LI34()

{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	{object V219;
	object V220;
	V219= VV[121];
	V220= CMPcar((V219));
	goto T1024;
T1024:;
	if(!(((V219))==Cnil)){
	goto T1025;}
	goto T1020;
	goto T1025;
T1025:;
	base[1]= (VV[48]->s.s_dbind);
	base[2]= (V220);
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	V219= CMPcdr((V219));
	V220= CMPcar((V219));
	goto T1024;}
	goto T1020;
T1020:;
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[122];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	{register object V221;
	register object V222;
	register object V223;
	{object V224;
	base[0]= VV[123];
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V224= vs_base[0];
	base[0]= (V224);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1045;}
	V221= (V224);
	goto T1041;
	goto T1045;
T1045:;
	base[0]= coerce_to_string((V224));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V221= vs_base[0];}
	goto T1041;
T1041:;
	V222= Cnil;
	V223= Cnil;
	{object V225;
	register object V226;
	base[2]= (V221);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V227= vs_base[0];
	V225= make_cons((V221),V227);
	V226= CMPcar((V225));
	goto T1054;
T1054:;
	if(!(((V225))==Cnil)){
	goto T1055;}
	V222= Cnil;
	goto T1040;
	goto T1055;
T1055:;
	{long V228;
	long V229;
	base[2]= (V226);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk206)();
	if(vs_base>=vs_top){vs_top=sup;goto T1064;}
	V228= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1065;}
	V229= fix(vs_base[0]);
	vs_top=sup;
	goto T1066;
	goto T1064;
T1064:;
	V228= fix(Cnil);
	goto T1065;
T1065:;
	V229= fix(Cnil);
	goto T1066;
T1066:;
	if(((V221))==((V226))){
	goto T1067;}
	V229= 0;
	goto T1067;
T1067:;
	{object V230;
	register object V231;
	V232 = make_fixnum(V229);
	V233 = make_fixnum(V228);
	V230= number_plus(V232,V233);
	V231= small_fixnum(0);
	goto T1074;
T1074:;
	if(!(number_compare((V231),(V230))>=0)){
	goto T1075;}
	goto T1061;
	goto T1075;
T1075:;
	V234 = make_fixnum(V229);
	if(!(number_compare((V231),V234)<0)){
	goto T1084;}
	base[3]= (V226);
	base[4]= (V231);
	vs_top=(vs_base=base+3)+2;
	siLpackage_internal();
	vs_top=sup;
	V223= vs_base[0];
	goto T1082;
	goto T1084;
T1084:;
	base[3]= (V226);
	V235 = make_fixnum(V229);
	base[4]= number_minus((V231),V235);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V223= vs_base[0];
	goto T1082;
T1082:;
	goto T1080;
T1080:;
	if(((V223))!=Cnil){
	goto T1090;}
	goto T1081;
	goto T1090;
T1090:;
	V222= CMPcar((V223));
	if(((V226))==((V221))){
	goto T1096;}
	base[4]= symbol_name((V222));
	base[5]= (V221);
	vs_top=(vs_base=base+4)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V236= vs_base[0];
	if(!((VV[124])==(CMPcar(V236)))){
	goto T1095;}
	goto T1096;
T1096:;
	{object V237 =((V222))->s.s_plist;
	 object ind= VV[54];
	while(V237!=Cnil){
	if(V237->c.c_car==ind){
	if(((V237->c.c_cdr->c.c_car))==Cnil){
	goto T1105;}
	goto T1107;
	}else V237=V237->c.c_cdr->c.c_cdr;}
	goto T1105;}
	goto T1107;
T1107:;
	base[3]= (VV[48]->s.s_dbind);
	base[4]= VV[125];
	base[5]= (V222);
	{object V238 =((V222))->s.s_plist;
	 object ind= VV[54];
	while(V238!=Cnil){
	if(V238->c.c_car==ind){
	base[6]= (V238->c.c_cdr->c.c_car);
	goto T1111;
	}else V238=V238->c.c_cdr->c.c_cdr;}
	base[6]= Cnil;}
	goto T1111;
T1111:;
	vs_top=(vs_base=base+3)+4;
	Lformat();
	vs_top=sup;
	goto T1105;
T1105:;
	goto T1095;
T1095:;
	V223= CMPcdr((V223));
	goto T1080;
	goto T1081;
T1081:;
	goto T1078;
	goto T1078;
T1078:;
	V231= one_plus((V231));
	goto T1074;}}
	goto T1061;
T1061:;
	V225= CMPcdr((V225));
	V226= CMPcar((V225));
	goto T1054;}}
	goto T1040;
T1040:;
	vs_base=vs_top=base+0;
	vs_base[0]=Cnil;
	vs_top=sup;
	{object V239 = vs_base[0];
	VMR34(V239)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for COERCE-SLASH-TERMINATED	*/

static void L35()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	{register object V240;
	V240=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V240))==t_string)){
	goto T1123;}
	goto T1122;
	goto T1123;
T1123:;
	base[1]= VV[126];
	base[2]= (V240);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	goto T1122;
T1122:;
	{long V241;
	V241= (long)((V240))->v.v_fillp;
	if(!((V241)>(0))){
	goto T1129;}
	if((((V240))->ust.ust_self[(long)(V241)-(1)])==(47)){
	goto T1127;}
	goto T1129;
T1129:;
	base[1]= Cnil;
	base[2]= VV[128];
	base[3]= (V240);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	V240= vs_base[0];}
	goto T1127;
T1127:;
	base[1]= (V240);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for FIX-LOAD-PATH	*/

static void L36()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	{object V242;
	V242=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(equal((V242),(VV[129]->s.s_dbind))){
	goto T1137;}
	{register object V243;
	V243= (V242);
	goto T1142;
T1142:;
	if(!(type_of((V243))!=t_cons)){
	goto T1143;}
	goto T1140;
	goto T1143;
T1143:;
	{register object V245;
	base[2]= CMPcar((V243));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk207)();
	vs_top=sup;
	V245= vs_base[0];
	(V243)->c.c_car = (V245);}
	V243= CMPcdr((V243));
	goto T1142;}
	goto T1140;
T1140:;
	{register object V246;
	V246= (V242);
	goto T1155;
T1155:;
	if(!(type_of((V246))!=t_cons)){
	goto T1156;}
	goto T1137;
	goto T1156;
T1156:;
	{register object V247;
	V247= (V246);
	goto T1162;
T1162:;
	if(!(type_of(CMPcdr((V247)))!=t_cons)){
	goto T1163;}
	goto T1160;
	goto T1163;
T1163:;
	if(!(equal(CMPcadr((V247)),CMPcar((V246))))){
	goto T1167;}
	{register object V248;
	register object V249;
	V248= (V247);
	V249= CMPcddr((V247));
	((V248))->c.c_cdr = (V249);}
	goto T1167;
T1167:;
	V247= CMPcdr((V247));
	goto T1162;}
	goto T1160;
T1160:;
	V246= CMPcdr((V246));
	goto T1155;}
	goto T1137;
T1137:;
	(VV[129]->s.s_dbind)= (V242);
	base[1]= (VV[129]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for FILE-SEARCH	*/

static void L37()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	bds_check;
	{register object V250;
	object V251;
	object V252;
	object V253;
	V250=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1180;}
	V251=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1181;}
	V252=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1182;}
	V253=(base[3]);
	vs_top=sup;
	goto T1183;
	goto T1180;
T1180:;
	V251= (VV[130]->s.s_dbind);
	goto T1181;
T1181:;
	V252= (VV[131]->s.s_dbind);
	goto T1182;
T1182:;
	V253= Ct;
	goto T1183;
T1183:;
	{register object V254;
	V254= Cnil;
	base[4]= (V251);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk208)();
	vs_top=sup;
	{register object V255;
	register object V256;
	V255= (V251);
	V256= CMPcar((V255));
	goto T1194;
T1194:;
	if(!(((V255))==Cnil)){
	goto T1195;}
	goto T1190;
	goto T1195;
T1195:;
	{register object V257;
	register object V258;
	V257= (V252);
	V258= CMPcar((V257));
	goto T1203;
T1203:;
	if(!(((V257))==Cnil)){
	goto T1204;}
	goto T1199;
	goto T1204;
T1204:;
	base[6]= (V256);
	base[7]= (V250);
	base[8]= (V258);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk156)();
	vs_top=sup;
	V254= vs_base[0];
	if(!((file_exists((V254))))){
	goto T1208;}
	base[6]= (V254);
	vs_top=(vs_base=base+6)+1;
	return;
	goto T1208;
T1208:;
	V257= CMPcdr((V257));
	V258= CMPcar((V257));
	goto T1203;}
	goto T1199;
T1199:;
	V255= CMPcdr((V255));
	V256= CMPcar((V255));
	goto T1194;}
	goto T1190;
T1190:;
	if(((V253))==Cnil){
	goto T1226;}
	bds_bind(VV[132],Cnil);
	base[5]= VV[133];
	base[6]= VV[134];
	base[7]= (V251);
	base[8]= (V250);
	base[9]= (V252);
	vs_top=(vs_base=base+5)+5;
	Lcerror();
	vs_top=sup;
	base[5]= (VV[132]->s.s_dbind);
	vs_top=(vs_base=base+5)+1;
	bds_unwind1;
	return;
	goto T1226;
T1226:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	function definition for ALOAD	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	{object V259;
	V259=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V259);
	base[3]= (VV[130]->s.s_dbind);
	base[4]= (VV[131]->s.s_dbind);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk209)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk149)();
	return;
	}
}
/*	function definition for AUTOLOAD	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	bds_check;
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	vs_top=sup;
	bds_bind(VV[135],Ct);
	base[3]= (base[0]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1238;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;
	goto T1238;
T1238:;
	base[3]= (base[0]->c.c_car);
	base[4]= 
	make_cclosure_new(LC45,Cnil,base[1],Cdata);
	vs_top=(vs_base=base+3)+2;
	siLfset();
	bds_unwind1;
	return;
}
/*	function definition for AUTOLOAD-MACRO	*/

static void L40()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	bds_check;
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	vs_top=sup;
	bds_bind(VV[135],Ct);
	base[3]= (base[0]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1243;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;
	goto T1243;
T1243:;
	{object V260;
	object V261;
	V260= (base[0]->c.c_car);
	V261= 
	make_cclosure_new(LC46,Cnil,base[1],Cdata);
	base[4]= (V260);
	base[5]= make_cons(VV[136],(V261));
	vs_top=(vs_base=base+4)+2;
	siLfset();
	vs_top=sup;
	base[4]= (V261);
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	return;}
}
/*	function definition for GET-COMMAND-ARG	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_check;
	{register object V262;
	register object V263;
	V262=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1251;}
	V263=(base[1]);
	vs_top=sup;
	goto T1252;
	goto T1251;
T1251:;
	V263= Cnil;
	goto T1252;
T1252:;
	{register object V264;
	V264= (VV[16]->s.s_dbind);
	goto T1256;
T1256:;
	V264= CMPcdr((V264));
	if((V264)!=Cnil){
	goto T1260;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1260;
T1260:;
	{register object V265;
	V265= CMPcar((V264));
	if(!((((V265))->ust.ust_self[0])==(((V262))->ust.ust_self[0]))){
	goto T1257;}
	if(!((((V265))->ust.ust_self[1])==(((V262))->ust.ust_self[1]))){
	goto T1257;}
	if(!(equal((V265),(V262)))){
	goto T1257;}
	{register object V266;
	V266= (V263);
	if(((V266))==Cnil){
	goto T1269;}
	base[2]= (V266);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1269;
T1269:;
	if((CMPcadr((V264)))==Cnil){
	goto T1272;}
	base[2]= CMPcadr((V264));
	base[3]= CMPcdr((V264));
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1272;
T1272:;
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;}}
	goto T1257;
T1257:;
	goto T1256;}
	}
}
/*	function definition for SET-DIR	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_check;
	{object V267;
	object V268;
	V267=(base[0]);
	V268=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V269;{object V270;
	base[2]= (V268);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)();
	vs_top=sup;
	V270= vs_base[0];
	if(V270==Cnil)goto T1278;
	V269= V270;
	goto T1277;
	goto T1278;
T1278:;}
	if(((V267))->s.s_dbind!=OBJNULL){
	goto T1281;}
	V269= Cnil;
	goto T1277;
	goto T1281;
T1281:;
	base[2]= (V267);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_value();
	vs_top=sup;
	V269= vs_base[0];
	goto T1277;
T1277:;
	if(((V269))==Cnil){
	goto T1285;}
	base[2]= (V267);
	base[4]= (V269);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk207)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lset();
	return;
	goto T1285;
T1285:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for SET-UP-TOP-LEVEL	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	bds_check;
	vs_top=sup;
	goto TTL;
TTL:;
	{register long V271;
	register object V272;
	vs_base=vs_top;
	(void) (*Lnk211)();
	vs_top=sup;
	V271= fix(vs_base[0]);
	V272= Cnil;
	goto T1294;
T1294:;
	V271= (long)(V271)-(1);
	if(!((V271)<(0))){
	goto T1299;}
	goto T1292;
	goto T1299;
T1299:;
	base[0]= make_fixnum(V271);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk212)();
	vs_top=sup;
	V273= vs_base[0];
	V272= make_cons(V273,(V272));
	goto T1294;
	goto T1292;
T1292:;
	(VV[16]->s.s_dbind)= (V272);
	V272= (VV[137]->s.s_dbind);
	{object V274;
	base[0]= VV[138];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk213)();
	vs_top=sup;
	V274= vs_base[0];{object V275;
	base[0]= VV[137];
	base[1]= VV[139];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk214)();
	vs_top=sup;
	V275= vs_base[0];
	if(V275==Cnil)goto T1312;
	goto T1311;
	goto T1312;
T1312:;}
	if(((V274))==Cnil){
	goto T1311;}
	base[0]= (V274);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk207)();
	vs_top=sup;
	(VV[137]->s.s_dbind)= vs_base[0];
	goto T1311;
T1311:;
	if(((VV[130]->s.s_dbind))==Cnil){
	goto T1321;}
	if(equal((V272),(VV[137]->s.s_dbind))){
	goto T1320;}
	goto T1321;
T1321:;
	base[0]= (VV[137]->s.s_dbind);
	base[1]= VV[140];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk156)();
	vs_top=sup;
	V276= vs_base[0];
	(VV[130]->s.s_dbind)= make_cons(V276,(VV[130]->s.s_dbind));
	base[0]= (VV[137]->s.s_dbind);
	base[1]= VV[141];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk156)();
	vs_top=sup;
	V277= vs_base[0];
	(VV[130]->s.s_dbind)= make_cons(V277,(VV[130]->s.s_dbind));
	goto T1320;
T1320:;
	if((VV[142])->s.s_dbind!=OBJNULL){
	goto T1334;}
	base[2]= VV[143];
	base[3]= Cnil;
	base[4]= VV[144];
	base[5]= Cnil;
	base[6]= VV[145];
	base[8]= small_fixnum(0);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk212)();
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
	(VV[142]->s.s_dbind)= vs_base[0];
	goto T1334;
T1334:;
	base[0]= VV[142];
	base[1]= VV[146];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk214)();
	vs_top=sup;
	base[0]= VV[147];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk210)();
	if(vs_base<vs_top){
	V272= vs_base[0];
	vs_base++;
	}else{
	V272= Cnil;}
	if(vs_base<vs_top){
	V272= vs_base[0];
	}else{
	V272= Cnil;}
	vs_top=sup;
	if(((V272))==Cnil){
	goto T1351;}
	bds_bind(VV[15],Cnil);
	base[1]= (VV[16]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk150)();
	vs_top=sup;
	(VV[16]->s.s_dbind)= (V272);
	base[1]= CMPcar((VV[16]->s.s_dbind));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk215)();
	bds_unwind1;
	return;
	goto T1351;
T1351:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;}}
}
/*	function definition for DO-F	*/

static void L44()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM44; VC44
	vs_check;
	bds_check;
	{VOL object V278;
	V278=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[148];
	base[2]= Cnil;
	bds_bind(VV[43],Cnil);
	frs_push(FRS_CATCH,(VV[11]->s.s_dbind));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	goto T1360;}
	else{
	base[5]= (V278);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk216)();
	vs_top=sup;
	base[4]= vs_base[0];
	frs_push(FRS_PROTECT,Cnil);
	{object tag=Cnil;frame_ptr fr=NULL;object p;bool active;
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	base[6]= base[4];
	vs_top=(vs_base=base+6)+1;
	Lread_line();
	vs_top=sup;
	goto T1369;
T1369:;
	base[6]= base[4];
	base[7]= Cnil;
	base[8]= base[1];
	vs_top=(vs_base=base+6)+3;
	Lread();
	vs_top=sup;
	base[2]= vs_base[0];
	if(!((base[1])==(base[2]))){
	goto T1376;}
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	goto T1365;
	goto T1376;
T1376:;
	base[6]= base[2];
	vs_top=(vs_base=base+6)+1;
	Leval();
	vs_top=sup;
	goto T1369;
	goto T1365;
T1365:;
	active=FALSE;}
	base[5]=Cnil;
	while(vs_base<vs_top)
	{base[5]=MMcons(vs_top[-1],base[5]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if((base[4])==Cnil){
	goto T1381;}
	base[6]= base[4];
	vs_top=(vs_base=base+6)+1;
	Lclose();
	vs_top=sup;
	goto T1381;
T1381:;
	vs_base=vs_top=base+6;
	for(p= base[5];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	vs_top=sup;}}
	vs_base=vs_top;
	Lby();
	vs_top=sup;
	frs_pop();}
	goto T1360;
T1360:;
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+4)+1;
	Lby();
	bds_unwind1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC46(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	{object V279;
	object V280;
	V279=(base[0]);
	V280=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk217)();
	vs_top=sup;
	base[2]= (V279);
	base[3]= (V280);
	vs_top=(vs_base=base+2)+2;
	super_funcall_no_event((base0[1]->c.c_car));
	return;
	}
}
/*	local function CLOSURE	*/

static void LC45(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	{object V281;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V281=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk217)();
	vs_top=sup;
	base[1]= (base0[1]->c.c_car);
	{object V282;
	V282= (V281);
	 vs_top=base+2;
	 while(V282!=Cnil)
	 {vs_push((V282)->c.c_car);V282=(V282)->c.c_cdr;}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	return;
	}
}
static void LnkT217(){ call_or_link(VV[217],(void **)(void *)&Lnk217);} /* ALOAD */
static void LnkT216(){ call_or_link(VV[216],(void **)(void *)&Lnk216);} /* OPEN */
static void LnkT215(){ call_or_link(VV[215],(void **)(void *)&Lnk215);} /* DO-F */
static void LnkT214(){ call_or_link(VV[214],(void **)(void *)&Lnk214);} /* SET-DIR */
static void LnkT213(){ call_or_link(VV[213],(void **)(void *)&Lnk213);} /* GETENV */
static void LnkT212(){ call_or_link(VV[212],(void **)(void *)&Lnk212);} /* ARGV */
static void LnkT211(){ call_or_link(VV[211],(void **)(void *)&Lnk211);} /* ARGC */
static void LnkT210(){ call_or_link(VV[210],(void **)(void *)&Lnk210);} /* GET-COMMAND-ARG */
static void LnkT209(){ call_or_link(VV[209],(void **)(void *)&Lnk209);} /* FILE-SEARCH */
static void LnkT208(){ call_or_link(VV[208],(void **)(void *)&Lnk208);} /* FIX-LOAD-PATH */
static void LnkT207(){ call_or_link(VV[207],(void **)(void *)&Lnk207);} /* COERCE-SLASH-TERMINATED */
static void LnkT206(){ call_or_link(VV[206],(void **)(void *)&Lnk206);} /* PACKAGE-SIZE */
static void LnkT205(){ call_or_link(VV[205],(void **)(void *)&Lnk205);} /* BREAK-GO */
static object  LnkTLI203(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[203],(void **)(void *)&LnkLI203,first,ap);va_end(ap);return V1;} /* SEARCH */
static void LnkT202(){ call_or_link(VV[202],(void **)(void *)&Lnk202);} /* INTERNAL-SUPER-GO */
static object  LnkTLI201(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[201],(void **)(void *)&LnkLI201,2,first,ap);va_end(ap);return V1;} /* LIST-DELQ */
static void LnkT200(){ call_or_link(VV[200],(void **)(void *)&Lnk200);} /* IHS-NOT-INTERPRETED-ENV */
static void LnkT199(){ call_or_link(VV[199],(void **)(void *)&Lnk199);} /* COMPILED-FUNCTION-NAME */
static object  LnkTLI197(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[197],(void **)(void *)&LnkLI197,first,ap);va_end(ap);return V1;} /* REMOVE */
static void LnkT194(){ call_or_link(VV[194],(void **)(void *)&Lnk194);} /* SPICEP */
static void LnkT193(){ call_or_link(VV[193],(void **)(void *)&Lnk193);} /* FRS-TAG */
static void LnkT191(){ call_or_link(VV[191],(void **)(void *)&Lnk191);} /* FRS-CLASS */
static void LnkT190(){ call_or_link(VV[190],(void **)(void *)&Lnk190);} /* FRS-VS */
static object  LnkTLI189(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[189],(void **)(void *)&LnkLI189,1,first,ap);va_end(ap);return V1;} /* FRS-KIND */
static void LnkT185(){ call_or_link(VV[185],(void **)(void *)&Lnk185);} /* IHS-FUN */
static void LnkT184(){ call_or_link(VV[184],(void **)(void *)&Lnk184);} /* FRS-IHS */
static void LnkT183(){ call_or_link(VV[183],(void **)(void *)&Lnk183);} /* BDS-VAL */
static object  LnkTLI182(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[182],(void **)(void *)&LnkLI182,1,first,ap);va_end(ap);return V1;} /* PRINT-FRS */
static void LnkT181(){ call_or_link(VV[181],(void **)(void *)&Lnk181);} /* BDS-VAR */
static void LnkT180(){ call_or_link(VV[180],(void **)(void *)&Lnk180);} /* FRS-BDS */
static void LnkT179(){ call_or_link(VV[179],(void **)(void *)&Lnk179);} /* BREAK-VS */
static void LnkT178(){ call_or_link(VV[178],(void **)(void *)&Lnk178);} /* VS */
static object  LnkTLI177(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[177],(void **)(void *)&LnkLI177,1,first,ap);va_end(ap);return V1;} /* PRINT-IHS */
static void LnkT176(){ call_or_link(VV[176],(void **)(void *)&Lnk176);} /* IHS-VS */
static void LnkT175(){ call_or_link(VV[175],(void **)(void *)&Lnk175);} /* BREAK-PREVIOUS */
static void LnkT174(){ call_or_link(VV[174],(void **)(void *)&Lnk174);} /* IHS-FNAME */
static object  LnkTLI173(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[173],(void **)(void *)&LnkLI173,1,first,ap);va_end(ap);return V1;} /* IHS-VISIBLE */
static object  LnkTLI172(){return call_proc0(VV[172],(void **)(void *)&LnkLI172);} /* SET-ENV */
static void LnkT171(){ call_or_link(VV[171],(void **)(void *)&Lnk171);} /* COMPLETE-PROP */
static void LnkT170(){ call_or_link(VV[170],(void **)(void *)&Lnk170);} /* BREAK-LEVEL */
static void LnkT169(){ call_or_link(VV[169],(void **)(void *)&Lnk169);} /* BREAK */
static void LnkT166(){ call_or_link(VV[166],(void **)(void *)&Lnk166);} /* DBL-READ */
static void LnkT165(){ call_or_link(VV[165],(void **)(void *)&Lnk165);} /* SET-BACK */
static object  LnkTLI164(){return call_proc0(VV[164],(void **)(void *)&LnkLI164);} /* SET-CURRENT */
static void LnkT163(){ call_or_link(VV[163],(void **)(void *)&Lnk163);} /* CATCH-FATAL */
static void LnkT162(){ call_or_link(VV[162],(void **)(void *)&Lnk162);} /* BREAK-QUIT */
static void LnkT161(){ call_or_link(VV[161],(void **)(void *)&Lnk161);} /* SIMPLE-BACKTRACE */
static void LnkT160(){ call_or_link(VV[160],(void **)(void *)&Lnk160);} /* FRS-TOP */
static void LnkT159(){ call_or_link(VV[159],(void **)(void *)&Lnk159);} /* SCH-FRS-BASE */
static void LnkT158(){ call_or_link(VV[158],(void **)(void *)&Lnk158);} /* IHS-TOP */
static void LnkT157(){ call_or_link(VV[157],(void **)(void *)&Lnk157);} /* MAKE-STRING-INPUT-STREAM */
static void LnkT156(){ call_or_link(VV[156],(void **)(void *)&Lnk156);} /* STRING-CONCATENATE */
static void LnkT155(){ call_or_link(VV[155],(void **)(void *)&Lnk155);} /* READ-FROM-STRING */
static void LnkT154(){ call_or_link(VV[154],(void **)(void *)&Lnk154);} /* BREAK-CURRENT */
static void LnkT150(){ call_or_link(VV[150],(void **)(void *)&Lnk150);} /* PROCESS-SOME-ARGS */
static void LnkT149(){ call_or_link(VV[149],(void **)(void *)&Lnk149);} /* LOAD */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

