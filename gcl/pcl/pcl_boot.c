
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
	V7 = V3;
	{object V8 = (*(LnkLI345))(V6,V7);
	VMR1(V8)}
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
	{object V9=base[0]->c.c_cdr;
	if(endp(V9))invalid_macro_call();
	base[2]= (V9->c.c_car);
	V9=V9->c.c_cdr;
	if(endp(V9))invalid_macro_call();
	base[3]= (V9->c.c_car);
	V9=V9->c.c_cdr;
	base[4]= V9;}
	base[5]= (*(LnkLI347))(base[2],base[3],base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function EXPAND-DEFGENERIC	*/

static object LI4(V13,V14,V15)

object V13;object V14;object V15;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	if(!(type_of((V13))==t_cons||((V13))==Cnil)){
	goto T4;}
	(void)((*(LnkLI348))(CMPcadr((V13))));
	goto T4;
T4:;
	{register object V16;
	V16= Cnil;
	{register object V17;
	register object V18;
	V17= (V15);
	V18= CMPcar((V17));
	goto T12;
T12:;
	if(!(((V17))==Cnil)){
	goto T13;}
	goto T8;
	goto T13;
T13:;
	{object V19= CMPcar((V18));
	if((V19!= VV[0]))goto T18;
	base[1]= (V16);
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
	{register object V21;
	V21= list(2,VV[1],CMPcdr((V18)));
	{object V22;
	base[2]= (V16);
	base[3]= (V21);
	base[4]= VV[0];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V22= vs_base[0];
	V16= (V22);
	goto T17;}}
	goto T18;
T18:;
	if((V19!= VV[46]))goto T32;
	{register object V24;
	V25= CMPcdr((V18));
	base[2]= (V16);
	base[3]= VV[2];
	vs_top=(vs_base=base+2)+2;
	Lgetf();
	vs_top=sup;
	V26= vs_base[0];
	V24= append(/* INLINE-ARGS */V25,V26);
	{object V27;
	base[2]= (V16);
	base[3]= (V24);
	base[4]= VV[2];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V27= vs_base[0];
	V16= (V27);
	goto T17;}}
	goto T32;
T32:;
	if((V19!= VV[3]))goto T43;
	base[1]= (V16);
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
	{register object V29;
	V29= list(2,VV[1],CMPcadr((V18)));
	{object V30;
	base[2]= (V16);
	base[3]= (V29);
	base[4]= VV[3];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V30= vs_base[0];
	V16= (V30);
	goto T17;}}
	goto T43;
T43:;
	if((V19!= VV[4]))goto T57;
	base[1]= (V16);
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
	{register object V32;
	V32= list(2,VV[1],CMPcdr((V18)));
	{object V33;
	base[2]= (V16);
	base[3]= (V32);
	base[4]= VV[4];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V33= vs_base[0];
	V16= (V33);
	goto T17;}}
	goto T57;
T57:;
	if((V19!= VV[5]))goto T71;
	base[1]= (V16);
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
	{register object V35;
	V35= list(2,VV[1],CMPcadr((V18)));
	{object V36;
	base[2]= (V16);
	base[3]= (V35);
	base[4]= VV[5];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V36= vs_base[0];
	V16= (V36);
	goto T17;}}
	goto T71;
T71:;
	if((V19!= VV[6]))goto T85;
	base[1]= (V16);
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
	{register object V38;
	V38= list(2,VV[1],CMPcadr((V18)));
	{object V39;
	base[2]= (V16);
	base[3]= (V38);
	base[4]= VV[6];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V39= vs_base[0];
	V16= (V39);
	goto T17;}}
	goto T85;
T85:;
	if((V19!= VV[210]))goto T99;
	{object V40;
	V40= listA(3,VV[7],(V13),CMPcdr((V18)));
	(VV[8]->s.s_dbind)= make_cons((V40),(VV[8]->s.s_dbind));
	goto T17;}
	goto T99;
T99:;
	FEerror("The ECASE key value ~s is illegal.",1,V19);
	goto T17;}
	goto T17;
T17:;
	V17= CMPcdr((V17));
	V18= CMPcar((V17));
	goto T12;}
	goto T8;
T8:;
	{object V41;
	base[0]= (V16);
	base[1]= VV[2];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V41= vs_base[0];
	if(((V41))==Cnil){
	goto T7;}
	{object V43;
	V43= list(2,VV[1],(V41));
	{object V44;
	base[1]= (V16);
	base[2]= (V43);
	base[3]= VV[2];
	vs_top=(vs_base=base+1)+3;
	siLput_f();
	vs_top=sup;
	V44= vs_base[0];
	V16= (V44);}}}
	goto T7;
T7:;
	V45= list(2,VV[1],(V13));
	V46= list(3,VV[11],/* INLINE-ARGS */V45,list(2,VV[1],(V14)));
	V47= list(2,VV[12],(V13));{object V48;
	V48= (VV[13]->s.s_dbind);
	V49= list(2,VV[1],(V13));
	V50= listA(4,VV[14],/* INLINE-ARGS */V49,list(2,VV[1],(V14)),(V16));
	{object V51 = list(3,VV[10],/* INLINE-ARGS */V46,(*(LnkLI349))(/* INLINE-ARGS */V47,V48,/* INLINE-ARGS */V50));
	VMR3(V51)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOAD-DEFGENERIC	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{register object V52;
	object V53;
	object V54;
	if(vs_top-vs_base<2) too_few_arguments();
	V52=(base[0]);
	V53=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V54=(base[2]);
	vs_top=sup;
	if(!(type_of((V52))==t_cons||((V52))==Cnil)){
	goto T119;}
	(void)((*(LnkLI348))(CMPcadr((V52))));
	goto T119;
T119:;
	base[3]= (V52);
	base[4]= VV[15];
	base[5]= (V53);
	base[6]= VV[16];
	V56= list(2,VV[12],(V52));
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V57= vs_base[0];
	base[7]= list(2,/* INLINE-ARGS */V56,V57);
	{object V55;
	V55= (V54);
	 vs_top=base+8;
	 while(V55!=Cnil)
	 {vs_push((V55)->c.c_car);V55=(V55)->c.c_cdr;}
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
	{object V58=base[0]->c.c_cdr;
	base[2]= V58;}
	{object V59;
	object V60;
	object V61;
	object V62;
	base[3]= base[2];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk352)();
	if(vs_base>=vs_top){vs_top=sup;goto T131;}
	V59= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T132;}
	V60= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T133;}
	V61= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T134;}
	V62= vs_base[0];
	vs_top=sup;
	goto T135;
	goto T131;
T131:;
	V59= Cnil;
	goto T132;
T132:;
	V60= Cnil;
	goto T133;
T133:;
	V61= Cnil;
	goto T134;
T134:;
	V62= Cnil;
	goto T135;
T135:;
	{object V63;
	object V64;
	base[3]= (V59);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk353)();
	if(vs_base>=vs_top){vs_top=sup;goto T138;}
	V63= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T139;}
	V64= vs_base[0];
	vs_top=sup;
	goto T140;
	goto T138;
T138:;
	V63= Cnil;
	goto T139;
T139:;
	V64= Cnil;
	goto T140;
T140:;
	base[3]= (*(LnkLI354))((V59),(V63),(V64),(V60),(V61),(V62),base[1]);
	vs_top=(vs_base=base+3)+1;
	return;}}
}
/*	function definition for PROTOTYPES-FOR-MAKE-METHOD-LAMBDA	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V65;
	check_arg(1);
	V65=(base[0]);
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
	{register object V66;
	if(((*(LnkLI355))((V65)))!=Cnil){
	goto T147;}
	V66= Cnil;
	goto T146;
	goto T147;
T147:;
	V66= (*(LnkLI356))((V65));
	goto T146;
T146:;
	if(((V66))==Cnil){
	goto T149;}
	base[1]= (V66);
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
	base[1]= (V66);{object V67;
	base[4]= (V66);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk358)(Lclptr358);
	vs_top=sup;
	V67= vs_base[0];
	if(V67==Cnil)goto T162;
	base[3]= V67;
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
	{object V68;
	check_arg(1);
	V68=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V69;
	if(((*(LnkLI355))((V68)))!=Cnil){
	goto T166;}
	V69= Cnil;
	goto T165;
	goto T166;
T166:;
	V69= (*(LnkLI356))((V68));
	goto T165;
T165:;
	if(!(((((VV[17]->s.s_dbind))==(VV[18])?Ct:Cnil))==Cnil)){
	goto T169;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T169;
T169:;
	if(((V69))==Cnil){
	goto T171;}
	base[1]= (V69);
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
T172:;{object V70;
	base[2]= (V69);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk358)(Lclptr358);
	vs_top=sup;
	V70= vs_base[0];
	if(V70==Cnil)goto T179;
	base[1]= V70;
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

static object LI10(V78,V79,V80,V81,V82,V83,V84)

register object V78;object V79;register object V80;object V81;object V82;object V83;object V84;
{	 VMB8 VMS8 VMV8
	bds_check;
	goto TTL;
TTL:;
	if(!(type_of((V78))==t_cons||((V78))==Cnil)){
	goto T182;}
	(void)((*(LnkLI348))(CMPcadr((V78))));
	goto T182;
T182:;
	bds_bind(VV[21],Cnil);
	bds_bind(VV[22],Ct);
	bds_bind(VV[23],Cnil);
	bds_bind(VV[24],Cnil);
	bds_bind(VV[25],Cnil);
	{object V85;
	object V86;
	object V87;
	base[5]= (V78);
	base[6]= (V81);
	base[7]= (V82);
	base[8]= (V83);
	base[9]= (V84);
	vs_top=(vs_base=base+5)+5;
	(void) (*Lnk359)();
	if(vs_base>=vs_top){vs_top=sup;goto T191;}
	V85= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T192;}
	V86= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T193;}
	V87= vs_base[0];
	vs_top=sup;
	goto T194;
	goto T191;
T191:;
	V85= Cnil;
	goto T192;
T192:;
	V86= Cnil;
	goto T193;
T193:;
	V87= Cnil;
	goto T194;
T194:;
	{object V88;
	object V89;
	base[5]= (V79);
	base[6]= (V80);
	base[7]= (V85);
	base[8]= (V84);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk360)(Lclptr360);
	if(vs_base>=vs_top){vs_top=sup;goto T200;}
	V88= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T201;}
	V89= vs_base[0];
	vs_top=sup;
	goto T202;
	goto T200;
T200:;
	V88= Cnil;
	goto T201;
T201:;
	V89= Cnil;
	goto T202;
T202:;
	{object V90;
	base[5]= (V79);
	base[6]= (V80);
	base[7]= (V88);
	base[8]= (V89);
	base[9]= (V84);
	vs_top=(vs_base=base+5)+5;
	(void) (*Lnk361)(Lclptr361);
	vs_top=sup;
	V90= vs_base[0];
	V91= list(2,VV[1],(V78));
	V92= list(3,VV[11],/* INLINE-ARGS */V91,list(2,VV[1],(V82)));
	if(((VV[21]->s.s_dbind))==Cnil){
	goto T212;}
	V94= list(2,VV[26],list(2,VV[1],(VV[21]->s.s_dbind)));
	base[5]= make_cons(/* INLINE-ARGS */V94,Cnil);
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
	V95= list(2,VV[1],(VV[23]->s.s_dbind));
	V96= list(2,VV[1],(VV[24]->s.s_dbind));
	V97= list(4,VV[27],/* INLINE-ARGS */V95,/* INLINE-ARGS */V96,list(2,VV[1],(VV[25]->s.s_dbind)));
	base[6]= make_cons(/* INLINE-ARGS */V97,Cnil);
	goto T214;
	goto T216;
T216:;
	base[6]= Cnil;
	goto T214;
T214:;
	V98 = (V78);
	V99 = (V81);
	V100 = (V87);
	V101 = (V86);
	if(((V80))==Cnil){
	goto T225;}
	base[8]= (*(LnkLI363))((V80));
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	V102= vs_base[0];
	goto T223;
	goto T225;
T225:;
	V102= VV[20];
	goto T223;
T223:;
	V103 = (V90);
	base[9]= (V89);
	base[10]= VV[28];
	vs_top=(vs_base=base+9)+2;
	Lgetf();
	vs_top=sup;
	base[8]= vs_base[0];
	base[9]= VV[29];
	vs_top=(vs_base=base+8)+2;
	Lgetf();
	vs_top=sup;
	V104= vs_base[0];
	V105= (VFUN_NARGS=7,(*(LnkLI362))(V98,V99,V100,V101,V102,V103,V104));
	base[7]= make_cons(/* INLINE-ARGS */V105,Cnil);
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V93= vs_base[0];
	{object V106 = listA(3,VV[10],/* INLINE-ARGS */V92,V93);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR8(V106)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INTERNED-SYMBOL-P	*/

static object LI11(V108)

object V108;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	if(type_of((V108))==t_symbol){
	goto T233;}
	{object V109 = Cnil;
	VMR9(V109)}
	goto T233;
T233:;
	base[0]= (V108);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	{object V110 = vs_base[0];
	VMR9(V110)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-DEFMETHOD-FORM	*/

static object LI12(object V116,object V115,object V114,object V113,object V112,object V111,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	bds_check;
	{register object V117;
	register object V118;
	register object V119;
	object V120;
	object V121;
	register object V122;
	object V123;
	va_start(ap,first);
	if(narg <6) too_few_arguments();
	V117= V116;
	V118= V115;
	V119= V114;
	V120= V113;
	V121= V112;
	V122= V111;
	narg = narg - 6;
	if (narg <= 0) goto T236;
	else {
	V123= first;}
	--narg; goto T237;
	goto T236;
T236:;
	V123= Cnil;
	goto T237;
T237:;
	{object V124;
	register object V125;
	V124= Cnil;
	V125= Cnil;
	if(!(type_of((V117))==t_cons)){
	goto T245;}
	if((CMPcar((V117)))==(VV[30])){
	goto T247;}
	V126= Cnil;
	goto T243;
	goto T247;
T247:;
	V126= CMPcadr((V117));
	goto T243;
	goto T245;
T245:;
	V126= (V117);
	goto T243;
T243:;
	if(((*(LnkLI365))(V126))==Cnil){
	goto T240;}
	base[0]= (VV[365]->s.s_gfdef);
	base[1]= (V118);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk366)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T240;}
	base[0]= VV[367];
	base[1]= (V119);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk366)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T240;}
	if(!(type_of((V122))==t_cons)){
	goto T240;}
	if(!((CMPcar((V122)))==(VV[32]))){
	goto T240;}
	{register object x= CMPcadr((V122)),V127= VV[33];
	while(V127!=Cnil)
	if(x==(V127->c.c_car)){
	goto T262;
	}else V127=V127->c.c_cdr;
	goto T240;}
	goto T262;
T262:;
	V124= CMPcaddr((V122));
	V128 = (V124);
	if(!(type_of(V128)==t_cons)){
	goto T240;}
	if(!((CMPcar((V124)))==(VV[34]))){
	goto T240;}
	V125= CMPcadr((V124));
	V129 = (V125);
	if(!(type_of(V129)==t_cons)){
	goto T240;}
	if(!((CMPcar((V125)))==(VV[35]))){
	goto T240;}
	{object V130;
	object V131;
	object V132;
	{object V133;
	object V134= (V119);
	if(V134==Cnil){
	V130= Cnil;
	goto T272;}
	base[3]=V133=MMcons(Cnil,Cnil);
	goto T273;
T273:;
	{register object V135;
	V135= (V134->c.c_car);
	if(!(type_of((V135))==t_cons)){
	goto T276;}
	V136= CMPcar((V135));
	base[4]= CMPcadr((V135));
	vs_top=(vs_base=base+4)+1;
	Leval();
	vs_top=sup;
	V137= vs_base[0];
	(V133->c.c_car)= list(2,/* INLINE-ARGS */V136,V137);
	goto T274;
	goto T276;
T276:;
	(V133->c.c_car)= (V135);}
	goto T274;
T274:;
	if((V134=MMcdr(V134))==Cnil){
	V130= base[3];
	goto T272;}
	V133=MMcdr(V133)=MMcons(Cnil,Cnil);
	goto T273;}
	goto T272;
T272:;
	if(!((CMPcadr((V122)))==(VV[36]))){
	goto T283;}
	V138= VV[37];
	goto T281;
	goto T283;
T283:;
	V138= VV[38];
	goto T281;
T281:;
	V139 = (V117);
	V140= make_cons((V130),Cnil);
	V131= listA(3,V138,V139,append((V118),/* INLINE-ARGS */V140));
	bds_bind(VV[39],Cnil);
	base[5]= Cnil;
	base[6]= VV[40];
	base[7]= (V131);
	vs_top=(vs_base=base+5)+3;
	Lformat();
	vs_top=sup;
	bds_unwind1;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Lintern();
	vs_top=sup;
	V132= vs_base[0];{object V141;
	V141= (VV[42]->s.s_dbind);
	V142= listA(4,VV[43],(V132),CMPcadr((V125)),CMPcddr((V125)));
	V143= list(2,VV[1],(V130));
	V144= CMPcadr((V122));
	V145= listA(4,VV[32],/* INLINE-ARGS */V144,list(2,VV[34],(V132)),CMPcdddr((V122)));
	{object V146 = list(4,VV[41],V141,/* INLINE-ARGS */V142,(VFUN_NARGS=7,(*(LnkLI368))((V117),(V118),/* INLINE-ARGS */V143,(V120),(V121),/* INLINE-ARGS */V145,(V123))));
	VMR10(V146)}}}
	goto T240;
T240:;
	V147= make_cons((V119),Cnil);
	V148= listA(3,VV[7],(V117),append((V118),/* INLINE-ARGS */V147));{object V149;
	V149= (VV[42]->s.s_dbind);
	{object V151;
	object V152= (V119);
	if(V152==Cnil){
	V150= Cnil;
	goto T290;}
	base[0]=V151=MMcons(Cnil,Cnil);
	goto T291;
T291:;
	{register object V153;
	V153= (V152->c.c_car);
	if(!(type_of((V153))==t_cons)){
	goto T294;}
	(V151->c.c_car)= list(3,VV[44],list(2,VV[1],CMPcar((V153))),CMPcadr((V153)));
	goto T292;
	goto T294;
T294:;
	(V151->c.c_car)= list(2,VV[1],(V153));}
	goto T292;
T292:;
	if((V152=MMcdr(V152))==Cnil){
	V150= base[0];
	goto T290;}
	V151=MMcdr(V151)=MMcons(Cnil,Cnil);
	goto T291;}
	goto T290;
T290:;
	V154= make_cons(VV[44],V150);
	V155= (VFUN_NARGS=7,(*(LnkLI368))((V117),(V118),/* INLINE-ARGS */V154,(V120),(V121),(V122),(V123)));
	{object V156 = (*(LnkLI349))(/* INLINE-ARGS */V148,V149,/* INLINE-ARGS */V155);
	VMR10(V156)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAKE-DEFMETHOD-FORM-INTERNAL	*/

static object LI13(object V162,object V161,object V160,object V159,object V158,object V157,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V163;
	object V164;
	object V165;
	object V166;
	object V167;
	object V168;
	object V169;
	va_start(ap,first);
	if(narg <6) too_few_arguments();
	V163= V162;
	V164= V161;
	V165= V160;
	V166= V159;
	V167= V158;
	V168= V157;
	narg = narg - 6;
	if (narg <= 0) goto T296;
	else {
	V169= first;}
	--narg; goto T297;
	goto T296;
T296:;
	V169= Cnil;
	goto T297;
T297:;
	V170= list(2,VV[1],(V167));
	V171= list(2,VV[1],(V163));
	V172= list(2,VV[1],(V164));
	V173= list(2,VV[1],(V166));
	{object V174 = list(8,VV[45],/* INLINE-ARGS */V170,/* INLINE-ARGS */V171,/* INLINE-ARGS */V172,(V165),/* INLINE-ARGS */V173,(V168),list(2,VV[1],(V169)));
	VMR11(V174)}
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
	{object V175=base[0]->c.c_cdr;
	if(endp(V175))invalid_macro_call();
	base[2]= (V175->c.c_car);
	V175=V175->c.c_cdr;
	if(!endp(V175))invalid_macro_call();}
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
	{object V176;
	object V177;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V176=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T301;}
	V177=(base[1]);
	vs_top=sup;
	goto T302;
	goto T301;
T301:;
	V177= Cnil;
	goto T302;
T302:;
	{object V178;
	object V179;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk353)();
	if(vs_base>=vs_top){vs_top=sup;goto T306;}
	V178= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T307;}
	V179= vs_base[0];
	vs_top=sup;
	goto T308;
	goto T306;
T306:;
	V178= Cnil;
	goto T307;
T307:;
	V179= Cnil;
	goto T308;
T308:;
	{object V180;
	object V181;
	base[2]= (V178);
	base[3]= (V179);
	base[4]= (V176);
	base[5]= (V177);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk360)(Lclptr360);
	if(vs_base>=vs_top){vs_top=sup;goto T314;}
	V180= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T315;}
	V181= vs_base[0];
	vs_top=sup;
	goto T316;
	goto T314;
T314:;
	V180= Cnil;
	goto T315;
T315:;
	V181= Cnil;
	goto T316;
T316:;
	base[2]= (V178);
	base[3]= (V179);
	base[4]= (V180);
	base[5]= (V181);
	base[6]= (V177);
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
	{object V182;
	object V183;
	object V184;
	object V185;
	object V186;
	check_arg(5);
	V182=(base[0]);
	V183=(base[1]);
	V184=(base[2]);
	V185=(base[3]);
	V186=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V187;
	object V188;
	object V189;
	base[5]= (V184);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T324;}
	V187= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T325;}
	V188= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T326;}
	V189= vs_base[0];
	vs_top=sup;
	goto T327;
	goto T324;
T324:;
	V187= Cnil;
	goto T325;
T325:;
	V188= Cnil;
	goto T326;
T326:;
	V189= Cnil;
	goto T327;
T327:;
	{object V190;
	object V191;
	object V192;
	base[5]= (V185);
	base[6]= (V186);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk371)();
	if(vs_base>=vs_top){vs_top=sup;goto T331;}
	V190= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T332;}
	V191= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T333;}
	V192= vs_base[0];
	vs_top=sup;
	goto T334;
	goto T331;
T331:;
	V190= Cnil;
	goto T332;
T332:;
	V191= Cnil;
	goto T333;
T333:;
	V192= Cnil;
	goto T334;
T334:;
	if(((V190))==Cnil){
	goto T338;}
	V193= make_cons((V190),Cnil);
	goto T336;
	goto T338;
T338:;
	V193= Cnil;
	goto T336;
T336:;
	V194= list(2,VV[46],list(2,VV[47],list(3,(V182),(V183),(V189))));
	V195= list(2,VV[46],make_cons(VV[48],(V184)));
	V196= listA(3,/* INLINE-ARGS */V194,/* INLINE-ARGS */V195,append((V191),(V192)));
	base[5]= listA(3,VV[35],(V188),append(V193,/* INLINE-ARGS */V196));
	base[6]= (V188);
	base[7]= (V189);
	vs_top=(vs_base=base+5)+3;
	return;}}
	}
}
/*	local entry for function REAL-MAKE-METHOD-INITARGS-FORM	*/

static object LI17(V202,V203,V204,V205,V206)

object V202;object V203;register object V204;object V205;object V206;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(!(type_of((V204))==t_cons)){
	goto T343;}
	if((CMPcar((V204)))==(VV[35])){
	goto T342;}
	goto T343;
T343:;
	base[0]= VV[49];
	base[1]= (V204);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T342;
T342:;
	{object V207 = (*(LnkLI372))((V204),(V205),(V206));
	VMR15(V207)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for REAL-MAKE-METHOD-LAMBDA	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V208;
	object V209;
	object V210;
	object V211;
	check_arg(4);
	V208=(base[0]);
	V209=(base[1]);
	V210=(base[2]);
	V211=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V210);
	base[5]= (V211);
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
	{register object V212;
	object V213;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V212=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T351;}
	V213=(base[1]);
	vs_top=sup;
	goto T352;
	goto T351;
T351:;
	V213= Cnil;
	goto T352;
T352:;
	if(!(type_of((V212))==t_cons)){
	goto T355;}
	if((CMPcar((V212)))==(VV[35])){
	goto T354;}
	goto T355;
T355:;
	base[2]= VV[50];
	base[3]= (V212);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	vs_top=sup;
	goto T354;
T354:;
	{object V214;
	object V215;
	object V216;
	base[2]= CMPcddr((V212));
	base[3]= (V213);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk371)();
	if(vs_base>=vs_top){vs_top=sup;goto T364;}
	V214= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T365;}
	V215= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T366;}
	V216= vs_base[0];
	vs_top=sup;
	goto T367;
	goto T364;
T364:;
	V214= Cnil;
	goto T365;
T365:;
	V215= Cnil;
	goto T366;
T366:;
	V216= Cnil;
	goto T367;
T367:;
	{object V217;
	object V218;
	object V219;
	object V220;
	object V221;
	V217= (VFUN_NARGS=2,(*(LnkLI374))(VV[47],(V215)));
	V218= (VFUN_NARGS=2,(*(LnkLI374))(VV[48],(V215)));
	if(!(type_of((V217))==t_cons)){
	goto T372;}
	V219= CMPcar((V217));
	goto T370;
	goto T372;
T372:;
	V219= Cnil;
	goto T370;
T370:;
	if(((V219))==Cnil){
	goto T376;}
	V220= CMPcar((V219));
	goto T374;
	goto T376;
T376:;
	V220= Cnil;
	goto T374;
T374:;
	if((V218)!=Cnil){
	V221= (V218);
	goto T378;}
	V221= CMPcadr((V212));
	goto T378;
T378:;
	{object V222;
	register object V223;
	object V224;
	base[7]= (V221);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T381;}
	V222= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T382;}
	V223= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T383;}
	V224= vs_base[0];
	vs_top=sup;
	goto T384;
	goto T381;
T381:;
	V222= Cnil;
	goto T382;
T382:;
	V223= Cnil;
	goto T383;
T383:;
	V224= Cnil;
	goto T384;
