
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
	base[1]= VV[7];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T17;
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
	{object V39;
	base[0]= (V15);
	base[1]= VV[2];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V39= vs_base[0];
	if(((V39))==Cnil){
	goto T7;}
	{object V41;
	V41= list(2,VV[1],(V39));
	{object V42;
	base[1]= (V15);
	base[2]= (V41);
	base[3]= VV[2];
	vs_top=(vs_base=base+1)+3;
	siLput_f();
	vs_top=sup;
	V42= vs_base[0];
	V15= (V42);}}}
	goto T7;
T7:;
	V43= list(2,VV[1],(V12));
	V44= list(3,VV[10],/* INLINE-ARGS */V43,list(2,VV[1],(V13)));
	V45= list(2,VV[11],(V12));{object V46;
	V46= (VV[12]->s.s_dbind);
	V47= list(2,VV[1],(V12));
	V48= listA(4,VV[13],/* INLINE-ARGS */V47,list(2,VV[1],(V13)),(V15));
	{object V49 = list(3,VV[9],/* INLINE-ARGS */V44,(*(LnkLI349))(/* INLINE-ARGS */V45,V46,/* INLINE-ARGS */V48));
	VMR3(V49)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOAD-DEFGENERIC	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{register object V50;
	object V51;
	object V52;
	if(vs_top-vs_base<2) too_few_arguments();
	V50=(base[0]);
	V51=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V52=(base[2]);
	vs_top=sup;
	if(!(type_of((V50))==t_cons||((V50))==Cnil)){
	goto T118;}
	(void)((*(LnkLI348))(CMPcadr((V50))));
	goto T118;
T118:;
	base[3]= (V50);
	base[4]= VV[14];
	base[5]= (V51);
	base[6]= VV[15];
	V54= list(2,VV[11],(V50));
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V55= vs_base[0];
	base[7]= list(2,/* INLINE-ARGS */V54,V55);
	{object V53;
	V53= (V52);
	 vs_top=base+8;
	 while(V53!=Cnil)
	 {vs_push((V53)->c.c_car);V53=(V53)->c.c_cdr;}
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
	{object V56=base[0]->c.c_cdr;
	base[2]= V56;}
	{object V57;
	object V58;
	object V59;
	object V60;
	base[3]= base[2];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk352)();
	if(vs_base>=vs_top){vs_top=sup;goto T130;}
	V57= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T131;}
	V58= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T132;}
	V59= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T133;}
	V60= vs_base[0];
	vs_top=sup;
	goto T134;
	goto T130;
T130:;
	V57= Cnil;
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
	{object V61;
	object V62;
	base[3]= (V57);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk353)();
	if(vs_base>=vs_top){vs_top=sup;goto T137;}
	V61= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T138;}
	V62= vs_base[0];
	vs_top=sup;
	goto T139;
	goto T137;
T137:;
	V61= Cnil;
	goto T138;
T138:;
	V62= Cnil;
	goto T139;
T139:;
	base[3]= (*(LnkLI354))((V57),(V61),(V62),(V58),(V59),(V60),base[1]);
	vs_top=(vs_base=base+3)+1;
	return;}}
}
/*	function definition for PROTOTYPES-FOR-MAKE-METHOD-LAMBDA	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V63;
	check_arg(1);
	V63=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[16]->s.s_dbind))==(VV[17])){
	goto T141;}
	base[1]= Cnil;
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
	goto T141;
T141:;
	{register object V64;
	if(((*(LnkLI355))((V63)))!=Cnil){
	goto T146;}
	V64= Cnil;
	goto T145;
	goto T146;
T146:;
	V64= (*(LnkLI356))((V63));
	goto T145;
T145:;
	if(((V64))==Cnil){
	goto T148;}
	base[1]= (V64);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk357)(Lclptr357);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T149;}
	goto T148;
T148:;
	base[2]= (VFUN_NARGS=1,(*(LnkLI290))(VV[18]));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	base[1]= vs_base[0];
	base[3]= (VFUN_NARGS=1,(*(LnkLI290))(VV[19]));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	return;
	goto T149;
T149:;
	base[1]= (V64);{object V65;
	base[4]= (V64);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk358)(Lclptr358);
	vs_top=sup;
	V65= vs_base[0];
	if(V65==Cnil)goto T161;
	base[3]= V65;
	goto T160;
	goto T161;
T161:;}
	base[3]= (VFUN_NARGS=1,(*(LnkLI290))(VV[19]));
	goto T160;
T160:;
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
	{object V66;
	check_arg(1);
	V66=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V67;
	if(((*(LnkLI355))((V66)))!=Cnil){
	goto T165;}
	V67= Cnil;
	goto T164;
	goto T165;
T165:;
	V67= (*(LnkLI356))((V66));
	goto T164;
T164:;
	if(!(((((VV[16]->s.s_dbind))==(VV[17])?Ct:Cnil))==Cnil)){
	goto T168;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T168;
T168:;
	if(((V67))==Cnil){
	goto T170;}
	base[1]= (V67);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk357)(Lclptr357);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T171;}
	goto T170;
T170:;
	base[1]= (VFUN_NARGS=1,(*(LnkLI290))(VV[19]));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk301)(Lclptr301);
	return;
	goto T171;
T171:;{object V68;
	base[2]= (V67);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk358)(Lclptr358);
	vs_top=sup;
	V68= vs_base[0];
	if(V68==Cnil)goto T178;
	base[1]= V68;
	goto T177;
	goto T178;
T178:;}
	base[1]= (VFUN_NARGS=1,(*(LnkLI290))(VV[19]));
	goto T177;
T177:;
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk301)(Lclptr301);
	return;}
	}
}
/*	local entry for function EXPAND-DEFMETHOD	*/

static object LI10(V76,V77,V78,V79,V80,V81,V82)

register object V76;object V77;register object V78;object V79;object V80;object V81;object V82;
{	 VMB8 VMS8 VMV8
	bds_check;
	goto TTL;
TTL:;
	if(!(type_of((V76))==t_cons||((V76))==Cnil)){
	goto T181;}
	(void)((*(LnkLI348))(CMPcadr((V76))));
	goto T181;
T181:;
	bds_bind(VV[20],Cnil);
	bds_bind(VV[21],Ct);
	bds_bind(VV[22],Cnil);
	bds_bind(VV[23],Cnil);
	bds_bind(VV[24],Cnil);
	{object V83;
	object V84;
	object V85;
	base[5]= (V76);
	base[6]= (V79);
	base[7]= (V80);
	base[8]= (V81);
	base[9]= (V82);
	vs_top=(vs_base=base+5)+5;
	(void) (*Lnk359)();
	if(vs_base>=vs_top){vs_top=sup;goto T190;}
	V83= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T191;}
	V84= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T192;}
	V85= vs_base[0];
	vs_top=sup;
	goto T193;
	goto T190;
T190:;
	V83= Cnil;
	goto T191;
T191:;
	V84= Cnil;
	goto T192;
T192:;
	V85= Cnil;
	goto T193;
T193:;
	{object V86;
	object V87;
	base[5]= (V77);
	base[6]= (V78);
	base[7]= (V83);
	base[8]= (V82);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk360)(Lclptr360);
	if(vs_base>=vs_top){vs_top=sup;goto T199;}
	V86= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T200;}
	V87= vs_base[0];
	vs_top=sup;
	goto T201;
	goto T199;
T199:;
	V86= Cnil;
	goto T200;
T200:;
	V87= Cnil;
	goto T201;
T201:;
	{object V88;
	base[5]= (V77);
	base[6]= (V78);
	base[7]= (V86);
	base[8]= (V87);
	base[9]= (V82);
	vs_top=(vs_base=base+5)+5;
	(void) (*Lnk361)(Lclptr361);
	vs_top=sup;
	V88= vs_base[0];
	V89= list(2,VV[1],(V76));
	V90= list(3,VV[10],/* INLINE-ARGS */V89,list(2,VV[1],(V80)));
	if(((VV[20]->s.s_dbind))==Cnil){
	goto T211;}
	V92= list(2,VV[25],list(2,VV[1],(VV[20]->s.s_dbind)));
	base[5]= make_cons(/* INLINE-ARGS */V92,Cnil);
	goto T209;
	goto T211;
T211:;
	base[5]= Cnil;
	goto T209;
T209:;
	if(((VV[22]->s.s_dbind))!=Cnil){
	goto T214;}
	if(((VV[23]->s.s_dbind))!=Cnil){
	goto T214;}
	if(((VV[24]->s.s_dbind))==Cnil){
	goto T215;}
	goto T214;
T214:;
	V93= list(2,VV[1],(VV[22]->s.s_dbind));
	V94= list(2,VV[1],(VV[23]->s.s_dbind));
	V95= list(4,VV[26],/* INLINE-ARGS */V93,/* INLINE-ARGS */V94,list(2,VV[1],(VV[24]->s.s_dbind)));
	base[6]= make_cons(/* INLINE-ARGS */V95,Cnil);
	goto T213;
	goto T215;
T215:;
	base[6]= Cnil;
	goto T213;
T213:;
	if(((V78))==Cnil){
	goto T224;}
	base[8]= (*(LnkLI363))((V78));
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	V96= vs_base[0];
	goto T222;
	goto T224;
T224:;
	V96= VV[19];
	goto T222;
T222:;
	base[9]= (V87);
	base[10]= VV[27];
	vs_top=(vs_base=base+9)+2;
	Lgetf();
	vs_top=sup;
	base[8]= vs_base[0];
	base[9]= VV[28];
	vs_top=(vs_base=base+8)+2;
	Lgetf();
	vs_top=sup;
	V97= vs_base[0];
	V98= (VFUN_NARGS=7,(*(LnkLI362))((V76),(V79),(V85),(V84),V96,(V88),V97));
	base[7]= make_cons(/* INLINE-ARGS */V98,Cnil);
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V91= vs_base[0];
	{object V99 = listA(3,VV[9],/* INLINE-ARGS */V90,V91);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR8(V99)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INTERNED-SYMBOL-P	*/

static object LI11(V101)

object V101;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	if(type_of((V101))==t_symbol){
	goto T232;}
	{object V102 = Cnil;
	VMR9(V102)}
	goto T232;
T232:;
	base[0]= (V101);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	{object V103 = vs_base[0];
	VMR9(V103)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-DEFMETHOD-FORM	*/

static object LI12(object V109,object V108,object V107,object V106,object V105,object V104,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	bds_check;
	{register object V110;
	register object V111;
	register object V112;
	object V113;
	object V114;
	register object V115;
	object V116;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <6) too_few_arguments();
	V110= V109;
	V111= V108;
	V112= V107;
	V113= V106;
	V114= V105;
	V115= V104;
	narg = narg - 6;
	if (narg <= 0) goto T235;
	else {
	V116= first;}
	--narg; goto T236;
	goto T235;
T235:;
	V116= Cnil;
	goto T236;
T236:;
	{object V117;
	register object V118;
	V117= Cnil;
	V118= Cnil;
	if(!(type_of((V110))==t_cons)){
	goto T244;}
	if((CMPcar((V110)))==(VV[29])){
	goto T246;}
	V119= Cnil;
	goto T242;
	goto T246;
T246:;
	V119= CMPcadr((V110));
	goto T242;
	goto T244;
T244:;
	V119= (V110);
	goto T242;
T242:;
	if(((*(LnkLI365))(V119))==Cnil){
	goto T239;}
	base[0]= (VV[365]->s.s_gfdef);
	base[1]= (V111);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk366)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T239;}
	base[0]= VV[367];
	base[1]= (V112);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk366)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T239;}
	if(!(type_of((V115))==t_cons)){
	goto T239;}
	if(!((CMPcar((V115)))==(VV[31]))){
	goto T239;}
	{register object x= CMPcadr((V115)),V120= VV[32];
	while(V120!=Cnil)
	if(x==(V120->c.c_car)){
	goto T261;
	}else V120=V120->c.c_cdr;
	goto T239;}
	goto T261;
T261:;
	V117= CMPcaddr((V115));
	if(!(type_of((V117))==t_cons)){
	goto T239;}
	if(!((CMPcar((V117)))==(VV[33]))){
	goto T239;}
	V118= CMPcadr((V117));
	if(!(type_of((V118))==t_cons)){
	goto T239;}
	if(!((CMPcar((V118)))==(VV[34]))){
	goto T239;}
	{object V121;
	object V122;
	object V123;
	{object V124;
	object V125= (V112);
	if(V125==Cnil){
	V121= Cnil;
	goto T271;}
	base[3]=V124=MMcons(Cnil,Cnil);
	goto T272;
T272:;
	{register object V126;
	V126= (V125->c.c_car);
	if(!(type_of((V126))==t_cons)){
	goto T275;}
	V127= CMPcar((V126));
	base[4]= CMPcadr((V126));
	vs_top=(vs_base=base+4)+1;
	Leval();
	vs_top=sup;
	V128= vs_base[0];
	(V124->c.c_car)= list(2,/* INLINE-ARGS */V127,V128);
	goto T273;
	goto T275;
T275:;
	(V124->c.c_car)= (V126);}
	goto T273;
T273:;
	if((V125=MMcdr(V125))==Cnil){
	V121= base[3];
	goto T271;}
	V124=MMcdr(V124)=MMcons(Cnil,Cnil);
	goto T272;}
	goto T271;
T271:;
	if(!((CMPcadr((V115)))==(VV[35]))){
	goto T282;}
	V129= VV[36];
	goto T280;
	goto T282;
T282:;
	V129= VV[37];
	goto T280;
T280:;
	V130= make_cons((V121),Cnil);
	V122= listA(3,V129,(V110),append((V111),/* INLINE-ARGS */V130));
	bds_bind(VV[38],Cnil);
	base[5]= Cnil;
	base[6]= VV[39];
	base[7]= (V122);
	vs_top=(vs_base=base+5)+3;
	Lformat();
	vs_top=sup;
	bds_unwind1;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Lintern();
	vs_top=sup;
	V123= vs_base[0];{object V131;
	V131= (VV[41]->s.s_dbind);
	V132= listA(4,VV[42],(V123),CMPcadr((V118)),CMPcddr((V118)));
	V133= list(2,VV[1],(V121));
	V134= CMPcadr((V115));
	V135= listA(4,VV[31],/* INLINE-ARGS */V134,list(2,VV[33],(V123)),CMPcdddr((V115)));
	{object V136 = list(4,VV[40],V131,/* INLINE-ARGS */V132,(VFUN_NARGS=7,(*(LnkLI368))((V110),(V111),/* INLINE-ARGS */V133,(V113),(V114),/* INLINE-ARGS */V135,(V116))));
	VMR10(V136)}}}
	goto T239;
T239:;
	V137= make_cons((V112),Cnil);
	V138= listA(3,VV[43],(V110),append((V111),/* INLINE-ARGS */V137));{object V139;
	V139= (VV[41]->s.s_dbind);
	{object V141;
	object V142= (V112);
	if(V142==Cnil){
	V140= Cnil;
	goto T289;}
	base[0]=V141=MMcons(Cnil,Cnil);
	goto T290;
T290:;
	{register object V143;
	V143= (V142->c.c_car);
	if(!(type_of((V143))==t_cons)){
	goto T293;}
	(V141->c.c_car)= list(3,VV[44],list(2,VV[1],CMPcar((V143))),CMPcadr((V143)));
	goto T291;
	goto T293;
T293:;
	(V141->c.c_car)= list(2,VV[1],(V143));}
	goto T291;
T291:;
	if((V142=MMcdr(V142))==Cnil){
	V140= base[0];
	goto T289;}
	V141=MMcdr(V141)=MMcons(Cnil,Cnil);
	goto T290;}
	goto T289;
T289:;
	V144= make_cons(VV[44],V140);
	V145= (VFUN_NARGS=7,(*(LnkLI368))((V110),(V111),/* INLINE-ARGS */V144,(V113),(V114),(V115),(V116)));
	{object V146 = (*(LnkLI349))(/* INLINE-ARGS */V138,V139,/* INLINE-ARGS */V145);
	VMR10(V146)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAKE-DEFMETHOD-FORM-INTERNAL	*/

static object LI13(object V152,object V151,object V150,object V149,object V148,object V147,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V153;
	object V154;
	object V155;
	object V156;
	object V157;
	object V158;
	object V159;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <6) too_few_arguments();
	V153= V152;
	V154= V151;
	V155= V150;
	V156= V149;
	V157= V148;
	V158= V147;
	narg = narg - 6;
	if (narg <= 0) goto T295;
	else {
	V159= first;}
	--narg; goto T296;
	goto T295;
T295:;
	V159= Cnil;
	goto T296;
T296:;
	V160= list(2,VV[1],(V157));
	V161= list(2,VV[1],(V153));
	V162= list(2,VV[1],(V154));
	V163= list(2,VV[1],(V156));
	{object V164 = list(8,VV[45],/* INLINE-ARGS */V160,/* INLINE-ARGS */V161,/* INLINE-ARGS */V162,(V155),/* INLINE-ARGS */V163,(V158),list(2,VV[1],(V159)));
	VMR11(V164)}
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
	{object V165=base[0]->c.c_cdr;
	if(endp(V165))invalid_macro_call();
	base[2]= (V165->c.c_car);
	V165=V165->c.c_cdr;
	if(!endp(V165))invalid_macro_call();}
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
	{object V166;
	object V167;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V166=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T300;}
	V167=(base[1]);
	vs_top=sup;
	goto T301;
	goto T300;
T300:;
	V167= Cnil;
	goto T301;
T301:;
	{object V168;
	object V169;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk353)();
	if(vs_base>=vs_top){vs_top=sup;goto T305;}
	V168= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T306;}
	V169= vs_base[0];
	vs_top=sup;
	goto T307;
	goto T305;
T305:;
	V168= Cnil;
	goto T306;
T306:;
	V169= Cnil;
	goto T307;
T307:;
	{object V170;
	object V171;
	base[2]= (V168);
	base[3]= (V169);
	base[4]= (V166);
	base[5]= (V167);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk360)(Lclptr360);
	if(vs_base>=vs_top){vs_top=sup;goto T313;}
	V170= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T314;}
	V171= vs_base[0];
	vs_top=sup;
	goto T315;
	goto T313;
T313:;
	V170= Cnil;
	goto T314;
T314:;
	V171= Cnil;
	goto T315;
T315:;
	base[2]= (V168);
	base[3]= (V169);
	base[4]= (V170);
	base[5]= (V171);
	base[6]= (V167);
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
	{object V172;
	object V173;
	object V174;
	object V175;
	object V176;
	check_arg(5);
	V172=(base[0]);
	V173=(base[1]);
	V174=(base[2]);
	V175=(base[3]);
	V176=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V177;
	object V178;
	object V179;
	base[5]= (V174);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T323;}
	V177= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T324;}
	V178= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T325;}
	V179= vs_base[0];
	vs_top=sup;
	goto T326;
	goto T323;
T323:;
	V177= Cnil;
	goto T324;
T324:;
	V178= Cnil;
	goto T325;
T325:;
	V179= Cnil;
	goto T326;
T326:;
	{object V180;
	object V181;
	object V182;
	base[5]= (V175);
	base[6]= (V176);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk371)();
	if(vs_base>=vs_top){vs_top=sup;goto T330;}
	V180= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T331;}
	V181= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T332;}
	V182= vs_base[0];
	vs_top=sup;
	goto T333;
	goto T330;
T330:;
	V180= Cnil;
	goto T331;
T331:;
	V181= Cnil;
	goto T332;
T332:;
	V182= Cnil;
	goto T333;
T333:;
	if(((V180))==Cnil){
	goto T337;}
	V183= make_cons((V180),Cnil);
	goto T335;
	goto T337;
T337:;
	V183= Cnil;
	goto T335;
T335:;
	V184= list(2,VV[46],list(2,VV[47],list(3,(V172),(V173),(V179))));
	V185= list(2,VV[46],make_cons(VV[48],(V174)));
	V186= listA(3,/* INLINE-ARGS */V184,/* INLINE-ARGS */V185,append((V181),(V182)));
	base[5]= listA(3,VV[34],(V178),append(V183,/* INLINE-ARGS */V186));
	base[6]= (V178);
	base[7]= (V179);
	vs_top=(vs_base=base+5)+3;
	return;}}
	}
}
/*	local entry for function REAL-MAKE-METHOD-INITARGS-FORM	*/

static object LI17(V192,V193,V194,V195,V196)

object V192;object V193;register object V194;object V195;object V196;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(!(type_of((V194))==t_cons)){
	goto T342;}
	if((CMPcar((V194)))==(VV[34])){
	goto T341;}
	goto T342;
T342:;
	base[0]= VV[49];
	base[1]= (V194);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T341;
T341:;
	{object V197 = (*(LnkLI372))((V194),(V195),(V196));
	VMR15(V197)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for REAL-MAKE-METHOD-LAMBDA	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V198;
	object V199;
	object V200;
	object V201;
	check_arg(4);
	V198=(base[0]);
	V199=(base[1]);
	V200=(base[2]);
	V201=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V200);
	base[5]= (V201);
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
	{register object V202;
	object V203;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V202=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T350;}
	V203=(base[1]);
	vs_top=sup;
	goto T351;
	goto T350;
T350:;
	V203= Cnil;
	goto T351;
T351:;
	if(!(type_of((V202))==t_cons)){
	goto T354;}
	if((CMPcar((V202)))==(VV[34])){
	goto T353;}
	goto T354;
T354:;
	base[2]= VV[50];
	base[3]= (V202);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	vs_top=sup;
	goto T353;
T353:;
	{object V204;
	object V205;
	object V206;
	base[2]= CMPcddr((V202));
	base[3]= (V203);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk371)();
	if(vs_base>=vs_top){vs_top=sup;goto T363;}
	V204= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T364;}
	V205= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T365;}
	V206= vs_base[0];
	vs_top=sup;
	goto T366;
	goto T363;
T363:;
	V204= Cnil;
	goto T364;
T364:;
	V205= Cnil;
	goto T365;
T365:;
	V206= Cnil;
	goto T366;
T366:;
	{object V207;
	object V208;
	object V209;
	object V210;
	object V211;
	V207= (VFUN_NARGS=2,(*(LnkLI374))(VV[47],(V205)));
	V208= (VFUN_NARGS=2,(*(LnkLI374))(VV[48],(V205)));
	if(!(type_of((V207))==t_cons)){
	goto T371;}
	V209= CMPcar((V207));
	goto T369;
	goto T371;
T371:;
	V209= Cnil;
	goto T369;
T369:;
	if(((V209))==Cnil){
	goto T375;}
	V210= CMPcar((V209));
	goto T373;
	goto T375;
T375:;
	V210= Cnil;
	goto T373;
T373:;
	if((V208)!=Cnil){
	V211= (V208);
	goto T377;}
	V211= CMPcadr((V202));
	goto T377;
T377:;
	{object V212;
	register object V213;
	object V214;
	base[7]= (V211);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T380;}
	V212= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T381;}
	V213= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T382;}
	V214= vs_base[0];
	vs_top=sup;
	goto T383;
	goto T380;
T380:;
	V212= Cnil;
	goto T381;
T381:;
	V213= Cnil;
	goto T382;
T382:;
	V214= Cnil;
	goto T383;
T383:;
	{object V215;
	object V216;
	object V217;
	object V218;
	object V219;
	object V220;
	object V221;
	register object V222;
	register object V223;
	object V224;
	{object V225;
	object V226= (V212);
	object V227= (V214);
	if(V226==Cnil||V227==Cnil){
	V215= Cnil;
	goto T384;}
	base[17]=V225=MMcons(Cnil,Cnil);
	goto T385;
T385:;
	(V225->c.c_car)= (V226->c.c_car);
	if((V226=MMcdr(V226))==Cnil||(V227=MMcdr(V227))==Cnil){
	V215= base[17];
	goto T384;}
	V225=MMcdr(V225)=MMcons(Cnil,Cnil);
	goto T385;}
	goto T384;
T384:;
	{object V230;
	object V231= (V215);
	if(V231==Cnil){
	V216= Cnil;
	goto T387;}
	base[17]=V230=MMcons(Cnil,Cnil);
	goto T388;
T388:;
	(V230->c.c_car)= make_cons((V231->c.c_car),Cnil);
	if((V231=MMcdr(V231))==Cnil){
	V216= base[17];
	goto T387;}
	V230=MMcdr(V230)=MMcons(Cnil,Cnil);
	goto T388;}
	goto T387;
T387:;
	V217= make_cons(Cnil,Cnil);
	V218= (*(LnkLI375))((V211),(V215),(V205),(V209),(V214));
	base[17]= Cnil;
	{object V233;
	object V234= (V212);
	object V235= (V214);
	if(V234==Cnil||V235==Cnil){
	base[18]= Cnil;
	goto T395;}
	base[19]=V233=MMcons(Cnil,Cnil);
	goto T396;
T396:;
	if(type_of((V235->c.c_car))==t_symbol){
	goto T398;}
	(V233->c.c_car)= Cnil;
	goto T397;
	goto T398;
T398:;
	if(((((V235->c.c_car))==(Ct)?Ct:Cnil))==Cnil){
	goto T400;}
	(V233->c.c_car)= Cnil;
	goto T397;
	goto T400;
T400:;
	(V233->c.c_car)= list(3,VV[51],(V234->c.c_car),(V235->c.c_car));
	goto T397;
T397:;
	if((V234=MMcdr(V234))==Cnil||(V235=MMcdr(V235))==Cnil){
	base[18]= base[19];
	goto T395;}
	V233=MMcdr(V233)=MMcons(Cnil,Cnil);
	goto T396;}
	goto T395;
T395:;
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk376)();
	vs_top=sup;
	V232= vs_base[0];
	V219= make_cons(VV[46],V232);
	V238= make_cons(VV[9],(V218));
	if(!(type_of((V210))==t_cons||((V210))==Cnil)){
	goto T405;}
	V239= CMPcadr((V210));
	goto T403;
	goto T405;
T405:;
	V239= (V210);
	goto T403;
T403:;
	V240= list(2,/* INLINE-ARGS */V238,listA(3,VV[52],V239,(V206)));
	V220= listA(4,VV[34],(V213),(V219),append((V205),/* INLINE-ARGS */V240));
	if((CMPcdr((V206)))==Cnil){
	goto T408;}
	V221= Cnil;
	goto T407;
	goto T408;
T408:;
	base[17]= CMPcar((V206));
	vs_top=(vs_base=base+17)+1;
	Lconstantp();
	vs_top=sup;
	V221= vs_base[0];
	goto T407;
T407:;
	if((V221)==Cnil){
	V222= Cnil;
	goto T411;}
	base[17]= CMPcar((V206));
	vs_top=(vs_base=base+17)+1;
	Leval();
	vs_top=sup;
	V222= vs_base[0];
	goto T411;
T411:;
	if(((V221))==Cnil){
	goto T415;}
	base[17]= (V222);
	base[18]= VV[53];
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk122)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T414;}
	if(!(type_of((V222))==t_symbol)){
	goto T415;}
	base[17]= (V222);
	vs_top=(vs_base=base+17)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T415;}
	goto T414;
T414:;
	V223= list(2,VV[54],(V222));
	goto T413;
	goto T415;
T415:;
	V223= Cnil;
	goto T413;
T413:;
	{register object V241;
	register object V242;
	V241= (V213);
	V242= CMPcar((V241));
	goto T430;
T430:;
	if(!(((V241))==Cnil)){
	goto T431;}
	V224= Cnil;
	goto T426;
	goto T431;
T431:;
	{register object x= (V242),V243= VV[55];
	while(V243!=Cnil)
	if(x==(V243->c.c_car)){
	goto T438;
	}else V243=V243->c.c_cdr;
	goto T437;}
	goto T438;
T438:;
	V224= Ct;
	goto T426;
	goto T437;
T437:;
	if(!(((V242))==(VV[56]))){
	goto T435;}
	V224= Cnil;
	goto T426;
	goto T435;
T435:;
	V241= CMPcdr((V241));
	V242= CMPcar((V241));
	goto T430;}
	goto T426;
T426:;
	{object V244;
	object V245;
	object V246;
	object V247;
	base[17]= (V220);
	base[18]= (V215);
	base[19]= (V203);
	base[20]= (V216);
	base[21]= (V217);
	vs_top=(vs_base=base+17)+5;
	(void) (*Lnk377)();
	if(vs_base>=vs_top){vs_top=sup;goto T452;}
	V244= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T453;}
	V245= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T454;}
	V246= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T455;}
	V247= vs_base[0];
	vs_top=sup;
	goto T456;
	goto T452;
T452:;
	V244= Cnil;
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
	{object V248;
	object V249;
	object V250;
	base[17]= CMPcddr((V244));
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk371)();
	if(vs_base>=vs_top){vs_top=sup;goto T459;}
	V248= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T460;}
	V249= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T461;}
	V250= vs_base[0];
	vs_top=sup;
	goto T462;
	goto T459;
T459:;
	V248= Cnil;
	goto T460;
T460:;
	V249= Cnil;
	goto T461;
T461:;
	V250= Cnil;
	goto T462;
T462:;
	if(((V247))!=Cnil){
	goto T464;}
	if(((V245))==Cnil){
	goto T463;}
	goto T464;
T464:;
	V223= listA(3,VV[57],Ct,(V223));
	goto T463;
