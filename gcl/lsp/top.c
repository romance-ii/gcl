
#include <cmpinclude.h>
#include "top.h"
init_top(){do_init(VV);}
/*	local entry for function TOP-LEVEL	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	bds_check;
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
T8:;
	if(!((file_exists(VV[13])))){
	goto T6;}
	base[10]= VV[14];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk146)();
	vs_top=sup;
T6:;
	bds_bind(VV[15],Cnil);
	base[11]= (VV[16]->s.s_dbind);
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk147)();
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
T15:;
	V1= (
	(type_of((VV[17]->s.s_dbind)) == t_sfun ?(*(object (*)())(((VV[17]->s.s_dbind))->sfn.sfn_self)):
	(fcall.fun=((VV[17]->s.s_dbind)),fcall.argd=0,fcalln))());
	frs_pop();}
T3:;
T19:;
	(VV[2]->s.s_dbind)= (VV[1]->s.s_dbind);
	(VV[1]->s.s_dbind)= (VV[0]->s.s_dbind);
	(VV[0]->s.s_dbind)= (VV[3]->s.s_dbind);
	if(((VV[18]->s.s_dbind))==Cnil){
	goto T29;}
	(VV[18]->s.s_dbind)= Cnil;
	goto T27;
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
T36:;
	base[13]= (VV[20]->s.s_dbind);
	vs_top=(vs_base=base+13)+1;
	Lpackage_name();
	vs_top=sup;
	base[12]= vs_base[0];
T34:;
	vs_top=(vs_base=base+10)+3;
	Lformat();
	vs_top=sup;
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
	(VV[3]->s.s_dbind)= simple_symlispcall(VV[148],base+10,3);
	if(!(((VV[3]->s.s_dbind))==((VV[24]->s.s_dbind)))){
	goto T53;}
	vs_base=vs_top;
	Lby();
	vs_top=sup;
T53:;
	{object V5;
	base[10]= (VV[3]->s.s_dbind);
	symlispcall(VV[149],base+10,1);
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
T76:;
	if(!(((V6))==Cnil)){
	goto T77;}
	goto T72;
T77:;
	base[11]= (V7);
	(void)simple_symlispcall(VV[150],base+11,1);
	princ_char(10,Cnil);
	V6= CMPcdr((V6));
	V7= CMPcar((V6));
	goto T76;}
T72:;
	frs_pop();
	goto T20;}}
T46:;
	(VV[25]->s.s_dbind)= Cnil;
	(VV[26]->s.s_dbind)= Cnil;
	princ_char(10,VV[27]);
	vs_base=vs_top;
	(void) (*Lnk151)();
	vs_top=sup;
T20:;
	goto T19;
}
/*	function definition for PROCESS-SOME-ARGS	*/

static L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{register object V8;
	V8=(base[0]);
	vs_top=sup;
TTL:;
T96:;
	{register object V9;
	register object V10;
	V9= CMPcar((V8));
	V10= Cnil;
	if(!(equal((V9),VV[28]))){
	goto T102;}
	base[1]= CMPcadr((V8));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk146)();
	vs_top=sup;
	goto T100;
T102:;
	if(!(equal((V9),VV[29]))){
	goto T106;}
	base[2]= CMPcadr((V8));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk152)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	Leval();
	vs_top=sup;
	goto T100;
T106:;
	V10= Ct;
T100:;
	if((V10)!=Cnil){
	goto T111;}
	V8= CMPcdr((V8));
T111:;
	V8= CMPcdr((V8));}
	if((V8)!=Cnil){
	goto T97;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T97:;
	goto T96;
	}
}
/*	function definition for DBL-READ	*/

static L3()
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
T115:;
	V11= (VV[23]->s.s_dbind);
T116:;
	V12= Ct;
T117:;
	V13= Cnil;
T118:;
	{object V14;
	register object V15;
	V14= Cnil;
	V15= Cnil;
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
T134:;
	if(!(((V15))==((V13)))){
	goto T132;}
	base[3]= (V13);
	vs_top=(vs_base=base+3)+1;
	return;
T132:;
	base[3]= (V15);
	base[4]= (V11);
	vs_top=(vs_base=base+3)+2;
	Lunread_char();
	vs_top=sup;
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
	(void) (*Lnk153)();
	vs_top=sup;
	V14= vs_base[0];
	base[4]= (V14);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk154)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V12);
	base[5]= (V13);
	vs_top=(vs_base=base+3)+3;
	Lread();
	return;
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

static L4()
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
T159:;
	V17= Cnil;
T160:;
	{VOL object V18;
	if(!(type_of((V16))==t_string)){
	goto T164;}
	bds_bind(VV[34],(V16));
	goto T162;
T164:;
	bds_bind(VV[34],(VV[34]->s.s_dbind));
T162:;
	V19= make_cons((VV[36]->s.s_dbind),(VV[11]->s.s_dbind));
	bds_bind(VV[35],make_cons(/* INLINE-ARGS */V19,(VV[35]->s.s_dbind)));
	bds_bind(VV[11],make_cons(Cnil,Cnil));
	if(((V16))!=Cnil){
	goto T170;}
	bds_bind(VV[36],(VV[36]->s.s_dbind));
	goto T168;
T170:;
	bds_bind(VV[36],make_cons(Ct,(VV[36]->s.s_dbind)));
T168:;
	bds_bind(VV[37],one_plus((VV[38]->s.s_dbind)));
	vs_base=vs_top;
	(void) (*Lnk155)();
	vs_top=sup;
	V20= vs_base[0];
	bds_bind(VV[38],one_minus(V20));
	bds_bind(VV[39],(VV[38]->s.s_dbind));{VOL object V21;
	base[25]= (VV[41]->s.s_dbind);
	base[26]= (VV[37]->s.s_dbind);
	vs_top=(vs_base=base+25)+2;
	(void) (*Lnk156)();
	vs_top=sup;
	V21= vs_base[0];
	if(V21==Cnil)goto T176;
	bds_bind(VV[40],V21);
	goto T175;
T176:;}
	vs_base=vs_top;
	(void) (*Lnk157)();
	vs_top=sup;
	V22= vs_base[0];
	bds_bind(VV[40],one_plus(V22));
T175:;
	vs_base=vs_top;
	(void) (*Lnk157)();
	vs_top=sup;
	bds_bind(VV[41],vs_base[0]);
	bds_bind(VV[42],Cnil);
	V18= (VV[43]->s.s_dbind);
	if(!(type_of((V16))==t_string)){
	goto T185;}
	bds_bind(VV[43],Cnil);
	goto T183;
T185:;
	bds_bind(VV[43],(V18));
T183:;
	if((VV[45]->s.s_dbind)!=Cnil){
	bds_bind(VV[44],(VV[45]->s.s_dbind));
	goto T187;}
	bds_bind(VV[44],(VV[44]->s.s_dbind));
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
	(void) (*Lnk158)();
	vs_top=sup;
	base[25]= make_fixnum(length(CMPcdr((VV[36]->s.s_dbind))));
	vs_top=(vs_base=base+25)+1;
	(void) (*Lnk159)();
	vs_top=sup;
T188:;
	base[25]= small_fixnum(1);
	vs_top=(vs_base=base+25)+1;
	(void) (*Lnk160)();
	vs_top=sup;
	(VV[47]->s.s_dbind)= Ct;
	if(!(type_of((V16))==t_string)){
	goto T201;}
	(void)((*(LnkLI161))());
	princ_char(10,VV[27]);
	(VV[18]->s.s_dbind)= Cnil;
	goto T199;
T201:;
	base[25]= (V16);
	base[26]= (V17);
	vs_top=(vs_base=base+25)+2;
	(void) (*Lnk162)();
	vs_top=sup;
T199:;
T209:;
	(VV[2]->s.s_dbind)= (VV[1]->s.s_dbind);
	(VV[1]->s.s_dbind)= (VV[0]->s.s_dbind);
	(VV[0]->s.s_dbind)= (VV[3]->s.s_dbind);
	if(((VV[18]->s.s_dbind))==Cnil){
	goto T219;}
	(VV[18]->s.s_dbind)= Cnil;
	goto T217;
T219:;
	base[25]= (VV[48]->s.s_dbind);
	base[26]= VV[49];
	if(!(type_of((V16))==t_string)){
	goto T226;}
	base[27]= VV[50];
	goto T224;
T226:;
	base[27]= VV[51];
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
T230:;
	base[29]= (VV[20]->s.s_dbind);
	vs_top=(vs_base=base+29)+1;
	Lpackage_name();
	vs_top=sup;
	base[28]= vs_base[0];
T228:;
	base[29]= (VV[36]->s.s_dbind);
	vs_top=(vs_base=base+25)+5;
	Lformat();
	vs_top=sup;
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
	(void) (*Lnk163)();
	vs_top=sup;
	(VV[3]->s.s_dbind)= vs_base[0];
	if(!(((VV[3]->s.s_dbind))==((VV[24]->s.s_dbind)))){
	goto T247;}
	vs_base=vs_top;
	Lby();
	vs_top=sup;
T247:;
	{object V25;
	object V26;
	V25= Cnil;
	if(!((type_of((VV[3]->s.s_dbind))==t_symbol&&((VV[3]->s.s_dbind))->s.s_hpack==keyword_package))){
	goto T254;}
	(VV[3]->s.s_dbind)= make_cons((VV[3]->s.s_dbind),Cnil);
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
	symlispcall(VV[164],base+26,3);
	goto T253;
T259:;
	base[26]= (VV[3]->s.s_dbind);
	base[27]= Cnil;
	base[28]= Cnil;
	base[29]= (VV[42]->s.s_dbind);
	symlispcall(VV[165],base+26,4);
T253:;
	Llist();
	vs_top=sup;
	V26= vs_base[0];
	if((V25)==Cnil){
	goto T272;}
	if((CMPcar((V26)))==(VV[55])){
	goto T273;}
	goto T272;
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
T292:;
	if(!(((V28))==Cnil)){
	goto T293;}
	goto T250;
T293:;
	base[27]= (V29);
	base[28]= (VV[48]->s.s_dbind);
	(void)simple_symlispcall(VV[150],base+27,2);
	princ_char(10,VV[48]);
	V28= CMPcdr((V28));
	V29= CMPcar((V28));
	goto T292;}}