T384:;
	{object V225;
	object V226;
	object V227;
	object V228;
	object V229;
	object V230;
	object V231;
	register object V232;
	register object V233;
	object V234;
	{object V235;
	object V236= (V222);
	object V237= (V224);
	if(V236==Cnil||V237==Cnil){
	V225= Cnil;
	goto T385;}
	base[17]=V235=MMcons(Cnil,Cnil);
	goto T386;
T386:;
	(V235->c.c_car)= (V236->c.c_car);
	if((V236=MMcdr(V236))==Cnil||(V237=MMcdr(V237))==Cnil){
	V225= base[17];
	goto T385;}
	V235=MMcdr(V235)=MMcons(Cnil,Cnil);
	goto T386;}
	goto T385;
T385:;
	{object V240;
	object V241= (V225);
	if(V241==Cnil){
	V226= Cnil;
	goto T388;}
	base[17]=V240=MMcons(Cnil,Cnil);
	goto T389;
T389:;
	(V240->c.c_car)= make_cons((V241->c.c_car),Cnil);
	if((V241=MMcdr(V241))==Cnil){
	V226= base[17];
	goto T388;}
	V240=MMcdr(V240)=MMcons(Cnil,Cnil);
	goto T389;}
	goto T388;
T388:;
	V227= make_cons(Cnil,Cnil);
	V228= (*(LnkLI375))((V221),(V225),(V215),(V219),(V224));
	base[17]= Cnil;
	{object V243;
	object V244= (V222);
	object V245= (V224);
	if(V244==Cnil||V245==Cnil){
	base[18]= Cnil;
	goto T396;}
	base[19]=V243=MMcons(Cnil,Cnil);
	goto T397;
T397:;
	if(type_of((V245->c.c_car))==t_symbol){
	goto T399;}
	(V243->c.c_car)= Cnil;
	goto T398;
	goto T399;
T399:;
	if(((((V245->c.c_car))==(Ct)?Ct:Cnil))==Cnil){
	goto T401;}
	(V243->c.c_car)= Cnil;
	goto T398;
	goto T401;
T401:;
	(V243->c.c_car)= list(3,VV[51],(V244->c.c_car),(V245->c.c_car));
	goto T398;
T398:;
	if((V244=MMcdr(V244))==Cnil||(V245=MMcdr(V245))==Cnil){
	base[18]= base[19];
	goto T396;}
	V243=MMcdr(V243)=MMcons(Cnil,Cnil);
	goto T397;}
	goto T396;
T396:;
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk376)();
	vs_top=sup;
	V242= vs_base[0];
	V229= make_cons(VV[46],V242);
	V248= make_cons(VV[10],(V228));
	if(!(type_of((V220))==t_cons||((V220))==Cnil)){
	goto T406;}
	V249= CMPcadr((V220));
	goto T404;
	goto T406;
T406:;
	V249= (V220);
	goto T404;
T404:;
	V250 = (V216);
	V251= list(2,/* INLINE-ARGS */V248,listA(3,VV[52],V249,V250));
	V230= listA(4,VV[35],(V223),(V229),append((V215),/* INLINE-ARGS */V251));
	if((CMPcdr((V216)))==Cnil){
	goto T409;}
	V231= Cnil;
	goto T408;
	goto T409;
T409:;
	base[17]= CMPcar((V216));
	vs_top=(vs_base=base+17)+1;
	Lconstantp();
	vs_top=sup;
	V231= vs_base[0];
	goto T408;
T408:;
	if((V231)==Cnil){
	V232= Cnil;
	goto T412;}
	base[17]= CMPcar((V216));
	vs_top=(vs_base=base+17)+1;
	Leval();
	vs_top=sup;
	V232= vs_base[0];
	goto T412;
T412:;
	if(((V231))==Cnil){
	goto T416;}
	base[17]= (V232);
	base[18]= VV[53];
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk122)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T415;}
	if(!(type_of((V232))==t_symbol)){
	goto T416;}
	base[17]= (V232);
	vs_top=(vs_base=base+17)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T416;}
	goto T415;
T415:;
	V233= list(2,VV[54],(V232));
	goto T414;
	goto T416;
T416:;
	V233= Cnil;
	goto T414;
T414:;
	{register object V252;
	register object V253;
	V252= (V223);
	V253= CMPcar((V252));
	goto T431;
T431:;
	if(!(((V252))==Cnil)){
	goto T432;}
	V234= Cnil;
	goto T427;
	goto T432;
T432:;
	{register object x= (V253),V254= VV[55];
	while(V254!=Cnil)
	if(x==(V254->c.c_car)){
	goto T439;
	}else V254=V254->c.c_cdr;
	goto T438;}
	goto T439;
T439:;
	V234= Ct;
	goto T427;
	goto T438;
T438:;
	if(!(((V253))==(VV[56]))){
	goto T436;}
	V234= Cnil;
	goto T427;
	goto T436;
T436:;
	V252= CMPcdr((V252));
	V253= CMPcar((V252));
	goto T431;}
	goto T427;
T427:;
	{object V255;
	object V256;
	object V257;
	object V258;
	base[17]= (V230);
	base[18]= (V225);
	base[19]= (V213);
	base[20]= (V226);
	base[21]= (V227);
	vs_top=(vs_base=base+17)+5;
	(void) (*Lnk377)();
	if(vs_base>=vs_top){vs_top=sup;goto T453;}
	V255= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T454;}
	V256= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T455;}
	V257= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T456;}
	V258= vs_base[0];
	vs_top=sup;
	goto T457;
	goto T453;
T453:;
	V255= Cnil;
	goto T454;
T454:;
	V256= Cnil;
	goto T455;
T455:;
	V257= Cnil;
	goto T456;
T456:;
	V258= Cnil;
	goto T457;
T457:;
	{object V259;
	object V260;
	object V261;
	base[17]= CMPcddr((V255));
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk371)();
	if(vs_base>=vs_top){vs_top=sup;goto T460;}
	V259= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T461;}
	V260= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T462;}
	V261= vs_base[0];
	vs_top=sup;
	goto T463;
	goto T460;
T460:;
	V259= Cnil;
	goto T461;
T461:;
	V260= Cnil;
	goto T462;
T462:;
	V261= Cnil;
	goto T463;
T463:;
	if(((V258))!=Cnil){
	goto T465;}
	if(((V256))==Cnil){
	goto T464;}
	goto T465;
T465:;
	V233= listA(3,VV[57],Ct,(V233));
	goto T464;
T464:;
	base[17]= (VV[378]->s.s_gfdef);
	base[18]= (V226);
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk379)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T470;}
	{object V262;
	object V263;
	base[17]= (V226);
	base[18]= (V227);
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk380)();
	if(vs_base>=vs_top){vs_top=sup;goto T478;}
	V262= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T479;}
	V263= vs_base[0];
	vs_top=sup;
	goto T480;
	goto T478;
T478:;
	V262= Cnil;
	goto T479;
T479:;
	V263= Cnil;
	goto T480;
T480:;
	{object V264;
	base[17]= VV[58];
	vs_top=(vs_base=base+17)+1;
	Lmake_symbol();
	vs_top=sup;
	V264= vs_base[0];
	if(((V262))==Cnil){
	goto T487;}
	base[17]= list(2,VV[59],(V262));
	goto T485;
	goto T487;
T487:;
	base[17]= Cnil;
	goto T485;
T485:;
	if(((V263))==Cnil){
	goto T491;}
	base[18]= list(2,VV[60],(V263));
	goto T489;
	goto T491;
T491:;
	base[18]= Cnil;
	goto T489;
T489:;
	base[19]= listA(3,VV[29],(V264),(V233));
	vs_top=(vs_base=base+17)+3;
	Lappend();
	vs_top=sup;
	V233= vs_base[0];
	V265= listA(3,VV[61],list(3,(V225),(V262),(V264)),(V261));
	V261= make_cons(/* INLINE-ARGS */V265,Cnil);}}
	goto T470;
T470:;
	{register object x= VV[62],V266= (V223);
	while(V266!=Cnil)
	if(x==(V266->c.c_car)){
	goto T498;
	}else V266=V266->c.c_cdr;
	goto T495;}
	goto T498;
T498:;
	{register object x= VV[63],V267= (V223);
	while(V267!=Cnil)
	if(x==(V267->c.c_car)){
	goto T495;
	}else V267=V267->c.c_cdr;}
	{object V268;
	{register object x= VV[56],V269= (V223);
	while(V269!=Cnil)
	if(x==(V269->c.c_car)){
	V268= V269;
	goto T500;
	}else V269=V269->c.c_cdr;
	V268= Cnil;}
	goto T500;
T500:;
	base[18]= (V223);
	base[19]= (V268);
	vs_top=(vs_base=base+18)+2;
	Lldiff();
	vs_top=sup;
	base[17]= vs_base[0];
	base[18]= make_cons(VV[63],Cnil);
	base[19]= (V268);
	vs_top=(vs_base=base+17)+3;
	Lnconc();
	vs_top=sup;
	V223= vs_base[0];}
	goto T495;
T495:;
	base[18]= (V223);
	base[19]= VV[66];
	base[20]= VV[67];
	base[21]= VV[68];
	base[22]= (V256);
	base[23]= VV[69];
	base[24]= (V258);
	base[25]= VV[70];
	base[26]= (V257);
	base[27]= VV[71];
	base[28]= (V234);
	vs_top=(vs_base=base+18)+11;
	Llist();
	vs_top=sup;
	V270= vs_base[0];
	base[17]= list(3,VV[35],VV[64],listA(3,VV[65],V270,append((V260),(V261))));
	if(((V233))==Cnil){
	goto T523;}
	V271= list(2,VV[28],(V233));
	goto T521;
	goto T523;
T523:;
	V271= Cnil;
	goto T521;
T521:;
	if(((V214))==Cnil){
	goto T527;}
	V272= list(2,VV[3],(V214));
	goto T525;
	goto T527;
T527:;
	V272= Cnil;
	goto T525;