T463:;
	base[17]= (VV[378]->s.s_gfdef);
	base[18]= (V216);
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk379)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T469;}
	{object V251;
	object V252;
	base[17]= (V216);
	base[18]= (V217);
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk380)();
	if(vs_base>=vs_top){vs_top=sup;goto T477;}
	V251= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T478;}
	V252= vs_base[0];
	vs_top=sup;
	goto T479;
	goto T477;
T477:;
	V251= Cnil;
	goto T478;
T478:;
	V252= Cnil;
	goto T479;
T479:;
	{object V253;
	base[17]= VV[58];
	vs_top=(vs_base=base+17)+1;
	Lmake_symbol();
	vs_top=sup;
	V253= vs_base[0];
	if(((V251))==Cnil){
	goto T486;}
	base[17]= list(2,VV[59],(V251));
	goto T484;
	goto T486;
T486:;
	base[17]= Cnil;
	goto T484;
T484:;
	if(((V252))==Cnil){
	goto T490;}
	base[18]= list(2,VV[60],(V252));
	goto T488;
	goto T490;
T490:;
	base[18]= Cnil;
	goto T488;
T488:;
	base[19]= listA(3,VV[28],(V253),(V223));
	vs_top=(vs_base=base+17)+3;
	Lappend();
	vs_top=sup;
	V223= vs_base[0];
	V254= listA(3,VV[61],list(3,(V215),(V251),(V253)),(V250));
	V250= make_cons(/* INLINE-ARGS */V254,Cnil);}}
	goto T469;
T469:;
	{register object x= VV[62],V255= (V213);
	while(V255!=Cnil)
	if(x==(V255->c.c_car)){
	goto T497;
	}else V255=V255->c.c_cdr;
	goto T494;}
	goto T497;
T497:;
	{register object x= VV[63],V256= (V213);
	while(V256!=Cnil)
	if(x==(V256->c.c_car)){
	goto T494;
	}else V256=V256->c.c_cdr;}
	{object V257;
	{register object x= VV[56],V258= (V213);
	while(V258!=Cnil)
	if(x==(V258->c.c_car)){
	V257= V258;
	goto T499;
	}else V258=V258->c.c_cdr;
	V257= Cnil;}
	goto T499;
T499:;
	base[18]= (V213);
	base[19]= (V257);
	vs_top=(vs_base=base+18)+2;
	Lldiff();
	vs_top=sup;
	base[17]= vs_base[0];
	base[18]= make_cons(VV[63],Cnil);
	base[19]= (V257);
	vs_top=(vs_base=base+17)+3;
	Lnconc();
	vs_top=sup;
	V213= vs_base[0];}
	goto T494;
T494:;
	base[18]= (V213);
	base[19]= VV[66];
	base[20]= VV[67];
	base[21]= VV[68];
	base[22]= (V245);
	base[23]= VV[69];
	base[24]= (V247);
	base[25]= VV[70];
	base[26]= (V246);
	base[27]= VV[71];
	base[28]= (V224);
	vs_top=(vs_base=base+18)+11;
	Llist();
	vs_top=sup;
	V259= vs_base[0];
	base[17]= list(3,VV[34],VV[64],listA(3,VV[65],V259,append((V249),(V250))));
	if(((V223))==Cnil){
	goto T522;}
	V260= list(2,VV[27],(V223));
	goto T520;
	goto T522;
T522:;
	V260= Cnil;
	goto T520;
T520:;
	if(((V204))==Cnil){
	goto T526;}
	V261= list(2,VV[3],(V204));
	goto T524;
	goto T526;
T526:;
	V261= Cnil;
	goto T524;
T524:;
	base[18]= append(V260,V261);
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
	{object V262=base[0]->c.c_cdr;
	if(endp(V262))invalid_macro_call();
	{object V263= (V262->c.c_car);
	if(endp(V263))invalid_macro_call();
	base[2]= (V263->c.c_car);
	V263=V263->c.c_cdr;
	if(endp(V263))invalid_macro_call();
	base[3]= (V263->c.c_car);
	V263=V263->c.c_cdr;
	if(endp(V263))invalid_macro_call();
	base[4]= (V263->c.c_car);
	V263=V263->c.c_cdr;
	base[5]= V263;}
	V262=V262->c.c_cdr;
	base[6]= V262;}
	V264= list(2,base[3],base[4]);
	base[7]= list(4,VV[9],base[3],base[4],list(3,VV[72],/* INLINE-ARGS */V264,list(3,VV[73],base[5],listA(3,VV[74],list(2,base[2],base[3]),base[6]))));
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
	{object V265=base[0]->c.c_cdr;
	if(endp(V265))invalid_macro_call();
	{object V266= (V265->c.c_car);
	if(endp(V266))invalid_macro_call();
	base[2]= (V266->c.c_car);
	V266=V266->c.c_cdr;
	if(endp(V266))invalid_macro_call();
	base[3]= (V266->c.c_car);
	V266=V266->c.c_cdr;
	if(endp(V266))invalid_macro_call();
	base[4]= (V266->c.c_car);
	V266=V266->c.c_cdr;
	if(endp(V266))invalid_macro_call();
	base[5]= (V266->c.c_car);
	V266=V266->c.c_cdr;
	base[6]= V266;}
	V265=V265->c.c_cdr;
	base[7]= V265;}
	V267= list(3,base[4],base[5],base[3]);
	V268 = CMPmake_fixnum((long)length(base[4]));
	base[8]= list(3,VV[75],/* INLINE-ARGS */V267,list(3,VV[73],base[6],listA(3,VV[74],list(2,nthcdr(fix(V268),base[2]),base[5]),base[7])));
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
	{object V269=base[0]->c.c_cdr;
	if(endp(V269))invalid_macro_call();
	{object V270= (V269->c.c_car);
	if(endp(V270))invalid_macro_call();
	base[2]= (V270->c.c_car);
	V270=V270->c.c_cdr;
	if(endp(V270))invalid_macro_call();
	base[3]= (V270->c.c_car);
	V270=V270->c.c_cdr;
	if(!endp(V270))invalid_macro_call();}
	V269=V269->c.c_cdr;
	base[4]= V269;}
	V271= list(3,VV[44],VV[80],list(3,VV[44],VV[81],list(2,VV[1],base[3])));
	V272= list(2,VV[1],base[3]);
	V273= list(3,VV[44],/* INLINE-ARGS */V271,list(3,VV[44],/* INLINE-ARGS */V272,list(3,VV[44],VV[82],list(2,VV[1],base[3]))));
	V274= list(3,VV[77],VV[78],list(6,VV[31],VV[79],/* INLINE-ARGS */V273,VV[83],list(2,VV[1],base[3]),VV[84]));
	V275= list(4,VV[44],VV[91],VV[92],list(2,VV[1],base[2]));
	base[5]= listA(3,VV[76],list(3,/* INLINE-ARGS */V274,list(3,VV[85],VV[86],list(5,VV[44],VV[87],VV[88],list(5,VV[44],VV[89],VV[90],/* INLINE-ARGS */V275,list(2,VV[1],base[3])),VV[93])),VV[94]),base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function MAKE-METHOD-CALL	*/

static object LI23(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB21 VMS21 VMV21
	{object V276;
	object V277;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)&LI23key,first,ap);
	if(Vcs[0]==0){
	V276= (VV[382]->s.s_gfdef);
	}else{
	V276=(Vcs[0]);}
	V277=(Vcs[1]);
	base[0]= VV[95];
	base[1]= (V276);
	base[2]= (V277);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V278 = vs_base[0];
	VMR21(V278)}
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
	{object V279=base[0]->c.c_cdr;
	if(endp(V279))invalid_macro_call();
	base[2]= (V279->c.c_car);
	V279=V279->c.c_cdr;
	if(endp(V279))invalid_macro_call();
	base[3]= (V279->c.c_car);
	V279=V279->c.c_cdr;
	if(endp(V279))invalid_macro_call();
	base[4]= (V279->c.c_car);
	V279=V279->c.c_cdr;
	if(!endp(V279))invalid_macro_call();}
	V280= list(2,VV[97],base[2]);
	V281= list(2,VV[98],base[3]);
	base[5]= listA(3,VV[96],list(3,/* INLINE-ARGS */V280,/* INLINE-ARGS */V281,list(2,VV[99],base[4])),VV[100]);
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
	{object V282=base[0]->c.c_cdr;
	if(endp(V282))invalid_macro_call();
	base[2]= (V282->c.c_car);
	V282=V282->c.c_cdr;
	if(endp(V282))invalid_macro_call();
	base[3]= (V282->c.c_car);
	V282=V282->c.c_cdr;
	base[4]= V282;}
	V283= list(2,VV[102],base[2]);
	if((base[3])==Cnil){
	goto T534;}
	V284= make_cons(VV[31],base[4]);
	goto T532;
	goto T534;
T534:;
	V284= make_cons(VV[44],base[4]);
	goto T532;
