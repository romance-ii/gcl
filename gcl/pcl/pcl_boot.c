
#include "cmpinclude.h"
#include "pcl_boot.h"
void init_pcl_boot(){do_init(VV);}
/*	local entry for function REDIRECT-EARLY-FUNCTION-INTERNAL	*/

static object LI2(V3,V4)

object V3;object V4;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]=MMcons((V4),Cnil);
	base[1]= 
	make_cclosure_new(LC128,Cnil,base[0],Cdata);
	base[2]= (V3);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk346)();
	vs_top=sup;
	V6= vs_base[0];
	{object V7 = (*(LnkLI345))(V6,V3);
	VMR1(V7)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for DEFGENERIC	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V8=base[0]->c.c_cdr;
	if(endp(V8))invalid_macro_call();
	base[2]= (V8->c.c_car);
	V8=V8->c.c_cdr;
	if(endp(V8))invalid_macro_call();
	base[3]= (V8->c.c_car);
	V8=V8->c.c_cdr;
	base[4]= V8;}
	base[5]= (*(LnkLI347))(base[2],base[3],base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function EXPAND-DEFGENERIC	*/

static object LI4(V12,V13,V14)

object V12;object V13;object V14;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	if(!(type_of((V12))==t_cons||((V12))==Cnil)){
	goto T4;}
	(void)((*(LnkLI348))(CMPcadr((V12))));
	goto T4;
T4:;
	{register object V15;
	V15= Cnil;
	{register object V16;
	register object V17;
	V16= (V14);
	V17= CMPcar((V16));
	goto T12;
T12:;
	if(!(((V16))==Cnil)){
	goto T13;}
	goto T8;
	goto T13;
T13:;
	{object V18= CMPcar((V17));
	if((V18!= VV[0]))goto T18;
	base[1]= (V15);
	base[2]= VV[0];
	vs_top=(vs_base=base+1)+2;
	Lgetf();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T20;}
	base[1]= VV[0];
	vs_top=(vs_base=base+1)+1;
	L5(base);
	vs_top=sup;
	goto T17;
	goto T20;
T20:;
	{register object V20;
	V20= list(2,VV[1],CMPcdr((V17)));
	{object V21;
	base[2]= (V15);
	base[3]= (V20);
	base[4]= VV[0];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V21= vs_base[0];
	V15= (V21);
	goto T17;}}
	goto T18;
T18:;
	if((V18!= VV[46]))goto T32;
	{register object V23;
	V24= CMPcdr((V17));
	base[2]= (V15);
	base[3]= VV[2];
	vs_top=(vs_base=base+2)+2;
	Lgetf();
	vs_top=sup;
	V25= vs_base[0];
	V23= append(/* INLINE-ARGS */V24,V25);
	{object V26;
	base[2]= (V15);
	base[3]= (V23);
	base[4]= VV[2];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V26= vs_base[0];
	V15= (V26);
	goto T17;}}
	goto T32;
T32:;
	if((V18!= VV[3]))goto T43;
	base[1]= (V15);
	base[2]= VV[3];
	vs_top=(vs_base=base+1)+2;
	Lgetf();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T45;}
	base[1]= VV[3];
	vs_top=(vs_base=base+1)+1;
	L5(base);
	vs_top=sup;
	goto T17;
	goto T45;
T45:;
	{register object V28;
	V28= list(2,VV[1],CMPcadr((V17)));
	{object V29;
	base[2]= (V15);
	base[3]= (V28);
	base[4]= VV[3];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V29= vs_base[0];
	V15= (V29);
	goto T17;}}
	goto T43;
T43:;
	if((V18!= VV[4]))goto T57;
	base[1]= (V15);
	base[2]= VV[4];
	vs_top=(vs_base=base+1)+2;
	Lgetf();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T59;}
	base[1]= VV[4];
	vs_top=(vs_base=base+1)+1;
	L5(base);
	vs_top=sup;
	goto T17;
	goto T59;
T59:;
	{register object V31;
	V31= list(2,VV[1],CMPcdr((V17)));
	{object V32;
	base[2]= (V15);
	base[3]= (V31);
	base[4]= VV[4];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V32= vs_base[0];
	V15= (V32);
	goto T17;}}
	goto T57;
T57:;
	if((V18!= VV[5]))goto T71;
	base[1]= (V15);
	base[2]= VV[5];
	vs_top=(vs_base=base+1)+2;
	Lgetf();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T73;}
	base[1]= VV[5];
	vs_top=(vs_base=base+1)+1;
	L5(base);
	vs_top=sup;
	goto T17;
	goto T73;
T73:;
	{register object V34;
	V34= list(2,VV[1],CMPcadr((V17)));
	{object V35;
	base[2]= (V15);
	base[3]= (V34);
	base[4]= VV[5];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V35= vs_base[0];
	V15= (V35);
	goto T17;}}
	goto T71;
T71:;
	if((V18!= VV[6]))goto T85;
	base[1]= (V15);
	base[2]= VV[6];
	vs_top=(vs_base=base+1)+2;
	Lgetf();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T87;}
	base[1]= VV[6];
	vs_top=(vs_base=base+1)+1;
	L5(base);
	vs_top=sup;
	goto T17;
	goto T87;
T87:;
	{register object V37;
	V37= list(2,VV[1],CMPcadr((V17)));
	{object V38;
	base[2]= (V15);
	base[3]= (V37);
	base[4]= VV[6];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V38= vs_base[0];
	V15= (V38);
	goto T17;}}
	goto T85;
T85:;
	if((V18!= VV[210]))goto T99;
	{object V39;
	V39= listA(3,VV[7],(V12),CMPcdr((V17)));
	(VV[8]->s.s_dbind)= make_cons((V39),(VV[8]->s.s_dbind));
	goto T17;}
	goto T99;
T99:;
	FEerror("The ECASE key value ~s is illegal.",1,V18);
	goto T17;}
	goto T17;
T17:;
	V16= CMPcdr((V16));
	V17= CMPcar((V16));
	goto T12;}
	goto T8;
T8:;
	{object V40;
	base[0]= (V15);
	base[1]= VV[2];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V40= vs_base[0];
	if(((V40))==Cnil){
	goto T7;}
	{object V42;
	V42= list(2,VV[1],(V40));
	{object V43;
	base[1]= (V15);
	base[2]= (V42);
	base[3]= VV[2];
	vs_top=(vs_base=base+1)+3;
	siLput_f();
	vs_top=sup;
	V43= vs_base[0];
	V15= (V43);}}}
	goto T7;
T7:;
	V44= list(2,VV[1],(V12));
	V45= list(3,VV[11],/* INLINE-ARGS */V44,list(2,VV[1],(V13)));
	V46= list(2,VV[12],(V12));{object V47;
	V47= (VV[13]->s.s_dbind);
	V48= list(2,VV[1],(V12));
	V49= listA(4,VV[14],/* INLINE-ARGS */V48,list(2,VV[1],(V13)),(V15));
	{object V50 = list(3,VV[10],/* INLINE-ARGS */V45,(*(LnkLI349))(/* INLINE-ARGS */V46,V47,/* INLINE-ARGS */V49));
	VMR3(V50)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOAD-DEFGENERIC	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{register object V51;
	object V52;
	object V53;
	if(vs_top-vs_base<2) too_few_arguments();
	V51=(base[0]);
	V52=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V53=(base[2]);
	vs_top=sup;
	if(!(type_of((V51))==t_cons||((V51))==Cnil)){
	goto T119;}
	(void)((*(LnkLI348))(CMPcadr((V51))));
	goto T119;
T119:;
	base[3]= (V51);
	base[4]= VV[15];
	base[5]= (V52);
	base[6]= VV[16];
	V55= list(2,VV[12],(V51));
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V56= vs_base[0];
	base[7]= list(2,/* INLINE-ARGS */V55,V56);
	{object V54;
	V54= (V53);
	 vs_top=base+8;
	 while(V54!=Cnil)
	 {vs_push((V54)->c.c_car);V54=(V54)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk351)();
	return;
	}
}
/*	macro definition for DEFMETHOD	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V57=base[0]->c.c_cdr;
	base[2]= V57;}
	{object V58;
	object V59;
	object V60;
	object V61;
	base[3]= base[2];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk352)();
	if(vs_base>=vs_top){vs_top=sup;goto T131;}
	V58= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T132;}
	V59= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T133;}
	V60= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T134;}
	V61= vs_base[0];
	vs_top=sup;
	goto T135;
	goto T131;
T131:;
	V58= Cnil;
	goto T132;
T132:;
	V59= Cnil;
	goto T133;
T133:;
	V60= Cnil;
	goto T134;
T134:;
	V61= Cnil;
	goto T135;
T135:;
	{object V62;
	object V63;
	base[3]= (V58);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk353)();
	if(vs_base>=vs_top){vs_top=sup;goto T138;}
	V62= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T139;}
	V63= vs_base[0];
	vs_top=sup;
	goto T140;
	goto T138;
T138:;
	V62= Cnil;
	goto T139;
T139:;
	V63= Cnil;
	goto T140;
T140:;
	base[3]= (*(LnkLI354))((V58),(V62),(V63),(V59),(V60),(V61),base[1]);
	vs_top=(vs_base=base+3)+1;
	return;}}
}
/*	function definition for PROTOTYPES-FOR-MAKE-METHOD-LAMBDA	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V64;
	check_arg(1);
	V64=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[17]->s.s_dbind))==(VV[18])){
	goto T142;}
	base[1]= Cnil;
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
	goto T142;
T142:;
	{register object V65;
	if(((*(LnkLI355))((V64)))!=Cnil){
	goto T147;}
	V65= Cnil;
	goto T146;
	goto T147;
T147:;
	V65= (*(LnkLI356))((V64));
	goto T146;
T146:;
	if(((V65))==Cnil){
	goto T149;}
	base[1]= (V65);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk357)(Lclptr357);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T150;}
	goto T149;
T149:;
	base[2]= (VFUN_NARGS=1,(*(LnkLI290))(VV[19]));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	base[1]= vs_base[0];
	base[3]= (VFUN_NARGS=1,(*(LnkLI290))(VV[20]));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	return;
	goto T150;
T150:;
	base[1]= (V65);{object V66;
	base[4]= (V65);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk358)(Lclptr358);
	vs_top=sup;
	V66= vs_base[0];
	if(V66==Cnil)goto T162;
	base[3]= V66;
	goto T161;
	goto T162;
T162:;}
	base[3]= (VFUN_NARGS=1,(*(LnkLI290))(VV[20]));
	goto T161;
T161:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	function definition for METHOD-PROTOTYPE-FOR-GF	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	{object V67;
	check_arg(1);
	V67=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V68;
	if(((*(LnkLI355))((V67)))!=Cnil){
	goto T166;}
	V68= Cnil;
	goto T165;
	goto T166;
T166:;
	V68= (*(LnkLI356))((V67));
	goto T165;
T165:;
	if(!(((((VV[17]->s.s_dbind))==(VV[18])?Ct:Cnil))==Cnil)){
	goto T169;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T169;
T169:;
	if(((V68))==Cnil){
	goto T171;}
	base[1]= (V68);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk357)(Lclptr357);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T172;}
	goto T171;
T171:;
	base[1]= (VFUN_NARGS=1,(*(LnkLI290))(VV[20]));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk301)(Lclptr301);
	return;
	goto T172;
T172:;{object V69;
	base[2]= (V68);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk358)(Lclptr358);
	vs_top=sup;
	V69= vs_base[0];
	if(V69==Cnil)goto T179;
	base[1]= V69;
	goto T178;
	goto T179;
T179:;}
	base[1]= (VFUN_NARGS=1,(*(LnkLI290))(VV[20]));
	goto T178;
T178:;
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk301)(Lclptr301);
	return;}
	}
}
/*	local entry for function EXPAND-DEFMETHOD	*/

static object LI10(V77,V78,V79,V80,V81,V82,V83)

register object V77;object V78;register object V79;object V80;object V81;object V82;object V83;
{	 VMB8 VMS8 VMV8
	bds_check;
	goto TTL;
TTL:;
	if(!(type_of((V77))==t_cons||((V77))==Cnil)){
	goto T182;}
	(void)((*(LnkLI348))(CMPcadr((V77))));
	goto T182;
T182:;
	bds_bind(VV[21],Cnil);
	bds_bind(VV[22],Ct);
	bds_bind(VV[23],Cnil);
	bds_bind(VV[24],Cnil);
	bds_bind(VV[25],Cnil);
	{object V84;
	object V85;
	object V86;
	base[5]= (V77);
	base[6]= (V80);
	base[7]= (V81);
	base[8]= (V82);
	base[9]= (V83);
	vs_top=(vs_base=base+5)+5;
	(void) (*Lnk359)();
	if(vs_base>=vs_top){vs_top=sup;goto T191;}
	V84= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T192;}
	V85= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T193;}
	V86= vs_base[0];
	vs_top=sup;
	goto T194;
	goto T191;
T191:;
	V84= Cnil;
	goto T192;
T192:;
	V85= Cnil;
	goto T193;
T193:;
	V86= Cnil;
	goto T194;
T194:;
	{object V87;
	object V88;
	base[5]= (V78);
	base[6]= (V79);
	base[7]= (V84);
	base[8]= (V83);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk360)(Lclptr360);
	if(vs_base>=vs_top){vs_top=sup;goto T200;}
	V87= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T201;}
	V88= vs_base[0];
	vs_top=sup;
	goto T202;
	goto T200;
T200:;
	V87= Cnil;
	goto T201;
T201:;
	V88= Cnil;
	goto T202;
T202:;
	{object V89;
	base[5]= (V78);
	base[6]= (V79);
	base[7]= (V87);
	base[8]= (V88);
	base[9]= (V83);
	vs_top=(vs_base=base+5)+5;
	(void) (*Lnk361)(Lclptr361);
	vs_top=sup;
	V89= vs_base[0];
	V90= list(2,VV[1],(V77));
	V91= list(3,VV[11],/* INLINE-ARGS */V90,list(2,VV[1],(V81)));
	if(((VV[21]->s.s_dbind))==Cnil){
	goto T212;}
	V93= list(2,VV[26],list(2,VV[1],(VV[21]->s.s_dbind)));
	base[5]= make_cons(/* INLINE-ARGS */V93,Cnil);
	goto T210;
	goto T212;
T212:;
	base[5]= Cnil;
	goto T210;
T210:;
	if(((VV[23]->s.s_dbind))!=Cnil){
	goto T215;}
	if(((VV[24]->s.s_dbind))!=Cnil){
	goto T215;}
	if(((VV[25]->s.s_dbind))==Cnil){
	goto T216;}
	goto T215;
T215:;
	V94= list(2,VV[1],(VV[23]->s.s_dbind));
	V95= list(2,VV[1],(VV[24]->s.s_dbind));
	V96= list(4,VV[27],/* INLINE-ARGS */V94,/* INLINE-ARGS */V95,list(2,VV[1],(VV[25]->s.s_dbind)));
	base[6]= make_cons(/* INLINE-ARGS */V96,Cnil);
	goto T214;
	goto T216;
T216:;
	base[6]= Cnil;
	goto T214;
T214:;
	if(((V79))==Cnil){
	goto T225;}
	base[8]= (*(LnkLI363))((V79));
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	V97= vs_base[0];
	goto T223;
	goto T225;
T225:;
	V97= VV[20];
	goto T223;
T223:;
	base[9]= (V88);
	base[10]= VV[28];
	vs_top=(vs_base=base+9)+2;
	Lgetf();
	vs_top=sup;
	base[8]= vs_base[0];
	base[9]= VV[29];
	vs_top=(vs_base=base+8)+2;
	Lgetf();
	vs_top=sup;
	V98= vs_base[0];
	V99= (VFUN_NARGS=7,(*(LnkLI362))((V77),(V80),(V86),(V85),V97,(V89),V98));
	base[7]= make_cons(/* INLINE-ARGS */V99,Cnil);
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V92= vs_base[0];
	{object V100 = listA(3,VV[10],/* INLINE-ARGS */V91,V92);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR8(V100)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INTERNED-SYMBOL-P	*/

static object LI11(V102)

object V102;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	if(type_of((V102))==t_symbol){
	goto T233;}
	{object V103 = Cnil;
	VMR9(V103)}
	goto T233;
T233:;
	base[0]= (V102);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	{object V104 = vs_base[0];
	VMR9(V104)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-DEFMETHOD-FORM	*/

static object LI12(object V110,object V109,object V108,object V107,object V106,object V105,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	bds_check;
	{register object V111;
	register object V112;
	register object V113;
	object V114;
	object V115;
	register object V116;
	object V117;
	va_start(ap,first);
	if(narg <6) too_few_arguments();
	V111= V110;
	V112= V109;
	V113= V108;
	V114= V107;
	V115= V106;
	V116= V105;
	narg = narg - 6;
	if (narg <= 0) goto T236;
	else {
	V117= first;}
	--narg; goto T237;
	goto T236;
T236:;
	V117= Cnil;
	goto T237;
T237:;
	{object V118;
	register object V119;
	V118= Cnil;
	V119= Cnil;
	if(!(type_of((V111))==t_cons)){
	goto T245;}
	if((CMPcar((V111)))==(VV[30])){
	goto T247;}
	V120= Cnil;
	goto T243;
	goto T247;
T247:;
	V120= CMPcadr((V111));
	goto T243;
	goto T245;
T245:;
	V120= (V111);
	goto T243;
T243:;
	if(((*(LnkLI365))(V120))==Cnil){
	goto T240;}
	base[0]= (VV[365]->s.s_gfdef);
	base[1]= (V112);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk366)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T240;}
	base[0]= VV[367];
	base[1]= (V113);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk366)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T240;}
	if(!(type_of((V116))==t_cons)){
	goto T240;}
	if(!((CMPcar((V116)))==(VV[32]))){
	goto T240;}
	{register object x= CMPcadr((V116)),V121= VV[33];
	while(V121!=Cnil)
	if(x==(V121->c.c_car)){
	goto T262;
	}else V121=V121->c.c_cdr;
	goto T240;}
	goto T262;
T262:;
	V118= CMPcaddr((V116));
	if(!(type_of((V118))==t_cons)){
	goto T240;}
	if(!((CMPcar((V118)))==(VV[34]))){
	goto T240;}
	V119= CMPcadr((V118));
	if(!(type_of((V119))==t_cons)){
	goto T240;}
	if(!((CMPcar((V119)))==(VV[35]))){
	goto T240;}
	{object V122;
	object V123;
	object V124;
	{object V125;
	object V126= (V113);
	if(V126==Cnil){
	V122= Cnil;
	goto T272;}
	base[3]=V125=MMcons(Cnil,Cnil);
	goto T273;
T273:;
	{register object V127;
	V127= (V126->c.c_car);
	if(!(type_of((V127))==t_cons)){
	goto T276;}
	V128= CMPcar((V127));
	base[4]= CMPcadr((V127));
	vs_top=(vs_base=base+4)+1;
	Leval();
	vs_top=sup;
	V129= vs_base[0];
	(V125->c.c_car)= list(2,/* INLINE-ARGS */V128,V129);
	goto T274;
	goto T276;
T276:;
	(V125->c.c_car)= (V127);}
	goto T274;
T274:;
	if((V126=MMcdr(V126))==Cnil){
	V122= base[3];
	goto T272;}
	V125=MMcdr(V125)=MMcons(Cnil,Cnil);
	goto T273;}
	goto T272;
T272:;
	if(!((CMPcadr((V116)))==(VV[36]))){
	goto T283;}
	V130= VV[37];
	goto T281;
	goto T283;
T283:;
	V130= VV[38];
	goto T281;
T281:;
	V131= make_cons((V122),Cnil);
	V123= listA(3,V130,(V111),append((V112),/* INLINE-ARGS */V131));
	bds_bind(VV[39],Cnil);
	base[5]= Cnil;
	base[6]= VV[40];
	base[7]= (V123);
	vs_top=(vs_base=base+5)+3;
	Lformat();
	vs_top=sup;
	bds_unwind1;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Lintern();
	vs_top=sup;
	V124= vs_base[0];{object V132;
	V132= (VV[42]->s.s_dbind);
	V133= listA(4,VV[43],(V124),CMPcadr((V119)),CMPcddr((V119)));
	V134= list(2,VV[1],(V122));
	V135= CMPcadr((V116));
	V136= listA(4,VV[32],/* INLINE-ARGS */V135,list(2,VV[34],(V124)),CMPcdddr((V116)));
	{object V137 = list(4,VV[41],V132,/* INLINE-ARGS */V133,(VFUN_NARGS=7,(*(LnkLI368))((V111),(V112),/* INLINE-ARGS */V134,(V114),(V115),/* INLINE-ARGS */V136,(V117))));
	VMR10(V137)}}}
	goto T240;
T240:;
	V138= make_cons((V113),Cnil);
	V139= listA(3,VV[7],(V111),append((V112),/* INLINE-ARGS */V138));{object V140;
	V140= (VV[42]->s.s_dbind);
	{object V142;
	object V143= (V113);
	if(V143==Cnil){
	V141= Cnil;
	goto T290;}
	base[0]=V142=MMcons(Cnil,Cnil);
	goto T291;
T291:;
	{register object V144;
	V144= (V143->c.c_car);
	if(!(type_of((V144))==t_cons)){
	goto T294;}
	(V142->c.c_car)= list(3,VV[44],list(2,VV[1],CMPcar((V144))),CMPcadr((V144)));
	goto T292;
	goto T294;
T294:;
	(V142->c.c_car)= list(2,VV[1],(V144));}
	goto T292;
T292:;
	if((V143=MMcdr(V143))==Cnil){
	V141= base[0];
	goto T290;}
	V142=MMcdr(V142)=MMcons(Cnil,Cnil);
	goto T291;}
	goto T290;
T290:;
	V145= make_cons(VV[44],V141);
	V146= (VFUN_NARGS=7,(*(LnkLI368))((V111),(V112),/* INLINE-ARGS */V145,(V114),(V115),(V116),(V117)));
	{object V147 = (*(LnkLI349))(/* INLINE-ARGS */V139,V140,/* INLINE-ARGS */V146);
	VMR10(V147)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAKE-DEFMETHOD-FORM-INTERNAL	*/

static object LI13(object V153,object V152,object V151,object V150,object V149,object V148,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V154;
	object V155;
	object V156;
	object V157;
	object V158;
	object V159;
	object V160;
	va_start(ap,first);
	if(narg <6) too_few_arguments();
	V154= V153;
	V155= V152;
	V156= V151;
	V157= V150;
	V158= V149;
	V159= V148;
	narg = narg - 6;
	if (narg <= 0) goto T296;
	else {
	V160= first;}
	--narg; goto T297;
	goto T296;
T296:;
	V160= Cnil;
	goto T297;
T297:;
	V161= list(2,VV[1],(V158));
	V162= list(2,VV[1],(V154));
	V163= list(2,VV[1],(V155));
	V164= list(2,VV[1],(V157));
	{object V165 = list(8,VV[45],/* INLINE-ARGS */V161,/* INLINE-ARGS */V162,/* INLINE-ARGS */V163,(V156),/* INLINE-ARGS */V164,(V159),list(2,VV[1],(V160)));
	VMR11(V165)}
	va_end(ap);
	return Cnil;}
	}
/*	macro definition for MAKE-METHOD-FUNCTION	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V166=base[0]->c.c_cdr;
	if(endp(V166))invalid_macro_call();
	base[2]= (V166->c.c_car);
	V166=V166->c.c_cdr;
	if(!endp(V166))invalid_macro_call();}
	base[3]= base[2];
	base[4]= base[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk369)();
	return;
}
/*	function definition for MAKE-METHOD-FUNCTION-INTERNAL	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V167;
	object V168;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V167=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T301;}
	V168=(base[1]);
	vs_top=sup;
	goto T302;
	goto T301;
T301:;
	V168= Cnil;
	goto T302;
T302:;
	{object V169;
	object V170;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk353)();
	if(vs_base>=vs_top){vs_top=sup;goto T306;}
	V169= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T307;}
	V170= vs_base[0];
	vs_top=sup;
	goto T308;
	goto T306;
T306:;
	V169= Cnil;
	goto T307;
T307:;
	V170= Cnil;
	goto T308;
T308:;
	{object V171;
	object V172;
	base[2]= (V169);
	base[3]= (V170);
	base[4]= (V167);
	base[5]= (V168);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk360)(Lclptr360);
	if(vs_base>=vs_top){vs_top=sup;goto T314;}
	V171= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T315;}
	V172= vs_base[0];
	vs_top=sup;
	goto T316;
	goto T314;
T314:;
	V171= Cnil;
	goto T315;
T315:;
	V172= Cnil;
	goto T316;
T316:;
	base[2]= (V169);
	base[3]= (V170);
	base[4]= (V171);
	base[5]= (V172);
	base[6]= (V168);
	vs_top=(vs_base=base+2)+5;
	(void) (*Lnk361)(Lclptr361);
	return;}}
	}
}
/*	function definition for ADD-METHOD-DECLARATIONS	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V173;
	object V174;
	object V175;
	object V176;
	object V177;
	check_arg(5);
	V173=(base[0]);
	V174=(base[1]);
	V175=(base[2]);
	V176=(base[3]);
	V177=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V178;
	object V179;
	object V180;
	base[5]= (V175);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T324;}
	V178= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T325;}
	V179= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T326;}
	V180= vs_base[0];
	vs_top=sup;
	goto T327;
	goto T324;
T324:;
	V178= Cnil;
	goto T325;
T325:;
	V179= Cnil;
	goto T326;
T326:;
	V180= Cnil;
	goto T327;
T327:;
	{object V181;
	object V182;
	object V183;
	base[5]= (V176);
	base[6]= (V177);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk371)();
	if(vs_base>=vs_top){vs_top=sup;goto T331;}
	V181= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T332;}
	V182= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T333;}
	V183= vs_base[0];
	vs_top=sup;
	goto T334;
	goto T331;
T331:;
	V181= Cnil;
	goto T332;
T332:;
	V182= Cnil;
	goto T333;
T333:;
	V183= Cnil;
	goto T334;
T334:;
	if(((V181))==Cnil){
	goto T338;}
	V184= make_cons((V181),Cnil);
	goto T336;
	goto T338;
T338:;
	V184= Cnil;
	goto T336;
T336:;
	V185= list(2,VV[46],list(2,VV[47],list(3,(V173),(V174),(V180))));
	V186= list(2,VV[46],make_cons(VV[48],(V175)));
	V187= listA(3,/* INLINE-ARGS */V185,/* INLINE-ARGS */V186,append((V182),(V183)));
	base[5]= listA(3,VV[35],(V179),append(V184,/* INLINE-ARGS */V187));
	base[6]= (V179);
	base[7]= (V180);
	vs_top=(vs_base=base+5)+3;
	return;}}
	}
}
/*	local entry for function REAL-MAKE-METHOD-INITARGS-FORM	*/

static object LI17(V193,V194,V195,V196,V197)

object V193;object V194;register object V195;object V196;object V197;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(!(type_of((V195))==t_cons)){
	goto T343;}
	if((CMPcar((V195)))==(VV[35])){
	goto T342;}
	goto T343;
T343:;
	base[0]= VV[49];
	base[1]= (V195);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T342;
T342:;
	{object V198 = (*(LnkLI372))((V195),(V196),(V197));
	VMR15(V198)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for REAL-MAKE-METHOD-LAMBDA	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V199;
	object V200;
	object V201;
	object V202;
	check_arg(4);
	V199=(base[0]);
	V200=(base[1]);
	V201=(base[2]);
	V202=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V201);
	base[5]= (V202);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk373)();
	return;
	}
}
/*	function definition for MAKE-METHOD-LAMBDA-INTERNAL	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{register object V203;
	object V204;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V203=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T351;}
	V204=(base[1]);
	vs_top=sup;
	goto T352;
	goto T351;
T351:;
	V204= Cnil;
	goto T352;
T352:;
	if(!(type_of((V203))==t_cons)){
	goto T355;}
	if((CMPcar((V203)))==(VV[35])){
	goto T354;}
	goto T355;
T355:;
	base[2]= VV[50];
	base[3]= (V203);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	vs_top=sup;
	goto T354;
T354:;
	{object V205;
	object V206;
	object V207;
	base[2]= CMPcddr((V203));
	base[3]= (V204);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk371)();
	if(vs_base>=vs_top){vs_top=sup;goto T364;}
	V205= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T365;}
	V206= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T366;}
	V207= vs_base[0];
	vs_top=sup;
	goto T367;
	goto T364;
T364:;
	V205= Cnil;
	goto T365;
T365:;
	V206= Cnil;
	goto T366;
T366:;
	V207= Cnil;
	goto T367;
T367:;
	{object V208;
	object V209;
	object V210;
	object V211;
	object V212;
	V208= (VFUN_NARGS=2,(*(LnkLI374))(VV[47],(V206)));
	V209= (VFUN_NARGS=2,(*(LnkLI374))(VV[48],(V206)));
	if(!(type_of((V208))==t_cons)){
	goto T372;}
	V210= CMPcar((V208));
	goto T370;
	goto T372;
T372:;
	V210= Cnil;
	goto T370;
T370:;
	if(((V210))==Cnil){
	goto T376;}
	V211= CMPcar((V210));
	goto T374;
	goto T376;
T376:;
	V211= Cnil;
	goto T374;
T374:;
	if((V209)!=Cnil){
	V212= (V209);
	goto T378;}
	V212= CMPcadr((V203));
	goto T378;
T378:;
	{object V213;
	register object V214;
	object V215;
	base[7]= (V212);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T381;}
	V213= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T382;}
	V214= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T383;}
	V215= vs_base[0];
	vs_top=sup;
	goto T384;
	goto T381;
T381:;
	V213= Cnil;
	goto T382;
T382:;
	V214= Cnil;
	goto T383;
T383:;
	V215= Cnil;
	goto T384;
T384:;
	{object V216;
	object V217;
	object V218;
	object V219;
	object V220;
	object V221;
	object V222;
	register object V223;
	register object V224;
	object V225;
	{object V226;
	object V227= (V213);
	object V228= (V215);
	if(V227==Cnil||V228==Cnil){
	V216= Cnil;
	goto T385;}
	base[17]=V226=MMcons(Cnil,Cnil);
	goto T386;
T386:;
	(V226->c.c_car)= (V227->c.c_car);
	if((V227=MMcdr(V227))==Cnil||(V228=MMcdr(V228))==Cnil){
	V216= base[17];
	goto T385;}
	V226=MMcdr(V226)=MMcons(Cnil,Cnil);
	goto T386;}
	goto T385;
T385:;
	{object V231;
	object V232= (V216);
	if(V232==Cnil){
	V217= Cnil;
	goto T388;}
	base[17]=V231=MMcons(Cnil,Cnil);
	goto T389;
T389:;
	(V231->c.c_car)= make_cons((V232->c.c_car),Cnil);
	if((V232=MMcdr(V232))==Cnil){
	V217= base[17];
	goto T388;}
	V231=MMcdr(V231)=MMcons(Cnil,Cnil);
	goto T389;}
	goto T388;
T388:;
	V218= make_cons(Cnil,Cnil);
	V219= (*(LnkLI375))((V212),(V216),(V206),(V210),(V215));
	base[17]= Cnil;
	{object V234;
	object V235= (V213);
	object V236= (V215);
	if(V235==Cnil||V236==Cnil){
	base[18]= Cnil;
	goto T396;}
	base[19]=V234=MMcons(Cnil,Cnil);
	goto T397;
T397:;
	if(type_of((V236->c.c_car))==t_symbol){
	goto T399;}
	(V234->c.c_car)= Cnil;
	goto T398;
	goto T399;
T399:;
	if(((((V236->c.c_car))==(Ct)?Ct:Cnil))==Cnil){
	goto T401;}
	(V234->c.c_car)= Cnil;
	goto T398;
	goto T401;
T401:;
	(V234->c.c_car)= list(3,VV[51],(V235->c.c_car),(V236->c.c_car));
	goto T398;
T398:;
	if((V235=MMcdr(V235))==Cnil||(V236=MMcdr(V236))==Cnil){
	base[18]= base[19];
	goto T396;}
	V234=MMcdr(V234)=MMcons(Cnil,Cnil);
	goto T397;}
	goto T396;
T396:;
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk376)();
	vs_top=sup;
	V233= vs_base[0];
	V220= make_cons(VV[46],V233);
	V239= make_cons(VV[10],(V219));
	if(!(type_of((V211))==t_cons||((V211))==Cnil)){
	goto T406;}
	V240= CMPcadr((V211));
	goto T404;
	goto T406;
T406:;
	V240= (V211);
	goto T404;
T404:;
	V241= list(2,/* INLINE-ARGS */V239,listA(3,VV[52],V240,(V207)));
	V221= listA(4,VV[35],(V214),(V220),append((V206),/* INLINE-ARGS */V241));
	if((CMPcdr((V207)))==Cnil){
	goto T409;}
	V222= Cnil;
	goto T408;
	goto T409;
