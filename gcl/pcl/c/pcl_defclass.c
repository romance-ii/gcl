
#include "cmpinclude.h"
#include "pcl_defclass.h"
void init_pcl_defclass(){do_init(VV);}
/*	local entry for function MAKE-TOP-LEVEL-FORM	*/

static object LI3(V4,V5,V6)

object V4;object V5;object V6;
{	 VMB1 VMS1 VMV1
	bds_check;
	goto TTL;
TTL:;
	base[0]= (V4);
	vs_base=vs_top;
	L4(base);
	vs_top=sup;
	{object V7;
	bds_bind(VV[0],Cnil);
	vs_base=vs_top;
	L4(base);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Lgensym();
	vs_top=sup;
	V7= vs_base[0];
	base[3]= VV[1];
	vs_top=(vs_base=base+3)+1;
	Lgensym();
	vs_top=sup;
	V8= list(4,VV[3],(V7),Cnil,(V6));
	{object V9 = list(4,VV[2],(V5),/* INLINE-ARGS */V8,make_cons((V7),Cnil));
	bds_unwind1;
	VMR1(V9)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-PROGN	*/

static object LI5(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB2 VMS2 VMV2
	{object V10;
	va_start(ap,first);
	narg= narg - 0;
	V11 = list_vector_new(narg,first,ap);
	V10= V11;
	base[0]= Cnil;
	base[1]= (V10);
	vs_top=(vs_base=base+1)+1;
	L6(base);
	vs_top=sup;
	{object V12 = make_cons(VV[7],base[0]);
	VMR2(V12)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	macro definition for DEFCLASS	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V13=base[0]->c.c_cdr;
	if(endp(V13))invalid_macro_call();
	base[2]= (V13->c.c_car);
	V13=V13->c.c_cdr;
	if(endp(V13))invalid_macro_call();
	base[3]= (V13->c.c_car);
	V13=V13->c.c_cdr;
	if(endp(V13))invalid_macro_call();
	base[4]= (V13->c.c_car);
	V13=V13->c.c_cdr;
	base[5]= V13;}
	base[6]= (*(LnkLI95))(base[2],base[3],base[4],base[5]);
	vs_top=(vs_base=base+6)+1;
	return;
}
/*	local entry for function EXPAND-DEFCLASS	*/

static object LI8(V18,V19,V20,V21)

register object V18;object V19;object V20;register object V21;
{	 VMB4 VMS4 VMV4
	bds_check;
	goto TTL;
TTL:;
	base[0]= (V19);
	vs_top=(vs_base=base+0)+1;
	Lcopy_tree();
	vs_top=sup;
	V19= vs_base[0];
	base[0]= (V20);
	vs_top=(vs_base=base+0)+1;
	Lcopy_tree();
	vs_top=sup;
	V20= vs_base[0];
	base[0]= (V21);
	vs_top=(vs_base=base+0)+1;
	Lcopy_tree();
	vs_top=sup;
	V21= vs_base[0];
	{register object V22;
	V22= VV[11];
	{register object V23;
	register object V24;
	V23= (V21);
	V24= CMPcar((V23));
	goto T21;
T21:;
	if(!(((V23))==Cnil)){
	goto T22;}
	goto T17;
	goto T22;
T22:;
	if(type_of((V24))==t_cons||((V24))==Cnil){
	goto T28;}
	base[1]= VV[12];
	base[2]= (V24);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	goto T26;
	goto T28;
T28:;
	if(!((CMPcar((V24)))==(VV[13]))){
	goto T26;}
	if(((*(LnkLI96))(CMPcadr((V24))))!=Cnil){
	goto T34;}
	base[1]= VV[14];
	base[2]= CMPcadr((V24));
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	goto T34;
T34:;
	V22= CMPcadr((V24));
	base[1]= (V24);
	base[2]= (V21);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk97)();
	vs_top=sup;
	V21= vs_base[0];
	goto T17;
	goto T26;
T26:;
	V23= CMPcdr((V23));
	V24= CMPcar((V23));
	goto T21;}
	goto T17;
T17:;
	bds_bind(VV[18],Cnil);
	bds_bind(VV[17],Cnil);
	bds_bind(VV[16],Cnil);
	bds_bind(VV[15],Cnil);
	{object V25;
	object V26;
	object V27;
	{object V28;
	object V29= (V20);
	if(V29==Cnil){
	V25= Cnil;
	goto T50;}
	base[4]=V28=MMcons(Cnil,Cnil);
	goto T51;
T51:;
	(V28->c.c_car)= (*(LnkLI98))((V18),(V29->c.c_car));
	if((V29=MMcdr(V29))==Cnil){
	V25= base[4];
	goto T50;}
	V28=MMcdr(V28)=MMcons(Cnil,Cnil);
	goto T51;}
	goto T50;
T50:;
	{object V31;
	object V32= (V21);
	if(V32==Cnil){
	V26= Cnil;
	goto T53;}
	base[4]=V31=MMcons(Cnil,Cnil);
	goto T54;
T54:;
	(V31->c.c_car)= (*(LnkLI99))((V18),(V32->c.c_car));
	if((V32=MMcdr(V32))==Cnil){
	V26= base[4];
	goto T53;}
	V31=MMcdr(V31)=MMcons(Cnil,Cnil);
	goto T54;}
	goto T53;
T53:;
	if(((VV[9]->s.s_dbind))==(VV[19])){
	goto T57;}
	V27= Cnil;
	goto T56;
	goto T57;
T57:;
	{object V34;
	V34= (VFUN_NARGS=2,(*(LnkLI100))((V22),Cnil));
	if((V34)==Cnil){
	V27= Cnil;
	goto T56;}
	base[4]= (V34);
	base[5]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk101)();
	vs_top=sup;
	V27= vs_base[0];}
	goto T56;
T56:;
	(void)((*(LnkLI102))((VV[17]->s.s_dbind)));
	{object V35;
	V36= list(2,VV[20],(V18));
	if(((V27))==Cnil){
	goto T66;}
	V37= VV[21];
	goto T64;
	goto T66;
T66:;
	V37= (VV[10]->s.s_dbind);
	goto T64;
T64:;
	{object V39;
	object V40= Cnil;
	if(V40==Cnil){
	base[4]= Cnil;
	goto T69;}
	base[5]=V39=MMcons(Cnil,Cnil);
	goto T70;
T70:;
	(V39->c.c_car)= list(2,VV[22],list(3,VV[23],VV[24],(V40->c.c_car)));
	if((V40=MMcdr(V40))==Cnil){
	base[4]= base[5];
	goto T69;}
	V39=MMcdr(V39)=MMcons(Cnil,Cnil);
	goto T70;}
	goto T69;
T69:;
	{object V42;
	object V43= Cnil;
	if(V43==Cnil){
	base[5]= Cnil;
	goto T72;}
	base[6]=V42=MMcons(Cnil,Cnil);
	goto T73;
T73:;
	(V42->c.c_car)= list(2,VV[22],list(3,VV[23],VV[25],(V43->c.c_car)));
	if((V43=MMcdr(V43))==Cnil){
	base[5]= base[6];
	goto T72;}
	V42=MMcdr(V42)=MMcons(Cnil,Cnil);
	goto T73;}
	goto T72;
T72:;
	base[8]= (VV[18]->s.s_dbind);
	{object V46;
	object V47= base[8];
	if(V47==Cnil){
	V45= Cnil;
	goto T76;}
	base[7]=V46=MMcons(Cnil,Cnil);
	goto T77;
T77:;
	(V46->c.c_car)= CMPcdr((V47->c.c_car));
	if((V47=MMcdr(V47))==Cnil){
	V45= base[7];
	goto T76;}
	V46=MMcdr(V46)=MMcons(Cnil,Cnil);
	goto T77;}
	goto T76;
T76:;
	V48= list(2,VV[28],(V18));
	V49= list(2,VV[28],(V22));
	V50= list(2,VV[28],(V19));
	V51= make_cons(VV[29],(V25));
	if(((V27))==Cnil){
	goto T82;}
	base[7]= VV[30];
	goto T80;
	goto T82;
T82:;
	base[7]= Cnil;
	goto T80;
T80:;
	{object V53;
	V53= (V26);
	 vs_top=base+8;
	 while(V53!=Cnil)
	 {vs_push((V53)->c.c_car);V53=(V53)->c.c_cdr;}
	vs_base=base+7;}
	Lappend();
	vs_top=sup;
	V52= vs_base[0];
	V54= make_cons(VV[29],V52);
	V55= list(3,VV[26],V45,list(7,VV[27],/* INLINE-ARGS */V48,/* INLINE-ARGS */V49,/* INLINE-ARGS */V50,/* INLINE-ARGS */V51,/* INLINE-ARGS */V54,list(2,VV[28],(VV[17]->s.s_dbind))));
	base[6]= make_cons(/* INLINE-ARGS */V55,Cnil);
	vs_top=(vs_base=base+4)+3;
	Lappend();
	vs_top=sup;
	V38= vs_base[0];
	V56= make_cons(VV[7],V38);
	V35= (*(LnkLI103))(/* INLINE-ARGS */V36,V37,/* INLINE-ARGS */V56);
	if(((V27))==Cnil){
	goto T86;}
	base[4]= (V35);
	vs_top=(vs_base=base+4)+1;
	Leval();
	vs_top=sup;
	base[4]= (VFUN_NARGS=1,(*(LnkLI100))((V18)));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk104)(Lclptr104);
	vs_top=sup;
	V57= vs_base[0];
	{object V58 = list(3,VV[7],V57,(V35));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR4(V58)}
	goto T86;
T86:;
	if(!(((VV[9]->s.s_dbind))==(VV[19]))){
	goto T92;}
	{register object x= VV[31],V59= (VV[10]->s.s_dbind);
	while(V59!=Cnil)
	if(eql(x,V59->c.c_car)){
	goto T92;
	}else V59=V59->c.c_cdr;}
	(void)((*(LnkLI105))((V18)));
	goto T92;
T92:;
	{object V60 = (V35);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR4(V60)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-INITFUNCTION	*/

static object LI9(V62)

register object V62;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	if(((V62))==(Ct)){
	goto T97;}
	if(!(equal((V62),VV[32]))){
	goto T98;}
	goto T97;
T97:;
	{object V63 = VV[33];
	VMR5(V63)}
	goto T98;
T98:;
	if(((V62))==(Cnil)){
	goto T102;}
	if(!(equal((V62),VV[34]))){
	goto T103;}
	goto T102;
T102:;
	{object V64 = VV[35];
	VMR5(V64)}
	goto T103;
T103:;
	if(eql((V62),small_fixnum(0))){
	goto T107;}
	if(!(equal((V62),VV[36]))){
	goto T108;}
	goto T107;
T107:;
	{object V65 = VV[37];
	VMR5(V65)}
	goto T108;
T108:;
	{register object V66;
	{register object x= (V62),V67= (VV[18]->s.s_dbind);
	while(V67!=Cnil)
	if(equal(x,V67->c.c_car->c.c_car) &&V67->c.c_car != Cnil){
	V66= (V67->c.c_car);
	goto T112;
	}else V67=V67->c.c_cdr;
	V66= Cnil;}
	goto T112;
T112:;
	if(((V66))!=Cnil){
	goto T113;}
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V68= vs_base[0];
	V66= list(3,(V62),V68,list(2,VV[38],list(3,VV[39],Cnil,(V62))));
	(VV[18]->s.s_dbind)= make_cons(V66,(VV[18]->s.s_dbind));
	goto T113;
T113:;
	{object V70 = CMPcadr((V66));
	VMR5(V70)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CANONICALIZE-SLOT-SPECIFICATION	*/

static object LI10(V73,V74)

object V73;register object V74;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	if(!(type_of((V74))==t_symbol)){
	goto T121;}
	if((type_of((V74))==t_symbol&&((V74))->s.s_hpack==keyword_package)){
	goto T121;}
	{register object x= (V74),V75= VV[40];
	while(V75!=Cnil)
	if(x==(V75->c.c_car)){
	goto T121;
	}else V75=V75->c.c_cdr;}
	{object V76 = list(2,VV[28],list(2,VV[41],(V74)));
	VMR6(V76)}
	goto T121;
T121:;
	if(type_of((V74))==t_cons){
	goto T128;}
	base[0]= VV[42];
	base[1]= (V74);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V77 = vs_base[0];
	VMR6(V77)}
	goto T128;
T128:;
	if((CMPcdr((V74)))!=Cnil){
	goto T133;}
	{object V78 = list(2,VV[28],list(2,VV[41],CMPcar((V74))));
	VMR6(V78)}
	goto T133;
T133:;
	if((CMPcddr((V74)))!=Cnil){
	goto T136;}
	base[0]= VV[43];
	base[1]= (V73);
	base[2]= (V74);
	base[3]= list(3,CMPcar((V74)),VV[44],CMPcadr((V74)));
	vs_top=(vs_base=base+0)+4;
	Lerror();
	vs_top=sup;
	{object V79 = vs_base[0];
	VMR6(V79)}
	goto T136;
T136:;
	{object V80;
	register object V81;
	register object V82;
	object V83;
	object V84;
	object V85;
	{object V86;
	V86= CMPcar((V74));
	V74= CMPcdr((V74));
	V80= (V86);}
	V81= Cnil;
	V82= Cnil;
	V83= Cnil;
	V84= make_cons(Cnil,Cnil);
	base[3]= (V74);
	base[4]= VV[44];
	base[5]= (V84);
	vs_top=(vs_base=base+3)+3;
	Lgetf();
	vs_top=sup;
	V85= vs_base[0];
	{register object V87;
	register object V88;
	register object V89;
	V87= (V74);
	V88= Cnil;
	V89= Cnil;
	goto T156;
T156:;
	if(((V87))!=Cnil){
	goto T158;}
	goto T154;
	goto T158;
T158:;
	{object V90;
	V90= CMPcar((V87));
	V87= CMPcdr((V87));
	V88= (V90);}
	if(((V87))!=Cnil){
	goto T166;}
	base[3]= VV[45];
	base[4]= VV[46];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk106)();
	vs_top=sup;
	goto T166;
T166:;
	if(type_of((V88))==t_symbol){
	goto T171;}
	base[3]= VV[45];
	base[4]= VV[47];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk106)();
	vs_top=sup;
	goto T171;
T171:;
	{object V91;
	V91= CMPcar((V87));
	V87= CMPcdr((V87));
	V89= (V91);}
	{object V92= (V88);
	if((V92!= VV[49]))goto T181;
	(VV[17]->s.s_dbind)= make_cons(V89,(VV[17]->s.s_dbind));
	V81= make_cons(V89,(V81));
	{object V95;
	V95= list(2,VV[48],(V89));
	V82= make_cons((V95),(V82));
	goto T157;}
	goto T181;
T181:;
	if((V92!= VV[50]))goto T188;
	V81= make_cons(V89,(V81));
	goto T157;
	goto T188;
T188:;
	if((V92!= VV[51]))goto T190;
	V82= make_cons(V89,(V82));
	goto T157;
	goto T190;
T190:;
	if((V92!= VV[52]))goto T192;
	V83= make_cons(V89,(V83));
	goto T157;
	goto T192;
T192:;}
	goto T157;
T157:;
	goto T156;}
	goto T154;
T154:;
	goto T197;
T197:;
	{object V99;
	object V100;
	base[3]= (V74);
	base[4]= VV[49];
	vs_top=(vs_base=base+3)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T204;}
	V99= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T205;}
	V100= vs_base[0];
	vs_top=sup;
	goto T206;
	goto T204;
T204:;
	V99= Cnil;
	goto T205;
T205:;
	V100= Cnil;
	goto T206;
T206:;
	V74= (V99);
	if(((V100))!=Cnil){
	goto T198;}}
	goto T195;
	goto T198;
T198:;
	goto T197;
	goto T195;
T195:;
	goto T212;
T212:;
	{object V101;
	object V102;
	base[3]= (V74);
	base[4]= VV[50];
	vs_top=(vs_base=base+3)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T219;}
	V101= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T220;}
	V102= vs_base[0];
	vs_top=sup;
	goto T221;
	goto T219;
T219:;
	V101= Cnil;
	goto T220;
T220:;
	V102= Cnil;
	goto T221;
T221:;
	V74= (V101);
	if(((V102))!=Cnil){
	goto T213;}}
	goto T210;
	goto T213;
T213:;
	goto T212;
	goto T210;
T210:;
	goto T227;
T227:;
	{object V103;
	object V104;
	base[3]= (V74);
	base[4]= VV[51];
	vs_top=(vs_base=base+3)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T234;}
	V103= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T235;}
	V104= vs_base[0];
	vs_top=sup;
	goto T236;
	goto T234;
T234:;
	V103= Cnil;
	goto T235;
T235:;
	V104= Cnil;
	goto T236;
T236:;
	V74= (V103);
	if(((V104))!=Cnil){
	goto T228;}}
	goto T225;
	goto T228;
