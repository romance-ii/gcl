
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
	base[6]= (*(LnkLI93))(base[2],base[3],base[4],base[5]);
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
	if(((*(LnkLI94))(CMPcadr((V24))))!=Cnil){
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
	(void) (*Lnk95)();
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
	(V28->c.c_car)= (*(LnkLI96))((V18),(V29->c.c_car));
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
	(V31->c.c_car)= (*(LnkLI97))((V18),(V32->c.c_car));
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
	V34= (VFUN_NARGS=2,(*(LnkLI98))((V22),Cnil));
	if((V34)==Cnil){
	V27= Cnil;
	goto T56;}
	base[4]= (V34);
	base[5]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk99)();
	vs_top=sup;
	V27= vs_base[0];}
	goto T56;
T56:;
	(void)((*(LnkLI100))((VV[17]->s.s_dbind)));
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
	{register object V44;
	V44= (V43->c.c_car);
	if(!(type_of((V44))==t_cons)){
	goto T75;}
	V44= (*(LnkLI102))(CMPcadr((V44)));
	goto T75;
T75:;
	(V42->c.c_car)= list(2,VV[22],list(3,VV[23],VV[25],(V44)));}
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
	goto T80;}
	base[7]=V46=MMcons(Cnil,Cnil);
	goto T81;
T81:;
	(V46->c.c_car)= CMPcdr((V47->c.c_car));
	if((V47=MMcdr(V47))==Cnil){
	V45= base[7];
	goto T80;}
	V46=MMcdr(V46)=MMcons(Cnil,Cnil);
	goto T81;}
	goto T80;
T80:;
	V48= list(2,VV[28],(V18));
	V49= list(2,VV[28],(V22));
	V50= list(2,VV[28],(V19));
	V51= make_cons(VV[29],(V25));
	if(((V27))==Cnil){
	goto T86;}
	base[7]= VV[30];
	goto T84;
	goto T86;
T86:;
	base[7]= Cnil;
	goto T84;
T84:;
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
	V35= (*(LnkLI101))(/* INLINE-ARGS */V36,V37,/* INLINE-ARGS */V56);
	if(((V27))==Cnil){
	goto T90;}
	base[4]= (V35);
	vs_top=(vs_base=base+4)+1;
	Leval();
	vs_top=sup;
	base[4]= (VFUN_NARGS=1,(*(LnkLI98))((V18)));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk103)(Lclptr103);
	vs_top=sup;
	V57= vs_base[0];
	V58 = (V35);
	{object V59 = list(3,VV[7],V57,V58);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR4(V59)}
	goto T90;
T90:;
	if(!(((VV[9]->s.s_dbind))==(VV[19]))){
	goto T96;}
	{register object x= VV[31],V60= (VV[10]->s.s_dbind);
	while(V60!=Cnil)
	if(eql(x,V60->c.c_car)){
	goto T96;
	}else V60=V60->c.c_cdr;}
	(void)((*(LnkLI104))((V18)));
	goto T96;
