
#include "cmpinclude.h"
#include "pcl_defs.h"
void init_pcl_defs(){do_init(VV);}
/*	macro definition for PARSE-GSPEC	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	{object V2= (V1->c.c_car);
	if(endp(V2))invalid_macro_call();
	base[3]= (V2->c.c_car);
	V2=V2->c.c_cdr;
	base[4]= V2;}
	V1=V1->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	{object V3= (V1->c.c_car);
	if(endp(V3))invalid_macro_call();
	base[5]= (V3->c.c_car);
	V3=V3->c.c_cdr;
	base[6]= V3;}
	V1=V1->c.c_cdr;
	if(!endp(V1))invalid_macro_call();}
	{object V4;
	object V5;
	object V6;
	V4= Cnil;
	V5= Cnil;
	{register object V7;
	if(type_of(base[2])==t_symbol){
	goto T5;}
	if(type_of(base[2])==t_fixnum||
type_of(base[2])==t_bignum||
type_of(base[2])==t_ratio||
type_of(base[2])==t_shortfloat||
type_of(base[2])==t_longfloat||
type_of(base[2])==t_complex){
	goto T5;}
	if(!(type_of(base[2])==t_cons||(base[2])==Cnil)){
	goto T6;}
	{register object x= CMPcar(base[2]),V8= VV[0];
	while(V8!=Cnil)
	if(eql(x,V8->c.c_car)){
	goto T13;
	}else V8=V8->c.c_cdr;
	goto T6;}
	goto T13;
T13:;
	goto T5;
T5:;
	V7= base[2];
	goto T4;
	goto T6;
T6:;
	{object V9;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V9= vs_base[0];
	V4= make_cons(V9,(V4));
	V5= make_cons(base[2],(V5));
	V7= (V9);}
	goto T4;
T4:;
	V12= list(2,VV[2],(V7));
	V13= list(2,base[3],(V7));
	V14= list(2,/* INLINE-ARGS */V12,listA(3,VV[3],make_cons(/* INLINE-ARGS */V13,Cnil),base[4]));
	V15= list(2,VV[5],(V7));
	V16= list(3,VV[6],list(2,VV[7],(V7)),VV[8]);
	V17= list(4,VV[4],/* INLINE-ARGS */V15,/* INLINE-ARGS */V16,list(2,VV[2],list(2,VV[9],(V7))));
	V18= list(2,base[5],list(2,VV[9],(V7)));
	V19= list(2,/* INLINE-ARGS */V17,listA(3,VV[3],make_cons(/* INLINE-ARGS */V18,Cnil),base[6]));
	V6= list(4,VV[1],/* INLINE-ARGS */V14,/* INLINE-ARGS */V19,list(2,Ct,listA(4,VV[10],VV[11],(V7),VV[12])));}
	V24= reverse((V4));
	V25= reverse((V5));
	{object V21;
	object V22= /* INLINE-ARGS */V24;
	object V23= /* INLINE-ARGS */V25;
	if(V22==Cnil||V23==Cnil){
	V20= Cnil;
	goto T19;}
	base[8]=V21=MMcons(Cnil,Cnil);
	goto T20;
T20:;
	(V21->c.c_car)= list(2,(V22->c.c_car),(V23->c.c_car));
	if((V22=MMcdr(V22))==Cnil||(V23=MMcdr(V23))==Cnil){
	V20= base[8];
	goto T19;}
	V21=MMcdr(V21)=MMcons(Cnil,Cnil);
	goto T20;}
	goto T19;
T19:;
	V26 = (V6);
	base[8]= list(3,VV[3],V20,V26);
	vs_top=(vs_base=base+8)+1;
	return;}
}
/*	local entry for function UNENCAPSULATED-FDEFINITION	*/

static object LI2(V28)

register object V28;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	{object V29;
	object V30;
	{object V31 =((V28))->s.s_plist;
	 object ind= VV[13];
	while(V31!=Cnil){
	if(V31->c.c_car==ind){
	V29= (V31->c.c_cdr->c.c_car);
	goto T23;
	}else V31=V31->c.c_cdr->c.c_cdr;}
	V29= Cnil;}
	goto T23;
T23:;
	V30= Cnil;
	if(((V29))==Cnil){
	goto T25;}
	base[1]= (V28);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	V32= vs_base[0];
	if(!(type_of(V32)==t_cons)){
	goto T25;}
	base[1]= (V28);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	V33= vs_base[0];
	V30= CMPcadddr(V33);
	V34 = (V30);
	if(!(type_of(V34)==t_cons)){
	goto T25;}
	if(!((CMPcar((V30)))==(VV[14]))){
	goto T25;}
	base[0]= (V29);
	goto T22;
	goto T25;
T25:;
	base[0]= (V28);}
	goto T22;
T22:;
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	{object V35 = vs_base[0];
	VMR2(V35)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FDEFINE-CAREFULLY	*/

static object LI3(V38,V39)

register object V38;object V39;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V40;
	object V41;
	{object V42 =((V38))->s.s_plist;
	 object ind= VV[13];
	while(V42!=Cnil){
	if(V42->c.c_car==ind){
	V40= (V42->c.c_cdr->c.c_car);
	goto T39;
	}else V42=V42->c.c_cdr->c.c_cdr;}
	V40= Cnil;}
	goto T39;
T39:;
	V41= Cnil;
	if(((V40))==Cnil){
	goto T41;}
	base[1]= (V38);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	V43= vs_base[0];
	if(!(type_of(V43)==t_cons)){
	goto T41;}
	base[1]= (V38);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	V44= vs_base[0];
	V41= CMPcadddr(V44);
	V45 = (V41);
	if(!(type_of(V45)==t_cons)){
	goto T41;}
	if(!((CMPcar((V41)))==(VV[14]))){
	goto T41;}
	base[0]= (V40);
	goto T38;
	goto T41;
T41:;
	base[0]= (V38);}
	goto T38;