T228:;
	goto T227;
	goto T225;
T225:;
	goto T242;
T242:;
	{object V105;
	object V106;
	base[3]= (V74);
	base[4]= VV[52];
	vs_top=(vs_base=base+3)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T249;}
	V105= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T250;}
	V106= vs_base[0];
	vs_top=sup;
	goto T251;
	goto T249;
T249:;
	V105= Cnil;
	goto T250;
T250:;
	V106= Cnil;
	goto T251;
T251:;
	V74= (V105);
	if(((V106))!=Cnil){
	goto T243;}}
	goto T240;
	goto T243;
T243:;
	goto T242;
	goto T240;
T240:;
	(VV[15]->s.s_dbind)= append((V82),(VV[15]->s.s_dbind));
	(VV[16]->s.s_dbind)= append((V81),(VV[16]->s.s_dbind));
	V107= list(2,VV[28],(V80));
	V108= list(2,VV[28],(V81));
	V109= list(2,VV[28],(V82));
	V110= list(2,VV[28],(V83));
	V74= list(9,VV[41],/* INLINE-ARGS */V107,VV[53],/* INLINE-ARGS */V108,VV[54],/* INLINE-ARGS */V109,VV[55],/* INLINE-ARGS */V110,list(2,VV[28],(V74)));
	if(!(((V85))==((V84)))){
	goto T262;}
	{object V111 = make_cons(VV[56],(V74));
	VMR6(V111)}
	goto T262;