T409:;
	base[17]= CMPcar((V207));
	vs_top=(vs_base=base+17)+1;
	Lconstantp();
	vs_top=sup;
	V222= vs_base[0];
	goto T408;
T408:;
	if((V222)==Cnil){
	V223= Cnil;
	goto T412;}
	base[17]= CMPcar((V207));
	vs_top=(vs_base=base+17)+1;
	Leval();
	vs_top=sup;
	V223= vs_base[0];
	goto T412;
T412:;
	if(((V222))==Cnil){
	goto T416;}
	base[17]= (V223);
	base[18]= VV[53];
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk122)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T415;}
	if(!(type_of((V223))==t_symbol)){
	goto T416;}
	base[17]= (V223);
	vs_top=(vs_base=base+17)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T416;}
	goto T415;
T415:;
	V224= list(2,VV[54],(V223));
	goto T414;
	goto T416;
T416:;
	V224= Cnil;
	goto T414;
T414:;
	{register object V242;
	register object V243;
	V242= (V214);
	V243= CMPcar((V242));
	goto T431;
T431:;
	if(!(((V242))==Cnil)){
	goto T432;}
	V225= Cnil;
	goto T427;
	goto T432;
T432:;
	{register object x= (V243),V244= VV[55];
	while(V244!=Cnil)
	if(x==(V244->c.c_car)){
	goto T439;
	}else V244=V244->c.c_cdr;
	goto T438;}
	goto T439;
T439:;
	V225= Ct;
	goto T427;
	goto T438;
T438:;
	if(!(((V243))==(VV[56]))){
	goto T436;}
	V225= Cnil;
	goto T427;
	goto T436;
T436:;
	V242= CMPcdr((V242));
	V243= CMPcar((V242));
	goto T431;}
	goto T427;
T427:;
	{object V245;
	object V246;
	object V247;
	object V248;
	base[17]= (V221);
	base[18]= (V216);
	base[19]= (V204);
	base[20]= (V217);
	base[21]= (V218);
	vs_top=(vs_base=base+17)+5;
	(void) (*Lnk377)();
	if(vs_base>=vs_top){vs_top=sup;goto T453;}
	V245= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T454;}
	V246= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T455;}
	V247= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T456;}
	V248= vs_base[0];
	vs_top=sup;
	goto T457;
	goto T453;
T453:;
	V245= Cnil;
	goto T454;
T454:;
	V246= Cnil;
	goto T455;
T455:;
	V247= Cnil;
	goto T456;
T456:;
	V248= Cnil;
	goto T457;
T457:;
	{object V249;
	object V250;
	object V251;
	base[17]= CMPcddr((V245));
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk371)();
	if(vs_base>=vs_top){vs_top=sup;goto T460;}
	V249= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T461;}
	V250= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T462;}
	V251= vs_base[0];
	vs_top=sup;
	goto T463;
	goto T460;
T460:;
	V249= Cnil;
	goto T461;
T461:;
	V250= Cnil;
	goto T462;
T462:;
	V251= Cnil;
	goto T463;
T463:;
	if(((V248))!=Cnil){
	goto T465;}
	if(((V246))==Cnil){
	goto T464;}
	goto T465;
T465:;
	V224= listA(3,VV[57],Ct,(V224));
	goto T464;
T464:;
	base[17]= (VV[378]->s.s_gfdef);
	base[18]= (V217);
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk379)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T470;}
	{object V252;
	object V253;
	base[17]= (V217);
	base[18]= (V218);
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk380)();
	if(vs_base>=vs_top){vs_top=sup;goto T478;}
	V252= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T479;}
	V253= vs_base[0];
	vs_top=sup;
	goto T480;
	goto T478;
T478:;
	V252= Cnil;
	goto T479;
T479:;
	V253= Cnil;
	goto T480;
T480:;
	{object V254;
	base[17]= VV[58];
	vs_top=(vs_base=base+17)+1;
	Lmake_symbol();
	vs_top=sup;
	V254= vs_base[0];
	if(((V252))==Cnil){
	goto T487;}
	base[17]= list(2,VV[59],(V252));
	goto T485;
	goto T487;
T487:;
	base[17]= Cnil;
	goto T485;
T485:;
	if(((V253))==Cnil){
	goto T491;}
	base[18]= list(2,VV[60],(V253));
	goto T489;
	goto T491;
T491:;
	base[18]= Cnil;
	goto T489;
T489:;
	base[19]= listA(3,VV[29],(V254),(V224));
	vs_top=(vs_base=base+17)+3;
	Lappend();
	vs_top=sup;
	V224= vs_base[0];
	V255= listA(3,VV[61],list(3,(V216),(V252),(V254)),(V251));
	V251= make_cons(/* INLINE-ARGS */V255,Cnil);}}
	goto T470;
T470:;
	{register object x= VV[62],V256= (V214);
	while(V256!=Cnil)
	if(x==(V256->c.c_car)){
	goto T498;
	}else V256=V256->c.c_cdr;
	goto T495;}
	goto T498;
T498:;
	{register object x= VV[63],V257= (V214);
	while(V257!=Cnil)
	if(x==(V257->c.c_car)){
	goto T495;
	}else V257=V257->c.c_cdr;}
	{object V258;
	{register object x= VV[56],V259= (V214);
	while(V259!=Cnil)
	if(x==(V259->c.c_car)){
	V258= V259;
	goto T500;
	}else V259=V259->c.c_cdr;
	V258= Cnil;}
	goto T500;
T500:;
	base[18]= (V214);
	base[19]= (V258);
	vs_top=(vs_base=base+18)+2;
	Lldiff();
	vs_top=sup;
	base[17]= vs_base[0];
	base[18]= make_cons(VV[63],Cnil);
	base[19]= (V258);
	vs_top=(vs_base=base+17)+3;
	Lnconc();
	vs_top=sup;
	V214= vs_base[0];}
	goto T495;
T495:;
	base[18]= (V214);
	base[19]= VV[66];
	base[20]= VV[67];
	base[21]= VV[68];
	base[22]= (V246);
	base[23]= VV[69];
	base[24]= (V248);
	base[25]= VV[70];
	base[26]= (V247);
	base[27]= VV[71];
	base[28]= (V225);
	vs_top=(vs_base=base+18)+11;
	Llist();
	vs_top=sup;
	V260= vs_base[0];
	base[17]= list(3,VV[35],VV[64],listA(3,VV[65],V260,append((V250),(V251))));
	if(((V224))==Cnil){
	goto T523;}
	V261= list(2,VV[28],(V224));
	goto T521;
	goto T523;
T523:;
	V261= Cnil;
	goto T521;
T521:;
	if(((V205))==Cnil){
	goto T527;}
	V262= list(2,VV[3],(V205));
	goto T525;
	goto T527;
T527:;
	V262= Cnil;
	goto T525;
