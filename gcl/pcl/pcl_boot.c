
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
	{object V6;
	base[2]= 
	make_cclosure_new(LC128,Cnil,base[0],Cdata);
	base[3]= (V3);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk346)();
	vs_top=sup;
	V6= vs_base[0];
	base[2]= ({object _tmp=get(VV[347],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[347])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[347])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[3]= (V6);
	base[4]= V3;
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	{object V7 = vs_base[0];
	VMR1(V7)}}
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
	base[5]= (*(LnkLI348))(base[2],base[3],base[4]);
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
	goto T7;}
	(void)((*(LnkLI349))(CMPcadr((V12))));
	goto T7;
T7:;
	{register object V15;
	object V16;
	V15= Cnil;
	V16= Cnil;
	{register object V17;
	register object V18;
	V17= (V14);
	V18= CMPcar((V17));
	goto T15;
T15:;
	if(!(((V17))==Cnil)){
	goto T16;}
	goto T11;
	goto T16;
T16:;
	{object V19= CMPcar((V18));
	if((V19!= VV[0]))goto T21;
	base[1]= (V15);
	base[2]= VV[0];
	vs_top=(vs_base=base+1)+2;
	Lgetf();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T23;}
	base[1]= VV[0];
	vs_top=(vs_base=base+1)+1;
	L5(base);
	vs_top=sup;
	goto T20;
	goto T23;
T23:;
	{register object V21;
	V21= list(2,VV[1],CMPcdr((V18)));
	{object V22;
	base[2]= (V15);
	base[3]= (V21);
	base[4]= VV[0];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V22= vs_base[0];
	V15= (V22);
	goto T20;}}
	goto T21;
T21:;
	if((V19!= VV[45]))goto T35;
	{register object V24;
	V25= CMPcdr((V18));
	base[2]= (V15);
	base[3]= VV[2];
	vs_top=(vs_base=base+2)+2;
	Lgetf();
	vs_top=sup;
	V26= vs_base[0];
	V24= append(/* INLINE-ARGS */V25,V26);
	{object V27;
	base[2]= (V15);
	base[3]= (V24);
	base[4]= VV[2];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V27= vs_base[0];
	V15= (V27);
	goto T20;}}
	goto T35;
T35:;
	if((V19!= VV[3]))goto T46;
	base[1]= (V15);
	base[2]= VV[3];
	vs_top=(vs_base=base+1)+2;
	Lgetf();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T48;}
	base[1]= VV[3];
	vs_top=(vs_base=base+1)+1;
	L5(base);
	vs_top=sup;
	goto T20;
	goto T48;
T48:;
	{register object V29;
	V29= list(2,VV[1],CMPcadr((V18)));
	{object V30;
	base[2]= (V15);
	base[3]= (V29);
	base[4]= VV[3];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V30= vs_base[0];
	V15= (V30);
	goto T20;}}
	goto T46;
T46:;
	if((V19!= VV[4]))goto T60;
	base[1]= (V15);
	base[2]= VV[4];
	vs_top=(vs_base=base+1)+2;
	Lgetf();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T62;}
	base[1]= VV[4];
	vs_top=(vs_base=base+1)+1;
	L5(base);
	vs_top=sup;
	goto T20;
	goto T62;
T62:;
	{register object V32;
	V32= list(2,VV[1],CMPcdr((V18)));
	{object V33;
	base[2]= (V15);
	base[3]= (V32);
	base[4]= VV[4];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V33= vs_base[0];
	V15= (V33);
	goto T20;}}
	goto T60;
T60:;
	if((V19!= VV[5]))goto T74;
	base[1]= (V15);
	base[2]= VV[5];
	vs_top=(vs_base=base+1)+2;
	Lgetf();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T76;}
	base[1]= VV[5];
	vs_top=(vs_base=base+1)+1;
	L5(base);
	vs_top=sup;
	goto T20;
	goto T76;
T76:;
	{register object V35;
	V35= list(2,VV[1],CMPcadr((V18)));
	{object V36;
	base[2]= (V15);
	base[3]= (V35);
	base[4]= VV[5];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V36= vs_base[0];
	V15= (V36);
	goto T20;}}
	goto T74;
T74:;
	if((V19!= VV[6]))goto T88;
	base[1]= (V15);
	base[2]= VV[6];
	vs_top=(vs_base=base+1)+2;
	Lgetf();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T90;}
	base[1]= VV[6];
	vs_top=(vs_base=base+1)+1;
	L5(base);
	vs_top=sup;
	goto T20;
	goto T90;
T90:;
	{register object V38;
	V38= list(2,VV[1],CMPcadr((V18)));
	{object V39;
	base[2]= (V15);
	base[3]= (V38);
	base[4]= VV[6];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V39= vs_base[0];
	V15= (V39);
	goto T20;}}
	goto T88;
T88:;
	if((V19!= VV[209]))goto T102;
	{object V40;
	V40= listA(3,VV[7],(V12),CMPcdr((V18)));
	V16= make_cons((V40),(V16));
	goto T20;}
	goto T102;
T102:;
	FEerror("The ECASE key value ~s is illegal.",1,V19);
	goto T20;}
	goto T20;
T20:;
	V17= CMPcdr((V17));
	V18= CMPcar((V17));
	goto T15;}
	goto T11;
T11:;
	{object V41;
	base[0]= (V15);
	base[1]= VV[2];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V41= vs_base[0];
	if(((V41))==Cnil){
	goto T10;}
	{object V43;
	V43= list(2,VV[1],(V41));
	{object V44;
	base[1]= (V15);
	base[2]= (V43);
	base[3]= VV[2];
	vs_top=(vs_base=base+1)+3;
	siLput_f();
	vs_top=sup;
	V44= vs_base[0];
	V15= (V44);}}}
	goto T10;
T10:;
	V45= list(2,VV[1],(V12));
	V46= list(3,VV[10],/* INLINE-ARGS */V45,list(2,VV[1],(V13)));
	V47= list(2,VV[11],(V12));{object V48;
	V48= (VV[12]->s.s_dbind);
	V49= list(2,VV[1],(V12));
	V50= listA(4,VV[13],/* INLINE-ARGS */V49,list(2,VV[1],(V13)),(V15));
	V51= (*(LnkLI350))(/* INLINE-ARGS */V47,V48,/* INLINE-ARGS */V50);
	V52= list(2,VV[14],(V12));
	V53= make_cons(/* INLINE-ARGS */V52,Cnil);
	{object V54 = listA(4,VV[9],/* INLINE-ARGS */V46,/* INLINE-ARGS */V51,append((V16),/* INLINE-ARGS */V53));
	VMR3(V54)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOAD-DEFGENERIC	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{register object V55;
	object V56;
	object V57;
	if(vs_top-vs_base<2) too_few_arguments();
	V55=(base[0]);
	V56=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V57=(base[2]);
	vs_top=sup;
	if(!(type_of((V55))==t_cons||((V55))==Cnil)){
	goto T122;}
	(void)((*(LnkLI349))(CMPcadr((V55))));
	goto T122;
T122:;
	base[3]= (V55);
	base[4]= VV[15];
	base[5]= (V56);
	base[6]= VV[16];
	V59= list(2,VV[11],(V55));
	vs_base=vs_top;
	(void) (*Lnk351)();
	vs_top=sup;
	V60= vs_base[0];
	base[7]= list(2,/* INLINE-ARGS */V59,V60);
	{object V58;
	V58= (V57);
	 vs_top=base+8;
	 while(V58!=Cnil)
	 {vs_push((V58)->c.c_car);V58=(V58)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk352)();
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
	{object V61=base[0]->c.c_cdr;
	base[2]= V61;}
	{object V62;
	object V63;
	object V64;
	object V65;
	base[3]= base[2];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk353)();
	if(vs_base>=vs_top){vs_top=sup;goto T134;}
	V62= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T135;}
	V63= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T136;}
	V64= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T137;}
	V65= vs_base[0];
	vs_top=sup;
	goto T138;
	goto T134;
T134:;
	V62= Cnil;
	goto T135;
T135:;
	V63= Cnil;
	goto T136;
T136:;
	V64= Cnil;
	goto T137;
T137:;
	V65= Cnil;
	goto T138;
T138:;
	{object V66;
	object V67;
	base[3]= (V62);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk354)();
	if(vs_base>=vs_top){vs_top=sup;goto T141;}
	V66= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T142;}
	V67= vs_base[0];
	vs_top=sup;
	goto T143;
	goto T141;
T141:;
	V66= Cnil;
	goto T142;
T142:;
	V67= Cnil;
	goto T143;
T143:;
	base[3]= (*(LnkLI355))((V62),(V66),(V67),(V63),(V64),(V65),base[1]);
	vs_top=(vs_base=base+3)+1;
	return;}}
}
/*	function definition for PROTOTYPES-FOR-MAKE-METHOD-LAMBDA	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V68;
	check_arg(1);
	V68=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[17]->s.s_dbind))==(VV[18])){
	goto T145;}
	base[1]= Cnil;
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
	goto T145;
T145:;
	{register object V69;
	if(((*(LnkLI356))((V68)))!=Cnil){
	goto T150;}
	V69= Cnil;
	goto T149;
	goto T150;
T150:;
	V69= (*(LnkLI347))((V68));
	goto T149;
T149:;
	if(((V69))==Cnil){
	goto T152;}
	base[1]= (V69);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk357)(Lclptr357);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T153;}
	goto T152;
T152:;
	base[2]= (VFUN_NARGS=1,(*(LnkLI291))(VV[19]));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk302)(Lclptr302);
	vs_top=sup;
	base[1]= vs_base[0];
	base[3]= (VFUN_NARGS=1,(*(LnkLI291))(VV[20]));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk302)(Lclptr302);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	return;
	goto T153;
T153:;
	base[1]= (V69);{object V70;
	base[4]= (V69);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk358)(Lclptr358);
	vs_top=sup;
	V70= vs_base[0];
	if(V70==Cnil)goto T165;
	base[3]= V70;
	goto T164;
	goto T165;
T165:;}
	base[3]= (VFUN_NARGS=1,(*(LnkLI291))(VV[20]));
	goto T164;
T164:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk302)(Lclptr302);
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
	{object V71;
	check_arg(1);
	V71=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V72;
	if(((*(LnkLI356))((V71)))!=Cnil){
	goto T169;}
	V72= Cnil;
	goto T168;
	goto T169;
T169:;
	V72= (*(LnkLI347))((V71));
	goto T168;
T168:;
	if(!(((((VV[17]->s.s_dbind))==(VV[18])?Ct:Cnil))==Cnil)){
	goto T172;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T172;
T172:;
	if(((V72))==Cnil){
	goto T174;}
	base[1]= (V72);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk357)(Lclptr357);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T175;}
	goto T174;
T174:;
	base[1]= (VFUN_NARGS=1,(*(LnkLI291))(VV[20]));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk302)(Lclptr302);
	return;
	goto T175;
T175:;{object V73;
	base[2]= (V72);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk358)(Lclptr358);
	vs_top=sup;
	V73= vs_base[0];
	if(V73==Cnil)goto T182;
	base[1]= V73;
	goto T181;
	goto T182;
T182:;}
	base[1]= (VFUN_NARGS=1,(*(LnkLI291))(VV[20]));
	goto T181;
T181:;
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk302)(Lclptr302);
	return;}
	}
}
/*	local entry for function EXPAND-DEFMETHOD	*/

static object LI10(V81,V82,V83,V84,V85,V86,V87)

register object V81;object V82;register object V83;object V84;object V85;object V86;object V87;
{	 VMB8 VMS8 VMV8
	bds_check;
	goto TTL;
TTL:;
	if(!(type_of((V81))==t_cons||((V81))==Cnil)){
	goto T185;}
	(void)((*(LnkLI349))(CMPcadr((V81))));
	goto T185;
T185:;
	bds_bind(VV[21],Cnil);
	bds_bind(VV[22],Ct);
	bds_bind(VV[23],Cnil);
	bds_bind(VV[24],Cnil);
	bds_bind(VV[25],Cnil);
	{object V88;
	object V89;
	object V90;
	base[5]= (V81);
	base[6]= (V84);
	base[7]= (V85);
	base[8]= (V86);
	base[9]= (V87);
	vs_top=(vs_base=base+5)+5;
	(void) (*Lnk359)();
	if(vs_base>=vs_top){vs_top=sup;goto T194;}
	V88= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T195;}
	V89= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T196;}
	V90= vs_base[0];
	vs_top=sup;
	goto T197;
	goto T194;
T194:;
	V88= Cnil;
	goto T195;
T195:;
	V89= Cnil;
	goto T196;
T196:;
	V90= Cnil;
	goto T197;
T197:;
	{object V91;
	object V92;
	base[5]= (V82);
	base[6]= (V83);
	base[7]= (V88);
	base[8]= (V87);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk360)(Lclptr360);
	if(vs_base>=vs_top){vs_top=sup;goto T203;}
	V91= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T204;}
	V92= vs_base[0];
	vs_top=sup;
	goto T205;
	goto T203;
T203:;
	V91= Cnil;
	goto T204;
T204:;
	V92= Cnil;
	goto T205;
T205:;
	{object V93;
	base[5]= (V82);
	base[6]= (V83);
	base[7]= (V91);
	base[8]= (V92);
	base[9]= (V87);
	vs_top=(vs_base=base+5)+5;
	(void) (*Lnk361)(Lclptr361);
	vs_top=sup;
	V93= vs_base[0];
	V94= list(2,VV[1],(V81));
	V95= list(3,VV[10],/* INLINE-ARGS */V94,list(2,VV[1],(V85)));
	if(((VV[21]->s.s_dbind))==Cnil){
	goto T215;}
	V97= list(2,VV[26],list(2,VV[1],(VV[21]->s.s_dbind)));
	base[5]= make_cons(/* INLINE-ARGS */V97,Cnil);
	goto T213;
	goto T215;
T215:;
	base[5]= Cnil;
	goto T213;
T213:;
	if(((VV[23]->s.s_dbind))!=Cnil){
	goto T218;}
	if(((VV[24]->s.s_dbind))!=Cnil){
	goto T218;}
	if(((VV[25]->s.s_dbind))==Cnil){
	goto T219;}
	goto T218;
T218:;
	V98= list(2,VV[1],(VV[23]->s.s_dbind));
	V99= list(2,VV[1],(VV[24]->s.s_dbind));
	V100= list(4,VV[27],/* INLINE-ARGS */V98,/* INLINE-ARGS */V99,list(2,VV[1],(VV[25]->s.s_dbind)));
	base[6]= make_cons(/* INLINE-ARGS */V100,Cnil);
	goto T217;
	goto T219;
T219:;
	base[6]= Cnil;
	goto T217;
T217:;
	V101 = (V81);
	V102 = (V84);
	V103 = (V90);
	V104 = (V89);
	if(((V83))==Cnil){
	goto T228;}
	base[8]= (*(LnkLI363))((V83));
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	V105= vs_base[0];
	goto T226;
	goto T228;
T228:;
	V105= VV[20];
	goto T226;
T226:;
	V106 = (V93);
	base[9]= (V92);
	base[10]= VV[28];
	vs_top=(vs_base=base+9)+2;
	Lgetf();
	vs_top=sup;
	base[8]= vs_base[0];
	base[9]= VV[29];
	vs_top=(vs_base=base+8)+2;
	Lgetf();
	vs_top=sup;
	V107= vs_base[0];
	V108= (VFUN_NARGS=7,(*(LnkLI362))(V101,V102,V103,V104,V105,V106,V107));
	base[7]= make_cons(/* INLINE-ARGS */V108,Cnil);
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V96= vs_base[0];
	{object V109 = listA(3,VV[9],/* INLINE-ARGS */V95,V96);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR8(V109)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INTERNED-SYMBOL-P	*/

static object LI11(V111)

object V111;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	if(type_of((V111))==t_symbol){
	goto T236;}
	{object V112 = Cnil;
	VMR9(V112)}
	goto T236;
T236:;
	base[0]= (V111);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	{object V113 = vs_base[0];
	VMR9(V113)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-DEFMETHOD-FORM	*/

static object LI12(object V119,object V118,object V117,object V116,object V115,object V114,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	bds_check;
	{register object V120;
	register object V121;
	register object V122;
	object V123;
	object V124;
	register object V125;
	object V126;
	va_start(ap,first);
	if(narg <6) too_few_arguments();
	V120= V119;
	V121= V118;
	V122= V117;
	V123= V116;
	V124= V115;
	V125= V114;
	narg = narg - 6;
	if (narg <= 0) goto T239;
	else {
	V126= first;}
	--narg; goto T240;
	goto T239;
T239:;
	V126= Cnil;
	goto T240;
T240:;
	{object V127;
	register object V128;
	V127= Cnil;
	V128= Cnil;
	if(!(type_of((V120))==t_cons)){
	goto T248;}
	if((CMPcar((V120)))==(VV[30])){
	goto T250;}
	V129= Cnil;
	goto T246;
	goto T250;
T250:;
	V129= CMPcadr((V120));
	goto T246;
	goto T248;
T248:;
	V129= (V120);
	goto T246;
T246:;
	if(((*(LnkLI365))(V129))==Cnil){
	goto T243;}
	base[0]= (VV[365]->s.s_gfdef);
	base[1]= (V121);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk366)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T243;}
	base[0]= VV[367];
	base[1]= (V122);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk366)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T243;}
	if(!(type_of((V125))==t_cons)){
	goto T243;}
	if(!((CMPcar((V125)))==(VV[32]))){
	goto T243;}
	{register object x= CMPcadr((V125)),V130= VV[33];
	while(V130!=Cnil)
	if(x==(V130->c.c_car)){
	goto T265;
	}else V130=V130->c.c_cdr;
	goto T243;}
	goto T265;
T265:;
	V127= CMPcaddr((V125));
	V131 = (V127);
	if(!(type_of(V131)==t_cons)){
	goto T243;}
	if(!((CMPcar((V127)))==(VV[14]))){
	goto T243;}
	V128= CMPcadr((V127));
	V132 = (V128);
	if(!(type_of(V132)==t_cons)){
	goto T243;}
	if(!((CMPcar((V128)))==(VV[34]))){
	goto T243;}
	{object V133;
	object V134;
	object V135;
	{object V136;
	object V137= (V122);
	if(V137==Cnil){
	V133= Cnil;
	goto T275;}
	base[3]=V136=MMcons(Cnil,Cnil);
	goto T276;
T276:;
	{register object V138;
	V138= (V137->c.c_car);
	if(!(type_of((V138))==t_cons)){
	goto T279;}
	V139= CMPcar((V138));
	base[4]= CMPcadr((V138));
	vs_top=(vs_base=base+4)+1;
	Leval();
	vs_top=sup;
	V140= vs_base[0];
	(V136->c.c_car)= list(2,/* INLINE-ARGS */V139,V140);
	goto T277;
	goto T279;
T279:;
	(V136->c.c_car)= (V138);}
	goto T277;
T277:;
	if((V137=MMcdr(V137))==Cnil){
	V133= base[3];
	goto T275;}
	V136=MMcdr(V136)=MMcons(Cnil,Cnil);
	goto T276;}
	goto T275;
T275:;
	if(!((CMPcadr((V125)))==(VV[35]))){
	goto T286;}
	V141= VV[36];
	goto T284;
	goto T286;
T286:;
	V141= VV[37];
	goto T284;
T284:;
	V142 = (V120);
	V143= make_cons((V133),Cnil);
	V134= listA(3,V141,V142,append((V121),/* INLINE-ARGS */V143));
	bds_bind(VV[38],Cnil);
	base[5]= Cnil;
	base[6]= VV[39];
	base[7]= (V134);
	vs_top=(vs_base=base+5)+3;
	Lformat();
	vs_top=sup;
	bds_unwind1;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Lintern();
	vs_top=sup;
	V135= vs_base[0];{object V144;
	V144= (VV[41]->s.s_dbind);
	V145= listA(4,VV[42],(V135),CMPcadr((V128)),CMPcddr((V128)));
	V146= list(2,VV[1],(V133));
	V147= CMPcadr((V125));
	V148= listA(4,VV[32],/* INLINE-ARGS */V147,list(2,VV[14],(V135)),CMPcdddr((V125)));
	{object V149 = list(4,VV[40],V144,/* INLINE-ARGS */V145,(VFUN_NARGS=7,(*(LnkLI368))((V120),(V121),/* INLINE-ARGS */V146,(V123),(V124),/* INLINE-ARGS */V148,(V126))));
	VMR10(V149)}}}
	goto T243;
T243:;
	V150= make_cons((V122),Cnil);
	V151= listA(3,VV[7],(V120),append((V121),/* INLINE-ARGS */V150));{object V152;
	V152= (VV[41]->s.s_dbind);
	{object V154;
	object V155= (V122);
	if(V155==Cnil){
	V153= Cnil;
	goto T293;}
	base[0]=V154=MMcons(Cnil,Cnil);
	goto T294;
T294:;
	{register object V156;
	V156= (V155->c.c_car);
	if(!(type_of((V156))==t_cons)){
	goto T297;}
	(V154->c.c_car)= list(3,VV[43],list(2,VV[1],CMPcar((V156))),CMPcadr((V156)));
	goto T295;
	goto T297;
T297:;
	(V154->c.c_car)= list(2,VV[1],(V156));}
	goto T295;
T295:;
	if((V155=MMcdr(V155))==Cnil){
	V153= base[0];
	goto T293;}
	V154=MMcdr(V154)=MMcons(Cnil,Cnil);
	goto T294;}
	goto T293;
T293:;
	V157= make_cons(VV[43],V153);
	V158= (VFUN_NARGS=7,(*(LnkLI368))((V120),(V121),/* INLINE-ARGS */V157,(V123),(V124),(V125),(V126)));
	{object V159 = (*(LnkLI350))(/* INLINE-ARGS */V151,V152,/* INLINE-ARGS */V158);
	VMR10(V159)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAKE-DEFMETHOD-FORM-INTERNAL	*/

static object LI13(object V165,object V164,object V163,object V162,object V161,object V160,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V166;
	object V167;
	object V168;
	object V169;
	object V170;
	object V171;
	object V172;
	va_start(ap,first);
	if(narg <6) too_few_arguments();
	V166= V165;
	V167= V164;
	V168= V163;
	V169= V162;
	V170= V161;
	V171= V160;
	narg = narg - 6;
	if (narg <= 0) goto T299;
	else {
	V172= first;}
	--narg; goto T300;
	goto T299;
T299:;
	V172= Cnil;
	goto T300;
T300:;
	V173= list(2,VV[1],(V170));
	V174= list(2,VV[1],(V166));
	V175= list(2,VV[1],(V167));
	V176= list(2,VV[1],(V169));
	{object V177 = list(8,VV[44],/* INLINE-ARGS */V173,/* INLINE-ARGS */V174,/* INLINE-ARGS */V175,(V168),/* INLINE-ARGS */V176,(V171),list(2,VV[1],(V172)));
	VMR11(V177)}
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
	{object V178=base[0]->c.c_cdr;
	if(endp(V178))invalid_macro_call();
	base[2]= (V178->c.c_car);
	V178=V178->c.c_cdr;
	if(!endp(V178))invalid_macro_call();}
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
	{object V179;
	object V180;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V179=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T304;}
	V180=(base[1]);
	vs_top=sup;
	goto T305;
	goto T304;
T304:;
	V180= Cnil;
	goto T305;
T305:;
	{object V181;
	object V182;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk354)();
	if(vs_base>=vs_top){vs_top=sup;goto T309;}
	V181= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T310;}
	V182= vs_base[0];
	vs_top=sup;
	goto T311;
	goto T309;
T309:;
	V181= Cnil;
	goto T310;
T310:;
	V182= Cnil;
	goto T311;
T311:;
	{object V183;
	object V184;
	base[2]= (V181);
	base[3]= (V182);
	base[4]= (V179);
	base[5]= (V180);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk360)(Lclptr360);
	if(vs_base>=vs_top){vs_top=sup;goto T317;}
	V183= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T318;}
	V184= vs_base[0];
	vs_top=sup;
	goto T319;
	goto T317;
T317:;
	V183= Cnil;
	goto T318;
T318:;
	V184= Cnil;
	goto T319;
T319:;
	base[2]= (V181);
	base[3]= (V182);
	base[4]= (V183);
	base[5]= (V184);
	base[6]= (V180);
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
	{object V185;
	object V186;
	object V187;
	object V188;
	object V189;
	check_arg(5);
	V185=(base[0]);
	V186=(base[1]);
	V187=(base[2]);
	V188=(base[3]);
	V189=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V190;
	object V191;
	object V192;
	base[5]= (V187);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T327;}
	V190= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T328;}
	V191= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T329;}
	V192= vs_base[0];
	vs_top=sup;
	goto T330;
	goto T327;
T327:;
	V190= Cnil;
	goto T328;
T328:;
	V191= Cnil;
	goto T329;
T329:;
	V192= Cnil;
	goto T330;
T330:;
	{object V193;
	object V194;
	object V195;
	base[5]= (V188);
	base[6]= (V189);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk371)();
	if(vs_base>=vs_top){vs_top=sup;goto T334;}
	V193= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T335;}
	V194= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T336;}
	V195= vs_base[0];
	vs_top=sup;
	goto T337;
	goto T334;
T334:;
	V193= Cnil;
	goto T335;
T335:;
	V194= Cnil;
	goto T336;
T336:;
	V195= Cnil;
	goto T337;
T337:;
	if(((V193))==Cnil){
	goto T341;}
	V196= make_cons((V193),Cnil);
	goto T339;
	goto T341;
T341:;
	V196= Cnil;
	goto T339;
T339:;
	V197= list(2,VV[45],list(2,VV[46],list(3,(V185),(V186),(V192))));
	V198= list(2,VV[45],make_cons(VV[47],(V187)));
	V199= listA(3,/* INLINE-ARGS */V197,/* INLINE-ARGS */V198,append((V194),(V195)));
	base[5]= listA(3,VV[34],(V191),append(V196,/* INLINE-ARGS */V199));
	base[6]= (V191);
	base[7]= (V192);
	vs_top=(vs_base=base+5)+3;
	return;}}
	}
}
/*	local entry for function REAL-MAKE-METHOD-INITARGS-FORM	*/

static object LI17(V205,V206,V207,V208,V209)

object V205;object V206;register object V207;object V208;object V209;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(!(type_of((V207))==t_cons)){
	goto T346;}
	if((CMPcar((V207)))==(VV[34])){
	goto T345;}
	goto T346;
T346:;
	base[0]= VV[48];
	base[1]= (V207);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T345;
T345:;
	{object V210 = (*(LnkLI372))((V207),(V208),(V209));
	VMR15(V210)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for REAL-MAKE-METHOD-LAMBDA	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V211;
	object V212;
	object V213;
	object V214;
	check_arg(4);
	V211=(base[0]);
	V212=(base[1]);
	V213=(base[2]);
	V214=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V213);
	base[5]= (V214);
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
	{register object V215;
	object V216;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V215=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T354;}
	V216=(base[1]);
	vs_top=sup;
	goto T355;
	goto T354;
T354:;
	V216= Cnil;
	goto T355;
T355:;
	if(!(type_of((V215))==t_cons)){
	goto T358;}
	if((CMPcar((V215)))==(VV[34])){
	goto T357;}
	goto T358;
T358:;
	base[2]= VV[49];
	base[3]= (V215);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	vs_top=sup;
	goto T357;
T357:;
	{object V217;
	object V218;
	object V219;
	base[2]= CMPcddr((V215));
	base[3]= (V216);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk371)();
	if(vs_base>=vs_top){vs_top=sup;goto T367;}
	V217= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T368;}
	V218= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T369;}
	V219= vs_base[0];
	vs_top=sup;
	goto T370;
	goto T367;
T367:;
	V217= Cnil;
	goto T368;
T368:;
	V218= Cnil;
	goto T369;
T369:;
	V219= Cnil;
	goto T370;
T370:;
	{object V220;
	object V221;
	object V222;
	object V223;
	object V224;
	V220= (VFUN_NARGS=2,(*(LnkLI374))(VV[46],(V218)));
	V221= (VFUN_NARGS=2,(*(LnkLI374))(VV[47],(V218)));
	if(!(type_of((V220))==t_cons)){
	goto T375;}
	V222= CMPcar((V220));
	goto T373;
	goto T375;
T375:;
	V222= Cnil;
	goto T373;
T373:;
	if(((V222))==Cnil){
	goto T379;}
	V223= CMPcar((V222));
	goto T377;
	goto T379;
T379:;
	V223= Cnil;
	goto T377;
T377:;
	if((V221)!=Cnil){
	V224= (V221);
	goto T381;}
	V224= CMPcadr((V215));
	goto T381;
T381:;
	{object V225;
	register object V226;
	object V227;
	base[7]= (V224);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T384;}
	V225= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T385;}
	V226= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T386;}
	V227= vs_base[0];
	vs_top=sup;
	goto T387;
	goto T384;
T384:;
	V225= Cnil;
	goto T385;
T385:;
	V226= Cnil;
	goto T386;
T386:;
	V227= Cnil;
	goto T387;