T96:;
	{object V61 = (V35);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR4(V61)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-INITFUNCTION	*/

static object LI9(V63)

register object V63;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	if(((V63))==(Ct)){
	goto T101;}
	if(!(equal((V63),VV[32]))){
	goto T102;}
	goto T101;
T101:;
	{object V64 = VV[33];
	VMR5(V64)}
	goto T102;
T102:;
	if(((V63))==(Cnil)){
	goto T106;}
	if(!(equal((V63),VV[34]))){
	goto T107;}
	goto T106;
T106:;
	{object V65 = VV[35];
	VMR5(V65)}
	goto T107;
T107:;
	if(eql((V63),small_fixnum(0))){
	goto T111;}
	if(!(equal((V63),VV[36]))){
	goto T112;}
	goto T111;
T111:;
	{object V66 = VV[37];
	VMR5(V66)}
	goto T112;
T112:;
	{register object V67;
	{register object x= (V63),V68= (VV[18]->s.s_dbind);
	while(V68!=Cnil)
	if(equal(x,V68->c.c_car->c.c_car) &&V68->c.c_car != Cnil){
	V67= (V68->c.c_car);
	goto T116;
	}else V68=V68->c.c_cdr;
	V67= Cnil;}
	goto T116;
T116:;
	if(((V67))!=Cnil){
	goto T117;}
	V69 = (V63);
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V70= vs_base[0];
	V67= list(3,V69,V70,list(2,VV[38],list(3,VV[39],Cnil,(V63))));
	(VV[18]->s.s_dbind)= make_cons(V67,(VV[18]->s.s_dbind));
	goto T117;
T117:;
	{object V72 = CMPcadr((V67));
	VMR5(V72)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CANONICALIZE-SLOT-SPECIFICATION	*/

static object LI10(V75,V76)

object V75;register object V76;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	if(!(type_of((V76))==t_symbol)){
	goto T125;}
	if((type_of((V76))==t_symbol&&((V76))->s.s_hpack==keyword_package)){
	goto T125;}
	{register object x= (V76),V77= VV[40];
	while(V77!=Cnil)
	if(x==(V77->c.c_car)){
	goto T125;
	}else V77=V77->c.c_cdr;}
	{object V78 = list(2,VV[28],list(2,VV[41],(V76)));
	VMR6(V78)}
	goto T125;
T125:;
	if(type_of((V76))==t_cons){
	goto T132;}
	base[0]= VV[42];
	base[1]= (V76);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V79 = vs_base[0];
	VMR6(V79)}
	goto T132;
T132:;
	if((CMPcdr((V76)))!=Cnil){
	goto T137;}
	{object V80 = list(2,VV[28],list(2,VV[41],CMPcar((V76))));
	VMR6(V80)}
	goto T137;
T137:;
	if((CMPcddr((V76)))!=Cnil){
	goto T140;}
	base[0]= VV[43];
	base[1]= (V75);
	base[2]= (V76);
	base[3]= list(3,CMPcar((V76)),VV[44],CMPcadr((V76)));
	vs_top=(vs_base=base+0)+4;
	Lerror();
	vs_top=sup;
	{object V81 = vs_base[0];
	VMR6(V81)}
	goto T140;
T140:;
	{object V82;
	register object V83;
	register object V84;
	register object V85;
	object V86;
	object V87;
	{object V88;
	V88= CMPcar((V76));
	V76= CMPcdr((V76));
	V82= (V88);}
	V83= Cnil;
	V84= Cnil;
	V85= Cnil;
	V86= make_cons(Cnil,Cnil);
	base[3]= (V76);
	base[4]= VV[44];
	base[5]= (V86);
	vs_top=(vs_base=base+3)+3;
	Lgetf();
	vs_top=sup;
	V87= vs_base[0];
	{register object V89;
	object V90;
	register object V91;
	V89= (V76);
	V90= Cnil;
	V91= Cnil;
	goto T160;
T160:;
	if(((V89))!=Cnil){
	goto T162;}
	goto T158;
	goto T162;
T162:;
	{object V92;
	V92= CMPcar((V89));
	V89= CMPcdr((V89));
	V90= (V92);}
	if(((V89))!=Cnil){
	goto T170;}
	base[3]= VV[45];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T170;
T170:;
	{object V93;
	V93= CMPcar((V89));
	V89= CMPcdr((V89));
	V91= (V93);}
	{object V94= (V90);
	if((V94!= VV[47]))goto T179;
	(VV[17]->s.s_dbind)= make_cons(V91,(VV[17]->s.s_dbind));
	V83= make_cons(V91,(V83));
	{object V97;
	V97= list(2,VV[46],(V91));
	V84= make_cons((V97),(V84));
	goto T161;}
	goto T179;
T179:;
	if((V94!= VV[48]))goto T186;
	V83= make_cons(V91,(V83));
	goto T161;
	goto T186;
T186:;
	if((V94!= VV[49]))goto T188;
	V84= make_cons(V91,(V84));
	goto T161;
	goto T188;
T188:;
	if((V94!= VV[50]))goto T190;
	V85= make_cons(V91,(V85));
	goto T161;
	goto T190;
T190:;}
	goto T161;
T161:;
	goto T160;}
	goto T158;
T158:;
	goto T195;
T195:;
	{object V101;
	object V102;
	base[3]= (V76);
	base[4]= VV[47];
	vs_top=(vs_base=base+3)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T202;}
	V101= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T203;}
	V102= vs_base[0];
	vs_top=sup;
	goto T204;
	goto T202;
T202:;
	V101= Cnil;
	goto T203;
T203:;
	V102= Cnil;
	goto T204;
T204:;
	V76= (V101);
	if(((V102))!=Cnil){
	goto T196;}}
	goto T193;
	goto T196;
T196:;
	goto T195;
	goto T193;
T193:;
	goto T210;
T210:;
	{object V103;
	object V104;
	base[3]= (V76);
	base[4]= VV[48];
	vs_top=(vs_base=base+3)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T217;}
	V103= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T218;}
	V104= vs_base[0];
	vs_top=sup;
	goto T219;
	goto T217;
T217:;
	V103= Cnil;
	goto T218;
T218:;
	V104= Cnil;
	goto T219;
T219:;
	V76= (V103);
	if(((V104))!=Cnil){
	goto T211;}}
	goto T208;
	goto T211;
T211:;
	goto T210;
	goto T208;
T208:;
	goto T225;
T225:;
	{object V105;
	object V106;
	base[3]= (V76);
	base[4]= VV[49];
	vs_top=(vs_base=base+3)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T232;}
	V105= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T233;}
	V106= vs_base[0];
	vs_top=sup;
	goto T234;
	goto T232;
T232:;
	V105= Cnil;
	goto T233;
T233:;
	V106= Cnil;
	goto T234;
T234:;
	V76= (V105);
	if(((V106))!=Cnil){
	goto T226;}}
	goto T223;
	goto T226;
T226:;
	goto T225;
	goto T223;
T223:;
	goto T240;
T240:;
	{object V107;
	object V108;
	base[3]= (V76);
	base[4]= VV[50];
	vs_top=(vs_base=base+3)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T247;}
	V107= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T248;}
	V108= vs_base[0];
	vs_top=sup;
	goto T249;
	goto T247;
T247:;
	V107= Cnil;
	goto T248;
T248:;
	V108= Cnil;
	goto T249;
T249:;
	V76= (V107);
	if(((V108))!=Cnil){
	goto T241;}}
	goto T238;
	goto T241;
T241:;
	goto T240;
	goto T238;