T532:;
	base[5]= list(4,VV[101],/* INLINE-ARGS */V283,V284,list(2,VV[103],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function MAKE-FAST-METHOD-CALL	*/

static object LI26(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB24 VMS24 VMV24
	{object V285;
	object V286;
	object V287;
	object V288;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)&LI26key,first,ap);
	if(Vcs[0]==0){
	V285= (VV[382]->s.s_gfdef);
	}else{
	V285=(Vcs[0]);}
	V286=(Vcs[1]);
	V287=(Vcs[2]);
	V288=(Vcs[3]);
	base[0]= VV[104];
	base[1]= (V285);
	base[2]= (V286);
	base[3]= (V287);
	base[4]= (V288);
	vs_top=(vs_base=base+0)+5;
	siLmake_structure();
	vs_top=sup;
	{object V289 = vs_base[0];
	VMR24(V289)}
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
	{object V290=base[0]->c.c_cdr;
	if(endp(V290))invalid_macro_call();
	base[2]= (V290->c.c_car);
	V290=V290->c.c_cdr;
	base[3]= V290;}
	V291= list(2,VV[106],base[2]);
	V292= list(2,VV[107],base[2]);
	base[4]= listA(5,VV[105],/* INLINE-ARGS */V291,/* INLINE-ARGS */V292,list(2,VV[108],base[2]),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function MAKE-FAST-INSTANCE-BOUNDP	*/

static object LI28(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB26 VMS26 VMV26
	{object V293;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)&LI28key,first,ap);
	V293=(Vcs[0]);
	base[0]= VV[109];
	base[1]= (V293);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V294 = vs_base[0];
	VMR26(V294)}
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
	goto T545;}
	{register object V295;
	V295= (VV[111]->s.s_dbind);
	bds_bind(VV[112],Cnil);
	base[1]= Ct;
	base[2]= VV[113];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	{register long V296;
	register long V297;
	V296= fix((VV[114]->s.s_dbind));
	V297= 0;
	goto T553;
T553:;
	if(!((V297)>=(V296))){
	goto T554;}
	{object V298 = Cnil;
	bds_unwind1;
	VMR27(V298)}
	goto T554;
T554:;
	{register object V299;
	V299= aref1((VV[110]->s.s_dbind),fix((V295)));
	if(((V299))==Cnil){
	goto T557;}
	(void)(print((V299),Cnil));}
	goto T557;
T557:;
	V295= number_plus((V295),small_fixnum(1));
	if(!(number_compare((V295),(VV[114]->s.s_dbind))==0)){
	goto T563;}
	V295= small_fixnum(0);
	goto T563;
T563:;
	V297= (long)(V297)+1;
	goto T553;}}
	goto T545;
T545:;
	{object V300 = Cnil;
	VMR27(V300)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function TRACE-EMF-CALL-INTERNAL	*/

static object LI30(V304,V305,V306)

object V304;object V305;object V306;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	if(((VV[110]->s.s_dbind))!=Cnil){
	goto T570;}
	base[0]= (VV[114]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk388)();
	vs_top=sup;
	(VV[110]->s.s_dbind)= vs_base[0];
	goto T570;
T570:;{object V307;
	V307= (VV[110]->s.s_dbind);{object V308;
	V308= (VV[111]->s.s_dbind);
	V309= listA(3,(V304),(V305),(V306));
	(void)(aset1(V307,fix(V308),/* INLINE-ARGS */V309));}}
	(VV[111]->s.s_dbind)= number_plus((VV[111]->s.s_dbind),small_fixnum(1));
	if(!(number_compare((VV[111]->s.s_dbind),(VV[114]->s.s_dbind))==0)){
	goto T579;}
	(VV[111]->s.s_dbind)= small_fixnum(0);
	{object V310 = small_fixnum(0);
	VMR28(V310)}
	goto T579;
T579:;
	{object V311 = Cnil;
	VMR28(V311)}
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
	{object V312=base[0]->c.c_cdr;
	if(endp(V312))invalid_macro_call();
	base[2]= (V312->c.c_car);
	V312=V312->c.c_cdr;
	if(endp(V312))invalid_macro_call();
	base[3]= (V312->c.c_car);
	V312=V312->c.c_cdr;
	if(endp(V312))invalid_macro_call();
	base[4]= (V312->c.c_car);
	V312=V312->c.c_cdr;
	if(!endp(V312))invalid_macro_call();}
	if(((VV[115]->s.s_dbind))==Cnil){
	goto T583;}
	base[5]= list(3,VV[116],VV[112],list(4,VV[117],base[2],base[3],base[4]));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T583;
T583:;
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
	{object V313=base[0]->c.c_cdr;
	if(endp(V313))invalid_macro_call();
	base[2]= (V313->c.c_car);
	V313=V313->c.c_cdr;
	if(endp(V313))invalid_macro_call();
	base[3]= (V313->c.c_car);
	V313=V313->c.c_cdr;
	base[4]= V313;}
	V314= list(4,VV[118],base[2],base[3],make_cons(VV[44],base[4]));
	base[5]= list(3,VV[9],/* INLINE-ARGS */V314,listA(3,VV[119],base[2],base[4]));
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
	{object V315=base[0]->c.c_cdr;
	if(endp(V315))invalid_macro_call();
	base[2]= (V315->c.c_car);
	V315=V315->c.c_cdr;
	if(endp(V315))invalid_macro_call();
	base[3]= (V315->c.c_car);
	V315=V315->c.c_cdr;
	base[4]= V315;}
	base[5]= base[3];
	vs_top=(vs_base=base+5)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T585;}
	base[5]= VV[120];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	goto T585;
T585:;
	base[5]= base[3];
	vs_top=(vs_base=base+5)+1;
	Leval();
	vs_top=sup;
	base[3]= vs_base[0];
	V316= list(4,VV[118],base[2],base[3],make_cons(VV[44],base[4]));
	V317= list(3,VV[122],base[2],VV[123]);
	V318= list(2,/* INLINE-ARGS */V317,listA(3,VV[119],base[2],base[4]));
	if((base[3])!=Cnil){
	goto T596;}
	if(!((1)==((long)length(base[4])))){
	goto T596;}
	V320= list(3,VV[122],base[2],VV[124]);
	V321= list(2,VV[126],list(2,VV[127],CMPcar(base[4])));
	V322= list(2,/* INLINE-ARGS */V321,list(2,VV[128],list(3,VV[116],VV[126],list(3,VV[129],VV[126],base[2]))));
	V323= list(3,VV[131],VV[128],list(2,VV[1],(VV[132]->s.s_dbind)));
	V324= list(2,/* INLINE-ARGS */V320,list(3,VV[125],/* INLINE-ARGS */V322,list(4,VV[130],/* INLINE-ARGS */V323,list(3,VV[133],CMPcar(base[4]),base[2]),VV[128])));
	base[5]= make_cons(/* INLINE-ARGS */V324,Cnil);
	goto T594;
	goto T596;
T596:;
	base[5]= Cnil;
	goto T594;
T594:;
	if((base[3])!=Cnil){
	goto T602;}
	if(!((2)==((long)length(base[4])))){
	goto T602;}
	V325= list(3,VV[122],base[2],VV[134]);
	V326= list(2,VV[135],CMPcar(base[4]));
	V327= list(2,/* INLINE-ARGS */V326,list(2,VV[126],list(2,VV[127],CMPcar(base[4]))));
	V328= list(2,/* INLINE-ARGS */V325,list(3,VV[96],/* INLINE-ARGS */V327,list(3,VV[116],VV[126],list(3,VV[29],list(3,VV[129],VV[126],base[2]),VV[135]))));
	base[6]= make_cons(/* INLINE-ARGS */V328,Cnil);
	goto T600;
	goto T602;
T602:;
	base[6]= Cnil;
	goto T600;
T600:;
	V329= list(2,VV[95],listA(4,VV[137],base[2],base[3],base[4]));
	if((base[3])==Cnil){
	goto T609;}
	V330= listA(3,VV[138],list(3,VV[139],VV[33],base[2]),base[4]);
	goto T607;
	goto T609;
T609:;
	V330= listA(3,VV[140],list(3,VV[139],VV[33],base[2]),base[4]);
	goto T607;
T607:;
	V331= list(2,Ct,list(4,VV[136],base[2],/* INLINE-ARGS */V329,list(2,VV[33],V330)));
	base[7]= make_cons(/* INLINE-ARGS */V331,Cnil);
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V319= vs_base[0];
	base[5]= list(3,VV[9],/* INLINE-ARGS */V316,listA(3,VV[121],/* INLINE-ARGS */V318,V319));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	function definition for INVOKE-EMF	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	{register object V332;
	register object V333;
	check_arg(2);
	V332=(base[0]);
	V333=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V334;
	V334= (V332);
	base[2]= (V334);
	base[3]= VV[104];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T613;}
	{object V335;
	object V336;
	register object V337;
	V335= STREF(object,(V332),12);
	V336= CMPcdr((V335));
	V337= CMPcar((V335));
	if(((V336))==Cnil){
	goto T621;}
	{object V338;
	object V339;
	V338= nthcdr(fix((V337)),(V333));
	base[7]= (V333);
	base[8]= (V338);
	vs_top=(vs_base=base+7)+2;
	Lldiff();
	vs_top=sup;
	V339= vs_base[0];
	base[7]= STREF(object,(V332),0);
	base[8]= STREF(object,(V332),4);
	base[9]= STREF(object,(V332),8);
	{object V340;
	V341= make_cons((V338),Cnil);
	V340= nconc((V339),/* INLINE-ARGS */V341);
	 vs_top=base+10;
	 while(V340!=Cnil)
	 {vs_push((V340)->c.c_car);V340=(V340)->c.c_cdr;}
	vs_base=base+8;}
	{object _funobj = base[7];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T621;
T621:;
	if(((V333))!=Cnil){
	goto T632;}
	if(!(eql((V337),small_fixnum(0)))){
	goto T635;}
	base[5]= STREF(object,(V332),0);
	base[6]= STREF(object,(V332),4);
	base[7]= STREF(object,(V332),8);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T635;
T635:;
	base[5]= VV[141];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	return;
	goto T632;
T632:;
	if((CMPcdr((V333)))!=Cnil){
	goto T642;}
	if(!(eql((V337),small_fixnum(1)))){
	goto T645;}
	base[5]= STREF(object,(V332),0);
	base[6]= STREF(object,(V332),4);
	base[7]= STREF(object,(V332),8);
	base[8]= CMPcar((V333));
	vs_top=(vs_base=base+6)+3;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T645;
T645:;
	base[5]= VV[142];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	return;
	goto T642;
T642:;
	if((CMPcddr((V333)))!=Cnil){
	goto T653;}
	if(!(eql((V337),small_fixnum(2)))){
	goto T656;}
	base[5]= STREF(object,(V332),0);
	base[6]= STREF(object,(V332),4);
	base[7]= STREF(object,(V332),8);
	base[8]= CMPcar((V333));
	base[9]= CMPcadr((V333));
	vs_top=(vs_base=base+6)+4;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T656;
T656:;
	base[5]= VV[143];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	return;
	goto T653;
T653:;
	base[5]= STREF(object,(V332),0);
	base[6]= STREF(object,(V332),4);
	base[7]= STREF(object,(V332),8);
	{object V342;
	V342= (V333);
	 vs_top=base+8;
	 while(V342!=Cnil)
	 {vs_push((V342)->c.c_car);V342=(V342)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T613;
T613:;
	base[2]= (V334);
	base[3]= VV[95];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T669;}
	base[2]= STREF(object,(V332),0);
	base[3]= (V333);
	{object V343;
	V343= STREF(object,(V332),4);
	 vs_top=base+4;
	 while(V343!=Cnil)
	 {vs_push((V343)->c.c_car);V343=(V343)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T669;
T669:;
	if(!(type_of((V334))==t_fixnum)){
	goto T677;}
	if(((V333))!=Cnil){
	goto T680;}
	base[2]= VV[144];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	return;
	goto T680;
T680:;
	if((CMPcdr((V333)))!=Cnil){
	goto T684;}
	{object V344;
	{object V346;
	V346= CMPcar((V333));
	if(type_of((V346))==t_structure){
	goto T692;}
	goto T689;
	goto T692;
T692:;
	if(!((((V346))->str.str_def)==(VV[145]))){
	goto T689;}}
	V345= STREF(object,CMPcar((V333)),4);
	goto T687;
	goto T689;
T689:;{object V347;
	V347= (VV[147]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= CMPcar((V333));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V348= vs_base[0];
	if(!((V347)==(CMPcar(V348)))){
	goto T695;}}
	V345= CMPcar((CMPcar((V333)))->cc.cc_turbo[12]);
	goto T687;
	goto T695;
T695:;
	base[2]= VV[148];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V345= vs_base[0];
	goto T687;
T687:;
	V344= (V345)->v.v_self[fix((V332))];
	if(!(((V344))==((VV[132]->s.s_dbind)))){
	goto T702;}
	base[2]= CMPcar((V333));
	base[3]= (V332);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk133)();
	return;
	goto T702;
T702:;
	base[2]= (V344);
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T684;
T684:;
	if((CMPcddr((V333)))!=Cnil){
	goto T707;}
	{object V350;
	V350= CMPcadr((V333));
	if(type_of((V350))==t_structure){
	goto T714;}
	goto T711;
	goto T714;
T714:;
	if(!((((V350))->str.str_def)==(VV[149]))){
	goto T711;}}
	V349= STREF(object,CMPcadr((V333)),4);
	goto T709;
	goto T711;
T711:;{object V351;
	V351= (VV[147]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= CMPcadr((V333));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V352= vs_base[0];
	if(!((V351)==(CMPcar(V352)))){
	goto T717;}}
	V349= CMPcar((CMPcadr((V333)))->cc.cc_turbo[12]);
	goto T709;
	goto T717;
T717:;
	base[2]= VV[148];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V349= vs_base[0];
	goto T709;
T709:;
	base[2]= (V349)->v.v_self[fix((V332))]= (CMPcar((V333)));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T707;
T707:;
	base[2]= VV[150];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	return;
	goto T677;
T677:;
	base[2]= (V334);
	base[3]= VV[109];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T725;}
	if(((V333))==Cnil){
	goto T729;}
	if((CMPcdr((V333)))==Cnil){
	goto T730;}
	goto T729;
T729:;
	base[2]= VV[151];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	return;
	goto T730;
T730:;
	{object V354;
	V354= CMPcar((V333));
	if(type_of((V354))==t_structure){
	goto T740;}
	goto T737;
	goto T740;
T740:;
	if(!((((V354))->str.str_def)==(VV[152]))){
	goto T737;}}
	V353= STREF(object,CMPcar((V333)),4);
	goto T735;
	goto T737;
T737:;{object V355;
	V355= (VV[147]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= CMPcar((V333));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V356= vs_base[0];
	if(!((V355)==(CMPcar(V356)))){
	goto T743;}}
	V353= CMPcar((CMPcar((V333)))->cc.cc_turbo[12]);
	goto T735;
	goto T743;
T743:;
	base[2]= VV[148];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V353= vs_base[0];
	goto T735;
T735:;
	base[2]= (((((V353)->v.v_self[(long)STREF(fixnum,(V332),0)])==((VV[132]->s.s_dbind))?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T725;
T725:;
	base[2]= (V334);
	vs_top=(vs_base=base+2)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T750;}
	base[2]= (V332);
	{object V357;
	V357= (V333);
	 vs_top=base+3;
	 while(V357!=Cnil)
	 {vs_push((V357)->c.c_car);V357=(V357)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T750;
T750:;
	base[3]= VV[153];
	base[4]= (V334);
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

static object LI36(V360,V361)

object V360;object V361;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	base[0]=MMcons((V361),Cnil);
	{register object V362;
	V362= (base[0]->c.c_car);
	base[1]= (V362);
	base[2]= VV[104];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T760;}
	{object V363;
	base[4]= (V360);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	V363= vs_base[0];
	base[2]= CMPmake_fixnum((long)(*(LnkLI394))((V363)));
	base[2]=MMcons(base[2],base[0]);
	base[3]= (*(LnkLI395))((V363));
	base[3]=MMcons(base[3],base[2]);
	{object V364 = 
	make_cclosure_new(LC130,Cnil,base[3],Cdata);
	VMR33(V364)}}
	goto T760;
T760:;
	base[1]= (V362);
	base[2]= VV[95];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T769;}
	{object V365 = 
	make_cclosure_new(LC131,Cnil,base[0],Cdata);
	VMR33(V365)}
	goto T769;
T769:;
	base[1]= (V362);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T774;}
	{object V366 = (base[0]->c.c_car);
	VMR33(V366)}
	goto T774;
T774:;
	base[2]= VV[153];
	base[3]= (V362);
	base[4]= VV[156];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk392)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	{object V367 = vs_base[0];
	VMR33(V367)}}
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
	{object V368=base[0]->c.c_cdr;
	if(endp(V368))invalid_macro_call();
	{object V369= (V368->c.c_car);
	if(endp(V369))invalid_macro_call();
	base[2]= (V369->c.c_car);
	V369=V369->c.c_cdr;
	if(endp(V369))invalid_macro_call();
	base[3]= (V369->c.c_car);
	V369=V369->c.c_cdr;
	if(endp(V369))invalid_macro_call();
	base[4]= (V369->c.c_car);
	V369=V369->c.c_cdr;
	if(!endp(V369))invalid_macro_call();}
	V368=V368->c.c_cdr;
	base[5]= V368;}
	V370= list(2,VV[1],base[4]);
	V371= listA(3,VV[160],list(2,VV[161],list(2,VV[1],base[3])),VV[162]);
	V372= listA(4,VV[31],VV[163],list(2,VV[1],base[4]),VV[164]);
	V373= list(2,VV[1],base[4]);
	V374= list(2,VV[1],((((base[3])==Cnil?Ct:Cnil))==Cnil?Ct:Cnil));
	V375= list(2,VV[1],base[2]);
	if((base[3])==Cnil){
	goto T783;}
	V376= make_cons(base[3],Cnil);
	goto T781;
	goto T783;
T783:;
	V376= Cnil;
	goto T781;
T781:;
	V377= list(2,VV[165],list(5,VV[31],VV[166],/* INLINE-ARGS */V373,/* INLINE-ARGS */V374,list(3,VV[167],/* INLINE-ARGS */V375,list(2,VV[1],V376))));
	V378= make_cons(/* INLINE-ARGS */V377,Cnil);
	V379= list(2,VV[1],base[2]);
	if((base[3])==Cnil){
	goto T787;}
	V380= list(2,VV[170],base[3]);
	goto T785;
	goto T787;
T787:;
	V380= Cnil;
	goto T785;
T785:;
	V381= list(3,VV[85],VV[158],list(5,VV[44],VV[159],/* INLINE-ARGS */V370,list(4,VV[130],/* INLINE-ARGS */V371,/* INLINE-ARGS */V372,list(3,VV[96],/* INLINE-ARGS */V378,list(5,VV[44],VV[168],VV[92],list(4,VV[44],VV[169],list(3,VV[44],list(3,VV[167],/* INLINE-ARGS */V379,list(2,VV[1],V380)),VV[92]),VV[165]),VV[165]))),VV[171]));
	base[6]= listA(3,VV[76],list(3,VV[157],/* INLINE-ARGS */V381,list(3,VV[172],Cnil,list(3,VV[44],VV[173],list(3,VV[44],VV[174],list(2,VV[1],base[4]))))),base[5]);
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
	{object V382=base[0]->c.c_cdr;
	if(endp(V382))invalid_macro_call();
	{object V383= (V382->c.c_car);
	{object V384=getf(V383,VV[68],OBJNULL);
	if(V384==OBJNULL){
	base[2]= Cnil;
	} else {
	base[2]= V384;}}
	{object V385=getf(V383,VV[69],OBJNULL);
	if(V385==OBJNULL){
	base[3]= Cnil;
	} else {
	base[3]= V385;}}
	{object V386=getf(V383,VV[70],OBJNULL);
	if(V386==OBJNULL){
	base[4]= Cnil;
	} else {
	base[4]= V386;}}
	{object V387=getf(V383,VV[71],OBJNULL);
	if(V387==OBJNULL){
	base[5]= Cnil;
	} else {
	base[5]= V387;}}
	check_other_key(V383,4,VV[68],VV[69],VV[70],VV[71]);}
	V382=V382->c.c_cdr;
	base[6]= V382;}
	if((base[2])!=Cnil){
	goto T794;}
	if((base[3])!=Cnil){
	goto T794;}
	if((base[4])!=Cnil){
	goto T794;}
	if((base[5])!=Cnil){
	goto T794;}
	base[7]= listA(3,VV[96],Cnil,base[6]);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T794;
T794:;
	if((base[4])!=Cnil){
	goto T803;}
	if((base[5])!=Cnil){
	goto T803;}
	base[7]= list(2,VV[77],listA(3,VV[76],VV[175],base[6]));
	vs_top=(vs_base=base+7)+1;
	return;
	goto T803;
T803:;
	if(base[2]==Cnil){
	V388= Cnil;
	goto T807;}
	V388= VV[177];
	goto T807;
T807:;
	if(base[3]==Cnil){
	V389= Cnil;
	goto T808;}
	V389= VV[178];
	goto T808;
T808:;
	base[7]= list(2,VV[77],listA(3,VV[176],append(V388,V389),base[6]));
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
	{object V390=base[0]->c.c_cdr;
	if(endp(V390))invalid_macro_call();
	{object V391= (V390->c.c_car);
	if(endp(V391))invalid_macro_call();
	base[2]= (V391->c.c_car);
	V391=V391->c.c_cdr;
	if(endp(V391))invalid_macro_call();
	base[3]= (V391->c.c_car);
	V391=V391->c.c_cdr;
	if(!endp(V391))invalid_macro_call();}
	V390=V390->c.c_cdr;
	base[4]= V390;}
	base[5]= VV[179];
	base[6]= VV[180];
	base[7]= VV[181];
	{object V392;
	{object V393;
	object V394= base[2];
	if(V394==Cnil){
	V392= Cnil;
	goto T809;}
	base[8]=V393=MMcons(Cnil,Cnil);
	goto T810;
T810:;
	base[9]= (V394->c.c_car);
	vs_top=(vs_base=base+9)+1;
	L40(base);
	vs_top=sup;
	(V393->c.c_cdr)= vs_base[0];
	while(MMcdr(V393)!=Cnil)V393=MMcdr(V393);
	if((V394=MMcdr(V394))==Cnil){
	base[8]=base[8]->c.c_cdr;
	V392= base[8];
	goto T809;}
	goto T810;}
	goto T809;
T809:;
	V395= list(2,base[5],base[3]);
	V396= make_cons(/* INLINE-ARGS */V395,(V392));
	if(((V392))!=Cnil){
	goto T815;}
	V398= list(2,VV[46],list(2,VV[182],base[5]));
	V397= make_cons(/* INLINE-ARGS */V398,Cnil);
	goto T813;
	goto T815;
T815:;
	V397= Cnil;
	goto T813;
T813:;
	base[8]= listA(3,VV[125],/* INLINE-ARGS */V396,append(V397,base[4]));
	vs_top=(vs_base=base+8)+1;
	return;}
}
/*	local entry for function GET-KEY-ARG	*/

static object LI41(V401,V402)

register object V401;register object V402;
{	 VMB37 VMS37 VMV37
	goto TTL;
TTL:;
	goto T818;
T818:;
	if(!(type_of((V402))!=t_cons)){
	goto T820;}
	{object V403 = Cnil;
	VMR37(V403)}
	goto T820;
T820:;
	if(!((CMPcar((V402)))==((V401)))){
	goto T823;}
	{object V404 = CMPcadr((V402));
	VMR37(V404)}
	goto T823;
T823:;
	V402= CMPcddr((V402));
	goto T818;
	return Cnil;
}
/*	local entry for function GET-KEY-ARG1	*/

static object LI42(V407,V408)

register object V407;register object V408;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	goto T829;
T829:;
	if(!(type_of((V408))!=t_cons)){
	goto T831;}
	{object V409 = Cnil;
	VMR38(V409)}
	goto T831;
T831:;
	if(!((CMPcar((V408)))==((V407)))){
	goto T834;}
	{object V410 = CMPcdr((V408));
	VMR38(V410)}
	goto T834;
T834:;
	V408= CMPcddr((V408));
	goto T829;
	return Cnil;
}
/*	function definition for WALK-METHOD-LAMBDA	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	{object V411;
	object V412;
	check_arg(5);
	V411=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	V412=(base[2]);
	base[3]=MMcons(base[3],base[1]);
	base[4]=MMcons(base[4],base[3]);
	vs_top=sup;
	base[5]=MMcons(Cnil,base[4]);
	base[6]=MMcons(Cnil,base[5]);
	base[7]=MMcons(Cnil,base[6]);
	base[8]=make_cclosure_new(LC44,Cnil,base[7],Cdata);
	base[8]=MMcons(base[8],base[7]);
	{object V413;
	base[9]= (V411);
	base[10]= (V412);
	base[11]= (base[8]->c.c_car);
	vs_top=(vs_base=base+9)+3;
	(void) (*Lnk396)();
	vs_top=sup;
	V413= vs_base[0];
	base[9]= (V413);
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
	{register object V414;
	check_arg(1);
	V414=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V414))==t_symbol)){
	goto T849;}
	goto T847;
	goto T849;
T849:;
	if(type_of((V414))==t_cons){
	goto T851;}
	goto T848;
	goto T851;
T851:;
	if((CMPcar((V414)))==(VV[29])){
	goto T853;}
	goto T848;
	goto T853;
T853:;
	if(type_of(CMPcdr((V414)))==t_cons){
	goto T855;}
	goto T848;
	goto T855;
T855:;
	if(type_of(CMPcadr((V414)))==t_symbol){
	goto T857;}
	goto T848;
	goto T857;
T857:;
	if((CMPcddr((V414)))==Cnil){
	goto T847;}
	goto T848;
T848:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T847;
T847:;
	if(((*(LnkLI355))((V414)))!=Cnil){
	goto T859;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T859;
T859:;
	if(!(((VV[16]->s.s_dbind))==(VV[17]))){
	goto T862;}
	base[1]= (*(LnkLI356))((V414));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk397)(Lclptr397);
	return;
	goto T862;
T862:;{object V415;
	V415= (VV[147]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (*(LnkLI356))((V414));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V416= vs_base[0];
	base[1]= ((V415)==(CMPcar(V416))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local entry for function MAKE-PARAMETER-REFERENCES	*/

static object LI48(V422,V423,V424,V425,V426)

object V422;object V423;object V424;object V425;object V426;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	base[0]= (V424);
	{object V427;
	register object V428;
	V427= Cnil;
	V428= Cnil;
	{register object V429;
	register object V430;
	register object V431;
	object V432;
	V429= (V422);
	V430= Cnil;
	V431= (V423);
	V432= Cnil;
	goto T876;
T876:;
	{object V433;
	if(!(((V429))==Cnil)){
	goto T882;}
	goto T870;
	goto T882;
T882:;
	V433= CMPcar((V429));
	V429= CMPcdr((V429));
	V430= (V433);}
	{object V434;
	if(!(((V431))==Cnil)){
	goto T890;}
	goto T870;
	goto T890;
T890:;
	V434= CMPcar((V431));
	V431= CMPcdr((V431));
	V432= (V434);}
	{object V435;
	V435= (((type_of((V430))==t_cons||((V430))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	if(((V435))==Cnil){
	goto T897;}
	goto T877;
	goto T897;
T897:;
	base[1]= CMPcar((V430));
	vs_top=(vs_base=base+1)+1;
	L49(base);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T900;}
	base[1]= VV[201];
	base[2]= (V425);
	base[3]= (V426);
	base[4]= CMPcar((V430));
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk398)();
	vs_top=sup;
	goto T877;
	goto T900;
T900:;
	{object V436;
	V436= CMPcar((V430));
	if(((V427))!=Cnil){
	goto T909;}
	V428= make_cons((V436),Cnil);
	V427= (V428);
	goto T877;
	goto T909;
T909:;
	V438= make_cons((V436),Cnil);
	((V428))->c.c_cdr = /* INLINE-ARGS */V438;
	V437= (V428);
	V428= CMPcdr(V437);}}
	goto T877;
T877:;
	goto T876;}
	goto T870;
T870:;
	{object V439 = (V427);
	VMR41(V439)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-PLIST	*/

static object LI50(V441)

register object V441;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	if(((V441))==((VV[202]->s.s_dbind))){
	goto T916;}
	{object V442;
	object V443;
	V442= (VV[203]->s.s_dbind);
	V443= (VV[202]->s.s_dbind);
	(VV[202]->s.s_dbind)= (V442);
	(VV[203]->s.s_dbind)= (V443);}
	{object V444;
	object V445;
	V444= (VV[204]->s.s_dbind);
	V445= (VV[205]->s.s_dbind);
	(VV[205]->s.s_dbind)= (V444);
	(VV[204]->s.s_dbind)= (V445);}
	{object V446;
	object V447;
	V446= (VV[206]->s.s_dbind);
	V447= (VV[207]->s.s_dbind);
	(VV[207]->s.s_dbind)= (V446);
	(VV[206]->s.s_dbind)= (V447);}
	goto T916;
T916:;
	if(((V441))==((VV[202]->s.s_dbind))){
	goto T939;}
	if(((VV[207]->s.s_dbind))==Cnil){
	goto T939;}
	{object V448;
	object V449;
	object V450;
	V448= (VV[202]->s.s_dbind);
	V449= (VV[208]->s.s_dbind);
	V450= (VV[205]->s.s_dbind);
	base[0]= (V448);
	base[1]= (V449);
	base[2]= (V450);
	vs_top=(vs_base=base+0)+3;
	siLhash_set();
	vs_top=sup;}
	goto T939;
T939:;
	if(((V441))==((VV[202]->s.s_dbind))){
	goto T950;}
	(VV[202]->s.s_dbind)= (V441);
	(VV[207]->s.s_dbind)= Cnil;
	base[0]= (V441);
	base[1]= (VV[208]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	(VV[205]->s.s_dbind)= vs_base[0];
	goto T950;
T950:;
	{object V451 = (VV[205]->s.s_dbind);
	VMR42(V451)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SETF PCL METHOD-FUNCTION-PLIST	*/

static object LI51(V454,V455)

object V454;object V455;
{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	if(((V455))==((VV[202]->s.s_dbind))){
	goto T960;}
	{object V456;
	object V457;
	V456= (VV[203]->s.s_dbind);
	V457= (VV[202]->s.s_dbind);
	(VV[202]->s.s_dbind)= (V456);
	(VV[203]->s.s_dbind)= (V457);}
	{object V458;
	object V459;
	V458= (VV[206]->s.s_dbind);
	V459= (VV[207]->s.s_dbind);
	(VV[207]->s.s_dbind)= (V458);
	(VV[206]->s.s_dbind)= (V459);}
	{object V460;
	object V461;
	V460= (VV[204]->s.s_dbind);
	V461= (VV[205]->s.s_dbind);
	(VV[205]->s.s_dbind)= (V460);
	(VV[204]->s.s_dbind)= (V461);}
	goto T960;
T960:;
	if(((V455))==((VV[202]->s.s_dbind))){
	goto T983;}
	if(((VV[207]->s.s_dbind))==Cnil){
	goto T983;}
	{object V462;
	object V463;
	object V464;
	V462= (VV[202]->s.s_dbind);
	V463= (VV[208]->s.s_dbind);
	V464= (VV[205]->s.s_dbind);
	base[0]= (V462);
	base[1]= (V463);
	base[2]= (V464);
	vs_top=(vs_base=base+0)+3;
	siLhash_set();
	vs_top=sup;}
	goto T983;
T983:;
	(VV[202]->s.s_dbind)= (V455);
	(VV[207]->s.s_dbind)= Ct;
	(VV[205]->s.s_dbind)= (V454);
	{object V465 = (VV[205]->s.s_dbind);
	VMR43(V465)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-GET	*/

static object LI52(object V467,object V466,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB44 VMS44 VMV44
	{object V468;
	object V469;
	object V470;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V468= V467;
	V469= V466;
	narg = narg - 2;
	if (narg <= 0) goto T999;
	else {
	V470= first;}
	--narg; goto T1000;
	goto T999;
T999:;
	V470= Cnil;
	goto T1000;
T1000:;
	base[0]= (*(LnkLI399))((V468));
	base[1]= (V469);
	base[2]= (V470);
	vs_top=(vs_base=base+0)+3;
	Lgetf();
	vs_top=sup;
	{object V471 = vs_base[0];
	VMR44(V471)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SETF PCL METHOD-FUNCTION-GET	*/

static object LI53(V475,V476,V477)

object V475;object V476;object V477;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	{object V481;
	base[0]= (*(LnkLI399))(V476);
	base[1]= V475;
	base[2]= V477;
	vs_top=(vs_base=base+0)+3;
	siLput_f();
	vs_top=sup;
	V481= vs_base[0];
	(void)((*(LnkLI400))((V481),V476));
	{object V483 = V475;
	VMR45(V483)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-PV-TABLE	*/

static object LI54(V485)

object V485;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{object V486 = (VFUN_NARGS=2,(*(LnkLI211))((V485),VV[209]));
	VMR46(V486)}
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-METHOD	*/

static object LI55(V488)

object V488;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	{object V489 = (VFUN_NARGS=2,(*(LnkLI211))((V488),VV[210]));
	VMR47(V489)}
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-NEEDS-NEXT-METHODS-P	*/

static object LI56(V491)

object V491;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{object V492 = (VFUN_NARGS=3,(*(LnkLI211))((V491),VV[57],Ct));
	VMR48(V492)}
	return Cnil;
}
/*	macro definition for METHOD-FUNCTION-CLOSURE-GENERATOR	*/

static void L57()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V493=base[0]->c.c_cdr;
	if(endp(V493))invalid_macro_call();
	base[2]= (V493->c.c_car);
	V493=V493->c.c_cdr;
	if(!endp(V493))invalid_macro_call();}
	base[3]= list(3,VV[211],base[2],VV[212]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function LOAD-DEFMETHOD	*/

static object LI58(object V499,object V498,object V497,object V496,object V495,object V494,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB50 VMS50 VMV50
	{object V500;
	register object V501;
	object V502;
	object V503;
	object V504;
	register object V505;
	object V506;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <6) too_few_arguments();
	V500= V499;
	V501= V498;
	V502= V497;
	V503= V496;
	V504= V495;
	V505= V494;
	narg = narg - 6;
	if (narg <= 0) goto T1010;
	else {
	V506= first;}
	--narg; goto T1011;
	goto T1010;
T1010:;
	V506= Cnil;
	goto T1011;
T1011:;
	if(!(type_of((V501))==t_cons||((V501))==Cnil)){
	goto T1013;}
	(void)((*(LnkLI348))(CMPcadr((V501))));
	goto T1013;
T1013:;
	base[0]= (V505);
	vs_top=(vs_base=base+0)+1;
	Lcopy_tree();
	vs_top=sup;
	V505= vs_base[0];
	{object V507;{object V508;
	base[0]= (V505);
	base[1]= VV[213];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V508= vs_base[0];
	if(V508==Cnil)goto T1020;
	V507= V508;
	goto T1019;
	goto T1020;
T1020:;}
	V507= (*(LnkLI401))((V501),(V502),(V503));
	goto T1019;
T1019:;
	{object V511;
	base[0]= (V505);
	base[1]= V507;
	base[2]= VV[213];
	vs_top=(vs_base=base+0)+3;
	siLput_f();
	vs_top=sup;
	V511= vs_base[0];
	V505= (V511);}
	(void)((VFUN_NARGS=2,(*(LnkLI402))(VV[36],(V507))));
	{object V512 = (*(LnkLI403))((V500),(V501),(V502),(V503),(V504),(V505),(V506));
	VMR50(V512)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LOAD-DEFMETHOD-INTERNAL	*/

static object LI59(V520,V521,V522,V523,V524,V525,V526)

object V520;register object V521;object V522;object V523;object V524;register object V525;object V526;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	if(!(type_of((V521))==t_cons||((V521))==Cnil)){
	goto T1032;}
	(void)((*(LnkLI348))(CMPcadr((V521))));
	goto T1032;
T1032:;
	if(((V526))==Cnil){
	goto T1035;}
	{object V530;
	base[1]= (V525);
	base[2]= VV[27];
	base[3]= Cnil;
	vs_top=(vs_base=base+1)+3;
	Lgetf();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= V526;
	base[2]= VV[28];
	vs_top=(vs_base=base+0)+3;
	siLput_f();
	vs_top=sup;
	V530= vs_base[0];
	{object V531;
	base[0]= (V525);
	base[1]= (V530);
	base[2]= VV[27];
	vs_top=(vs_base=base+0)+3;
	siLput_f();
	vs_top=sup;
	V531= vs_base[0];
	V525= (V531);}}
	goto T1035;
T1035:;
	{object V532;
	base[0]=VV[404]->s.s_gfdef;
	base[1]= (V521);
	base[2]= (V522);
	base[3]= (V523);
	base[4]= (V524);
	base[5]= VV[15];
	V534= make_cons((V523),Cnil);
	V535= listA(3,VV[43],(V521),append((V522),/* INLINE-ARGS */V534));
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V536= vs_base[0];
	base[6]= list(2,/* INLINE-ARGS */V535,V536);
	{object V533;
	V533= (V525);
	 vs_top=base+7;
	 while(V533!=Cnil)
	 {vs_push((V533)->c.c_car);V533=(V533)->c.c_cdr;}
	vs_base=base+1;}
	funcall(base[0]);
	vs_top=sup;
	V532= vs_base[0];
	if(((V520))==(VV[19])){
	goto T1061;}
	V537= (VFUN_NARGS=2,(*(LnkLI290))((V520),Cnil));
	V538= (*(LnkLI363))((V532));
	if((/* INLINE-ARGS */V537)==(/* INLINE-ARGS */V538)){
	goto T1061;}
	base[0]= (VV[214]->s.s_dbind);
	base[1]= VV[215];
	base[2]= (V522);
	base[3]= (V523);
	base[4]= (V521);
	base[5]= (V520);
	base[7]= (*(LnkLI363))((V532));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+0)+7;
	Lformat();
	vs_top=sup;
	goto T1061;
T1061:;
	{object V539 = (V532);
	VMR51(V539)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-METHOD-SPEC	*/

static object LI60(V543,V544,V545)

object V543;object V544;object V545;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	V546= make_cons((V545),Cnil);
	{object V547 = listA(3,VV[36],(V543),append((V544),/* INLINE-ARGS */V546));
	VMR52(V547)}
	return Cnil;
}
/*	local entry for function INITIALIZE-METHOD-FUNCTION	*/

static object LI61(object V548,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB53 VMS53 VMV53
	{register object V549;
	object V550;
	object V551;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V549= V548;
	narg = narg - 1;
	if (narg <= 0) goto T1074;
	else {
	V550= first;}
	if (--narg <= 0) goto T1075;
	else {
	V551= va_arg(ap,object);}
	--narg; goto T1076;
	goto T1074;
T1074:;
	V550= Cnil;
	goto T1075;
T1075:;
	V551= Cnil;
	goto T1076;
T1076:;
	{register object V552;
	register object V553;
	object V554;
	register object V555;
	base[5]= (V549);
	base[6]= VV[35];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	base[0]= vs_base[0];
	base[5]= (V549);
	base[6]= VV[213];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V552= vs_base[0];
	base[5]= (V549);
	base[6]= VV[27];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V553= vs_base[0];
	base[5]= (V553);
	base[6]= VV[28];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V554= vs_base[0];
	V555= Cnil;
	base[5]= (V549);
	base[6]= VV[216];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	base[4]= vs_base[0];
	if(((V552))==Cnil){
	goto T1095;}
	if((base[0])==Cnil){
	goto T1098;}
	base[5]= base[0];
	base[6]= (V552);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk346)();
	vs_top=sup;
	base[0]= vs_base[0];
	goto T1098;
T1098:;
	if((base[4])==Cnil){
	goto T1095;}
	{object V556;{object V558;
	{object V559 =(CMPcar((V552)))->s.s_plist;
	 object ind= VV[217];
	while(V559!=Cnil){
	if(V559->c.c_car==ind){
	V558= (V559->c.c_cdr->c.c_car);
	goto T1109;
	}else V559=V559->c.c_cdr->c.c_cdr;}
	V558= Cnil;}
	goto T1109;
T1109:;
	if(V558==Cnil)goto T1108;
	V557= V558;
	goto T1107;
	goto T1108;
T1108:;}
	V560= CMPcar((V552));
	base[6]= Cnil;
	base[7]= VV[218];
	base[8]= CMPcar((V552));
	vs_top=(vs_base=base+6)+3;
	Lformat();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (VV[219]->s.s_dbind);
	vs_top=(vs_base=base+5)+2;
	Lintern();
	vs_top=sup;
	V561= vs_base[0];
	V557= sputprop(/* INLINE-ARGS */V560,VV[217],V561);
	goto T1107;
T1107:;
	V556= make_cons(V557,CMPcdr((V552)));
	base[5]= base[4];
	base[6]= (V556);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk346)();
	vs_top=sup;
	if((base[0])!=Cnil){
	goto T1095;}
	base[5]= VV[220];
	base[6]= (V556);
	vs_top=(vs_base=base+5)+2;
	L62(base);
	vs_top=sup;}
	goto T1095;
T1095:;
	if(((V553))==Cnil){
	goto T1124;}
	{object V562;
	object V563;
	base[5]= (V553);
	base[6]= VV[59];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V562= vs_base[0];
	base[5]= (V553);
	base[6]= VV[60];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V563= vs_base[0];
	if(((V562))!=Cnil){
	goto T1133;}
	if(((V563))==Cnil){
	goto T1126;}
	goto T1133;
T1133:;
	V555= (VFUN_NARGS=4,(*(LnkLI405))(VV[59],(V562),VV[60],(V563)));
	if(((V555))==Cnil){
	goto T1139;}
	base[5]= (V554);
	base[6]= (V555);
	vs_top=(vs_base=base+5)+2;
	Lset();
	vs_top=sup;
	goto T1139;
T1139:;
	base[5]= VV[209];
	base[6]= (V555);
	vs_top=(vs_base=base+5)+2;
	L62(base);
	vs_top=sup;}
	goto T1126;
T1126:;
	goto T1148;
T1148:;
	if(((V553))!=Cnil){
	goto T1150;}
	goto T1146;
	goto T1150;
T1150:;
	{register object V564;
	V564= CMPcar((V553));
	V553= CMPcdr((V553));
	base[5]= (V564);}
	{register object V565;
	V565= CMPcar((V553));
	V553= CMPcdr((V553));
	base[6]= (V565);}
	vs_top=(vs_base=base+5)+2;
	L62(base);
	vs_top=sup;
	goto T1148;
	goto T1146;
T1146:;
	if(((V551))==Cnil){
	goto T1162;}
	base[5]= VV[210];
	base[6]= (V551);
	vs_top=(vs_base=base+5)+2;
	L62(base);
	vs_top=sup;
	goto T1162;
T1162:;
	if(((V550))==Cnil){
	goto T1168;}
	if(base[0]!=Cnil){
	{object V566 = base[0];
	VMR53(V566)}}
	{object V567 = (*(LnkLI406))(base[4]);
	VMR53(V567)}
	goto T1168;
T1168:;
	{object V568 = Cnil;
	VMR53(V568)}
	goto T1124;
T1124:;
	{object V569 = Cnil;
	VMR53(V569)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for ANALYZE-LAMBDA-LIST	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM54; VC54
	vs_check;
	{object V570;
	check_arg(1);
	V570=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V571;
	register object V572;
	object V573;
	object V574;
	object V575;
	register object V576;
	register object V577;
	register object V578;
	V571= small_fixnum(0);
	V572= small_fixnum(0);
	V573= Cnil;
	V574= Cnil;
	V575= Cnil;
	V576= Cnil;
	V577= Cnil;
	V578= VV[181];
	{register object V579;
	register object V580;
	V579= (V570);
	V580= CMPcar((V579));
	goto T1174;
T1174:;
	if(!(((V579))==Cnil)){
	goto T1175;}
	goto T1170;
	goto T1175;
T1175:;
	{register object x= (V580),V581= VV[183];
	while(V581!=Cnil)
	if(x==(V581->c.c_car)){
	goto T1182;
	}else V581=V581->c.c_cdr;
	goto T1181;}
	goto T1182;
T1182:;
	{object V582= (V580);
	if((V582!= VV[407]))goto T1183;
	V578= VV[184];
	goto T1179;
	goto T1183;
T1183:;
	if((V582!= VV[62]))goto T1185;
	V573= Ct;
	V578= VV[185];
	goto T1179;
	goto T1185;
T1185:;
	if((V582!= VV[63]))goto T1189;
	V575= Ct;
	goto T1179;
	goto T1189;
T1189:;
	if((V582!= VV[170]))goto T1191;
	V574= Ct;
	V578= VV[186];
	goto T1179;
	goto T1191;
T1191:;
	if((V582!= VV[56]))goto T1195;
	goto T1170;
	goto T1195;
T1195:;
	base[2]= VV[221];
	base[3]= (V580);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	vs_top=sup;
	goto T1179;}
	goto T1181;
T1181:;
	{object V583= (V578);
	if((V583!= VV[181]))goto T1198;
	V571= number_plus((V571),small_fixnum(1));
	goto T1179;
	goto T1198;
T1198:;
	if((V583!= VV[184]))goto T1200;
	V572= number_plus((V572),small_fixnum(1));
	goto T1179;
	goto T1200;
T1200:;
	if((V583!= VV[185]))goto T1202;
	{object V584;
	base[3]= (V580);
	vs_top=(vs_base=base+3)+1;
	L64(base);
	vs_top=sup;
	V584= vs_base[0];
	V576= make_cons((V584),(V576));}
	V577= make_cons(V580,(V577));
	goto T1179;
	goto T1202;
T1202:;
	if((V583!= VV[186]))goto T1208;
	goto T1179;
	goto T1208;
T1208:;
	FEerror("The ECASE key value ~s is illegal.",1,V583);
	goto T1179;}
	goto T1179;
T1179:;
	V579= CMPcdr((V579));
	V580= CMPcar((V579));
	goto T1174;}
	goto T1170;
T1170:;
	base[1]= (V571);
	base[2]= (V572);
	base[3]= (V573);
	base[4]= (V574);
	base[5]= (V575);
	base[6]= reverse((V576));
	base[7]= reverse((V577));
	vs_top=(vs_base=base+1)+7;
	return;}
	}
}
/*	local entry for function KEYWORD-SPEC-NAME	*/

static object LI65(V587)

object V587;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{object V588;
	if(!(type_of((V587))!=t_cons)){
	goto T1223;}
	V588= (V587);
	goto T1221;
	goto T1223;
T1223:;
	V588= CMPcar((V587));
	goto T1221;
T1221:;
	if(!(type_of((V588))!=t_cons)){
	goto T1226;}
	base[0]= symbol_name((V588));
	base[2]= VV[222];
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V589 = vs_base[0];
	VMR55(V589)}
	goto T1226;
T1226:;
	{object V590 = CMPcar((V588));
	VMR55(V590)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FTYPE-DECLARATION-FROM-LAMBDA-LIST	*/

static object LI66(V592)

object V592;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{object V593;
	object V594;
	object V595;
	object V596;
	object V597;
	object V598;
	object V599;
	base[0]= (V592);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk408)();
	if(vs_base>=vs_top){vs_top=sup;goto T1233;}
	V593= vs_base[0];
	vs_base++;
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
	vs_top=sup;
	goto T1240;
	goto T1233;
T1233:;
	V593= Cnil;
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
	{object V600;
	{object V601;
	object V602= (V598);
	if(V602==Cnil){
	V600= Cnil;
	goto T1241;}
	base[1]=V601=MMcons(Cnil,Cnil);
	goto T1242;
T1242:;
	(V601->c.c_car)= (*(LnkLI409))((V602->c.c_car));
	if((V602=MMcdr(V602))==Cnil){
	V600= base[1];
	goto T1241;}
	V601=MMcdr(V601)=MMcons(Cnil,Cnil);
	goto T1242;}
	goto T1241;
T1241:;
	base[2]= (V593);
	base[3]= VV[223];
	base[4]= Ct;
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	base[1]= vs_base[0];
	if(!(number_compare(small_fixnum(0),(V594))<0)){
	goto T1251;}
	base[3]= (V594);
	base[4]= VV[223];
	base[5]= Ct;
	vs_top=(vs_base=base+3)+3;
	Lmake_list();
	vs_top=sup;
	V604= vs_base[0];
	base[2]= append(VV[224],V604);
	goto T1249;
	goto T1251;
T1251:;
	base[2]= Cnil;
	goto T1249;
T1249:;
	if(((V596))==Cnil){
	goto T1259;}
	base[3]= VV[225];
	goto T1257;
	goto T1259;
T1259:;
	base[3]= Cnil;
	goto T1257;
T1257:;
	if(((V595))==Cnil){
	goto T1263;}
	base[5]= VV[226];
	{object V605;
	object V606= (V600);
	if(V606==Cnil){
	base[6]= Cnil;
	goto T1266;}
	base[7]=V605=MMcons(Cnil,Cnil);
	goto T1267;
T1267:;
	(V605->c.c_car)= list(2,(V606->c.c_car),Ct);
	if((V606=MMcdr(V606))==Cnil){
	base[6]= base[7];
	goto T1266;}
	V605=MMcdr(V605)=MMcons(Cnil,Cnil);
	goto T1267;}
	goto T1266;
T1266:;
	if(((V597))==Cnil){
	goto T1271;}
	base[7]= VV[227];
	goto T1269;
	goto T1271;
T1271:;
	base[7]= Cnil;
	goto T1269;
T1269:;
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	base[4]= vs_base[0];
	goto T1261;
	goto T1263;
T1263:;
	base[4]= Cnil;
	goto T1261;
T1261:;
	vs_top=(vs_base=base+1)+4;
	Lappend();
	vs_top=sup;
	V603= vs_base[0];
	{object V608 = list(3,VV[33],V603,VV[228]);
	VMR56(V608)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PROCLAIM-DEFGENERIC	*/

static object LI67(V611,V612)

register object V611;object V612;
{	 VMB57 VMS57 VMV57
	goto TTL;
TTL:;
	if(!(type_of((V611))==t_cons)){
	goto T1273;}
	V611= (*(LnkLI410))(CMPcadr((V611)));
	goto T1273;
T1273:;
	{object V613 = sputprop((V611),VV[229],Ct);
	VMR57(V613)}
	return Cnil;
}
/*	function definition for ENSURE-GENERIC-FUNCTION	*/

static void L68()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_check;
	{register object V614;
	object V615;
	object V616;
	if(vs_top-vs_base<1) too_few_arguments();
	parse_key(vs_base+1,TRUE,TRUE,1,VV[295]);
	V614=(base[0]);
	vs_top=sup;
	V615=(base[1]);
	V616=(base[2]);
	{object V617;
	if(((*(LnkLI355))((V614)))!=Cnil){
	goto T1278;}
	V617= Cnil;
	goto T1277;
	goto T1278;
T1278:;
	V617= (*(LnkLI356))((V614));
	goto T1277;
T1277:;
	if(((V617))==Cnil){
	goto T1281;}
	if(!(((VV[16]->s.s_dbind))==(VV[17]))){
	goto T1281;}
	base[4]= (V617);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk357)(Lclptr357);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1281;}
	base[4]= (*(LnkLI411))((V614));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1281;
T1281:;
	base[4]=VV[412]->s.s_gfdef;
	base[5]= (V617);
	base[6]= (V614);
	{object V618;
	V618= (V615);
	 vs_top=base+7;
	 while(V618!=Cnil)
	 {vs_push((V618)->c.c_car);V618=(V618)->c.c_cdr;}
	vs_base=base+5;}
	funcall(base[4]);
	return;}
	}
}
/*	local entry for function GENERIC-CLOBBERS-FUNCTION	*/

static object LI69(V620)

object V620;
{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	base[0]= VV[230];
	base[1]= (V620);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V621 = vs_base[0];
	VMR59(V621)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-GF-P	*/

static object LI70(V623)

register object V623;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;{object V624;
	V624= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V623);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V625= vs_base[0];
	if((V624)==(CMPcar(V625))){
	goto T1293;}}
	{object V626 = Cnil;
	VMR60(V626)}
	goto T1293;
T1293:;
	if(type_of(V623)==t_structure){
	goto T1302;}
	goto T1300;
	goto T1302;
T1302:;
	if(!(((V623)->str.str_def)==(VV[231]))){
	goto T1300;}
	V627= STREF(object,(V623),4);
	goto T1298;
	goto T1300;
T1300:;{object V629;
	V629= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V623);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V630= vs_base[0];
	if(!((V629)==(CMPcar(V630)))){
	goto T1305;}}
	V627= CMPcar(((V623))->cc.cc_turbo[12]);
	goto T1298;
	goto T1305;
T1305:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V627= vs_base[0];
	goto T1298;
T1298:;
	{object V631 = (((V627)->v.v_self[fix((VV[232]->s.s_dbind))])==((VV[132]->s.s_dbind))?Ct:Cnil);
	VMR60(V631)}
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
	{object V632=base[0]->c.c_cdr;
	if(endp(V632))invalid_macro_call();
	base[2]= (V632->c.c_car);
	V632=V632->c.c_cdr;
	if(!endp(V632))invalid_macro_call();}
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
	{object V633=base[0]->c.c_cdr;
	if(endp(V633))invalid_macro_call();
	base[2]= (V633->c.c_car);
	V633=V633->c.c_cdr;
	if(!endp(V633))invalid_macro_call();}
	base[3]= list(3,VV[233],list(2,VV[234],base[2]),VV[236]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function __si::MAKE-ARG-INFO	*/

static object LI73(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB63 VMS63 VMV63
	{object V634;
	object V635;
	object V636;
	object V637;
	object V638;
	object V639;
	object V640;
	object V641;
	object V642;
	object V643;
	object V644;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)&LI73key,first,ap);
	V634=(Vcs[0]);
	V635=(Vcs[1]);
	V636=(Vcs[2]);
	V637=(Vcs[3]);
	V638=(Vcs[4]);
	V639=(Vcs[5]);
	V640=(Vcs[6]);
	V641=(Vcs[7]);
	V642=(Vcs[8]);
	if(Vcs[9]==0){
	V643= Ct;
	}else{
	V643=(Vcs[9]);}
	V644=(Vcs[10]);
	base[0]= VV[238];
	base[1]= (V634);
	base[2]= (V635);
	base[3]= (V636);
	base[4]= (V637);
	base[5]= (V638);
	base[6]= (V639);
	base[7]= (V640);
	base[8]= (V641);
	base[9]= (V642);
	base[10]= (V643);
	base[11]= (V644);
	vs_top=(vs_base=base+0)+12;
	siLmake_structure();
	vs_top=sup;
	{object V645 = vs_base[0];
	VMR63(V645)}
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
	{object V657 = vs_base[0];
	VMR64(V657)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ARG-INFO-VALID-P	*/

static object LI75(V659)

object V659;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	{object V660 = ((((STREF(object,(V659),12))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR65(V660)}
	return Cnil;
}
/*	local entry for function ARG-INFO-APPLYP	*/

static object LI76(V662)

object V662;
{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	if(!((fix(STREF(object,(V662),12)))>0)){
	goto T1336;}
	{object V663 = Ct;
	VMR66(V663)}
	goto T1336;
T1336:;
	{object V664 = STREF(object,(V662),16);
	VMR66(V664)}
	return Cnil;
}
/*	local entry for function ARG-INFO-NUMBER-REQUIRED	*/

static object LI77(V666)

object V666;
{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	{long V667 = (long)length(STREF(object,(V666),8));
	VMR67((object)V667)}
}
/*	local entry for function ARG-INFO-NKEYS	*/

static object LI78(V669)

object V669;
{	 VMB68 VMS68 VMV68
	goto TTL;
TTL:;
	base[0]= VV[424];
	base[1]= STREF(object,(V669),8);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk425)();
	vs_top=sup;
	{object V670 = vs_base[0];
	VMR68(V670)}
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
	{object V671=base[0]->c.c_cdr;
	if(endp(V671))invalid_macro_call();
	base[2]= (V671->c.c_car);
	V671=V671->c.c_cdr;
	if(endp(V671))invalid_macro_call();
	base[3]= (V671->c.c_car);
	V671=V671->c.c_cdr;
	if(!endp(V671))invalid_macro_call();}
	{object V672;
	base[4]= VV[239];
	vs_top=(vs_base=base+4)+1;
	Lgensym();
	vs_top=sup;
	V672= vs_base[0];
	V673= list(2,(V672),base[3]);
	V674= make_cons(/* INLINE-ARGS */V673,Cnil);
	V675= list(3,VV[241],base[2],(V672));
	base[4]= list(3,VV[96],/* INLINE-ARGS */V674,list(3,VV[240],/* INLINE-ARGS */V675,list(3,VV[29],base[2],(V672))));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	local entry for function SET-ARG-INFO	*/

static object LI80(object V676,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB70 VMS70 VMV70
	{register object V677;
	object V678;
	register object V679;
	register object V680;
	object V681;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V677= V676;
	narg= narg - 1;
	{
	parse_key_new_new(narg,Vcs +1,(struct key *)&LI80key,first,ap);
	V678=(Vcs[1]);
	if(Vcs[2]==0){
	V679= Cnil;
	V680= Cnil;
	}else{
	V679=(Vcs[2]);
	V680= Ct;}
	V681=(Vcs[3]);
	{register object V682;
	object V683;
	object V684;
	object V685;
	if(!(((VV[16]->s.s_dbind))==(VV[17]))){
	goto T1345;}
	base[4]= (V677);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	V682= vs_base[0];
	goto T1343;
	goto T1345;
T1345:;
	if(type_of(V677)==t_structure){
	goto T1352;}
	goto T1350;
	goto T1352;
T1352:;
	if(!(((V677)->str.str_def)==(VV[242]))){
	goto T1350;}
	V686= STREF(object,(V677),4);
	goto T1348;
	goto T1350;
T1350:;{object V688;
	V688= (VV[147]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V677);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V689= vs_base[0];
	if(!((V688)==(CMPcar(V689)))){
	goto T1355;}}
	V686= CMPcar(((V677))->cc.cc_turbo[12]);
	goto T1348;
	goto T1355;
T1355:;
	base[4]= VV[148];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V686= vs_base[0];
	goto T1348;
T1348:;
	V682= (V686)->v.v_self[fix((VV[236]->s.s_dbind))];
	goto T1343;
T1343:;
	if(!(((VV[16]->s.s_dbind))==(VV[17]))){
	goto T1363;}
	base[4]= (V677);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk426)(Lclptr426);
	vs_top=sup;
	V683= vs_base[0];
	goto T1361;
	goto T1363;
T1363:;
	if(type_of(V677)==t_structure){
	goto T1370;}
	goto T1368;
	goto T1370;
T1370:;
	if(!(((V677)->str.str_def)==(VV[243]))){
	goto T1368;}
	V690= STREF(object,(V677),4);
	goto T1366;
	goto T1368;
T1368:;{object V692;
	V692= (VV[147]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V677);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V693= vs_base[0];
	if(!((V692)==(CMPcar(V693)))){
	goto T1373;}}
	V690= CMPcar(((V677))->cc.cc_turbo[12]);
	goto T1366;
	goto T1373;
T1373:;
	base[4]= VV[148];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V690= vs_base[0];
	goto T1366;
T1366:;
	V683= (V690)->v.v_self[fix((VV[235]->s.s_dbind))];
	goto T1361;
T1361:;
	{object V694= STREF(object,(V682),12);
	V684= (type_of(V694)==t_fixnum||type_of(V694)==t_bignum?Ct:Cnil);}
	if((V678)==Cnil){
	V685= Cnil;
	goto T1380;}
	V685= ((CMPcdr((V683)))==Cnil?Ct:Cnil);
	goto T1380;
T1380:;
	if(((V680))!=Cnil){
	goto T1381;}
	if(((V683))==Cnil){
	goto T1381;}
	V679= (*(LnkLI427))((V677));
	goto T1381;
T1381:;
	if(((V680))!=Cnil){
	goto T1388;}
	if(((V685))==Cnil){
	goto T1387;}
	if(!((STREF(object,(V682),0))==(VV[237]))){
	goto T1387;}
	goto T1388;
T1388:;
	{object V695;
	object V696;
	object V697;
	object V698;
	object V699;
	object V700;
	base[4]= (V679);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk408)();
	if(vs_base>=vs_top){vs_top=sup;goto T1396;}
	V695= vs_base[0];
	vs_base++;
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
	vs_top=sup;
	goto T1402;
	goto T1396;
T1396:;
	V695= Cnil;
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
	if(((V683))==Cnil){
	goto T1403;}
	if(((V685))!=Cnil){
	goto T1403;}
	{object V701;
	object V702;
	object V703;
	V701= CMPmake_fixnum((long)(*(LnkLI394))((V682)));
	V702= STREF(object,(V682),12);
	V703= STREF(object,(V682),16);
	if(!(number_compare((V695),(V701))==0)){
	goto T1411;}
	if(!(number_compare((V696),(V702))==0)){
	goto T1411;}
	if((V697)!=Cnil){
	V704= (V697);
	goto T1417;}
	V704= (V698);
	goto T1417;
T1417:;
	if((V704)==((V703))){
	goto T1403;}
	goto T1411;
T1411:;
	base[4]= VV[244];
	base[5]= (V679);
	base[6]= (V677);
	vs_top=(vs_base=base+4)+3;
	Lerror();
	vs_top=sup;}
	goto T1403;
T1403:;
	if(((V680))==Cnil){
	goto T1421;}
	if(equal(STREF(object,(V682),0),V679)){
	goto T1421;}
	V706= Ct;
	STSET(object,(V682),0, V679);
	(void)(V679);
	goto T1421;
T1421:;
	if(((V680))!=Cnil){
	goto T1427;}
	if(((V681))!=Cnil){
	goto T1427;}
	if((STREF(object,(V682),4))!=Cnil){
	goto T1426;}
	goto T1427;
T1427:;
	{object V707;
	V707= (*(LnkLI428))((V679),(V695),(V681));
	if(equal(STREF(object,(V682),4),(V707))){
	goto T1426;}
	V708= Ct;
	STSET(object,(V682),4, (V707));
	(void)((V707));}
	goto T1426;
T1426:;
	{object V709;
	base[4]= (V695);
	vs_top=(vs_base=base+4)+1;
	Lmake_list();
	vs_top=sup;
	V709= vs_base[0];
	if(equal(STREF(object,(V682),8),(V709))){
	goto T1436;}
	V710= Ct;
	STSET(object,(V682),8, (V709));
	(void)((V709));}
	goto T1436;
T1436:;
	if(equal(STREF(object,(V682),12),V696)){
	goto T1441;}
	V712= Ct;
	STSET(object,(V682),12, V696);
	(void)(V696);
	goto T1441;
T1441:;
	{object V713;
	if((V697)!=Cnil){
	V714= (V697);
	goto T1446;}
	V714= (V698);
	goto T1446;
T1446:;
	V713= ((((V714)==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	if(equal(STREF(object,(V682),16),(V713))){
	goto T1444;}
	V715= Ct;
	STSET(object,(V682),16, (V713));
	(void)((V713));}
	goto T1444;
T1444:;
	{object V716;
	if(((V680))==Cnil){
	goto T1451;}
	if(((V699))==Cnil){
	goto T1454;}
	V716= Ct;
	goto T1449;
	goto T1454;
T1454:;
	V716= (V700);
	goto T1449;
	goto T1451;
T1451:;
	V716= STREF(object,(V682),16);
	goto T1449;
T1449:;
	if(equal(STREF(object,(V682),20),(V716))){
	goto T1387;}
	V717= Ct;
	STSET(object,(V682),20, (V716));
	(void)((V716));}}
	goto T1387;
T1387:;
	if(((V678))==Cnil){
	goto T1458;}
	base[4]= (V677);
	base[5]= (V682);
	base[6]= (V678);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk429)();
	vs_top=sup;
	goto T1458;
T1458:;
	(void)((*(LnkLI430))((V677),(V682),(V678),(V683),(V684),(V685)));
	{object V718 = (V682);
	VMR70(V718)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for CHECK-METHOD-ARG-INFO	*/

static void L81()
{register object *base=vs_base;
	register object *sup=base+VM71; VC71
	vs_check;
	{register object V719;
	check_arg(3);
	V719=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V720;
	object V721;
	object V722;
	object V723;
	object V724;
	if(!(type_of(base[2])==t_cons)){
	goto T1468;}
	base[4]= (*(LnkLI431))(base[2]);
	goto T1466;
	goto T1468;
T1468:;
	base[5]= base[2];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk48)(Lclptr48);
	vs_top=sup;
	base[4]= vs_base[0];
	goto T1466;
T1466:;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk408)();
	if(vs_base>=vs_top){vs_top=sup;goto T1471;}
	V720= vs_base[0];
	vs_base++;
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
	base[3]=MMcons(vs_base[0],Cnil);
	vs_top=sup;
	goto T1477;
	goto T1471;
T1471:;
	V720= Cnil;
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
	base[3]=MMcons(Cnil,Cnil);
	goto T1477;
T1477:;
	{object V725;
	object V726;
	object V727;
	object V728;
	V725= CMPmake_fixnum((long)(*(LnkLI394))((V719)));
	V726= STREF(object,(V719),12);
	V727= STREF(object,(V719),16);
	V728= STREF(object,(V719),20);
	if(number_compare((V720),(V725))==0){
	goto T1482;}
	base[4]= VV[245];
	base[6]= (V720);
	base[7]= (V725);
	vs_top=(vs_base=base+6)+2;
	L83(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L82(base);
	vs_top=sup;
	goto T1482;
T1482:;
	if(number_compare((V721),(V726))==0){
	goto T1489;}
	base[4]= VV[246];
	base[6]= (V721);
	base[7]= (V726);
	vs_top=(vs_base=base+6)+2;
	L83(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L82(base);
	vs_top=sup;
	goto T1489;
T1489:;
	if((V722)!=Cnil){
	V729= (V722);
	goto T1499;}
	V729= (V723);
	goto T1499;
T1499:;
	if((V729)==((V727))){
	goto T1496;}
	base[4]= VV[247];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T1496;
T1496:;
	if(!(type_of((V728))==t_cons)){
	goto T1502;}
	if(((V723))==Cnil){
	goto T1506;}
	if(((V722))==Cnil){
	goto T1505;}
	goto T1506;
T1506:;
	if(((V724))!=Cnil){
	goto T1505;}
	base[4]= 
	make_cclosure_new(LC133,Cnil,base[3],Cdata);
	base[5]= (V728);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk366)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1505;}
	base[4]= VV[248];
	base[5]= (V728);
	vs_top=(vs_base=base+4)+2;
	L82(base);
	return;
	goto T1505;
T1505:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1502;
T1502:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}}
	}
}
/*	local entry for function SET-ARG-INFO1	*/

static object LI84(V736,V737,V738,V739,V740,V741)

object V736;object V737;object V738;object V739;object V740;object V741;
{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V742;
	object V743;
	object V744;
	register object V745;
	if((V739)==Cnil){
	V742= Cnil;
	goto T1518;}
	if((CMPcdr((V739)))!=Cnil){
	goto T1519;}
	V742= Cnil;
	goto T1518;
	goto T1519;
T1519:;
	V742= (V738);
	goto T1518;
T1518:;
	V743= CMPmake_fixnum((long)length(STREF(object,(V737),8)));
	if(((V742))==Cnil){
	goto T1524;}
	V744= STREF(object,(V737),8);
	goto T1522;
	goto T1524;
T1524:;
	base[4]= (V743);
	vs_top=(vs_base=base+4)+1;
	Lmake_list();
	vs_top=sup;
	V744= vs_base[0];
	goto T1522;
T1522:;
	if(((V742))==Cnil){
	goto T1529;}
	V745= STREF(object,(V737),24);
	goto T1527;
	goto T1529;
T1529:;
	V745= Cnil;
	goto T1527;
T1527:;
	if(((*(LnkLI432))((V737)))==Cnil){
	goto T1517;}
	{register object V746;
	register object V747;
	if(((V738))==Cnil){
	goto T1536;}
	V746= make_cons((V738),Cnil);
	goto T1534;
	goto T1536;
T1536:;
	V746= (V739);
	goto T1534;
T1534:;
	V747= CMPcar((V746));
	goto T1540;
T1540:;
	if(!(((V746))==Cnil)){
	goto T1541;}
	goto T1533;
	goto T1541;
T1541:;
	{object V748;
	register object V749;
	register object V750;
	if(((VV[16]->s.s_dbind))==(VV[17])){
	goto T1547;}
	if(type_of((V747))==t_cons){
	goto T1548;}
	goto T1547;
T1547:;
	base[9]= (V747);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk433)(Lclptr433);
	vs_top=sup;
	V748= vs_base[0];
	goto T1546;
	goto T1548;
T1548:;
	V748= (VFUN_NARGS=2,(*(LnkLI434))((V747),Ct));
	goto T1546;
T1546:;
	if(((VV[16]->s.s_dbind))==(VV[17])){
	goto T1554;}
	if(type_of((V747))==t_cons){
	goto T1555;}
	goto T1554;
T1554:;
	V749= (*(LnkLI363))((V747));
	goto T1553;
	goto T1555;
T1555:;
	V749= (*(LnkLI435))((V747));
	goto T1553;
T1553:;
	if(((V749))==Cnil){
	goto T1561;}
	if(!(((VV[16]->s.s_dbind))==(VV[17]))){
	goto T1560;}
	base[9]= (V736);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk436)(Lclptr436);
	vs_top=sup;
	V751= vs_base[0];
	if(!((V751)==((VV[252]->s.s_dbind)))){
	goto T1561;}
	goto T1560;
T1560:;
	if(!(((V749))==((VV[253]->s.s_dbind)))){
	goto T1570;}
	V750= VV[254];
	goto T1559;
	goto T1570;
T1570:;
	if(!(((V749))==((VV[255]->s.s_dbind)))){
	goto T1573;}
	V750= VV[256];
	goto T1559;
	goto T1573;
T1573:;
	if(!(((V749))==((VV[257]->s.s_dbind)))){
	goto T1576;}
	V750= VV[258];
	goto T1559;
	goto T1576;
T1576:;
	V750= Cnil;
	goto T1559;
	goto T1561;
T1561:;
	V750= Cnil;
	goto T1559;
T1559:;
	base[10]=VV[437]->s.s_gfdef;
	{object V752;
	object V753= (V744);
	object V754= (V748);
	if(V753==Cnil||V754==Cnil){
	V744= Cnil;
	goto T1579;}
	base[9]=V752=MMcons(Cnil,Cnil);
	goto T1580;
T1580:;
	base[11]= (V753->c.c_car);
	base[12]= (V754->c.c_car);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk437)();
	vs_top=sup;
	(V752->c.c_car)= vs_base[0];
	if((V753=MMcdr(V753))==Cnil||(V754=MMcdr(V754))==Cnil){
	V744= base[9];
	goto T1579;}
	V752=MMcdr(V752)=MMcons(Cnil,Cnil);
	goto T1580;}
	goto T1579;
T1579:;
	if(((V745))!=Cnil){
	goto T1586;}
	V745= (V750);
	goto T1584;
	goto T1586;
T1586:;
	if(!(((V745))==((V750)))){
	goto T1589;}
	goto T1584;
	goto T1589;
T1589:;
	V745= Cnil;
	goto T1584;
T1584:;}
	V746= CMPcdr((V746));
	V747= CMPcar((V746));
	goto T1540;}
	goto T1533;
T1533:;
	if(equal(STREF(object,(V737),8),V744)){
	goto T1596;}
	V756= Ct;
	STSET(object,(V737),8, V744);
	(void)(V744);
	goto T1596;
T1596:;
	if(equal(STREF(object,(V737),24),V745)){
	goto T1517;}
	V758= Ct;
	STSET(object,(V737),24, V745);
	(void)(V745);}
	goto T1517;
T1517:;
	if(((V740))==Cnil){
	goto T1602;}
	if(((V741))==Cnil){
	goto T1601;}
	goto T1602;
T1602:;
	{object V759;
	object V760;
	if(((*(LnkLI438))((V736)))==Cnil){
	goto T1608;}
	base[0]= Ct;
	base[1]= Ct;
	vs_top=(vs_base=base+0)+2;
	goto T1606;
	goto T1608;
T1608:;
	base[0]= (V736);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk439)();
	goto T1606;
T1606:;
	if(vs_base>=vs_top){vs_top=sup;goto T1613;}
	V759= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1614;}
	V760= vs_base[0];
	vs_top=sup;
	goto T1615;
	goto T1613;
T1613:;
	V759= Cnil;
	goto T1614;
T1614:;
	V760= Cnil;
	goto T1615;
T1615:;
	if(equal(STREF(object,(V737),32),V759)){
	goto T1616;}
	V762= Ct;
	STSET(object,(V737),32, V759);
	(void)(V759);
	goto T1616;
T1616:;
	if(equal(STREF(object,(V737),36),V760)){
	goto T1619;}
	V764= Ct;
	STSET(object,(V737),36, V760);
	(void)(V760);
	goto T1619;
T1619:;
	if((STREF(object,(V737),36))!=Cnil){
	goto T1601;}
	if(equal(STREF(object,(V737),24),Ct)){
	goto T1601;}
	V766= Ct;
	STSET(object,(V737),24, Ct);
	(void)(Ct);}
	goto T1601;
T1601:;
	if(((V740))!=Cnil){
	goto T1626;}
	{object V767;
	if(!(((VV[16]->s.s_dbind))==(VV[17]))){
	goto T1631;}
	base[0]= (V736);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk440)(Lclptr440);
	vs_top=sup;
	V767= vs_base[0];
	goto T1629;
	goto T1631;
T1631:;
	V767= (*(LnkLI441))((V736));
	goto T1629;
T1629:;
	{object V768;
	{object V769;
	object V770;
	if(!(type_of((V767))!=t_cons)){
	goto T1637;}
	V769= (V767);
	goto T1635;
	goto T1637;
T1637:;
	V769= CMPcadr((V767));
	goto T1635;
T1635:;{object V771;
	V771= (VV[219]->s.s_dbind);
	base[2]= (VV[219]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V772= vs_base[0];
	V770= make_cons(V771,V772);}
	if((V769)==Cnil){
	V768= Cnil;
	goto T1634;}
	if(type_of((V769))==t_symbol){
	goto T1642;}
	V768= Cnil;
	goto T1634;
	goto T1642;
T1642:;
	base[2]= (V769);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_package();
	vs_top=sup;
	V775= vs_base[0];
	{register object x= V775,V774= (V770);
	while(V774!=Cnil)
	if(x==(V774->c.c_car)){
	V773= V774;
	goto T1646;
	}else V774=V774->c.c_cdr;
	V773= Cnil;}
	goto T1646;
T1646:;
	if((((V773)==Cnil?Ct:Cnil))==Cnil){
	goto T1644;}
	V768= Cnil;
	goto T1634;
	goto T1644;
T1644:;
	base[2]= VV[259];
	base[3]= symbol_name((V769));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk442)();
	vs_top=sup;
	V776= vs_base[0];
	V768= ((V776)==Cnil?Ct:Cnil);}
	goto T1634;
T1634:;
	if(equal(STREF(object,(V737),28),(V768))){
	goto T1626;}
	V777= Ct;
	STSET(object,(V737),28, (V768));
	(void)((V768));}}
	goto T1626;
T1626:;
	{object V778;
	if(!(((((VV[16]->s.s_dbind))==(VV[17])?Ct:Cnil))==Cnil)){
	goto T1656;}
	V778= Ct;
	goto T1655;
	goto T1656;
T1656:;
	{object V779;
	object V780;
	base[2]= (V736);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk358)(Lclptr358);
	vs_top=sup;
	V779= vs_base[0];
	base[2]= (VV[360]->s.s_gfdef);
	base[4]= (V779);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	V781= vs_base[0];
	base[3]= list(4,(V736),V781,VV[260],Cnil);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk443)(Lclptr443);
	vs_top=sup;
	V780= vs_base[0];
	if((V780)==Cnil){
	V778= Cnil;
	goto T1655;}
	if((CMPcdr((V780)))==Cnil){
	goto T1665;}
	V778= Cnil;
	goto T1655;
	goto T1665;
T1665:;
	{object V782;
	base[2]= CMPcar((V780));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk433)(Lclptr433);
	vs_top=sup;
	V782= vs_base[0];
	base[2]= CMPcar((V782));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1669;}
	V778= Cnil;
	goto T1655;
	goto T1669;
T1669:;
	base[2]= CMPcar((V782));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	V783= vs_base[0];
	if((VV[18])==(V783)){
	goto T1672;}
	V778= Cnil;
	goto T1655;
	goto T1672;
T1672:;
	base[2]= CMPcadr((V782));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1676;}
	V778= Cnil;
	goto T1655;
	goto T1676;
T1676:;
	base[2]= CMPcadr((V782));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	V784= vs_base[0];
	V778= ((VV[19])==(V784)?Ct:Cnil);}}
	goto T1655;
T1655:;
	if(equal(STREF(object,(V737),40),(V778))){
	goto T1654;}
	V785= Ct;
	STSET(object,(V737),40, (V778));
	(void)((V778));}
	goto T1654;
T1654:;
	{object V786 = (V737);
	VMR72(V786)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ENSURE-GENERIC-FUNCTION-USING-CLASS	*/

static object LI85(object V788,object V787,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB73 VMS73 VMV73
	{register object V789;
	register object V790;
	object V791;
	object V792;
	object V793;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V789= V788;
	V790= V787;
	narg= narg - 2;
	V794 = make_list(narg);
	V791= V794;
	{
	parse_key_rest_new(V794,narg,Vcs +3,(struct key *)&LI85key,first,ap);
	if(Vcs[3]==0){
	V792= Cnil;
	V793= Cnil;
	}else{
	V792=(Vcs[3]);
	V793= Ct;}
	if(((V789))==Cnil){
	goto T1685;}
	if(((*(LnkLI438))((V789)))==Cnil){
	goto T1685;}
	{object V795 = (V789);
	VMR73(V795)}
	goto T1685;
T1685:;
	{register object x= (V790),V796= (VV[261]->s.s_dbind);
	while(V796!=Cnil)
	if(equal(x,V796->c.c_car->c.c_car) &&V796->c.c_car != Cnil){
	goto T1691;
	}else V796=V796->c.c_cdr;
	goto T1690;}
	goto T1691;
T1691:;
	if(((V789))==Cnil){
	goto T1693;}
	{object V797 = (VFUN_NARGS=4,(*(LnkLI444))((V790),(V792),(V793),(V789)));
	VMR73(V797)}
	goto T1693;
T1693:;
	base[0]= VV[262];
	base[1]= (V790);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V798 = vs_base[0];
	VMR73(V798)}
	goto T1690;
T1690:;
	if(((V789))==Cnil){
	goto T1698;}
	base[0]= VV[263];
	base[1]= (V790);
	base[2]= VV[261];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V799 = vs_base[0];
	VMR73(V799)}
	goto T1698;
T1698:;
	base[0]= V790;
	base[1]= (VV[264]->s.s_dbind);
	base[2]= VV[265];
	base[3]= (VV[241]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	Ladjoin();
	vs_top=sup;
	(VV[264]->s.s_dbind)= vs_base[0];
	{object V801 = (VFUN_NARGS=3,(*(LnkLI444))((V790),(V792),(V793)));
	VMR73(V801)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function MAKE-EARLY-GF	*/

static object LI86(object V802,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB74 VMS74 VMV74
	{register object V803;
	object V804;
	object V805;
	object V806;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V803= V802;
	narg = narg - 1;
	if (narg <= 0) goto T1709;
	else {
	V804= first;}
	if (--narg <= 0) goto T1710;
	else {
	V805= va_arg(ap,object);}
	if (--narg <= 0) goto T1711;
	else {
	V806= va_arg(ap,object);}
	--narg; goto T1712;
	goto T1709;
T1709:;
	V804= Cnil;
	goto T1710;
T1710:;
	V805= Cnil;
	goto T1711;
T1711:;
	V806= Cnil;
	goto T1712;
T1712:;
	base[0]= (VFUN_NARGS=2,(*(LnkLI445))((VV[266]->s.s_dbind),(VV[267]->s.s_dbind)));
	base[0]=MMcons(base[0],Cnil);
	if((V806)!=Cnil){
	V807= (V806);
	goto T1718;}
	if(!(((V803))==(VV[268]))){
	goto T1720;}
	V807= 
	make_cclosure_new(LC134,Cnil,base[0],Cdata);
	goto T1718;
	goto T1720;
T1720:;
	V807= 
	make_cclosure_new(LC135,Cnil,base[0],Cdata);
	goto T1718;
T1718:;
	(void)((*(LnkLI446))((base[0]->c.c_car),V807));
	(void)((*(LnkLI345))((base[0]->c.c_car),V803));
	(void)((*(LnkLI447))(VV[18],(base[0]->c.c_car),VV[274],(V803)));
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V809= vs_base[0];
	(void)((*(LnkLI447))(VV[18],(base[0]->c.c_car),VV[275],V809));
	base[1]= (base[0]->c.c_car);
	base[2]= (V803);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk346)();
	vs_top=sup;
	{object V810;
	V810= (*(LnkLI448))();
	{object V812;
	V812= (base[0]->c.c_car);
	if(type_of((V812))==t_structure){
	goto T1736;}
	goto T1734;
	goto T1736;
T1736:;
	if(!((((V812))->str.str_def)==(VV[276]))){
	goto T1734;}}
	V811= STREF(object,(base[0]->c.c_car),4);
	goto T1732;
	goto T1734;
T1734:;{object V813;
	V813= (VV[147]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V814= vs_base[0];
	if(!((V813)==(CMPcar(V814)))){
	goto T1739;}}
	V811= CMPcar(((base[0]->c.c_car))->cc.cc_turbo[12]);
	goto T1732;
	goto T1739;
T1739:;
	base[1]= VV[148];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	V811= vs_base[0];
	goto T1732;
T1732:;
	(void)(((V811)->v.v_self[fix((VV[236]->s.s_dbind))]=((V810))));
	if(((V805))==Cnil){
	goto T1729;}
	(void)((*(LnkLI10))((V803),(V804)));
	(void)((VFUN_NARGS=3,(*(LnkLI449))((base[0]->c.c_car),VV[14],(V804))));}
	goto T1729;
T1729:;
	{object V815 = (base[0]->c.c_car);
	VMR74(V815)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SET-DFUN	*/

static object LI87(object V816,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB75 VMS75 VMV75
	{register object V817;
	register object V818;
	register object V819;
	object V820;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V817= V816;
	narg = narg - 1;
	if (narg <= 0) goto T1748;
	else {
	V818= first;}
	if (--narg <= 0) goto T1749;
	else {
	V819= va_arg(ap,object);}
	if (--narg <= 0) goto T1750;
	else {
	V820= va_arg(ap,object);}
	--narg; goto T1751;
	goto T1748;
T1748:;
	V818= Cnil;
	goto T1749;
T1749:;
	V819= Cnil;
	goto T1750;
T1750:;
	V820= Cnil;
	goto T1751;
T1751:;
	if(((V819))==Cnil){
	goto T1755;}
	V821= Ct;
	STSET(object,(V819),0, (V817));
	(void)((V817));
	goto T1755;
T1755:;
	{object V822;
	if(((V818))==Cnil){
	goto T1761;}
	if(((V819))!=Cnil){
	goto T1760;}
	if(((V820))==Cnil){
	goto T1761;}
	goto T1760;
T1760:;
	V822= listA(3,(V818),(V819),(V820));
	goto T1759;
	goto T1761;
T1761:;
	V822= (V818);
	goto T1759;
T1759:;
	if(!(((VV[16]->s.s_dbind))==(VV[17]))){
	goto T1768;}
	base[0]= (V822);
	base[1]= V817;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk450)(Lclptr450);
	vs_top=sup;
	goto T1758;
	goto T1768;
T1768:;
	if(type_of(V817)==t_structure){
	goto T1776;}
	goto T1774;
	goto T1776;
T1776:;
	if(!(((V817)->str.str_def)==(VV[278]))){
	goto T1774;}
	V824= STREF(object,(V817),4);
	goto T1772;
	goto T1774;
T1774:;{object V826;
	V826= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V817);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V827= vs_base[0];
	if(!((V826)==(CMPcar(V827)))){
	goto T1779;}}
	V824= CMPcar(((V817))->cc.cc_turbo[12]);
	goto T1772;
	goto T1779;
T1779:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V824= vs_base[0];
	goto T1772;
T1772:;
	(void)(((V824)->v.v_self[fix((VV[279]->s.s_dbind))]=((V822))));}
	goto T1758;
T1758:;
	{object V828 = (V818);
	VMR75(V828)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function GF-DFUN-CACHE	*/

static object LI88(V830)

register object V830;
{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	{object V831;
	if(!(((VV[16]->s.s_dbind))==(VV[17]))){
	goto T1787;}
	base[0]= (V830);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk451)(Lclptr451);
	vs_top=sup;
	V831= vs_base[0];
	goto T1785;
	goto T1787;
T1787:;
	if(type_of(V830)==t_structure){
	goto T1794;}
	goto T1792;
	goto T1794;
T1794:;
	if(!(((V830)->str.str_def)==(VV[280]))){
	goto T1792;}
	V832= STREF(object,(V830),4);
	goto T1790;
	goto T1792;
T1792:;{object V834;
	V834= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V830);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V835= vs_base[0];
	if(!((V834)==(CMPcar(V835)))){
	goto T1797;}}
	V832= CMPcar(((V830))->cc.cc_turbo[12]);
	goto T1790;
	goto T1797;
T1797:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V832= vs_base[0];
	goto T1790;
T1790:;
	V831= (V832)->v.v_self[fix((VV[279]->s.s_dbind))];
	goto T1785;
T1785:;
	{register object V836;
	V836= (V831);
	base[0]= (V836);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1804;}
	{object V837 = Cnil;
	VMR76(V837)}
	goto T1804;
T1804:;
	if(!(type_of((V836))==t_cons)){
	goto T1808;}
	{object V838 = CMPcadr((V831));
	VMR76(V838)}
	goto T1808;
T1808:;
	{object V839 = Cnil;
	VMR76(V839)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GF-DFUN-INFO	*/

static object LI89(V841)

register object V841;
{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	{object V842;
	if(!(((VV[16]->s.s_dbind))==(VV[17]))){
	goto T1812;}
	base[0]= (V841);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk451)(Lclptr451);
	vs_top=sup;
	V842= vs_base[0];
	goto T1810;
	goto T1812;
T1812:;
	if(type_of(V841)==t_structure){
	goto T1819;}
	goto T1817;
	goto T1819;
T1819:;
	if(!(((V841)->str.str_def)==(VV[281]))){
	goto T1817;}
	V843= STREF(object,(V841),4);
	goto T1815;
	goto T1817;
T1817:;{object V845;
	V845= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V841);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V846= vs_base[0];
	if(!((V845)==(CMPcar(V846)))){
	goto T1822;}}
	V843= CMPcar(((V841))->cc.cc_turbo[12]);
	goto T1815;
	goto T1822;
T1822:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V843= vs_base[0];
	goto T1815;
T1815:;
	V842= (V843)->v.v_self[fix((VV[279]->s.s_dbind))];
	goto T1810;
T1810:;
	{register object V847;
	V847= (V842);
	base[0]= (V847);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1829;}
	{object V848 = Cnil;
	VMR77(V848)}
	goto T1829;
T1829:;
	if(!(type_of((V847))==t_cons)){
	goto T1833;}
	{object V849 = CMPcddr((V842));
	VMR77(V849)}
	goto T1833;
T1833:;
	{object V850 = Cnil;
	VMR77(V850)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-GF-NAME	*/

static object LI90(V852)

register object V852;
{	 VMB78 VMS78 VMV78
	goto TTL;
TTL:;
	if(type_of(V852)==t_structure){
	goto T1839;}
	goto T1837;
	goto T1839;
T1839:;
	if(!(((V852)->str.str_def)==(VV[282]))){
	goto T1837;}
	V853= STREF(object,(V852),4);
	goto T1835;
	goto T1837;
T1837:;{object V855;
	V855= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V852);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V856= vs_base[0];
	if(!((V855)==(CMPcar(V856)))){
	goto T1842;}}
	V853= CMPcar(((V852))->cc.cc_turbo[12]);
	goto T1835;
	goto T1842;
T1842:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V853= vs_base[0];
	goto T1835;
T1835:;
	{object V857 = (V853)->v.v_self[fix((VV[283]->s.s_dbind))];
	VMR78(V857)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GF-LAMBDA-LIST	*/

static object LI91(V859)

register object V859;
{	 VMB79 VMS79 VMV79
	goto TTL;
TTL:;
	{object V860;
	if(!(((VV[16]->s.s_dbind))==(VV[17]))){
	goto T1850;}
	base[0]= (V859);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	V860= vs_base[0];
	goto T1848;
	goto T1850;
T1850:;
	if(type_of(V859)==t_structure){
	goto T1857;}
	goto T1855;
	goto T1857;
T1857:;
	if(!(((V859)->str.str_def)==(VV[284]))){
	goto T1855;}
	V861= STREF(object,(V859),4);
	goto T1853;
	goto T1855;
T1855:;{object V863;
	V863= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V859);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V864= vs_base[0];
	if(!((V863)==(CMPcar(V864)))){
	goto T1860;}}
	V861= CMPcar(((V859))->cc.cc_turbo[12]);
	goto T1853;
	goto T1860;
T1860:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V861= vs_base[0];
	goto T1853;
T1853:;
	V860= (V861)->v.v_self[fix((VV[236]->s.s_dbind))];
	goto T1848;
T1848:;
	if(!((VV[237])==(STREF(object,(V860),0)))){
	goto T1867;}
	{object V865;
	if(!(((VV[16]->s.s_dbind))==(VV[17]))){
	goto T1871;}
	base[0]= (V859);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk426)(Lclptr426);
	vs_top=sup;
	V865= vs_base[0];
	goto T1869;
	goto T1871;
T1871:;
	if(type_of(V859)==t_structure){
	goto T1878;}
	goto T1876;
	goto T1878;
T1878:;
	if(!(((V859)->str.str_def)==(VV[285]))){
	goto T1876;}
	V866= STREF(object,(V859),4);
	goto T1874;
	goto T1876;
T1876:;{object V868;
	V868= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V859);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V869= vs_base[0];
	if(!((V868)==(CMPcar(V869)))){
	goto T1881;}}
	V866= CMPcar(((V859))->cc.cc_turbo[12]);
	goto T1874;
	goto T1881;
T1881:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V866= vs_base[0];
	goto T1874;
T1874:;
	V865= (V866)->v.v_self[fix((VV[235]->s.s_dbind))];
	goto T1869;
T1869:;
	if(((V865))!=Cnil){
	goto T1888;}
	base[0]= VV[286];
	base[1]= (V859);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk398)();
	vs_top=sup;
	{object V870 = Cnil;
	VMR79(V870)}
	goto T1888;
T1888:;
	{object V871;
	object V872;
	object V873;
	base[3]= (V865);
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V874= vs_base[0];
	V871= CMPcar(V874);
	if(!(type_of((V871))==t_cons)){
	goto T1898;}
	V872= (*(LnkLI431))((V871));
	goto T1896;
	goto T1898;
T1898:;
	base[3]= (V871);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk48)(Lclptr48);
	vs_top=sup;
	V872= vs_base[0];
	goto T1896;
T1896:;
	{register object x= VV[62],V875= (V872);
	while(V875!=Cnil)
	if(eql(x,V875->c.c_car)){
	V873= V875;
	goto T1901;
	}else V875=V875->c.c_cdr;
	V873= Cnil;}
	goto T1901;
T1901:;
	if(((V873))==Cnil){
	goto T1903;}
	base[3]= (V872);
	base[4]= CMPcdr((V873));
	vs_top=(vs_base=base+3)+2;
	Lldiff();
	vs_top=sup;
	V876= vs_base[0];
	{object V877 = append(V876,VV[287]);
	VMR79(V877)}
	goto T1903;
T1903:;
	{object V878 = (V872);
	VMR79(V878)}}}
	goto T1867;
T1867:;
	{object V879 = STREF(object,(V860),0);
	VMR79(V879)}}
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
	{object V880=base[0]->c.c_cdr;
	if(endp(V880))invalid_macro_call();
	base[2]= (V880->c.c_car);
	V880=V880->c.c_cdr;
	if(endp(V880))invalid_macro_call();
	base[3]= (V880->c.c_car);
	V880=V880->c.c_cdr;
	if(endp(V880))invalid_macro_call();
	base[4]= (V880->c.c_car);
	V880=V880->c.c_cdr;
	if(!endp(V880))invalid_macro_call();}
	V881= list(2,VV[288],base[2]);
	V882= list(2,/* INLINE-ARGS */V881,list(3,VV[289],base[2],list(4,VV[290],base[2],Ct,base[4])));
	V883= list(2,VV[291],base[2]);
	V884= make_cons(/* INLINE-ARGS */V883,Cnil);
	V885= list(4,VV[121],/* INLINE-ARGS */V882,/* INLINE-ARGS */V884,list(2,Ct,list(3,VV[292],VV[293],base[2])));
	V886= list(3,VV[294],base[3],VV[5]);
	V887= list(3,VV[294],base[3],VV[295]);
	V888= list(2,VV[296],listA(3,VV[297],base[3],VV[298]));
	V889= make_cons(/* INLINE-ARGS */V888,Cnil);
	V890= list(3,VV[297],base[3],VV[4]);
	base[5]= list(5,VV[9],/* INLINE-ARGS */V885,/* INLINE-ARGS */V886,/* INLINE-ARGS */V887,list(3,VV[96],/* INLINE-ARGS */V889,list(3,VV[240],VV[299],list(3,VV[29],/* INLINE-ARGS */V890,listA(3,VV[300],list(2,VV[301],base[2]),VV[302])))));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function REAL-ENSURE-GF-USING-CLASS--GENERIC-FUNCTION	*/

static object LI93(object V892,object V891,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB81 VMS81 VMV81
	{object V893;
	object V894;
	register object V895;
	object V896;
	object V897;
	object V898;
	register object V899;
	object V900;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V893= V892;
	V894= V891;
	narg= narg - 2;
	V901 = make_list(narg);
	V895= V901;
	{
	parse_key_rest_new(V901,narg,Vcs +3,(struct key *)&LI93key,first,ap);
	V896=(Vcs[3]);
	if(Vcs[4]==0){
	V897= Cnil;
	V898= Cnil;
	}else{
	V897=(Vcs[4]);
	V898= Ct;}
	if(Vcs[5]==0){
	V899= VV[18];
	V900= Cnil;
	}else{
	V899=(Vcs[5]);
	V900= Ct;}
	if(!(type_of((V899))==t_symbol)){
	goto T1913;}
	V899= (VFUN_NARGS=3,(*(LnkLI290))((V899),Ct,(V896)));
	goto T1911;
	goto T1913;
T1913:;
	{object V902;
	base[0]= (V899);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	V902= vs_base[0];
	if(((V902))==Cnil){
	goto T1919;}
	goto T1911;
	goto T1919;
T1919:;
	base[0]= VV[293];
	base[1]= (V899);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}
	goto T1911;
T1911:;
	{object V903;
	object V904;
	base[0]= (V895);
	base[1]= VV[5];
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1927;}
	V903= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1928;}
	V904= vs_base[0];
	vs_top=sup;
	goto T1929;
	goto T1927;
T1927:;
	V903= Cnil;
	goto T1928;
T1928:;
	V904= Cnil;
	goto T1929;
T1929:;
	V895= (V903);}
	{object V905;
	object V906;
	base[0]= (V895);
	base[1]= VV[295];
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1936;}
	V905= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1937;}
	V906= vs_base[0];
	vs_top=sup;
	goto T1938;
	goto T1936;
T1936:;
	V905= Cnil;
	goto T1937;
T1937:;
	V906= Cnil;
	goto T1938;
T1938:;
	V895= (V905);}
	{object V907;
	base[0]= (V895);
	base[1]= VV[4];
	base[2]= VV[303];
	vs_top=(vs_base=base+0)+3;
	Lgetf();
	vs_top=sup;
	V907= vs_base[0];
	if(((V907))==(VV[303])){
	goto T1910;}
	{object V909;
	base[2]= (V899);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= CMPcar((V907));
	base[3]= CMPcdr((V907));
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk300)(Lclptr300);
	vs_top=sup;
	V909= vs_base[0];
	{object V910;
	base[1]= (V895);
	base[2]= (V909);
	base[3]= VV[4];
	vs_top=(vs_base=base+1)+3;
	siLput_f();
	vs_top=sup;
	V910= vs_base[0];
	V895= (V910);}}}
	goto T1910;
T1910:;
	if(((V900))==Cnil){
	goto T1958;}
	V911= (*(LnkLI363))((V893));
	if((/* INLINE-ARGS */V911)==((V899))){
	goto T1958;}
	base[0]= (V893);
	base[1]= (V899);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk452)(Lclptr452);
	vs_top=sup;
	goto T1958;
T1958:;
	{object V912;
	base[0]=VV[453]->s.s_gfdef;
	base[1]= (V893);
	{object V913;
	V913= (V895);
	 vs_top=base+2;
	 while(V913!=Cnil)
	 {vs_push((V913)->c.c_car);V913=(V913)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk453)(Lclptr453);
	vs_top=sup;
	V912= vs_base[0];
	if(((V898))==Cnil){
	goto T1968;}
	(void)((*(LnkLI10))((V894),(V897)));
	goto T1968;
T1968:;
	{object V914 = (V912);
	VMR81(V914)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function REAL-ENSURE-GF-USING-CLASS--NULL	*/

static object LI94(object V916,object V915,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB82 VMS82 VMV82
	{object V917;
	object V918;
	register object V919;
	object V920;
	object V921;
	object V922;
	register object V923;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V917= V916;
	V918= V915;
	narg= narg - 2;
	V924 = make_list(narg);
	V919= V924;
	{
	parse_key_rest_new(V924,narg,Vcs +3,(struct key *)&LI94key,first,ap);
	V920=(Vcs[3]);
	if(Vcs[4]==0){
	V921= Cnil;
	V922= Cnil;
	}else{
	V921=(Vcs[4]);
	V922= Ct;}
	V923=(Vcs[5]);
	if(!(type_of((V923))==t_symbol)){
	goto T1975;}
	V923= (VFUN_NARGS=3,(*(LnkLI290))((V923),Ct,(V920)));
	goto T1973;
	goto T1975;
T1975:;
	{object V925;
	base[0]= (V923);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	V925= vs_base[0];
	if(((V925))==Cnil){
	goto T1981;}
	goto T1973;
	goto T1981;
T1981:;
	base[0]= VV[293];
	base[1]= (V923);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}
	goto T1973;
T1973:;
	{object V926;
	object V927;
	base[0]= (V919);
	base[1]= VV[5];
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1989;}
	V926= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1990;}
	V927= vs_base[0];
	vs_top=sup;
	goto T1991;
	goto T1989;
T1989:;
	V926= Cnil;
	goto T1990;
T1990:;
	V927= Cnil;
	goto T1991;
T1991:;
	V919= (V926);}
	{object V928;
	object V929;
	base[0]= (V919);
	base[1]= VV[295];
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1998;}
	V928= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1999;}
	V929= vs_base[0];
	vs_top=sup;
	goto T2000;
	goto T1998;
T1998:;
	V928= Cnil;
	goto T1999;
T1999:;
	V929= Cnil;
	goto T2000;
T2000:;
	V919= (V928);}
	{object V930;
	base[0]= (V919);
	base[1]= VV[4];
	base[2]= VV[303];
	vs_top=(vs_base=base+0)+3;
	Lgetf();
	vs_top=sup;
	V930= vs_base[0];
	if(((V930))==(VV[303])){
	goto T1972;}
	{object V932;
	base[2]= (V923);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= CMPcar((V930));
	base[3]= CMPcdr((V930));
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk300)(Lclptr300);
	vs_top=sup;
	V932= vs_base[0];
	{object V933;
	base[1]= (V919);
	base[2]= (V932);
	base[3]= VV[4];
	vs_top=(vs_base=base+1)+3;
	siLput_f();
	vs_top=sup;
	V933= vs_base[0];
	V919= (V933);}}}
	goto T1972;
T1972:;
	{object V934;
	base[0]=VV[454]->s.s_gfdef;
	base[1]= (V923);
	base[2]= VV[220];
	base[3]= (V918);
	{object V937;
	V937= (V919);
	 vs_top=base+4;
	 while(V937!=Cnil)
	 {vs_push((V937)->c.c_car);V937=(V937)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk454)(Lclptr454);
	vs_top=sup;
	V936= vs_base[0];
	V934= (*(LnkLI345))(V936,V918);
	if(((V922))==Cnil){
	goto T2026;}
	(void)((*(LnkLI10))((V918),(V921)));
	goto T2026;
T2026:;
	{object V938 = (V934);
	VMR82(V938)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for GET-GENERIC-FUNCTION-INFO	*/

static void L95()
{register object *base=vs_base;
	register object *sup=base+VM83; VC83
	vs_check;
	{register object V939;
	check_arg(1);
	V939=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V940;
	object V941;
	object V942;
	{object V943;
	object V944;
	if(((*(LnkLI438))((V939)))==Cnil){
	goto T2032;}
	if(type_of(V939)==t_structure){
	goto T2038;}
	goto T2036;
	goto T2038;
T2038:;
	if(!(((V939)->str.str_def)==(VV[304]))){
	goto T2036;}
	V945= STREF(object,(V939),4);
	goto T2034;
	goto T2036;
T2036:;{object V947;
	V947= (VV[147]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V939);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V948= vs_base[0];
	if(!((V947)==(CMPcar(V948)))){
	goto T2041;}}
	V945= CMPcar(((V939))->cc.cc_turbo[12]);
	goto T2034;
	goto T2041;
T2041:;
	base[3]= VV[148];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V945= vs_base[0];
	goto T2034;
T2034:;
	V943= (V945)->v.v_self[fix((VV[236]->s.s_dbind))];
	goto T2030;
	goto T2032;
T2032:;
	base[3]= (V939);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	V943= vs_base[0];
	goto T2030;
T2030:;
	V944= STREF(object,(V943),8);
	base[3]= (*(LnkLI395))((V943));
	base[4]= (V944);
	base[5]= (V943);
	vs_top=(vs_base=base+3)+3;}
	if(vs_base>=vs_top){vs_top=sup;goto T2052;}
	V940= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2053;}
	V941= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2054;}
	V942= vs_base[0];
	vs_top=sup;
	goto T2055;
	goto T2052;
T2052:;
	V940= Cnil;
	goto T2053;
T2053:;
	V941= Cnil;
	goto T2054;
T2054:;
	V942= Cnil;
	goto T2055;
T2055:;
	base[1]= CMPmake_fixnum((long)length((V941)));
	base[2]= (V940);
	base[3]= (V941);
	base[5]= VV[455];
	base[6]= (V941);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk425)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V942);
	vs_top=(vs_base=base+1)+5;
	return;}
	}
}
/*	local entry for function EARLY-MAKE-A-METHOD	*/

static object LI96(object V954,object V953,object V952,object V951,object V950,object V949,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB84 VMS84 VMV84
	{object V955;
	object V956;
	object V957;
	register object V958;
	register object V959;
	object V960;
	object V961;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <6) too_few_arguments();
	V955= V954;
	V956= V953;
	V957= V952;
	V958= V951;
	V959= V950;
	V960= V949;
	narg = narg - 6;
	if (narg <= 0) goto T2063;
	else {
	V961= first;}
	--narg; goto T2064;
	goto T2063;
T2063:;
	V961= Cnil;
	goto T2064;
T2064:;
	(void)((VFUN_NARGS=1,(*(LnkLI456))((V959))));
	{object V962;
	object V963;
	V962= Cnil;
	V963= Cnil;
	base[0]= VV[457];
	base[1]= (V958);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk366)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2069;}
	V962= (V958);
	{object V964;
	object V965= (V958);
	if(V965==Cnil){
	V963= Cnil;
	goto T2075;}
	base[0]=V964=MMcons(Cnil,Cnil);
	goto T2076;
T2076:;
	if(!(((V965->c.c_car))==(Ct))){
	goto T2079;}
	(V964->c.c_car)= Ct;
	goto T2077;
	goto T2079;
T2079:;
	base[1]= (V965->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	(V964->c.c_car)= vs_base[0];
	goto T2077;
T2077:;
	if((V965=MMcdr(V965))==Cnil){
	V963= base[0];
	goto T2075;}
	V964=MMcdr(V964)=MMcons(Cnil,Cnil);
	goto T2076;}
	goto T2075;
T2075:;
	goto T2067;
	goto T2069;
T2069:;
	V963= (V958);
	V962= Cnil;
	goto T2067;
T2067:;
	base[0]= (V959);
	base[1]= VV[35];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V967= vs_base[0];
	base[0]= (V959);
	base[1]= VV[216];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V968= vs_base[0];
	{object V969 = list(5,VV[305],V967,V968,(V962),list(7,(V955),(V956),(V957),(V963),(V959),(V960),(V961)));
	VMR84(V969)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for REAL-MAKE-A-METHOD	*/

static void L97()
{register object *base=vs_base;
	register object *sup=base+VM85; VC85
	vs_check;
	{object V970;
	object V971;
	object V972;
	object V973;
	object V974;
	object V975;
	object V976;
	if(vs_top-vs_base<6) too_few_arguments();
	if(vs_top-vs_base>7) too_many_arguments();
	V970=(base[0]);
	V971=(base[1]);
	V972=(base[2]);
	V973=(base[3]);
	V974=(base[4]);
	V975=(base[5]);
	vs_base=vs_base+6;
	if(vs_base>=vs_top){vs_top=sup;goto T2091;}
	V976=(base[6]);
	vs_top=sup;
	goto T2092;
	goto T2091;
T2091:;
	V976= Cnil;
	goto T2092;
T2092:;
	V973= (*(LnkLI458))((V973));
	base[7]=VV[454]->s.s_gfdef;
	base[8]= (V970);
	base[9]= VV[306];
	base[10]= (V971);
	base[11]= VV[14];
	base[12]= (V972);
	base[13]= VV[307];
	base[14]= (V973);
	base[15]= VV[3];
	base[16]= (V975);
	base[17]= VV[308];
	base[18]= (V976);
	base[19]= VV[309];
	base[20]= Ct;
	{object V977;
	V977= (V974);
	 vs_top=base+21;
	 while(V977!=Cnil)
	 {vs_push((V977)->c.c_car);V977=(V977)->c.c_cdr;}
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
	{object V978;
	check_arg(1);
	V978=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= CMPcadr((V978));
	base[2]= CMPcaddr((V978));
	vs_top=(vs_base=base+1)+2;
	return;
	}
}
/*	local entry for function EARLY-METHOD-CLASS	*/

static object LI99(V980)

object V980;
{	 VMB87 VMS87 VMV87
	goto TTL;
TTL:;
	base[0]= (V980);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	V981= vs_base[0];
	{object V982 = (VFUN_NARGS=1,(*(LnkLI290))(CMPcar(V981)));
	VMR87(V982)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-METHOD-STANDARD-ACCESSOR-P	*/

static object LI100(V984)

object V984;
{	 VMB88 VMS88 VMV88
	goto TTL;
TTL:;
	{object V985;
	base[0]= (V984);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	V986= vs_base[0];
	V985= CMPcar(V986);
	if(!(((V985))==(VV[310]))){
	goto T2117;}
	{object V987 = Ct;
	VMR88(V987)}
	goto T2117;
T2117:;
	if(!(((V985))==(VV[311]))){
	goto T2119;}
	{object V988 = Ct;
	VMR88(V988)}
	goto T2119;
T2119:;
	{object V989 = (((V985))==(VV[312])?Ct:Cnil);
	VMR88(V989)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for EARLY-METHOD-STANDARD-ACCESSOR-SLOT-NAME	*/

static void L101()
{register object *base=vs_base;
	register object *sup=base+VM89; VC89
	vs_check;
	{object V990;
	check_arg(1);
	V990=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V990);
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

static object LI102(object V991,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB90 VMS90 VMV90
	{register object V992;
	object V993;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V992= V991;
	narg = narg - 1;
	if (narg <= 0) goto T2123;
	else {
	V993= first;}
	--narg; goto T2124;
	goto T2123;
T2123:;
	V993= Cnil;
	goto T2124;
T2124:;
	if(!(type_of((V992))==t_cons||((V992))==Cnil)){
	goto T2127;}
	if(!((CMPcar((V992)))==(VV[305]))){
	goto T2127;}
	if(!(((V993))==(Ct))){
	goto T2132;}{object V994;
	V994= CMPcadddr((V992));
	if(V994==Cnil)goto T2134;
	{object V995 = V994;
	VMR90(V995)}
	goto T2134;
T2134:;}
	{object V997;
	base[2]=VV[290]->s.s_gfdef;
	base[3]= (V992);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	V1000= vs_base[0];
	{object V998;
	object V999= CMPcadddr(V1000);
	if(V999==Cnil){
	V997= Cnil;
	goto T2136;}
	base[1]=V998=MMcons(Cnil,Cnil);
	goto T2137;
T2137:;
	base[3]= (V999->c.c_car);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk290)();
	vs_top=sup;
	(V998->c.c_car)= vs_base[0];
	if((V999=MMcdr(V999))==Cnil){
	V997= base[1];
	goto T2136;}
	V998=MMcdr(V998)=MMcons(Cnil,Cnil);
	goto T2137;}
	goto T2136;
T2136:;
	(CMPcdddr(V992))->c.c_car = (V997);
	(void)(CMPcdddr(V992));
	{object V1001 = (V997);
	VMR90(V1001)}}
	goto T2132;
T2132:;
	base[0]= (V992);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	V1002= vs_base[0];
	{object V1003 = CMPcadddr(V1002);
	VMR90(V1003)}
	goto T2127;
T2127:;
	base[0]= VV[313];
	base[1]= (V992);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V1004 = vs_base[0];
	VMR90(V1004)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function EARLY-METHOD-QUALIFIERS	*/

static object LI103(V1006)

object V1006;
{	 VMB91 VMS91 VMV91
	goto TTL;
TTL:;
	base[0]= (V1006);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	V1007= vs_base[0];
	{object V1008 = CMPcadr(V1007);
	VMR91(V1008)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-METHOD-LAMBDA-LIST	*/

static object LI104(V1010)

object V1010;
{	 VMB92 VMS92 VMV92
	goto TTL;
TTL:;
	base[0]= (V1010);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	V1011= vs_base[0];
	{object V1012 = CMPcaddr(V1011);
	VMR92(V1012)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-ADD-NAMED-METHOD	*/

static object LI105(object V1016,object V1015,object V1014,object V1013,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB93 VMS93 VMV93
	{object V1017;
	register object V1018;
	register object V1019;
	object V1020;
	object V1021;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <4) too_few_arguments();
	V1017= V1016;
	V1018= V1015;
	V1019= V1014;
	V1020= V1013;
	narg= narg - 4;
	V1022 = list_vector_new(narg,first,ap);
	V1021= V1022;
	{object V1023;
	object V1024;
	object V1025;
	base[3]= (V1017);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk351)();
	vs_top=sup;
	V1023= vs_base[0];
	{register object V1026;
	register object V1027;
	if(type_of(V1023)==t_structure){
	goto T2159;}
	goto T2157;
	goto T2159;
T2159:;
	if(!(((V1023)->str.str_def)==(VV[314]))){
	goto T2157;}
	V1028= STREF(object,(V1023),4);
	goto T2155;
	goto T2157;
T2157:;{object V1030;
	V1030= (VV[147]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V1023);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1031= vs_base[0];
	if(!((V1030)==(CMPcar(V1031)))){
	goto T2162;}}
	V1028= CMPcar(((V1023))->cc.cc_turbo[12]);
	goto T2155;
	goto T2162;
T2162:;
	base[5]= VV[148];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	V1028= vs_base[0];
	goto T2155;
T2155:;
	V1026= (V1028)->v.v_self[fix((VV[235]->s.s_dbind))];
	V1027= CMPcar((V1026));
	goto T2170;
T2170:;
	if(!(((V1026))==Cnil)){
	goto T2171;}
	V1024= Cnil;
	goto T2153;
	goto T2171;
T2171:;
	V1032= (VFUN_NARGS=1,(*(LnkLI434))((V1027)));
	if(!(equal(/* INLINE-ARGS */V1032,(V1019)))){
	goto T2175;}
	V1033= (*(LnkLI461))((V1027));
	if(!(equal(/* INLINE-ARGS */V1033,(V1018)))){
	goto T2175;}
	V1024= (V1027);
	goto T2153;
	goto T2175;
T2175:;
	V1026= CMPcdr((V1026));
	V1027= CMPcar((V1026));
	goto T2170;}
	goto T2153;
T2153:;
	base[3]= VV[19];
	base[4]= (V1018);
	base[5]= (V1020);
	base[6]= (V1019);
	base[7]= (V1021);
	base[8]= Cnil;
	V1025= simple_symlispcall(VV[462],base+3,6);
	if(((V1024))==Cnil){
	goto T2192;}
	base[3]= (V1023);
	base[4]= (V1024);
	(void)simple_symlispcall(VV[463],base+3,2);
	goto T2192;
T2192:;
	base[3]= (V1023);
	base[4]= (V1025);
	{object V1034 = simple_symlispcall(VV[464],base+3,2);
	VMR93(V1034)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function ADD-METHOD	*/

static object LI106(V1037,V1038)

register object V1037;register object V1038;
{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;{object V1039;
	V1039= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1037);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1040= vs_base[0];
	if((V1039)==(CMPcar(V1040))){
	goto T2199;}}
	base[0]= VV[315];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2199;
T2199:;
	if(!(type_of((V1038))==t_cons||((V1038))==Cnil)){
	goto T2207;}
	if((CMPcar((V1038)))==(VV[305])){
	goto T2206;}
	goto T2207;
T2207:;
	base[0]= VV[316];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2206;
T2206:;
	{object V1042;
	object V1043;
	object V1044;
	if(type_of(V1037)==t_structure){
	goto T2217;}
	goto T2215;
	goto T2217;
T2217:;
	if(!(((V1037)->str.str_def)==(VV[317]))){
	goto T2215;}
	V1042= STREF(object,(V1037),4);
	goto T2213;
	goto T2215;
T2215:;{object V1046;
	V1046= (VV[147]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1037);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1047= vs_base[0];
	if(!((V1046)==(CMPcar(V1047)))){
	goto T2220;}}
	V1042= CMPcar(((V1037))->cc.cc_turbo[12]);
	goto T2213;
	goto T2220;
T2220:;
	base[2]= VV[148];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V1042= vs_base[0];
	goto T2213;
T2213:;
	V1043= (VV[235]->s.s_dbind);
	V1044= make_cons(V1038,((V1042))->v.v_self[fix((V1043))]);
	(void)((((V1042))->v.v_self[fix((V1043))]=((V1044))));}
	(void)((VFUN_NARGS=3,(*(LnkLI449))((V1037),VV[318],(V1038))));
	V1049= (*(LnkLI441))((V1037));
	{register object x= /* INLINE-ARGS */V1049,V1048= (VV[261]->s.s_dbind);
	while(V1048!=Cnil)
	if(equal(x,V1048->c.c_car->c.c_car) &&V1048->c.c_car != Cnil){
	goto T2230;
	}else V1048=V1048->c.c_cdr;}
	{object V1050 = (VFUN_NARGS=1,(*(LnkLI465))((V1037)));
	VMR94(V1050)}
	goto T2230;
T2230:;
	{object V1051 = Cnil;
	VMR94(V1051)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REMOVE-METHOD	*/

static object LI107(V1054,V1055)

register object V1054;object V1055;
{	 VMB95 VMS95 VMV95
	goto TTL;
TTL:;{object V1056;
	V1056= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1054);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1057= vs_base[0];
	if((V1056)==(CMPcar(V1057))){
	goto T2232;}}
	base[0]= VV[319];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2232;
T2232:;
	if(!(type_of((V1055))==t_cons||((V1055))==Cnil)){
	goto T2240;}
	if((CMPcar((V1055)))==(VV[305])){
	goto T2239;}
	goto T2240;
T2240:;
	base[0]= VV[320];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2239;
T2239:;
	if(type_of(V1054)==t_structure){
	goto T2250;}
	goto T2248;
	goto T2250;
T2250:;
	if(!(((V1054)->str.str_def)==(VV[321]))){
	goto T2248;}
	V1058= STREF(object,(V1054),4);
	goto T2246;
	goto T2248;
T2248:;{object V1060;
	V1060= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1054);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1061= vs_base[0];
	if(!((V1060)==(CMPcar(V1061)))){
	goto T2253;}}
	V1058= CMPcar(((V1054))->cc.cc_turbo[12]);
	goto T2246;
	goto T2253;
T2253:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1058= vs_base[0];
	goto T2246;
T2246:;{object V1062;
	V1062= (VV[235]->s.s_dbind);
	base[0]= (V1055);
	if(type_of(V1054)==t_structure){
	goto T2266;}
	goto T2264;
	goto T2266;
T2266:;
	if(!(((V1054)->str.str_def)==(VV[322]))){
	goto T2264;}
	V1064= STREF(object,(V1054),4);
	goto T2262;
	goto T2264;
T2264:;{object V1066;
	V1066= (VV[147]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1054);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1067= vs_base[0];
	if(!((V1066)==(CMPcar(V1067)))){
	goto T2269;}}
	V1064= CMPcar(((V1054))->cc.cc_turbo[12]);
	goto T2262;
	goto T2269;
T2269:;
	base[2]= VV[148];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V1064= vs_base[0];
	goto T2262;
T2262:;
	base[1]= (V1064)->v.v_self[fix((VV[235]->s.s_dbind))];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk376)();
	vs_top=sup;
	V1063= vs_base[0];
	(void)(((V1058)->v.v_self[fix(V1062)]=(V1063)));}
	(void)((VFUN_NARGS=1,(*(LnkLI449))((V1054))));
	V1069= (*(LnkLI441))((V1054));
	{register object x= /* INLINE-ARGS */V1069,V1068= (VV[261]->s.s_dbind);
	while(V1068!=Cnil)
	if(equal(x,V1068->c.c_car->c.c_car) &&V1068->c.c_car != Cnil){
	goto T2277;
	}else V1068=V1068->c.c_cdr;}
	{object V1070 = (VFUN_NARGS=1,(*(LnkLI465))((V1054)));
	VMR95(V1070)}
	goto T2277;
T2277:;
	{object V1071 = Cnil;
	VMR95(V1071)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-METHOD	*/

static object LI108(object V1074,object V1073,object V1072,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB96 VMS96 VMV96
	{object V1075;
	register object V1076;
	register object V1077;
	object V1078;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V1075= V1074;
	V1076= V1073;
	V1077= V1072;
	narg = narg - 3;
	if (narg <= 0) goto T2279;
	else {
	V1078= first;}
	--narg; goto T2280;
	goto T2279;
T2279:;
	V1078= Ct;
	goto T2280;
T2280:;
	if(((*(LnkLI438))((V1075)))==Cnil){
	goto T2283;}{object V1079;
	{register object V1080;
	register object V1081;
	if(type_of(V1075)==t_structure){
	goto T2292;}
	goto T2290;
	goto T2292;
T2292:;
	if(!(((V1075)->str.str_def)==(VV[323]))){
	goto T2290;}
	V1082= STREF(object,(V1075),4);
	goto T2288;
	goto T2290;
T2290:;{object V1084;
	V1084= (VV[147]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1075);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1085= vs_base[0];
	if(!((V1084)==(CMPcar(V1085)))){
	goto T2295;}}
	V1082= CMPcar(((V1075))->cc.cc_turbo[12]);
	goto T2288;
	goto T2295;
T2295:;
	base[2]= VV[148];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V1082= vs_base[0];
	goto T2288;
T2288:;
	V1080= (V1082)->v.v_self[fix((VV[235]->s.s_dbind))];
	V1081= CMPcar((V1080));
	goto T2303;
T2303:;
	if(!(((V1080))==Cnil)){
	goto T2304;}
	V1079= Cnil;
	goto T2286;
	goto T2304;
T2304:;
	V1086= (VFUN_NARGS=2,(*(LnkLI434))((V1081),Cnil));
	if(equal(/* INLINE-ARGS */V1086,(V1077))){
	goto T2310;}
	V1087= (VFUN_NARGS=2,(*(LnkLI434))((V1081),Ct));
	if(!(equal(/* INLINE-ARGS */V1087,(V1077)))){
	goto T2308;}
	goto T2310;
T2310:;
	V1088= (*(LnkLI461))((V1081));
	if(!(equal(/* INLINE-ARGS */V1088,(V1076)))){
	goto T2308;}
	V1079= (V1081);
	goto T2286;
	goto T2308;
T2308:;
	V1080= CMPcdr((V1080));
	V1081= CMPcar((V1080));
	goto T2303;}
	goto T2286;
T2286:;
	if(V1079==Cnil)goto T2285;
	{object V1089 = V1079;
	VMR96(V1089)}
	goto T2285;
T2285:;}
	if(((V1078))==Cnil){
	goto T2321;}
	base[0]= VV[324];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V1090 = vs_base[0];
	VMR96(V1090)}
	goto T2321;
T2321:;
	{object V1091 = Cnil;
	VMR96(V1091)}
	goto T2283;
T2283:;
	{object V1092 = (VFUN_NARGS=4,(*(LnkLI466))((V1075),(V1076),(V1077),(V1078)));
	VMR96(V1092)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function FIX-EARLY-GENERIC-FUNCTIONS	*/

static object LI109(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB97 VMS97 VMV97
	{object V1093;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T2324;
	else {
	V1093= first;}
	--narg; goto T2325;
	goto T2324;
T2324:;
	V1093= (VV[325]->s.s_dbind);
	goto T2325;
T2325:;
	(VV[326]->s.s_dbind)= Ct;
	{object V1094;
	V1094= Cnil;
	{register object V1095;
	register object V1096;
	V1095= (VV[264]->s.s_dbind);
	V1096= CMPcar((V1095));
	goto T2333;
T2333:;
	if(!(((V1095))==Cnil)){
	goto T2334;}
	goto T2329;
	goto T2334;
T2334:;
	base[1]= (VV[467]->s.s_gfdef);
	{object V1098;
	V1098= (*(LnkLI356))((V1096));
	if(type_of((V1098))==t_structure){
	goto T2348;}
	goto T2345;
	goto T2348;
T2348:;
	if(!((((V1098))->str.str_def)==(VV[327]))){
	goto T2345;}}
	V1099= (*(LnkLI356))((V1096));
	V1097= STREF(object,/* INLINE-ARGS */V1099,4);
	goto T2343;
	goto T2345;
T2345:;{object V1100;
	V1100= (VV[147]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (*(LnkLI356))((V1096));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1101= vs_base[0];
	if(!((V1100)==(CMPcar(V1101)))){
	goto T2351;}}
	V1102= (*(LnkLI356))((V1096));
	V1097= CMPcar((/* INLINE-ARGS */V1102)->cc.cc_turbo[12]);
	goto T2343;
	goto T2351;
T2351:;
	base[3]= VV[148];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V1097= vs_base[0];
	goto T2343;
T2343:;
	base[2]= (V1097)->v.v_self[fix((VV[235]->s.s_dbind))];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk366)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2338;}
	V1094= make_cons(V1096,(V1094));
	goto T2338;
T2338:;
	V1095= CMPcdr((V1095));
	V1096= CMPcar((V1095));
	goto T2333;}
	goto T2329;
T2329:;
	{register object V1104;
	object V1105;
	V1104= nconc((V1094),VV[328]);
	V1105= CMPcar((V1104));
	goto T2367;
T2367:;
	if(!(((V1104))==Cnil)){
	goto T2368;}
	goto T2363;
	goto T2368;
T2368:;
	base[2]= (V1105);
	base[3]= (VV[264]->s.s_dbind);
	base[4]= VV[265];
	base[5]= (VV[241]->s.s_gfdef);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk468)();
	vs_top=sup;
	V1106= vs_base[0];
	(VV[264]->s.s_dbind)= make_cons((V1105),V1106);
	V1104= CMPcdr((V1104));
	V1105= CMPcar((V1104));
	goto T2367;}
	goto T2363;
T2363:;
	{register object V1107;
	object V1108;
	V1107= (VV[264]->s.s_dbind);
	V1108= CMPcar((V1107));
	goto T2388;
T2388:;
	if(!(((V1107))==Cnil)){
	goto T2389;}
	goto T2384;
	goto T2389;
T2389:;
	if(((V1093))==Cnil){
	goto T2393;}
	base[1]= Ct;
	base[2]= VV[329];
	base[3]= (V1108);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T2393;
T2393:;
	{register object V1109;
	object V1110;
	V1109= (*(LnkLI356))((V1108));
	if(type_of(V1109)==t_structure){
	goto T2407;}
	goto T2405;
	goto T2407;
T2407:;
	if(!(((V1109)->str.str_def)==(VV[330]))){
	goto T2405;}
	V1113= STREF(object,(V1109),4);
	goto T2403;
	goto T2405;
T2405:;{object V1115;
	V1115= (VV[147]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V1109);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1116= vs_base[0];
	if(!((V1115)==(CMPcar(V1116)))){
	goto T2410;}}
	V1113= CMPcar(((V1109))->cc.cc_turbo[12]);
	goto T2403;
	goto T2410;
T2410:;
	base[4]= VV[148];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V1113= vs_base[0];
	goto T2403;
T2403:;
	{object V1111;
	object V1112= (V1113)->v.v_self[fix((VV[235]->s.s_dbind))];
	if(V1112==Cnil){
	V1110= Cnil;
	goto T2401;}
	base[3]=V1111=MMcons(Cnil,Cnil);
	goto T2402;
T2402:;
	{object V1118;
	base[5]= (V1112->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lcopy_list();
	vs_top=sup;
	V1118= vs_base[0];
	{object V1120;
	V1120= (VFUN_NARGS=2,(*(LnkLI434))((V1112->c.c_car),Ct));
	(CMPcdddr(V1118))->c.c_car = (V1120);
	(void)(CMPcdddr(V1118));}
	{object V1121;
	V1121= (V1118);
	 vs_top=base+4;
	 while(V1121!=Cnil)
	 {vs_push((V1121)->c.c_car);V1121=(V1121)->c.c_cdr;}
	vs_base=base+4;}
	(void) (*Lnk469)();
	vs_top=sup;
	(V1111->c.c_car)= vs_base[0];}
	if((V1112=MMcdr(V1112))==Cnil){
	V1110= base[3];
	goto T2401;}
	V1111=MMcdr(V1111)=MMcons(Cnil,Cnil);
	goto T2402;}
	goto T2401;
T2401:;
	base[3]= (VV[331]->s.s_dbind);
	base[4]= V1109;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk470)(Lclptr470);
	vs_top=sup;
	base[3]= (VV[252]->s.s_dbind);
	base[4]= V1109;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk471)(Lclptr471);
	vs_top=sup;
	(void)((*(LnkLI472))((V1109),(V1110)));}
	V1107= CMPcdr((V1107));
	V1108= CMPcar((V1107));
	goto T2388;}
	goto T2384;
T2384:;
	{register object V1124;
	object V1125;
	V1124= (VV[332]->s.s_dbind);
	V1125= CMPcar((V1124));
	goto T2439;
T2439:;
	if(!(((V1124))==Cnil)){
	goto T2440;}
	goto T2435;
	goto T2440;
T2440:;
	{object V1126;
	V1126= CMPcar((V1125));
	base[1]= CMPcaddr((V1125));
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	V1127= vs_base[0];
	(void)((*(LnkLI345))(V1127,(V1126)));}
	V1124= CMPcdr((V1124));
	V1125= CMPcar((V1124));
	goto T2439;}
	goto T2435;
T2435:;
	{register object V1128;
	object V1129;
	V1128= (VV[261]->s.s_dbind);
	V1129= CMPcar((V1128));
	goto T2456;
T2456:;
	if(!(((V1128))==Cnil)){
	goto T2457;}
	{object V1130 = Cnil;
	VMR97(V1130)}
	goto T2457;
T2457:;
	{object V1131;
	object V1132;
	object V1133;
	V1131= CMPcar((V1129));
	V1132= (*(LnkLI356))((V1131));
	{object V1134;
	object V1135= CMPcdr((V1129));
	if(V1135==Cnil){
	V1133= Cnil;
	goto T2464;}
	base[4]=V1134=MMcons(Cnil,Cnil);
	goto T2465;
T2465:;
	{object V1137;
	object V1138;
	object V1139;
	object V1140;
	object V1141;
	V1137= CMPcar((V1135->c.c_car));
	V1138= CMPcadr((V1135->c.c_car));
	V1139= CMPcaddr((V1135->c.c_car));
	if((V1139)!=Cnil){
	V1140= (V1139);
	goto T2470;}
	V1140= (V1131);
	goto T2470;
T2470:;
	base[11]= (V1140);
	vs_top=(vs_base=base+11)+1;
	Lsymbol_function();
	vs_top=sup;
	base[9]= vs_base[0];
	base[9]=MMcons(base[9],Cnil);
	base[11]= 
	make_cclosure_new(LC138,Cnil,base[9],Cdata);
	base[12]= list(2,VV[165],(V1140));
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk346)();
	vs_top=sup;
	V1142= vs_base[0];
	V1141= list(2,VV[35],V1142);
	base[11]= VV[19];
	base[12]= Cnil;
	base[13]= (V1137);
	base[14]= (V1138);
	base[15]= (V1141);
	base[16]= Cnil;
	(V1134->c.c_car)= simple_symlispcall(VV[462],base+11,6);}
	if((V1135=MMcdr(V1135))==Cnil){
	V1133= base[4];
	goto T2464;}
	V1134=MMcdr(V1134)=MMcons(Cnil,Cnil);
	goto T2465;}
	goto T2464;
T2464:;
	base[4]= (VV[331]->s.s_dbind);
	base[5]= V1132;
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk470)(Lclptr470);
	vs_top=sup;
	base[4]= (VV[252]->s.s_dbind);
	base[5]= V1132;
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk471)(Lclptr471);
	vs_top=sup;
	(void)((*(LnkLI472))((V1132),(V1133)));}
	V1128= CMPcdr((V1128));
	V1129= CMPcar((V1128));
	goto T2456;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for PARSE-DEFMETHOD	*/

static void L110()
{register object *base=vs_base;
	register object *sup=base+VM98; VC98
	vs_check;
	{register object V1145;
	check_arg(1);
	V1145=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1146;
	register object V1147;
	object V1148;
	{object V1149;
	V1149= CMPcar((V1145));
	V1145= CMPcdr((V1145));
	V1146= (V1149);}
	V1147= Cnil;
	V1148= Cnil;
	goto T2500;
T2500:;
	if((CMPcar((V1145)))==Cnil){
	goto T2503;}
	if(!(type_of(CMPcar((V1145)))!=t_cons)){
	goto T2503;}
	{register object V1150;
	{register object V1151;
	V1151= CMPcar((V1145));
	V1145= CMPcdr((V1145));
	V1150= (V1151);}
	V1147= make_cons((V1150),(V1147));
	goto T2501;}
	goto T2503;
T2503:;
	V1147= nreverse((V1147));
	goto T2498;
	goto T2501;
T2501:;
	goto T2500;
	goto T2498;
T2498:;
	{object V1152;
	V1152= CMPcar((V1145));
	V1145= CMPcdr((V1145));
	V1148= (V1152);}
	base[1]= (V1146);
	base[2]= (V1147);
	base[3]= (V1148);
	base[4]= (V1145);
	vs_top=(vs_base=base+1)+4;
	return;}
	}
}
/*	local entry for function PARSE-SPECIALIZERS	*/

static object LI111(V1154)

object V1154;
{	 VMB99 VMS99 VMV99
	goto TTL;
TTL:;
	{object V1155;
	object V1156= (V1154);
	if(V1156==Cnil){
	{object V1157 = Cnil;
	VMR99(V1157)}}
	base[0]=V1155=MMcons(Cnil,Cnil);
	goto T2523;
T2523:;
	base[1]= (V1156->c.c_car);
	vs_top=(vs_base=base+1)+1;
	L112(base);
	vs_top=sup;
	(V1155->c.c_car)= vs_base[0];
	if((V1156=MMcdr(V1156))==Cnil){
	{object V1158 = base[0];
	VMR99(V1158)}}
	V1155=MMcdr(V1155)=MMcons(Cnil,Cnil);
	goto T2523;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UNPARSE-SPECIALIZERS	*/

static object LI113(V1160)

object V1160;
{	 VMB100 VMS100 VMV100
	goto TTL;
TTL:;
	if(!(type_of((V1160))==t_cons||((V1160))==Cnil)){
	goto T2527;}
	{object V1161;
	object V1162= (V1160);
	if(V1162==Cnil){
	{object V1163 = Cnil;
	VMR100(V1163)}}
	base[0]=V1161=MMcons(Cnil,Cnil);
	goto T2529;
T2529:;
	base[1]= (V1162->c.c_car);
	vs_top=(vs_base=base+1)+1;
	L114(base);
	vs_top=sup;
	(V1161->c.c_car)= vs_base[0];
	if((V1162=MMcdr(V1162))==Cnil){
	{object V1164 = base[0];
	VMR100(V1164)}}
	V1161=MMcdr(V1161)=MMcons(Cnil,Cnil);
	goto T2529;}
	goto T2527;
T2527:;
	base[0]= (V1160);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk433)(Lclptr433);
	vs_top=sup;
	V1160= vs_base[0];
	goto TTL;
	base[0]=base[0];
	return Cnil;
}
/*	function definition for PARSE-METHOD-OR-SPEC	*/

static void L115()
{register object *base=vs_base;
	register object *sup=base+VM101; VC101
	vs_check;
	{object V1165;
	object V1166;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1165=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2535;}
	V1166=(base[1]);
	vs_top=sup;
	goto T2536;
	goto T2535;
T2535:;
	V1166= Ct;
	goto T2536;
T2536:;
	{register object V1167;
	register object V1168;
	object V1169;
	object V1170;
	V1167= Cnil;
	V1168= Cnil;
	V1169= Cnil;
	V1170= Cnil;
	base[2]= (V1165);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk473)(Lclptr473);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2540;}
	V1168= (V1165);
	base[2]= (V1168);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk474)(Lclptr474);
	vs_top=sup;
	V1167= vs_base[0];
	if((V1167)==Cnil){
	V1170= Cnil;
	goto T2549;}
	base[2]= (V1167);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk440)(Lclptr440);
	vs_top=sup;
	V1170= vs_base[0];
	goto T2549;
T2549:;
	if(((V1170))==Cnil){
	goto T2553;}
	base[2]= (V1168);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk476)(Lclptr476);
	vs_top=sup;
	V1171= vs_base[0];
	base[2]= (V1168);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk433)(Lclptr433);
	vs_top=sup;
	V1172= vs_base[0];
	V1173= (*(LnkLI477))(V1172);
	V1174= (*(LnkLI401))((V1170),V1171,/* INLINE-ARGS */V1173);
	V1169= (*(LnkLI475))(/* INLINE-ARGS */V1174);
	goto T2551;
	goto T2553;
T2553:;
	base[3]= Cnil;
	base[4]= VV[336];
	base[5]= (V1168);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lmake_symbol();
	vs_top=sup;
	V1169= vs_base[0];
	goto T2551;
T2551:;
	goto T2538;
	goto T2540;
T2540:;
	{object V1175;
	object V1176;
	register object V1177;
	base[2]= (V1165);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk352)();
	if(vs_base>=vs_top){vs_top=sup;goto T2565;}
	V1175= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2566;}
	V1176= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2567;}
	V1177= vs_base[0];
	vs_top=sup;
	goto T2568;
	goto T2565;
T2565:;
	V1175= Cnil;
	goto T2566;
T2566:;
	V1176= Cnil;
	goto T2567;
T2567:;
	V1177= Cnil;
	goto T2568;
T2568:;
	if((V1166)!=Cnil){
	if(((V1166))!=Cnil){
	goto T2572;}
	goto T2573;}
	if(((*(LnkLI355))((V1175)))!=Cnil){
	goto T2572;}
	goto T2573;
T2573:;
	V1167= Cnil;
	goto T2571;
	goto T2572;
T2572:;
	V1167= (*(LnkLI356))((V1175));
	goto T2571;
T2571:;
	if(((V1167))!=Cnil){
	goto T2569;}
	goto T2538;
	goto T2569;
T2569:;
	{object V1178;
	base[2]= (V1167);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk478)(Lclptr478);
	vs_top=sup;
	V1178= vs_base[0];
	V1179= (*(LnkLI458))((V1177));
	V1181 = CMPmake_fixnum((long)length((V1177)));
	base[2]= number_minus((V1178),V1181);
	base[3]= VV[223];
	base[4]= (VV[337]->s.s_dbind);
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	V1180= vs_base[0];
	V1177= append(/* INLINE-ARGS */V1179,V1180);
	V1168= (VFUN_NARGS=4,(*(LnkLI479))((V1167),(V1176),(V1177),(V1166)));
	if(((V1168))!=Cnil){
	goto T2582;}
	goto T2538;
	goto T2582;
T2582:;
	V1182= (*(LnkLI401))((V1175),(V1176),(V1177));
	V1169= (*(LnkLI475))(/* INLINE-ARGS */V1182);}}
	goto T2538;
T2538:;
	base[2]= (V1167);
	base[3]= (V1168);
	base[4]= (V1169);
	vs_top=(vs_base=base+2)+3;
	return;}
	}
}
/*	local entry for function EXTRACT-PARAMETERS	*/

static object LI116(V1184)

object V1184;
{	 VMB102 VMS102 VMV102
	goto TTL;
TTL:;
	{object V1185;
	object V1186;
	object V1187;
	base[0]= (V1184);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2591;}
	V1185= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2592;}
	V1186= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2593;}
	V1187= vs_base[0];
	vs_top=sup;
	goto T2594;
	goto T2591;
T2591:;
	V1185= Cnil;
	goto T2592;
T2592:;
	V1186= Cnil;
	goto T2593;
T2593:;
	V1187= Cnil;
	goto T2594;
T2594:;
	{object V1188 = (V1185);
	VMR102(V1188)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXTRACT-LAMBDA-LIST	*/

static object LI117(V1190)

object V1190;
{	 VMB103 VMS103 VMV103
	goto TTL;
TTL:;
	{object V1191;
	object V1192;
	object V1193;
	base[0]= (V1190);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2597;}
	V1191= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2598;}
	V1192= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2599;}
	V1193= vs_base[0];
	vs_top=sup;
	goto T2600;
	goto T2597;
T2597:;
	V1191= Cnil;
	goto T2598;
T2598:;
	V1192= Cnil;
	goto T2599;
T2599:;
	V1193= Cnil;
	goto T2600;
T2600:;
	{object V1194 = (V1192);
	VMR103(V1194)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXTRACT-SPECIALIZER-NAMES	*/

static object LI118(V1196)

object V1196;
{	 VMB104 VMS104 VMV104
	goto TTL;
TTL:;
	{object V1197;
	object V1198;
	object V1199;
	base[0]= (V1196);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2603;}
	V1197= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2604;}
	V1198= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2605;}
	V1199= vs_base[0];
	vs_top=sup;
	goto T2606;
	goto T2603;
T2603:;
	V1197= Cnil;
	goto T2604;
T2604:;
	V1198= Cnil;
	goto T2605;
T2605:;
	V1199= Cnil;
	goto T2606;
T2606:;
	{object V1200 = (V1199);
	VMR104(V1200)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXTRACT-REQUIRED-PARAMETERS	*/

static object LI119(V1202)

object V1202;
{	 VMB105 VMS105 VMV105
	goto TTL;
TTL:;
	{object V1203;
	object V1204;
	object V1205;
	object V1206;
	base[0]= (V1202);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2609;}
	V1203= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2610;}
	V1204= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2611;}
	V1205= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2612;}
	V1206= vs_base[0];
	vs_top=sup;
	goto T2613;
	goto T2609;
T2609:;
	V1203= Cnil;
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
	{object V1207 = (V1206);
	VMR105(V1207)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for PARSE-SPECIALIZED-LAMBDA-LIST	*/

static void L120()
{register object *base=vs_base;
	register object *sup=base+VM106; VC106
	vs_check;
	{register object V1208;
	object V1209;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1208=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2614;}
	V1209=(base[1]);
	vs_top=sup;
	goto T2615;
	goto T2614;
T2614:;
	V1209= Cnil;
	goto T2615;
T2615:;
	{register object V1210;
	V1210= CMPcar((V1208));
	if(((V1208))!=Cnil){
	goto T2619;}
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+2)+4;
	return;
	goto T2619;
T2619:;
	if(!(((V1210))==(VV[56]))){
	goto T2626;}
	base[2]= Cnil;
	base[3]= (V1208);
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	return;
	goto T2626;
T2626:;
	{register object x= (V1210),V1211= VV[183];
	while(V1211!=Cnil)
	if(x==(V1211->c.c_car)){
	goto T2633;
	}else V1211=V1211->c.c_cdr;
	goto T2632;}
	goto T2633;
T2633:;
	{register object x= (V1210),V1212= VV[338];
	while(V1212!=Cnil)
	if(x==(V1212->c.c_car)){
	goto T2634;
	}else V1212=V1212->c.c_cdr;}
	base[2]= VV[339];
	base[3]= (V1210);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk398)();
	vs_top=sup;
	goto T2634;
T2634:;
	{object V1213;
	object V1214;
	base[2]= CMPcdr((V1208));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2642;}
	V1213= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2643;}
	V1214= vs_base[0];
	vs_top=sup;
	goto T2644;
	goto T2642;
T2642:;
	V1213= Cnil;
	goto T2643;
T2643:;
	V1214= Cnil;
	goto T2644;
T2644:;
	base[2]= (V1213);
	base[3]= make_cons((V1210),(V1214));
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+2)+4;
	return;}
	goto T2632;
T2632:;
	if(((V1209))==Cnil){
	goto T2650;}
	{object V1215;
	object V1216;
	base[2]= CMPcdr((V1208));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2655;}
	V1215= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2656;}
	V1216= vs_base[0];
	vs_top=sup;
	goto T2657;
	goto T2655;
T2655:;
	V1215= Cnil;
	goto T2656;
T2656:;
	V1216= Cnil;
	goto T2657;
T2657:;
	if(!(type_of((V1210))==t_cons||((V1210))==Cnil)){
	goto T2661;}
	V1217= CMPcar((V1210));
	goto T2659;
	goto T2661;
T2661:;
	V1217= (V1210);
	goto T2659;
T2659:;
	base[2]= make_cons(V1217,(V1215));
	base[3]= make_cons((V1210),(V1216));
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+2)+4;
	return;}
	goto T2650;
T2650:;
	{object V1218;
	object V1219;
	object V1220;
	object V1221;
	base[2]= CMPcdr((V1208));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2668;}
	V1218= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2669;}
	V1219= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2670;}
	V1220= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2671;}
	V1221= vs_base[0];
	vs_top=sup;
	goto T2672;
	goto T2668;
T2668:;
	V1218= Cnil;
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
	if(!(type_of((V1210))==t_cons||((V1210))==Cnil)){
	goto T2676;}
	V1222= CMPcar((V1210));
	goto T2674;
	goto T2676;
T2676:;
	V1222= (V1210);
	goto T2674;
T2674:;
	base[2]= make_cons(V1222,(V1218));
	if(!(type_of((V1210))==t_cons||((V1210))==Cnil)){
	goto T2681;}
	V1223= CMPcar((V1210));
	goto T2679;
	goto T2681;
T2681:;
	V1223= (V1210);
	goto T2679;
T2679:;
	base[3]= make_cons(V1223,(V1219));
	if(!(type_of((V1210))==t_cons||((V1210))==Cnil)){
	goto T2686;}
	V1224= CMPcadr((V1210));
	goto T2684;
	goto T2686;
T2686:;
	V1224= Ct;
	goto T2684;
T2684:;
	base[4]= make_cons(V1224,(V1220));
	if(!(type_of((V1210))==t_cons||((V1210))==Cnil)){
	goto T2691;}
	V1225= CMPcar((V1210));
	goto T2689;
	goto T2691;
T2691:;
	V1225= (V1210);
	goto T2689;
T2689:;
	base[5]= make_cons(V1225,(V1221));
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
	{object V1226=base[0]->c.c_cdr;
	if(endp(V1226))invalid_macro_call();
	base[2]= (V1226->c.c_car);
	V1226=V1226->c.c_cdr;
	base[3]= V1226;}
	{object V1227;
	object V1228= base[2];
	if(V1228==Cnil){
	base[4]= Cnil;
	goto T2693;}
	base[5]=V1227=MMcons(Cnil,Cnil);
	goto T2694;
T2694:;
	V1230= CMPcar((V1228->c.c_car));
	V1231= (*(LnkLI480))(CMPcar((V1228->c.c_car)),base[1]);
	(V1227->c.c_car)= list(3,/* INLINE-ARGS */V1230,/* INLINE-ARGS */V1231,CMPcadr((V1228->c.c_car)));
	if((V1228=MMcdr(V1228))==Cnil){
	base[4]= base[5];
	goto T2693;}
	V1227=MMcdr(V1227)=MMcons(Cnil,Cnil);
	goto T2694;}
	goto T2693;
T2693:;
	base[4]=MMcons(base[4],Cnil);
	base[5]= make_cons(VV[9],base[3]);
	base[6]= base[1];
	base[7]= 
	make_cclosure_new(LC139,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk396)();
	return;
}
/*	local entry for function EXPAND-SYMBOL-MACROLET-INTERNAL	*/

static object LI124(V1236,V1237,V1238,V1239)

object V1236;register object V1237;object V1238;object V1239;
{	 VMB108 VMS108 VMV108
	goto TTL;
TTL:;
	base[0]= (V1239);
	base[1]= (V1236);
	base[2]= Cnil;
	if(((V1238))==(VV[194])){
	goto T2700;}
	{object V1240 = (V1237);
	VMR108(V1240)}
	goto T2700;
T2700:;
	if(!(type_of((V1237))==t_symbol)){
	goto T2703;}
	{register object x= (V1237),V1241= base[1];
	while(V1241!=Cnil)
	if(eql(x,V1241->c.c_car->c.c_car) &&V1241->c.c_car != Cnil){
	base[2]= (V1241->c.c_car);
	goto T2709;
	}else V1241=V1241->c.c_cdr;
	base[2]= Cnil;}
	goto T2709;
T2709:;
	if((base[2])==Cnil){
	goto T2706;}
	V1242= CMPcadr(base[2]);
	V1243= (*(LnkLI480))((V1237),base[0]);
	if(!((/* INLINE-ARGS */V1242)==(/* INLINE-ARGS */V1243))){
	goto T2706;}
	{object V1244 = CMPcaddr(base[2]);
	VMR108(V1244)}
	goto T2706;
T2706:;
	{object V1245 = (V1237);
	VMR108(V1245)}
	goto T2703;
T2703:;
	if(type_of((V1237))==t_cons||((V1237))==Cnil){
	goto T2712;}
	{object V1246 = (V1237);
	VMR108(V1246)}
	goto T2712;
T2712:;
	{register object x= CMPcar((V1237)),V1247= VV[340];
	while(V1247!=Cnil)
	if(eql(x,V1247->c.c_car)){
	goto T2716;
	}else V1247=V1247->c.c_cdr;
	goto T2715;}
	goto T2716;
T2716:;
	base[3]= CMPcar((V1237));
	{object V1248;
	V1248= Cnil;
	base[4]= CMPcdr((V1237));
	vs_top=(vs_base=base+4)+1;
	L125(base);
	vs_top=sup;
	V1248= vs_base[0];
	{object V1249 = (*(LnkLI481))((V1237),base[3],(V1248));
	VMR108(V1249)}}
	goto T2715;
T2715:;
	if(!((CMPcar((V1237)))==(VV[341]))){
	goto T2722;}
	{object V1250;
	object V1251;
	V1250= CMPcadr((V1237));
	{object V1252;
	object V1253= (V1250);
	if(V1253==Cnil){
	V1251= Cnil;
	goto T2725;}
	base[5]=V1252=MMcons(Cnil,Cnil);
	goto T2726;
T2726:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	(V1252->c.c_car)= vs_base[0];
	if((V1253=MMcdr(V1253))==Cnil){
	V1251= base[5];
	goto T2725;}
	V1252=MMcdr(V1252)=MMcons(Cnil,Cnil);
	goto T2726;}
	goto T2725;
T2725:;
	V1255= CMPcaddr((V1237));
	{object V1257;
	object V1258= (V1250);
	object V1259= (V1251);
	if(V1258==Cnil||V1259==Cnil){
	V1256= Cnil;
	goto T2728;}
	base[5]=V1257=MMcons(Cnil,Cnil);
	goto T2729;
T2729:;
	(V1257->c.c_car)= list(3,VV[29],(V1258->c.c_car),(V1259->c.c_car));
	if((V1258=MMcdr(V1258))==Cnil||(V1259=MMcdr(V1259))==Cnil){
	V1256= base[5];
	goto T2728;}
	V1257=MMcdr(V1257)=MMcons(Cnil,Cnil);
	goto T2729;}
	goto T2728;
T2728:;
	{object V1262 = listA(4,VV[342],(V1251),/* INLINE-ARGS */V1255,reverse(V1256));
	VMR108(V1262)}}
	goto T2722;
T2722:;
	{object V1263 = (V1237);
	VMR108(V1263)}
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
	{object V1264=base[0]->c.c_cdr;
	if(endp(V1264))invalid_macro_call();
	base[2]= (V1264->c.c_car);
	V1264=V1264->c.c_cdr;
	if(endp(V1264))invalid_macro_call();
	base[3]= (V1264->c.c_car);
	V1264=V1264->c.c_cdr;
	base[4]= V1264;}
	{register object V1265;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1265= vs_base[0];
	V1266= list(2,(V1265),base[3]);
	V1267= make_cons(/* INLINE-ARGS */V1266,Cnil);
	{object V1269;
	if(!(type_of(base[3])==t_cons)){
	goto T2735;}
	if(!((CMPcar(base[3]))==(VV[139]))){
	goto T2735;}
	V1269= CMPcaddr(base[3]);
	goto T2733;
	goto T2735;
T2735:;
	V1269= base[3];
	goto T2733;
T2733:;
	if(type_of((V1269))==t_symbol){
	goto T2739;}
	V1268= Cnil;
	goto T2732;
	goto T2739;
T2739:;
	V1270= list(2,VV[46],list(3,VV[343],(V1265),(V1269)));
	V1268= make_cons(/* INLINE-ARGS */V1270,Cnil);}
	goto T2732;
T2732:;
	{object V1272;
	object V1273= base[2];
	if(V1273==Cnil){
	V1271= Cnil;
	goto T2741;}
	base[5]=V1272=MMcons(Cnil,Cnil);
	goto T2742;
T2742:;
	{register object V1274;
	V1274= (V1273->c.c_car);
	{object V1275;
	object V1276;
	if(!(type_of((V1274))==t_symbol)){
	goto T2746;}
	V1275= (V1274);
	goto T2744;
	goto T2746;
T2746:;
	V1275= CMPcar((V1274));
	goto T2744;
T2744:;
	if(!(type_of((V1274))==t_symbol)){
	goto T2750;}
	V1276= (V1274);
	goto T2748;
	goto T2750;
T2750:;
	V1276= CMPcadr((V1274));
	goto T2748;
T2748:;
	(V1272->c.c_car)= list(2,(V1275),list(3,VV[197],(V1265),list(2,VV[1],(V1276))));}}
	if((V1273=MMcdr(V1273))==Cnil){
	V1271= base[5];
	goto T2741;}
	V1272=MMcdr(V1272)=MMcons(Cnil,Cnil);
	goto T2742;}
	goto T2741;
T2741:;
	V1277= list(2,(V1265),listA(3,VV[344],V1271,base[4]));
	base[5]= listA(3,VV[96],/* INLINE-ARGS */V1267,append(V1268,/* INLINE-ARGS */V1277));
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
	{object V1278=base[0]->c.c_cdr;
	if(endp(V1278))invalid_macro_call();
	base[2]= (V1278->c.c_car);
	V1278=V1278->c.c_cdr;
	if(endp(V1278))invalid_macro_call();
	base[3]= (V1278->c.c_car);
	V1278=V1278->c.c_cdr;
	base[4]= V1278;}
	{register object V1279;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1279= vs_base[0];
	V1280= list(2,(V1279),base[3]);
	V1281= make_cons(/* INLINE-ARGS */V1280,Cnil);
	{object V1283;
	if(!(type_of(base[3])==t_cons)){
	goto T2756;}
	if(!((CMPcar(base[3]))==(VV[139]))){
	goto T2756;}
	V1283= CMPcaddr(base[3]);
	goto T2754;
	goto T2756;
T2756:;
	V1283= base[3];
	goto T2754;
T2754:;
	if(type_of((V1283))==t_symbol){
	goto T2760;}
	V1282= Cnil;
	goto T2753;
	goto T2760;
T2760:;
	V1284= list(2,VV[46],list(3,VV[343],(V1279),(V1283)));
	V1282= make_cons(/* INLINE-ARGS */V1284,Cnil);}
	goto T2753;
T2753:;
	{object V1286;
	object V1287= base[2];
	if(V1287==Cnil){
	V1285= Cnil;
	goto T2762;}
	base[5]=V1286=MMcons(Cnil,Cnil);
	goto T2763;
T2763:;
	{object V1289;
	object V1290;
	V1289= CMPcar((V1287->c.c_car));
	V1290= CMPcadr((V1287->c.c_car));
	(V1286->c.c_car)= list(2,(V1289),list(2,(V1290),(V1279)));}
	if((V1287=MMcdr(V1287))==Cnil){
	V1285= base[5];
	goto T2762;}
	V1286=MMcdr(V1286)=MMcons(Cnil,Cnil);
	goto T2763;}
	goto T2762;
T2762:;
	V1291= list(2,(V1279),listA(3,VV[344],V1285,base[4]));
	base[5]= listA(3,VV[96],/* INLINE-ARGS */V1281,append(V1282,/* INLINE-ARGS */V1291));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	local function SCAN-SETF	*/

static void L125(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM111; VC111
	vs_check;
	{register object V1292;
	check_arg(1);
	V1292=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1292))!=Cnil){
	goto T2768;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2768;
T2768:;
	{register object x= CMPcar((V1292)),V1294= base0[1];
	while(V1294!=Cnil)
	if(eql(x,V1294->c.c_car->c.c_car) &&V1294->c.c_car != Cnil){
	base0[2]= (V1294->c.c_car);
	goto T2775;
	}else V1294=V1294->c.c_cdr;
	base0[2]= Cnil;}
	goto T2775;
T2775:;
	if((base0[2])==Cnil){
	goto T2772;}
	V1295= CMPcadr(base0[2]);
	V1296= (*(LnkLI480))(CMPcar((V1292)),base0[0]);
	if(!((/* INLINE-ARGS */V1295)==(/* INLINE-ARGS */V1296))){
	goto T2772;}
	base0[3]= VV[29];
	V1293= CMPcaddr(base0[2]);
	goto T2770;
	goto T2772;
T2772:;
	V1293= CMPcar((V1292));
	goto T2770;
T2770:;
	V1297= CMPcadr((V1292));
	base[1]= CMPcddr((V1292));
	vs_top=(vs_base=base+1)+1;
	L125(base0);
	vs_top=sup;
	V1298= vs_base[0];
	base[1]= (VFUN_NARGS=4,(*(LnkLI482))((V1292),V1293,/* INLINE-ARGS */V1297,V1298));
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
	{object V1299;
	object V1300;
	object V1301;
	check_arg(3);
	V1299=(base[0]);
	V1300=(base[1]);
	V1301=(base[2]);
	vs_top=sup;
	base[3]= (*(LnkLI483))((base0[0]->c.c_car),(V1299),(V1300),(V1301));
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
	{object V1302;
	check_arg(1);
	V1302=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V1302);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk484)(Lclptr484);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2782;}
	{register object V1303;
	base[1]= (V1302);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk485)(Lclptr485);
	vs_top=sup;
	V1303= vs_base[0];
	if(!(type_of((V1303))==t_cons)){
	goto T2788;}
	if(!((CMPcar((V1303)))==(VV[51]))){
	goto T2788;}
	{object V1304;
	object V1305;
	V1304= CMPcadr((V1303));
	base[3]= (V1304);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	V1305= vs_base[0];
	V1306= (VFUN_NARGS=2,(*(LnkLI290))((V1305),Cnil));
	if(!(((V1304))==(/* INLINE-ARGS */V1306))){
	goto T2796;}
	base[3]= (V1305);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2796;
T2796:;
	base[3]= (V1303);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2788;
T2788:;
	base[1]= (V1303);
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2782;
T2782:;
	base[1]= VV[335];
	base[2]= (V1302);
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
	{register object V1307;
	check_arg(1);
	V1307=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1308;
	base[1]= (V1307);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk486)();
	vs_top=sup;
	V1308= vs_base[0];
	base[1]= (V1308);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk484)(Lclptr484);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2803;}
	base[1]= (V1308);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2803;
T2803:;
	if(!(type_of((V1307))==t_symbol)){
	goto T2807;}
	base[1]= VV[333];
	base[2]= (V1307);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	goto T2807;
T2807:;
	base[1]= VV[334];
	base[2]= (V1307);
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
	{object V1309;
	register object V1310;
	check_arg(2);
	V1309=(base[0]);
	V1310=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	{object V1311;
	V1311= (V1309);
	 vs_top=base+3;
	 while(V1311!=Cnil)
	 {vs_push((V1311)->c.c_car);V1311=(V1311)->c.c_cdr;}
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
	{object V1312;
	check_arg(1);
	V1312=(base[0]);
	vs_top=sup;
	base[1]= (((type_of((V1312))==t_symbol?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V1313;
	check_arg(1);
	V1313=(base[0]);
	vs_top=sup;
	base[1]= (((((V1313))==(Ct)?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V1314;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1314=(base[0]);
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
	{object V1315;
	register object V1316;
	check_arg(2);
	V1315=(base[0]);
	V1316=(base[1]);
	vs_top=sup;
	base[2]= (V1316);
	base[3]= VV[269];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	base[2]= (V1316);
	base[3]= VV[270];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	base[2]= (V1316);
	base[3]= VV[271];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI487))((V1315),(V1316)));
	base[2]= (V1316);
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
	{object V1317;
	check_arg(1);
	V1317=(base[0]);
	vs_top=sup;
	{register object x= (V1317),V1318= (base0[0]->c.c_car);
	while(V1318!=Cnil)
	if(x==(V1318->c.c_car)){
	base[1]= V1318;
	vs_top=(vs_base=base+1)+1;
	return;
	}else V1318=V1318->c.c_cdr;
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
	{object V1319;
	object V1320;
	check_arg(2);
	V1319=(base[0]);
	V1320=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(number_compare((V1319),(V1320))>0)){
	goto T2830;}
	base[2]= VV[250];
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2830;
T2830:;
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
	{object V1321;
	object V1322;
	if(vs_top-vs_base<1) too_few_arguments();
	V1321=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1322=(base[1]);
	vs_top=sup;
	base[2]= VV[249];
	base[3]= base0[2];
	base[4]= base0[0];
	base[6]= Cnil;
	base[7]= (V1321);
	{object V1323;
	V1323= (V1322);
	 vs_top=base+8;
	 while(V1323!=Cnil)
	 {vs_push((V1323)->c.c_car);V1323=(V1323)->c.c_cdr;}
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
	{object V1324;
	check_arg(1);
	V1324=(base[0]);
	vs_top=sup;
	base[1]= (((((V1324))==(Ct)?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V1325;
	check_arg(1);
	V1325=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V1325))==t_cons||((V1325))==Cnil)){
	goto T2840;}
	{object V1326= CMPcar((V1325));
	if(!(type_of(V1326)==t_cons||(V1326)==Cnil)){
	goto T2843;}}
	base[1]= CMPcaar((V1325));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2843;
T2843:;
	base[1]= CMPcar((V1325));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk488)();
	return;
	goto T2840;
T2840:;
	base[1]= (V1325);
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
	{object V1327;
	object V1328;
	check_arg(2);
	V1327=(base[0]);
	V1328=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((base0[0])==Cnil){
	goto T2847;}
	(void)((*(LnkLI489))((V1328),base0[0],V1327));
	goto T2847;
T2847:;
	if((base0[4])==Cnil){
	goto T2851;}
	base[2]= (*(LnkLI489))((V1328),base0[4],V1327);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2851;
T2851:;
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
	{object V1333;
	check_arg(1);
	V1333=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1334;
	register object V1335;
	V1334= CMPcdar(base0[0]);
	V1335= CMPcar((V1334));
	goto T2856;
T2856:;
	if(!(((V1334))==Cnil)){
	goto T2857;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2857;
T2857:;
	if(!((CMPcar((V1335)))==(VV[182]))){
	goto T2861;}
	{register object x= (V1333),V1336= CMPcdr((V1335));
	while(V1336!=Cnil)
	if(x==(V1336->c.c_car)){
	goto T2865;
	}else V1336=V1336->c.c_cdr;
	goto T2861;}
	goto T2865;
T2865:;
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2861;
T2861:;
	V1334= CMPcdr((V1334));
	V1335= CMPcar((V1334));
	goto T2856;}
	}
}
/*	local function WALK-FUNCTION	*/

static void LC44(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM127; VC127
	vs_check;
	{register object V1337;
	object V1338;
	object V1339;
	check_arg(3);
	V1337=(base[0]);
	V1338=(base[1]);
	V1339=(base[2]);
	vs_top=sup;
	if(((V1338))==(VV[194])){
	goto T2872;}
	base[3]= (V1337);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2872;
T2872:;
	if(type_of((V1337))==t_cons||((V1337))==Cnil){
	goto T2875;}
	base[3]= (V1337);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2875;
T2875:;
	if(!((CMPcar((V1337)))==(VV[195]))){
	goto T2878;}
	(base0[2]->c.c_car)= Ct;
	base[3]= (V1337);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2878;
T2878:;
	if(!((CMPcar((V1337)))==(VV[196]))){
	goto T2883;}
	(base0[0]->c.c_car)= Ct;
	base[3]= (V1337);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2883;
T2883:;
	{object V1340;
	if((CMPcar((V1337)))==(VV[33])){
	goto T2888;}
	V1340= Cnil;
	goto T2887;
	goto T2888;
T2888:;
	if(!((CMPcadr((V1337)))==(VV[195]))){
	goto T2891;}
	(base0[2]->c.c_car)= Ct;
	(base0[1]->c.c_car)= Ct;
	V1340= (V1337);
	goto T2887;
	goto T2891;
T2891:;
	if(!((CMPcadr((V1337)))==(VV[196]))){
	goto T2898;}
	(base0[0]->c.c_car)= Ct;
	(base0[1]->c.c_car)= Ct;
	V1340= (V1337);
	goto T2887;
	goto T2898;
T2898:;
	V1340= Cnil;
	goto T2887;
T2887:;
	if(((V1340))==Cnil){
	goto T2905;}
	base[3]= (V1340);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2905;
T2905:;
	if((CMPcar((V1337)))==(VV[197])){
	goto T2909;}
	if((CMPcar((V1337)))==(VV[198])){
	goto T2909;}
	if(!((CMPcar((V1337)))==(VV[199]))){
	goto T2908;}
	goto T2909;
T2909:;
	base[3]= CMPcaddr((V1337));
	vs_top=(vs_base=base+3)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2908;}
	{object V1341;
	V1341= (*(LnkLI490))((V1337),(base0[5]->c.c_car),(V1339));
	{object V1342= CMPcar((V1337));
	if((V1342!= VV[197]))goto T2918;
	base[3]= (*(LnkLI491))((base0[4]->c.c_car),(V1341),(V1337));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2918;
T2918:;
	if((V1342!= VV[198]))goto T2919;
	base[3]= (*(LnkLI492))((base0[4]->c.c_car),(V1341),(V1337));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2919;
T2919:;
	if((V1342!= VV[199]))goto T2920;
	base[3]= (*(LnkLI493))((base0[4]->c.c_car),(V1341),(V1337));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2920;
T2920:;
	FEerror("The ECASE key value ~s is illegal.",1,V1342);
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}}
	goto T2908;
T2908:;
	if(!((CMPcar((V1337)))==(VV[138]))){
	goto T2922;}
	if(!(type_of(CMPcadr((V1337)))==t_cons)){
	goto T2922;}
	if(!((CMPcar(CMPcadr((V1337))))==(VV[33]))){
	goto T2922;}
	base[3]= CMPcadr(CMPcadr((V1337)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk494)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2922;}
	base[3]= (*(LnkLI495))((V1337),(base0[5]->c.c_car),(V1339),(base0[4]->c.c_car),(base0[3]->c.c_car));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2922;
T2922:;
	if(type_of(CMPcar((V1337)))==t_symbol){
	goto T2933;}
	if(!(type_of(CMPcar((V1337)))==t_cons)){
	goto T2932;}
	if(!((CMPcaar((V1337)))==(VV[29]))){
	goto T2932;}
	goto T2933;
T2933:;
	base[3]= CMPcar((V1337));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk494)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2932;}
	base[3]= (*(LnkLI495))((V1337),(base0[5]->c.c_car),(V1339),(base0[4]->c.c_car),(base0[3]->c.c_car));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2932;
T2932:;
	if(!((CMPcar((V1337)))==(VV[200]))){
	goto T2942;}
	if(((VV[21]->s.s_dbind))==Cnil){
	goto T2942;}
	{object V1343= CMPcadddr((V1337));
	if((V1343!= VV[254]))goto T2947;
	{object V1344;
	V1344= CMPcaddr((V1337));
	(VV[22]->s.s_dbind)= make_cons((V1344),(VV[22]->s.s_dbind));
	goto T2946;}
	goto T2947;
T2947:;
	if((V1343!= VV[256]))goto T2950;
	{object V1345;
	V1345= CMPcaddr((V1337));
	(VV[23]->s.s_dbind)= make_cons((V1345),(VV[23]->s.s_dbind));
	goto T2946;}
	goto T2950;
T2950:;
	if((V1343!= VV[258]))goto T2953;
	{object V1346;
	V1346= CMPcaddr((V1337));
	(VV[24]->s.s_dbind)= make_cons((V1346),(VV[24]->s.s_dbind));
	goto T2946;}
	goto T2953;
T2953:;}
	goto T2946;
T2946:;
	base[3]= make_cons(CMPcadr((V1337)),CMPcddddr((V1337)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2942;
T2942:;
	base[3]= (V1337);
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
	{register object V1347;
	check_arg(1);
	V1347=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object x= (V1347),V1348= VV[183];
	while(V1348!=Cnil)
	if(x==(V1348->c.c_car)){
	goto T2958;
	}else V1348=V1348->c.c_cdr;
	goto T2957;}
	goto T2958;
T2958:;
	{object V1349= (V1347);
	if((V1349!= VV[407]))goto T2960;
	base0[7]= VV[184];
	goto T2959;
	goto T2960;
T2960:;
	if((V1349!= VV[62]))goto T2962;
	base0[7]= VV[185];
	goto T2959;
	goto T2962;
T2962:;
	if((V1349!= VV[63]))goto T2964;
	goto T2959;
	goto T2964;
T2964:;
	if((V1349!= VV[170]))goto T2965;
	base0[7]= VV[186];
	goto T2959;
	goto T2965;
T2965:;
	if((V1349!= VV[56]))goto T2967;
	base0[7]= VV[187];
	goto T2959;
	goto T2967;
T2967:;
	base[1]= VV[188];
	base[2]= (V1347);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;}
	goto T2959;
T2959:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2957;
T2957:;
	{object V1350= base0[7];
	if((V1350!= VV[181]))goto T2971;
	V1351= list(2,(V1347),list(2,VV[189],base0[5]));
	base[1]= make_cons(/* INLINE-ARGS */V1351,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2971;
T2971:;
	if((V1350!= VV[184]))goto T2972;
	if(type_of((V1347))==t_cons){
	goto T2974;}
	V1352= list(2,(V1347),list(3,VV[116],base0[5],list(2,VV[189],base0[5])));
	base[1]= make_cons(/* INLINE-ARGS */V1352,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2974;
T2974:;
	if((CMPcddr((V1347)))!=Cnil){
	goto T2977;}
	V1353= CMPcar((V1347));
	V1354= list(2,/* INLINE-ARGS */V1353,list(4,VV[130],base0[5],list(2,VV[189],base0[5]),CMPcadr((V1347))));
	base[1]= make_cons(/* INLINE-ARGS */V1354,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2977;
T2977:;
	V1355= list(2,CMPcaddr((V1347)),base0[5]);
	V1356= CMPcar((V1347));
	base[1]= list(2,/* INLINE-ARGS */V1355,list(2,/* INLINE-ARGS */V1356,list(4,VV[130],base0[5],list(2,VV[189],base0[5]),CMPcadr((V1347)))));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2972;
T2972:;
	if((V1350!= VV[186]))goto T2979;
	V1357= list(2,(V1347),base0[5]);
	base[1]= make_cons(/* INLINE-ARGS */V1357,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2979;
T2979:;
	if((V1350!= VV[185]))goto T2980;
	if(type_of((V1347))==t_cons){
	goto T2982;}
	base[1]= (V1347);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk488)();
	vs_top=sup;
	V1358= vs_base[0];
	V1359= list(2,(V1347),list(3,VV[190],V1358,base0[5]));
	base[1]= make_cons(/* INLINE-ARGS */V1359,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2982;
T2982:;
	if((CMPcddr((V1347)))!=Cnil){
	goto T2987;}
	{object V1360;
	object V1361;
	if(!(type_of(CMPcar((V1347)))==t_cons)){
	goto T2991;}
	base[1]= CMPcaar((V1347));
	base[2]= CMPcadar((V1347));
	vs_top=(vs_base=base+1)+2;
	goto T2989;
	goto T2991;
T2991:;
	base[2]= CMPcar((V1347));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk488)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= CMPcar((V1347));
	vs_top=(vs_base=base+1)+2;
	goto T2989;
T2989:;
	if(vs_base>=vs_top){vs_top=sup;goto T2998;}
	V1360= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2999;}
	V1361= vs_base[0];
	vs_top=sup;
	goto T3000;
	goto T2998;
T2998:;
	V1360= Cnil;
	goto T2999;
T2999:;
	V1361= Cnil;
	goto T3000;
T3000:;
	V1362= list(2,base0[6],list(3,VV[191],(V1360),base0[5]));
	V1363= list(2,VV[192],base0[6]);
	base[1]= list(2,/* INLINE-ARGS */V1362,list(2,(V1361),list(4,VV[130],/* INLINE-ARGS */V1363,list(2,VV[193],base0[6]),CMPcadr((V1347)))));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2987;
T2987:;
	{object V1364;
	object V1365;
	if(!(type_of(CMPcar((V1347)))==t_cons)){
	goto T3003;}
	base[1]= CMPcaar((V1347));
	base[2]= CMPcadar((V1347));
	vs_top=(vs_base=base+1)+2;
	goto T3001;
	goto T3003;
T3003:;
	base[2]= CMPcar((V1347));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk488)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= CMPcar((V1347));
	vs_top=(vs_base=base+1)+2;
	goto T3001;
T3001:;
	if(vs_base>=vs_top){vs_top=sup;goto T3010;}
	V1364= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T3011;}
	V1365= vs_base[0];
	vs_top=sup;
	goto T3012;
	goto T3010;
T3010:;
	V1364= Cnil;
	goto T3011;
T3011:;
	V1365= Cnil;
	goto T3012;
T3012:;
	V1366= list(2,base0[6],list(3,VV[191],(V1364),base0[5]));
	V1367= list(2,CMPcaddr((V1347)),base0[6]);
	V1368= list(2,VV[192],base0[6]);
	base[1]= list(3,/* INLINE-ARGS */V1366,/* INLINE-ARGS */V1367,list(2,(V1365),list(4,VV[130],/* INLINE-ARGS */V1368,list(2,VV[193],base0[6]),CMPcadr((V1347)))));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2980;
T2980:;
	if((V1350!= VV[187]))goto T3013;
	base[1]= make_cons((V1347),Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3013;
T3013:;
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
	{object V1369;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1369=(base[0]);
	vs_top=sup;
	base[1]= STREF(object,(base0[0]->c.c_car),0);
	base[2]= (V1369);
	{object V1370;
	V1370= STREF(object,(base0[0]->c.c_car),4);
	 vs_top=base+3;
	 while(V1370!=Cnil)
	 {vs_push((V1370)->c.c_car);V1370=(V1370)->c.c_cdr;}
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
	{object V1371;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1371=(base[0]);
	vs_top=sup;
	base[1]= STREF(object,(base0[2]->c.c_car),0);
	base[2]= STREF(object,(base0[2]->c.c_car),4);
	base[3]= STREF(object,(base0[2]->c.c_car),8);
	{object V1372;
	if(((base0[0]->c.c_car))==Cnil){
	goto T3024;}
	{object V1373;
	object V1374;
	V1373= nthcdr(fix((base0[1]->c.c_car)),(V1371));
	base[6]= (V1371);
	base[7]= (V1373);
	vs_top=(vs_base=base+6)+2;
	Lldiff();
	vs_top=sup;
	V1374= vs_base[0];
	V1372= nconc((V1374),(V1373));
	goto T3022;}
	goto T3024;
T3024:;
	V1372= (V1371);
	goto T3022;
T3022:;
	 vs_top=base+4;
	 while(V1372!=Cnil)
	 {vs_push((V1372)->c.c_car);V1372=(V1372)->c.c_cdr;}
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
	{register object V1375;
	check_arg(1);
	V1375=(base[0]);
	vs_top=sup;
	if(!(type_of((V1375))==t_cons)){
	goto T3031;}
	if((CMPcar((V1375)))==(VV[30])){
	goto T3033;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3033;
T3033:;
	base[1]= CMPcadr((V1375));
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T3035;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3035;
T3035:;
	{register object V1376;
	base[1]= CMPcadr((V1375));
	vs_top=(vs_base=base+1)+1;
	Leval();
	vs_top=sup;
	V1376= vs_base[0];{object V1377;
	V1377= (*(LnkLI365))((V1376));
	if(V1377==Cnil)goto T3040;
	base[1]= V1377;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3040;
T3040:;}
	if(!(type_of((V1376))==t_fixnum||type_of((V1376))==t_bignum)){
	goto T3042;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3042;
T3042:;
	if(type_of((V1376))==t_character){
	goto T3044;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3044;
T3044:;
	base[1]= (V1376);
	vs_top=(vs_base=base+1)+1;
	Lstandard_char_p();
	return;}
	goto T3031;
T3031:;
	base[1]= (*(LnkLI365))((V1375));
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
	{object V1378;
	check_arg(1);
	V1378=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[8];
	base[2]= (V1378);
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
	{object V1379;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1379=(base[0]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	base[1]= vs_base[0];
	{object V1380;
	V1380= (V1379);
	 vs_top=base+2;
	 while(V1380!=Cnil)
	 {vs_push((V1380)->c.c_car);V1380=(V1380)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
static object  LnkTLI495(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[495],(void **)&LnkLI495,5,first,ap);va_end(ap);return V1;} /* OPTIMIZE-GENERIC-FUNCTION-CALL */
static void LnkT494(){ call_or_link(VV[494],(void **)&Lnk494);} /* GENERIC-FUNCTION-NAME-P */
static object  LnkTLI493(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[493],(void **)&LnkLI493,3,first,ap);va_end(ap);return V1;} /* OPTIMIZE-SLOT-BOUNDP */
static object  LnkTLI492(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[492],(void **)&LnkLI492,3,first,ap);va_end(ap);return V1;} /* OPTIMIZE-SET-SLOT-VALUE */
static object  LnkTLI491(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[491],(void **)&LnkLI491,3,first,ap);va_end(ap);return V1;} /* OPTIMIZE-SLOT-VALUE */
static object  LnkTLI490(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[490],(void **)&LnkLI490,3,first,ap);va_end(ap);return V1;} /* CAN-OPTIMIZE-ACCESS */
static object  LnkTLI489(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[489],(void **)&LnkLI489,3,first,ap);va_end(ap);return V1;} /* SETF PCL METHOD-FUNCTION-GET */
static void LnkT488(){ call_or_link(VV[488],(void **)&Lnk488);} /* MAKE-KEYWORD */
static object  LnkTLI487(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[487],(void **)&LnkLI487,2,first,ap);va_end(ap);return V1;} /* PRINTING-RANDOM-THING-INTERNAL */
static void LnkT486(){ call_or_link(VV[486],(void **)&Lnk486);} /* SPECIALIZER-FROM-TYPE */
static void LnkT485(ptr) object *ptr;{ call_or_link_closure(VV[485],(void **)&Lnk485,(void **)&Lclptr485);} /* SPECIALIZER-TYPE */
static void LnkT484(ptr) object *ptr;{ call_or_link_closure(VV[484],(void **)&Lnk484,(void **)&Lclptr484);} /* SPECIALIZERP */
static object  LnkTLI483(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[483],(void **)&LnkLI483,4,first,ap);va_end(ap);return V1;} /* EXPAND-SYMBOL-MACROLET-INTERNAL */
static object  LnkTLI482(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[482],(void **)&LnkLI482,first,ap);va_end(ap);return V1;} /* RELIST* */
static object  LnkTLI481(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[481],(void **)&LnkLI481,3,first,ap);va_end(ap);return V1;} /* RECONS */
static object  LnkTLI480(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[480],(void **)&LnkLI480,2,first,ap);va_end(ap);return V1;} /* VARIABLE-LEXICAL-P */
static object  LnkTLI479(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[479],(void **)&LnkLI479,first,ap);va_end(ap);return V1;} /* GET-METHOD */
static void LnkT478(ptr) object *ptr;{ call_or_link_closure(VV[478],(void **)&Lnk478,(void **)&Lclptr478);} /* COMPUTE-DISCRIMINATING-FUNCTION-ARGLIST-INFO */
static object  LnkTLI477(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[477],(void **)&LnkLI477,1,first,ap);va_end(ap);return V1;} /* UNPARSE-SPECIALIZERS */
static void LnkT476(ptr) object *ptr;{ call_or_link_closure(VV[476],(void **)&Lnk476,(void **)&Lclptr476);} /* METHOD-QUALIFIERS */
static object  LnkTLI475(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[475],(void **)&LnkLI475,1,first,ap);va_end(ap);return V1;} /* INTERN-FUNCTION-NAME */
static void LnkT474(ptr) object *ptr;{ call_or_link_closure(VV[474],(void **)&Lnk474,(void **)&Lclptr474);} /* METHOD-GENERIC-FUNCTION */
static void LnkT473(ptr) object *ptr;{ call_or_link_closure(VV[473],(void **)&Lnk473,(void **)&Lclptr473);} /* METHOD-P */
static object  LnkTLI472(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[472],(void **)&LnkLI472,2,first,ap);va_end(ap);return V1;} /* SET-METHODS */
static void LnkT471(ptr) object *ptr;{ call_or_link_closure(VV[471],(void **)&Lnk471,(void **)&Lclptr471);} /* SETF PCL GENERIC-FUNCTION-METHOD-COMBINATION */
static void LnkT470(ptr) object *ptr;{ call_or_link_closure(VV[470],(void **)&Lnk470,(void **)&Lclptr470);} /* SETF PCL GENERIC-FUNCTION-METHOD-CLASS */
static void LnkT469(){ call_or_link(VV[469],(void **)&Lnk469);} /* REAL-MAKE-A-METHOD */
static void LnkT468(){ call_or_link(VV[468],(void **)&Lnk468);} /* DELETE */
static object  LnkTLI466(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[466],(void **)&LnkLI466,first,ap);va_end(ap);return V1;} /* REAL-GET-METHOD */
static object  LnkTLI465(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[465],(void **)&LnkLI465,first,ap);va_end(ap);return V1;} /* UPDATE-DFUN */
static object  LnkTLI461(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[461],(void **)&LnkLI461,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-QUALIFIERS */
static void LnkT290(){ call_or_link(VV[290],(void **)&Lnk290);} /* FIND-CLASS */
static void LnkT460(){ call_or_link(VV[460],(void **)&Lnk460);} /* SEVENTH */
static void LnkT459(){ call_or_link(VV[459],(void **)&Lnk459);} /* FIFTH */
static object  LnkTLI458(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[458],(void **)&LnkLI458,1,first,ap);va_end(ap);return V1;} /* PARSE-SPECIALIZERS */
static object  LnkTLI456(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[456],(void **)&LnkLI456,first,ap);va_end(ap);return V1;} /* INITIALIZE-METHOD-FUNCTION */
static void LnkT454(ptr) object *ptr;{ call_or_link_closure(VV[454],(void **)&Lnk454,(void **)&Lclptr454);} /* MAKE-INSTANCE */
static void LnkT453(ptr) object *ptr;{ call_or_link_closure(VV[453],(void **)&Lnk453,(void **)&Lclptr453);} /* REINITIALIZE-INSTANCE */
static void LnkT452(ptr) object *ptr;{ call_or_link_closure(VV[452],(void **)&Lnk452,(void **)&Lclptr452);} /* CHANGE-CLASS */
static void LnkT300(ptr) object *ptr;{ call_or_link_closure(VV[300],(void **)&Lnk300,(void **)&Lclptr300);} /* FIND-METHOD-COMBINATION */
static void LnkT451(ptr) object *ptr;{ call_or_link_closure(VV[451],(void **)&Lnk451,(void **)&Lclptr451);} /* GF-DFUN-STATE */
static void LnkT450(ptr) object *ptr;{ call_or_link_closure(VV[450],(void **)&Lnk450,(void **)&Lclptr450);} /* SETF PCL GF-DFUN-STATE */
static object  LnkTLI449(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[449],(void **)&LnkLI449,first,ap);va_end(ap);return V1;} /* SET-ARG-INFO */
static object  LnkTLI10(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[10],(void **)&LnkLI10,2,first,ap);va_end(ap);return V1;} /* PROCLAIM-DEFGENERIC */
static object  LnkTLI448(){return call_proc0(VV[448],(void **)&LnkLI448);} /* MAKE-ARG-INFO */
static object  LnkTLI447(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[447],(void **)&LnkLI447,4,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-SET-SLOT */
static object  LnkTLI446(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[446],(void **)&LnkLI446,2,first,ap);va_end(ap);return V1;} /* SET-FUNCALLABLE-INSTANCE-FUNCTION */
static object  LnkTLI445(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[445],(void **)&LnkLI445,first,ap);va_end(ap);return V1;} /* ALLOCATE-FUNCALLABLE-INSTANCE */
static object  LnkTLI444(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[444],(void **)&LnkLI444,first,ap);va_end(ap);return V1;} /* MAKE-EARLY-GF */
static void LnkT291(ptr) object *ptr;{ call_or_link_closure(VV[291],(void **)&Lnk291,(void **)&Lclptr291);} /* CLASSP */
static void LnkT443(ptr) object *ptr;{ call_or_link_closure(VV[443],(void **)&Lnk443,(void **)&Lclptr443);} /* COMPUTE-APPLICABLE-METHODS */
static void LnkT442(){ call_or_link(VV[442],(void **)&Lnk442);} /* FIND */
static object  LnkTLI441(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[441],(void **)&LnkLI441,1,first,ap);va_end(ap);return V1;} /* EARLY-GF-NAME */
static void LnkT440(ptr) object *ptr;{ call_or_link_closure(VV[440],(void **)&Lnk440,(void **)&Lclptr440);} /* GENERIC-FUNCTION-NAME */
static void LnkT439(){ call_or_link(VV[439],(void **)&Lnk439);} /* COMPUTE-APPLICABLE-METHODS-EMF */
static object  LnkTLI438(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[438],(void **)&LnkLI438,1,first,ap);va_end(ap);return V1;} /* EARLY-GF-P */
static void LnkT437(){ call_or_link(VV[437],(void **)&Lnk437);} /* RAISE-METATYPE */
static void LnkT436(ptr) object *ptr;{ call_or_link_closure(VV[436],(void **)&Lnk436,(void **)&Lclptr436);} /* GENERIC-FUNCTION-METHOD-COMBINATION */
static object  LnkTLI435(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[435],(void **)&LnkLI435,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-CLASS */
static object  LnkTLI434(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[434],(void **)&LnkLI434,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-SPECIALIZERS */
static void LnkT433(ptr) object *ptr;{ call_or_link_closure(VV[433],(void **)&Lnk433,(void **)&Lclptr433);} /* METHOD-SPECIALIZERS */
static object  LnkTLI432(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[432],(void **)&LnkLI432,1,first,ap);va_end(ap);return V1;} /* ARG-INFO-VALID-P */
static void LnkT48(ptr) object *ptr;{ call_or_link_closure(VV[48],(void **)&Lnk48,(void **)&Lclptr48);} /* METHOD-LAMBDA-LIST */
static object  LnkTLI431(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[431],(void **)&LnkLI431,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-LAMBDA-LIST */
static object  LnkTLI430(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[430],(void **)&LnkLI430,6,first,ap);va_end(ap);return V1;} /* SET-ARG-INFO1 */
static void LnkT429(){ call_or_link(VV[429],(void **)&Lnk429);} /* CHECK-METHOD-ARG-INFO */
static object  LnkTLI428(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[428],(void **)&LnkLI428,3,first,ap);va_end(ap);return V1;} /* COMPUTE-PRECEDENCE */
static object  LnkTLI427(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[427],(void **)&LnkLI427,1,first,ap);va_end(ap);return V1;} /* GF-LAMBDA-LIST */
static void LnkT426(ptr) object *ptr;{ call_or_link_closure(VV[426],(void **)&Lnk426,(void **)&Lclptr426);} /* GENERIC-FUNCTION-METHODS */
static void LnkT425(){ call_or_link(VV[425],(void **)&Lnk425);} /* COUNT-IF */
static object  LnkTLI411(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[411],(void **)&LnkLI411,1,first,ap);va_end(ap);return V1;} /* GENERIC-CLOBBERS-FUNCTION */
static object  LnkTLI410(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[410],(void **)&LnkLI410,1,first,ap);va_end(ap);return V1;} /* GET-SETF-FUNCTION-NAME */
static object  LnkTLI409(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[409],(void **)&LnkLI409,1,first,ap);va_end(ap);return V1;} /* KEYWORD-SPEC-NAME */
static void LnkT408(){ call_or_link(VV[408],(void **)&Lnk408);} /* ANALYZE-LAMBDA-LIST */
static object  LnkTLI406(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[406],(void **)&LnkLI406,1,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-FROM-FAST-FUNCTION */
static object  LnkTLI405(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[405],(void **)&LnkLI405,first,ap);va_end(ap);return V1;} /* INTERN-PV-TABLE */
static object  LnkTLI403(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[403],(void **)&LnkLI403,7,first,ap);va_end(ap);return V1;} /* LOAD-DEFMETHOD-INTERNAL */
static object  LnkTLI402(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[402],(void **)&LnkLI402,first,ap);va_end(ap);return V1;} /* RECORD-DEFINITION */
static object  LnkTLI401(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[401],(void **)&LnkLI401,3,first,ap);va_end(ap);return V1;} /* MAKE-METHOD-SPEC */
static object  LnkTLI211(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[211],(void **)&LnkLI211,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-GET */
static object  LnkTLI400(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[400],(void **)&LnkLI400,2,first,ap);va_end(ap);return V1;} /* SETF PCL METHOD-FUNCTION-PLIST */
static object  LnkTLI399(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[399],(void **)&LnkLI399,1,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-PLIST */
static void LnkT398(){ call_or_link(VV[398],(void **)&Lnk398);} /* WARN */
static void LnkT397(ptr) object *ptr;{ call_or_link_closure(VV[397],(void **)&Lnk397,(void **)&Lclptr397);} /* STANDARD-GENERIC-FUNCTION-P */
static void LnkT396(){ call_or_link(VV[396],(void **)&Lnk396);} /* WALK-FORM */
static object  LnkTLI395(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[395],(void **)&LnkLI395,1,first,ap);va_end(ap);return V1;} /* ARG-INFO-APPLYP */
static object  LnkTLI394(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[394],(void **)&LnkLI394,257,first,ap);va_end(ap);return V1;} /* ARG-INFO-NUMBER-REQUIRED */
static void LnkT393(ptr) object *ptr;{ call_or_link_closure(VV[393],(void **)&Lnk393,(void **)&Lclptr393);} /* GF-ARG-INFO */
static void LnkT392(){ call_or_link(VV[392],(void **)&Lnk392);} /* TYPECASE-ERROR-STRING */
static void LnkT133(){ call_or_link(VV[133],(void **)&Lnk133);} /* SLOT-UNBOUND-INTERNAL */
static object  LnkTLI391(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[391],(void **)&LnkLI391,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT390(){ call_or_link(VV[390],(void **)&Lnk390);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT389(){ call_or_link(VV[389],(void **)&Lnk389);} /* STRUCTURE-SUBTYPE-P */
static void LnkT388(){ call_or_link(VV[388],(void **)&Lnk388);} /* MAKE-ARRAY */
static void LnkT380(){ call_or_link(VV[380],(void **)&Lnk380);} /* SLOT-NAME-LISTS-FROM-SLOTS */
static void LnkT379(){ call_or_link(VV[379],(void **)&Lnk379);} /* SOME */
static void LnkT377(){ call_or_link(VV[377],(void **)&Lnk377);} /* WALK-METHOD-LAMBDA */
static void LnkT122(){ call_or_link(VV[122],(void **)&Lnk122);} /* TYPEP */
static void LnkT376(){ call_or_link(VV[376],(void **)&Lnk376);} /* REMOVE */
static object  LnkTLI375(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[375],(void **)&LnkLI375,5,first,ap);va_end(ap);return V1;} /* MAKE-PARAMETER-REFERENCES */
static object  LnkTLI374(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[374],(void **)&LnkLI374,first,ap);va_end(ap);return V1;} /* GET-DECLARATION */
static void LnkT373(){ call_or_link(VV[373],(void **)&Lnk373);} /* MAKE-METHOD-LAMBDA-INTERNAL */
static object  LnkTLI372(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[372],(void **)&LnkLI372,3,first,ap);va_end(ap);return V1;} /* MAKE-METHOD-INITARGS-FORM-INTERNAL */
static void LnkT371(){ call_or_link(VV[371],(void **)&Lnk371);} /* EXTRACT-DECLARATIONS */
static void LnkT370(){ call_or_link(VV[370],(void **)&Lnk370);} /* PARSE-SPECIALIZED-LAMBDA-LIST */
static void LnkT369(){ call_or_link(VV[369],(void **)&Lnk369);} /* MAKE-METHOD-FUNCTION-INTERNAL */
static object  LnkTLI368(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[368],(void **)&LnkLI368,first,ap);va_end(ap);return V1;} /* MAKE-DEFMETHOD-FORM-INTERNAL */
static void LnkT366(){ call_or_link(VV[366],(void **)&Lnk366);} /* EVERY */
static object  LnkTLI365(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[365],(void **)&LnkLI365,1,first,ap);va_end(ap);return V1;} /* INTERNED-SYMBOL-P */
static void LnkT364(ptr) object *ptr;{ call_or_link_closure(VV[364],(void **)&Lnk364,(void **)&Lclptr364);} /* CLASS-NAME */
static object  LnkTLI363(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[363],(void **)&LnkLI363,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static object  LnkTLI362(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[362],(void **)&LnkLI362,first,ap);va_end(ap);return V1;} /* MAKE-DEFMETHOD-FORM */
static void LnkT361(ptr) object *ptr;{ call_or_link_closure(VV[361],(void **)&Lnk361,(void **)&Lclptr361);} /* MAKE-METHOD-INITARGS-FORM */
static void LnkT360(ptr) object *ptr;{ call_or_link_closure(VV[360],(void **)&Lnk360,(void **)&Lclptr360);} /* MAKE-METHOD-LAMBDA */
static void LnkT359(){ call_or_link(VV[359],(void **)&Lnk359);} /* ADD-METHOD-DECLARATIONS */
static void LnkT358(ptr) object *ptr;{ call_or_link_closure(VV[358],(void **)&Lnk358,(void **)&Lclptr358);} /* GENERIC-FUNCTION-METHOD-CLASS */
static void LnkT301(ptr) object *ptr;{ call_or_link_closure(VV[301],(void **)&Lnk301,(void **)&Lclptr301);} /* CLASS-PROTOTYPE */
static object  LnkTLI290(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[290],(void **)&LnkLI290,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static void LnkT357(ptr) object *ptr;{ call_or_link_closure(VV[357],(void **)&Lnk357,(void **)&Lclptr357);} /* GENERIC-FUNCTION-P */
static object  LnkTLI356(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[356],(void **)&LnkLI356,1,first,ap);va_end(ap);return V1;} /* GDEFINITION */
static object  LnkTLI355(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[355],(void **)&LnkLI355,1,first,ap);va_end(ap);return V1;} /* GBOUNDP */
static object  LnkTLI354(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[354],(void **)&LnkLI354,7,first,ap);va_end(ap);return V1;} /* EXPAND-DEFMETHOD */
static void LnkT353(){ call_or_link(VV[353],(void **)&Lnk353);} /* PROTOTYPES-FOR-MAKE-METHOD-LAMBDA */
static void LnkT352(){ call_or_link(VV[352],(void **)&Lnk352);} /* PARSE-DEFMETHOD */
static void LnkT351(){ call_or_link(VV[351],(void **)&Lnk351);} /* ENSURE-GENERIC-FUNCTION */
static void LnkT350(){ call_or_link(VV[350],(void **)&Lnk350);} /* LOAD-TRUENAME */
static object  LnkTLI349(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[349],(void **)&LnkLI349,3,first,ap);va_end(ap);return V1;} /* MAKE-TOP-LEVEL-FORM */
static object  LnkTLI348(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[348],(void **)&LnkLI348,1,first,ap);va_end(ap);return V1;} /* DO-STANDARD-DEFSETF-1 */
static object  LnkTLI347(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[347],(void **)&LnkLI347,3,first,ap);va_end(ap);return V1;} /* EXPAND-DEFGENERIC */
static void LnkT346(){ call_or_link(VV[346],(void **)&Lnk346);} /* SET-FUNCTION-NAME */
static object  LnkTLI345(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[345],(void **)&LnkLI345,2,first,ap);va_end(ap);return V1;} /* SETF PCL GDEFINITION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