T525:;
	base[18]= append(V261,V262);
	vs_top=(vs_base=base+17)+2;
	return;}}}}}}
	}
}
/*	macro definition for SIMPLE-LEXICAL-METHOD-FUNCTIONS	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V263=base[0]->c.c_cdr;
	if(endp(V263))invalid_macro_call();
	{object V264= (V263->c.c_car);
	if(endp(V264))invalid_macro_call();
	base[2]= (V264->c.c_car);
	V264=V264->c.c_cdr;
	if(endp(V264))invalid_macro_call();
	base[3]= (V264->c.c_car);
	V264=V264->c.c_cdr;
	if(endp(V264))invalid_macro_call();
	base[4]= (V264->c.c_car);
	V264=V264->c.c_cdr;
	base[5]= V264;}
	V263=V263->c.c_cdr;
	base[6]= V263;}
	V265= list(2,base[3],base[4]);
	base[7]= list(4,VV[10],base[3],base[4],list(3,VV[72],/* INLINE-ARGS */V265,list(3,VV[73],base[5],listA(3,VV[74],list(2,base[2],base[3]),base[6]))));
	vs_top=(vs_base=base+7)+1;
	return;
}
/*	macro definition for FAST-LEXICAL-METHOD-FUNCTIONS	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V266=base[0]->c.c_cdr;
	if(endp(V266))invalid_macro_call();
	{object V267= (V266->c.c_car);
	if(endp(V267))invalid_macro_call();
	base[2]= (V267->c.c_car);
	V267=V267->c.c_cdr;
	if(endp(V267))invalid_macro_call();
	base[3]= (V267->c.c_car);
	V267=V267->c.c_cdr;
	if(endp(V267))invalid_macro_call();
	base[4]= (V267->c.c_car);
	V267=V267->c.c_cdr;
	if(endp(V267))invalid_macro_call();
	base[5]= (V267->c.c_car);
	V267=V267->c.c_cdr;
	base[6]= V267;}
	V266=V266->c.c_cdr;
	base[7]= V266;}
	V268= list(3,base[4],base[5],base[3]);
	V269 = CMPmake_fixnum((long)length(base[4]));
	base[8]= list(3,VV[75],/* INLINE-ARGS */V268,list(3,VV[73],base[6],listA(3,VV[74],list(2,nthcdr(fix(V269),base[2]),base[5]),base[7])));
	vs_top=(vs_base=base+8)+1;
	return;
}
/*	macro definition for BIND-SIMPLE-LEXICAL-METHOD-MACROS	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V270=base[0]->c.c_cdr;
	if(endp(V270))invalid_macro_call();
	{object V271= (V270->c.c_car);
	if(endp(V271))invalid_macro_call();
	base[2]= (V271->c.c_car);
	V271=V271->c.c_cdr;
	if(endp(V271))invalid_macro_call();
	base[3]= (V271->c.c_car);
	V271=V271->c.c_cdr;
	if(!endp(V271))invalid_macro_call();}
	V270=V270->c.c_cdr;
	base[4]= V270;}
	V272= list(3,VV[44],VV[80],list(3,VV[44],VV[81],list(2,VV[1],base[3])));
	V273= list(2,VV[1],base[3]);
	V274= list(3,VV[44],/* INLINE-ARGS */V272,list(3,VV[44],/* INLINE-ARGS */V273,list(3,VV[44],VV[82],list(2,VV[1],base[3]))));
	V275= list(3,VV[77],VV[78],list(6,VV[32],VV[79],/* INLINE-ARGS */V274,VV[83],list(2,VV[1],base[3]),VV[84]));
	V276= list(4,VV[44],VV[91],VV[92],list(2,VV[1],base[2]));
	base[5]= listA(3,VV[76],list(3,/* INLINE-ARGS */V275,list(3,VV[85],VV[86],list(5,VV[44],VV[87],VV[88],list(5,VV[44],VV[89],VV[90],/* INLINE-ARGS */V276,list(2,VV[1],base[3])),VV[93])),VV[94]),base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function MAKE-METHOD-CALL	*/

static object LI23(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB21 VMS21 VMV21
	{object V277;
	object V278;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI23key,first,ap);
	if(Vcs[0]==0){
	V277= (VV[382]->s.s_gfdef);
	}else{
	V277=(Vcs[0]);}
	V278=(Vcs[1]);
	base[0]= VV[95];
	base[1]= (V277);
	base[2]= (V278);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V279 = vs_base[0];
	VMR21(V279)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	macro definition for INVOKE-METHOD-CALL1	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V280=base[0]->c.c_cdr;
	if(endp(V280))invalid_macro_call();
	base[2]= (V280->c.c_car);
	V280=V280->c.c_cdr;
	if(endp(V280))invalid_macro_call();
	base[3]= (V280->c.c_car);
	V280=V280->c.c_cdr;
	if(endp(V280))invalid_macro_call();
	base[4]= (V280->c.c_car);
	V280=V280->c.c_cdr;
	if(!endp(V280))invalid_macro_call();}
	V281= list(2,VV[97],base[2]);
	V282= list(2,VV[98],base[3]);
	base[5]= listA(3,VV[96],list(3,/* INLINE-ARGS */V281,/* INLINE-ARGS */V282,list(2,VV[99],base[4])),VV[100]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for INVOKE-METHOD-CALL	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V283=base[0]->c.c_cdr;
	if(endp(V283))invalid_macro_call();
	base[2]= (V283->c.c_car);
	V283=V283->c.c_cdr;
	if(endp(V283))invalid_macro_call();
	base[3]= (V283->c.c_car);
	V283=V283->c.c_cdr;
	base[4]= V283;}
	V284= list(2,VV[102],base[2]);
	if((base[3])==Cnil){
	goto T535;}
	V285= make_cons(VV[32],base[4]);
	goto T533;
	goto T535;
T535:;
	V285= make_cons(VV[44],base[4]);
	goto T533;
T533:;
	base[5]= list(4,VV[101],/* INLINE-ARGS */V284,V285,list(2,VV[103],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function MAKE-FAST-METHOD-CALL	*/

static object LI26(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB24 VMS24 VMV24
	{object V286;
	object V287;
	object V288;
	object V289;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI26key,first,ap);
	if(Vcs[0]==0){
	V286= (VV[382]->s.s_gfdef);
	}else{
	V286=(Vcs[0]);}
	V287=(Vcs[1]);
	V288=(Vcs[2]);
	V289=(Vcs[3]);
	base[0]= VV[104];
	base[1]= (V286);
	base[2]= (V287);
	base[3]= (V288);
	base[4]= (V289);
	vs_top=(vs_base=base+0)+5;
	siLmake_structure();
	vs_top=sup;
	{object V290 = vs_base[0];
	VMR24(V290)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	macro definition for INVOKE-FAST-METHOD-CALL	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V291=base[0]->c.c_cdr;
	if(endp(V291))invalid_macro_call();
	base[2]= (V291->c.c_car);
	V291=V291->c.c_cdr;
	base[3]= V291;}
	V292= list(2,VV[106],base[2]);
	V293= list(2,VV[107],base[2]);
	base[4]= listA(5,VV[105],/* INLINE-ARGS */V292,/* INLINE-ARGS */V293,list(2,VV[108],base[2]),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function MAKE-FAST-INSTANCE-BOUNDP	*/

static object LI28(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB26 VMS26 VMV26
	{object V294;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI28key,first,ap);
	V294=(Vcs[0]);
	base[0]= VV[109];
	base[1]= (V294);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V295 = vs_base[0];
	VMR26(V295)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function SHOW-EMF-CALL-TRACE	*/

static object LI29()

{	 VMB27 VMS27 VMV27
	bds_check;
	goto TTL;
TTL:;
	if(((VV[110]->s.s_dbind))==Cnil){
	goto T546;}
	{register object V296;
	V296= (VV[111]->s.s_dbind);
	bds_bind(VV[112],Cnil);
	base[1]= Ct;
	base[2]= VV[113];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	{register long V297;
	register long V298;
	V297= fix((VV[114]->s.s_dbind));
	V298= 0;
	goto T554;
T554:;
	if(!((V298)>=(V297))){
	goto T555;}
	{object V299 = Cnil;
	bds_unwind1;
	VMR27(V299)}
	goto T555;
T555:;
	{register object V300;
	V300= aref1((VV[110]->s.s_dbind),fix((V296)));
	if(((V300))==Cnil){
	goto T558;}
	(void)(print((V300),Cnil));}
	goto T558;
T558:;
	V296= number_plus((V296),small_fixnum(1));
	if(!(number_compare((V296),(VV[114]->s.s_dbind))==0)){
	goto T564;}
	V296= small_fixnum(0);
	goto T564;
T564:;
	V298= (long)(V298)+1;
	goto T554;}}
	goto T546;
T546:;
	{object V301 = Cnil;
	VMR27(V301)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function TRACE-EMF-CALL-INTERNAL	*/

static object LI30(V305,V306,V307)

object V305;object V306;object V307;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	if(((VV[110]->s.s_dbind))!=Cnil){
	goto T571;}
	base[0]= (VV[114]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk388)();
	vs_top=sup;
	(VV[110]->s.s_dbind)= vs_base[0];
	goto T571;
T571:;{object V308;
	V308= (VV[110]->s.s_dbind);{object V309;
	V309= (VV[111]->s.s_dbind);
	V310= listA(3,(V305),(V306),(V307));
	(void)(aset1(V308,fix(V309),/* INLINE-ARGS */V310));}}
	(VV[111]->s.s_dbind)= number_plus((VV[111]->s.s_dbind),small_fixnum(1));
	if(!(number_compare((VV[111]->s.s_dbind),(VV[114]->s.s_dbind))==0)){
	goto T580;}
	(VV[111]->s.s_dbind)= small_fixnum(0);
	{object V311 = small_fixnum(0);
	VMR28(V311)}
	goto T580;
T580:;
	{object V312 = Cnil;
	VMR28(V312)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for TRACE-EMF-CALL	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V313=base[0]->c.c_cdr;
	if(endp(V313))invalid_macro_call();
	base[2]= (V313->c.c_car);
	V313=V313->c.c_cdr;
	if(endp(V313))invalid_macro_call();
	base[3]= (V313->c.c_car);
	V313=V313->c.c_cdr;
	if(endp(V313))invalid_macro_call();
	base[4]= (V313->c.c_car);
	V313=V313->c.c_cdr;
	if(!endp(V313))invalid_macro_call();}
	if(((VV[115]->s.s_dbind))==Cnil){
	goto T584;}
	base[5]= list(3,VV[116],VV[112],list(4,VV[117],base[2],base[3],base[4]));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T584;
T584:;
	base[5]= Cnil;
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for INVOKE-EFFECTIVE-METHOD-FUNCTION-FAST	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V314=base[0]->c.c_cdr;
	if(endp(V314))invalid_macro_call();
	base[2]= (V314->c.c_car);
	V314=V314->c.c_cdr;
	if(endp(V314))invalid_macro_call();
	base[3]= (V314->c.c_car);
	V314=V314->c.c_cdr;
	base[4]= V314;}
	V315= list(4,VV[118],base[2],base[3],make_cons(VV[44],base[4]));
	base[5]= list(3,VV[10],/* INLINE-ARGS */V315,listA(3,VV[119],base[2],base[4]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for INVOKE-EFFECTIVE-METHOD-FUNCTION	*/

static void L33()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V316=base[0]->c.c_cdr;
	if(endp(V316))invalid_macro_call();
	base[2]= (V316->c.c_car);
	V316=V316->c.c_cdr;
	if(endp(V316))invalid_macro_call();
	base[3]= (V316->c.c_car);
	V316=V316->c.c_cdr;
	base[4]= V316;}
	base[5]= base[3];
	vs_top=(vs_base=base+5)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T586;}
	base[5]= VV[120];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	goto T586;
T586:;
	base[5]= base[3];
	vs_top=(vs_base=base+5)+1;
	Leval();
	vs_top=sup;
	base[3]= vs_base[0];
	V317= list(4,VV[118],base[2],base[3],make_cons(VV[44],base[4]));
	V318= list(3,VV[122],base[2],VV[123]);
	V319= list(2,/* INLINE-ARGS */V318,listA(3,VV[119],base[2],base[4]));
	if((base[3])!=Cnil){
	goto T597;}
	if(!((1)==((long)length(base[4])))){
	goto T597;}
	V321= list(3,VV[122],base[2],VV[124]);
	V322= list(2,VV[126],list(2,VV[127],CMPcar(base[4])));
	V323= list(2,/* INLINE-ARGS */V322,list(2,VV[128],list(3,VV[116],VV[126],list(3,VV[129],VV[126],base[2]))));
	V324= list(3,VV[131],VV[128],list(2,VV[1],(VV[132]->s.s_dbind)));
	V325= list(2,/* INLINE-ARGS */V321,list(3,VV[125],/* INLINE-ARGS */V323,list(4,VV[130],/* INLINE-ARGS */V324,list(3,VV[133],CMPcar(base[4]),base[2]),VV[128])));
	base[5]= make_cons(/* INLINE-ARGS */V325,Cnil);
	goto T595;
	goto T597;
T597:;
	base[5]= Cnil;
	goto T595;
T595:;
	if((base[3])!=Cnil){
	goto T603;}
	if(!((2)==((long)length(base[4])))){
	goto T603;}
	V326= list(3,VV[122],base[2],VV[134]);
	V327= list(2,VV[135],CMPcar(base[4]));
	V328= list(2,/* INLINE-ARGS */V327,list(2,VV[126],list(2,VV[127],CMPcar(base[4]))));
	V329= list(2,/* INLINE-ARGS */V326,list(3,VV[96],/* INLINE-ARGS */V328,list(3,VV[116],VV[126],list(3,VV[30],list(3,VV[129],VV[126],base[2]),VV[135]))));
	base[6]= make_cons(/* INLINE-ARGS */V329,Cnil);
	goto T601;
	goto T603;
T603:;
	base[6]= Cnil;
	goto T601;
T601:;
	V330= list(2,VV[95],listA(4,VV[137],base[2],base[3],base[4]));
	if((base[3])==Cnil){
	goto T610;}
	V331= listA(3,VV[138],list(3,VV[139],VV[34],base[2]),base[4]);
	goto T608;
	goto T610;
T610:;
	V331= listA(3,VV[140],list(3,VV[139],VV[34],base[2]),base[4]);
	goto T608;
T608:;
	V332= list(2,Ct,list(4,VV[136],base[2],/* INLINE-ARGS */V330,list(2,VV[34],V331)));
	base[7]= make_cons(/* INLINE-ARGS */V332,Cnil);
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V320= vs_base[0];
	base[5]= list(3,VV[10],/* INLINE-ARGS */V317,listA(3,VV[121],/* INLINE-ARGS */V319,V320));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	function definition for INVOKE-EMF	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	{register object V333;
	register object V334;
	check_arg(2);
	V333=(base[0]);
	V334=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V335;
	V335= (V333);
	base[2]= (V335);
	base[3]= VV[104];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T614;}
	{object V336;
	object V337;
	register object V338;
	V336= STREF(object,(V333),12);
	V337= CMPcdr((V336));
	V338= CMPcar((V336));
	if(((V337))==Cnil){
	goto T622;}
	{object V339;
	object V340;
	V339= nthcdr(fix((V338)),(V334));
	base[7]= (V334);
	base[8]= (V339);
	vs_top=(vs_base=base+7)+2;
	Lldiff();
	vs_top=sup;
	V340= vs_base[0];
	base[7]= STREF(object,(V333),0);
	base[8]= STREF(object,(V333),4);
	base[9]= STREF(object,(V333),8);
	{object V341;
	V342= make_cons((V339),Cnil);
	V341= nconc((V340),/* INLINE-ARGS */V342);
	 vs_top=base+10;
	 while(V341!=Cnil)
	 {vs_push((V341)->c.c_car);V341=(V341)->c.c_cdr;}
	vs_base=base+8;}
	{object _funobj = base[7];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T622;
T622:;
	if(((V334))!=Cnil){
	goto T633;}
	if(!(eql((V338),small_fixnum(0)))){
	goto T636;}
	base[5]= STREF(object,(V333),0);
	base[6]= STREF(object,(V333),4);
	base[7]= STREF(object,(V333),8);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T636;
T636:;
	base[5]= VV[141];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	return;
	goto T633;
T633:;
	if((CMPcdr((V334)))!=Cnil){
	goto T643;}
	if(!(eql((V338),small_fixnum(1)))){
	goto T646;}
	base[5]= STREF(object,(V333),0);
	base[6]= STREF(object,(V333),4);
	base[7]= STREF(object,(V333),8);
	base[8]= CMPcar((V334));
	vs_top=(vs_base=base+6)+3;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T646;
T646:;
	base[5]= VV[142];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	return;
	goto T643;
T643:;
	if((CMPcddr((V334)))!=Cnil){
	goto T654;}
	if(!(eql((V338),small_fixnum(2)))){
	goto T657;}
	base[5]= STREF(object,(V333),0);
	base[6]= STREF(object,(V333),4);
	base[7]= STREF(object,(V333),8);
	base[8]= CMPcar((V334));
	base[9]= CMPcadr((V334));
	vs_top=(vs_base=base+6)+4;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T657;
T657:;
	base[5]= VV[143];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	return;
	goto T654;
T654:;
	base[5]= STREF(object,(V333),0);
	base[6]= STREF(object,(V333),4);
	base[7]= STREF(object,(V333),8);
	{object V343;
	V343= (V334);
	 vs_top=base+8;
	 while(V343!=Cnil)
	 {vs_push((V343)->c.c_car);V343=(V343)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T614;
T614:;
	base[2]= (V335);
	base[3]= VV[95];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T670;}
	base[2]= STREF(object,(V333),0);
	base[3]= (V334);
	{object V344;
	V344= STREF(object,(V333),4);
	 vs_top=base+4;
	 while(V344!=Cnil)
	 {vs_push((V344)->c.c_car);V344=(V344)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T670;
T670:;
	if(!(type_of((V335))==t_fixnum)){
	goto T678;}
	if(((V334))!=Cnil){
	goto T681;}
	base[2]= VV[144];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	return;
	goto T681;
T681:;
	if((CMPcdr((V334)))!=Cnil){
	goto T685;}
	{object V345;
	{object V347;
	V347= CMPcar((V334));
	if(type_of((V347))==t_structure){
	goto T693;}
	goto T690;
	goto T693;
T693:;
	if(!((((V347))->str.str_def)==(VV[145]))){
	goto T690;}}
	V346= STREF(object,CMPcar((V334)),4);
	goto T688;
	goto T690;
T690:;{object V348;
	V348= (VV[147]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= CMPcar((V334));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V349= vs_base[0];
	if(!((V348)==(CMPcar(V349)))){
	goto T696;}}
	V346= CMPcar((CMPcar((V334)))->cc.cc_turbo[12]);
	goto T688;
	goto T696;
T696:;
	base[2]= VV[148];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V346= vs_base[0];
	goto T688;
T688:;
	V345= (V346)->v.v_self[fix((V333))];
	if(!(((V345))==((VV[132]->s.s_dbind)))){
	goto T703;}
	base[2]= CMPcar((V334));
	base[3]= (V333);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk133)();
	return;
	goto T703;
T703:;
	base[2]= (V345);
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T685;
T685:;
	if((CMPcddr((V334)))!=Cnil){
	goto T708;}
	{object V351;
	V351= CMPcadr((V334));
	if(type_of((V351))==t_structure){
	goto T715;}
	goto T712;
	goto T715;
T715:;
	if(!((((V351))->str.str_def)==(VV[149]))){
	goto T712;}}
	V350= STREF(object,CMPcadr((V334)),4);
	goto T710;
	goto T712;
T712:;{object V352;
	V352= (VV[147]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= CMPcadr((V334));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V353= vs_base[0];
	if(!((V352)==(CMPcar(V353)))){
	goto T718;}}
	V350= CMPcar((CMPcadr((V334)))->cc.cc_turbo[12]);
	goto T710;
	goto T718;
T718:;
	base[2]= VV[148];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V350= vs_base[0];
	goto T710;
T710:;
	base[2]= (V350)->v.v_self[fix((V333))]= (CMPcar((V334)));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T708;
T708:;
	base[2]= VV[150];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	return;
	goto T678;
T678:;
	base[2]= (V335);
	base[3]= VV[109];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T726;}
	if(((V334))==Cnil){
	goto T730;}
	if((CMPcdr((V334)))==Cnil){
	goto T731;}
	goto T730;
T730:;
	base[2]= VV[151];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	return;
	goto T731;
T731:;
	{object V355;
	V355= CMPcar((V334));
	if(type_of((V355))==t_structure){
	goto T741;}
	goto T738;
	goto T741;
T741:;
	if(!((((V355))->str.str_def)==(VV[152]))){
	goto T738;}}
	V354= STREF(object,CMPcar((V334)),4);
	goto T736;
	goto T738;
T738:;{object V356;
	V356= (VV[147]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= CMPcar((V334));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V357= vs_base[0];
	if(!((V356)==(CMPcar(V357)))){
	goto T744;}}
	V354= CMPcar((CMPcar((V334)))->cc.cc_turbo[12]);
	goto T736;
	goto T744;
T744:;
	base[2]= VV[148];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V354= vs_base[0];
	goto T736;
T736:;
	base[2]= (((((V354)->v.v_self[(long)STREF(fixnum,(V333),0)])==((VV[132]->s.s_dbind))?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T726;
T726:;
	base[2]= (V335);
	vs_top=(vs_base=base+2)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T751;}
	base[2]= (V333);
	{object V358;
	V358= (V334);
	 vs_top=base+3;
	 while(V358!=Cnil)
	 {vs_push((V358)->c.c_car);V358=(V358)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T751;
T751:;
	base[3]= VV[153];
	base[4]= (V335);
	base[5]= VV[154];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk392)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	return;}
	}
}
/*	local entry for function GF-MAKE-FUNCTION-FROM-EMF	*/

static object LI36(V361,V362)

object V361;object V362;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	base[0]=MMcons((V362),Cnil);
	{register object V363;
	V363= (base[0]->c.c_car);
	base[1]= (V363);
	base[2]= VV[104];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T761;}
	{object V364;
	base[4]= (V361);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	V364= vs_base[0];
	base[2]= CMPmake_fixnum((long)(*(LnkLI394))((V364)));
	base[2]=MMcons(base[2],base[0]);
	base[3]= (*(LnkLI395))((V364));
	base[3]=MMcons(base[3],base[2]);
	{object V365 = 
	make_cclosure_new(LC130,Cnil,base[3],Cdata);
	VMR33(V365)}}
	goto T761;
T761:;
	base[1]= (V363);
	base[2]= VV[95];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T770;}
	{object V366 = 
	make_cclosure_new(LC131,Cnil,base[0],Cdata);
	VMR33(V366)}
	goto T770;
T770:;
	base[1]= (V363);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T775;}
	{object V367 = (base[0]->c.c_car);
	VMR33(V367)}
	goto T775;
T775:;
	base[2]= VV[153];
	base[3]= (V363);
	base[4]= VV[156];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk392)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	{object V368 = vs_base[0];
	VMR33(V368)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for BIND-FAST-LEXICAL-METHOD-MACROS	*/

static void L37()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V369=base[0]->c.c_cdr;
	if(endp(V369))invalid_macro_call();
	{object V370= (V369->c.c_car);
	if(endp(V370))invalid_macro_call();
	base[2]= (V370->c.c_car);
	V370=V370->c.c_cdr;
	if(endp(V370))invalid_macro_call();
	base[3]= (V370->c.c_car);
	V370=V370->c.c_cdr;
	if(endp(V370))invalid_macro_call();
	base[4]= (V370->c.c_car);
	V370=V370->c.c_cdr;
	if(!endp(V370))invalid_macro_call();}
	V369=V369->c.c_cdr;
	base[5]= V369;}
	V371= list(2,VV[1],base[4]);
	V372= listA(3,VV[160],list(2,VV[161],list(2,VV[1],base[3])),VV[162]);
	V373= listA(4,VV[32],VV[163],list(2,VV[1],base[4]),VV[164]);
	V374= list(2,VV[1],base[4]);
	V375= list(2,VV[1],((((base[3])==Cnil?Ct:Cnil))==Cnil?Ct:Cnil));
	V376= list(2,VV[1],base[2]);
	if((base[3])==Cnil){
	goto T784;}
	V377= make_cons(base[3],Cnil);
	goto T782;
	goto T784;
T784:;
	V377= Cnil;
	goto T782;
T782:;
	V378= list(2,VV[165],list(5,VV[32],VV[166],/* INLINE-ARGS */V374,/* INLINE-ARGS */V375,list(3,VV[167],/* INLINE-ARGS */V376,list(2,VV[1],V377))));
	V379= make_cons(/* INLINE-ARGS */V378,Cnil);
	V380= list(2,VV[1],base[2]);
	if((base[3])==Cnil){
	goto T788;}
	V381= list(2,VV[170],base[3]);
	goto T786;
	goto T788;
T788:;
	V381= Cnil;
	goto T786;
T786:;
	V382= list(3,VV[85],VV[158],list(5,VV[44],VV[159],/* INLINE-ARGS */V371,list(4,VV[130],/* INLINE-ARGS */V372,/* INLINE-ARGS */V373,list(3,VV[96],/* INLINE-ARGS */V379,list(5,VV[44],VV[168],VV[92],list(4,VV[44],VV[169],list(3,VV[44],list(3,VV[167],/* INLINE-ARGS */V380,list(2,VV[1],V381)),VV[92]),VV[165]),VV[165]))),VV[171]));
	base[6]= listA(3,VV[76],list(3,VV[157],/* INLINE-ARGS */V382,list(3,VV[172],Cnil,list(3,VV[44],VV[173],list(3,VV[44],VV[174],list(2,VV[1],base[4]))))),base[5]);
	vs_top=(vs_base=base+6)+1;
	return;
}
/*	macro definition for BIND-LEXICAL-METHOD-FUNCTIONS	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V383=base[0]->c.c_cdr;
	if(endp(V383))invalid_macro_call();
	{object V384= (V383->c.c_car);
	{object V385=getf(V384,VV[68],OBJNULL);
	if(V385==OBJNULL){
	base[2]= Cnil;} else {
	base[2]= V385;
	}}
	{object V386=getf(V384,VV[69],OBJNULL);
	if(V386==OBJNULL){
	base[3]= Cnil;} else {
	base[3]= V386;
	}}
	{object V387=getf(V384,VV[70],OBJNULL);
	if(V387==OBJNULL){
	base[4]= Cnil;} else {
	base[4]= V387;
	}}
	{object V388=getf(V384,VV[71],OBJNULL);
	if(V388==OBJNULL){
	base[5]= Cnil;} else {
	base[5]= V388;
	}}
	check_other_key(V384,4,VV[68],VV[69],VV[70],VV[71]);}
	V383=V383->c.c_cdr;
	base[6]= V383;}
	if((base[2])!=Cnil){
	goto T795;}
	if((base[3])!=Cnil){
	goto T795;}
	if((base[4])!=Cnil){
	goto T795;}
	if((base[5])!=Cnil){
	goto T795;}
	base[7]= listA(3,VV[96],Cnil,base[6]);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T795;
T795:;
	if((base[4])!=Cnil){
	goto T804;}
	if((base[5])!=Cnil){
	goto T804;}
	base[7]= list(2,VV[77],listA(3,VV[76],VV[175],base[6]));
	vs_top=(vs_base=base+7)+1;
	return;
	goto T804;
T804:;
	if(base[2]==Cnil){
	V389= Cnil;
	goto T808;}
	V389= VV[177];
	goto T808;
T808:;
	if(base[3]==Cnil){
	V390= Cnil;
	goto T809;}
	V390= VV[178];
	goto T809;
T809:;
	base[7]= list(2,VV[77],listA(3,VV[176],append(V389,V390),base[6]));
	vs_top=(vs_base=base+7)+1;
	return;
}
/*	macro definition for BIND-ARGS	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V391=base[0]->c.c_cdr;
	if(endp(V391))invalid_macro_call();
	{object V392= (V391->c.c_car);
	if(endp(V392))invalid_macro_call();
	base[2]= (V392->c.c_car);
	V392=V392->c.c_cdr;
	if(endp(V392))invalid_macro_call();
	base[3]= (V392->c.c_car);
	V392=V392->c.c_cdr;
	if(!endp(V392))invalid_macro_call();}
	V391=V391->c.c_cdr;
	base[4]= V391;}
	base[5]= VV[179];
	base[6]= VV[180];
	base[7]= VV[181];
	{object V393;
	{object V394;
	object V395= base[2];
	if(V395==Cnil){
	V393= Cnil;
	goto T810;}
	base[8]=V394=MMcons(Cnil,Cnil);
	goto T811;
T811:;
	base[9]= (V395->c.c_car);
	vs_top=(vs_base=base+9)+1;
	L40(base);
	vs_top=sup;
	(V394->c.c_cdr)= vs_base[0];
	while(MMcdr(V394)!=Cnil)V394=MMcdr(V394);
	if((V395=MMcdr(V395))==Cnil){
	base[8]=base[8]->c.c_cdr;
	V393= base[8];
	goto T810;}
	goto T811;}
	goto T810;
T810:;
	V396= list(2,base[5],base[3]);
	V397= make_cons(/* INLINE-ARGS */V396,(V393));
	if(((V393))!=Cnil){
	goto T816;}
	V399= list(2,VV[46],list(2,VV[182],base[5]));
	V398= make_cons(/* INLINE-ARGS */V399,Cnil);
	goto T814;
	goto T816;
T816:;
	V398= Cnil;
	goto T814;
T814:;
	base[8]= listA(3,VV[125],/* INLINE-ARGS */V397,append(V398,base[4]));
	vs_top=(vs_base=base+8)+1;
	return;}
}
/*	local entry for function GET-KEY-ARG	*/

static object LI41(V402,V403)

register object V402;register object V403;
{	 VMB37 VMS37 VMV37
	goto TTL;
TTL:;
	goto T819;
T819:;
	if(!(type_of((V403))!=t_cons)){
	goto T821;}
	{object V404 = Cnil;
	VMR37(V404)}
	goto T821;
T821:;
	if(!((CMPcar((V403)))==((V402)))){
	goto T824;}
	{object V405 = CMPcadr((V403));
	VMR37(V405)}
	goto T824;
T824:;
	V403= CMPcddr((V403));
	goto T819;
	return Cnil;
}
/*	local entry for function GET-KEY-ARG1	*/

static object LI42(V408,V409)

register object V408;register object V409;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	goto T830;
T830:;
	if(!(type_of((V409))!=t_cons)){
	goto T832;}
	{object V410 = Cnil;
	VMR38(V410)}
	goto T832;
T832:;
	if(!((CMPcar((V409)))==((V408)))){
	goto T835;}
	{object V411 = CMPcdr((V409));
	VMR38(V411)}
	goto T835;
T835:;
	V409= CMPcddr((V409));
	goto T830;
	return Cnil;
}
/*	function definition for WALK-METHOD-LAMBDA	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	{object V412;
	object V413;
	check_arg(5);
	V412=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	V413=(base[2]);
	base[3]=MMcons(base[3],base[1]);
	base[4]=MMcons(base[4],base[3]);
	vs_top=sup;
	base[5]=MMcons(Cnil,base[4]);
	base[6]=MMcons(Cnil,base[5]);
	base[7]=MMcons(Cnil,base[6]);
	base[8]=make_cclosure_new(LC44,Cnil,base[7],Cdata);
	base[8]=MMcons(base[8],base[7]);
	{object V414;
	base[9]= (V412);
	base[10]= (V413);
	base[11]= (base[8]->c.c_car);
	vs_top=(vs_base=base+9)+3;
	(void) (*Lnk396)();
	vs_top=sup;
	V414= vs_base[0];
	base[9]= (V414);
	base[10]= (base[5]->c.c_car);
	base[11]= (base[6]->c.c_car);
	base[12]= (base[7]->c.c_car);
	vs_top=(vs_base=base+9)+4;
	return;}
	}
}
/*	function definition for GENERIC-FUNCTION-NAME-P	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	{register object V415;
	check_arg(1);
	V415=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V415))==t_symbol)){
	goto T850;}
	goto T848;
	goto T850;
T850:;
	if(type_of((V415))==t_cons){
	goto T852;}
	goto T849;
	goto T852;
T852:;
	if((CMPcar((V415)))==(VV[30])){
	goto T854;}
	goto T849;
	goto T854;
T854:;
	if(type_of(CMPcdr((V415)))==t_cons){
	goto T856;}
	goto T849;
	goto T856;
T856:;
	if(type_of(CMPcadr((V415)))==t_symbol){
	goto T858;}
	goto T849;
	goto T858;
T858:;
	if((CMPcddr((V415)))==Cnil){
	goto T848;}
	goto T849;
T849:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T848;
T848:;
	if(((*(LnkLI355))((V415)))!=Cnil){
	goto T860;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T860;
T860:;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T863;}
	base[1]= (*(LnkLI356))((V415));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk397)(Lclptr397);
	return;
	goto T863;
T863:;{object V416;
	V416= (VV[147]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (*(LnkLI356))((V415));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V417= vs_base[0];
	base[1]= ((V416)==(CMPcar(V417))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local entry for function MAKE-PARAMETER-REFERENCES	*/

static object LI48(V423,V424,V425,V426,V427)

object V423;object V424;object V425;object V426;object V427;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	base[0]= (V425);
	{object V428;
	register object V429;
	V428= Cnil;
	V429= Cnil;
	{register object V430;
	register object V431;
	register object V432;
	object V433;
	V430= (V423);
	V431= Cnil;
	V432= (V424);
	V433= Cnil;
	goto T877;
T877:;
	{object V434;
	if(!(((V430))==Cnil)){
	goto T883;}
	goto T871;
	goto T883;
T883:;
	V434= CMPcar((V430));
	V430= CMPcdr((V430));
	V431= (V434);}
	{object V435;
	if(!(((V432))==Cnil)){
	goto T891;}
	goto T871;
	goto T891;
T891:;
	V435= CMPcar((V432));
	V432= CMPcdr((V432));
	V433= (V435);}
	{object V436;
	V436= (((type_of((V431))==t_cons||((V431))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	if(((V436))==Cnil){
	goto T898;}
	goto T878;
	goto T898;
T898:;
	base[1]= CMPcar((V431));
	vs_top=(vs_base=base+1)+1;
	L49(base);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T901;}
	base[1]= VV[201];
	base[2]= (V426);
	base[3]= (V427);
	base[4]= CMPcar((V431));
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk398)();
	vs_top=sup;
	goto T878;
	goto T901;
T901:;
	{object V437;
	V437= CMPcar((V431));
	if(((V428))!=Cnil){
	goto T910;}
	V429= make_cons((V437),Cnil);
	V428= (V429);
	goto T878;
	goto T910;
T910:;
	V439= make_cons((V437),Cnil);
	((V429))->c.c_cdr = /* INLINE-ARGS */V439;
	V438= (V429);
	V429= CMPcdr(V438);}}
	goto T878;
T878:;
	goto T877;}
	goto T871;
T871:;
	{object V440 = (V428);
	VMR41(V440)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-PLIST	*/

static object LI50(V442)

register object V442;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	if(((V442))==((VV[202]->s.s_dbind))){
	goto T917;}
	{object V443;
	object V444;
	V443= (VV[203]->s.s_dbind);
	V444= (VV[202]->s.s_dbind);
	(VV[202]->s.s_dbind)= (V443);
	(VV[203]->s.s_dbind)= (V444);}
	{object V445;
	object V446;
	V445= (VV[204]->s.s_dbind);
	V446= (VV[205]->s.s_dbind);
	(VV[205]->s.s_dbind)= (V445);
	(VV[204]->s.s_dbind)= (V446);}
	{object V447;
	object V448;
	V447= (VV[206]->s.s_dbind);
	V448= (VV[207]->s.s_dbind);
	(VV[207]->s.s_dbind)= (V447);
	(VV[206]->s.s_dbind)= (V448);}
	goto T917;
T917:;
	if(((V442))==((VV[202]->s.s_dbind))){
	goto T940;}
	if(((VV[207]->s.s_dbind))==Cnil){
	goto T940;}
	{object V449;
	object V450;
	object V451;
	V449= (VV[202]->s.s_dbind);
	V450= (VV[208]->s.s_dbind);
	V451= (VV[205]->s.s_dbind);
	base[0]= (V449);
	base[1]= (V450);
	base[2]= (V451);
	vs_top=(vs_base=base+0)+3;
	siLhash_set();
	vs_top=sup;}
	goto T940;
T940:;
	if(((V442))==((VV[202]->s.s_dbind))){
	goto T951;}
	(VV[202]->s.s_dbind)= (V442);
	(VV[207]->s.s_dbind)= Cnil;
	base[0]= (V442);
	base[1]= (VV[208]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	(VV[205]->s.s_dbind)= vs_base[0];
	goto T951;
T951:;
	{object V452 = (VV[205]->s.s_dbind);
	VMR42(V452)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SETF PCL METHOD-FUNCTION-PLIST	*/

static object LI51(V455,V456)

object V455;object V456;
{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	if(((V456))==((VV[202]->s.s_dbind))){
	goto T961;}
	{object V457;
	object V458;
	V457= (VV[203]->s.s_dbind);
	V458= (VV[202]->s.s_dbind);
	(VV[202]->s.s_dbind)= (V457);
	(VV[203]->s.s_dbind)= (V458);}
	{object V459;
	object V460;
	V459= (VV[206]->s.s_dbind);
	V460= (VV[207]->s.s_dbind);
	(VV[207]->s.s_dbind)= (V459);
	(VV[206]->s.s_dbind)= (V460);}
	{object V461;
	object V462;
	V461= (VV[204]->s.s_dbind);
	V462= (VV[205]->s.s_dbind);
	(VV[205]->s.s_dbind)= (V461);
	(VV[204]->s.s_dbind)= (V462);}
	goto T961;
T961:;
	if(((V456))==((VV[202]->s.s_dbind))){
	goto T984;}
	if(((VV[207]->s.s_dbind))==Cnil){
	goto T984;}
	{object V463;
	object V464;
	object V465;
	V463= (VV[202]->s.s_dbind);
	V464= (VV[208]->s.s_dbind);
	V465= (VV[205]->s.s_dbind);
	base[0]= (V463);
	base[1]= (V464);
	base[2]= (V465);
	vs_top=(vs_base=base+0)+3;
	siLhash_set();
	vs_top=sup;}
	goto T984;
T984:;
	(VV[202]->s.s_dbind)= (V456);
	(VV[207]->s.s_dbind)= Ct;
	(VV[205]->s.s_dbind)= (V455);
	{object V466 = (VV[205]->s.s_dbind);
	VMR43(V466)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-GET	*/

static object LI52(object V468,object V467,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB44 VMS44 VMV44
	{object V469;
	object V470;
	object V471;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V469= V468;
	V470= V467;
	narg = narg - 2;
	if (narg <= 0) goto T1000;
	else {
	V471= first;}
	--narg; goto T1001;
	goto T1000;
T1000:;
	V471= Cnil;
	goto T1001;
T1001:;
	base[0]= (*(LnkLI399))((V469));
	base[1]= (V470);
	base[2]= (V471);
	vs_top=(vs_base=base+0)+3;
	Lgetf();
	vs_top=sup;
	{object V472 = vs_base[0];
	VMR44(V472)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SETF PCL METHOD-FUNCTION-GET	*/

static object LI53(V476,V477,V478)

object V476;object V477;object V478;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	{object V482;
	base[0]= (*(LnkLI399))(V477);
	base[1]= V476;
	base[2]= V478;
	vs_top=(vs_base=base+0)+3;
	siLput_f();
	vs_top=sup;
	V482= vs_base[0];
	(void)((*(LnkLI400))((V482),V477));
	{object V484 = V476;
	VMR45(V484)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-PV-TABLE	*/

static object LI54(V486)

object V486;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{object V487 = (VFUN_NARGS=2,(*(LnkLI211))((V486),VV[209]));
	VMR46(V487)}
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-METHOD	*/

static object LI55(V489)

object V489;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	{object V490 = (VFUN_NARGS=2,(*(LnkLI211))((V489),VV[210]));
	VMR47(V490)}
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-NEEDS-NEXT-METHODS-P	*/

static object LI56(V492)

object V492;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{object V493 = (VFUN_NARGS=3,(*(LnkLI211))((V492),VV[57],Ct));
	VMR48(V493)}
	return Cnil;
}
/*	macro definition for METHOD-FUNCTION-CLOSURE-GENERATOR	*/

static void L57()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V494=base[0]->c.c_cdr;
	if(endp(V494))invalid_macro_call();
	base[2]= (V494->c.c_car);
	V494=V494->c.c_cdr;
	if(!endp(V494))invalid_macro_call();}
	base[3]= list(3,VV[211],base[2],VV[212]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function LOAD-DEFMETHOD	*/

static object LI58(object V500,object V499,object V498,object V497,object V496,object V495,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB50 VMS50 VMV50
	{object V501;
	register object V502;
	object V503;
	object V504;
	object V505;
	register object V506;
	object V507;
	va_start(ap,first);
	if(narg <6) too_few_arguments();
	V501= V500;
	V502= V499;
	V503= V498;
	V504= V497;
	V505= V496;
	V506= V495;
	narg = narg - 6;
	if (narg <= 0) goto T1011;
	else {
	V507= first;}
	--narg; goto T1012;
	goto T1011;
T1011:;
	V507= Cnil;
	goto T1012;
T1012:;
	if(!(type_of((V502))==t_cons||((V502))==Cnil)){
	goto T1014;}
	(void)((*(LnkLI348))(CMPcadr((V502))));
	goto T1014;
T1014:;
	base[0]= (V506);
	vs_top=(vs_base=base+0)+1;
	Lcopy_tree();
	vs_top=sup;
	V506= vs_base[0];
	{object V508;{object V509;
	base[0]= (V506);
	base[1]= VV[213];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V509= vs_base[0];
	if(V509==Cnil)goto T1021;
	V508= V509;
	goto T1020;
	goto T1021;
T1021:;}
	V508= (*(LnkLI401))((V502),(V503),(V504));
	goto T1020;
T1020:;
	{object V512;
	base[0]= (V506);
	base[1]= V508;
	base[2]= VV[213];
	vs_top=(vs_base=base+0)+3;
	siLput_f();
	vs_top=sup;
	V512= vs_base[0];
	V506= (V512);}
	(void)((VFUN_NARGS=2,(*(LnkLI402))(VV[37],(V508))));
	{object V513 = (*(LnkLI403))((V501),(V502),(V503),(V504),(V505),(V506),(V507));
	VMR50(V513)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LOAD-DEFMETHOD-INTERNAL	*/

static object LI59(V521,V522,V523,V524,V525,V526,V527)

object V521;register object V522;object V523;object V524;object V525;register object V526;object V527;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	if(!(type_of((V522))==t_cons||((V522))==Cnil)){
	goto T1033;}
	(void)((*(LnkLI348))(CMPcadr((V522))));
	goto T1033;
T1033:;
	if(((V527))==Cnil){
	goto T1036;}
	{object V531;
	base[1]= (V526);
	base[2]= VV[28];
	base[3]= Cnil;
	vs_top=(vs_base=base+1)+3;
	Lgetf();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= V527;
	base[2]= VV[29];
	vs_top=(vs_base=base+0)+3;
	siLput_f();
	vs_top=sup;
	V531= vs_base[0];
	{object V532;
	base[0]= (V526);
	base[1]= (V531);
	base[2]= VV[28];
	vs_top=(vs_base=base+0)+3;
	siLput_f();
	vs_top=sup;
	V532= vs_base[0];
	V526= (V532);}}
	goto T1036;
T1036:;
	{object V533;
	base[0]=VV[404]->s.s_gfdef;
	base[1]= (V522);
	base[2]= (V523);
	base[3]= (V524);
	base[4]= (V525);
	base[5]= VV[16];
	V535= make_cons((V524),Cnil);
	V536= listA(3,VV[7],(V522),append((V523),/* INLINE-ARGS */V535));
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V537= vs_base[0];
	base[6]= list(2,/* INLINE-ARGS */V536,V537);
	{object V534;
	V534= (V526);
	 vs_top=base+7;
	 while(V534!=Cnil)
	 {vs_push((V534)->c.c_car);V534=(V534)->c.c_cdr;}
	vs_base=base+1;}
	funcall(base[0]);
	vs_top=sup;
	V533= vs_base[0];
	if(((V521))==(VV[20])){
	goto T1062;}
	V538= (VFUN_NARGS=2,(*(LnkLI290))((V521),Cnil));
	V539= (*(LnkLI363))((V533));
	if((/* INLINE-ARGS */V538)==(/* INLINE-ARGS */V539)){
	goto T1062;}
	base[0]= (VV[214]->s.s_dbind);
	base[1]= VV[215];
	base[2]= (V523);
	base[3]= (V524);
	base[4]= (V522);
	base[5]= (V521);
	base[7]= (*(LnkLI363))((V533));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+0)+7;
	Lformat();
	vs_top=sup;
	goto T1062;
T1062:;
	{object V540 = (V533);
	VMR51(V540)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-METHOD-SPEC	*/

static object LI60(V544,V545,V546)

object V544;object V545;object V546;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	V547= make_cons((V546),Cnil);
	{object V548 = listA(3,VV[37],(V544),append((V545),/* INLINE-ARGS */V547));
	VMR52(V548)}
	return Cnil;
}
/*	local entry for function INITIALIZE-METHOD-FUNCTION	*/

static object LI61(object V549,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB53 VMS53 VMV53
	{register object V550;
	object V551;
	object V552;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V550= V549;
	narg = narg - 1;
	if (narg <= 0) goto T1075;
	else {
	V551= first;}
	if (--narg <= 0) goto T1076;
	else {
	V552= va_arg(ap,object);}
	--narg; goto T1077;
	goto T1075;
T1075:;
	V551= Cnil;
	goto T1076;
T1076:;
	V552= Cnil;
	goto T1077;
T1077:;
	{register object V553;
	register object V554;
	object V555;
	register object V556;
	base[5]= (V550);
	base[6]= VV[36];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	base[0]= vs_base[0];
	base[5]= (V550);
	base[6]= VV[213];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V553= vs_base[0];
	base[5]= (V550);
	base[6]= VV[28];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V554= vs_base[0];
	base[5]= (V554);
	base[6]= VV[29];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V555= vs_base[0];
	V556= Cnil;
	base[5]= (V550);
	base[6]= VV[216];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	base[4]= vs_base[0];
	if(((V553))==Cnil){
	goto T1096;}
	if((base[0])==Cnil){
	goto T1099;}
	base[5]= base[0];
	base[6]= (V553);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk346)();
	vs_top=sup;
	base[0]= vs_base[0];
	goto T1099;
T1099:;
	if((base[4])==Cnil){
	goto T1096;}
	{object V557;{object V559;
	{object V560 =(CMPcar((V553)))->s.s_plist;
	 object ind= VV[217];
	while(V560!=Cnil){
	if(V560->c.c_car==ind){
	V559= (V560->c.c_cdr->c.c_car);
	goto T1110;
	}else V560=V560->c.c_cdr->c.c_cdr;}
	V559= Cnil;}
	goto T1110;
T1110:;
	if(V559==Cnil)goto T1109;
	V558= V559;
	goto T1108;
	goto T1109;
T1109:;}
	V561= CMPcar((V553));
	base[6]= Cnil;
	base[7]= VV[218];
	base[8]= CMPcar((V553));
	vs_top=(vs_base=base+6)+3;
	Lformat();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (VV[219]->s.s_dbind);
	vs_top=(vs_base=base+5)+2;
	Lintern();
	vs_top=sup;
	V562= vs_base[0];
	V558= sputprop(/* INLINE-ARGS */V561,VV[217],V562);
	goto T1108;
T1108:;
	V557= make_cons(V558,CMPcdr((V553)));
	base[5]= base[4];
	base[6]= (V557);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk346)();
	vs_top=sup;
	if((base[0])!=Cnil){
	goto T1096;}
	base[5]= VV[220];
	base[6]= (V557);
	vs_top=(vs_base=base+5)+2;
	L62(base);
	vs_top=sup;}
	goto T1096;
T1096:;
	if(((V554))==Cnil){
	goto T1125;}
	{object V563;
	object V564;
	base[5]= (V554);
	base[6]= VV[59];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V563= vs_base[0];
	base[5]= (V554);
	base[6]= VV[60];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V564= vs_base[0];
	if(((V563))!=Cnil){
	goto T1134;}
	if(((V564))==Cnil){
	goto T1127;}
	goto T1134;
T1134:;
	V556= (VFUN_NARGS=4,(*(LnkLI405))(VV[59],(V563),VV[60],(V564)));
	if(((V556))==Cnil){
	goto T1140;}
	base[5]= (V555);
	base[6]= (V556);
	vs_top=(vs_base=base+5)+2;
	Lset();
	vs_top=sup;
	goto T1140;
T1140:;
	base[5]= VV[209];
	base[6]= (V556);
	vs_top=(vs_base=base+5)+2;
	L62(base);
	vs_top=sup;}
	goto T1127;
T1127:;
	goto T1149;
T1149:;
	if(((V554))!=Cnil){
	goto T1151;}
	goto T1147;
	goto T1151;
T1151:;
	{register object V565;
	V565= CMPcar((V554));
	V554= CMPcdr((V554));
	base[5]= (V565);}
	{register object V566;
	V566= CMPcar((V554));
	V554= CMPcdr((V554));
	base[6]= (V566);}
	vs_top=(vs_base=base+5)+2;
	L62(base);
	vs_top=sup;
	goto T1149;
	goto T1147;
T1147:;
	if(((V552))==Cnil){
	goto T1163;}
	base[5]= VV[210];
	base[6]= (V552);
	vs_top=(vs_base=base+5)+2;
	L62(base);
	vs_top=sup;
	goto T1163;
T1163:;
	if(((V551))==Cnil){
	goto T1169;}
	if(base[0]!=Cnil){
	{object V567 = base[0];
	VMR53(V567)}}
	{object V568 = (*(LnkLI406))(base[4]);
	VMR53(V568)}
	goto T1169;
T1169:;
	{object V569 = Cnil;
	VMR53(V569)}
	goto T1125;
T1125:;
	{object V570 = Cnil;
	VMR53(V570)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for ANALYZE-LAMBDA-LIST	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM54; VC54
	vs_check;
	{object V571;
	check_arg(1);
	V571=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V572;
	register object V573;
	object V574;
	object V575;
	object V576;
	register object V577;
	register object V578;
	register object V579;
	V572= small_fixnum(0);
	V573= small_fixnum(0);
	V574= Cnil;
	V575= Cnil;
	V576= Cnil;
	V577= Cnil;
	V578= Cnil;
	V579= VV[181];
	{register object V580;
	register object V581;
	V580= (V571);
	V581= CMPcar((V580));
	goto T1175;
T1175:;
	if(!(((V580))==Cnil)){
	goto T1176;}
	goto T1171;
	goto T1176;
T1176:;
	{register object x= (V581),V582= VV[183];
	while(V582!=Cnil)
	if(x==(V582->c.c_car)){
	goto T1183;
	}else V582=V582->c.c_cdr;
	goto T1182;}
	goto T1183;
T1183:;
	{object V583= (V581);
	if((V583!= VV[407]))goto T1184;
	V579= VV[184];
	goto T1180;
	goto T1184;
T1184:;
	if((V583!= VV[62]))goto T1186;
	V574= Ct;
	V579= VV[185];
	goto T1180;
	goto T1186;
T1186:;
	if((V583!= VV[63]))goto T1190;
	V576= Ct;
	goto T1180;
	goto T1190;
T1190:;
	if((V583!= VV[170]))goto T1192;
	V575= Ct;
	V579= VV[186];
	goto T1180;
	goto T1192;
T1192:;
	if((V583!= VV[56]))goto T1196;
	goto T1171;
	goto T1196;
T1196:;
	base[2]= VV[221];
	base[3]= (V581);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	vs_top=sup;
	goto T1180;}
	goto T1182;
T1182:;
	{object V584= (V579);
	if((V584!= VV[181]))goto T1199;
	V572= number_plus((V572),small_fixnum(1));
	goto T1180;
	goto T1199;
T1199:;
	if((V584!= VV[184]))goto T1201;
	V573= number_plus((V573),small_fixnum(1));
	goto T1180;
	goto T1201;
T1201:;
	if((V584!= VV[185]))goto T1203;
	{object V585;
	base[3]= (V581);
	vs_top=(vs_base=base+3)+1;
	L64(base);
	vs_top=sup;
	V585= vs_base[0];
	V577= make_cons((V585),(V577));}
	V578= make_cons(V581,(V578));
	goto T1180;
	goto T1203;
T1203:;
	if((V584!= VV[186]))goto T1209;
	goto T1180;
	goto T1209;
T1209:;
	FEerror("The ECASE key value ~s is illegal.",1,V584);
	goto T1180;}
	goto T1180;
T1180:;
	V580= CMPcdr((V580));
	V581= CMPcar((V580));
	goto T1175;}
	goto T1171;
T1171:;
	base[1]= (V572);
	base[2]= (V573);
	base[3]= (V574);
	base[4]= (V575);
	base[5]= (V576);
	base[6]= reverse((V577));
	base[7]= reverse((V578));
	vs_top=(vs_base=base+1)+7;
	return;}
	}
}
/*	local entry for function KEYWORD-SPEC-NAME	*/

static object LI65(V588)

object V588;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{object V589;
	if(!(type_of((V588))!=t_cons)){
	goto T1224;}
	V589= (V588);
	goto T1222;
	goto T1224;
T1224:;
	V589= CMPcar((V588));
	goto T1222;
T1222:;
	if(!(type_of((V589))!=t_cons)){
	goto T1227;}
	base[0]= symbol_name((V589));
	base[2]= VV[222];
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V590 = vs_base[0];
	VMR55(V590)}
	goto T1227;
T1227:;
	{object V591 = CMPcar((V589));
	VMR55(V591)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FTYPE-DECLARATION-FROM-LAMBDA-LIST	*/

static object LI66(V593)

object V593;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{object V594;
	object V595;
	object V596;
	object V597;
	object V598;
	object V599;
	object V600;
	base[0]= (V593);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk408)();
	if(vs_base>=vs_top){vs_top=sup;goto T1234;}
	V594= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1235;}
	V595= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1236;}
	V596= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1237;}
	V597= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1238;}
	V598= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1239;}
	V599= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1240;}
	V600= vs_base[0];
	vs_top=sup;
	goto T1241;
	goto T1234;
T1234:;
	V594= Cnil;
	goto T1235;
T1235:;
	V595= Cnil;
	goto T1236;
T1236:;
	V596= Cnil;
	goto T1237;
T1237:;
	V597= Cnil;
	goto T1238;
T1238:;
	V598= Cnil;
	goto T1239;
T1239:;
	V599= Cnil;
	goto T1240;
T1240:;
	V600= Cnil;
	goto T1241;
T1241:;
	{object V601;
	{object V602;
	object V603= (V599);
	if(V603==Cnil){
	V601= Cnil;
	goto T1242;}
	base[1]=V602=MMcons(Cnil,Cnil);
	goto T1243;
T1243:;
	(V602->c.c_car)= (*(LnkLI409))((V603->c.c_car));
	if((V603=MMcdr(V603))==Cnil){
	V601= base[1];
	goto T1242;}
	V602=MMcdr(V602)=MMcons(Cnil,Cnil);
	goto T1243;}
	goto T1242;
T1242:;
	base[2]= (V594);
	base[3]= VV[223];
	base[4]= Ct;
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	base[1]= vs_base[0];
	if(!(number_compare(small_fixnum(0),(V595))<0)){
	goto T1252;}
	base[3]= (V595);
	base[4]= VV[223];
	base[5]= Ct;
	vs_top=(vs_base=base+3)+3;
	Lmake_list();
	vs_top=sup;
	V605= vs_base[0];
	base[2]= append(VV[224],V605);
	goto T1250;
	goto T1252;
T1252:;
	base[2]= Cnil;
	goto T1250;
T1250:;
	if(((V597))==Cnil){
	goto T1260;}
	base[3]= VV[225];
	goto T1258;
	goto T1260;
T1260:;
	base[3]= Cnil;
	goto T1258;
T1258:;
	if(((V596))==Cnil){
	goto T1264;}
	base[5]= VV[226];
	{object V606;
	object V607= (V601);
	if(V607==Cnil){
	base[6]= Cnil;
	goto T1267;}
	base[7]=V606=MMcons(Cnil,Cnil);
	goto T1268;
T1268:;
	(V606->c.c_car)= list(2,(V607->c.c_car),Ct);
	if((V607=MMcdr(V607))==Cnil){
	base[6]= base[7];
	goto T1267;}
	V606=MMcdr(V606)=MMcons(Cnil,Cnil);
	goto T1268;}
	goto T1267;
T1267:;
	if(((V598))==Cnil){
	goto T1272;}
	base[7]= VV[227];
	goto T1270;
	goto T1272;
T1272:;
	base[7]= Cnil;
	goto T1270;
T1270:;
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	base[4]= vs_base[0];
	goto T1262;
	goto T1264;
T1264:;
	base[4]= Cnil;
	goto T1262;
T1262:;
	vs_top=(vs_base=base+1)+4;
	Lappend();
	vs_top=sup;
	V604= vs_base[0];
	{object V609 = list(3,VV[34],V604,VV[228]);
	VMR56(V609)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PROCLAIM-DEFGENERIC	*/

static object LI67(V612,V613)

register object V612;object V613;
{	 VMB57 VMS57 VMV57
	goto TTL;
TTL:;
	if(!(type_of((V612))==t_cons)){
	goto T1274;}
	V612= (*(LnkLI410))(CMPcadr((V612)));
	goto T1274;
T1274:;
	{object V614 = sputprop((V612),VV[229],Ct);
	VMR57(V614)}
	return Cnil;
}
/*	function definition for ENSURE-GENERIC-FUNCTION	*/

static void L68()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_check;
	{register object V615;
	object V616;
	object V617;
	if(vs_top-vs_base<1) too_few_arguments();
	parse_key(vs_base+1,TRUE,TRUE,1,VV[295]);
	V615=(base[0]);
	vs_top=sup;
	V616=(base[1]);
	V617=(base[2]);
	{object V618;
	if(((*(LnkLI355))((V615)))!=Cnil){
	goto T1279;}
	V618= Cnil;
	goto T1278;
	goto T1279;
T1279:;
	V618= (*(LnkLI356))((V615));
	goto T1278;
T1278:;
	if(((V618))==Cnil){
	goto T1282;}
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1282;}
	base[4]= (V618);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk357)(Lclptr357);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1282;}
	base[4]= (*(LnkLI411))((V615));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1282;
T1282:;
	base[4]=VV[412]->s.s_gfdef;
	base[5]= (V618);
	base[6]= (V615);
	{object V619;
	V619= (V616);
	 vs_top=base+7;
	 while(V619!=Cnil)
	 {vs_push((V619)->c.c_car);V619=(V619)->c.c_cdr;}
	vs_base=base+5;}
	funcall(base[4]);
	return;}
	}
}
/*	local entry for function GENERIC-CLOBBERS-FUNCTION	*/

static object LI69(V621)

object V621;
{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	base[0]= VV[230];
	base[1]= (V621);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V622 = vs_base[0];
	VMR59(V622)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-GF-P	*/

static object LI70(V624)

register object V624;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;{object V625;
	V625= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V624);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V626= vs_base[0];
	if((V625)==(CMPcar(V626))){
	goto T1294;}}
	{object V627 = Cnil;
	VMR60(V627)}
	goto T1294;
T1294:;
	if(type_of(V624)==t_structure){
	goto T1303;}
	goto T1301;
	goto T1303;
T1303:;
	if(!(((V624)->str.str_def)==(VV[231]))){
	goto T1301;}
	V628= STREF(object,(V624),4);
	goto T1299;
	goto T1301;
T1301:;{object V630;
	V630= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V624);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V631= vs_base[0];
	if(!((V630)==(CMPcar(V631)))){
	goto T1306;}}
	V628= CMPcar(((V624))->cc.cc_turbo[12]);
	goto T1299;
	goto T1306;
T1306:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V628= vs_base[0];
	goto T1299;
T1299:;
	{object V632 = (((V628)->v.v_self[fix((VV[232]->s.s_dbind))])==((VV[132]->s.s_dbind))?Ct:Cnil);
	VMR60(V632)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for EARLY-GF-METHODS	*/

static void L71()
{register object *base=vs_base;
	register object *sup=base+VM61; VC61
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V633=base[0]->c.c_cdr;
	if(endp(V633))invalid_macro_call();
	base[2]= (V633->c.c_car);
	V633=V633->c.c_cdr;
	if(!endp(V633))invalid_macro_call();}
	base[3]= list(3,VV[233],list(2,VV[234],base[2]),VV[235]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for EARLY-GF-ARG-INFO	*/

static void L72()
{register object *base=vs_base;
	register object *sup=base+VM62; VC62
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V634=base[0]->c.c_cdr;
	if(endp(V634))invalid_macro_call();
	base[2]= (V634->c.c_car);
	V634=V634->c.c_cdr;
	if(!endp(V634))invalid_macro_call();}
	base[3]= list(3,VV[233],list(2,VV[234],base[2]),VV[236]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function __si::MAKE-ARG-INFO	*/

static object LI73(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB63 VMS63 VMV63
	{object V635;
	object V636;
	object V637;
	object V638;
	object V639;
	object V640;
	object V641;
	object V642;
	object V643;
	object V644;
	object V645;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI73key,first,ap);
	V635=(Vcs[0]);
	V636=(Vcs[1]);
	V637=(Vcs[2]);
	V638=(Vcs[3]);
	V639=(Vcs[4]);
	V640=(Vcs[5]);
	V641=(Vcs[6]);
	V642=(Vcs[7]);
	V643=(Vcs[8]);
	if(Vcs[9]==0){
	V644= Ct;
	}else{
	V644=(Vcs[9]);}
	V645=(Vcs[10]);
	base[0]= VV[238];
	base[1]= (V635);
	base[2]= (V636);
	base[3]= (V637);
	base[4]= (V638);
	base[5]= (V639);
	base[6]= (V640);
	base[7]= (V641);
	base[8]= (V642);
	base[9]= (V643);
	base[10]= (V644);
	base[11]= (V645);
	vs_top=(vs_base=base+0)+12;
	siLmake_structure();
	vs_top=sup;
	{object V646 = vs_base[0];
	VMR63(V646)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function MAKE-ARG-INFO	*/

static object LI74()

{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	base[0]= VV[238];
	base[1]= VV[237];
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	base[6]= Cnil;
	base[7]= Cnil;
	base[8]= Cnil;
	base[9]= Cnil;
	base[10]= Ct;
	base[11]= Cnil;
	vs_top=(vs_base=base+0)+12;
	siLmake_structure();
	vs_top=sup;
	{object V658 = vs_base[0];
	VMR64(V658)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ARG-INFO-VALID-P	*/

static object LI75(V660)

object V660;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	{object V661 = ((((STREF(object,(V660),12))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR65(V661)}
	return Cnil;
}
/*	local entry for function ARG-INFO-APPLYP	*/

static object LI76(V663)

object V663;
{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	if(!((fix(STREF(object,(V663),12)))>0)){
	goto T1337;}
	{object V664 = Ct;
	VMR66(V664)}
	goto T1337;
T1337:;
	{object V665 = STREF(object,(V663),16);
	VMR66(V665)}
	return Cnil;
}
/*	local entry for function ARG-INFO-NUMBER-REQUIRED	*/

static object LI77(V667)

object V667;
{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	{long V668 = (long)length(STREF(object,(V667),8));
	VMR67((object)V668)}
}
/*	local entry for function ARG-INFO-NKEYS	*/

static object LI78(V670)

object V670;
{	 VMB68 VMS68 VMV68
	goto TTL;
TTL:;
	base[0]= VV[424];
	base[1]= STREF(object,(V670),8);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk425)();
	vs_top=sup;
	{object V671 = vs_base[0];
	VMR68(V671)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for ESETF	*/

static void L79()
{register object *base=vs_base;
	register object *sup=base+VM69; VC69
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V672=base[0]->c.c_cdr;
	if(endp(V672))invalid_macro_call();
	base[2]= (V672->c.c_car);
	V672=V672->c.c_cdr;
	if(endp(V672))invalid_macro_call();
	base[3]= (V672->c.c_car);
	V672=V672->c.c_cdr;
	if(!endp(V672))invalid_macro_call();}
	{object V673;
	base[4]= VV[239];
	vs_top=(vs_base=base+4)+1;
	Lgensym();
	vs_top=sup;
	V673= vs_base[0];
	V674= list(2,(V673),base[3]);
	V675= make_cons(/* INLINE-ARGS */V674,Cnil);
	V676= list(3,VV[241],base[2],(V673));
	base[4]= list(3,VV[96],/* INLINE-ARGS */V675,list(3,VV[240],/* INLINE-ARGS */V676,list(3,VV[30],base[2],(V673))));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	local entry for function SET-ARG-INFO	*/

static object LI80(object V677,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB70 VMS70 VMV70
	{register object V678;
	object V679;
	register object V680;
	register object V681;
	object V682;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V678= V677;
	narg= narg - 1;
	{
	parse_key_new_new(narg,Vcs +1,(struct key *)(void *)&LI80key,first,ap);
	V679=(Vcs[1]);
	if(Vcs[2]==0){
	V680= Cnil;
	V681= Cnil;
	}else{
	V680=(Vcs[2]);
	V681= Ct;}
	V682=(Vcs[3]);
	{register object V683;
	object V684;
	object V685;
	object V686;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1346;}
	base[4]= (V678);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	V683= vs_base[0];
	goto T1344;
	goto T1346;
T1346:;
	if(type_of(V678)==t_structure){
	goto T1353;}
	goto T1351;
	goto T1353;
T1353:;
	if(!(((V678)->str.str_def)==(VV[242]))){
	goto T1351;}
	V687= STREF(object,(V678),4);
	goto T1349;
	goto T1351;
T1351:;{object V689;
	V689= (VV[147]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V678);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V690= vs_base[0];
	if(!((V689)==(CMPcar(V690)))){
	goto T1356;}}
	V687= CMPcar(((V678))->cc.cc_turbo[12]);
	goto T1349;
	goto T1356;
T1356:;
	base[4]= VV[148];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V687= vs_base[0];
	goto T1349;
T1349:;
	V683= (V687)->v.v_self[fix((VV[236]->s.s_dbind))];
	goto T1344;
T1344:;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1364;}
	base[4]= (V678);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk426)(Lclptr426);
	vs_top=sup;
	V684= vs_base[0];
	goto T1362;
	goto T1364;
T1364:;
	if(type_of(V678)==t_structure){
	goto T1371;}
	goto T1369;
	goto T1371;
T1371:;
	if(!(((V678)->str.str_def)==(VV[243]))){
	goto T1369;}
	V691= STREF(object,(V678),4);
	goto T1367;
	goto T1369;
T1369:;{object V693;
	V693= (VV[147]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V678);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V694= vs_base[0];
	if(!((V693)==(CMPcar(V694)))){
	goto T1374;}}
	V691= CMPcar(((V678))->cc.cc_turbo[12]);
	goto T1367;
	goto T1374;
T1374:;
	base[4]= VV[148];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V691= vs_base[0];
	goto T1367;
T1367:;
	V684= (V691)->v.v_self[fix((VV[235]->s.s_dbind))];
	goto T1362;
T1362:;
	{object V695= STREF(object,(V683),12);
	V685= (type_of(V695)==t_fixnum||type_of(V695)==t_bignum?Ct:Cnil);}
	if((V679)==Cnil){
	V686= Cnil;
	goto T1381;}
	V686= ((CMPcdr((V684)))==Cnil?Ct:Cnil);
	goto T1381;
T1381:;
	if(((V681))!=Cnil){
	goto T1382;}
	if(((V684))==Cnil){
	goto T1382;}
	V680= (*(LnkLI427))((V678));
	goto T1382;
T1382:;
	if(((V681))!=Cnil){
	goto T1389;}
	if(((V686))==Cnil){
	goto T1388;}
	if(!((STREF(object,(V683),0))==(VV[237]))){
	goto T1388;}
	goto T1389;
T1389:;
	{object V696;
	object V697;
	object V698;
	object V699;
	object V700;
	object V701;
	base[4]= (V680);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk408)();
	if(vs_base>=vs_top){vs_top=sup;goto T1397;}
	V696= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1398;}
	V697= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1399;}
	V698= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1400;}
	V699= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1401;}
	V700= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1402;}
	V701= vs_base[0];
	vs_top=sup;
	goto T1403;
	goto T1397;
T1397:;
	V696= Cnil;
	goto T1398;
T1398:;
	V697= Cnil;
	goto T1399;
T1399:;
	V698= Cnil;
	goto T1400;
T1400:;
	V699= Cnil;
	goto T1401;
T1401:;
	V700= Cnil;
	goto T1402;
T1402:;
	V701= Cnil;
	goto T1403;
T1403:;
	if(((V684))==Cnil){
	goto T1404;}
	if(((V686))!=Cnil){
	goto T1404;}
	{object V702;
	object V703;
	object V704;
	V702= CMPmake_fixnum((long)(*(LnkLI394))((V683)));
	V703= STREF(object,(V683),12);
	V704= STREF(object,(V683),16);
	if(!(number_compare((V696),(V702))==0)){
	goto T1412;}
	if(!(number_compare((V697),(V703))==0)){
	goto T1412;}
	if((V698)!=Cnil){
	V705= (V698);
	goto T1418;}
	V705= (V699);
	goto T1418;
T1418:;
	if((V705)==((V704))){
	goto T1404;}
	goto T1412;
T1412:;
	base[4]= VV[244];
	base[5]= (V680);
	base[6]= (V678);
	vs_top=(vs_base=base+4)+3;
	Lerror();
	vs_top=sup;}
	goto T1404;
T1404:;
	if(((V681))==Cnil){
	goto T1422;}
	if(equal(STREF(object,(V683),0),V680)){
	goto T1422;}
	V707= Ct;
	STSET(object,(V683),0, V680);
	(void)(V680);
	goto T1422;
T1422:;
	if(((V681))!=Cnil){
	goto T1428;}
	if(((V682))!=Cnil){
	goto T1428;}
	if((STREF(object,(V683),4))!=Cnil){
	goto T1427;}
	goto T1428;
T1428:;
	{object V708;
	V708= (*(LnkLI428))((V680),(V696),(V682));
	if(equal(STREF(object,(V683),4),(V708))){
	goto T1427;}
	V709= Ct;
	STSET(object,(V683),4, (V708));
	(void)((V708));}
	goto T1427;
T1427:;
	{object V710;
	base[4]= (V696);
	vs_top=(vs_base=base+4)+1;
	Lmake_list();
	vs_top=sup;
	V710= vs_base[0];
	if(equal(STREF(object,(V683),8),(V710))){
	goto T1437;}
	V711= Ct;
	STSET(object,(V683),8, (V710));
	(void)((V710));}
	goto T1437;
T1437:;
	if(equal(STREF(object,(V683),12),V697)){
	goto T1442;}
	V713= Ct;
	STSET(object,(V683),12, V697);
	(void)(V697);
	goto T1442;
T1442:;
	{object V714;
	if((V698)!=Cnil){
	V715= (V698);
	goto T1447;}
	V715= (V699);
	goto T1447;
T1447:;
	V714= ((((V715)==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	if(equal(STREF(object,(V683),16),(V714))){
	goto T1445;}
	V716= Ct;
	STSET(object,(V683),16, (V714));
	(void)((V714));}
	goto T1445;
T1445:;
	{object V717;
	if(((V681))==Cnil){
	goto T1452;}
	if(((V700))==Cnil){
	goto T1455;}
	V717= Ct;
	goto T1450;
	goto T1455;
T1455:;
	V717= (V701);
	goto T1450;
	goto T1452;
T1452:;
	V717= STREF(object,(V683),16);
	goto T1450;
T1450:;
	if(equal(STREF(object,(V683),20),(V717))){
	goto T1388;}
	V718= Ct;
	STSET(object,(V683),20, (V717));
	(void)((V717));}}
	goto T1388;
T1388:;
	if(((V679))==Cnil){
	goto T1459;}
	base[4]= (V678);
	base[5]= (V683);
	base[6]= (V679);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk429)();
	vs_top=sup;
	goto T1459;
T1459:;
	(void)((*(LnkLI430))((V678),(V683),(V679),(V684),(V685),(V686)));
	{object V719 = (V683);
	VMR70(V719)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for CHECK-METHOD-ARG-INFO	*/

static void L81()
{register object *base=vs_base;
	register object *sup=base+VM71; VC71
	vs_check;
	{register object V720;
	check_arg(3);
	V720=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V721;
	object V722;
	object V723;
	object V724;
	object V725;
	if(!(type_of(base[2])==t_cons)){
	goto T1469;}
	base[4]= (*(LnkLI431))(base[2]);
	goto T1467;
	goto T1469;
T1469:;
	base[5]= base[2];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk48)(Lclptr48);
	vs_top=sup;
	base[4]= vs_base[0];
	goto T1467;
T1467:;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk408)();
	if(vs_base>=vs_top){vs_top=sup;goto T1472;}
	V721= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1473;}
	V722= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1474;}
	V723= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1475;}
	V724= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1476;}
	V725= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1477;}
	base[3]=MMcons(vs_base[0],Cnil);
	vs_top=sup;
	goto T1478;
	goto T1472;
T1472:;
	V721= Cnil;
	goto T1473;
T1473:;
	V722= Cnil;
	goto T1474;
T1474:;
	V723= Cnil;
	goto T1475;
T1475:;
	V724= Cnil;
	goto T1476;
T1476:;
	V725= Cnil;
	goto T1477;
T1477:;
	base[3]=MMcons(Cnil,Cnil);
	goto T1478;
T1478:;
	{object V726;
	object V727;
	object V728;
	object V729;
	V726= CMPmake_fixnum((long)(*(LnkLI394))((V720)));
	V727= STREF(object,(V720),12);
	V728= STREF(object,(V720),16);
	V729= STREF(object,(V720),20);
	if(number_compare((V721),(V726))==0){
	goto T1483;}
	base[4]= VV[245];
	base[6]= (V721);
	base[7]= (V726);
	vs_top=(vs_base=base+6)+2;
	L83(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L82(base);
	vs_top=sup;
	goto T1483;
T1483:;
	if(number_compare((V722),(V727))==0){
	goto T1490;}
	base[4]= VV[246];
	base[6]= (V722);
	base[7]= (V727);
	vs_top=(vs_base=base+6)+2;
	L83(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L82(base);
	vs_top=sup;
	goto T1490;
T1490:;
	if((V723)!=Cnil){
	V730= (V723);
	goto T1500;}
	V730= (V724);
	goto T1500;
T1500:;
	if((V730)==((V728))){
	goto T1497;}
	base[4]= VV[247];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T1497;
T1497:;
	if(!(type_of((V729))==t_cons)){
	goto T1503;}
	if(((V724))==Cnil){
	goto T1507;}
	if(((V723))==Cnil){
	goto T1506;}
	goto T1507;
T1507:;
	if(((V725))!=Cnil){
	goto T1506;}
	base[4]= 
	make_cclosure_new(LC133,Cnil,base[3],Cdata);
	base[5]= (V729);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk366)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1506;}
	base[4]= VV[248];
	base[5]= (V729);
	vs_top=(vs_base=base+4)+2;
	L82(base);
	return;
	goto T1506;
T1506:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1503;
T1503:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}}
	}
}
/*	local entry for function SET-ARG-INFO1	*/

static object LI84(V737,V738,V739,V740,V741,V742)

object V737;object V738;object V739;object V740;object V741;object V742;
{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V743;
	object V744;
	object V745;
	register object V746;
	if((V740)==Cnil){
	V743= Cnil;
	goto T1519;}
	if((CMPcdr((V740)))!=Cnil){
	goto T1520;}
	V743= Cnil;
	goto T1519;
	goto T1520;
T1520:;
	V743= (V739);
	goto T1519;
T1519:;
	V744= CMPmake_fixnum((long)length(STREF(object,(V738),8)));
	if(((V743))==Cnil){
	goto T1525;}
	V745= STREF(object,(V738),8);
	goto T1523;
	goto T1525;
T1525:;
	base[4]= (V744);
	vs_top=(vs_base=base+4)+1;
	Lmake_list();
	vs_top=sup;
	V745= vs_base[0];
	goto T1523;
T1523:;
	if(((V743))==Cnil){
	goto T1530;}
	V746= STREF(object,(V738),24);
	goto T1528;
	goto T1530;
T1530:;
	V746= Cnil;
	goto T1528;
T1528:;
	if(((*(LnkLI432))((V738)))==Cnil){
	goto T1518;}
	{register object V747;
	register object V748;
	if(((V739))==Cnil){
	goto T1537;}
	V747= make_cons((V739),Cnil);
	goto T1535;
	goto T1537;
T1537:;
	V747= (V740);
	goto T1535;
T1535:;
	V748= CMPcar((V747));
	goto T1541;
T1541:;
	if(!(((V747))==Cnil)){
	goto T1542;}
	goto T1534;
	goto T1542;
T1542:;
	{object V749;
	register object V750;
	register object V751;
	if(((VV[17]->s.s_dbind))==(VV[18])){
	goto T1548;}
	if(type_of((V748))==t_cons){
	goto T1549;}
	goto T1548;
T1548:;
	base[9]= (V748);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk433)(Lclptr433);
	vs_top=sup;
	V749= vs_base[0];
	goto T1547;
	goto T1549;
T1549:;
	V749= (VFUN_NARGS=2,(*(LnkLI434))((V748),Ct));
	goto T1547;
T1547:;
	if(((VV[17]->s.s_dbind))==(VV[18])){
	goto T1555;}
	if(type_of((V748))==t_cons){
	goto T1556;}
	goto T1555;
T1555:;
	V750= (*(LnkLI363))((V748));
	goto T1554;
	goto T1556;
T1556:;
	V750= (*(LnkLI435))((V748));
	goto T1554;
T1554:;
	if(((V750))==Cnil){
	goto T1562;}
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1561;}
	base[9]= (V737);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk436)(Lclptr436);
	vs_top=sup;
	V752= vs_base[0];
	if(!((V752)==((VV[252]->s.s_dbind)))){
	goto T1562;}
	goto T1561;
T1561:;
	if(!(((V750))==((VV[253]->s.s_dbind)))){
	goto T1571;}
	V751= VV[254];
	goto T1560;
	goto T1571;
T1571:;
	if(!(((V750))==((VV[255]->s.s_dbind)))){
	goto T1574;}
	V751= VV[256];
	goto T1560;
	goto T1574;
T1574:;
	if(!(((V750))==((VV[257]->s.s_dbind)))){
	goto T1577;}
	V751= VV[258];
	goto T1560;
	goto T1577;
T1577:;
	V751= Cnil;
	goto T1560;
	goto T1562;
T1562:;
	V751= Cnil;
	goto T1560;
T1560:;
	base[10]=VV[437]->s.s_gfdef;
	{object V753;
	object V754= (V745);
	object V755= (V749);
	if(V754==Cnil||V755==Cnil){
	V745= Cnil;
	goto T1580;}
	base[9]=V753=MMcons(Cnil,Cnil);
	goto T1581;
T1581:;
	base[11]= (V754->c.c_car);
	base[12]= (V755->c.c_car);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk437)();
	vs_top=sup;
	(V753->c.c_car)= vs_base[0];
	if((V754=MMcdr(V754))==Cnil||(V755=MMcdr(V755))==Cnil){
	V745= base[9];
	goto T1580;}
	V753=MMcdr(V753)=MMcons(Cnil,Cnil);
	goto T1581;}
	goto T1580;
T1580:;
	if(((V746))!=Cnil){
	goto T1587;}
	V746= (V751);
	goto T1585;
	goto T1587;
T1587:;
	if(!(((V746))==((V751)))){
	goto T1590;}
	goto T1585;
	goto T1590;
T1590:;
	V746= Cnil;
	goto T1585;
T1585:;}
	V747= CMPcdr((V747));
	V748= CMPcar((V747));
	goto T1541;}
	goto T1534;
T1534:;
	if(equal(STREF(object,(V738),8),V745)){
	goto T1597;}
	V757= Ct;
	STSET(object,(V738),8, V745);
	(void)(V745);
	goto T1597;
T1597:;
	if(equal(STREF(object,(V738),24),V746)){
	goto T1518;}
	V759= Ct;
	STSET(object,(V738),24, V746);
	(void)(V746);}
	goto T1518;
T1518:;
	if(((V741))==Cnil){
	goto T1603;}
	if(((V742))==Cnil){
	goto T1602;}
	goto T1603;
T1603:;
	{object V760;
	object V761;
	if(((*(LnkLI438))((V737)))==Cnil){
	goto T1609;}
	base[0]= Ct;
	base[1]= Ct;
	vs_top=(vs_base=base+0)+2;
	goto T1607;
	goto T1609;
T1609:;
	base[0]= (V737);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk439)();
	goto T1607;
T1607:;
	if(vs_base>=vs_top){vs_top=sup;goto T1614;}
	V760= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1615;}
	V761= vs_base[0];
	vs_top=sup;
	goto T1616;
	goto T1614;
T1614:;
	V760= Cnil;
	goto T1615;
T1615:;
	V761= Cnil;
	goto T1616;
T1616:;
	if(equal(STREF(object,(V738),32),V760)){
	goto T1617;}
	V763= Ct;
	STSET(object,(V738),32, V760);
	(void)(V760);
	goto T1617;
T1617:;
	if(equal(STREF(object,(V738),36),V761)){
	goto T1620;}
	V765= Ct;
	STSET(object,(V738),36, V761);
	(void)(V761);
	goto T1620;
T1620:;
	if((STREF(object,(V738),36))!=Cnil){
	goto T1602;}
	if(equal(STREF(object,(V738),24),Ct)){
	goto T1602;}
	V767= Ct;
	STSET(object,(V738),24, Ct);
	(void)(Ct);}
	goto T1602;
T1602:;
	if(((V741))!=Cnil){
	goto T1627;}
	{object V768;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1632;}
	base[0]= (V737);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk440)(Lclptr440);
	vs_top=sup;
	V768= vs_base[0];
	goto T1630;
	goto T1632;
T1632:;
	V768= (*(LnkLI441))((V737));
	goto T1630;
T1630:;
	{object V769;
	{object V770;
	object V771;
	if(!(type_of((V768))!=t_cons)){
	goto T1638;}
	V770= (V768);
	goto T1636;
	goto T1638;
T1638:;
	V770= CMPcadr((V768));
	goto T1636;
T1636:;{object V772;
	V772= (VV[219]->s.s_dbind);
	base[2]= (VV[219]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V773= vs_base[0];
	V771= make_cons(V772,V773);}
	if((V770)==Cnil){
	V769= Cnil;
	goto T1635;}
	if(type_of((V770))==t_symbol){
	goto T1643;}
	V769= Cnil;
	goto T1635;
	goto T1643;
T1643:;
	base[2]= (V770);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_package();
	vs_top=sup;
	V776= vs_base[0];
	{register object x= V776,V775= (V771);
	while(V775!=Cnil)
	if(x==(V775->c.c_car)){
	V774= V775;
	goto T1647;
	}else V775=V775->c.c_cdr;
	V774= Cnil;}
	goto T1647;
T1647:;
	if((((V774)==Cnil?Ct:Cnil))==Cnil){
	goto T1645;}
	V769= Cnil;
	goto T1635;
	goto T1645;
T1645:;
	base[2]= VV[259];
	base[3]= symbol_name((V770));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk442)();
	vs_top=sup;
	V777= vs_base[0];
	V769= ((V777)==Cnil?Ct:Cnil);}
	goto T1635;
T1635:;
	if(equal(STREF(object,(V738),28),(V769))){
	goto T1627;}
	V778= Ct;
	STSET(object,(V738),28, (V769));
	(void)((V769));}}
	goto T1627;
T1627:;
	{object V779;
	if(!(((((VV[17]->s.s_dbind))==(VV[18])?Ct:Cnil))==Cnil)){
	goto T1657;}
	V779= Ct;
	goto T1656;
	goto T1657;
T1657:;
	{object V780;
	object V781;
	base[2]= (V737);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk358)(Lclptr358);
	vs_top=sup;
	V780= vs_base[0];
	base[2]= (VV[360]->s.s_gfdef);
	base[4]= (V780);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	V782= vs_base[0];
	base[3]= list(4,(V737),V782,VV[260],Cnil);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk443)(Lclptr443);
	vs_top=sup;
	V781= vs_base[0];
	if((V781)==Cnil){
	V779= Cnil;
	goto T1656;}
	if((CMPcdr((V781)))==Cnil){
	goto T1666;}
	V779= Cnil;
	goto T1656;
	goto T1666;
T1666:;
	{object V783;
	base[2]= CMPcar((V781));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk433)(Lclptr433);
	vs_top=sup;
	V783= vs_base[0];
	base[2]= CMPcar((V783));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1670;}
	V779= Cnil;
	goto T1656;
	goto T1670;
T1670:;
	base[2]= CMPcar((V783));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	V784= vs_base[0];
	if((VV[19])==(V784)){
	goto T1673;}
	V779= Cnil;
	goto T1656;
	goto T1673;
T1673:;
	base[2]= CMPcadr((V783));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1677;}
	V779= Cnil;
	goto T1656;
	goto T1677;
T1677:;
	base[2]= CMPcadr((V783));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	V785= vs_base[0];
	V779= ((VV[20])==(V785)?Ct:Cnil);}}
	goto T1656;
T1656:;
	if(equal(STREF(object,(V738),40),(V779))){
	goto T1655;}
	V786= Ct;
	STSET(object,(V738),40, (V779));
	(void)((V779));}
	goto T1655;
T1655:;
	{object V787 = (V738);
	VMR72(V787)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ENSURE-GENERIC-FUNCTION-USING-CLASS	*/

static object LI85(object V789,object V788,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB73 VMS73 VMV73
	{register object V790;
	register object V791;
	object V792;
	object V793;
	object V794;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V790= V789;
	V791= V788;
	narg= narg - 2;
	V795 = make_list(narg);
	V792= V795;
	{
	parse_key_rest_new(V795,narg,Vcs +3,(struct key *)(void *)&LI85key,first,ap);
	if(Vcs[3]==0){
	V793= Cnil;
	V794= Cnil;
	}else{
	V793=(Vcs[3]);
	V794= Ct;}
	if(((V790))==Cnil){
	goto T1686;}
	if(((*(LnkLI438))((V790)))==Cnil){
	goto T1686;}
	{object V796 = (V790);
	VMR73(V796)}
	goto T1686;
T1686:;
	{register object x= (V791),V797= (VV[261]->s.s_dbind);
	while(V797!=Cnil)
	if(equal(x,V797->c.c_car->c.c_car) &&V797->c.c_car != Cnil){
	goto T1692;
	}else V797=V797->c.c_cdr;
	goto T1691;}
	goto T1692;
T1692:;
	if(((V790))==Cnil){
	goto T1694;}
	{object V798 = (VFUN_NARGS=4,(*(LnkLI444))((V791),(V793),(V794),(V790)));
	VMR73(V798)}
	goto T1694;
T1694:;
	base[0]= VV[262];
	base[1]= (V791);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V799 = vs_base[0];
	VMR73(V799)}
	goto T1691;
T1691:;
	if(((V790))==Cnil){
	goto T1699;}
	base[0]= VV[263];
	base[1]= (V791);
	base[2]= VV[261];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V800 = vs_base[0];
	VMR73(V800)}
	goto T1699;
T1699:;
	base[0]= V791;
	base[1]= (VV[264]->s.s_dbind);
	base[2]= VV[265];
	base[3]= (VV[241]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	Ladjoin();
	vs_top=sup;
	(VV[264]->s.s_dbind)= vs_base[0];
	{object V802 = (VFUN_NARGS=3,(*(LnkLI444))((V791),(V793),(V794)));
	VMR73(V802)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function MAKE-EARLY-GF	*/

static object LI86(object V803,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB74 VMS74 VMV74
	{register object V804;
	object V805;
	object V806;
	object V807;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V804= V803;
	narg = narg - 1;
	if (narg <= 0) goto T1710;
	else {
	V805= first;}
	if (--narg <= 0) goto T1711;
	else {
	V806= va_arg(ap,object);}
	if (--narg <= 0) goto T1712;
	else {
	V807= va_arg(ap,object);}
	--narg; goto T1713;
	goto T1710;
T1710:;
	V805= Cnil;
	goto T1711;
T1711:;
	V806= Cnil;
	goto T1712;
T1712:;
	V807= Cnil;
	goto T1713;
T1713:;
	base[0]= (VFUN_NARGS=2,(*(LnkLI445))((VV[266]->s.s_dbind),(VV[267]->s.s_dbind)));
	base[0]=MMcons(base[0],Cnil);
	if((V807)!=Cnil){
	V808= (V807);
	goto T1719;}
	if(!(((V804))==(VV[268]))){
	goto T1721;}
	V808= 
	make_cclosure_new(LC134,Cnil,base[0],Cdata);
	goto T1719;
	goto T1721;
T1721:;
	V808= 
	make_cclosure_new(LC135,Cnil,base[0],Cdata);
	goto T1719;
T1719:;
	(void)((*(LnkLI446))((base[0]->c.c_car),V808));
	(void)((*(LnkLI345))((base[0]->c.c_car),V804));
	(void)((*(LnkLI447))(VV[19],(base[0]->c.c_car),VV[274],(V804)));
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V810= vs_base[0];
	(void)((*(LnkLI447))(VV[19],(base[0]->c.c_car),VV[275],V810));
	base[1]= (base[0]->c.c_car);
	base[2]= (V804);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk346)();
	vs_top=sup;
	{object V811;
	V811= (*(LnkLI448))();
	{object V813;
	V813= (base[0]->c.c_car);
	if(type_of((V813))==t_structure){
	goto T1737;}
	goto T1735;
	goto T1737;
T1737:;
	if(!((((V813))->str.str_def)==(VV[276]))){
	goto T1735;}}
	V812= STREF(object,(base[0]->c.c_car),4);
	goto T1733;
	goto T1735;
T1735:;{object V814;
	V814= (VV[147]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V815= vs_base[0];
	if(!((V814)==(CMPcar(V815)))){
	goto T1740;}}
	V812= CMPcar(((base[0]->c.c_car))->cc.cc_turbo[12]);
	goto T1733;
	goto T1740;
T1740:;
	base[1]= VV[148];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	V812= vs_base[0];
	goto T1733;
T1733:;
	(void)(((V812)->v.v_self[fix((VV[236]->s.s_dbind))]=((V811))));
	if(((V806))==Cnil){
	goto T1730;}
	(void)((*(LnkLI11))((V804),(V805)));
	(void)((VFUN_NARGS=3,(*(LnkLI449))((base[0]->c.c_car),VV[15],(V805))));}
	goto T1730;
T1730:;
	{object V816 = (base[0]->c.c_car);
	VMR74(V816)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SET-DFUN	*/

static object LI87(object V817,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB75 VMS75 VMV75
	{register object V818;
	register object V819;
	register object V820;
	object V821;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V818= V817;
	narg = narg - 1;
	if (narg <= 0) goto T1749;
	else {
	V819= first;}
	if (--narg <= 0) goto T1750;
	else {
	V820= va_arg(ap,object);}
	if (--narg <= 0) goto T1751;
	else {
	V821= va_arg(ap,object);}
	--narg; goto T1752;
	goto T1749;
T1749:;
	V819= Cnil;
	goto T1750;
T1750:;
	V820= Cnil;
	goto T1751;
T1751:;
	V821= Cnil;
	goto T1752;
T1752:;
	if(((V820))==Cnil){
	goto T1756;}
	V822= Ct;
	STSET(object,(V820),0, (V818));
	(void)((V818));
	goto T1756;
T1756:;
	{object V823;
	if(((V819))==Cnil){
	goto T1762;}
	if(((V820))!=Cnil){
	goto T1761;}
	if(((V821))==Cnil){
	goto T1762;}
	goto T1761;
T1761:;
	V823= listA(3,(V819),(V820),(V821));
	goto T1760;
	goto T1762;
T1762:;
	V823= (V819);
	goto T1760;
T1760:;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1769;}
	base[0]= (V823);
	base[1]= V818;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk450)(Lclptr450);
	vs_top=sup;
	goto T1759;
	goto T1769;
T1769:;
	if(type_of(V818)==t_structure){
	goto T1777;}
	goto T1775;
	goto T1777;
T1777:;
	if(!(((V818)->str.str_def)==(VV[278]))){
	goto T1775;}
	V825= STREF(object,(V818),4);
	goto T1773;
	goto T1775;
T1775:;{object V827;
	V827= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V818);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V828= vs_base[0];
	if(!((V827)==(CMPcar(V828)))){
	goto T1780;}}
	V825= CMPcar(((V818))->cc.cc_turbo[12]);
	goto T1773;
	goto T1780;
T1780:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V825= vs_base[0];
	goto T1773;
T1773:;
	(void)(((V825)->v.v_self[fix((VV[279]->s.s_dbind))]=((V823))));}
	goto T1759;
T1759:;
	{object V829 = (V819);
	VMR75(V829)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function GF-DFUN-CACHE	*/

static object LI88(V831)

register object V831;
{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	{object V832;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1788;}
	base[0]= (V831);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk451)(Lclptr451);
	vs_top=sup;
	V832= vs_base[0];
	goto T1786;
	goto T1788;
T1788:;
	if(type_of(V831)==t_structure){
	goto T1795;}
	goto T1793;
	goto T1795;
T1795:;
	if(!(((V831)->str.str_def)==(VV[280]))){
	goto T1793;}
	V833= STREF(object,(V831),4);
	goto T1791;
	goto T1793;
T1793:;{object V835;
	V835= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V831);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V836= vs_base[0];
	if(!((V835)==(CMPcar(V836)))){
	goto T1798;}}
	V833= CMPcar(((V831))->cc.cc_turbo[12]);
	goto T1791;
	goto T1798;
T1798:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V833= vs_base[0];
	goto T1791;
T1791:;
	V832= (V833)->v.v_self[fix((VV[279]->s.s_dbind))];
	goto T1786;
T1786:;
	{register object V837;
	V837= (V832);
	base[0]= (V837);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1805;}
	{object V838 = Cnil;
	VMR76(V838)}
	goto T1805;
T1805:;
	if(!(type_of((V837))==t_cons)){
	goto T1809;}
	{object V839 = CMPcadr((V832));
	VMR76(V839)}
	goto T1809;
T1809:;
	{object V840 = Cnil;
	VMR76(V840)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GF-DFUN-INFO	*/

static object LI89(V842)

register object V842;
{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	{object V843;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1813;}
	base[0]= (V842);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk451)(Lclptr451);
	vs_top=sup;
	V843= vs_base[0];
	goto T1811;
	goto T1813;
T1813:;
	if(type_of(V842)==t_structure){
	goto T1820;}
	goto T1818;
	goto T1820;
T1820:;
	if(!(((V842)->str.str_def)==(VV[281]))){
	goto T1818;}
	V844= STREF(object,(V842),4);
	goto T1816;
	goto T1818;
T1818:;{object V846;
	V846= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V842);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V847= vs_base[0];
	if(!((V846)==(CMPcar(V847)))){
	goto T1823;}}
	V844= CMPcar(((V842))->cc.cc_turbo[12]);
	goto T1816;
	goto T1823;
T1823:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V844= vs_base[0];
	goto T1816;
T1816:;
	V843= (V844)->v.v_self[fix((VV[279]->s.s_dbind))];
	goto T1811;
T1811:;
	{register object V848;
	V848= (V843);
	base[0]= (V848);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1830;}
	{object V849 = Cnil;
	VMR77(V849)}
	goto T1830;
T1830:;
	if(!(type_of((V848))==t_cons)){
	goto T1834;}
	{object V850 = CMPcddr((V843));
	VMR77(V850)}
	goto T1834;
T1834:;
	{object V851 = Cnil;
	VMR77(V851)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-GF-NAME	*/

static object LI90(V853)

register object V853;
{	 VMB78 VMS78 VMV78
	goto TTL;
TTL:;
	if(type_of(V853)==t_structure){
	goto T1840;}
	goto T1838;
	goto T1840;
T1840:;
	if(!(((V853)->str.str_def)==(VV[282]))){
	goto T1838;}
	V854= STREF(object,(V853),4);
	goto T1836;
	goto T1838;
T1838:;{object V856;
	V856= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V853);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V857= vs_base[0];
	if(!((V856)==(CMPcar(V857)))){
	goto T1843;}}
	V854= CMPcar(((V853))->cc.cc_turbo[12]);
	goto T1836;
	goto T1843;
T1843:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V854= vs_base[0];
	goto T1836;
T1836:;
	{object V858 = (V854)->v.v_self[fix((VV[283]->s.s_dbind))];
	VMR78(V858)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GF-LAMBDA-LIST	*/

static object LI91(V860)

register object V860;
{	 VMB79 VMS79 VMV79
	goto TTL;
TTL:;
	{object V861;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1851;}
	base[0]= (V860);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	V861= vs_base[0];
	goto T1849;
	goto T1851;
T1851:;
	if(type_of(V860)==t_structure){
	goto T1858;}
	goto T1856;
	goto T1858;
T1858:;
	if(!(((V860)->str.str_def)==(VV[284]))){
	goto T1856;}
	V862= STREF(object,(V860),4);
	goto T1854;
	goto T1856;
T1856:;{object V864;
	V864= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V860);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V865= vs_base[0];
	if(!((V864)==(CMPcar(V865)))){
	goto T1861;}}
	V862= CMPcar(((V860))->cc.cc_turbo[12]);
	goto T1854;
	goto T1861;
T1861:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V862= vs_base[0];
	goto T1854;
T1854:;
	V861= (V862)->v.v_self[fix((VV[236]->s.s_dbind))];
	goto T1849;
T1849:;
	if(!((VV[237])==(STREF(object,(V861),0)))){
	goto T1868;}
	{object V866;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1872;}
	base[0]= (V860);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk426)(Lclptr426);
	vs_top=sup;
	V866= vs_base[0];
	goto T1870;
	goto T1872;
T1872:;
	if(type_of(V860)==t_structure){
	goto T1879;}
	goto T1877;
	goto T1879;
T1879:;
	if(!(((V860)->str.str_def)==(VV[285]))){
	goto T1877;}
	V867= STREF(object,(V860),4);
	goto T1875;
	goto T1877;
T1877:;{object V869;
	V869= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V860);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V870= vs_base[0];
	if(!((V869)==(CMPcar(V870)))){
	goto T1882;}}
	V867= CMPcar(((V860))->cc.cc_turbo[12]);
	goto T1875;
	goto T1882;
T1882:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V867= vs_base[0];
	goto T1875;
T1875:;
	V866= (V867)->v.v_self[fix((VV[235]->s.s_dbind))];
	goto T1870;
T1870:;
	if(((V866))!=Cnil){
	goto T1889;}
	base[0]= VV[286];
	base[1]= (V860);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk398)();
	vs_top=sup;
	{object V871 = Cnil;
	VMR79(V871)}
	goto T1889;
T1889:;
	{object V872;
	object V873;
	object V874;
	base[3]= (V866);
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V875= vs_base[0];
	V872= CMPcar(V875);
	if(!(type_of((V872))==t_cons)){
	goto T1899;}
	V873= (*(LnkLI431))((V872));
	goto T1897;
	goto T1899;
T1899:;
	base[3]= (V872);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk48)(Lclptr48);
	vs_top=sup;
	V873= vs_base[0];
	goto T1897;
T1897:;
	{register object x= VV[62],V876= (V873);
	while(V876!=Cnil)
	if(eql(x,V876->c.c_car)){
	V874= V876;
	goto T1902;
	}else V876=V876->c.c_cdr;
	V874= Cnil;}
	goto T1902;
T1902:;
	if(((V874))==Cnil){
	goto T1904;}
	base[3]= (V873);
	base[4]= CMPcdr((V874));
	vs_top=(vs_base=base+3)+2;
	Lldiff();
	vs_top=sup;
	V877= vs_base[0];
	{object V878 = append(V877,VV[287]);
	VMR79(V878)}
	goto T1904;
T1904:;
	{object V879 = (V873);
	VMR79(V879)}}}
	goto T1868;
T1868:;
	{object V880 = STREF(object,(V861),0);
	VMR79(V880)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for REAL-ENSURE-GF-INTERNAL	*/

static void L92()
{register object *base=vs_base;
	register object *sup=base+VM80; VC80
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V881=base[0]->c.c_cdr;
	if(endp(V881))invalid_macro_call();
	base[2]= (V881->c.c_car);
	V881=V881->c.c_cdr;
	if(endp(V881))invalid_macro_call();
	base[3]= (V881->c.c_car);
	V881=V881->c.c_cdr;
	if(endp(V881))invalid_macro_call();
	base[4]= (V881->c.c_car);
	V881=V881->c.c_cdr;
	if(!endp(V881))invalid_macro_call();}
	V882= list(2,VV[288],base[2]);
	V883= list(2,/* INLINE-ARGS */V882,list(3,VV[289],base[2],list(4,VV[290],base[2],Ct,base[4])));
	V884= list(2,VV[291],base[2]);
	V885= make_cons(/* INLINE-ARGS */V884,Cnil);
	V886= list(4,VV[121],/* INLINE-ARGS */V883,/* INLINE-ARGS */V885,list(2,Ct,list(3,VV[292],VV[293],base[2])));
	V887= list(3,VV[294],base[3],VV[5]);
	V888= list(3,VV[294],base[3],VV[295]);
	V889= list(2,VV[296],listA(3,VV[297],base[3],VV[298]));
	V890= make_cons(/* INLINE-ARGS */V889,Cnil);
	V891= list(3,VV[297],base[3],VV[4]);
	base[5]= list(5,VV[10],/* INLINE-ARGS */V886,/* INLINE-ARGS */V887,/* INLINE-ARGS */V888,list(3,VV[96],/* INLINE-ARGS */V890,list(3,VV[240],VV[299],list(3,VV[30],/* INLINE-ARGS */V891,listA(3,VV[300],list(2,VV[301],base[2]),VV[302])))));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function REAL-ENSURE-GF-USING-CLASS--GENERIC-FUNCTION	*/

static object LI93(object V893,object V892,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB81 VMS81 VMV81
	{object V894;
	object V895;
	register object V896;
	object V897;
	object V898;
	object V899;
	register object V900;
	object V901;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V894= V893;
	V895= V892;
	narg= narg - 2;
	V902 = make_list(narg);
	V896= V902;
	{
	parse_key_rest_new(V902,narg,Vcs +3,(struct key *)(void *)&LI93key,first,ap);
	V897=(Vcs[3]);
	if(Vcs[4]==0){
	V898= Cnil;
	V899= Cnil;
	}else{
	V898=(Vcs[4]);
	V899= Ct;}
	if(Vcs[5]==0){
	V900= VV[19];
	V901= Cnil;
	}else{
	V900=(Vcs[5]);
	V901= Ct;}
	if(!(type_of((V900))==t_symbol)){
	goto T1914;}
	V900= (VFUN_NARGS=3,(*(LnkLI290))((V900),Ct,(V897)));
	goto T1912;
	goto T1914;
T1914:;
	{object V903;
	base[0]= (V900);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	V903= vs_base[0];
	if(((V903))==Cnil){
	goto T1920;}
	goto T1912;
	goto T1920;
T1920:;
	base[0]= VV[293];
	base[1]= (V900);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}
	goto T1912;
T1912:;
	{object V904;
	object V905;
	base[0]= (V896);
	base[1]= VV[5];
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1928;}
	V904= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1929;}
	V905= vs_base[0];
	vs_top=sup;
	goto T1930;
	goto T1928;
T1928:;
	V904= Cnil;
	goto T1929;
T1929:;
	V905= Cnil;
	goto T1930;
T1930:;
	V896= (V904);}
	{object V906;
	object V907;
	base[0]= (V896);
	base[1]= VV[295];
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1937;}
	V906= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1938;}
	V907= vs_base[0];
	vs_top=sup;
	goto T1939;
	goto T1937;
T1937:;
	V906= Cnil;
	goto T1938;
T1938:;
	V907= Cnil;
	goto T1939;
T1939:;
	V896= (V906);}
	{object V908;
	base[0]= (V896);
	base[1]= VV[4];
	base[2]= VV[303];
	vs_top=(vs_base=base+0)+3;
	Lgetf();
	vs_top=sup;
	V908= vs_base[0];
	if(((V908))==(VV[303])){
	goto T1911;}
	{object V910;
	base[2]= (V900);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= CMPcar((V908));
	base[3]= CMPcdr((V908));
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk300)(Lclptr300);
	vs_top=sup;
	V910= vs_base[0];
	{object V911;
	base[1]= (V896);
	base[2]= (V910);
	base[3]= VV[4];
	vs_top=(vs_base=base+1)+3;
	siLput_f();
	vs_top=sup;
	V911= vs_base[0];
	V896= (V911);}}}
	goto T1911;
T1911:;
	if(((V901))==Cnil){
	goto T1959;}
	V912= (*(LnkLI363))((V894));
	if((/* INLINE-ARGS */V912)==((V900))){
	goto T1959;}
	base[0]= (V894);
	base[1]= (V900);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk452)(Lclptr452);
	vs_top=sup;
	goto T1959;
T1959:;
	{object V913;
	base[0]=VV[453]->s.s_gfdef;
	base[1]= (V894);
	{object V914;
	V914= (V896);
	 vs_top=base+2;
	 while(V914!=Cnil)
	 {vs_push((V914)->c.c_car);V914=(V914)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk453)(Lclptr453);
	vs_top=sup;
	V913= vs_base[0];
	if(((V899))==Cnil){
	goto T1969;}
	(void)((*(LnkLI11))((V895),(V898)));
	goto T1969;
T1969:;
	{object V915 = (V913);
	VMR81(V915)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function REAL-ENSURE-GF-USING-CLASS--NULL	*/

static object LI94(object V917,object V916,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB82 VMS82 VMV82
	{object V918;
	object V919;
	register object V920;
	object V921;
	object V922;
	object V923;
	register object V924;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V918= V917;
	V919= V916;
	narg= narg - 2;
	V925 = make_list(narg);
	V920= V925;
	{
	parse_key_rest_new(V925,narg,Vcs +3,(struct key *)(void *)&LI94key,first,ap);
	V921=(Vcs[3]);
	if(Vcs[4]==0){
	V922= Cnil;
	V923= Cnil;
	}else{
	V922=(Vcs[4]);
	V923= Ct;}
	V924=(Vcs[5]);
	if(!(type_of((V924))==t_symbol)){
	goto T1976;}
	V924= (VFUN_NARGS=3,(*(LnkLI290))((V924),Ct,(V921)));
	goto T1974;
	goto T1976;
T1976:;
	{object V926;
	base[0]= (V924);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	V926= vs_base[0];
	if(((V926))==Cnil){
	goto T1982;}
	goto T1974;
	goto T1982;
T1982:;
	base[0]= VV[293];
	base[1]= (V924);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}
	goto T1974;
T1974:;
	{object V927;
	object V928;
	base[0]= (V920);
	base[1]= VV[5];
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1990;}
	V927= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1991;}
	V928= vs_base[0];
	vs_top=sup;
	goto T1992;
	goto T1990;
T1990:;
	V927= Cnil;
	goto T1991;
T1991:;
	V928= Cnil;
	goto T1992;
T1992:;
	V920= (V927);}
	{object V929;
	object V930;
	base[0]= (V920);
	base[1]= VV[295];
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1999;}
	V929= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2000;}
	V930= vs_base[0];
	vs_top=sup;
	goto T2001;
	goto T1999;
T1999:;
	V929= Cnil;
	goto T2000;
T2000:;
	V930= Cnil;
	goto T2001;
T2001:;
	V920= (V929);}
	{object V931;
	base[0]= (V920);
	base[1]= VV[4];
	base[2]= VV[303];
	vs_top=(vs_base=base+0)+3;
	Lgetf();
	vs_top=sup;
	V931= vs_base[0];
	if(((V931))==(VV[303])){
	goto T1973;}
	{object V933;
	base[2]= (V924);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= CMPcar((V931));
	base[3]= CMPcdr((V931));
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk300)(Lclptr300);
	vs_top=sup;
	V933= vs_base[0];
	{object V934;
	base[1]= (V920);
	base[2]= (V933);
	base[3]= VV[4];
	vs_top=(vs_base=base+1)+3;
	siLput_f();
	vs_top=sup;
	V934= vs_base[0];
	V920= (V934);}}}
	goto T1973;
T1973:;
	{object V935;
	base[0]=VV[454]->s.s_gfdef;
	base[1]= (V924);
	base[2]= VV[220];
	base[3]= (V919);
	{object V938;
	V938= (V920);
	 vs_top=base+4;
	 while(V938!=Cnil)
	 {vs_push((V938)->c.c_car);V938=(V938)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk454)(Lclptr454);
	vs_top=sup;
	V937= vs_base[0];
	V935= (*(LnkLI345))(V937,V919);
	if(((V923))==Cnil){
	goto T2027;}
	(void)((*(LnkLI11))((V919),(V922)));
	goto T2027;
T2027:;
	{object V939 = (V935);
	VMR82(V939)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for GET-GENERIC-FUNCTION-INFO	*/

static void L95()
{register object *base=vs_base;
	register object *sup=base+VM83; VC83
	vs_check;
	{register object V940;
	check_arg(1);
	V940=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V941;
	object V942;
	object V943;
	{object V944;
	object V945;
	if(((*(LnkLI438))((V940)))==Cnil){
	goto T2033;}
	if(type_of(V940)==t_structure){
	goto T2039;}
	goto T2037;
	goto T2039;
T2039:;
	if(!(((V940)->str.str_def)==(VV[304]))){
	goto T2037;}
	V946= STREF(object,(V940),4);
	goto T2035;
	goto T2037;
T2037:;{object V948;
	V948= (VV[147]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V940);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V949= vs_base[0];
	if(!((V948)==(CMPcar(V949)))){
	goto T2042;}}
	V946= CMPcar(((V940))->cc.cc_turbo[12]);
	goto T2035;
	goto T2042;
T2042:;
	base[3]= VV[148];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V946= vs_base[0];
	goto T2035;
T2035:;
	V944= (V946)->v.v_self[fix((VV[236]->s.s_dbind))];
	goto T2031;
	goto T2033;
T2033:;
	base[3]= (V940);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	V944= vs_base[0];
	goto T2031;
T2031:;
	V945= STREF(object,(V944),8);
	base[3]= (*(LnkLI395))((V944));
	base[4]= (V945);
	base[5]= (V944);
	vs_top=(vs_base=base+3)+3;}
	if(vs_base>=vs_top){vs_top=sup;goto T2053;}
	V941= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2054;}
	V942= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2055;}
	V943= vs_base[0];
	vs_top=sup;
	goto T2056;
	goto T2053;
T2053:;
	V941= Cnil;
	goto T2054;
T2054:;
	V942= Cnil;
	goto T2055;
T2055:;
	V943= Cnil;
	goto T2056;
T2056:;
	base[1]= CMPmake_fixnum((long)length((V942)));
	base[2]= (V941);
	base[3]= (V942);
	base[5]= VV[455];
	base[6]= (V942);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk425)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V943);
	vs_top=(vs_base=base+1)+5;
	return;}
	}
}
/*	local entry for function EARLY-MAKE-A-METHOD	*/

static object LI96(object V955,object V954,object V953,object V952,object V951,object V950,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB84 VMS84 VMV84
	{object V956;
	object V957;
	object V958;
	register object V959;
	register object V960;
	object V961;
	object V962;
	va_start(ap,first);
	if(narg <6) too_few_arguments();
	V956= V955;
	V957= V954;
	V958= V953;
	V959= V952;
	V960= V951;
	V961= V950;
	narg = narg - 6;
	if (narg <= 0) goto T2064;
	else {
	V962= first;}
	--narg; goto T2065;
	goto T2064;
T2064:;
	V962= Cnil;
	goto T2065;
T2065:;
	(void)((VFUN_NARGS=1,(*(LnkLI456))((V960))));
	{object V963;
	object V964;
	V963= Cnil;
	V964= Cnil;
	base[0]= VV[457];
	base[1]= (V959);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk366)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2070;}
	V963= (V959);
	{object V965;
	object V966= (V959);
	if(V966==Cnil){
	V964= Cnil;
	goto T2076;}
	base[0]=V965=MMcons(Cnil,Cnil);
	goto T2077;
T2077:;
	if(!(((V966->c.c_car))==(Ct))){
	goto T2080;}
	(V965->c.c_car)= Ct;
	goto T2078;
	goto T2080;
T2080:;
	base[1]= (V966->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	(V965->c.c_car)= vs_base[0];
	goto T2078;
T2078:;
	if((V966=MMcdr(V966))==Cnil){
	V964= base[0];
	goto T2076;}
	V965=MMcdr(V965)=MMcons(Cnil,Cnil);
	goto T2077;}
	goto T2076;
T2076:;
	goto T2068;
	goto T2070;
T2070:;
	V964= (V959);
	V963= Cnil;
	goto T2068;
T2068:;
	base[0]= (V960);
	base[1]= VV[36];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V968= vs_base[0];
	base[0]= (V960);
	base[1]= VV[216];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V969= vs_base[0];
	{object V970 = list(5,VV[305],V968,V969,(V963),list(7,(V956),(V957),(V958),(V964),(V960),(V961),(V962)));
	VMR84(V970)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for REAL-MAKE-A-METHOD	*/

static void L97()
{register object *base=vs_base;
	register object *sup=base+VM85; VC85
	vs_check;
	{object V971;
	object V972;
	object V973;
	object V974;
	object V975;
	object V976;
	object V977;
	if(vs_top-vs_base<6) too_few_arguments();
	if(vs_top-vs_base>7) too_many_arguments();
	V971=(base[0]);
	V972=(base[1]);
	V973=(base[2]);
	V974=(base[3]);
	V975=(base[4]);
	V976=(base[5]);
	vs_base=vs_base+6;
	if(vs_base>=vs_top){vs_top=sup;goto T2092;}
	V977=(base[6]);
	vs_top=sup;
	goto T2093;
	goto T2092;
T2092:;
	V977= Cnil;
	goto T2093;
T2093:;
	V974= (*(LnkLI458))((V974));
	base[7]=VV[454]->s.s_gfdef;
	base[8]= (V971);
	base[9]= VV[306];
	base[10]= (V972);
	base[11]= VV[15];
	base[12]= (V973);
	base[13]= VV[307];
	base[14]= (V974);
	base[15]= VV[3];
	base[16]= (V976);
	base[17]= VV[308];
	base[18]= (V977);
	base[19]= VV[309];
	base[20]= Ct;
	{object V978;
	V978= (V975);
	 vs_top=base+21;
	 while(V978!=Cnil)
	 {vs_push((V978)->c.c_car);V978=(V978)->c.c_cdr;}
	vs_base=base+8;}
	(void) (*Lnk454)(Lclptr454);
	return;
	}
}
/*	function definition for EARLY-METHOD-FUNCTION	*/

static void L98()
{register object *base=vs_base;
	register object *sup=base+VM86; VC86
	vs_check;
	{object V979;
	check_arg(1);
	V979=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= CMPcadr((V979));
	base[2]= CMPcaddr((V979));
	vs_top=(vs_base=base+1)+2;
	return;
	}
}
/*	local entry for function EARLY-METHOD-CLASS	*/

static object LI99(V981)

object V981;
{	 VMB87 VMS87 VMV87
	goto TTL;
TTL:;
	base[0]= (V981);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	V982= vs_base[0];
	{object V983 = (VFUN_NARGS=1,(*(LnkLI290))(CMPcar(V982)));
	VMR87(V983)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-METHOD-STANDARD-ACCESSOR-P	*/

static object LI100(V985)

object V985;
{	 VMB88 VMS88 VMV88
	goto TTL;
TTL:;
	{object V986;
	base[0]= (V985);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	V987= vs_base[0];
	V986= CMPcar(V987);
	if(!(((V986))==(VV[310]))){
	goto T2118;}
	{object V988 = Ct;
	VMR88(V988)}
	goto T2118;
T2118:;
	if(!(((V986))==(VV[311]))){
	goto T2120;}
	{object V989 = Ct;
	VMR88(V989)}
	goto T2120;
T2120:;
	{object V990 = (((V986))==(VV[312])?Ct:Cnil);
	VMR88(V990)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for EARLY-METHOD-STANDARD-ACCESSOR-SLOT-NAME	*/

static void L101()
{register object *base=vs_base;
	register object *sup=base+VM89; VC89
	vs_check;
	{object V991;
	check_arg(1);
	V991=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V991);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk460)();
	return;
	}
}
/*	local entry for function EARLY-METHOD-SPECIALIZERS	*/

static object LI102(object V992,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB90 VMS90 VMV90
	{register object V993;
	object V994;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V993= V992;
	narg = narg - 1;
	if (narg <= 0) goto T2124;
	else {
	V994= first;}
	--narg; goto T2125;
	goto T2124;
T2124:;
	V994= Cnil;
	goto T2125;
T2125:;
	if(!(type_of((V993))==t_cons||((V993))==Cnil)){
	goto T2128;}
	if(!((CMPcar((V993)))==(VV[305]))){
	goto T2128;}
	if(!(((V994))==(Ct))){
	goto T2133;}{object V995;
	V995= CMPcadddr((V993));
	if(V995==Cnil)goto T2135;
	{object V996 = V995;
	VMR90(V996)}
	goto T2135;
T2135:;}
	{object V998;
	base[2]=VV[290]->s.s_gfdef;
	base[3]= (V993);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	V1001= vs_base[0];
	{object V999;
	object V1000= CMPcadddr(V1001);
	if(V1000==Cnil){
	V998= Cnil;
	goto T2137;}
	base[1]=V999=MMcons(Cnil,Cnil);
	goto T2138;
T2138:;
	base[3]= (V1000->c.c_car);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk290)();
	vs_top=sup;
	(V999->c.c_car)= vs_base[0];
	if((V1000=MMcdr(V1000))==Cnil){
	V998= base[1];
	goto T2137;}
	V999=MMcdr(V999)=MMcons(Cnil,Cnil);
	goto T2138;}
	goto T2137;
T2137:;
	(CMPcdddr(V993))->c.c_car = (V998);
	(void)(CMPcdddr(V993));
	{object V1002 = (V998);
	VMR90(V1002)}}
	goto T2133;
T2133:;
	base[0]= (V993);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	V1003= vs_base[0];
	{object V1004 = CMPcadddr(V1003);
	VMR90(V1004)}
	goto T2128;
T2128:;
	base[0]= VV[313];
	base[1]= (V993);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V1005 = vs_base[0];
	VMR90(V1005)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function EARLY-METHOD-QUALIFIERS	*/

static object LI103(V1007)

object V1007;
{	 VMB91 VMS91 VMV91
	goto TTL;
TTL:;
	base[0]= (V1007);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	V1008= vs_base[0];
	{object V1009 = CMPcadr(V1008);
	VMR91(V1009)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-METHOD-LAMBDA-LIST	*/

static object LI104(V1011)

object V1011;
{	 VMB92 VMS92 VMV92
	goto TTL;
TTL:;
	base[0]= (V1011);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	V1012= vs_base[0];
	{object V1013 = CMPcaddr(V1012);
	VMR92(V1013)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-ADD-NAMED-METHOD	*/

static object LI105(object V1017,object V1016,object V1015,object V1014,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB93 VMS93 VMV93
	{object V1018;
	register object V1019;
	register object V1020;
	object V1021;
	object V1022;
	va_start(ap,first);
	if(narg <4) too_few_arguments();
	V1018= V1017;
	V1019= V1016;
	V1020= V1015;
	V1021= V1014;
	narg= narg - 4;
	V1023 = list_vector_new(narg,first,ap);
	V1022= V1023;
	{object V1024;
	object V1025;
	object V1026;
	base[3]= (V1018);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk351)();
	vs_top=sup;
	V1024= vs_base[0];
	{register object V1027;
	register object V1028;
	if(type_of(V1024)==t_structure){
	goto T2160;}
	goto T2158;
	goto T2160;
T2160:;
	if(!(((V1024)->str.str_def)==(VV[314]))){
	goto T2158;}
	V1029= STREF(object,(V1024),4);
	goto T2156;
	goto T2158;
T2158:;{object V1031;
	V1031= (VV[147]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V1024);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1032= vs_base[0];
	if(!((V1031)==(CMPcar(V1032)))){
	goto T2163;}}
	V1029= CMPcar(((V1024))->cc.cc_turbo[12]);
	goto T2156;
	goto T2163;
T2163:;
	base[5]= VV[148];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	V1029= vs_base[0];
	goto T2156;
T2156:;
	V1027= (V1029)->v.v_self[fix((VV[235]->s.s_dbind))];
	V1028= CMPcar((V1027));
	goto T2171;
T2171:;
	if(!(((V1027))==Cnil)){
	goto T2172;}
	V1025= Cnil;
	goto T2154;
	goto T2172;
T2172:;
	V1033= (VFUN_NARGS=1,(*(LnkLI434))((V1028)));
	if(!(equal(/* INLINE-ARGS */V1033,(V1020)))){
	goto T2176;}
	V1034= (*(LnkLI461))((V1028));
	if(!(equal(/* INLINE-ARGS */V1034,(V1019)))){
	goto T2176;}
	V1025= (V1028);
	goto T2154;
	goto T2176;
T2176:;
	V1027= CMPcdr((V1027));
	V1028= CMPcar((V1027));
	goto T2171;}
	goto T2154;
T2154:;
	base[3]= VV[20];
	base[4]= (V1019);
	base[5]= (V1021);
	base[6]= (V1020);
	base[7]= (V1022);
	base[8]= Cnil;
	V1026= simple_symlispcall(VV[462],base+3,6);
	if(((V1025))==Cnil){
	goto T2193;}
	base[3]= (V1024);
	base[4]= (V1025);
	(void)simple_symlispcall(VV[463],base+3,2);
	goto T2193;
T2193:;
	base[3]= (V1024);
	base[4]= (V1026);
	{object V1035 = simple_symlispcall(VV[464],base+3,2);
	VMR93(V1035)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function ADD-METHOD	*/

static object LI106(V1038,V1039)

register object V1038;register object V1039;
{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;{object V1040;
	V1040= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1038);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1041= vs_base[0];
	if((V1040)==(CMPcar(V1041))){
	goto T2200;}}
	base[0]= VV[315];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2200;
T2200:;
	if(!(type_of((V1039))==t_cons||((V1039))==Cnil)){
	goto T2208;}
	if((CMPcar((V1039)))==(VV[305])){
	goto T2207;}
	goto T2208;
T2208:;
	base[0]= VV[316];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2207;
T2207:;
	{object V1043;
	object V1044;
	object V1045;
	if(type_of(V1038)==t_structure){
	goto T2218;}
	goto T2216;
	goto T2218;
T2218:;
	if(!(((V1038)->str.str_def)==(VV[317]))){
	goto T2216;}
	V1043= STREF(object,(V1038),4);
	goto T2214;
	goto T2216;
T2216:;{object V1047;
	V1047= (VV[147]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1038);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1048= vs_base[0];
	if(!((V1047)==(CMPcar(V1048)))){
	goto T2221;}}
	V1043= CMPcar(((V1038))->cc.cc_turbo[12]);
	goto T2214;
	goto T2221;
T2221:;
	base[2]= VV[148];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V1043= vs_base[0];
	goto T2214;
T2214:;
	V1044= (VV[235]->s.s_dbind);
	V1045= make_cons(V1039,((V1043))->v.v_self[fix((V1044))]);
	(void)((((V1043))->v.v_self[fix((V1044))]=((V1045))));}
	(void)((VFUN_NARGS=3,(*(LnkLI449))((V1038),VV[318],(V1039))));
	V1050= (*(LnkLI441))((V1038));
	{register object x= /* INLINE-ARGS */V1050,V1049= (VV[261]->s.s_dbind);
	while(V1049!=Cnil)
	if(equal(x,V1049->c.c_car->c.c_car) &&V1049->c.c_car != Cnil){
	goto T2231;
	}else V1049=V1049->c.c_cdr;}
	{object V1051 = (VFUN_NARGS=1,(*(LnkLI465))((V1038)));
	VMR94(V1051)}
	goto T2231;
T2231:;
	{object V1052 = Cnil;
	VMR94(V1052)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REMOVE-METHOD	*/

static object LI107(V1055,V1056)

register object V1055;object V1056;
{	 VMB95 VMS95 VMV95
	goto TTL;
TTL:;{object V1057;
	V1057= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1055);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1058= vs_base[0];
	if((V1057)==(CMPcar(V1058))){
	goto T2233;}}
	base[0]= VV[319];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2233;
T2233:;
	if(!(type_of((V1056))==t_cons||((V1056))==Cnil)){
	goto T2241;}
	if((CMPcar((V1056)))==(VV[305])){
	goto T2240;}
	goto T2241;
T2241:;
	base[0]= VV[320];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2240;
T2240:;
	if(type_of(V1055)==t_structure){
	goto T2251;}
	goto T2249;
	goto T2251;
T2251:;
	if(!(((V1055)->str.str_def)==(VV[321]))){
	goto T2249;}
	V1059= STREF(object,(V1055),4);
	goto T2247;
	goto T2249;
T2249:;{object V1061;
	V1061= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1055);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1062= vs_base[0];
	if(!((V1061)==(CMPcar(V1062)))){
	goto T2254;}}
	V1059= CMPcar(((V1055))->cc.cc_turbo[12]);
	goto T2247;
	goto T2254;
T2254:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1059= vs_base[0];
	goto T2247;
T2247:;{object V1063;
	V1063= (VV[235]->s.s_dbind);
	base[0]= (V1056);
	if(type_of(V1055)==t_structure){
	goto T2267;}
	goto T2265;
	goto T2267;
T2267:;
	if(!(((V1055)->str.str_def)==(VV[322]))){
	goto T2265;}
	V1065= STREF(object,(V1055),4);
	goto T2263;
	goto T2265;
T2265:;{object V1067;
	V1067= (VV[147]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1055);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1068= vs_base[0];
	if(!((V1067)==(CMPcar(V1068)))){
	goto T2270;}}
	V1065= CMPcar(((V1055))->cc.cc_turbo[12]);
	goto T2263;
	goto T2270;
T2270:;
	base[2]= VV[148];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V1065= vs_base[0];
	goto T2263;
T2263:;
	base[1]= (V1065)->v.v_self[fix((VV[235]->s.s_dbind))];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk376)();
	vs_top=sup;
	V1064= vs_base[0];
	(void)(((V1059)->v.v_self[fix(V1063)]=(V1064)));}
	(void)((VFUN_NARGS=1,(*(LnkLI449))((V1055))));
	V1070= (*(LnkLI441))((V1055));
	{register object x= /* INLINE-ARGS */V1070,V1069= (VV[261]->s.s_dbind);
	while(V1069!=Cnil)
	if(equal(x,V1069->c.c_car->c.c_car) &&V1069->c.c_car != Cnil){
	goto T2278;
	}else V1069=V1069->c.c_cdr;}
	{object V1071 = (VFUN_NARGS=1,(*(LnkLI465))((V1055)));
	VMR95(V1071)}
	goto T2278;
T2278:;
	{object V1072 = Cnil;
	VMR95(V1072)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-METHOD	*/

static object LI108(object V1075,object V1074,object V1073,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB96 VMS96 VMV96
	{object V1076;
	register object V1077;
	register object V1078;
	object V1079;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V1076= V1075;
	V1077= V1074;
	V1078= V1073;
	narg = narg - 3;
	if (narg <= 0) goto T2280;
	else {
	V1079= first;}
	--narg; goto T2281;
	goto T2280;
T2280:;
	V1079= Ct;
	goto T2281;
T2281:;
	if(((*(LnkLI438))((V1076)))==Cnil){
	goto T2284;}{object V1080;
	{register object V1081;
	register object V1082;
	if(type_of(V1076)==t_structure){
	goto T2293;}
	goto T2291;
	goto T2293;
T2293:;
	if(!(((V1076)->str.str_def)==(VV[323]))){
	goto T2291;}
	V1083= STREF(object,(V1076),4);
	goto T2289;
	goto T2291;
T2291:;{object V1085;
	V1085= (VV[147]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1076);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1086= vs_base[0];
	if(!((V1085)==(CMPcar(V1086)))){
	goto T2296;}}
	V1083= CMPcar(((V1076))->cc.cc_turbo[12]);
	goto T2289;
	goto T2296;
T2296:;
	base[2]= VV[148];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V1083= vs_base[0];
	goto T2289;
T2289:;
	V1081= (V1083)->v.v_self[fix((VV[235]->s.s_dbind))];
	V1082= CMPcar((V1081));
	goto T2304;
T2304:;
	if(!(((V1081))==Cnil)){
	goto T2305;}
	V1080= Cnil;
	goto T2287;
	goto T2305;
T2305:;
	V1087= (VFUN_NARGS=2,(*(LnkLI434))((V1082),Cnil));
	if(equal(/* INLINE-ARGS */V1087,(V1078))){
	goto T2311;}
	V1088= (VFUN_NARGS=2,(*(LnkLI434))((V1082),Ct));
	if(!(equal(/* INLINE-ARGS */V1088,(V1078)))){
	goto T2309;}
	goto T2311;
T2311:;
	V1089= (*(LnkLI461))((V1082));
	if(!(equal(/* INLINE-ARGS */V1089,(V1077)))){
	goto T2309;}
	V1080= (V1082);
	goto T2287;
	goto T2309;
T2309:;
	V1081= CMPcdr((V1081));
	V1082= CMPcar((V1081));
	goto T2304;}
	goto T2287;
T2287:;
	if(V1080==Cnil)goto T2286;
	{object V1090 = V1080;
	VMR96(V1090)}
	goto T2286;
T2286:;}
	if(((V1079))==Cnil){
	goto T2322;}
	base[0]= VV[324];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V1091 = vs_base[0];
	VMR96(V1091)}
	goto T2322;
T2322:;
	{object V1092 = Cnil;
	VMR96(V1092)}
	goto T2284;
T2284:;
	{object V1093 = (VFUN_NARGS=4,(*(LnkLI466))((V1076),(V1077),(V1078),(V1079)));
	VMR96(V1093)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function FIX-EARLY-GENERIC-FUNCTIONS	*/

static object LI109(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB97 VMS97 VMV97
	{object V1094;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T2325;
	else {
	V1094= first;}
	--narg; goto T2326;
	goto T2325;
T2325:;
	V1094= (VV[325]->s.s_dbind);
	goto T2326;
T2326:;
	(VV[326]->s.s_dbind)= Ct;
	{object V1095;
	V1095= Cnil;
	{register object V1096;
	register object V1097;
	V1096= (VV[264]->s.s_dbind);
	V1097= CMPcar((V1096));
	goto T2334;
T2334:;
	if(!(((V1096))==Cnil)){
	goto T2335;}
	goto T2330;
	goto T2335;
T2335:;
	base[1]= (VV[467]->s.s_gfdef);
	{object V1099;
	V1099= (*(LnkLI356))((V1097));
	if(type_of((V1099))==t_structure){
	goto T2349;}
	goto T2346;
	goto T2349;
T2349:;
	if(!((((V1099))->str.str_def)==(VV[327]))){
	goto T2346;}}
	V1100= (*(LnkLI356))((V1097));
	V1098= STREF(object,/* INLINE-ARGS */V1100,4);
	goto T2344;
	goto T2346;
T2346:;{object V1101;
	V1101= (VV[147]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (*(LnkLI356))((V1097));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1102= vs_base[0];
	if(!((V1101)==(CMPcar(V1102)))){
	goto T2352;}}
	V1103= (*(LnkLI356))((V1097));
	V1098= CMPcar((/* INLINE-ARGS */V1103)->cc.cc_turbo[12]);
	goto T2344;
	goto T2352;
T2352:;
	base[3]= VV[148];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V1098= vs_base[0];
	goto T2344;
T2344:;
	base[2]= (V1098)->v.v_self[fix((VV[235]->s.s_dbind))];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk366)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2339;}
	V1095= make_cons(V1097,(V1095));
	goto T2339;
T2339:;
	V1096= CMPcdr((V1096));
	V1097= CMPcar((V1096));
	goto T2334;}
	goto T2330;
T2330:;
	{register object V1105;
	object V1106;
	V1105= nconc((V1095),VV[328]);
	V1106= CMPcar((V1105));
	goto T2368;
T2368:;
	if(!(((V1105))==Cnil)){
	goto T2369;}
	goto T2364;
	goto T2369;
T2369:;
	base[2]= (V1106);
	base[3]= (VV[264]->s.s_dbind);
	base[4]= VV[265];
	base[5]= (VV[241]->s.s_gfdef);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk468)();
	vs_top=sup;
	V1107= vs_base[0];
	(VV[264]->s.s_dbind)= make_cons((V1106),V1107);
	V1105= CMPcdr((V1105));
	V1106= CMPcar((V1105));
	goto T2368;}
	goto T2364;
T2364:;
	{register object V1108;
	object V1109;
	V1108= (VV[264]->s.s_dbind);
	V1109= CMPcar((V1108));
	goto T2389;
T2389:;
	if(!(((V1108))==Cnil)){
	goto T2390;}
	goto T2385;
	goto T2390;
T2390:;
	if(((V1094))==Cnil){
	goto T2394;}
	base[1]= Ct;
	base[2]= VV[329];
	base[3]= (V1109);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T2394;
T2394:;
	{register object V1110;
	object V1111;
	V1110= (*(LnkLI356))((V1109));
	if(type_of(V1110)==t_structure){
	goto T2408;}
	goto T2406;
	goto T2408;
T2408:;
	if(!(((V1110)->str.str_def)==(VV[330]))){
	goto T2406;}
	V1114= STREF(object,(V1110),4);
	goto T2404;
	goto T2406;
T2406:;{object V1116;
	V1116= (VV[147]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V1110);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1117= vs_base[0];
	if(!((V1116)==(CMPcar(V1117)))){
	goto T2411;}}
	V1114= CMPcar(((V1110))->cc.cc_turbo[12]);
	goto T2404;
	goto T2411;
T2411:;
	base[4]= VV[148];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V1114= vs_base[0];
	goto T2404;
T2404:;
	{object V1112;
	object V1113= (V1114)->v.v_self[fix((VV[235]->s.s_dbind))];
	if(V1113==Cnil){
	V1111= Cnil;
	goto T2402;}
	base[3]=V1112=MMcons(Cnil,Cnil);
	goto T2403;
T2403:;
	{object V1119;
	base[5]= (V1113->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lcopy_list();
	vs_top=sup;
	V1119= vs_base[0];
	{object V1121;
	V1121= (VFUN_NARGS=2,(*(LnkLI434))((V1113->c.c_car),Ct));
	(CMPcdddr(V1119))->c.c_car = (V1121);
	(void)(CMPcdddr(V1119));}
	{object V1122;
	V1122= (V1119);
	 vs_top=base+4;
	 while(V1122!=Cnil)
	 {vs_push((V1122)->c.c_car);V1122=(V1122)->c.c_cdr;}
	vs_base=base+4;}
	(void) (*Lnk469)();
	vs_top=sup;
	(V1112->c.c_car)= vs_base[0];}
	if((V1113=MMcdr(V1113))==Cnil){
	V1111= base[3];
	goto T2402;}
	V1112=MMcdr(V1112)=MMcons(Cnil,Cnil);
	goto T2403;}
	goto T2402;
T2402:;
	base[3]= (VV[331]->s.s_dbind);
	base[4]= V1110;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk470)(Lclptr470);
	vs_top=sup;
	base[3]= (VV[252]->s.s_dbind);
	base[4]= V1110;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk471)(Lclptr471);
	vs_top=sup;
	(void)((*(LnkLI472))((V1110),(V1111)));}
	V1108= CMPcdr((V1108));
	V1109= CMPcar((V1108));
	goto T2389;}
	goto T2385;
T2385:;
	{register object V1125;
	object V1126;
	V1125= (VV[332]->s.s_dbind);
	V1126= CMPcar((V1125));
	goto T2440;
T2440:;
	if(!(((V1125))==Cnil)){
	goto T2441;}
	goto T2436;
	goto T2441;
T2441:;
	{object V1127;
	V1127= CMPcar((V1126));
	base[1]= CMPcaddr((V1126));
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	V1128= vs_base[0];
	(void)((*(LnkLI345))(V1128,(V1127)));}
	V1125= CMPcdr((V1125));
	V1126= CMPcar((V1125));
	goto T2440;}
	goto T2436;
T2436:;
	{register object V1129;
	object V1130;
	V1129= (VV[261]->s.s_dbind);
	V1130= CMPcar((V1129));
	goto T2457;
T2457:;
	if(!(((V1129))==Cnil)){
	goto T2458;}
	{object V1131 = Cnil;
	VMR97(V1131)}
	goto T2458;
T2458:;
	{object V1132;
	object V1133;
	object V1134;
	V1132= CMPcar((V1130));
	V1133= (*(LnkLI356))((V1132));
	{object V1135;
	object V1136= CMPcdr((V1130));
	if(V1136==Cnil){
	V1134= Cnil;
	goto T2465;}
	base[4]=V1135=MMcons(Cnil,Cnil);
	goto T2466;
T2466:;
	{object V1138;
	object V1139;
	object V1140;
	object V1141;
	object V1142;
	V1138= CMPcar((V1136->c.c_car));
	V1139= CMPcadr((V1136->c.c_car));
	V1140= CMPcaddr((V1136->c.c_car));
	if((V1140)!=Cnil){
	V1141= (V1140);
	goto T2471;}
	V1141= (V1132);
	goto T2471;
T2471:;
	base[11]= (V1141);
	vs_top=(vs_base=base+11)+1;
	Lsymbol_function();
	vs_top=sup;
	base[9]= vs_base[0];
	base[9]=MMcons(base[9],Cnil);
	base[11]= 
	make_cclosure_new(LC138,Cnil,base[9],Cdata);
	base[12]= list(2,VV[165],(V1141));
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk346)();
	vs_top=sup;
	V1143= vs_base[0];
	V1142= list(2,VV[36],V1143);
	base[11]= VV[20];
	base[12]= Cnil;
	base[13]= (V1138);
	base[14]= (V1139);
	base[15]= (V1142);
	base[16]= Cnil;
	(V1135->c.c_car)= simple_symlispcall(VV[462],base+11,6);}
	if((V1136=MMcdr(V1136))==Cnil){
	V1134= base[4];
	goto T2465;}
	V1135=MMcdr(V1135)=MMcons(Cnil,Cnil);
	goto T2466;}
	goto T2465;
T2465:;
	base[4]= (VV[331]->s.s_dbind);
	base[5]= V1133;
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk470)(Lclptr470);
	vs_top=sup;
	base[4]= (VV[252]->s.s_dbind);
	base[5]= V1133;
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk471)(Lclptr471);
	vs_top=sup;
	(void)((*(LnkLI472))((V1133),(V1134)));}
	V1129= CMPcdr((V1129));
	V1130= CMPcar((V1129));
	goto T2457;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for PARSE-DEFMETHOD	*/

static void L110()
{register object *base=vs_base;
	register object *sup=base+VM98; VC98
	vs_check;
	{register object V1146;
	check_arg(1);
	V1146=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1147;
	register object V1148;
	object V1149;
	{object V1150;
	V1150= CMPcar((V1146));
	V1146= CMPcdr((V1146));
	V1147= (V1150);}
	V1148= Cnil;
	V1149= Cnil;
	goto T2501;
T2501:;
	if((CMPcar((V1146)))==Cnil){
	goto T2504;}
	if(!(type_of(CMPcar((V1146)))!=t_cons)){
	goto T2504;}
	{register object V1151;
	{register object V1152;
	V1152= CMPcar((V1146));
	V1146= CMPcdr((V1146));
	V1151= (V1152);}
	V1148= make_cons((V1151),(V1148));
	goto T2502;}
	goto T2504;
T2504:;
	V1148= nreverse((V1148));
	goto T2499;
	goto T2502;
T2502:;
	goto T2501;
	goto T2499;
T2499:;
	{object V1153;
	V1153= CMPcar((V1146));
	V1146= CMPcdr((V1146));
	V1149= (V1153);}
	base[1]= (V1147);
	base[2]= (V1148);
	base[3]= (V1149);
	base[4]= (V1146);
	vs_top=(vs_base=base+1)+4;
	return;}
	}
}
/*	local entry for function PARSE-SPECIALIZERS	*/

static object LI111(V1155)

object V1155;
{	 VMB99 VMS99 VMV99
	goto TTL;
TTL:;
	{object V1156;
	object V1157= (V1155);
	if(V1157==Cnil){
	{object V1158 = Cnil;
	VMR99(V1158)}}
	base[0]=V1156=MMcons(Cnil,Cnil);
	goto T2524;
T2524:;
	base[1]= (V1157->c.c_car);
	vs_top=(vs_base=base+1)+1;
	L112(base);
	vs_top=sup;
	(V1156->c.c_car)= vs_base[0];
	if((V1157=MMcdr(V1157))==Cnil){
	{object V1159 = base[0];
	VMR99(V1159)}}
	V1156=MMcdr(V1156)=MMcons(Cnil,Cnil);
	goto T2524;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UNPARSE-SPECIALIZERS	*/

static object LI113(V1161)

object V1161;
{	 VMB100 VMS100 VMV100
	goto TTL;
TTL:;
	if(!(type_of((V1161))==t_cons||((V1161))==Cnil)){
	goto T2528;}
	{object V1162;
	object V1163= (V1161);
	if(V1163==Cnil){
	{object V1164 = Cnil;
	VMR100(V1164)}}
	base[0]=V1162=MMcons(Cnil,Cnil);
	goto T2530;
T2530:;
	base[1]= (V1163->c.c_car);
	vs_top=(vs_base=base+1)+1;
	L114(base);
	vs_top=sup;
	(V1162->c.c_car)= vs_base[0];
	if((V1163=MMcdr(V1163))==Cnil){
	{object V1165 = base[0];
	VMR100(V1165)}}
	V1162=MMcdr(V1162)=MMcons(Cnil,Cnil);
	goto T2530;}
	goto T2528;
T2528:;
	base[0]= (V1161);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk433)(Lclptr433);
	vs_top=sup;
	V1161= vs_base[0];
	goto TTL;
	base[0]=base[0];
	return Cnil;
}
/*	function definition for PARSE-METHOD-OR-SPEC	*/

static void L115()
{register object *base=vs_base;
	register object *sup=base+VM101; VC101
	vs_check;
	{object V1166;
	object V1167;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1166=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2536;}
	V1167=(base[1]);
	vs_top=sup;
	goto T2537;
	goto T2536;
T2536:;
	V1167= Ct;
	goto T2537;
T2537:;
	{register object V1168;
	register object V1169;
	object V1170;
	object V1171;
	V1168= Cnil;
	V1169= Cnil;
	V1170= Cnil;
	V1171= Cnil;
	base[2]= (V1166);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk473)(Lclptr473);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2541;}
	V1169= (V1166);
	base[2]= (V1169);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk474)(Lclptr474);
	vs_top=sup;
	V1168= vs_base[0];
	if((V1168)==Cnil){
	V1171= Cnil;
	goto T2550;}
	base[2]= (V1168);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk440)(Lclptr440);
	vs_top=sup;
	V1171= vs_base[0];
	goto T2550;
T2550:;
	if(((V1171))==Cnil){
	goto T2554;}
	base[2]= (V1169);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk476)(Lclptr476);
	vs_top=sup;
	V1172= vs_base[0];
	base[2]= (V1169);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk433)(Lclptr433);
	vs_top=sup;
	V1173= vs_base[0];
	V1174= (*(LnkLI477))(V1173);
	V1175= (*(LnkLI401))((V1171),V1172,/* INLINE-ARGS */V1174);
	V1170= (*(LnkLI475))(/* INLINE-ARGS */V1175);
	goto T2552;
	goto T2554;
T2554:;
	base[3]= Cnil;
	base[4]= VV[336];
	base[5]= (V1169);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lmake_symbol();
	vs_top=sup;
	V1170= vs_base[0];
	goto T2552;
T2552:;
	goto T2539;
	goto T2541;
T2541:;
	{object V1176;
	object V1177;
	register object V1178;
	base[2]= (V1166);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk352)();
	if(vs_base>=vs_top){vs_top=sup;goto T2566;}
	V1176= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2567;}
	V1177= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2568;}
	V1178= vs_base[0];
	vs_top=sup;
	goto T2569;
	goto T2566;
T2566:;
	V1176= Cnil;
	goto T2567;
T2567:;
	V1177= Cnil;
	goto T2568;
T2568:;
	V1178= Cnil;
	goto T2569;
T2569:;
	if((V1167)!=Cnil){
	if(((V1167))!=Cnil){
	goto T2573;}
	goto T2574;}
	if(((*(LnkLI355))((V1176)))!=Cnil){
	goto T2573;}
	goto T2574;
T2574:;
	V1168= Cnil;
	goto T2572;
	goto T2573;
T2573:;
	V1168= (*(LnkLI356))((V1176));
	goto T2572;
T2572:;
	if(((V1168))!=Cnil){
	goto T2570;}
	goto T2539;
	goto T2570;
T2570:;
	{object V1179;
	base[2]= (V1168);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk478)(Lclptr478);
	vs_top=sup;
	V1179= vs_base[0];
	V1180= (*(LnkLI458))((V1178));
	V1182 = CMPmake_fixnum((long)length((V1178)));
	base[2]= number_minus((V1179),V1182);
	base[3]= VV[223];
	base[4]= (VV[337]->s.s_dbind);
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	V1181= vs_base[0];
	V1178= append(/* INLINE-ARGS */V1180,V1181);
	V1169= (VFUN_NARGS=4,(*(LnkLI479))((V1168),(V1177),(V1178),(V1167)));
	if(((V1169))!=Cnil){
	goto T2583;}
	goto T2539;
	goto T2583;
T2583:;
	V1183= (*(LnkLI401))((V1176),(V1177),(V1178));
	V1170= (*(LnkLI475))(/* INLINE-ARGS */V1183);}}
	goto T2539;
T2539:;
	base[2]= (V1168);
	base[3]= (V1169);
	base[4]= (V1170);
	vs_top=(vs_base=base+2)+3;
	return;}
	}
}
/*	local entry for function EXTRACT-PARAMETERS	*/

static object LI116(V1185)

object V1185;
{	 VMB102 VMS102 VMV102
	goto TTL;
TTL:;
	{object V1186;
	object V1187;
	object V1188;
	base[0]= (V1185);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2592;}
	V1186= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2593;}
	V1187= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2594;}
	V1188= vs_base[0];
	vs_top=sup;
	goto T2595;
	goto T2592;
T2592:;
	V1186= Cnil;
	goto T2593;
T2593:;
	V1187= Cnil;
	goto T2594;
T2594:;
	V1188= Cnil;
	goto T2595;
T2595:;
	{object V1189 = (V1186);
	VMR102(V1189)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXTRACT-LAMBDA-LIST	*/

static object LI117(V1191)

object V1191;
{	 VMB103 VMS103 VMV103
	goto TTL;
TTL:;
	{object V1192;
	object V1193;
	object V1194;
	base[0]= (V1191);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2598;}
	V1192= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2599;}
	V1193= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2600;}
	V1194= vs_base[0];
	vs_top=sup;
	goto T2601;
	goto T2598;
T2598:;
	V1192= Cnil;
	goto T2599;
T2599:;
	V1193= Cnil;
	goto T2600;
T2600:;
	V1194= Cnil;
	goto T2601;
T2601:;
	{object V1195 = (V1193);
	VMR103(V1195)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXTRACT-SPECIALIZER-NAMES	*/

static object LI118(V1197)

object V1197;
{	 VMB104 VMS104 VMV104
	goto TTL;
TTL:;
	{object V1198;
	object V1199;
	object V1200;
	base[0]= (V1197);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2604;}
	V1198= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2605;}
	V1199= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2606;}
	V1200= vs_base[0];
	vs_top=sup;
	goto T2607;
	goto T2604;
T2604:;
	V1198= Cnil;
	goto T2605;
T2605:;
	V1199= Cnil;
	goto T2606;
T2606:;
	V1200= Cnil;
	goto T2607;
T2607:;
	{object V1201 = (V1200);
	VMR104(V1201)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXTRACT-REQUIRED-PARAMETERS	*/

static object LI119(V1203)

object V1203;
{	 VMB105 VMS105 VMV105
	goto TTL;
TTL:;
	{object V1204;
	object V1205;
	object V1206;
	object V1207;
	base[0]= (V1203);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2610;}
	V1204= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2611;}
	V1205= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2612;}
	V1206= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2613;}
	V1207= vs_base[0];
	vs_top=sup;
	goto T2614;
	goto T2610;
T2610:;
	V1204= Cnil;
	goto T2611;
T2611:;
	V1205= Cnil;
	goto T2612;
T2612:;
	V1206= Cnil;
	goto T2613;
T2613:;
	V1207= Cnil;
	goto T2614;
T2614:;
	{object V1208 = (V1207);
	VMR105(V1208)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for PARSE-SPECIALIZED-LAMBDA-LIST	*/

static void L120()
{register object *base=vs_base;
	register object *sup=base+VM106; VC106
	vs_check;
	{register object V1209;
	object V1210;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1209=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2615;}
	V1210=(base[1]);
	vs_top=sup;
	goto T2616;
	goto T2615;
T2615:;
	V1210= Cnil;
	goto T2616;
T2616:;
	{register object V1211;
	V1211= CMPcar((V1209));
	if(((V1209))!=Cnil){
	goto T2620;}
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+2)+4;
	return;
	goto T2620;
T2620:;
	if(!(((V1211))==(VV[56]))){
	goto T2627;}
	base[2]= Cnil;
	base[3]= (V1209);
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	return;
	goto T2627;
T2627:;
	{register object x= (V1211),V1212= VV[183];
	while(V1212!=Cnil)
	if(x==(V1212->c.c_car)){
	goto T2634;
	}else V1212=V1212->c.c_cdr;
	goto T2633;}
	goto T2634;
T2634:;
	{register object x= (V1211),V1213= VV[338];
	while(V1213!=Cnil)
	if(x==(V1213->c.c_car)){
	goto T2635;
	}else V1213=V1213->c.c_cdr;}
	base[2]= VV[339];
	base[3]= (V1211);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk398)();
	vs_top=sup;
	goto T2635;
T2635:;
	{object V1214;
	object V1215;
	base[2]= CMPcdr((V1209));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2643;}
	V1214= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2644;}
	V1215= vs_base[0];
	vs_top=sup;
	goto T2645;
	goto T2643;
T2643:;
	V1214= Cnil;
	goto T2644;
T2644:;
	V1215= Cnil;
	goto T2645;
T2645:;
	base[2]= (V1214);
	base[3]= make_cons((V1211),(V1215));
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+2)+4;
	return;}
	goto T2633;
T2633:;
	if(((V1210))==Cnil){
	goto T2651;}
	{object V1216;
	object V1217;
	base[2]= CMPcdr((V1209));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2656;}
	V1216= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2657;}
	V1217= vs_base[0];
	vs_top=sup;
	goto T2658;
	goto T2656;