T387:;
	{object V228;
	object V229;
	object V230;
	object V231;
	object V232;
	object V233;
	object V234;
	register object V235;
	register object V236;
	object V237;
	{object V238;
	object V239= (V225);
	object V240= (V227);
	if(V239==Cnil||V240==Cnil){
	V228= Cnil;
	goto T388;}
	base[17]=V238=MMcons(Cnil,Cnil);
	goto T389;
T389:;
	(V238->c.c_car)= (V239->c.c_car);
	if((V239=MMcdr(V239))==Cnil||(V240=MMcdr(V240))==Cnil){
	V228= base[17];
	goto T388;}
	V238=MMcdr(V238)=MMcons(Cnil,Cnil);
	goto T389;}
	goto T388;
T388:;
	{object V243;
	object V244= (V228);
	if(V244==Cnil){
	V229= Cnil;
	goto T391;}
	base[17]=V243=MMcons(Cnil,Cnil);
	goto T392;
T392:;
	(V243->c.c_car)= make_cons((V244->c.c_car),Cnil);
	if((V244=MMcdr(V244))==Cnil){
	V229= base[17];
	goto T391;}
	V243=MMcdr(V243)=MMcons(Cnil,Cnil);
	goto T392;}
	goto T391;
T391:;
	V230= make_cons(Cnil,Cnil);
	V231= (*(LnkLI375))((V224),(V228),(V218),(V222),(V227));
	base[17]= Cnil;
	{object V246;
	object V247= (V225);
	object V248= (V227);
	if(V247==Cnil||V248==Cnil){
	base[18]= Cnil;
	goto T399;}
	base[19]=V246=MMcons(Cnil,Cnil);
	goto T400;
T400:;
	if(type_of((V248->c.c_car))==t_symbol){
	goto T402;}
	(V246->c.c_car)= Cnil;
	goto T401;
	goto T402;
T402:;
	if(((((V248->c.c_car))==(Ct)?Ct:Cnil))==Cnil){
	goto T404;}
	(V246->c.c_car)= Cnil;
	goto T401;
	goto T404;
T404:;
	(V246->c.c_car)= list(3,VV[50],(V247->c.c_car),(V248->c.c_car));
	goto T401;
T401:;
	if((V247=MMcdr(V247))==Cnil||(V248=MMcdr(V248))==Cnil){
	base[18]= base[19];
	goto T399;}
	V246=MMcdr(V246)=MMcons(Cnil,Cnil);
	goto T400;}
	goto T399;
T399:;
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk376)();
	vs_top=sup;
	V245= vs_base[0];
	V232= make_cons(VV[45],V245);
	V251= make_cons(VV[9],(V231));
	if(!(type_of((V223))==t_cons||((V223))==Cnil)){
	goto T409;}
	V252= CMPcadr((V223));
	goto T407;
	goto T409;
T409:;
	V252= (V223);
	goto T407;
T407:;
	V253 = (V219);
	V254= list(2,/* INLINE-ARGS */V251,listA(3,VV[51],V252,V253));
	V233= listA(4,VV[34],(V226),(V232),append((V218),/* INLINE-ARGS */V254));
	if((CMPcdr((V219)))==Cnil){
	goto T412;}
	V234= Cnil;
	goto T411;
	goto T412;
T412:;
	base[17]= CMPcar((V219));
	vs_top=(vs_base=base+17)+1;
	Lconstantp();
	vs_top=sup;
	V234= vs_base[0];
	goto T411;
T411:;
	if((V234)==Cnil){
	V235= Cnil;
	goto T415;}
	base[17]= CMPcar((V219));
	vs_top=(vs_base=base+17)+1;
	Leval();
	vs_top=sup;
	V235= vs_base[0];
	goto T415;
T415:;
	if(((V234))==Cnil){
	goto T419;}
	base[17]= (V235);
	base[18]= VV[52];
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T418;}
	if(!(type_of((V235))==t_symbol)){
	goto T419;}
	base[17]= (V235);
	vs_top=(vs_base=base+17)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T419;}
	goto T418;
T418:;
	V236= list(2,VV[53],(V235));
	goto T417;
	goto T419;
T419:;
	V236= Cnil;
	goto T417;
T417:;
	{register object V255;
	register object V256;
	V255= (V226);
	V256= CMPcar((V255));
	goto T434;
T434:;
	if(!(((V255))==Cnil)){
	goto T435;}
	V237= Cnil;
	goto T430;
	goto T435;
T435:;
	{register object x= (V256),V257= VV[54];
	while(V257!=Cnil)
	if(x==(V257->c.c_car)){
	goto T442;
	}else V257=V257->c.c_cdr;
	goto T441;}
	goto T442;
T442:;
	V237= Ct;
	goto T430;
	goto T441;
T441:;
	if(!(((V256))==(VV[55]))){
	goto T439;}
	V237= Cnil;
	goto T430;
	goto T439;
T439:;
	V255= CMPcdr((V255));
	V256= CMPcar((V255));
	goto T434;}
	goto T430;
T430:;
	{object V258;
	object V259;
	object V260;
	object V261;
	base[17]= (V233);
	base[18]= (V228);
	base[19]= (V216);
	base[20]= (V229);
	base[21]= (V230);
	vs_top=(vs_base=base+17)+5;
	(void) (*Lnk377)();
	if(vs_base>=vs_top){vs_top=sup;goto T456;}
	V258= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T457;}
	V259= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T458;}
	V260= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T459;}
	V261= vs_base[0];
	vs_top=sup;
	goto T460;
	goto T456;
T456:;
	V258= Cnil;
	goto T457;
T457:;
	V259= Cnil;
	goto T458;
T458:;
	V260= Cnil;
	goto T459;
T459:;
	V261= Cnil;
	goto T460;
T460:;
	{object V262;
	object V263;
	object V264;
	base[17]= CMPcddr((V258));
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk371)();
	if(vs_base>=vs_top){vs_top=sup;goto T463;}
	V262= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T464;}
	V263= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T465;}
	V264= vs_base[0];
	vs_top=sup;
	goto T466;
	goto T463;
T463:;
	V262= Cnil;
	goto T464;
T464:;
	V263= Cnil;
	goto T465;
T465:;
	V264= Cnil;
	goto T466;
T466:;
	if(((V261))!=Cnil){
	goto T468;}
	if(((V259))==Cnil){
	goto T467;}
	goto T468;
T468:;
	V236= listA(3,VV[56],Ct,(V236));
	goto T467;
T467:;
	base[17]= (VV[378]->s.s_gfdef);
	base[18]= (V229);
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk379)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T473;}
	{object V265;
	object V266;
	base[17]= (V229);
	base[18]= (V230);
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk380)();
	if(vs_base>=vs_top){vs_top=sup;goto T481;}
	V265= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T482;}
	V266= vs_base[0];
	vs_top=sup;
	goto T483;
	goto T481;
T481:;
	V265= Cnil;
	goto T482;
T482:;
	V266= Cnil;
	goto T483;
T483:;
	{object V267;
	base[17]= VV[57];
	vs_top=(vs_base=base+17)+1;
	Lmake_symbol();
	vs_top=sup;
	V267= vs_base[0];
	if(((V265))==Cnil){
	goto T490;}
	base[17]= list(2,VV[58],(V265));
	goto T488;
	goto T490;
T490:;
	base[17]= Cnil;
	goto T488;
T488:;
	if(((V266))==Cnil){
	goto T494;}
	base[18]= list(2,VV[59],(V266));
	goto T492;
	goto T494;
T494:;
	base[18]= Cnil;
	goto T492;
T492:;
	base[19]= listA(3,VV[29],(V267),(V236));
	vs_top=(vs_base=base+17)+3;
	Lappend();
	vs_top=sup;
	V236= vs_base[0];
	V268= listA(3,VV[60],list(3,(V228),(V265),(V267)),(V264));
	V264= make_cons(/* INLINE-ARGS */V268,Cnil);}}
	goto T473;
T473:;
	{register object x= VV[61],V269= (V226);
	while(V269!=Cnil)
	if(x==(V269->c.c_car)){
	goto T501;
	}else V269=V269->c.c_cdr;
	goto T498;}
	goto T501;
T501:;
	{register object x= VV[62],V270= (V226);
	while(V270!=Cnil)
	if(x==(V270->c.c_car)){
	goto T498;
	}else V270=V270->c.c_cdr;}
	{object V271;
	{register object x= VV[55],V272= (V226);
	while(V272!=Cnil)
	if(x==(V272->c.c_car)){
	V271= V272;
	goto T503;
	}else V272=V272->c.c_cdr;
	V271= Cnil;}
	goto T503;
T503:;
	base[18]= (V226);
	base[19]= (V271);
	vs_top=(vs_base=base+18)+2;
	Lldiff();
	vs_top=sup;
	base[17]= vs_base[0];
	base[18]= make_cons(VV[62],Cnil);
	base[19]= (V271);
	vs_top=(vs_base=base+17)+3;
	Lnconc();
	vs_top=sup;
	V226= vs_base[0];}
	goto T498;
T498:;
	base[18]= (V226);
	base[19]= VV[65];
	base[20]= VV[66];
	base[21]= VV[67];
	base[22]= (V259);
	base[23]= VV[68];
	base[24]= (V261);
	base[25]= VV[69];
	base[26]= (V260);
	base[27]= VV[70];
	base[28]= (V237);
	vs_top=(vs_base=base+18)+11;
	Llist();
	vs_top=sup;
	V273= vs_base[0];
	base[17]= list(3,VV[34],VV[63],listA(3,VV[64],V273,append((V263),(V264))));
	if(((V236))==Cnil){
	goto T526;}
	V274= list(2,VV[28],(V236));
	goto T524;
	goto T526;
T526:;
	V274= Cnil;
	goto T524;
T524:;
	if(((V217))==Cnil){
	goto T530;}
	V275= list(2,VV[3],(V217));
	goto T528;
	goto T530;
T530:;
	V275= Cnil;
	goto T528;