T238:;
	(VV[15]->s.s_dbind)= append((V84),(VV[15]->s.s_dbind));
	(VV[16]->s.s_dbind)= append((V83),(VV[16]->s.s_dbind));
	V109= list(2,VV[28],(V82));
	V110= list(2,VV[28],(V83));
	V111= list(2,VV[28],(V84));
	V112= list(2,VV[28],(V85));
	V76= list(9,VV[41],/* INLINE-ARGS */V109,VV[51],/* INLINE-ARGS */V110,VV[52],/* INLINE-ARGS */V111,VV[53],/* INLINE-ARGS */V112,list(2,VV[28],(V76)));
	if(!(((V87))==((V86)))){
	goto T260;}
	{object V113 = make_cons(VV[54],(V76));
	VMR6(V113)}
	goto T260;
T260:;
	V114= (*(LnkLI105))((V87));
	V115 = (V76);
	{object V116 = listA(4,VV[54],VV[55],/* INLINE-ARGS */V114,V115);
	VMR6(V116)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CANONICALIZE-DEFCLASS-OPTION	*/

static object LI11(V119,V120)

object V119;object V120;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V121= CMPcar((V120));
	if((V121!= VV[106]))goto T262;
	{register object V122;
	V122= Cnil;
	{register object V123;
	register object V124;
	register object V125;
	V125= CMPcdr((V120));
	V123= Cnil;
	V124= Cnil;
	goto T266;
T266:;
	if(((V125))!=Cnil){
	goto T268;}
	goto T264;
	goto T268;
T268:;
	{register object V126;
	V126= CMPcar((V125));
	V125= CMPcdr((V125));
	V123= (V126);}
	{register object V127;
	V127= CMPcar((V125));
	V125= CMPcdr((V125));
	V124= (V127);}
	{register object V128;
	V129= list(2,VV[28],(V123));
	V130= (*(LnkLI105))((V124));
	V128= list(4,VV[29],/* INLINE-ARGS */V129,/* INLINE-ARGS */V130,list(2,VV[28],(V124)));
	V122= make_cons((V128),(V122));}
	goto T266;
	goto T264;
T264:;
	V131= nreverse((V122));
	{object V132 = list(2,VV[56],make_cons(VV[29],/* INLINE-ARGS */V131));
	VMR7(V132)}}}
	goto T262;
T262:;
	V133= list(2,VV[28],CMPcar((V120)));
	{object V134 = list(2,/* INLINE-ARGS */V133,list(2,VV[28],CMPcdr((V120))));
	VMR7(V134)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-CLASS-DEFINITION	*/

static object LI12(V136)

object V136;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;{object V137;
	base[0]= (V136);
	base[1]= (VV[57]->s.s_dbind);
	base[2]= VV[58];
	base[3]= (VV[107]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk108)();
	vs_top=sup;
	V137= vs_base[0];
	if(V137==Cnil)goto T284;
	{object V138 = V137;
	VMR8(V138)}
	goto T284;
T284:;}
	base[0]= VV[59];
	base[1]= (V136);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V139 = vs_base[0];
	VMR8(V139)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-EARLY-CLASS-DEFINITION	*/

static object LI13(V146,V147,V148,V149,V150,V151)

object V146;object V147;object V148;object V149;object V150;object V151;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{object V152 = list(7,VV[60],(V146),(V147),(V148),(V149),(V150),(V151));
	VMR9(V152)}
	return Cnil;
}
/*	local entry for function ECD-CLASS-NAME	*/

static object LI14(V154)

object V154;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V155 = CMPcadr((V154));
	VMR10(V155)}
	return Cnil;
}
/*	local entry for function ECD-SOURCE	*/

static object LI15(V157)

object V157;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{object V158 = CMPcaddr((V157));
	VMR11(V158)}
	return Cnil;
}
/*	local entry for function ECD-METACLASS	*/

static object LI16(V160)

object V160;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V161 = CMPcadddr((V160));
	VMR12(V161)}
	return Cnil;
}
/*	local entry for function ECD-SUPERCLASS-NAMES	*/

static object LI17(V163)

object V163;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{object V164 = CMPcar(CMPcddddr((V163)));
	VMR13(V164)}
	return Cnil;
}
/*	local entry for function ECD-CANONICAL-SLOTS	*/

static object LI18(V166)

object V166;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{object V167 = CMPcadr(CMPcddddr((V166)));
	VMR14(V167)}
	return Cnil;
}
/*	local entry for function ECD-OTHER-INITARGS	*/

static object LI19(V169)

object V169;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V170 = CMPcaddr(CMPcddddr((V169)));
	VMR15(V170)}
	return Cnil;
}
/*	local entry for function CANONICAL-SLOT-NAME	*/

static object LI20(V172)