T38:;
	base[1]= (V39);
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
	{object V46 = vs_base[0];
	VMR3(V46)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GBOUNDP	*/

static object LI4(V48)

register object V48;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if(!(type_of((V48))==t_symbol)){
	goto T56;}
	base[0]= V48;
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	{object V50 = vs_base[0];
	VMR4(V50)}
	goto T56;
T56:;
	if(!(type_of((V48))==t_cons||((V48))==Cnil)){
	goto T60;}
	if(!((CMPcar((V48)))==(VV[15]))){
	goto T60;}
	if(!(type_of(CMPcadr((V48)))==t_symbol)){
	goto T60;}
	{object V51;
	V51= CMPcadr((V48));
	base[0]= (*(LnkLI361))((V51));
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	{object V52 = vs_base[0];
	VMR4(V52)}}
	goto T60;
T60:;
	base[0]= VV[11];
	base[1]= (V48);
	base[2]= VV[16];
	base[3]= VV[15];
	vs_top=(vs_base=base+0)+4;
	Lerror();
	vs_top=sup;
	{object V53 = vs_base[0];
	VMR4(V53)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GMAKUNBOUND	*/

static object LI5(V55)

register object V55;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	if(!(type_of((V55))==t_symbol)){
	goto T73;}
	base[0]= V55;
	vs_top=(vs_base=base+0)+1;
	Lfmakunbound();
	vs_top=sup;
	{object V57 = vs_base[0];
	VMR5(V57)}
	goto T73;
T73:;
	if(!(type_of((V55))==t_cons||((V55))==Cnil)){
	goto T77;}
	if(!((CMPcar((V55)))==(VV[15]))){
	goto T77;}
	if(!(type_of(CMPcadr((V55)))==t_symbol)){
	goto T77;}
	{object V58;
	V58= CMPcadr((V55));
	base[0]= (*(LnkLI361))((V58));
	vs_top=(vs_base=base+0)+1;
	Lfmakunbound();
	vs_top=sup;
	{object V59 = vs_base[0];
	VMR5(V59)}}
	goto T77;
T77:;
	base[0]= VV[11];
	base[1]= (V55);
	base[2]= VV[16];
	base[3]= VV[15];
	vs_top=(vs_base=base+0)+4;
	Lerror();
	vs_top=sup;
	{object V60 = vs_base[0];
	VMR5(V60)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GDEFINITION	*/

static object LI6(V62)

register object V62;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	if(!(type_of((V62))==t_symbol)){
	goto T90;}{object V64;
	base[0]= V62;
	vs_top=(vs_base=base+0)+1;
	Lmacro_function();
	vs_top=sup;
	V64= vs_base[0];
	if(V64==Cnil)goto T92;
	{object V65 = V64;
	VMR6(V65)}
	goto T92;
T92:;}
	{object V66 = (*(LnkLI362))(V62);
	VMR6(V66)}
	goto T90;
T90:;
	if(!(type_of((V62))==t_cons||((V62))==Cnil)){
	goto T96;}
	if(!((CMPcar((V62)))==(VV[15]))){
	goto T96;}
	if(!(type_of(CMPcadr((V62)))==t_symbol)){
	goto T96;}
	{object V67;
	V67= CMPcadr((V62));
	V68= (*(LnkLI361))((V67));
	{object V69 = (*(LnkLI362))(/* INLINE-ARGS */V68);
	VMR6(V69)}}
	goto T96;
T96:;
	base[0]= VV[11];
	base[1]= (V62);
	base[2]= VV[16];
	base[3]= VV[15];
	vs_top=(vs_base=base+0)+4;
	Lerror();
	vs_top=sup;
	{object V70 = vs_base[0];
	VMR6(V70)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SETF PCL GDEFINITION	*/

static object LI7(V73,V74)

object V73;register object V74;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	if(!(type_of((V74))==t_symbol)){
	goto T108;}
	{object V76 = (*(LnkLI363))(V74,(V73));
	VMR7(V76)}
	goto T108;
T108:;
	if(!(type_of((V74))==t_cons||((V74))==Cnil)){
	goto T111;}
	if(!((CMPcar((V74)))==(VV[15]))){
	goto T111;}
	if(!(type_of(CMPcadr((V74)))==t_symbol)){
	goto T111;}
	{object V77;
	V77= CMPcadr((V74));
	V78= (*(LnkLI361))((V77));
	V79 = (V73);
	{object V80 = (*(LnkLI363))(/* INLINE-ARGS */V78,V79);
	VMR7(V80)}}
	goto T111;
T111:;
	base[0]= VV[11];
	base[1]= (V74);
	base[2]= VV[16];
	base[3]= VV[15];
	vs_top=(vs_base=base+0)+4;
	Lerror();
	vs_top=sup;
	{object V81 = vs_base[0];
	VMR7(V81)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for COERCE-TO-CLASS	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	{register object V82;
	object V83;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V82=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T122;}
	V83=(base[1]);
	vs_top=sup;
	goto T123;
	goto T122;
T122:;
	V83= Cnil;
	goto T123;
T123:;
	if(!(type_of((V82))==t_symbol)){
	goto T126;}{object V84;
	V84= (VFUN_NARGS=2,(*(LnkLI364))((V82),(((V83))==Cnil?Ct:Cnil)));
	if(V84==Cnil)goto T128;
	base[2]= V84;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T128;
T128:;}
	base[2]= (V82);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk365)();
	return;
	goto T126;
T126:;
	base[2]= (V82);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for SPECIALIZER-FROM-TYPE	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	{register object V85;
	check_arg(1);
	V85=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V86;
	V86= Cnil;
	if(!(type_of((V85))==t_cons)){
	goto T132;}
	V86= CMPcdr((V85));
	V85= CMPcar((V85));
	goto T132;
T132:;
	if(!(type_of((V85))==t_symbol)){
	goto T139;}{object V87;
	if(((V86))==Cnil){
	goto T143;}
	V87= Cnil;
	goto T142;
	goto T143;
T143:;
	V87= (VFUN_NARGS=1,(*(LnkLI364))((V85)));
	goto T142;
T142:;
	if(V87==Cnil)goto T141;
	base[1]= V87;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T141;
T141:;}
	{object V88= (V85);
	if((V88!= VV[41]))goto T145;
	base[1]= CMPcar((V86));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk366)();
	return;
	goto T145;
T145:;
	if((V88!= VV[121]))goto T147;
	base[1]= VV[17];
	base[2]= VV[18];
	base[4]= CMPcar((V86));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk366)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk367)(Lclptr367);
	return;
	goto T147;
T147:;
	if((V88!= VV[368]))goto T152;
	base[2]= CMPcar((V86));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk366)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk92)(Lclptr92);
	return;
	goto T152;
T152:;
	if((V88!= VV[369]))goto T155;
	base[1]= (*(LnkLI370))(CMPcar((V86)));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T155;
T155:;
	FEerror("The ECASE key value ~s is illegal.",1,V88);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T139;
T139:;
	base[1]= (V85);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk371)(Lclptr371);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T157;}
	base[1]= (V85);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T157;
T157:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for TYPE-FROM-SPECIALIZER	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{register object V89;
	check_arg(1);
	V89=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(((V89))==(Ct))){
	goto T161;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T161;
T161:;
	if(!(type_of((V89))==t_cons)){
	goto T164;}
	{register object x= CMPcar((V89)),V90= VV[19];
	while(V90!=Cnil)
	if(eql(x,V90->c.c_car)){
	goto T166;
	}else V90=V90->c.c_cdr;}
	base[1]= VV[20];
	base[2]= (V89);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	goto T166;
T166:;
	base[1]= (V89);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T164;
T164:;
	if(!(type_of((V89))==t_symbol)){
	goto T174;}
	V89= (VFUN_NARGS=1,(*(LnkLI364))((V89)));
	goto T174;
T174:;
	if(!(((((VV[21]->s.s_dbind))==(VV[22])?Ct:Cnil))==Cnil)){
	goto T178;}
	goto T173;
	goto T178;
T178:;
	base[1]= (V89);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk371)(Lclptr371);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T172;}
	goto T173;
T173:;
	base[1]= (V89);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk372)(Lclptr372);
	return;
	goto T172;
T172:;
	base[1]= VV[23];
	base[2]= (V89);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	}
}
/*	local entry for function TYPE-CLASS	*/

static object LI11(V92)

register object V92;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	base[0]= (V92);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk373)();
	vs_top=sup;
	V92= vs_base[0];
	if(!(type_of((V92))!=t_cons)){
	goto T188;}
	if(!(((V92))==(Ct))){
	goto T191;}
	{object V93 = (VV[24]->s.s_dbind);
	VMR11(V93)}
	goto T191;
T191:;
	base[0]= VV[25];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V94 = vs_base[0];
	VMR11(V94)}
	goto T188;