T250:;
	frs_pop();
	frs_pop();
	goto T210;}}
T239:;
	princ_char(10,VV[48]);
	vs_base=vs_top;
	(void) (*Lnk151)();
	vs_top=sup;
T210:;
	goto T209;}
	}
}
/*	local entry for function WARN	*/

static object LI5(V30,va_alist)
	object V30;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB5 VMS5 VMV5
	bds_check;
	{object V31;
	object V32;
	V31= V30;
	narg= narg - 1;
	va_start(ap);
	V33 = list_vector(narg,ap);
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
	(void) (*Lnk166)();
	vs_top=sup;
	{object V35 = vs_base[0];
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR5(V35)}
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
	VMR5(V37)}}
	}
/*	local entry for function UNIVERSAL-ERROR-HANDLER	*/

static object LI6(V42,V41,V40,V39,V38,va_alist)
	object V42,V41,V40,V39,V38;
	va_dcl 
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
	V43= V42;
	V44= V41;
	V45= V40;
	V46= V39;
	V47= V38;
	narg= narg - 5;
	va_start(ap);
	V49 = list_vector(narg,ap);
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
T343:;
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[67];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
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
	if(!((length((VV[71]->s.s_dbind)))>(0))){
	goto T365;}
	base[4]= (VV[27]->s.s_dbind);
	base[5]= VV[72];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
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
T321:;
	base[0]= (VV[27]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	Lforce_output();
	vs_top=sup;
	base[0]= (V50);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk167)();
	vs_top=sup;
	if(((V44))!=Cnil){
	goto T388;}
	{frame_ptr fr;
	fr=frs_sch_catch((VV[11]->s.s_dbind));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,(VV[11]->s.s_dbind));
	base[0]= (VV[11]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	unwind(fr,(VV[11]->s.s_dbind));}
T388:;
	{object V55 = Cnil;
	VMR6(V55)}}}
	}
/*	local entry for function BREAK	*/

static object LI7(va_alist)
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	bds_check;
	{object V56;
	object V57;
	narg = narg - 0;
	if (narg <= 0) goto T391;
	else {
	va_start(ap);
	V56= va_arg(ap,object);}
	--narg; goto T392;
T391:;
	V56= Cnil;
T392:;
	V58 = list_vector(narg,ap);
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
T395:;
	bds_bind(VV[43],Ct);
	base[1]= (V59);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk167)();
	vs_top=sup;
	bds_unwind1;
	{object V62 = Cnil;
	VMR7(V62)}}}
	}
/*	local entry for function TERMINAL-INTERRUPT	*/

static object LI8(V64)

object V64;
{	 VMB8 VMS8 VMV8
	bds_check;
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
T419:;
	base[1]= VV[80];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	{object V66 = vs_base[0];
	bds_unwind1;
	VMR8(V66)}
}
/*	local entry for function BREAK-CALL	*/

static object LI9(V68,V67,va_alist)
	object V68,V67;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V69;
	object V70;
	object V71;
	V69= V68;
	V70= V67;
	narg = narg - 2;
	if (narg <= 0) goto T424;
	else {
	va_start(ap);
	V71= va_arg(ap,object);}
	--narg; goto T425;
T424:;
	V71= VV[54];
T425:;
	{register object V72;
	V72= Cnil;
	base[0]= (V69);
	base[1]= VV[81];
	base[2]= (V71);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk168)();
	vs_top=sup;
	V72= vs_base[0];
	if((V72)!=Cnil){
	goto T433;}
	{object V73 = Cnil;
	VMR9(V73)}
T433:;
	{object V74 =((V72))->s.s_plist;
	 object ind= (V71);
	while(V74!=Cnil){
	if(V74->c.c_car==ind){
	V72= (V74->c.c_cdr->c.c_car);
	goto T435;
	}else V74=V74->c.c_cdr->c.c_cdr;}
	V72= Cnil;}
T435:;
	if(((V72))==Cnil){
	goto T437;}
	base[0]= make_cons((V72),(V70));
	base[1]= Cnil;
	base[2]= Cnil;
	base[3]= (VV[42]->s.s_dbind);
	vs_top=(vs_base=base+0)+4;
	Levalhook();
	vs_top=sup;
	{object V75 = vs_base[0];
	VMR9(V75)}
T437:;
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[82];
	base[2]= (V69);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V76 = vs_base[0];
	VMR9(V76)}}}
	}
/*	function definition for BREAK-QUIT	*/

static L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V77;
	if(vs_base>=vs_top){vs_top=sup;goto T446;}
	V77=(base[0]);
	vs_top=sup;
	goto T447;
T446:;
	V77= small_fixnum(0);
T447:;
	{object V78;
	V78= make_fixnum(length((VV[36]->s.s_dbind)));
	if(!(number_compare((V77),small_fixnum(0))>=0)){
	goto T450;}
	if(!(number_compare((V77),(V78))<0)){
	goto T450;}
	{object V79;
	base[2]= (V78);
	base[3]= (V77);
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+2)+3;
	Lminus();
	vs_top=sup;
	V80= vs_base[0];
	V79= nth(fix(V80),(VV[35]->s.s_dbind));
	{frame_ptr fr;
	base[2]= CMPcdr((V79));
	fr=frs_sch_catch(base[2]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,base[2]);
	base[3]= CMPcdr((V79));
	vs_top=(vs_base=base+3)+1;
	unwind(fr,base[2]);}}
T450:;
	vs_base=vs_top;
	(void) (*Lnk151)();
	return;}
	}
}
/*	function definition for BREAK-PREVIOUS	*/

static L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{register object V81;
	if(vs_base>=vs_top){vs_top=sup;goto T462;}
	V81=(base[0]);
	vs_top=sup;
	goto T463;
T462:;
	V81= small_fixnum(1);
T463:;
	{register object V82;
	V82= one_minus((VV[39]->s.s_dbind));
T467:;
	if(number_compare((V82),(VV[37]->s.s_dbind))<0){
	goto T469;}
	if(!(number_compare((V81),small_fixnum(0))<=0)){
	goto T468;}
T469:;
	(void)((*(LnkLI169))());
	vs_base=vs_top;
	(void) (*Lnk151)();
	return;
T468:;
	if(((*(LnkLI170))((V82)))==Cnil){
	goto T475;}
	(VV[39]->s.s_dbind)= (V82);
	V81= one_minus((V81));
T475:;
	V82= one_minus((V82));
	goto T467;}
	}
}
/*	local entry for function SET-CURRENT	*/

static object LI12()

{	 VMB12 VMS12 VMV12
TTL:;
	{register object V83;
	V83= (VV[39]->s.s_dbind);
T485:;
	if(((*(LnkLI170))((V83)))!=Cnil){
	goto T487;}
	if(!(number_compare((V83),(VV[37]->s.s_dbind))<=0)){
	goto T486;}
T487:;
	(VV[39]->s.s_dbind)= (V83);
	(void)((*(LnkLI169))());
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[83];
	base[3]= (VV[39]->s.s_dbind);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk171)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= CMPcdr((VV[36]->s.s_dbind));
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V84 = vs_base[0];
	VMR12(V84)}
T486:;
	V83= one_minus((V83));
	goto T485;}
}
/*	function definition for BREAK-NEXT	*/