T262:;
	V112= (*(LnkLI107))((V85));
	{object V113 = listA(4,VV[56],VV[57],/* INLINE-ARGS */V112,(V74));
	VMR6(V113)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CANONICALIZE-DEFCLASS-OPTION	*/

static object LI11(V116,V117)

object V116;object V117;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V118= CMPcar((V117));
	if((V118!= VV[108]))goto T264;
	{register object V119;
	V119= Cnil;
	{register object V120;
	register object V121;
	register object V122;
	V122= CMPcdr((V117));
	V120= Cnil;
	V121= Cnil;
	goto T268;
T268:;
	if(((V122))!=Cnil){
	goto T270;}
	goto T266;
	goto T270;
T270:;
	{register object V123;
	V123= CMPcar((V122));
	V122= CMPcdr((V122));
	V120= (V123);}
	{register object V124;
	V124= CMPcar((V122));
	V122= CMPcdr((V122));
	V121= (V124);}
	{register object V125;
	V126= list(2,VV[28],(V120));
	V127= (*(LnkLI107))((V121));
	V125= list(4,VV[29],/* INLINE-ARGS */V126,/* INLINE-ARGS */V127,list(2,VV[28],(V121)));
	V119= make_cons((V125),(V119));}
	goto T268;
	goto T266;
T266:;
	V128= nreverse((V119));
	{object V129 = list(2,VV[58],make_cons(VV[29],/* INLINE-ARGS */V128));
	VMR7(V129)}}}
	goto T264;
T264:;
	V130= list(2,VV[28],CMPcar((V117)));
	{object V131 = list(2,/* INLINE-ARGS */V130,list(2,VV[28],CMPcdr((V117))));
	VMR7(V131)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-CLASS-DEFINITION	*/

static object LI12(V133)

object V133;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;{object V134;
	base[0]= (V133);
	base[1]= (VV[59]->s.s_dbind);
	base[2]= VV[60];
	base[3]= (VV[109]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk110)();
	vs_top=sup;
	V134= vs_base[0];
	if(V134==Cnil)goto T286;
	{object V135 = V134;
	VMR8(V135)}
	goto T286;
T286:;}
	base[0]= VV[61];
	base[1]= (V133);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V136 = vs_base[0];
	VMR8(V136)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-EARLY-CLASS-DEFINITION	*/

static object LI13(V143,V144,V145,V146,V147,V148)

object V143;object V144;object V145;object V146;object V147;object V148;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{object V149 = list(7,VV[62],(V143),(V144),(V145),(V146),(V147),(V148));
	VMR9(V149)}
	return Cnil;
}
/*	local entry for function ECD-CLASS-NAME	*/

static object LI14(V151)

object V151;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V152 = CMPcadr((V151));
	VMR10(V152)}
	return Cnil;
}
/*	local entry for function ECD-SOURCE	*/