T528:;
	base[18]= append(V274,V275);
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
	base[5]= V277;}
	V276=V276->c.c_cdr;
	base[6]= V276;}
	V278= list(2,base[3],base[4]);
	base[7]= list(4,VV[9],base[3],base[4],list(3,VV[71],/* INLINE-ARGS */V278,list(3,VV[72],base[5],listA(3,VV[73],list(2,base[2],base[3]),base[6]))));
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
	{object V279=base[0]->c.c_cdr;
	if(endp(V279))invalid_macro_call();
	{object V280= (V279->c.c_car);
	if(endp(V280))invalid_macro_call();
	base[2]= (V280->c.c_car);
	V280=V280->c.c_cdr;
	if(endp(V280))invalid_macro_call();
	base[3]= (V280->c.c_car);
	V280=V280->c.c_cdr;
	if(endp(V280))invalid_macro_call();
	base[4]= (V280->c.c_car);
	V280=V280->c.c_cdr;
	if(endp(V280))invalid_macro_call();
	base[5]= (V280->c.c_car);
	V280=V280->c.c_cdr;
	base[6]= V280;}
	V279=V279->c.c_cdr;
	base[7]= V279;}
	V281= list(3,base[4],base[5],base[3]);
	V282 = CMPmake_fixnum((long)length(base[4]));
	base[8]= list(3,VV[74],/* INLINE-ARGS */V281,list(3,VV[72],base[6],listA(3,VV[73],list(2,nthcdr(fix(V282),base[2]),base[5]),base[7])));
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
	{object V283=base[0]->c.c_cdr;
	if(endp(V283))invalid_macro_call();
	{object V284= (V283->c.c_car);
	if(endp(V284))invalid_macro_call();
	base[2]= (V284->c.c_car);
	V284=V284->c.c_cdr;
	if(endp(V284))invalid_macro_call();
	base[3]= (V284->c.c_car);
	V284=V284->c.c_cdr;
	if(!endp(V284))invalid_macro_call();}
	V283=V283->c.c_cdr;
	base[4]= V283;}
	V285= list(3,VV[43],VV[79],list(3,VV[43],VV[80],list(2,VV[1],base[3])));
	V286= list(2,VV[1],base[3]);
	V287= list(3,VV[43],/* INLINE-ARGS */V285,list(3,VV[43],/* INLINE-ARGS */V286,list(3,VV[43],VV[81],list(2,VV[1],base[3]))));
	V288= list(3,VV[76],VV[77],list(6,VV[32],VV[78],/* INLINE-ARGS */V287,VV[82],list(2,VV[1],base[3]),VV[83]));
	V289= list(4,VV[43],VV[90],VV[91],list(2,VV[1],base[2]));
	base[5]= listA(3,VV[75],list(3,/* INLINE-ARGS */V288,list(3,VV[84],VV[85],list(5,VV[43],VV[86],VV[87],list(5,VV[43],VV[88],VV[89],/* INLINE-ARGS */V289,list(2,VV[1],base[3])),VV[92])),VV[93]),base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function MAKE-METHOD-CALL	*/

static object LI23(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB21 VMS21 VMV21
	{object V290;
	object V291;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI23key,first,ap);
	if(Vcs[0]==0){
	V290= (VV[382]->s.s_gfdef);
	}else{
	V290=(Vcs[0]);}
	V291=(Vcs[1]);
	base[0]= VV[94];
	base[1]= (V290);
	base[2]= (V291);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V292 = vs_base[0];
	VMR21(V292)}
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
	{object V293=base[0]->c.c_cdr;
	if(endp(V293))invalid_macro_call();
	base[2]= (V293->c.c_car);
	V293=V293->c.c_cdr;
	if(endp(V293))invalid_macro_call();
	base[3]= (V293->c.c_car);
	V293=V293->c.c_cdr;
	if(endp(V293))invalid_macro_call();
	base[4]= (V293->c.c_car);
	V293=V293->c.c_cdr;
	if(!endp(V293))invalid_macro_call();}
	V294= list(2,VV[96],base[2]);
	V295= list(2,VV[97],base[3]);
	base[5]= listA(3,VV[95],list(3,/* INLINE-ARGS */V294,/* INLINE-ARGS */V295,list(2,VV[98],base[4])),VV[99]);
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
	{object V296=base[0]->c.c_cdr;
	if(endp(V296))invalid_macro_call();
	base[2]= (V296->c.c_car);
	V296=V296->c.c_cdr;
	if(endp(V296))invalid_macro_call();
	base[3]= (V296->c.c_car);
	V296=V296->c.c_cdr;
	base[4]= V296;}
	V297= list(2,VV[101],base[2]);
	if((base[3])==Cnil){
	goto T538;}
	V298= make_cons(VV[32],base[4]);
	goto T536;
	goto T538;
T538:;
	V298= make_cons(VV[43],base[4]);
	goto T536;
T536:;
	base[5]= list(4,VV[100],/* INLINE-ARGS */V297,V298,list(2,VV[102],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function MAKE-FAST-METHOD-CALL	*/

static object LI26(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB24 VMS24 VMV24
	{object V299;
	object V300;
	object V301;
	object V302;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI26key,first,ap);
	if(Vcs[0]==0){
	V299= (VV[382]->s.s_gfdef);
	}else{
	V299=(Vcs[0]);}
	V300=(Vcs[1]);
	V301=(Vcs[2]);
	V302=(Vcs[3]);
	base[0]= VV[103];
	base[1]= (V299);
	base[2]= (V300);
	base[3]= (V301);
	base[4]= (V302);
	vs_top=(vs_base=base+0)+5;
	siLmake_structure();
	vs_top=sup;
	{object V303 = vs_base[0];
	VMR24(V303)}
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
	{object V304=base[0]->c.c_cdr;
	if(endp(V304))invalid_macro_call();
	base[2]= (V304->c.c_car);
	V304=V304->c.c_cdr;
	base[3]= V304;}
	V305= list(2,VV[105],base[2]);
	V306= list(2,VV[106],base[2]);
	base[4]= listA(5,VV[104],/* INLINE-ARGS */V305,/* INLINE-ARGS */V306,list(2,VV[107],base[2]),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function MAKE-FAST-INSTANCE-BOUNDP	*/

static object LI28(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB26 VMS26 VMV26
	{object V307;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI28key,first,ap);
	V307=(Vcs[0]);
	base[0]= VV[108];
	base[1]= (V307);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V308 = vs_base[0];
	VMR26(V308)}
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
	if(((VV[109]->s.s_dbind))==Cnil){
	goto T549;}
	{register object V309;
	V309= (VV[110]->s.s_dbind);
	bds_bind(VV[111],Cnil);
	base[1]= Ct;
	base[2]= VV[112];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	{register long V310;
	register long V311;
	V310= fix((VV[113]->s.s_dbind));
	V311= 0;
	goto T557;
T557:;
	if(!((V311)>=(V310))){
	goto T558;}
	{object V312 = Cnil;
	bds_unwind1;
	VMR27(V312)}
	goto T558;
T558:;
	{register object V313;
	V313= aref1((VV[109]->s.s_dbind),fix((V309)));
	if(((V313))==Cnil){
	goto T561;}
	(void)(print((V313),Cnil));}
	goto T561;
T561:;
	V309= number_plus((V309),small_fixnum(1));
	if(!(number_compare((V309),(VV[113]->s.s_dbind))==0)){
	goto T567;}
	V309= small_fixnum(0);
	goto T567;
T567:;
	V311= (long)(V311)+1;
	goto T557;}}
	goto T549;
T549:;
	{object V314 = Cnil;
	VMR27(V314)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function TRACE-EMF-CALL-INTERNAL	*/

static object LI30(V318,V319,V320)

object V318;object V319;object V320;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	if(((VV[109]->s.s_dbind))!=Cnil){
	goto T574;}
	base[0]= (VV[113]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk388)();
	vs_top=sup;
	(VV[109]->s.s_dbind)= vs_base[0];
	goto T574;
T574:;{object V321;
	V321= (VV[109]->s.s_dbind);{object V322;
	V322= (VV[110]->s.s_dbind);
	V323= listA(3,(V318),(V319),(V320));
	(void)(aset1(V321,fix(V322),/* INLINE-ARGS */V323));}}
	(VV[110]->s.s_dbind)= number_plus((VV[110]->s.s_dbind),small_fixnum(1));
	if(!(number_compare((VV[110]->s.s_dbind),(VV[113]->s.s_dbind))==0)){
	goto T583;}
	(VV[110]->s.s_dbind)= small_fixnum(0);
	{object V324 = small_fixnum(0);
	VMR28(V324)}
	goto T583;
T583:;
	{object V325 = Cnil;
	VMR28(V325)}
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
	{object V326=base[0]->c.c_cdr;
	if(endp(V326))invalid_macro_call();
	base[2]= (V326->c.c_car);
	V326=V326->c.c_cdr;
	if(endp(V326))invalid_macro_call();
	base[3]= (V326->c.c_car);
	V326=V326->c.c_cdr;
	if(endp(V326))invalid_macro_call();
	base[4]= (V326->c.c_car);
	V326=V326->c.c_cdr;
	if(!endp(V326))invalid_macro_call();}
	if(((VV[114]->s.s_dbind))==Cnil){
	goto T587;}
	base[5]= list(3,VV[115],VV[111],list(4,VV[116],base[2],base[3],base[4]));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T587;
T587:;
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
	{object V327=base[0]->c.c_cdr;
	if(endp(V327))invalid_macro_call();
	base[2]= (V327->c.c_car);
	V327=V327->c.c_cdr;
	if(endp(V327))invalid_macro_call();
	base[3]= (V327->c.c_car);
	V327=V327->c.c_cdr;
	base[4]= V327;}
	V328= list(4,VV[117],base[2],base[3],make_cons(VV[43],base[4]));
	base[5]= list(3,VV[9],/* INLINE-ARGS */V328,listA(3,VV[118],base[2],base[4]));
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
	{object V329=base[0]->c.c_cdr;
	if(endp(V329))invalid_macro_call();
	base[2]= (V329->c.c_car);
	V329=V329->c.c_cdr;
	if(endp(V329))invalid_macro_call();
	base[3]= (V329->c.c_car);
	V329=V329->c.c_cdr;
	base[4]= V329;}
	base[5]= base[3];
	vs_top=(vs_base=base+5)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T589;}
	base[5]= VV[119];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	goto T589;
T589:;
	base[5]= base[3];
	vs_top=(vs_base=base+5)+1;
	Leval();
	vs_top=sup;
	base[3]= vs_base[0];
	V330= list(4,VV[117],base[2],base[3],make_cons(VV[43],base[4]));
	V331= list(3,VV[121],base[2],VV[122]);
	V332= list(2,/* INLINE-ARGS */V331,listA(3,VV[118],base[2],base[4]));
	if((base[3])!=Cnil){
	goto T600;}
	if(!((1)==((long)length(base[4])))){
	goto T600;}
	V334= list(3,VV[121],base[2],VV[123]);
	V335= list(2,VV[125],list(2,VV[126],CMPcar(base[4])));
	V336= list(2,/* INLINE-ARGS */V335,list(2,VV[127],list(3,VV[115],VV[125],list(3,VV[128],VV[125],base[2]))));
	V337= list(3,VV[130],VV[127],list(2,VV[1],(VV[131]->s.s_dbind)));
	V338= list(2,/* INLINE-ARGS */V334,list(3,VV[124],/* INLINE-ARGS */V336,list(4,VV[129],/* INLINE-ARGS */V337,list(3,VV[132],CMPcar(base[4]),base[2]),VV[127])));
	base[5]= make_cons(/* INLINE-ARGS */V338,Cnil);
	goto T598;
	goto T600;
T600:;
	base[5]= Cnil;
	goto T598;
T598:;
	if((base[3])!=Cnil){
	goto T606;}
	if(!((2)==((long)length(base[4])))){
	goto T606;}
	V339= list(3,VV[121],base[2],VV[133]);
	V340= list(2,VV[134],CMPcar(base[4]));
	V341= list(2,/* INLINE-ARGS */V340,list(2,VV[125],list(2,VV[126],CMPcar(base[4]))));
	V342= list(2,/* INLINE-ARGS */V339,list(3,VV[95],/* INLINE-ARGS */V341,list(3,VV[115],VV[125],list(3,VV[30],list(3,VV[128],VV[125],base[2]),VV[134]))));
	base[6]= make_cons(/* INLINE-ARGS */V342,Cnil);
	goto T604;
	goto T606;
T606:;
	base[6]= Cnil;
	goto T604;
T604:;
	V343= list(2,VV[94],listA(4,VV[136],base[2],base[3],base[4]));
	if((base[3])==Cnil){
	goto T613;}
	V344= listA(3,VV[137],list(3,VV[138],VV[14],base[2]),base[4]);
	goto T611;
	goto T613;
T613:;
	V344= listA(3,VV[139],list(3,VV[138],VV[14],base[2]),base[4]);
	goto T611;
T611:;
	V345= list(2,Ct,list(4,VV[135],base[2],/* INLINE-ARGS */V343,list(2,VV[14],V344)));
	base[7]= make_cons(/* INLINE-ARGS */V345,Cnil);
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V333= vs_base[0];
	base[5]= list(3,VV[9],/* INLINE-ARGS */V330,listA(3,VV[120],/* INLINE-ARGS */V332,V333));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	function definition for INVOKE-EMF	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	{register object V346;
	register object V347;
	check_arg(2);
	V346=(base[0]);
	V347=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V348;
	V348= (V346);
	base[2]= (V348);
	base[3]= VV[103];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T617;}
	{object V349;
	object V350;
	register object V351;
	V349= STREF(object,(V346),12);
	V350= CMPcdr((V349));
	V351= CMPcar((V349));
	if(((V350))==Cnil){
	goto T625;}
	{object V352;
	object V353;
	V352= nthcdr(fix((V351)),(V347));
	base[7]= (V347);
	base[8]= (V352);
	vs_top=(vs_base=base+7)+2;
	Lldiff();
	vs_top=sup;
	V353= vs_base[0];
	base[7]= STREF(object,(V346),0);
	base[8]= STREF(object,(V346),4);
	base[9]= STREF(object,(V346),8);
	{object V354;
	V355= make_cons((V352),Cnil);
	V354= nconc((V353),/* INLINE-ARGS */V355);
	 vs_top=base+10;
	 while(V354!=Cnil)
	 {vs_push((V354)->c.c_car);V354=(V354)->c.c_cdr;}
	vs_base=base+8;}
	{object _funobj = base[7];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T625;
T625:;
	if(((V347))!=Cnil){
	goto T636;}
	if(!(eql((V351),small_fixnum(0)))){
	goto T639;}
	base[5]= STREF(object,(V346),0);
	base[6]= STREF(object,(V346),4);
	base[7]= STREF(object,(V346),8);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T639;
T639:;
	base[5]= VV[140];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	return;
	goto T636;
T636:;
	if((CMPcdr((V347)))!=Cnil){
	goto T646;}
	if(!(eql((V351),small_fixnum(1)))){
	goto T649;}
	base[5]= STREF(object,(V346),0);
	base[6]= STREF(object,(V346),4);
	base[7]= STREF(object,(V346),8);
	base[8]= CMPcar((V347));
	vs_top=(vs_base=base+6)+3;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T649;
T649:;
	base[5]= VV[141];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	return;
	goto T646;
T646:;
	if((CMPcddr((V347)))!=Cnil){
	goto T657;}
	if(!(eql((V351),small_fixnum(2)))){
	goto T660;}
	base[5]= STREF(object,(V346),0);
	base[6]= STREF(object,(V346),4);
	base[7]= STREF(object,(V346),8);
	base[8]= CMPcar((V347));
	base[9]= CMPcadr((V347));
	vs_top=(vs_base=base+6)+4;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T660;
T660:;
	base[5]= VV[142];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	return;
	goto T657;
T657:;
	base[5]= STREF(object,(V346),0);
	base[6]= STREF(object,(V346),4);
	base[7]= STREF(object,(V346),8);
	{object V356;
	V356= (V347);
	 vs_top=base+8;
	 while(V356!=Cnil)
	 {vs_push((V356)->c.c_car);V356=(V356)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T617;
T617:;
	base[2]= (V348);
	base[3]= VV[94];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T673;}
	base[2]= STREF(object,(V346),0);
	base[3]= (V347);
	{object V357;
	V357= STREF(object,(V346),4);
	 vs_top=base+4;
	 while(V357!=Cnil)
	 {vs_push((V357)->c.c_car);V357=(V357)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T673;
T673:;
	if(!(type_of((V348))==t_fixnum)){
	goto T681;}
	if(((V347))!=Cnil){
	goto T684;}
	base[2]= VV[143];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	return;
	goto T684;
T684:;
	if((CMPcdr((V347)))!=Cnil){
	goto T688;}
	{object V358;
	{object V360;
	V360= CMPcar((V347));
	if(type_of((V360))==t_structure){
	goto T696;}
	goto T693;
	goto T696;
T696:;
	if(!((((V360))->str.str_def)==(VV[144]))){
	goto T693;}}
	V359= STREF(object,CMPcar((V347)),4);
	goto T691;
	goto T693;
T693:;{object V361;
	V361= (VV[146]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= CMPcar((V347));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V362= vs_base[0];
	if(!((V361)==(CMPcar(V362)))){
	goto T699;}}
	V359= CMPcar((CMPcar((V347)))->cc.cc_turbo[12]);
	goto T691;
	goto T699;
T699:;
	base[2]= VV[147];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V359= vs_base[0];
	goto T691;
T691:;
	V363 = fix((V346));
	V358= (V359)->v.v_self[V363];
	if(!(((V358))==((VV[131]->s.s_dbind)))){
	goto T706;}
	base[2]= CMPcar((V347));
	base[3]= (V346);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk132)();
	return;
	goto T706;
T706:;
	base[2]= (V358);
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T688;
T688:;
	if((CMPcddr((V347)))!=Cnil){
	goto T711;}
	{object V365;
	V365= CMPcadr((V347));
	if(type_of((V365))==t_structure){
	goto T718;}
	goto T715;
	goto T718;
T718:;
	if(!((((V365))->str.str_def)==(VV[148]))){
	goto T715;}}
	V364= STREF(object,CMPcadr((V347)),4);
	goto T713;
	goto T715;
T715:;{object V366;
	V366= (VV[146]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= CMPcadr((V347));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V367= vs_base[0];
	if(!((V366)==(CMPcar(V367)))){
	goto T721;}}
	V364= CMPcar((CMPcadr((V347)))->cc.cc_turbo[12]);
	goto T713;
	goto T721;
T721:;
	base[2]= VV[147];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V364= vs_base[0];
	goto T713;
T713:;
	V368 = fix((V346));
	base[2]= (V364)->v.v_self[V368]= (CMPcar((V347)));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T711;
T711:;
	base[2]= VV[149];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	return;
	goto T681;
T681:;
	base[2]= (V348);
	base[3]= VV[108];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T729;}
	if(((V347))==Cnil){
	goto T733;}
	if((CMPcdr((V347)))==Cnil){
	goto T734;}
	goto T733;
T733:;
	base[2]= VV[150];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	return;
	goto T734;
T734:;
	{object V370;
	V370= CMPcar((V347));
	if(type_of((V370))==t_structure){
	goto T744;}
	goto T741;
	goto T744;
T744:;
	if(!((((V370))->str.str_def)==(VV[151]))){
	goto T741;}}
	V369= STREF(object,CMPcar((V347)),4);
	goto T739;
	goto T741;
T741:;{object V371;
	V371= (VV[146]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= CMPcar((V347));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V372= vs_base[0];
	if(!((V371)==(CMPcar(V372)))){
	goto T747;}}
	V369= CMPcar((CMPcar((V347)))->cc.cc_turbo[12]);
	goto T739;
	goto T747;
T747:;
	base[2]= VV[147];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V369= vs_base[0];
	goto T739;
T739:;
	base[2]= (((((V369)->v.v_self[(long)STREF(fixnum,(V346),0)])==((VV[131]->s.s_dbind))?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T729;
T729:;
	base[2]= (V348);
	vs_top=(vs_base=base+2)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T754;}
	base[2]= (V346);
	{object V373;
	V373= (V347);
	 vs_top=base+3;
	 while(V373!=Cnil)
	 {vs_push((V373)->c.c_car);V373=(V373)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T754;
T754:;
	base[3]= VV[152];
	base[4]= (V348);
	base[5]= VV[153];
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

static object LI36(V376,V377)

object V376;object V377;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	base[0]=MMcons((V377),Cnil);
	{register object V378;
	V378= (base[0]->c.c_car);
	base[1]= (V378);
	base[2]= VV[103];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T764;}
	{object V379;
	base[4]= (V376);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	V379= vs_base[0];
	base[2]= CMPmake_fixnum((long)(*(LnkLI394))((V379)));
	base[2]=MMcons(base[2],base[0]);
	base[3]= (*(LnkLI395))((V379));
	base[3]=MMcons(base[3],base[2]);
	{object V380 = 
	make_cclosure_new(LC130,Cnil,base[3],Cdata);
	VMR33(V380)}}
	goto T764;
T764:;
	base[1]= (V378);
	base[2]= VV[94];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T773;}
	{object V381 = 
	make_cclosure_new(LC131,Cnil,base[0],Cdata);
	VMR33(V381)}
	goto T773;
T773:;
	base[1]= (V378);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T778;}
	{object V382 = (base[0]->c.c_car);
	VMR33(V382)}
	goto T778;
T778:;
	base[2]= VV[152];
	base[3]= (V378);
	base[4]= VV[155];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk392)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	{object V383 = vs_base[0];
	VMR33(V383)}}
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
	{object V384=base[0]->c.c_cdr;
	if(endp(V384))invalid_macro_call();
	{object V385= (V384->c.c_car);
	if(endp(V385))invalid_macro_call();
	base[2]= (V385->c.c_car);
	V385=V385->c.c_cdr;
	if(endp(V385))invalid_macro_call();
	base[3]= (V385->c.c_car);
	V385=V385->c.c_cdr;
	if(endp(V385))invalid_macro_call();
	base[4]= (V385->c.c_car);
	V385=V385->c.c_cdr;
	if(!endp(V385))invalid_macro_call();}
	V384=V384->c.c_cdr;
	base[5]= V384;}
	V386= list(2,VV[1],base[4]);
	V387= listA(3,VV[159],list(2,VV[160],list(2,VV[1],base[3])),VV[161]);
	V388= listA(4,VV[32],VV[162],list(2,VV[1],base[4]),VV[163]);
	V389= list(2,VV[1],base[4]);
	V390= list(2,VV[1],((((base[3])==Cnil?Ct:Cnil))==Cnil?Ct:Cnil));
	V391= list(2,VV[1],base[2]);
	if((base[3])==Cnil){
	goto T787;}
	V392= make_cons(base[3],Cnil);
	goto T785;
	goto T787;
T787:;
	V392= Cnil;
	goto T785;
T785:;
	V393= list(2,VV[164],list(5,VV[32],VV[165],/* INLINE-ARGS */V389,/* INLINE-ARGS */V390,list(3,VV[166],/* INLINE-ARGS */V391,list(2,VV[1],V392))));
	V394= make_cons(/* INLINE-ARGS */V393,Cnil);
	V395= list(2,VV[1],base[2]);
	if((base[3])==Cnil){
	goto T791;}
	V396= list(2,VV[169],base[3]);
	goto T789;
	goto T791;
T791:;
	V396= Cnil;
	goto T789;
T789:;
	V397= list(3,VV[84],VV[157],list(5,VV[43],VV[158],/* INLINE-ARGS */V386,list(4,VV[129],/* INLINE-ARGS */V387,/* INLINE-ARGS */V388,list(3,VV[95],/* INLINE-ARGS */V394,list(5,VV[43],VV[167],VV[91],list(4,VV[43],VV[168],list(3,VV[43],list(3,VV[166],/* INLINE-ARGS */V395,list(2,VV[1],V396)),VV[91]),VV[164]),VV[164]))),VV[170]));
	base[6]= listA(3,VV[75],list(3,VV[156],/* INLINE-ARGS */V397,list(3,VV[171],Cnil,list(3,VV[43],VV[172],list(3,VV[43],VV[173],list(2,VV[1],base[4]))))),base[5]);
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
	{object V398=base[0]->c.c_cdr;
	if(endp(V398))invalid_macro_call();
	{object V399= (V398->c.c_car);
	{object V400=getf(V399,VV[67],OBJNULL);
	if(V400==OBJNULL){
	base[2]= Cnil;} else {
	base[2]= V400;
	}}
	{object V401=getf(V399,VV[68],OBJNULL);
	if(V401==OBJNULL){
	base[3]= Cnil;} else {
	base[3]= V401;
	}}
	{object V402=getf(V399,VV[69],OBJNULL);
	if(V402==OBJNULL){
	base[4]= Cnil;} else {
	base[4]= V402;
	}}
	{object V403=getf(V399,VV[70],OBJNULL);
	if(V403==OBJNULL){
	base[5]= Cnil;} else {
	base[5]= V403;
	}}
	check_other_key(V399,4,VV[67],VV[68],VV[69],VV[70]);}
	V398=V398->c.c_cdr;
	base[6]= V398;}
	if((base[2])!=Cnil){
	goto T798;}
	if((base[3])!=Cnil){
	goto T798;}
	if((base[4])!=Cnil){
	goto T798;}
	if((base[5])!=Cnil){
	goto T798;}
	base[7]= listA(3,VV[95],Cnil,base[6]);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T798;
T798:;
	if((base[4])!=Cnil){
	goto T807;}
	if((base[5])!=Cnil){
	goto T807;}
	base[7]= list(2,VV[76],listA(3,VV[75],VV[174],base[6]));
	vs_top=(vs_base=base+7)+1;
	return;
	goto T807;
T807:;
	if(base[2]==Cnil){
	V404= Cnil;
	goto T811;}
	V404= VV[176];
	goto T811;
T811:;
	if(base[3]==Cnil){
	V405= Cnil;
	goto T812;}
	V405= VV[177];
	goto T812;
T812:;
	base[7]= list(2,VV[76],listA(3,VV[175],append(V404,V405),base[6]));
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
	{object V406=base[0]->c.c_cdr;
	if(endp(V406))invalid_macro_call();
	{object V407= (V406->c.c_car);
	if(endp(V407))invalid_macro_call();
	base[2]= (V407->c.c_car);
	V407=V407->c.c_cdr;
	if(endp(V407))invalid_macro_call();
	base[3]= (V407->c.c_car);
	V407=V407->c.c_cdr;
	if(!endp(V407))invalid_macro_call();}
	V406=V406->c.c_cdr;
	base[4]= V406;}
	base[5]= VV[178];
	base[6]= VV[179];
	base[7]= VV[180];
	{object V408;
	{object V409;
	object V410= base[2];
	if(V410==Cnil){
	V408= Cnil;
	goto T813;}
	base[8]=V409=MMcons(Cnil,Cnil);
	goto T814;
T814:;
	base[9]= (V410->c.c_car);
	vs_top=(vs_base=base+9)+1;
	L40(base);
	vs_top=sup;
	(V409->c.c_cdr)= vs_base[0];
	while(MMcdr(V409)!=Cnil)V409=MMcdr(V409);
	if((V410=MMcdr(V410))==Cnil){
	base[8]=base[8]->c.c_cdr;
	V408= base[8];
	goto T813;}
	goto T814;}
	goto T813;
T813:;
	V411= list(2,base[5],base[3]);
	V412= make_cons(/* INLINE-ARGS */V411,(V408));
	if(((V408))!=Cnil){
	goto T819;}
	V414= list(2,VV[45],list(2,VV[181],base[5]));
	V413= make_cons(/* INLINE-ARGS */V414,Cnil);
	goto T817;
	goto T819;
T819:;
	V413= Cnil;
	goto T817;
T817:;
	V415 = base[4];
	base[8]= listA(3,VV[124],/* INLINE-ARGS */V412,append(V413,V415));
	vs_top=(vs_base=base+8)+1;
	return;}
}
/*	local entry for function GET-KEY-ARG	*/

static object LI41(V418,V419)

register object V418;register object V419;
{	 VMB37 VMS37 VMV37
	goto TTL;
TTL:;
	goto T822;
T822:;
	if(!(type_of((V419))!=t_cons)){
	goto T824;}
	{object V420 = Cnil;
	VMR37(V420)}
	goto T824;
T824:;
	if(!((CMPcar((V419)))==((V418)))){
	goto T827;}
	{object V421 = CMPcadr((V419));
	VMR37(V421)}
	goto T827;
T827:;
	V419= CMPcddr((V419));
	goto T822;
	return Cnil;
}
/*	local entry for function GET-KEY-ARG1	*/

static object LI42(V424,V425)

register object V424;register object V425;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	goto T833;
T833:;
	if(!(type_of((V425))!=t_cons)){
	goto T835;}
	{object V426 = Cnil;
	VMR38(V426)}
	goto T835;
T835:;
	if(!((CMPcar((V425)))==((V424)))){
	goto T838;}
	{object V427 = CMPcdr((V425));
	VMR38(V427)}
	goto T838;
T838:;
	V425= CMPcddr((V425));
	goto T833;
	return Cnil;
}
/*	function definition for WALK-METHOD-LAMBDA	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	{object V428;
	object V429;
	check_arg(5);
	V428=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	V429=(base[2]);
	base[3]=MMcons(base[3],base[1]);
	base[4]=MMcons(base[4],base[3]);
	vs_top=sup;
	base[5]=MMcons(Cnil,base[4]);
	base[6]=MMcons(Cnil,base[5]);
	base[7]=MMcons(Cnil,base[6]);
	base[8]=make_cclosure_new(LC44,Cnil,base[7],Cdata);
	base[8]=MMcons(base[8],base[7]);
	{object V430;
	base[9]= (V428);
	base[10]= (V429);
	base[11]= (base[8]->c.c_car);
	vs_top=(vs_base=base+9)+3;
	(void) (*Lnk396)();
	vs_top=sup;
	V430= vs_base[0];
	base[9]= (V430);
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
	{register object V431;
	check_arg(1);
	V431=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V431))==t_symbol)){
	goto T853;}
	goto T851;
	goto T853;
T853:;
	if(type_of((V431))==t_cons){
	goto T855;}
	goto T852;
	goto T855;
T855:;
	if((CMPcar((V431)))==(VV[30])){
	goto T857;}
	goto T852;
	goto T857;
T857:;
	if(type_of(CMPcdr((V431)))==t_cons){
	goto T859;}
	goto T852;
	goto T859;
T859:;
	if(type_of(CMPcadr((V431)))==t_symbol){
	goto T861;}
	goto T852;
	goto T861;
T861:;
	if((CMPcddr((V431)))==Cnil){
	goto T851;}
	goto T852;
T852:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T851;
T851:;
	if(((*(LnkLI356))((V431)))!=Cnil){
	goto T863;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T863;
T863:;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T866;}
	base[1]= (*(LnkLI347))((V431));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk397)(Lclptr397);
	return;
	goto T866;
T866:;{object V432;
	V432= (VV[146]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (*(LnkLI347))((V431));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V433= vs_base[0];
	base[1]= ((V432)==(CMPcar(V433))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local entry for function MAKE-PARAMETER-REFERENCES	*/

static object LI48(V439,V440,V441,V442,V443)

object V439;object V440;object V441;object V442;object V443;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	base[0]= (V441);
	{object V444;
	register object V445;
	V444= Cnil;
	V445= Cnil;
	{register object V446;
	register object V447;
	register object V448;
	object V449;
	V446= (V439);
	V447= Cnil;
	V448= (V440);
	V449= Cnil;
	goto T880;
T880:;
	{object V450;
	if(!(((V446))==Cnil)){
	goto T886;}
	goto T874;
	goto T886;
T886:;
	V450= CMPcar((V446));
	V446= CMPcdr((V446));
	V447= (V450);}
	{object V451;
	if(!(((V448))==Cnil)){
	goto T894;}
	goto T874;
	goto T894;
T894:;
	V451= CMPcar((V448));
	V448= CMPcdr((V448));
	V449= (V451);}
	{object V452;
	V452= (((type_of((V447))==t_cons||((V447))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	if(((V452))==Cnil){
	goto T901;}
	goto T881;
	goto T901;
T901:;
	base[1]= CMPcar((V447));
	vs_top=(vs_base=base+1)+1;
	L49(base);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T904;}
	base[1]= VV[200];
	base[2]= (V442);
	base[3]= (V443);
	base[4]= CMPcar((V447));
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk398)();
	vs_top=sup;
	goto T881;
	goto T904;
T904:;
	{object V453;
	V453= CMPcar((V447));
	if(((V444))!=Cnil){
	goto T913;}
	V445= make_cons((V453),Cnil);
	V444= (V445);
	goto T881;
	goto T913;
T913:;
	V455= make_cons((V453),Cnil);
	((V445))->c.c_cdr = /* INLINE-ARGS */V455;
	V454= (V445);
	V445= CMPcdr(V454);}}
	goto T881;
T881:;
	goto T880;}
	goto T874;
T874:;
	{object V456 = (V444);
	VMR41(V456)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-PLIST	*/

static object LI50(V458)

register object V458;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	if(((V458))==((VV[201]->s.s_dbind))){
	goto T920;}
	{object V459;
	object V460;
	V459= (VV[202]->s.s_dbind);
	V460= (VV[201]->s.s_dbind);
	(VV[201]->s.s_dbind)= (V459);
	(VV[202]->s.s_dbind)= (V460);}
	{object V461;
	object V462;
	V461= (VV[203]->s.s_dbind);
	V462= (VV[204]->s.s_dbind);
	(VV[204]->s.s_dbind)= (V461);
	(VV[203]->s.s_dbind)= (V462);}
	{object V463;
	object V464;
	V463= (VV[205]->s.s_dbind);
	V464= (VV[206]->s.s_dbind);
	(VV[206]->s.s_dbind)= (V463);
	(VV[205]->s.s_dbind)= (V464);}
	goto T920;
T920:;
	if(((V458))==((VV[201]->s.s_dbind))){
	goto T943;}
	if(((VV[206]->s.s_dbind))==Cnil){
	goto T943;}
	{object V465;
	object V466;
	object V467;
	V465= (VV[201]->s.s_dbind);
	V466= (VV[207]->s.s_dbind);
	V467= (VV[204]->s.s_dbind);
	base[0]= (V465);
	base[1]= (V466);
	base[2]= (V467);
	vs_top=(vs_base=base+0)+3;
	siLhash_set();
	vs_top=sup;}
	goto T943;
T943:;
	if(((V458))==((VV[201]->s.s_dbind))){
	goto T954;}
	(VV[201]->s.s_dbind)= (V458);
	(VV[206]->s.s_dbind)= Cnil;
	base[0]= (V458);
	base[1]= (VV[207]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	(VV[204]->s.s_dbind)= vs_base[0];
	goto T954;
T954:;
	{object V468 = (VV[204]->s.s_dbind);
	VMR42(V468)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for G3994	*/

static void L51()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{object V469;
	object V470;
	check_arg(2);
	V469=(base[0]);
	V470=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V470))==((VV[201]->s.s_dbind))){
	goto T964;}
	{object V471;
	object V472;
	V471= (VV[202]->s.s_dbind);
	V472= (VV[201]->s.s_dbind);
	(VV[201]->s.s_dbind)= (V471);
	(VV[202]->s.s_dbind)= (V472);}
	{object V473;
	object V474;
	V473= (VV[205]->s.s_dbind);
	V474= (VV[206]->s.s_dbind);
	(VV[206]->s.s_dbind)= (V473);
	(VV[205]->s.s_dbind)= (V474);}
	{object V475;
	object V476;
	V475= (VV[203]->s.s_dbind);
	V476= (VV[204]->s.s_dbind);
	(VV[204]->s.s_dbind)= (V475);
	(VV[203]->s.s_dbind)= (V476);}
	goto T964;
T964:;
	if(((V470))==((VV[201]->s.s_dbind))){
	goto T987;}
	if(((VV[206]->s.s_dbind))==Cnil){
	goto T987;}
	{object V477;
	object V478;
	object V479;
	V477= (VV[201]->s.s_dbind);
	V478= (VV[207]->s.s_dbind);
	V479= (VV[204]->s.s_dbind);
	base[2]= (V477);
	base[3]= (V478);
	base[4]= (V479);
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	vs_top=sup;}
	goto T987;
T987:;
	(VV[201]->s.s_dbind)= (V470);
	(VV[206]->s.s_dbind)= Ct;
	(VV[204]->s.s_dbind)= (V469);
	base[2]= (VV[204]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	return;
	}
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
	if (narg <= 0) goto T1003;
	else {
	V484= first;}
	--narg; goto T1004;
	goto T1003;
T1003:;
	V484= Cnil;
	goto T1004;
T1004:;
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
/*	function definition for G4004	*/

static void L53()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	{object V486;
	object V487;
	object V488;
	check_arg(3);
	V486=(base[0]);
	V487=(base[1]);
	V488=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V492;
	base[3]= (*(LnkLI399))(V487);
	base[4]= V486;
	base[5]= V488;
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V492= vs_base[0];
	V493= ({object _tmp=get(VV[399],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[399])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[399])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V494 = (V492);
	V495 = V487;
	(void)((
	V496 = V493,
	(type_of(V496) == t_sfun ?(*((V496)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V496)==t_vfun) ?
	(*((V496)->sfn.sfn_self)):
	(fcall.fun=(V496),fcalln))(V494,V495)));
	base[3]= V486;
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local entry for function METHOD-FUNCTION-PV-TABLE	*/

static object LI54(V498)

object V498;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{object V499 = (VFUN_NARGS=2,(*(LnkLI210))((V498),VV[208]));
	VMR46(V499)}
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-METHOD	*/

static object LI55(V501)

object V501;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	{object V502 = (VFUN_NARGS=2,(*(LnkLI210))((V501),VV[209]));
	VMR47(V502)}
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-NEEDS-NEXT-METHODS-P	*/

static object LI56(V504)

object V504;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{object V505 = (VFUN_NARGS=3,(*(LnkLI210))((V504),VV[56],Ct));
	VMR48(V505)}
	return Cnil;
}
/*	macro definition for METHOD-FUNCTION-CLOSURE-GENERATOR	*/

static void L57()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V506=base[0]->c.c_cdr;
	if(endp(V506))invalid_macro_call();
	base[2]= (V506->c.c_car);
	V506=V506->c.c_cdr;
	if(!endp(V506))invalid_macro_call();}
	base[3]= list(3,VV[210],base[2],VV[211]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function LOAD-DEFMETHOD	*/

static object LI58(object V512,object V511,object V510,object V509,object V508,object V507,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB50 VMS50 VMV50
	{object V513;
	register object V514;
	object V515;
	object V516;
	object V517;
	register object V518;
	object V519;
	va_start(ap,first);
	if(narg <6) too_few_arguments();
	V513= V512;
	V514= V511;
	V515= V510;
	V516= V509;
	V517= V508;
	V518= V507;
	narg = narg - 6;
	if (narg <= 0) goto T1015;
	else {
	V519= first;}
	--narg; goto T1016;
	goto T1015;
T1015:;
	V519= Cnil;
	goto T1016;
T1016:;
	if(!(type_of((V514))==t_cons||((V514))==Cnil)){
	goto T1018;}
	(void)((*(LnkLI349))(CMPcadr((V514))));
	goto T1018;
T1018:;
	base[0]= (V518);
	vs_top=(vs_base=base+0)+1;
	Lcopy_tree();
	vs_top=sup;
	V518= vs_base[0];
	{object V520;{object V521;
	base[0]= (V518);
	base[1]= VV[212];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V521= vs_base[0];
	if(V521==Cnil)goto T1025;
	V520= V521;
	goto T1024;
	goto T1025;
T1025:;}
	V520= (*(LnkLI400))((V514),(V515),(V516));
	goto T1024;
T1024:;
	{object V524;
	base[0]= (V518);
	base[1]= V520;
	base[2]= VV[212];
	vs_top=(vs_base=base+0)+3;
	siLput_f();
	vs_top=sup;
	V524= vs_base[0];
	V518= (V524);}
	(void)((VFUN_NARGS=2,(*(LnkLI401))(VV[36],(V520))));
	{object V525 = (*(LnkLI402))((V513),(V514),(V515),(V516),(V517),(V518),(V519));
	VMR50(V525)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LOAD-DEFMETHOD-INTERNAL	*/

static object LI59(V533,V534,V535,V536,V537,V538,V539)

object V533;register object V534;object V535;object V536;object V537;register object V538;object V539;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	if(!(type_of((V534))==t_cons||((V534))==Cnil)){
	goto T1037;}
	(void)((*(LnkLI349))(CMPcadr((V534))));
	goto T1037;
T1037:;
	if(((V539))==Cnil){
	goto T1040;}
	{object V543;
	base[1]= (V538);
	base[2]= VV[28];
	base[3]= Cnil;
	vs_top=(vs_base=base+1)+3;
	Lgetf();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= V539;
	base[2]= VV[29];
	vs_top=(vs_base=base+0)+3;
	siLput_f();
	vs_top=sup;
	V543= vs_base[0];
	{object V544;
	base[0]= (V538);
	base[1]= (V543);
	base[2]= VV[28];
	vs_top=(vs_base=base+0)+3;
	siLput_f();
	vs_top=sup;
	V544= vs_base[0];
	V538= (V544);}}
	goto T1040;
T1040:;
	{object V545;
	base[0]=VV[403]->s.s_gfdef;
	base[1]= (V534);
	base[2]= (V535);
	base[3]= (V536);
	base[4]= (V537);
	base[5]= VV[16];
	V547= make_cons((V536),Cnil);
	V548= listA(3,VV[7],(V534),append((V535),/* INLINE-ARGS */V547));
	vs_base=vs_top;
	(void) (*Lnk351)();
	vs_top=sup;
	V549= vs_base[0];
	base[6]= list(2,/* INLINE-ARGS */V548,V549);
	{object V546;
	V546= (V538);
	 vs_top=base+7;
	 while(V546!=Cnil)
	 {vs_push((V546)->c.c_car);V546=(V546)->c.c_cdr;}
	vs_base=base+1;}
	funcall(base[0]);
	vs_top=sup;
	V545= vs_base[0];
	if(((V533))==(VV[20])){
	goto T1066;}
	V550= (VFUN_NARGS=2,(*(LnkLI291))((V533),Cnil));
	V551= (*(LnkLI363))((V545));
	if((/* INLINE-ARGS */V550)==(/* INLINE-ARGS */V551)){
	goto T1066;}
	base[0]= (VV[213]->s.s_dbind);
	base[1]= VV[214];
	base[2]= (V535);
	base[3]= (V536);
	base[4]= (V534);
	base[5]= (V533);
	base[7]= (*(LnkLI363))((V545));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+0)+7;
	Lformat();
	vs_top=sup;
	goto T1066;
T1066:;
	{object V552 = (V545);
	VMR51(V552)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-METHOD-SPEC	*/

static object LI60(V556,V557,V558)

object V556;object V557;object V558;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	V559= make_cons((V558),Cnil);
	{object V560 = listA(3,VV[36],(V556),append((V557),/* INLINE-ARGS */V559));
	VMR52(V560)}
	return Cnil;
}
/*	local entry for function INITIALIZE-METHOD-FUNCTION	*/

static object LI61(object V561,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB53 VMS53 VMV53
	{register object V562;
	object V563;
	object V564;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V562= V561;
	narg = narg - 1;
	if (narg <= 0) goto T1079;
	else {
	V563= first;}
	if (--narg <= 0) goto T1080;
	else {
	V564= va_arg(ap,object);}
	--narg; goto T1081;
	goto T1079;
T1079:;
	V563= Cnil;
	goto T1080;
T1080:;
	V564= Cnil;
	goto T1081;
T1081:;
	{register object V565;
	register object V566;
	object V567;
	register object V568;
	base[5]= (V562);
	base[6]= VV[35];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	base[0]= vs_base[0];
	base[5]= (V562);
	base[6]= VV[212];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V565= vs_base[0];
	base[5]= (V562);
	base[6]= VV[28];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V566= vs_base[0];
	base[5]= (V566);
	base[6]= VV[29];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V567= vs_base[0];
	V568= Cnil;
	base[5]= (V562);
	base[6]= VV[215];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	base[4]= vs_base[0];
	if(((V565))==Cnil){
	goto T1100;}
	if((base[0])==Cnil){
	goto T1103;}
	base[5]= base[0];
	base[6]= (V565);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk346)();
	vs_top=sup;
	base[0]= vs_base[0];
	goto T1103;
T1103:;
	if((base[4])==Cnil){
	goto T1100;}
	{object V569;{object V571;
	{object V572 =(CMPcar((V565)))->s.s_plist;
	 object ind= VV[216];
	while(V572!=Cnil){
	if(V572->c.c_car==ind){
	V571= (V572->c.c_cdr->c.c_car);
	goto T1114;
	}else V572=V572->c.c_cdr->c.c_cdr;}
	V571= Cnil;}
	goto T1114;
T1114:;
	if(V571==Cnil)goto T1113;
	V570= V571;
	goto T1112;
	goto T1113;
T1113:;}
	V573= CMPcar((V565));
	base[6]= Cnil;
	base[7]= VV[217];
	base[8]= CMPcar((V565));
	vs_top=(vs_base=base+6)+3;
	Lformat();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (VV[218]->s.s_dbind);
	vs_top=(vs_base=base+5)+2;
	Lintern();
	vs_top=sup;
	V574= vs_base[0];
	V570= sputprop(/* INLINE-ARGS */V573,VV[216],V574);
	goto T1112;
T1112:;
	V569= make_cons(V570,CMPcdr((V565)));
	base[5]= base[4];
	base[6]= (V569);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk346)();
	vs_top=sup;
	if((base[0])!=Cnil){
	goto T1100;}
	base[5]= VV[219];
	base[6]= (V569);
	vs_top=(vs_base=base+5)+2;
	L62(base);
	vs_top=sup;}
	goto T1100;
T1100:;
	if(((V566))==Cnil){
	goto T1129;}
	{object V575;
	object V576;
	base[5]= (V566);
	base[6]= VV[58];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V575= vs_base[0];
	base[5]= (V566);
	base[6]= VV[59];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V576= vs_base[0];
	if(((V575))!=Cnil){
	goto T1138;}
	if(((V576))==Cnil){
	goto T1131;}
	goto T1138;
T1138:;
	V568= (VFUN_NARGS=4,(*(LnkLI404))(VV[58],(V575),VV[59],(V576)));
	if(((V568))==Cnil){
	goto T1144;}
	base[5]= (V567);
	base[6]= (V568);
	vs_top=(vs_base=base+5)+2;
	Lset();
	vs_top=sup;
	goto T1144;
T1144:;
	base[5]= VV[208];
	base[6]= (V568);
	vs_top=(vs_base=base+5)+2;
	L62(base);
	vs_top=sup;}
	goto T1131;
T1131:;
	goto T1153;
T1153:;
	if(((V566))!=Cnil){
	goto T1155;}
	goto T1151;
	goto T1155;
T1155:;
	{register object V577;
	V577= CMPcar((V566));
	V566= CMPcdr((V566));
	base[5]= (V577);}
	{register object V578;
	V578= CMPcar((V566));
	V566= CMPcdr((V566));
	base[6]= (V578);}
	vs_top=(vs_base=base+5)+2;
	L62(base);
	vs_top=sup;
	goto T1153;
	goto T1151;
T1151:;
	if(((V564))==Cnil){
	goto T1167;}
	base[5]= VV[209];
	base[6]= (V564);
	vs_top=(vs_base=base+5)+2;
	L62(base);
	vs_top=sup;
	goto T1167;
T1167:;
	if(((V563))==Cnil){
	goto T1173;}
	if(base[0]!=Cnil){
	{object V579 = base[0];
	VMR53(V579)}}
	{object V580 = (*(LnkLI405))(base[4]);
	VMR53(V580)}
	goto T1173;
T1173:;
	{object V581 = Cnil;
	VMR53(V581)}
	goto T1129;
T1129:;
	{object V582 = Cnil;
	VMR53(V582)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for ANALYZE-LAMBDA-LIST	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM54; VC54
	vs_check;
	{object V583;
	check_arg(1);
	V583=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V584;
	register object V585;
	object V586;
	object V587;
	object V588;
	register object V589;
	register object V590;
	register object V591;
	V584= small_fixnum(0);
	V585= small_fixnum(0);
	V586= Cnil;
	V587= Cnil;
	V588= Cnil;
	V589= Cnil;
	V590= Cnil;
	V591= VV[180];
	{register object V592;
	register object V593;
	V592= (V583);
	V593= CMPcar((V592));
	goto T1179;
T1179:;
	if(!(((V592))==Cnil)){
	goto T1180;}
	goto T1175;
	goto T1180;
T1180:;
	{register object x= (V593),V594= VV[182];
	while(V594!=Cnil)
	if(x==(V594->c.c_car)){
	goto T1187;
	}else V594=V594->c.c_cdr;
	goto T1186;}
	goto T1187;
T1187:;
	{object V595= (V593);
	if((V595!= VV[406]))goto T1188;
	V591= VV[183];
	goto T1184;
	goto T1188;
T1188:;
	if((V595!= VV[61]))goto T1190;
	V586= Ct;
	V591= VV[184];
	goto T1184;
	goto T1190;
T1190:;
	if((V595!= VV[62]))goto T1194;
	V588= Ct;
	goto T1184;
	goto T1194;
T1194:;
	if((V595!= VV[169]))goto T1196;
	V587= Ct;
	V591= VV[185];
	goto T1184;
	goto T1196;
T1196:;
	if((V595!= VV[55]))goto T1200;
	goto T1175;
	goto T1200;
T1200:;
	base[2]= VV[220];
	base[3]= (V593);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	vs_top=sup;
	goto T1184;}
	goto T1186;
T1186:;
	{object V596= (V591);
	if((V596!= VV[180]))goto T1203;
	V584= number_plus((V584),small_fixnum(1));
	goto T1184;
	goto T1203;
T1203:;
	if((V596!= VV[183]))goto T1205;
	V585= number_plus((V585),small_fixnum(1));
	goto T1184;
	goto T1205;
T1205:;
	if((V596!= VV[184]))goto T1207;
	{object V597;
	base[3]= (V593);
	vs_top=(vs_base=base+3)+1;
	L64(base);
	vs_top=sup;
	V597= vs_base[0];
	V589= make_cons((V597),(V589));}
	V590= make_cons(V593,(V590));
	goto T1184;
	goto T1207;
T1207:;
	if((V596!= VV[185]))goto T1213;
	goto T1184;
	goto T1213;
T1213:;
	FEerror("The ECASE key value ~s is illegal.",1,V596);
	goto T1184;}
	goto T1184;
T1184:;
	V592= CMPcdr((V592));
	V593= CMPcar((V592));
	goto T1179;}
	goto T1175;
T1175:;
	base[1]= (V584);
	base[2]= (V585);
	base[3]= (V586);
	base[4]= (V587);
	base[5]= (V588);
	base[6]= reverse((V589));
	base[7]= reverse((V590));
	vs_top=(vs_base=base+1)+7;
	return;}
	}
}
/*	local entry for function KEYWORD-SPEC-NAME	*/

static object LI65(V600)

object V600;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{object V601;
	if(!(type_of((V600))!=t_cons)){
	goto T1228;}
	V601= (V600);
	goto T1226;
	goto T1228;
T1228:;
	V601= CMPcar((V600));
	goto T1226;
T1226:;
	if(!(type_of((V601))!=t_cons)){
	goto T1231;}
	base[0]= symbol_name((V601));
	base[2]= VV[221];
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V602 = vs_base[0];
	VMR55(V602)}
	goto T1231;
T1231:;
	{object V603 = CMPcar((V601));
	VMR55(V603)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FTYPE-DECLARATION-FROM-LAMBDA-LIST	*/

static object LI66(V605)

object V605;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{object V606;
	object V607;
	object V608;
	object V609;
	object V610;
	object V611;
	object V612;
	base[0]= (V605);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk407)();
	if(vs_base>=vs_top){vs_top=sup;goto T1238;}
	V606= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1239;}
	V607= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1240;}
	V608= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1241;}
	V609= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1242;}
	V610= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1243;}
	V611= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1244;}
	V612= vs_base[0];
	vs_top=sup;
	goto T1245;
	goto T1238;
T1238:;
	V606= Cnil;
	goto T1239;
T1239:;
	V607= Cnil;
	goto T1240;
T1240:;
	V608= Cnil;
	goto T1241;
T1241:;
	V609= Cnil;
	goto T1242;
T1242:;
	V610= Cnil;
	goto T1243;
T1243:;
	V611= Cnil;
	goto T1244;
T1244:;
	V612= Cnil;
	goto T1245;
T1245:;
	{object V613;
	{object V614;
	object V615= (V611);
	if(V615==Cnil){
	V613= Cnil;
	goto T1246;}
	base[1]=V614=MMcons(Cnil,Cnil);
	goto T1247;
T1247:;
	(V614->c.c_car)= (*(LnkLI408))((V615->c.c_car));
	if((V615=MMcdr(V615))==Cnil){
	V613= base[1];
	goto T1246;}
	V614=MMcdr(V614)=MMcons(Cnil,Cnil);
	goto T1247;}
	goto T1246;
T1246:;
	base[2]= (V606);
	base[3]= VV[222];
	base[4]= Ct;
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	base[1]= vs_base[0];
	if(!(number_compare(small_fixnum(0),(V607))<0)){
	goto T1256;}
	base[3]= (V607);
	base[4]= VV[222];
	base[5]= Ct;
	vs_top=(vs_base=base+3)+3;
	Lmake_list();
	vs_top=sup;
	V617= vs_base[0];
	base[2]= append(VV[223],V617);
	goto T1254;
	goto T1256;
T1256:;
	base[2]= Cnil;
	goto T1254;
T1254:;
	if(((V609))==Cnil){
	goto T1264;}
	base[3]= VV[224];
	goto T1262;
	goto T1264;
T1264:;
	base[3]= Cnil;
	goto T1262;
T1262:;
	if(((V608))==Cnil){
	goto T1268;}
	base[5]= VV[225];
	{object V618;
	object V619= (V613);
	if(V619==Cnil){
	base[6]= Cnil;
	goto T1271;}
	base[7]=V618=MMcons(Cnil,Cnil);
	goto T1272;
T1272:;
	(V618->c.c_car)= list(2,(V619->c.c_car),Ct);
	if((V619=MMcdr(V619))==Cnil){
	base[6]= base[7];
	goto T1271;}
	V618=MMcdr(V618)=MMcons(Cnil,Cnil);
	goto T1272;}
	goto T1271;
T1271:;
	if(((V610))==Cnil){
	goto T1276;}
	base[7]= VV[226];
	goto T1274;
	goto T1276;
T1276:;
	base[7]= Cnil;
	goto T1274;
T1274:;
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	base[4]= vs_base[0];
	goto T1266;
	goto T1268;
T1268:;
	base[4]= Cnil;
	goto T1266;
T1266:;
	vs_top=(vs_base=base+1)+4;
	Lappend();
	vs_top=sup;
	V616= vs_base[0];
	{object V621 = list(3,VV[14],V616,VV[227]);
	VMR56(V621)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PROCLAIM-DEFGENERIC	*/

static object LI67(V624,V625)

register object V624;object V625;
{	 VMB57 VMS57 VMV57
	goto TTL;
TTL:;
	if(!(type_of((V624))==t_cons)){
	goto T1278;}
	V624= (*(LnkLI409))(CMPcadr((V624)));
	goto T1278;
T1278:;
	if(!(type_of((V624))==t_symbol)){
	goto T1284;}
	V626= (V624);
	goto T1282;
	goto T1284;
T1284:;
	base[1]= VV[228];
	base[2]= VV[229];
	base[3]= symbol_name(CMPcadr((V624)));
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk410)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lmake_symbol();
	vs_top=sup;
	V626= vs_base[0];
	goto T1282;
T1282:;
	{object V627 = sputprop(V626,VV[230],Ct);
	VMR57(V627)}
	base[0]=base[0];
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
	parse_key(vs_base+1,TRUE,TRUE,1,VV[296]);
	V628=(base[0]);
	vs_top=sup;
	V629=(base[1]);
	V630=(base[2]);
	{object V631;
	if(((*(LnkLI356))((V628)))!=Cnil){
	goto T1291;}
	V631= Cnil;
	goto T1290;
	goto T1291;
T1291:;
	V631= (*(LnkLI347))((V628));
	goto T1290;
T1290:;
	if(((V631))==Cnil){
	goto T1294;}
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1294;}
	base[4]= (V631);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk357)(Lclptr357);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1294;}
	base[4]= (*(LnkLI411))((V628));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1294;
T1294:;
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
	base[0]= VV[231];
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
	V638= (VV[146]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V637);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V639= vs_base[0];
	if((V638)==(CMPcar(V639))){
	goto T1306;}}
	{object V640 = Cnil;
	VMR60(V640)}
	goto T1306;
T1306:;
	if(type_of(V637)==t_structure){
	goto T1315;}
	goto T1313;
	goto T1315;
T1315:;
	if(!(((V637)->str.str_def)==(VV[232]))){
	goto T1313;}
	V641= STREF(object,(V637),4);
	goto T1311;
	goto T1313;
T1313:;{object V643;
	V643= (VV[146]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V637);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V644= vs_base[0];
	if(!((V643)==(CMPcar(V644)))){
	goto T1318;}}
	V641= CMPcar(((V637))->cc.cc_turbo[12]);
	goto T1311;
	goto T1318;
T1318:;
	base[0]= VV[147];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V641= vs_base[0];
	goto T1311;
T1311:;
	V645 = (VV[233]->s.s_dbind);
	{object V646 = (((V641)->v.v_self[fix(V645)])==((VV[131]->s.s_dbind))?Ct:Cnil);
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
	base[3]= list(3,VV[234],list(2,VV[235],base[2]),VV[236]);
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
	base[3]= list(3,VV[234],list(2,VV[235],base[2]),VV[237]);
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
	base[0]= VV[239];
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
	base[0]= VV[239];
	base[1]= VV[238];
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
	goto T1349;}
	{object V678 = Ct;
	VMR66(V678)}
	goto T1349;
T1349:;
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
	base[4]= VV[240];
	vs_top=(vs_base=base+4)+1;
	Lgensym();
	vs_top=sup;
	V687= vs_base[0];
	V688= list(2,(V687),base[3]);
	V689= make_cons(/* INLINE-ARGS */V688,Cnil);
	V690= list(3,VV[242],base[2],(V687));
	base[4]= list(3,VV[95],/* INLINE-ARGS */V689,list(3,VV[241],/* INLINE-ARGS */V690,list(3,VV[30],base[2],(V687))));
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
	goto T1358;}
	base[4]= (V692);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	V697= vs_base[0];
	goto T1356;
	goto T1358;
T1358:;
	if(type_of(V692)==t_structure){
	goto T1365;}
	goto T1363;
	goto T1365;
T1365:;
	if(!(((V692)->str.str_def)==(VV[243]))){
	goto T1363;}
	V701= STREF(object,(V692),4);
	goto T1361;
	goto T1363;
T1363:;{object V703;
	V703= (VV[146]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V692);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V704= vs_base[0];
	if(!((V703)==(CMPcar(V704)))){
	goto T1368;}}
	V701= CMPcar(((V692))->cc.cc_turbo[12]);
	goto T1361;
	goto T1368;
T1368:;
	base[4]= VV[147];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V701= vs_base[0];
	goto T1361;
T1361:;
	V705 = (VV[237]->s.s_dbind);
	V697= (V701)->v.v_self[fix(V705)];
	goto T1356;
T1356:;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1376;}
	base[4]= (V692);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk426)(Lclptr426);
	vs_top=sup;
	V698= vs_base[0];
	goto T1374;
	goto T1376;
T1376:;
	if(type_of(V692)==t_structure){
	goto T1383;}
	goto T1381;
	goto T1383;
T1383:;
	if(!(((V692)->str.str_def)==(VV[244]))){
	goto T1381;}
	V706= STREF(object,(V692),4);
	goto T1379;
	goto T1381;
T1381:;{object V708;
	V708= (VV[146]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V692);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V709= vs_base[0];
	if(!((V708)==(CMPcar(V709)))){
	goto T1386;}}
	V706= CMPcar(((V692))->cc.cc_turbo[12]);
	goto T1379;
	goto T1386;
T1386:;
	base[4]= VV[147];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V706= vs_base[0];
	goto T1379;
T1379:;
	V710 = (VV[236]->s.s_dbind);
	V698= (V706)->v.v_self[fix(V710)];
	goto T1374;
T1374:;
	{object V711= STREF(object,(V697),12);
	V699= (type_of(V711)==t_fixnum||type_of(V711)==t_bignum?Ct:Cnil);}
	if((V693)==Cnil){
	V700= Cnil;
	goto T1393;}
	V700= ((CMPcdr((V698)))==Cnil?Ct:Cnil);
	goto T1393;
T1393:;
	if(((V695))!=Cnil){
	goto T1394;}
	if(((V698))==Cnil){
	goto T1394;}
	V694= (*(LnkLI427))((V692));
	goto T1394;
T1394:;
	if(((V695))!=Cnil){
	goto T1401;}
	if(((V700))==Cnil){
	goto T1400;}
	if(!((STREF(object,(V697),0))==(VV[238]))){
	goto T1400;}
	goto T1401;
T1401:;
	{object V712;
	object V713;
	object V714;
	object V715;
	object V716;
	object V717;
	base[4]= (V694);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk407)();
	if(vs_base>=vs_top){vs_top=sup;goto T1409;}
	V712= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1410;}
	V713= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1411;}
	V714= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1412;}
	V715= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1413;}
	V716= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1414;}
	V717= vs_base[0];
	vs_top=sup;
	goto T1415;
	goto T1409;
T1409:;
	V712= Cnil;
	goto T1410;
T1410:;
	V713= Cnil;
	goto T1411;
T1411:;
	V714= Cnil;
	goto T1412;
T1412:;
	V715= Cnil;
	goto T1413;
T1413:;
	V716= Cnil;
	goto T1414;
T1414:;
	V717= Cnil;
	goto T1415;
T1415:;
	if(((V698))==Cnil){
	goto T1416;}
	if(((V700))!=Cnil){
	goto T1416;}
	{object V718;
	object V719;
	object V720;
	V718= CMPmake_fixnum((long)(*(LnkLI394))((V697)));
	V719= STREF(object,(V697),12);
	V720= STREF(object,(V697),16);
	if(!(number_compare((V712),(V718))==0)){
	goto T1424;}
	if(!(number_compare((V713),(V719))==0)){
	goto T1424;}
	if((V714)!=Cnil){
	V721= (V714);
	goto T1430;}
	V721= (V715);
	goto T1430;
T1430:;
	V722 = (V720);
	if((V721)==(V722)){
	goto T1416;}
	goto T1424;
T1424:;
	base[4]= VV[245];
	base[5]= (V694);
	base[6]= (V692);
	vs_top=(vs_base=base+4)+3;
	Lerror();
	vs_top=sup;}
	goto T1416;
T1416:;
	if(((V695))==Cnil){
	goto T1434;}
	if(equal(STREF(object,(V697),0),V694)){
	goto T1434;}
	V724 = (V697);
	V725 = V694;
	V726= Ct;
	STSET(object,V724,0, V725);
	(void)(V725);
	goto T1434;
T1434:;
	if(((V695))!=Cnil){
	goto T1440;}
	if(((V696))!=Cnil){
	goto T1440;}
	if((STREF(object,(V697),4))!=Cnil){
	goto T1439;}
	goto T1440;
T1440:;
	{object V727;
	V727= (*(LnkLI428))((V694),(V712),(V696));
	if(equal(STREF(object,(V697),4),(V727))){
	goto T1439;}
	V728 = (V697);
	V729 = (V727);
	V730= Ct;
	STSET(object,V728,4, V729);
	(void)(V729);}
	goto T1439;
T1439:;
	{object V731;
	base[4]= (V712);
	vs_top=(vs_base=base+4)+1;
	Lmake_list();
	vs_top=sup;
	V731= vs_base[0];
	if(equal(STREF(object,(V697),8),(V731))){
	goto T1449;}
	V732 = (V697);
	V733 = (V731);
	V734= Ct;
	STSET(object,V732,8, V733);
	(void)(V733);}
	goto T1449;
T1449:;
	if(equal(STREF(object,(V697),12),V713)){
	goto T1454;}
	V736 = (V697);
	V737 = V713;
	V738= Ct;
	STSET(object,V736,12, V737);
	(void)(V737);
	goto T1454;
T1454:;
	{object V739;
	if((V714)!=Cnil){
	V740= (V714);
	goto T1459;}
	V740= (V715);
	goto T1459;
T1459:;
	V739= ((((V740)==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	if(equal(STREF(object,(V697),16),(V739))){
	goto T1457;}
	V741 = (V697);
	V742 = (V739);
	V743= Ct;
	STSET(object,V741,16, V742);
	(void)(V742);}
	goto T1457;
T1457:;
	{object V744;
	if(((V695))==Cnil){
	goto T1464;}
	if(((V716))==Cnil){
	goto T1467;}
	V744= Ct;
	goto T1462;
	goto T1467;
T1467:;
	V744= (V717);
	goto T1462;
	goto T1464;
T1464:;
	V744= STREF(object,(V697),16);
	goto T1462;
T1462:;
	if(equal(STREF(object,(V697),20),(V744))){
	goto T1400;}
	V745 = (V697);
	V746 = (V744);
	V747= Ct;
	STSET(object,V745,20, V746);
	(void)(V746);}}
	goto T1400;
T1400:;
	if(((V693))==Cnil){
	goto T1471;}
	base[4]= (V692);
	base[5]= (V697);
	base[6]= (V693);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk429)();
	vs_top=sup;
	goto T1471;
T1471:;
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
	goto T1481;}
	base[4]= (*(LnkLI431))(base[2]);
	goto T1479;
	goto T1481;
T1481:;
	base[5]= base[2];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk47)(Lclptr47);
	vs_top=sup;
	base[4]= vs_base[0];
	goto T1479;
T1479:;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk407)();
	if(vs_base>=vs_top){vs_top=sup;goto T1484;}
	V750= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1485;}
	V751= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1486;}
	V752= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1487;}
	V753= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1488;}
	V754= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1489;}
	base[3]=MMcons(vs_base[0],Cnil);
	vs_top=sup;
	goto T1490;
	goto T1484;