static L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{register object V85;
	if(vs_base>=vs_top){vs_top=sup;goto T503;}
	V85=(base[0]);
	vs_top=sup;
	goto T504;
T503:;
	V85= small_fixnum(1);
T504:;
	{register object V86;
	V86= (VV[39]->s.s_dbind);
T507:;
	if(number_compare((V86),(VV[38]->s.s_dbind))>0){
	goto T509;}
	if(!(number_compare((V85),small_fixnum(0))<0)){
	goto T508;}
T509:;
	(void)((*(LnkLI169))());
	vs_base=vs_top;
	(void) (*Lnk151)();
	return;
T508:;
	if(((*(LnkLI170))((V86)))==Cnil){
	goto T515;}
	(VV[39]->s.s_dbind)= (V86);
	V85= one_minus((V85));
T515:;
	V86= one_plus((V86));
	goto T507;}
	}
}
/*	function definition for BREAK-GO	*/

static L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V87;
	V87=(base[0]);
	vs_top=sup;
TTL:;
	{object V88= (number_compare((V87),(VV[37]->s.s_dbind))>=0?((V87)):(VV[37]->s.s_dbind));
	(VV[39]->s.s_dbind)= (number_compare(V88,(VV[38]->s.s_dbind))<=0?(V88):(VV[38]->s.s_dbind));}
	if(((*(LnkLI170))((VV[39]->s.s_dbind)))==Cnil){
	goto T527;}
	(void)((*(LnkLI169))());
	vs_base=vs_top;
	(void) (*Lnk151)();
	return;
T527:;
	vs_base=vs_top;
	(void) (*Lnk172)();
	return;
	}
}
/*	function definition for BREAK-MESSAGE	*/

static L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	vs_top=sup;
TTL:;
	(void)(princ((VV[34]->s.s_dbind),(VV[48]->s.s_dbind)));
	princ_char(10,VV[48]);
	vs_base=vs_top=base+0;
	vs_base[0]=Cnil;
	return;
}
/*	function definition for DESCRIBE-ENVIRONMENT	*/

static L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V89;
	register object V90;
	if(vs_base>=vs_top){vs_top=sup;goto T532;}
	V89=(base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T533;}
	V90=(base[1]);
	vs_top=sup;
	goto T534;
T532:;
	V89= (VV[42]->s.s_dbind);
T533:;
	V90= (VV[48]->s.s_dbind);
T534:;
	if(!((length((V89)))==(3))){
	goto T538;}
	goto T537;
T538:;
	base[2]= VV[84];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
T537:;
	{register object V91;
	V91= VV[85];
	base[2]= (V90);
	base[3]= (V91);
	base[4]= VV[86];
	{object V92;
	{object V93;
	object V94= CMPcar((VV[42]->s.s_dbind));
	if(V94==Cnil){
	V92= Cnil;
	goto T545;}
	base[5]=V93=MMcons(Cnil,Cnil);
T546:;
	(V93->c.c_car)= CMPcar((V94->c.c_car));
	if((V94=MMcdr(V94))==Cnil){
	V92= base[5];
	goto T545;}
	V93=MMcdr(V93)=MMcons(Cnil,Cnil);
	goto T546;}
T545:;
	 vs_top=base+5;
	 while(V92!=Cnil)
	 {vs_push((V92)->c.c_car);V92=(V92)->c.c_cdr;}
	vs_base=base+2;}
	Lformat();
	vs_top=sup;
	base[2]= (V90);
	base[3]= (V91);
	base[4]= VV[87];
	{object V95;
	{object V96;
	object V97= CMPcadr((VV[42]->s.s_dbind));
	if(V97==Cnil){
	V95= Cnil;
	goto T552;}
	base[5]=V96=MMcons(Cnil,Cnil);
T553:;
	(V96->c.c_car)= CMPcar((V97->c.c_car));
	if((V97=MMcdr(V97))==Cnil){
	V95= base[5];
	goto T552;}
	V96=MMcdr(V96)=MMcons(Cnil,Cnil);
	goto T553;}
T552:;
	 vs_top=base+5;
	 while(V95!=Cnil)
	 {vs_push((V95)->c.c_car);V95=(V95)->c.c_cdr;}
	vs_base=base+2;}
	Lformat();
	vs_top=sup;
	base[2]= (V90);
	base[3]= (V91);
	base[4]= VV[88];
	{object V98;
	{object V99;
	object V100= CMPcaddr((VV[42]->s.s_dbind));
	if(V100==Cnil){
	V98= Cnil;
	goto T559;}
	base[5]=V99=MMcons(Cnil,Cnil);
T560:;
	if(!((CMPcadr((V100->c.c_car)))==(VV[89]))){
	goto T563;}
	(V99->c.c_cdr)= make_cons(CMPcar((V100->c.c_car)),Cnil);
	goto T561;
T563:;
	(V99->c.c_cdr)= Cnil;
T561:;
	while(MMcdr(V99)!=Cnil)V99=MMcdr(V99);
	if((V100=MMcdr(V100))==Cnil){
	base[5]=base[5]->c.c_cdr;
	V98= base[5];
	goto T559;}
	goto T560;}
T559:;
	 vs_top=base+5;
	 while(V98!=Cnil)
	 {vs_push((V98)->c.c_car);V98=(V98)->c.c_cdr;}
	vs_base=base+2;}
	Lformat();
	vs_top=sup;
	base[2]= (V90);
	base[3]= (V91);
	base[4]= VV[90];
	{object V102;
	{object V103;
	object V104= CMPcaddr((VV[42]->s.s_dbind));
	if(V104==Cnil){
	V102= Cnil;
	goto T568;}
	base[5]=V103=MMcons(Cnil,Cnil);
T569:;
	if(!((CMPcadr((V104->c.c_car)))==(VV[91]))){
	goto T572;}
	(V103->c.c_cdr)= make_cons(CMPcar((V104->c.c_car)),Cnil);
	goto T570;
T572:;
	(V103->c.c_cdr)= Cnil;
T570:;
	while(MMcdr(V103)!=Cnil)V103=MMcdr(V103);
	if((V104=MMcdr(V104))==Cnil){
	base[5]=base[5]->c.c_cdr;
	V102= base[5];
	goto T568;}
	goto T569;}
T568:;
	 vs_top=base+5;
	 while(V102!=Cnil)
	 {vs_push((V102)->c.c_car);V102=(V102)->c.c_cdr;}
	vs_base=base+2;}
	Lformat();
	return;}
	}
}
/*	function definition for BREAK-VS	*/

static L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{register object V106;
	object V107;
	if(vs_base>=vs_top){vs_top=sup;goto T574;}
	V106=(base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T575;}
	V107=(base[1]);
	vs_top=sup;
	goto T576;
T574:;
	base[2]= (VV[37]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk173)();
	vs_top=sup;
	V106= vs_base[0];
T575:;
	base[2]= (VV[38]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk173)();
	vs_top=sup;
	V107= vs_base[0];
T576:;
	base[2]= (VV[37]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk173)();
	vs_top=sup;
	V108= vs_base[0];
	V106= (number_compare((V106),V108)>=0?((V106)):V108);
	base[2]= one_plus((VV[38]->s.s_dbind));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk173)();
	vs_top=sup;
	V109= vs_base[0];
	V110= one_minus(V109);
	V107= (number_compare((V107),/* INLINE-ARGS */V110)<=0?((V107)):/* INLINE-ARGS */V110);
	{register object V111;
	V111= (VV[37]->s.s_dbind);
T590:;
	if(number_compare((V111),(VV[38]->s.s_dbind))>=0){
	goto T592;}
	base[2]= (V111);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk173)();
	vs_top=sup;
	V112= vs_base[0];
	if(!(number_compare(V112,(V106))>=0)){
	goto T591;}
T592:;
	{register object V113;
	V113= (V106);
T599:;
	if(!(number_compare((V113),(V107))>0)){
	goto T600;}
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	return;
T600:;
T606:;
	base[2]= (V111);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk173)();
	vs_top=sup;
	V114= vs_base[0];
	if(!(number_compare(V114,(V113))>0)){
	goto T607;}
	goto T604;
T607:;
	if(((*(LnkLI170))((V111)))==Cnil){
	goto T613;}
	(void)((*(LnkLI174))((V111)));
T613:;
	V111= number_plus((V111),small_fixnum(1));
	goto T606;
T604:;
	base[2]= (VV[48]->s.s_dbind);
	base[3]= VV[92];
	base[4]= (V113);
	base[6]= (V113);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk175)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+2)+4;
	Lformat();
	vs_top=sup;
	V113= one_plus((V113));
	goto T599;}
T591:;
	V111= one_plus((V111));
	goto T590;}
	}
}
/*	function definition for BREAK-LOCAL	*/