T2656:;
	V1216= Cnil;
	goto T2657;
T2657:;
	V1217= Cnil;
	goto T2658;
T2658:;
	if(!(type_of((V1211))==t_cons||((V1211))==Cnil)){
	goto T2662;}
	V1218= CMPcar((V1211));
	goto T2660;
	goto T2662;
T2662:;
	V1218= (V1211);
	goto T2660;
T2660:;
	base[2]= make_cons(V1218,(V1216));
	base[3]= make_cons((V1211),(V1217));
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+2)+4;
	return;}
	goto T2651;
T2651:;
	{object V1219;
	object V1220;
	object V1221;
	object V1222;
	base[2]= CMPcdr((V1209));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2669;}
	V1219= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2670;}
	V1220= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2671;}
	V1221= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2672;}
	V1222= vs_base[0];
	vs_top=sup;
	goto T2673;
	goto T2669;
T2669:;
	V1219= Cnil;
	goto T2670;
T2670:;
	V1220= Cnil;
	goto T2671;
T2671:;
	V1221= Cnil;
	goto T2672;
T2672:;
	V1222= Cnil;
	goto T2673;
T2673:;
	if(!(type_of((V1211))==t_cons||((V1211))==Cnil)){
	goto T2677;}
	V1223= CMPcar((V1211));
	goto T2675;
	goto T2677;