T188:;
	{object V95= CMPcar((V92));
	if((V95!= VV[369]))goto T194;
	{object V96 = (*(LnkLI374))(CMPcadr((V92)));
	VMR11(V96)}
	goto T194;
T194:;
	if((V95!= VV[121]))goto T195;
	{object V97 = (*(LnkLI374))(CMPcadr((V92)));
	VMR11(V97)}
	goto T195;
T195:;
	if((V95!= VV[368]))goto T196;
	{object V98 = CMPcadr((V92));
	VMR11(V98)}
	goto T196;
T196:;
	if((V95!= VV[41]))goto T197;
	{object V99 = CMPcadr((V92));
	VMR11(V99)}
	goto T197;
T197:;
	{object V100 = Cnil;
	VMR11(V100)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for CLASS-EQ-TYPE	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{object V101;
	check_arg(1);
	V101=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V101);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk92)(Lclptr92);
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk372)(Lclptr372);
	return;
	}
}
/*	local entry for function INFORM-TYPE-SYSTEM-ABOUT-STD-CLASS	*/

static object LI13(V103)

object V103;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{object V104;
	V104= (VFUN_NARGS=1,(*(LnkLI375))((V103)));
	V106= (*(LnkLI377))((V103));
	V107 = V104;
	(void)((*(LnkLI376))(/* INLINE-ARGS */V106,V107));
	{object V108 = (*(LnkLI378))((V103),(V104));
	VMR13(V108)}}
	return Cnil;
}
/*	local entry for function MAKE-TYPE-PREDICATE	*/

static object LI14(V110)

object V110;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	base[0]= (VFUN_NARGS=1,(*(LnkLI379))((V110)));
	base[0]=MMcons(base[0],Cnil);
	{object V111 = 
	make_cclosure_new(LC79,Cnil,base[0],Cdata);
	VMR14(V111)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CLASS-PREDICATE	*/

static object LI16(V113)

object V113;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	base[0]=MMcons((V113),Cnil);
	if(!(type_of((base[0]->c.c_car))==t_symbol)){
	goto T203;}
	(base[0]->c.c_car)= (VFUN_NARGS=1,(*(LnkLI364))((base[0]->c.c_car)));
	goto T203;
T203:;
	{object V114 = 
	make_cclosure_new(LC80,Cnil,base[0],Cdata);
	VMR15(V114)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-CLASS-EQ-PREDICATE	*/

static object LI18(V116)

object V116;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	base[0]=MMcons((V116),Cnil);
	if(!(type_of((base[0]->c.c_car))==t_symbol)){
	goto T207;}
	(base[0]->c.c_car)= (VFUN_NARGS=1,(*(LnkLI364))((base[0]->c.c_car)));
	goto T207;
T207:;
	{object V117 = 
	make_cclosure_new(LC81,Cnil,base[0],Cdata);
	VMR16(V117)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-EQL-PREDICATE	*/

static object LI20(V119)

object V119;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	base[0]=MMcons((V119),Cnil);
	{object V120 = 
	make_cclosure_new(LC82,Cnil,base[0],Cdata);
	VMR17(V120)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for G2438	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{object V121;
	check_arg(1);
	V121=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= list(2,VV[26],(V121));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for *NORMALIZE-TYPE	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{register object V122;
	check_arg(1);
	V122=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V122))==t_cons)){
	goto T212;}
	{register object x= CMPcar((V122)),V123= VV[27];
	while(V123!=Cnil)
	if(eql(x,V123->c.c_car)){
	goto T216;
	}else V123=V123->c.c_cdr;
	goto T215;}
	goto T216;
T216:;
	V124= CMPcar((V122));
	{object V126;
	object V127= CMPcdr((V122));
	if(V127==Cnil){
	V125= Cnil;
	goto T217;}
	base[1]=V126=MMcons(Cnil,Cnil);
	goto T218;
T218:;
	base[2]= (V127->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk380)();
	vs_top=sup;
	(V126->c.c_car)= vs_base[0];
	if((V127=MMcdr(V127))==Cnil){
	V125= base[1];
	goto T217;}
	V126=MMcdr(V126)=MMcons(Cnil,Cnil);
	goto T218;}
	goto T217;
T217:;
	base[1]= make_cons(/* INLINE-ARGS */V124,V125);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T215;
T215:;
	if((CMPcdr((V122)))!=Cnil){
	goto T222;}
	V122= CMPcar((V122));
	goto TTL;
	goto T222;
T222:;
	base[1]= (V122);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T212;
T212:;
	if(!(type_of((V122))==t_symbol)){
	goto T227;}
	{object V128;
	V128= (VFUN_NARGS=2,(*(LnkLI364))((V122),Cnil));
	if(((V128))==Cnil){
	goto T231;}
	{object V129;
	base[1]= (V128);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk372)(Lclptr372);
	vs_top=sup;
	V129= vs_base[0];
	if(!(type_of((V129))==t_cons||((V129))==Cnil)){
	goto T236;}
	base[1]= (V129);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T236;
T236:;
	base[1]= make_cons((V129),Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T231;
T231:;
	base[1]= make_cons((V122),Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T227;
T227:;
	if(!(((VV[21]->s.s_dbind))==(VV[22]))){
	goto T238;}
	base[1]= (V122);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk371)(Lclptr371);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T239;}
	goto T238;
T238:;
	base[1]= (V122);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk372)(Lclptr372);
	return;
	goto T239;
T239:;
	base[1]= VV[28];
	base[2]= (V122);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	}
}
/*	function definition for CONVERT-TO-SYSTEM-TYPE	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{register object V130;
	check_arg(1);
	V130=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V131= CMPcar((V130));
	if((V131!= VV[381])
	&& (V131!= VV[4])
	&& (V131!= VV[382]))goto T247;
	V132= CMPcar((V130));
	{object V134;
	object V135= CMPcdr((V130));
	if(V135==Cnil){
	V133= Cnil;
	goto T248;}
	base[1]=V134=MMcons(Cnil,Cnil);
	goto T249;
T249:;
	base[2]= (V135->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk383)();
	vs_top=sup;
	(V134->c.c_car)= vs_base[0];
	if((V135=MMcdr(V135))==Cnil){
	V133= base[1];
	goto T248;}
	V134=MMcdr(V134)=MMcons(Cnil,Cnil);
	goto T249;}
	goto T248;
T248:;
	base[1]= make_cons(/* INLINE-ARGS */V132,V133);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T247;
T247:;
	if((V131!= VV[41])
	&& (V131!= VV[368]))goto T252;
	base[1]= CMPcadr((V130));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk384)(Lclptr384);
	return;
	goto T252;
T252:;
	if((V131!= VV[369]))goto T254;
	base[1]= (V130);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T254;
T254:;
	if((CMPcdr((V130)))!=Cnil){
	goto T256;}
	base[1]= CMPcar((V130));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T256;
T256:;
	base[1]= (V130);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for *SUBTYPEP	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	bds_check;
	{register object V136;
	register object V137;
	check_arg(2);
	V136=(base[0]);
	V137=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(equal((V136),(V137)))){
	goto T259;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T259;
T259:;
	if(!(((VV[21]->s.s_dbind))==(VV[29]))){
	goto T264;}
	base[2]= (((V136))==((V137))?Ct:Cnil);
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T264;
T264:;
	bds_bind(VV[30],Ct);
	base[3]= (V136);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk380)();
	vs_top=sup;
	V136= vs_base[0];
	base[3]= (V137);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk380)();
	vs_top=sup;
	V137= vs_base[0];
	{object V138= CMPcar((V137));
	if((V138!= VV[381]))goto T274;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	bds_unwind1;
	return;
	goto T274;
T274:;
	if((V138!= VV[4]))goto T277;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	bds_unwind1;
	return;
	goto T277;
T277:;
	if((V138!= VV[369])
	&& (V138!= VV[385])
	&& (V138!= VV[368])
	&& (V138!= VV[41]))goto T280;
	{object V139;
	object V140;
	base[3]= (V137);
	base[4]= (V136);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk386)();
	if(vs_base>=vs_top){vs_top=sup;goto T284;}
	V139= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T285;}
	V140= vs_base[0];
	vs_top=sup;
	goto T286;
	goto T284;