static L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{object V115;
	if(vs_base>=vs_top){vs_top=sup;goto T633;}
	V115=(base[0]);
	vs_top=sup;
	goto T634;
T633:;
	V115= small_fixnum(0);
T634:;
	{object V116;
	base[2]= (VV[39]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk173)();
	vs_top=sup;
	V117= vs_base[0];
	V116= number_plus(V117,(V115));
	base[2]= (V116);
	base[3]= (V116);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk176)();
	return;}
	}
}
/*	function definition for BREAK-BDS	*/

static L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{register object V118;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V118=(base[0]);
	vs_top=sup;
	{register object V119;
	V119= (VV[40]->s.s_dbind);
	{register object V120;
	register object V121;
	base[1]= one_minus((VV[40]->s.s_dbind));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk177)();
	vs_top=sup;
	V122= vs_base[0];
	V120= one_plus(V122);
	base[1]= one_plus((VV[41]->s.s_dbind));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk177)();
	vs_top=sup;
	V121= vs_base[0];
T648:;
	if(!(number_compare((V120),(V121))>0)){
	goto T649;}
	vs_base=vs_top=base+1;
	vs_base[0]=Cnil;
	return;
T649:;
	if(((V118))==Cnil){
	goto T654;}
	base[1]= (V120);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk178)();
	vs_top=sup;
	V124= vs_base[0];
	{register object x= V124,V123= (V118);
	while(V123!=Cnil)
	if(eql(x,V123->c.c_car)){
	goto T657;
	}else V123=V123->c.c_cdr;
	goto T653;}
T657:;
T654:;
T662:;
	if(number_compare((V119),(VV[41]->s.s_dbind))>0){
	goto T664;}
	base[1]= (V119);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk177)();
	vs_top=sup;
	V125= vs_base[0];
	if(!(number_compare(V125,(V120))>0)){
	goto T663;}
T664:;
	goto T660;
T663:;
	(void)((*(LnkLI179))((V119)));
	V119= number_plus((V119),small_fixnum(1));
	goto T662;
T660:;
	base[1]= (VV[48]->s.s_dbind);
	base[2]= VV[93];
	base[3]= (V120);
	base[5]= (V120);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk178)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[6]= (V120);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk180)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+1)+5;
	Lformat();
	vs_top=sup;
T653:;
	V120= one_plus((V120));
	goto T648;}}
	}
}
/*	function definition for SIMPLE-BACKTRACE	*/

static L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	vs_top=sup;
TTL:;
	princ_str("Backtrace: ",VV[48]);
	{register object V126;
	register object V127;
	V126= (VV[37]->s.s_dbind);
	V127= Cnil;
T690:;
	if(!(number_compare((V126),(VV[38]->s.s_dbind))>0)){
	goto T691;}
	princ_char(10,VV[48]);
	vs_base=vs_top=base+0;
	vs_base[0]=Cnil;
	return;
T691:;
	if(((*(LnkLI170))((V126)))==Cnil){
	goto T696;}
	if(((V127))==Cnil){
	goto T699;}
	princ_str(" > ",VV[48]);
T699:;
	base[1]= (V126);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk171)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= VV[94];
	base[2]= (VV[48]->s.s_dbind);
	base[3]= VV[95];
	base[4]= Ct;
	base[5]= VV[96];
	if(!(number_compare((V126),(VV[39]->s.s_dbind))==0)){
	goto T711;}
	base[6]= VV[59];
	goto T709;
T711:;
	base[6]= VV[97];
T709:;
	vs_top=(vs_base=base+0)+7;
	Lwrite();
	vs_top=sup;
T696:;
	V126= one_plus((V126));
	V127= Ct;
	goto T690;}
}
/*	function definition for IHS-BACKTRACE	*/

static L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{object V128;
	register object V129;
	if(vs_base>=vs_top){vs_top=sup;goto T718;}
	V128=(base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T719;}
	V129=(base[1]);
	vs_top=sup;
	goto T720;
T718:;
	V128= (VV[37]->s.s_dbind);
T719:;
	V129= (VV[38]->s.s_dbind);
T720:;
	V128= (number_compare((V128),(VV[37]->s.s_dbind))>=0?((V128)):(VV[37]->s.s_dbind));
	V129= (number_compare((V129),(VV[38]->s.s_dbind))<=0?((V129)):(VV[38]->s.s_dbind));
	{register object V130;
	register object V131;
	V130= (V128);{object V132;
	base[3]= (VV[40]->s.s_dbind);
	base[4]= (V128);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk156)();
	vs_top=sup;
	V132= vs_base[0];
	if(V132==Cnil)goto T729;
	V131= V132;
	goto T728;
T729:;}
	V131= one_plus((VV[41]->s.s_dbind));
T728:;
T734:;
	if(!(number_compare((V130),(V129))>0)){
	goto T735;}
	vs_base=vs_top=base+3;
	vs_base[0]=Cnil;
	return;
T735:;
	if(((*(LnkLI170))((V130)))==Cnil){
	goto T739;}
	(void)((*(LnkLI174))((V130)));
T739:;
T744:;
	if(number_compare((V131),(VV[41]->s.s_dbind))>0){
	goto T746;}
	base[3]= (V131);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk181)();
	vs_top=sup;
	V133= vs_base[0];
	if(!(number_compare(V133,(V130))>0)){
	goto T745;}
T746:;
	goto T742;
T745:;
	(void)((*(LnkLI179))((V131)));
	V131= number_plus((V131),small_fixnum(1));
	goto T744;
T742:;
	V130= one_plus((V130));
	goto T734;}
	}
}
/*	local entry for function PRINT-IHS	*/

static object LI22(V135)

register object V135;
{	 VMB22 VMS22 VMV22
	bds_check;
TTL:;
	bds_bind(VV[56],small_fixnum(2));
	bds_bind(VV[57],small_fixnum(4));
	base[2]= Ct;
	base[3]= VV[98];
	base[4]= (number_compare((V135),(VV[39]->s.s_dbind))==0?Ct:Cnil);
	base[5]= (V135);
	{register object V136;
	base[7]= (V135);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk182)();
	vs_top=sup;
	V136= vs_base[0];
	if(type_of((V136))==t_symbol){
	goto T768;}
	base[7]= (V136);
	vs_top=(vs_base=base+7)+1;
	Lcompiled_function_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T769;}
T768:;
	base[6]= (V136);
	goto T765;
T769:;
	if(!(type_of((V136))==t_cons)){
	goto T775;}
	{object V137= CMPcar((V136));
	if((V137!= VV[99]))goto T777;
	base[6]= (V136);
	goto T765;
T777:;
	if((V137!= VV[183])
	&& (V137!= VV[184]))goto T778;
	base[6]= CMPcdr((V136));
	goto T765;
T778:;
	if((V137!= VV[116]))goto T779;
	base[6]= make_cons(VV[99],CMPcddddr((V136)));
	goto T765;
T779:;
	if((V137!= VV[185]))goto T780;
	base[6]= CMPcddddr((V136));
	goto T765;
T780:;
	if(!(type_of(CMPcar((V136)))==t_symbol)){
	goto T782;}
	base[7]= CMPcar((V136));
	vs_top=(vs_base=base+7)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T781;}
	base[7]= CMPcar((V136));
	vs_top=(vs_base=base+7)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T782;}
T781:;
	base[6]= CMPcar((V136));
	goto T765;
T782:;
	base[6]= VV[100];
	goto T765;}
T775:;
	(void)(print((V136),Cnil));
	base[6]= VV[101];}
T765:;
	base[8]= (V135);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk173)();
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+2)+6;
	Lformat();
	vs_top=sup;
	{object V138 = vs_base[0];
	bds_unwind1;
	bds_unwind1;
	VMR22(V138)}
}
/*	local entry for function PRINT-FRS	*/

static object LI23(V140)

register object V140;
{	 VMB23 VMS23 VMV23
TTL:;
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[102];
	base[2]= (V140);
	base[3]= (*(LnkLI186))((V140));
	base[5]= (V140);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk181)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[6]= (V140);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk187)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[7]= (V140);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk177)();
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+0)+7;
	Lformat();
	vs_top=sup;
	{object V141 = vs_base[0];
	VMR23(V141)}
}
/*	local entry for function FRS-KIND	*/

static object LI24(V143)

register object V143;
{	 VMB24 VMS24 VMV24
TTL:;
	{register object V144;
	V144= Cnil;
	base[0]= (V143);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk188)();
	vs_top=sup;
	V146= vs_base[0];
	{object V145= V146;
	if((V145!= VV[189]))goto T806;
	base[1]= (V143);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk190)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk191)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T808;}{object V147;
	base[1]= (V143);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk190)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[3]= (V143);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk187)();
	vs_top=sup;
	V148= vs_base[0];
	base[2]= number_plus(V148,small_fixnum(2));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk175)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= VV[103];
	base[3]= (VV[192]->s.s_gfdef);
	base[4]= VV[104];
	base[5]= (VV[193]->s.s_gfdef);
	vs_top=(vs_base=base+0)+6;
	Lmember();
	vs_top=sup;
	V144= vs_base[0];
	if(((V144))!=Cnil){
	goto T814;}
	V147= Cnil;
	goto T813;