T1484:;
	V750= Cnil;
	goto T1485;
T1485:;
	V751= Cnil;
	goto T1486;
T1486:;
	V752= Cnil;
	goto T1487;
T1487:;
	V753= Cnil;
	goto T1488;
T1488:;
	V754= Cnil;
	goto T1489;
T1489:;
	base[3]=MMcons(Cnil,Cnil);
	goto T1490;
T1490:;
	{object V755;
	object V756;
	object V757;
	object V758;
	V755= CMPmake_fixnum((long)(*(LnkLI394))((V749)));
	V756= STREF(object,(V749),12);
	V757= STREF(object,(V749),16);
	V758= STREF(object,(V749),20);
	if(number_compare((V750),(V755))==0){
	goto T1495;}
	base[4]= VV[246];
	base[6]= (V750);
	base[7]= (V755);
	vs_top=(vs_base=base+6)+2;
	L83(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L82(base);
	vs_top=sup;
	goto T1495;
T1495:;
	if(number_compare((V751),(V756))==0){
	goto T1502;}
	base[4]= VV[247];
	base[6]= (V751);
	base[7]= (V756);
	vs_top=(vs_base=base+6)+2;
	L83(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L82(base);
	vs_top=sup;
	goto T1502;
T1502:;
	if((V752)!=Cnil){
	V759= (V752);
	goto T1512;}
	V759= (V753);
	goto T1512;
T1512:;
	V760 = (V757);
	if((V759)==(V760)){
	goto T1509;}
	base[4]= VV[248];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T1509;
T1509:;
	if(!(type_of((V758))==t_cons)){
	goto T1515;}
	if(((V753))==Cnil){
	goto T1519;}
	if(((V752))==Cnil){
	goto T1518;}
	goto T1519;
T1519:;
	if(((V754))!=Cnil){
	goto T1518;}
	base[4]= 
	make_cclosure_new(LC133,Cnil,base[3],Cdata);
	base[5]= (V758);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk366)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1518;}
	base[4]= VV[249];
	base[5]= (V758);
	vs_top=(vs_base=base+4)+2;
	L82(base);
	return;
	goto T1518;
T1518:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1515;
T1515:;
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
	goto T1531;}
	if((CMPcdr((V770)))!=Cnil){
	goto T1532;}
	V773= Cnil;
	goto T1531;
	goto T1532;
T1532:;
	V773= (V769);
	goto T1531;
T1531:;
	V774= CMPmake_fixnum((long)length(STREF(object,(V768),8)));
	if(((V773))==Cnil){
	goto T1537;}
	V775= STREF(object,(V768),8);
	goto T1535;
	goto T1537;
T1537:;
	base[4]= (V774);
	vs_top=(vs_base=base+4)+1;
	Lmake_list();
	vs_top=sup;
	V775= vs_base[0];
	goto T1535;
T1535:;
	if(((V773))==Cnil){
	goto T1542;}
	V776= STREF(object,(V768),24);
	goto T1540;
	goto T1542;
T1542:;
	V776= Cnil;
	goto T1540;
T1540:;
	if(((*(LnkLI432))((V768)))==Cnil){
	goto T1530;}
	{register object V777;
	register object V778;
	if(((V769))==Cnil){
	goto T1549;}
	V777= make_cons((V769),Cnil);
	goto T1547;
	goto T1549;
T1549:;
	V777= (V770);
	goto T1547;
T1547:;
	V778= CMPcar((V777));
	goto T1553;
T1553:;
	if(!(((V777))==Cnil)){
	goto T1554;}
	goto T1546;
	goto T1554;
T1554:;
	{object V779;
	register object V780;
	register object V781;
	if(((VV[17]->s.s_dbind))==(VV[18])){
	goto T1560;}
	if(type_of((V778))==t_cons){
	goto T1561;}
	goto T1560;
T1560:;
	base[9]= (V778);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk433)(Lclptr433);
	vs_top=sup;
	V779= vs_base[0];
	goto T1559;
	goto T1561;
T1561:;
	V779= (VFUN_NARGS=2,(*(LnkLI434))((V778),Ct));
	goto T1559;
T1559:;
	if(((VV[17]->s.s_dbind))==(VV[18])){
	goto T1567;}
	if(type_of((V778))==t_cons){
	goto T1568;}
	goto T1567;
T1567:;
	V780= (*(LnkLI363))((V778));
	goto T1566;
	goto T1568;
T1568:;
	V780= (*(LnkLI435))((V778));
	goto T1566;
T1566:;
	if(((V780))==Cnil){
	goto T1574;}
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1573;}
	base[9]= (V767);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk436)(Lclptr436);
	vs_top=sup;
	V782= vs_base[0];
	V783 = (VV[253]->s.s_dbind);
	if(!((V782)==(V783))){
	goto T1574;}
	goto T1573;
T1573:;
	if(!(((V780))==((VV[254]->s.s_dbind)))){
	goto T1583;}
	V781= VV[255];
	goto T1572;
	goto T1583;
T1583:;
	if(!(((V780))==((VV[256]->s.s_dbind)))){
	goto T1586;}
	V781= VV[257];
	goto T1572;
	goto T1586;
T1586:;
	if(!(((V780))==((VV[258]->s.s_dbind)))){
	goto T1589;}
	V781= VV[259];
	goto T1572;
	goto T1589;
T1589:;
	V781= Cnil;
	goto T1572;
	goto T1574;
T1574:;
	V781= Cnil;
	goto T1572;
T1572:;
	base[10]=VV[437]->s.s_gfdef;
	{object V784;
	object V785= (V775);
	object V786= (V779);
	if(V785==Cnil||V786==Cnil){
	V775= Cnil;
	goto T1592;}
	base[9]=V784=MMcons(Cnil,Cnil);
	goto T1593;
T1593:;
	base[11]= (V785->c.c_car);
	base[12]= (V786->c.c_car);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk437)();
	vs_top=sup;
	(V784->c.c_car)= vs_base[0];
	if((V785=MMcdr(V785))==Cnil||(V786=MMcdr(V786))==Cnil){
	V775= base[9];
	goto T1592;}
	V784=MMcdr(V784)=MMcons(Cnil,Cnil);
	goto T1593;}
	goto T1592;
T1592:;
	if(((V776))!=Cnil){
	goto T1599;}
	V776= (V781);
	goto T1597;
	goto T1599;
T1599:;
	if(!(((V776))==((V781)))){
	goto T1602;}
	goto T1597;
	goto T1602;
T1602:;
	V776= Cnil;
	goto T1597;
T1597:;}
	V777= CMPcdr((V777));
	V778= CMPcar((V777));
	goto T1553;}
	goto T1546;
T1546:;
	if(equal(STREF(object,(V768),8),V775)){
	goto T1609;}
	V788 = (V768);
	V789 = V775;
	V790= Ct;
	STSET(object,V788,8, V789);
	(void)(V789);
	goto T1609;
T1609:;
	if(equal(STREF(object,(V768),24),V776)){
	goto T1530;}
	V792 = (V768);
	V793 = V776;
	V794= Ct;
	STSET(object,V792,24, V793);
	(void)(V793);}
	goto T1530;
T1530:;
	if(((V771))==Cnil){
	goto T1615;}
	if(((V772))==Cnil){
	goto T1614;}
	goto T1615;
T1615:;
	{object V795;
	object V796;
	if(((*(LnkLI438))((V767)))==Cnil){
	goto T1621;}
	base[0]= Ct;
	base[1]= Ct;
	vs_top=(vs_base=base+0)+2;
	goto T1619;
	goto T1621;
T1621:;
	base[0]= (V767);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk439)();
	goto T1619;
T1619:;
	if(vs_base>=vs_top){vs_top=sup;goto T1626;}
	V795= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1627;}
	V796= vs_base[0];
	vs_top=sup;
	goto T1628;
	goto T1626;
T1626:;
	V795= Cnil;
	goto T1627;
T1627:;
	V796= Cnil;
	goto T1628;
T1628:;
	if(equal(STREF(object,(V768),32),V795)){
	goto T1629;}
	V798 = (V768);
	V799 = V795;
	V800= Ct;
	STSET(object,V798,32, V799);
	(void)(V799);
	goto T1629;
T1629:;
	if(equal(STREF(object,(V768),36),V796)){
	goto T1632;}
	V802 = (V768);
	V803 = V796;
	V804= Ct;
	STSET(object,V802,36, V803);
	(void)(V803);
	goto T1632;
T1632:;
	if((STREF(object,(V768),36))!=Cnil){
	goto T1614;}
	if(equal(STREF(object,(V768),24),Ct)){
	goto T1614;}
	V806 = (V768);
	V807 = Ct;
	V808= Ct;
	STSET(object,V806,24, V807);
	(void)(V807);}
	goto T1614;
T1614:;
	if(((V771))!=Cnil){
	goto T1639;}
	{object V809;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1644;}
	base[0]= (V767);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk440)(Lclptr440);
	vs_top=sup;
	V809= vs_base[0];
	goto T1642;
	goto T1644;
T1644:;
	V809= (*(LnkLI441))((V767));
	goto T1642;
T1642:;
	{object V810;
	{object V811;
	object V812;
	if(!(type_of((V809))!=t_cons)){
	goto T1650;}
	V811= (V809);
	goto T1648;
	goto T1650;
T1650:;
	V811= CMPcadr((V809));
	goto T1648;
T1648:;{object V813;
	V813= (VV[218]->s.s_dbind);
	base[2]= (VV[218]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V814= vs_base[0];
	V812= make_cons(V813,V814);}
	if((V811)==Cnil){
	V810= Cnil;
	goto T1647;}
	if(type_of((V811))==t_symbol){
	goto T1655;}
	V810= Cnil;
	goto T1647;
	goto T1655;
T1655:;
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
	goto T1659;
	}else V816=V816->c.c_cdr;
	V815= Cnil;}
	goto T1659;
T1659:;
	if((((V815)==Cnil?Ct:Cnil))==Cnil){
	goto T1657;}
	V810= Cnil;
	goto T1647;
	goto T1657;
T1657:;
	base[2]= VV[260];
	base[3]= symbol_name((V811));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk442)();
	vs_top=sup;
	V819= vs_base[0];
	V810= ((V819)==Cnil?Ct:Cnil);}
	goto T1647;
T1647:;
	if(equal(STREF(object,(V768),28),(V810))){
	goto T1639;}
	V820 = (V768);
	V821 = (V810);
	V822= Ct;
	STSET(object,V820,28, V821);
	(void)(V821);}}
	goto T1639;
T1639:;
	{object V823;
	if(!(((((VV[17]->s.s_dbind))==(VV[18])?Ct:Cnil))==Cnil)){
	goto T1669;}
	V823= Ct;
	goto T1668;
	goto T1669;
T1669:;
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
	(void) (*Lnk302)(Lclptr302);
	vs_top=sup;
	V827= vs_base[0];
	base[3]= list(4,V826,V827,VV[261],Cnil);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk443)(Lclptr443);
	vs_top=sup;
	V825= vs_base[0];
	if((V825)==Cnil){
	V823= Cnil;
	goto T1668;}
	if((CMPcdr((V825)))==Cnil){
	goto T1678;}
	V823= Cnil;
	goto T1668;
	goto T1678;
T1678:;
	{object V828;
	base[2]= CMPcar((V825));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk433)(Lclptr433);
	vs_top=sup;
	V828= vs_base[0];
	base[2]= CMPcar((V828));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk292)(Lclptr292);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1682;}
	V823= Cnil;
	goto T1668;
	goto T1682;
T1682:;
	base[2]= CMPcar((V828));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	V829= vs_base[0];
	if((VV[19])==(V829)){
	goto T1685;}
	V823= Cnil;
	goto T1668;
	goto T1685;
T1685:;
	base[2]= CMPcadr((V828));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk292)(Lclptr292);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1689;}
	V823= Cnil;
	goto T1668;
	goto T1689;
T1689:;
	base[2]= CMPcadr((V828));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	V830= vs_base[0];
	V823= ((VV[20])==(V830)?Ct:Cnil);}}
	goto T1668;
T1668:;
	if(equal(STREF(object,(V768),40),(V823))){
	goto T1667;}
	V831 = (V768);
	V832 = (V823);
	V833= Ct;
	STSET(object,V831,40, V832);
	(void)(V832);}
	goto T1667;
T1667:;
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
	goto T1698;}
	if(((*(LnkLI438))((V837)))==Cnil){
	goto T1698;}
	{object V843 = (V837);
	VMR73(V843)}
	goto T1698;
T1698:;
	{register object x= (V838),V844= (VV[262]->s.s_dbind);
	while(V844!=Cnil)
	if(equal(x,V844->c.c_car->c.c_car) &&V844->c.c_car != Cnil){
	goto T1704;
	}else V844=V844->c.c_cdr;
	goto T1703;}
	goto T1704;