static object LI15(V154)

object V154;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{object V155 = CMPcaddr((V154));
	VMR11(V155)}
	return Cnil;
}
/*	local entry for function ECD-METACLASS	*/

static object LI16(V157)

object V157;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V158 = CMPcadddr((V157));
	VMR12(V158)}
	return Cnil;
}
/*	local entry for function ECD-SUPERCLASS-NAMES	*/

static object LI17(V160)

object V160;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{object V161 = CMPcar(CMPcddddr((V160)));
	VMR13(V161)}
	return Cnil;
}
/*	local entry for function ECD-CANONICAL-SLOTS	*/

static object LI18(V163)

object V163;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{object V164 = CMPcadr(CMPcddddr((V163)));
	VMR14(V164)}
	return Cnil;
}
/*	local entry for function ECD-OTHER-INITARGS	*/

static object LI19(V166)

object V166;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V167 = CMPcaddr(CMPcddddr((V166)));
	VMR15(V167)}
	return Cnil;
}
/*	local entry for function CANONICAL-SLOT-NAME	*/

static object LI20(V169)

object V169;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	base[0]= (V169);
	base[1]= VV[41];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	{object V170 = vs_base[0];
	VMR16(V170)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-CLASS-SLOTS	*/

static object LI21(V172)

object V172;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;{object V174;
	{register object x= (V172),V175= (VV[63]->s.s_dbind);
	while(V175!=Cnil)
	if(eql(x,V175->c.c_car->c.c_car) &&V175->c.c_car != Cnil){
	V174= (V175->c.c_car);
	goto T298;
	}else V175=V175->c.c_cdr;
	V174= Cnil;}
	goto T298;
T298:;
	if(V174==Cnil)goto T297;
	V173= V174;
	goto T296;
	goto T297;
T297:;}
	{object V176;
	base[1]= (V172);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V180= vs_base[0];
	{object V178;
	object V179= V180;
	if(V179==Cnil){
	V177= Cnil;
	goto T300;}
	base[0]=V178=MMcons(Cnil,Cnil);
	goto T301;
T301:;
	(V178->c.c_car)= (*(LnkLI112))((V179->c.c_car));
	if((V179=MMcdr(V179))==Cnil){
	V177= base[0];
	goto T300;}
	V178=MMcdr(V178)=MMcons(Cnil,Cnil);
	goto T301;}
	goto T300;
T300:;
	V176= make_cons((V172),V177);
	(VV[63]->s.s_dbind)= make_cons(V176,(VV[63]->s.s_dbind));
	V173= (V176);}
	goto T296;
T296:;
	{object V182 = CMPcdr(V173);
	VMR17(V182)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-CLASS-SIZE	*/

static object LI22(V184)

object V184;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	V185= (*(LnkLI113))((V184));
	{long V186 = (long)length(/* INLINE-ARGS */V185);
	VMR18((object)V186)}
}
/*	function definition for EARLY-COLLECT-INHERITANCE	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{register object V187;
	check_arg(1);
	V187=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V188;
	V188= (*(LnkLI114))((V187));
	base[1]= (*(LnkLI115))((V188));
	base[2]= (V188);
	base[3]= (*(LnkLI116))((V188));
	{register object V189;
	register object V190;
	V189= Cnil;
	V190= Cnil;
	{register object V191;
	register object V192;
	V191= (VV[59]->s.s_dbind);
	V192= CMPcar((V191));
	goto T318;
T318:;
	if(!(((V191))==Cnil)){
	goto T319;}
	goto T314;
	goto T319;
T319:;
	V194= (*(LnkLI117))((V192));
	{register object x= (V187),V193= /* INLINE-ARGS */V194;
	while(V193!=Cnil)
	if(x==(V193->c.c_car)){
	goto T325;
	}else V193=V193->c.c_cdr;
	goto T323;}
	goto T325;