T2677:;
	V1223= (V1211);
	goto T2675;
T2675:;
	base[2]= make_cons(V1223,(V1219));
	if(!(type_of((V1211))==t_cons||((V1211))==Cnil)){
	goto T2682;}
	V1224= CMPcar((V1211));
	goto T2680;
	goto T2682;
T2682:;
	V1224= (V1211);
	goto T2680;
T2680:;
	base[3]= make_cons(V1224,(V1220));
	if(!(type_of((V1211))==t_cons||((V1211))==Cnil)){
	goto T2687;}
	V1225= CMPcadr((V1211));
	goto T2685;
	goto T2687;
T2687:;
	V1225= Ct;
	goto T2685;
T2685:;
	base[4]= make_cons(V1225,(V1221));
	if(!(type_of((V1211))==t_cons||((V1211))==Cnil)){
	goto T2692;}
	V1226= CMPcar((V1211));
	goto T2690;
	goto T2692;
T2692:;
	V1226= (V1211);
	goto T2690;
T2690:;
	base[5]= make_cons(V1226,(V1222));
	vs_top=(vs_base=base+2)+4;
	return;}}
	}
}
/*	macro definition for SYMBOL-MACROLET	*/

static void L121()
{register object *base=vs_base;
	register object *sup=base+VM107; VC107
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1227=base[0]->c.c_cdr;
	if(endp(V1227))invalid_macro_call();
	base[2]= (V1227->c.c_car);
	V1227=V1227->c.c_cdr;
	base[3]= V1227;}
	{object V1228;
	object V1229= base[2];
	if(V1229==Cnil){
	base[4]= Cnil;
	goto T2694;}
	base[5]=V1228=MMcons(Cnil,Cnil);
	goto T2695;
T2695:;
	V1231= CMPcar((V1229->c.c_car));
	V1232= (*(LnkLI480))(CMPcar((V1229->c.c_car)),base[1]);
	(V1228->c.c_car)= list(3,/* INLINE-ARGS */V1231,/* INLINE-ARGS */V1232,CMPcadr((V1229->c.c_car)));
	if((V1229=MMcdr(V1229))==Cnil){
	base[4]= base[5];
	goto T2694;}
	V1228=MMcdr(V1228)=MMcons(Cnil,Cnil);
	goto T2695;}
	goto T2694;