T1704:;
	if(((V837))==Cnil){
	goto T1706;}
	{object V845 = (VFUN_NARGS=4,(*(LnkLI444))((V838),(V840),(V841),(V837)));
	VMR73(V845)}
	goto T1706;
T1706:;
	base[0]= VV[263];
	base[1]= (V838);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V846 = vs_base[0];
	VMR73(V846)}
	goto T1703;
T1703:;
	if(((V837))==Cnil){
	goto T1711;}
	base[0]= VV[264];
	base[1]= (V838);
	base[2]= VV[262];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V847 = vs_base[0];
	VMR73(V847)}
	goto T1711;
T1711:;
	base[0]= V838;
	base[1]= (VV[265]->s.s_dbind);
	base[2]= VV[266];
	base[3]= (VV[242]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	Ladjoin();
	vs_top=sup;
	(VV[265]->s.s_dbind)= vs_base[0];
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
	if (narg <= 0) goto T1722;
	else {
	V852= first;}
	if (--narg <= 0) goto T1723;
	else {
	V853= va_arg(ap,object);}
	if (--narg <= 0) goto T1724;
	else {
	V854= va_arg(ap,object);}
	--narg; goto T1725;
	goto T1722;
T1722:;
	V852= Cnil;
	goto T1723;
T1723:;
	V853= Cnil;
	goto T1724;
T1724:;
	V854= Cnil;
	goto T1725;
T1725:;
	base[0]= (VFUN_NARGS=2,(*(LnkLI445))((VV[267]->s.s_dbind),(VV[268]->s.s_dbind)));
	base[0]=MMcons(base[0],Cnil);
	V855 = (base[0]->c.c_car);
	if((V854)!=Cnil){
	V856= (V854);
	goto T1731;}
	if(!(((V851))==(VV[269]))){
	goto T1733;}
	V856= 
	make_cclosure_new(LC134,Cnil,base[0],Cdata);
	goto T1731;
	goto T1733;
T1733:;
	V856= 
	make_cclosure_new(LC135,Cnil,base[0],Cdata);
	goto T1731;
T1731:;
	(void)((*(LnkLI446))(V855,V856));
	{object V858;
	V858= (base[0]->c.c_car);
	V859= ({object _tmp=get(VV[347],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[347])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[347])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V860 = (V858);
	V861 = V851;
	(void)((
	V862 = V859,
	(type_of(V862) == t_sfun ?(*((V862)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V862)==t_vfun) ?
	(*((V862)->sfn.sfn_self)):
	(fcall.fun=(V862),fcalln))(V860,V861)));}
	(void)((*(LnkLI447))(VV[19],(base[0]->c.c_car),VV[275],(V851)));
	V863 = (base[0]->c.c_car);
	vs_base=vs_top;
	(void) (*Lnk351)();
	vs_top=sup;
	V864= vs_base[0];
	(void)((*(LnkLI447))(VV[19],V863,VV[276],V864));
	base[1]= (base[0]->c.c_car);
	base[2]= (V851);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk346)();
	vs_top=sup;
	{object V865;
	V865= (*(LnkLI448))();
	{object V867;
	V867= (base[0]->c.c_car);
	if(type_of((V867))==t_structure){
	goto T1751;}
	goto T1749;
	goto T1751;
T1751:;
	if(!((((V867))->str.str_def)==(VV[277]))){
	goto T1749;}}
	V866= STREF(object,(base[0]->c.c_car),4);
	goto T1747;
	goto T1749;
T1749:;{object V868;
	V868= (VV[146]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V869= vs_base[0];
	if(!((V868)==(CMPcar(V869)))){
	goto T1754;}}
	V866= CMPcar(((base[0]->c.c_car))->cc.cc_turbo[12]);
	goto T1747;
	goto T1754;
T1754:;
	base[1]= VV[147];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	V866= vs_base[0];
	goto T1747;
T1747:;
	V870 = (VV[237]->s.s_dbind);
	V871 = (V865);
	(void)(((V866)->v.v_self[fix(V870)]=(V871)));
	if(((V853))==Cnil){
	goto T1744;}
	(void)((*(LnkLI10))((V851),(V852)));
	(void)((VFUN_NARGS=3,(*(LnkLI449))((base[0]->c.c_car),VV[15],(V852))));}
	goto T1744;
T1744:;
	{object V872 = (base[0]->c.c_car);
	VMR74(V872)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SET-DFUN	*/

static object LI87(object V873,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB75 VMS75 VMV75
	{register object V874;
	register object V875;
	register object V876;
	object V877;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V874= V873;
	narg = narg - 1;
	if (narg <= 0) goto T1763;
	else {
	V875= first;}
	if (--narg <= 0) goto T1764;
	else {
	V876= va_arg(ap,object);}
	if (--narg <= 0) goto T1765;
	else {
	V877= va_arg(ap,object);}
	--narg; goto T1766;
	goto T1763;
T1763:;
	V875= Cnil;
	goto T1764;
T1764:;
	V876= Cnil;
	goto T1765;
T1765:;
	V877= Cnil;
	goto T1766;
T1766:;
	if(((V876))==Cnil){
	goto T1770;}
	V878 = (V876);
	V879 = (V874);
	V880= Ct;
	STSET(object,V878,0, V879);
	(void)(V879);
	goto T1770;
T1770:;
	{object V881;
	if(((V875))==Cnil){
	goto T1776;}
	if(((V876))!=Cnil){
	goto T1775;}
	if(((V877))==Cnil){
	goto T1776;}
	goto T1775;
T1775:;
	V881= listA(3,(V875),(V876),(V877));
	goto T1774;
	goto T1776;
T1776:;
	V881= (V875);
	goto T1774;
T1774:;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1783;}
	V884= ({object _tmp=get(VV[450],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[450])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[450])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V885 = V881;
	V886 = V874;
	(void)((
	V887 = V884,
	(type_of(V887) == t_sfun ?(*((V887)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V887)==t_vfun) ?
	(*((V887)->sfn.sfn_self)):
	(fcall.fun=(V887),fcalln))(V885,V886)));
	goto T1773;
	goto T1783;
T1783:;
	if(type_of(V874)==t_structure){
	goto T1790;}
	goto T1788;
	goto T1790;
T1790:;
	if(!(((V874)->str.str_def)==(VV[279]))){
	goto T1788;}
	V888= STREF(object,(V874),4);
	goto T1786;
	goto T1788;
T1788:;{object V890;
	V890= (VV[146]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V874);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V891= vs_base[0];
	if(!((V890)==(CMPcar(V891)))){
	goto T1793;}}
	V888= CMPcar(((V874))->cc.cc_turbo[12]);
	goto T1786;
	goto T1793;
T1793:;
	base[0]= VV[147];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V888= vs_base[0];
	goto T1786;
T1786:;
	V892 = (VV[280]->s.s_dbind);
	V893 = (V881);
	(void)(((V888)->v.v_self[fix(V892)]=(V893)));}
	goto T1773;
T1773:;
	{object V894 = (V875);
	VMR75(V894)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function GF-DFUN-CACHE	*/

static object LI88(V896)

register object V896;
{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	{object V897;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1801;}
	base[0]= (V896);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk450)(Lclptr450);
	vs_top=sup;
	V897= vs_base[0];
	goto T1799;
	goto T1801;
T1801:;
	if(type_of(V896)==t_structure){
	goto T1808;}
	goto T1806;
	goto T1808;
T1808:;
	if(!(((V896)->str.str_def)==(VV[281]))){
	goto T1806;}
	V898= STREF(object,(V896),4);
	goto T1804;
	goto T1806;
T1806:;{object V900;
	V900= (VV[146]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V896);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V901= vs_base[0];
	if(!((V900)==(CMPcar(V901)))){
	goto T1811;}}
	V898= CMPcar(((V896))->cc.cc_turbo[12]);
	goto T1804;
	goto T1811;
T1811:;
	base[0]= VV[147];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V898= vs_base[0];
	goto T1804;
T1804:;
	V902 = (VV[280]->s.s_dbind);
	V897= (V898)->v.v_self[fix(V902)];
	goto T1799;
T1799:;
	{register object V903;
	V903= (V897);
	base[0]= (V903);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1818;}
	{object V904 = Cnil;
	VMR76(V904)}
	goto T1818;
T1818:;
	if(!(type_of((V903))==t_cons)){
	goto T1822;}
	{object V905 = CMPcadr((V897));
	VMR76(V905)}
	goto T1822;
T1822:;
	{object V906 = Cnil;
	VMR76(V906)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GF-DFUN-INFO	*/

static object LI89(V908)

register object V908;
{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	{object V909;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1826;}
	base[0]= (V908);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk450)(Lclptr450);
	vs_top=sup;
	V909= vs_base[0];
	goto T1824;
	goto T1826;
T1826:;
	if(type_of(V908)==t_structure){
	goto T1833;}
	goto T1831;
	goto T1833;
T1833:;
	if(!(((V908)->str.str_def)==(VV[282]))){
	goto T1831;}
	V910= STREF(object,(V908),4);
	goto T1829;
	goto T1831;
T1831:;{object V912;
	V912= (VV[146]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V908);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V913= vs_base[0];
	if(!((V912)==(CMPcar(V913)))){
	goto T1836;}}
	V910= CMPcar(((V908))->cc.cc_turbo[12]);
	goto T1829;
	goto T1836;
T1836:;
	base[0]= VV[147];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V910= vs_base[0];
	goto T1829;
T1829:;
	V914 = (VV[280]->s.s_dbind);
	V909= (V910)->v.v_self[fix(V914)];
	goto T1824;
T1824:;
	{register object V915;
	V915= (V909);
	base[0]= (V915);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1843;}
	{object V916 = Cnil;
	VMR77(V916)}
	goto T1843;
T1843:;
	if(!(type_of((V915))==t_cons)){
	goto T1847;}
	{object V917 = CMPcddr((V909));
	VMR77(V917)}
	goto T1847;
T1847:;
	{object V918 = Cnil;
	VMR77(V918)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-GF-NAME	*/

static object LI90(V920)

register object V920;
{	 VMB78 VMS78 VMV78
	goto TTL;
TTL:;
	if(type_of(V920)==t_structure){
	goto T1853;}
	goto T1851;
	goto T1853;
T1853:;
	if(!(((V920)->str.str_def)==(VV[283]))){
	goto T1851;}
	V921= STREF(object,(V920),4);
	goto T1849;
	goto T1851;
T1851:;{object V923;
	V923= (VV[146]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V920);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V924= vs_base[0];
	if(!((V923)==(CMPcar(V924)))){
	goto T1856;}}
	V921= CMPcar(((V920))->cc.cc_turbo[12]);
	goto T1849;
	goto T1856;
T1856:;
	base[0]= VV[147];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V921= vs_base[0];
	goto T1849;
T1849:;
	V925 = (VV[284]->s.s_dbind);
	{object V926 = (V921)->v.v_self[fix(V925)];
	VMR78(V926)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GF-LAMBDA-LIST	*/

static object LI91(V928)

register object V928;
{	 VMB79 VMS79 VMV79
	goto TTL;
TTL:;
	{object V929;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1864;}
	base[0]= (V928);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	V929= vs_base[0];
	goto T1862;
	goto T1864;
T1864:;
	if(type_of(V928)==t_structure){
	goto T1871;}
	goto T1869;
	goto T1871;
T1871:;
	if(!(((V928)->str.str_def)==(VV[285]))){
	goto T1869;}
	V930= STREF(object,(V928),4);
	goto T1867;
	goto T1869;
T1869:;{object V932;
	V932= (VV[146]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V928);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V933= vs_base[0];
	if(!((V932)==(CMPcar(V933)))){
	goto T1874;}}
	V930= CMPcar(((V928))->cc.cc_turbo[12]);
	goto T1867;
	goto T1874;
T1874:;
	base[0]= VV[147];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V930= vs_base[0];
	goto T1867;
T1867:;
	V934 = (VV[237]->s.s_dbind);
	V929= (V930)->v.v_self[fix(V934)];
	goto T1862;
T1862:;
	if(!((VV[238])==(STREF(object,(V929),0)))){
	goto T1881;}
	{object V935;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T1885;}
	base[0]= (V928);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk426)(Lclptr426);
	vs_top=sup;
	V935= vs_base[0];
	goto T1883;
	goto T1885;
T1885:;
	if(type_of(V928)==t_structure){
	goto T1892;}
	goto T1890;
	goto T1892;
T1892:;
	if(!(((V928)->str.str_def)==(VV[286]))){
	goto T1890;}
	V936= STREF(object,(V928),4);
	goto T1888;
	goto T1890;
T1890:;{object V938;
	V938= (VV[146]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V928);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V939= vs_base[0];
	if(!((V938)==(CMPcar(V939)))){
	goto T1895;}}
	V936= CMPcar(((V928))->cc.cc_turbo[12]);
	goto T1888;
	goto T1895;
T1895:;
	base[0]= VV[147];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V936= vs_base[0];
	goto T1888;
T1888:;
	V940 = (VV[236]->s.s_dbind);
	V935= (V936)->v.v_self[fix(V940)];
	goto T1883;
T1883:;
	if(((V935))!=Cnil){
	goto T1902;}
	base[0]= VV[287];
	base[1]= (V928);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk398)();
	vs_top=sup;
	{object V941 = Cnil;
	VMR79(V941)}
	goto T1902;
T1902:;
	{object V942;
	object V943;
	object V944;
	base[3]= (V935);
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V945= vs_base[0];
	V942= CMPcar(V945);
	if(!(type_of((V942))==t_cons)){
	goto T1912;}
	V943= (*(LnkLI431))((V942));
	goto T1910;
	goto T1912;
T1912:;
	base[3]= (V942);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk47)(Lclptr47);
	vs_top=sup;
	V943= vs_base[0];
	goto T1910;
T1910:;
	{register object x= VV[61],V946= (V943);
	while(V946!=Cnil)
	if(eql(x,V946->c.c_car)){
	V944= V946;
	goto T1915;
	}else V946=V946->c.c_cdr;
	V944= Cnil;}
	goto T1915;
T1915:;
	if(((V944))==Cnil){
	goto T1917;}
	base[3]= (V943);
	base[4]= CMPcdr((V944));
	vs_top=(vs_base=base+3)+2;
	Lldiff();
	vs_top=sup;
	V947= vs_base[0];
	{object V948 = append(V947,VV[288]);
	VMR79(V948)}
	goto T1917;
T1917:;
	{object V949 = (V943);
	VMR79(V949)}}}
	goto T1881;
T1881:;
	{object V950 = STREF(object,(V929),0);
	VMR79(V950)}}
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
	{object V951=base[0]->c.c_cdr;
	if(endp(V951))invalid_macro_call();
	base[2]= (V951->c.c_car);
	V951=V951->c.c_cdr;
	if(endp(V951))invalid_macro_call();
	base[3]= (V951->c.c_car);
	V951=V951->c.c_cdr;
	if(endp(V951))invalid_macro_call();
	base[4]= (V951->c.c_car);
	V951=V951->c.c_cdr;
	if(!endp(V951))invalid_macro_call();}
	V952= list(2,VV[289],base[2]);
	V953= list(2,/* INLINE-ARGS */V952,list(3,VV[290],base[2],list(4,VV[291],base[2],Ct,base[4])));
	V954= list(2,VV[292],base[2]);
	V955= make_cons(/* INLINE-ARGS */V954,Cnil);
	V956= list(4,VV[120],/* INLINE-ARGS */V953,/* INLINE-ARGS */V955,list(2,Ct,list(3,VV[293],VV[294],base[2])));
	V957= list(3,VV[295],base[3],VV[5]);
	V958= list(3,VV[295],base[3],VV[296]);
	V959= list(2,VV[297],listA(3,VV[298],base[3],VV[299]));
	V960= make_cons(/* INLINE-ARGS */V959,Cnil);
	V961= list(3,VV[298],base[3],VV[4]);
	base[5]= list(5,VV[9],/* INLINE-ARGS */V956,/* INLINE-ARGS */V957,/* INLINE-ARGS */V958,list(3,VV[95],/* INLINE-ARGS */V960,list(3,VV[241],VV[300],list(3,VV[30],/* INLINE-ARGS */V961,listA(3,VV[301],list(2,VV[302],base[2]),VV[303])))));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function REAL-ENSURE-GF-USING-CLASS--GENERIC-FUNCTION	*/

static object LI93(object V963,object V962,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB81 VMS81 VMV81
	{object V964;
	object V965;
	register object V966;
	object V967;
	object V968;
	object V969;
	register object V970;
	object V971;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V964= V963;
	V965= V962;
	narg= narg - 2;
	V972 = make_list(narg);
	V966= V972;
	{
	parse_key_rest_new(V972,narg,Vcs +3,(struct key *)(void *)&LI93key,first,ap);
	V967=(Vcs[3]);
	if(Vcs[4]==0){
	V968= Cnil;
	V969= Cnil;
	}else{
	V968=(Vcs[4]);
	V969= Ct;}
	if(Vcs[5]==0){
	V970= VV[19];
	V971= Cnil;
	}else{
	V970=(Vcs[5]);
	V971= Ct;}
	if(!(type_of((V970))==t_symbol)){
	goto T1927;}
	V970= (VFUN_NARGS=3,(*(LnkLI291))((V970),Ct,(V967)));
	goto T1925;
	goto T1927;
T1927:;
	{object V973;
	base[0]= (V970);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk292)(Lclptr292);
	vs_top=sup;
	V973= vs_base[0];
	if(((V973))==Cnil){
	goto T1933;}
	goto T1925;
	goto T1933;
T1933:;
	base[0]= VV[294];
	base[1]= (V970);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}
	goto T1925;
T1925:;
	{object V974;
	object V975;
	base[0]= (V966);
	base[1]= VV[5];
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1941;}
	V974= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1942;}
	V975= vs_base[0];
	vs_top=sup;
	goto T1943;
	goto T1941;
T1941:;
	V974= Cnil;
	goto T1942;
T1942:;
	V975= Cnil;
	goto T1943;
T1943:;
	V966= (V974);}
	{object V976;
	object V977;
	base[0]= (V966);
	base[1]= VV[296];
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1950;}
	V976= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1951;}
	V977= vs_base[0];
	vs_top=sup;
	goto T1952;
	goto T1950;
T1950:;
	V976= Cnil;
	goto T1951;
T1951:;
	V977= Cnil;
	goto T1952;
T1952:;
	V966= (V976);}
	{object V978;
	base[0]= (V966);
	base[1]= VV[4];
	base[2]= VV[304];
	vs_top=(vs_base=base+0)+3;
	Lgetf();
	vs_top=sup;
	V978= vs_base[0];
	if(((V978))==(VV[304])){
	goto T1924;}
	{object V980;
	base[2]= (V970);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk302)(Lclptr302);
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= CMPcar((V978));
	base[3]= CMPcdr((V978));
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	V980= vs_base[0];
	{object V981;
	base[1]= (V966);
	base[2]= (V980);
	base[3]= VV[4];
	vs_top=(vs_base=base+1)+3;
	siLput_f();
	vs_top=sup;
	V981= vs_base[0];
	V966= (V981);}}}
	goto T1924;
T1924:;
	if(((V971))==Cnil){
	goto T1972;}
	V982= (*(LnkLI363))((V964));
	V983 = (V970);
	if((/* INLINE-ARGS */V982)==(V983)){
	goto T1972;}
	base[0]= (V964);
	base[1]= (V970);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk451)(Lclptr451);
	vs_top=sup;
	goto T1972;
T1972:;
	{object V984;
	base[0]=VV[452]->s.s_gfdef;
	base[1]= (V964);
	{object V985;
	V985= (V966);
	 vs_top=base+2;
	 while(V985!=Cnil)
	 {vs_push((V985)->c.c_car);V985=(V985)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk452)(Lclptr452);
	vs_top=sup;
	V984= vs_base[0];
	if(((V969))==Cnil){
	goto T1982;}
	(void)((*(LnkLI10))((V965),(V968)));
	goto T1982;
T1982:;
	{object V986 = (V984);
	VMR81(V986)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function REAL-ENSURE-GF-USING-CLASS--NULL	*/

static object LI94(object V988,object V987,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB82 VMS82 VMV82
	{object V989;
	object V990;
	register object V991;
	object V992;
	object V993;
	object V994;
	register object V995;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V989= V988;
	V990= V987;
	narg= narg - 2;
	V996 = make_list(narg);
	V991= V996;
	{
	parse_key_rest_new(V996,narg,Vcs +3,(struct key *)(void *)&LI94key,first,ap);
	V992=(Vcs[3]);
	if(Vcs[4]==0){
	V993= Cnil;
	V994= Cnil;
	}else{
	V993=(Vcs[4]);
	V994= Ct;}
	V995=(Vcs[5]);
	if(!(type_of((V995))==t_symbol)){
	goto T1989;}
	V995= (VFUN_NARGS=3,(*(LnkLI291))((V995),Ct,(V992)));
	goto T1987;
	goto T1989;
T1989:;
	{object V997;
	base[0]= (V995);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk292)(Lclptr292);
	vs_top=sup;
	V997= vs_base[0];
	if(((V997))==Cnil){
	goto T1995;}
	goto T1987;
	goto T1995;
T1995:;
	base[0]= VV[294];
	base[1]= (V995);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}
	goto T1987;
T1987:;
	{object V998;
	object V999;
	base[0]= (V991);
	base[1]= VV[5];
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T2003;}
	V998= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2004;}
	V999= vs_base[0];
	vs_top=sup;
	goto T2005;
	goto T2003;
T2003:;
	V998= Cnil;
	goto T2004;
T2004:;
	V999= Cnil;
	goto T2005;
T2005:;
	V991= (V998);}
	{object V1000;
	object V1001;
	base[0]= (V991);
	base[1]= VV[296];
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T2012;}
	V1000= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2013;}
	V1001= vs_base[0];
	vs_top=sup;
	goto T2014;
	goto T2012;
T2012:;
	V1000= Cnil;
	goto T2013;
T2013:;
	V1001= Cnil;
	goto T2014;
T2014:;
	V991= (V1000);}
	{object V1002;
	base[0]= (V991);
	base[1]= VV[4];
	base[2]= VV[304];
	vs_top=(vs_base=base+0)+3;
	Lgetf();
	vs_top=sup;
	V1002= vs_base[0];
	if(((V1002))==(VV[304])){
	goto T1986;}
	{object V1004;
	base[2]= (V995);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk302)(Lclptr302);
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= CMPcar((V1002));
	base[3]= CMPcdr((V1002));
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	V1004= vs_base[0];
	{object V1005;
	base[1]= (V991);
	base[2]= (V1004);
	base[3]= VV[4];
	vs_top=(vs_base=base+1)+3;
	siLput_f();
	vs_top=sup;
	V1005= vs_base[0];
	V991= (V1005);}}}
	goto T1986;
T1986:;
	{object V1006;
	{object V1008;
	base[1]=VV[453]->s.s_gfdef;
	base[2]= (V995);
	base[3]= VV[219];
	base[4]= (V990);
	{object V1009;
	V1009= (V991);
	 vs_top=base+5;
	 while(V1009!=Cnil)
	 {vs_push((V1009)->c.c_car);V1009=(V1009)->c.c_cdr;}
	vs_base=base+2;}
	(void) (*Lnk453)(Lclptr453);
	vs_top=sup;
	V1008= vs_base[0];
	V1010= ({object _tmp=get(VV[347],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[347])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[347])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V1011 = (V1008);
	V1012 = V990;
	V1006= (
	V1013 = V1010,
	(type_of(V1013) == t_sfun ?(*((V1013)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V1013)==t_vfun) ?
	(*((V1013)->sfn.sfn_self)):
	(fcall.fun=(V1013),fcalln))(V1011,V1012));}
	if(((V994))==Cnil){
	goto T2041;}
	(void)((*(LnkLI10))((V990),(V993)));
	goto T2041;
T2041:;
	{object V1014 = (V1006);
	VMR82(V1014)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for GET-GENERIC-FUNCTION-INFO	*/

static void L95()
{register object *base=vs_base;
	register object *sup=base+VM83; VC83
	vs_check;
	{register object V1015;
	check_arg(1);
	V1015=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1016;
	object V1017;
	object V1018;
	{object V1019;
	object V1020;
	if(((*(LnkLI438))((V1015)))==Cnil){
	goto T2047;}
	if(type_of(V1015)==t_structure){
	goto T2053;}
	goto T2051;
	goto T2053;
T2053:;
	if(!(((V1015)->str.str_def)==(VV[305]))){
	goto T2051;}
	V1021= STREF(object,(V1015),4);
	goto T2049;
	goto T2051;
T2051:;{object V1023;
	V1023= (VV[146]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V1015);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1024= vs_base[0];
	if(!((V1023)==(CMPcar(V1024)))){
	goto T2056;}}
	V1021= CMPcar(((V1015))->cc.cc_turbo[12]);
	goto T2049;
	goto T2056;
T2056:;
	base[3]= VV[147];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V1021= vs_base[0];
	goto T2049;
T2049:;
	V1025 = (VV[237]->s.s_dbind);
	V1019= (V1021)->v.v_self[fix(V1025)];
	goto T2045;
	goto T2047;
T2047:;
	base[3]= (V1015);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	V1019= vs_base[0];
	goto T2045;
T2045:;
	V1020= STREF(object,(V1019),8);
	base[3]= (*(LnkLI395))((V1019));
	base[4]= (V1020);
	base[5]= (V1019);
	vs_top=(vs_base=base+3)+3;}
	if(vs_base>=vs_top){vs_top=sup;goto T2067;}
	V1016= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2068;}
	V1017= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2069;}
	V1018= vs_base[0];
	vs_top=sup;
	goto T2070;
	goto T2067;
T2067:;
	V1016= Cnil;
	goto T2068;
T2068:;
	V1017= Cnil;
	goto T2069;
T2069:;
	V1018= Cnil;
	goto T2070;
T2070:;
	base[1]= CMPmake_fixnum((long)length((V1017)));
	base[2]= (V1016);
	base[3]= (V1017);
	base[5]= VV[454];
	base[6]= (V1017);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk425)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V1018);
	vs_top=(vs_base=base+1)+5;
	return;}
	}
}
/*	local entry for function EARLY-MAKE-A-METHOD	*/