T284:;
	V139= Cnil;
	goto T285;
T285:;
	V140= Cnil;
	goto T286;
T286:;
	base[3]= (V139);
	if((V139)!=Cnil){
	base[4]= (V139);
	goto T288;}
	base[4]= (((V140))==Cnil?Ct:Cnil);
	goto T288;
T288:;
	vs_top=(vs_base=base+3)+2;
	bds_unwind1;
	return;}
	goto T280;
T280:;
	base[4]= (V136);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk383)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[5]= (V137);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk383)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk387)();
	bds_unwind1;
	return;}
	}
}
/*	local entry for function DO-SATISFIES-DEFTYPE	*/

static object LI25(V143,V144)

object V143;object V144;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	base[0]= list(4,VV[31],(V143),Cnil,list(2,VV[32],list(2,VV[33],(V144))));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	{object V145 = vs_base[0];
	VMR22(V145)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-TYPE-PREDICATE-NAME	*/

static object LI26(object V146,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB23 VMS23 VMV23
	{register object V147;
	object V148;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V147= V146;
	narg = narg - 1;
	if (narg <= 0) goto T294;
	else {
	V148= first;}
	--narg; goto T295;
	goto T294;
T294:;
	V148= Cnil;
	goto T295;
T295:;
	base[0]= (V147);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T298;}
	base[1]= Cnil;
	base[2]= VV[34];
	base[3]= (V148);
	base[6]= (V147);
	vs_top=(vs_base=base+6)+1;
	Lsymbol_package();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lpackage_name();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= symbol_name((V147));
	vs_top=(vs_base=base+1)+5;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[35]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V149 = vs_base[0];
	VMR23(V149)}
	goto T298;
T298:;
	base[1]= Cnil;
	base[2]= VV[36];
	base[3]= (V148);
	base[4]= symbol_name((V147));
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lmake_symbol();
	vs_top=sup;
	{object V150 = vs_base[0];
	VMR23(V150)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function GET-BUILT-IN-CLASS-SYMBOL	*/

static object LI27(V152)

object V152;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;{object V153;
	{register object x= (V152),V155= (VV[37]->s.s_dbind);
	while(V155!=Cnil)
	if(EQ(x,V155->c.c_car->c.c_car) &&V155->c.c_car != Cnil){
	V154= (V155->c.c_car);
	goto T317;
	}else V155=V155->c.c_cdr;
	V154= Cnil;}
	goto T317;
T317:;
	V153= CMPcadr(V154);
	if(V153==Cnil)goto T315;
	{object V156 = V153;
	VMR24(V156)}
	goto T315;
T315:;}
	{object V157;
	base[1]= Cnil;
	base[2]= VV[38];
	base[3]= symbol_name((V152));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[35]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	V157= vs_base[0];
	{object V158;
	V158= list(2,(V152),(V157));
	(VV[37]->s.s_dbind)= make_cons((V158),(VV[37]->s.s_dbind));}
	{object V159 = (V157);
	VMR24(V159)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-BUILT-IN-WRAPPER-SYMBOL	*/

static object LI28(V161)

object V161;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;{object V162;
	{register object x= (V161),V164= (VV[39]->s.s_dbind);
	while(V164!=Cnil)
	if(EQ(x,V164->c.c_car->c.c_car) &&V164->c.c_car != Cnil){
	V163= (V164->c.c_car);
	goto T329;
	}else V164=V164->c.c_cdr;
	V163= Cnil;}
	goto T329;
T329:;
	V162= CMPcadr(V163);
	if(V162==Cnil)goto T327;
	{object V165 = V162;
	VMR25(V165)}
	goto T327;
T327:;}
	{object V166;
	base[1]= Cnil;
	base[2]= VV[40];
	base[3]= symbol_name((V161));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[35]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	V166= vs_base[0];
	{object V167;
	V167= list(2,(V161),(V166));
	(VV[39]->s.s_dbind)= make_cons((V167),(VV[39]->s.s_dbind));}
	{object V168 = (V166);
	VMR25(V168)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VARIABLE-CLASS	*/

static object LI29(V171,V172)

object V171;object V172;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	V173= (*(LnkLI388))(VV[41],(V171),(V172));
	{object V174 = CMPcaddr(/* INLINE-ARGS */V173);
	VMR26(V174)}
	return Cnil;
}
/*	macro definition for DEFINE-GF-PREDICATE	*/

static void L30()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V175=base[0]->c.c_cdr;
	if(endp(V175))invalid_macro_call();
	base[2]= (V175->c.c_car);
	V175=V175->c.c_cdr;
	base[3]= V175;}
	V176= listA(3,VV[43],base[2],VV[44]);
	{object V178;
	object V179= base[3];
	if(V179==Cnil){
	V177= Cnil;
	goto T339;}
	base[4]=V178=MMcons(Cnil,Cnil);
	goto T340;
T340:;
	V181= list(2,VV[45],(V179->c.c_car));
	(V178->c.c_car)= list(4,VV[43],base[2],make_cons(/* INLINE-ARGS */V181,Cnil),Ct);
	if((V179=MMcdr(V179))==Cnil){
	V177= base[4];
	goto T339;}
	V178=MMcdr(V178)=MMcons(Cnil,Cnil);
	goto T340;}
	goto T339;
T339:;
	base[4]= listA(3,VV[42],/* INLINE-ARGS */V176,V177);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for MAKE-CLASS-PREDICATE-NAME	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	{object V182;
	check_arg(1);
	V182=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= Cnil;
	base[3]= VV[46];
	base[6]= (V182);
	vs_top=(vs_base=base+6)+1;
	Lsymbol_package();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lpackage_name();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V182);
	vs_top=(vs_base=base+2)+4;
	Lformat();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= (VV[35]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lintern();
	return;
	}
}
/*	local entry for function PLIST-VALUE	*/

static object LI32(V185,V186)

object V185;object V186;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	base[1]= (V185);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk389)(Lclptr389);
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V186);
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	{object V187 = vs_base[0];
	VMR29(V187)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SETF PCL PLIST-VALUE	*/

static object LI33(V191,V192,V193)

object V191;object V192;object V193;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	if(((V191))==Cnil){
	goto T354;}
	{object V197;
	base[1]= V192;
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk389)(Lclptr389);
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= V191;
	base[2]= V193;
	vs_top=(vs_base=base+0)+3;
	siLput_f();
	vs_top=sup;
	V197= vs_base[0];
	base[0]= (V197);
	base[1]= V192;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)(Lclptr390);
	vs_top=sup;
	{object V199 = V191;
	VMR30(V199)}}
	goto T354;
T354:;
	{object V201;
	object V202;
	base[1]= V192;
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk389)(Lclptr389);
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V193);
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T369;}
	V201= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T370;}
	V202= vs_base[0];
	vs_top=sup;
	goto T371;
	goto T369;
T369:;
	V201= Cnil;
	goto T370;
T370:;
	V202= Cnil;
	goto T371;