object V172;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	base[0]= (V172);
	base[1]= VV[41];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	{object V173 = vs_base[0];
	VMR16(V173)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-CLASS-SLOTS	*/

static object LI21(V175)

object V175;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;{object V177;
	{register object x= (V175),V178= (VV[61]->s.s_dbind);
	while(V178!=Cnil)
	if(eql(x,V178->c.c_car->c.c_car) &&V178->c.c_car != Cnil){
	V177= (V178->c.c_car);
	goto T296;
	}else V178=V178->c.c_cdr;
	V177= Cnil;}
	goto T296;
T296:;
	if(V177==Cnil)goto T295;
	V176= V177;
	goto T294;
	goto T295;
T295:;}
	{object V179;
	V180 = (V175);
	base[1]= (V175);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk109)();
	vs_top=sup;
	V184= vs_base[0];
	{object V182;
	object V183= V184;
	if(V183==Cnil){
	V181= Cnil;
	goto T298;}
	base[0]=V182=MMcons(Cnil,Cnil);
	goto T299;
T299:;
	(V182->c.c_car)= (*(LnkLI110))((V183->c.c_car));
	if((V183=MMcdr(V183))==Cnil){
	V181= base[0];
	goto T298;}
	V182=MMcdr(V182)=MMcons(Cnil,Cnil);
	goto T299;}
	goto T298;
T298:;
	V179= make_cons(V180,V181);
	(VV[61]->s.s_dbind)= make_cons(V179,(VV[61]->s.s_dbind));
	V176= (V179);}
	goto T294;
T294:;
	{object V186 = CMPcdr(V176);
	VMR17(V186)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-CLASS-SIZE	*/

static object LI22(V188)

object V188;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	V189= (*(LnkLI111))((V188));
	{long V190 = (long)length(/* INLINE-ARGS */V189);
	VMR18((object)V190)}
}
/*	function definition for EARLY-COLLECT-INHERITANCE	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{register object V191;
	check_arg(1);
	V191=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V192;
	V192= (*(LnkLI112))((V191));
	base[1]= (*(LnkLI113))((V192));
	base[2]= (V192);
	base[3]= (*(LnkLI114))((V192));
	{register object V193;
	register object V194;
	V193= Cnil;
	V194= Cnil;
	{register object V195;
	register object V196;
	V195= (VV[57]->s.s_dbind);
	V196= CMPcar((V195));
	goto T316;
T316:;
	if(!(((V195))==Cnil)){
	goto T317;}
	goto T312;
	goto T317;
T317:;
	V198 = (V191);
	V199= (*(LnkLI115))((V196));
	{register object x= V198,V197= /* INLINE-ARGS */V199;
	while(V197!=Cnil)
	if(x==(V197->c.c_car)){
	goto T323;
	}else V197=V197->c.c_cdr;
	goto T321;}
	goto T323;
T323:;
	{register object V200;
	V200= (*(LnkLI107))((V196));
	if(((V193))!=Cnil){
	goto T326;}
	V194= make_cons((V200),Cnil);
	V193= (V194);
	goto T321;
	goto T326;
T326:;
	V202= make_cons((V200),Cnil);
	((V194))->c.c_cdr = /* INLINE-ARGS */V202;
	V201= (V194);
	V194= CMPcdr(V201);}
	goto T321;
T321:;
	V195= CMPcdr((V195));
	V196= CMPcar((V195));
	goto T316;}
	goto T312;
T312:;
	base[4]= (V193);}
	vs_top=(vs_base=base+1)+4;
	return;}
	}
}
/*	local entry for function EARLY-COLLECT-SLOTS	*/

static object LI24(V204)

object V204;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V205;
	object V206;
	register object V207;
	{object V208;
	object V209= (V204);
	if(V209==Cnil){
	V205= Cnil;
	goto T337;}
	base[3]=V208=MMcons(Cnil,Cnil);
	goto T338;
T338:;
	(V208->c.c_car)= (*(LnkLI60))((V209->c.c_car));
	if((V209=MMcdr(V209))==Cnil){
	V205= base[3];
	goto T337;}
	V208=MMcdr(V208)=MMcons(Cnil,Cnil);
	goto T338;}
	goto T337;
T337:;
	{object V210;
	object V211= (V205);
	if(V211==Cnil){
	V206= Cnil;
	goto T340;}
	base[3]=V210=MMcons(Cnil,Cnil);
	goto T341;
T341:;
	(V210->c.c_car)= (*(LnkLI116))((V211->c.c_car));
	if((V211=MMcdr(V211))==Cnil){
	V206= base[3];
	goto T340;}
	V210=MMcdr(V210)=MMcons(Cnil,Cnil);
	goto T341;}
	goto T340;
T340:;
	{object V212;
	V212= reverse((V206));
	 vs_top=base+3;
	 while(V212!=Cnil)
	 {vs_push((V212)->c.c_car);V212=(V212)->c.c_cdr;}
	vs_base=base+3;}
	Lappend();
	vs_top=sup;
	V207= vs_base[0];
	{register object V213;
	register object V214;
	V213= (V207);
	V214= CMPcar((V213));
	goto T349;
T349:;
	if(!(((V213))==Cnil)){
	goto T350;}
	goto T345;
	goto T350;
T350:;
	{register object V215;
	V215= (*(LnkLI110))((V214));
	{register object V216;
	register object V217;
	{register object x= (V214),V219= (V207);
	while(V219!=Cnil)
	if(x==(V219->c.c_car)){
	V218= V219;
	goto T357;
	}else V219=V219->c.c_cdr;
	V218= Cnil;}
	goto T357;
T357:;
	V216= CMPcdr(V218);
	V217= CMPcar((V216));
	goto T360;
T360:;
	if(!(((V216))==Cnil)){
	goto T361;}
	goto T354;
	goto T361;
T361:;
	V220 = (V215);
	V221= (*(LnkLI110))((V217));
	if(!((V220)==(/* INLINE-ARGS */V221))){
	goto T365;}
	base[6]= VV[62];
	base[7]= (V215);
	vs_top=(vs_base=base+6)+2;
	Lerror();
	vs_top=sup;
	goto T365;
T365:;
	V216= CMPcdr((V216));
	V217= CMPcar((V216));
	goto T360;}}
	goto T354;
T354:;
	V213= CMPcdr((V213));
	V214= CMPcar((V213));
	goto T349;}
	goto T345;