T325:;
	{register object V195;
	V195= (*(LnkLI109))((V192));
	if(((V189))!=Cnil){
	goto T328;}
	V190= make_cons((V195),Cnil);
	V189= (V190);
	goto T323;
	goto T328;
T328:;
	V197= make_cons((V195),Cnil);
	((V190))->c.c_cdr = /* INLINE-ARGS */V197;
	V196= (V190);
	V190= CMPcdr(V196);}
	goto T323;
T323:;
	V191= CMPcdr((V191));
	V192= CMPcar((V191));
	goto T318;}
	goto T314;
T314:;
	base[4]= (V189);}
	vs_top=(vs_base=base+1)+4;
	return;}
	}
}
/*	local entry for function EARLY-COLLECT-SLOTS	*/

static object LI24(V199)

object V199;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V200;
	object V201;
	register object V202;
	{object V203;
	object V204= (V199);
	if(V204==Cnil){
	V200= Cnil;
	goto T339;}
	base[3]=V203=MMcons(Cnil,Cnil);
	goto T340;
T340:;
	(V203->c.c_car)= (*(LnkLI62))((V204->c.c_car));
	if((V204=MMcdr(V204))==Cnil){
	V200= base[3];
	goto T339;}
	V203=MMcdr(V203)=MMcons(Cnil,Cnil);
	goto T340;}
	goto T339;
T339:;
	{object V205;
	object V206= (V200);
	if(V206==Cnil){
	V201= Cnil;
	goto T342;}
	base[3]=V205=MMcons(Cnil,Cnil);
	goto T343;
T343:;
	(V205->c.c_car)= (*(LnkLI118))((V206->c.c_car));
	if((V206=MMcdr(V206))==Cnil){
	V201= base[3];
	goto T342;}
	V205=MMcdr(V205)=MMcons(Cnil,Cnil);
	goto T343;}
	goto T342;
T342:;
	{object V207;
	V207= reverse((V201));
	 vs_top=base+3;
	 while(V207!=Cnil)
	 {vs_push((V207)->c.c_car);V207=(V207)->c.c_cdr;}
	vs_base=base+3;}
	Lappend();
	vs_top=sup;
	V202= vs_base[0];
	{register object V208;
	register object V209;
	V208= (V202);
	V209= CMPcar((V208));
	goto T351;
T351:;
	if(!(((V208))==Cnil)){
	goto T352;}
	goto T347;
	goto T352;
T352:;
	{register object V210;
	V210= (*(LnkLI112))((V209));
	{register object V211;
	register object V212;
	{register object x= (V209),V214= (V202);
	while(V214!=Cnil)
	if(x==(V214->c.c_car)){
	V213= V214;
	goto T359;
	}else V214=V214->c.c_cdr;
	V213= Cnil;}
	goto T359;
T359:;
	V211= CMPcdr(V213);
	V212= CMPcar((V211));
	goto T362;
T362:;
	if(!(((V211))==Cnil)){
	goto T363;}
	goto T356;
	goto T363;
T363:;
	V215= (*(LnkLI112))((V212));
	if(!(((V210))==(/* INLINE-ARGS */V215))){
	goto T367;}
	base[6]= VV[64];
	base[7]= (V210);
	vs_top=(vs_base=base+6)+2;
	Lerror();
	vs_top=sup;
	goto T367;
T367:;
	V211= CMPcdr((V211));
	V212= CMPcar((V211));
	goto T362;}}
	goto T356;
T356:;
	V208= CMPcdr((V208));
	V209= CMPcar((V208));
	goto T351;}
	goto T347;