T525:;
	base[18]= append(V271,V272);
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
	{object V273=base[0]->c.c_cdr;
	if(endp(V273))invalid_macro_call();
	{object V274= (V273->c.c_car);
	if(endp(V274))invalid_macro_call();
	base[2]= (V274->c.c_car);
	V274=V274->c.c_cdr;
	if(endp(V274))invalid_macro_call();
	base[3]= (V274->c.c_car);
	V274=V274->c.c_cdr;
	if(endp(V274))invalid_macro_call();
	base[4]= (V274->c.c_car);
	V274=V274->c.c_cdr;
	base[5]= V274;}
	V273=V273->c.c_cdr;
	base[6]= V273;}
	V275= list(2,base[3],base[4]);
	base[7]= list(4,VV[10],base[3],base[4],list(3,VV[72],/* INLINE-ARGS */V275,list(3,VV[73],base[5],listA(3,VV[74],list(2,base[2],base[3]),base[6]))));
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
	{object V276=base[0]->c.c_cdr;
	if(endp(V276))invalid_macro_call();
	{object V277= (V276->c.c_car);
	if(endp(V277))invalid_macro_call();
	base[2]= (V277->c.c_car);
	V277=V277->c.c_cdr;
	if(endp(V277))invalid_macro_call();
	base[3]= (V277->c.c_car);
	V277=V277->c.c_cdr;
	if(endp(V277))invalid_macro_call();
	base[4]= (V277->c.c_car);
	V277=V277->c.c_cdr;
	if(endp(V277))invalid_macro_call();
	base[5]= (V277->c.c_car);
	V277=V277->c.c_cdr;
	base[6]= V277;}
	V276=V276->c.c_cdr;
	base[7]= V276;}
	V278= list(3,base[4],base[5],base[3]);
	V279 = CMPmake_fixnum((long)length(base[4]));
	base[8]= list(3,VV[75],/* INLINE-ARGS */V278,list(3,VV[73],base[6],listA(3,VV[74],list(2,nthcdr(fix(V279),base[2]),base[5]),base[7])));
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
	{object V280=base[0]->c.c_cdr;
	if(endp(V280))invalid_macro_call();
	{object V281= (V280->c.c_car);
	if(endp(V281))invalid_macro_call();
	base[2]= (V281->c.c_car);
	V281=V281->c.c_cdr;
	if(endp(V281))invalid_macro_call();
	base[3]= (V281->c.c_car);
	V281=V281->c.c_cdr;
	if(!endp(V281))invalid_macro_call();}
	V280=V280->c.c_cdr;
	base[4]= V280;}
	V282= list(3,VV[44],VV[80],list(3,VV[44],VV[81],list(2,VV[1],base[3])));
	V283= list(2,VV[1],base[3]);
	V284= list(3,VV[44],/* INLINE-ARGS */V282,list(3,VV[44],/* INLINE-ARGS */V283,list(3,VV[44],VV[82],list(2,VV[1],base[3]))));
	V285= list(3,VV[77],VV[78],list(6,VV[32],VV[79],/* INLINE-ARGS */V284,VV[83],list(2,VV[1],base[3]),VV[84]));
	V286= list(4,VV[44],VV[91],VV[92],list(2,VV[1],base[2]));
	base[5]= listA(3,VV[76],list(3,/* INLINE-ARGS */V285,list(3,VV[85],VV[86],list(5,VV[44],VV[87],VV[88],list(5,VV[44],VV[89],VV[90],/* INLINE-ARGS */V286,list(2,VV[1],base[3])),VV[93])),VV[94]),base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function MAKE-METHOD-CALL	*/

static object LI23(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB21 VMS21 VMV21
	{object V287;
	object V288;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI23key,first,ap);
	if(Vcs[0]==0){
	V287= (VV[382]->s.s_gfdef);
	}else{
	V287=(Vcs[0]);}
	V288=(Vcs[1]);
	base[0]= VV[95];
	base[1]= (V287);
	base[2]= (V288);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V289 = vs_base[0];
	VMR21(V289)}
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
	{object V290=base[0]->c.c_cdr;
	if(endp(V290))invalid_macro_call();
	base[2]= (V290->c.c_car);
	V290=V290->c.c_cdr;
	if(endp(V290))invalid_macro_call();
	base[3]= (V290->c.c_car);
	V290=V290->c.c_cdr;
	if(endp(V290))invalid_macro_call();
	base[4]= (V290->c.c_car);
	V290=V290->c.c_cdr;
	if(!endp(V290))invalid_macro_call();}
	V291= list(2,VV[97],base[2]);
	V292= list(2,VV[98],base[3]);
	base[5]= listA(3,VV[96],list(3,/* INLINE-ARGS */V291,/* INLINE-ARGS */V292,list(2,VV[99],base[4])),VV[100]);
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
	{object V293=base[0]->c.c_cdr;
	if(endp(V293))invalid_macro_call();
	base[2]= (V293->c.c_car);
	V293=V293->c.c_cdr;
	if(endp(V293))invalid_macro_call();
	base[3]= (V293->c.c_car);
	V293=V293->c.c_cdr;
	base[4]= V293;}
	V294= list(2,VV[102],base[2]);
	if((base[3])==Cnil){
	goto T535;}
	V295= make_cons(VV[32],base[4]);
	goto T533;
	goto T535;
T535:;
	V295= make_cons(VV[44],base[4]);
	goto T533;
T533:;
	base[5]= list(4,VV[101],/* INLINE-ARGS */V294,V295,list(2,VV[103],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function MAKE-FAST-METHOD-CALL	*/

static object LI26(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB24 VMS24 VMV24
	{object V296;
	object V297;
	object V298;
	object V299;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI26key,first,ap);
	if(Vcs[0]==0){
	V296= (VV[382]->s.s_gfdef);
	}else{
	V296=(Vcs[0]);}
	V297=(Vcs[1]);
	V298=(Vcs[2]);
	V299=(Vcs[3]);
	base[0]= VV[104];
	base[1]= (V296);
	base[2]= (V297);
	base[3]= (V298);
	base[4]= (V299);
	vs_top=(vs_base=base+0)+5;
	siLmake_structure();
	vs_top=sup;
	{object V300 = vs_base[0];
	VMR24(V300)}
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
	{object V301=base[0]->c.c_cdr;
	if(endp(V301))invalid_macro_call();
	base[2]= (V301->c.c_car);
	V301=V301->c.c_cdr;
	base[3]= V301;}
	V302= list(2,VV[106],base[2]);
	V303= list(2,VV[107],base[2]);
	base[4]= listA(5,VV[105],/* INLINE-ARGS */V302,/* INLINE-ARGS */V303,list(2,VV[108],base[2]),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function MAKE-FAST-INSTANCE-BOUNDP	*/

static object LI28(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB26 VMS26 VMV26
	{object V304;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI28key,first,ap);
	V304=(Vcs[0]);
	base[0]= VV[109];
	base[1]= (V304);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V305 = vs_base[0];
	VMR26(V305)}
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
	{register object V306;
	V306= (VV[111]->s.s_dbind);
	bds_bind(VV[112],Cnil);
	base[1]= Ct;
	base[2]= VV[113];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	{register long V307;
	register long V308;
	V307= fix((VV[114]->s.s_dbind));
	V308= 0;
	goto T554;
T554:;
	if(!((V308)>=(V307))){
	goto T555;}
	{object V309 = Cnil;
	bds_unwind1;
	VMR27(V309)}
	goto T555;
T555:;
	{register object V310;
	V310= aref1((VV[110]->s.s_dbind),fix((V306)));
	if(((V310))==Cnil){
	goto T558;}
	(void)(print((V310),Cnil));}
	goto T558;
T558:;
	V306= number_plus((V306),small_fixnum(1));
	if(!(number_compare((V306),(VV[114]->s.s_dbind))==0)){
	goto T564;}
	V306= small_fixnum(0);
	goto T564;
T564:;
	V308= (long)(V308)+1;
	goto T554;}}
	goto T546;
T546:;
	{object V311 = Cnil;
	VMR27(V311)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function TRACE-EMF-CALL-INTERNAL	*/

static object LI30(V315,V316,V317)

object V315;object V316;object V317;
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
T571:;{object V318;
	V318= (VV[110]->s.s_dbind);{object V319;
	V319= (VV[111]->s.s_dbind);
	V320= listA(3,(V315),(V316),(V317));
	(void)(aset1(V318,fix(V319),/* INLINE-ARGS */V320));}}
	(VV[111]->s.s_dbind)= number_plus((VV[111]->s.s_dbind),small_fixnum(1));
	if(!(number_compare((VV[111]->s.s_dbind),(VV[114]->s.s_dbind))==0)){
	goto T580;}
	(VV[111]->s.s_dbind)= small_fixnum(0);
	{object V321 = small_fixnum(0);
	VMR28(V321)}
	goto T580;
T580:;
	{object V322 = Cnil;
	VMR28(V322)}
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
	{object V323=base[0]->c.c_cdr;
	if(endp(V323))invalid_macro_call();
	base[2]= (V323->c.c_car);
	V323=V323->c.c_cdr;
	if(endp(V323))invalid_macro_call();
	base[3]= (V323->c.c_car);
	V323=V323->c.c_cdr;
	if(endp(V323))invalid_macro_call();
	base[4]= (V323->c.c_car);
	V323=V323->c.c_cdr;
	if(!endp(V323))invalid_macro_call();}
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
	{object V324=base[0]->c.c_cdr;
	if(endp(V324))invalid_macro_call();
	base[2]= (V324->c.c_car);
	V324=V324->c.c_cdr;
	if(endp(V324))invalid_macro_call();
	base[3]= (V324->c.c_car);
	V324=V324->c.c_cdr;
	base[4]= V324;}
	V325= list(4,VV[118],base[2],base[3],make_cons(VV[44],base[4]));
	base[5]= list(3,VV[10],/* INLINE-ARGS */V325,listA(3,VV[119],base[2],base[4]));
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
	{object V326=base[0]->c.c_cdr;
	if(endp(V326))invalid_macro_call();
	base[2]= (V326->c.c_car);
	V326=V326->c.c_cdr;
	if(endp(V326))invalid_macro_call();
	base[3]= (V326->c.c_car);
	V326=V326->c.c_cdr;
	base[4]= V326;}
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
	V327= list(4,VV[118],base[2],base[3],make_cons(VV[44],base[4]));
	V328= list(3,VV[122],base[2],VV[123]);
	V329= list(2,/* INLINE-ARGS */V328,listA(3,VV[119],base[2],base[4]));
	if((base[3])!=Cnil){
	goto T597;}
	if(!((1)==((long)length(base[4])))){
	goto T597;}
	V331= list(3,VV[122],base[2],VV[124]);
	V332= list(2,VV[126],list(2,VV[127],CMPcar(base[4])));
	V333= list(2,/* INLINE-ARGS */V332,list(2,VV[128],list(3,VV[116],VV[126],list(3,VV[129],VV[126],base[2]))));
	V334= list(3,VV[131],VV[128],list(2,VV[1],(VV[132]->s.s_dbind)));
	V335= list(2,/* INLINE-ARGS */V331,list(3,VV[125],/* INLINE-ARGS */V333,list(4,VV[130],/* INLINE-ARGS */V334,list(3,VV[133],CMPcar(base[4]),base[2]),VV[128])));
	base[5]= make_cons(/* INLINE-ARGS */V335,Cnil);
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
	V336= list(3,VV[122],base[2],VV[134]);
	V337= list(2,VV[135],CMPcar(base[4]));
	V338= list(2,/* INLINE-ARGS */V337,list(2,VV[126],list(2,VV[127],CMPcar(base[4]))));
	V339= list(2,/* INLINE-ARGS */V336,list(3,VV[96],/* INLINE-ARGS */V338,list(3,VV[116],VV[126],list(3,VV[30],list(3,VV[129],VV[126],base[2]),VV[135]))));
	base[6]= make_cons(/* INLINE-ARGS */V339,Cnil);
	goto T601;
	goto T603;
T603:;
	base[6]= Cnil;
	goto T601;
T601:;
	V340= list(2,VV[95],listA(4,VV[137],base[2],base[3],base[4]));
	if((base[3])==Cnil){
	goto T610;}
	V341= listA(3,VV[138],list(3,VV[139],VV[34],base[2]),base[4]);
	goto T608;
	goto T610;
T610:;
	V341= listA(3,VV[140],list(3,VV[139],VV[34],base[2]),base[4]);
	goto T608;
T608:;
	V342= list(2,Ct,list(4,VV[136],base[2],/* INLINE-ARGS */V340,list(2,VV[34],V341)));
	base[7]= make_cons(/* INLINE-ARGS */V342,Cnil);
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V330= vs_base[0];
	base[5]= list(3,VV[10],/* INLINE-ARGS */V327,listA(3,VV[121],/* INLINE-ARGS */V329,V330));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	function definition for INVOKE-EMF	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	{register object V343;
	register object V344;
	check_arg(2);
	V343=(base[0]);
	V344=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V345;
	V345= (V343);
	base[2]= (V345);
	base[3]= VV[104];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T614;}
	{object V346;
	object V347;
	register object V348;
	V346= STREF(object,(V343),12);
	V347= CMPcdr((V346));
	V348= CMPcar((V346));
	if(((V347))==Cnil){
	goto T622;}
	{object V349;
	object V350;
	V349= nthcdr(fix((V348)),(V344));
	base[7]= (V344);
	base[8]= (V349);
	vs_top=(vs_base=base+7)+2;
	Lldiff();
	vs_top=sup;
	V350= vs_base[0];
	base[7]= STREF(object,(V343),0);
	base[8]= STREF(object,(V343),4);
	base[9]= STREF(object,(V343),8);
	{object V351;
	V352= make_cons((V349),Cnil);
	V351= nconc((V350),/* INLINE-ARGS */V352);
	 vs_top=base+10;
	 while(V351!=Cnil)
	 {vs_push((V351)->c.c_car);V351=(V351)->c.c_cdr;}
	vs_base=base+8;}
	{object _funobj = base[7];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T622;
T622:;
	if(((V344))!=Cnil){
	goto T633;}
	if(!(eql((V348),small_fixnum(0)))){
	goto T636;}
	base[5]= STREF(object,(V343),0);
	base[6]= STREF(object,(V343),4);
	base[7]= STREF(object,(V343),8);
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
	if((CMPcdr((V344)))!=Cnil){
	goto T643;}
	if(!(eql((V348),small_fixnum(1)))){
	goto T646;}
	base[5]= STREF(object,(V343),0);
	base[6]= STREF(object,(V343),4);
	base[7]= STREF(object,(V343),8);
	base[8]= CMPcar((V344));
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
	if((CMPcddr((V344)))!=Cnil){
	goto T654;}
	if(!(eql((V348),small_fixnum(2)))){
	goto T657;}
	base[5]= STREF(object,(V343),0);
	base[6]= STREF(object,(V343),4);
	base[7]= STREF(object,(V343),8);
	base[8]= CMPcar((V344));
	base[9]= CMPcadr((V344));
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
	base[5]= STREF(object,(V343),0);
	base[6]= STREF(object,(V343),4);
	base[7]= STREF(object,(V343),8);
	{object V353;
	V353= (V344);
	 vs_top=base+8;
	 while(V353!=Cnil)
	 {vs_push((V353)->c.c_car);V353=(V353)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T614;
T614:;
	base[2]= (V345);
	base[3]= VV[95];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T670;}
	base[2]= STREF(object,(V343),0);
	base[3]= (V344);
	{object V354;
	V354= STREF(object,(V343),4);
	 vs_top=base+4;
	 while(V354!=Cnil)
	 {vs_push((V354)->c.c_car);V354=(V354)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T670;
T670:;
	if(!(type_of((V345))==t_fixnum)){
	goto T678;}
	if(((V344))!=Cnil){
	goto T681;}
	base[2]= VV[144];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	return;
	goto T681;
T681:;
	if((CMPcdr((V344)))!=Cnil){
	goto T685;}
	{object V355;
	{object V357;
	V357= CMPcar((V344));
	if(type_of((V357))==t_structure){
	goto T693;}
	goto T690;
	goto T693;
T693:;
	if(!((((V357))->str.str_def)==(VV[145]))){
	goto T690;}}
	V356= STREF(object,CMPcar((V344)),4);
	goto T688;
	goto T690;
T690:;{object V358;
	V358= (VV[147]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= CMPcar((V344));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V359= vs_base[0];
	if(!((V358)==(CMPcar(V359)))){
	goto T696;}}
	V356= CMPcar((CMPcar((V344)))->cc.cc_turbo[12]);
	goto T688;
	goto T696;
T696:;
	base[2]= VV[148];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V356= vs_base[0];
	goto T688;
T688:;
	V360 = fix((V343));
	V355= (V356)->v.v_self[V360];
	if(!(((V355))==((VV[132]->s.s_dbind)))){
	goto T703;}
	base[2]= CMPcar((V344));
	base[3]= (V343);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk133)();
	return;
	goto T703;
T703:;
	base[2]= (V355);
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T685;
T685:;
	if((CMPcddr((V344)))!=Cnil){
	goto T708;}
	{object V362;
	V362= CMPcadr((V344));
	if(type_of((V362))==t_structure){
	goto T715;}
	goto T712;
	goto T715;
T715:;
	if(!((((V362))->str.str_def)==(VV[149]))){
	goto T712;}}
	V361= STREF(object,CMPcadr((V344)),4);
	goto T710;
	goto T712;
T712:;{object V363;
	V363= (VV[147]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= CMPcadr((V344));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V364= vs_base[0];
	if(!((V363)==(CMPcar(V364)))){
	goto T718;}}
	V361= CMPcar((CMPcadr((V344)))->cc.cc_turbo[12]);
	goto T710;
	goto T718;
T718:;
	base[2]= VV[148];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V361= vs_base[0];
	goto T710;
T710:;
	V365 = fix((V343));
	base[2]= (V361)->v.v_self[V365]= (CMPcar((V344)));
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
	base[2]= (V345);
	base[3]= VV[109];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T726;}
	if(((V344))==Cnil){
	goto T730;}
	if((CMPcdr((V344)))==Cnil){
	goto T731;}
	goto T730;
T730:;
	base[2]= VV[151];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	return;
	goto T731;
T731:;
	{object V367;
	V367= CMPcar((V344));
	if(type_of((V367))==t_structure){
	goto T741;}
	goto T738;
	goto T741;
T741:;
	if(!((((V367))->str.str_def)==(VV[152]))){
	goto T738;}}
	V366= STREF(object,CMPcar((V344)),4);
	goto T736;
	goto T738;
T738:;{object V368;
	V368= (VV[147]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= CMPcar((V344));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V369= vs_base[0];
	if(!((V368)==(CMPcar(V369)))){
	goto T744;}}
	V366= CMPcar((CMPcar((V344)))->cc.cc_turbo[12]);
	goto T736;
	goto T744;
T744:;
	base[2]= VV[148];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V366= vs_base[0];
	goto T736;
T736:;
	base[2]= (((((V366)->v.v_self[(long)STREF(fixnum,(V343),0)])==((VV[132]->s.s_dbind))?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T726;
T726:;
	base[2]= (V345);
	vs_top=(vs_base=base+2)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T751;}
	base[2]= (V343);
	{object V370;
	V370= (V344);
	 vs_top=base+3;
	 while(V370!=Cnil)
	 {vs_push((V370)->c.c_car);V370=(V370)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T751;
T751:;
	base[3]= VV[153];
	base[4]= (V345);
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

static object LI36(V373,V374)

object V373;object V374;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	base[0]=MMcons((V374),Cnil);
	{register object V375;
	V375= (base[0]->c.c_car);
	base[1]= (V375);
	base[2]= VV[104];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T761;}
	{object V376;
	base[4]= (V373);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	V376= vs_base[0];
	base[2]= CMPmake_fixnum((long)(*(LnkLI394))((V376)));
	base[2]=MMcons(base[2],base[0]);
	base[3]= (*(LnkLI395))((V376));
	base[3]=MMcons(base[3],base[2]);
	{object V377 = 
	make_cclosure_new(LC130,Cnil,base[3],Cdata);
	VMR33(V377)}}
	goto T761;
T761:;
	base[1]= (V375);
	base[2]= VV[95];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T770;}
	{object V378 = 
	make_cclosure_new(LC131,Cnil,base[0],Cdata);
	VMR33(V378)}
	goto T770;
T770:;
	base[1]= (V375);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T775;}
	{object V379 = (base[0]->c.c_car);
	VMR33(V379)}
	goto T775;
T775:;
	base[2]= VV[153];
	base[3]= (V375);
	base[4]= VV[156];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk392)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	{object V380 = vs_base[0];
	VMR33(V380)}}
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
	{object V381=base[0]->c.c_cdr;
	if(endp(V381))invalid_macro_call();
	{object V382= (V381->c.c_car);
	if(endp(V382))invalid_macro_call();
	base[2]= (V382->c.c_car);
	V382=V382->c.c_cdr;
	if(endp(V382))invalid_macro_call();
	base[3]= (V382->c.c_car);
	V382=V382->c.c_cdr;
	if(endp(V382))invalid_macro_call();
	base[4]= (V382->c.c_car);
	V382=V382->c.c_cdr;
	if(!endp(V382))invalid_macro_call();}
	V381=V381->c.c_cdr;
	base[5]= V381;}
	V383= list(2,VV[1],base[4]);
	V384= listA(3,VV[160],list(2,VV[161],list(2,VV[1],base[3])),VV[162]);
	V385= listA(4,VV[32],VV[163],list(2,VV[1],base[4]),VV[164]);
	V386= list(2,VV[1],base[4]);
	V387= list(2,VV[1],((((base[3])==Cnil?Ct:Cnil))==Cnil?Ct:Cnil));
	V388= list(2,VV[1],base[2]);
	if((base[3])==Cnil){
	goto T784;}
	V389= make_cons(base[3],Cnil);
	goto T782;
	goto T784;
T784:;
	V389= Cnil;
	goto T782;
T782:;
	V390= list(2,VV[165],list(5,VV[32],VV[166],/* INLINE-ARGS */V386,/* INLINE-ARGS */V387,list(3,VV[167],/* INLINE-ARGS */V388,list(2,VV[1],V389))));
	V391= make_cons(/* INLINE-ARGS */V390,Cnil);
	V392= list(2,VV[1],base[2]);
	if((base[3])==Cnil){
	goto T788;}
	V393= list(2,VV[170],base[3]);
	goto T786;
	goto T788;
T788:;
	V393= Cnil;
	goto T786;
T786:;
	V394= list(3,VV[85],VV[158],list(5,VV[44],VV[159],/* INLINE-ARGS */V383,list(4,VV[130],/* INLINE-ARGS */V384,/* INLINE-ARGS */V385,list(3,VV[96],/* INLINE-ARGS */V391,list(5,VV[44],VV[168],VV[92],list(4,VV[44],VV[169],list(3,VV[44],list(3,VV[167],/* INLINE-ARGS */V392,list(2,VV[1],V393)),VV[92]),VV[165]),VV[165]))),VV[171]));
	base[6]= listA(3,VV[76],list(3,VV[157],/* INLINE-ARGS */V394,list(3,VV[172],Cnil,list(3,VV[44],VV[173],list(3,VV[44],VV[174],list(2,VV[1],base[4]))))),base[5]);
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
	{object V395=base[0]->c.c_cdr;
	if(endp(V395))invalid_macro_call();
	{object V396= (V395->c.c_car);
	{object V397=getf(V396,VV[68],OBJNULL);
	if(V397==OBJNULL){
	base[2]= Cnil;} else {
	base[2]= V397;
	}}
	{object V398=getf(V396,VV[69],OBJNULL);
	if(V398==OBJNULL){
	base[3]= Cnil;} else {
	base[3]= V398;
	}}
	{object V399=getf(V396,VV[70],OBJNULL);
	if(V399==OBJNULL){
	base[4]= Cnil;} else {
	base[4]= V399;
	}}
	{object V400=getf(V396,VV[71],OBJNULL);
	if(V400==OBJNULL){
	base[5]= Cnil;} else {
	base[5]= V400;
	}}
	check_other_key(V396,4,VV[68],VV[69],VV[70],VV[71]);}
	V395=V395->c.c_cdr;
	base[6]= V395;}
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
	V401= Cnil;
	goto T808;}
	V401= VV[177];
	goto T808;
T808:;
	if(base[3]==Cnil){
	V402= Cnil;
	goto T809;}
	V402= VV[178];
	goto T809;
T809:;
	base[7]= list(2,VV[77],listA(3,VV[176],append(V401,V402),base[6]));
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
	{object V403=base[0]->c.c_cdr;
	if(endp(V403))invalid_macro_call();
	{object V404= (V403->c.c_car);
	if(endp(V404))invalid_macro_call();
	base[2]= (V404->c.c_car);
	V404=V404->c.c_cdr;
	if(endp(V404))invalid_macro_call();
	base[3]= (V404->c.c_car);
	V404=V404->c.c_cdr;
	if(!endp(V404))invalid_macro_call();}
	V403=V403->c.c_cdr;
	base[4]= V403;}
	base[5]= VV[179];
	base[6]= VV[180];
	base[7]= VV[181];
	{object V405;
	{object V406;
	object V407= base[2];
	if(V407==Cnil){
	V405= Cnil;
	goto T810;}
	base[8]=V406=MMcons(Cnil,Cnil);
	goto T811;
T811:;
	base[9]= (V407->c.c_car);
	vs_top=(vs_base=base+9)+1;
	L40(base);
	vs_top=sup;
	(V406->c.c_cdr)= vs_base[0];
	while(MMcdr(V406)!=Cnil)V406=MMcdr(V406);
	if((V407=MMcdr(V407))==Cnil){
	base[8]=base[8]->c.c_cdr;
	V405= base[8];
	goto T810;}
	goto T811;}
	goto T810;
T810:;
	V408= list(2,base[5],base[3]);
	V409= make_cons(/* INLINE-ARGS */V408,(V405));
	if(((V405))!=Cnil){
	goto T816;}
	V411= list(2,VV[46],list(2,VV[182],base[5]));
	V410= make_cons(/* INLINE-ARGS */V411,Cnil);
	goto T814;
	goto T816;
T816:;
	V410= Cnil;
	goto T814;
T814:;
	V412 = base[4];
	base[8]= listA(3,VV[125],/* INLINE-ARGS */V409,append(V410,V412));
	vs_top=(vs_base=base+8)+1;
	return;}
}
/*	local entry for function GET-KEY-ARG	*/

static object LI41(V415,V416)

register object V415;register object V416;
{	 VMB37 VMS37 VMV37
	goto TTL;
TTL:;
	goto T819;
T819:;
	if(!(type_of((V416))!=t_cons)){
	goto T821;}
	{object V417 = Cnil;
	VMR37(V417)}
	goto T821;
T821:;
	if(!((CMPcar((V416)))==((V415)))){
	goto T824;}
	{object V418 = CMPcadr((V416));
	VMR37(V418)}
	goto T824;
T824:;
	V416= CMPcddr((V416));
	goto T819;
	return Cnil;
}
/*	local entry for function GET-KEY-ARG1	*/

static object LI42(V421,V422)

register object V421;register object V422;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	goto T830;
T830:;
	if(!(type_of((V422))!=t_cons)){
	goto T832;}
	{object V423 = Cnil;
	VMR38(V423)}
	goto T832;
T832:;
	if(!((CMPcar((V422)))==((V421)))){
	goto T835;}
	{object V424 = CMPcdr((V422));
	VMR38(V424)}
	goto T835;
T835:;
	V422= CMPcddr((V422));
	goto T830;
	return Cnil;
}
/*	function definition for WALK-METHOD-LAMBDA	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	{object V425;
	object V426;
	check_arg(5);
	V425=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	V426=(base[2]);
	base[3]=MMcons(base[3],base[1]);
	base[4]=MMcons(base[4],base[3]);
	vs_top=sup;
	base[5]=MMcons(Cnil,base[4]);
	base[6]=MMcons(Cnil,base[5]);
	base[7]=MMcons(Cnil,base[6]);
	base[8]=make_cclosure_new(LC44,Cnil,base[7],Cdata);
	base[8]=MMcons(base[8],base[7]);
	{object V427;
	base[9]= (V425);
	base[10]= (V426);
	base[11]= (base[8]->c.c_car);
	vs_top=(vs_base=base+9)+3;
	(void) (*Lnk396)();
	vs_top=sup;
	V427= vs_base[0];
	base[9]= (V427);
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
	{register object V428;
	check_arg(1);
	V428=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V428))==t_symbol)){
	goto T850;}
	goto T848;
	goto T850;
T850:;
	if(type_of((V428))==t_cons){
	goto T852;}
	goto T849;
	goto T852;
T852:;
	if((CMPcar((V428)))==(VV[30])){
	goto T854;}
	goto T849;
	goto T854;
T854:;
	if(type_of(CMPcdr((V428)))==t_cons){
	goto T856;}
	goto T849;
	goto T856;
T856:;
	if(type_of(CMPcadr((V428)))==t_symbol){
	goto T858;}
	goto T849;
	goto T858;
T858:;
	if((CMPcddr((V428)))==Cnil){
	goto T848;}
	goto T849;
T849:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T848;
T848:;
	if(((*(LnkLI355))((V428)))!=Cnil){
	goto T860;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T860;
T860:;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T863;}
	base[1]= (*(LnkLI356))((V428));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk397)(Lclptr397);
	return;
	goto T863;
T863:;{object V429;
	V429= (VV[147]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (*(LnkLI356))((V428));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V430= vs_base[0];
	base[1]= ((V429)==(CMPcar(V430))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local entry for function MAKE-PARAMETER-REFERENCES	*/

static object LI48(V436,V437,V438,V439,V440)

object V436;object V437;object V438;object V439;object V440;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	base[0]= (V438);
	{object V441;
	register object V442;
	V441= Cnil;
	V442= Cnil;
	{register object V443;
	register object V444;
	register object V445;
	object V446;
	V443= (V436);
	V444= Cnil;
	V445= (V437);
	V446= Cnil;
	goto T877;
T877:;
	{object V447;
	if(!(((V443))==Cnil)){
	goto T883;}
	goto T871;
	goto T883;
T883:;
	V447= CMPcar((V443));
	V443= CMPcdr((V443));
	V444= (V447);}
	{object V448;
	if(!(((V445))==Cnil)){
	goto T891;}
	goto T871;
	goto T891;
T891:;
	V448= CMPcar((V445));
	V445= CMPcdr((V445));
	V446= (V448);}
	{object V449;
	V449= (((type_of((V444))==t_cons||((V444))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	if(((V449))==Cnil){
	goto T898;}
	goto T878;
	goto T898;
T898:;
	base[1]= CMPcar((V444));
	vs_top=(vs_base=base+1)+1;
	L49(base);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T901;}
	base[1]= VV[201];
	base[2]= (V439);
	base[3]= (V440);
	base[4]= CMPcar((V444));
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk398)();
	vs_top=sup;
	goto T878;
	goto T901;
T901:;
	{object V450;
	V450= CMPcar((V444));
	if(((V441))!=Cnil){
	goto T910;}
	V442= make_cons((V450),Cnil);
	V441= (V442);
	goto T878;
	goto T910;
T910:;
	V452= make_cons((V450),Cnil);
	((V442))->c.c_cdr = /* INLINE-ARGS */V452;
	V451= (V442);
	V442= CMPcdr(V451);}}
	goto T878;
T878:;
	goto T877;}
	goto T871;
T871:;
	{object V453 = (V441);
	VMR41(V453)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-PLIST	*/

static object LI50(V455)

register object V455;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	if(((V455))==((VV[202]->s.s_dbind))){
	goto T917;}
	{object V456;
	object V457;
	V456= (VV[203]->s.s_dbind);
	V457= (VV[202]->s.s_dbind);
	(VV[202]->s.s_dbind)= (V456);
	(VV[203]->s.s_dbind)= (V457);}
	{object V458;
	object V459;
	V458= (VV[204]->s.s_dbind);
	V459= (VV[205]->s.s_dbind);
	(VV[205]->s.s_dbind)= (V458);
	(VV[204]->s.s_dbind)= (V459);}
	{object V460;
	object V461;
	V460= (VV[206]->s.s_dbind);
	V461= (VV[207]->s.s_dbind);
	(VV[207]->s.s_dbind)= (V460);
	(VV[206]->s.s_dbind)= (V461);}
	goto T917;
T917:;
	if(((V455))==((VV[202]->s.s_dbind))){
	goto T940;}
	if(((VV[207]->s.s_dbind))==Cnil){
	goto T940;}
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
	goto T940;
T940:;
	if(((V455))==((VV[202]->s.s_dbind))){
	goto T951;}
	(VV[202]->s.s_dbind)= (V455);
	(VV[207]->s.s_dbind)= Cnil;
	base[0]= (V455);
	base[1]= (VV[208]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	(VV[205]->s.s_dbind)= vs_base[0];
	goto T951;
T951:;
	{object V465 = (VV[205]->s.s_dbind);
	VMR42(V465)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SETF PCL METHOD-FUNCTION-PLIST	*/

static object LI51(V468,V469)

object V468;object V469;
{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	if(((V469))==((VV[202]->s.s_dbind))){
	goto T961;}
	{object V470;
	object V471;
	V470= (VV[203]->s.s_dbind);
	V471= (VV[202]->s.s_dbind);
	(VV[202]->s.s_dbind)= (V470);
	(VV[203]->s.s_dbind)= (V471);}
	{object V472;
	object V473;
	V472= (VV[206]->s.s_dbind);
	V473= (VV[207]->s.s_dbind);
	(VV[207]->s.s_dbind)= (V472);
	(VV[206]->s.s_dbind)= (V473);}
	{object V474;
	object V475;
	V474= (VV[204]->s.s_dbind);
	V475= (VV[205]->s.s_dbind);
	(VV[205]->s.s_dbind)= (V474);
	(VV[204]->s.s_dbind)= (V475);}
	goto T961;
T961:;
	if(((V469))==((VV[202]->s.s_dbind))){
	goto T984;}
	if(((VV[207]->s.s_dbind))==Cnil){
	goto T984;}
	{object V476;
	object V477;
	object V478;
	V476= (VV[202]->s.s_dbind);
	V477= (VV[208]->s.s_dbind);
	V478= (VV[205]->s.s_dbind);
	base[0]= (V476);
	base[1]= (V477);
	base[2]= (V478);
	vs_top=(vs_base=base+0)+3;
	siLhash_set();
	vs_top=sup;}
	goto T984;
T984:;
	(VV[202]->s.s_dbind)= (V469);
	(VV[207]->s.s_dbind)= Ct;
	(VV[205]->s.s_dbind)= (V468);
	{object V479 = (VV[205]->s.s_dbind);
	VMR43(V479)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-GET	*/

static object LI52(object V481,object V480,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB44 VMS44 VMV44
	{object V482;
	object V483;
	object V484;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V482= V481;
	V483= V480;
	narg = narg - 2;
	if (narg <= 0) goto T1000;
	else {
	V484= first;}
	--narg; goto T1001;
	goto T1000;
T1000:;
	V484= Cnil;
	goto T1001;
T1001:;
	base[0]= (*(LnkLI399))((V482));
	base[1]= (V483);
	base[2]= (V484);
	vs_top=(vs_base=base+0)+3;
	Lgetf();
	vs_top=sup;
	{object V485 = vs_base[0];
	VMR44(V485)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SETF PCL METHOD-FUNCTION-GET	*/

static object LI53(V489,V490,V491)

object V489;object V490;object V491;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	{object V495;
	base[0]= (*(LnkLI399))(V490);
	base[1]= V489;
	base[2]= V491;
	vs_top=(vs_base=base+0)+3;
	siLput_f();
	vs_top=sup;
	V495= vs_base[0];
	(void)((*(LnkLI400))((V495),V490));
	{object V497 = V489;
	VMR45(V497)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-PV-TABLE	*/

static object LI54(V499)

object V499;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{object V500 = (VFUN_NARGS=2,(*(LnkLI211))((V499),VV[209]));
	VMR46(V500)}
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-METHOD	*/

static object LI55(V502)

object V502;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	{object V503 = (VFUN_NARGS=2,(*(LnkLI211))((V502),VV[210]));
	VMR47(V503)}
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-NEEDS-NEXT-METHODS-P	*/

static object LI56(V505)

object V505;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{object V506 = (VFUN_NARGS=3,(*(LnkLI211))((V505),VV[57],Ct));
	VMR48(V506)}
	return Cnil;
}
/*	macro definition for METHOD-FUNCTION-CLOSURE-GENERATOR	*/

static void L57()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V507=base[0]->c.c_cdr;
	if(endp(V507))invalid_macro_call();
	base[2]= (V507->c.c_car);
	V507=V507->c.c_cdr;
	if(!endp(V507))invalid_macro_call();}
	base[3]= list(3,VV[211],base[2],VV[212]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function LOAD-DEFMETHOD	*/

static object LI58(object V513,object V512,object V511,object V510,object V509,object V508,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB50 VMS50 VMV50
	{object V514;
	register object V515;
	object V516;
	object V517;
	object V518;
	register object V519;
	object V520;
	va_start(ap,first);
	if(narg <6) too_few_arguments();
	V514= V513;
	V515= V512;
	V516= V511;
	V517= V510;
	V518= V509;
	V519= V508;
	narg = narg - 6;
	if (narg <= 0) goto T1011;
	else {
	V520= first;}
	--narg; goto T1012;
	goto T1011;
T1011:;
	V520= Cnil;
	goto T1012;
T1012:;
	if(!(type_of((V515))==t_cons||((V515))==Cnil)){
	goto T1014;}
	(void)((*(LnkLI348))(CMPcadr((V515))));
	goto T1014;
T1014:;
	base[0]= (V519);
	vs_top=(vs_base=base+0)+1;
	Lcopy_tree();
	vs_top=sup;
	V519= vs_base[0];
	{object V521;{object V522;
	base[0]= (V519);
	base[1]= VV[213];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V522= vs_base[0];
	if(V522==Cnil)goto T1021;
	V521= V522;
	goto T1020;
	goto T1021;
T1021:;}
	V521= (*(LnkLI401))((V515),(V516),(V517));
	goto T1020;
T1020:;
	{object V525;
	base[0]= (V519);
	base[1]= V521;
	base[2]= VV[213];
	vs_top=(vs_base=base+0)+3;
	siLput_f();
	vs_top=sup;
	V525= vs_base[0];
	V519= (V525);}
	(void)((VFUN_NARGS=2,(*(LnkLI402))(VV[37],(V521))));
	{object V526 = (*(LnkLI403))((V514),(V515),(V516),(V517),(V518),(V519),(V520));
	VMR50(V526)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LOAD-DEFMETHOD-INTERNAL	*/

static object LI59(V534,V535,V536,V537,V538,V539,V540)

object V534;register object V535;object V536;object V537;object V538;register object V539;object V540;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	if(!(type_of((V535))==t_cons||((V535))==Cnil)){
	goto T1033;}
	(void)((*(LnkLI348))(CMPcadr((V535))));
	goto T1033;
T1033:;
	if(((V540))==Cnil){
	goto T1036;}
	{object V544;
	base[1]= (V539);
	base[2]= VV[28];
	base[3]= Cnil;
	vs_top=(vs_base=base+1)+3;
	Lgetf();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= V540;
	base[2]= VV[29];
	vs_top=(vs_base=base+0)+3;
	siLput_f();
	vs_top=sup;
	V544= vs_base[0];
	{object V545;
	base[0]= (V539);
	base[1]= (V544);
	base[2]= VV[28];
	vs_top=(vs_base=base+0)+3;
	siLput_f();
	vs_top=sup;
	V545= vs_base[0];
	V539= (V545);}}
	goto T1036;
T1036:;
	{object V546;
	base[0]=VV[404]->s.s_gfdef;
	base[1]= (V535);
	base[2]= (V536);
	base[3]= (V537);
	base[4]= (V538);
	base[5]= VV[16];
	V548= make_cons((V537),Cnil);
	V549= listA(3,VV[7],(V535),append((V536),/* INLINE-ARGS */V548));
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V550= vs_base[0];
	base[6]= list(2,/* INLINE-ARGS */V549,V550);
	{object V547;
	V547= (V539);
	 vs_top=base+7;
	 while(V547!=Cnil)
	 {vs_push((V547)->c.c_car);V547=(V547)->c.c_cdr;}
	vs_base=base+1;}
	funcall(base[0]);
	vs_top=sup;
	V546= vs_base[0];
	if(((V534))==(VV[20])){
	goto T1062;}
	V551= (VFUN_NARGS=2,(*(LnkLI290))((V534),Cnil));
	V552= (*(LnkLI363))((V546));
	if((/* INLINE-ARGS */V551)==(/* INLINE-ARGS */V552)){
	goto T1062;}
	base[0]= (VV[214]->s.s_dbind);
	base[1]= VV[215];
	base[2]= (V536);
	base[3]= (V537);
	base[4]= (V535);
	base[5]= (V534);
	base[7]= (*(LnkLI363))((V546));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+0)+7;
	Lformat();
	vs_top=sup;
	goto T1062;
T1062:;
	{object V553 = (V546);
	VMR51(V553)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-METHOD-SPEC	*/

static object LI60(V557,V558,V559)

object V557;object V558;object V559;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	V560= make_cons((V559),Cnil);
	{object V561 = listA(3,VV[37],(V557),append((V558),/* INLINE-ARGS */V560));
	VMR52(V561)}
	return Cnil;
}
/*	local entry for function INITIALIZE-METHOD-FUNCTION	*/

static object LI61(object V562,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB53 VMS53 VMV53
	{register object V563;
	object V564;
	object V565;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V563= V562;
	narg = narg - 1;
	if (narg <= 0) goto T1075;
	else {
	V564= first;}
	if (--narg <= 0) goto T1076;
	else {
	V565= va_arg(ap,object);}
	--narg; goto T1077;
	goto T1075;
T1075:;
	V564= Cnil;
	goto T1076;
T1076:;
	V565= Cnil;
	goto T1077;
T1077:;
	{register object V566;
	register object V567;
	object V568;
	register object V569;
	base[5]= (V563);
	base[6]= VV[36];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	base[0]= vs_base[0];
	base[5]= (V563);
	base[6]= VV[213];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V566= vs_base[0];
	base[5]= (V563);
	base[6]= VV[28];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V567= vs_base[0];
	base[5]= (V567);
	base[6]= VV[29];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V568= vs_base[0];
	V569= Cnil;
	base[5]= (V563);
	base[6]= VV[216];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	base[4]= vs_base[0];
	if(((V566))==Cnil){
	goto T1096;}
	if((base[0])==Cnil){
	goto T1099;}
	base[5]= base[0];
	base[6]= (V566);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk346)();
	vs_top=sup;
	base[0]= vs_base[0];
	goto T1099;
T1099:;
	if((base[4])==Cnil){
	goto T1096;}
	{object V570;{object V572;
	{object V573 =(CMPcar((V566)))->s.s_plist;
	 object ind= VV[217];
	while(V573!=Cnil){
	if(V573->c.c_car==ind){
	V572= (V573->c.c_cdr->c.c_car);
	goto T1110;
	}else V573=V573->c.c_cdr->c.c_cdr;}
	V572= Cnil;}
	goto T1110;
T1110:;
	if(V572==Cnil)goto T1109;
	V571= V572;
	goto T1108;
	goto T1109;
T1109:;}
	V574= CMPcar((V566));
	base[6]= Cnil;
	base[7]= VV[218];
	base[8]= CMPcar((V566));
	vs_top=(vs_base=base+6)+3;
	Lformat();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (VV[219]->s.s_dbind);
	vs_top=(vs_base=base+5)+2;
	Lintern();
	vs_top=sup;
	V575= vs_base[0];
	V571= sputprop(/* INLINE-ARGS */V574,VV[217],V575);
	goto T1108;
T1108:;
	V570= make_cons(V571,CMPcdr((V566)));
	base[5]= base[4];
	base[6]= (V570);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk346)();
	vs_top=sup;
	if((base[0])!=Cnil){
	goto T1096;}
	base[5]= VV[220];
	base[6]= (V570);
	vs_top=(vs_base=base+5)+2;
	L62(base);
	vs_top=sup;}
	goto T1096;
T1096:;
	if(((V567))==Cnil){
	goto T1125;}
	{object V576;
	object V577;
	base[5]= (V567);
	base[6]= VV[59];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V576= vs_base[0];
	base[5]= (V567);
	base[6]= VV[60];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V577= vs_base[0];
	if(((V576))!=Cnil){
	goto T1134;}
	if(((V577))==Cnil){
	goto T1127;}
	goto T1134;
T1134:;
	V569= (VFUN_NARGS=4,(*(LnkLI405))(VV[59],(V576),VV[60],(V577)));
	if(((V569))==Cnil){
	goto T1140;}
	base[5]= (V568);
	base[6]= (V569);
	vs_top=(vs_base=base+5)+2;
	Lset();
	vs_top=sup;
	goto T1140;
T1140:;
	base[5]= VV[209];
	base[6]= (V569);
	vs_top=(vs_base=base+5)+2;
	L62(base);
	vs_top=sup;}
	goto T1127;
T1127:;
	goto T1149;
T1149:;
	if(((V567))!=Cnil){
	goto T1151;}
	goto T1147;
	goto T1151;
T1151:;
	{register object V578;
	V578= CMPcar((V567));
	V567= CMPcdr((V567));
	base[5]= (V578);}
	{register object V579;
	V579= CMPcar((V567));
	V567= CMPcdr((V567));
	base[6]= (V579);}
	vs_top=(vs_base=base+5)+2;
	L62(base);
	vs_top=sup;
	goto T1149;
	goto T1147;
T1147:;
	if(((V565))==Cnil){
	goto T1163;}
	base[5]= VV[210];
	base[6]= (V565);
	vs_top=(vs_base=base+5)+2;
	L62(base);
	vs_top=sup;
	goto T1163;
T1163:;
	if(((V564))==Cnil){
	goto T1169;}
	if(base[0]!=Cnil){
	{object V580 = base[0];
	VMR53(V580)}}
	{object V581 = (*(LnkLI406))(base[4]);
	VMR53(V581)}
	goto T1169;
T1169:;
	{object V582 = Cnil;
	VMR53(V582)}
	goto T1125;
T1125:;
	{object V583 = Cnil;
	VMR53(V583)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for ANALYZE-LAMBDA-LIST	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM54; VC54
	vs_check;
	{object V584;
	check_arg(1);
	V584=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V585;
	register object V586;
	object V587;
	object V588;
	object V589;
	register object V590;
	register object V591;
	register object V592;
	V585= small_fixnum(0);
	V586= small_fixnum(0);
	V587= Cnil;
	V588= Cnil;
	V589= Cnil;
	V590= Cnil;
	V591= Cnil;
	V592= VV[181];
	{register object V593;
	register object V594;
	V593= (V584);
	V594= CMPcar((V593));
	goto T1175;
T1175:;
	if(!(((V593))==Cnil)){
	goto T1176;}
	goto T1171;
	goto T1176;
T1176:;
	{register object x= (V594),V595= VV[183];
	while(V595!=Cnil)
	if(x==(V595->c.c_car)){
	goto T1183;
	}else V595=V595->c.c_cdr;
	goto T1182;}
	goto T1183;
T1183:;
	{object V596= (V594);
	if((V596!= VV[407]))goto T1184;
	V592= VV[184];
	goto T1180;
	goto T1184;
T1184:;
	if((V596!= VV[62]))goto T1186;
	V587= Ct;
	V592= VV[185];
	goto T1180;
	goto T1186;
T1186:;
	if((V596!= VV[63]))goto T1190;
	V589= Ct;
	goto T1180;
	goto T1190;
T1190:;
	if((V596!= VV[170]))goto T1192;
	V588= Ct;
	V592= VV[186];
	goto T1180;
	goto T1192;
T1192:;
	if((V596!= VV[56]))goto T1196;
	goto T1171;
	goto T1196;
T1196:;
	base[2]= VV[221];
	base[3]= (V594);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	vs_top=sup;
	goto T1180;}
	goto T1182;
T1182:;
	{object V597= (V592);
	if((V597!= VV[181]))goto T1199;
	V585= number_plus((V585),small_fixnum(1));
	goto T1180;
	goto T1199;
T1199:;
	if((V597!= VV[184]))goto T1201;
	V586= number_plus((V586),small_fixnum(1));
	goto T1180;
	goto T1201;
T1201:;
	if((V597!= VV[185]))goto T1203;
	{object V598;
	base[3]= (V594);
	vs_top=(vs_base=base+3)+1;
	L64(base);
	vs_top=sup;
	V598= vs_base[0];
	V590= make_cons((V598),(V590));}
	V591= make_cons(V594,(V591));
	goto T1180;
	goto T1203;
T1203:;
	if((V597!= VV[186]))goto T1209;
	goto T1180;
	goto T1209;
T1209:;
	FEerror("The ECASE key value ~s is illegal.",1,V597);
	goto T1180;}
	goto T1180;
T1180:;
	V593= CMPcdr((V593));
	V594= CMPcar((V593));
	goto T1175;}
	goto T1171;
T1171:;
	base[1]= (V585);
	base[2]= (V586);
	base[3]= (V587);
	base[4]= (V588);
	base[5]= (V589);
	base[6]= reverse((V590));
	base[7]= reverse((V591));
	vs_top=(vs_base=base+1)+7;
	return;}
	}
}
/*	local entry for function KEYWORD-SPEC-NAME	*/

static object LI65(V601)

object V601;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{object V602;
	if(!(type_of((V601))!=t_cons)){
	goto T1224;}
	V602= (V601);
	goto T1222;
	goto T1224;
T1224:;
	V602= CMPcar((V601));
	goto T1222;
T1222:;
	if(!(type_of((V602))!=t_cons)){
	goto T1227;}
	base[0]= symbol_name((V602));
	base[2]= VV[222];
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V603 = vs_base[0];
	VMR55(V603)}
	goto T1227;
T1227:;
	{object V604 = CMPcar((V602));
	VMR55(V604)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FTYPE-DECLARATION-FROM-LAMBDA-LIST	*/

static object LI66(V606)

object V606;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{object V607;
	object V608;
	object V609;
	object V610;
	object V611;
	object V612;
	object V613;
	base[0]= (V606);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk408)();
	if(vs_base>=vs_top){vs_top=sup;goto T1234;}
	V607= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1235;}
	V608= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1236;}
	V609= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1237;}
	V610= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1238;}
	V611= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1239;}
	V612= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1240;}
	V613= vs_base[0];
	vs_top=sup;
	goto T1241;
	goto T1234;
T1234:;
	V607= Cnil;
	goto T1235;
T1235:;
	V608= Cnil;
	goto T1236;
T1236:;
	V609= Cnil;
	goto T1237;
T1237:;
	V610= Cnil;
	goto T1238;
T1238:;
	V611= Cnil;
	goto T1239;
T1239:;
	V612= Cnil;
	goto T1240;
T1240:;
	V613= Cnil;
	goto T1241;
T1241:;
	{object V614;
	{object V615;
	object V616= (V612);
	if(V616==Cnil){
	V614= Cnil;
	goto T1242;}
	base[1]=V615=MMcons(Cnil,Cnil);
	goto T1243;
T1243:;
	(V615->c.c_car)= (*(LnkLI409))((V616->c.c_car));
	if((V616=MMcdr(V616))==Cnil){
	V614= base[1];
	goto T1242;}
	V615=MMcdr(V615)=MMcons(Cnil,Cnil);
	goto T1243;}
	goto T1242;
T1242:;
	base[2]= (V607);
	base[3]= VV[223];
	base[4]= Ct;
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	base[1]= vs_base[0];
	if(!(number_compare(small_fixnum(0),(V608))<0)){
	goto T1252;}
	base[3]= (V608);
	base[4]= VV[223];
	base[5]= Ct;
	vs_top=(vs_base=base+3)+3;
	Lmake_list();
	vs_top=sup;
	V618= vs_base[0];
	base[2]= append(VV[224],V618);
	goto T1250;
	goto T1252;
T1252:;
	base[2]= Cnil;
	goto T1250;
T1250:;
	if(((V610))==Cnil){
	goto T1260;}
	base[3]= VV[225];
	goto T1258;
	goto T1260;
T1260:;
	base[3]= Cnil;
	goto T1258;
T1258:;
	if(((V609))==Cnil){
	goto T1264;}
	base[5]= VV[226];
	{object V619;
	object V620= (V614);
	if(V620==Cnil){
	base[6]= Cnil;
	goto T1267;}
	base[7]=V619=MMcons(Cnil,Cnil);
	goto T1268;
T1268:;
	(V619->c.c_car)= list(2,(V620->c.c_car),Ct);
	if((V620=MMcdr(V620))==Cnil){
	base[6]= base[7];
	goto T1267;}
	V619=MMcdr(V619)=MMcons(Cnil,Cnil);
	goto T1268;}
	goto T1267;
T1267:;
	if(((V611))==Cnil){
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
	V617= vs_base[0];
	{object V622 = list(3,VV[34],V617,VV[228]);
	VMR56(V622)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PROCLAIM-DEFGENERIC	*/

static object LI67(V625,V626)

register object V625;object V626;
{	 VMB57 VMS57 VMV57
	goto TTL;
TTL:;
	if(!(type_of((V625))==t_cons)){
	goto T1274;}
	V625= (*(LnkLI410))(CMPcadr((V625)));
	goto T1274;
T1274:;
	{object V627 = sputprop((V625),VV[229],Ct);
	VMR57(V627)}
	return Cnil;
}
/*	function definition for ENSURE-GENERIC-FUNCTION	*/

static void L68()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_check;
	{register object V628;
	object V629;
	object V630;
	if(vs_top-vs_base<1) too_few_arguments();
	parse_key(vs_base+1,TRUE,TRUE,1,VV[295]);
	V628=(base[0]);
	vs_top=sup;
	V629=(base[1]);
	V630=(base[2]);
	{object V631;
	if(((*(LnkLI355))((V628)))!=Cnil){
	goto T1279;}
	V631= Cnil;
	goto T1278;
	goto T1279;
T1279:;
	V631= (*(LnkLI356))((V628));
	goto T1278;
T1278:;
	if(((V631))==Cnil){
	goto T1282;}
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1282;}
	base[4]= (V631);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk357)(Lclptr357);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1282;}
	base[4]= (*(LnkLI411))((V628));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1282;
T1282:;
	base[4]=VV[412]->s.s_gfdef;
	base[5]= (V631);
	base[6]= (V628);
	{object V632;
	V632= (V629);
	 vs_top=base+7;
	 while(V632!=Cnil)
	 {vs_push((V632)->c.c_car);V632=(V632)->c.c_cdr;}
	vs_base=base+5;}
	funcall(base[4]);
	return;}
	}
}
/*	local entry for function GENERIC-CLOBBERS-FUNCTION	*/

static object LI69(V634)

object V634;
{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	base[0]= VV[230];
	base[1]= (V634);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V635 = vs_base[0];
	VMR59(V635)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-GF-P	*/

static object LI70(V637)

register object V637;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;{object V638;
	V638= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V637);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V639= vs_base[0];
	if((V638)==(CMPcar(V639))){
	goto T1294;}}
	{object V640 = Cnil;
	VMR60(V640)}
	goto T1294;
T1294:;
	if(type_of(V637)==t_structure){
	goto T1303;}
	goto T1301;
	goto T1303;
T1303:;
	if(!(((V637)->str.str_def)==(VV[231]))){
	goto T1301;}
	V641= STREF(object,(V637),4);
	goto T1299;
	goto T1301;
T1301:;{object V643;
	V643= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V637);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V644= vs_base[0];
	if(!((V643)==(CMPcar(V644)))){
	goto T1306;}}
	V641= CMPcar(((V637))->cc.cc_turbo[12]);
	goto T1299;
	goto T1306;
T1306:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V641= vs_base[0];
	goto T1299;
T1299:;
	V645 = (VV[232]->s.s_dbind);
	{object V646 = (((V641)->v.v_self[fix(V645)])==((VV[132]->s.s_dbind))?Ct:Cnil);
	VMR60(V646)}
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
	{object V647=base[0]->c.c_cdr;
	if(endp(V647))invalid_macro_call();
	base[2]= (V647->c.c_car);
	V647=V647->c.c_cdr;
	if(!endp(V647))invalid_macro_call();}
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
	{object V648=base[0]->c.c_cdr;
	if(endp(V648))invalid_macro_call();
	base[2]= (V648->c.c_car);
	V648=V648->c.c_cdr;
	if(!endp(V648))invalid_macro_call();}
	base[3]= list(3,VV[233],list(2,VV[234],base[2]),VV[236]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function __si::MAKE-ARG-INFO	*/

static object LI73(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB63 VMS63 VMV63
	{object V649;
	object V650;
	object V651;
	object V652;
	object V653;
	object V654;
	object V655;
	object V656;
	object V657;
	object V658;
	object V659;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI73key,first,ap);
	V649=(Vcs[0]);
	V650=(Vcs[1]);
	V651=(Vcs[2]);
	V652=(Vcs[3]);
	V653=(Vcs[4]);
	V654=(Vcs[5]);
	V655=(Vcs[6]);
	V656=(Vcs[7]);
	V657=(Vcs[8]);
	if(Vcs[9]==0){
	V658= Ct;
	}else{
	V658=(Vcs[9]);}
	V659=(Vcs[10]);
	base[0]= VV[238];
	base[1]= (V649);
	base[2]= (V650);
	base[3]= (V651);
	base[4]= (V652);
	base[5]= (V653);
	base[6]= (V654);
	base[7]= (V655);
	base[8]= (V656);
	base[9]= (V657);
	base[10]= (V658);
	base[11]= (V659);
	vs_top=(vs_base=base+0)+12;
	siLmake_structure();
	vs_top=sup;
	{object V660 = vs_base[0];
	VMR63(V660)}
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
	{object V672 = vs_base[0];
	VMR64(V672)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ARG-INFO-VALID-P	*/

static object LI75(V674)

object V674;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	{object V675 = ((((STREF(object,(V674),12))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR65(V675)}
	return Cnil;
}
/*	local entry for function ARG-INFO-APPLYP	*/

static object LI76(V677)

object V677;
{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	if(!((fix(STREF(object,(V677),12)))>0)){
	goto T1337;}
	{object V678 = Ct;
	VMR66(V678)}
	goto T1337;
T1337:;
	{object V679 = STREF(object,(V677),16);
	VMR66(V679)}
	return Cnil;
}
/*	local entry for function ARG-INFO-NUMBER-REQUIRED	*/

static object LI77(V681)

object V681;
{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	{long V682 = (long)length(STREF(object,(V681),8));
	VMR67((object)V682)}
}
/*	local entry for function ARG-INFO-NKEYS	*/

static object LI78(V684)

object V684;
{	 VMB68 VMS68 VMV68
	goto TTL;
TTL:;
	base[0]= VV[424];
	base[1]= STREF(object,(V684),8);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk425)();
	vs_top=sup;
	{object V685 = vs_base[0];
	VMR68(V685)}
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
	{object V686=base[0]->c.c_cdr;
	if(endp(V686))invalid_macro_call();
	base[2]= (V686->c.c_car);
	V686=V686->c.c_cdr;
	if(endp(V686))invalid_macro_call();
	base[3]= (V686->c.c_car);
	V686=V686->c.c_cdr;
	if(!endp(V686))invalid_macro_call();}
	{object V687;
	base[4]= VV[239];
	vs_top=(vs_base=base+4)+1;
	Lgensym();
	vs_top=sup;
	V687= vs_base[0];
	V688= list(2,(V687),base[3]);
	V689= make_cons(/* INLINE-ARGS */V688,Cnil);
	V690= list(3,VV[241],base[2],(V687));
	base[4]= list(3,VV[96],/* INLINE-ARGS */V689,list(3,VV[240],/* INLINE-ARGS */V690,list(3,VV[30],base[2],(V687))));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	local entry for function SET-ARG-INFO	*/

static object LI80(object V691,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB70 VMS70 VMV70
	{register object V692;
	object V693;
	register object V694;
	register object V695;
	object V696;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V692= V691;
	narg= narg - 1;
	{
	parse_key_new_new(narg,Vcs +1,(struct key *)(void *)&LI80key,first,ap);
	V693=(Vcs[1]);
	if(Vcs[2]==0){
	V694= Cnil;
	V695= Cnil;
	}else{
	V694=(Vcs[2]);
	V695= Ct;}
	V696=(Vcs[3]);
	{register object V697;
	object V698;
	object V699;
	object V700;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1346;}
	base[4]= (V692);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	V697= vs_base[0];
	goto T1344;
	goto T1346;
T1346:;
	if(type_of(V692)==t_structure){
	goto T1353;}
	goto T1351;
	goto T1353;
T1353:;
	if(!(((V692)->str.str_def)==(VV[242]))){
	goto T1351;}
	V701= STREF(object,(V692),4);
	goto T1349;
	goto T1351;
T1351:;{object V703;
	V703= (VV[147]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V692);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V704= vs_base[0];
	if(!((V703)==(CMPcar(V704)))){
	goto T1356;}}
	V701= CMPcar(((V692))->cc.cc_turbo[12]);
	goto T1349;
	goto T1356;
T1356:;
	base[4]= VV[148];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V701= vs_base[0];
	goto T1349;
T1349:;
	V705 = (VV[236]->s.s_dbind);
	V697= (V701)->v.v_self[fix(V705)];
	goto T1344;
T1344:;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1364;}
	base[4]= (V692);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk426)(Lclptr426);
	vs_top=sup;
	V698= vs_base[0];
	goto T1362;
	goto T1364;
T1364:;
	if(type_of(V692)==t_structure){
	goto T1371;}
	goto T1369;
	goto T1371;
T1371:;
	if(!(((V692)->str.str_def)==(VV[243]))){
	goto T1369;}
	V706= STREF(object,(V692),4);
	goto T1367;
	goto T1369;
T1369:;{object V708;
	V708= (VV[147]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V692);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V709= vs_base[0];
	if(!((V708)==(CMPcar(V709)))){
	goto T1374;}}
	V706= CMPcar(((V692))->cc.cc_turbo[12]);
	goto T1367;
	goto T1374;
T1374:;
	base[4]= VV[148];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V706= vs_base[0];
	goto T1367;
T1367:;
	V710 = (VV[235]->s.s_dbind);
	V698= (V706)->v.v_self[fix(V710)];
	goto T1362;
T1362:;
	{object V711= STREF(object,(V697),12);
	V699= (type_of(V711)==t_fixnum||type_of(V711)==t_bignum?Ct:Cnil);}
	if((V693)==Cnil){
	V700= Cnil;
	goto T1381;}
	V700= ((CMPcdr((V698)))==Cnil?Ct:Cnil);
	goto T1381;
T1381:;
	if(((V695))!=Cnil){
	goto T1382;}
	if(((V698))==Cnil){
	goto T1382;}
	V694= (*(LnkLI427))((V692));
	goto T1382;
T1382:;
	if(((V695))!=Cnil){
	goto T1389;}
	if(((V700))==Cnil){
	goto T1388;}
	if(!((STREF(object,(V697),0))==(VV[237]))){
	goto T1388;}
	goto T1389;
T1389:;
	{object V712;
	object V713;
	object V714;
	object V715;
	object V716;
	object V717;
	base[4]= (V694);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk408)();
	if(vs_base>=vs_top){vs_top=sup;goto T1397;}
	V712= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1398;}
	V713= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1399;}
	V714= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1400;}
	V715= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1401;}
	V716= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1402;}
	V717= vs_base[0];
	vs_top=sup;
	goto T1403;
	goto T1397;
T1397:;
	V712= Cnil;
	goto T1398;
T1398:;
	V713= Cnil;
	goto T1399;
T1399:;
	V714= Cnil;
	goto T1400;
T1400:;
	V715= Cnil;
	goto T1401;
T1401:;
	V716= Cnil;
	goto T1402;
T1402:;
	V717= Cnil;
	goto T1403;
T1403:;
	if(((V698))==Cnil){
	goto T1404;}
	if(((V700))!=Cnil){
	goto T1404;}
	{object V718;
	object V719;
	object V720;
	V718= CMPmake_fixnum((long)(*(LnkLI394))((V697)));
	V719= STREF(object,(V697),12);
	V720= STREF(object,(V697),16);
	if(!(number_compare((V712),(V718))==0)){
	goto T1412;}
	if(!(number_compare((V713),(V719))==0)){
	goto T1412;}
	if((V714)!=Cnil){
	V721= (V714);
	goto T1418;}
	V721= (V715);
	goto T1418;
T1418:;
	V722 = (V720);
	if((V721)==(V722)){
	goto T1404;}
	goto T1412;
T1412:;
	base[4]= VV[244];
	base[5]= (V694);
	base[6]= (V692);
	vs_top=(vs_base=base+4)+3;
	Lerror();
	vs_top=sup;}
	goto T1404;
T1404:;
	if(((V695))==Cnil){
	goto T1422;}
	if(equal(STREF(object,(V697),0),V694)){
	goto T1422;}
	V724 = (V697);
	V725 = V694;
	V726= Ct;
	STSET(object,V724,0, V725);
	(void)(V725);
	goto T1422;
T1422:;
	if(((V695))!=Cnil){
	goto T1428;}
	if(((V696))!=Cnil){
	goto T1428;}
	if((STREF(object,(V697),4))!=Cnil){
	goto T1427;}
	goto T1428;
T1428:;
	{object V727;
	V727= (*(LnkLI428))((V694),(V712),(V696));
	if(equal(STREF(object,(V697),4),(V727))){
	goto T1427;}
	V728 = (V697);
	V729 = (V727);
	V730= Ct;
	STSET(object,V728,4, V729);
	(void)(V729);}
	goto T1427;
T1427:;
	{object V731;
	base[4]= (V712);
	vs_top=(vs_base=base+4)+1;
	Lmake_list();
	vs_top=sup;
	V731= vs_base[0];
	if(equal(STREF(object,(V697),8),(V731))){
	goto T1437;}
	V732 = (V697);
	V733 = (V731);
	V734= Ct;
	STSET(object,V732,8, V733);
	(void)(V733);}
	goto T1437;
T1437:;
	if(equal(STREF(object,(V697),12),V713)){
	goto T1442;}
	V736 = (V697);
	V737 = V713;
	V738= Ct;
	STSET(object,V736,12, V737);
	(void)(V737);
	goto T1442;
T1442:;
	{object V739;
	if((V714)!=Cnil){
	V740= (V714);
	goto T1447;}
	V740= (V715);
	goto T1447;
T1447:;
	V739= ((((V740)==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	if(equal(STREF(object,(V697),16),(V739))){
	goto T1445;}
	V741 = (V697);
	V742 = (V739);
	V743= Ct;
	STSET(object,V741,16, V742);
	(void)(V742);}
	goto T1445;
T1445:;
	{object V744;
	if(((V695))==Cnil){
	goto T1452;}
	if(((V716))==Cnil){
	goto T1455;}
	V744= Ct;
	goto T1450;
	goto T1455;
T1455:;
	V744= (V717);
	goto T1450;
	goto T1452;
T1452:;
	V744= STREF(object,(V697),16);
	goto T1450;
T1450:;
	if(equal(STREF(object,(V697),20),(V744))){
	goto T1388;}
	V745 = (V697);
	V746 = (V744);
	V747= Ct;
	STSET(object,V745,20, V746);
	(void)(V746);}}
	goto T1388;
T1388:;
	if(((V693))==Cnil){
	goto T1459;}
	base[4]= (V692);
	base[5]= (V697);
	base[6]= (V693);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk429)();
	vs_top=sup;
	goto T1459;
T1459:;
	(void)((*(LnkLI430))((V692),(V697),(V693),(V698),(V699),(V700)));
	{object V748 = (V697);
	VMR70(V748)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for CHECK-METHOD-ARG-INFO	*/

static void L81()
{register object *base=vs_base;
	register object *sup=base+VM71; VC71
	vs_check;
	{register object V749;
	check_arg(3);
	V749=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V750;
	object V751;
	object V752;
	object V753;
	object V754;
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
	V750= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1473;}
	V751= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1474;}
	V752= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1475;}
	V753= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1476;}
	V754= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1477;}
	base[3]=MMcons(vs_base[0],Cnil);
	vs_top=sup;
	goto T1478;
	goto T1472;
T1472:;
	V750= Cnil;
	goto T1473;
T1473:;
	V751= Cnil;
	goto T1474;
T1474:;
	V752= Cnil;
	goto T1475;
T1475:;
	V753= Cnil;
	goto T1476;
T1476:;
	V754= Cnil;
	goto T1477;
T1477:;
	base[3]=MMcons(Cnil,Cnil);
	goto T1478;
T1478:;
	{object V755;
	object V756;
	object V757;
	object V758;
	V755= CMPmake_fixnum((long)(*(LnkLI394))((V749)));
	V756= STREF(object,(V749),12);
	V757= STREF(object,(V749),16);
	V758= STREF(object,(V749),20);
	if(number_compare((V750),(V755))==0){
	goto T1483;}
	base[4]= VV[245];
	base[6]= (V750);
	base[7]= (V755);
	vs_top=(vs_base=base+6)+2;
	L83(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L82(base);
	vs_top=sup;
	goto T1483;
T1483:;
	if(number_compare((V751),(V756))==0){
	goto T1490;}
	base[4]= VV[246];
	base[6]= (V751);
	base[7]= (V756);
	vs_top=(vs_base=base+6)+2;
	L83(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L82(base);
	vs_top=sup;
	goto T1490;
T1490:;
	if((V752)!=Cnil){
	V759= (V752);
	goto T1500;}
	V759= (V753);
	goto T1500;
T1500:;
	V760 = (V757);
	if((V759)==(V760)){
	goto T1497;}
	base[4]= VV[247];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T1497;
T1497:;
	if(!(type_of((V758))==t_cons)){
	goto T1503;}
	if(((V753))==Cnil){
	goto T1507;}
	if(((V752))==Cnil){
	goto T1506;}
	goto T1507;
T1507:;
	if(((V754))!=Cnil){
	goto T1506;}
	base[4]= 
	make_cclosure_new(LC133,Cnil,base[3],Cdata);
	base[5]= (V758);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk366)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1506;}
	base[4]= VV[248];
	base[5]= (V758);
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

static object LI84(V767,V768,V769,V770,V771,V772)

object V767;object V768;object V769;object V770;object V771;object V772;
{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V773;
	object V774;
	object V775;
	register object V776;
	if((V770)==Cnil){
	V773= Cnil;
	goto T1519;}
	if((CMPcdr((V770)))!=Cnil){
	goto T1520;}
	V773= Cnil;
	goto T1519;
	goto T1520;
T1520:;
	V773= (V769);
	goto T1519;
T1519:;
	V774= CMPmake_fixnum((long)length(STREF(object,(V768),8)));
	if(((V773))==Cnil){
	goto T1525;}
	V775= STREF(object,(V768),8);
	goto T1523;
	goto T1525;
T1525:;
	base[4]= (V774);
	vs_top=(vs_base=base+4)+1;
	Lmake_list();
	vs_top=sup;
	V775= vs_base[0];
	goto T1523;
T1523:;
	if(((V773))==Cnil){
	goto T1530;}
	V776= STREF(object,(V768),24);
	goto T1528;
	goto T1530;
T1530:;
	V776= Cnil;
	goto T1528;
T1528:;
	if(((*(LnkLI432))((V768)))==Cnil){
	goto T1518;}
	{register object V777;
	register object V778;
	if(((V769))==Cnil){
	goto T1537;}
	V777= make_cons((V769),Cnil);
	goto T1535;
	goto T1537;
T1537:;
	V777= (V770);
	goto T1535;
T1535:;
	V778= CMPcar((V777));
	goto T1541;
T1541:;
	if(!(((V777))==Cnil)){
	goto T1542;}
	goto T1534;
	goto T1542;
T1542:;
	{object V779;
	register object V780;
	register object V781;
	if(((VV[17]->s.s_dbind))==(VV[18])){
	goto T1548;}
	if(type_of((V778))==t_cons){
	goto T1549;}
	goto T1548;
T1548:;
	base[9]= (V778);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk433)(Lclptr433);
	vs_top=sup;
	V779= vs_base[0];
	goto T1547;
	goto T1549;
T1549:;
	V779= (VFUN_NARGS=2,(*(LnkLI434))((V778),Ct));
	goto T1547;
T1547:;
	if(((VV[17]->s.s_dbind))==(VV[18])){
	goto T1555;}
	if(type_of((V778))==t_cons){
	goto T1556;}
	goto T1555;
T1555:;
	V780= (*(LnkLI363))((V778));
	goto T1554;
	goto T1556;
T1556:;
	V780= (*(LnkLI435))((V778));
	goto T1554;
T1554:;
	if(((V780))==Cnil){
	goto T1562;}
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1561;}
	base[9]= (V767);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk436)(Lclptr436);
	vs_top=sup;
	V782= vs_base[0];
	V783 = (VV[252]->s.s_dbind);
	if(!((V782)==(V783))){
	goto T1562;}
	goto T1561;
T1561:;
	if(!(((V780))==((VV[253]->s.s_dbind)))){
	goto T1571;}
	V781= VV[254];
	goto T1560;
	goto T1571;
T1571:;
	if(!(((V780))==((VV[255]->s.s_dbind)))){
	goto T1574;}
	V781= VV[256];
	goto T1560;
	goto T1574;
T1574:;
	if(!(((V780))==((VV[257]->s.s_dbind)))){
	goto T1577;}
	V781= VV[258];
	goto T1560;
	goto T1577;
T1577:;
	V781= Cnil;
	goto T1560;
	goto T1562;
T1562:;
	V781= Cnil;
	goto T1560;
T1560:;
	base[10]=VV[437]->s.s_gfdef;
	{object V784;
	object V785= (V775);
	object V786= (V779);
	if(V785==Cnil||V786==Cnil){
	V775= Cnil;
	goto T1580;}
	base[9]=V784=MMcons(Cnil,Cnil);
	goto T1581;
T1581:;
	base[11]= (V785->c.c_car);
	base[12]= (V786->c.c_car);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk437)();
	vs_top=sup;
	(V784->c.c_car)= vs_base[0];
	if((V785=MMcdr(V785))==Cnil||(V786=MMcdr(V786))==Cnil){
	V775= base[9];
	goto T1580;}
	V784=MMcdr(V784)=MMcons(Cnil,Cnil);
	goto T1581;}
	goto T1580;
T1580:;
	if(((V776))!=Cnil){
	goto T1587;}
	V776= (V781);
	goto T1585;
	goto T1587;
T1587:;
	if(!(((V776))==((V781)))){
	goto T1590;}
	goto T1585;
	goto T1590;
T1590:;
	V776= Cnil;
	goto T1585;
T1585:;}
	V777= CMPcdr((V777));
	V778= CMPcar((V777));
	goto T1541;}
	goto T1534;
T1534:;
	if(equal(STREF(object,(V768),8),V775)){
	goto T1597;}
	V788 = (V768);
	V789 = V775;
	V790= Ct;
	STSET(object,V788,8, V789);
	(void)(V789);
	goto T1597;
T1597:;
	if(equal(STREF(object,(V768),24),V776)){
	goto T1518;}
	V792 = (V768);
	V793 = V776;
	V794= Ct;
	STSET(object,V792,24, V793);
	(void)(V793);}
	goto T1518;
T1518:;
	if(((V771))==Cnil){
	goto T1603;}
	if(((V772))==Cnil){
	goto T1602;}
	goto T1603;
T1603:;
	{object V795;
	object V796;
	if(((*(LnkLI438))((V767)))==Cnil){
	goto T1609;}
	base[0]= Ct;
	base[1]= Ct;
	vs_top=(vs_base=base+0)+2;
	goto T1607;
	goto T1609;
T1609:;
	base[0]= (V767);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk439)();
	goto T1607;
T1607:;
	if(vs_base>=vs_top){vs_top=sup;goto T1614;}
	V795= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1615;}
	V796= vs_base[0];
	vs_top=sup;
	goto T1616;
	goto T1614;
T1614:;
	V795= Cnil;
	goto T1615;
T1615:;
	V796= Cnil;
	goto T1616;
T1616:;
	if(equal(STREF(object,(V768),32),V795)){
	goto T1617;}
	V798 = (V768);
	V799 = V795;
	V800= Ct;
	STSET(object,V798,32, V799);
	(void)(V799);
	goto T1617;
T1617:;
	if(equal(STREF(object,(V768),36),V796)){
	goto T1620;}
	V802 = (V768);
	V803 = V796;
	V804= Ct;
	STSET(object,V802,36, V803);
	(void)(V803);
	goto T1620;
T1620:;
	if((STREF(object,(V768),36))!=Cnil){
	goto T1602;}
	if(equal(STREF(object,(V768),24),Ct)){
	goto T1602;}
	V806 = (V768);
	V807 = Ct;
	V808= Ct;
	STSET(object,V806,24, V807);
	(void)(V807);}
	goto T1602;
T1602:;
	if(((V771))!=Cnil){
	goto T1627;}
	{object V809;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1632;}
	base[0]= (V767);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk440)(Lclptr440);
	vs_top=sup;
	V809= vs_base[0];
	goto T1630;
	goto T1632;
T1632:;
	V809= (*(LnkLI441))((V767));
	goto T1630;
T1630:;
	{object V810;
	{object V811;
	object V812;
	if(!(type_of((V809))!=t_cons)){
	goto T1638;}
	V811= (V809);
	goto T1636;
	goto T1638;
T1638:;
	V811= CMPcadr((V809));
	goto T1636;
T1636:;{object V813;
	V813= (VV[219]->s.s_dbind);
	base[2]= (VV[219]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V814= vs_base[0];
	V812= make_cons(V813,V814);}
	if((V811)==Cnil){
	V810= Cnil;
	goto T1635;}
	if(type_of((V811))==t_symbol){
	goto T1643;}
	V810= Cnil;
	goto T1635;
	goto T1643;
T1643:;
	base[2]= (V811);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_package();
	vs_top=sup;
	V817= vs_base[0];
	V818 = (V812);
	{register object x= V817,V816= V818;
	while(V816!=Cnil)
	if(x==(V816->c.c_car)){
	V815= V816;
	goto T1647;
	}else V816=V816->c.c_cdr;
	V815= Cnil;}
	goto T1647;
T1647:;
	if((((V815)==Cnil?Ct:Cnil))==Cnil){
	goto T1645;}
	V810= Cnil;
	goto T1635;
	goto T1645;
T1645:;
	base[2]= VV[259];
	base[3]= symbol_name((V811));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk442)();
	vs_top=sup;
	V819= vs_base[0];
	V810= ((V819)==Cnil?Ct:Cnil);}
	goto T1635;
T1635:;
	if(equal(STREF(object,(V768),28),(V810))){
	goto T1627;}
	V820 = (V768);
	V821 = (V810);
	V822= Ct;
	STSET(object,V820,28, V821);
	(void)(V821);}}
	goto T1627;
T1627:;
	{object V823;
	if(!(((((VV[17]->s.s_dbind))==(VV[18])?Ct:Cnil))==Cnil)){
	goto T1657;}
	V823= Ct;
	goto T1656;
	goto T1657;
T1657:;
	{object V824;
	object V825;
	base[2]= (V767);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk358)(Lclptr358);
	vs_top=sup;
	V824= vs_base[0];
	base[2]= (VV[360]->s.s_gfdef);
	V826 = (V767);
	base[4]= (V824);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	V827= vs_base[0];
	base[3]= list(4,V826,V827,VV[260],Cnil);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk443)(Lclptr443);
	vs_top=sup;
	V825= vs_base[0];
	if((V825)==Cnil){
	V823= Cnil;
	goto T1656;}
	if((CMPcdr((V825)))==Cnil){
	goto T1666;}
	V823= Cnil;
	goto T1656;
	goto T1666;
T1666:;
	{object V828;
	base[2]= CMPcar((V825));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk433)(Lclptr433);
	vs_top=sup;
	V828= vs_base[0];
	base[2]= CMPcar((V828));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1670;}
	V823= Cnil;
	goto T1656;
	goto T1670;
T1670:;
	base[2]= CMPcar((V828));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	V829= vs_base[0];
	if((VV[19])==(V829)){
	goto T1673;}
	V823= Cnil;
	goto T1656;
	goto T1673;
T1673:;
	base[2]= CMPcadr((V828));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1677;}
	V823= Cnil;
	goto T1656;
	goto T1677;
T1677:;
	base[2]= CMPcadr((V828));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	V830= vs_base[0];
	V823= ((VV[20])==(V830)?Ct:Cnil);}}
	goto T1656;
T1656:;
	if(equal(STREF(object,(V768),40),(V823))){
	goto T1655;}
	V831 = (V768);
	V832 = (V823);
	V833= Ct;
	STSET(object,V831,40, V832);
	(void)(V832);}
	goto T1655;
T1655:;
	{object V834 = (V768);
	VMR72(V834)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ENSURE-GENERIC-FUNCTION-USING-CLASS	*/

static object LI85(object V836,object V835,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB73 VMS73 VMV73
	{register object V837;
	register object V838;
	object V839;
	object V840;
	object V841;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V837= V836;
	V838= V835;
	narg= narg - 2;
	V842 = make_list(narg);
	V839= V842;
	{
	parse_key_rest_new(V842,narg,Vcs +3,(struct key *)(void *)&LI85key,first,ap);
	if(Vcs[3]==0){
	V840= Cnil;
	V841= Cnil;
	}else{
	V840=(Vcs[3]);
	V841= Ct;}
	if(((V837))==Cnil){
	goto T1686;}
	if(((*(LnkLI438))((V837)))==Cnil){
	goto T1686;}
	{object V843 = (V837);
	VMR73(V843)}
	goto T1686;
T1686:;
	{register object x= (V838),V844= (VV[261]->s.s_dbind);
	while(V844!=Cnil)
	if(equal(x,V844->c.c_car->c.c_car) &&V844->c.c_car != Cnil){
	goto T1692;
	}else V844=V844->c.c_cdr;
	goto T1691;}
	goto T1692;
T1692:;
	if(((V837))==Cnil){
	goto T1694;}
	{object V845 = (VFUN_NARGS=4,(*(LnkLI444))((V838),(V840),(V841),(V837)));
	VMR73(V845)}
	goto T1694;
T1694:;
	base[0]= VV[262];
	base[1]= (V838);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V846 = vs_base[0];
	VMR73(V846)}
	goto T1691;
T1691:;
	if(((V837))==Cnil){
	goto T1699;}
	base[0]= VV[263];
	base[1]= (V838);
	base[2]= VV[261];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V847 = vs_base[0];
	VMR73(V847)}
	goto T1699;
T1699:;
	base[0]= V838;
	base[1]= (VV[264]->s.s_dbind);
	base[2]= VV[265];
	base[3]= (VV[241]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	Ladjoin();
	vs_top=sup;
	(VV[264]->s.s_dbind)= vs_base[0];
	{object V849 = (VFUN_NARGS=3,(*(LnkLI444))((V838),(V840),(V841)));
	VMR73(V849)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function MAKE-EARLY-GF	*/

static object LI86(object V850,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB74 VMS74 VMV74
	{register object V851;
	object V852;
	object V853;
	object V854;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V851= V850;
	narg = narg - 1;
	if (narg <= 0) goto T1710;
	else {
	V852= first;}
	if (--narg <= 0) goto T1711;
	else {
	V853= va_arg(ap,object);}
	if (--narg <= 0) goto T1712;
	else {
	V854= va_arg(ap,object);}
	--narg; goto T1713;
	goto T1710;
T1710:;
	V852= Cnil;
	goto T1711;
T1711:;
	V853= Cnil;
	goto T1712;
T1712:;
	V854= Cnil;
	goto T1713;
T1713:;
	base[0]= (VFUN_NARGS=2,(*(LnkLI445))((VV[266]->s.s_dbind),(VV[267]->s.s_dbind)));
	base[0]=MMcons(base[0],Cnil);
	V855 = (base[0]->c.c_car);
	if((V854)!=Cnil){
	V856= (V854);
	goto T1719;}
	if(!(((V851))==(VV[268]))){
	goto T1721;}
	V856= 
	make_cclosure_new(LC134,Cnil,base[0],Cdata);
	goto T1719;
	goto T1721;
T1721:;
	V856= 
	make_cclosure_new(LC135,Cnil,base[0],Cdata);
	goto T1719;
T1719:;
	(void)((*(LnkLI446))(V855,V856));
	(void)((*(LnkLI345))((base[0]->c.c_car),V851));
	(void)((*(LnkLI447))(VV[19],(base[0]->c.c_car),VV[274],(V851)));
	V858 = (base[0]->c.c_car);
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V859= vs_base[0];
	(void)((*(LnkLI447))(VV[19],V858,VV[275],V859));
	base[1]= (base[0]->c.c_car);
	base[2]= (V851);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk346)();
	vs_top=sup;
	{object V860;
	V860= (*(LnkLI448))();
	{object V862;
	V862= (base[0]->c.c_car);
	if(type_of((V862))==t_structure){
	goto T1737;}
	goto T1735;
	goto T1737;
T1737:;
	if(!((((V862))->str.str_def)==(VV[276]))){
	goto T1735;}}
	V861= STREF(object,(base[0]->c.c_car),4);
	goto T1733;
	goto T1735;
T1735:;{object V863;
	V863= (VV[147]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V864= vs_base[0];
	if(!((V863)==(CMPcar(V864)))){
	goto T1740;}}
	V861= CMPcar(((base[0]->c.c_car))->cc.cc_turbo[12]);
	goto T1733;
	goto T1740;
T1740:;
	base[1]= VV[148];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	V861= vs_base[0];
	goto T1733;
T1733:;
	V865 = (VV[236]->s.s_dbind);
	V866 = (V860);
	(void)(((V861)->v.v_self[fix(V865)]=(V866)));
	if(((V853))==Cnil){
	goto T1730;}
	(void)((*(LnkLI11))((V851),(V852)));
	(void)((VFUN_NARGS=3,(*(LnkLI449))((base[0]->c.c_car),VV[15],(V852))));}
	goto T1730;
T1730:;
	{object V867 = (base[0]->c.c_car);
	VMR74(V867)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SET-DFUN	*/

static object LI87(object V868,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB75 VMS75 VMV75
	{register object V869;
	register object V870;
	register object V871;
	object V872;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V869= V868;
	narg = narg - 1;
	if (narg <= 0) goto T1749;
	else {
	V870= first;}
	if (--narg <= 0) goto T1750;
	else {
	V871= va_arg(ap,object);}
	if (--narg <= 0) goto T1751;
	else {
	V872= va_arg(ap,object);}
	--narg; goto T1752;
	goto T1749;
T1749:;
	V870= Cnil;
	goto T1750;
T1750:;
	V871= Cnil;
	goto T1751;
T1751:;
	V872= Cnil;
	goto T1752;
T1752:;
	if(((V871))==Cnil){
	goto T1756;}
	V873 = (V871);
	V874 = (V869);
	V875= Ct;
	STSET(object,V873,0, V874);
	(void)(V874);
	goto T1756;
T1756:;
	{object V876;
	if(((V870))==Cnil){
	goto T1762;}
	if(((V871))!=Cnil){
	goto T1761;}
	if(((V872))==Cnil){
	goto T1762;}
	goto T1761;
T1761:;
	V876= listA(3,(V870),(V871),(V872));
	goto T1760;
	goto T1762;
T1762:;
	V876= (V870);
	goto T1760;
T1760:;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1769;}
	base[0]= (V876);
	base[1]= V869;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk450)(Lclptr450);
	vs_top=sup;
	goto T1759;
	goto T1769;
T1769:;
	if(type_of(V869)==t_structure){
	goto T1777;}
	goto T1775;
	goto T1777;
T1777:;
	if(!(((V869)->str.str_def)==(VV[278]))){
	goto T1775;}
	V878= STREF(object,(V869),4);
	goto T1773;
	goto T1775;
T1775:;{object V880;
	V880= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V869);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V881= vs_base[0];
	if(!((V880)==(CMPcar(V881)))){
	goto T1780;}}
	V878= CMPcar(((V869))->cc.cc_turbo[12]);
	goto T1773;
	goto T1780;
T1780:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V878= vs_base[0];
	goto T1773;
T1773:;
	V882 = (VV[279]->s.s_dbind);
	V883 = (V876);
	(void)(((V878)->v.v_self[fix(V882)]=(V883)));}
	goto T1759;
T1759:;
	{object V884 = (V870);
	VMR75(V884)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function GF-DFUN-CACHE	*/

static object LI88(V886)

register object V886;
{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	{object V887;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1788;}
	base[0]= (V886);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk451)(Lclptr451);
	vs_top=sup;
	V887= vs_base[0];
	goto T1786;
	goto T1788;
T1788:;
	if(type_of(V886)==t_structure){
	goto T1795;}
	goto T1793;
	goto T1795;
T1795:;
	if(!(((V886)->str.str_def)==(VV[280]))){
	goto T1793;}
	V888= STREF(object,(V886),4);
	goto T1791;
	goto T1793;
T1793:;{object V890;
	V890= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V886);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V891= vs_base[0];
	if(!((V890)==(CMPcar(V891)))){
	goto T1798;}}
	V888= CMPcar(((V886))->cc.cc_turbo[12]);
	goto T1791;
	goto T1798;
T1798:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V888= vs_base[0];
	goto T1791;
T1791:;
	V892 = (VV[279]->s.s_dbind);
	V887= (V888)->v.v_self[fix(V892)];
	goto T1786;
T1786:;
	{register object V893;
	V893= (V887);
	base[0]= (V893);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1805;}
	{object V894 = Cnil;
	VMR76(V894)}
	goto T1805;
T1805:;
	if(!(type_of((V893))==t_cons)){
	goto T1809;}
	{object V895 = CMPcadr((V887));
	VMR76(V895)}
	goto T1809;
T1809:;
	{object V896 = Cnil;
	VMR76(V896)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GF-DFUN-INFO	*/

static object LI89(V898)

register object V898;
{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	{object V899;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1813;}
	base[0]= (V898);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk451)(Lclptr451);
	vs_top=sup;
	V899= vs_base[0];
	goto T1811;
	goto T1813;
T1813:;
	if(type_of(V898)==t_structure){
	goto T1820;}
	goto T1818;
	goto T1820;
T1820:;
	if(!(((V898)->str.str_def)==(VV[281]))){
	goto T1818;}
	V900= STREF(object,(V898),4);
	goto T1816;
	goto T1818;
T1818:;{object V902;
	V902= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V898);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V903= vs_base[0];
	if(!((V902)==(CMPcar(V903)))){
	goto T1823;}}
	V900= CMPcar(((V898))->cc.cc_turbo[12]);
	goto T1816;
	goto T1823;
T1823:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V900= vs_base[0];
	goto T1816;
T1816:;
	V904 = (VV[279]->s.s_dbind);
	V899= (V900)->v.v_self[fix(V904)];
	goto T1811;
T1811:;
	{register object V905;
	V905= (V899);
	base[0]= (V905);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1830;}
	{object V906 = Cnil;
	VMR77(V906)}
	goto T1830;
T1830:;
	if(!(type_of((V905))==t_cons)){
	goto T1834;}
	{object V907 = CMPcddr((V899));
	VMR77(V907)}
	goto T1834;
T1834:;
	{object V908 = Cnil;
	VMR77(V908)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-GF-NAME	*/

static object LI90(V910)

register object V910;
{	 VMB78 VMS78 VMV78
	goto TTL;
TTL:;
	if(type_of(V910)==t_structure){
	goto T1840;}
	goto T1838;
	goto T1840;
T1840:;
	if(!(((V910)->str.str_def)==(VV[282]))){
	goto T1838;}
	V911= STREF(object,(V910),4);
	goto T1836;
	goto T1838;
T1838:;{object V913;
	V913= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V910);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V914= vs_base[0];
	if(!((V913)==(CMPcar(V914)))){
	goto T1843;}}
	V911= CMPcar(((V910))->cc.cc_turbo[12]);
	goto T1836;
	goto T1843;
T1843:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V911= vs_base[0];
	goto T1836;
T1836:;
	V915 = (VV[283]->s.s_dbind);
	{object V916 = (V911)->v.v_self[fix(V915)];
	VMR78(V916)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GF-LAMBDA-LIST	*/

static object LI91(V918)

register object V918;
{	 VMB79 VMS79 VMV79
	goto TTL;
TTL:;
	{object V919;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1851;}
	base[0]= (V918);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	V919= vs_base[0];
	goto T1849;
	goto T1851;
T1851:;
	if(type_of(V918)==t_structure){
	goto T1858;}
	goto T1856;
	goto T1858;
T1858:;
	if(!(((V918)->str.str_def)==(VV[284]))){
	goto T1856;}
	V920= STREF(object,(V918),4);
	goto T1854;
	goto T1856;
T1856:;{object V922;
	V922= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V918);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V923= vs_base[0];
	if(!((V922)==(CMPcar(V923)))){
	goto T1861;}}
	V920= CMPcar(((V918))->cc.cc_turbo[12]);
	goto T1854;
	goto T1861;
T1861:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V920= vs_base[0];
	goto T1854;
T1854:;
	V924 = (VV[236]->s.s_dbind);
	V919= (V920)->v.v_self[fix(V924)];
	goto T1849;
T1849:;
	if(!((VV[237])==(STREF(object,(V919),0)))){
	goto T1868;}
	{object V925;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1872;}
	base[0]= (V918);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk426)(Lclptr426);
	vs_top=sup;
	V925= vs_base[0];
	goto T1870;
	goto T1872;
T1872:;
	if(type_of(V918)==t_structure){
	goto T1879;}
	goto T1877;
	goto T1879;
T1879:;
	if(!(((V918)->str.str_def)==(VV[285]))){
	goto T1877;}
	V926= STREF(object,(V918),4);
	goto T1875;
	goto T1877;
T1877:;{object V928;
	V928= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V918);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V929= vs_base[0];
	if(!((V928)==(CMPcar(V929)))){
	goto T1882;}}
	V926= CMPcar(((V918))->cc.cc_turbo[12]);
	goto T1875;
	goto T1882;
T1882:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V926= vs_base[0];
	goto T1875;
T1875:;
	V930 = (VV[235]->s.s_dbind);
	V925= (V926)->v.v_self[fix(V930)];
	goto T1870;
T1870:;
	if(((V925))!=Cnil){
	goto T1889;}
	base[0]= VV[286];
	base[1]= (V918);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk398)();
	vs_top=sup;
	{object V931 = Cnil;
	VMR79(V931)}
	goto T1889;
T1889:;
	{object V932;
	object V933;
	object V934;
	base[3]= (V925);
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V935= vs_base[0];
	V932= CMPcar(V935);
	if(!(type_of((V932))==t_cons)){
	goto T1899;}
	V933= (*(LnkLI431))((V932));
	goto T1897;
	goto T1899;
T1899:;
	base[3]= (V932);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk48)(Lclptr48);
	vs_top=sup;
	V933= vs_base[0];
	goto T1897;
T1897:;
	{register object x= VV[62],V936= (V933);
	while(V936!=Cnil)
	if(eql(x,V936->c.c_car)){
	V934= V936;
	goto T1902;
	}else V936=V936->c.c_cdr;
	V934= Cnil;}
	goto T1902;
T1902:;
	if(((V934))==Cnil){
	goto T1904;}
	base[3]= (V933);
	base[4]= CMPcdr((V934));
	vs_top=(vs_base=base+3)+2;
	Lldiff();
	vs_top=sup;
	V937= vs_base[0];
	{object V938 = append(V937,VV[287]);
	VMR79(V938)}
	goto T1904;
T1904:;
	{object V939 = (V933);
	VMR79(V939)}}}
	goto T1868;
T1868:;
	{object V940 = STREF(object,(V919),0);
	VMR79(V940)}}
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
	{object V941=base[0]->c.c_cdr;
	if(endp(V941))invalid_macro_call();
	base[2]= (V941->c.c_car);
	V941=V941->c.c_cdr;
	if(endp(V941))invalid_macro_call();
	base[3]= (V941->c.c_car);
	V941=V941->c.c_cdr;
	if(endp(V941))invalid_macro_call();
	base[4]= (V941->c.c_car);
	V941=V941->c.c_cdr;
	if(!endp(V941))invalid_macro_call();}
	V942= list(2,VV[288],base[2]);
	V943= list(2,/* INLINE-ARGS */V942,list(3,VV[289],base[2],list(4,VV[290],base[2],Ct,base[4])));
	V944= list(2,VV[291],base[2]);
	V945= make_cons(/* INLINE-ARGS */V944,Cnil);
	V946= list(4,VV[121],/* INLINE-ARGS */V943,/* INLINE-ARGS */V945,list(2,Ct,list(3,VV[292],VV[293],base[2])));
	V947= list(3,VV[294],base[3],VV[5]);
	V948= list(3,VV[294],base[3],VV[295]);
	V949= list(2,VV[296],listA(3,VV[297],base[3],VV[298]));
	V950= make_cons(/* INLINE-ARGS */V949,Cnil);
	V951= list(3,VV[297],base[3],VV[4]);
	base[5]= list(5,VV[10],/* INLINE-ARGS */V946,/* INLINE-ARGS */V947,/* INLINE-ARGS */V948,list(3,VV[96],/* INLINE-ARGS */V950,list(3,VV[240],VV[299],list(3,VV[30],/* INLINE-ARGS */V951,listA(3,VV[300],list(2,VV[301],base[2]),VV[302])))));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function REAL-ENSURE-GF-USING-CLASS--GENERIC-FUNCTION	*/

static object LI93(object V953,object V952,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB81 VMS81 VMV81
	{object V954;
	object V955;
	register object V956;
	object V957;
	object V958;
	object V959;
	register object V960;
	object V961;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V954= V953;
	V955= V952;
	narg= narg - 2;
	V962 = make_list(narg);
	V956= V962;
	{
	parse_key_rest_new(V962,narg,Vcs +3,(struct key *)(void *)&LI93key,first,ap);
	V957=(Vcs[3]);
	if(Vcs[4]==0){
	V958= Cnil;
	V959= Cnil;
	}else{
	V958=(Vcs[4]);
	V959= Ct;}
	if(Vcs[5]==0){
	V960= VV[19];
	V961= Cnil;
	}else{
	V960=(Vcs[5]);
	V961= Ct;}
	if(!(type_of((V960))==t_symbol)){
	goto T1914;}
	V960= (VFUN_NARGS=3,(*(LnkLI290))((V960),Ct,(V957)));
	goto T1912;
	goto T1914;
T1914:;
	{object V963;
	base[0]= (V960);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	V963= vs_base[0];
	if(((V963))==Cnil){
	goto T1920;}
	goto T1912;
	goto T1920;
T1920:;
	base[0]= VV[293];
	base[1]= (V960);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}
	goto T1912;
T1912:;
	{object V964;
	object V965;
	base[0]= (V956);
	base[1]= VV[5];
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1928;}
	V964= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1929;}
	V965= vs_base[0];
	vs_top=sup;
	goto T1930;
	goto T1928;
T1928:;
	V964= Cnil;
	goto T1929;
T1929:;
	V965= Cnil;
	goto T1930;
T1930:;
	V956= (V964);}
	{object V966;
	object V967;
	base[0]= (V956);
	base[1]= VV[295];
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1937;}
	V966= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1938;}
	V967= vs_base[0];
	vs_top=sup;
	goto T1939;
	goto T1937;
T1937:;
	V966= Cnil;
	goto T1938;
T1938:;
	V967= Cnil;
	goto T1939;
T1939:;
	V956= (V966);}
	{object V968;
	base[0]= (V956);
	base[1]= VV[4];
	base[2]= VV[303];
	vs_top=(vs_base=base+0)+3;
	Lgetf();
	vs_top=sup;
	V968= vs_base[0];
	if(((V968))==(VV[303])){
	goto T1911;}
	{object V970;
	base[2]= (V960);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= CMPcar((V968));
	base[3]= CMPcdr((V968));
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk300)(Lclptr300);
	vs_top=sup;
	V970= vs_base[0];
	{object V971;
	base[1]= (V956);
	base[2]= (V970);
	base[3]= VV[4];
	vs_top=(vs_base=base+1)+3;
	siLput_f();
	vs_top=sup;
	V971= vs_base[0];
	V956= (V971);}}}
	goto T1911;
T1911:;
	if(((V961))==Cnil){
	goto T1959;}
	V972= (*(LnkLI363))((V954));
	V973 = (V960);
	if((/* INLINE-ARGS */V972)==(V973)){
	goto T1959;}
	base[0]= (V954);
	base[1]= (V960);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk452)(Lclptr452);
	vs_top=sup;
	goto T1959;
T1959:;
	{object V974;
	base[0]=VV[453]->s.s_gfdef;
	base[1]= (V954);
	{object V975;
	V975= (V956);
	 vs_top=base+2;
	 while(V975!=Cnil)
	 {vs_push((V975)->c.c_car);V975=(V975)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk453)(Lclptr453);
	vs_top=sup;
	V974= vs_base[0];
	if(((V959))==Cnil){
	goto T1969;}
	(void)((*(LnkLI11))((V955),(V958)));
	goto T1969;
T1969:;
	{object V976 = (V974);
	VMR81(V976)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function REAL-ENSURE-GF-USING-CLASS--NULL	*/

static object LI94(object V978,object V977,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB82 VMS82 VMV82
	{object V979;
	object V980;
	register object V981;
	object V982;
	object V983;
	object V984;
	register object V985;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V979= V978;
	V980= V977;
	narg= narg - 2;
	V986 = make_list(narg);
	V981= V986;
	{
	parse_key_rest_new(V986,narg,Vcs +3,(struct key *)(void *)&LI94key,first,ap);
	V982=(Vcs[3]);
	if(Vcs[4]==0){
	V983= Cnil;
	V984= Cnil;
	}else{
	V983=(Vcs[4]);
	V984= Ct;}
	V985=(Vcs[5]);
	if(!(type_of((V985))==t_symbol)){
	goto T1976;}
	V985= (VFUN_NARGS=3,(*(LnkLI290))((V985),Ct,(V982)));
	goto T1974;
	goto T1976;
T1976:;
	{object V987;
	base[0]= (V985);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	V987= vs_base[0];
	if(((V987))==Cnil){
	goto T1982;}
	goto T1974;
	goto T1982;
T1982:;
	base[0]= VV[293];
	base[1]= (V985);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}
	goto T1974;
T1974:;
	{object V988;
	object V989;
	base[0]= (V981);
	base[1]= VV[5];
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1990;}
	V988= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1991;}
	V989= vs_base[0];
	vs_top=sup;
	goto T1992;
	goto T1990;
T1990:;
	V988= Cnil;
	goto T1991;
T1991:;
	V989= Cnil;
	goto T1992;
T1992:;
	V981= (V988);}
	{object V990;
	object V991;
	base[0]= (V981);
	base[1]= VV[295];
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1999;}
	V990= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2000;}
	V991= vs_base[0];
	vs_top=sup;
	goto T2001;
	goto T1999;
T1999:;
	V990= Cnil;
	goto T2000;
T2000:;
	V991= Cnil;
	goto T2001;
T2001:;
	V981= (V990);}
	{object V992;
	base[0]= (V981);
	base[1]= VV[4];
	base[2]= VV[303];
	vs_top=(vs_base=base+0)+3;
	Lgetf();
	vs_top=sup;
	V992= vs_base[0];
	if(((V992))==(VV[303])){
	goto T1973;}
	{object V994;
	base[2]= (V985);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= CMPcar((V992));
	base[3]= CMPcdr((V992));
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk300)(Lclptr300);
	vs_top=sup;
	V994= vs_base[0];
	{object V995;
	base[1]= (V981);
	base[2]= (V994);
	base[3]= VV[4];
	vs_top=(vs_base=base+1)+3;
	siLput_f();
	vs_top=sup;
	V995= vs_base[0];
	V981= (V995);}}}
	goto T1973;
T1973:;
	{object V996;
	base[0]=VV[454]->s.s_gfdef;
	base[1]= (V985);
	base[2]= VV[220];
	base[3]= (V980);
	{object V999;
	V999= (V981);
	 vs_top=base+4;
	 while(V999!=Cnil)
	 {vs_push((V999)->c.c_car);V999=(V999)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk454)(Lclptr454);
	vs_top=sup;
	V998= vs_base[0];
	V1000 = V980;
	V996= (*(LnkLI345))(V998,V1000);
	if(((V984))==Cnil){
	goto T2027;}
	(void)((*(LnkLI11))((V980),(V983)));
	goto T2027;
T2027:;
	{object V1001 = (V996);
	VMR82(V1001)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for GET-GENERIC-FUNCTION-INFO	*/

static void L95()
{register object *base=vs_base;
	register object *sup=base+VM83; VC83
	vs_check;
	{register object V1002;
	check_arg(1);
	V1002=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1003;
	object V1004;
	object V1005;
	{object V1006;
	object V1007;
	if(((*(LnkLI438))((V1002)))==Cnil){
	goto T2033;}
	if(type_of(V1002)==t_structure){
	goto T2039;}
	goto T2037;
	goto T2039;
T2039:;
	if(!(((V1002)->str.str_def)==(VV[304]))){
	goto T2037;}
	V1008= STREF(object,(V1002),4);
	goto T2035;
	goto T2037;
T2037:;{object V1010;
	V1010= (VV[147]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V1002);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1011= vs_base[0];
	if(!((V1010)==(CMPcar(V1011)))){
	goto T2042;}}
	V1008= CMPcar(((V1002))->cc.cc_turbo[12]);
	goto T2035;
	goto T2042;
T2042:;
	base[3]= VV[148];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V1008= vs_base[0];
	goto T2035;
T2035:;
	V1012 = (VV[236]->s.s_dbind);
	V1006= (V1008)->v.v_self[fix(V1012)];
	goto T2031;
	goto T2033;
T2033:;
	base[3]= (V1002);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	V1006= vs_base[0];
	goto T2031;
T2031:;
	V1007= STREF(object,(V1006),8);
	base[3]= (*(LnkLI395))((V1006));
	base[4]= (V1007);
	base[5]= (V1006);
	vs_top=(vs_base=base+3)+3;}
	if(vs_base>=vs_top){vs_top=sup;goto T2053;}
	V1003= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2054;}
	V1004= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2055;}
	V1005= vs_base[0];
	vs_top=sup;
	goto T2056;
	goto T2053;
T2053:;
	V1003= Cnil;
	goto T2054;
T2054:;
	V1004= Cnil;
	goto T2055;
T2055:;
	V1005= Cnil;
	goto T2056;
T2056:;
	base[1]= CMPmake_fixnum((long)length((V1004)));
	base[2]= (V1003);
	base[3]= (V1004);
	base[5]= VV[455];
	base[6]= (V1004);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk425)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V1005);
	vs_top=(vs_base=base+1)+5;
	return;}
	}
}
/*	local entry for function EARLY-MAKE-A-METHOD	*/

static object LI96(object V1018,object V1017,object V1016,object V1015,object V1014,object V1013,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB84 VMS84 VMV84
	{object V1019;
	object V1020;
	object V1021;
	register object V1022;
	register object V1023;
	object V1024;
	object V1025;
	va_start(ap,first);
	if(narg <6) too_few_arguments();
	V1019= V1018;
	V1020= V1017;
	V1021= V1016;
	V1022= V1015;
	V1023= V1014;
	V1024= V1013;
	narg = narg - 6;
	if (narg <= 0) goto T2064;
	else {
	V1025= first;}
	--narg; goto T2065;
	goto T2064;
T2064:;
	V1025= Cnil;
	goto T2065;
T2065:;
	(void)((VFUN_NARGS=1,(*(LnkLI456))((V1023))));
	{object V1026;
	object V1027;
	V1026= Cnil;
	V1027= Cnil;
	base[0]= VV[457];
	base[1]= (V1022);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk366)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2070;}
	V1026= (V1022);
	{object V1028;
	object V1029= (V1022);
	if(V1029==Cnil){
	V1027= Cnil;
	goto T2076;}
	base[0]=V1028=MMcons(Cnil,Cnil);
	goto T2077;
T2077:;
	if(!(((V1029->c.c_car))==(Ct))){
	goto T2080;}
	(V1028->c.c_car)= Ct;
	goto T2078;
	goto T2080;
T2080:;
	base[1]= (V1029->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	(V1028->c.c_car)= vs_base[0];
	goto T2078;
T2078:;
	if((V1029=MMcdr(V1029))==Cnil){
	V1027= base[0];
	goto T2076;}
	V1028=MMcdr(V1028)=MMcons(Cnil,Cnil);
	goto T2077;}
	goto T2076;
T2076:;
	goto T2068;
	goto T2070;
T2070:;
	V1027= (V1022);
	V1026= Cnil;
	goto T2068;
T2068:;
	base[0]= (V1023);
	base[1]= VV[36];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V1031= vs_base[0];
	base[0]= (V1023);
	base[1]= VV[216];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V1032= vs_base[0];
	V1033 = (V1026);
	{object V1034 = list(5,VV[305],V1031,V1032,V1033,list(7,(V1019),(V1020),(V1021),(V1027),(V1023),(V1024),(V1025)));
	VMR84(V1034)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for REAL-MAKE-A-METHOD	*/

static void L97()
{register object *base=vs_base;
	register object *sup=base+VM85; VC85
	vs_check;
	{object V1035;
	object V1036;
	object V1037;
	object V1038;
	object V1039;
	object V1040;
	object V1041;
	if(vs_top-vs_base<6) too_few_arguments();
	if(vs_top-vs_base>7) too_many_arguments();
	V1035=(base[0]);
	V1036=(base[1]);
	V1037=(base[2]);
	V1038=(base[3]);
	V1039=(base[4]);
	V1040=(base[5]);
	vs_base=vs_base+6;
	if(vs_base>=vs_top){vs_top=sup;goto T2092;}
	V1041=(base[6]);
	vs_top=sup;
	goto T2093;
	goto T2092;
T2092:;
	V1041= Cnil;
	goto T2093;
T2093:;
	V1038= (*(LnkLI458))((V1038));
	base[7]=VV[454]->s.s_gfdef;
	base[8]= (V1035);
	base[9]= VV[306];
	base[10]= (V1036);
	base[11]= VV[15];
	base[12]= (V1037);
	base[13]= VV[307];
	base[14]= (V1038);
	base[15]= VV[3];
	base[16]= (V1040);
	base[17]= VV[308];
	base[18]= (V1041);
	base[19]= VV[309];
	base[20]= Ct;
	{object V1042;
	V1042= (V1039);
	 vs_top=base+21;
	 while(V1042!=Cnil)
	 {vs_push((V1042)->c.c_car);V1042=(V1042)->c.c_cdr;}
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
	{object V1043;
	check_arg(1);
	V1043=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= CMPcadr((V1043));
	base[2]= CMPcaddr((V1043));
	vs_top=(vs_base=base+1)+2;
	return;
	}
}
/*	local entry for function EARLY-METHOD-CLASS	*/

static object LI99(V1045)

object V1045;
{	 VMB87 VMS87 VMV87
	goto TTL;
TTL:;
	base[0]= (V1045);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	V1046= vs_base[0];
	{object V1047 = (VFUN_NARGS=1,(*(LnkLI290))(CMPcar(V1046)));
	VMR87(V1047)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-METHOD-STANDARD-ACCESSOR-P	*/

static object LI100(V1049)

object V1049;
{	 VMB88 VMS88 VMV88
	goto TTL;
TTL:;
	{object V1050;
	base[0]= (V1049);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	V1051= vs_base[0];
	V1050= CMPcar(V1051);
	if(!(((V1050))==(VV[310]))){
	goto T2118;}
	{object V1052 = Ct;
	VMR88(V1052)}
	goto T2118;
T2118:;
	if(!(((V1050))==(VV[311]))){
	goto T2120;}
	{object V1053 = Ct;
	VMR88(V1053)}
	goto T2120;
T2120:;
	{object V1054 = (((V1050))==(VV[312])?Ct:Cnil);
	VMR88(V1054)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for EARLY-METHOD-STANDARD-ACCESSOR-SLOT-NAME	*/

static void L101()
{register object *base=vs_base;
	register object *sup=base+VM89; VC89
	vs_check;
	{object V1055;
	check_arg(1);
	V1055=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V1055);
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

static object LI102(object V1056,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB90 VMS90 VMV90
	{register object V1057;
	object V1058;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V1057= V1056;
	narg = narg - 1;
	if (narg <= 0) goto T2124;
	else {
	V1058= first;}
	--narg; goto T2125;
	goto T2124;
T2124:;
	V1058= Cnil;
	goto T2125;
T2125:;
	if(!(type_of((V1057))==t_cons||((V1057))==Cnil)){
	goto T2128;}
	if(!((CMPcar((V1057)))==(VV[305]))){
	goto T2128;}
	if(!(((V1058))==(Ct))){
	goto T2133;}{object V1059;
	V1059= CMPcadddr((V1057));
	if(V1059==Cnil)goto T2135;
	{object V1060 = V1059;
	VMR90(V1060)}
	goto T2135;
T2135:;}
	{object V1062;
	base[2]=VV[290]->s.s_gfdef;
	base[3]= (V1057);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	V1065= vs_base[0];
	{object V1063;
	object V1064= CMPcadddr(V1065);
	if(V1064==Cnil){
	V1062= Cnil;
	goto T2137;}
	base[1]=V1063=MMcons(Cnil,Cnil);
	goto T2138;
T2138:;
	base[3]= (V1064->c.c_car);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk290)();
	vs_top=sup;
	(V1063->c.c_car)= vs_base[0];
	if((V1064=MMcdr(V1064))==Cnil){
	V1062= base[1];
	goto T2137;}
	V1063=MMcdr(V1063)=MMcons(Cnil,Cnil);
	goto T2138;}
	goto T2137;
T2137:;
	(CMPcdddr(V1057))->c.c_car = (V1062);
	(void)(CMPcdddr(V1057));
	{object V1066 = (V1062);
	VMR90(V1066)}}
	goto T2133;
T2133:;
	base[0]= (V1057);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	V1067= vs_base[0];
	{object V1068 = CMPcadddr(V1067);
	VMR90(V1068)}
	goto T2128;
T2128:;
	base[0]= VV[313];
	base[1]= (V1057);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V1069 = vs_base[0];
	VMR90(V1069)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function EARLY-METHOD-QUALIFIERS	*/

static object LI103(V1071)

object V1071;
{	 VMB91 VMS91 VMV91
	goto TTL;
TTL:;
	base[0]= (V1071);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	V1072= vs_base[0];
	{object V1073 = CMPcadr(V1072);
	VMR91(V1073)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-METHOD-LAMBDA-LIST	*/

static object LI104(V1075)

object V1075;
{	 VMB92 VMS92 VMV92
	goto TTL;
TTL:;
	base[0]= (V1075);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	V1076= vs_base[0];
	{object V1077 = CMPcaddr(V1076);
	VMR92(V1077)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-ADD-NAMED-METHOD	*/

static object LI105(object V1081,object V1080,object V1079,object V1078,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB93 VMS93 VMV93
	{object V1082;
	register object V1083;
	register object V1084;
	object V1085;
	object V1086;
	va_start(ap,first);
	if(narg <4) too_few_arguments();
	V1082= V1081;
	V1083= V1080;
	V1084= V1079;
	V1085= V1078;
	narg= narg - 4;
	V1087 = list_vector_new(narg,first,ap);
	V1086= V1087;
	{object V1088;
	object V1089;
	object V1090;
	base[3]= (V1082);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk351)();
	vs_top=sup;
	V1088= vs_base[0];
	{register object V1091;
	register object V1092;
	if(type_of(V1088)==t_structure){
	goto T2160;}
	goto T2158;
	goto T2160;
T2160:;
	if(!(((V1088)->str.str_def)==(VV[314]))){
	goto T2158;}
	V1093= STREF(object,(V1088),4);
	goto T2156;
	goto T2158;
T2158:;{object V1095;
	V1095= (VV[147]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V1088);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1096= vs_base[0];
	if(!((V1095)==(CMPcar(V1096)))){
	goto T2163;}}
	V1093= CMPcar(((V1088))->cc.cc_turbo[12]);
	goto T2156;
	goto T2163;
T2163:;
	base[5]= VV[148];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	V1093= vs_base[0];
	goto T2156;
T2156:;
	V1097 = (VV[235]->s.s_dbind);
	V1091= (V1093)->v.v_self[fix(V1097)];
	V1092= CMPcar((V1091));
	goto T2171;
T2171:;
	if(!(((V1091))==Cnil)){
	goto T2172;}
	V1089= Cnil;
	goto T2154;
	goto T2172;
T2172:;
	V1098= (VFUN_NARGS=1,(*(LnkLI434))((V1092)));
	V1099 = (V1084);
	if(!(equal(/* INLINE-ARGS */V1098,V1099))){
	goto T2176;}
	V1100= (*(LnkLI461))((V1092));
	V1101 = (V1083);
	if(!(equal(/* INLINE-ARGS */V1100,V1101))){
	goto T2176;}
	V1089= (V1092);
	goto T2154;
	goto T2176;
T2176:;
	V1091= CMPcdr((V1091));
	V1092= CMPcar((V1091));
	goto T2171;}
	goto T2154;
T2154:;
	base[3]= VV[20];
	base[4]= (V1083);
	base[5]= (V1085);
	base[6]= (V1084);
	base[7]= (V1086);
	base[8]= Cnil;
	V1090= simple_symlispcall(VV[462],base+3,6);
	if(((V1089))==Cnil){
	goto T2193;}
	base[3]= (V1088);
	base[4]= (V1089);
	(void)simple_symlispcall(VV[463],base+3,2);
	goto T2193;
T2193:;
	base[3]= (V1088);
	base[4]= (V1090);
	{object V1102 = simple_symlispcall(VV[464],base+3,2);
	VMR93(V1102)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function ADD-METHOD	*/

static object LI106(V1105,V1106)

register object V1105;register object V1106;
{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;{object V1107;
	V1107= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1105);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1108= vs_base[0];
	if((V1107)==(CMPcar(V1108))){
	goto T2200;}}
	base[0]= VV[315];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2200;
T2200:;
	if(!(type_of((V1106))==t_cons||((V1106))==Cnil)){
	goto T2208;}
	if((CMPcar((V1106)))==(VV[305])){
	goto T2207;}
	goto T2208;
T2208:;
	base[0]= VV[316];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2207;
T2207:;
	{object V1110;
	object V1111;
	object V1112;
	if(type_of(V1105)==t_structure){
	goto T2218;}
	goto T2216;
	goto T2218;
T2218:;
	if(!(((V1105)->str.str_def)==(VV[317]))){
	goto T2216;}
	V1110= STREF(object,(V1105),4);
	goto T2214;
	goto T2216;
T2216:;{object V1114;
	V1114= (VV[147]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1105);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1115= vs_base[0];
	if(!((V1114)==(CMPcar(V1115)))){
	goto T2221;}}
	V1110= CMPcar(((V1105))->cc.cc_turbo[12]);
	goto T2214;
	goto T2221;
T2221:;
	base[2]= VV[148];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V1110= vs_base[0];
	goto T2214;
T2214:;
	V1111= (VV[235]->s.s_dbind);
	V1112= make_cons(V1106,((V1110))->v.v_self[fix((V1111))]);
	(void)((((V1110))->v.v_self[fix((V1111))]=((V1112))));}
	(void)((VFUN_NARGS=3,(*(LnkLI449))((V1105),VV[318],(V1106))));
	V1117= (*(LnkLI441))((V1105));
	V1118 = (VV[261]->s.s_dbind);
	{register object x= /* INLINE-ARGS */V1117,V1116= V1118;
	while(V1116!=Cnil)
	if(equal(x,V1116->c.c_car->c.c_car) &&V1116->c.c_car != Cnil){
	goto T2231;
	}else V1116=V1116->c.c_cdr;}
	{object V1119 = (VFUN_NARGS=1,(*(LnkLI465))((V1105)));
	VMR94(V1119)}
	goto T2231;
T2231:;
	{object V1120 = Cnil;
	VMR94(V1120)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REMOVE-METHOD	*/

static object LI107(V1123,V1124)

register object V1123;object V1124;
{	 VMB95 VMS95 VMV95
	goto TTL;
TTL:;{object V1125;
	V1125= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1123);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1126= vs_base[0];
	if((V1125)==(CMPcar(V1126))){
	goto T2233;}}
	base[0]= VV[319];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2233;
T2233:;
	if(!(type_of((V1124))==t_cons||((V1124))==Cnil)){
	goto T2241;}
	if((CMPcar((V1124)))==(VV[305])){
	goto T2240;}
	goto T2241;
T2241:;
	base[0]= VV[320];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2240;
T2240:;
	if(type_of(V1123)==t_structure){
	goto T2251;}
	goto T2249;
	goto T2251;
T2251:;
	if(!(((V1123)->str.str_def)==(VV[321]))){
	goto T2249;}
	V1127= STREF(object,(V1123),4);
	goto T2247;
	goto T2249;
T2249:;{object V1129;
	V1129= (VV[147]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1123);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1130= vs_base[0];
	if(!((V1129)==(CMPcar(V1130)))){
	goto T2254;}}
	V1127= CMPcar(((V1123))->cc.cc_turbo[12]);
	goto T2247;
	goto T2254;
T2254:;
	base[0]= VV[148];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1127= vs_base[0];
	goto T2247;
T2247:;{object V1131;
	V1131= (VV[235]->s.s_dbind);
	base[0]= (V1124);
	if(type_of(V1123)==t_structure){
	goto T2267;}
	goto T2265;
	goto T2267;
T2267:;
	if(!(((V1123)->str.str_def)==(VV[322]))){
	goto T2265;}
	V1133= STREF(object,(V1123),4);
	goto T2263;
	goto T2265;
T2265:;{object V1135;
	V1135= (VV[147]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1123);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1136= vs_base[0];
	if(!((V1135)==(CMPcar(V1136)))){
	goto T2270;}}
	V1133= CMPcar(((V1123))->cc.cc_turbo[12]);
	goto T2263;
	goto T2270;
T2270:;
	base[2]= VV[148];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V1133= vs_base[0];
	goto T2263;
T2263:;
	V1137 = (VV[235]->s.s_dbind);
	base[1]= (V1133)->v.v_self[fix(V1137)];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk376)();
	vs_top=sup;
	V1132= vs_base[0];
	(void)(((V1127)->v.v_self[fix(V1131)]=(V1132)));}
	(void)((VFUN_NARGS=1,(*(LnkLI449))((V1123))));
	V1139= (*(LnkLI441))((V1123));
	V1140 = (VV[261]->s.s_dbind);
	{register object x= /* INLINE-ARGS */V1139,V1138= V1140;
	while(V1138!=Cnil)
	if(equal(x,V1138->c.c_car->c.c_car) &&V1138->c.c_car != Cnil){
	goto T2278;
	}else V1138=V1138->c.c_cdr;}
	{object V1141 = (VFUN_NARGS=1,(*(LnkLI465))((V1123)));
	VMR95(V1141)}
	goto T2278;
T2278:;
	{object V1142 = Cnil;
	VMR95(V1142)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-METHOD	*/

static object LI108(object V1145,object V1144,object V1143,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB96 VMS96 VMV96
	{object V1146;
	register object V1147;
	register object V1148;
	object V1149;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V1146= V1145;
	V1147= V1144;
	V1148= V1143;
	narg = narg - 3;
	if (narg <= 0) goto T2280;
	else {
	V1149= first;}
	--narg; goto T2281;
	goto T2280;
T2280:;
	V1149= Ct;
	goto T2281;
T2281:;
	if(((*(LnkLI438))((V1146)))==Cnil){
	goto T2284;}{object V1150;
	{register object V1151;
	register object V1152;
	if(type_of(V1146)==t_structure){
	goto T2293;}
	goto T2291;
	goto T2293;
T2293:;
	if(!(((V1146)->str.str_def)==(VV[323]))){
	goto T2291;}
	V1153= STREF(object,(V1146),4);
	goto T2289;
	goto T2291;
T2291:;{object V1155;
	V1155= (VV[147]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1146);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1156= vs_base[0];
	if(!((V1155)==(CMPcar(V1156)))){
	goto T2296;}}
	V1153= CMPcar(((V1146))->cc.cc_turbo[12]);
	goto T2289;
	goto T2296;
T2296:;
	base[2]= VV[148];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V1153= vs_base[0];
	goto T2289;
T2289:;
	V1157 = (VV[235]->s.s_dbind);
	V1151= (V1153)->v.v_self[fix(V1157)];
	V1152= CMPcar((V1151));
	goto T2304;
T2304:;
	if(!(((V1151))==Cnil)){
	goto T2305;}
	V1150= Cnil;
	goto T2287;
	goto T2305;
T2305:;
	V1158= (VFUN_NARGS=2,(*(LnkLI434))((V1152),Cnil));
	V1159 = (V1148);
	if(equal(/* INLINE-ARGS */V1158,V1159)){
	goto T2311;}
	V1160= (VFUN_NARGS=2,(*(LnkLI434))((V1152),Ct));
	V1161 = (V1148);
	if(!(equal(/* INLINE-ARGS */V1160,V1161))){
	goto T2309;}
	goto T2311;
T2311:;
	V1162= (*(LnkLI461))((V1152));
	V1163 = (V1147);
	if(!(equal(/* INLINE-ARGS */V1162,V1163))){
	goto T2309;}
	V1150= (V1152);
	goto T2287;
	goto T2309;
T2309:;
	V1151= CMPcdr((V1151));
	V1152= CMPcar((V1151));
	goto T2304;}
	goto T2287;
T2287:;
	if(V1150==Cnil)goto T2286;
	{object V1164 = V1150;
	VMR96(V1164)}
	goto T2286;
T2286:;}
	if(((V1149))==Cnil){
	goto T2322;}
	base[0]= VV[324];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V1165 = vs_base[0];
	VMR96(V1165)}
	goto T2322;
T2322:;
	{object V1166 = Cnil;
	VMR96(V1166)}
	goto T2284;
T2284:;
	{object V1167 = (VFUN_NARGS=4,(*(LnkLI466))((V1146),(V1147),(V1148),(V1149)));
	VMR96(V1167)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function FIX-EARLY-GENERIC-FUNCTIONS	*/

static object LI109(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB97 VMS97 VMV97
	{object V1168;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T2325;
	else {
	V1168= first;}
	--narg; goto T2326;
	goto T2325;
T2325:;
	V1168= (VV[325]->s.s_dbind);
	goto T2326;
T2326:;
	(VV[326]->s.s_dbind)= Ct;
	{object V1169;
	V1169= Cnil;
	{register object V1170;
	register object V1171;
	V1170= (VV[264]->s.s_dbind);
	V1171= CMPcar((V1170));
	goto T2334;
T2334:;
	if(!(((V1170))==Cnil)){
	goto T2335;}
	goto T2330;
	goto T2335;
T2335:;
	base[1]= (VV[467]->s.s_gfdef);
	{object V1173;
	V1173= (*(LnkLI356))((V1171));
	if(type_of((V1173))==t_structure){
	goto T2349;}
	goto T2346;
	goto T2349;
T2349:;
	if(!((((V1173))->str.str_def)==(VV[327]))){
	goto T2346;}}
	V1174= (*(LnkLI356))((V1171));
	V1172= STREF(object,/* INLINE-ARGS */V1174,4);
	goto T2344;
	goto T2346;
T2346:;{object V1175;
	V1175= (VV[147]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (*(LnkLI356))((V1171));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1176= vs_base[0];
	if(!((V1175)==(CMPcar(V1176)))){
	goto T2352;}}
	V1177= (*(LnkLI356))((V1171));
	V1172= CMPcar((/* INLINE-ARGS */V1177)->cc.cc_turbo[12]);
	goto T2344;
	goto T2352;
T2352:;
	base[3]= VV[148];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V1172= vs_base[0];
	goto T2344;
T2344:;
	V1178 = (VV[235]->s.s_dbind);
	base[2]= (V1172)->v.v_self[fix(V1178)];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk366)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2339;}
	V1169= make_cons(V1171,(V1169));
	goto T2339;
T2339:;
	V1170= CMPcdr((V1170));
	V1171= CMPcar((V1170));
	goto T2334;}
	goto T2330;
T2330:;
	{register object V1180;
	object V1181;
	V1180= nconc((V1169),VV[328]);
	V1181= CMPcar((V1180));
	goto T2368;
T2368:;
	if(!(((V1180))==Cnil)){
	goto T2369;}
	goto T2364;
	goto T2369;
T2369:;
	V1182 = (V1181);
	base[2]= (V1181);
	base[3]= (VV[264]->s.s_dbind);
	base[4]= VV[265];
	base[5]= (VV[241]->s.s_gfdef);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk468)();
	vs_top=sup;
	V1183= vs_base[0];
	(VV[264]->s.s_dbind)= make_cons(V1182,V1183);
	V1180= CMPcdr((V1180));
	V1181= CMPcar((V1180));
	goto T2368;}
	goto T2364;
T2364:;
	{register object V1184;
	object V1185;
	V1184= (VV[264]->s.s_dbind);
	V1185= CMPcar((V1184));
	goto T2389;
T2389:;
	if(!(((V1184))==Cnil)){
	goto T2390;}
	goto T2385;
	goto T2390;
T2390:;
	if(((V1168))==Cnil){
	goto T2394;}
	base[1]= Ct;
	base[2]= VV[329];
	base[3]= (V1185);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T2394;
T2394:;
	{register object V1186;
	object V1187;
	V1186= (*(LnkLI356))((V1185));
	if(type_of(V1186)==t_structure){
	goto T2408;}
	goto T2406;
	goto T2408;
T2408:;
	if(!(((V1186)->str.str_def)==(VV[330]))){
	goto T2406;}
	V1190= STREF(object,(V1186),4);
	goto T2404;
	goto T2406;
T2406:;{object V1192;
	V1192= (VV[147]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V1186);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1193= vs_base[0];
	if(!((V1192)==(CMPcar(V1193)))){
	goto T2411;}}
	V1190= CMPcar(((V1186))->cc.cc_turbo[12]);
	goto T2404;
	goto T2411;
T2411:;
	base[4]= VV[148];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V1190= vs_base[0];
	goto T2404;
T2404:;
	V1194 = (VV[235]->s.s_dbind);
	{object V1188;
	object V1189= (V1190)->v.v_self[fix(V1194)];
	if(V1189==Cnil){
	V1187= Cnil;
	goto T2402;}
	base[3]=V1188=MMcons(Cnil,Cnil);
	goto T2403;
T2403:;
	{object V1196;
	base[5]= (V1189->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk459)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lcopy_list();
	vs_top=sup;
	V1196= vs_base[0];
	{object V1198;
	V1198= (VFUN_NARGS=2,(*(LnkLI434))((V1189->c.c_car),Ct));
	(CMPcdddr(V1196))->c.c_car = (V1198);
	(void)(CMPcdddr(V1196));}
	{object V1199;
	V1199= (V1196);
	 vs_top=base+4;
	 while(V1199!=Cnil)
	 {vs_push((V1199)->c.c_car);V1199=(V1199)->c.c_cdr;}
	vs_base=base+4;}
	(void) (*Lnk469)();
	vs_top=sup;
	(V1188->c.c_car)= vs_base[0];}
	if((V1189=MMcdr(V1189))==Cnil){
	V1187= base[3];
	goto T2402;}
	V1188=MMcdr(V1188)=MMcons(Cnil,Cnil);
	goto T2403;}
	goto T2402;
T2402:;
	base[3]= (VV[331]->s.s_dbind);
	base[4]= V1186;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk470)(Lclptr470);
	vs_top=sup;
	base[3]= (VV[252]->s.s_dbind);
	base[4]= V1186;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk471)(Lclptr471);
	vs_top=sup;
	(void)((*(LnkLI472))((V1186),(V1187)));}
	V1184= CMPcdr((V1184));
	V1185= CMPcar((V1184));
	goto T2389;}
	goto T2385;
T2385:;
	{register object V1202;
	object V1203;
	V1202= (VV[332]->s.s_dbind);
	V1203= CMPcar((V1202));
	goto T2440;
T2440:;
	if(!(((V1202))==Cnil)){
	goto T2441;}
	goto T2436;
	goto T2441;
T2441:;
	{object V1204;
	V1204= CMPcar((V1203));
	base[1]= CMPcaddr((V1203));
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	V1205= vs_base[0];
	V1206 = (V1204);
	(void)((*(LnkLI345))(V1205,V1206));}
	V1202= CMPcdr((V1202));
	V1203= CMPcar((V1202));
	goto T2440;}
	goto T2436;
T2436:;
	{register object V1207;
	object V1208;
	V1207= (VV[261]->s.s_dbind);
	V1208= CMPcar((V1207));
	goto T2457;
T2457:;
	if(!(((V1207))==Cnil)){
	goto T2458;}
	{object V1209 = Cnil;
	VMR97(V1209)}
	goto T2458;
T2458:;
	{object V1210;
	object V1211;
	object V1212;
	V1210= CMPcar((V1208));
	V1211= (*(LnkLI356))((V1210));
	{object V1213;
	object V1214= CMPcdr((V1208));
	if(V1214==Cnil){
	V1212= Cnil;
	goto T2465;}
	base[4]=V1213=MMcons(Cnil,Cnil);
	goto T2466;
T2466:;
	{object V1216;
	object V1217;
	object V1218;
	object V1219;
	object V1220;
	V1216= CMPcar((V1214->c.c_car));
	V1217= CMPcadr((V1214->c.c_car));
	V1218= CMPcaddr((V1214->c.c_car));
	if((V1218)!=Cnil){
	V1219= (V1218);
	goto T2471;}
	V1219= (V1210);
	goto T2471;
T2471:;
	base[11]= (V1219);
	vs_top=(vs_base=base+11)+1;
	Lsymbol_function();
	vs_top=sup;
	base[9]= vs_base[0];
	base[9]=MMcons(base[9],Cnil);
	base[11]= 
	make_cclosure_new(LC138,Cnil,base[9],Cdata);
	base[12]= list(2,VV[165],(V1219));
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk346)();
	vs_top=sup;
	V1221= vs_base[0];
	V1220= list(2,VV[36],V1221);
	base[11]= VV[20];
	base[12]= Cnil;
	base[13]= (V1216);
	base[14]= (V1217);
	base[15]= (V1220);
	base[16]= Cnil;
	(V1213->c.c_car)= simple_symlispcall(VV[462],base+11,6);}
	if((V1214=MMcdr(V1214))==Cnil){
	V1212= base[4];
	goto T2465;}
	V1213=MMcdr(V1213)=MMcons(Cnil,Cnil);
	goto T2466;}
	goto T2465;
T2465:;
	base[4]= (VV[331]->s.s_dbind);
	base[5]= V1211;
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk470)(Lclptr470);
	vs_top=sup;
	base[4]= (VV[252]->s.s_dbind);
	base[5]= V1211;
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk471)(Lclptr471);
	vs_top=sup;
	(void)((*(LnkLI472))((V1211),(V1212)));}
	V1207= CMPcdr((V1207));
	V1208= CMPcar((V1207));
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
	{register object V1224;
	check_arg(1);
	V1224=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1225;
	register object V1226;
	object V1227;
	{object V1228;
	V1228= CMPcar((V1224));
	V1224= CMPcdr((V1224));
	V1225= (V1228);}
	V1226= Cnil;
	V1227= Cnil;
	goto T2501;
T2501:;
	if((CMPcar((V1224)))==Cnil){
	goto T2504;}
	if(!(type_of(CMPcar((V1224)))!=t_cons)){
	goto T2504;}
	{register object V1229;
	{register object V1230;
	V1230= CMPcar((V1224));
	V1224= CMPcdr((V1224));
	V1229= (V1230);}
	V1226= make_cons((V1229),(V1226));
	goto T2502;}
	goto T2504;
T2504:;
	V1226= nreverse((V1226));
	goto T2499;
	goto T2502;
T2502:;
	goto T2501;
	goto T2499;
T2499:;
	{object V1231;
	V1231= CMPcar((V1224));
	V1224= CMPcdr((V1224));
	V1227= (V1231);}
	base[1]= (V1225);
	base[2]= (V1226);
	base[3]= (V1227);
	base[4]= (V1224);
	vs_top=(vs_base=base+1)+4;
	return;}
	}
}
/*	local entry for function PARSE-SPECIALIZERS	*/

static object LI111(V1233)

object V1233;
{	 VMB99 VMS99 VMV99
	goto TTL;
TTL:;
	{object V1234;
	object V1235= (V1233);
	if(V1235==Cnil){
	{object V1236 = Cnil;
	VMR99(V1236)}}
	base[0]=V1234=MMcons(Cnil,Cnil);
	goto T2524;
T2524:;
	base[1]= (V1235->c.c_car);
	vs_top=(vs_base=base+1)+1;
	L112(base);
	vs_top=sup;
	(V1234->c.c_car)= vs_base[0];
	if((V1235=MMcdr(V1235))==Cnil){
	{object V1237 = base[0];
	VMR99(V1237)}}
	V1234=MMcdr(V1234)=MMcons(Cnil,Cnil);
	goto T2524;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UNPARSE-SPECIALIZERS	*/

static object LI113(V1239)

object V1239;
{	 VMB100 VMS100 VMV100
	goto TTL;
TTL:;
	if(!(type_of((V1239))==t_cons||((V1239))==Cnil)){
	goto T2528;}
	{object V1240;
	object V1241= (V1239);
	if(V1241==Cnil){
	{object V1242 = Cnil;
	VMR100(V1242)}}
	base[0]=V1240=MMcons(Cnil,Cnil);
	goto T2530;
T2530:;
	base[1]= (V1241->c.c_car);
	vs_top=(vs_base=base+1)+1;
	L114(base);
	vs_top=sup;
	(V1240->c.c_car)= vs_base[0];
	if((V1241=MMcdr(V1241))==Cnil){
	{object V1243 = base[0];
	VMR100(V1243)}}
	V1240=MMcdr(V1240)=MMcons(Cnil,Cnil);
	goto T2530;}
	goto T2528;
T2528:;
	base[0]= (V1239);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk433)(Lclptr433);
	vs_top=sup;
	V1239= vs_base[0];
	goto TTL;
	base[0]=base[0];
	return Cnil;
}
/*	function definition for PARSE-METHOD-OR-SPEC	*/

static void L115()
{register object *base=vs_base;
	register object *sup=base+VM101; VC101
	vs_check;
	{object V1244;
	object V1245;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1244=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2536;}
	V1245=(base[1]);
	vs_top=sup;
	goto T2537;
	goto T2536;
T2536:;
	V1245= Ct;
	goto T2537;
T2537:;
	{register object V1246;
	register object V1247;
	object V1248;
	object V1249;
	V1246= Cnil;
	V1247= Cnil;
	V1248= Cnil;
	V1249= Cnil;
	base[2]= (V1244);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk473)(Lclptr473);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2541;}
	V1247= (V1244);
	base[2]= (V1247);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk474)(Lclptr474);
	vs_top=sup;
	V1246= vs_base[0];
	if((V1246)==Cnil){
	V1249= Cnil;
	goto T2550;}
	base[2]= (V1246);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk440)(Lclptr440);
	vs_top=sup;
	V1249= vs_base[0];
	goto T2550;
T2550:;
	if(((V1249))==Cnil){
	goto T2554;}
	V1250 = (V1249);
	base[2]= (V1247);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk476)(Lclptr476);
	vs_top=sup;
	V1251= vs_base[0];
	base[2]= (V1247);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk433)(Lclptr433);
	vs_top=sup;
	V1252= vs_base[0];
	V1253= (*(LnkLI477))(V1252);
	V1254= (*(LnkLI401))(V1250,V1251,/* INLINE-ARGS */V1253);
	V1248= (*(LnkLI475))(/* INLINE-ARGS */V1254);
	goto T2552;
	goto T2554;
T2554:;
	base[3]= Cnil;
	base[4]= VV[336];
	base[5]= (V1247);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lmake_symbol();
	vs_top=sup;
	V1248= vs_base[0];
	goto T2552;
T2552:;
	goto T2539;
	goto T2541;
T2541:;
	{object V1255;
	object V1256;
	register object V1257;
	base[2]= (V1244);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk352)();
	if(vs_base>=vs_top){vs_top=sup;goto T2566;}
	V1255= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2567;}
	V1256= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2568;}
	V1257= vs_base[0];
	vs_top=sup;
	goto T2569;
	goto T2566;
T2566:;
	V1255= Cnil;
	goto T2567;
T2567:;
	V1256= Cnil;
	goto T2568;
T2568:;
	V1257= Cnil;
	goto T2569;
T2569:;
	if((V1245)!=Cnil){
	if(((V1245))!=Cnil){
	goto T2573;}
	goto T2574;}
	if(((*(LnkLI355))((V1255)))!=Cnil){
	goto T2573;}
	goto T2574;
T2574:;
	V1246= Cnil;
	goto T2572;
	goto T2573;
T2573:;
	V1246= (*(LnkLI356))((V1255));
	goto T2572;
T2572:;
	if(((V1246))!=Cnil){
	goto T2570;}
	goto T2539;
	goto T2570;
T2570:;
	{object V1258;
	base[2]= (V1246);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk478)(Lclptr478);
	vs_top=sup;
	V1258= vs_base[0];
	V1259= (*(LnkLI458))((V1257));
	V1261 = CMPmake_fixnum((long)length((V1257)));
	base[2]= number_minus((V1258),V1261);
	base[3]= VV[223];
	base[4]= (VV[337]->s.s_dbind);
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	V1260= vs_base[0];
	V1257= append(/* INLINE-ARGS */V1259,V1260);
	V1247= (VFUN_NARGS=4,(*(LnkLI479))((V1246),(V1256),(V1257),(V1245)));
	if(((V1247))!=Cnil){
	goto T2583;}
	goto T2539;
	goto T2583;
T2583:;
	V1262= (*(LnkLI401))((V1255),(V1256),(V1257));
	V1248= (*(LnkLI475))(/* INLINE-ARGS */V1262);}}
	goto T2539;
T2539:;
	base[2]= (V1246);
	base[3]= (V1247);
	base[4]= (V1248);
	vs_top=(vs_base=base+2)+3;
	return;}
	}
}
/*	local entry for function EXTRACT-PARAMETERS	*/

static object LI116(V1264)

object V1264;
{	 VMB102 VMS102 VMV102
	goto TTL;
TTL:;
	{object V1265;
	object V1266;
	object V1267;
	base[0]= (V1264);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2592;}
	V1265= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2593;}
	V1266= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2594;}
	V1267= vs_base[0];
	vs_top=sup;
	goto T2595;
	goto T2592;
T2592:;
	V1265= Cnil;
	goto T2593;
T2593:;
	V1266= Cnil;
	goto T2594;
T2594:;
	V1267= Cnil;
	goto T2595;
T2595:;
	{object V1268 = (V1265);
	VMR102(V1268)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXTRACT-LAMBDA-LIST	*/

static object LI117(V1270)

object V1270;
{	 VMB103 VMS103 VMV103
	goto TTL;
TTL:;
	{object V1271;
	object V1272;
	object V1273;
	base[0]= (V1270);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2598;}
	V1271= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2599;}
	V1272= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2600;}
	V1273= vs_base[0];
	vs_top=sup;
	goto T2601;
	goto T2598;
T2598:;
	V1271= Cnil;
	goto T2599;
T2599:;
	V1272= Cnil;
	goto T2600;
T2600:;
	V1273= Cnil;
	goto T2601;
T2601:;
	{object V1274 = (V1272);
	VMR103(V1274)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXTRACT-SPECIALIZER-NAMES	*/

static object LI118(V1276)

object V1276;
{	 VMB104 VMS104 VMV104
	goto TTL;
TTL:;
	{object V1277;
	object V1278;
	object V1279;
	base[0]= (V1276);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2604;}
	V1277= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2605;}
	V1278= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2606;}
	V1279= vs_base[0];
	vs_top=sup;
	goto T2607;
	goto T2604;
T2604:;
	V1277= Cnil;
	goto T2605;
T2605:;
	V1278= Cnil;
	goto T2606;
T2606:;
	V1279= Cnil;
	goto T2607;
T2607:;
	{object V1280 = (V1279);
	VMR104(V1280)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXTRACT-REQUIRED-PARAMETERS	*/

static object LI119(V1282)

object V1282;
{	 VMB105 VMS105 VMV105
	goto TTL;
TTL:;
	{object V1283;
	object V1284;
	object V1285;
	object V1286;
	base[0]= (V1282);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2610;}
	V1283= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2611;}
	V1284= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2612;}
	V1285= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2613;}
	V1286= vs_base[0];
	vs_top=sup;
	goto T2614;
	goto T2610;
T2610:;
	V1283= Cnil;
	goto T2611;
T2611:;
	V1284= Cnil;
	goto T2612;
T2612:;
	V1285= Cnil;
	goto T2613;
T2613:;
	V1286= Cnil;
	goto T2614;
T2614:;
	{object V1287 = (V1286);
	VMR105(V1287)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for PARSE-SPECIALIZED-LAMBDA-LIST	*/

static void L120()
{register object *base=vs_base;
	register object *sup=base+VM106; VC106
	vs_check;
	{register object V1288;
	object V1289;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1288=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2615;}
	V1289=(base[1]);
	vs_top=sup;
	goto T2616;
	goto T2615;
T2615:;
	V1289= Cnil;
	goto T2616;
T2616:;
	{register object V1290;
	V1290= CMPcar((V1288));
	if(((V1288))!=Cnil){
	goto T2620;}
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+2)+4;
	return;
	goto T2620;
T2620:;
	if(!(((V1290))==(VV[56]))){
	goto T2627;}
	base[2]= Cnil;
	base[3]= (V1288);
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	return;
	goto T2627;
T2627:;
	{register object x= (V1290),V1291= VV[183];
	while(V1291!=Cnil)
	if(x==(V1291->c.c_car)){
	goto T2634;
	}else V1291=V1291->c.c_cdr;
	goto T2633;}
	goto T2634;
T2634:;
	{register object x= (V1290),V1292= VV[338];
	while(V1292!=Cnil)
	if(x==(V1292->c.c_car)){
	goto T2635;
	}else V1292=V1292->c.c_cdr;}
	base[2]= VV[339];
	base[3]= (V1290);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk398)();
	vs_top=sup;
	goto T2635;
T2635:;
	{object V1293;
	object V1294;
	base[2]= CMPcdr((V1288));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2643;}
	V1293= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2644;}
	V1294= vs_base[0];
	vs_top=sup;
	goto T2645;
	goto T2643;
T2643:;
	V1293= Cnil;
	goto T2644;
T2644:;
	V1294= Cnil;
	goto T2645;
T2645:;
	base[2]= (V1293);
	base[3]= make_cons((V1290),(V1294));
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+2)+4;
	return;}
	goto T2633;
T2633:;
	if(((V1289))==Cnil){
	goto T2651;}
	{object V1295;
	object V1296;
	base[2]= CMPcdr((V1288));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2656;}
	V1295= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2657;}
	V1296= vs_base[0];
	vs_top=sup;
	goto T2658;
	goto T2656;
T2656:;
	V1295= Cnil;
	goto T2657;
T2657:;
	V1296= Cnil;
	goto T2658;
T2658:;
	if(!(type_of((V1290))==t_cons||((V1290))==Cnil)){
	goto T2662;}
	V1297= CMPcar((V1290));
	goto T2660;
	goto T2662;
T2662:;
	V1297= (V1290);
	goto T2660;
T2660:;
	V1298 = (V1295);
	base[2]= make_cons(V1297,V1298);
	base[3]= make_cons((V1290),(V1296));
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+2)+4;
	return;}
	goto T2651;
T2651:;
	{object V1299;
	object V1300;
	object V1301;
	object V1302;
	base[2]= CMPcdr((V1288));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2669;}
	V1299= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2670;}
	V1300= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2671;}
	V1301= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2672;}
	V1302= vs_base[0];
	vs_top=sup;
	goto T2673;
	goto T2669;
T2669:;
	V1299= Cnil;
	goto T2670;
T2670:;
	V1300= Cnil;
	goto T2671;
T2671:;
	V1301= Cnil;
	goto T2672;
T2672:;
	V1302= Cnil;
	goto T2673;
T2673:;
	if(!(type_of((V1290))==t_cons||((V1290))==Cnil)){
	goto T2677;}
	V1303= CMPcar((V1290));
	goto T2675;
	goto T2677;
T2677:;
	V1303= (V1290);
	goto T2675;
T2675:;
	V1304 = (V1299);
	base[2]= make_cons(V1303,V1304);
	if(!(type_of((V1290))==t_cons||((V1290))==Cnil)){
	goto T2682;}
	V1305= CMPcar((V1290));
	goto T2680;
	goto T2682;
T2682:;
	V1305= (V1290);
	goto T2680;
T2680:;
	V1306 = (V1300);
	base[3]= make_cons(V1305,V1306);
	if(!(type_of((V1290))==t_cons||((V1290))==Cnil)){
	goto T2687;}
	V1307= CMPcadr((V1290));
	goto T2685;
	goto T2687;
T2687:;
	V1307= Ct;
	goto T2685;
T2685:;
	V1308 = (V1301);
	base[4]= make_cons(V1307,V1308);
	if(!(type_of((V1290))==t_cons||((V1290))==Cnil)){
	goto T2692;}
	V1309= CMPcar((V1290));
	goto T2690;
	goto T2692;
T2692:;
	V1309= (V1290);
	goto T2690;
T2690:;
	V1310 = (V1302);
	base[5]= make_cons(V1309,V1310);
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
	{object V1311=base[0]->c.c_cdr;
	if(endp(V1311))invalid_macro_call();
	base[2]= (V1311->c.c_car);
	V1311=V1311->c.c_cdr;
	base[3]= V1311;}
	{object V1312;
	object V1313= base[2];
	if(V1313==Cnil){
	base[4]= Cnil;
	goto T2694;}
	base[5]=V1312=MMcons(Cnil,Cnil);
	goto T2695;
T2695:;
	V1315= CMPcar((V1313->c.c_car));
	V1316= (*(LnkLI480))(CMPcar((V1313->c.c_car)),base[1]);
	(V1312->c.c_car)= list(3,/* INLINE-ARGS */V1315,/* INLINE-ARGS */V1316,CMPcadr((V1313->c.c_car)));
	if((V1313=MMcdr(V1313))==Cnil){
	base[4]= base[5];
	goto T2694;}
	V1312=MMcdr(V1312)=MMcons(Cnil,Cnil);
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

static object LI124(V1321,V1322,V1323,V1324)

object V1321;register object V1322;object V1323;object V1324;
{	 VMB108 VMS108 VMV108
	goto TTL;
TTL:;
	base[0]= (V1324);
	base[1]= (V1321);
	base[2]= Cnil;
	if(((V1323))==(VV[194])){
	goto T2701;}
	{object V1325 = (V1322);
	VMR108(V1325)}
	goto T2701;
T2701:;
	if(!(type_of((V1322))==t_symbol)){
	goto T2704;}
	{register object x= (V1322),V1326= base[1];
	while(V1326!=Cnil)
	if(eql(x,V1326->c.c_car->c.c_car) &&V1326->c.c_car != Cnil){
	base[2]= (V1326->c.c_car);
	goto T2710;
	}else V1326=V1326->c.c_cdr;
	base[2]= Cnil;}
	goto T2710;
T2710:;
	if((base[2])==Cnil){
	goto T2707;}
	V1327= CMPcadr(base[2]);
	V1328= (*(LnkLI480))((V1322),base[0]);
	if(!((/* INLINE-ARGS */V1327)==(/* INLINE-ARGS */V1328))){
	goto T2707;}
	{object V1329 = CMPcaddr(base[2]);
	VMR108(V1329)}
	goto T2707;
T2707:;
	{object V1330 = (V1322);
	VMR108(V1330)}
	goto T2704;
T2704:;
	if(type_of((V1322))==t_cons||((V1322))==Cnil){
	goto T2713;}
	{object V1331 = (V1322);
	VMR108(V1331)}
	goto T2713;
T2713:;
	{register object x= CMPcar((V1322)),V1332= VV[340];
	while(V1332!=Cnil)
	if(eql(x,V1332->c.c_car)){
	goto T2717;
	}else V1332=V1332->c.c_cdr;
	goto T2716;}
	goto T2717;
T2717:;
	base[3]= CMPcar((V1322));
	{object V1333;
	V1333= Cnil;
	base[4]= CMPcdr((V1322));
	vs_top=(vs_base=base+4)+1;
	L125(base);
	vs_top=sup;
	V1333= vs_base[0];
	{object V1334 = (*(LnkLI481))((V1322),base[3],(V1333));
	VMR108(V1334)}}
	goto T2716;
T2716:;
	if(!((CMPcar((V1322)))==(VV[341]))){
	goto T2723;}
	{object V1335;
	object V1336;
	V1335= CMPcadr((V1322));
	{object V1337;
	object V1338= (V1335);
	if(V1338==Cnil){
	V1336= Cnil;
	goto T2726;}
	base[5]=V1337=MMcons(Cnil,Cnil);
	goto T2727;
T2727:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	(V1337->c.c_car)= vs_base[0];
	if((V1338=MMcdr(V1338))==Cnil){
	V1336= base[5];
	goto T2726;}
	V1337=MMcdr(V1337)=MMcons(Cnil,Cnil);
	goto T2727;}
	goto T2726;
T2726:;
	V1340= CMPcaddr((V1322));
	{object V1342;
	object V1343= (V1335);
	object V1344= (V1336);
	if(V1343==Cnil||V1344==Cnil){
	V1341= Cnil;
	goto T2729;}
	base[5]=V1342=MMcons(Cnil,Cnil);
	goto T2730;
T2730:;
	(V1342->c.c_car)= list(3,VV[30],(V1343->c.c_car),(V1344->c.c_car));
	if((V1343=MMcdr(V1343))==Cnil||(V1344=MMcdr(V1344))==Cnil){
	V1341= base[5];
	goto T2729;}
	V1342=MMcdr(V1342)=MMcons(Cnil,Cnil);
	goto T2730;}
	goto T2729;
T2729:;
	{object V1347 = listA(4,VV[342],(V1336),/* INLINE-ARGS */V1340,reverse(V1341));
	VMR108(V1347)}}
	goto T2723;
T2723:;
	{object V1348 = (V1322);
	VMR108(V1348)}
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
	{object V1349=base[0]->c.c_cdr;
	if(endp(V1349))invalid_macro_call();
	base[2]= (V1349->c.c_car);
	V1349=V1349->c.c_cdr;
	if(endp(V1349))invalid_macro_call();
	base[3]= (V1349->c.c_car);
	V1349=V1349->c.c_cdr;
	base[4]= V1349;}
	{register object V1350;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1350= vs_base[0];
	V1351= list(2,(V1350),base[3]);
	V1352= make_cons(/* INLINE-ARGS */V1351,Cnil);
	{object V1354;
	if(!(type_of(base[3])==t_cons)){
	goto T2736;}
	if(!((CMPcar(base[3]))==(VV[139]))){
	goto T2736;}
	V1354= CMPcaddr(base[3]);
	goto T2734;
	goto T2736;
T2736:;
	V1354= base[3];
	goto T2734;
T2734:;
	if(type_of((V1354))==t_symbol){
	goto T2740;}
	V1353= Cnil;
	goto T2733;
	goto T2740;
T2740:;
	V1355= list(2,VV[46],list(3,VV[343],(V1350),(V1354)));
	V1353= make_cons(/* INLINE-ARGS */V1355,Cnil);}
	goto T2733;
T2733:;
	{object V1357;
	object V1358= base[2];
	if(V1358==Cnil){
	V1356= Cnil;
	goto T2742;}
	base[5]=V1357=MMcons(Cnil,Cnil);
	goto T2743;
T2743:;
	{register object V1359;
	V1359= (V1358->c.c_car);
	{object V1360;
	object V1361;
	if(!(type_of((V1359))==t_symbol)){
	goto T2747;}
	V1360= (V1359);
	goto T2745;
	goto T2747;
T2747:;
	V1360= CMPcar((V1359));
	goto T2745;
T2745:;
	if(!(type_of((V1359))==t_symbol)){
	goto T2751;}
	V1361= (V1359);
	goto T2749;
	goto T2751;
T2751:;
	V1361= CMPcadr((V1359));
	goto T2749;
T2749:;
	(V1357->c.c_car)= list(2,(V1360),list(3,VV[197],(V1350),list(2,VV[1],(V1361))));}}
	if((V1358=MMcdr(V1358))==Cnil){
	V1356= base[5];
	goto T2742;}
	V1357=MMcdr(V1357)=MMcons(Cnil,Cnil);
	goto T2743;}
	goto T2742;
T2742:;
	V1362 = base[4];
	V1363= list(2,(V1350),listA(3,VV[344],V1356,V1362));
	base[5]= listA(3,VV[96],/* INLINE-ARGS */V1352,append(V1353,/* INLINE-ARGS */V1363));
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
	{object V1364=base[0]->c.c_cdr;
	if(endp(V1364))invalid_macro_call();
	base[2]= (V1364->c.c_car);
	V1364=V1364->c.c_cdr;
	if(endp(V1364))invalid_macro_call();
	base[3]= (V1364->c.c_car);
	V1364=V1364->c.c_cdr;
	base[4]= V1364;}
	{register object V1365;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1365= vs_base[0];
	V1366= list(2,(V1365),base[3]);
	V1367= make_cons(/* INLINE-ARGS */V1366,Cnil);
	{object V1369;
	if(!(type_of(base[3])==t_cons)){
	goto T2757;}
	if(!((CMPcar(base[3]))==(VV[139]))){
	goto T2757;}
	V1369= CMPcaddr(base[3]);
	goto T2755;
	goto T2757;
T2757:;
	V1369= base[3];
	goto T2755;
T2755:;
	if(type_of((V1369))==t_symbol){
	goto T2761;}
	V1368= Cnil;
	goto T2754;
	goto T2761;
T2761:;
	V1370= list(2,VV[46],list(3,VV[343],(V1365),(V1369)));
	V1368= make_cons(/* INLINE-ARGS */V1370,Cnil);}
	goto T2754;
T2754:;
	{object V1372;
	object V1373= base[2];
	if(V1373==Cnil){
	V1371= Cnil;
	goto T2763;}
	base[5]=V1372=MMcons(Cnil,Cnil);
	goto T2764;
T2764:;
	{object V1375;
	object V1376;
	V1375= CMPcar((V1373->c.c_car));
	V1376= CMPcadr((V1373->c.c_car));
	(V1372->c.c_car)= list(2,(V1375),list(2,(V1376),(V1365)));}
	if((V1373=MMcdr(V1373))==Cnil){
	V1371= base[5];
	goto T2763;}
	V1372=MMcdr(V1372)=MMcons(Cnil,Cnil);
	goto T2764;}
	goto T2763;
T2763:;
	V1377 = base[4];
	V1378= list(2,(V1365),listA(3,VV[344],V1371,V1377));
	base[5]= listA(3,VV[96],/* INLINE-ARGS */V1367,append(V1368,/* INLINE-ARGS */V1378));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	local function SCAN-SETF	*/

static void L125(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM111; VC111
	vs_check;
	{register object V1379;
	check_arg(1);
	V1379=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1379))!=Cnil){
	goto T2769;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2769;
T2769:;
	V1380 = (V1379);
	{register object x= CMPcar((V1379)),V1382= base0[1];
	while(V1382!=Cnil)
	if(eql(x,V1382->c.c_car->c.c_car) &&V1382->c.c_car != Cnil){
	base0[2]= (V1382->c.c_car);
	goto T2776;
	}else V1382=V1382->c.c_cdr;
	base0[2]= Cnil;}
	goto T2776;
T2776:;
	if((base0[2])==Cnil){
	goto T2773;}
	V1383= CMPcadr(base0[2]);
	V1384= (*(LnkLI480))(CMPcar((V1379)),base0[0]);
	if(!((/* INLINE-ARGS */V1383)==(/* INLINE-ARGS */V1384))){
	goto T2773;}
	base0[3]= VV[30];
	V1381= CMPcaddr(base0[2]);
	goto T2771;
	goto T2773;
T2773:;
	V1381= CMPcar((V1379));
	goto T2771;
T2771:;
	V1385= CMPcadr((V1379));
	base[1]= CMPcddr((V1379));
	vs_top=(vs_base=base+1)+1;
	L125(base0);
	vs_top=sup;
	V1386= vs_base[0];
	base[1]= (VFUN_NARGS=4,(*(LnkLI482))(V1380,V1381,/* INLINE-ARGS */V1385,V1386));
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
	{object V1387;
	object V1388;
	object V1389;
	check_arg(3);
	V1387=(base[0]);
	V1388=(base[1]);
	V1389=(base[2]);
	vs_top=sup;
	base[3]= (*(LnkLI483))((base0[0]->c.c_car),(V1387),(V1388),(V1389));
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
	{object V1390;
	check_arg(1);
	V1390=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V1390);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk484)(Lclptr484);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2783;}
	{register object V1391;
	base[1]= (V1390);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk485)(Lclptr485);
	vs_top=sup;
	V1391= vs_base[0];
	if(!(type_of((V1391))==t_cons)){
	goto T2789;}
	if(!((CMPcar((V1391)))==(VV[51]))){
	goto T2789;}
	{object V1392;
	object V1393;
	V1392= CMPcadr((V1391));
	base[3]= (V1392);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	V1393= vs_base[0];
	V1394 = (V1392);
	V1395= (VFUN_NARGS=2,(*(LnkLI290))((V1393),Cnil));
	if(!((V1394)==(/* INLINE-ARGS */V1395))){
	goto T2797;}
	base[3]= (V1393);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2797;
T2797:;
	base[3]= (V1391);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2789;
T2789:;
	base[1]= (V1391);
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2783;
T2783:;
	base[1]= VV[335];
	base[2]= (V1390);
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
	{register object V1396;
	check_arg(1);
	V1396=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1397;
	base[1]= (V1396);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk486)();
	vs_top=sup;
	V1397= vs_base[0];
	base[1]= (V1397);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk484)(Lclptr484);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2804;}
	base[1]= (V1397);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2804;
T2804:;
	if(!(type_of((V1396))==t_symbol)){
	goto T2808;}
	base[1]= VV[333];
	base[2]= (V1396);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	goto T2808;
T2808:;
	base[1]= VV[334];
	base[2]= (V1396);
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
	{object V1398;
	register object V1399;
	check_arg(2);
	V1398=(base[0]);
	V1399=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	{object V1400;
	V1400= (V1398);
	 vs_top=base+3;
	 while(V1400!=Cnil)
	 {vs_push((V1400)->c.c_car);V1400=(V1400)->c.c_cdr;}
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
	{object V1401;
	check_arg(1);
	V1401=(base[0]);
	vs_top=sup;
	base[1]= (((type_of((V1401))==t_symbol?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V1402;
	check_arg(1);
	V1402=(base[0]);
	vs_top=sup;
	base[1]= (((((V1402))==(Ct)?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V1403;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1403=(base[0]);
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
	{object V1404;
	register object V1405;
	check_arg(2);
	V1404=(base[0]);
	V1405=(base[1]);
	vs_top=sup;
	base[2]= (V1405);
	base[3]= VV[269];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	base[2]= (V1405);
	base[3]= VV[270];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	base[2]= (V1405);
	base[3]= VV[271];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI487))((V1404),(V1405)));
	base[2]= (V1405);
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
	{object V1406;
	check_arg(1);
	V1406=(base[0]);
	vs_top=sup;
	{register object x= (V1406),V1407= (base0[0]->c.c_car);
	while(V1407!=Cnil)
	if(x==(V1407->c.c_car)){
	base[1]= V1407;
	vs_top=(vs_base=base+1)+1;
	return;
	}else V1407=V1407->c.c_cdr;
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
	{object V1408;
	object V1409;
	check_arg(2);
	V1408=(base[0]);
	V1409=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(number_compare((V1408),(V1409))>0)){
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
	{object V1410;
	object V1411;
	if(vs_top-vs_base<1) too_few_arguments();
	V1410=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1411=(base[1]);
	vs_top=sup;
	base[2]= VV[249];
	base[3]= base0[2];
	base[4]= base0[0];
	base[6]= Cnil;
	base[7]= (V1410);
	{object V1412;
	V1412= (V1411);
	 vs_top=base+8;
	 while(V1412!=Cnil)
	 {vs_push((V1412)->c.c_car);V1412=(V1412)->c.c_cdr;}
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
	{object V1413;
	check_arg(1);
	V1413=(base[0]);
	vs_top=sup;
	base[1]= (((((V1413))==(Ct)?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V1414;
	check_arg(1);
	V1414=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V1414))==t_cons||((V1414))==Cnil)){
	goto T2841;}
	{object V1415= CMPcar((V1414));
	if(!(type_of(V1415)==t_cons||(V1415)==Cnil)){
	goto T2844;}}
	base[1]= CMPcaar((V1414));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2844;
T2844:;
	base[1]= CMPcar((V1414));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk488)();
	return;
	goto T2841;
T2841:;
	base[1]= (V1414);
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
	{object V1416;
	object V1417;
	check_arg(2);
	V1416=(base[0]);
	V1417=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((base0[0])==Cnil){
	goto T2848;}
	(void)((*(LnkLI489))((V1417),base0[0],V1416));
	goto T2848;
T2848:;
	if((base0[4])==Cnil){
	goto T2852;}
	base[2]= (*(LnkLI489))((V1417),base0[4],V1416);
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
	{object V1422;
	check_arg(1);
	V1422=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1423;
	register object V1424;
	V1423= CMPcdar(base0[0]);
	V1424= CMPcar((V1423));
	goto T2857;
T2857:;
	if(!(((V1423))==Cnil)){
	goto T2858;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2858;
T2858:;
	if(!((CMPcar((V1424)))==(VV[182]))){
	goto T2862;}
	{register object x= (V1422),V1425= CMPcdr((V1424));
	while(V1425!=Cnil)
	if(x==(V1425->c.c_car)){
	goto T2866;
	}else V1425=V1425->c.c_cdr;
	goto T2862;}
	goto T2866;
T2866:;
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2862;
T2862:;
	V1423= CMPcdr((V1423));
	V1424= CMPcar((V1423));
	goto T2857;}
	}
}
/*	local function WALK-FUNCTION	*/

static void LC44(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM127; VC127
	vs_check;
	{register object V1426;
	object V1427;
	object V1428;
	check_arg(3);
	V1426=(base[0]);
	V1427=(base[1]);
	V1428=(base[2]);
	vs_top=sup;
	if(((V1427))==(VV[194])){
	goto T2873;}
	base[3]= (V1426);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2873;
T2873:;
	if(type_of((V1426))==t_cons||((V1426))==Cnil){
	goto T2876;}
	base[3]= (V1426);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2876;
T2876:;
	if(!((CMPcar((V1426)))==(VV[195]))){
	goto T2879;}
	(base0[2]->c.c_car)= Ct;
	base[3]= (V1426);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2879;
T2879:;
	if(!((CMPcar((V1426)))==(VV[196]))){
	goto T2884;}
	(base0[0]->c.c_car)= Ct;
	base[3]= (V1426);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2884;
T2884:;
	{object V1429;
	if((CMPcar((V1426)))==(VV[34])){
	goto T2889;}
	V1429= Cnil;
	goto T2888;
	goto T2889;
T2889:;
	if(!((CMPcadr((V1426)))==(VV[195]))){
	goto T2892;}
	(base0[2]->c.c_car)= Ct;
	(base0[1]->c.c_car)= Ct;
	V1429= (V1426);
	goto T2888;
	goto T2892;
T2892:;
	if(!((CMPcadr((V1426)))==(VV[196]))){
	goto T2899;}
	(base0[0]->c.c_car)= Ct;
	(base0[1]->c.c_car)= Ct;
	V1429= (V1426);
	goto T2888;
	goto T2899;
T2899:;
	V1429= Cnil;
	goto T2888;
T2888:;
	if(((V1429))==Cnil){
	goto T2906;}
	base[3]= (V1429);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2906;
T2906:;
	if((CMPcar((V1426)))==(VV[197])){
	goto T2910;}
	if((CMPcar((V1426)))==(VV[198])){
	goto T2910;}
	if(!((CMPcar((V1426)))==(VV[199]))){
	goto T2909;}
	goto T2910;
T2910:;
	base[3]= CMPcaddr((V1426));
	vs_top=(vs_base=base+3)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2909;}
	{object V1430;
	V1430= (*(LnkLI490))((V1426),(base0[5]->c.c_car),(V1428));
	{object V1431= CMPcar((V1426));
	if((V1431!= VV[197]))goto T2919;
	base[3]= (*(LnkLI491))((base0[4]->c.c_car),(V1430),(V1426));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2919;
T2919:;
	if((V1431!= VV[198]))goto T2920;
	base[3]= (*(LnkLI492))((base0[4]->c.c_car),(V1430),(V1426));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2920;
T2920:;
	if((V1431!= VV[199]))goto T2921;
	base[3]= (*(LnkLI493))((base0[4]->c.c_car),(V1430),(V1426));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2921;
T2921:;
	FEerror("The ECASE key value ~s is illegal.",1,V1431);
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}}
	goto T2909;
T2909:;
	if(!((CMPcar((V1426)))==(VV[138]))){
	goto T2923;}
	if(!(type_of(CMPcadr((V1426)))==t_cons)){
	goto T2923;}
	if(!((CMPcar(CMPcadr((V1426))))==(VV[34]))){
	goto T2923;}
	base[3]= CMPcadr(CMPcadr((V1426)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk494)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2923;}
	base[3]= (*(LnkLI495))((V1426),(base0[5]->c.c_car),(V1428),(base0[4]->c.c_car),(base0[3]->c.c_car));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2923;
T2923:;
	if(type_of(CMPcar((V1426)))==t_symbol){
	goto T2934;}
	if(!(type_of(CMPcar((V1426)))==t_cons)){
	goto T2933;}
	if(!((CMPcaar((V1426)))==(VV[30]))){
	goto T2933;}
	goto T2934;
T2934:;
	base[3]= CMPcar((V1426));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk494)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2933;}
	base[3]= (*(LnkLI495))((V1426),(base0[5]->c.c_car),(V1428),(base0[4]->c.c_car),(base0[3]->c.c_car));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2933;
T2933:;
	if(!((CMPcar((V1426)))==(VV[200]))){
	goto T2943;}
	if(((VV[22]->s.s_dbind))==Cnil){
	goto T2943;}
	{object V1432= CMPcadddr((V1426));
	if((V1432!= VV[254]))goto T2948;
	{object V1433;
	V1433= CMPcaddr((V1426));
	(VV[23]->s.s_dbind)= make_cons((V1433),(VV[23]->s.s_dbind));
	goto T2947;}
	goto T2948;
T2948:;
	if((V1432!= VV[256]))goto T2951;
	{object V1434;
	V1434= CMPcaddr((V1426));
	(VV[24]->s.s_dbind)= make_cons((V1434),(VV[24]->s.s_dbind));
	goto T2947;}
	goto T2951;
T2951:;
	if((V1432!= VV[258]))goto T2954;
	{object V1435;
	V1435= CMPcaddr((V1426));
	(VV[25]->s.s_dbind)= make_cons((V1435),(VV[25]->s.s_dbind));
	goto T2947;}
	goto T2954;
T2954:;}
	goto T2947;
T2947:;
	base[3]= make_cons(CMPcadr((V1426)),CMPcddddr((V1426)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2943;
T2943:;
	base[3]= (V1426);
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
	{register object V1436;
	check_arg(1);
	V1436=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object x= (V1436),V1437= VV[183];
	while(V1437!=Cnil)
	if(x==(V1437->c.c_car)){
	goto T2959;
	}else V1437=V1437->c.c_cdr;
	goto T2958;}
	goto T2959;
T2959:;
	{object V1438= (V1436);
	if((V1438!= VV[407]))goto T2961;
	base0[7]= VV[184];
	goto T2960;
	goto T2961;
T2961:;
	if((V1438!= VV[62]))goto T2963;
	base0[7]= VV[185];
	goto T2960;
	goto T2963;
T2963:;
	if((V1438!= VV[63]))goto T2965;
	goto T2960;
	goto T2965;
T2965:;
	if((V1438!= VV[170]))goto T2966;
	base0[7]= VV[186];
	goto T2960;
	goto T2966;
T2966:;
	if((V1438!= VV[56]))goto T2968;
	base0[7]= VV[187];
	goto T2960;
	goto T2968;
T2968:;
	base[1]= VV[188];
	base[2]= (V1436);
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
	{object V1439= base0[7];
	if((V1439!= VV[181]))goto T2972;
	V1440= list(2,(V1436),list(2,VV[189],base0[5]));
	base[1]= make_cons(/* INLINE-ARGS */V1440,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2972;
T2972:;
	if((V1439!= VV[184]))goto T2973;
	if(type_of((V1436))==t_cons){
	goto T2975;}
	V1441= list(2,(V1436),list(3,VV[116],base0[5],list(2,VV[189],base0[5])));
	base[1]= make_cons(/* INLINE-ARGS */V1441,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2975;
T2975:;
	if((CMPcddr((V1436)))!=Cnil){
	goto T2978;}
	V1442= CMPcar((V1436));
	V1443= list(2,/* INLINE-ARGS */V1442,list(4,VV[130],base0[5],list(2,VV[189],base0[5]),CMPcadr((V1436))));
	base[1]= make_cons(/* INLINE-ARGS */V1443,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2978;
T2978:;
	V1444= list(2,CMPcaddr((V1436)),base0[5]);
	V1445= CMPcar((V1436));
	base[1]= list(2,/* INLINE-ARGS */V1444,list(2,/* INLINE-ARGS */V1445,list(4,VV[130],base0[5],list(2,VV[189],base0[5]),CMPcadr((V1436)))));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2973;
T2973:;
	if((V1439!= VV[186]))goto T2980;
	V1446= list(2,(V1436),base0[5]);
	base[1]= make_cons(/* INLINE-ARGS */V1446,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2980;
T2980:;
	if((V1439!= VV[185]))goto T2981;
	if(type_of((V1436))==t_cons){
	goto T2983;}
	base[1]= (V1436);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk488)();
	vs_top=sup;
	V1447= vs_base[0];
	V1448 = base0[5];
	V1449= list(2,(V1436),list(3,VV[190],V1447,V1448));
	base[1]= make_cons(/* INLINE-ARGS */V1449,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2983;
T2983:;
	if((CMPcddr((V1436)))!=Cnil){
	goto T2988;}
	{object V1450;
	object V1451;
	if(!(type_of(CMPcar((V1436)))==t_cons)){
	goto T2992;}
	base[1]= CMPcaar((V1436));
	base[2]= CMPcadar((V1436));
	vs_top=(vs_base=base+1)+2;
	goto T2990;
	goto T2992;
T2992:;
	base[2]= CMPcar((V1436));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk488)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= CMPcar((V1436));
	vs_top=(vs_base=base+1)+2;
	goto T2990;
T2990:;
	if(vs_base>=vs_top){vs_top=sup;goto T2999;}
	V1450= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T3000;}
	V1451= vs_base[0];
	vs_top=sup;
	goto T3001;
	goto T2999;
T2999:;
	V1450= Cnil;
	goto T3000;
T3000:;
	V1451= Cnil;
	goto T3001;
T3001:;
	V1452= list(2,base0[6],list(3,VV[191],(V1450),base0[5]));
	V1453= list(2,VV[192],base0[6]);
	base[1]= list(2,/* INLINE-ARGS */V1452,list(2,(V1451),list(4,VV[130],/* INLINE-ARGS */V1453,list(2,VV[193],base0[6]),CMPcadr((V1436)))));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2988;
T2988:;
	{object V1454;
	object V1455;
	if(!(type_of(CMPcar((V1436)))==t_cons)){
	goto T3004;}
	base[1]= CMPcaar((V1436));
	base[2]= CMPcadar((V1436));
	vs_top=(vs_base=base+1)+2;
	goto T3002;
	goto T3004;
T3004:;
	base[2]= CMPcar((V1436));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk488)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= CMPcar((V1436));
	vs_top=(vs_base=base+1)+2;
	goto T3002;
T3002:;
	if(vs_base>=vs_top){vs_top=sup;goto T3011;}
	V1454= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T3012;}
	V1455= vs_base[0];
	vs_top=sup;
	goto T3013;
	goto T3011;
T3011:;
	V1454= Cnil;
	goto T3012;
T3012:;
	V1455= Cnil;
	goto T3013;
T3013:;
	V1456= list(2,base0[6],list(3,VV[191],(V1454),base0[5]));
	V1457= list(2,CMPcaddr((V1436)),base0[6]);
	V1458= list(2,VV[192],base0[6]);
	base[1]= list(3,/* INLINE-ARGS */V1456,/* INLINE-ARGS */V1457,list(2,(V1455),list(4,VV[130],/* INLINE-ARGS */V1458,list(2,VV[193],base0[6]),CMPcadr((V1436)))));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2981;
T2981:;
	if((V1439!= VV[187]))goto T3014;
	base[1]= make_cons((V1436),Cnil);
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
	{object V1459;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1459=(base[0]);
	vs_top=sup;
	base[1]= STREF(object,(base0[0]->c.c_car),0);
	base[2]= (V1459);
	{object V1460;
	V1460= STREF(object,(base0[0]->c.c_car),4);
	 vs_top=base+3;
	 while(V1460!=Cnil)
	 {vs_push((V1460)->c.c_car);V1460=(V1460)->c.c_cdr;}
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
	{object V1461;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1461=(base[0]);
	vs_top=sup;
	base[1]= STREF(object,(base0[2]->c.c_car),0);
	base[2]= STREF(object,(base0[2]->c.c_car),4);
	base[3]= STREF(object,(base0[2]->c.c_car),8);
	{object V1462;
	if(((base0[0]->c.c_car))==Cnil){
	goto T3025;}
	{object V1463;
	object V1464;
	V1463= nthcdr(fix((base0[1]->c.c_car)),(V1461));
	base[6]= (V1461);
	base[7]= (V1463);
	vs_top=(vs_base=base+6)+2;
	Lldiff();
	vs_top=sup;
	V1464= vs_base[0];
	V1462= nconc((V1464),(V1463));
	goto T3023;}
	goto T3025;
T3025:;
	V1462= (V1461);
	goto T3023;
T3023:;
	 vs_top=base+4;
	 while(V1462!=Cnil)
	 {vs_push((V1462)->c.c_car);V1462=(V1462)->c.c_cdr;}
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
	{register object V1465;
	check_arg(1);
	V1465=(base[0]);
	vs_top=sup;
	if(!(type_of((V1465))==t_cons)){
	goto T3032;}
	if((CMPcar((V1465)))==(VV[31])){
	goto T3034;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3034;
T3034:;
	base[1]= CMPcadr((V1465));
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
	{register object V1466;
	base[1]= CMPcadr((V1465));
	vs_top=(vs_base=base+1)+1;
	Leval();
	vs_top=sup;
	V1466= vs_base[0];{object V1467;
	V1467= (*(LnkLI365))((V1466));
	if(V1467==Cnil)goto T3041;
	base[1]= V1467;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3041;
T3041:;}
	if(!(type_of((V1466))==t_fixnum||type_of((V1466))==t_bignum)){
	goto T3043;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3043;
T3043:;
	if(type_of((V1466))==t_character){
	goto T3045;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3045;
T3045:;
	base[1]= (V1466);
	vs_top=(vs_base=base+1)+1;
	Lstandard_char_p();
	return;}
	goto T3032;
T3032:;
	base[1]= (*(LnkLI365))((V1465));
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
	{object V1468;
	check_arg(1);
	V1468=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[9];
	base[2]= (V1468);
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
	{object V1469;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1469=(base[0]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	base[1]= vs_base[0];
	{object V1470;
	V1470= (V1469);
	 vs_top=base+2;
	 while(V1470!=Cnil)
	 {vs_push((V1470)->c.c_car);V1470=(V1470)->c.c_cdr;}
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