T345:;
	{object V222 = (V207);
	VMR20(V222)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-COLLECT-CPL	*/

static object LI25(V224)

object V224;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	base[1]= (V224);
	vs_top=(vs_base=base+1)+1;
	L26(base);
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= VV[63];
	base[2]= Cnil;
	base[3]= VV[64];
	base[4]= (VV[117]->s.s_gfdef);
	vs_top=(vs_base=base+0)+5;
	(void) (*Lnk118)();
	vs_top=sup;
	{object V225 = vs_base[0];
	VMR21(V225)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-COLLECT-DEFAULT-INITARGS	*/

static object LI27(V227)

object V227;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	{register object V228;
	V228= Cnil;
	{register object V229;
	object V230;
	V229= (V227);
	V230= CMPcar((V229));
	goto T390;
T390:;
	if(!(((V229))==Cnil)){
	goto T391;}
	goto T386;
	goto T391;
T391:;
	{object V231;
	register object V232;
	V231= (*(LnkLI60))((V230));
	V232= (*(LnkLI119))((V231));
	goto T399;
T399:;
	if(((V232))!=Cnil){
	goto T401;}
	goto T395;
	goto T401;
T401:;
	{register object V233;
	{register object V234;
	V234= CMPcar((V232));
	V232= CMPcdr((V232));
	V233= (V234);}
	if(((V233))==(VV[65])){
	goto T404;}
	base[3]= VV[66];
	base[4]= (V233);
	vs_top=(vs_base=base+3)+2;
	Lerror();
	vs_top=sup;}
	goto T404;
T404:;
	{register object V236;
	V236= CMPcar((V232));
	V232= CMPcdr((V232));
	V235= (V236);}
	V237= reverse(V235);
	V228= nconc((V228),/* INLINE-ARGS */V237);
	goto T399;}
	goto T395;
T395:;
	V229= CMPcdr((V229));
	V230= CMPcar((V229));
	goto T390;}
	goto T386;
T386:;
	{object V238 = reverse((V228));
	VMR22(V238)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-SLOT-INDEX	*/

static object LI28(V241,V242)

object V241;object V242;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;{object V243;
	base[0]= (V242);
	base[1]= (*(LnkLI111))((V241));
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk120)();
	vs_top=sup;
	V243= vs_base[0];
	if(V243==Cnil)goto T424;
	{object V244 = V243;
	VMR23(V244)}
	goto T424;
T424:;}
	base[0]= VV[67];
	base[1]= (V242);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V245 = vs_base[0];
	VMR23(V245)}
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
	{object V246=base[0]->c.c_cdr;
	if(endp(V246))invalid_macro_call();
	base[2]= (V246->c.c_car);
	V246=V246->c.c_cdr;
	if(endp(V246))invalid_macro_call();
	base[3]= (V246->c.c_car);
	V246=V246->c.c_cdr;
	if(endp(V246))invalid_macro_call();
	base[4]= (V246->c.c_car);
	V246=V246->c.c_cdr;
	if(!endp(V246))invalid_macro_call();}
	V247= list(2,VV[69],base[3]);
	base[5]= list(3,VV[68],/* INLINE-ARGS */V247,list(3,VV[70],base[2],base[4]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function BOOTSTRAP-SET-SLOT	*/

static object LI30(V252,V253,V254,V255)

object V252;register object V253;object V254;object V255;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	if(type_of(V253)==t_structure){
	goto T434;}
	goto T432;
	goto T434;
T434:;
	if(!(((V253)->str.str_def)==(VV[71]))){
	goto T432;}
	V256= STREF(object,(V253),4);
	goto T430;
	goto T432;
T432:;{object V258;
	V258= (VV[73]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V253);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V259= vs_base[0];
	if(!((V258)==(CMPcar(V259)))){
	goto T437;}}
	V256= CMPcar(((V253))->cc.cc_turbo[12]);
	goto T430;
	goto T437;
T437:;
	base[0]= VV[74];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V256= vs_base[0];
	goto T430;
T430:;
	V260= (*(LnkLI70))((V252),(V254));
	V261 = (V255);
	{object V262 = ((V256)->v.v_self[fix(/* INLINE-ARGS */V260)]=(V261));
	VMR25(V262)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-CLASS-NAME	*/

static object LI31(V264)

register object V264;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	if(type_of(V264)==t_structure){
	goto T447;}
	goto T445;
	goto T447;
T447:;
	if(!(((V264)->str.str_def)==(VV[75]))){
	goto T445;}
	V265= STREF(object,(V264),4);
	goto T443;
	goto T445;
T445:;{object V267;
	V267= (VV[73]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V264);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V268= vs_base[0];
	if(!((V267)==(CMPcar(V268)))){
	goto T450;}}
	V265= CMPcar(((V264))->cc.cc_turbo[12]);
	goto T443;
	goto T450;
T450:;
	base[0]= VV[74];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V265= vs_base[0];
	goto T443;
T443:;
	V269= (*(LnkLI70))(VV[76],VV[77]);
	{object V270 = (V265)->v.v_self[fix(/* INLINE-ARGS */V269)];
	VMR26(V270)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-CLASS-PRECEDENCE-LIST	*/

static object LI32(V272)

register object V272;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	if(type_of(V272)==t_structure){
	goto T460;}
	goto T458;
	goto T460;
T460:;
	if(!(((V272)->str.str_def)==(VV[78]))){
	goto T458;}
	V273= STREF(object,(V272),4);
	goto T456;
	goto T458;
T458:;{object V275;
	V275= (VV[73]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V272);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V276= vs_base[0];
	if(!((V275)==(CMPcar(V276)))){
	goto T463;}}
	V273= CMPcar(((V272))->cc.cc_turbo[12]);
	goto T456;
	goto T463;
T463:;
	base[0]= VV[74];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V273= vs_base[0];
	goto T456;
T456:;
	V277= (*(LnkLI70))(VV[79],VV[80]);
	{object V278 = (V273)->v.v_self[fix(/* INLINE-ARGS */V277)];
	VMR27(V278)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-CLASS-NAME-OF	*/

static object LI33(V280)

object V280;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	V281= (*(LnkLI124))((V280));
	{object V282 = (*(LnkLI123))(/* INLINE-ARGS */V281);
	VMR28(V282)}
	return Cnil;
}
/*	local entry for function EARLY-CLASS-SLOTDS	*/

static object LI34(V284)

register object V284;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	if(type_of(V284)==t_structure){
	goto T473;}
	goto T471;
	goto T473;
T473:;
	if(!(((V284)->str.str_def)==(VV[81]))){
	goto T471;}
	V285= STREF(object,(V284),4);
	goto T469;
	goto T471;
T471:;{object V287;
	V287= (VV[73]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V284);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V288= vs_base[0];
	if(!((V287)==(CMPcar(V288)))){
	goto T476;}}
	V285= CMPcar(((V284))->cc.cc_turbo[12]);
	goto T469;
	goto T476;
T476:;
	base[0]= VV[74];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V285= vs_base[0];
	goto T469;
T469:;
	V289= (*(LnkLI70))(VV[82],VV[83]);
	{object V290 = (V285)->v.v_self[fix(/* INLINE-ARGS */V289)];
	VMR29(V290)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-SLOT-DEFINITION-NAME	*/

static object LI35(V292)

register object V292;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	if(type_of(V292)==t_structure){
	goto T486;}
	goto T484;
	goto T486;
T486:;
	if(!(((V292)->str.str_def)==(VV[84]))){
	goto T484;}
	V293= STREF(object,(V292),4);
	goto T482;
	goto T484;
T484:;{object V295;
	V295= (VV[73]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V292);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V296= vs_base[0];
	if(!((V295)==(CMPcar(V296)))){
	goto T489;}}
	V293= CMPcar(((V292))->cc.cc_turbo[12]);
	goto T482;
	goto T489;
T489:;
	base[0]= VV[74];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V293= vs_base[0];
	goto T482;
T482:;
	V297= (*(LnkLI70))(VV[85],VV[77]);
	{object V298 = (V293)->v.v_self[fix(/* INLINE-ARGS */V297)];
	VMR30(V298)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-SLOT-DEFINITION-LOCATION	*/

static object LI36(V300)

register object V300;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	if(type_of(V300)==t_structure){
	goto T499;}
	goto T497;
	goto T499;
T499:;
	if(!(((V300)->str.str_def)==(VV[86]))){
	goto T497;}
	V301= STREF(object,(V300),4);
	goto T495;
	goto T497;
T497:;{object V303;
	V303= (VV[73]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V300);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V304= vs_base[0];
	if(!((V303)==(CMPcar(V304)))){
	goto T502;}}
	V301= CMPcar(((V300))->cc.cc_turbo[12]);
	goto T495;
	goto T502;
T502:;
	base[0]= VV[74];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V301= vs_base[0];
	goto T495;
T495:;
	V305= (*(LnkLI70))(VV[85],VV[87]);
	{object V306 = (V301)->v.v_self[fix(/* INLINE-ARGS */V305)];
	VMR31(V306)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-ACCESSOR-METHOD-SLOT-NAME	*/

static object LI37(V308)

register object V308;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	if(type_of(V308)==t_structure){
	goto T512;}
	goto T510;
	goto T512;
T512:;
	if(!(((V308)->str.str_def)==(VV[88]))){
	goto T510;}
	V309= STREF(object,(V308),4);
	goto T508;
	goto T510;
T510:;{object V311;
	V311= (VV[73]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V308);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V312= vs_base[0];
	if(!((V311)==(CMPcar(V312)))){
	goto T515;}}
	V309= CMPcar(((V308))->cc.cc_turbo[12]);
	goto T508;
	goto T515;
T515:;
	base[0]= VV[74];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V309= vs_base[0];
	goto T508;
T508:;
	V313= (*(LnkLI70))(VV[89],VV[90]);
	{object V314 = (V309)->v.v_self[fix(/* INLINE-ARGS */V313)];
	VMR32(V314)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-CLASS-DIRECT-SUBCLASSES	*/

static object LI38(V316)

register object V316;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	if(type_of(V316)==t_structure){
	goto T525;}
	goto T523;
	goto T525;
T525:;
	if(!(((V316)->str.str_def)==(VV[91]))){
	goto T523;}
	V317= STREF(object,(V316),4);
	goto T521;
	goto T523;
T523:;{object V319;
	V319= (VV[73]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V316);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V320= vs_base[0];
	if(!((V319)==(CMPcar(V320)))){
	goto T528;}}
	V317= CMPcar(((V316))->cc.cc_turbo[12]);
	goto T521;
	goto T528;
T528:;
	base[0]= VV[74];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V317= vs_base[0];
	goto T521;
T521:;
	V321= (*(LnkLI70))(VV[76],VV[92]);
	{object V322 = (V317)->v.v_self[fix(/* INLINE-ARGS */V321)];
	VMR33(V322)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOAD-DEFCLASS	*/

static object LI39(V329,V330,V331,V332,V333,V334)

object V329;object V330;object V331;object V332;object V333;object V334;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	base[0]= (V331);
	vs_top=(vs_base=base+0)+1;
	Lcopy_tree();
	vs_top=sup;
	V331= vs_base[0];
	base[0]= (V332);
	vs_top=(vs_base=base+0)+1;
	Lcopy_tree();
	vs_top=sup;
	V332= vs_base[0];
	base[0]= (V333);
	vs_top=(vs_base=base+0)+1;
	Lcopy_tree();
	vs_top=sup;
	V333= vs_base[0];
	(void)((*(LnkLI100))((V334)));
	if(!(((V330))==(VV[11]))){
	goto T544;}
	(void)((*(LnkLI104))((V329)));
	goto T544;
T544:;
	{object V335;
	object V336;
	V337 = (V329);
	vs_base=vs_top;
	(void) (*Lnk126)();
	vs_top=sup;
	V338= vs_base[0];
	V339 = (V330);
	V340 = (V331);
	V341 = (V332);
	V342 = (V333);
	V335= (*(LnkLI125))(V337,V338,V339,V340,V341,V342);
	base[0]= (V329);
	base[1]= (VV[57]->s.s_dbind);
	base[2]= VV[58];
	base[3]= (VV[107]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk108)();
	vs_top=sup;
	V336= vs_base[0];
	V343 = (V335);
	base[0]= (V336);
	base[1]= (VV[57]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk95)();
	vs_top=sup;
	V344= vs_base[0];
	(VV[57]->s.s_dbind)= make_cons(V343,V344);
	{object V345 = (V335);
	VMR34(V345)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function WALK	*/

static void L26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	{object V346;
	check_arg(1);
	V346=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V347;
	object V348;
	V347= (*(LnkLI60))((V346));
	V348= (*(LnkLI115))((V347));
	V349 = (V346);
	{object V351;
	{object V352;
	object V353= (V348);
	if(V353==Cnil){
	V351= Cnil;
	goto T562;}
	base[3]=V352=MMcons(Cnil,Cnil);
	goto T563;
T563:;
	(V352->c.c_car)= (*(LnkLI112))((V353->c.c_car));
	if((V353=MMcdr(V353))==Cnil){
	V351= base[3];
	goto T562;}
	V352=MMcdr(V352)=MMcons(Cnil,Cnil);
	goto T563;}
	goto T562;
T562:;
	 vs_top=base+3;
	 while(V351!=Cnil)
	 {vs_push((V351)->c.c_car);V351=(V351)->c.c_cdr;}
	vs_base=base+3;}
	Lappend();
	vs_top=sup;
	V350= vs_base[0];
	base[3]= make_cons(V349,V350);
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
	{register object V354;
	check_arg(1);
	V354=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V354))==Cnil){
	goto T566;}
	base[1]= CMPcdr((V354));
	vs_top=(vs_base=base+1)+1;
	L6(base0);
	vs_top=sup;
	{object V355= CMPcar((V354));
	if(!(type_of(V355)==t_cons||(V355)==Cnil)){
	goto T571;}}
	if(!((CMPcaar((V354)))==(VV[7]))){
	goto T571;}
	V354= CMPcdar((V354));
	goto TTL;
	return;
	goto T571;
T571:;
	{object V356;
	V356= CMPcar((V354));
	base0[0]= make_cons((V356),base0[0]);
	base[2]= base0[0];
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T566;
T566:;
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
	goto T580;}
	{register object x= CMPcar(base0[0]),V357= VV[4];
	while(V357!=Cnil)
	if(x==(V357->c.c_car)){
	goto T583;
	}else V357=V357->c.c_cdr;
	goto T580;}
	goto T583;
T583:;
	base[0]= Cnil;
	base[1]= VV[5];
	base[2]= (VFUN_NARGS=2,(*(LnkLI127))(CMPcar(base0[0]),Cnil));
	base[3]= CMPcdr(base0[0]);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	return;
	goto T580;
T580:;
	base[0]= Cnil;
	base[1]= VV[6];
	base[2]= base0[0];
	vs_top=(vs_base=base+0)+3;
	Lformat();
	return;
}
static object  LnkTLI127(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[127],(void **)(void *)&LnkLI127,first,ap);va_end(ap);return V1;} /* CAPITALIZE-WORDS */
static void LnkT126(){ call_or_link(VV[126],(void **)(void *)&Lnk126);} /* LOAD-TRUENAME */
static object  LnkTLI125(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[125],(void **)(void *)&LnkLI125,6,first,ap);va_end(ap);return V1;} /* MAKE-EARLY-CLASS-DEFINITION */
static object  LnkTLI124(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[124],(void **)(void *)&LnkLI124,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static object  LnkTLI123(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[123],(void **)(void *)&LnkLI123,1,first,ap);va_end(ap);return V1;} /* EARLY-CLASS-NAME */
static object  LnkTLI70(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[70],(void **)(void *)&LnkLI70,2,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-SLOT-INDEX */
static object  LnkTLI122(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[122],(void **)(void *)&LnkLI122,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT121(){ call_or_link(VV[121],(void **)(void *)&Lnk121);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT120(){ call_or_link(VV[120],(void **)(void *)&Lnk120);} /* POSITION */
static object  LnkTLI119(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[119],(void **)(void *)&LnkLI119,1,first,ap);va_end(ap);return V1;} /* ECD-OTHER-INITARGS */
static void LnkT118(){ call_or_link(VV[118],(void **)(void *)&Lnk118);} /* REMOVE-DUPLICATES */
static object  LnkTLI116(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[116],(void **)(void *)&LnkLI116,1,first,ap);va_end(ap);return V1;} /* ECD-CANONICAL-SLOTS */
static object  LnkTLI60(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[60],(void **)(void *)&LnkLI60,1,first,ap);va_end(ap);return V1;} /* EARLY-CLASS-DEFINITION */
static object  LnkTLI107(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[107],(void **)(void *)&LnkLI107,1,first,ap);va_end(ap);return V1;} /* ECD-CLASS-NAME */
static object  LnkTLI115(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[115],(void **)(void *)&LnkLI115,1,first,ap);va_end(ap);return V1;} /* ECD-SUPERCLASS-NAMES */
static object  LnkTLI114(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[114],(void **)(void *)&LnkLI114,1,first,ap);va_end(ap);return V1;} /* EARLY-COLLECT-DEFAULT-INITARGS */
static object  LnkTLI113(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[113],(void **)(void *)&LnkLI113,1,first,ap);va_end(ap);return V1;} /* EARLY-COLLECT-SLOTS */
static object  LnkTLI112(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[112],(void **)(void *)&LnkLI112,1,first,ap);va_end(ap);return V1;} /* EARLY-COLLECT-CPL */
static object  LnkTLI111(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[111],(void **)(void *)&LnkLI111,1,first,ap);va_end(ap);return V1;} /* EARLY-CLASS-SLOTS */
static object  LnkTLI110(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[110],(void **)(void *)&LnkLI110,1,first,ap);va_end(ap);return V1;} /* CANONICAL-SLOT-NAME */
static void LnkT109(){ call_or_link(VV[109],(void **)(void *)&Lnk109);} /* EARLY-COLLECT-INHERITANCE */
static void LnkT108(){ call_or_link(VV[108],(void **)(void *)&Lnk108);} /* FIND */
static object  LnkTLI105(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[105],(void **)(void *)&LnkLI105,1,first,ap);va_end(ap);return V1;} /* MAKE-INITFUNCTION */
static object  LnkTLI104(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[104],(void **)(void *)&LnkLI104,1,first,ap);va_end(ap);return V1;} /* INFORM-TYPE-SYSTEM-ABOUT-STD-CLASS */
static void LnkT103(ptr) object *ptr;{ call_or_link_closure(VV[103],(void **)(void *)&Lnk103,(void **)(void *)&Lclptr103);} /* CLASS-DEFSTRUCT-FORM */
static object  LnkTLI102(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[102],(void **)(void *)&LnkLI102,1,first,ap);va_end(ap);return V1;} /* GET-SETF-FUNCTION-NAME */
static object  LnkTLI101(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[101],(void **)(void *)&LnkLI101,3,first,ap);va_end(ap);return V1;} /* MAKE-TOP-LEVEL-FORM */
static object  LnkTLI100(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[100],(void **)(void *)&LnkLI100,1,first,ap);va_end(ap);return V1;} /* DO-STANDARD-DEFSETFS-FOR-DEFCLASS */
static void LnkT99(){ call_or_link(VV[99],(void **)(void *)&Lnk99);} /* *SUBTYPEP */
static object  LnkTLI98(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[98],(void **)(void *)&LnkLI98,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static object  LnkTLI97(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[97],(void **)(void *)&LnkLI97,2,first,ap);va_end(ap);return V1;} /* CANONICALIZE-DEFCLASS-OPTION */
static object  LnkTLI96(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[96],(void **)(void *)&LnkLI96,2,first,ap);va_end(ap);return V1;} /* CANONICALIZE-SLOT-SPECIFICATION */
static void LnkT95(){ call_or_link(VV[95],(void **)(void *)&Lnk95);} /* REMOVE */
static object  LnkTLI94(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[94],(void **)(void *)&LnkLI94,1,first,ap);va_end(ap);return V1;} /* LEGAL-CLASS-NAME-P */
static object  LnkTLI93(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[93],(void **)(void *)&LnkLI93,4,first,ap);va_end(ap);return V1;} /* EXPAND-DEFCLASS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