static object LI96(object V1031,object V1030,object V1029,object V1028,object V1027,object V1026,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB84 VMS84 VMV84
	{object V1032;
	object V1033;
	object V1034;
	register object V1035;
	register object V1036;
	object V1037;
	object V1038;
	va_start(ap,first);
	if(narg <6) too_few_arguments();
	V1032= V1031;
	V1033= V1030;
	V1034= V1029;
	V1035= V1028;
	V1036= V1027;
	V1037= V1026;
	narg = narg - 6;
	if (narg <= 0) goto T2078;
	else {
	V1038= first;}
	--narg; goto T2079;
	goto T2078;
T2078:;
	V1038= Cnil;
	goto T2079;
T2079:;
	(void)((VFUN_NARGS=1,(*(LnkLI455))((V1036))));
	{object V1039;
	object V1040;
	V1039= Cnil;
	V1040= Cnil;
	base[0]= VV[456];
	base[1]= (V1035);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk366)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2084;}
	V1039= (V1035);
	{object V1041;
	object V1042= (V1035);
	if(V1042==Cnil){
	V1040= Cnil;
	goto T2090;}
	base[0]=V1041=MMcons(Cnil,Cnil);
	goto T2091;
T2091:;
	if(!(((V1042->c.c_car))==(Ct))){
	goto T2094;}
	(V1041->c.c_car)= Ct;
	goto T2092;
	goto T2094;
T2094:;
	base[1]= (V1042->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	(V1041->c.c_car)= vs_base[0];
	goto T2092;
T2092:;
	if((V1042=MMcdr(V1042))==Cnil){
	V1040= base[0];
	goto T2090;}
	V1041=MMcdr(V1041)=MMcons(Cnil,Cnil);
	goto T2091;}
	goto T2090;
T2090:;
	goto T2082;
	goto T2084;
T2084:;
	V1040= (V1035);
	V1039= Cnil;
	goto T2082;
T2082:;
	base[0]= (V1036);
	base[1]= VV[35];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V1044= vs_base[0];
	base[0]= (V1036);
	base[1]= VV[215];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V1045= vs_base[0];
	V1046 = (V1039);
	{object V1047 = list(5,VV[306],V1044,V1045,V1046,list(7,(V1032),(V1033),(V1034),(V1040),(V1036),(V1037),(V1038)));
	VMR84(V1047)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for REAL-MAKE-A-METHOD	*/

static void L97()
{register object *base=vs_base;
	register object *sup=base+VM85; VC85
	vs_check;
	{object V1048;
	object V1049;
	object V1050;
	object V1051;
	object V1052;
	object V1053;
	object V1054;
	if(vs_top-vs_base<6) too_few_arguments();
	if(vs_top-vs_base>7) too_many_arguments();
	V1048=(base[0]);
	V1049=(base[1]);
	V1050=(base[2]);
	V1051=(base[3]);
	V1052=(base[4]);
	V1053=(base[5]);
	vs_base=vs_base+6;
	if(vs_base>=vs_top){vs_top=sup;goto T2106;}
	V1054=(base[6]);
	vs_top=sup;
	goto T2107;
	goto T2106;
T2106:;
	V1054= Cnil;
	goto T2107;
T2107:;
	V1051= (*(LnkLI457))((V1051));
	base[7]=VV[453]->s.s_gfdef;
	base[8]= (V1048);
	base[9]= VV[307];
	base[10]= (V1049);
	base[11]= VV[15];
	base[12]= (V1050);
	base[13]= VV[308];
	base[14]= (V1051);
	base[15]= VV[3];
	base[16]= (V1053);
	base[17]= VV[309];
	base[18]= (V1054);
	base[19]= VV[310];
	base[20]= Ct;
	{object V1055;
	V1055= (V1052);
	 vs_top=base+21;
	 while(V1055!=Cnil)
	 {vs_push((V1055)->c.c_car);V1055=(V1055)->c.c_cdr;}
	vs_base=base+8;}
	(void) (*Lnk453)(Lclptr453);
	return;
	}
}
/*	function definition for EARLY-METHOD-FUNCTION	*/

static void L98()
{register object *base=vs_base;
	register object *sup=base+VM86; VC86
	vs_check;
	{object V1056;
	check_arg(1);
	V1056=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= CMPcadr((V1056));
	base[2]= CMPcaddr((V1056));
	vs_top=(vs_base=base+1)+2;
	return;
	}
}
/*	local entry for function EARLY-METHOD-CLASS	*/

static object LI99(V1058)

object V1058;
{	 VMB87 VMS87 VMV87
	goto TTL;
TTL:;
	base[0]= (V1058);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk458)();
	vs_top=sup;
	V1059= vs_base[0];
	{object V1060 = (VFUN_NARGS=1,(*(LnkLI291))(CMPcar(V1059)));
	VMR87(V1060)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-METHOD-STANDARD-ACCESSOR-P	*/

static object LI100(V1062)

object V1062;
{	 VMB88 VMS88 VMV88
	goto TTL;
TTL:;
	{object V1063;
	base[0]= (V1062);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk458)();
	vs_top=sup;
	V1064= vs_base[0];
	V1063= CMPcar(V1064);
	if(!(((V1063))==(VV[311]))){
	goto T2132;}
	{object V1065 = Ct;
	VMR88(V1065)}
	goto T2132;
T2132:;
	if(!(((V1063))==(VV[312]))){
	goto T2134;}
	{object V1066 = Ct;
	VMR88(V1066)}
	goto T2134;
T2134:;
	{object V1067 = (((V1063))==(VV[313])?Ct:Cnil);
	VMR88(V1067)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for EARLY-METHOD-STANDARD-ACCESSOR-SLOT-NAME	*/

static void L101()
{register object *base=vs_base;
	register object *sup=base+VM89; VC89
	vs_check;
	{object V1068;
	check_arg(1);
	V1068=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V1068);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk458)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk459)();
	return;
	}
}
/*	local entry for function EARLY-METHOD-SPECIALIZERS	*/

static object LI102(object V1069,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB90 VMS90 VMV90
	{register object V1070;
	object V1071;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V1070= V1069;
	narg = narg - 1;
	if (narg <= 0) goto T2138;
	else {
	V1071= first;}
	--narg; goto T2139;
	goto T2138;
T2138:;
	V1071= Cnil;
	goto T2139;
T2139:;
	if(!(type_of((V1070))==t_cons||((V1070))==Cnil)){
	goto T2142;}
	if(!((CMPcar((V1070)))==(VV[306]))){
	goto T2142;}
	if(!(((V1071))==(Ct))){
	goto T2147;}{object V1072;
	V1072= CMPcadddr((V1070));
	if(V1072==Cnil)goto T2149;
	{object V1073 = V1072;
	VMR90(V1073)}
	goto T2149;
T2149:;}
	{object V1075;
	base[2]=VV[291]->s.s_gfdef;
	base[3]= (V1070);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk458)();
	vs_top=sup;
	V1078= vs_base[0];
	{object V1076;
	object V1077= CMPcadddr(V1078);
	if(V1077==Cnil){
	V1075= Cnil;
	goto T2151;}
	base[1]=V1076=MMcons(Cnil,Cnil);
	goto T2152;
T2152:;
	base[3]= (V1077->c.c_car);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk291)();
	vs_top=sup;
	(V1076->c.c_car)= vs_base[0];
	if((V1077=MMcdr(V1077))==Cnil){
	V1075= base[1];
	goto T2151;}
	V1076=MMcdr(V1076)=MMcons(Cnil,Cnil);
	goto T2152;}
	goto T2151;
T2151:;
	(CMPcdddr(V1070))->c.c_car = (V1075);
	(void)(CMPcdddr(V1070));
	{object V1079 = (V1075);
	VMR90(V1079)}}
	goto T2147;
T2147:;
	base[0]= (V1070);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk458)();
	vs_top=sup;
	V1080= vs_base[0];
	{object V1081 = CMPcadddr(V1080);
	VMR90(V1081)}
	goto T2142;
T2142:;
	base[0]= VV[314];
	base[1]= (V1070);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V1082 = vs_base[0];
	VMR90(V1082)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function EARLY-METHOD-QUALIFIERS	*/

static object LI103(V1084)

object V1084;
{	 VMB91 VMS91 VMV91
	goto TTL;
TTL:;
	base[0]= (V1084);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk458)();
	vs_top=sup;
	V1085= vs_base[0];
	{object V1086 = CMPcadr(V1085);
	VMR91(V1086)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-METHOD-LAMBDA-LIST	*/

static object LI104(V1088)

object V1088;
{	 VMB92 VMS92 VMV92
	goto TTL;
TTL:;
	base[0]= (V1088);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk458)();
	vs_top=sup;
	V1089= vs_base[0];
	{object V1090 = CMPcaddr(V1089);
	VMR92(V1090)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-ADD-NAMED-METHOD	*/

static object LI105(object V1094,object V1093,object V1092,object V1091,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB93 VMS93 VMV93
	{object V1095;
	register object V1096;
	register object V1097;
	object V1098;
	object V1099;
	va_start(ap,first);
	if(narg <4) too_few_arguments();
	V1095= V1094;
	V1096= V1093;
	V1097= V1092;
	V1098= V1091;
	narg= narg - 4;
	V1100 = list_vector_new(narg,first,ap);
	V1099= V1100;
	{object V1101;
	object V1102;
	object V1103;
	base[3]= (V1095);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk352)();
	vs_top=sup;
	V1101= vs_base[0];
	{register object V1104;
	register object V1105;
	if(type_of(V1101)==t_structure){
	goto T2174;}
	goto T2172;
	goto T2174;
T2174:;
	if(!(((V1101)->str.str_def)==(VV[315]))){
	goto T2172;}
	V1106= STREF(object,(V1101),4);
	goto T2170;
	goto T2172;
T2172:;{object V1108;
	V1108= (VV[146]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V1101);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1109= vs_base[0];
	if(!((V1108)==(CMPcar(V1109)))){
	goto T2177;}}
	V1106= CMPcar(((V1101))->cc.cc_turbo[12]);
	goto T2170;
	goto T2177;
T2177:;
	base[5]= VV[147];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	V1106= vs_base[0];
	goto T2170;
T2170:;
	V1110 = (VV[236]->s.s_dbind);
	V1104= (V1106)->v.v_self[fix(V1110)];
	V1105= CMPcar((V1104));
	goto T2185;
T2185:;
	if(!(((V1104))==Cnil)){
	goto T2186;}
	V1102= Cnil;
	goto T2168;
	goto T2186;
T2186:;
	V1111= (VFUN_NARGS=1,(*(LnkLI434))((V1105)));
	V1112 = (V1097);
	if(!(equal(/* INLINE-ARGS */V1111,V1112))){
	goto T2190;}
	V1113= (*(LnkLI460))((V1105));
	V1114 = (V1096);
	if(!(equal(/* INLINE-ARGS */V1113,V1114))){
	goto T2190;}
	V1102= (V1105);
	goto T2168;
	goto T2190;
T2190:;
	V1104= CMPcdr((V1104));
	V1105= CMPcar((V1104));
	goto T2185;}
	goto T2168;
T2168:;
	base[3]= VV[20];
	base[4]= (V1096);
	base[5]= (V1098);
	base[6]= (V1097);
	base[7]= (V1099);
	base[8]= Cnil;
	V1103= simple_symlispcall(VV[461],base+3,6);
	if(((V1102))==Cnil){
	goto T2207;}
	base[3]= (V1101);
	base[4]= (V1102);
	(void)simple_symlispcall(VV[462],base+3,2);
	goto T2207;
T2207:;
	base[3]= (V1101);
	base[4]= (V1103);
	{object V1115 = simple_symlispcall(VV[463],base+3,2);
	VMR93(V1115)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function ADD-METHOD	*/

static object LI106(V1118,V1119)

register object V1118;register object V1119;
{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;{object V1120;
	V1120= (VV[146]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1118);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1121= vs_base[0];
	if((V1120)==(CMPcar(V1121))){
	goto T2214;}}
	base[0]= VV[316];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2214;
T2214:;
	if(!(type_of((V1119))==t_cons||((V1119))==Cnil)){
	goto T2222;}
	if((CMPcar((V1119)))==(VV[306])){
	goto T2221;}
	goto T2222;
T2222:;
	base[0]= VV[317];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2221;
T2221:;
	{object V1123;
	object V1124;
	object V1125;
	if(type_of(V1118)==t_structure){
	goto T2232;}
	goto T2230;
	goto T2232;
T2232:;
	if(!(((V1118)->str.str_def)==(VV[318]))){
	goto T2230;}
	V1123= STREF(object,(V1118),4);
	goto T2228;
	goto T2230;
T2230:;{object V1127;
	V1127= (VV[146]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1118);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1128= vs_base[0];
	if(!((V1127)==(CMPcar(V1128)))){
	goto T2235;}}
	V1123= CMPcar(((V1118))->cc.cc_turbo[12]);
	goto T2228;
	goto T2235;
T2235:;
	base[2]= VV[147];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V1123= vs_base[0];
	goto T2228;
T2228:;
	V1124= (VV[236]->s.s_dbind);
	V1125= make_cons(V1119,((V1123))->v.v_self[fix((V1124))]);
	(void)((((V1123))->v.v_self[fix((V1124))]=((V1125))));}
	(void)((VFUN_NARGS=3,(*(LnkLI449))((V1118),VV[319],(V1119))));
	V1130= (*(LnkLI441))((V1118));
	V1131 = (VV[262]->s.s_dbind);
	{register object x= /* INLINE-ARGS */V1130,V1129= V1131;
	while(V1129!=Cnil)
	if(equal(x,V1129->c.c_car->c.c_car) &&V1129->c.c_car != Cnil){
	goto T2245;
	}else V1129=V1129->c.c_cdr;}
	{object V1132 = (VFUN_NARGS=1,(*(LnkLI464))((V1118)));
	VMR94(V1132)}
	goto T2245;
T2245:;
	{object V1133 = Cnil;
	VMR94(V1133)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REMOVE-METHOD	*/

static object LI107(V1136,V1137)

register object V1136;object V1137;
{	 VMB95 VMS95 VMV95
	goto TTL;
TTL:;{object V1138;
	V1138= (VV[146]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1136);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1139= vs_base[0];
	if((V1138)==(CMPcar(V1139))){
	goto T2247;}}
	base[0]= VV[320];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2247;
T2247:;
	if(!(type_of((V1137))==t_cons||((V1137))==Cnil)){
	goto T2255;}
	if((CMPcar((V1137)))==(VV[306])){
	goto T2254;}
	goto T2255;
T2255:;
	base[0]= VV[321];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2254;
T2254:;
	if(type_of(V1136)==t_structure){
	goto T2265;}
	goto T2263;
	goto T2265;
T2265:;
	if(!(((V1136)->str.str_def)==(VV[322]))){
	goto T2263;}
	V1140= STREF(object,(V1136),4);
	goto T2261;
	goto T2263;
T2263:;{object V1142;
	V1142= (VV[146]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1136);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1143= vs_base[0];
	if(!((V1142)==(CMPcar(V1143)))){
	goto T2268;}}
	V1140= CMPcar(((V1136))->cc.cc_turbo[12]);
	goto T2261;
	goto T2268;
T2268:;
	base[0]= VV[147];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1140= vs_base[0];
	goto T2261;
T2261:;{object V1144;
	V1144= (VV[236]->s.s_dbind);
	base[0]= (V1137);
	if(type_of(V1136)==t_structure){
	goto T2281;}
	goto T2279;
	goto T2281;
T2281:;
	if(!(((V1136)->str.str_def)==(VV[323]))){
	goto T2279;}
	V1146= STREF(object,(V1136),4);
	goto T2277;
	goto T2279;
T2279:;{object V1148;
	V1148= (VV[146]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1136);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1149= vs_base[0];
	if(!((V1148)==(CMPcar(V1149)))){
	goto T2284;}}
	V1146= CMPcar(((V1136))->cc.cc_turbo[12]);
	goto T2277;
	goto T2284;
T2284:;
	base[2]= VV[147];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V1146= vs_base[0];
	goto T2277;
T2277:;
	V1150 = (VV[236]->s.s_dbind);
	base[1]= (V1146)->v.v_self[fix(V1150)];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk376)();
	vs_top=sup;
	V1145= vs_base[0];
	(void)(((V1140)->v.v_self[fix(V1144)]=(V1145)));}
	(void)((VFUN_NARGS=1,(*(LnkLI449))((V1136))));
	V1152= (*(LnkLI441))((V1136));
	V1153 = (VV[262]->s.s_dbind);
	{register object x= /* INLINE-ARGS */V1152,V1151= V1153;
	while(V1151!=Cnil)
	if(equal(x,V1151->c.c_car->c.c_car) &&V1151->c.c_car != Cnil){
	goto T2292;
	}else V1151=V1151->c.c_cdr;}
	{object V1154 = (VFUN_NARGS=1,(*(LnkLI464))((V1136)));
	VMR95(V1154)}
	goto T2292;
T2292:;
	{object V1155 = Cnil;
	VMR95(V1155)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-METHOD	*/

static object LI108(object V1158,object V1157,object V1156,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB96 VMS96 VMV96
	{object V1159;
	register object V1160;
	register object V1161;
	object V1162;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V1159= V1158;
	V1160= V1157;
	V1161= V1156;
	narg = narg - 3;
	if (narg <= 0) goto T2294;
	else {
	V1162= first;}
	--narg; goto T2295;
	goto T2294;
T2294:;
	V1162= Ct;
	goto T2295;
T2295:;
	if(((*(LnkLI438))((V1159)))==Cnil){
	goto T2298;}{object V1163;
	{register object V1164;
	register object V1165;
	if(type_of(V1159)==t_structure){
	goto T2307;}
	goto T2305;
	goto T2307;
T2307:;
	if(!(((V1159)->str.str_def)==(VV[324]))){
	goto T2305;}
	V1166= STREF(object,(V1159),4);
	goto T2303;
	goto T2305;
T2305:;{object V1168;
	V1168= (VV[146]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1159);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1169= vs_base[0];
	if(!((V1168)==(CMPcar(V1169)))){
	goto T2310;}}
	V1166= CMPcar(((V1159))->cc.cc_turbo[12]);
	goto T2303;
	goto T2310;
T2310:;
	base[2]= VV[147];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V1166= vs_base[0];
	goto T2303;
T2303:;
	V1170 = (VV[236]->s.s_dbind);
	V1164= (V1166)->v.v_self[fix(V1170)];
	V1165= CMPcar((V1164));
	goto T2318;
T2318:;
	if(!(((V1164))==Cnil)){
	goto T2319;}
	V1163= Cnil;
	goto T2301;
	goto T2319;
T2319:;
	V1171= (VFUN_NARGS=2,(*(LnkLI434))((V1165),Cnil));
	V1172 = (V1161);
	if(equal(/* INLINE-ARGS */V1171,V1172)){
	goto T2325;}
	V1173= (VFUN_NARGS=2,(*(LnkLI434))((V1165),Ct));
	V1174 = (V1161);
	if(!(equal(/* INLINE-ARGS */V1173,V1174))){
	goto T2323;}
	goto T2325;
T2325:;
	V1175= (*(LnkLI460))((V1165));
	V1176 = (V1160);
	if(!(equal(/* INLINE-ARGS */V1175,V1176))){
	goto T2323;}
	V1163= (V1165);
	goto T2301;
	goto T2323;
T2323:;
	V1164= CMPcdr((V1164));
	V1165= CMPcar((V1164));
	goto T2318;}
	goto T2301;
T2301:;
	if(V1163==Cnil)goto T2300;
	{object V1177 = V1163;
	VMR96(V1177)}
	goto T2300;
T2300:;}
	if(((V1162))==Cnil){
	goto T2336;}
	base[0]= VV[325];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V1178 = vs_base[0];
	VMR96(V1178)}
	goto T2336;
T2336:;
	{object V1179 = Cnil;
	VMR96(V1179)}
	goto T2298;
T2298:;
	{object V1180 = (VFUN_NARGS=4,(*(LnkLI465))((V1159),(V1160),(V1161),(V1162)));
	VMR96(V1180)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function FIX-EARLY-GENERIC-FUNCTIONS	*/

static object LI109(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB97 VMS97 VMV97
	{object V1181;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T2339;
	else {
	V1181= first;}
	--narg; goto T2340;
	goto T2339;
T2339:;
	V1181= (VV[326]->s.s_dbind);
	goto T2340;
T2340:;
	(VV[327]->s.s_dbind)= Ct;
	{object V1182;
	V1182= Cnil;
	{register object V1183;
	register object V1184;
	V1183= (VV[265]->s.s_dbind);
	V1184= CMPcar((V1183));
	goto T2348;
T2348:;
	if(!(((V1183))==Cnil)){
	goto T2349;}
	goto T2344;
	goto T2349;
T2349:;
	base[1]= (VV[466]->s.s_gfdef);
	{object V1186;
	V1186= (*(LnkLI347))((V1184));
	if(type_of((V1186))==t_structure){
	goto T2363;}
	goto T2360;
	goto T2363;
T2363:;
	if(!((((V1186))->str.str_def)==(VV[328]))){
	goto T2360;}}
	V1187= (*(LnkLI347))((V1184));
	V1185= STREF(object,/* INLINE-ARGS */V1187,4);
	goto T2358;
	goto T2360;
T2360:;{object V1188;
	V1188= (VV[146]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (*(LnkLI347))((V1184));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1189= vs_base[0];
	if(!((V1188)==(CMPcar(V1189)))){
	goto T2366;}}
	V1190= (*(LnkLI347))((V1184));
	V1185= CMPcar((/* INLINE-ARGS */V1190)->cc.cc_turbo[12]);
	goto T2358;
	goto T2366;
T2366:;
	base[3]= VV[147];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V1185= vs_base[0];
	goto T2358;
T2358:;
	V1191 = (VV[236]->s.s_dbind);
	base[2]= (V1185)->v.v_self[fix(V1191)];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk366)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2353;}
	V1182= make_cons(V1184,(V1182));
	goto T2353;
T2353:;
	V1183= CMPcdr((V1183));
	V1184= CMPcar((V1183));
	goto T2348;}
	goto T2344;
T2344:;
	{register object V1193;
	object V1194;
	V1193= nconc((V1182),VV[329]);
	V1194= CMPcar((V1193));
	goto T2382;
T2382:;
	if(!(((V1193))==Cnil)){
	goto T2383;}
	goto T2378;
	goto T2383;
T2383:;
	V1195 = (V1194);
	base[2]= (V1194);
	base[3]= (VV[265]->s.s_dbind);
	base[4]= VV[266];
	base[5]= (VV[242]->s.s_gfdef);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk467)();
	vs_top=sup;
	V1196= vs_base[0];
	(VV[265]->s.s_dbind)= make_cons(V1195,V1196);
	V1193= CMPcdr((V1193));
	V1194= CMPcar((V1193));
	goto T2382;}
	goto T2378;
T2378:;
	{register object V1197;
	object V1198;
	V1197= (VV[265]->s.s_dbind);
	V1198= CMPcar((V1197));
	goto T2403;
T2403:;
	if(!(((V1197))==Cnil)){
	goto T2404;}
	goto T2399;
	goto T2404;
T2404:;
	if(((V1181))==Cnil){
	goto T2408;}
	base[1]= Ct;
	base[2]= VV[330];
	base[3]= (V1198);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T2408;
T2408:;
	{register object V1199;
	object V1200;
	V1199= (*(LnkLI347))((V1198));
	if(type_of(V1199)==t_structure){
	goto T2422;}
	goto T2420;
	goto T2422;
T2422:;
	if(!(((V1199)->str.str_def)==(VV[331]))){
	goto T2420;}
	V1203= STREF(object,(V1199),4);
	goto T2418;
	goto T2420;
T2420:;{object V1205;
	V1205= (VV[146]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V1199);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk390)();
	vs_top=sup;
	V1206= vs_base[0];
	if(!((V1205)==(CMPcar(V1206)))){
	goto T2425;}}
	V1203= CMPcar(((V1199))->cc.cc_turbo[12]);
	goto T2418;
	goto T2425;
T2425:;
	base[4]= VV[147];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V1203= vs_base[0];
	goto T2418;
T2418:;
	V1207 = (VV[236]->s.s_dbind);
	{object V1201;
	object V1202= (V1203)->v.v_self[fix(V1207)];
	if(V1202==Cnil){
	V1200= Cnil;
	goto T2416;}
	base[3]=V1201=MMcons(Cnil,Cnil);
	goto T2417;
T2417:;
	{object V1209;
	base[5]= (V1202->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk458)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lcopy_list();
	vs_top=sup;
	V1209= vs_base[0];
	{object V1211;
	V1211= (VFUN_NARGS=2,(*(LnkLI434))((V1202->c.c_car),Ct));
	(CMPcdddr(V1209))->c.c_car = (V1211);
	(void)(CMPcdddr(V1209));}
	{object V1212;
	V1212= (V1209);
	 vs_top=base+4;
	 while(V1212!=Cnil)
	 {vs_push((V1212)->c.c_car);V1212=(V1212)->c.c_cdr;}
	vs_base=base+4;}
	(void) (*Lnk468)();
	vs_top=sup;
	(V1201->c.c_car)= vs_base[0];}
	if((V1202=MMcdr(V1202))==Cnil){
	V1200= base[3];
	goto T2416;}
	V1201=MMcdr(V1201)=MMcons(Cnil,Cnil);
	goto T2417;}
	goto T2416;
T2416:;
	{object V1214;
	V1214= (VV[332]->s.s_dbind);
	V1215= ({object _tmp=get(VV[358],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[358])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[358])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V1216 = (V1214);
	V1217 = V1199;
	(void)((
	V1218 = V1215,
	(type_of(V1218) == t_sfun ?(*((V1218)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V1218)==t_vfun) ?
	(*((V1218)->sfn.sfn_self)):
	(fcall.fun=(V1218),fcalln))(V1216,V1217)));}
	{object V1220;
	V1220= (VV[253]->s.s_dbind);
	V1221= ({object _tmp=get(VV[436],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[436])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[436])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V1222 = (V1220);
	V1223 = V1199;
	(void)((
	V1224 = V1221,
	(type_of(V1224) == t_sfun ?(*((V1224)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V1224)==t_vfun) ?
	(*((V1224)->sfn.sfn_self)):
	(fcall.fun=(V1224),fcalln))(V1222,V1223)));}
	(void)((*(LnkLI469))((V1199),(V1200)));}
	V1197= CMPcdr((V1197));
	V1198= CMPcar((V1197));
	goto T2403;}
	goto T2399;
T2399:;
	{register object V1225;
	object V1226;
	V1225= (VV[333]->s.s_dbind);
	V1226= CMPcar((V1225));
	goto T2454;
T2454:;
	if(!(((V1225))==Cnil)){
	goto T2455;}
	goto T2450;
	goto T2455;
T2455:;
	{object V1227;
	object V1228;
	V1227= CMPcar((V1226));
	base[3]= CMPcaddr((V1226));
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	V1228= vs_base[0];
	V1229= ({object _tmp=get(VV[347],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[347])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[347])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V1230 = (V1228);
	V1231 = (V1227);
	(void)((
	V1232 = V1229,
	(type_of(V1232) == t_sfun ?(*((V1232)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V1232)==t_vfun) ?
	(*((V1232)->sfn.sfn_self)):
	(fcall.fun=(V1232),fcalln))(V1230,V1231)));}
	V1225= CMPcdr((V1225));
	V1226= CMPcar((V1225));
	goto T2454;}
	goto T2450;
T2450:;
	{register object V1233;
	object V1234;
	V1233= (VV[262]->s.s_dbind);
	V1234= CMPcar((V1233));
	goto T2472;
T2472:;
	if(!(((V1233))==Cnil)){
	goto T2473;}
	{object V1235 = Cnil;
	VMR97(V1235)}
	goto T2473;
T2473:;
	{object V1236;
	object V1237;
	object V1238;
	V1236= CMPcar((V1234));
	V1237= (*(LnkLI347))((V1236));
	{object V1239;
	object V1240= CMPcdr((V1234));
	if(V1240==Cnil){
	V1238= Cnil;
	goto T2480;}
	base[4]=V1239=MMcons(Cnil,Cnil);
	goto T2481;
T2481:;
	{object V1242;
	object V1243;
	object V1244;
	object V1245;
	object V1246;
	V1242= CMPcar((V1240->c.c_car));
	V1243= CMPcadr((V1240->c.c_car));
	V1244= CMPcaddr((V1240->c.c_car));
	if((V1244)!=Cnil){
	V1245= (V1244);
	goto T2486;}
	V1245= (V1236);
	goto T2486;
T2486:;
	base[11]= (V1245);
	vs_top=(vs_base=base+11)+1;
	Lsymbol_function();
	vs_top=sup;
	base[9]= vs_base[0];
	base[9]=MMcons(base[9],Cnil);
	base[11]= 
	make_cclosure_new(LC138,Cnil,base[9],Cdata);
	base[12]= list(2,VV[164],(V1245));
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk346)();
	vs_top=sup;
	V1247= vs_base[0];
	V1246= list(2,VV[35],V1247);
	base[11]= VV[20];
	base[12]= Cnil;
	base[13]= (V1242);
	base[14]= (V1243);
	base[15]= (V1246);
	base[16]= Cnil;
	(V1239->c.c_car)= simple_symlispcall(VV[461],base+11,6);}
	if((V1240=MMcdr(V1240))==Cnil){
	V1238= base[4];
	goto T2480;}
	V1239=MMcdr(V1239)=MMcons(Cnil,Cnil);
	goto T2481;}
	goto T2480;
T2480:;
	{object V1249;
	V1249= (VV[332]->s.s_dbind);
	V1250= ({object _tmp=get(VV[358],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[358])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[358])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V1251 = (V1249);
	V1252 = V1237;
	(void)((
	V1253 = V1250,
	(type_of(V1253) == t_sfun ?(*((V1253)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V1253)==t_vfun) ?
	(*((V1253)->sfn.sfn_self)):
	(fcall.fun=(V1253),fcalln))(V1251,V1252)));}
	{object V1255;
	V1255= (VV[253]->s.s_dbind);
	V1256= ({object _tmp=get(VV[436],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[436])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[436])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V1257 = (V1255);
	V1258 = V1237;
	(void)((
	V1259 = V1256,
	(type_of(V1259) == t_sfun ?(*((V1259)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V1259)==t_vfun) ?
	(*((V1259)->sfn.sfn_self)):
	(fcall.fun=(V1259),fcalln))(V1257,V1258)));}
	(void)((*(LnkLI469))((V1237),(V1238)));}
	V1233= CMPcdr((V1233));
	V1234= CMPcar((V1233));
	goto T2472;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for PARSE-DEFMETHOD	*/

static void L110()
{register object *base=vs_base;
	register object *sup=base+VM98; VC98
	vs_check;
	{register object V1260;
	check_arg(1);
	V1260=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1261;
	register object V1262;
	object V1263;
	{object V1264;
	V1264= CMPcar((V1260));
	V1260= CMPcdr((V1260));
	V1261= (V1264);}
	V1262= Cnil;
	V1263= Cnil;
	goto T2516;
T2516:;
	if((CMPcar((V1260)))==Cnil){
	goto T2519;}
	if(!(type_of(CMPcar((V1260)))!=t_cons)){
	goto T2519;}
	{register object V1265;
	{register object V1266;
	V1266= CMPcar((V1260));
	V1260= CMPcdr((V1260));
	V1265= (V1266);}
	V1262= make_cons((V1265),(V1262));
	goto T2517;}
	goto T2519;
T2519:;
	V1262= nreverse((V1262));
	goto T2514;
	goto T2517;
T2517:;
	goto T2516;
	goto T2514;
T2514:;
	{object V1267;
	V1267= CMPcar((V1260));
	V1260= CMPcdr((V1260));
	V1263= (V1267);}
	base[1]= (V1261);
	base[2]= (V1262);
	base[3]= (V1263);
	base[4]= (V1260);
	vs_top=(vs_base=base+1)+4;
	return;}
	}
}
/*	local entry for function PARSE-SPECIALIZERS	*/

static object LI111(V1269)

object V1269;
{	 VMB99 VMS99 VMV99
	goto TTL;
TTL:;
	{object V1270;
	object V1271= (V1269);
	if(V1271==Cnil){
	{object V1272 = Cnil;
	VMR99(V1272)}}
	base[0]=V1270=MMcons(Cnil,Cnil);
	goto T2539;
T2539:;
	base[1]= (V1271->c.c_car);
	vs_top=(vs_base=base+1)+1;
	L112(base);
	vs_top=sup;
	(V1270->c.c_car)= vs_base[0];
	if((V1271=MMcdr(V1271))==Cnil){
	{object V1273 = base[0];
	VMR99(V1273)}}
	V1270=MMcdr(V1270)=MMcons(Cnil,Cnil);
	goto T2539;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UNPARSE-SPECIALIZERS	*/

static object LI113(V1275)

object V1275;
{	 VMB100 VMS100 VMV100
	goto TTL;
TTL:;
	if(!(type_of((V1275))==t_cons||((V1275))==Cnil)){
	goto T2543;}
	{object V1276;
	object V1277= (V1275);
	if(V1277==Cnil){
	{object V1278 = Cnil;
	VMR100(V1278)}}
	base[0]=V1276=MMcons(Cnil,Cnil);
	goto T2545;
T2545:;
	base[1]= (V1277->c.c_car);
	vs_top=(vs_base=base+1)+1;
	L114(base);
	vs_top=sup;
	(V1276->c.c_car)= vs_base[0];
	if((V1277=MMcdr(V1277))==Cnil){
	{object V1279 = base[0];
	VMR100(V1279)}}
	V1276=MMcdr(V1276)=MMcons(Cnil,Cnil);
	goto T2545;}
	goto T2543;
T2543:;
	base[0]= (V1275);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk433)(Lclptr433);
	vs_top=sup;
	V1275= vs_base[0];
	goto TTL;
	base[0]=base[0];
	return Cnil;
}
/*	function definition for PARSE-METHOD-OR-SPEC	*/

static void L115()
{register object *base=vs_base;
	register object *sup=base+VM101; VC101
	vs_check;
	{object V1280;
	object V1281;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1280=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2551;}
	V1281=(base[1]);
	vs_top=sup;
	goto T2552;
	goto T2551;
T2551:;
	V1281= Ct;
	goto T2552;
T2552:;
	{register object V1282;
	register object V1283;
	object V1284;
	object V1285;
	V1282= Cnil;
	V1283= Cnil;
	V1284= Cnil;
	V1285= Cnil;
	base[2]= (V1280);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk470)(Lclptr470);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2556;}
	V1283= (V1280);
	base[2]= (V1283);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk471)(Lclptr471);
	vs_top=sup;
	V1282= vs_base[0];
	if((V1282)==Cnil){
	V1285= Cnil;
	goto T2565;}
	base[2]= (V1282);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk440)(Lclptr440);
	vs_top=sup;
	V1285= vs_base[0];
	goto T2565;
T2565:;
	if(((V1285))==Cnil){
	goto T2569;}
	V1286 = (V1285);
	base[2]= (V1283);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk473)(Lclptr473);
	vs_top=sup;
	V1287= vs_base[0];
	base[2]= (V1283);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk433)(Lclptr433);
	vs_top=sup;
	V1288= vs_base[0];
	V1289= (*(LnkLI474))(V1288);
	V1290= (*(LnkLI400))(V1286,V1287,/* INLINE-ARGS */V1289);
	V1284= (*(LnkLI472))(/* INLINE-ARGS */V1290);
	goto T2567;
	goto T2569;
T2569:;
	base[3]= Cnil;
	base[4]= VV[337];
	base[5]= (V1283);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lmake_symbol();
	vs_top=sup;
	V1284= vs_base[0];
	goto T2567;
T2567:;
	goto T2554;
	goto T2556;
T2556:;
	{object V1291;
	object V1292;
	register object V1293;
	base[2]= (V1280);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk353)();
	if(vs_base>=vs_top){vs_top=sup;goto T2581;}
	V1291= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2582;}
	V1292= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2583;}
	V1293= vs_base[0];
	vs_top=sup;
	goto T2584;
	goto T2581;
T2581:;
	V1291= Cnil;
	goto T2582;
T2582:;
	V1292= Cnil;
	goto T2583;
T2583:;
	V1293= Cnil;
	goto T2584;
T2584:;
	if((V1281)!=Cnil){
	if(((V1281))!=Cnil){
	goto T2588;}
	goto T2589;}
	if(((*(LnkLI356))((V1291)))!=Cnil){
	goto T2588;}
	goto T2589;
T2589:;
	V1282= Cnil;
	goto T2587;
	goto T2588;
T2588:;
	V1282= (*(LnkLI347))((V1291));
	goto T2587;
T2587:;
	if(((V1282))!=Cnil){
	goto T2585;}
	goto T2554;
	goto T2585;
T2585:;
	{object V1294;
	base[2]= (V1282);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk475)(Lclptr475);
	vs_top=sup;
	V1294= vs_base[0];
	V1295= (*(LnkLI457))((V1293));
	V1297 = CMPmake_fixnum((long)length((V1293)));
	base[2]= number_minus((V1294),V1297);
	base[3]= VV[222];
	base[4]= (VV[338]->s.s_dbind);
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	V1296= vs_base[0];
	V1293= append(/* INLINE-ARGS */V1295,V1296);
	V1283= (VFUN_NARGS=4,(*(LnkLI476))((V1282),(V1292),(V1293),(V1281)));
	if(((V1283))!=Cnil){
	goto T2598;}
	goto T2554;
	goto T2598;
T2598:;
	V1298= (*(LnkLI400))((V1291),(V1292),(V1293));
	V1284= (*(LnkLI472))(/* INLINE-ARGS */V1298);}}
	goto T2554;
T2554:;
	base[2]= (V1282);
	base[3]= (V1283);
	base[4]= (V1284);
	vs_top=(vs_base=base+2)+3;
	return;}
	}
}
/*	local entry for function EXTRACT-PARAMETERS	*/

static object LI116(V1300)

object V1300;
{	 VMB102 VMS102 VMV102
	goto TTL;
TTL:;
	{object V1301;
	object V1302;
	object V1303;
	base[0]= (V1300);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2607;}
	V1301= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2608;}
	V1302= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2609;}
	V1303= vs_base[0];
	vs_top=sup;
	goto T2610;
	goto T2607;
T2607:;
	V1301= Cnil;
	goto T2608;
T2608:;
	V1302= Cnil;
	goto T2609;
T2609:;
	V1303= Cnil;
	goto T2610;
T2610:;
	{object V1304 = (V1301);
	VMR102(V1304)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXTRACT-LAMBDA-LIST	*/

static object LI117(V1306)

object V1306;
{	 VMB103 VMS103 VMV103
	goto TTL;
TTL:;
	{object V1307;
	object V1308;
	object V1309;
	base[0]= (V1306);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2613;}
	V1307= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2614;}
	V1308= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2615;}
	V1309= vs_base[0];
	vs_top=sup;
	goto T2616;
	goto T2613;
T2613:;
	V1307= Cnil;
	goto T2614;
T2614:;
	V1308= Cnil;
	goto T2615;
T2615:;
	V1309= Cnil;
	goto T2616;
T2616:;
	{object V1310 = (V1308);
	VMR103(V1310)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXTRACT-SPECIALIZER-NAMES	*/

static object LI118(V1312)

object V1312;
{	 VMB104 VMS104 VMV104
	goto TTL;
TTL:;
	{object V1313;
	object V1314;
	object V1315;
	base[0]= (V1312);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2619;}
	V1313= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2620;}
	V1314= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2621;}
	V1315= vs_base[0];
	vs_top=sup;
	goto T2622;
	goto T2619;
T2619:;
	V1313= Cnil;
	goto T2620;
T2620:;
	V1314= Cnil;
	goto T2621;
T2621:;
	V1315= Cnil;
	goto T2622;
T2622:;
	{object V1316 = (V1315);
	VMR104(V1316)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXTRACT-REQUIRED-PARAMETERS	*/

static object LI119(V1318)

object V1318;
{	 VMB105 VMS105 VMV105
	goto TTL;
TTL:;
	{object V1319;
	object V1320;
	object V1321;
	object V1322;
	base[0]= (V1318);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2625;}
	V1319= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2626;}
	V1320= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2627;}
	V1321= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2628;}
	V1322= vs_base[0];
	vs_top=sup;
	goto T2629;
	goto T2625;
T2625:;
	V1319= Cnil;
	goto T2626;
T2626:;
	V1320= Cnil;
	goto T2627;
T2627:;
	V1321= Cnil;
	goto T2628;
T2628:;
	V1322= Cnil;
	goto T2629;
T2629:;
	{object V1323 = (V1322);
	VMR105(V1323)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for PARSE-SPECIALIZED-LAMBDA-LIST	*/

static void L120()
{register object *base=vs_base;
	register object *sup=base+VM106; VC106
	vs_check;
	{register object V1324;
	object V1325;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1324=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2630;}
	V1325=(base[1]);
	vs_top=sup;
	goto T2631;
	goto T2630;
T2630:;
	V1325= Cnil;
	goto T2631;
T2631:;
	{register object V1326;
	V1326= CMPcar((V1324));
	if(((V1324))!=Cnil){
	goto T2635;}
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+2)+4;
	return;
	goto T2635;
T2635:;
	if(!(((V1326))==(VV[55]))){
	goto T2642;}
	base[2]= Cnil;
	base[3]= (V1324);
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	return;
	goto T2642;
T2642:;
	{register object x= (V1326),V1327= VV[182];
	while(V1327!=Cnil)
	if(x==(V1327->c.c_car)){
	goto T2649;
	}else V1327=V1327->c.c_cdr;
	goto T2648;}
	goto T2649;
T2649:;
	{register object x= (V1326),V1328= VV[339];
	while(V1328!=Cnil)
	if(x==(V1328->c.c_car)){
	goto T2650;
	}else V1328=V1328->c.c_cdr;}
	base[2]= VV[340];
	base[3]= (V1326);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk398)();
	vs_top=sup;
	goto T2650;
T2650:;
	{object V1329;
	object V1330;
	base[2]= CMPcdr((V1324));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2658;}
	V1329= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2659;}
	V1330= vs_base[0];
	vs_top=sup;
	goto T2660;
	goto T2658;
T2658:;
	V1329= Cnil;
	goto T2659;
T2659:;
	V1330= Cnil;
	goto T2660;
T2660:;
	base[2]= (V1329);
	base[3]= make_cons((V1326),(V1330));
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+2)+4;
	return;}
	goto T2648;
T2648:;
	if(((V1325))==Cnil){
	goto T2666;}
	{object V1331;
	object V1332;
	base[2]= CMPcdr((V1324));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2671;}
	V1331= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2672;}
	V1332= vs_base[0];
	vs_top=sup;
	goto T2673;
	goto T2671;
T2671:;
	V1331= Cnil;
	goto T2672;
T2672:;
	V1332= Cnil;
	goto T2673;
T2673:;
	if(!(type_of((V1326))==t_cons||((V1326))==Cnil)){
	goto T2677;}
	V1333= CMPcar((V1326));
	goto T2675;
	goto T2677;
T2677:;
	V1333= (V1326);
	goto T2675;
T2675:;
	V1334 = (V1331);
	base[2]= make_cons(V1333,V1334);
	base[3]= make_cons((V1326),(V1332));
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+2)+4;
	return;}
	goto T2666;