T371:;
	base[0]= (V201);
	base[1]= V192;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)(Lclptr390);
	vs_top=sup;}
	{object V204 = Cnil;
	VMR30(V204)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass T2461	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= Ct;
	base[1]= VV[47];
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass SLOT-OBJECT2461	*/

static void L35()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[49];
	base[2]= VV[50];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass STRUCTURE-OBJECT2461	*/

static void L36()
{register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[51];
	base[1]= VV[52];
	base[2]= VV[53];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	local entry for function STRUCTURE-OBJECT class constructor	*/

static object LI37(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB34 VMS34 VMV34
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI37key,first,ap);
	goto TTL;
TTL:;
	base[0]= VV[51];
	vs_top=(vs_base=base+0)+1;
	siLmake_structure();
	vs_top=sup;
	{object V205 = vs_base[0];
	VMR34(V205)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}}
/*	function definition for Defclass STANDARD-OBJECT2461	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[54];
	base[1]= VV[55];
	base[2]= VV[56];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass METAOBJECT2461	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[57];
	base[1]= VV[55];
	base[2]= VV[58];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass SPECIALIZER2461	*/

static void L40()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[59];
	base[1]= VV[55];
	base[2]= VV[60];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[63];
	base[8]= VV[64];
	base[9]= VV[65];
	base[10]= VV[66];
	base[11]= Cnil;
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[68];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V206= vs_base[0];
	base[3]= make_cons(V206,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass DEFINITION-SOURCE-MIXIN2462	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V207;
	V207= VV[393];
	base[0]= VV[69];
	base[1]= VV[55];
	base[2]= VV[70];
	base[4]= VV[61];
	base[5]= (V207);
	base[6]= VV[62];
	base[7]= VV[71];
	base[8]= VV[64];
	base[9]= VV[72];
	base[10]= VV[66];
	base[11]= Cnil;
	base[12]= VV[67];
	base[13]= VV[73];
	base[14]= VV[74];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V208= vs_base[0];
	base[3]= make_cons(V208,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;}
}
/*	function definition for Defclass PLIST-MIXIN2462	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[75];
	base[1]= VV[55];
	base[2]= VV[76];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[77];
	base[8]= VV[64];
	base[9]= VV[78];
	base[10]= VV[66];
	base[11]= VV[79];
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[80];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V209= vs_base[0];
	base[3]= make_cons(V209,Cnil);
	base[4]= Cnil;
	base[5]= VV[81];
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass DOCUMENTATION-MIXIN2462	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[82];
	base[1]= VV[55];
	base[2]= VV[83];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass DEPENDENT-UPDATE-MIXIN2462	*/

static void L44()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[84];
	base[1]= VV[55];
	base[2]= VV[85];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass CLASS2464	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V210;
	V210= VV[394];
	base[0]= VV[41];
	base[1]= VV[55];
	base[2]= VV[86];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[87];
	base[8]= VV[64];
	base[9]= VV[88];
	base[10]= VV[66];
	base[11]= VV[89];
	base[12]= VV[67];
	base[13]= VV[90];
	base[14]= VV[91];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V211= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[92];
	base[8]= VV[64];
	base[9]= VV[93];
	base[10]= VV[66];
	base[11]= Cnil;
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[94];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V212= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[95];
	base[8]= VV[64];
	base[9]= VV[96];
	base[10]= VV[66];
	base[11]= Cnil;
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[97];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V213= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[98];
	base[8]= VV[64];
	base[9]= VV[99];
	base[10]= VV[66];
	base[11]= Cnil;
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[100];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V214= vs_base[0];
	base[4]= VV[61];
	base[5]= (V210);
	base[6]= VV[62];
	base[7]= VV[101];
	base[8]= VV[64];
	base[9]= Cnil;
	base[10]= VV[66];
	base[11]= Cnil;
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[102];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V215= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[103];
	base[8]= VV[64];
	base[9]= VV[104];
	base[10]= VV[66];
	base[11]= Cnil;
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[105];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V216= vs_base[0];
	base[3]= list(6,V211,V212,V213,V214,V215,V216);
	base[4]= Cnil;
	base[5]= VV[106];
	symlispcall(VV[391],base+0,6);
	return;}
}
/*	function definition for Defclass PCL-CLASS2465	*/

static void L46()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[107];
	base[1]= VV[55];
	base[2]= VV[108];
	V217= listA(9,VV[62],VV[109],VV[64],VV[110],VV[66],Cnil,VV[67],Cnil,Cnil);
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[111];
	base[8]= VV[64];
	base[9]= VV[112];
	base[10]= VV[66];
	base[11]= Cnil;
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[113];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V218= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[114];
	base[8]= VV[64];
	base[9]= VV[115];
	base[10]= VV[66];
	base[11]= VV[116];
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[117];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V219= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[118];
	base[8]= VV[64];
	base[9]= VV[119];
	base[10]= VV[66];
	base[11]= Cnil;
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[120];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V220= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[121];
	base[8]= VV[64];
	base[9]= VV[122];
	base[10]= VV[66];
	base[11]= Cnil;
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[123];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V221= vs_base[0];
	base[3]= list(5,/* INLINE-ARGS */V217,V218,V219,V220,V221);
	base[4]= Cnil;
	base[5]= VV[124];
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass SLOT-CLASS2468	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[49];
	base[1]= VV[55];
	base[2]= VV[125];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[126];
	base[8]= VV[64];
	base[9]= VV[127];
	base[10]= VV[66];
	base[11]= VV[128];
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[129];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V222= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[130];
	base[8]= VV[64];
	base[9]= VV[131];
	base[10]= VV[66];
	base[11]= VV[132];
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[133];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V223= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[134];
	base[8]= VV[64];
	base[9]= VV[135];
	base[10]= VV[66];
	base[11]= VV[136];
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[137];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V224= vs_base[0];
	base[3]= list(3,V222,V223,V224);
	base[4]= Cnil;
	base[5]= VV[138];
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass STD-CLASS2468	*/

static void L48()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[139];
	base[1]= VV[55];
	base[2]= VV[140];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-CLASS2468	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[55];
	base[1]= VV[55];
	base[2]= VV[141];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass FUNCALLABLE-STANDARD-CLASS2468	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[142];
	base[1]= VV[55];
	base[2]= VV[143];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass FORWARD-REFERENCED-CLASS2468	*/