T814:;
	if(!((CMPcadar((V144)))==(VV[89]))){
	goto T828;}
	V147= list(3,VV[89],CMPcaar((V144)),VV[6]);
	goto T813;
T828:;
	base[1]= (V143);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk190)();
	vs_top=sup;
	V152= vs_base[0];
	V153= (VV[193]->s.s_gfdef);
	V154= (VV[192]->s.s_gfdef);
	V155= (VFUN_NARGS=6,(*(LnkLI194))(V152,(V144),VV[106],V153,VV[103],V154));
	{object V150;
	object V151= /* INLINE-ARGS */V155;
	if(V151==Cnil){
	V149= Cnil;
	goto T830;}
	base[0]=V150=MMcons(Cnil,Cnil);
T831:;
	(V150->c.c_car)= CMPcar((V151->c.c_car));
	if((V151=MMcdr(V151))==Cnil){
	V149= base[0];
	goto T830;}
	V150=MMcdr(V150)=MMcons(Cnil,Cnil);
	goto T831;}
T830:;
	V156= reverse(V149);
	V157= append(/* INLINE-ARGS */V156,VV[107]);
	V147= make_cons(VV[105],/* INLINE-ARGS */V157);
T813:;
	if(V147==Cnil)goto T812;
	{object V158 = V147;
	VMR24(V158)}
T812:;}
	base[0]= (V143);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk190)();
	vs_top=sup;
	V159= vs_base[0];
	{object V160 = list(2,VV[108],V159);
	VMR24(V160)}
T808:;
	base[0]= (V143);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk190)();
	vs_top=sup;
	V161= vs_base[0];
	{object V162 = list(3,VV[109],list(2,VV[110],V161),VV[6]);
	VMR24(V162)}
T806:;
	if((V145!= VV[195]))goto T841;
	{object V163 = VV[111];
	VMR24(V163)}
T841:;
	base[0]= (V143);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk190)();
	vs_top=sup;
	V164= vs_base[0];
	{object V165 = list(2,VV[112],V164);
	VMR24(V165)}}}
}
/*	function definition for BREAK-CURRENT	*/

static L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	vs_top=sup;
TTL:;
	if(((VV[36]->s.s_dbind))==Cnil){
	goto T846;}
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[113];
	base[3]= (VV[39]->s.s_dbind);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk171)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T844;
T846:;
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[114];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
T844:;
	vs_base=vs_top=base+0;
	vs_base[0]=Cnil;
	return;
}
/*	local entry for function IHS-VISIBLE	*/

static object LI26(V167)

object V167;
{	 VMB26 VMS26 VMV26
TTL:;
	{object V168;
	base[1]= (V167);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk171)();
	vs_top=sup;
	V168= vs_base[0];
	if((V168)==Cnil){
	{object V169 = Cnil;
	VMR26(V169)}}
	{register object x= (V168),V171= (VV[115]->s.s_dbind);
	while(V171!=Cnil)
	if(eql(x,V171->c.c_car)){
	V170= V171;
	goto T856;
	}else V171=V171->c.c_cdr;
	V170= Cnil;}
T856:;
	{object V172 = ((V170)==Cnil?Ct:Cnil);
	VMR26(V172)}}
}
/*	function definition for IHS-FNAME	*/

static L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	{object V173;
	V173=(base[0]);
	vs_top=sup;
TTL:;
	{register object V174;
	base[1]= (V173);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk182)();
	vs_top=sup;
	V174= vs_base[0];
	if(!(type_of((V174))==t_symbol)){
	goto T860;}
	base[1]= (V174);
	vs_top=(vs_base=base+1)+1;
	return;
T860:;
	if(!(type_of((V174))==t_cons)){
	goto T863;}
	{object V175= CMPcar((V174));
	if((V175!= VV[99]))goto T865;
	base[1]= VV[99];
	vs_top=(vs_base=base+1)+1;
	return;
T865:;
	if((V175!= VV[183])
	&& (V175!= VV[184]))goto T866;
	base[1]= CMPcadr((V174));
	vs_top=(vs_base=base+1)+1;
	return;
T866:;
	if((V175!= VV[185]))goto T867;
	base[1]= CMPcar(CMPcddddr((V174)));
	vs_top=(vs_base=base+1)+1;
	return;
T867:;
	if((V175!= VV[116]))goto T868;
	base[1]= VV[116];
	vs_top=(vs_base=base+1)+1;
	return;
T868:;
	if(!(type_of(CMPcar((V174)))==t_symbol)){
	goto T870;}
	base[1]= CMPcar((V174));
	vs_top=(vs_base=base+1)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T869;}
	base[1]= CMPcar((V174));
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T870;}
T869:;
	base[1]= CMPcar((V174));
	vs_top=(vs_base=base+1)+1;
	return;
T870:;
	base[1]= VV[101];
	vs_top=(vs_base=base+1)+1;
	return;}
T863:;
	base[1]= (V174);
	vs_top=(vs_base=base+1)+1;
	Lcompiled_function_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T879;}
	base[1]= (V174);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk196)();
	return;
T879:;
	base[1]= VV[101];
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for IHS-NOT-INTERPRETED-ENV	*/

static L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	{object V176;
	V176=(base[0]);
	vs_top=sup;
TTL:;
	{object V177;
	base[1]= (V176);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk182)();
	vs_top=sup;
	V177= vs_base[0];
	if(!(type_of((V177))==t_cons)){
	goto T886;}
	if(!(number_compare((V176),small_fixnum(3))>0)){
	goto T886;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T886:;
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local entry for function SET-ENV	*/

static object LI29()

{	 VMB29 VMS29 VMV29
TTL:;
	base[0]= (VV[39]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk197)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T892;}
	(VV[42]->s.s_dbind)= Cnil;
	goto T890;
T892:;
	{object V178;
	base[0]= (VV[39]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk173)();
	vs_top=sup;
	V178= vs_base[0];
	base[0]= (V178);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk175)();
	vs_top=sup;
	V179= vs_base[0];
	base[0]= one_plus((V178));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk175)();
	vs_top=sup;
	V180= vs_base[0];
	base[0]= number_plus((V178),small_fixnum(2));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk175)();
	vs_top=sup;
	V181= vs_base[0];
	(VV[42]->s.s_dbind)= list(3,V179,V180,V181);}
T890:;
	{object V182 = (VV[42]->s.s_dbind);
	VMR29(V182)}
}
/*	local entry for function LIST-DELQ	*/

static object LI30(V185,V186)

object V185;register object V186;
{	 VMB30 VMS30 VMV30
TTL:;
	if(((V186))!=Cnil){
	goto T904;}
	{object V187 = Cnil;
	VMR30(V187)}
T904:;
	if(!(((V185))==(CMPcar((V186))))){
	goto T907;}
	{object V188 = CMPcdr((V186));
	VMR30(V188)}
T907:;
	V189= (*(LnkLI198))((V185),CMPcdr((V186)));
	((V186))->c.c_cdr = /* INLINE-ARGS */V189;
	{object V190 = (V186);
	VMR30(V190)}
}
/*	local entry for function SUPER-GO	*/

static object LI31(V193,V194)

register object V193;register object V194;
{	 VMB31 VMS31 VMV31
TTL:;
	{object V195;
	V195= Cnil;
	if(!(number_compare((V193),(VV[40]->s.s_dbind))>=0)){
	goto T910;}
	if(!(number_compare((V193),(VV[41]->s.s_dbind))<=0)){
	goto T910;}
	base[1]= (V193);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk190)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk191)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T910;}
	base[1]= (V193);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk190)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[3]= (V193);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk187)();
	vs_top=sup;
	V196= vs_base[0];
	base[2]= number_plus(V196,small_fixnum(2));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk175)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= VV[103];
	base[3]= (VV[192]->s.s_gfdef);
	base[4]= VV[104];
	base[5]= (VV[193]->s.s_gfdef);
	vs_top=(vs_base=base+0)+6;
	Lmember();
	vs_top=sup;
	V195= vs_base[0];
	if(((V195))==Cnil){
	goto T920;}
	if(!((CMPcadar((V195)))==(VV[91]))){
	goto T910;}
	base[1]= (V193);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk190)();
	vs_top=sup;
	V201= vs_base[0];
	V202= (VV[193]->s.s_gfdef);
	V203= (VV[192]->s.s_gfdef);
	V204= (VFUN_NARGS=6,(*(LnkLI194))(V201,(V195),VV[106],V202,VV[103],V203));
	{object V199;
	object V200= /* INLINE-ARGS */V204;
	if(V200==Cnil){
	V198= Cnil;
	goto T937;}
	base[0]=V199=MMcons(Cnil,Cnil);
T938:;
	(V199->c.c_car)= CMPcar((V200->c.c_car));
	if((V200=MMcdr(V200))==Cnil){
	V198= base[0];
	goto T937;}
	V199=MMcdr(V199)=MMcons(Cnil,Cnil);
	goto T938;}