T2666:;
	{object V1335;
	object V1336;
	object V1337;
	object V1338;
	base[2]= CMPcdr((V1324));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2684;}
	V1335= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2685;}
	V1336= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2686;}
	V1337= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2687;}
	V1338= vs_base[0];
	vs_top=sup;
	goto T2688;
	goto T2684;
T2684:;
	V1335= Cnil;
	goto T2685;
T2685:;
	V1336= Cnil;
	goto T2686;
T2686:;
	V1337= Cnil;
	goto T2687;
T2687:;
	V1338= Cnil;
	goto T2688;
T2688:;
	if(!(type_of((V1326))==t_cons||((V1326))==Cnil)){
	goto T2692;}
	V1339= CMPcar((V1326));
	goto T2690;
	goto T2692;
T2692:;
	V1339= (V1326);
	goto T2690;
T2690:;
	V1340 = (V1335);
	base[2]= make_cons(V1339,V1340);
	if(!(type_of((V1326))==t_cons||((V1326))==Cnil)){
	goto T2697;}
	V1341= CMPcar((V1326));
	goto T2695;
	goto T2697;
T2697:;
	V1341= (V1326);
	goto T2695;
T2695:;
	V1342 = (V1336);
	base[3]= make_cons(V1341,V1342);
	if(!(type_of((V1326))==t_cons||((V1326))==Cnil)){
	goto T2702;}
	V1343= CMPcadr((V1326));
	goto T2700;
	goto T2702;
T2702:;
	V1343= Ct;
	goto T2700;
T2700:;
	V1344 = (V1337);
	base[4]= make_cons(V1343,V1344);
	if(!(type_of((V1326))==t_cons||((V1326))==Cnil)){
	goto T2707;}
	V1345= CMPcar((V1326));
	goto T2705;
	goto T2707;
T2707:;
	V1345= (V1326);
	goto T2705;
T2705:;
	V1346 = (V1338);
	base[5]= make_cons(V1345,V1346);
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
	{object V1347=base[0]->c.c_cdr;
	if(endp(V1347))invalid_macro_call();
	base[2]= (V1347->c.c_car);
	V1347=V1347->c.c_cdr;
	base[3]= V1347;}
	{object V1348;
	object V1349= base[2];
	if(V1349==Cnil){
	base[4]= Cnil;
	goto T2709;}
	base[5]=V1348=MMcons(Cnil,Cnil);
	goto T2710;
T2710:;
	V1351= CMPcar((V1349->c.c_car));
	V1352= (*(LnkLI477))(CMPcar((V1349->c.c_car)),base[1]);
	(V1348->c.c_car)= list(3,/* INLINE-ARGS */V1351,/* INLINE-ARGS */V1352,CMPcadr((V1349->c.c_car)));
	if((V1349=MMcdr(V1349))==Cnil){
	base[4]= base[5];
	goto T2709;}
	V1348=MMcdr(V1348)=MMcons(Cnil,Cnil);
	goto T2710;}
	goto T2709;
T2709:;
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

static object LI124(V1357,V1358,V1359,V1360)