static void L51()
{register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[144];
	base[1]= VV[55];
	base[2]= VV[145];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass BUILT-IN-CLASS2468	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[47];
	base[1]= VV[55];
	base[2]= VV[146];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass STRUCTURE-CLASS2470	*/

static void L53()
{register object *base=vs_base;
	register object *sup=base+VM50; VC50
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[52];
	base[1]= VV[55];
	base[2]= VV[147];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[148];
	base[8]= VV[64];
	base[9]= VV[149];
	base[10]= VV[66];
	base[11]= VV[150];
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[151];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V225= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[152];
	base[8]= VV[64];
	base[9]= VV[153];
	base[10]= VV[66];
	base[11]= VV[154];
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[155];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V226= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[156];
	base[8]= VV[64];
	base[9]= Cnil;
	base[10]= VV[66];
	base[11]= Cnil;
	base[12]= VV[67];
	base[13]= VV[157];
	base[14]= VV[158];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V227= vs_base[0];
	base[3]= list(3,V225,V226,V227);
	base[4]= Cnil;
	base[5]= VV[159];
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass SPECIALIZER-WITH-OBJECT2470	*/

static void L54()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[160];
	base[1]= VV[55];
	base[2]= VV[161];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass EXACT-CLASS-SPECIALIZER2470	*/

static void L55()
{register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[162];
	base[1]= VV[55];
	base[2]= VV[163];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass CLASS-EQ-SPECIALIZER2470	*/

static void L56()
{register object *base=vs_base;
	register object *sup=base+VM53; VC53
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[92];
	base[1]= VV[55];
	base[2]= VV[164];
	V228= listA(9,VV[62],VV[165],VV[64],VV[166],VV[66],Cnil,VV[67],VV[167],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V228,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass CLASS-PROTOTYPE-SPECIALIZER2470	*/

static void L57()
{register object *base=vs_base;
	register object *sup=base+VM54; VC54
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[17];
	base[1]= VV[55];
	base[2]= VV[168];
	V229= listA(9,VV[62],VV[165],VV[64],VV[169],VV[66],Cnil,VV[67],VV[170],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V229,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass EQL-SPECIALIZER2470	*/

static void L58()
{register object *base=vs_base;
	register object *sup=base+VM55; VC55
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[171];
	base[1]= VV[55];
	base[2]= VV[172];
	V230= listA(9,VV[62],VV[165],VV[64],VV[173],VV[66],Cnil,VV[67],VV[174],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V230,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	local entry for function INTERN-EQL-SPECIALIZER	*/

static object LI59(V232)

object V232;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;{object V233;
	base[0]= (V232);
	base[1]= (VV[175]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V233= vs_base[0];
	if(V233==Cnil)goto T750;
	{object V234 = V233;
	VMR56(V234)}
	goto T750;
T750:;}
	{object V236;
	object V237;
	V236= (VV[175]->s.s_dbind);
	base[1]= VV[171];
	base[2]= VV[18];
	base[3]= (V232);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk367)(Lclptr367);
	vs_top=sup;
	V237= vs_base[0];
	base[1]= V232;
	base[2]= (V236);
	base[3]= (V237);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;
	{object V238 = vs_base[0];
	VMR56(V238)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass SLOT-DEFINITION2483	*/

static void L60()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V239;
	V239= VV[395];
	base[0]= VV[177];
	base[1]= VV[55];
	base[2]= VV[178];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[87];
	base[8]= VV[64];
	base[9]= VV[179];
	base[10]= VV[66];
	base[11]= VV[180];
	base[12]= VV[67];
	base[13]= VV[181];
	base[14]= VV[182];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V240= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[183];
	base[8]= VV[64];
	base[9]= VV[184];
	base[10]= VV[66];
	base[11]= VV[185];
	base[12]= VV[67];
	base[13]= VV[186];
	base[14]= VV[187];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V241= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[188];
	base[8]= VV[64];
	base[9]= VV[189];
	base[10]= VV[66];
	base[11]= VV[190];
	base[12]= VV[67];
	base[13]= VV[191];
	base[14]= VV[192];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V242= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[193];
	base[8]= VV[64];
	base[9]= VV[194];
	base[10]= VV[66];
	base[11]= VV[195];
	base[12]= VV[67];
	base[13]= VV[196];
	base[14]= VV[197];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V243= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[198];
	base[8]= VV[64];
	base[9]= VV[199];
	base[10]= VV[66];
	base[11]= VV[200];
	base[12]= VV[67];
	base[13]= VV[201];
	base[14]= VV[202];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V244= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[203];
	base[8]= VV[64];
	base[9]= VV[204];
	base[10]= VV[66];
	base[11]= VV[205];
	base[12]= VV[67];
	base[13]= VV[206];
	base[14]= VV[207];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V245= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[396]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[63];
	base[8]= VV[64];
	base[9]= VV[208];
	base[10]= VV[66];
	base[11]= VV[209];
	base[12]= VV[67];
	base[13]= VV[210];
	base[14]= VV[211];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V246= vs_base[0];
	base[4]= VV[61];
	base[5]= (V239);
	base[6]= VV[62];
	base[7]= VV[212];
	base[8]= VV[64];
	base[9]= Cnil;
	base[10]= VV[66];
	base[11]= Cnil;
	base[12]= VV[67];
	base[13]= VV[213];
	base[14]= VV[214];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V247= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[41];
	base[8]= VV[64];
	base[9]= VV[215];
	base[10]= VV[66];
	base[11]= VV[216];
	base[12]= VV[67];
	base[13]= VV[217];
	base[14]= VV[218];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V248= vs_base[0];
	base[3]= list(9,V240,V241,V242,V243,V244,V245,V246,V247,V248);
	base[4]= Cnil;
	base[5]= VV[219];
	symlispcall(VV[391],base+0,6);
	return;}
}
/*	function definition for Defclass STANDARD-SLOT-DEFINITION2485	*/

static void L61()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V249;
	V249= VV[397];
	base[0]= VV[221];
	base[1]= VV[55];
	base[2]= VV[222];
	base[4]= VV[61];
	base[5]= (V249);
	base[6]= VV[62];
	base[7]= VV[223];
	base[8]= VV[64];
	base[9]= VV[224];
	base[10]= VV[66];
	base[11]= VV[225];
	base[12]= VV[67];
	base[13]= VV[226];
	base[14]= VV[227];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V250= vs_base[0];
	base[3]= make_cons(V250,Cnil);
	base[4]= Cnil;
	base[5]= VV[228];
	symlispcall(VV[391],base+0,6);
	return;}
}
/*	function definition for Defclass STRUCTURE-SLOT-DEFINITION2488	*/

static void L62()
{register object *base=vs_base;
	register object *sup=base+VM59; VC59
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[229];
	base[1]= VV[55];
	base[2]= VV[230];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[231];
	base[8]= VV[64];
	base[9]= VV[232];
	base[10]= VV[66];
	base[11]= VV[233];
	base[12]= VV[67];
	base[13]= VV[234];
	base[14]= VV[235];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V251= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[236];
	base[8]= VV[64];
	base[9]= VV[237];
	base[10]= VV[66];
	base[11]= VV[238];
	base[12]= VV[67];
	base[13]= VV[239];
	base[14]= VV[240];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V252= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[241];
	base[8]= VV[64];
	base[9]= VV[242];
	base[10]= VV[66];
	base[11]= VV[243];
	base[12]= VV[67];
	base[13]= VV[244];
	base[14]= VV[245];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V253= vs_base[0];
	base[3]= list(3,V251,V252,V253);
	base[4]= Cnil;
	base[5]= VV[246];
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass DIRECT-SLOT-DEFINITION2488	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM60; VC60
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[247];
	base[1]= VV[55];
	base[2]= VV[248];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass EFFECTIVE-SLOT-DEFINITION2491	*/

static void L64()
{register object *base=vs_base;
	register object *sup=base+VM61; VC61
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[249];
	base[1]= VV[55];
	base[2]= VV[250];
	V254= listA(9,VV[62],VV[251],VV[64],VV[252],VV[66],VV[253],VV[67],Cnil,Cnil);
	V255= listA(9,VV[62],VV[254],VV[64],VV[255],VV[66],VV[256],VV[67],Cnil,Cnil);
	V256= listA(9,VV[62],VV[257],VV[64],VV[258],VV[66],VV[259],VV[67],Cnil,Cnil);
	base[4]= VV[61];
	base[5]= (VV[398]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[260];
	base[8]= VV[64];
	base[9]= Cnil;
	base[10]= VV[66];
	base[11]= Cnil;
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[261];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V257= vs_base[0];
	base[3]= list(4,/* INLINE-ARGS */V254,/* INLINE-ARGS */V255,/* INLINE-ARGS */V256,V257);
	base[4]= Cnil;
	base[5]= VV[262];
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-DIRECT-SLOT-DEFINITION2491	*/

static void L65()
{register object *base=vs_base;
	register object *sup=base+VM62; VC62
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[263];
	base[1]= VV[55];
	base[2]= VV[264];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-EFFECTIVE-SLOT-DEFINITION2492	*/

static void L66()
{register object *base=vs_base;
	register object *sup=base+VM63; VC63
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[265];
	base[1]= VV[55];
	base[2]= VV[266];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[267];
	base[8]= VV[64];
	base[9]= VV[268];
	base[10]= VV[66];
	base[11]= VV[269];
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[270];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V258= vs_base[0];
	base[3]= make_cons(V258,Cnil);
	base[4]= Cnil;
	base[5]= VV[271];
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass STRUCTURE-DIRECT-SLOT-DEFINITION2492	*/

static void L67()
{register object *base=vs_base;
	register object *sup=base+VM64; VC64
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[272];
	base[1]= VV[55];
	base[2]= VV[273];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass STRUCTURE-EFFECTIVE-SLOT-DEFINITION2492	*/

static void L68()
{register object *base=vs_base;
	register object *sup=base+VM65; VC65
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[274];
	base[1]= VV[55];
	base[2]= VV[275];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass METHOD2492	*/

static void L69()
{register object *base=vs_base;
	register object *sup=base+VM66; VC66
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[276];
	base[1]= VV[55];
	base[2]= VV[277];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-METHOD2493	*/

static void L70()
{register object *base=vs_base;
	register object *sup=base+VM67; VC67
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[278];
	base[1]= VV[55];
	base[2]= VV[279];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[280];
	base[8]= VV[64];
	base[9]= VV[281];
	base[10]= VV[66];
	base[11]= VV[282];
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[283];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V259= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[284];
	base[8]= VV[64];
	base[9]= VV[285];
	base[10]= VV[66];
	base[11]= Cnil;
	base[12]= VV[67];
	base[13]= VV[286];
	base[14]= VV[287];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V260= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[288];
	base[8]= VV[64];
	base[9]= VV[289];
	base[10]= VV[66];
	base[11]= Cnil;
	base[12]= VV[67];
	base[13]= VV[290];
	base[14]= VV[291];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V261= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[292];
	base[8]= VV[64];
	base[9]= Cnil;
	base[10]= VV[66];
	base[11]= Cnil;
	base[12]= VV[67];
	base[13]= VV[293];
	base[14]= VV[294];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V262= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[295];
	base[8]= VV[64];
	base[9]= VV[296];
	base[10]= VV[66];
	base[11]= Cnil;
	base[12]= VV[67];
	base[13]= VV[297];
	base[14]= VV[298];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V263= vs_base[0];
	base[3]= list(5,V259,V260,V261,V262,V263);
	base[4]= Cnil;
	base[5]= VV[299];
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-ACCESSOR-METHOD2493	*/

static void L71()
{register object *base=vs_base;
	register object *sup=base+VM68; VC68
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[300];
	base[1]= VV[55];
	base[2]= VV[301];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[302];
	base[8]= VV[64];
	base[9]= VV[303];
	base[10]= VV[66];
	base[11]= Cnil;
	base[12]= VV[67];
	base[13]= VV[304];
	base[14]= VV[305];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V264= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[177];
	base[8]= VV[64];
	base[9]= VV[306];
	base[10]= VV[66];
	base[11]= Cnil;
	base[12]= VV[67];
	base[13]= VV[307];
	base[14]= VV[308];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V265= vs_base[0];
	base[3]= list(2,V264,V265);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-READER-METHOD2493	*/

static void L72()
{register object *base=vs_base;
	register object *sup=base+VM69; VC69
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[309];
	base[1]= VV[55];
	base[2]= VV[310];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-WRITER-METHOD2493	*/

static void L73()
{register object *base=vs_base;
	register object *sup=base+VM70; VC70
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[311];
	base[1]= VV[55];
	base[2]= VV[312];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-BOUNDP-METHOD2493	*/

static void L74()
{register object *base=vs_base;
	register object *sup=base+VM71; VC71
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[313];
	base[1]= VV[55];
	base[2]= VV[314];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass GENERIC-FUNCTION2493	*/

static void L75()
{register object *base=vs_base;
	register object *sup=base+VM72; VC72
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[280];
	base[1]= VV[142];
	base[2]= VV[315];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-GENERIC-FUNCTION2501	*/

static void L76()
{register object *base=vs_base;
	register object *sup=base+VM73; VC73
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V266;
	object V267;
	object V268;
	V266= VV[399];
	V267= VV[400];
	V268= VV[401];
	base[0]= VV[318];
	base[1]= VV[142];
	base[2]= VV[319];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[87];
	base[8]= VV[64];
	base[9]= VV[320];
	base[10]= VV[66];
	base[11]= VV[321];
	base[12]= VV[67];
	base[13]= VV[322];
	base[14]= VV[323];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V269= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[324];
	base[8]= VV[64];
	base[9]= VV[325];
	base[10]= VV[66];
	base[11]= VV[326];
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[327];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V270= vs_base[0];
	V271= listA(9,VV[62],VV[328],VV[64],VV[329],VV[66],VV[330],VV[67],VV[331],Cnil);
	V272= listA(9,VV[62],VV[332],VV[64],VV[333],VV[66],VV[334],VV[67],VV[335],Cnil);
	base[4]= VV[61];
	base[5]= (V268);
	base[6]= VV[62];
	base[7]= VV[336];
	base[8]= VV[64];
	base[9]= VV[337];
	base[10]= VV[66];
	base[11]= Cnil;
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[338];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V273= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[339];
	base[8]= VV[64];
	base[9]= VV[340];
	base[10]= VV[66];
	base[11]= VV[341];
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[342];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V274= vs_base[0];
	base[4]= VV[61];
	base[5]= (VV[392]->s.s_gfdef);
	base[6]= VV[62];
	base[7]= VV[343];
	base[8]= VV[64];
	base[9]= VV[344];
	base[10]= VV[66];
	base[11]= VV[345];
	base[12]= VV[67];
	base[13]= Cnil;
	base[14]= VV[346];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V275= vs_base[0];
	base[3]= list(7,V269,V270,/* INLINE-ARGS */V271,/* INLINE-ARGS */V272,V273,V274,V275);
	V276= list(3,VV[348],(V267),VV[317]);
	base[4]= list(2,VV[347],list(2,/* INLINE-ARGS */V276,list(3,VV[349],(V266),VV[316])));
	base[5]= VV[350];
	symlispcall(VV[391],base+0,6);
	return;}
}
/*	function definition for Defclass METHOD-COMBINATION2501	*/

static void L77()
{register object *base=vs_base;
	register object *sup=base+VM74; VC74
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[332];
	base[1]= VV[55];
	base[2]= VV[351];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-METHOD-COMBINATION2501	*/

static void L78()
{register object *base=vs_base;
	register object *sup=base+VM75; VC75
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[352];
	base[1]= VV[55];
	base[2]= VV[353];
	V277= listA(9,VV[62],VV[63],VV[64],VV[354],VV[66],Cnil,VV[67],VV[355],Cnil);
	V278= listA(9,VV[62],VV[212],VV[64],VV[356],VV[66],Cnil,VV[67],VV[357],Cnil);
	base[3]= list(3,/* INLINE-ARGS */V277,/* INLINE-ARGS */V278,listA(9,VV[62],VV[358],VV[64],VV[359],VV[66],Cnil,VV[67],VV[360],Cnil));
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[391],base+0,6);
	return;
}
/*	local function CLOSURE	*/

static void LC89(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM76; VC76
	vs_check;
	check_arg(0);
	vs_top=sup;
	base[0]= (*(LnkLI402))();
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC88(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM77; VC77
	vs_check;
	check_arg(0);
	vs_top=sup;
	base[0]= (VV[317]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC87(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM78; VC78
	vs_check;
	check_arg(0);
	vs_top=sup;
	base[0]= (VV[316]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC86(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM79; VC79
	vs_check;
	check_arg(0);
	vs_top=sup;
	base[0]= VV[220];
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC85(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM80; VC80
	vs_check;
	check_arg(0);
	vs_top=sup;
	base[0]= VV[176];
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC84(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM81; VC81
	vs_check;
	check_arg(0);
	vs_top=sup;
	base[0]= make_cons(Cnil,Cnil);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC83(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_check;
	check_arg(0);
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk403)();
	return;
}
/*	local function CLOSURE	*/

static void LC82(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM83; VC83
	vs_check;
	{object V279;
	check_arg(1);
	V279=(base[0]);
	vs_top=sup;
	base[1]= (eql((base0[0]->c.c_car),(V279))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC81(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM84; VC84
	vs_check;
	{object V280;
	check_arg(1);
	V280=(base[0]);
	vs_top=sup;
	V281 = (base0[0]->c.c_car);
	V282= (*(LnkLI374))((V280));
	base[1]= ((V281)==(/* INLINE-ARGS */V282)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC80(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM85; VC85
	vs_check;
	{object V283;
	check_arg(1);
	V283=(base[0]);
	vs_top=sup;
	V285 = (base0[0]->c.c_car);
	base[1]= (*(LnkLI374))((V283));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk109)(Lclptr109);
	vs_top=sup;
	V286= vs_base[0];
	{register object x= V285,V284= V286;
	while(V284!=Cnil)
	if(x==(V284->c.c_car)){
	base[1]= V284;
	vs_top=(vs_base=base+1)+1;
	return;
	}else V284=V284->c.c_cdr;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC79(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM86; VC86
	vs_check;
	{object V287;
	check_arg(1);
	V287=(base[0]);
	vs_top=sup;
	base[1]= CMPcadr((base0[0]->c.c_car));
	base[2]= (V287);
	vs_top=(vs_base=base+2)+1;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
static void LnkT109(ptr) object *ptr;{ call_or_link_closure(VV[109],(void **)(void *)&Lnk109,(void **)(void *)&Lclptr109);} /* CLASS-PRECEDENCE-LIST */
static void LnkT403(){ call_or_link(VV[403],(void **)(void *)&Lnk403);} /* LOAD-TRUENAME */
static object  LnkTLI402(){return call_proc0(VV[402],(void **)(void *)&LnkLI402);} /* MAKE-ARG-INFO */
static void LnkT390(ptr) object *ptr;{ call_or_link_closure(VV[390],(void **)(void *)&Lnk390,(void **)(void *)&Lclptr390);} /* SETF PCL OBJECT-PLIST */
static void LnkT389(ptr) object *ptr;{ call_or_link_closure(VV[389],(void **)(void *)&Lnk389,(void **)(void *)&Lclptr389);} /* OBJECT-PLIST */
static object  LnkTLI388(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[388],(void **)(void *)&LnkLI388,3,first,ap);va_end(ap);return V1;} /* VARIABLE-DECLARATION */
static void LnkT387(){ call_or_link(VV[387],(void **)(void *)&Lnk387);} /* SUBTYPEP */
static void LnkT386(){ call_or_link(VV[386],(void **)(void *)&Lnk386);} /* SPECIALIZER-APPLICABLE-USING-TYPE-P */
static void LnkT384(ptr) object *ptr;{ call_or_link_closure(VV[384],(void **)(void *)&Lnk384,(void **)(void *)&Lclptr384);} /* CLASS-NAME */
static void LnkT383(){ call_or_link(VV[383],(void **)(void *)&Lnk383);} /* CONVERT-TO-SYSTEM-TYPE */
static void LnkT380(){ call_or_link(VV[380],(void **)(void *)&Lnk380);} /* *NORMALIZE-TYPE */
static object  LnkTLI379(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[379],(void **)(void *)&LnkLI379,first,ap);va_end(ap);return V1;} /* FIND-CLASS-CELL */
static object  LnkTLI378(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[378],(void **)(void *)&LnkLI378,2,first,ap);va_end(ap);return V1;} /* DO-SATISFIES-DEFTYPE */
static object  LnkTLI377(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[377],(void **)(void *)&LnkLI377,1,first,ap);va_end(ap);return V1;} /* MAKE-TYPE-PREDICATE */
static object  LnkTLI376(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[376],(void **)(void *)&LnkLI376,2,first,ap);va_end(ap);return V1;} /* SETF PCL GDEFINITION */
static object  LnkTLI375(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[375],(void **)(void *)&LnkLI375,first,ap);va_end(ap);return V1;} /* MAKE-TYPE-PREDICATE-NAME */
static object  LnkTLI374(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[374],(void **)(void *)&LnkLI374,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static void LnkT373(){ call_or_link(VV[373],(void **)(void *)&Lnk373);} /* TYPE-FROM-SPECIALIZER */
static void LnkT372(ptr) object *ptr;{ call_or_link_closure(VV[372],(void **)(void *)&Lnk372,(void **)(void *)&Lclptr372);} /* SPECIALIZER-TYPE */
static void LnkT371(ptr) object *ptr;{ call_or_link_closure(VV[371],(void **)(void *)&Lnk371,(void **)(void *)&Lclptr371);} /* SPECIALIZERP */
static object  LnkTLI370(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[370],(void **)(void *)&LnkLI370,1,first,ap);va_end(ap);return V1;} /* INTERN-EQL-SPECIALIZER */
static void LnkT92(ptr) object *ptr;{ call_or_link_closure(VV[92],(void **)(void *)&Lnk92,(void **)(void *)&Lclptr92);} /* CLASS-EQ-SPECIALIZER */
static void LnkT367(ptr) object *ptr;{ call_or_link_closure(VV[367],(void **)(void *)&Lnk367,(void **)(void *)&Lclptr367);} /* MAKE-INSTANCE */
static void LnkT366(){ call_or_link(VV[366],(void **)(void *)&Lnk366);} /* COERCE-TO-CLASS */
static void LnkT365(){ call_or_link(VV[365],(void **)(void *)&Lnk365);} /* ENSURE-CLASS */
static object  LnkTLI364(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[364],(void **)(void *)&LnkLI364,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static object  LnkTLI363(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[363],(void **)(void *)&LnkLI363,2,first,ap);va_end(ap);return V1;} /* FDEFINE-CAREFULLY */
static object  LnkTLI362(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[362],(void **)(void *)&LnkLI362,1,first,ap);va_end(ap);return V1;} /* UNENCAPSULATED-FDEFINITION */
static object  LnkTLI361(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[361],(void **)(void *)&LnkLI361,1,first,ap);va_end(ap);return V1;} /* GET-SETF-FUNCTION-NAME */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