T937:;
	{register object x= (V194),V197= V198;
	while(V197!=Cnil)
	if(eql(x,V197->c.c_car)){
	goto T936;
	}else V197=V197->c.c_cdr;
	goto T910;}
T936:;
	base[1]= (V193);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk190)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V194);
	base[2]= Ct;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk199)();
	vs_top=sup;
	goto T910;
T920:;
	base[1]= (V193);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk190)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V194);
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk199)();
	vs_top=sup;
T910:;
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[117];
	base[2]= (V193);
	base[3]= (V194);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V205 = vs_base[0];
	VMR31(V205)}}
}
/*	local entry for function BREAK-BACKWARD-SEARCH-STACK	*/

static object LI32(V207)

object V207;
{	 VMB32 VMS32 VMV32
TTL:;
	{register object V208;
	V208= Cnil;
	V208= coerce_to_string((V207));
	{register object V209;
	register object V210;
	V209= one_minus((VV[39]->s.s_dbind));
	base[2]= (V209);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk171)();
	vs_top=sup;
	V210= vs_base[0];
T963:;
	if(!(number_compare((V209),(VV[37]->s.s_dbind))<0)){
	goto T964;}
	base[2]= (VV[48]->s.s_dbind);
	base[3]= VV[118];
	base[4]= (V208);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	{object V211 = vs_base[0];
	VMR32(V211)}
T964:;
	if(((*(LnkLI170))((V209)))==Cnil){
	goto T971;}
	V212= symbol_name((V210));
	V213= (VV[201]->s.s_gfdef);
	if(((VFUN_NARGS=4,(*(LnkLI200))((V208),/* INLINE-ARGS */V212,VV[104],V213)))==Cnil){
	goto T971;}
	base[2]= (V209);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk202)();
	vs_top=sup;
	{object V214 = Cnil;
	VMR32(V214)}
T971:;
	V209= one_minus((V209));
	base[2]= (V209);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk171)();
	vs_top=sup;
	V210= vs_base[0];
	goto T963;}}
}
/*	local entry for function BREAK-FORWARD-SEARCH-STACK	*/

static object LI33(V216)

object V216;
{	 VMB33 VMS33 VMV33
TTL:;
	{register object V217;
	V217= Cnil;
	V217= coerce_to_string((V216));
	{register object V218;
	register object V219;
	V218= one_plus((VV[39]->s.s_dbind));
	base[2]= (V218);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk171)();
	vs_top=sup;
	V219= vs_base[0];
T992:;
	if(!(number_compare((V218),(VV[38]->s.s_dbind))>0)){
	goto T993;}
	base[2]= (VV[48]->s.s_dbind);
	base[3]= VV[119];
	base[4]= (V217);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	{object V220 = vs_base[0];
	VMR33(V220)}
T993:;
	if(((*(LnkLI170))((V218)))==Cnil){
	goto T1000;}
	V221= symbol_name((V219));
	V222= (VV[201]->s.s_gfdef);
	if(((VFUN_NARGS=4,(*(LnkLI200))((V217),/* INLINE-ARGS */V221,VV[104],V222)))==Cnil){
	goto T1000;}
	base[2]= (V218);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk202)();
	vs_top=sup;
	{object V223 = Cnil;
	VMR33(V223)}
T1000:;
	V218= one_plus((V218));
	base[2]= (V218);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk171)();
	vs_top=sup;
	V219= vs_base[0];
	goto T992;}}
}
/*	local entry for function BREAK-HELP	*/

static object LI34()

{	 VMB34 VMS34 VMV34
TTL:;
	{register object V224;
	object V225;
	V224= VV[120];
	V225= CMPcar((V224));
T1018:;
	if(!(((V224))==Cnil)){
	goto T1019;}
	goto T1014;
T1019:;
	base[1]= (VV[48]->s.s_dbind);
	base[2]= (V225);
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	V224= CMPcdr((V224));
	V225= CMPcar((V224));
	goto T1018;}
T1014:;
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[121];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	{register object V226;
	register object V227;
	register object V228;
	{object V229;
	base[0]= VV[122];
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V229= vs_base[0];
	base[0]= (V229);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1039;}
	V226= (V229);
	goto T1035;
T1039:;
	base[0]= coerce_to_string((V229));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V226= vs_base[0];}
T1035:;
	V227= Cnil;
	V228= Cnil;
	{int V230;
	register int V231;
	base[0]= (V226);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk203)();
	if(vs_base>=vs_top){vs_top=sup;goto T1045;}
	V230= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1046;}
	V231= fix(vs_base[0]);
	vs_top=sup;
	goto T1047;
T1045:;
	V230= fix(Cnil);
T1046:;
	V231= fix(Cnil);
T1047:;
	{object V232;
	register object V233;
	V234 = make_fixnum(V231);
	V235 = make_fixnum(V230);
	V232= number_plus(V234,V235);
	V233= small_fixnum(0);
T1051:;
	if(!(number_compare((V233),(V232))>=0)){
	goto T1052;}
	V227= Cnil;
	goto T1034;
T1052:;
	V236 = make_fixnum(V231);
	if(!(number_compare((V233),V236)<0)){
	goto T1063;}
	base[1]= (V226);
	base[2]= (V233);
	vs_top=(vs_base=base+1)+2;
	siLpackage_internal();
	vs_top=sup;
	V228= vs_base[0];
	goto T1061;
T1063:;
	base[1]= (V226);
	V237 = make_fixnum(V231);
	base[2]= number_minus((V233),V237);
	vs_top=(vs_base=base+1)+2;
	siLpackage_external();
	vs_top=sup;
	V228= vs_base[0];
T1061:;
T1059:;
	if(((V228))!=Cnil){
	goto T1069;}
	goto T1060;
T1069:;
	V227= CMPcar((V228));
	{object V238 =((V227))->s.s_plist;
	 object ind= VV[54];
	while(V238!=Cnil){
	if(V238->c.c_car==ind){
	if(((V238->c.c_cdr->c.c_car))==Cnil){
	goto T1074;}
	goto T1076;
	}else V238=V238->c.c_cdr->c.c_cdr;}
	goto T1074;}
T1076:;
	base[1]= (VV[48]->s.s_dbind);
	base[2]= VV[123];
	base[3]= (V227);
	{object V239 =((V227))->s.s_plist;
	 object ind= VV[54];
	while(V239!=Cnil){
	if(V239->c.c_car==ind){
	base[4]= (V239->c.c_cdr->c.c_car);
	goto T1080;
	}else V239=V239->c.c_cdr->c.c_cdr;}
	base[4]= Cnil;}
T1080:;
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;
T1074:;
	V228= CMPcdr((V228));
	goto T1059;
T1060:;
	goto T1057;
T1057:;
	V233= one_plus((V233));
	goto T1051;}}}
T1034:;
	vs_base=vs_top=base+0;
	vs_base[0]=Cnil;
	vs_top=sup;
	{object V240 = vs_base[0];
	VMR34(V240)}
}
/*	function definition for COERCE-SLASH-TERMINATED	*/

static L35()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	{register object V241;
	V241=(base[0]);
	vs_top=sup;
TTL:;
	if(!(type_of((V241))==t_string)){
	goto T1087;}
	goto T1086;
T1087:;
	base[1]= VV[124];
	base[2]= (V241);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
T1086:;
	{int V242;
	V242= ((V241))->v.v_fillp;
	if(!((V242)>(0))){
	goto T1093;}
	if((((V241))->ust.ust_self[(V242)-(1)])==(47)){
	goto T1091;}
T1093:;
	base[1]= Cnil;
	base[2]= VV[126];
	base[3]= (V241);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	V241= vs_base[0];}
T1091:;
	base[1]= (V241);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for FIX-LOAD-PATH	*/

static L36()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	{object V243;
	V243=(base[0]);
	vs_top=sup;
TTL:;
	if(equal((V243),(VV[127]->s.s_dbind))){
	goto T1101;}
	{register object V244;
	V244= (V243);
T1106:;
	if(!(type_of((V244))!=t_cons)){
	goto T1107;}
	goto T1104;
T1107:;
	{register object V246;
	base[2]= CMPcar((V244));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk204)();
	vs_top=sup;
	V246= vs_base[0];
	(V244)->c.c_car = (V246);}
	V244= CMPcdr((V244));
	goto T1106;}
T1104:;
	{register object V247;
	V247= (V243);
T1119:;
	if(!(type_of((V247))!=t_cons)){
	goto T1120;}
	goto T1101;
T1120:;
	{register object V248;
	V248= (V247);
T1126:;
	if(!(type_of(CMPcdr((V248)))!=t_cons)){
	goto T1127;}
	goto T1124;
T1127:;
	if(!(equal(CMPcadr((V248)),CMPcar((V247))))){
	goto T1131;}
	{register object V249;
	register object V250;
	V249= (V248);
	V250= CMPcddr((V248));
	((V249))->c.c_cdr = (V250);}
T1131:;
	V248= CMPcdr((V248));
	goto T1126;}
T1124:;
	V247= CMPcdr((V247));
	goto T1119;}
T1101:;
	(VV[127]->s.s_dbind)= (V243);
	base[1]= (VV[127]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for FILE-SEARCH	*/

static L37()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	bds_check;
	{register object V251;
	object V252;
	object V253;
	object V254;
	V251=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1144;}
	V252=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1145;}
	V253=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1146;}
	V254=(base[3]);
	vs_top=sup;
	goto T1147;