T347:;
	{object V216 = (V202);
	VMR20(V216)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-COLLECT-CPL	*/

static object LI25(V218)

object V218;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	base[1]= (V218);
	vs_top=(vs_base=base+1)+1;
	L26(base);
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= VV[65];
	base[2]= Cnil;
	base[3]= VV[66];
	base[4]= (VV[119]->s.s_gfdef);
	vs_top=(vs_base=base+0)+5;
	(void) (*Lnk120)();
	vs_top=sup;
	{object V219 = vs_base[0];
	VMR21(V219)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-COLLECT-DEFAULT-INITARGS	*/

static object LI27(V221)

object V221;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	{register object V222;
	V222= Cnil;
	{register object V223;
	object V224;
	V223= (V221);
	V224= CMPcar((V223));
	goto T392;
T392:;
	if(!(((V223))==Cnil)){
	goto T393;}
	goto T388;
	goto T393;
T393:;
	{object V225;
	register object V226;
	V225= (*(LnkLI62))((V224));
	V226= (*(LnkLI121))((V225));
	goto T401;
T401:;
	if(((V226))!=Cnil){
	goto T403;}
	goto T397;
	goto T403;
T403:;
	{register object V227;
	{register object V228;
	V228= CMPcar((V226));
	V226= CMPcdr((V226));
	V227= (V228);}
	if(((V227))==(VV[67])){
	goto T406;}
	base[3]= VV[68];
	base[4]= (V227);
	vs_top=(vs_base=base+3)+2;
	Lerror();
	vs_top=sup;}
	goto T406;
T406:;
	{register object V230;
	V230= CMPcar((V226));
	V226= CMPcdr((V226));
	V229= (V230);}
	V231= reverse(V229);
	V222= nconc((V222),/* INLINE-ARGS */V231);
	goto T401;}
	goto T397;
T397:;
	V223= CMPcdr((V223));
	V224= CMPcar((V223));
	goto T392;}
	goto T388;
T388:;
	{object V232 = reverse((V222));
	VMR22(V232)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-SLOT-INDEX	*/

static object LI28(V235,V236)

object V235;object V236;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;{object V237;
	base[0]= (V236);
	base[1]= (*(LnkLI113))((V235));
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk122)();
	vs_top=sup;
	V237= vs_base[0];
	if(V237==Cnil)goto T426;
	{object V238 = V237;
	VMR23(V238)}
	goto T426;
T426:;}
	base[0]= VV[69];
	base[1]= (V236);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V239 = vs_base[0];
	VMR23(V239)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for BOOTSTRAP-GET-SLOT	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V240=base[0]->c.c_cdr;
	if(endp(V240))invalid_macro_call();
	base[2]= (V240->c.c_car);
	V240=V240->c.c_cdr;
	if(endp(V240))invalid_macro_call();
	base[3]= (V240->c.c_car);
	V240=V240->c.c_cdr;
	if(endp(V240))invalid_macro_call();
	base[4]= (V240->c.c_car);
	V240=V240->c.c_cdr;
	if(!endp(V240))invalid_macro_call();}
	V241= list(2,VV[71],base[3]);
	base[5]= list(3,VV[70],/* INLINE-ARGS */V241,list(3,VV[72],base[2],base[4]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function BOOTSTRAP-SET-SLOT	*/

static object LI30(V246,V247,V248,V249)

object V246;register object V247;object V248;object V249;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	if(type_of(V247)==t_structure){
	goto T436;}
	goto T434;
	goto T436;
T436:;
	if(!(((V247)->str.str_def)==(VV[73]))){
	goto T434;}
	V250= STREF(object,(V247),4);
	goto T432;
	goto T434;
T434:;{object V252;
	V252= (VV[75]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V247);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk123)();
	vs_top=sup;
	V253= vs_base[0];
	if(!((V252)==(CMPcar(V253)))){
	goto T439;}}
	V250= CMPcar(((V247))->cc.cc_turbo[12]);
	goto T432;
	goto T439;
T439:;
	base[0]= VV[76];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V250= vs_base[0];
	goto T432;
T432:;
	V254= (*(LnkLI72))((V246),(V248));
	{object V255 = ((V250)->v.v_self[fix(/* INLINE-ARGS */V254)]=((V249)));
	VMR25(V255)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-CLASS-NAME	*/

static object LI31(V257)

register object V257;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	if(type_of(V257)==t_structure){
	goto T449;}
	goto T447;
	goto T449;
T449:;
	if(!(((V257)->str.str_def)==(VV[77]))){
	goto T447;}
	V258= STREF(object,(V257),4);
	goto T445;
	goto T447;
T447:;{object V260;
	V260= (VV[75]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V257);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk123)();
	vs_top=sup;
	V261= vs_base[0];
	if(!((V260)==(CMPcar(V261)))){
	goto T452;}}
	V258= CMPcar(((V257))->cc.cc_turbo[12]);
	goto T445;
	goto T452;
T452:;
	base[0]= VV[76];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V258= vs_base[0];
	goto T445;
T445:;
	V262= (*(LnkLI72))(VV[78],VV[79]);
	{object V263 = (V258)->v.v_self[fix(/* INLINE-ARGS */V262)];
	VMR26(V263)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-CLASS-PRECEDENCE-LIST	*/

static object LI32(V265)

register object V265;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	if(type_of(V265)==t_structure){
	goto T462;}
	goto T460;
	goto T462;
T462:;
	if(!(((V265)->str.str_def)==(VV[80]))){
	goto T460;}
	V266= STREF(object,(V265),4);
	goto T458;
	goto T460;
T460:;{object V268;
	V268= (VV[75]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V265);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk123)();
	vs_top=sup;
	V269= vs_base[0];
	if(!((V268)==(CMPcar(V269)))){
	goto T465;}}
	V266= CMPcar(((V265))->cc.cc_turbo[12]);
	goto T458;
	goto T465;
T465:;
	base[0]= VV[76];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V266= vs_base[0];
	goto T458;
T458:;
	V270= (*(LnkLI72))(VV[81],VV[82]);
	{object V271 = (V266)->v.v_self[fix(/* INLINE-ARGS */V270)];
	VMR27(V271)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-CLASS-NAME-OF	*/

static object LI33(V273)

object V273;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	V274= (*(LnkLI126))((V273));
	{object V275 = (*(LnkLI125))(/* INLINE-ARGS */V274);
	VMR28(V275)}
	return Cnil;
}
/*	local entry for function EARLY-CLASS-SLOTDS	*/

static object LI34(V277)

register object V277;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	if(type_of(V277)==t_structure){
	goto T475;}
	goto T473;
	goto T475;
T475:;
	if(!(((V277)->str.str_def)==(VV[83]))){
	goto T473;}
	V278= STREF(object,(V277),4);
	goto T471;
	goto T473;
T473:;{object V280;
	V280= (VV[75]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V277);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk123)();
	vs_top=sup;
	V281= vs_base[0];
	if(!((V280)==(CMPcar(V281)))){
	goto T478;}}
	V278= CMPcar(((V277))->cc.cc_turbo[12]);
	goto T471;
	goto T478;
T478:;
	base[0]= VV[76];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V278= vs_base[0];
	goto T471;
T471:;
	V282= (*(LnkLI72))(VV[84],VV[85]);
	{object V283 = (V278)->v.v_self[fix(/* INLINE-ARGS */V282)];
	VMR29(V283)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-SLOT-DEFINITION-NAME	*/

static object LI35(V285)

register object V285;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	if(type_of(V285)==t_structure){
	goto T488;}
	goto T486;
	goto T488;
T488:;
	if(!(((V285)->str.str_def)==(VV[86]))){
	goto T486;}
	V286= STREF(object,(V285),4);
	goto T484;
	goto T486;
T486:;{object V288;
	V288= (VV[75]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V285);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk123)();
	vs_top=sup;
	V289= vs_base[0];
	if(!((V288)==(CMPcar(V289)))){
	goto T491;}}
	V286= CMPcar(((V285))->cc.cc_turbo[12]);
	goto T484;
	goto T491;
T491:;
	base[0]= VV[76];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V286= vs_base[0];
	goto T484;
T484:;
	V290= (*(LnkLI72))(VV[87],VV[79]);
	{object V291 = (V286)->v.v_self[fix(/* INLINE-ARGS */V290)];
	VMR30(V291)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-SLOT-DEFINITION-LOCATION	*/

static object LI36(V293)

register object V293;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	if(type_of(V293)==t_structure){
	goto T501;}
	goto T499;
	goto T501;
T501:;
	if(!(((V293)->str.str_def)==(VV[88]))){
	goto T499;}
	V294= STREF(object,(V293),4);
	goto T497;
	goto T499;
T499:;{object V296;
	V296= (VV[75]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V293);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk123)();
	vs_top=sup;
	V297= vs_base[0];
	if(!((V296)==(CMPcar(V297)))){
	goto T504;}}
	V294= CMPcar(((V293))->cc.cc_turbo[12]);
	goto T497;
	goto T504;
T504:;
	base[0]= VV[76];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V294= vs_base[0];
	goto T497;
T497:;
	V298= (*(LnkLI72))(VV[87],VV[89]);
	{object V299 = (V294)->v.v_self[fix(/* INLINE-ARGS */V298)];
	VMR31(V299)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-ACCESSOR-METHOD-SLOT-NAME	*/

static object LI37(V301)

register object V301;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	if(type_of(V301)==t_structure){
	goto T514;}
	goto T512;
	goto T514;
T514:;
	if(!(((V301)->str.str_def)==(VV[90]))){
	goto T512;}
	V302= STREF(object,(V301),4);
	goto T510;
	goto T512;
T512:;{object V304;
	V304= (VV[75]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V301);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk123)();
	vs_top=sup;
	V305= vs_base[0];
	if(!((V304)==(CMPcar(V305)))){
	goto T517;}}
	V302= CMPcar(((V301))->cc.cc_turbo[12]);
	goto T510;
	goto T517;
T517:;
	base[0]= VV[76];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V302= vs_base[0];
	goto T510;
T510:;
	V306= (*(LnkLI72))(VV[91],VV[92]);
	{object V307 = (V302)->v.v_self[fix(/* INLINE-ARGS */V306)];
	VMR32(V307)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-CLASS-DIRECT-SUBCLASSES	*/

static object LI38(V309)

register object V309;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	if(type_of(V309)==t_structure){
	goto T527;}
	goto T525;
	goto T527;
T527:;
	if(!(((V309)->str.str_def)==(VV[93]))){
	goto T525;}
	V310= STREF(object,(V309),4);
	goto T523;
	goto T525;
T525:;{object V312;
	V312= (VV[75]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V309);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk123)();
	vs_top=sup;
	V313= vs_base[0];
	if(!((V312)==(CMPcar(V313)))){
	goto T530;}}
	V310= CMPcar(((V309))->cc.cc_turbo[12]);
	goto T523;
	goto T530;
T530:;
	base[0]= VV[76];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V310= vs_base[0];
	goto T523;
T523:;
	V314= (*(LnkLI72))(VV[78],VV[94]);
	{object V315 = (V310)->v.v_self[fix(/* INLINE-ARGS */V314)];
	VMR33(V315)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOAD-DEFCLASS	*/

static object LI39(V322,V323,V324,V325,V326,V327)

object V322;object V323;object V324;object V325;object V326;object V327;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	base[0]= (V324);
	vs_top=(vs_base=base+0)+1;
	Lcopy_tree();
	vs_top=sup;
	V324= vs_base[0];
	base[0]= (V325);
	vs_top=(vs_base=base+0)+1;
	Lcopy_tree();
	vs_top=sup;
	V325= vs_base[0];
	base[0]= (V326);
	vs_top=(vs_base=base+0)+1;
	Lcopy_tree();
	vs_top=sup;
	V326= vs_base[0];
	(void)((*(LnkLI102))((V327)));
	if(!(((V323))==(VV[11]))){
	goto T546;}
	(void)((*(LnkLI105))((V322)));
	goto T546;
T546:;
	{object V328;
	object V329;
	vs_base=vs_top;
	(void) (*Lnk128)();
	vs_top=sup;
	V330= vs_base[0];
	V328= (*(LnkLI127))((V322),V330,(V323),(V324),(V325),(V326));
	base[0]= (V322);
	base[1]= (VV[59]->s.s_dbind);
	base[2]= VV[60];
	base[3]= (VV[109]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk110)();
	vs_top=sup;
	V329= vs_base[0];
	base[0]= (V329);
	base[1]= (VV[59]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk97)();
	vs_top=sup;
	V331= vs_base[0];
	(VV[59]->s.s_dbind)= make_cons((V328),V331);
	{object V332 = (V328);
	VMR34(V332)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function WALK	*/

static void L26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	{object V333;
	check_arg(1);
	V333=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V334;
	object V335;
	V334= (*(LnkLI62))((V333));
	V335= (*(LnkLI117))((V334));
	{object V337;
	{object V338;
	object V339= (V335);
	if(V339==Cnil){
	V337= Cnil;
	goto T564;}
	base[3]=V338=MMcons(Cnil,Cnil);
	goto T565;
T565:;
	(V338->c.c_car)= (*(LnkLI114))((V339->c.c_car));
	if((V339=MMcdr(V339))==Cnil){
	V337= base[3];
	goto T564;}
	V338=MMcdr(V338)=MMcons(Cnil,Cnil);
	goto T565;}
	goto T564;
T564:;
	 vs_top=base+3;
	 while(V337!=Cnil)
	 {vs_push((V337)->c.c_car);V337=(V337)->c.c_cdr;}
	vs_base=base+3;}
	Lappend();
	vs_top=sup;
	V336= vs_base[0];
	base[3]= make_cons((V333),V336);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function COLLECT-FORMS	*/

static void L6(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	{register object V340;
	check_arg(1);
	V340=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V340))==Cnil){
	goto T568;}
	base[1]= CMPcdr((V340));
	vs_top=(vs_base=base+1)+1;
	L6(base0);
	vs_top=sup;
	{object V341= CMPcar((V340));
	if(!(type_of(V341)==t_cons||(V341)==Cnil)){
	goto T573;}}
	if(!((CMPcaar((V340)))==(VV[7]))){
	goto T573;}
	V340= CMPcdar((V340));
	goto TTL;
	return;
	goto T573;
T573:;
	{object V342;
	V342= CMPcar((V340));
	base0[0]= make_cons((V342),base0[0]);
	base[2]= base0[0];
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T568;
T568:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function DEFINITION-NAME	*/

static void L4(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of(base0[0])==t_cons||(base0[0])==Cnil)){
	goto T582;}
	{register object x= CMPcar(base0[0]),V343= VV[4];
	while(V343!=Cnil)
	if(x==(V343->c.c_car)){
	goto T585;
	}else V343=V343->c.c_cdr;
	goto T582;}
	goto T585;
T585:;
	base[0]= Cnil;
	base[1]= VV[5];
	base[2]= (VFUN_NARGS=2,(*(LnkLI129))(CMPcar(base0[0]),Cnil));
	base[3]= CMPcdr(base0[0]);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	return;
	goto T582;
T582:;
	base[0]= Cnil;
	base[1]= VV[6];
	base[2]= base0[0];
	vs_top=(vs_base=base+0)+3;
	Lformat();
	return;
}
static object  LnkTLI129(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[129],(void **)(void *)&LnkLI129,first,ap);va_end(ap);return V1;} /* CAPITALIZE-WORDS */
static void LnkT128(){ call_or_link(VV[128],(void **)(void *)&Lnk128);} /* LOAD-TRUENAME */
static object  LnkTLI127(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[127],(void **)(void *)&LnkLI127,6,first,ap);va_end(ap);return V1;} /* MAKE-EARLY-CLASS-DEFINITION */
static object  LnkTLI126(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[126],(void **)(void *)&LnkLI126,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static object  LnkTLI125(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[125],(void **)(void *)&LnkLI125,1,first,ap);va_end(ap);return V1;} /* EARLY-CLASS-NAME */
static object  LnkTLI72(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[72],(void **)(void *)&LnkLI72,2,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-SLOT-INDEX */
static object  LnkTLI124(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[124],(void **)(void *)&LnkLI124,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT123(){ call_or_link(VV[123],(void **)(void *)&Lnk123);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT122(){ call_or_link(VV[122],(void **)(void *)&Lnk122);} /* POSITION */
static object  LnkTLI121(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[121],(void **)(void *)&LnkLI121,1,first,ap);va_end(ap);return V1;} /* ECD-OTHER-INITARGS */
static void LnkT120(){ call_or_link(VV[120],(void **)(void *)&Lnk120);} /* REMOVE-DUPLICATES */
static object  LnkTLI118(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[118],(void **)(void *)&LnkLI118,1,first,ap);va_end(ap);return V1;} /* ECD-CANONICAL-SLOTS */
static object  LnkTLI62(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[62],(void **)(void *)&LnkLI62,1,first,ap);va_end(ap);return V1;} /* EARLY-CLASS-DEFINITION */
static object  LnkTLI109(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[109],(void **)(void *)&LnkLI109,1,first,ap);va_end(ap);return V1;} /* ECD-CLASS-NAME */
static object  LnkTLI117(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[117],(void **)(void *)&LnkLI117,1,first,ap);va_end(ap);return V1;} /* ECD-SUPERCLASS-NAMES */
static object  LnkTLI116(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[116],(void **)(void *)&LnkLI116,1,first,ap);va_end(ap);return V1;} /* EARLY-COLLECT-DEFAULT-INITARGS */
static object  LnkTLI115(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[115],(void **)(void *)&LnkLI115,1,first,ap);va_end(ap);return V1;} /* EARLY-COLLECT-SLOTS */
static object  LnkTLI114(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[114],(void **)(void *)&LnkLI114,1,first,ap);va_end(ap);return V1;} /* EARLY-COLLECT-CPL */
static object  LnkTLI113(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[113],(void **)(void *)&LnkLI113,1,first,ap);va_end(ap);return V1;} /* EARLY-CLASS-SLOTS */
static object  LnkTLI112(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[112],(void **)(void *)&LnkLI112,1,first,ap);va_end(ap);return V1;} /* CANONICAL-SLOT-NAME */
static void LnkT111(){ call_or_link(VV[111],(void **)(void *)&Lnk111);} /* EARLY-COLLECT-INHERITANCE */
static void LnkT110(){ call_or_link(VV[110],(void **)(void *)&Lnk110);} /* FIND */
static object  LnkTLI107(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[107],(void **)(void *)&LnkLI107,1,first,ap);va_end(ap);return V1;} /* MAKE-INITFUNCTION */
static void LnkT106(){ call_or_link(VV[106],(void **)(void *)&Lnk106);} /* SPECIFIC-ERROR */
static object  LnkTLI105(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[105],(void **)(void *)&LnkLI105,1,first,ap);va_end(ap);return V1;} /* INFORM-TYPE-SYSTEM-ABOUT-STD-CLASS */
static void LnkT104(ptr) object *ptr;{ call_or_link_closure(VV[104],(void **)(void *)&Lnk104,(void **)(void *)&Lclptr104);} /* CLASS-DEFSTRUCT-FORM */
static object  LnkTLI103(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[103],(void **)(void *)&LnkLI103,3,first,ap);va_end(ap);return V1;} /* MAKE-TOP-LEVEL-FORM */
static object  LnkTLI102(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[102],(void **)(void *)&LnkLI102,1,first,ap);va_end(ap);return V1;} /* DO-STANDARD-DEFSETFS-FOR-DEFCLASS */
static void LnkT101(){ call_or_link(VV[101],(void **)(void *)&Lnk101);} /* *SUBTYPEP */
static object  LnkTLI100(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[100],(void **)(void *)&LnkLI100,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static object  LnkTLI99(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[99],(void **)(void *)&LnkLI99,2,first,ap);va_end(ap);return V1;} /* CANONICALIZE-DEFCLASS-OPTION */
static object  LnkTLI98(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[98],(void **)(void *)&LnkLI98,2,first,ap);va_end(ap);return V1;} /* CANONICALIZE-SLOT-SPECIFICATION */
static void LnkT97(){ call_or_link(VV[97],(void **)(void *)&Lnk97);} /* REMOVE */
static object  LnkTLI96(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[96],(void **)(void *)&LnkLI96,1,first,ap);va_end(ap);return V1;} /* LEGAL-CLASS-NAME-P */
static object  LnkTLI95(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[95],(void **)(void *)&LnkLI95,4,first,ap);va_end(ap);return V1;} /* EXPAND-DEFCLASS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