object V1357;register object V1358;object V1359;object V1360;
{	 VMB108 VMS108 VMV108
	goto TTL;
TTL:;
	base[0]= (V1360);
	base[1]= (V1357);
	base[2]= Cnil;
	if(((V1359))==(VV[193])){
	goto T2716;}
	{object V1361 = (V1358);
	VMR108(V1361)}
	goto T2716;
T2716:;
	if(!(type_of((V1358))==t_symbol)){
	goto T2719;}
	{register object x= (V1358),V1362= base[1];
	while(V1362!=Cnil)
	if(eql(x,V1362->c.c_car->c.c_car) &&V1362->c.c_car != Cnil){
	base[2]= (V1362->c.c_car);
	goto T2725;
	}else V1362=V1362->c.c_cdr;
	base[2]= Cnil;}
	goto T2725;
T2725:;
	if((base[2])==Cnil){
	goto T2722;}
	V1363= CMPcadr(base[2]);
	V1364= (*(LnkLI477))((V1358),base[0]);
	if(!((/* INLINE-ARGS */V1363)==(/* INLINE-ARGS */V1364))){
	goto T2722;}
	{object V1365 = CMPcaddr(base[2]);
	VMR108(V1365)}
	goto T2722;
T2722:;
	{object V1366 = (V1358);
	VMR108(V1366)}
	goto T2719;
T2719:;
	if(type_of((V1358))==t_cons||((V1358))==Cnil){
	goto T2728;}
	{object V1367 = (V1358);
	VMR108(V1367)}
	goto T2728;
T2728:;
	{register object x= CMPcar((V1358)),V1368= VV[341];
	while(V1368!=Cnil)
	if(eql(x,V1368->c.c_car)){
	goto T2732;
	}else V1368=V1368->c.c_cdr;
	goto T2731;}
	goto T2732;
T2732:;
	base[3]= CMPcar((V1358));
	{object V1369;
	V1369= Cnil;
	base[4]= CMPcdr((V1358));
	vs_top=(vs_base=base+4)+1;
	L125(base);
	vs_top=sup;
	V1369= vs_base[0];
	{object V1370 = (*(LnkLI478))((V1358),base[3],(V1369));
	VMR108(V1370)}}
	goto T2731;
T2731:;
	if(!((CMPcar((V1358)))==(VV[342]))){
	goto T2738;}
	{object V1371;
	object V1372;
	V1371= CMPcadr((V1358));
	{object V1373;
	object V1374= (V1371);
	if(V1374==Cnil){
	V1372= Cnil;
	goto T2741;}
	base[5]=V1373=MMcons(Cnil,Cnil);
	goto T2742;
T2742:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	(V1373->c.c_car)= vs_base[0];
	if((V1374=MMcdr(V1374))==Cnil){
	V1372= base[5];
	goto T2741;}
	V1373=MMcdr(V1373)=MMcons(Cnil,Cnil);
	goto T2742;}
	goto T2741;
T2741:;
	V1376= CMPcaddr((V1358));
	{object V1378;
	object V1379= (V1371);
	object V1380= (V1372);
	if(V1379==Cnil||V1380==Cnil){
	V1377= Cnil;
	goto T2744;}
	base[5]=V1378=MMcons(Cnil,Cnil);
	goto T2745;
T2745:;
	(V1378->c.c_car)= list(3,VV[30],(V1379->c.c_car),(V1380->c.c_car));
	if((V1379=MMcdr(V1379))==Cnil||(V1380=MMcdr(V1380))==Cnil){
	V1377= base[5];
	goto T2744;}
	V1378=MMcdr(V1378)=MMcons(Cnil,Cnil);
	goto T2745;}
	goto T2744;
T2744:;
	{object V1383 = listA(4,VV[343],(V1372),/* INLINE-ARGS */V1376,reverse(V1377));
	VMR108(V1383)}}
	goto T2738;
T2738:;
	{object V1384 = (V1358);
	VMR108(V1384)}
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
	{object V1385=base[0]->c.c_cdr;
	if(endp(V1385))invalid_macro_call();
	base[2]= (V1385->c.c_car);
	V1385=V1385->c.c_cdr;
	if(endp(V1385))invalid_macro_call();
	base[3]= (V1385->c.c_car);
	V1385=V1385->c.c_cdr;
	base[4]= V1385;}
	{register object V1386;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1386= vs_base[0];
	V1387= list(2,(V1386),base[3]);
	V1388= make_cons(/* INLINE-ARGS */V1387,Cnil);
	{object V1390;
	if(!(type_of(base[3])==t_cons)){
	goto T2751;}
	if(!((CMPcar(base[3]))==(VV[138]))){
	goto T2751;}
	V1390= CMPcaddr(base[3]);
	goto T2749;
	goto T2751;
T2751:;
	V1390= base[3];
	goto T2749;
T2749:;
	if(type_of((V1390))==t_symbol){
	goto T2755;}
	V1389= Cnil;
	goto T2748;
	goto T2755;
T2755:;
	V1391= list(2,VV[45],list(3,VV[344],(V1386),(V1390)));
	V1389= make_cons(/* INLINE-ARGS */V1391,Cnil);}
	goto T2748;
T2748:;
	{object V1393;
	object V1394= base[2];
	if(V1394==Cnil){
	V1392= Cnil;
	goto T2757;}
	base[5]=V1393=MMcons(Cnil,Cnil);
	goto T2758;
T2758:;
	{register object V1395;
	V1395= (V1394->c.c_car);
	{object V1396;
	object V1397;
	if(!(type_of((V1395))==t_symbol)){
	goto T2762;}
	V1396= (V1395);
	goto T2760;
	goto T2762;
T2762:;
	V1396= CMPcar((V1395));
	goto T2760;
T2760:;
	if(!(type_of((V1395))==t_symbol)){
	goto T2766;}
	V1397= (V1395);
	goto T2764;
	goto T2766;
T2766:;
	V1397= CMPcadr((V1395));
	goto T2764;
T2764:;
	(V1393->c.c_car)= list(2,(V1396),list(3,VV[196],(V1386),list(2,VV[1],(V1397))));}}
	if((V1394=MMcdr(V1394))==Cnil){
	V1392= base[5];
	goto T2757;}
	V1393=MMcdr(V1393)=MMcons(Cnil,Cnil);
	goto T2758;}
	goto T2757;
T2757:;
	V1398 = base[4];
	V1399= list(2,(V1386),listA(3,VV[345],V1392,V1398));
	base[5]= listA(3,VV[95],/* INLINE-ARGS */V1388,append(V1389,/* INLINE-ARGS */V1399));
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
	{object V1400=base[0]->c.c_cdr;
	if(endp(V1400))invalid_macro_call();
	base[2]= (V1400->c.c_car);
	V1400=V1400->c.c_cdr;
	if(endp(V1400))invalid_macro_call();
	base[3]= (V1400->c.c_car);
	V1400=V1400->c.c_cdr;
	base[4]= V1400;}
	{register object V1401;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1401= vs_base[0];
	V1402= list(2,(V1401),base[3]);
	V1403= make_cons(/* INLINE-ARGS */V1402,Cnil);
	{object V1405;
	if(!(type_of(base[3])==t_cons)){
	goto T2772;}
	if(!((CMPcar(base[3]))==(VV[138]))){
	goto T2772;}
	V1405= CMPcaddr(base[3]);
	goto T2770;
	goto T2772;
T2772:;
	V1405= base[3];
	goto T2770;
T2770:;
	if(type_of((V1405))==t_symbol){
	goto T2776;}
	V1404= Cnil;
	goto T2769;
	goto T2776;
T2776:;
	V1406= list(2,VV[45],list(3,VV[344],(V1401),(V1405)));
	V1404= make_cons(/* INLINE-ARGS */V1406,Cnil);}
	goto T2769;
T2769:;
	{object V1408;
	object V1409= base[2];
	if(V1409==Cnil){
	V1407= Cnil;
	goto T2778;}
	base[5]=V1408=MMcons(Cnil,Cnil);
	goto T2779;
T2779:;
	{object V1411;
	object V1412;
	V1411= CMPcar((V1409->c.c_car));
	V1412= CMPcadr((V1409->c.c_car));
	(V1408->c.c_car)= list(2,(V1411),list(2,(V1412),(V1401)));}
	if((V1409=MMcdr(V1409))==Cnil){
	V1407= base[5];
	goto T2778;}
	V1408=MMcdr(V1408)=MMcons(Cnil,Cnil);
	goto T2779;}
	goto T2778;
T2778:;
	V1413 = base[4];
	V1414= list(2,(V1401),listA(3,VV[345],V1407,V1413));
	base[5]= listA(3,VV[95],/* INLINE-ARGS */V1403,append(V1404,/* INLINE-ARGS */V1414));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	local function SCAN-SETF	*/

static void L125(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM111; VC111
	vs_check;
	{register object V1415;
	check_arg(1);
	V1415=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1415))!=Cnil){
	goto T2784;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2784;
T2784:;
	V1416 = (V1415);
	{register object x= CMPcar((V1415)),V1418= base0[1];
	while(V1418!=Cnil)
	if(eql(x,V1418->c.c_car->c.c_car) &&V1418->c.c_car != Cnil){
	base0[2]= (V1418->c.c_car);
	goto T2791;
	}else V1418=V1418->c.c_cdr;
	base0[2]= Cnil;}
	goto T2791;
T2791:;
	if((base0[2])==Cnil){
	goto T2788;}
	V1419= CMPcadr(base0[2]);
	V1420= (*(LnkLI477))(CMPcar((V1415)),base0[0]);
	if(!((/* INLINE-ARGS */V1419)==(/* INLINE-ARGS */V1420))){
	goto T2788;}
	base0[3]= VV[30];
	V1417= CMPcaddr(base0[2]);
	goto T2786;
	goto T2788;
T2788:;
	V1417= CMPcar((V1415));
	goto T2786;
T2786:;
	V1421= CMPcadr((V1415));
	base[1]= CMPcddr((V1415));
	vs_top=(vs_base=base+1)+1;
	L125(base0);
	vs_top=sup;
	V1422= vs_base[0];
	base[1]= (VFUN_NARGS=4,(*(LnkLI479))(V1416,V1417,/* INLINE-ARGS */V1421,V1422));
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
	{object V1423;
	object V1424;
	object V1425;
	check_arg(3);
	V1423=(base[0]);
	V1424=(base[1]);
	V1425=(base[2]);
	vs_top=sup;
	base[3]= (*(LnkLI480))((base0[0]->c.c_car),(V1423),(V1424),(V1425));
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
	{object V1426;
	check_arg(1);
	V1426=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V1426);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk481)(Lclptr481);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2798;}
	{register object V1427;
	base[1]= (V1426);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk482)(Lclptr482);
	vs_top=sup;
	V1427= vs_base[0];
	if(!(type_of((V1427))==t_cons)){
	goto T2804;}
	if(!((CMPcar((V1427)))==(VV[50]))){
	goto T2804;}
	{object V1428;
	object V1429;
	V1428= CMPcadr((V1427));
	base[3]= (V1428);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	V1429= vs_base[0];
	V1430 = (V1428);
	V1431= (VFUN_NARGS=2,(*(LnkLI291))((V1429),Cnil));
	if(!((V1430)==(/* INLINE-ARGS */V1431))){
	goto T2812;}
	base[3]= (V1429);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2812;
T2812:;
	base[3]= (V1427);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2804;
T2804:;
	base[1]= (V1427);
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2798;
T2798:;
	base[1]= VV[336];
	base[2]= (V1426);
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
	{register object V1432;
	check_arg(1);
	V1432=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1433;
	base[1]= (V1432);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk483)();
	vs_top=sup;
	V1433= vs_base[0];
	base[1]= (V1433);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk481)(Lclptr481);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2819;}
	base[1]= (V1433);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2819;
T2819:;
	if(!(type_of((V1432))==t_symbol)){
	goto T2823;}
	base[1]= VV[334];
	base[2]= (V1432);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	goto T2823;
T2823:;
	base[1]= VV[335];
	base[2]= (V1432);
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
	{object V1434;
	register object V1435;
	check_arg(2);
	V1434=(base[0]);
	V1435=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	{object V1436;
	V1436= (V1434);
	 vs_top=base+3;
	 while(V1436!=Cnil)
	 {vs_push((V1436)->c.c_car);V1436=(V1436)->c.c_cdr;}
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
	{object V1437;
	check_arg(1);
	V1437=(base[0]);
	vs_top=sup;
	base[1]= (((type_of((V1437))==t_symbol?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V1438;
	check_arg(1);
	V1438=(base[0]);
	vs_top=sup;
	base[1]= (((((V1438))==(Ct)?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V1439;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1439=(base[0]);
	vs_top=sup;
	base[1]= VV[274];
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
	{object V1440;
	register object V1441;
	check_arg(2);
	V1440=(base[0]);
	V1441=(base[1]);
	vs_top=sup;
	base[2]= (V1441);
	base[3]= VV[270];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	base[2]= (V1441);
	base[3]= VV[271];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	base[2]= (V1441);
	base[3]= VV[272];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI484))((V1440),(V1441)));
	base[2]= (V1441);
	base[3]= VV[273];
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
	{object V1442;
	check_arg(1);
	V1442=(base[0]);
	vs_top=sup;
	{register object x= (V1442),V1443= (base0[0]->c.c_car);
	while(V1443!=Cnil)
	if(x==(V1443->c.c_car)){
	base[1]= V1443;
	vs_top=(vs_base=base+1)+1;
	return;
	}else V1443=V1443->c.c_cdr;
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
	{object V1444;
	object V1445;
	check_arg(2);
	V1444=(base[0]);
	V1445=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(number_compare((V1444),(V1445))>0)){
	goto T2846;}
	base[2]= VV[251];
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2846;
T2846:;
	base[2]= VV[252];
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
	{object V1446;
	object V1447;
	if(vs_top-vs_base<1) too_few_arguments();
	V1446=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1447=(base[1]);
	vs_top=sup;
	base[2]= VV[250];
	base[3]= base0[2];
	base[4]= base0[0];
	base[6]= Cnil;
	base[7]= (V1446);
	{object V1448;
	V1448= (V1447);
	 vs_top=base+8;
	 while(V1448!=Cnil)
	 {vs_push((V1448)->c.c_car);V1448=(V1448)->c.c_cdr;}
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
	{object V1449;
	check_arg(1);
	V1449=(base[0]);
	vs_top=sup;
	base[1]= (((((V1449))==(Ct)?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V1450;
	check_arg(1);
	V1450=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V1450))==t_cons||((V1450))==Cnil)){
	goto T2856;}
	{object V1451= CMPcar((V1450));
	if(!(type_of(V1451)==t_cons||(V1451)==Cnil)){
	goto T2859;}}
	base[1]= CMPcaar((V1450));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2859;
T2859:;
	base[1]= CMPcar((V1450));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk485)();
	return;
	goto T2856;
T2856:;
	base[1]= (V1450);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk485)();
	return;
	}
}
/*	local function SET-MF-PROPERTY	*/

static void L62(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM125; VC125
	vs_check;
	{object V1452;
	object V1453;
	check_arg(2);
	V1452=(base[0]);
	V1453=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((base0[0])==Cnil){
	goto T2863;}
	V1457= ({object _tmp=get(VV[210],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[210])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[210])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V1458 = V1453;
	V1459 = base0[0];
	V1460 = V1452;
	(void)((
	V1461 = V1457,
	(type_of(V1461) == t_sfun ?(*((V1461)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V1461)==t_vfun) ?
	(*((V1461)->sfn.sfn_self)):
	(fcall.fun=(V1461),fcalln))(V1458,V1459,V1460)));
	goto T2863;
T2863:;
	if((base0[4])==Cnil){
	goto T2868;}
	base[2]= ({object _tmp=get(VV[210],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[210])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[210])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[3]= V1453;
	base[4]= base0[4];
	base[5]= V1452;
	vs_top=(vs_base=base+3)+3;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2868;
T2868:;
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
	{object V1465;
	check_arg(1);
	V1465=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1466;
	register object V1467;
	V1466= CMPcdar(base0[0]);
	V1467= CMPcar((V1466));
	goto T2877;
T2877:;
	if(!(((V1466))==Cnil)){
	goto T2878;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2878;
T2878:;
	if(!((CMPcar((V1467)))==(VV[181]))){
	goto T2882;}
	{register object x= (V1465),V1468= CMPcdr((V1467));
	while(V1468!=Cnil)
	if(x==(V1468->c.c_car)){
	goto T2886;
	}else V1468=V1468->c.c_cdr;
	goto T2882;}
	goto T2886;
T2886:;
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2882;
T2882:;
	V1466= CMPcdr((V1466));
	V1467= CMPcar((V1466));
	goto T2877;}
	}
}
/*	local function WALK-FUNCTION	*/

static void LC44(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM127; VC127
	vs_check;
	{register object V1469;
	object V1470;
	object V1471;
	check_arg(3);
	V1469=(base[0]);
	V1470=(base[1]);
	V1471=(base[2]);
	vs_top=sup;
	if(((V1470))==(VV[193])){
	goto T2893;}
	base[3]= (V1469);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2893;
T2893:;
	if(type_of((V1469))==t_cons||((V1469))==Cnil){
	goto T2896;}
	base[3]= (V1469);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2896;
T2896:;
	if(!((CMPcar((V1469)))==(VV[194]))){
	goto T2899;}
	(base0[2]->c.c_car)= Ct;
	base[3]= (V1469);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2899;
T2899:;
	if(!((CMPcar((V1469)))==(VV[195]))){
	goto T2904;}
	(base0[0]->c.c_car)= Ct;
	base[3]= (V1469);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2904;
T2904:;
	{object V1472;
	if((CMPcar((V1469)))==(VV[14])){
	goto T2909;}
	V1472= Cnil;
	goto T2908;
	goto T2909;
T2909:;
	if(!((CMPcadr((V1469)))==(VV[194]))){
	goto T2912;}
	(base0[2]->c.c_car)= Ct;
	(base0[1]->c.c_car)= Ct;
	V1472= (V1469);
	goto T2908;
	goto T2912;
T2912:;
	if(!((CMPcadr((V1469)))==(VV[195]))){
	goto T2919;}
	(base0[0]->c.c_car)= Ct;
	(base0[1]->c.c_car)= Ct;
	V1472= (V1469);
	goto T2908;
	goto T2919;
T2919:;
	V1472= Cnil;
	goto T2908;
T2908:;
	if(((V1472))==Cnil){
	goto T2926;}
	base[3]= (V1472);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2926;
T2926:;
	if((CMPcar((V1469)))==(VV[196])){
	goto T2930;}
	if((CMPcar((V1469)))==(VV[197])){
	goto T2930;}
	if(!((CMPcar((V1469)))==(VV[198]))){
	goto T2929;}
	goto T2930;
T2930:;
	base[3]= CMPcaddr((V1469));
	vs_top=(vs_base=base+3)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2929;}
	{object V1473;
	V1473= (*(LnkLI486))((V1469),(base0[5]->c.c_car),(V1471));
	{object V1474= CMPcar((V1469));
	if((V1474!= VV[196]))goto T2939;
	base[3]= (*(LnkLI487))((base0[4]->c.c_car),(V1473),(V1469));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2939;
T2939:;
	if((V1474!= VV[197]))goto T2940;
	base[3]= (*(LnkLI488))((base0[4]->c.c_car),(V1473),(V1469));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2940;
T2940:;
	if((V1474!= VV[198]))goto T2941;
	base[3]= (*(LnkLI489))((base0[4]->c.c_car),(V1473),(V1469));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2941;
T2941:;
	FEerror("The ECASE key value ~s is illegal.",1,V1474);
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}}
	goto T2929;
T2929:;
	if(!((CMPcar((V1469)))==(VV[137]))){
	goto T2943;}
	if(!(type_of(CMPcadr((V1469)))==t_cons)){
	goto T2943;}
	if(!((CMPcar(CMPcadr((V1469))))==(VV[14]))){
	goto T2943;}
	base[3]= CMPcadr(CMPcadr((V1469)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk490)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2943;}
	base[3]= (*(LnkLI491))((V1469),(base0[5]->c.c_car),(V1471),(base0[4]->c.c_car),(base0[3]->c.c_car));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2943;
T2943:;
	if(type_of(CMPcar((V1469)))==t_symbol){
	goto T2954;}
	if(!(type_of(CMPcar((V1469)))==t_cons)){
	goto T2953;}
	if(!((CMPcaar((V1469)))==(VV[30]))){
	goto T2953;}
	goto T2954;
T2954:;
	base[3]= CMPcar((V1469));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk490)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2953;}
	base[3]= (*(LnkLI491))((V1469),(base0[5]->c.c_car),(V1471),(base0[4]->c.c_car),(base0[3]->c.c_car));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2953;
T2953:;
	if(!((CMPcar((V1469)))==(VV[199]))){
	goto T2963;}
	if(((VV[22]->s.s_dbind))==Cnil){
	goto T2963;}
	{object V1475= CMPcadddr((V1469));
	if((V1475!= VV[255]))goto T2968;
	{object V1476;
	V1476= CMPcaddr((V1469));
	(VV[23]->s.s_dbind)= make_cons((V1476),(VV[23]->s.s_dbind));
	goto T2967;}
	goto T2968;
T2968:;
	if((V1475!= VV[257]))goto T2971;
	{object V1477;
	V1477= CMPcaddr((V1469));
	(VV[24]->s.s_dbind)= make_cons((V1477),(VV[24]->s.s_dbind));
	goto T2967;}
	goto T2971;
T2971:;
	if((V1475!= VV[259]))goto T2974;
	{object V1478;
	V1478= CMPcaddr((V1469));
	(VV[25]->s.s_dbind)= make_cons((V1478),(VV[25]->s.s_dbind));
	goto T2967;}
	goto T2974;
T2974:;}
	goto T2967;
T2967:;
	base[3]= make_cons(CMPcadr((V1469)),CMPcddddr((V1469)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2963;
T2963:;
	base[3]= (V1469);
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
	{register object V1479;
	check_arg(1);
	V1479=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object x= (V1479),V1480= VV[182];
	while(V1480!=Cnil)
	if(x==(V1480->c.c_car)){
	goto T2979;
	}else V1480=V1480->c.c_cdr;
	goto T2978;}
	goto T2979;
T2979:;
	{object V1481= (V1479);
	if((V1481!= VV[406]))goto T2981;
	base0[7]= VV[183];
	goto T2980;
	goto T2981;
T2981:;
	if((V1481!= VV[61]))goto T2983;
	base0[7]= VV[184];
	goto T2980;
	goto T2983;
T2983:;
	if((V1481!= VV[62]))goto T2985;
	goto T2980;
	goto T2985;
T2985:;
	if((V1481!= VV[169]))goto T2986;
	base0[7]= VV[185];
	goto T2980;
	goto T2986;
T2986:;
	if((V1481!= VV[55]))goto T2988;
	base0[7]= VV[186];
	goto T2980;
	goto T2988;
T2988:;
	base[1]= VV[187];
	base[2]= (V1479);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;}
	goto T2980;
T2980:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2978;
T2978:;
	{object V1482= base0[7];
	if((V1482!= VV[180]))goto T2992;
	V1483= list(2,(V1479),list(2,VV[188],base0[5]));
	base[1]= make_cons(/* INLINE-ARGS */V1483,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2992;
T2992:;
	if((V1482!= VV[183]))goto T2993;
	if(type_of((V1479))==t_cons){
	goto T2995;}
	V1484= list(2,(V1479),list(3,VV[115],base0[5],list(2,VV[188],base0[5])));
	base[1]= make_cons(/* INLINE-ARGS */V1484,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2995;
T2995:;
	if((CMPcddr((V1479)))!=Cnil){
	goto T2998;}
	V1485= CMPcar((V1479));
	V1486= list(2,/* INLINE-ARGS */V1485,list(4,VV[129],base0[5],list(2,VV[188],base0[5]),CMPcadr((V1479))));
	base[1]= make_cons(/* INLINE-ARGS */V1486,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2998;
T2998:;
	V1487= list(2,CMPcaddr((V1479)),base0[5]);
	V1488= CMPcar((V1479));
	base[1]= list(2,/* INLINE-ARGS */V1487,list(2,/* INLINE-ARGS */V1488,list(4,VV[129],base0[5],list(2,VV[188],base0[5]),CMPcadr((V1479)))));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2993;
T2993:;
	if((V1482!= VV[185]))goto T3000;
	V1489= list(2,(V1479),base0[5]);
	base[1]= make_cons(/* INLINE-ARGS */V1489,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3000;
T3000:;
	if((V1482!= VV[184]))goto T3001;
	if(type_of((V1479))==t_cons){
	goto T3003;}
	base[1]= (V1479);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk485)();
	vs_top=sup;
	V1490= vs_base[0];
	V1491 = base0[5];
	V1492= list(2,(V1479),list(3,VV[189],V1490,V1491));
	base[1]= make_cons(/* INLINE-ARGS */V1492,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3003;
T3003:;
	if((CMPcddr((V1479)))!=Cnil){
	goto T3008;}
	{object V1493;
	object V1494;
	if(!(type_of(CMPcar((V1479)))==t_cons)){
	goto T3012;}
	base[1]= CMPcaar((V1479));
	base[2]= CMPcadar((V1479));
	vs_top=(vs_base=base+1)+2;
	goto T3010;
	goto T3012;
T3012:;
	base[2]= CMPcar((V1479));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk485)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= CMPcar((V1479));
	vs_top=(vs_base=base+1)+2;
	goto T3010;
T3010:;
	if(vs_base>=vs_top){vs_top=sup;goto T3019;}
	V1493= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T3020;}
	V1494= vs_base[0];
	vs_top=sup;
	goto T3021;
	goto T3019;
T3019:;
	V1493= Cnil;
	goto T3020;
T3020:;
	V1494= Cnil;
	goto T3021;
T3021:;
	V1495= list(2,base0[6],list(3,VV[190],(V1493),base0[5]));
	V1496= list(2,VV[191],base0[6]);
	base[1]= list(2,/* INLINE-ARGS */V1495,list(2,(V1494),list(4,VV[129],/* INLINE-ARGS */V1496,list(2,VV[192],base0[6]),CMPcadr((V1479)))));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T3008;
T3008:;
	{object V1497;
	object V1498;
	if(!(type_of(CMPcar((V1479)))==t_cons)){
	goto T3024;}
	base[1]= CMPcaar((V1479));
	base[2]= CMPcadar((V1479));
	vs_top=(vs_base=base+1)+2;
	goto T3022;
	goto T3024;
T3024:;
	base[2]= CMPcar((V1479));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk485)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= CMPcar((V1479));
	vs_top=(vs_base=base+1)+2;
	goto T3022;
T3022:;
	if(vs_base>=vs_top){vs_top=sup;goto T3031;}
	V1497= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T3032;}
	V1498= vs_base[0];
	vs_top=sup;
	goto T3033;
	goto T3031;
T3031:;
	V1497= Cnil;
	goto T3032;
T3032:;
	V1498= Cnil;
	goto T3033;
T3033:;
	V1499= list(2,base0[6],list(3,VV[190],(V1497),base0[5]));
	V1500= list(2,CMPcaddr((V1479)),base0[6]);
	V1501= list(2,VV[191],base0[6]);
	base[1]= list(3,/* INLINE-ARGS */V1499,/* INLINE-ARGS */V1500,list(2,(V1498),list(4,VV[129],/* INLINE-ARGS */V1501,list(2,VV[192],base0[6]),CMPcadr((V1479)))));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T3001;
T3001:;
	if((V1482!= VV[186]))goto T3034;
	base[1]= make_cons((V1479),Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3034;
T3034:;
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
	{object V1502;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1502=(base[0]);
	vs_top=sup;
	base[1]= STREF(object,(base0[0]->c.c_car),0);
	base[2]= (V1502);
	{object V1503;
	V1503= STREF(object,(base0[0]->c.c_car),4);
	 vs_top=base+3;
	 while(V1503!=Cnil)
	 {vs_push((V1503)->c.c_car);V1503=(V1503)->c.c_cdr;}
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
	{object V1504;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1504=(base[0]);
	vs_top=sup;
	base[1]= STREF(object,(base0[2]->c.c_car),0);
	base[2]= STREF(object,(base0[2]->c.c_car),4);
	base[3]= STREF(object,(base0[2]->c.c_car),8);
	{object V1505;
	if(((base0[0]->c.c_car))==Cnil){
	goto T3045;}
	{object V1506;
	object V1507;
	V1506= nthcdr(fix((base0[1]->c.c_car)),(V1504));
	base[6]= (V1504);
	base[7]= (V1506);
	vs_top=(vs_base=base+6)+2;
	Lldiff();
	vs_top=sup;
	V1507= vs_base[0];
	V1505= nconc((V1507),(V1506));
	goto T3043;}
	goto T3045;
T3045:;
	V1505= (V1504);
	goto T3043;
T3043:;
	 vs_top=base+4;
	 while(V1505!=Cnil)
	 {vs_push((V1505)->c.c_car);V1505=(V1505)->c.c_cdr;}
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
	{register object V1508;
	check_arg(1);
	V1508=(base[0]);
	vs_top=sup;
	if(!(type_of((V1508))==t_cons)){
	goto T3052;}
	if((CMPcar((V1508)))==(VV[31])){
	goto T3054;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3054;
T3054:;
	base[1]= CMPcadr((V1508));
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T3056;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3056;
T3056:;
	{register object V1509;
	base[1]= CMPcadr((V1508));
	vs_top=(vs_base=base+1)+1;
	Leval();
	vs_top=sup;
	V1509= vs_base[0];{object V1510;
	V1510= (*(LnkLI365))((V1509));
	if(V1510==Cnil)goto T3061;
	base[1]= V1510;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3061;
T3061:;}
	if(!(type_of((V1509))==t_fixnum||type_of((V1509))==t_bignum)){
	goto T3063;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3063;
T3063:;
	if(type_of((V1509))==t_character){
	goto T3065;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3065;
T3065:;
	base[1]= (V1509);
	vs_top=(vs_base=base+1)+1;
	Lstandard_char_p();
	return;}
	goto T3052;
T3052:;
	base[1]= (*(LnkLI365))((V1508));
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
	{object V1511;
	check_arg(1);
	V1511=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[8];
	base[2]= (V1511);
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
	{object V1512;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1512=(base[0]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	base[1]= vs_base[0];
	{object V1513;
	V1513= (V1512);
	 vs_top=base+2;
	 while(V1513!=Cnil)
	 {vs_push((V1513)->c.c_car);V1513=(V1513)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
static object  LnkTLI491(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[491],(void **)(void *)&LnkLI491,5,first,ap);va_end(ap);return V1;} /* OPTIMIZE-GENERIC-FUNCTION-CALL */
static void LnkT490(){ call_or_link(VV[490],(void **)(void *)&Lnk490);} /* GENERIC-FUNCTION-NAME-P */
static object  LnkTLI489(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[489],(void **)(void *)&LnkLI489,3,first,ap);va_end(ap);return V1;} /* OPTIMIZE-SLOT-BOUNDP */
static object  LnkTLI488(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[488],(void **)(void *)&LnkLI488,3,first,ap);va_end(ap);return V1;} /* OPTIMIZE-SET-SLOT-VALUE */
static object  LnkTLI487(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[487],(void **)(void *)&LnkLI487,3,first,ap);va_end(ap);return V1;} /* OPTIMIZE-SLOT-VALUE */
static object  LnkTLI486(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[486],(void **)(void *)&LnkLI486,3,first,ap);va_end(ap);return V1;} /* CAN-OPTIMIZE-ACCESS */
static void LnkT485(){ call_or_link(VV[485],(void **)(void *)&Lnk485);} /* MAKE-KEYWORD */
static object  LnkTLI484(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[484],(void **)(void *)&LnkLI484,2,first,ap);va_end(ap);return V1;} /* PRINTING-RANDOM-THING-INTERNAL */
static void LnkT483(){ call_or_link(VV[483],(void **)(void *)&Lnk483);} /* SPECIALIZER-FROM-TYPE */
static void LnkT482(ptr) object *ptr;{ call_or_link_closure(VV[482],(void **)(void *)&Lnk482,(void **)(void *)&Lclptr482);} /* SPECIALIZER-TYPE */
static void LnkT481(ptr) object *ptr;{ call_or_link_closure(VV[481],(void **)(void *)&Lnk481,(void **)(void *)&Lclptr481);} /* SPECIALIZERP */
static object  LnkTLI480(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[480],(void **)(void *)&LnkLI480,4,first,ap);va_end(ap);return V1;} /* EXPAND-SYMBOL-MACROLET-INTERNAL */
static object  LnkTLI479(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[479],(void **)(void *)&LnkLI479,first,ap);va_end(ap);return V1;} /* RELIST* */
static object  LnkTLI478(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[478],(void **)(void *)&LnkLI478,3,first,ap);va_end(ap);return V1;} /* RECONS */
static object  LnkTLI477(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[477],(void **)(void *)&LnkLI477,2,first,ap);va_end(ap);return V1;} /* VARIABLE-LEXICAL-P */
static object  LnkTLI476(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[476],(void **)(void *)&LnkLI476,first,ap);va_end(ap);return V1;} /* GET-METHOD */
static void LnkT475(ptr) object *ptr;{ call_or_link_closure(VV[475],(void **)(void *)&Lnk475,(void **)(void *)&Lclptr475);} /* COMPUTE-DISCRIMINATING-FUNCTION-ARGLIST-INFO */
static object  LnkTLI474(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[474],(void **)(void *)&LnkLI474,1,first,ap);va_end(ap);return V1;} /* UNPARSE-SPECIALIZERS */
static void LnkT473(ptr) object *ptr;{ call_or_link_closure(VV[473],(void **)(void *)&Lnk473,(void **)(void *)&Lclptr473);} /* METHOD-QUALIFIERS */
static object  LnkTLI472(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[472],(void **)(void *)&LnkLI472,1,first,ap);va_end(ap);return V1;} /* INTERN-FUNCTION-NAME */
static void LnkT471(ptr) object *ptr;{ call_or_link_closure(VV[471],(void **)(void *)&Lnk471,(void **)(void *)&Lclptr471);} /* METHOD-GENERIC-FUNCTION */
static void LnkT470(ptr) object *ptr;{ call_or_link_closure(VV[470],(void **)(void *)&Lnk470,(void **)(void *)&Lclptr470);} /* METHOD-P */
static object  LnkTLI469(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[469],(void **)(void *)&LnkLI469,2,first,ap);va_end(ap);return V1;} /* SET-METHODS */
static void LnkT468(){ call_or_link(VV[468],(void **)(void *)&Lnk468);} /* REAL-MAKE-A-METHOD */
static void LnkT467(){ call_or_link(VV[467],(void **)(void *)&Lnk467);} /* DELETE */
static object  LnkTLI465(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[465],(void **)(void *)&LnkLI465,first,ap);va_end(ap);return V1;} /* REAL-GET-METHOD */
static object  LnkTLI464(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[464],(void **)(void *)&LnkLI464,first,ap);va_end(ap);return V1;} /* UPDATE-DFUN */
static object  LnkTLI460(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[460],(void **)(void *)&LnkLI460,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-QUALIFIERS */
static void LnkT291(){ call_or_link(VV[291],(void **)(void *)&Lnk291);} /* FIND-CLASS */
static void LnkT459(){ call_or_link(VV[459],(void **)(void *)&Lnk459);} /* SEVENTH */
static void LnkT458(){ call_or_link(VV[458],(void **)(void *)&Lnk458);} /* FIFTH */
static object  LnkTLI457(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[457],(void **)(void *)&LnkLI457,1,first,ap);va_end(ap);return V1;} /* PARSE-SPECIALIZERS */
static object  LnkTLI455(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[455],(void **)(void *)&LnkLI455,first,ap);va_end(ap);return V1;} /* INITIALIZE-METHOD-FUNCTION */
static void LnkT453(ptr) object *ptr;{ call_or_link_closure(VV[453],(void **)(void *)&Lnk453,(void **)(void *)&Lclptr453);} /* MAKE-INSTANCE */
static void LnkT452(ptr) object *ptr;{ call_or_link_closure(VV[452],(void **)(void *)&Lnk452,(void **)(void *)&Lclptr452);} /* REINITIALIZE-INSTANCE */
static void LnkT451(ptr) object *ptr;{ call_or_link_closure(VV[451],(void **)(void *)&Lnk451,(void **)(void *)&Lclptr451);} /* CHANGE-CLASS */
static void LnkT301(ptr) object *ptr;{ call_or_link_closure(VV[301],(void **)(void *)&Lnk301,(void **)(void *)&Lclptr301);} /* FIND-METHOD-COMBINATION */
static void LnkT450(ptr) object *ptr;{ call_or_link_closure(VV[450],(void **)(void *)&Lnk450,(void **)(void *)&Lclptr450);} /* GF-DFUN-STATE */
static object  LnkTLI449(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[449],(void **)(void *)&LnkLI449,first,ap);va_end(ap);return V1;} /* SET-ARG-INFO */
static object  LnkTLI10(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[10],(void **)(void *)&LnkLI10,2,first,ap);va_end(ap);return V1;} /* PROCLAIM-DEFGENERIC */
static object  LnkTLI448(){return call_proc0(VV[448],(void **)(void *)&LnkLI448);} /* MAKE-ARG-INFO */
static object  LnkTLI447(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[447],(void **)(void *)&LnkLI447,4,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-SET-SLOT */
static object  LnkTLI446(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[446],(void **)(void *)&LnkLI446,2,first,ap);va_end(ap);return V1;} /* SET-FUNCALLABLE-INSTANCE-FUNCTION */
static object  LnkTLI445(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[445],(void **)(void *)&LnkLI445,first,ap);va_end(ap);return V1;} /* ALLOCATE-FUNCALLABLE-INSTANCE */
static object  LnkTLI444(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[444],(void **)(void *)&LnkLI444,first,ap);va_end(ap);return V1;} /* MAKE-EARLY-GF */
static void LnkT292(ptr) object *ptr;{ call_or_link_closure(VV[292],(void **)(void *)&Lnk292,(void **)(void *)&Lclptr292);} /* CLASSP */
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
static void LnkT47(ptr) object *ptr;{ call_or_link_closure(VV[47],(void **)(void *)&Lnk47,(void **)(void *)&Lclptr47);} /* METHOD-LAMBDA-LIST */
static object  LnkTLI431(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[431],(void **)(void *)&LnkLI431,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-LAMBDA-LIST */
static object  LnkTLI430(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[430],(void **)(void *)&LnkLI430,6,first,ap);va_end(ap);return V1;} /* SET-ARG-INFO1 */
static void LnkT429(){ call_or_link(VV[429],(void **)(void *)&Lnk429);} /* CHECK-METHOD-ARG-INFO */
static object  LnkTLI428(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[428],(void **)(void *)&LnkLI428,3,first,ap);va_end(ap);return V1;} /* COMPUTE-PRECEDENCE */
static object  LnkTLI427(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[427],(void **)(void *)&LnkLI427,1,first,ap);va_end(ap);return V1;} /* GF-LAMBDA-LIST */
static void LnkT426(ptr) object *ptr;{ call_or_link_closure(VV[426],(void **)(void *)&Lnk426,(void **)(void *)&Lclptr426);} /* GENERIC-FUNCTION-METHODS */
static void LnkT425(){ call_or_link(VV[425],(void **)(void *)&Lnk425);} /* COUNT-IF */
static object  LnkTLI411(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[411],(void **)(void *)&LnkLI411,1,first,ap);va_end(ap);return V1;} /* GENERIC-CLOBBERS-FUNCTION */
static void LnkT410(){ call_or_link(VV[410],(void **)(void *)&Lnk410);} /* CONCATENATE */
static object  LnkTLI409(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[409],(void **)(void *)&LnkLI409,1,first,ap);va_end(ap);return V1;} /* GET-SETF-FUNCTION-NAME */
static object  LnkTLI408(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[408],(void **)(void *)&LnkLI408,1,first,ap);va_end(ap);return V1;} /* KEYWORD-SPEC-NAME */
static void LnkT407(){ call_or_link(VV[407],(void **)(void *)&Lnk407);} /* ANALYZE-LAMBDA-LIST */
static object  LnkTLI405(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[405],(void **)(void *)&LnkLI405,1,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-FROM-FAST-FUNCTION */
static object  LnkTLI404(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[404],(void **)(void *)&LnkLI404,first,ap);va_end(ap);return V1;} /* INTERN-PV-TABLE */
static object  LnkTLI402(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[402],(void **)(void *)&LnkLI402,7,first,ap);va_end(ap);return V1;} /* LOAD-DEFMETHOD-INTERNAL */
static object  LnkTLI401(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[401],(void **)(void *)&LnkLI401,first,ap);va_end(ap);return V1;} /* RECORD-DEFINITION */
static object  LnkTLI400(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[400],(void **)(void *)&LnkLI400,3,first,ap);va_end(ap);return V1;} /* MAKE-METHOD-SPEC */
static object  LnkTLI210(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[210],(void **)(void *)&LnkLI210,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-GET */
static object  LnkTLI399(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[399],(void **)(void *)&LnkLI399,1,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-PLIST */
static void LnkT398(){ call_or_link(VV[398],(void **)(void *)&Lnk398);} /* WARN */
static void LnkT397(ptr) object *ptr;{ call_or_link_closure(VV[397],(void **)(void *)&Lnk397,(void **)(void *)&Lclptr397);} /* STANDARD-GENERIC-FUNCTION-P */
static void LnkT396(){ call_or_link(VV[396],(void **)(void *)&Lnk396);} /* WALK-FORM */
static object  LnkTLI395(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[395],(void **)(void *)&LnkLI395,1,first,ap);va_end(ap);return V1;} /* ARG-INFO-APPLYP */
static object  LnkTLI394(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[394],(void **)(void *)&LnkLI394,257,first,ap);va_end(ap);return V1;} /* ARG-INFO-NUMBER-REQUIRED */
static void LnkT393(ptr) object *ptr;{ call_or_link_closure(VV[393],(void **)(void *)&Lnk393,(void **)(void *)&Lclptr393);} /* GF-ARG-INFO */
static void LnkT392(){ call_or_link(VV[392],(void **)(void *)&Lnk392);} /* TYPECASE-ERROR-STRING */
static void LnkT132(){ call_or_link(VV[132],(void **)(void *)&Lnk132);} /* SLOT-UNBOUND-INTERNAL */
static object  LnkTLI391(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[391],(void **)(void *)&LnkLI391,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT390(){ call_or_link(VV[390],(void **)(void *)&Lnk390);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT389(){ call_or_link(VV[389],(void **)(void *)&Lnk389);} /* STRUCTURE-SUBTYPE-P */
static void LnkT388(){ call_or_link(VV[388],(void **)(void *)&Lnk388);} /* MAKE-ARRAY */
static void LnkT380(){ call_or_link(VV[380],(void **)(void *)&Lnk380);} /* SLOT-NAME-LISTS-FROM-SLOTS */
static void LnkT379(){ call_or_link(VV[379],(void **)(void *)&Lnk379);} /* SOME */
static void LnkT377(){ call_or_link(VV[377],(void **)(void *)&Lnk377);} /* WALK-METHOD-LAMBDA */
static void LnkT121(){ call_or_link(VV[121],(void **)(void *)&Lnk121);} /* TYPEP */
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
static void LnkT302(ptr) object *ptr;{ call_or_link_closure(VV[302],(void **)(void *)&Lnk302,(void **)(void *)&Lclptr302);} /* CLASS-PROTOTYPE */
static object  LnkTLI291(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[291],(void **)(void *)&LnkLI291,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static void LnkT357(ptr) object *ptr;{ call_or_link_closure(VV[357],(void **)(void *)&Lnk357,(void **)(void *)&Lclptr357);} /* GENERIC-FUNCTION-P */
static object  LnkTLI347(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[347],(void **)(void *)&LnkLI347,1,first,ap);va_end(ap);return V1;} /* GDEFINITION */
static object  LnkTLI356(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[356],(void **)(void *)&LnkLI356,1,first,ap);va_end(ap);return V1;} /* GBOUNDP */
static object  LnkTLI355(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[355],(void **)(void *)&LnkLI355,7,first,ap);va_end(ap);return V1;} /* EXPAND-DEFMETHOD */
static void LnkT354(){ call_or_link(VV[354],(void **)(void *)&Lnk354);} /* PROTOTYPES-FOR-MAKE-METHOD-LAMBDA */
static void LnkT353(){ call_or_link(VV[353],(void **)(void *)&Lnk353);} /* PARSE-DEFMETHOD */
static void LnkT352(){ call_or_link(VV[352],(void **)(void *)&Lnk352);} /* ENSURE-GENERIC-FUNCTION */
static void LnkT351(){ call_or_link(VV[351],(void **)(void *)&Lnk351);} /* LOAD-TRUENAME */
static object  LnkTLI350(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[350],(void **)(void *)&LnkLI350,3,first,ap);va_end(ap);return V1;} /* MAKE-TOP-LEVEL-FORM */
static object  LnkTLI349(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[349],(void **)(void *)&LnkLI349,1,first,ap);va_end(ap);return V1;} /* DO-STANDARD-DEFSETF-1 */
static object  LnkTLI348(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[348],(void **)(void *)&LnkLI348,3,first,ap);va_end(ap);return V1;} /* EXPAND-DEFGENERIC */
static void LnkT346(){ call_or_link(VV[346],(void **)(void *)&Lnk346);} /* SET-FUNCTION-NAME */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