T1144:;
	V252= (VV[128]->s.s_dbind);
T1145:;
	V253= (VV[129]->s.s_dbind);
T1146:;
	V254= Ct;
T1147:;
	{register object V255;
	V255= Cnil;
	base[4]= (V252);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk205)();
	vs_top=sup;
	{register object V256;
	register object V257;
	V256= (V252);
	V257= CMPcar((V256));
T1158:;
	if(!(((V256))==Cnil)){
	goto T1159;}
	goto T1154;
T1159:;
	{register object V258;
	register object V259;
	V258= (V253);
	V259= CMPcar((V258));
T1167:;
	if(!(((V258))==Cnil)){
	goto T1168;}
	goto T1163;
T1168:;
	base[6]= (V257);
	base[7]= (V251);
	base[8]= (V259);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk153)();
	vs_top=sup;
	V255= vs_base[0];
	if(!((file_exists((V255))))){
	goto T1172;}
	base[6]= (V255);
	vs_top=(vs_base=base+6)+1;
	return;
T1172:;
	V258= CMPcdr((V258));
	V259= CMPcar((V258));
	goto T1167;}
T1163:;
	V256= CMPcdr((V256));
	V257= CMPcar((V256));
	goto T1158;}
T1154:;
	if(((V254))==Cnil){
	goto T1190;}
	bds_bind(VV[130],Cnil);
	base[5]= VV[131];
	base[6]= VV[132];
	base[7]= (V252);
	base[8]= (V251);
	base[9]= (V253);
	vs_top=(vs_base=base+5)+5;
	Lcerror();
	vs_top=sup;
	base[5]= (VV[130]->s.s_dbind);
	vs_top=(vs_base=base+5)+1;
	bds_unwind1;
	return;
T1190:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	function definition for ALOAD	*/

static L38()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	{object V260;
	V260=(base[0]);
	vs_top=sup;
TTL:;
	base[2]= (V260);
	base[3]= (VV[128]->s.s_dbind);
	base[4]= (VV[129]->s.s_dbind);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk206)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk146)();
	return;
	}
}
/*	function definition for AUTOLOAD	*/

static L39()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	bds_check;
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	vs_top=sup;
	bds_bind(VV[133],Ct);
	base[3]= (base[0]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1202;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;
T1202:;
	base[3]= (base[0]->c.c_car);
	base[4]= 
	make_cclosure_new(LC45,Cnil,base[1],Cdata);
	vs_top=(vs_base=base+3)+2;
	siLfset();
	bds_unwind1;
	return;
}
/*	function definition for AUTOLOAD-MACRO	*/

static L40()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	bds_check;
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	vs_top=sup;
	bds_bind(VV[133],Ct);
	base[3]= (base[0]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1207;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;
T1207:;
	{object V261;
	object V262;
	V261= (base[0]->c.c_car);
	V262= 
	make_cclosure_new(LC46,Cnil,base[1],Cdata);
	base[4]= (V261);
	base[5]= make_cons(VV[134],(V262));
	vs_top=(vs_base=base+4)+2;
	siLfset();
	vs_top=sup;
	base[4]= (V262);
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	return;}
}
/*	function definition for GET-COMMAND-ARG	*/

static L41()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_check;
	{register object V263;
	register object V264;
	V263=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1215;}
	V264=(base[1]);
	vs_top=sup;
	goto T1216;
T1215:;
	V264= Cnil;
T1216:;
	{register object V265;
	V265= (VV[16]->s.s_dbind);
T1220:;
	V265= CMPcdr((V265));
	if((V265)!=Cnil){
	goto T1224;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T1224:;
	{register object V266;
	V266= CMPcar((V265));
	if(!((((V266))->ust.ust_self[0])==(((V263))->ust.ust_self[0]))){
	goto T1221;}
	if(!((((V266))->ust.ust_self[1])==(((V263))->ust.ust_self[1]))){
	goto T1221;}
	if(!(equal((V266),(V263)))){
	goto T1221;}
	{register object V267;
	V267= (V264);
	if(((V267))==Cnil){
	goto T1233;}
	base[2]= (V267);
	vs_top=(vs_base=base+2)+1;
	return;
T1233:;
	if((CMPcadr((V265)))==Cnil){
	goto T1236;}
	base[2]= CMPcadr((V265));
	base[3]= CMPcdr((V265));
	vs_top=(vs_base=base+2)+2;
	return;
T1236:;
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;}}
T1221:;
	goto T1220;}
	}
}
/*	function definition for SET-DIR	*/

static L42()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_check;
	{object V268;
	object V269;
	V268=(base[0]);
	V269=(base[1]);
	vs_top=sup;
TTL:;
	{object V270;{object V271;
	base[2]= (V269);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk207)();
	vs_top=sup;
	V271= vs_base[0];
	if(V271==Cnil)goto T1242;
	V270= V271;
	goto T1241;
T1242:;}
	if(((V268))->s.s_dbind!=OBJNULL){
	goto T1245;}
	V270= Cnil;
	goto T1241;
T1245:;
	base[2]= (V268);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_value();
	vs_top=sup;
	V270= vs_base[0];
T1241:;
	if(((V270))==Cnil){
	goto T1249;}
	base[2]= (V268);
	base[4]= (V270);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk204)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lset();
	return;
T1249:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for SET-UP-TOP-LEVEL	*/

static L43()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	bds_check;
	vs_top=sup;
TTL:;
	{register int V272;
	register object V273;
	vs_base=vs_top;
	(void) (*Lnk208)();
	vs_top=sup;
	V272= fix(vs_base[0]);
	V273= Cnil;
T1258:;
	V272= (V272)-(1);
	if(!((V272)<(0))){
	goto T1263;}
	goto T1256;
T1263:;
	base[0]= make_fixnum(V272);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk209)();
	vs_top=sup;
	V274= vs_base[0];
	V273= make_cons(V274,(V273));
	goto T1258;
T1256:;
	(VV[16]->s.s_dbind)= (V273);
	V273= (VV[135]->s.s_dbind);
	{object V275;
	base[0]= VV[136];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk210)();
	vs_top=sup;
	V275= vs_base[0];{object V276;
	base[0]= VV[135];
	base[1]= VV[137];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk211)();
	vs_top=sup;
	V276= vs_base[0];
	if(V276==Cnil)goto T1276;
	goto T1275;
T1276:;}
	if(((V275))==Cnil){
	goto T1275;}
	base[0]= (V275);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk204)();
	vs_top=sup;
	(VV[135]->s.s_dbind)= vs_base[0];
T1275:;
	if(((VV[128]->s.s_dbind))==Cnil){
	goto T1285;}
	if(equal((V273),(VV[135]->s.s_dbind))){
	goto T1284;}
T1285:;
	base[0]= (VV[135]->s.s_dbind);
	base[1]= VV[138];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk153)();
	vs_top=sup;
	V277= vs_base[0];
	(VV[128]->s.s_dbind)= make_cons(V277,(VV[128]->s.s_dbind));
	base[0]= (VV[135]->s.s_dbind);
	base[1]= VV[139];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk153)();
	vs_top=sup;
	V278= vs_base[0];
	(VV[128]->s.s_dbind)= make_cons(V278,(VV[128]->s.s_dbind));