T2694:;
	base[4]=MMcons(base[4],Cnil);
	base[5]= make_cons(VV[10],base[3]);
	base[6]= base[1];
	base[7]= 
	make_cclosure_new(LC139,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk396)();
	return;
}
/*	local entry for function EXPAND-SYMBOL-MACROLET-INTERNAL	*/

static object LI124(V1237,V1238,V1239,V1240)

object V1237;register object V1238;object V1239;object V1240;
{	 VMB108 VMS108 VMV108
	goto TTL;
TTL:;
	base[0]= (V1240);
	base[1]= (V1237);
	base[2]= Cnil;
	if(((V1239))==(VV[194])){
	goto T2701;}
	{object V1241 = (V1238);
	VMR108(V1241)}
	goto T2701;
T2701:;
	if(!(type_of((V1238))==t_symbol)){
	goto T2704;}
	{register object x= (V1238),V1242= base[1];
	while(V1242!=Cnil)
	if(eql(x,V1242->c.c_car->c.c_car) &&V1242->c.c_car != Cnil){
	base[2]= (V1242->c.c_car);
	goto T2710;
	}else V1242=V1242->c.c_cdr;
	base[2]= Cnil;}
	goto T2710;
T2710:;
	if((base[2])==Cnil){
	goto T2707;}
	V1243= CMPcadr(base[2]);
	V1244= (*(LnkLI480))((V1238),base[0]);
	if(!((/* INLINE-ARGS */V1243)==(/* INLINE-ARGS */V1244))){
	goto T2707;}
	{object V1245 = CMPcaddr(base[2]);
	VMR108(V1245)}
	goto T2707;
T2707:;
	{object V1246 = (V1238);
	VMR108(V1246)}
	goto T2704;
T2704:;
	if(type_of((V1238))==t_cons||((V1238))==Cnil){
	goto T2713;}
	{object V1247 = (V1238);
	VMR108(V1247)}
	goto T2713;
T2713:;
	{register object x= CMPcar((V1238)),V1248= VV[340];
	while(V1248!=Cnil)
	if(eql(x,V1248->c.c_car)){
	goto T2717;
	}else V1248=V1248->c.c_cdr;
	goto T2716;}
	goto T2717;
T2717:;
	base[3]= CMPcar((V1238));
	{object V1249;
	V1249= Cnil;
	base[4]= CMPcdr((V1238));
	vs_top=(vs_base=base+4)+1;
	L125(base);
	vs_top=sup;
	V1249= vs_base[0];
	{object V1250 = (*(LnkLI481))((V1238),base[3],(V1249));
	VMR108(V1250)}}
	goto T2716;
T2716:;
	if(!((CMPcar((V1238)))==(VV[341]))){
	goto T2723;}
	{object V1251;
	object V1252;
	V1251= CMPcadr((V1238));
	{object V1253;
	object V1254= (V1251);
	if(V1254==Cnil){
	V1252= Cnil;
	goto T2726;}
	base[5]=V1253=MMcons(Cnil,Cnil);
	goto T2727;
T2727:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	(V1253->c.c_car)= vs_base[0];
	if((V1254=MMcdr(V1254))==Cnil){
	V1252= base[5];
	goto T2726;}
	V1253=MMcdr(V1253)=MMcons(Cnil,Cnil);
	goto T2727;}
	goto T2726;
T2726:;
	V1256= CMPcaddr((V1238));
	{object V1258;
	object V1259= (V1251);
	object V1260= (V1252);
	if(V1259==Cnil||V1260==Cnil){
	V1257= Cnil;
	goto T2729;}
	base[5]=V1258=MMcons(Cnil,Cnil);
	goto T2730;
T2730:;
	(V1258->c.c_car)= list(3,VV[30],(V1259->c.c_car),(V1260->c.c_car));
	if((V1259=MMcdr(V1259))==Cnil||(V1260=MMcdr(V1260))==Cnil){
	V1257= base[5];
	goto T2729;}
	V1258=MMcdr(V1258)=MMcons(Cnil,Cnil);
	goto T2730;}
	goto T2729;
T2729:;
	{object V1263 = listA(4,VV[342],(V1252),/* INLINE-ARGS */V1256,reverse(V1257));
	VMR108(V1263)}}
	goto T2723;
T2723:;
	{object V1264 = (V1238);
	VMR108(V1264)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for WITH-SLOTS	*/

static void L126()
{register object *base=vs_base;
	register object *sup=base+VM109; VC109
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1265=base[0]->c.c_cdr;
	if(endp(V1265))invalid_macro_call();
	base[2]= (V1265->c.c_car);
	V1265=V1265->c.c_cdr;
	if(endp(V1265))invalid_macro_call();
	base[3]= (V1265->c.c_car);
	V1265=V1265->c.c_cdr;
	base[4]= V1265;}
	{register object V1266;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1266= vs_base[0];
	V1267= list(2,(V1266),base[3]);
	V1268= make_cons(/* INLINE-ARGS */V1267,Cnil);
	{object V1270;
	if(!(type_of(base[3])==t_cons)){
	goto T2736;}
	if(!((CMPcar(base[3]))==(VV[139]))){
	goto T2736;}
	V1270= CMPcaddr(base[3]);
	goto T2734;
	goto T2736;
T2736:;
	V1270= base[3];
	goto T2734;
T2734:;
	if(type_of((V1270))==t_symbol){
	goto T2740;}
	V1269= Cnil;
	goto T2733;
	goto T2740;
T2740:;
	V1271= list(2,VV[46],list(3,VV[343],(V1266),(V1270)));
	V1269= make_cons(/* INLINE-ARGS */V1271,Cnil);}
	goto T2733;
T2733:;
	{object V1273;
	object V1274= base[2];
	if(V1274==Cnil){
	V1272= Cnil;
	goto T2742;}
	base[5]=V1273=MMcons(Cnil,Cnil);
	goto T2743;
T2743:;
	{register object V1275;
	V1275= (V1274->c.c_car);
	{object V1276;
	object V1277;
	if(!(type_of((V1275))==t_symbol)){
	goto T2747;}
	V1276= (V1275);
	goto T2745;
	goto T2747;
T2747:;
	V1276= CMPcar((V1275));
	goto T2745;
T2745:;
	if(!(type_of((V1275))==t_symbol)){
	goto T2751;}
	V1277= (V1275);
	goto T2749;
	goto T2751;
T2751:;
	V1277= CMPcadr((V1275));
	goto T2749;
T2749:;
	(V1273->c.c_car)= list(2,(V1276),list(3,VV[197],(V1266),list(2,VV[1],(V1277))));}}
	if((V1274=MMcdr(V1274))==Cnil){
	V1272= base[5];
	goto T2742;}
	V1273=MMcdr(V1273)=MMcons(Cnil,Cnil);
	goto T2743;}
	goto T2742;
T2742:;
	V1278= list(2,(V1266),listA(3,VV[344],V1272,base[4]));
	base[5]= listA(3,VV[96],/* INLINE-ARGS */V1268,append(V1269,/* INLINE-ARGS */V1278));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	macro definition for WITH-ACCESSORS	*/

static void L127()
{register object *base=vs_base;
	register object *sup=base+VM110; VC110
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1279=base[0]->c.c_cdr;
	if(endp(V1279))invalid_macro_call();
	base[2]= (V1279->c.c_car);
	V1279=V1279->c.c_cdr;
	if(endp(V1279))invalid_macro_call();
	base[3]= (V1279->c.c_car);
	V1279=V1279->c.c_cdr;
	base[4]= V1279;}
	{register object V1280;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1280= vs_base[0];
	V1281= list(2,(V1280),base[3]);
	V1282= make_cons(/* INLINE-ARGS */V1281,Cnil);
	{object V1284;
	if(!(type_of(base[3])==t_cons)){
	goto T2757;}
	if(!((CMPcar(base[3]))==(VV[139]))){
	goto T2757;}
	V1284= CMPcaddr(base[3]);
	goto T2755;
	goto T2757;
T2757:;
	V1284= base[3];
	goto T2755;
T2755:;
	if(type_of((V1284))==t_symbol){
	goto T2761;}
	V1283= Cnil;
	goto T2754;
	goto T2761;
T2761:;
	V1285= list(2,VV[46],list(3,VV[343],(V1280),(V1284)));
	V1283= make_cons(/* INLINE-ARGS */V1285,Cnil);}
	goto T2754;
T2754:;
	{object V1287;
	object V1288= base[2];
	if(V1288==Cnil){
	V1286= Cnil;
	goto T2763;}
	base[5]=V1287=MMcons(Cnil,Cnil);
	goto T2764;
T2764:;
	{object V1290;
	object V1291;
	V1290= CMPcar((V1288->c.c_car));
	V1291= CMPcadr((V1288->c.c_car));
	(V1287->c.c_car)= list(2,(V1290),list(2,(V1291),(V1280)));}
	if((V1288=MMcdr(V1288))==Cnil){
	V1286= base[5];
	goto T2763;}
	V1287=MMcdr(V1287)=MMcons(Cnil,Cnil);
	goto T2764;}
	goto T2763;
T2763:;
	V1292= list(2,(V1280),listA(3,VV[344],V1286,base[4]));
	base[5]= listA(3,VV[96],/* INLINE-ARGS */V1282,append(V1283,/* INLINE-ARGS */V1292));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	local function SCAN-SETF	*/

static void L125(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM111; VC111
	vs_check;
	{register object V1293;
	check_arg(1);
	V1293=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1293))!=Cnil){
	goto T2769;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2769;
T2769:;
	{register object x= CMPcar((V1293)),V1295= base0[1];
	while(V1295!=Cnil)
	if(eql(x,V1295->c.c_car->c.c_car) &&V1295->c.c_car != Cnil){
	base0[2]= (V1295->c.c_car);
	goto T2776;
	}else V1295=V1295->c.c_cdr;
	base0[2]= Cnil;}
	goto T2776;
T2776:;
	if((base0[2])==Cnil){
	goto T2773;}
	V1296= CMPcadr(base0[2]);
	V1297= (*(LnkLI480))(CMPcar((V1293)),base0[0]);
	if(!((/* INLINE-ARGS */V1296)==(/* INLINE-ARGS */V1297))){
	goto T2773;}
	base0[3]= VV[30];
	V1294= CMPcaddr(base0[2]);
	goto T2771;
	goto T2773;
T2773:;
	V1294= CMPcar((V1293));
	goto T2771;
T2771:;
	V1298= CMPcadr((V1293));
	base[1]= CMPcddr((V1293));
	vs_top=(vs_base=base+1)+1;
	L125(base0);
	vs_top=sup;
	V1299= vs_base[0];
	base[1]= (VFUN_NARGS=4,(*(LnkLI482))((V1293),V1294,/* INLINE-ARGS */V1298,V1299));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC139(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM112; VC112
	vs_check;
	{object V1300;
	object V1301;
	object V1302;
	check_arg(3);
	V1300=(base[0]);
	V1301=(base[1]);
	V1302=(base[2]);
	vs_top=sup;
	base[3]= (*(LnkLI483))((base0[0]->c.c_car),(V1300),(V1301),(V1302));
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	local function UNPARSE	*/

static void L114(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM113; VC113
	vs_check;
	{object V1303;
	check_arg(1);
	V1303=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V1303);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk484)(Lclptr484);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2783;}
	{register object V1304;
	base[1]= (V1303);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk485)(Lclptr485);
	vs_top=sup;
	V1304= vs_base[0];
	if(!(type_of((V1304))==t_cons)){
	goto T2789;}
	if(!((CMPcar((V1304)))==(VV[51]))){
	goto T2789;}
	{object V1305;
	object V1306;
	V1305= CMPcadr((V1304));
	base[3]= (V1305);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	V1306= vs_base[0];
	V1307= (VFUN_NARGS=2,(*(LnkLI290))((V1306),Cnil));
	if(!(((V1305))==(/* INLINE-ARGS */V1307))){
	goto T2797;}
	base[3]= (V1306);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2797;
T2797:;
	base[3]= (V1304);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2789;
T2789:;
	base[1]= (V1304);
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2783;
T2783:;
	base[1]= VV[335];
	base[2]= (V1303);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	}
}
/*	local function PARSE	*/

static void L112(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM114; VC114
	vs_check;
	{register object V1308;
	check_arg(1);
	V1308=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1309;
	base[1]= (V1308);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk486)();
	vs_top=sup;
	V1309= vs_base[0];
	base[1]= (V1309);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk484)(Lclptr484);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2804;}
	base[1]= (V1309);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2804;
T2804:;
	if(!(type_of((V1308))==t_symbol)){
	goto T2808;}
	base[1]= VV[333];
	base[2]= (V1308);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	goto T2808;
T2808:;
	base[1]= VV[334];
	base[2]= (V1308);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC138(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM115; VC115
	vs_check;
	{object V1310;
	register object V1311;
	check_arg(2);
	V1310=(base[0]);
	V1311=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	{object V1312;
	V1312= (V1310);
	 vs_top=base+3;
	 while(V1312!=Cnil)
	 {vs_push((V1312)->c.c_car);V1312=(V1312)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local function CLOSURE	*/

static void LC137(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM116; VC116
	vs_check;
	{object V1313;
	check_arg(1);
	V1313=(base[0]);
	vs_top=sup;
	base[1]= (((type_of((V1313))==t_symbol?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC136(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM117; VC117
	vs_check;
	{object V1314;
	check_arg(1);
	V1314=(base[0]);
	vs_top=sup;
	base[1]= (((((V1314))==(Ct)?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC135(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM118; VC118
	vs_check;
	{object V1315;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1315=(base[0]);
	vs_top=sup;
	base[1]= VV[273];
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC134(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM119; VC119
	vs_check;
	{object V1316;
	register object V1317;
	check_arg(2);
	V1316=(base[0]);
	V1317=(base[1]);
	vs_top=sup;
	base[2]= (V1317);
	base[3]= VV[269];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	base[2]= (V1317);
	base[3]= VV[270];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	base[2]= (V1317);
	base[3]= VV[271];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI487))((V1316),(V1317)));
	base[2]= (V1317);
	base[3]= VV[272];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC133(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM120; VC120
	vs_check;
	{object V1318;
	check_arg(1);
	V1318=(base[0]);
	vs_top=sup;
	{register object x= (V1318),V1319= (base0[0]->c.c_car);
	while(V1319!=Cnil)
	if(x==(V1319->c.c_car)){
	base[1]= V1319;
	vs_top=(vs_base=base+1)+1;
	return;
	}else V1319=V1319->c.c_cdr;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function COMPARE	*/

static void L83(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM121; VC121
	vs_check;
	{object V1320;
	object V1321;
	check_arg(2);
	V1320=(base[0]);
	V1321=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(number_compare((V1320),(V1321))>0)){
	goto T2831;}
	base[2]= VV[250];
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2831;
T2831:;
	base[2]= VV[251];
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function LOSE	*/

static void L82(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM122; VC122
	vs_check;
	{object V1322;
	object V1323;
	if(vs_top-vs_base<1) too_few_arguments();
	V1322=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1323=(base[1]);
	vs_top=sup;
	base[2]= VV[249];
	base[3]= base0[2];
	base[4]= base0[0];
	base[6]= Cnil;
	base[7]= (V1322);
	{object V1324;
	V1324= (V1323);
	 vs_top=base+8;
	 while(V1324!=Cnil)
	 {vs_push((V1324)->c.c_car);V1324=(V1324)->c.c_cdr;}
	vs_base=base+6;}
	Lformat();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+2)+4;
	Lerror();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC132(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM123; VC123
	vs_check;
	{object V1325;
	check_arg(1);
	V1325=(base[0]);
	vs_top=sup;
	base[1]= (((((V1325))==(Ct)?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function PARSE-KEYWORD-ARGUMENT	*/

static void L64(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM124; VC124
	vs_check;
	{object V1326;
	check_arg(1);
	V1326=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V1326))==t_cons||((V1326))==Cnil)){
	goto T2841;}
	{object V1327= CMPcar((V1326));
	if(!(type_of(V1327)==t_cons||(V1327)==Cnil)){
	goto T2844;}}
	base[1]= CMPcaar((V1326));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2844;
T2844:;
	base[1]= CMPcar((V1326));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk488)();
	return;
	goto T2841;
T2841:;
	base[1]= (V1326);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk488)();
	return;
	}
}
/*	local function SET-MF-PROPERTY	*/

static void L62(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM125; VC125
	vs_check;
	{object V1328;
	object V1329;
	check_arg(2);
	V1328=(base[0]);
	V1329=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((base0[0])==Cnil){
	goto T2848;}
	(void)((*(LnkLI489))((V1329),base0[0],V1328));
	goto T2848;
T2848:;
	if((base0[4])==Cnil){
	goto T2852;}
	base[2]= (*(LnkLI489))((V1329),base0[4],V1328);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2852;
T2852:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function IGNOREDP	*/

static void L49(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM126; VC126
	vs_check;
	{object V1334;
	check_arg(1);
	V1334=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1335;
	register object V1336;
	V1335= CMPcdar(base0[0]);
	V1336= CMPcar((V1335));
	goto T2857;
T2857:;
	if(!(((V1335))==Cnil)){
	goto T2858;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2858;
T2858:;
	if(!((CMPcar((V1336)))==(VV[182]))){
	goto T2862;}
	{register object x= (V1334),V1337= CMPcdr((V1336));
	while(V1337!=Cnil)
	if(x==(V1337->c.c_car)){
	goto T2866;
	}else V1337=V1337->c.c_cdr;
	goto T2862;}
	goto T2866;
T2866:;
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2862;
T2862:;
	V1335= CMPcdr((V1335));
	V1336= CMPcar((V1335));
	goto T2857;}
	}
}
/*	local function WALK-FUNCTION	*/

static void LC44(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM127; VC127
	vs_check;
	{register object V1338;
	object V1339;
	object V1340;
	check_arg(3);
	V1338=(base[0]);
	V1339=(base[1]);
	V1340=(base[2]);
	vs_top=sup;
	if(((V1339))==(VV[194])){
	goto T2873;}
	base[3]= (V1338);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2873;
T2873:;
	if(type_of((V1338))==t_cons||((V1338))==Cnil){
	goto T2876;}
	base[3]= (V1338);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2876;
T2876:;
	if(!((CMPcar((V1338)))==(VV[195]))){
	goto T2879;}
	(base0[2]->c.c_car)= Ct;
	base[3]= (V1338);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2879;
T2879:;
	if(!((CMPcar((V1338)))==(VV[196]))){
	goto T2884;}
	(base0[0]->c.c_car)= Ct;
	base[3]= (V1338);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2884;
T2884:;
	{object V1341;
	if((CMPcar((V1338)))==(VV[34])){
	goto T2889;}
	V1341= Cnil;
	goto T2888;
	goto T2889;
T2889:;
	if(!((CMPcadr((V1338)))==(VV[195]))){
	goto T2892;}
	(base0[2]->c.c_car)= Ct;
	(base0[1]->c.c_car)= Ct;
	V1341= (V1338);
	goto T2888;
	goto T2892;
T2892:;
	if(!((CMPcadr((V1338)))==(VV[196]))){
	goto T2899;}
	(base0[0]->c.c_car)= Ct;
	(base0[1]->c.c_car)= Ct;
	V1341= (V1338);
	goto T2888;
	goto T2899;
T2899:;
	V1341= Cnil;
	goto T2888;
T2888:;
	if(((V1341))==Cnil){
	goto T2906;}
	base[3]= (V1341);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2906;
T2906:;
	if((CMPcar((V1338)))==(VV[197])){
	goto T2910;}
	if((CMPcar((V1338)))==(VV[198])){
	goto T2910;}
	if(!((CMPcar((V1338)))==(VV[199]))){
	goto T2909;}
	goto T2910;
T2910:;
	base[3]= CMPcaddr((V1338));
	vs_top=(vs_base=base+3)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2909;}
	{object V1342;
	V1342= (*(LnkLI490))((V1338),(base0[5]->c.c_car),(V1340));
	{object V1343= CMPcar((V1338));
	if((V1343!= VV[197]))goto T2919;
	base[3]= (*(LnkLI491))((base0[4]->c.c_car),(V1342),(V1338));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2919;
T2919:;
	if((V1343!= VV[198]))goto T2920;
	base[3]= (*(LnkLI492))((base0[4]->c.c_car),(V1342),(V1338));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2920;
T2920:;
	if((V1343!= VV[199]))goto T2921;
	base[3]= (*(LnkLI493))((base0[4]->c.c_car),(V1342),(V1338));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2921;
T2921:;
	FEerror("The ECASE key value ~s is illegal.",1,V1343);
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}}
	goto T2909;
T2909:;
	if(!((CMPcar((V1338)))==(VV[138]))){
	goto T2923;}
	if(!(type_of(CMPcadr((V1338)))==t_cons)){
	goto T2923;}
	if(!((CMPcar(CMPcadr((V1338))))==(VV[34]))){
	goto T2923;}
	base[3]= CMPcadr(CMPcadr((V1338)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk494)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2923;}
	base[3]= (*(LnkLI495))((V1338),(base0[5]->c.c_car),(V1340),(base0[4]->c.c_car),(base0[3]->c.c_car));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2923;
T2923:;
	if(type_of(CMPcar((V1338)))==t_symbol){
	goto T2934;}
	if(!(type_of(CMPcar((V1338)))==t_cons)){
	goto T2933;}
	if(!((CMPcaar((V1338)))==(VV[30]))){
	goto T2933;}
	goto T2934;
T2934:;
	base[3]= CMPcar((V1338));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk494)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2933;}
	base[3]= (*(LnkLI495))((V1338),(base0[5]->c.c_car),(V1340),(base0[4]->c.c_car),(base0[3]->c.c_car));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2933;
T2933:;
	if(!((CMPcar((V1338)))==(VV[200]))){
	goto T2943;}
	if(((VV[22]->s.s_dbind))==Cnil){
	goto T2943;}
	{object V1344= CMPcadddr((V1338));
	if((V1344!= VV[254]))goto T2948;
	{object V1345;
	V1345= CMPcaddr((V1338));
	(VV[23]->s.s_dbind)= make_cons((V1345),(VV[23]->s.s_dbind));
	goto T2947;}
	goto T2948;
T2948:;
	if((V1344!= VV[256]))goto T2951;
	{object V1346;
	V1346= CMPcaddr((V1338));
	(VV[24]->s.s_dbind)= make_cons((V1346),(VV[24]->s.s_dbind));
	goto T2947;}
	goto T2951;
T2951:;
	if((V1344!= VV[258]))goto T2954;
	{object V1347;
	V1347= CMPcaddr((V1338));
	(VV[25]->s.s_dbind)= make_cons((V1347),(VV[25]->s.s_dbind));
	goto T2947;}
	goto T2954;
T2954:;}
	goto T2947;
T2947:;
	base[3]= make_cons(CMPcadr((V1338)),CMPcddddr((V1338)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2943;
T2943:;
	base[3]= (V1338);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function PROCESS-VAR	*/

static void L40(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM128; VC128
	vs_check;
	{register object V1348;
	check_arg(1);
	V1348=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object x= (V1348),V1349= VV[183];
	while(V1349!=Cnil)
	if(x==(V1349->c.c_car)){
	goto T2959;
	}else V1349=V1349->c.c_cdr;
	goto T2958;}
	goto T2959;
T2959:;
	{object V1350= (V1348);
	if((V1350!= VV[407]))goto T2961;
	base0[7]= VV[184];
	goto T2960;
	goto T2961;
T2961:;
	if((V1350!= VV[62]))goto T2963;
	base0[7]= VV[185];
	goto T2960;
	goto T2963;
T2963:;
	if((V1350!= VV[63]))goto T2965;
	goto T2960;
	goto T2965;
T2965:;
	if((V1350!= VV[170]))goto T2966;
	base0[7]= VV[186];
	goto T2960;
	goto T2966;
T2966:;
	if((V1350!= VV[56]))goto T2968;
	base0[7]= VV[187];
	goto T2960;
	goto T2968;
T2968:;
	base[1]= VV[188];
	base[2]= (V1348);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;}
	goto T2960;
T2960:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2958;
T2958:;
	{object V1351= base0[7];
	if((V1351!= VV[181]))goto T2972;
	V1352= list(2,(V1348),list(2,VV[189],base0[5]));
	base[1]= make_cons(/* INLINE-ARGS */V1352,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2972;
T2972:;
	if((V1351!= VV[184]))goto T2973;
	if(type_of((V1348))==t_cons){
	goto T2975;}
	V1353= list(2,(V1348),list(3,VV[116],base0[5],list(2,VV[189],base0[5])));
	base[1]= make_cons(/* INLINE-ARGS */V1353,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2975;
T2975:;
	if((CMPcddr((V1348)))!=Cnil){
	goto T2978;}
	V1354= CMPcar((V1348));
	V1355= list(2,/* INLINE-ARGS */V1354,list(4,VV[130],base0[5],list(2,VV[189],base0[5]),CMPcadr((V1348))));
	base[1]= make_cons(/* INLINE-ARGS */V1355,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2978;
T2978:;
	V1356= list(2,CMPcaddr((V1348)),base0[5]);
	V1357= CMPcar((V1348));
	base[1]= list(2,/* INLINE-ARGS */V1356,list(2,/* INLINE-ARGS */V1357,list(4,VV[130],base0[5],list(2,VV[189],base0[5]),CMPcadr((V1348)))));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2973;
T2973:;
	if((V1351!= VV[186]))goto T2980;
	V1358= list(2,(V1348),base0[5]);
	base[1]= make_cons(/* INLINE-ARGS */V1358,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2980;
T2980:;
	if((V1351!= VV[185]))goto T2981;
	if(type_of((V1348))==t_cons){
	goto T2983;}
	base[1]= (V1348);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk488)();
	vs_top=sup;
	V1359= vs_base[0];
	V1360= list(2,(V1348),list(3,VV[190],V1359,base0[5]));
	base[1]= make_cons(/* INLINE-ARGS */V1360,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2983;
T2983:;
	if((CMPcddr((V1348)))!=Cnil){
	goto T2988;}
	{object V1361;
	object V1362;
	if(!(type_of(CMPcar((V1348)))==t_cons)){
	goto T2992;}
	base[1]= CMPcaar((V1348));
	base[2]= CMPcadar((V1348));
	vs_top=(vs_base=base+1)+2;
	goto T2990;
	goto T2992;
T2992:;
	base[2]= CMPcar((V1348));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk488)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= CMPcar((V1348));
	vs_top=(vs_base=base+1)+2;
	goto T2990;
T2990:;
	if(vs_base>=vs_top){vs_top=sup;goto T2999;}
	V1361= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T3000;}
	V1362= vs_base[0];
	vs_top=sup;
	goto T3001;
	goto T2999;
T2999:;
	V1361= Cnil;
	goto T3000;
T3000:;
	V1362= Cnil;
	goto T3001;
T3001:;
	V1363= list(2,base0[6],list(3,VV[191],(V1361),base0[5]));
	V1364= list(2,VV[192],base0[6]);
	base[1]= list(2,/* INLINE-ARGS */V1363,list(2,(V1362),list(4,VV[130],/* INLINE-ARGS */V1364,list(2,VV[193],base0[6]),CMPcadr((V1348)))));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2988;
T2988:;
	{object V1365;
	object V1366;
	if(!(type_of(CMPcar((V1348)))==t_cons)){
	goto T3004;}
	base[1]= CMPcaar((V1348));
	base[2]= CMPcadar((V1348));
	vs_top=(vs_base=base+1)+2;
	goto T3002;
	goto T3004;
T3004:;
	base[2]= CMPcar((V1348));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk488)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= CMPcar((V1348));
	vs_top=(vs_base=base+1)+2;
	goto T3002;
T3002:;
	if(vs_base>=vs_top){vs_top=sup;goto T3011;}
	V1365= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T3012;}
	V1366= vs_base[0];
	vs_top=sup;
	goto T3013;
	goto T3011;
T3011:;
	V1365= Cnil;
	goto T3012;
T3012:;
	V1366= Cnil;
	goto T3013;
T3013:;
	V1367= list(2,base0[6],list(3,VV[191],(V1365),base0[5]));
	V1368= list(2,CMPcaddr((V1348)),base0[6]);
	V1369= list(2,VV[192],base0[6]);
	base[1]= list(3,/* INLINE-ARGS */V1367,/* INLINE-ARGS */V1368,list(2,(V1366),list(4,VV[130],/* INLINE-ARGS */V1369,list(2,VV[193],base0[6]),CMPcadr((V1348)))));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2981;
T2981:;
	if((V1351!= VV[187]))goto T3014;
	base[1]= make_cons((V1348),Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3014;
T3014:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC131(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM129; VC129
	vs_check;
	{object V1370;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1370=(base[0]);
	vs_top=sup;
	base[1]= STREF(object,(base0[0]->c.c_car),0);
	base[2]= (V1370);
	{object V1371;
	V1371= STREF(object,(base0[0]->c.c_car),4);
	 vs_top=base+3;
	 while(V1371!=Cnil)
	 {vs_push((V1371)->c.c_car);V1371=(V1371)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local function CLOSURE	*/

static void LC130(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM130; VC130
	vs_check;
	{object V1372;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1372=(base[0]);
	vs_top=sup;
	base[1]= STREF(object,(base0[2]->c.c_car),0);
	base[2]= STREF(object,(base0[2]->c.c_car),4);
	base[3]= STREF(object,(base0[2]->c.c_car),8);
	{object V1373;
	if(((base0[0]->c.c_car))==Cnil){
	goto T3025;}
	{object V1374;
	object V1375;
	V1374= nthcdr(fix((base0[1]->c.c_car)),(V1372));
	base[6]= (V1372);
	base[7]= (V1374);
	vs_top=(vs_base=base+6)+2;
	Lldiff();
	vs_top=sup;
	V1375= vs_base[0];
	V1373= nconc((V1375),(V1374));
	goto T3023;}
	goto T3025;
T3025:;
	V1373= (V1372);
	goto T3023;
T3023:;
	 vs_top=base+4;
	 while(V1373!=Cnil)
	 {vs_push((V1373)->c.c_car);V1373=(V1373)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local function CLOSURE	*/

static void LC129(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM131; VC131
	vs_check;
	{register object V1376;
	check_arg(1);
	V1376=(base[0]);
	vs_top=sup;
	if(!(type_of((V1376))==t_cons)){
	goto T3032;}
	if((CMPcar((V1376)))==(VV[31])){
	goto T3034;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3034;
T3034:;
	base[1]= CMPcadr((V1376));
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T3036;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3036;
T3036:;
	{register object V1377;
	base[1]= CMPcadr((V1376));
	vs_top=(vs_base=base+1)+1;
	Leval();
	vs_top=sup;
	V1377= vs_base[0];{object V1378;
	V1378= (*(LnkLI365))((V1377));
	if(V1378==Cnil)goto T3041;
	base[1]= V1378;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3041;
T3041:;}
	if(!(type_of((V1377))==t_fixnum||type_of((V1377))==t_bignum)){
	goto T3043;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3043;
T3043:;
	if(type_of((V1377))==t_character){
	goto T3045;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3045;
T3045:;
	base[1]= (V1377);
	vs_top=(vs_base=base+1)+1;
	Lstandard_char_p();
	return;}
	goto T3032;
T3032:;
	base[1]= (*(LnkLI365))((V1376));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function DUPLICATE-OPTION	*/

static void L5(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM132; VC132
	vs_check;
	{object V1379;
	check_arg(1);
	V1379=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[9];
	base[2]= (V1379);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC128(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM133; VC133
	vs_check;
	{object V1380;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1380=(base[0]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	base[1]= vs_base[0];
	{object V1381;
	V1381= (V1380);
	 vs_top=base+2;
	 while(V1381!=Cnil)
	 {vs_push((V1381)->c.c_car);V1381=(V1381)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
static object  LnkTLI495(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[495],(void **)(void *)&LnkLI495,5,first,ap);va_end(ap);return V1;} /* OPTIMIZE-GENERIC-FUNCTION-CALL */
static void LnkT494(){ call_or_link(VV[494],(void **)(void *)&Lnk494);} /* GENERIC-FUNCTION-NAME-P */
static object  LnkTLI493(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[493],(void **)(void *)&LnkLI493,3,first,ap);va_end(ap);return V1;} /* OPTIMIZE-SLOT-BOUNDP */
static object  LnkTLI492(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[492],(void **)(void *)&LnkLI492,3,first,ap);va_end(ap);return V1;} /* OPTIMIZE-SET-SLOT-VALUE */
static object  LnkTLI491(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[491],(void **)(void *)&LnkLI491,3,first,ap);va_end(ap);return V1;} /* OPTIMIZE-SLOT-VALUE */
static object  LnkTLI490(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[490],(void **)(void *)&LnkLI490,3,first,ap);va_end(ap);return V1;} /* CAN-OPTIMIZE-ACCESS */
static object  LnkTLI489(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[489],(void **)(void *)&LnkLI489,3,first,ap);va_end(ap);return V1;} /* SETF PCL METHOD-FUNCTION-GET */
static void LnkT488(){ call_or_link(VV[488],(void **)(void *)&Lnk488);} /* MAKE-KEYWORD */
static object  LnkTLI487(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[487],(void **)(void *)&LnkLI487,2,first,ap);va_end(ap);return V1;} /* PRINTING-RANDOM-THING-INTERNAL */
static void LnkT486(){ call_or_link(VV[486],(void **)(void *)&Lnk486);} /* SPECIALIZER-FROM-TYPE */
static void LnkT485(ptr) object *ptr;{ call_or_link_closure(VV[485],(void **)(void *)&Lnk485,(void **)(void *)&Lclptr485);} /* SPECIALIZER-TYPE */
static void LnkT484(ptr) object *ptr;{ call_or_link_closure(VV[484],(void **)(void *)&Lnk484,(void **)(void *)&Lclptr484);} /* SPECIALIZERP */
static object  LnkTLI483(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[483],(void **)(void *)&LnkLI483,4,first,ap);va_end(ap);return V1;} /* EXPAND-SYMBOL-MACROLET-INTERNAL */
static object  LnkTLI482(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[482],(void **)(void *)&LnkLI482,first,ap);va_end(ap);return V1;} /* RELIST* */
static object  LnkTLI481(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[481],(void **)(void *)&LnkLI481,3,first,ap);va_end(ap);return V1;} /* RECONS */
static object  LnkTLI480(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[480],(void **)(void *)&LnkLI480,2,first,ap);va_end(ap);return V1;} /* VARIABLE-LEXICAL-P */
static object  LnkTLI479(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[479],(void **)(void *)&LnkLI479,first,ap);va_end(ap);return V1;} /* GET-METHOD */
static void LnkT478(ptr) object *ptr;{ call_or_link_closure(VV[478],(void **)(void *)&Lnk478,(void **)(void *)&Lclptr478);} /* COMPUTE-DISCRIMINATING-FUNCTION-ARGLIST-INFO */
static object  LnkTLI477(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[477],(void **)(void *)&LnkLI477,1,first,ap);va_end(ap);return V1;} /* UNPARSE-SPECIALIZERS */
static void LnkT476(ptr) object *ptr;{ call_or_link_closure(VV[476],(void **)(void *)&Lnk476,(void **)(void *)&Lclptr476);} /* METHOD-QUALIFIERS */
static object  LnkTLI475(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[475],(void **)(void *)&LnkLI475,1,first,ap);va_end(ap);return V1;} /* INTERN-FUNCTION-NAME */
static void LnkT474(ptr) object *ptr;{ call_or_link_closure(VV[474],(void **)(void *)&Lnk474,(void **)(void *)&Lclptr474);} /* METHOD-GENERIC-FUNCTION */
static void LnkT473(ptr) object *ptr;{ call_or_link_closure(VV[473],(void **)(void *)&Lnk473,(void **)(void *)&Lclptr473);} /* METHOD-P */
static object  LnkTLI472(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[472],(void **)(void *)&LnkLI472,2,first,ap);va_end(ap);return V1;} /* SET-METHODS */
static void LnkT471(ptr) object *ptr;{ call_or_link_closure(VV[471],(void **)(void *)&Lnk471,(void **)(void *)&Lclptr471);} /* SETF PCL GENERIC-FUNCTION-METHOD-COMBINATION */
static void LnkT470(ptr) object *ptr;{ call_or_link_closure(VV[470],(void **)(void *)&Lnk470,(void **)(void *)&Lclptr470);} /* SETF PCL GENERIC-FUNCTION-METHOD-CLASS */
static void LnkT469(){ call_or_link(VV[469],(void **)(void *)&Lnk469);} /* REAL-MAKE-A-METHOD */
static void LnkT468(){ call_or_link(VV[468],(void **)(void *)&Lnk468);} /* DELETE */
static object  LnkTLI466(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[466],(void **)(void *)&LnkLI466,first,ap);va_end(ap);return V1;} /* REAL-GET-METHOD */
static object  LnkTLI465(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[465],(void **)(void *)&LnkLI465,first,ap);va_end(ap);return V1;} /* UPDATE-DFUN */
static object  LnkTLI461(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[461],(void **)(void *)&LnkLI461,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-QUALIFIERS */
static void LnkT290(){ call_or_link(VV[290],(void **)(void *)&Lnk290);} /* FIND-CLASS */
static void LnkT460(){ call_or_link(VV[460],(void **)(void *)&Lnk460);} /* SEVENTH */
static void LnkT459(){ call_or_link(VV[459],(void **)(void *)&Lnk459);} /* FIFTH */
static object  LnkTLI458(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[458],(void **)(void *)&LnkLI458,1,first,ap);va_end(ap);return V1;} /* PARSE-SPECIALIZERS */
static object  LnkTLI456(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[456],(void **)(void *)&LnkLI456,first,ap);va_end(ap);return V1;} /* INITIALIZE-METHOD-FUNCTION */
static void LnkT454(ptr) object *ptr;{ call_or_link_closure(VV[454],(void **)(void *)&Lnk454,(void **)(void *)&Lclptr454);} /* MAKE-INSTANCE */
static void LnkT453(ptr) object *ptr;{ call_or_link_closure(VV[453],(void **)(void *)&Lnk453,(void **)(void *)&Lclptr453);} /* REINITIALIZE-INSTANCE */
static void LnkT452(ptr) object *ptr;{ call_or_link_closure(VV[452],(void **)(void *)&Lnk452,(void **)(void *)&Lclptr452);} /* CHANGE-CLASS */
static void LnkT300(ptr) object *ptr;{ call_or_link_closure(VV[300],(void **)(void *)&Lnk300,(void **)(void *)&Lclptr300);} /* FIND-METHOD-COMBINATION */
static void LnkT451(ptr) object *ptr;{ call_or_link_closure(VV[451],(void **)(void *)&Lnk451,(void **)(void *)&Lclptr451);} /* GF-DFUN-STATE */
static void LnkT450(ptr) object *ptr;{ call_or_link_closure(VV[450],(void **)(void *)&Lnk450,(void **)(void *)&Lclptr450);} /* SETF PCL GF-DFUN-STATE */
static object  LnkTLI449(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[449],(void **)(void *)&LnkLI449,first,ap);va_end(ap);return V1;} /* SET-ARG-INFO */
static object  LnkTLI11(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[11],(void **)(void *)&LnkLI11,2,first,ap);va_end(ap);return V1;} /* PROCLAIM-DEFGENERIC */
static object  LnkTLI448(){return call_proc0(VV[448],(void **)(void *)&LnkLI448);} /* MAKE-ARG-INFO */
static object  LnkTLI447(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[447],(void **)(void *)&LnkLI447,4,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-SET-SLOT */
static object  LnkTLI446(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[446],(void **)(void *)&LnkLI446,2,first,ap);va_end(ap);return V1;} /* SET-FUNCALLABLE-INSTANCE-FUNCTION */
static object  LnkTLI445(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[445],(void **)(void *)&LnkLI445,first,ap);va_end(ap);return V1;} /* ALLOCATE-FUNCALLABLE-INSTANCE */
static object  LnkTLI444(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[444],(void **)(void *)&LnkLI444,first,ap);va_end(ap);return V1;} /* MAKE-EARLY-GF */
static void LnkT291(ptr) object *ptr;{ call_or_link_closure(VV[291],(void **)(void *)&Lnk291,(void **)(void *)&Lclptr291);} /* CLASSP */
static void LnkT443(ptr) object *ptr;{ call_or_link_closure(VV[443],(void **)(void *)&Lnk443,(void **)(void *)&Lclptr443);} /* COMPUTE-APPLICABLE-METHODS */
static void LnkT442(){ call_or_link(VV[442],(void **)(void *)&Lnk442);} /* FIND */
static object  LnkTLI441(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[441],(void **)(void *)&LnkLI441,1,first,ap);va_end(ap);return V1;} /* EARLY-GF-NAME */
static void LnkT440(ptr) object *ptr;{ call_or_link_closure(VV[440],(void **)(void *)&Lnk440,(void **)(void *)&Lclptr440);} /* GENERIC-FUNCTION-NAME */
static void LnkT439(){ call_or_link(VV[439],(void **)(void *)&Lnk439);} /* COMPUTE-APPLICABLE-METHODS-EMF */
static object  LnkTLI438(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[438],(void **)(void *)&LnkLI438,1,first,ap);va_end(ap);return V1;} /* EARLY-GF-P */
static void LnkT437(){ call_or_link(VV[437],(void **)(void *)&Lnk437);} /* RAISE-METATYPE */
static void LnkT436(ptr) object *ptr;{ call_or_link_closure(VV[436],(void **)(void *)&Lnk436,(void **)(void *)&Lclptr436);} /* GENERIC-FUNCTION-METHOD-COMBINATION */
static object  LnkTLI435(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[435],(void **)(void *)&LnkLI435,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-CLASS */
static object  LnkTLI434(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[434],(void **)(void *)&LnkLI434,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-SPECIALIZERS */
static void LnkT433(ptr) object *ptr;{ call_or_link_closure(VV[433],(void **)(void *)&Lnk433,(void **)(void *)&Lclptr433);} /* METHOD-SPECIALIZERS */
static object  LnkTLI432(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[432],(void **)(void *)&LnkLI432,1,first,ap);va_end(ap);return V1;} /* ARG-INFO-VALID-P */
static void LnkT48(ptr) object *ptr;{ call_or_link_closure(VV[48],(void **)(void *)&Lnk48,(void **)(void *)&Lclptr48);} /* METHOD-LAMBDA-LIST */
static object  LnkTLI431(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[431],(void **)(void *)&LnkLI431,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-LAMBDA-LIST */
static object  LnkTLI430(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[430],(void **)(void *)&LnkLI430,6,first,ap);va_end(ap);return V1;} /* SET-ARG-INFO1 */
static void LnkT429(){ call_or_link(VV[429],(void **)(void *)&Lnk429);} /* CHECK-METHOD-ARG-INFO */
static object  LnkTLI428(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[428],(void **)(void *)&LnkLI428,3,first,ap);va_end(ap);return V1;} /* COMPUTE-PRECEDENCE */
static object  LnkTLI427(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[427],(void **)(void *)&LnkLI427,1,first,ap);va_end(ap);return V1;} /* GF-LAMBDA-LIST */
static void LnkT426(ptr) object *ptr;{ call_or_link_closure(VV[426],(void **)(void *)&Lnk426,(void **)(void *)&Lclptr426);} /* GENERIC-FUNCTION-METHODS */
static void LnkT425(){ call_or_link(VV[425],(void **)(void *)&Lnk425);} /* COUNT-IF */
static object  LnkTLI411(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[411],(void **)(void *)&LnkLI411,1,first,ap);va_end(ap);return V1;} /* GENERIC-CLOBBERS-FUNCTION */
static object  LnkTLI410(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[410],(void **)(void *)&LnkLI410,1,first,ap);va_end(ap);return V1;} /* GET-SETF-FUNCTION-NAME */
static object  LnkTLI409(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[409],(void **)(void *)&LnkLI409,1,first,ap);va_end(ap);return V1;} /* KEYWORD-SPEC-NAME */
static void LnkT408(){ call_or_link(VV[408],(void **)(void *)&Lnk408);} /* ANALYZE-LAMBDA-LIST */
static object  LnkTLI406(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[406],(void **)(void *)&LnkLI406,1,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-FROM-FAST-FUNCTION */
static object  LnkTLI405(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[405],(void **)(void *)&LnkLI405,first,ap);va_end(ap);return V1;} /* INTERN-PV-TABLE */
static object  LnkTLI403(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[403],(void **)(void *)&LnkLI403,7,first,ap);va_end(ap);return V1;} /* LOAD-DEFMETHOD-INTERNAL */
static object  LnkTLI402(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[402],(void **)(void *)&LnkLI402,first,ap);va_end(ap);return V1;} /* RECORD-DEFINITION */
static object  LnkTLI401(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[401],(void **)(void *)&LnkLI401,3,first,ap);va_end(ap);return V1;} /* MAKE-METHOD-SPEC */
static object  LnkTLI211(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[211],(void **)(void *)&LnkLI211,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-GET */
static object  LnkTLI400(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[400],(void **)(void *)&LnkLI400,2,first,ap);va_end(ap);return V1;} /* SETF PCL METHOD-FUNCTION-PLIST */
static object  LnkTLI399(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[399],(void **)(void *)&LnkLI399,1,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-PLIST */
static void LnkT398(){ call_or_link(VV[398],(void **)(void *)&Lnk398);} /* WARN */
static void LnkT397(ptr) object *ptr;{ call_or_link_closure(VV[397],(void **)(void *)&Lnk397,(void **)(void *)&Lclptr397);} /* STANDARD-GENERIC-FUNCTION-P */
static void LnkT396(){ call_or_link(VV[396],(void **)(void *)&Lnk396);} /* WALK-FORM */
static object  LnkTLI395(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[395],(void **)(void *)&LnkLI395,1,first,ap);va_end(ap);return V1;} /* ARG-INFO-APPLYP */
static object  LnkTLI394(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[394],(void **)(void *)&LnkLI394,257,first,ap);va_end(ap);return V1;} /* ARG-INFO-NUMBER-REQUIRED */
static void LnkT393(ptr) object *ptr;{ call_or_link_closure(VV[393],(void **)(void *)&Lnk393,(void **)(void *)&Lclptr393);} /* GF-ARG-INFO */
static void LnkT392(){ call_or_link(VV[392],(void **)(void *)&Lnk392);} /* TYPECASE-ERROR-STRING */
static void LnkT133(){ call_or_link(VV[133],(void **)(void *)&Lnk133);} /* SLOT-UNBOUND-INTERNAL */
static object  LnkTLI391(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[391],(void **)(void *)&LnkLI391,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT390(){ call_or_link(VV[390],(void **)(void *)&Lnk390);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT389(){ call_or_link(VV[389],(void **)(void *)&Lnk389);} /* STRUCTURE-SUBTYPE-P */
static void LnkT388(){ call_or_link(VV[388],(void **)(void *)&Lnk388);} /* MAKE-ARRAY */
static void LnkT380(){ call_or_link(VV[380],(void **)(void *)&Lnk380);} /* SLOT-NAME-LISTS-FROM-SLOTS */
static void LnkT379(){ call_or_link(VV[379],(void **)(void *)&Lnk379);} /* SOME */
static void LnkT377(){ call_or_link(VV[377],(void **)(void *)&Lnk377);} /* WALK-METHOD-LAMBDA */
static void LnkT122(){ call_or_link(VV[122],(void **)(void *)&Lnk122);} /* TYPEP */
static void LnkT376(){ call_or_link(VV[376],(void **)(void *)&Lnk376);} /* REMOVE */
static object  LnkTLI375(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[375],(void **)(void *)&LnkLI375,5,first,ap);va_end(ap);return V1;} /* MAKE-PARAMETER-REFERENCES */
static object  LnkTLI374(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[374],(void **)(void *)&LnkLI374,first,ap);va_end(ap);return V1;} /* GET-DECLARATION */
static void LnkT373(){ call_or_link(VV[373],(void **)(void *)&Lnk373);} /* MAKE-METHOD-LAMBDA-INTERNAL */
static object  LnkTLI372(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[372],(void **)(void *)&LnkLI372,3,first,ap);va_end(ap);return V1;} /* MAKE-METHOD-INITARGS-FORM-INTERNAL */
static void LnkT371(){ call_or_link(VV[371],(void **)(void *)&Lnk371);} /* EXTRACT-DECLARATIONS */
static void LnkT370(){ call_or_link(VV[370],(void **)(void *)&Lnk370);} /* PARSE-SPECIALIZED-LAMBDA-LIST */
static void LnkT369(){ call_or_link(VV[369],(void **)(void *)&Lnk369);} /* MAKE-METHOD-FUNCTION-INTERNAL */
static object  LnkTLI368(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[368],(void **)(void *)&LnkLI368,first,ap);va_end(ap);return V1;} /* MAKE-DEFMETHOD-FORM-INTERNAL */
static void LnkT366(){ call_or_link(VV[366],(void **)(void *)&Lnk366);} /* EVERY */
static object  LnkTLI365(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[365],(void **)(void *)&LnkLI365,1,first,ap);va_end(ap);return V1;} /* INTERNED-SYMBOL-P */
static void LnkT364(ptr) object *ptr;{ call_or_link_closure(VV[364],(void **)(void *)&Lnk364,(void **)(void *)&Lclptr364);} /* CLASS-NAME */
static object  LnkTLI363(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[363],(void **)(void *)&LnkLI363,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static object  LnkTLI362(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[362],(void **)(void *)&LnkLI362,first,ap);va_end(ap);return V1;} /* MAKE-DEFMETHOD-FORM */
static void LnkT361(ptr) object *ptr;{ call_or_link_closure(VV[361],(void **)(void *)&Lnk361,(void **)(void *)&Lclptr361);} /* MAKE-METHOD-INITARGS-FORM */
static void LnkT360(ptr) object *ptr;{ call_or_link_closure(VV[360],(void **)(void *)&Lnk360,(void **)(void *)&Lclptr360);} /* MAKE-METHOD-LAMBDA */
static void LnkT359(){ call_or_link(VV[359],(void **)(void *)&Lnk359);} /* ADD-METHOD-DECLARATIONS */
static void LnkT358(ptr) object *ptr;{ call_or_link_closure(VV[358],(void **)(void *)&Lnk358,(void **)(void *)&Lclptr358);} /* GENERIC-FUNCTION-METHOD-CLASS */
static void LnkT301(ptr) object *ptr;{ call_or_link_closure(VV[301],(void **)(void *)&Lnk301,(void **)(void *)&Lclptr301);} /* CLASS-PROTOTYPE */
static object  LnkTLI290(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[290],(void **)(void *)&LnkLI290,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static void LnkT357(ptr) object *ptr;{ call_or_link_closure(VV[357],(void **)(void *)&Lnk357,(void **)(void *)&Lclptr357);} /* GENERIC-FUNCTION-P */
static object  LnkTLI356(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[356],(void **)(void *)&LnkLI356,1,first,ap);va_end(ap);return V1;} /* GDEFINITION */
static object  LnkTLI355(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[355],(void **)(void *)&LnkLI355,1,first,ap);va_end(ap);return V1;} /* GBOUNDP */
static object  LnkTLI354(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[354],(void **)(void *)&LnkLI354,7,first,ap);va_end(ap);return V1;} /* EXPAND-DEFMETHOD */
static void LnkT353(){ call_or_link(VV[353],(void **)(void *)&Lnk353);} /* PROTOTYPES-FOR-MAKE-METHOD-LAMBDA */
static void LnkT352(){ call_or_link(VV[352],(void **)(void *)&Lnk352);} /* PARSE-DEFMETHOD */
static void LnkT351(){ call_or_link(VV[351],(void **)(void *)&Lnk351);} /* ENSURE-GENERIC-FUNCTION */
static void LnkT350(){ call_or_link(VV[350],(void **)(void *)&Lnk350);} /* LOAD-TRUENAME */
static object  LnkTLI349(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[349],(void **)(void *)&LnkLI349,3,first,ap);va_end(ap);return V1;} /* MAKE-TOP-LEVEL-FORM */
static object  LnkTLI348(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[348],(void **)(void *)&LnkLI348,1,first,ap);va_end(ap);return V1;} /* DO-STANDARD-DEFSETF-1 */
static object  LnkTLI347(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[347],(void **)(void *)&LnkLI347,3,first,ap);va_end(ap);return V1;} /* EXPAND-DEFGENERIC */
static void LnkT346(){ call_or_link(VV[346],(void **)(void *)&Lnk346);} /* SET-FUNCTION-NAME */
static object  LnkTLI345(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[345],(void **)(void *)&LnkLI345,2,first,ap);va_end(ap);return V1;} /* SETF PCL GDEFINITION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