T1284:;
	base[2]= VV[141];
	base[3]= Cnil;
	base[4]= VV[142];
	base[6]= small_fixnum(0);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk209)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+2)+4;
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
	(VV[140]->s.s_dbind)= vs_base[0];
	base[0]= VV[140];
	base[1]= VV[143];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk211)();
	vs_top=sup;
	base[0]= VV[144];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk207)();
	if(vs_base<vs_top){
	V273= vs_base[0];
	vs_base++;
	}else{
	V273= Cnil;}
	if(vs_base<vs_top){
	V273= vs_base[0];
	}else{
	V273= Cnil;}
	vs_top=sup;
	if(((V273))==Cnil){
	goto T1311;}
	bds_bind(VV[15],Cnil);
	base[1]= (VV[16]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk147)();
	vs_top=sup;
	(VV[16]->s.s_dbind)= (V273);
	base[1]= CMPcar((VV[16]->s.s_dbind));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk212)();
	bds_unwind1;
	return;
T1311:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;}}
}
/*	function definition for DO-F	*/

static L44()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM44; VC44
	vs_check;
	bds_check;
	{VOL object V279;
	V279=(base[0]);
	vs_top=sup;
TTL:;
	base[1]= VV[145];
	base[2]= Cnil;
	bds_bind(VV[43],Cnil);
	frs_push(FRS_CATCH,(VV[11]->s.s_dbind));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	goto T1320;}
	else{
	base[5]= (V279);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk213)();
	vs_top=sup;
	base[4]= vs_base[0];
	{object tag;frame_ptr fr;object p;bool active;
	frs_push(FRS_PROTECT,Cnil);
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	base[6]= base[4];
	vs_top=(vs_base=base+6)+1;
	Lread_line();
	vs_top=sup;
T1329:;
	base[6]= base[4];
	base[7]= Cnil;
	base[8]= base[1];
	vs_top=(vs_base=base+6)+3;
	Lread();
	vs_top=sup;
	base[2]= vs_base[0];
	if(!((base[1])==(base[2]))){
	goto T1336;}
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	goto T1325;
T1336:;
	base[6]= base[2];
	vs_top=(vs_base=base+6)+1;
	Leval();
	vs_top=sup;
	goto T1329;
T1325:;
	active=FALSE;}
	base[5]=Cnil;
	while(vs_base<vs_top)
	{base[5]=MMcons(vs_top[-1],base[5]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if((base[4])==Cnil){
	goto T1341;}
	base[6]= base[4];
	vs_top=(vs_base=base+6)+1;
	Lclose();
	vs_top=sup;
T1341:;
	vs_base=vs_top=base+6;
	for(p= base[5];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	vs_top=sup;}}
	vs_base=vs_top;
	Lby();
	vs_top=sup;
	frs_pop();}
T1320:;
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+4)+1;
	Lby();
	bds_unwind1;
	return;
	}
}
/*	local function CLOSURE	*/

static LC46(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	{object V280;
	object V281;
	V280=(base[0]);
	V281=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk214)();
	vs_top=sup;
	base[2]= (V280);
	base[3]= (V281);
	vs_top=(vs_base=base+2)+2;
	super_funcall_no_event((base0[1]->c.c_car));
	return;
	}
}
/*	local function CLOSURE	*/

static LC45(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	{object V282;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V282=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk214)();
	vs_top=sup;
	base[1]= (base0[1]->c.c_car);
	{object V283;
	V283= (V282);
	 vs_top=base+2;
	 while(V283!=Cnil)
	 {vs_push((V283)->c.c_car);V283=(V283)->c.c_cdr;}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	return;
	}
}
static LnkT214(){ call_or_link(VV[214],&Lnk214);} /* ALOAD */
static LnkT213(){ call_or_link(VV[213],&Lnk213);} /* OPEN */
static LnkT212(){ call_or_link(VV[212],&Lnk212);} /* DO-F */
static LnkT211(){ call_or_link(VV[211],&Lnk211);} /* SET-DIR */
static LnkT210(){ call_or_link(VV[210],&Lnk210);} /* GETENV */
static LnkT209(){ call_or_link(VV[209],&Lnk209);} /* ARGV */
static LnkT208(){ call_or_link(VV[208],&Lnk208);} /* ARGC */
static LnkT207(){ call_or_link(VV[207],&Lnk207);} /* GET-COMMAND-ARG */
static LnkT206(){ call_or_link(VV[206],&Lnk206);} /* FILE-SEARCH */
static LnkT205(){ call_or_link(VV[205],&Lnk205);} /* FIX-LOAD-PATH */
static LnkT204(){ call_or_link(VV[204],&Lnk204);} /* COERCE-SLASH-TERMINATED */
static LnkT203(){ call_or_link(VV[203],&Lnk203);} /* PACKAGE-SIZE */
static LnkT202(){ call_or_link(VV[202],&Lnk202);} /* BREAK-GO */
static object  LnkTLI200(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[200],&LnkLI200,ap);} /* SEARCH */
static LnkT199(){ call_or_link(VV[199],&Lnk199);} /* INTERNAL-SUPER-GO */
static object  LnkTLI198(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[198],&LnkLI198,2,ap);} /* LIST-DELQ */
static LnkT197(){ call_or_link(VV[197],&Lnk197);} /* IHS-NOT-INTERPRETED-ENV */
static LnkT196(){ call_or_link(VV[196],&Lnk196);} /* COMPILED-FUNCTION-NAME */
static object  LnkTLI194(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[194],&LnkLI194,ap);} /* REMOVE */
static LnkT191(){ call_or_link(VV[191],&Lnk191);} /* SPICEP */
static LnkT190(){ call_or_link(VV[190],&Lnk190);} /* FRS-TAG */
static LnkT188(){ call_or_link(VV[188],&Lnk188);} /* FRS-CLASS */
static LnkT187(){ call_or_link(VV[187],&Lnk187);} /* FRS-VS */
static object  LnkTLI186(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[186],&LnkLI186,1,ap);} /* FRS-KIND */
static LnkT182(){ call_or_link(VV[182],&Lnk182);} /* IHS-FUN */
static LnkT181(){ call_or_link(VV[181],&Lnk181);} /* FRS-IHS */
static LnkT180(){ call_or_link(VV[180],&Lnk180);} /* BDS-VAL */
static object  LnkTLI179(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[179],&LnkLI179,1,ap);} /* PRINT-FRS */
static LnkT178(){ call_or_link(VV[178],&Lnk178);} /* BDS-VAR */
static LnkT177(){ call_or_link(VV[177],&Lnk177);} /* FRS-BDS */
static LnkT176(){ call_or_link(VV[176],&Lnk176);} /* BREAK-VS */
static LnkT175(){ call_or_link(VV[175],&Lnk175);} /* VS */
static object  LnkTLI174(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[174],&LnkLI174,1,ap);} /* PRINT-IHS */
static LnkT173(){ call_or_link(VV[173],&Lnk173);} /* IHS-VS */
static LnkT172(){ call_or_link(VV[172],&Lnk172);} /* BREAK-PREVIOUS */
static LnkT171(){ call_or_link(VV[171],&Lnk171);} /* IHS-FNAME */
static object  LnkTLI170(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[170],&LnkLI170,1,ap);} /* IHS-VISIBLE */
static object  LnkTLI169(){return call_proc0(VV[169],&LnkLI169);} /* SET-ENV */
static LnkT168(){ call_or_link(VV[168],&Lnk168);} /* COMPLETE-PROP */
static LnkT167(){ call_or_link(VV[167],&Lnk167);} /* BREAK-LEVEL */
static LnkT166(){ call_or_link(VV[166],&Lnk166);} /* BREAK */
static LnkT163(){ call_or_link(VV[163],&Lnk163);} /* DBL-READ */
static LnkT162(){ call_or_link(VV[162],&Lnk162);} /* SET-BACK */
static object  LnkTLI161(){return call_proc0(VV[161],&LnkLI161);} /* SET-CURRENT */
static LnkT160(){ call_or_link(VV[160],&Lnk160);} /* CATCH-FATAL */
static LnkT159(){ call_or_link(VV[159],&Lnk159);} /* BREAK-QUIT */
static LnkT158(){ call_or_link(VV[158],&Lnk158);} /* SIMPLE-BACKTRACE */
static LnkT157(){ call_or_link(VV[157],&Lnk157);} /* FRS-TOP */
static LnkT156(){ call_or_link(VV[156],&Lnk156);} /* SCH-FRS-BASE */
static LnkT155(){ call_or_link(VV[155],&Lnk155);} /* IHS-TOP */
static LnkT154(){ call_or_link(VV[154],&Lnk154);} /* MAKE-STRING-INPUT-STREAM */
static LnkT153(){ call_or_link(VV[153],&Lnk153);} /* STRING-CONCATENATE */
static LnkT152(){ call_or_link(VV[152],&Lnk152);} /* READ-FROM-STRING */
static LnkT151(){ call_or_link(VV[151],&Lnk151);} /* BREAK-CURRENT */
static LnkT147(){ call_or_link(VV[147],&Lnk147);} /* PROCESS-SOME-ARGS */
static LnkT146(){ call_or_link(VV[146],&Lnk146);} /* LOAD */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

