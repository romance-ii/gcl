
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
	make_cclosure_new(LC124,Cnil,base[0],Cdata);
	base[3]= (V3);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk361)();
	vs_top=sup;
	V6= vs_base[0];
	base[2]= ({object _tmp=get(VV[362],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[362])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[362])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
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
	base[5]= (*(LnkLI363))(base[2],base[3],base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function EXPAND-DEFGENERIC	*/

static object LI4(V12,V13,V14)

object V12;object V13;object V14;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{register object V15;
	base[0]= Cnil;
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
	base[2]= VV[0];
	vs_top=(vs_base=base+2)+1;
	L7(base);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T20;}
	base[2]= VV[0];
	vs_top=(vs_base=base+2)+1;
	L5(base);
	vs_top=sup;
	goto T17;
	goto T20;
T20:;
	base[2]= VV[0];
	base[3]= list(2,VV[1],CMPcdr((V17)));
	vs_top=(vs_base=base+2)+2;
	L7(base);
	vs_top=sup;
	goto T17;
	goto T18;
T18:;
	if((V18!= VV[49]))goto T26;
	base[2]= CMPcdr((V17));
	vs_top=(vs_base=base+2)+1;
	L6(base);
	vs_top=sup;
	base[2]= VV[2];
	V19= CMPcdr((V17));
	base[4]= VV[2];
	vs_top=(vs_base=base+4)+1;
	L7(base);
	vs_top=sup;
	V20= vs_base[0];
	base[3]= append(/* INLINE-ARGS */V19,V20);
	vs_top=(vs_base=base+2)+2;
	L7(base);
	vs_top=sup;
	goto T17;
	goto T26;
T26:;
	if((V18!= VV[3]))goto T33;
	base[2]= VV[3];
	vs_top=(vs_base=base+2)+1;
	L7(base);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T35;}
	base[2]= VV[3];
	vs_top=(vs_base=base+2)+1;
	L5(base);
	vs_top=sup;
	goto T17;
	goto T35;
T35:;
	base[2]= VV[3];
	base[3]= list(2,VV[1],CMPcadr((V17)));
	vs_top=(vs_base=base+2)+2;
	L7(base);
	vs_top=sup;
	goto T17;
	goto T33;
T33:;
	if((V18!= VV[4]))goto T41;
	base[2]= VV[4];
	vs_top=(vs_base=base+2)+1;
	L7(base);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T43;}
	base[2]= VV[4];
	vs_top=(vs_base=base+2)+1;
	L5(base);
	vs_top=sup;
	goto T17;
	goto T43;
T43:;
	base[2]= VV[4];
	base[3]= list(2,VV[1],CMPcdr((V17)));
	vs_top=(vs_base=base+2)+2;
	L7(base);
	vs_top=sup;
	goto T17;
	goto T41;
T41:;
	if((V18!= VV[5]))goto T49;
	base[2]= VV[5];
	vs_top=(vs_base=base+2)+1;
	L7(base);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T51;}
	base[2]= VV[5];
	vs_top=(vs_base=base+2)+1;
	L5(base);
	vs_top=sup;
	goto T17;
	goto T51;
T51:;
	base[2]= VV[5];
	base[3]= list(2,VV[1],CMPcadr((V17)));
	vs_top=(vs_base=base+2)+2;
	L7(base);
	vs_top=sup;
	goto T17;
	goto T49;
T49:;
	if((V18!= VV[6]))goto T57;
	base[2]= VV[6];
	vs_top=(vs_base=base+2)+1;
	L7(base);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T59;}
	base[2]= VV[6];
	vs_top=(vs_base=base+2)+1;
	L5(base);
	vs_top=sup;
	goto T17;
	goto T59;
T59:;
	base[2]= VV[6];
	base[3]= list(2,VV[1],CMPcadr((V17)));
	vs_top=(vs_base=base+2)+2;
	L7(base);
	vs_top=sup;
	goto T17;
	goto T57;
T57:;
	if((V18!= VV[219]))goto T65;
	{object V21;
	V21= listA(3,VV[7],(V12),CMPcdr((V17)));
	V15= make_cons((V21),(V15));
	goto T17;}
	goto T65;
T65:;
	base[2]= VV[8];
	base[3]= VV[9];
	base[4]= (V17);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk364)();
	vs_top=sup;}
	goto T17;
T17:;
	V16= CMPcdr((V16));
	V17= CMPcar((V16));
	goto T12;}
	goto T8;
T8:;
	{object V22;
	base[1]= VV[2];
	vs_top=(vs_base=base+1)+1;
	L7(base);
	vs_top=sup;
	V22= vs_base[0];
	if(((V22))==Cnil){
	goto T7;}
	base[1]= VV[2];
	base[2]= list(2,VV[1],(V22));
	vs_top=(vs_base=base+1)+2;
	L7(base);
	vs_top=sup;}
	goto T7;
T7:;
	V23= list(2,VV[1],(V12));
	V24= list(3,VV[14],/* INLINE-ARGS */V23,list(2,VV[1],(V13)));
	V25= list(2,VV[15],(V12));{object V26;
	V26= (VV[16]->s.s_dbind);
	V27= list(2,VV[1],(V12));
	V28= listA(4,VV[17],/* INLINE-ARGS */V27,list(2,VV[1],(V13)),base[0]);
	V29= (*(LnkLI365))(/* INLINE-ARGS */V25,V26,/* INLINE-ARGS */V28);
	V30= list(2,VV[18],(V12));
	V31= make_cons(/* INLINE-ARGS */V30,Cnil);
	{object V32 = listA(4,VV[13],/* INLINE-ARGS */V24,/* INLINE-ARGS */V29,append((V15),/* INLINE-ARGS */V31));
	VMR3(V32)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOAD-DEFGENERIC	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{object V33;
	object V34;
	object V35;
	if(vs_top-vs_base<2) too_few_arguments();
	V33=(base[0]);
	V34=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V35=(base[2]);
	vs_top=sup;
	base[3]= (V33);
	base[4]= VV[19];
	base[5]= (V34);
	base[6]= VV[20];
	V37= list(2,VV[15],(V33));
	vs_base=vs_top;
	(void) (*Lnk366)();
	vs_top=sup;
	V38= vs_base[0];
	base[7]= list(2,/* INLINE-ARGS */V37,V38);
	{object V36;
	V36= (V35);
	 vs_top=base+8;
	 while(V36!=Cnil)
	 {vs_push((V36)->c.c_car);V36=(V36)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk367)();
	return;
	}
}
/*	macro definition for DEFMETHOD	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V39=base[0]->c.c_cdr;
	base[2]= V39;}
	{object V40;
	object V41;
	object V42;
	object V43;
	base[3]= base[2];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk368)();
	if(vs_base>=vs_top){vs_top=sup;goto T91;}
	V40= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T92;}
	V41= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T93;}
	V42= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T94;}
	V43= vs_base[0];
	vs_top=sup;
	goto T95;
	goto T91;
T91:;
	V40= Cnil;
	goto T92;
T92:;
	V41= Cnil;
	goto T93;
T93:;
	V42= Cnil;
	goto T94;
T94:;
	V43= Cnil;
	goto T95;
T95:;
	{object V44;
	object V45;
	base[3]= (V40);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk369)();
	if(vs_base>=vs_top){vs_top=sup;goto T98;}
	V44= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T99;}
	V45= vs_base[0];
	vs_top=sup;
	goto T100;
	goto T98;
T98:;
	V44= Cnil;
	goto T99;
T99:;
	V45= Cnil;
	goto T100;
T100:;
	base[3]= (*(LnkLI370))((V40),(V44),(V45),(V41),(V42),(V43),base[1]);
	vs_top=(vs_base=base+3)+1;
	return;}}
}
/*	function definition for PROTOTYPES-FOR-MAKE-METHOD-LAMBDA	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V46;
	check_arg(1);
	V46=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[21]->s.s_dbind))==(VV[22])){
	goto T102;}
	base[1]= Cnil;
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
	goto T102;
T102:;
	{register object V47;
	if(((*(LnkLI371))((V46)))!=Cnil){
	goto T107;}
	V47= Cnil;
	goto T106;
	goto T107;
T107:;
	V47= (*(LnkLI362))((V46));
	goto T106;
T106:;
	if(((V47))==Cnil){
	goto T109;}
	base[1]= (V47);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk372)(Lclptr372);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T110;}
	goto T109;
T109:;
	base[2]= (VFUN_NARGS=1,(*(LnkLI304))(VV[23]));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	base[1]= vs_base[0];
	base[3]= (VFUN_NARGS=1,(*(LnkLI304))(VV[24]));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	return;
	goto T110;
T110:;
	base[1]= (V47);{object V48;
	base[4]= (V47);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk373)(Lclptr373);
	vs_top=sup;
	V48= vs_base[0];
	if(V48==Cnil)goto T122;
	base[3]= V48;
	goto T121;
	goto T122;
T122:;}
	base[3]= (VFUN_NARGS=1,(*(LnkLI304))(VV[24]));
	goto T121;
T121:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	function definition for METHOD-PROTOTYPE-FOR-GF	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	{object V49;
	check_arg(1);
	V49=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V50;
	if(((*(LnkLI371))((V49)))!=Cnil){
	goto T126;}
	V50= Cnil;
	goto T125;
	goto T126;
T126:;
	V50= (*(LnkLI362))((V49));
	goto T125;
T125:;
	if(!(((((VV[21]->s.s_dbind))==(VV[22])?Ct:Cnil))==Cnil)){
	goto T129;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T129;
T129:;
	if(((V50))==Cnil){
	goto T131;}
	base[1]= (V50);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk372)(Lclptr372);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T132;}
	goto T131;
T131:;
	base[1]= (VFUN_NARGS=1,(*(LnkLI304))(VV[24]));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk315)(Lclptr315);
	return;
	goto T132;
T132:;{object V51;
	base[2]= (V50);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk373)(Lclptr373);
	vs_top=sup;
	V51= vs_base[0];
	if(V51==Cnil)goto T139;
	base[1]= V51;
	goto T138;
	goto T139;
T139:;}
	base[1]= (VFUN_NARGS=1,(*(LnkLI304))(VV[24]));
	goto T138;
T138:;
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk315)(Lclptr315);
	return;}
	}
}
/*	local entry for function EXPAND-DEFMETHOD	*/

static object LI12(V59,V60,V61,V62,V63,V64,V65)

object V59;object V60;register object V61;object V62;object V63;object V64;object V65;
{	 VMB8 VMS8 VMV8
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[25],Cnil);
	bds_bind(VV[26],Ct);
	bds_bind(VV[27],Cnil);
	bds_bind(VV[28],Cnil);
	bds_bind(VV[29],Cnil);
	{object V66;
	object V67;
	object V68;
	base[5]= (V59);
	base[6]= (V62);
	base[7]= (V63);
	base[8]= (V64);
	base[9]= (V65);
	vs_top=(vs_base=base+5)+5;
	(void) (*Lnk374)();
	if(vs_base>=vs_top){vs_top=sup;goto T148;}
	V66= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T149;}
	V67= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T150;}
	V68= vs_base[0];
	vs_top=sup;
	goto T151;
	goto T148;
T148:;
	V66= Cnil;
	goto T149;
T149:;
	V67= Cnil;
	goto T150;
T150:;
	V68= Cnil;
	goto T151;
T151:;
	{object V69;
	object V70;
	base[5]= (V60);
	base[6]= (V61);
	base[7]= (V66);
	base[8]= (V65);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk375)(Lclptr375);
	if(vs_base>=vs_top){vs_top=sup;goto T157;}
	V69= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T158;}
	V70= vs_base[0];
	vs_top=sup;
	goto T159;
	goto T157;
T157:;
	V69= Cnil;
	goto T158;
T158:;
	V70= Cnil;
	goto T159;
T159:;
	{object V71;
	base[5]= (V60);
	base[6]= (V61);
	base[7]= (V69);
	base[8]= (V70);
	base[9]= (V65);
	vs_top=(vs_base=base+5)+5;
	(void) (*Lnk376)(Lclptr376);
	vs_top=sup;
	V71= vs_base[0];
	V72= list(2,VV[1],(V59));
	V73= list(3,VV[14],/* INLINE-ARGS */V72,list(2,VV[1],(V63)));
	if(((VV[25]->s.s_dbind))==Cnil){
	goto T169;}
	V75= list(2,VV[30],list(2,VV[1],(VV[25]->s.s_dbind)));
	base[5]= make_cons(/* INLINE-ARGS */V75,Cnil);
	goto T167;
	goto T169;
T169:;
	base[5]= Cnil;
	goto T167;
T167:;
	if(((VV[27]->s.s_dbind))!=Cnil){
	goto T172;}
	if(((VV[28]->s.s_dbind))!=Cnil){
	goto T172;}
	if(((VV[29]->s.s_dbind))==Cnil){
	goto T173;}
	goto T172;
T172:;
	V76= list(2,VV[1],(VV[27]->s.s_dbind));
	V77= list(2,VV[1],(VV[28]->s.s_dbind));
	V78= list(4,VV[31],/* INLINE-ARGS */V76,/* INLINE-ARGS */V77,list(2,VV[1],(VV[29]->s.s_dbind)));
	base[6]= make_cons(/* INLINE-ARGS */V78,Cnil);
	goto T171;
	goto T173;
T173:;
	base[6]= Cnil;
	goto T171;
T171:;
	if(((V61))==Cnil){
	goto T182;}
	base[8]= (*(LnkLI378))((V61));
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk379)(Lclptr379);
	vs_top=sup;
	V79= vs_base[0];
	goto T180;
	goto T182;
T182:;
	V79= VV[24];
	goto T180;
T180:;
	base[9]= (V70);
	base[10]= VV[32];
	vs_top=(vs_base=base+9)+2;
	Lgetf();
	vs_top=sup;
	base[8]= vs_base[0];
	base[9]= VV[33];
	vs_top=(vs_base=base+8)+2;
	Lgetf();
	vs_top=sup;
	V80= vs_base[0];
	V81= (VFUN_NARGS=7,(*(LnkLI377))((V59),(V62),(V68),(V67),V79,(V71),V80));
	base[7]= make_cons(/* INLINE-ARGS */V81,Cnil);
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V74= vs_base[0];
	{object V82 = listA(3,VV[13],/* INLINE-ARGS */V73,V74);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR8(V82)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INTERNED-SYMBOL-P	*/

static object LI13(V84)

object V84;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	if(type_of((V84))==t_symbol){
	goto T190;}
	{object V85 = Cnil;
	VMR9(V85)}
	goto T190;
T190:;
	base[0]= (V84);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	{object V86 = vs_base[0];
	VMR9(V86)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-DEFMETHOD-FORM	*/

static object LI14(object V92,object V91,object V90,object V89,object V88,object V87,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	bds_check;
	{register object V93;
	register object V94;
	register object V95;
	object V96;
	object V97;
	register object V98;
	object V99;
	va_start(ap,first);
	if(narg <6) too_few_arguments();
	V93= V92;
	V94= V91;
	V95= V90;
	V96= V89;
	V97= V88;
	V98= V87;
	narg = narg - 6;
	if (narg <= 0) goto T193;
	else {
	V99= first;}
	--narg; goto T194;
	goto T193;
T193:;
	V99= Cnil;
	goto T194;
T194:;
	{object V100;
	register object V101;
	V100= Cnil;
	V101= Cnil;
	if(!(type_of((V93))==t_cons)){
	goto T202;}
	if((CMPcar((V93)))==(VV[34])){
	goto T204;}
	V102= Cnil;
	goto T200;
	goto T204;
T204:;
	V102= CMPcadr((V93));
	goto T200;
	goto T202;
T202:;
	V102= (V93);
	goto T200;
T200:;
	if(((*(LnkLI380))(V102))==Cnil){
	goto T197;}
	base[0]= (VV[380]->s.s_gfdef);
	base[1]= (V94);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk381)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T197;}
	base[0]= VV[382];
	base[1]= (V95);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk381)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T197;}
	if(!(type_of((V98))==t_cons)){
	goto T197;}
	if(!((CMPcar((V98)))==(VV[36]))){
	goto T197;}
	{register object x= CMPcadr((V98)),V103= VV[37];
	while(V103!=Cnil)
	if(x==(V103->c.c_car)){
	goto T219;
	}else V103=V103->c.c_cdr;
	goto T197;}
	goto T219;
T219:;
	V100= CMPcaddr((V98));
	if(!(type_of((V100))==t_cons)){
	goto T197;}
	if(!((CMPcar((V100)))==(VV[18]))){
	goto T197;}
	V101= CMPcadr((V100));
	if(!(type_of((V101))==t_cons)){
	goto T197;}
	if(!((CMPcar((V101)))==(VV[38]))){
	goto T197;}
	{object V104;
	object V105;
	object V106;
	{object V107;
	object V108= (V95);
	if(V108==Cnil){
	V104= Cnil;
	goto T229;}
	base[3]=V107=MMcons(Cnil,Cnil);
	goto T230;
T230:;
	{register object V109;
	V109= (V108->c.c_car);
	if(!(type_of((V109))==t_cons)){
	goto T233;}
	V110= CMPcar((V109));
	base[4]= CMPcadr((V109));
	vs_top=(vs_base=base+4)+1;
	Leval();
	vs_top=sup;
	V111= vs_base[0];
	(V107->c.c_car)= list(2,/* INLINE-ARGS */V110,V111);
	goto T231;
	goto T233;
T233:;
	(V107->c.c_car)= (V109);}
	goto T231;
T231:;
	if((V108=MMcdr(V108))==Cnil){
	V104= base[3];
	goto T229;}
	V107=MMcdr(V107)=MMcons(Cnil,Cnil);
	goto T230;}
	goto T229;
T229:;
	if(!((CMPcadr((V98)))==(VV[39]))){
	goto T240;}
	V112= VV[40];
	goto T238;
	goto T240;
T240:;
	V112= VV[41];
	goto T238;
T238:;
	V113= make_cons((V104),Cnil);
	V105= listA(3,V112,(V93),append((V94),/* INLINE-ARGS */V113));
	bds_bind(VV[42],Cnil);
	base[5]= Cnil;
	base[6]= VV[43];
	base[7]= (V105);
	vs_top=(vs_base=base+5)+3;
	Lformat();
	vs_top=sup;
	bds_unwind1;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Lintern();
	vs_top=sup;
	V106= vs_base[0];{object V114;
	V114= (VV[45]->s.s_dbind);
	V115= listA(4,VV[46],(V106),CMPcadr((V101)),CMPcddr((V101)));
	V116= list(2,VV[1],(V104));
	V117= CMPcadr((V98));
	V118= listA(4,VV[36],/* INLINE-ARGS */V117,list(2,VV[18],(V106)),CMPcdddr((V98)));
	{object V119 = list(4,VV[44],V114,/* INLINE-ARGS */V115,(VFUN_NARGS=7,(*(LnkLI383))((V93),(V94),/* INLINE-ARGS */V116,(V96),(V97),/* INLINE-ARGS */V118,(V99))));
	VMR10(V119)}}}
	goto T197;
T197:;
	V120= make_cons((V95),Cnil);
	V121= listA(3,VV[7],(V93),append((V94),/* INLINE-ARGS */V120));{object V122;
	V122= (VV[45]->s.s_dbind);
	{object V124;
	object V125= (V95);
	if(V125==Cnil){
	V123= Cnil;
	goto T247;}
	base[0]=V124=MMcons(Cnil,Cnil);
	goto T248;
T248:;
	{register object V126;
	V126= (V125->c.c_car);
	if(!(type_of((V126))==t_cons)){
	goto T251;}
	(V124->c.c_car)= list(3,VV[47],list(2,VV[1],CMPcar((V126))),CMPcadr((V126)));
	goto T249;
	goto T251;
T251:;
	(V124->c.c_car)= list(2,VV[1],(V126));}
	goto T249;
T249:;
	if((V125=MMcdr(V125))==Cnil){
	V123= base[0];
	goto T247;}
	V124=MMcdr(V124)=MMcons(Cnil,Cnil);
	goto T248;}
	goto T247;
T247:;
	V127= make_cons(VV[47],V123);
	V128= (VFUN_NARGS=7,(*(LnkLI383))((V93),(V94),/* INLINE-ARGS */V127,(V96),(V97),(V98),(V99)));
	{object V129 = (*(LnkLI365))(/* INLINE-ARGS */V121,V122,/* INLINE-ARGS */V128);
	VMR10(V129)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAKE-DEFMETHOD-FORM-INTERNAL	*/

static object LI15(object V135,object V134,object V133,object V132,object V131,object V130,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V136;
	object V137;
	object V138;
	object V139;
	object V140;
	object V141;
	object V142;
	va_start(ap,first);
	if(narg <6) too_few_arguments();
	V136= V135;
	V137= V134;
	V138= V133;
	V139= V132;
	V140= V131;
	V141= V130;
	narg = narg - 6;
	if (narg <= 0) goto T253;
	else {
	V142= first;}
	--narg; goto T254;
	goto T253;
T253:;
	V142= Cnil;
	goto T254;
T254:;
	V143= list(2,VV[1],(V140));
	V144= list(2,VV[1],(V136));
	V145= list(2,VV[1],(V137));
	V146= list(2,VV[1],(V139));
	{object V147 = list(8,VV[48],/* INLINE-ARGS */V143,/* INLINE-ARGS */V144,/* INLINE-ARGS */V145,(V138),/* INLINE-ARGS */V146,(V141),list(2,VV[1],(V142)));
	VMR11(V147)}
	va_end(ap);
	return Cnil;}
	}
/*	macro definition for MAKE-METHOD-FUNCTION	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V148=base[0]->c.c_cdr;
	if(endp(V148))invalid_macro_call();
	base[2]= (V148->c.c_car);
	V148=V148->c.c_cdr;
	if(!endp(V148))invalid_macro_call();}
	base[3]= base[2];
	base[4]= base[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk384)();
	return;
}
/*	function definition for MAKE-METHOD-FUNCTION-INTERNAL	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V149;
	object V150;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V149=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T258;}
	V150=(base[1]);
	vs_top=sup;
	goto T259;
	goto T258;
T258:;
	V150= Cnil;
	goto T259;
T259:;
	{object V151;
	object V152;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk369)();
	if(vs_base>=vs_top){vs_top=sup;goto T263;}
	V151= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T264;}
	V152= vs_base[0];
	vs_top=sup;
	goto T265;
	goto T263;
T263:;
	V151= Cnil;
	goto T264;
T264:;
	V152= Cnil;
	goto T265;
T265:;
	{object V153;
	object V154;
	base[2]= (V151);
	base[3]= (V152);
	base[4]= (V149);
	base[5]= (V150);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk375)(Lclptr375);
	if(vs_base>=vs_top){vs_top=sup;goto T271;}
	V153= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T272;}
	V154= vs_base[0];
	vs_top=sup;
	goto T273;
	goto T271;
T271:;
	V153= Cnil;
	goto T272;
T272:;
	V154= Cnil;
	goto T273;
T273:;
	base[2]= (V151);
	base[3]= (V152);
	base[4]= (V153);
	base[5]= (V154);
	base[6]= (V150);
	vs_top=(vs_base=base+2)+5;
	(void) (*Lnk376)(Lclptr376);
	return;}}
	}
}
/*	function definition for ADD-METHOD-DECLARATIONS	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V155;
	object V156;
	object V157;
	object V158;
	object V159;
	check_arg(5);
	V155=(base[0]);
	V156=(base[1]);
	V157=(base[2]);
	V158=(base[3]);
	V159=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V160;
	object V161;
	object V162;
	base[5]= (V157);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk385)();
	if(vs_base>=vs_top){vs_top=sup;goto T281;}
	V160= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T282;}
	V161= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T283;}
	V162= vs_base[0];
	vs_top=sup;
	goto T284;
	goto T281;
T281:;
	V160= Cnil;
	goto T282;
T282:;
	V161= Cnil;
	goto T283;
T283:;
	V162= Cnil;
	goto T284;
T284:;
	{object V163;
	object V164;
	object V165;
	base[5]= (V158);
	base[6]= (V159);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk386)();
	if(vs_base>=vs_top){vs_top=sup;goto T288;}
	V163= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T289;}
	V164= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T290;}
	V165= vs_base[0];
	vs_top=sup;
	goto T291;
	goto T288;
T288:;
	V163= Cnil;
	goto T289;
T289:;
	V164= Cnil;
	goto T290;
T290:;
	V165= Cnil;
	goto T291;
T291:;
	if(((V163))==Cnil){
	goto T295;}
	V166= make_cons((V163),Cnil);
	goto T293;
	goto T295;
T295:;
	V166= Cnil;
	goto T293;
T293:;
	V167= list(2,VV[49],list(2,VV[50],list(3,(V155),(V156),(V162))));
	V168= list(2,VV[49],make_cons(VV[51],(V157)));
	V169= listA(3,/* INLINE-ARGS */V167,/* INLINE-ARGS */V168,append((V164),(V165)));
	base[5]= listA(3,VV[38],(V161),append(V166,/* INLINE-ARGS */V169));
	base[6]= (V161);
	base[7]= (V162);
	vs_top=(vs_base=base+5)+3;
	return;}}
	}
}
/*	local entry for function REAL-MAKE-METHOD-INITARGS-FORM	*/

static object LI19(V175,V176,V177,V178,V179)

object V175;object V176;register object V177;object V178;object V179;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(!(type_of((V177))==t_cons)){
	goto T300;}
	if((CMPcar((V177)))==(VV[38])){
	goto T299;}
	goto T300;
T300:;
	base[0]= VV[52];
	base[1]= (V177);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T299;
T299:;
	{object V180 = (*(LnkLI387))((V177),(V178),(V179));
	VMR15(V180)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for REAL-MAKE-METHOD-LAMBDA	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V181;
	object V182;
	object V183;
	object V184;
	check_arg(4);
	V181=(base[0]);
	V182=(base[1]);
	V183=(base[2]);
	V184=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V183);
	base[5]= (V184);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk388)();
	return;
	}
}
/*	function definition for MAKE-METHOD-LAMBDA-INTERNAL	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{object V185;
	object V186;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V185=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T308;}
	V186=(base[1]);
	vs_top=sup;
	goto T309;
	goto T308;
T308:;
	V186= Cnil;
	goto T309;
T309:;
	if(!(type_of((V185))==t_cons)){
	goto T312;}
	if((CMPcar((V185)))==(VV[38])){
	goto T311;}
	goto T312;
T312:;
	base[2]= VV[53];
	base[3]= (V185);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	vs_top=sup;
	goto T311;
T311:;
	{object V187;
	object V188;
	object V189;
	base[2]= CMPcddr((V185));
	base[3]= (V186);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk386)();
	if(vs_base>=vs_top){vs_top=sup;goto T321;}
	V187= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T322;}
	V188= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T323;}
	V189= vs_base[0];
	vs_top=sup;
	goto T324;
	goto T321;
T321:;
	V187= Cnil;
	goto T322;
T322:;
	V188= Cnil;
	goto T323;
T323:;
	V189= Cnil;
	goto T324;
T324:;
	{object V190;
	object V191;
	object V192;
	object V193;
	object V194;
	V190= (VFUN_NARGS=2,(*(LnkLI389))(VV[50],(V188)));
	V191= (VFUN_NARGS=2,(*(LnkLI389))(VV[51],(V188)));
	if(!(type_of((V190))==t_cons)){
	goto T329;}
	V192= CMPcar((V190));
	goto T327;
	goto T329;
T329:;
	V192= Cnil;
	goto T327;
T327:;
	if(((V192))==Cnil){
	goto T333;}
	V193= CMPcar((V192));
	goto T331;
	goto T333;
T333:;
	V193= Cnil;
	goto T331;
T331:;
	if((V191)!=Cnil){
	V194= (V191);
	goto T335;}
	V194= CMPcadr((V185));
	goto T335;
T335:;
	{object V195;
	register object V196;
	object V197;
	base[7]= (V194);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk385)();
	if(vs_base>=vs_top){vs_top=sup;goto T338;}
	V195= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T339;}
	V196= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T340;}
	V197= vs_base[0];
	vs_top=sup;
	goto T341;
	goto T338;
T338:;
	V195= Cnil;
	goto T339;
T339:;
	V196= Cnil;
	goto T340;
T340:;
	V197= Cnil;
	goto T341;
T341:;
	{object V198;
	object V199;
	object V200;
	object V201;
	object V202;
	object V203;
	object V204;
	object V205;
	object V206;
	object V207;
	{object V208;
	object V209= (V195);
	object V210= (V197);
	if(V209==Cnil||V210==Cnil){
	V198= Cnil;
	goto T342;}
	base[17]=V208=MMcons(Cnil,Cnil);
	goto T343;
T343:;
	(V208->c.c_car)= (V209->c.c_car);
	if((V209=MMcdr(V209))==Cnil||(V210=MMcdr(V210))==Cnil){
	V198= base[17];
	goto T342;}
	V208=MMcdr(V208)=MMcons(Cnil,Cnil);
	goto T343;}
	goto T342;
T342:;
	{register object V213;
	register object V214;
	V213= Cnil;
	V214= (V194);
	{register object V215;
	register object V216;
	V215= Cnil;
	V216= (V198);
	{object V217;
	register object V218;
	V217= make_cons(Cnil,Cnil);
	V218= (V217);
	goto T349;
T349:;
	if(!(((V214))==Cnil)){
	goto T351;}
	goto T350;
	goto T351;
T351:;
	V213= CMPcar((V214));
	V214= CMPcdr((V214));
	if(!(((V216))==Cnil)){
	goto T358;}
	goto T350;
	goto T358;
T358:;
	V215= CMPcar((V216));
	V216= CMPcdr((V216));
	if(!(type_of((V213))==t_cons||((V213))==Cnil)){
	goto T365;}{object V219;
	V219= (V218);
	V218= make_cons((V215),Cnil);
	(V219)->c.c_cdr = (V218);}
	goto T365;
T365:;
	goto T349;
	goto T350;
T350:;
	V199= CMPcdr((V217));
	goto T345;
	V199= Cnil;
	goto T345;}}}
	goto T345;
T345:;
	{object V220;
	object V221= (V198);
	if(V221==Cnil){
	V200= Cnil;
	goto T370;}
	base[17]=V220=MMcons(Cnil,Cnil);
	goto T371;
T371:;
	(V220->c.c_car)= make_cons((V221->c.c_car),Cnil);
	if((V221=MMcdr(V221))==Cnil){
	V200= base[17];
	goto T370;}
	V220=MMcdr(V220)=MMcons(Cnil,Cnil);
	goto T371;}
	goto T370;
T370:;
	V201= make_cons(Cnil,Cnil);
	{object V223;
	object V224= (V195);
	object V225= (V197);
	if(V224==Cnil||V225==Cnil){
	V222= Cnil;
	goto T375;}
	base[17]=V223=MMcons(Cnil,Cnil);
	goto T376;
T376:;
	if(!(type_of((V225->c.c_car))==t_symbol)){
	goto T379;}
	if(!(((((V225->c.c_car))==(Ct)?Ct:Cnil))==Cnil)){
	goto T379;}
	V228= list(3,VV[54],(V224->c.c_car),(V225->c.c_car));
	(V223->c.c_cdr)= make_cons(/* INLINE-ARGS */V228,Cnil);
	goto T377;
	goto T379;
T379:;
	(V223->c.c_cdr)= Cnil;
	goto T377;
T377:;
	while(MMcdr(V223)!=Cnil)V223=MMcdr(V223);
	if((V224=MMcdr(V224))==Cnil||(V225=MMcdr(V225))==Cnil){
	base[17]=base[17]->c.c_cdr;
	V222= base[17];
	goto T375;}
	goto T376;}
	goto T375;
T375:;
	V202= make_cons(VV[49],V222);
	V229= list(2,VV[49],make_cons(VV[55],(V199)));
	if(!(type_of((V193))==t_cons||((V193))==Cnil)){
	goto T386;}
	V230= CMPcadr((V193));
	goto T384;
	goto T386;
T386:;
	V230= (V193);
	goto T384;
T384:;
	V231= listA(3,VV[56],V230,(V189));
	V232= make_cons(/* INLINE-ARGS */V231,Cnil);
	V203= listA(5,VV[38],(V196),/* INLINE-ARGS */V229,(V202),append((V188),/* INLINE-ARGS */V232));
	if((CMPcdr((V189)))==Cnil){
	goto T389;}
	V204= Cnil;
	goto T388;
	goto T389;
T389:;
	base[17]= CMPcar((V189));
	vs_top=(vs_base=base+17)+1;
	Lconstantp();
	vs_top=sup;
	V204= vs_base[0];
	goto T388;
T388:;
	if((V204)==Cnil){
	V205= Cnil;
	goto T392;}
	base[17]= CMPcar((V189));
	vs_top=(vs_base=base+17)+1;
	Leval();
	vs_top=sup;
	V205= vs_base[0];
	goto T392;
T392:;
	if(((V204))==Cnil){
	goto T396;}
	base[17]= (V205);
	base[18]= VV[57];
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk126)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T395;}
	if(!(type_of((V205))==t_symbol)){
	goto T396;}
	base[17]= (V205);
	vs_top=(vs_base=base+17)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T396;}
	goto T395;
T395:;
	V206= list(2,VV[58],(V205));
	goto T394;
	goto T396;
T396:;
	V206= Cnil;
	goto T394;
T394:;
	base[17]= (V203);
	base[18]= (V198);
	base[19]= (V186);
	base[20]= (V200);
	base[21]= (V201);
	vs_top=(vs_base=base+17)+5;
	(void) (*Lnk390)();
	vs_top=sup;
	V207= vs_base[0];
	{object V233;
	object V234;
	object V235;
	base[17]= CMPcddr((V207));
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk386)();
	if(vs_base>=vs_top){vs_top=sup;goto T415;}
	V233= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T416;}
	V234= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T417;}
	V235= vs_base[0];
	vs_top=sup;
	goto T418;
	goto T415;
T415:;
	V233= Cnil;
	goto T416;
T416:;
	V234= Cnil;
	goto T417;
T417:;
	V235= Cnil;
	goto T418;
T418:;
	base[17]= (VV[391]->s.s_gfdef);
	base[18]= (V200);
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk392)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T419;}
	{object V236;
	object V237;
	base[17]= (V200);
	base[18]= (V201);
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk393)();
	if(vs_base>=vs_top){vs_top=sup;goto T427;}
	V236= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T428;}
	V237= vs_base[0];
	vs_top=sup;
	goto T429;
	goto T427;
T427:;
	V236= Cnil;
	goto T428;
T428:;
	V237= Cnil;
	goto T429;
T429:;
	{object V238;
	base[17]= VV[59];
	vs_top=(vs_base=base+17)+1;
	Lmake_symbol();
	vs_top=sup;
	V238= vs_base[0];
	if(((V236))==Cnil){
	goto T436;}
	base[17]= list(2,VV[60],(V236));
	goto T434;
	goto T436;
T436:;
	base[17]= Cnil;
	goto T434;
T434:;
	if(((V237))==Cnil){
	goto T440;}
	base[18]= list(2,VV[61],(V237));
	goto T438;
	goto T440;
T440:;
	base[18]= Cnil;
	goto T438;
T438:;
	base[19]= listA(3,VV[33],(V238),(V206));
	vs_top=(vs_base=base+17)+3;
	Lappend();
	vs_top=sup;
	V206= vs_base[0];
	V239= listA(3,VV[62],list(3,(V198),(V236),(V238)),(V235));
	V235= make_cons(/* INLINE-ARGS */V239,Cnil);}}
	goto T419;
T419:;
	{register object x= VV[63],V240= (V196);
	while(V240!=Cnil)
	if(x==(V240->c.c_car)){
	goto T447;
	}else V240=V240->c.c_cdr;
	goto T444;}
	goto T447;
T447:;
	{register object x= VV[64],V241= (V196);
	while(V241!=Cnil)
	if(x==(V241->c.c_car)){
	goto T444;
	}else V241=V241->c.c_cdr;}
	{object V242;
	{register object x= VV[65],V243= (V196);
	while(V243!=Cnil)
	if(x==(V243->c.c_car)){
	V242= V243;
	goto T449;
	}else V243=V243->c.c_cdr;
	V242= Cnil;}
	goto T449;
T449:;
	base[18]= (V196);
	base[19]= (V242);
	vs_top=(vs_base=base+18)+2;
	Lldiff();
	vs_top=sup;
	base[17]= vs_base[0];
	base[18]= make_cons(VV[64],Cnil);
	base[19]= (V242);
	vs_top=(vs_base=base+17)+3;
	Lnconc();
	vs_top=sup;
	V196= vs_base[0];}
	goto T444;
T444:;
	V244= list(5,(V196),VV[68],VV[69],VV[70],(V190));
	base[17]= list(3,VV[38],VV[66],listA(3,VV[67],/* INLINE-ARGS */V244,append((V234),(V235))));
	if(((V206))==Cnil){
	goto T460;}
	V245= list(2,VV[32],(V206));
	goto T458;
	goto T460;
T460:;
	V245= Cnil;
	goto T458;
T458:;
	if(((V187))==Cnil){
	goto T464;}
	V246= list(2,VV[3],(V187));
	goto T462;
	goto T464;
T464:;
	V246= Cnil;
	goto T462;
T462:;
	base[18]= append(V245,V246);
	vs_top=(vs_base=base+17)+2;
	return;}}}}}
	}
}
/*	macro definition for SIMPLE-LEXICAL-METHOD-FUNCTIONS	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V247=base[0]->c.c_cdr;
	if(endp(V247))invalid_macro_call();
	{object V248= (V247->c.c_car);
	if(endp(V248))invalid_macro_call();
	base[2]= (V248->c.c_car);
	V248=V248->c.c_cdr;
	if(endp(V248))invalid_macro_call();
	base[3]= (V248->c.c_car);
	V248=V248->c.c_cdr;
	if(endp(V248))invalid_macro_call();
	base[4]= (V248->c.c_car);
	V248=V248->c.c_cdr;
	base[5]= V248;}
	V247=V247->c.c_cdr;
	base[6]= V247;}
	V249= list(2,base[3],base[4]);
	base[7]= list(4,VV[13],base[3],base[4],list(3,VV[71],/* INLINE-ARGS */V249,list(3,VV[72],base[5],listA(3,VV[73],list(2,base[2],base[3]),base[6]))));
	vs_top=(vs_base=base+7)+1;
	return;
}
/*	macro definition for FAST-LEXICAL-METHOD-FUNCTIONS	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V250=base[0]->c.c_cdr;
	if(endp(V250))invalid_macro_call();
	{object V251= (V250->c.c_car);
	if(endp(V251))invalid_macro_call();
	base[2]= (V251->c.c_car);
	V251=V251->c.c_cdr;
	if(endp(V251))invalid_macro_call();
	base[3]= (V251->c.c_car);
	V251=V251->c.c_cdr;
	if(endp(V251))invalid_macro_call();
	base[4]= (V251->c.c_car);
	V251=V251->c.c_cdr;
	if(endp(V251))invalid_macro_call();
	base[5]= (V251->c.c_car);
	V251=V251->c.c_cdr;
	base[6]= V251;}
	V250=V250->c.c_cdr;
	base[7]= V250;}
	V252= list(3,base[4],base[5],base[3]);
	V253 = CMPmake_fixnum((long)length(base[4]));
	base[8]= list(3,VV[74],/* INLINE-ARGS */V252,list(3,VV[72],base[6],listA(3,VV[73],list(2,nthcdr(fix(V253),base[2]),base[5]),base[7])));
	vs_top=(vs_base=base+8)+1;
	return;
}
/*	function definition for CALL-NO-NEXT-METHOD	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{object V254;
	object V255;
	if(vs_top-vs_base<1) too_few_arguments();
	V254=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V255=(base[1]);
	vs_top=sup;
	{register object V256;
	V256= CMPcar((V254));
	base[2]= small_fixnum(3);
	base[3]= CMPmake_fixnum((long)length((V256)));
	base[4]= small_fixnum(3);
	vs_top=(vs_base=base+2)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T467;}
	base[2]= VV[75];
	base[3]= Cnil;
	base[4]= (V256);
	base[5]= VV[76];
	base[6]= small_fixnum(3);
	base[7]= small_fixnum(3);
	vs_top=(vs_base=base+2)+6;
	(void) (*Lnk394)();
	vs_top=sup;
	goto T467;
T467:;
	{object V257;
	object V258;
	object V259;
	V257= CMPcar((V256));
	V258= CMPcar(CMPcdr((V256)));
	V259= CMPcar(CMPcdr(CMPcdr((V256))));
	{object V260;
	base[5]= (*(LnkLI362))((V257));
	base[6]= (V258);
	base[7]= (V259);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk395)(Lclptr395);
	vs_top=sup;
	V260= vs_base[0];
	base[5]=VV[396]->s.s_gfdef;
	base[7]= (V260);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk397)(Lclptr397);
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= (V260);
	{object V261;
	V261= (V255);
	 vs_top=base+8;
	 while(V261!=Cnil)
	 {vs_push((V261)->c.c_car);V261=(V261)->c.c_cdr;}
	vs_base=base+6;}
	(void) (*Lnk396)(Lclptr396);
	return;}}}
	}
}
/*	macro definition for BIND-SIMPLE-LEXICAL-METHOD-MACROS	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
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
	if(!endp(V263))invalid_macro_call();}
	V262=V262->c.c_cdr;
	base[4]= V262;}
	V264= list(3,VV[47],VV[81],list(3,VV[47],VV[82],list(2,VV[1],base[3])));
	V265= list(2,VV[1],base[3]);
	V266= list(3,VV[47],/* INLINE-ARGS */V264,list(3,VV[47],/* INLINE-ARGS */V265,list(3,VV[47],VV[83],list(2,VV[1],base[3]))));
	V267= list(3,VV[78],VV[79],list(6,VV[36],VV[80],/* INLINE-ARGS */V266,VV[84],list(2,VV[1],base[3]),VV[85]));
	V268= list(4,VV[47],VV[92],VV[93],list(2,VV[1],base[2]));
	V269= list(5,VV[47],VV[90],VV[91],/* INLINE-ARGS */V268,list(2,VV[1],base[3]));
	base[5]= listA(3,VV[77],list(3,/* INLINE-ARGS */V267,list(3,VV[86],VV[87],list(5,VV[47],VV[88],VV[89],/* INLINE-ARGS */V269,list(5,VV[47],VV[94],VV[95],VV[96],list(4,VV[47],VV[97],VV[93],list(2,VV[1],base[2]))))),VV[98]),base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function MAKE-METHOD-CALL	*/

static object LI26(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB22 VMS22 VMV22
	{object V270;
	object V271;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI26key,first,ap);
	if(Vcs[0]==0){
	V270= (VV[399]->s.s_gfdef);
	}else{
	V270=(Vcs[0]);}
	V271=(Vcs[1]);
	base[0]= VV[99];
	base[1]= (V270);
	base[2]= (V271);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V272 = vs_base[0];
	VMR22(V272)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	macro definition for INVOKE-METHOD-CALL1	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V273=base[0]->c.c_cdr;
	if(endp(V273))invalid_macro_call();
	base[2]= (V273->c.c_car);
	V273=V273->c.c_cdr;
	if(endp(V273))invalid_macro_call();
	base[3]= (V273->c.c_car);
	V273=V273->c.c_cdr;
	if(endp(V273))invalid_macro_call();
	base[4]= (V273->c.c_car);
	V273=V273->c.c_cdr;
	if(!endp(V273))invalid_macro_call();}
	V274= list(2,VV[101],base[2]);
	V275= list(2,VV[102],base[3]);
	base[5]= list(3,VV[100],list(3,/* INLINE-ARGS */V274,/* INLINE-ARGS */V275,list(2,VV[103],base[4])),VV[104]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for INVOKE-METHOD-CALL	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V276=base[0]->c.c_cdr;
	if(endp(V276))invalid_macro_call();
	base[2]= (V276->c.c_car);
	V276=V276->c.c_cdr;
	if(endp(V276))invalid_macro_call();
	base[3]= (V276->c.c_car);
	V276=V276->c.c_cdr;
	base[4]= V276;}
	V277= list(2,VV[106],base[2]);
	if((base[3])==Cnil){
	goto T496;}
	V278= make_cons(VV[36],base[4]);
	goto T494;
	goto T496;
T496:;
	V278= make_cons(VV[47],base[4]);
	goto T494;
T494:;
	base[5]= list(4,VV[105],/* INLINE-ARGS */V277,V278,list(2,VV[107],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function MAKE-FAST-METHOD-CALL	*/

static object LI29(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB25 VMS25 VMV25
	{object V279;
	object V280;
	object V281;
	object V282;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI29key,first,ap);
	if(Vcs[0]==0){
	V279= (VV[399]->s.s_gfdef);
	}else{
	V279=(Vcs[0]);}
	V280=(Vcs[1]);
	V281=(Vcs[2]);
	V282=(Vcs[3]);
	base[0]= VV[108];
	base[1]= (V279);
	base[2]= (V280);
	base[3]= (V281);
	base[4]= (V282);
	vs_top=(vs_base=base+0)+5;
	siLmake_structure();
	vs_top=sup;
	{object V283 = vs_base[0];
	VMR25(V283)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	macro definition for INVOKE-FAST-METHOD-CALL	*/

static void L30()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V284=base[0]->c.c_cdr;
	if(endp(V284))invalid_macro_call();
	base[2]= (V284->c.c_car);
	V284=V284->c.c_cdr;
	base[3]= V284;}
	V285= list(2,VV[110],base[2]);
	V286= list(2,VV[111],base[2]);
	base[4]= listA(5,VV[109],/* INLINE-ARGS */V285,/* INLINE-ARGS */V286,list(2,VV[112],base[2]),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function MAKE-FAST-INSTANCE-BOUNDP	*/

static object LI31(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB27 VMS27 VMV27
	{object V287;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI31key,first,ap);
	V287=(Vcs[0]);
	base[0]= VV[113];
	base[1]= (V287);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V288 = vs_base[0];
	VMR27(V288)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function SHOW-EMF-CALL-TRACE	*/

static object LI32()

{	 VMB28 VMS28 VMV28
	bds_check;
	goto TTL;
TTL:;
	if(((VV[114]->s.s_dbind))==Cnil){
	goto T507;}
	{register object V289;
	V289= (VV[115]->s.s_dbind);
	bds_bind(VV[116],Cnil);
	base[1]= Ct;
	base[2]= VV[117];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	{register long V290;
	register long V291;
	V290= fix((VV[118]->s.s_dbind));
	V291= 0;
	goto T515;
T515:;
	if(!((V291)>=(V290))){
	goto T516;}
	{object V292 = Cnil;
	bds_unwind1;
	VMR28(V292)}
	goto T516;
T516:;
	{register object V293;
	V293= aref1((VV[114]->s.s_dbind),fix((V289)));
	if(((V293))==Cnil){
	goto T519;}
	(void)(print((V293),Cnil));}
	goto T519;
T519:;
	V289= number_plus((V289),small_fixnum(1));
	if(!(number_compare((V289),(VV[118]->s.s_dbind))==0)){
	goto T525;}
	V289= small_fixnum(0);
	goto T525;
T525:;
	V291= (long)(V291)+1;
	goto T515;}}
	goto T507;
T507:;
	{object V294 = Cnil;
	VMR28(V294)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function TRACE-EMF-CALL-INTERNAL	*/

static object LI33(V298,V299,V300)

object V298;object V299;object V300;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	if(((VV[114]->s.s_dbind))!=Cnil){
	goto T532;}
	base[0]= (VV[118]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk405)();
	vs_top=sup;
	(VV[114]->s.s_dbind)= vs_base[0];
	goto T532;
T532:;{object V301;
	V301= (VV[114]->s.s_dbind);{object V302;
	V302= (VV[115]->s.s_dbind);
	V303= listA(3,(V298),(V299),(V300));
	(void)(aset1(V301,fix(V302),/* INLINE-ARGS */V303));}}
	(VV[115]->s.s_dbind)= number_plus((VV[115]->s.s_dbind),small_fixnum(1));
	if(!(number_compare((VV[115]->s.s_dbind),(VV[118]->s.s_dbind))==0)){
	goto T541;}
	(VV[115]->s.s_dbind)= small_fixnum(0);
	{object V304 = small_fixnum(0);
	VMR29(V304)}
	goto T541;
T541:;
	{object V305 = Cnil;
	VMR29(V305)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for TRACE-EMF-CALL	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V306=base[0]->c.c_cdr;
	if(endp(V306))invalid_macro_call();
	base[2]= (V306->c.c_car);
	V306=V306->c.c_cdr;
	if(endp(V306))invalid_macro_call();
	base[3]= (V306->c.c_car);
	V306=V306->c.c_cdr;
	if(endp(V306))invalid_macro_call();
	base[4]= (V306->c.c_car);
	V306=V306->c.c_cdr;
	if(!endp(V306))invalid_macro_call();}
	if(((VV[119]->s.s_dbind))==Cnil){
	goto T545;}
	base[5]= list(3,VV[120],VV[116],list(4,VV[121],base[2],base[3],base[4]));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T545;
T545:;
	base[5]= Cnil;
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for INVOKE-EFFECTIVE-METHOD-FUNCTION-FAST	*/

static void L35()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V307=base[0]->c.c_cdr;
	if(endp(V307))invalid_macro_call();
	base[2]= (V307->c.c_car);
	V307=V307->c.c_cdr;
	if(endp(V307))invalid_macro_call();
	base[3]= (V307->c.c_car);
	V307=V307->c.c_cdr;
	base[4]= V307;}
	V308= list(4,VV[122],base[2],base[3],make_cons(VV[47],base[4]));
	base[5]= list(3,VV[13],/* INLINE-ARGS */V308,listA(3,VV[123],base[2],base[4]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for INVOKE-EFFECTIVE-METHOD-FUNCTION	*/

static void L36()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V309=base[0]->c.c_cdr;
	if(endp(V309))invalid_macro_call();
	base[2]= (V309->c.c_car);
	V309=V309->c.c_cdr;
	if(endp(V309))invalid_macro_call();
	base[3]= (V309->c.c_car);
	V309=V309->c.c_cdr;
	base[4]= V309;}
	base[5]= base[3];
	vs_top=(vs_base=base+5)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T547;}
	base[5]= VV[124];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	goto T547;
T547:;
	base[5]= base[3];
	vs_top=(vs_base=base+5)+1;
	Leval();
	vs_top=sup;
	base[3]= vs_base[0];
	V310= list(4,VV[122],base[2],base[3],make_cons(VV[47],base[4]));
	V311= list(3,VV[126],base[2],VV[127]);
	V312= list(2,/* INLINE-ARGS */V311,listA(3,VV[123],base[2],base[4]));
	if((base[3])!=Cnil){
	goto T558;}
	if(!((1)==((long)length(base[4])))){
	goto T558;}
	V314= list(3,VV[126],base[2],VV[128]);
	V315= list(2,VV[130],list(2,VV[131],CMPcar(base[4])));
	V316= list(2,/* INLINE-ARGS */V315,list(2,VV[132],list(3,VV[120],VV[130],list(3,VV[133],VV[130],base[2]))));
	V317= list(3,VV[135],VV[132],list(2,VV[1],(VV[136]->s.s_dbind)));
	V318= list(2,/* INLINE-ARGS */V314,list(3,VV[129],/* INLINE-ARGS */V316,list(4,VV[134],/* INLINE-ARGS */V317,list(3,VV[137],CMPcar(base[4]),base[2]),VV[132])));
	base[5]= make_cons(/* INLINE-ARGS */V318,Cnil);
	goto T556;
	goto T558;
T558:;
	base[5]= Cnil;
	goto T556;
T556:;
	if((base[3])!=Cnil){
	goto T564;}
	if(!((2)==((long)length(base[4])))){
	goto T564;}
	V319= list(3,VV[126],base[2],VV[138]);
	V320= list(2,VV[139],CMPcar(base[4]));
	V321= list(2,/* INLINE-ARGS */V320,list(2,VV[130],list(2,VV[131],CMPcar(base[4]))));
	V322= list(2,/* INLINE-ARGS */V319,list(3,VV[100],/* INLINE-ARGS */V321,list(3,VV[120],VV[130],list(3,VV[34],list(3,VV[133],VV[130],base[2]),VV[139]))));
	base[6]= make_cons(/* INLINE-ARGS */V322,Cnil);
	goto T562;
	goto T564;
T564:;
	base[6]= Cnil;
	goto T562;
T562:;
	V323= list(2,VV[99],listA(4,VV[141],base[2],base[3],base[4]));
	if((base[3])==Cnil){
	goto T571;}
	V324= listA(3,VV[142],list(3,VV[143],VV[18],base[2]),base[4]);
	goto T569;
	goto T571;
T571:;
	V324= listA(3,VV[144],list(3,VV[143],VV[18],base[2]),base[4]);
	goto T569;
T569:;
	V325= list(2,Ct,list(4,VV[140],base[2],/* INLINE-ARGS */V323,list(2,VV[18],V324)));
	base[7]= make_cons(/* INLINE-ARGS */V325,Cnil);
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V313= vs_base[0];
	base[5]= list(3,VV[13],/* INLINE-ARGS */V310,listA(3,VV[125],/* INLINE-ARGS */V312,V313));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	function definition for INVOKE-EMF	*/

static void L37()
{register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_check;
	{register object V326;
	register object V327;
	check_arg(2);
	V326=(base[0]);
	V327=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V329;
	V329= V326;
	base[2]= (V329);
	base[3]= VV[108];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk406)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T575;}
	{object V330;
	object V331;
	register object V332;
	V330= STREF(object,(V326),12);
	V331= CMPcdr((V330));
	V332= CMPcar((V330));
	if(((V331))==Cnil){
	goto T583;}
	{object V333;
	object V334;
	V333= nthcdr(fix((V332)),(V327));
	base[7]= (V327);
	base[8]= (V333);
	vs_top=(vs_base=base+7)+2;
	Lldiff();
	vs_top=sup;
	V334= vs_base[0];
	base[7]= STREF(object,(V326),0);
	base[8]= STREF(object,(V326),4);
	base[9]= STREF(object,(V326),8);
	{object V335;
	V336= make_cons((V333),Cnil);
	V335= nconc((V334),/* INLINE-ARGS */V336);
	 vs_top=base+10;
	 while(V335!=Cnil)
	 {vs_push((V335)->c.c_car);V335=(V335)->c.c_cdr;}
	vs_base=base+8;}
	{object _funobj = base[7];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T583;
T583:;
	if(((V327))!=Cnil){
	goto T594;}
	if(!(eql((V332),small_fixnum(0)))){
	goto T597;}
	base[5]= STREF(object,(V326),0);
	base[6]= STREF(object,(V326),4);
	base[7]= STREF(object,(V326),8);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T597;
T597:;
	base[5]= VV[145];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	return;
	goto T594;
T594:;
	if((CMPcdr((V327)))!=Cnil){
	goto T604;}
	if(!(eql((V332),small_fixnum(1)))){
	goto T607;}
	base[5]= STREF(object,(V326),0);
	base[6]= STREF(object,(V326),4);
	base[7]= STREF(object,(V326),8);
	base[8]= CMPcar((V327));
	vs_top=(vs_base=base+6)+3;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T607;
T607:;
	base[5]= VV[146];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	return;
	goto T604;
T604:;
	if((CMPcddr((V327)))!=Cnil){
	goto T615;}
	if(!(eql((V332),small_fixnum(2)))){
	goto T618;}
	base[5]= STREF(object,(V326),0);
	base[6]= STREF(object,(V326),4);
	base[7]= STREF(object,(V326),8);
	base[8]= CMPcar((V327));
	base[9]= CMPcadr((V327));
	vs_top=(vs_base=base+6)+4;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T618;
T618:;
	base[5]= VV[147];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	return;
	goto T615;
T615:;
	base[5]= STREF(object,(V326),0);
	base[6]= STREF(object,(V326),4);
	base[7]= STREF(object,(V326),8);
	{object V337;
	V337= (V327);
	 vs_top=base+8;
	 while(V337!=Cnil)
	 {vs_push((V337)->c.c_car);V337=(V337)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T575;
T575:;
	base[2]= (V329);
	base[3]= VV[99];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk406)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T631;}
	base[2]= STREF(object,(V326),0);
	base[3]= (V327);
	{object V338;
	V338= STREF(object,(V326),4);
	 vs_top=base+4;
	 while(V338!=Cnil)
	 {vs_push((V338)->c.c_car);V338=(V338)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T631;
T631:;
	if(!(type_of((V329))==t_fixnum)){
	goto T639;}
	if(((V327))!=Cnil){
	goto T642;}
	base[2]= VV[148];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	return;
	goto T642;
T642:;
	if((CMPcdr((V327)))!=Cnil){
	goto T646;}
	{object V339;
	{object V341;
	V341= CMPcar((V327));
	if(type_of((V341))==t_structure){
	goto T654;}
	goto T651;
	goto T654;
T654:;
	if(!((((V341))->str.str_def)==(VV[149]))){
	goto T651;}}
	V340= STREF(object,CMPcar((V327)),4);
	goto T649;
	goto T651;
T651:;{object V342;
	V342= (VV[151]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= CMPcar((V327));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V343= vs_base[0];
	if(!((V342)==(CMPcar(V343)))){
	goto T657;}}
	V340= CMPcar((CMPcar((V327)))->cc.cc_turbo[12]);
	goto T649;
	goto T657;
T657:;
	base[2]= VV[152];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V340= vs_base[0];
	goto T649;
T649:;
	V339= (V340)->v.v_self[fix((V326))];
	if(!(((V339))==((VV[136]->s.s_dbind)))){
	goto T664;}
	base[2]= CMPcar((V327));
	base[3]= (V326);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk137)();
	return;
	goto T664;
T664:;
	base[2]= (V339);
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T646;
T646:;
	if((CMPcddr((V327)))!=Cnil){
	goto T669;}
	{object V345;
	V345= CMPcadr((V327));
	if(type_of((V345))==t_structure){
	goto T676;}
	goto T673;
	goto T676;
T676:;
	if(!((((V345))->str.str_def)==(VV[153]))){
	goto T673;}}
	V344= STREF(object,CMPcadr((V327)),4);
	goto T671;
	goto T673;
T673:;{object V346;
	V346= (VV[151]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= CMPcadr((V327));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V347= vs_base[0];
	if(!((V346)==(CMPcar(V347)))){
	goto T679;}}
	V344= CMPcar((CMPcadr((V327)))->cc.cc_turbo[12]);
	goto T671;
	goto T679;
T679:;
	base[2]= VV[152];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V344= vs_base[0];
	goto T671;
T671:;
	base[2]= (V344)->v.v_self[fix((V326))]= (CMPcar((V327)));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T669;
T669:;
	base[2]= VV[154];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	return;
	goto T639;
T639:;
	base[2]= (V329);
	base[3]= VV[113];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk406)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T687;}
	if(((V327))==Cnil){
	goto T691;}
	if((CMPcdr((V327)))==Cnil){
	goto T692;}
	goto T691;
T691:;
	base[2]= VV[155];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	return;
	goto T692;
T692:;
	{object V349;
	V349= CMPcar((V327));
	if(type_of((V349))==t_structure){
	goto T702;}
	goto T699;
	goto T702;
T702:;
	if(!((((V349))->str.str_def)==(VV[156]))){
	goto T699;}}
	V348= STREF(object,CMPcar((V327)),4);
	goto T697;
	goto T699;
T699:;{object V350;
	V350= (VV[151]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= CMPcar((V327));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V351= vs_base[0];
	if(!((V350)==(CMPcar(V351)))){
	goto T705;}}
	V348= CMPcar((CMPcar((V327)))->cc.cc_turbo[12]);
	goto T697;
	goto T705;
T705:;
	base[2]= VV[152];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V348= vs_base[0];
	goto T697;
T697:;
	base[2]= (((((V348)->v.v_self[(long)STREF(fixnum,(V326),0)])==((VV[136]->s.s_dbind))?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T687;
T687:;
	base[2]= (V329);
	vs_top=(vs_base=base+2)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T712;}
	base[2]= (V326);
	{object V352;
	V352= (V327);
	 vs_top=base+3;
	 while(V352!=Cnil)
	 {vs_push((V352)->c.c_car);V352=(V352)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T712;
T712:;
	base[2]= VV[157];
	base[3]= VV[158];
	base[4]= VV[159];
	base[5]= VV[160];
	base[6]= V326;
	base[7]= VV[161];
	base[8]= VV[162];
	base[9]= VV[163];
	base[10]= VV[164];
	vs_top=(vs_base=base+2)+9;
	(void) (*Lnk409)();
	return;}
	}
}
/*	macro definition for BIND-FAST-LEXICAL-METHOD-MACROS	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V353=base[0]->c.c_cdr;
	if(endp(V353))invalid_macro_call();
	{object V354= (V353->c.c_car);
	if(endp(V354))invalid_macro_call();
	base[2]= (V354->c.c_car);
	V354=V354->c.c_cdr;
	if(endp(V354))invalid_macro_call();
	base[3]= (V354->c.c_car);
	V354=V354->c.c_cdr;
	if(endp(V354))invalid_macro_call();
	base[4]= (V354->c.c_car);
	V354=V354->c.c_cdr;
	if(!endp(V354))invalid_macro_call();}
	V353=V353->c.c_cdr;
	base[5]= V353;}
	V355= list(2,VV[1],base[4]);
	V356= listA(3,VV[168],list(2,VV[169],list(2,VV[1],base[3])),VV[170]);
	V357= listA(4,VV[36],VV[171],list(2,VV[1],base[4]),VV[172]);
	V358= list(2,VV[1],base[4]);
	V359= list(2,VV[1],((((base[3])==Cnil?Ct:Cnil))==Cnil?Ct:Cnil));
	V360= list(2,VV[1],base[2]);
	if((base[3])==Cnil){
	goto T728;}
	V361= make_cons(base[3],Cnil);
	goto T726;
	goto T728;
T728:;
	V361= Cnil;
	goto T726;
T726:;
	V362= list(2,VV[173],list(5,VV[36],VV[174],/* INLINE-ARGS */V358,/* INLINE-ARGS */V359,list(3,VV[175],/* INLINE-ARGS */V360,list(2,VV[1],V361))));
	V363= make_cons(/* INLINE-ARGS */V362,Cnil);
	V364= list(2,VV[1],base[2]);
	if((base[3])==Cnil){
	goto T732;}
	V365= list(2,VV[178],base[3]);
	goto T730;
	goto T732;
T732:;
	V365= Cnil;
	goto T730;
T730:;
	V366= list(4,VV[134],/* INLINE-ARGS */V356,/* INLINE-ARGS */V357,list(3,VV[100],/* INLINE-ARGS */V363,list(5,VV[47],VV[176],VV[93],list(4,VV[47],VV[177],list(3,VV[47],list(3,VV[175],/* INLINE-ARGS */V364,list(2,VV[1],V365)),VV[93]),VV[173]),VV[173])));
	V367= listA(3,VV[168],list(2,VV[169],list(2,VV[1],base[3])),VV[179]);
	V368= list(2,VV[1],base[2]);
	if((base[3])==Cnil){
	goto T736;}
	V369= make_cons(base[3],Cnil);
	goto T734;
	goto T736;
T736:;
	V369= Cnil;
	goto T734;
T734:;
	V370= list(3,VV[86],VV[166],list(5,VV[47],VV[167],/* INLINE-ARGS */V355,/* INLINE-ARGS */V366,list(4,VV[134],/* INLINE-ARGS */V367,VV[180],list(4,VV[36],VV[181],VV[182],list(3,VV[175],/* INLINE-ARGS */V368,list(2,VV[1],V369))))));
	base[6]= listA(3,VV[77],list(3,VV[165],/* INLINE-ARGS */V370,list(3,VV[183],Cnil,list(3,VV[47],VV[184],list(3,VV[47],VV[185],list(2,VV[1],base[4]))))),base[5]);
	vs_top=(vs_base=base+6)+1;
	return;
}
/*	macro definition for BIND-LEXICAL-METHOD-FUNCTIONS	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V371=base[0]->c.c_cdr;
	if(endp(V371))invalid_macro_call();
	{object V372= (V371->c.c_car);
	{object V373=getf(V372,VV[70],OBJNULL);
	if(V373==OBJNULL){
	base[2]= Cnil;} else {
	base[2]= V373;
	}}
	check_other_key(V372,1,VV[70]);}
	V371=V371->c.c_cdr;
	base[3]= V371;}
	base[4]= list(2,VV[78],listA(3,VV[186],list(2,list(3,VV[187],VV[188],list(3,VV[86],base[2],VV[93])),VV[189]),base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for BIND-ARGS	*/

static void L40()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V374=base[0]->c.c_cdr;
	if(endp(V374))invalid_macro_call();
	{object V375= (V374->c.c_car);
	if(endp(V375))invalid_macro_call();
	base[2]= (V375->c.c_car);
	V375=V375->c.c_cdr;
	if(endp(V375))invalid_macro_call();
	base[3]= (V375->c.c_car);
	V375=V375->c.c_cdr;
	if(!endp(V375))invalid_macro_call();}
	V374=V374->c.c_cdr;
	base[4]= V374;}
	base[5]= VV[190];
	base[6]= VV[191];
	base[7]= VV[192];
	{object V376;
	{object V377;
	object V378= base[2];
	if(V378==Cnil){
	V376= Cnil;
	goto T739;}
	base[8]=V377=MMcons(Cnil,Cnil);
	goto T740;
T740:;
	base[9]= (V378->c.c_car);
	vs_top=(vs_base=base+9)+1;
	L41(base);
	vs_top=sup;
	(V377->c.c_cdr)= vs_base[0];
	while(MMcdr(V377)!=Cnil)V377=MMcdr(V377);
	if((V378=MMcdr(V378))==Cnil){
	base[8]=base[8]->c.c_cdr;
	V376= base[8];
	goto T739;}
	goto T740;}
	goto T739;
T739:;
	V379= list(2,base[5],base[3]);
	V380= make_cons(/* INLINE-ARGS */V379,(V376));
	base[8]= listA(4,VV[129],/* INLINE-ARGS */V380,list(2,VV[49],list(2,VV[55],base[5])),base[4]);
	vs_top=(vs_base=base+8)+1;
	return;}
}
/*	function definition for GET-KEY-ARG-TAIL	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	{register object V381;
	register object V382;
	check_arg(2);
	V381=(base[0]);
	V382=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V383;
	register object V384;
	register object V385;
	V383= (V382);
	V384= Cnil;
	V385= Cnil;
	goto T744;
T744:;
	if(!(type_of((V383))!=t_cons)){
	goto T746;}
	goto T745;
	goto T746;
T746:;
	{register object V386;
	V386= (V383);
	V384= CMPcar((V386));
	V386= CMPcdr((V386));
	V385= (V386);}
	V383= CMPcddr((V383));
	if(((V385))!=Cnil){
	goto T757;}
	base[2]= VV[8];
	base[3]= VV[202];
	base[4]= (V382);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk364)();
	vs_top=sup;
	goto T757;
T757:;
	if(!(((V384))==((V381)))){
	goto T763;}
	base[2]= (V385);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T763;
T763:;
	goto T744;
	goto T745;
T745:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for WALK-METHOD-LAMBDA	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	{object V387;
	object V388;
	check_arg(5);
	V387=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	V388=(base[2]);
	base[3]=MMcons(base[3],base[1]);
	base[4]=MMcons(base[4],base[3]);
	vs_top=sup;
	base[5]=make_cclosure_new(LC44,Cnil,base[4],Cdata);
	base[5]=MMcons(base[5],base[4]);
	base[6]= (V387);
	base[7]= (V388);
	base[8]= (base[5]->c.c_car);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk410)();
	return;
	}
}
/*	function definition for GENERIC-FUNCTION-NAME-P	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	{register object V389;
	check_arg(1);
	V389=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V389))==t_symbol)){
	goto T771;}
	goto T769;
	goto T771;
T771:;
	if(type_of((V389))==t_cons){
	goto T773;}
	goto T770;
	goto T773;
T773:;
	if((CMPcar((V389)))==(VV[34])){
	goto T775;}
	goto T770;
	goto T775;
T775:;
	if(type_of(CMPcdr((V389)))==t_cons){
	goto T777;}
	goto T770;
	goto T777;
T777:;
	if(type_of(CMPcadr((V389)))==t_symbol){
	goto T779;}
	goto T770;
	goto T779;
T779:;
	if((CMPcddr((V389)))==Cnil){
	goto T769;}
	goto T770;
T770:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T769;
T769:;
	if(((*(LnkLI371))((V389)))!=Cnil){
	goto T781;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T781;
T781:;
	if(!(((VV[21]->s.s_dbind))==(VV[22]))){
	goto T784;}
	base[1]= (*(LnkLI362))((V389));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk411)(Lclptr411);
	return;
	goto T784;
T784:;{object V390;
	V390= (VV[151]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (*(LnkLI362))((V389));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V391= vs_base[0];
	base[1]= ((V390)==(CMPcar(V391))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local entry for function METHOD-FUNCTION-PLIST	*/

static object LI46(V393)

register object V393;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	if(((V393))==((VV[211]->s.s_dbind))){
	goto T790;}
	{object V394;
	object V395;
	V394= (VV[212]->s.s_dbind);
	V395= (VV[211]->s.s_dbind);
	(VV[211]->s.s_dbind)= (V394);
	(VV[212]->s.s_dbind)= (V395);}
	{object V396;
	object V397;
	V396= (VV[213]->s.s_dbind);
	V397= (VV[214]->s.s_dbind);
	(VV[214]->s.s_dbind)= (V396);
	(VV[213]->s.s_dbind)= (V397);}
	{object V398;
	object V399;
	V398= (VV[215]->s.s_dbind);
	V399= (VV[216]->s.s_dbind);
	(VV[216]->s.s_dbind)= (V398);
	(VV[215]->s.s_dbind)= (V399);}
	goto T790;
T790:;
	if(((V393))==((VV[211]->s.s_dbind))){
	goto T813;}
	if(((VV[216]->s.s_dbind))==Cnil){
	goto T813;}
	{object V400;
	object V401;
	object V402;
	V400= (VV[211]->s.s_dbind);
	V401= (VV[217]->s.s_dbind);
	V402= (VV[214]->s.s_dbind);
	base[0]= (V400);
	base[1]= (V401);
	base[2]= (V402);
	vs_top=(vs_base=base+0)+3;
	siLhash_set();
	vs_top=sup;}
	goto T813;
T813:;
	if(((V393))==((VV[211]->s.s_dbind))){
	goto T824;}
	(VV[211]->s.s_dbind)= (V393);
	(VV[216]->s.s_dbind)= Cnil;
	base[0]= (V393);
	base[1]= (VV[217]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	(VV[214]->s.s_dbind)= vs_base[0];
	goto T824;
T824:;
	{object V403 = (VV[214]->s.s_dbind);
	VMR40(V403)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for G4122	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_check;
	{object V404;
	object V405;
	check_arg(2);
	V404=(base[0]);
	V405=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V405))==((VV[211]->s.s_dbind))){
	goto T834;}
	{object V406;
	object V407;
	V406= (VV[212]->s.s_dbind);
	V407= (VV[211]->s.s_dbind);
	(VV[211]->s.s_dbind)= (V406);
	(VV[212]->s.s_dbind)= (V407);}
	{object V408;
	object V409;
	V408= (VV[215]->s.s_dbind);
	V409= (VV[216]->s.s_dbind);
	(VV[216]->s.s_dbind)= (V408);
	(VV[215]->s.s_dbind)= (V409);}
	{object V410;
	object V411;
	V410= (VV[213]->s.s_dbind);
	V411= (VV[214]->s.s_dbind);
	(VV[214]->s.s_dbind)= (V410);
	(VV[213]->s.s_dbind)= (V411);}
	goto T834;
T834:;
	if(((V405))==((VV[211]->s.s_dbind))){
	goto T857;}
	if(((VV[216]->s.s_dbind))==Cnil){
	goto T857;}
	{object V412;
	object V413;
	object V414;
	V412= (VV[211]->s.s_dbind);
	V413= (VV[217]->s.s_dbind);
	V414= (VV[214]->s.s_dbind);
	base[2]= (V412);
	base[3]= (V413);
	base[4]= (V414);
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	vs_top=sup;}
	goto T857;
T857:;
	(VV[211]->s.s_dbind)= (V405);
	(VV[216]->s.s_dbind)= Ct;
	(VV[214]->s.s_dbind)= (V404);
	base[2]= (VV[214]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local entry for function METHOD-FUNCTION-GET	*/

static object LI48(object V416,object V415,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB42 VMS42 VMV42
	{object V417;
	object V418;
	object V419;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V417= V416;
	V418= V415;
	narg = narg - 2;
	if (narg <= 0) goto T873;
	else {
	V419= first;}
	--narg; goto T874;
	goto T873;
T873:;
	V419= Cnil;
	goto T874;
T874:;
	base[0]= (*(LnkLI412))((V417));
	base[1]= (V418);
	base[2]= (V419);
	vs_top=(vs_base=base+0)+3;
	Lgetf();
	vs_top=sup;
	{object V420 = vs_base[0];
	VMR42(V420)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for G4132	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{object V421;
	object V422;
	object V423;
	check_arg(3);
	V421=(base[0]);
	V422=(base[1]);
	V423=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V427;
	base[3]= (*(LnkLI412))(V422);
	base[4]= V421;
	base[5]= V423;
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V427= vs_base[0];
	V428= ({object _tmp=get(VV[412],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[412])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[412])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V429 = V428,
	(type_of(V429) == t_sfun ?(*((V429)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V429)==t_vfun) ?
	(*((V429)->sfn.sfn_self)):
	(fcall.fun=(V429),fcalln))((V427),V422)));
	base[3]= V421;
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local entry for function METHOD-FUNCTION-PV-TABLE	*/

static object LI50(V431)

object V431;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	{object V432 = (VFUN_NARGS=2,(*(LnkLI220))((V431),VV[218]));
	VMR44(V432)}
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-METHOD	*/

static object LI51(V434)

object V434;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	{object V435 = (VFUN_NARGS=2,(*(LnkLI220))((V434),VV[219]));
	VMR45(V435)}
	return Cnil;
}
/*	macro definition for METHOD-FUNCTION-CLOSURE-GENERATOR	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V436=base[0]->c.c_cdr;
	if(endp(V436))invalid_macro_call();
	base[2]= (V436->c.c_car);
	V436=V436->c.c_cdr;
	if(!endp(V436))invalid_macro_call();}
	base[3]= list(3,VV[220],base[2],VV[221]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function LOAD-DEFMETHOD	*/

static object LI53(object V442,object V441,object V440,object V439,object V438,object V437,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB47 VMS47 VMV47
	{object V443;
	object V444;
	object V445;
	object V446;
	object V447;
	register object V448;
	object V449;
	va_start(ap,first);
	if(narg <6) too_few_arguments();
	V443= V442;
	V444= V441;
	V445= V440;
	V446= V439;
	V447= V438;
	V448= V437;
	narg = narg - 6;
	if (narg <= 0) goto T885;
	else {
	V449= first;}
	--narg; goto T886;
	goto T885;
T885:;
	V449= Cnil;
	goto T886;
T886:;
	base[0]= (V448);
	vs_top=(vs_base=base+0)+1;
	Lcopy_tree();
	vs_top=sup;
	V448= vs_base[0];
	{object V450;{object V451;
	base[0]= (V448);
	base[1]= VV[222];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V451= vs_base[0];
	if(V451==Cnil)goto T892;
	V450= V451;
	goto T891;
	goto T892;
T892:;}
	V450= (*(LnkLI413))((V444),(V445),(V446));
	goto T891;
T891:;
	{object V454;
	base[0]= (V448);
	base[1]= V450;
	base[2]= VV[222];
	vs_top=(vs_base=base+0)+3;
	siLput_f();
	vs_top=sup;
	V454= vs_base[0];
	V448= (V454);}
	{object V455 = (*(LnkLI414))((V443),(V444),(V445),(V446),(V447),(V448),(V449));
	VMR47(V455)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LOAD-DEFMETHOD-INTERNAL	*/

static object LI54(V463,V464,V465,V466,V467,V468,V469)

object V463;object V464;object V465;object V466;object V467;register object V468;object V469;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	if(((V469))==Cnil){
	goto T903;}
	{object V473;
	base[1]= (V468);
	base[2]= VV[32];
	base[3]= Cnil;
	vs_top=(vs_base=base+1)+3;
	Lgetf();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= V469;
	base[2]= VV[33];
	vs_top=(vs_base=base+0)+3;
	siLput_f();
	vs_top=sup;
	V473= vs_base[0];
	{object V474;
	base[0]= (V468);
	base[1]= (V473);
	base[2]= VV[32];
	vs_top=(vs_base=base+0)+3;
	siLput_f();
	vs_top=sup;
	V474= vs_base[0];
	V468= (V474);}}
	goto T903;
T903:;
	{object V475;
	base[0]=VV[415]->s.s_gfdef;
	base[1]= (V464);
	base[2]= (V465);
	base[3]= (V466);
	base[4]= (V467);
	base[5]= VV[20];
	V477= make_cons((V466),Cnil);
	V478= listA(3,VV[7],(V464),append((V465),/* INLINE-ARGS */V477));
	vs_base=vs_top;
	(void) (*Lnk366)();
	vs_top=sup;
	V479= vs_base[0];
	base[6]= list(2,/* INLINE-ARGS */V478,V479);
	{object V476;
	V476= (V468);
	 vs_top=base+7;
	 while(V476!=Cnil)
	 {vs_push((V476)->c.c_car);V476=(V476)->c.c_cdr;}
	vs_base=base+1;}
	funcall(base[0]);
	vs_top=sup;
	V475= vs_base[0];
	if(((V463))==(VV[24])){
	goto T929;}
	V480= (VFUN_NARGS=2,(*(LnkLI304))((V463),Cnil));
	V481= (*(LnkLI378))((V475));
	if((/* INLINE-ARGS */V480)==(/* INLINE-ARGS */V481)){
	goto T929;}
	base[0]= (VV[223]->s.s_dbind);
	base[1]= VV[224];
	base[2]= (V465);
	base[3]= (V466);
	base[4]= (V464);
	base[5]= (V463);
	base[7]= (*(LnkLI378))((V475));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk379)(Lclptr379);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+0)+7;
	Lformat();
	vs_top=sup;
	goto T929;
T929:;
	{object V482 = (V475);
	VMR48(V482)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-METHOD-SPEC	*/

static object LI55(V486,V487,V488)

object V486;object V487;object V488;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	V489= make_cons((V488),Cnil);
	{object V490 = listA(3,VV[40],(V486),append((V487),/* INLINE-ARGS */V489));
	VMR49(V490)}
	return Cnil;
}
/*	local entry for function INITIALIZE-METHOD-FUNCTION	*/

static object LI56(object V491,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB50 VMS50 VMV50
	{object V492;
	object V493;
	object V494;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V492= V491;
	narg = narg - 1;
	if (narg <= 0) goto T942;
	else {
	V493= first;}
	if (--narg <= 0) goto T943;
	else {
	V494= va_arg(ap,object);}
	--narg; goto T944;
	goto T942;
T942:;
	V493= Cnil;
	goto T943;
T943:;
	V494= Cnil;
	goto T944;
T944:;
	{register object V495;
	register object V496;
	object V497;
	object V498;
	base[5]= (V492);
	base[6]= VV[39];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	base[0]= vs_base[0];
	base[5]= (V492);
	base[6]= VV[222];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V495= vs_base[0];
	base[5]= (V492);
	base[6]= VV[32];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V496= vs_base[0];
	base[5]= (V496);
	base[6]= VV[33];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V497= vs_base[0];
	V498= Cnil;
	base[5]= (V492);
	base[6]= VV[225];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	base[4]= vs_base[0];
	if(((V495))==Cnil){
	goto T963;}
	if((base[0])==Cnil){
	goto T966;}
	base[5]= base[0];
	base[6]= (V495);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk361)();
	vs_top=sup;
	base[0]= vs_base[0];
	goto T966;
T966:;
	if((base[4])==Cnil){
	goto T963;}
	{object V499;{object V501;
	{object V502 =(CMPcar((V495)))->s.s_plist;
	 object ind= VV[226];
	while(V502!=Cnil){
	if(V502->c.c_car==ind){
	V501= (V502->c.c_cdr->c.c_car);
	goto T977;
	}else V502=V502->c.c_cdr->c.c_cdr;}
	V501= Cnil;}
	goto T977;
T977:;
	if(V501==Cnil)goto T976;
	V500= V501;
	goto T975;
	goto T976;
T976:;}
	V503= CMPcar((V495));
	base[6]= Cnil;
	base[7]= VV[227];
	base[8]= CMPcar((V495));
	vs_top=(vs_base=base+6)+3;
	Lformat();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (VV[228]->s.s_dbind);
	vs_top=(vs_base=base+5)+2;
	Lintern();
	vs_top=sup;
	V504= vs_base[0];
	V500= sputprop(/* INLINE-ARGS */V503,VV[226],V504);
	goto T975;
T975:;
	V499= make_cons(V500,CMPcdr((V495)));
	base[5]= base[4];
	base[6]= (V499);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk361)();
	vs_top=sup;
	if((base[0])!=Cnil){
	goto T963;}
	base[5]= VV[158];
	base[6]= (V499);
	vs_top=(vs_base=base+5)+2;
	L57(base);
	vs_top=sup;}
	goto T963;
T963:;
	if(((V496))==Cnil){
	goto T992;}
	{object V505;
	object V506;
	base[5]= (V496);
	base[6]= VV[60];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V505= vs_base[0];
	base[5]= (V496);
	base[6]= VV[61];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V506= vs_base[0];
	if(((V505))!=Cnil){
	goto T1001;}
	if(((V506))==Cnil){
	goto T994;}
	goto T1001;
T1001:;
	V498= (VFUN_NARGS=4,(*(LnkLI416))(VV[60],(V505),VV[61],(V506)));
	if(((V498))==Cnil){
	goto T1007;}
	base[5]= (V497);
	base[6]= (V498);
	vs_top=(vs_base=base+5)+2;
	Lset();
	vs_top=sup;
	goto T1007;
T1007:;
	base[5]= VV[218];
	base[6]= (V498);
	vs_top=(vs_base=base+5)+2;
	L57(base);
	vs_top=sup;}
	goto T994;
T994:;
	goto T1016;
T1016:;
	if(((V496))!=Cnil){
	goto T1018;}
	goto T1014;
	goto T1018;
T1018:;
	{register object V507;
	V507= CMPcar((V496));
	V496= CMPcdr((V496));
	base[5]= (V507);}
	{register object V508;
	V508= CMPcar((V496));
	V496= CMPcdr((V496));
	base[6]= (V508);}
	vs_top=(vs_base=base+5)+2;
	L57(base);
	vs_top=sup;
	goto T1016;
	goto T1014;
T1014:;
	if(((V494))==Cnil){
	goto T1030;}
	base[5]= VV[219];
	base[6]= (V494);
	vs_top=(vs_base=base+5)+2;
	L57(base);
	vs_top=sup;
	goto T1030;
T1030:;
	if(((V493))==Cnil){
	goto T1036;}
	if(base[0]!=Cnil){
	{object V509 = base[0];
	VMR50(V509)}}
	{object V510 = (*(LnkLI417))(base[4]);
	VMR50(V510)}
	goto T1036;
T1036:;
	{object V511 = Cnil;
	VMR50(V511)}
	goto T992;
T992:;
	{object V512 = Cnil;
	VMR50(V512)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for ANALYZE-LAMBDA-LIST	*/

static void L58()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_check;
	{object V513;
	check_arg(1);
	V513=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V514;
	object V515;
	object V516;
	object V517;
	object V518;
	object V519;
	object V520;
	register object V521;
	V514= small_fixnum(0);
	V515= small_fixnum(0);
	V516= Cnil;
	V517= Cnil;
	V518= Cnil;
	V519= Cnil;
	V520= Cnil;
	V521= VV[192];
	{register object V522;
	register object V523;
	V522= (V513);
	V523= CMPcar((V522));
	goto T1042;
T1042:;
	if(!(((V522))==Cnil)){
	goto T1043;}
	goto T1038;
	goto T1043;
T1043:;
	{register object x= (V523),V524= VV[193];
	while(V524!=Cnil)
	if(x==(V524->c.c_car)){
	goto T1050;
	}else V524=V524->c.c_cdr;
	goto T1049;}
	goto T1050;
T1050:;
	{object V525= (V523);
	if((V525!= VV[418]))goto T1051;
	V521= VV[194];
	goto T1047;
	goto T1051;
T1051:;
	if((V525!= VV[63]))goto T1053;
	V516= Ct;
	V521= VV[195];
	goto T1047;
	goto T1053;
T1053:;
	if((V525!= VV[64]))goto T1057;
	V518= Ct;
	goto T1047;
	goto T1057;
T1057:;
	if((V525!= VV[178]))goto T1059;
	V517= Ct;
	V521= VV[196];
	goto T1047;
	goto T1059;
T1059:;
	if((V525!= VV[65]))goto T1063;
	goto T1038;
	goto T1063;
T1063:;
	base[2]= VV[229];
	base[3]= (V523);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	vs_top=sup;
	goto T1047;}
	goto T1049;
T1049:;
	{object V527= V521;
	if((V527!= VV[192]))goto T1066;
	V514= number_plus((V514),small_fixnum(1));
	goto T1047;
	goto T1066;
T1066:;
	if((V527!= VV[194]))goto T1068;
	V515= number_plus((V515),small_fixnum(1));
	goto T1047;
	goto T1068;
T1068:;
	if((V527!= VV[195]))goto T1070;
	{object V528;
	base[3]= (V523);
	vs_top=(vs_base=base+3)+1;
	L59(base);
	vs_top=sup;
	V528= vs_base[0];
	V519= make_cons((V528),(V519));}
	V520= make_cons(V523,(V520));
	goto T1047;
	goto T1070;
T1070:;
	if((V527!= VV[196]))goto T1076;
	goto T1047;
	goto T1076;
T1076:;
	base[2]= VV[157];
	base[3]= VV[158];
	base[4]= VV[207];
	base[5]= VV[160];
	base[6]= V521;
	base[7]= VV[161];
	base[8]= VV[232];
	base[9]= VV[163];
	base[10]= VV[233];
	vs_top=(vs_base=base+2)+9;
	(void) (*Lnk409)();
	vs_top=sup;}
	goto T1047;
T1047:;
	V522= CMPcdr((V522));
	V523= CMPcar((V522));
	goto T1042;}
	goto T1038;
T1038:;
	base[1]= (V514);
	base[2]= (V515);
	base[3]= (V516);
	base[4]= (V517);
	base[5]= (V518);
	base[6]= reverse((V519));
	base[7]= reverse((V520));
	vs_top=(vs_base=base+1)+7;
	return;}
	}
}
/*	local entry for function KEYWORD-SPEC-NAME	*/

static object LI60(V531)

object V531;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	{object V532;
	if(!(type_of((V531))!=t_cons)){
	goto T1100;}
	V532= (V531);
	goto T1098;
	goto T1100;
T1100:;
	V532= CMPcar((V531));
	goto T1098;
T1098:;
	if(!(type_of((V532))!=t_cons)){
	goto T1103;}
	base[0]= symbol_name((V532));
	base[2]= VV[234];
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V533 = vs_base[0];
	VMR52(V533)}
	goto T1103;
T1103:;
	{object V534 = CMPcar((V532));
	VMR52(V534)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FTYPE-DECLARATION-FROM-LAMBDA-LIST	*/

static object LI61(V536)

object V536;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	{object V537;
	object V538;
	object V539;
	object V540;
	object V541;
	object V542;
	object V543;
	base[0]= (V536);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk419)();
	if(vs_base>=vs_top){vs_top=sup;goto T1110;}
	V537= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1111;}
	V538= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1112;}
	V539= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1113;}
	V540= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1114;}
	V541= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1115;}
	V542= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1116;}
	V543= vs_base[0];
	vs_top=sup;
	goto T1117;
	goto T1110;
T1110:;
	V537= Cnil;
	goto T1111;
T1111:;
	V538= Cnil;
	goto T1112;
T1112:;
	V539= Cnil;
	goto T1113;
T1113:;
	V540= Cnil;
	goto T1114;
T1114:;
	V541= Cnil;
	goto T1115;
T1115:;
	V542= Cnil;
	goto T1116;
T1116:;
	V543= Cnil;
	goto T1117;
T1117:;
	{object V544;
	{object V545;
	object V546= (V542);
	if(V546==Cnil){
	V544= Cnil;
	goto T1118;}
	base[1]=V545=MMcons(Cnil,Cnil);
	goto T1119;
T1119:;
	(V545->c.c_car)= (*(LnkLI420))((V546->c.c_car));
	if((V546=MMcdr(V546))==Cnil){
	V544= base[1];
	goto T1118;}
	V545=MMcdr(V545)=MMcons(Cnil,Cnil);
	goto T1119;}
	goto T1118;
T1118:;
	base[2]= (V537);
	base[3]= VV[235];
	base[4]= Ct;
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	base[1]= vs_base[0];
	if(!(number_compare(small_fixnum(0),(V538))<0)){
	goto T1128;}
	base[3]= (V538);
	base[4]= VV[235];
	base[5]= Ct;
	vs_top=(vs_base=base+3)+3;
	Lmake_list();
	vs_top=sup;
	V548= vs_base[0];
	base[2]= append(VV[236],V548);
	goto T1126;
	goto T1128;
T1128:;
	base[2]= Cnil;
	goto T1126;
T1126:;
	if(((V540))==Cnil){
	goto T1136;}
	base[3]= VV[237];
	goto T1134;
	goto T1136;
T1136:;
	base[3]= Cnil;
	goto T1134;
T1134:;
	if(((V539))==Cnil){
	goto T1140;}
	base[5]= VV[238];
	{object V549;
	object V550= (V544);
	if(V550==Cnil){
	base[6]= Cnil;
	goto T1143;}
	base[7]=V549=MMcons(Cnil,Cnil);
	goto T1144;
T1144:;
	(V549->c.c_car)= list(2,(V550->c.c_car),Ct);
	if((V550=MMcdr(V550))==Cnil){
	base[6]= base[7];
	goto T1143;}
	V549=MMcdr(V549)=MMcons(Cnil,Cnil);
	goto T1144;}
	goto T1143;
T1143:;
	if(((V541))==Cnil){
	goto T1148;}
	base[7]= VV[239];
	goto T1146;
	goto T1148;
T1148:;
	base[7]= Cnil;
	goto T1146;
T1146:;
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	base[4]= vs_base[0];
	goto T1138;
	goto T1140;
T1140:;
	base[4]= Cnil;
	goto T1138;
T1138:;
	vs_top=(vs_base=base+1)+4;
	Lappend();
	vs_top=sup;
	V547= vs_base[0];
	{object V552 = list(3,VV[18],V547,VV[240]);
	VMR53(V552)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PROCLAIM-DEFGENERIC	*/

static object LI62(V555,V556)

register object V555;object V556;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	if(!(type_of((V555))==t_cons)){
	goto T1150;}
	V555= (*(LnkLI421))(CMPcadr((V555)));
	goto T1150;
T1150:;
	if(!(type_of((V555))==t_symbol)){
	goto T1155;}
	{object V557 = sputprop((V555),VV[241],Ct);
	VMR54(V557)}
	goto T1155;
T1155:;
	{object V558 = Cnil;
	VMR54(V558)}
	return Cnil;
}
/*	function definition for ENSURE-GENERIC-FUNCTION	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM55; VC55
	vs_check;
	{register object V559;
	object V560;
	object V561;
	if(vs_top-vs_base<1) too_few_arguments();
	parse_key(vs_base+1,TRUE,TRUE,1,VV[309]);
	V559=(base[0]);
	vs_top=sup;
	V560=(base[1]);
	V561=(base[2]);
	{register object V562;
	if(((*(LnkLI371))((V559)))!=Cnil){
	goto T1158;}
	V562= Cnil;
	goto T1157;
	goto T1158;
T1158:;
	V562= (*(LnkLI362))((V559));
	goto T1157;
T1157:;
	if(((V562))==Cnil){
	goto T1160;}
	if(!(((VV[21]->s.s_dbind))==(VV[22]))){
	goto T1160;}
	base[4]= (V562);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk372)(Lclptr372);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1160;}
	(void)((*(LnkLI422))((V559)));
	V562= Cnil;
	goto T1160;
T1160:;
	base[4]=VV[423]->s.s_gfdef;
	base[5]= (V562);
	base[6]= (V559);
	{object V563;
	V563= (V560);
	 vs_top=base+7;
	 while(V563!=Cnil)
	 {vs_push((V563)->c.c_car);V563=(V563)->c.c_cdr;}
	vs_base=base+5;}
	funcall(base[4]);
	return;}
	}
}
/*	local entry for function GENERIC-CLOBBERS-FUNCTION	*/

static object LI65(V565)

object V565;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	base[0]=MMcons((V565),Cnil);
	base[2]= VV[8];
	base[3]= VV[242];
	base[4]= (base[0]->c.c_car);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk364)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[3]= Cnil;
	base[4]= VV[243];
	base[5]= 
	make_cclosure_new(LC126,Cnil,base[0],Cdata);
	base[7]= (base[0]->c.c_car);
	vs_top=(vs_base=base+7)+1;
	Lfmakunbound();
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk424)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk425)();
	vs_top=sup;
	{object V566 = vs_base[0];
	VMR56(V566)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-GF-P	*/

static object LI66(V568)

register object V568;
{	 VMB57 VMS57 VMV57
	goto TTL;
TTL:;{object V569;
	V569= (VV[151]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V568);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V570= vs_base[0];
	if((V569)==(CMPcar(V570))){
	goto T1183;}}
	{object V571 = Cnil;
	VMR57(V571)}
	goto T1183;
T1183:;
	if(type_of(V568)==t_structure){
	goto T1192;}
	goto T1190;
	goto T1192;
T1192:;
	if(!(((V568)->str.str_def)==(VV[245]))){
	goto T1190;}
	V572= STREF(object,(V568),4);
	goto T1188;
	goto T1190;
T1190:;{object V574;
	V574= (VV[151]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V568);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V575= vs_base[0];
	if(!((V574)==(CMPcar(V575)))){
	goto T1195;}}
	V572= CMPcar(((V568))->cc.cc_turbo[12]);
	goto T1188;
	goto T1195;
T1195:;
	base[0]= VV[152];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V572= vs_base[0];
	goto T1188;
T1188:;
	{object V576 = (((V572)->v.v_self[fix((VV[246]->s.s_dbind))])==((VV[136]->s.s_dbind))?Ct:Cnil);
	VMR57(V576)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for EARLY-GF-METHODS	*/

static void L67()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V577=base[0]->c.c_cdr;
	if(endp(V577))invalid_macro_call();
	base[2]= (V577->c.c_car);
	V577=V577->c.c_cdr;
	if(!endp(V577))invalid_macro_call();}
	base[3]= list(3,VV[247],list(2,VV[248],base[2]),VV[249]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for EARLY-GF-ARG-INFO	*/

static void L68()
{register object *base=vs_base;
	register object *sup=base+VM59; VC59
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V578=base[0]->c.c_cdr;
	if(endp(V578))invalid_macro_call();
	base[2]= (V578->c.c_car);
	V578=V578->c.c_cdr;
	if(!endp(V578))invalid_macro_call();}
	base[3]= list(3,VV[247],list(2,VV[248],base[2]),VV[250]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function __si::MAKE-ARG-INFO	*/

static object LI69(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB60 VMS60 VMV60
	{object V579;
	object V580;
	object V581;
	object V582;
	object V583;
	object V584;
	object V585;
	object V586;
	object V587;
	object V588;
	object V589;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI69key,first,ap);
	V579=(Vcs[0]);
	V580=(Vcs[1]);
	V581=(Vcs[2]);
	V582=(Vcs[3]);
	V583=(Vcs[4]);
	V584=(Vcs[5]);
	V585=(Vcs[6]);
	V586=(Vcs[7]);
	V587=(Vcs[8]);
	if(Vcs[9]==0){
	V588= Ct;
	}else{
	V588=(Vcs[9]);}
	V589=(Vcs[10]);
	base[0]= VV[252];
	base[1]= (V579);
	base[2]= (V580);
	base[3]= (V581);
	base[4]= (V582);
	base[5]= (V583);
	base[6]= (V584);
	base[7]= (V585);
	base[8]= (V586);
	base[9]= (V587);
	base[10]= (V588);
	base[11]= (V589);
	vs_top=(vs_base=base+0)+12;
	siLmake_structure();
	vs_top=sup;
	{object V590 = vs_base[0];
	VMR60(V590)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function MAKE-ARG-INFO	*/

static object LI70()

{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	base[0]= VV[252];
	base[1]= VV[251];
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
	{object V602 = vs_base[0];
	VMR61(V602)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ARG-INFO-VALID-P	*/

static object LI71(V604)

object V604;
{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	{object V605 = ((((STREF(object,(V604),12))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR62(V605)}
	return Cnil;
}
/*	local entry for function ARG-INFO-APPLYP	*/

static object LI72(V607)

object V607;
{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	if(!((fix(STREF(object,(V607),12)))>0)){
	goto T1226;}
	{object V608 = Ct;
	VMR63(V608)}
	goto T1226;
T1226:;
	{object V609 = STREF(object,(V607),16);
	VMR63(V609)}
	return Cnil;
}
/*	local entry for function ARG-INFO-NUMBER-REQUIRED	*/

static object LI73(V611)

object V611;
{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	{long V612 = (long)length(STREF(object,(V611),8));
	VMR64((object)V612)}
}
/*	local entry for function ARG-INFO-NKEYS	*/

static object LI74(V614)

object V614;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	base[0]= VV[437];
	base[1]= STREF(object,(V614),8);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk438)();
	vs_top=sup;
	{object V615 = vs_base[0];
	VMR65(V615)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for ESETF	*/

static void L75()
{register object *base=vs_base;
	register object *sup=base+VM66; VC66
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V616=base[0]->c.c_cdr;
	if(endp(V616))invalid_macro_call();
	base[2]= (V616->c.c_car);
	V616=V616->c.c_cdr;
	if(endp(V616))invalid_macro_call();
	base[3]= (V616->c.c_car);
	V616=V616->c.c_cdr;
	if(!endp(V616))invalid_macro_call();}
	{object V617;
	base[4]= VV[253];
	vs_top=(vs_base=base+4)+1;
	Lgensym();
	vs_top=sup;
	V617= vs_base[0];
	V618= list(2,(V617),base[3]);
	V619= make_cons(/* INLINE-ARGS */V618,Cnil);
	V620= list(3,VV[255],base[2],(V617));
	base[4]= list(3,VV[100],/* INLINE-ARGS */V619,list(3,VV[254],/* INLINE-ARGS */V620,list(3,VV[34],base[2],(V617))));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	local entry for function SET-ARG-INFO	*/

static object LI76(object V621,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB67 VMS67 VMV67
	{register object V622;
	object V623;
	register object V624;
	register object V625;
	object V626;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V622= V621;
	narg= narg - 1;
	{
	parse_key_new_new(narg,Vcs +1,(struct key *)(void *)&LI76key,first,ap);
	V623=(Vcs[1]);
	if(Vcs[2]==0){
	V624= Cnil;
	V625= Cnil;
	}else{
	V624=(Vcs[2]);
	V625= Ct;}
	V626=(Vcs[3]);
	{register object V627;
	object V628;
	object V629;
	object V630;
	if(!(((VV[21]->s.s_dbind))==(VV[22]))){
	goto T1235;}
	base[4]= (V622);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk439)(Lclptr439);
	vs_top=sup;
	V627= vs_base[0];
	goto T1233;
	goto T1235;
T1235:;
	if(type_of(V622)==t_structure){
	goto T1242;}
	goto T1240;
	goto T1242;
T1242:;
	if(!(((V622)->str.str_def)==(VV[256]))){
	goto T1240;}
	V631= STREF(object,(V622),4);
	goto T1238;
	goto T1240;
T1240:;{object V633;
	V633= (VV[151]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V622);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V634= vs_base[0];
	if(!((V633)==(CMPcar(V634)))){
	goto T1245;}}
	V631= CMPcar(((V622))->cc.cc_turbo[12]);
	goto T1238;
	goto T1245;
T1245:;
	base[4]= VV[152];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V631= vs_base[0];
	goto T1238;
T1238:;
	V627= (V631)->v.v_self[fix((VV[250]->s.s_dbind))];
	goto T1233;
T1233:;
	if(!(((VV[21]->s.s_dbind))==(VV[22]))){
	goto T1253;}
	base[4]= (V622);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk440)(Lclptr440);
	vs_top=sup;
	V628= vs_base[0];
	goto T1251;
	goto T1253;
T1253:;
	if(type_of(V622)==t_structure){
	goto T1260;}
	goto T1258;
	goto T1260;
T1260:;
	if(!(((V622)->str.str_def)==(VV[257]))){
	goto T1258;}
	V635= STREF(object,(V622),4);
	goto T1256;
	goto T1258;
T1258:;{object V637;
	V637= (VV[151]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V622);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V638= vs_base[0];
	if(!((V637)==(CMPcar(V638)))){
	goto T1263;}}
	V635= CMPcar(((V622))->cc.cc_turbo[12]);
	goto T1256;
	goto T1263;
T1263:;
	base[4]= VV[152];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V635= vs_base[0];
	goto T1256;
T1256:;
	V628= (V635)->v.v_self[fix((VV[249]->s.s_dbind))];
	goto T1251;
T1251:;
	{object V639= STREF(object,(V627),12);
	V629= (type_of(V639)==t_fixnum||type_of(V639)==t_bignum?Ct:Cnil);}
	if((V623)==Cnil){
	V630= Cnil;
	goto T1270;}
	V630= ((CMPcdr((V628)))==Cnil?Ct:Cnil);
	goto T1270;
T1270:;
	if(((V625))!=Cnil){
	goto T1271;}
	if(((V628))==Cnil){
	goto T1271;}
	V624= (*(LnkLI441))((V622));
	goto T1271;
T1271:;
	if(((V625))!=Cnil){
	goto T1278;}
	if(((V630))==Cnil){
	goto T1277;}
	if(!((STREF(object,(V627),0))==(VV[251]))){
	goto T1277;}
	goto T1278;
T1278:;
	{object V640;
	object V641;
	object V642;
	object V643;
	object V644;
	object V645;
	base[4]= (V624);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk419)();
	if(vs_base>=vs_top){vs_top=sup;goto T1286;}
	V640= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1287;}
	V641= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1288;}
	V642= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1289;}
	V643= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1290;}
	V644= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1291;}
	V645= vs_base[0];
	vs_top=sup;
	goto T1292;
	goto T1286;
T1286:;
	V640= Cnil;
	goto T1287;
T1287:;
	V641= Cnil;
	goto T1288;
T1288:;
	V642= Cnil;
	goto T1289;
T1289:;
	V643= Cnil;
	goto T1290;
T1290:;
	V644= Cnil;
	goto T1291;
T1291:;
	V645= Cnil;
	goto T1292;
T1292:;
	if(((V628))==Cnil){
	goto T1293;}
	if(((V630))!=Cnil){
	goto T1293;}
	{object V646;
	object V647;
	object V648;
	V646= CMPmake_fixnum((long)(*(LnkLI442))((V627)));
	V647= STREF(object,(V627),12);
	V648= STREF(object,(V627),16);
	if(!(number_compare((V640),(V646))==0)){
	goto T1301;}
	if(!(number_compare((V641),(V647))==0)){
	goto T1301;}
	if((V642)!=Cnil){
	V649= (V642);
	goto T1307;}
	V649= (V643);
	goto T1307;
T1307:;
	if((V649)==((V648))){
	goto T1293;}
	goto T1301;
T1301:;
	base[4]= VV[258];
	base[5]= (V624);
	base[6]= (V622);
	vs_top=(vs_base=base+4)+3;
	Lerror();
	vs_top=sup;}
	goto T1293;
T1293:;
	if(((V625))==Cnil){
	goto T1311;}
	if(equal(STREF(object,(V627),0),V624)){
	goto T1311;}
	V651= Ct;
	STSET(object,(V627),0, V624);
	(void)(V624);
	goto T1311;
T1311:;
	if(((V625))!=Cnil){
	goto T1317;}
	if(((V626))!=Cnil){
	goto T1317;}
	if((STREF(object,(V627),4))!=Cnil){
	goto T1316;}
	goto T1317;
T1317:;
	{object V652;
	V652= (*(LnkLI443))((V624),(V640),(V626));
	if(equal(STREF(object,(V627),4),(V652))){
	goto T1316;}
	V653= Ct;
	STSET(object,(V627),4, (V652));
	(void)((V652));}
	goto T1316;
T1316:;
	{object V654;
	base[4]= (V640);
	vs_top=(vs_base=base+4)+1;
	Lmake_list();
	vs_top=sup;
	V654= vs_base[0];
	if(equal(STREF(object,(V627),8),(V654))){
	goto T1326;}
	V655= Ct;
	STSET(object,(V627),8, (V654));
	(void)((V654));}
	goto T1326;
T1326:;
	if(equal(STREF(object,(V627),12),V641)){
	goto T1331;}
	V657= Ct;
	STSET(object,(V627),12, V641);
	(void)(V641);
	goto T1331;
T1331:;
	{object V658;
	if((V642)!=Cnil){
	V659= (V642);
	goto T1336;}
	V659= (V643);
	goto T1336;
T1336:;
	V658= ((((V659)==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	if(equal(STREF(object,(V627),16),(V658))){
	goto T1334;}
	V660= Ct;
	STSET(object,(V627),16, (V658));
	(void)((V658));}
	goto T1334;
T1334:;
	{object V661;
	if(((V625))==Cnil){
	goto T1341;}
	if(((V644))==Cnil){
	goto T1344;}
	V661= Ct;
	goto T1339;
	goto T1344;
T1344:;
	V661= (V645);
	goto T1339;
	goto T1341;
T1341:;
	V661= STREF(object,(V627),16);
	goto T1339;
T1339:;
	if(equal(STREF(object,(V627),20),(V661))){
	goto T1277;}
	V662= Ct;
	STSET(object,(V627),20, (V661));
	(void)((V661));}}
	goto T1277;
T1277:;
	if(((V623))==Cnil){
	goto T1348;}
	base[4]= (V622);
	base[5]= (V627);
	base[6]= (V623);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk444)();
	vs_top=sup;
	goto T1348;
T1348:;
	(void)((*(LnkLI445))((V622),(V627),(V623),(V628),(V629),(V630)));
	{object V663 = (V627);
	VMR67(V663)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for CHECK-METHOD-ARG-INFO	*/

static void L77()
{register object *base=vs_base;
	register object *sup=base+VM68; VC68
	vs_check;
	{register object V664;
	check_arg(3);
	V664=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V665;
	register object V666;
	register object V667;
	register object V668;
	object V669;
	if(!(type_of(base[2])==t_cons)){
	goto T1358;}
	base[4]= (*(LnkLI446))(base[2]);
	goto T1356;
	goto T1358;
T1358:;
	base[5]= base[2];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk51)(Lclptr51);
	vs_top=sup;
	base[4]= vs_base[0];
	goto T1356;
T1356:;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk419)();
	if(vs_base>=vs_top){vs_top=sup;goto T1361;}
	V665= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1362;}
	V666= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1363;}
	V667= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1364;}
	V668= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1365;}
	V669= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1366;}
	base[3]=MMcons(vs_base[0],Cnil);
	vs_top=sup;
	goto T1367;
	goto T1361;
T1361:;
	V665= Cnil;
	goto T1362;
T1362:;
	V666= Cnil;
	goto T1363;
T1363:;
	V667= Cnil;
	goto T1364;
T1364:;
	V668= Cnil;
	goto T1365;
T1365:;
	V669= Cnil;
	goto T1366;
T1366:;
	base[3]=MMcons(Cnil,Cnil);
	goto T1367;
T1367:;
	{object V670;
	object V671;
	object V672;
	object V673;
	V670= CMPmake_fixnum((long)(*(LnkLI442))((V664)));
	V671= STREF(object,(V664),12);
	V672= STREF(object,(V664),16);
	V673= STREF(object,(V664),20);
	if(number_compare((V665),(V670))==0){
	goto T1372;}
	base[4]= VV[259];
	base[6]= (V665);
	base[7]= (V670);
	vs_top=(vs_base=base+6)+2;
	L79(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L78(base);
	vs_top=sup;
	goto T1372;
T1372:;
	if(number_compare((V666),(V671))==0){
	goto T1379;}
	base[4]= VV[260];
	base[6]= (V666);
	base[7]= (V671);
	vs_top=(vs_base=base+6)+2;
	L79(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L78(base);
	vs_top=sup;
	goto T1379;
T1379:;
	if((V667)!=Cnil){
	V674= (V667);
	goto T1389;}
	V674= (V668);
	goto T1389;
T1389:;
	if((V674)==((V672))){
	goto T1386;}
	base[4]= VV[261];
	vs_top=(vs_base=base+4)+1;
	L78(base);
	vs_top=sup;
	goto T1386;
T1386:;
	if(!(type_of((V673))==t_cons)){
	goto T1392;}
	if(((V668))==Cnil){
	goto T1396;}
	if(((V667))==Cnil){
	goto T1395;}
	goto T1396;
T1396:;
	if(((V669))!=Cnil){
	goto T1395;}
	base[4]= 
	make_cclosure_new(LC128,Cnil,base[3],Cdata);
	base[5]= (V673);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk381)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1395;}
	base[4]= VV[262];
	base[5]= (V673);
	vs_top=(vs_base=base+4)+2;
	L78(base);
	return;
	goto T1395;
T1395:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1392;
T1392:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}}
	}
}
/*	local entry for function SET-ARG-INFO1	*/

static object LI80(V681,V682,V683,V684,V685,V686)

object V681;object V682;object V683;object V684;object V685;object V686;
{	 VMB69 VMS69 VMV69
	goto TTL;
TTL:;
	{object V687;
	object V688;
	object V689;
	register object V690;
	if((V684)==Cnil){
	V687= Cnil;
	goto T1408;}
	if((CMPcdr((V684)))!=Cnil){
	goto T1409;}
	V687= Cnil;
	goto T1408;
	goto T1409;
T1409:;
	V687= (V683);
	goto T1408;
T1408:;
	V688= CMPmake_fixnum((long)length(STREF(object,(V682),8)));
	if(((V687))==Cnil){
	goto T1414;}
	V689= STREF(object,(V682),8);
	goto T1412;
	goto T1414;
T1414:;
	base[4]= (V688);
	vs_top=(vs_base=base+4)+1;
	Lmake_list();
	vs_top=sup;
	V689= vs_base[0];
	goto T1412;
T1412:;
	if(((V687))==Cnil){
	goto T1419;}
	V690= STREF(object,(V682),24);
	goto T1417;
	goto T1419;
T1419:;
	V690= Cnil;
	goto T1417;
T1417:;
	if(((*(LnkLI447))((V682)))==Cnil){
	goto T1407;}
	{register object V691;
	register object V692;
	if(((V683))==Cnil){
	goto T1426;}
	V691= make_cons((V683),Cnil);
	goto T1424;
	goto T1426;
T1426:;
	V691= (V684);
	goto T1424;
T1424:;
	V692= CMPcar((V691));
	goto T1430;
T1430:;
	if(!(((V691))==Cnil)){
	goto T1431;}
	goto T1423;
	goto T1431;
T1431:;
	{object V693;
	register object V694;
	register object V695;
	if(((VV[21]->s.s_dbind))==(VV[22])){
	goto T1437;}
	if(type_of((V692))==t_cons){
	goto T1438;}
	goto T1437;
T1437:;
	base[9]= (V692);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk448)(Lclptr448);
	vs_top=sup;
	V693= vs_base[0];
	goto T1436;
	goto T1438;
T1438:;
	V693= (VFUN_NARGS=2,(*(LnkLI449))((V692),Ct));
	goto T1436;
T1436:;
	if(((VV[21]->s.s_dbind))==(VV[22])){
	goto T1444;}
	if(type_of((V692))==t_cons){
	goto T1445;}
	goto T1444;
T1444:;
	V694= (*(LnkLI378))((V692));
	goto T1443;
	goto T1445;
T1445:;
	V694= (*(LnkLI450))((V692));
	goto T1443;
T1443:;
	if(((V694))==Cnil){
	goto T1451;}
	if(!(((VV[21]->s.s_dbind))==(VV[22]))){
	goto T1450;}
	base[9]= (V681);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk451)(Lclptr451);
	vs_top=sup;
	V696= vs_base[0];
	if(!((V696)==((VV[266]->s.s_dbind)))){
	goto T1451;}
	goto T1450;
T1450:;
	if(!(((V694))==((VV[267]->s.s_dbind)))){
	goto T1460;}
	V695= VV[268];
	goto T1449;
	goto T1460;
T1460:;
	if(!(((V694))==((VV[269]->s.s_dbind)))){
	goto T1463;}
	V695= VV[270];
	goto T1449;
	goto T1463;
T1463:;
	if(!(((V694))==((VV[271]->s.s_dbind)))){
	goto T1466;}
	V695= VV[272];
	goto T1449;
	goto T1466;
T1466:;
	V695= Cnil;
	goto T1449;
	goto T1451;
T1451:;
	V695= Cnil;
	goto T1449;
T1449:;
	base[10]=VV[452]->s.s_gfdef;
	{object V697;
	object V698= (V689);
	object V699= (V693);
	if(V698==Cnil||V699==Cnil){
	V689= Cnil;
	goto T1469;}
	base[9]=V697=MMcons(Cnil,Cnil);
	goto T1470;
T1470:;
	base[11]= (V698->c.c_car);
	base[12]= (V699->c.c_car);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk452)();
	vs_top=sup;
	(V697->c.c_car)= vs_base[0];
	if((V698=MMcdr(V698))==Cnil||(V699=MMcdr(V699))==Cnil){
	V689= base[9];
	goto T1469;}
	V697=MMcdr(V697)=MMcons(Cnil,Cnil);
	goto T1470;}
	goto T1469;
T1469:;
	if(((V690))!=Cnil){
	goto T1476;}
	V690= (V695);
	goto T1474;
	goto T1476;
T1476:;
	if(!(((V690))==((V695)))){
	goto T1479;}
	goto T1474;
	goto T1479;
T1479:;
	V690= Cnil;
	goto T1474;
T1474:;}
	V691= CMPcdr((V691));
	V692= CMPcar((V691));
	goto T1430;}
	goto T1423;
T1423:;
	if(equal(STREF(object,(V682),8),V689)){
	goto T1486;}
	V701= Ct;
	STSET(object,(V682),8, V689);
	(void)(V689);
	goto T1486;
T1486:;
	if(equal(STREF(object,(V682),24),V690)){
	goto T1407;}
	V703= Ct;
	STSET(object,(V682),24, V690);
	(void)(V690);}
	goto T1407;
T1407:;
	if(((V685))==Cnil){
	goto T1492;}
	if(((V686))==Cnil){
	goto T1491;}
	goto T1492;
T1492:;
	{object V704;
	object V705;
	if(((*(LnkLI453))((V681)))==Cnil){
	goto T1498;}
	base[0]= Ct;
	base[1]= Ct;
	vs_top=(vs_base=base+0)+2;
	goto T1496;
	goto T1498;
T1498:;
	base[0]= (V681);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk454)();
	goto T1496;
T1496:;
	if(vs_base>=vs_top){vs_top=sup;goto T1503;}
	V704= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1504;}
	V705= vs_base[0];
	vs_top=sup;
	goto T1505;
	goto T1503;
T1503:;
	V704= Cnil;
	goto T1504;
T1504:;
	V705= Cnil;
	goto T1505;
T1505:;
	if(equal(STREF(object,(V682),32),V704)){
	goto T1506;}
	V707= Ct;
	STSET(object,(V682),32, V704);
	(void)(V704);
	goto T1506;
T1506:;
	if(equal(STREF(object,(V682),36),V705)){
	goto T1509;}
	V709= Ct;
	STSET(object,(V682),36, V705);
	(void)(V705);
	goto T1509;
T1509:;
	if((STREF(object,(V682),36))!=Cnil){
	goto T1491;}
	if(equal(STREF(object,(V682),24),Ct)){
	goto T1491;}
	V711= Ct;
	STSET(object,(V682),24, Ct);
	(void)(Ct);}
	goto T1491;
T1491:;
	if(((V685))!=Cnil){
	goto T1516;}
	{object V712;
	if(!(((VV[21]->s.s_dbind))==(VV[22]))){
	goto T1521;}
	base[0]= (V681);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk455)(Lclptr455);
	vs_top=sup;
	V712= vs_base[0];
	goto T1519;
	goto T1521;
T1521:;
	V712= (*(LnkLI456))((V681));
	goto T1519;
T1519:;
	{object V713;
	{object V714;
	object V715;
	if(!(type_of((V712))!=t_cons)){
	goto T1527;}
	V714= (V712);
	goto T1525;
	goto T1527;
T1527:;
	V714= CMPcadr((V712));
	goto T1525;
T1525:;{object V716;
	V716= (VV[228]->s.s_dbind);
	base[2]= (VV[228]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V717= vs_base[0];
	V715= make_cons(V716,V717);}
	if((V714)==Cnil){
	V713= Cnil;
	goto T1524;}
	if(type_of((V714))==t_symbol){
	goto T1532;}
	V713= Cnil;
	goto T1524;
	goto T1532;
T1532:;
	base[2]= (V714);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_package();
	vs_top=sup;
	V720= vs_base[0];
	{register object x= V720,V719= (V715);
	while(V719!=Cnil)
	if(x==(V719->c.c_car)){
	V718= V719;
	goto T1536;
	}else V719=V719->c.c_cdr;
	V718= Cnil;}
	goto T1536;
T1536:;
	if((((V718)==Cnil?Ct:Cnil))==Cnil){
	goto T1534;}
	V713= Cnil;
	goto T1524;
	goto T1534;
T1534:;
	base[2]= VV[273];
	base[3]= symbol_name((V714));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk457)();
	vs_top=sup;
	V721= vs_base[0];
	V713= ((V721)==Cnil?Ct:Cnil);}
	goto T1524;
T1524:;
	if(equal(STREF(object,(V682),28),(V713))){
	goto T1516;}
	V722= Ct;
	STSET(object,(V682),28, (V713));
	(void)((V713));}}
	goto T1516;
T1516:;
	{object V723;
	if(!(((((VV[21]->s.s_dbind))==(VV[22])?Ct:Cnil))==Cnil)){
	goto T1546;}
	V723= Ct;
	goto T1545;
	goto T1546;
T1546:;
	{object V724;
	object V725;
	base[2]= (V681);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk373)(Lclptr373);
	vs_top=sup;
	V724= vs_base[0];
	base[2]= (VV[375]->s.s_gfdef);
	base[4]= (V724);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V726= vs_base[0];
	base[3]= list(4,(V681),V726,VV[274],Cnil);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk458)(Lclptr458);
	vs_top=sup;
	V725= vs_base[0];
	if((V725)==Cnil){
	V723= Cnil;
	goto T1545;}
	if((CMPcdr((V725)))==Cnil){
	goto T1555;}
	V723= Cnil;
	goto T1545;
	goto T1555;
T1555:;
	{object V727;
	base[2]= CMPcar((V725));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk448)(Lclptr448);
	vs_top=sup;
	V727= vs_base[0];
	base[2]= CMPcar((V727));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk305)(Lclptr305);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1559;}
	V723= Cnil;
	goto T1545;
	goto T1559;
T1559:;
	base[2]= CMPcar((V727));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk379)(Lclptr379);
	vs_top=sup;
	V728= vs_base[0];
	if((VV[23])==(V728)){
	goto T1562;}
	V723= Cnil;
	goto T1545;
	goto T1562;
T1562:;
	base[2]= CMPcadr((V727));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk305)(Lclptr305);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1566;}
	V723= Cnil;
	goto T1545;
	goto T1566;
T1566:;
	base[2]= CMPcadr((V727));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk379)(Lclptr379);
	vs_top=sup;
	V729= vs_base[0];
	V723= ((VV[24])==(V729)?Ct:Cnil);}}
	goto T1545;
T1545:;
	if(equal(STREF(object,(V682),40),(V723))){
	goto T1544;}
	V730= Ct;
	STSET(object,(V682),40, (V723));
	(void)((V723));}
	goto T1544;
T1544:;
	{object V731 = (V682);
	VMR69(V731)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ENSURE-GENERIC-FUNCTION-USING-CLASS	*/

static object LI81(object V733,object V732,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB70 VMS70 VMV70
	{register object V734;
	register object V735;
	object V736;
	object V737;
	object V738;
	object V739;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V734= V733;
	V735= V732;
	narg= narg - 2;
	V740 = make_list(narg);
	V736= V740;
	{
	parse_key_rest_new(V740,narg,Vcs +3,(struct key *)(void *)&LI81key,first,ap);
	if(Vcs[3]==0){
	V737= Cnil;
	V738= Cnil;
	}else{
	V737=(Vcs[3]);
	V738= Ct;}
	V739=(Vcs[4]);
	if(((V734))==Cnil){
	goto T1575;}
	if(((*(LnkLI453))((V734)))==Cnil){
	goto T1575;}
	{object V741 = (V734);
	VMR70(V741)}
	goto T1575;
T1575:;
	{register object x= (V735),V742= (VV[275]->s.s_dbind);
	while(V742!=Cnil)
	if(equal(x,V742->c.c_car->c.c_car) &&V742->c.c_car != Cnil){
	goto T1581;
	}else V742=V742->c.c_cdr;
	goto T1580;}
	goto T1581;
T1581:;
	if(((V734))==Cnil){
	goto T1583;}
	{object V743 = (VFUN_NARGS=5,(*(LnkLI459))((V735),(V737),(V738),(V734),(V739)));
	VMR70(V743)}
	goto T1583;
T1583:;
	base[0]= VV[276];
	base[1]= (V735);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V744 = vs_base[0];
	VMR70(V744)}
	goto T1580;
T1580:;
	if(((V734))==Cnil){
	goto T1588;}
	base[0]= VV[277];
	base[1]= (V735);
	base[2]= VV[275];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V745 = vs_base[0];
	VMR70(V745)}
	goto T1588;
T1588:;
	base[0]= V735;
	base[1]= (VV[278]->s.s_dbind);
	base[2]= VV[279];
	base[3]= (VV[255]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	Ladjoin();
	vs_top=sup;
	(VV[278]->s.s_dbind)= vs_base[0];
	{object V747 = (VFUN_NARGS=5,(*(LnkLI459))((V735),(V737),(V738),Cnil,(V739)));
	VMR70(V747)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function MAKE-EARLY-GF	*/

static object LI82(object V748,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB71 VMS71 VMV71
	{register object V749;
	object V750;
	object V751;
	object V752;
	object V753;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V749= V748;
	narg = narg - 1;
	if (narg <= 0) goto T1599;
	else {
	V750= first;}
	if (--narg <= 0) goto T1600;
	else {
	V751= va_arg(ap,object);}
	if (--narg <= 0) goto T1601;
	else {
	V752= va_arg(ap,object);}
	if (--narg <= 0) goto T1602;
	else {
	V753= va_arg(ap,object);}
	--narg; goto T1603;
	goto T1599;
T1599:;
	V750= Cnil;
	goto T1600;
T1600:;
	V751= Cnil;
	goto T1601;
T1601:;
	V752= Cnil;
	goto T1602;
T1602:;
	V753= Cnil;
	goto T1603;
T1603:;
	base[0]= (VFUN_NARGS=2,(*(LnkLI460))((VV[280]->s.s_dbind),(VV[281]->s.s_dbind)));
	base[0]=MMcons(base[0],Cnil);
	if((V752)!=Cnil){
	V754= (V752);
	goto T1610;}
	if(!(((V749))==(VV[282]))){
	goto T1612;}
	V754= 
	make_cclosure_new(LC129,Cnil,base[0],Cdata);
	goto T1610;
	goto T1612;
T1612:;
	V754= 
	make_cclosure_new(LC130,Cnil,base[0],Cdata);
	goto T1610;
T1610:;
	(void)((*(LnkLI461))((base[0]->c.c_car),V754));
	{object V756;
	V756= (base[0]->c.c_car);
	V757= ({object _tmp=get(VV[362],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[362])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[362])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V758 = V757,
	(type_of(V758) == t_sfun ?(*((V758)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V758)==t_vfun) ?
	(*((V758)->sfn.sfn_self)):
	(fcall.fun=(V758),fcalln))((V756),V749)));}
	(void)((*(LnkLI462))(VV[23],(base[0]->c.c_car),VV[288],(V749)));
	vs_base=vs_top;
	(void) (*Lnk366)();
	vs_top=sup;
	V759= vs_base[0];
	(void)((*(LnkLI462))(VV[23],(base[0]->c.c_car),VV[289],V759));
	base[1]= (base[0]->c.c_car);
	base[2]= (V749);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk361)();
	vs_top=sup;
	{object V760;
	V760= (*(LnkLI463))();
	{object V762;
	V762= (base[0]->c.c_car);
	if(type_of((V762))==t_structure){
	goto T1630;}
	goto T1628;
	goto T1630;
T1630:;
	if(!((((V762))->str.str_def)==(VV[290]))){
	goto T1628;}}
	V761= STREF(object,(base[0]->c.c_car),4);
	goto T1626;
	goto T1628;
T1628:;{object V763;
	V763= (VV[151]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V764= vs_base[0];
	if(!((V763)==(CMPcar(V764)))){
	goto T1633;}}
	V761= CMPcar(((base[0]->c.c_car))->cc.cc_turbo[12]);
	goto T1626;
	goto T1633;
T1633:;
	base[1]= VV[152];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	V761= vs_base[0];
	goto T1626;
T1626:;
	(void)(((V761)->v.v_self[fix((VV[250]->s.s_dbind))]=((V760))));
	if(((V751))==Cnil){
	goto T1623;}
	(void)((*(LnkLI14))((V749),(V750)));
	if(((V753))==Cnil){
	goto T1643;}
	(void)((VFUN_NARGS=5,(*(LnkLI464))((base[0]->c.c_car),VV[19],(V750),VV[0],(V753))));
	goto T1623;
	goto T1643;
T1643:;
	(void)((VFUN_NARGS=3,(*(LnkLI464))((base[0]->c.c_car),VV[19],(V750))));}
	goto T1623;
T1623:;
	{object V765 = (base[0]->c.c_car);
	VMR71(V765)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SET-DFUN	*/

static object LI83(object V766,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB72 VMS72 VMV72
	{register object V767;
	register object V768;
	register object V769;
	object V770;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V767= V766;
	narg = narg - 1;
	if (narg <= 0) goto T1645;
	else {
	V768= first;}
	if (--narg <= 0) goto T1646;
	else {
	V769= va_arg(ap,object);}
	if (--narg <= 0) goto T1647;
	else {
	V770= va_arg(ap,object);}
	--narg; goto T1648;
	goto T1645;
T1645:;
	V768= Cnil;
	goto T1646;
T1646:;
	V769= Cnil;
	goto T1647;
T1647:;
	V770= Cnil;
	goto T1648;
T1648:;
	if(((V769))==Cnil){
	goto T1652;}
	V771= Ct;
	STSET(object,(V769),0, (V767));
	(void)((V767));
	goto T1652;
T1652:;
	{object V772;
	if(((V768))==Cnil){
	goto T1658;}
	if(((V769))!=Cnil){
	goto T1657;}
	if(((V770))==Cnil){
	goto T1658;}
	goto T1657;
T1657:;
	V772= listA(3,(V768),(V769),(V770));
	goto T1656;
	goto T1658;
T1658:;
	V772= (V768);
	goto T1656;
T1656:;
	if(!(((VV[21]->s.s_dbind))==(VV[22]))){
	goto T1665;}
	V775= ({object _tmp=get(VV[465],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[465])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[465])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V776 = V775,
	(type_of(V776) == t_sfun ?(*((V776)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V776)==t_vfun) ?
	(*((V776)->sfn.sfn_self)):
	(fcall.fun=(V776),fcalln))(V772,V767)));
	goto T1655;
	goto T1665;
T1665:;
	if(type_of(V767)==t_structure){
	goto T1672;}
	goto T1670;
	goto T1672;
T1672:;
	if(!(((V767)->str.str_def)==(VV[292]))){
	goto T1670;}
	V777= STREF(object,(V767),4);
	goto T1668;
	goto T1670;
T1670:;{object V779;
	V779= (VV[151]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V767);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V780= vs_base[0];
	if(!((V779)==(CMPcar(V780)))){
	goto T1675;}}
	V777= CMPcar(((V767))->cc.cc_turbo[12]);
	goto T1668;
	goto T1675;
T1675:;
	base[0]= VV[152];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V777= vs_base[0];
	goto T1668;
T1668:;
	(void)(((V777)->v.v_self[fix((VV[293]->s.s_dbind))]=((V772))));}
	goto T1655;
T1655:;
	{object V781 = (V768);
	VMR72(V781)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function GF-DFUN-CACHE	*/

static object LI84(V783)

register object V783;
{	 VMB73 VMS73 VMV73
	goto TTL;
TTL:;
	{object V784;
	if(!(((VV[21]->s.s_dbind))==(VV[22]))){
	goto T1683;}
	base[0]= (V783);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk465)(Lclptr465);
	vs_top=sup;
	V784= vs_base[0];
	goto T1681;
	goto T1683;
T1683:;
	if(type_of(V783)==t_structure){
	goto T1690;}
	goto T1688;
	goto T1690;
T1690:;
	if(!(((V783)->str.str_def)==(VV[294]))){
	goto T1688;}
	V785= STREF(object,(V783),4);
	goto T1686;
	goto T1688;
T1688:;{object V787;
	V787= (VV[151]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V783);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V788= vs_base[0];
	if(!((V787)==(CMPcar(V788)))){
	goto T1693;}}
	V785= CMPcar(((V783))->cc.cc_turbo[12]);
	goto T1686;
	goto T1693;
T1693:;
	base[0]= VV[152];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V785= vs_base[0];
	goto T1686;
T1686:;
	V784= (V785)->v.v_self[fix((VV[293]->s.s_dbind))];
	goto T1681;
T1681:;
	{register object V789;
	V789= (V784);
	base[0]= (V789);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1700;}
	{object V790 = Cnil;
	VMR73(V790)}
	goto T1700;
T1700:;
	if(!(type_of((V789))==t_cons)){
	goto T1704;}
	{object V791 = CMPcadr((V784));
	VMR73(V791)}
	goto T1704;
T1704:;
	{object V792 = Cnil;
	VMR73(V792)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GF-DFUN-INFO	*/

static object LI85(V794)

register object V794;
{	 VMB74 VMS74 VMV74
	goto TTL;
TTL:;
	{object V795;
	if(!(((VV[21]->s.s_dbind))==(VV[22]))){
	goto T1708;}
	base[0]= (V794);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk465)(Lclptr465);
	vs_top=sup;
	V795= vs_base[0];
	goto T1706;
	goto T1708;
T1708:;
	if(type_of(V794)==t_structure){
	goto T1715;}
	goto T1713;
	goto T1715;
T1715:;
	if(!(((V794)->str.str_def)==(VV[295]))){
	goto T1713;}
	V796= STREF(object,(V794),4);
	goto T1711;
	goto T1713;
T1713:;{object V798;
	V798= (VV[151]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V794);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V799= vs_base[0];
	if(!((V798)==(CMPcar(V799)))){
	goto T1718;}}
	V796= CMPcar(((V794))->cc.cc_turbo[12]);
	goto T1711;
	goto T1718;
T1718:;
	base[0]= VV[152];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V796= vs_base[0];
	goto T1711;
T1711:;
	V795= (V796)->v.v_self[fix((VV[293]->s.s_dbind))];
	goto T1706;
T1706:;
	{register object V800;
	V800= (V795);
	base[0]= (V800);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1725;}
	{object V801 = Cnil;
	VMR74(V801)}
	goto T1725;
T1725:;
	if(!(type_of((V800))==t_cons)){
	goto T1729;}
	{object V802 = CMPcddr((V795));
	VMR74(V802)}
	goto T1729;
T1729:;
	{object V803 = Cnil;
	VMR74(V803)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-GF-NAME	*/

static object LI86(V805)

register object V805;
{	 VMB75 VMS75 VMV75
	goto TTL;
TTL:;
	if(type_of(V805)==t_structure){
	goto T1735;}
	goto T1733;
	goto T1735;
T1735:;
	if(!(((V805)->str.str_def)==(VV[296]))){
	goto T1733;}
	V806= STREF(object,(V805),4);
	goto T1731;
	goto T1733;
T1733:;{object V808;
	V808= (VV[151]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V805);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V809= vs_base[0];
	if(!((V808)==(CMPcar(V809)))){
	goto T1738;}}
	V806= CMPcar(((V805))->cc.cc_turbo[12]);
	goto T1731;
	goto T1738;
T1738:;
	base[0]= VV[152];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V806= vs_base[0];
	goto T1731;
T1731:;
	{object V810 = (V806)->v.v_self[fix((VV[297]->s.s_dbind))];
	VMR75(V810)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GF-LAMBDA-LIST	*/

static object LI87(V812)

register object V812;
{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	{object V813;
	if(!(((VV[21]->s.s_dbind))==(VV[22]))){
	goto T1746;}
	base[0]= (V812);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk439)(Lclptr439);
	vs_top=sup;
	V813= vs_base[0];
	goto T1744;
	goto T1746;
T1746:;
	if(type_of(V812)==t_structure){
	goto T1753;}
	goto T1751;
	goto T1753;
T1753:;
	if(!(((V812)->str.str_def)==(VV[298]))){
	goto T1751;}
	V814= STREF(object,(V812),4);
	goto T1749;
	goto T1751;
T1751:;{object V816;
	V816= (VV[151]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V812);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V817= vs_base[0];
	if(!((V816)==(CMPcar(V817)))){
	goto T1756;}}
	V814= CMPcar(((V812))->cc.cc_turbo[12]);
	goto T1749;
	goto T1756;
T1756:;
	base[0]= VV[152];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V814= vs_base[0];
	goto T1749;
T1749:;
	V813= (V814)->v.v_self[fix((VV[250]->s.s_dbind))];
	goto T1744;
T1744:;
	if(!((VV[251])==(STREF(object,(V813),0)))){
	goto T1763;}
	{object V818;
	if(!(((VV[21]->s.s_dbind))==(VV[22]))){
	goto T1767;}
	base[0]= (V812);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk440)(Lclptr440);
	vs_top=sup;
	V818= vs_base[0];
	goto T1765;
	goto T1767;
T1767:;
	if(type_of(V812)==t_structure){
	goto T1774;}
	goto T1772;
	goto T1774;
T1774:;
	if(!(((V812)->str.str_def)==(VV[299]))){
	goto T1772;}
	V819= STREF(object,(V812),4);
	goto T1770;
	goto T1772;
T1772:;{object V821;
	V821= (VV[151]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V812);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V822= vs_base[0];
	if(!((V821)==(CMPcar(V822)))){
	goto T1777;}}
	V819= CMPcar(((V812))->cc.cc_turbo[12]);
	goto T1770;
	goto T1777;
T1777:;
	base[0]= VV[152];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V819= vs_base[0];
	goto T1770;
T1770:;
	V818= (V819)->v.v_self[fix((VV[249]->s.s_dbind))];
	goto T1765;
T1765:;
	if(((V818))!=Cnil){
	goto T1784;}
	base[0]= VV[300];
	base[1]= (V812);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk466)();
	vs_top=sup;
	{object V823 = Cnil;
	VMR76(V823)}
	goto T1784;
T1784:;
	{object V824;
	object V825;
	object V826;
	base[3]= (V818);
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V827= vs_base[0];
	V824= CMPcar(V827);
	if(!(type_of((V824))==t_cons)){
	goto T1794;}
	V825= (*(LnkLI446))((V824));
	goto T1792;
	goto T1794;
T1794:;
	base[3]= (V824);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk51)(Lclptr51);
	vs_top=sup;
	V825= vs_base[0];
	goto T1792;
T1792:;
	{register object x= VV[63],V828= (V825);
	while(V828!=Cnil)
	if(eql(x,V828->c.c_car)){
	V826= V828;
	goto T1797;
	}else V828=V828->c.c_cdr;
	V826= Cnil;}
	goto T1797;
T1797:;
	if(((V826))==Cnil){
	goto T1799;}
	base[3]= (V825);
	base[4]= CMPcdr((V826));
	vs_top=(vs_base=base+3)+2;
	Lldiff();
	vs_top=sup;
	V829= vs_base[0];
	{object V830 = append(V829,VV[301]);
	VMR76(V830)}
	goto T1799;
T1799:;
	{object V831 = (V825);
	VMR76(V831)}}}
	goto T1763;
T1763:;
	{object V832 = STREF(object,(V813),0);
	VMR76(V832)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for REAL-ENSURE-GF-INTERNAL	*/

static void L88()
{register object *base=vs_base;
	register object *sup=base+VM77; VC77
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V833=base[0]->c.c_cdr;
	if(endp(V833))invalid_macro_call();
	base[2]= (V833->c.c_car);
	V833=V833->c.c_cdr;
	if(endp(V833))invalid_macro_call();
	base[3]= (V833->c.c_car);
	V833=V833->c.c_cdr;
	if(endp(V833))invalid_macro_call();
	base[4]= (V833->c.c_car);
	V833=V833->c.c_cdr;
	if(!endp(V833))invalid_macro_call();}
	V834= list(2,VV[302],base[2]);
	V835= list(2,/* INLINE-ARGS */V834,list(3,VV[303],base[2],list(4,VV[304],base[2],Ct,base[4])));
	V836= list(2,VV[305],base[2]);
	V837= make_cons(/* INLINE-ARGS */V836,Cnil);
	V838= list(4,VV[125],/* INLINE-ARGS */V835,/* INLINE-ARGS */V837,list(2,Ct,list(3,VV[306],VV[307],base[2])));
	V839= list(3,VV[308],base[3],VV[5]);
	V840= list(3,VV[308],base[3],VV[309]);
	V841= list(2,VV[310],listA(3,VV[311],base[3],VV[312]));
	V842= make_cons(/* INLINE-ARGS */V841,Cnil);
	V843= list(3,VV[311],base[3],VV[4]);
	V844= list(3,VV[100],/* INLINE-ARGS */V842,list(3,VV[254],VV[313],list(3,VV[34],/* INLINE-ARGS */V843,listA(3,VV[314],list(2,VV[315],base[2]),VV[316]))));
	V845= list(2,VV[317],listA(3,VV[311],base[3],VV[318]));
	V846= make_cons(/* INLINE-ARGS */V845,Cnil);
	V847= list(3,VV[311],base[3],VV[6]);
	base[5]= list(6,VV[13],/* INLINE-ARGS */V838,/* INLINE-ARGS */V839,/* INLINE-ARGS */V840,/* INLINE-ARGS */V844,list(3,VV[100],/* INLINE-ARGS */V846,list(3,VV[254],VV[319],list(3,VV[34],/* INLINE-ARGS */V847,list(4,VV[304],VV[317],Ct,base[4])))));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function REAL-ENSURE-GF-USING-CLASS--GENERIC-FUNCTION	*/

static object LI89(object V849,object V848,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB78 VMS78 VMV78
	{object V850;
	object V851;
	register object V852;
	object V853;
	object V854;
	object V855;
	register object V856;
	object V857;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V850= V849;
	V851= V848;
	narg= narg - 2;
	V858 = make_list(narg);
	V852= V858;
	{
	parse_key_rest_new(V858,narg,Vcs +3,(struct key *)(void *)&LI89key,first,ap);
	V853=(Vcs[3]);
	if(Vcs[4]==0){
	V854= Cnil;
	V855= Cnil;
	}else{
	V854=(Vcs[4]);
	V855= Ct;}
	if(Vcs[5]==0){
	V856= VV[23];
	V857= Cnil;
	}else{
	V856=(Vcs[5]);
	V857= Ct;}
	if(!(type_of((V856))==t_symbol)){
	goto T1809;}
	V856= (VFUN_NARGS=3,(*(LnkLI304))((V856),Ct,(V853)));
	goto T1807;
	goto T1809;
T1809:;
	{object V859;
	base[0]= (V856);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk305)(Lclptr305);
	vs_top=sup;
	V859= vs_base[0];
	if(((V859))==Cnil){
	goto T1815;}
	goto T1807;
	goto T1815;
T1815:;
	base[0]= VV[307];
	base[1]= (V856);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}
	goto T1807;
T1807:;
	{object V860;
	object V861;
	base[0]= (V852);
	base[1]= VV[5];
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1823;}
	V860= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1824;}
	V861= vs_base[0];
	vs_top=sup;
	goto T1825;
	goto T1823;
T1823:;
	V860= Cnil;
	goto T1824;
T1824:;
	V861= Cnil;
	goto T1825;
T1825:;
	V852= (V860);}
	{object V862;
	object V863;
	base[0]= (V852);
	base[1]= VV[309];
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1832;}
	V862= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1833;}
	V863= vs_base[0];
	vs_top=sup;
	goto T1834;
	goto T1832;
T1832:;
	V862= Cnil;
	goto T1833;
T1833:;
	V863= Cnil;
	goto T1834;
T1834:;
	V852= (V862);}
	{object V864;
	base[0]= (V852);
	base[1]= VV[4];
	base[2]= VV[320];
	vs_top=(vs_base=base+0)+3;
	Lgetf();
	vs_top=sup;
	V864= vs_base[0];
	if(((V864))==(VV[320])){
	goto T1837;}
	{object V866;
	base[2]= (V856);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= CMPcar((V864));
	base[3]= CMPcdr((V864));
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	V866= vs_base[0];
	{object V867;
	base[1]= (V852);
	base[2]= (V866);
	base[3]= VV[4];
	vs_top=(vs_base=base+1)+3;
	siLput_f();
	vs_top=sup;
	V867= vs_base[0];
	V852= (V867);}}}
	goto T1837;
T1837:;
	{object V868;
	base[0]= (V852);
	base[1]= VV[6];
	base[2]= VV[320];
	vs_top=(vs_base=base+0)+3;
	Lgetf();
	vs_top=sup;
	V868= vs_base[0];
	if(((V868))==(VV[320])){
	goto T1806;}
	{object V870;
	V870= (VFUN_NARGS=3,(*(LnkLI304))((V868),Ct,(V853)));
	{object V871;
	base[1]= (V852);
	base[2]= (V870);
	base[3]= VV[6];
	vs_top=(vs_base=base+1)+3;
	siLput_f();
	vs_top=sup;
	V871= vs_base[0];
	V852= (V871);}}}
	goto T1806;
T1806:;
	if(((V857))==Cnil){
	goto T1868;}
	V872= (*(LnkLI378))((V850));
	if((/* INLINE-ARGS */V872)==((V856))){
	goto T1868;}
	base[0]= (V850);
	base[1]= (V856);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk467)(Lclptr467);
	vs_top=sup;
	goto T1868;
T1868:;
	{object V873;
	base[0]=VV[468]->s.s_gfdef;
	base[1]= (V850);
	{object V874;
	V874= (V852);
	 vs_top=base+2;
	 while(V874!=Cnil)
	 {vs_push((V874)->c.c_car);V874=(V874)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk468)(Lclptr468);
	vs_top=sup;
	V873= vs_base[0];
	if(((V855))==Cnil){
	goto T1878;}
	(void)((*(LnkLI14))((V851),(V854)));
	goto T1878;
T1878:;
	{object V875 = (V873);
	VMR78(V875)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function REAL-ENSURE-GF-USING-CLASS--NULL	*/

static object LI90(object V877,object V876,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB79 VMS79 VMV79
	{object V878;
	object V879;
	register object V880;
	object V881;
	object V882;
	object V883;
	register object V884;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V878= V877;
	V879= V876;
	narg= narg - 2;
	V885 = make_list(narg);
	V880= V885;
	{
	parse_key_rest_new(V885,narg,Vcs +3,(struct key *)(void *)&LI90key,first,ap);
	V881=(Vcs[3]);
	if(Vcs[4]==0){
	V882= Cnil;
	V883= Cnil;
	}else{
	V882=(Vcs[4]);
	V883= Ct;}
	V884=(Vcs[5]);
	if(!(type_of((V884))==t_symbol)){
	goto T1885;}
	V884= (VFUN_NARGS=3,(*(LnkLI304))((V884),Ct,(V881)));
	goto T1883;
	goto T1885;
T1885:;
	{object V886;
	base[0]= (V884);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk305)(Lclptr305);
	vs_top=sup;
	V886= vs_base[0];
	if(((V886))==Cnil){
	goto T1891;}
	goto T1883;
	goto T1891;
T1891:;
	base[0]= VV[307];
	base[1]= (V884);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}
	goto T1883;
T1883:;
	{object V887;
	object V888;
	base[0]= (V880);
	base[1]= VV[5];
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1899;}
	V887= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1900;}
	V888= vs_base[0];
	vs_top=sup;
	goto T1901;
	goto T1899;
T1899:;
	V887= Cnil;
	goto T1900;
T1900:;
	V888= Cnil;
	goto T1901;
T1901:;
	V880= (V887);}
	{object V889;
	object V890;
	base[0]= (V880);
	base[1]= VV[309];
	vs_top=(vs_base=base+0)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1908;}
	V889= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1909;}
	V890= vs_base[0];
	vs_top=sup;
	goto T1910;
	goto T1908;
T1908:;
	V889= Cnil;
	goto T1909;
T1909:;
	V890= Cnil;
	goto T1910;
T1910:;
	V880= (V889);}
	{object V891;
	base[0]= (V880);
	base[1]= VV[4];
	base[2]= VV[320];
	vs_top=(vs_base=base+0)+3;
	Lgetf();
	vs_top=sup;
	V891= vs_base[0];
	if(((V891))==(VV[320])){
	goto T1913;}
	{object V893;
	base[2]= (V884);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= CMPcar((V891));
	base[3]= CMPcdr((V891));
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	V893= vs_base[0];
	{object V894;
	base[1]= (V880);
	base[2]= (V893);
	base[3]= VV[4];
	vs_top=(vs_base=base+1)+3;
	siLput_f();
	vs_top=sup;
	V894= vs_base[0];
	V880= (V894);}}}
	goto T1913;
T1913:;
	{object V895;
	base[0]= (V880);
	base[1]= VV[6];
	base[2]= VV[320];
	vs_top=(vs_base=base+0)+3;
	Lgetf();
	vs_top=sup;
	V895= vs_base[0];
	if(((V895))==(VV[320])){
	goto T1882;}
	{object V897;
	V897= (VFUN_NARGS=3,(*(LnkLI304))((V895),Ct,(V881)));
	{object V898;
	base[1]= (V880);
	base[2]= (V897);
	base[3]= VV[6];
	vs_top=(vs_base=base+1)+3;
	siLput_f();
	vs_top=sup;
	V898= vs_base[0];
	V880= (V898);}}}
	goto T1882;
T1882:;
	{object V899;
	{object V901;
	base[1]=VV[469]->s.s_gfdef;
	base[2]= (V884);
	base[3]= VV[158];
	base[4]= (V879);
	{object V902;
	V902= (V880);
	 vs_top=base+5;
	 while(V902!=Cnil)
	 {vs_push((V902)->c.c_car);V902=(V902)->c.c_cdr;}
	vs_base=base+2;}
	(void) (*Lnk469)(Lclptr469);
	vs_top=sup;
	V901= vs_base[0];
	V903= ({object _tmp=get(VV[362],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[362])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[362])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V899= (
	V904 = V903,
	(type_of(V904) == t_sfun ?(*((V904)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V904)==t_vfun) ?
	(*((V904)->sfn.sfn_self)):
	(fcall.fun=(V904),fcalln))((V901),V879));}
	if(((V883))==Cnil){
	goto T1951;}
	(void)((*(LnkLI14))((V879),(V882)));
	goto T1951;
T1951:;
	{object V905 = (V899);
	VMR79(V905)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for GET-GENERIC-FUNCTION-INFO	*/

static void L91()
{register object *base=vs_base;
	register object *sup=base+VM80; VC80
	vs_check;
	{register object V906;
	check_arg(1);
	V906=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V907;
	object V908;
	object V909;
	{object V910;
	object V911;
	if(((*(LnkLI453))((V906)))==Cnil){
	goto T1957;}
	if(type_of(V906)==t_structure){
	goto T1963;}
	goto T1961;
	goto T1963;
T1963:;
	if(!(((V906)->str.str_def)==(VV[321]))){
	goto T1961;}
	V912= STREF(object,(V906),4);
	goto T1959;
	goto T1961;
T1961:;{object V914;
	V914= (VV[151]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V906);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V915= vs_base[0];
	if(!((V914)==(CMPcar(V915)))){
	goto T1966;}}
	V912= CMPcar(((V906))->cc.cc_turbo[12]);
	goto T1959;
	goto T1966;
T1966:;
	base[3]= VV[152];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V912= vs_base[0];
	goto T1959;
T1959:;
	V910= (V912)->v.v_self[fix((VV[250]->s.s_dbind))];
	goto T1955;
	goto T1957;
T1957:;
	base[3]= (V906);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk439)(Lclptr439);
	vs_top=sup;
	V910= vs_base[0];
	goto T1955;
T1955:;
	V911= STREF(object,(V910),8);
	base[3]= (*(LnkLI470))((V910));
	base[4]= (V911);
	base[5]= (V910);
	vs_top=(vs_base=base+3)+3;}
	if(vs_base>=vs_top){vs_top=sup;goto T1977;}
	V907= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1978;}
	V908= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1979;}
	V909= vs_base[0];
	vs_top=sup;
	goto T1980;
	goto T1977;
T1977:;
	V907= Cnil;
	goto T1978;
T1978:;
	V908= Cnil;
	goto T1979;
T1979:;
	V909= Cnil;
	goto T1980;
T1980:;
	base[1]= CMPmake_fixnum((long)length((V908)));
	base[2]= (V907);
	base[3]= (V908);
	base[5]= VV[471];
	base[6]= (V908);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk438)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V909);
	vs_top=(vs_base=base+1)+5;
	return;}
	}
}
/*	local entry for function EARLY-MAKE-A-METHOD	*/

static object LI92(object V921,object V920,object V919,object V918,object V917,object V916,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB81 VMS81 VMV81
	{object V922;
	object V923;
	object V924;
	register object V925;
	register object V926;
	object V927;
	object V928;
	va_start(ap,first);
	if(narg <6) too_few_arguments();
	V922= V921;
	V923= V920;
	V924= V919;
	V925= V918;
	V926= V917;
	V927= V916;
	narg = narg - 6;
	if (narg <= 0) goto T1988;
	else {
	V928= first;}
	--narg; goto T1989;
	goto T1988;
T1988:;
	V928= Cnil;
	goto T1989;
T1989:;
	(void)((VFUN_NARGS=1,(*(LnkLI472))((V926))));
	{object V929;
	object V930;
	V929= Cnil;
	V930= Cnil;
	base[0]= VV[473];
	base[1]= (V925);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk381)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1994;}
	V929= (V925);
	{object V931;
	object V932= (V925);
	if(V932==Cnil){
	V930= Cnil;
	goto T2000;}
	base[0]=V931=MMcons(Cnil,Cnil);
	goto T2001;
T2001:;
	if(!(((V932->c.c_car))==(Ct))){
	goto T2004;}
	(V931->c.c_car)= Ct;
	goto T2002;
	goto T2004;
T2004:;
	base[1]= (V932->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk379)(Lclptr379);
	vs_top=sup;
	(V931->c.c_car)= vs_base[0];
	goto T2002;
T2002:;
	if((V932=MMcdr(V932))==Cnil){
	V930= base[0];
	goto T2000;}
	V931=MMcdr(V931)=MMcons(Cnil,Cnil);
	goto T2001;}
	goto T2000;
T2000:;
	goto T1992;
	goto T1994;
T1994:;
	V930= (V925);
	V929= Cnil;
	goto T1992;
T1992:;
	base[0]= (V926);
	base[1]= VV[39];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V934= vs_base[0];
	base[0]= (V926);
	base[1]= VV[225];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V935= vs_base[0];
	{object V936 = list(5,VV[322],V934,V935,(V929),list(7,(V922),(V923),(V924),(V930),(V926),(V927),(V928)));
	VMR81(V936)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for REAL-MAKE-A-METHOD	*/

static void L93()
{register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_check;
	{object V937;
	object V938;
	object V939;
	object V940;
	object V941;
	object V942;
	object V943;
	if(vs_top-vs_base<6) too_few_arguments();
	if(vs_top-vs_base>7) too_many_arguments();
	V937=(base[0]);
	V938=(base[1]);
	V939=(base[2]);
	V940=(base[3]);
	V941=(base[4]);
	V942=(base[5]);
	vs_base=vs_base+6;
	if(vs_base>=vs_top){vs_top=sup;goto T2016;}
	V943=(base[6]);
	vs_top=sup;
	goto T2017;
	goto T2016;
T2016:;
	V943= Cnil;
	goto T2017;
T2017:;
	V940= (*(LnkLI474))((V940));
	base[7]=VV[469]->s.s_gfdef;
	base[8]= (V937);
	base[9]= VV[323];
	base[10]= (V938);
	base[11]= VV[19];
	base[12]= (V939);
	base[13]= VV[324];
	base[14]= (V940);
	base[15]= VV[3];
	base[16]= (V942);
	base[17]= VV[325];
	base[18]= (V943);
	base[19]= VV[326];
	base[20]= Ct;
	{object V944;
	V944= (V941);
	 vs_top=base+21;
	 while(V944!=Cnil)
	 {vs_push((V944)->c.c_car);V944=(V944)->c.c_cdr;}
	vs_base=base+8;}
	(void) (*Lnk469)(Lclptr469);
	return;
	}
}
/*	function definition for EARLY-METHOD-FUNCTION	*/

static void L94()
{register object *base=vs_base;
	register object *sup=base+VM83; VC83
	vs_check;
	{object V945;
	check_arg(1);
	V945=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= CMPcadr((V945));
	base[2]= CMPcaddr((V945));
	vs_top=(vs_base=base+1)+2;
	return;
	}
}
/*	local entry for function EARLY-METHOD-CLASS	*/

static object LI95(V947)

object V947;
{	 VMB84 VMS84 VMV84
	goto TTL;
TTL:;
	base[0]= (V947);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk475)();
	vs_top=sup;
	V948= vs_base[0];
	{object V949 = (VFUN_NARGS=1,(*(LnkLI304))(CMPcar(V948)));
	VMR84(V949)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-METHOD-STANDARD-ACCESSOR-P	*/

static object LI96(V951)

object V951;
{	 VMB85 VMS85 VMV85
	goto TTL;
TTL:;
	{object V952;
	base[0]= (V951);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk475)();
	vs_top=sup;
	V953= vs_base[0];
	V952= CMPcar(V953);
	if(!(((V952))==(VV[327]))){
	goto T2042;}
	{object V954 = Ct;
	VMR85(V954)}
	goto T2042;
T2042:;
	if(!(((V952))==(VV[328]))){
	goto T2044;}
	{object V955 = Ct;
	VMR85(V955)}
	goto T2044;
T2044:;
	{object V956 = (((V952))==(VV[329])?Ct:Cnil);
	VMR85(V956)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for EARLY-METHOD-STANDARD-ACCESSOR-SLOT-NAME	*/

static void L97()
{register object *base=vs_base;
	register object *sup=base+VM86; VC86
	vs_check;
	{object V957;
	check_arg(1);
	V957=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V957);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk475)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk476)();
	return;
	}
}
/*	local entry for function EARLY-METHOD-SPECIALIZERS	*/

static object LI98(object V958,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB87 VMS87 VMV87
	{register object V959;
	object V960;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V959= V958;
	narg = narg - 1;
	if (narg <= 0) goto T2048;
	else {
	V960= first;}
	--narg; goto T2049;
	goto T2048;
T2048:;
	V960= Cnil;
	goto T2049;
T2049:;
	if(!(type_of((V959))==t_cons||((V959))==Cnil)){
	goto T2052;}
	if(!((CMPcar((V959)))==(VV[322]))){
	goto T2052;}
	if(!(((V960))==(Ct))){
	goto T2057;}{object V961;
	V961= CMPcadddr((V959));
	if(V961==Cnil)goto T2059;
	{object V962 = V961;
	VMR87(V962)}
	goto T2059;
T2059:;}
	{object V964;
	base[2]=VV[304]->s.s_gfdef;
	base[3]= (V959);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk475)();
	vs_top=sup;
	V967= vs_base[0];
	{object V965;
	object V966= CMPcadddr(V967);
	if(V966==Cnil){
	V964= Cnil;
	goto T2061;}
	base[1]=V965=MMcons(Cnil,Cnil);
	goto T2062;
T2062:;
	base[3]= (V966->c.c_car);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk304)();
	vs_top=sup;
	(V965->c.c_car)= vs_base[0];
	if((V966=MMcdr(V966))==Cnil){
	V964= base[1];
	goto T2061;}
	V965=MMcdr(V965)=MMcons(Cnil,Cnil);
	goto T2062;}
	goto T2061;
T2061:;
	(CMPcdddr(V959))->c.c_car = (V964);
	(void)(CMPcdddr(V959));
	{object V968 = (V964);
	VMR87(V968)}}
	goto T2057;
T2057:;
	base[0]= (V959);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk475)();
	vs_top=sup;
	V969= vs_base[0];
	{object V970 = CMPcadddr(V969);
	VMR87(V970)}
	goto T2052;
T2052:;
	base[0]= VV[330];
	base[1]= (V959);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V971 = vs_base[0];
	VMR87(V971)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function EARLY-METHOD-QUALIFIERS	*/

static object LI99(V973)

object V973;
{	 VMB88 VMS88 VMV88
	goto TTL;
TTL:;
	base[0]= (V973);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk475)();
	vs_top=sup;
	V974= vs_base[0];
	{object V975 = CMPcadr(V974);
	VMR88(V975)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-METHOD-LAMBDA-LIST	*/

static object LI100(V977)

object V977;
{	 VMB89 VMS89 VMV89
	goto TTL;
TTL:;
	base[0]= (V977);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk475)();
	vs_top=sup;
	V978= vs_base[0];
	{object V979 = CMPcaddr(V978);
	VMR89(V979)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EARLY-ADD-NAMED-METHOD	*/

static object LI101(object V983,object V982,object V981,object V980,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB90 VMS90 VMV90
	{object V984;
	register object V985;
	register object V986;
	object V987;
	object V988;
	va_start(ap,first);
	if(narg <4) too_few_arguments();
	V984= V983;
	V985= V982;
	V986= V981;
	V987= V980;
	narg= narg - 4;
	V989 = list_vector_new(narg,first,ap);
	V988= V989;
	{object V990;
	object V991;
	object V992;
	base[3]= (V984);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk367)();
	vs_top=sup;
	V990= vs_base[0];
	{register object V993;
	register object V994;
	if(type_of(V990)==t_structure){
	goto T2084;}
	goto T2082;
	goto T2084;
T2084:;
	if(!(((V990)->str.str_def)==(VV[331]))){
	goto T2082;}
	V995= STREF(object,(V990),4);
	goto T2080;
	goto T2082;
T2082:;{object V997;
	V997= (VV[151]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V990);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V998= vs_base[0];
	if(!((V997)==(CMPcar(V998)))){
	goto T2087;}}
	V995= CMPcar(((V990))->cc.cc_turbo[12]);
	goto T2080;
	goto T2087;
T2087:;
	base[5]= VV[152];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	V995= vs_base[0];
	goto T2080;
T2080:;
	V993= (V995)->v.v_self[fix((VV[249]->s.s_dbind))];
	V994= CMPcar((V993));
	goto T2095;
T2095:;
	if(!(((V993))==Cnil)){
	goto T2096;}
	V991= Cnil;
	goto T2078;
	goto T2096;
T2096:;
	V999= (VFUN_NARGS=1,(*(LnkLI449))((V994)));
	if(!(equal(/* INLINE-ARGS */V999,(V986)))){
	goto T2100;}
	V1000= (*(LnkLI477))((V994));
	if(!(equal(/* INLINE-ARGS */V1000,(V985)))){
	goto T2100;}
	V991= (V994);
	goto T2078;
	goto T2100;
T2100:;
	V993= CMPcdr((V993));
	V994= CMPcar((V993));
	goto T2095;}
	goto T2078;
T2078:;
	base[3]= VV[24];
	base[4]= (V985);
	base[5]= (V987);
	base[6]= (V986);
	base[7]= (V988);
	base[8]= Cnil;
	V992= simple_symlispcall(VV[478],base+3,6);
	if(((V991))==Cnil){
	goto T2117;}
	base[3]= (V990);
	base[4]= (V991);
	(void)simple_symlispcall(VV[479],base+3,2);
	goto T2117;
T2117:;
	base[3]= (V990);
	base[4]= (V992);
	{object V1001 = simple_symlispcall(VV[480],base+3,2);
	VMR90(V1001)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function ADD-METHOD	*/

static object LI102(V1004,V1005)

register object V1004;register object V1005;
{	 VMB91 VMS91 VMV91
	goto TTL;
TTL:;{object V1006;
	V1006= (VV[151]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1004);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V1007= vs_base[0];
	if((V1006)==(CMPcar(V1007))){
	goto T2124;}}
	base[0]= VV[332];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2124;
T2124:;
	if(!(type_of((V1005))==t_cons||((V1005))==Cnil)){
	goto T2132;}
	if((CMPcar((V1005)))==(VV[322])){
	goto T2131;}
	goto T2132;
T2132:;
	base[0]= VV[333];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2131;
T2131:;
	{object V1009;
	object V1010;
	object V1011;
	if(type_of(V1004)==t_structure){
	goto T2142;}
	goto T2140;
	goto T2142;
T2142:;
	if(!(((V1004)->str.str_def)==(VV[334]))){
	goto T2140;}
	V1009= STREF(object,(V1004),4);
	goto T2138;
	goto T2140;
T2140:;{object V1013;
	V1013= (VV[151]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1004);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V1014= vs_base[0];
	if(!((V1013)==(CMPcar(V1014)))){
	goto T2145;}}
	V1009= CMPcar(((V1004))->cc.cc_turbo[12]);
	goto T2138;
	goto T2145;
T2145:;
	base[2]= VV[152];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V1009= vs_base[0];
	goto T2138;
T2138:;
	V1010= (VV[249]->s.s_dbind);
	V1011= make_cons(V1005,((V1009))->v.v_self[fix((V1010))]);
	(void)((((V1009))->v.v_self[fix((V1010))]=((V1011))));}
	(void)((VFUN_NARGS=3,(*(LnkLI464))((V1004),VV[335],(V1005))));
	V1016= (*(LnkLI456))((V1004));
	{register object x= /* INLINE-ARGS */V1016,V1015= (VV[275]->s.s_dbind);
	while(V1015!=Cnil)
	if(equal(x,V1015->c.c_car->c.c_car) &&V1015->c.c_car != Cnil){
	goto T2155;
	}else V1015=V1015->c.c_cdr;}
	{object V1017 = (VFUN_NARGS=1,(*(LnkLI481))((V1004)));
	VMR91(V1017)}
	goto T2155;
T2155:;
	{object V1018 = Cnil;
	VMR91(V1018)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REMOVE-METHOD	*/

static object LI103(V1021,V1022)

register object V1021;object V1022;
{	 VMB92 VMS92 VMV92
	goto TTL;
TTL:;{object V1023;
	V1023= (VV[151]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1021);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V1024= vs_base[0];
	if((V1023)==(CMPcar(V1024))){
	goto T2157;}}
	base[0]= VV[336];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2157;
T2157:;
	if(!(type_of((V1022))==t_cons||((V1022))==Cnil)){
	goto T2165;}
	if((CMPcar((V1022)))==(VV[322])){
	goto T2164;}
	goto T2165;
T2165:;
	base[0]= VV[337];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2164;
T2164:;
	if(type_of(V1021)==t_structure){
	goto T2175;}
	goto T2173;
	goto T2175;
T2175:;
	if(!(((V1021)->str.str_def)==(VV[338]))){
	goto T2173;}
	V1025= STREF(object,(V1021),4);
	goto T2171;
	goto T2173;
T2173:;{object V1027;
	V1027= (VV[151]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1021);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V1028= vs_base[0];
	if(!((V1027)==(CMPcar(V1028)))){
	goto T2178;}}
	V1025= CMPcar(((V1021))->cc.cc_turbo[12]);
	goto T2171;
	goto T2178;
T2178:;
	base[0]= VV[152];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1025= vs_base[0];
	goto T2171;
T2171:;{object V1029;
	V1029= (VV[249]->s.s_dbind);
	base[0]= (V1022);
	if(type_of(V1021)==t_structure){
	goto T2191;}
	goto T2189;
	goto T2191;
T2191:;
	if(!(((V1021)->str.str_def)==(VV[339]))){
	goto T2189;}
	V1031= STREF(object,(V1021),4);
	goto T2187;
	goto T2189;
T2189:;{object V1033;
	V1033= (VV[151]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1021);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V1034= vs_base[0];
	if(!((V1033)==(CMPcar(V1034)))){
	goto T2194;}}
	V1031= CMPcar(((V1021))->cc.cc_turbo[12]);
	goto T2187;
	goto T2194;
T2194:;
	base[2]= VV[152];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V1031= vs_base[0];
	goto T2187;
T2187:;
	base[1]= (V1031)->v.v_self[fix((VV[249]->s.s_dbind))];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk482)();
	vs_top=sup;
	V1030= vs_base[0];
	(void)(((V1025)->v.v_self[fix(V1029)]=(V1030)));}
	(void)((VFUN_NARGS=1,(*(LnkLI464))((V1021))));
	V1036= (*(LnkLI456))((V1021));
	{register object x= /* INLINE-ARGS */V1036,V1035= (VV[275]->s.s_dbind);
	while(V1035!=Cnil)
	if(equal(x,V1035->c.c_car->c.c_car) &&V1035->c.c_car != Cnil){
	goto T2202;
	}else V1035=V1035->c.c_cdr;}
	{object V1037 = (VFUN_NARGS=1,(*(LnkLI481))((V1021)));
	VMR92(V1037)}
	goto T2202;
T2202:;
	{object V1038 = Cnil;
	VMR92(V1038)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-METHOD	*/

static object LI104(object V1041,object V1040,object V1039,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB93 VMS93 VMV93
	{object V1042;
	register object V1043;
	register object V1044;
	object V1045;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V1042= V1041;
	V1043= V1040;
	V1044= V1039;
	narg = narg - 3;
	if (narg <= 0) goto T2204;
	else {
	V1045= first;}
	--narg; goto T2205;
	goto T2204;
T2204:;
	V1045= Ct;
	goto T2205;
T2205:;
	if(((*(LnkLI453))((V1042)))==Cnil){
	goto T2208;}{object V1046;
	{register object V1047;
	register object V1048;
	if(type_of(V1042)==t_structure){
	goto T2217;}
	goto T2215;
	goto T2217;
T2217:;
	if(!(((V1042)->str.str_def)==(VV[340]))){
	goto T2215;}
	V1049= STREF(object,(V1042),4);
	goto T2213;
	goto T2215;
T2215:;{object V1051;
	V1051= (VV[151]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1042);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V1052= vs_base[0];
	if(!((V1051)==(CMPcar(V1052)))){
	goto T2220;}}
	V1049= CMPcar(((V1042))->cc.cc_turbo[12]);
	goto T2213;
	goto T2220;
T2220:;
	base[2]= VV[152];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V1049= vs_base[0];
	goto T2213;
T2213:;
	V1047= (V1049)->v.v_self[fix((VV[249]->s.s_dbind))];
	V1048= CMPcar((V1047));
	goto T2228;
T2228:;
	if(!(((V1047))==Cnil)){
	goto T2229;}
	V1046= Cnil;
	goto T2211;
	goto T2229;
T2229:;
	V1053= (VFUN_NARGS=2,(*(LnkLI449))((V1048),Cnil));
	if(equal(/* INLINE-ARGS */V1053,(V1044))){
	goto T2235;}
	V1054= (VFUN_NARGS=2,(*(LnkLI449))((V1048),Ct));
	if(!(equal(/* INLINE-ARGS */V1054,(V1044)))){
	goto T2233;}
	goto T2235;
T2235:;
	V1055= (*(LnkLI477))((V1048));
	if(!(equal(/* INLINE-ARGS */V1055,(V1043)))){
	goto T2233;}
	V1046= (V1048);
	goto T2211;
	goto T2233;
T2233:;
	V1047= CMPcdr((V1047));
	V1048= CMPcar((V1047));
	goto T2228;}
	goto T2211;
T2211:;
	if(V1046==Cnil)goto T2210;
	{object V1056 = V1046;
	VMR93(V1056)}
	goto T2210;
T2210:;}
	if(((V1045))==Cnil){
	goto T2246;}
	base[0]= VV[341];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V1057 = vs_base[0];
	VMR93(V1057)}
	goto T2246;
T2246:;
	{object V1058 = Cnil;
	VMR93(V1058)}
	goto T2208;
T2208:;
	{object V1059 = (VFUN_NARGS=4,(*(LnkLI483))((V1042),(V1043),(V1044),(V1045)));
	VMR93(V1059)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function FIX-EARLY-GENERIC-FUNCTIONS	*/

static object LI105(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB94 VMS94 VMV94
	{object V1060;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T2249;
	else {
	V1060= first;}
	--narg; goto T2250;
	goto T2249;
T2249:;
	V1060= (VV[342]->s.s_dbind);
	goto T2250;
T2250:;
	{object V1061;
	V1061= Cnil;
	{register object V1062;
	register object V1063;
	V1062= (VV[278]->s.s_dbind);
	V1063= CMPcar((V1062));
	goto T2256;
T2256:;
	if(!(((V1062))==Cnil)){
	goto T2257;}
	goto T2252;
	goto T2257;
T2257:;
	base[1]= (VV[484]->s.s_gfdef);
	{object V1065;
	V1065= (*(LnkLI362))((V1063));
	if(type_of((V1065))==t_structure){
	goto T2271;}
	goto T2268;
	goto T2271;
T2271:;
	if(!((((V1065))->str.str_def)==(VV[343]))){
	goto T2268;}}
	V1066= (*(LnkLI362))((V1063));
	V1064= STREF(object,/* INLINE-ARGS */V1066,4);
	goto T2266;
	goto T2268;
T2268:;{object V1067;
	V1067= (VV[151]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (*(LnkLI362))((V1063));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V1068= vs_base[0];
	if(!((V1067)==(CMPcar(V1068)))){
	goto T2274;}}
	V1069= (*(LnkLI362))((V1063));
	V1064= CMPcar((/* INLINE-ARGS */V1069)->cc.cc_turbo[12]);
	goto T2266;
	goto T2274;
T2274:;
	base[3]= VV[152];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V1064= vs_base[0];
	goto T2266;
T2266:;
	base[2]= (V1064)->v.v_self[fix((VV[249]->s.s_dbind))];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk381)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2261;}
	V1061= make_cons(V1063,(V1061));
	goto T2261;
T2261:;
	V1062= CMPcdr((V1062));
	V1063= CMPcar((V1062));
	goto T2256;}
	goto T2252;
T2252:;
	{register object V1071;
	object V1072;
	V1071= nconc((V1061),VV[344]);
	V1072= CMPcar((V1071));
	goto T2290;
T2290:;
	if(!(((V1071))==Cnil)){
	goto T2291;}
	goto T2286;
	goto T2291;
T2291:;
	base[2]= (V1072);
	base[3]= (VV[278]->s.s_dbind);
	base[4]= VV[279];
	base[5]= (VV[255]->s.s_gfdef);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk485)();
	vs_top=sup;
	V1073= vs_base[0];
	(VV[278]->s.s_dbind)= make_cons((V1072),V1073);
	V1071= CMPcdr((V1071));
	V1072= CMPcar((V1071));
	goto T2290;}
	goto T2286;
T2286:;
	{register object V1074;
	object V1075;
	V1074= (VV[278]->s.s_dbind);
	V1075= CMPcar((V1074));
	goto T2311;
T2311:;
	if(!(((V1074))==Cnil)){
	goto T2312;}
	goto T2307;
	goto T2312;
T2312:;
	if(((V1060))==Cnil){
	goto T2316;}
	base[1]= Ct;
	base[2]= VV[345];
	base[3]= (V1075);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T2316;
T2316:;
	{register object V1076;
	object V1077;
	V1076= (*(LnkLI362))((V1075));
	if(type_of(V1076)==t_structure){
	goto T2330;}
	goto T2328;
	goto T2330;
T2330:;
	if(!(((V1076)->str.str_def)==(VV[346]))){
	goto T2328;}
	V1080= STREF(object,(V1076),4);
	goto T2326;
	goto T2328;
T2328:;{object V1082;
	V1082= (VV[151]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V1076);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	V1083= vs_base[0];
	if(!((V1082)==(CMPcar(V1083)))){
	goto T2333;}}
	V1080= CMPcar(((V1076))->cc.cc_turbo[12]);
	goto T2326;
	goto T2333;
T2333:;
	base[4]= VV[152];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V1080= vs_base[0];
	goto T2326;
T2326:;
	{object V1078;
	object V1079= (V1080)->v.v_self[fix((VV[249]->s.s_dbind))];
	if(V1079==Cnil){
	V1077= Cnil;
	goto T2324;}
	base[3]=V1078=MMcons(Cnil,Cnil);
	goto T2325;
T2325:;
	{object V1085;
	base[5]= (V1079->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk475)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lcopy_list();
	vs_top=sup;
	V1085= vs_base[0];
	{object V1087;
	V1087= (VFUN_NARGS=2,(*(LnkLI449))((V1079->c.c_car),Ct));
	(CMPcdddr(V1085))->c.c_car = (V1087);
	(void)(CMPcdddr(V1085));}
	{object V1088;
	V1088= (V1085);
	 vs_top=base+4;
	 while(V1088!=Cnil)
	 {vs_push((V1088)->c.c_car);V1088=(V1088)->c.c_cdr;}
	vs_base=base+4;}
	(void) (*Lnk486)();
	vs_top=sup;
	(V1078->c.c_car)= vs_base[0];}
	if((V1079=MMcdr(V1079))==Cnil){
	V1077= base[3];
	goto T2324;}
	V1078=MMcdr(V1078)=MMcons(Cnil,Cnil);
	goto T2325;}
	goto T2324;
T2324:;
	{object V1090;
	V1090= (VV[347]->s.s_dbind);
	V1091= ({object _tmp=get(VV[373],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[373])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[373])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V1092 = V1091,
	(type_of(V1092) == t_sfun ?(*((V1092)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V1092)==t_vfun) ?
	(*((V1092)->sfn.sfn_self)):
	(fcall.fun=(V1092),fcalln))((V1090),V1076)));}
	{object V1094;
	V1094= (VV[266]->s.s_dbind);
	V1095= ({object _tmp=get(VV[451],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[451])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[451])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V1096 = V1095,
	(type_of(V1096) == t_sfun ?(*((V1096)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V1096)==t_vfun) ?
	(*((V1096)->sfn.sfn_self)):
	(fcall.fun=(V1096),fcalln))((V1094),V1076)));}
	(void)((*(LnkLI487))((V1076),(V1077)));}
	V1074= CMPcdr((V1074));
	V1075= CMPcar((V1074));
	goto T2311;}
	goto T2307;
T2307:;
	{register object V1097;
	object V1098;
	V1097= (VV[348]->s.s_dbind);
	V1098= CMPcar((V1097));
	goto T2362;
T2362:;
	if(!(((V1097))==Cnil)){
	goto T2363;}
	goto T2358;
	goto T2363;
T2363:;
	{object V1099;
	object V1100;
	V1099= CMPcar((V1098));
	base[3]= CMPcaddr((V1098));
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	V1100= vs_base[0];
	V1101= ({object _tmp=get(VV[362],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[362])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[362])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V1102 = V1101,
	(type_of(V1102) == t_sfun ?(*((V1102)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V1102)==t_vfun) ?
	(*((V1102)->sfn.sfn_self)):
	(fcall.fun=(V1102),fcalln))((V1100),(V1099))));}
	V1097= CMPcdr((V1097));
	V1098= CMPcar((V1097));
	goto T2362;}
	goto T2358;
T2358:;
	{register object V1103;
	object V1104;
	V1103= (VV[275]->s.s_dbind);
	V1104= CMPcar((V1103));
	goto T2380;
T2380:;
	if(!(((V1103))==Cnil)){
	goto T2381;}
	{object V1105 = Cnil;
	VMR94(V1105)}
	goto T2381;
T2381:;
	{object V1106;
	object V1107;
	object V1108;
	V1106= CMPcar((V1104));
	V1107= (*(LnkLI362))((V1106));
	{object V1109;
	object V1110= CMPcdr((V1104));
	if(V1110==Cnil){
	V1108= Cnil;
	goto T2388;}
	base[4]=V1109=MMcons(Cnil,Cnil);
	goto T2389;
T2389:;
	{object V1112;
	object V1113;
	object V1114;
	object V1115;
	object V1116;
	V1112= CMPcar((V1110->c.c_car));
	V1113= CMPcadr((V1110->c.c_car));
	V1114= CMPcaddr((V1110->c.c_car));
	if((V1114)!=Cnil){
	V1115= (V1114);
	goto T2394;}
	V1115= (V1106);
	goto T2394;
T2394:;
	base[11]= (V1115);
	vs_top=(vs_base=base+11)+1;
	Lsymbol_function();
	vs_top=sup;
	base[9]= vs_base[0];
	base[9]=MMcons(base[9],Cnil);
	base[11]= 
	make_cclosure_new(LC133,Cnil,base[9],Cdata);
	base[12]= list(2,VV[173],(V1115));
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk361)();
	vs_top=sup;
	V1117= vs_base[0];
	V1116= list(2,VV[39],V1117);
	base[11]= VV[24];
	base[12]= Cnil;
	base[13]= (V1112);
	base[14]= (V1113);
	base[15]= (V1116);
	base[16]= Cnil;
	(V1109->c.c_car)= simple_symlispcall(VV[478],base+11,6);}
	if((V1110=MMcdr(V1110))==Cnil){
	V1108= base[4];
	goto T2388;}
	V1109=MMcdr(V1109)=MMcons(Cnil,Cnil);
	goto T2389;}
	goto T2388;
T2388:;
	{object V1119;
	V1119= (VV[347]->s.s_dbind);
	V1120= ({object _tmp=get(VV[373],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[373])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[373])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V1121 = V1120,
	(type_of(V1121) == t_sfun ?(*((V1121)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V1121)==t_vfun) ?
	(*((V1121)->sfn.sfn_self)):
	(fcall.fun=(V1121),fcalln))((V1119),V1107)));}
	{object V1123;
	V1123= (VV[266]->s.s_dbind);
	V1124= ({object _tmp=get(VV[451],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[451])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[451])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V1125 = V1124,
	(type_of(V1125) == t_sfun ?(*((V1125)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V1125)==t_vfun) ?
	(*((V1125)->sfn.sfn_self)):
	(fcall.fun=(V1125),fcalln))((V1123),V1107)));}
	(void)((*(LnkLI487))((V1107),(V1108)));}
	V1103= CMPcdr((V1103));
	V1104= CMPcar((V1103));
	goto T2380;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for PARSE-DEFMETHOD	*/

static void L106()
{register object *base=vs_base;
	register object *sup=base+VM95; VC95
	vs_check;
	{register object V1126;
	check_arg(1);
	V1126=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1127;
	register object V1128;
	object V1129;
	{object V1130;
	V1130= CMPcar((V1126));
	V1126= CMPcdr((V1126));
	V1127= (V1130);}
	V1128= Cnil;
	V1129= Cnil;
	goto T2424;
T2424:;
	if((CMPcar((V1126)))==Cnil){
	goto T2427;}
	if(!(type_of(CMPcar((V1126)))!=t_cons)){
	goto T2427;}
	{register object V1131;
	{register object V1132;
	V1132= CMPcar((V1126));
	V1126= CMPcdr((V1126));
	V1131= (V1132);}
	V1128= make_cons((V1131),(V1128));
	goto T2425;}
	goto T2427;
T2427:;
	V1128= nreverse((V1128));
	goto T2422;
	goto T2425;
T2425:;
	goto T2424;
	goto T2422;
T2422:;
	{object V1133;
	V1133= CMPcar((V1126));
	V1126= CMPcdr((V1126));
	V1129= (V1133);}
	base[1]= (V1127);
	base[2]= (V1128);
	base[3]= (V1129);
	base[4]= (V1126);
	vs_top=(vs_base=base+1)+4;
	return;}
	}
}
/*	local entry for function PARSE-SPECIALIZERS	*/

static object LI107(V1135)

object V1135;
{	 VMB96 VMS96 VMV96
	goto TTL;
TTL:;
	{object V1136;
	object V1137= (V1135);
	if(V1137==Cnil){
	{object V1138 = Cnil;
	VMR96(V1138)}}
	base[0]=V1136=MMcons(Cnil,Cnil);
	goto T2447;
T2447:;
	base[1]= (V1137->c.c_car);
	vs_top=(vs_base=base+1)+1;
	L108(base);
	vs_top=sup;
	(V1136->c.c_car)= vs_base[0];
	if((V1137=MMcdr(V1137))==Cnil){
	{object V1139 = base[0];
	VMR96(V1139)}}
	V1136=MMcdr(V1136)=MMcons(Cnil,Cnil);
	goto T2447;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UNPARSE-SPECIALIZERS	*/

static object LI109(V1141)

register object V1141;
{	 VMB97 VMS97 VMV97
	goto TTL;
TTL:;
	if(!(type_of((V1141))==t_cons||((V1141))==Cnil)){
	goto T2451;}
	{object V1142;
	object V1143= (V1141);
	if(V1143==Cnil){
	{object V1144 = Cnil;
	VMR97(V1144)}}
	base[0]=V1142=MMcons(Cnil,Cnil);
	goto T2453;
T2453:;
	base[1]= (V1143->c.c_car);
	vs_top=(vs_base=base+1)+1;
	L110(base);
	vs_top=sup;
	(V1142->c.c_car)= vs_base[0];
	if((V1143=MMcdr(V1143))==Cnil){
	{object V1145 = base[0];
	VMR97(V1145)}}
	V1142=MMcdr(V1142)=MMcons(Cnil,Cnil);
	goto T2453;}
	goto T2451;
T2451:;
	base[0]= (V1141);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk448)(Lclptr448);
	vs_top=sup;
	V1141= vs_base[0];
	goto TTL;
	base[0]=base[0];
	return Cnil;
}
/*	function definition for PARSE-METHOD-OR-SPEC	*/

static void L111()
{register object *base=vs_base;
	register object *sup=base+VM98; VC98
	vs_check;
	{object V1146;
	object V1147;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1146=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2459;}
	V1147=(base[1]);
	vs_top=sup;
	goto T2460;
	goto T2459;
T2459:;
	V1147= Ct;
	goto T2460;
T2460:;
	{register object V1148;
	register object V1149;
	object V1150;
	object V1151;
	V1148= Cnil;
	V1149= Cnil;
	V1150= Cnil;
	V1151= Cnil;
	base[2]= (V1146);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk488)(Lclptr488);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2464;}
	V1149= (V1146);
	base[2]= (V1149);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk397)(Lclptr397);
	vs_top=sup;
	V1148= vs_base[0];
	if((V1148)==Cnil){
	V1151= Cnil;
	goto T2473;}
	base[2]= (V1148);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk455)(Lclptr455);
	vs_top=sup;
	V1151= vs_base[0];
	goto T2473;
T2473:;
	if(((V1151))==Cnil){
	goto T2477;}
	base[2]= (V1149);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk490)(Lclptr490);
	vs_top=sup;
	V1152= vs_base[0];
	base[2]= (V1149);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk448)(Lclptr448);
	vs_top=sup;
	V1153= vs_base[0];
	V1154= (*(LnkLI491))(V1153);
	V1155= (*(LnkLI413))((V1151),V1152,/* INLINE-ARGS */V1154);
	V1150= (*(LnkLI489))(/* INLINE-ARGS */V1155);
	goto T2475;
	goto T2477;
T2477:;
	base[3]= Cnil;
	base[4]= VV[352];
	base[5]= (V1149);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lmake_symbol();
	vs_top=sup;
	V1150= vs_base[0];
	goto T2475;
T2475:;
	goto T2462;
	goto T2464;
T2464:;
	{object V1156;
	object V1157;
	register object V1158;
	base[2]= (V1146);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk368)();
	if(vs_base>=vs_top){vs_top=sup;goto T2489;}
	V1156= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2490;}
	V1157= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2491;}
	V1158= vs_base[0];
	vs_top=sup;
	goto T2492;
	goto T2489;
T2489:;
	V1156= Cnil;
	goto T2490;
T2490:;
	V1157= Cnil;
	goto T2491;
T2491:;
	V1158= Cnil;
	goto T2492;
T2492:;
	if((V1147)!=Cnil){
	if(((V1147))!=Cnil){
	goto T2496;}
	goto T2497;}
	if(((*(LnkLI371))((V1156)))!=Cnil){
	goto T2496;}
	goto T2497;
T2497:;
	V1148= Cnil;
	goto T2495;
	goto T2496;
T2496:;
	V1148= (*(LnkLI362))((V1156));
	goto T2495;
T2495:;
	if(((V1148))!=Cnil){
	goto T2493;}
	goto T2462;
	goto T2493;
T2493:;
	{object V1159;
	base[2]= (V1148);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk492)(Lclptr492);
	vs_top=sup;
	V1159= vs_base[0];
	V1160= (*(LnkLI474))((V1158));
	V1162 = CMPmake_fixnum((long)length((V1158)));
	base[2]= number_minus((V1159),V1162);
	base[3]= VV[235];
	base[4]= (VV[353]->s.s_dbind);
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	V1161= vs_base[0];
	V1158= append(/* INLINE-ARGS */V1160,V1161);
	V1149= (VFUN_NARGS=4,(*(LnkLI493))((V1148),(V1157),(V1158),(V1147)));
	if(((V1149))!=Cnil){
	goto T2506;}
	goto T2462;
	goto T2506;
T2506:;
	V1163= (*(LnkLI413))((V1156),(V1157),(V1158));
	V1150= (*(LnkLI489))(/* INLINE-ARGS */V1163);}}
	goto T2462;
T2462:;
	base[2]= (V1148);
	base[3]= (V1149);
	base[4]= (V1150);
	vs_top=(vs_base=base+2)+3;
	return;}
	}
}
/*	local entry for function EXTRACT-PARAMETERS	*/

static object LI112(V1165)

object V1165;
{	 VMB99 VMS99 VMV99
	goto TTL;
TTL:;
	{object V1166;
	object V1167;
	object V1168;
	base[0]= (V1165);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk385)();
	if(vs_base>=vs_top){vs_top=sup;goto T2515;}
	V1166= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2516;}
	V1167= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2517;}
	V1168= vs_base[0];
	vs_top=sup;
	goto T2518;
	goto T2515;
T2515:;
	V1166= Cnil;
	goto T2516;
T2516:;
	V1167= Cnil;
	goto T2517;
T2517:;
	V1168= Cnil;
	goto T2518;
T2518:;
	{object V1169 = (V1166);
	VMR99(V1169)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXTRACT-LAMBDA-LIST	*/

static object LI113(V1171)

object V1171;
{	 VMB100 VMS100 VMV100
	goto TTL;
TTL:;
	{object V1172;
	object V1173;
	object V1174;
	base[0]= (V1171);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk385)();
	if(vs_base>=vs_top){vs_top=sup;goto T2521;}
	V1172= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2522;}
	V1173= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2523;}
	V1174= vs_base[0];
	vs_top=sup;
	goto T2524;
	goto T2521;
T2521:;
	V1172= Cnil;
	goto T2522;
T2522:;
	V1173= Cnil;
	goto T2523;
T2523:;
	V1174= Cnil;
	goto T2524;
T2524:;
	{object V1175 = (V1173);
	VMR100(V1175)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXTRACT-SPECIALIZER-NAMES	*/

static object LI114(V1177)

object V1177;
{	 VMB101 VMS101 VMV101
	goto TTL;
TTL:;
	{object V1178;
	object V1179;
	object V1180;
	base[0]= (V1177);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk385)();
	if(vs_base>=vs_top){vs_top=sup;goto T2527;}
	V1178= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2528;}
	V1179= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2529;}
	V1180= vs_base[0];
	vs_top=sup;
	goto T2530;
	goto T2527;
T2527:;
	V1178= Cnil;
	goto T2528;
T2528:;
	V1179= Cnil;
	goto T2529;
T2529:;
	V1180= Cnil;
	goto T2530;
T2530:;
	{object V1181 = (V1180);
	VMR101(V1181)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXTRACT-REQUIRED-PARAMETERS	*/

static object LI115(V1183)

object V1183;
{	 VMB102 VMS102 VMV102
	goto TTL;
TTL:;
	{object V1184;
	object V1185;
	object V1186;
	object V1187;
	base[0]= (V1183);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk385)();
	if(vs_base>=vs_top){vs_top=sup;goto T2533;}
	V1184= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2534;}
	V1185= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2535;}
	V1186= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2536;}
	V1187= vs_base[0];
	vs_top=sup;
	goto T2537;
	goto T2533;
T2533:;
	V1184= Cnil;
	goto T2534;
T2534:;
	V1185= Cnil;
	goto T2535;
T2535:;
	V1186= Cnil;
	goto T2536;
T2536:;
	V1187= Cnil;
	goto T2537;
T2537:;
	{object V1188 = (V1187);
	VMR102(V1188)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for PARSE-SPECIALIZED-LAMBDA-LIST	*/

static void L116()
{register object *base=vs_base;
	register object *sup=base+VM103; VC103
	vs_check;
	{register object V1189;
	object V1190;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1189=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2538;}
	V1190=(base[1]);
	vs_top=sup;
	goto T2539;
	goto T2538;
T2538:;
	V1190= Cnil;
	goto T2539;
T2539:;
	{register object V1191;
	V1191= CMPcar((V1189));
	if(((V1189))!=Cnil){
	goto T2543;}
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+2)+4;
	return;
	goto T2543;
T2543:;
	if(!(((V1191))==(VV[65]))){
	goto T2550;}
	base[2]= Cnil;
	base[3]= (V1189);
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	return;
	goto T2550;
T2550:;
	{register object x= (V1191),V1192= VV[193];
	while(V1192!=Cnil)
	if(x==(V1192->c.c_car)){
	goto T2557;
	}else V1192=V1192->c.c_cdr;
	goto T2556;}
	goto T2557;
T2557:;
	{register object x= (V1191),V1193= VV[354];
	while(V1193!=Cnil)
	if(x==(V1193->c.c_car)){
	goto T2558;
	}else V1193=V1193->c.c_cdr;}
	base[2]= VV[355];
	base[3]= (V1191);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk466)();
	vs_top=sup;
	goto T2558;
T2558:;
	{object V1194;
	object V1195;
	base[2]= CMPcdr((V1189));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk385)();
	if(vs_base>=vs_top){vs_top=sup;goto T2566;}
	V1194= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2567;}
	V1195= vs_base[0];
	vs_top=sup;
	goto T2568;
	goto T2566;
T2566:;
	V1194= Cnil;
	goto T2567;
T2567:;
	V1195= Cnil;
	goto T2568;
T2568:;
	base[2]= (V1194);
	base[3]= make_cons((V1191),(V1195));
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+2)+4;
	return;}
	goto T2556;
T2556:;
	if(((V1190))==Cnil){
	goto T2574;}
	{object V1196;
	object V1197;
	base[2]= CMPcdr((V1189));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk385)();
	if(vs_base>=vs_top){vs_top=sup;goto T2579;}
	V1196= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2580;}
	V1197= vs_base[0];
	vs_top=sup;
	goto T2581;
	goto T2579;
T2579:;
	V1196= Cnil;
	goto T2580;
T2580:;
	V1197= Cnil;
	goto T2581;
T2581:;
	if(!(type_of((V1191))==t_cons||((V1191))==Cnil)){
	goto T2585;}
	V1198= CMPcar((V1191));
	goto T2583;
	goto T2585;
T2585:;
	V1198= (V1191);
	goto T2583;
T2583:;
	base[2]= make_cons(V1198,(V1196));
	base[3]= make_cons((V1191),(V1197));
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+2)+4;
	return;}
	goto T2574;
T2574:;
	{object V1199;
	object V1200;
	object V1201;
	object V1202;
	base[2]= CMPcdr((V1189));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk385)();
	if(vs_base>=vs_top){vs_top=sup;goto T2592;}
	V1199= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2593;}
	V1200= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2594;}
	V1201= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2595;}
	V1202= vs_base[0];
	vs_top=sup;
	goto T2596;
	goto T2592;
T2592:;
	V1199= Cnil;
	goto T2593;
T2593:;
	V1200= Cnil;
	goto T2594;
T2594:;
	V1201= Cnil;
	goto T2595;
T2595:;
	V1202= Cnil;
	goto T2596;
T2596:;
	if(!(type_of((V1191))==t_cons||((V1191))==Cnil)){
	goto T2600;}
	V1203= CMPcar((V1191));
	goto T2598;
	goto T2600;
T2600:;
	V1203= (V1191);
	goto T2598;
T2598:;
	base[2]= make_cons(V1203,(V1199));
	if(!(type_of((V1191))==t_cons||((V1191))==Cnil)){
	goto T2605;}
	V1204= CMPcar((V1191));
	goto T2603;
	goto T2605;
T2605:;
	V1204= (V1191);
	goto T2603;
T2603:;
	base[3]= make_cons(V1204,(V1200));
	if(!(type_of((V1191))==t_cons||((V1191))==Cnil)){
	goto T2610;}
	V1205= CMPcadr((V1191));
	goto T2608;
	goto T2610;
T2610:;
	V1205= Ct;
	goto T2608;
T2608:;
	base[4]= make_cons(V1205,(V1201));
	if(!(type_of((V1191))==t_cons||((V1191))==Cnil)){
	goto T2615;}
	V1206= CMPcar((V1191));
	goto T2613;
	goto T2615;
T2615:;
	V1206= (V1191);
	goto T2613;
T2613:;
	base[5]= make_cons(V1206,(V1202));
	vs_top=(vs_base=base+2)+4;
	return;}}
	}
}
/*	macro definition for SYMBOL-MACROLET	*/

static void L117()
{register object *base=vs_base;
	register object *sup=base+VM104; VC104
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1207=base[0]->c.c_cdr;
	if(endp(V1207))invalid_macro_call();
	base[2]= (V1207->c.c_car);
	V1207=V1207->c.c_cdr;
	base[3]= V1207;}
	{object V1208;
	object V1209= base[2];
	if(V1209==Cnil){
	base[4]= Cnil;
	goto T2617;}
	base[5]=V1208=MMcons(Cnil,Cnil);
	goto T2618;
T2618:;
	V1211= CMPcar((V1209->c.c_car));
	V1212= (*(LnkLI494))(CMPcar((V1209->c.c_car)),base[1]);
	(V1208->c.c_car)= list(3,/* INLINE-ARGS */V1211,/* INLINE-ARGS */V1212,CMPcadr((V1209->c.c_car)));
	if((V1209=MMcdr(V1209))==Cnil){
	base[4]= base[5];
	goto T2617;}
	V1208=MMcdr(V1208)=MMcons(Cnil,Cnil);
	goto T2618;}
	goto T2617;
T2617:;
	base[4]=MMcons(base[4],Cnil);
	base[5]= make_cons(VV[13],base[3]);
	base[6]= base[1];
	base[7]= 
	make_cclosure_new(LC134,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk410)();
	return;
}
/*	local entry for function EXPAND-SYMBOL-MACROLET-INTERNAL	*/

static object LI120(V1217,V1218,V1219,V1220)

object V1217;register object V1218;object V1219;object V1220;
{	 VMB105 VMS105 VMV105
	goto TTL;
TTL:;
	base[0]= (V1220);
	base[1]= (V1217);
	base[2]= Cnil;
	if(((V1219))==(VV[203])){
	goto T2624;}
	{object V1221 = (V1218);
	VMR105(V1221)}
	goto T2624;
T2624:;
	if(!(type_of((V1218))==t_symbol)){
	goto T2627;}
	{register object x= (V1218),V1222= base[1];
	while(V1222!=Cnil)
	if(eql(x,V1222->c.c_car->c.c_car) &&V1222->c.c_car != Cnil){
	base[2]= (V1222->c.c_car);
	goto T2633;
	}else V1222=V1222->c.c_cdr;
	base[2]= Cnil;}
	goto T2633;
T2633:;
	if((base[2])==Cnil){
	goto T2630;}
	V1223= CMPcadr(base[2]);
	V1224= (*(LnkLI494))((V1218),base[0]);
	if(!((/* INLINE-ARGS */V1223)==(/* INLINE-ARGS */V1224))){
	goto T2630;}
	{object V1225 = CMPcaddr(base[2]);
	VMR105(V1225)}
	goto T2630;
T2630:;
	{object V1226 = (V1218);
	VMR105(V1226)}
	goto T2627;
T2627:;
	if(type_of((V1218))==t_cons||((V1218))==Cnil){
	goto T2636;}
	{object V1227 = (V1218);
	VMR105(V1227)}
	goto T2636;
T2636:;
	{register object x= CMPcar((V1218)),V1228= VV[356];
	while(V1228!=Cnil)
	if(eql(x,V1228->c.c_car)){
	goto T2640;
	}else V1228=V1228->c.c_cdr;
	goto T2639;}
	goto T2640;
T2640:;
	base[3]= CMPcar((V1218));
	{object V1229;
	V1229= Cnil;
	base[4]= CMPcdr((V1218));
	vs_top=(vs_base=base+4)+1;
	L121(base);
	vs_top=sup;
	V1229= vs_base[0];
	{object V1230 = (*(LnkLI495))((V1218),base[3],(V1229));
	VMR105(V1230)}}
	goto T2639;
T2639:;
	if(!((CMPcar((V1218)))==(VV[357]))){
	goto T2646;}
	{object V1231;
	object V1232;
	V1231= CMPcadr((V1218));
	{object V1233;
	object V1234= (V1231);
	if(V1234==Cnil){
	V1232= Cnil;
	goto T2649;}
	base[5]=V1233=MMcons(Cnil,Cnil);
	goto T2650;
T2650:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	(V1233->c.c_car)= vs_base[0];
	if((V1234=MMcdr(V1234))==Cnil){
	V1232= base[5];
	goto T2649;}
	V1233=MMcdr(V1233)=MMcons(Cnil,Cnil);
	goto T2650;}
	goto T2649;
T2649:;
	V1236= CMPcaddr((V1218));
	{object V1238;
	object V1239= (V1231);
	object V1240= (V1232);
	if(V1239==Cnil||V1240==Cnil){
	V1237= Cnil;
	goto T2652;}
	base[5]=V1238=MMcons(Cnil,Cnil);
	goto T2653;
T2653:;
	(V1238->c.c_car)= list(3,VV[34],(V1239->c.c_car),(V1240->c.c_car));
	if((V1239=MMcdr(V1239))==Cnil||(V1240=MMcdr(V1240))==Cnil){
	V1237= base[5];
	goto T2652;}
	V1238=MMcdr(V1238)=MMcons(Cnil,Cnil);
	goto T2653;}
	goto T2652;
T2652:;
	{object V1243 = listA(4,VV[358],(V1232),/* INLINE-ARGS */V1236,reverse(V1237));
	VMR105(V1243)}}
	goto T2646;
T2646:;
	{object V1244 = (V1218);
	VMR105(V1244)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for WITH-SLOTS	*/

static void L122()
{register object *base=vs_base;
	register object *sup=base+VM106; VC106
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1245=base[0]->c.c_cdr;
	if(endp(V1245))invalid_macro_call();
	base[2]= (V1245->c.c_car);
	V1245=V1245->c.c_cdr;
	if(endp(V1245))invalid_macro_call();
	base[3]= (V1245->c.c_car);
	V1245=V1245->c.c_cdr;
	base[4]= V1245;}
	{register object V1246;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1246= vs_base[0];
	V1247= list(2,(V1246),base[3]);
	V1248= make_cons(/* INLINE-ARGS */V1247,Cnil);
	V1249= list(2,VV[49],list(2,VV[55],(V1246)));
	{object V1251;
	if(!(type_of(base[3])==t_cons)){
	goto T2659;}
	if(!((CMPcar(base[3]))==(VV[143]))){
	goto T2659;}
	V1251= CMPcaddr(base[3]);
	goto T2657;
	goto T2659;
T2659:;
	V1251= base[3];
	goto T2657;
T2657:;
	if(type_of((V1251))==t_symbol){
	goto T2663;}
	V1250= Cnil;
	goto T2656;
	goto T2663;
T2663:;
	V1252= list(2,VV[49],list(3,VV[359],(V1246),(V1251)));
	V1250= make_cons(/* INLINE-ARGS */V1252,Cnil);}
	goto T2656;
T2656:;
	{object V1254;
	object V1255= base[2];
	if(V1255==Cnil){
	V1253= Cnil;
	goto T2665;}
	base[5]=V1254=MMcons(Cnil,Cnil);
	goto T2666;
T2666:;
	{register object V1256;
	V1256= (V1255->c.c_car);
	{object V1257;
	object V1258;
	if(!(type_of((V1256))==t_symbol)){
	goto T2670;}
	V1257= (V1256);
	goto T2668;
	goto T2670;
T2670:;
	V1257= CMPcar((V1256));
	goto T2668;
T2668:;
	if(!(type_of((V1256))==t_symbol)){
	goto T2674;}
	V1258= (V1256);
	goto T2672;
	goto T2674;
T2674:;
	V1258= CMPcadr((V1256));
	goto T2672;
T2672:;
	(V1254->c.c_car)= list(2,(V1257),list(3,VV[204],(V1246),list(2,VV[1],(V1258))));}}
	if((V1255=MMcdr(V1255))==Cnil){
	V1253= base[5];
	goto T2665;}
	V1254=MMcdr(V1254)=MMcons(Cnil,Cnil);
	goto T2666;}
	goto T2665;
T2665:;
	V1259= list(2,(V1246),listA(3,VV[360],V1253,base[4]));
	base[5]= listA(4,VV[100],/* INLINE-ARGS */V1248,/* INLINE-ARGS */V1249,append(V1250,/* INLINE-ARGS */V1259));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	macro definition for WITH-ACCESSORS	*/

static void L123()
{register object *base=vs_base;
	register object *sup=base+VM107; VC107
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1260=base[0]->c.c_cdr;
	if(endp(V1260))invalid_macro_call();
	base[2]= (V1260->c.c_car);
	V1260=V1260->c.c_cdr;
	if(endp(V1260))invalid_macro_call();
	base[3]= (V1260->c.c_car);
	V1260=V1260->c.c_cdr;
	base[4]= V1260;}
	{register object V1261;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1261= vs_base[0];
	V1262= list(2,(V1261),base[3]);
	V1263= make_cons(/* INLINE-ARGS */V1262,Cnil);
	V1264= list(2,VV[49],list(2,VV[55],(V1261)));
	{object V1266;
	if(!(type_of(base[3])==t_cons)){
	goto T2680;}
	if(!((CMPcar(base[3]))==(VV[143]))){
	goto T2680;}
	V1266= CMPcaddr(base[3]);
	goto T2678;
	goto T2680;
T2680:;
	V1266= base[3];
	goto T2678;
T2678:;
	if(type_of((V1266))==t_symbol){
	goto T2684;}
	V1265= Cnil;
	goto T2677;
	goto T2684;
T2684:;
	V1267= list(2,VV[49],list(3,VV[359],(V1261),(V1266)));
	V1265= make_cons(/* INLINE-ARGS */V1267,Cnil);}
	goto T2677;
T2677:;
	{object V1269;
	object V1270= base[2];
	if(V1270==Cnil){
	V1268= Cnil;
	goto T2686;}
	base[5]=V1269=MMcons(Cnil,Cnil);
	goto T2687;
T2687:;
	{object V1272;
	object V1273;
	V1272= CMPcar((V1270->c.c_car));
	V1273= CMPcadr((V1270->c.c_car));
	(V1269->c.c_car)= list(2,(V1272),list(2,(V1273),(V1261)));}
	if((V1270=MMcdr(V1270))==Cnil){
	V1268= base[5];
	goto T2686;}
	V1269=MMcdr(V1269)=MMcons(Cnil,Cnil);
	goto T2687;}
	goto T2686;
T2686:;
	V1274= list(2,(V1261),listA(3,VV[360],V1268,base[4]));
	base[5]= listA(4,VV[100],/* INLINE-ARGS */V1263,/* INLINE-ARGS */V1264,append(V1265,/* INLINE-ARGS */V1274));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	local function SCAN-SETF	*/

static void L121(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM108; VC108
	vs_check;
	{register object V1275;
	check_arg(1);
	V1275=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1275))!=Cnil){
	goto T2692;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2692;
T2692:;
	{register object x= CMPcar((V1275)),V1277= base0[1];
	while(V1277!=Cnil)
	if(eql(x,V1277->c.c_car->c.c_car) &&V1277->c.c_car != Cnil){
	base0[2]= (V1277->c.c_car);
	goto T2699;
	}else V1277=V1277->c.c_cdr;
	base0[2]= Cnil;}
	goto T2699;
T2699:;
	if((base0[2])==Cnil){
	goto T2696;}
	V1278= CMPcadr(base0[2]);
	V1279= (*(LnkLI494))(CMPcar((V1275)),base0[0]);
	if(!((/* INLINE-ARGS */V1278)==(/* INLINE-ARGS */V1279))){
	goto T2696;}
	base0[3]= VV[34];
	V1276= CMPcaddr(base0[2]);
	goto T2694;
	goto T2696;
T2696:;
	V1276= CMPcar((V1275));
	goto T2694;
T2694:;
	V1280= CMPcadr((V1275));
	base[1]= CMPcddr((V1275));
	vs_top=(vs_base=base+1)+1;
	L121(base0);
	vs_top=sup;
	V1281= vs_base[0];
	base[1]= (VFUN_NARGS=4,(*(LnkLI496))((V1275),V1276,/* INLINE-ARGS */V1280,V1281));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC134(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM109; VC109
	vs_check;
	{object V1282;
	object V1283;
	object V1284;
	check_arg(3);
	V1282=(base[0]);
	V1283=(base[1]);
	V1284=(base[2]);
	vs_top=sup;
	base[3]= (*(LnkLI497))((base0[0]->c.c_car),(V1282),(V1283),(V1284));
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	local function UNPARSE	*/

static void L110(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM110; VC110
	vs_check;
	{object V1285;
	check_arg(1);
	V1285=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V1285);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk498)(Lclptr498);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2706;}
	{register object V1286;
	base[1]= (V1285);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk499)(Lclptr499);
	vs_top=sup;
	V1286= vs_base[0];
	if(!(type_of((V1286))==t_cons)){
	goto T2712;}
	if(!((CMPcar((V1286)))==(VV[54]))){
	goto T2712;}
	{object V1287;
	object V1288;
	V1287= CMPcadr((V1286));
	base[3]= (V1287);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk379)(Lclptr379);
	vs_top=sup;
	V1288= vs_base[0];
	V1289= (VFUN_NARGS=2,(*(LnkLI304))((V1288),Cnil));
	if(!(((V1287))==(/* INLINE-ARGS */V1289))){
	goto T2720;}
	base[3]= (V1288);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2720;
T2720:;
	base[3]= (V1286);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2712;
T2712:;
	base[1]= (V1286);
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2706;
T2706:;
	base[1]= VV[351];
	base[2]= (V1285);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	}
}
/*	local function PARSE	*/

static void L108(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM111; VC111
	vs_check;
	{register object V1290;
	check_arg(1);
	V1290=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1291;
	base[1]= (V1290);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk500)();
	vs_top=sup;
	V1291= vs_base[0];
	base[1]= (V1291);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk498)(Lclptr498);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2727;}
	base[1]= (V1291);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2727;
T2727:;
	if(!(type_of((V1290))==t_symbol)){
	goto T2731;}
	base[1]= VV[349];
	base[2]= (V1290);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	goto T2731;
T2731:;
	base[1]= VV[350];
	base[2]= (V1290);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC133(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM112; VC112
	vs_check;
	{object V1292;
	register object V1293;
	check_arg(2);
	V1292=(base[0]);
	V1293=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	{object V1294;
	V1294= (V1292);
	 vs_top=base+3;
	 while(V1294!=Cnil)
	 {vs_push((V1294)->c.c_car);V1294=(V1294)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local function CLOSURE	*/

static void LC132(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM113; VC113
	vs_check;
	{object V1295;
	check_arg(1);
	V1295=(base[0]);
	vs_top=sup;
	base[1]= (((type_of((V1295))==t_symbol?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC131(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM114; VC114
	vs_check;
	{object V1296;
	check_arg(1);
	V1296=(base[0]);
	vs_top=sup;
	base[1]= (((((V1296))==(Ct)?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC130(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM115; VC115
	vs_check;
	{object V1297;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1297=(base[0]);
	vs_top=sup;
	base[1]= VV[287];
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC129(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM116; VC116
	vs_check;
	{object V1298;
	register object V1299;
	check_arg(2);
	V1298=(base[0]);
	V1299=(base[1]);
	vs_top=sup;
	base[2]= (V1299);
	base[3]= VV[283];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	base[2]= (V1299);
	base[3]= VV[284];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	base[2]= (V1299);
	base[3]= VV[285];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI501))((V1298),(V1299)));
	base[2]= (V1299);
	base[3]= VV[286];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC128(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM117; VC117
	vs_check;
	{object V1300;
	check_arg(1);
	V1300=(base[0]);
	vs_top=sup;
	{register object x= (V1300),V1301= (base0[0]->c.c_car);
	while(V1301!=Cnil)
	if(x==(V1301->c.c_car)){
	base[1]= V1301;
	vs_top=(vs_base=base+1)+1;
	return;
	}else V1301=V1301->c.c_cdr;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function COMPARE	*/

static void L79(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM118; VC118
	vs_check;
	{object V1302;
	object V1303;
	check_arg(2);
	V1302=(base[0]);
	V1303=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(number_compare((V1302),(V1303))>0)){
	goto T2754;}
	base[2]= VV[264];
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2754;
T2754:;
	base[2]= VV[265];
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function LOSE	*/

static void L78(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM119; VC119
	vs_check;
	{object V1304;
	object V1305;
	if(vs_top-vs_base<1) too_few_arguments();
	V1304=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1305=(base[1]);
	vs_top=sup;
	base[2]= VV[8];
	base[3]= VV[263];
	base[4]= base0[2];
	base[5]= base0[0];
	base[6]= (V1304);
	base[7]= (V1305);
	vs_top=(vs_base=base+2)+6;
	(void) (*Lnk364)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC127(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM120; VC120
	vs_check;
	{object V1306;
	check_arg(1);
	V1306=(base[0]);
	vs_top=sup;
	base[1]= (((((V1306))==(Ct)?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC126(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM121; VC121
	vs_check;
	{object V1307;
	check_arg(1);
	V1307=(base[0]);
	vs_top=sup;
	base[1]= (V1307);
	base[2]= VV[244];
	base[3]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function PARSE-KEYWORD-ARGUMENT	*/

static void L59(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM122; VC122
	vs_check;
	{object V1308;
	check_arg(1);
	V1308=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V1308))==t_cons||((V1308))==Cnil)){
	goto T2766;}
	{object V1309= CMPcar((V1308));
	if(!(type_of(V1309)==t_cons||(V1309)==Cnil)){
	goto T2769;}}
	base[1]= CMPcaar((V1308));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2769;
T2769:;
	base[1]= CMPcar((V1308));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk502)();
	return;
	goto T2766;
T2766:;
	base[1]= (V1308);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk502)();
	return;
	}
}
/*	local function SET-MF-PROPERTY	*/

static void L57(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM123; VC123
	vs_check;
	{object V1310;
	object V1311;
	check_arg(2);
	V1310=(base[0]);
	V1311=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((base0[0])==Cnil){
	goto T2773;}
	V1315= ({object _tmp=get(VV[220],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[220])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[220])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V1316 = V1315,
	(type_of(V1316) == t_sfun ?(*((V1316)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V1316)==t_vfun) ?
	(*((V1316)->sfn.sfn_self)):
	(fcall.fun=(V1316),fcalln))(V1311,base0[0],V1310)));
	goto T2773;
T2773:;
	if((base0[4])==Cnil){
	goto T2778;}
	base[2]= ({object _tmp=get(VV[220],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[220])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[220])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[3]= V1311;
	base[4]= base0[4];
	base[5]= V1310;
	vs_top=(vs_base=base+3)+3;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2778;
T2778:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function WALK-FUNCTION	*/

static void LC44(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM124; VC124
	vs_check;
	{register object V1320;
	object V1321;
	object V1322;
	check_arg(3);
	V1320=(base[0]);
	V1321=(base[1]);
	V1322=(base[2]);
	vs_top=sup;
	if(((V1321))==(VV[203])){
	goto T2785;}
	base[3]= (V1320);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2785;
T2785:;
	if(type_of((V1320))==t_cons||((V1320))==Cnil){
	goto T2788;}
	base[3]= (V1320);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2788;
T2788:;
	if((CMPcar((V1320)))==(VV[204])){
	goto T2792;}
	if((CMPcar((V1320)))==(VV[205])){
	goto T2792;}
	if(!((CMPcar((V1320)))==(VV[206]))){
	goto T2791;}
	goto T2792;
T2792:;
	base[3]= CMPcaddr((V1320));
	vs_top=(vs_base=base+3)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2791;}
	{object V1323;
	V1323= (*(LnkLI503))((V1320),(base0[2]->c.c_car),(V1322));
	{object V1324;
	V1324= CMPcar((V1320));
	{object V1325= (V1324);
	if((V1325!= VV[204]))goto T2802;
	base[3]= (*(LnkLI504))((base0[1]->c.c_car),(V1323),(V1320));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2802;
T2802:;
	if((V1325!= VV[205]))goto T2803;
	base[3]= (*(LnkLI505))((base0[1]->c.c_car),(V1323),(V1320));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2803;
T2803:;
	if((V1325!= VV[206]))goto T2804;
	base[3]= (*(LnkLI506))((base0[1]->c.c_car),(V1323),(V1320));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2804;
T2804:;
	base[3]= VV[157];
	base[4]= VV[158];
	base[5]= VV[207];
	base[6]= VV[160];
	base[7]= (V1324);
	base[8]= VV[161];
	base[9]= VV[208];
	base[10]= VV[163];
	base[11]= VV[209];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk409)();
	return;}}}
	goto T2791;
T2791:;
	if(!((CMPcar((V1320)))==(VV[142]))){
	goto T2815;}
	if(!(type_of(CMPcadr((V1320)))==t_cons)){
	goto T2815;}
	if(!((CMPcar(CMPcadr((V1320))))==(VV[18]))){
	goto T2815;}
	base[3]= CMPcadr(CMPcadr((V1320)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk507)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2815;}
	base[3]= (*(LnkLI508))((V1320),(base0[2]->c.c_car),(V1322),(base0[1]->c.c_car),(base0[0]->c.c_car));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2815;
T2815:;
	if(type_of(CMPcar((V1320)))==t_symbol){
	goto T2826;}
	if(!(type_of(CMPcar((V1320)))==t_cons)){
	goto T2825;}
	if(!((CMPcaar((V1320)))==(VV[34]))){
	goto T2825;}
	goto T2826;
T2826:;
	base[3]= CMPcar((V1320));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk507)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2825;}
	base[3]= (*(LnkLI508))((V1320),(base0[2]->c.c_car),(V1322),(base0[1]->c.c_car),(base0[0]->c.c_car));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2825;
T2825:;
	if(!((CMPcar((V1320)))==(VV[210]))){
	goto T2835;}
	if(((VV[26]->s.s_dbind))==Cnil){
	goto T2835;}
	{object V1326= CMPcadddr((V1320));
	if((V1326!= VV[268]))goto T2840;
	{object V1327;
	V1327= CMPcaddr((V1320));
	(VV[27]->s.s_dbind)= make_cons((V1327),(VV[27]->s.s_dbind));
	goto T2839;}
	goto T2840;
T2840:;
	if((V1326!= VV[270]))goto T2843;
	{object V1328;
	V1328= CMPcaddr((V1320));
	(VV[28]->s.s_dbind)= make_cons((V1328),(VV[28]->s.s_dbind));
	goto T2839;}
	goto T2843;
T2843:;
	if((V1326!= VV[272]))goto T2846;
	{object V1329;
	V1329= CMPcaddr((V1320));
	(VV[29]->s.s_dbind)= make_cons((V1329),(VV[29]->s.s_dbind));
	goto T2839;}
	goto T2846;
T2846:;}
	goto T2839;
T2839:;
	base[3]= make_cons(CMPcadr((V1320)),CMPcddddr((V1320)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2835;
T2835:;
	base[3]= (V1320);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	local function PROCESS-VAR	*/

static void L41(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM125; VC125
	vs_check;
	{register object V1330;
	check_arg(1);
	V1330=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object x= (V1330),V1331= VV[193];
	while(V1331!=Cnil)
	if(x==(V1331->c.c_car)){
	goto T2851;
	}else V1331=V1331->c.c_cdr;
	goto T2850;}
	goto T2851;
T2851:;
	{object V1332= (V1330);
	if((V1332!= VV[418]))goto T2853;
	base0[7]= VV[194];
	goto T2852;
	goto T2853;
T2853:;
	if((V1332!= VV[63]))goto T2855;
	base0[7]= VV[195];
	goto T2852;
	goto T2855;
T2855:;
	if((V1332!= VV[64]))goto T2857;
	goto T2852;
	goto T2857;
T2857:;
	if((V1332!= VV[178]))goto T2858;
	base0[7]= VV[196];
	goto T2852;
	goto T2858;
T2858:;
	if((V1332!= VV[65]))goto T2860;
	base0[7]= VV[197];
	goto T2852;
	goto T2860;
T2860:;
	base[1]= VV[198];
	base[2]= (V1330);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;}
	goto T2852;
T2852:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2850;
T2850:;
	{object V1333= base0[7];
	if((V1333!= VV[192]))goto T2864;
	V1334= list(2,(V1330),list(2,VV[199],base0[5]));
	base[1]= make_cons(/* INLINE-ARGS */V1334,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2864;
T2864:;
	if((V1333!= VV[194]))goto T2865;
	if(type_of((V1330))==t_cons){
	goto T2867;}
	V1335= list(2,(V1330),list(3,VV[120],base0[5],list(2,VV[199],base0[5])));
	base[1]= make_cons(/* INLINE-ARGS */V1335,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2867;
T2867:;
	if((CMPcddr((V1330)))!=Cnil){
	goto T2870;}
	V1336= CMPcar((V1330));
	V1337= list(2,/* INLINE-ARGS */V1336,list(4,VV[134],base0[5],list(2,VV[199],base0[5]),CMPcadr((V1330))));
	base[1]= make_cons(/* INLINE-ARGS */V1337,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2870;
T2870:;
	V1338= list(2,CMPcaddr((V1330)),base0[5]);
	V1339= CMPcar((V1330));
	base[1]= list(2,/* INLINE-ARGS */V1338,list(2,/* INLINE-ARGS */V1339,list(4,VV[134],base0[5],list(2,VV[199],base0[5]),CMPcadr((V1330)))));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2865;
T2865:;
	if((V1333!= VV[196]))goto T2872;
	V1340= list(2,(V1330),base0[5]);
	base[1]= make_cons(/* INLINE-ARGS */V1340,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2872;
T2872:;
	if((V1333!= VV[195]))goto T2873;
	if(type_of((V1330))==t_cons){
	goto T2875;}
	base[1]= (V1330);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk502)();
	vs_top=sup;
	V1341= vs_base[0];
	V1342= list(2,(V1330),list(2,VV[200],list(3,VV[201],V1341,base0[5])));
	base[1]= make_cons(/* INLINE-ARGS */V1342,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2875;
T2875:;
	if((CMPcddr((V1330)))!=Cnil){
	goto T2880;}
	{object V1343;
	object V1344;
	if(!(type_of(CMPcar((V1330)))==t_cons)){
	goto T2884;}
	base[1]= CMPcaar((V1330));
	base[2]= CMPcadar((V1330));
	vs_top=(vs_base=base+1)+2;
	goto T2882;
	goto T2884;
T2884:;
	base[2]= CMPcar((V1330));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk502)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= CMPcar((V1330));
	vs_top=(vs_base=base+1)+2;
	goto T2882;
T2882:;
	if(vs_base>=vs_top){vs_top=sup;goto T2891;}
	V1343= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2892;}
	V1344= vs_base[0];
	vs_top=sup;
	goto T2893;
	goto T2891;
T2891:;
	V1343= Cnil;
	goto T2892;
T2892:;
	V1344= Cnil;
	goto T2893;
T2893:;
	V1345= list(2,base0[6],list(3,VV[201],list(2,VV[1],(V1343)),base0[5]));
	base[1]= list(2,/* INLINE-ARGS */V1345,list(2,(V1344),list(4,VV[134],base0[6],list(2,VV[200],base0[6]),CMPcadr((V1330)))));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2880;
T2880:;
	{object V1346;
	object V1347;
	if(!(type_of(CMPcar((V1330)))==t_cons)){
	goto T2896;}
	base[1]= CMPcaar((V1330));
	base[2]= CMPcadar((V1330));
	vs_top=(vs_base=base+1)+2;
	goto T2894;
	goto T2896;
T2896:;
	base[2]= CMPcar((V1330));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk502)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= CMPcar((V1330));
	vs_top=(vs_base=base+1)+2;
	goto T2894;
T2894:;
	if(vs_base>=vs_top){vs_top=sup;goto T2903;}
	V1346= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2904;}
	V1347= vs_base[0];
	vs_top=sup;
	goto T2905;
	goto T2903;
T2903:;
	V1346= Cnil;
	goto T2904;
T2904:;
	V1347= Cnil;
	goto T2905;
T2905:;
	V1348= list(2,base0[6],list(3,VV[201],list(2,VV[1],(V1346)),base0[5]));
	V1349= list(2,CMPcaddr((V1330)),base0[6]);
	base[1]= list(3,/* INLINE-ARGS */V1348,/* INLINE-ARGS */V1349,list(2,(V1347),list(4,VV[134],base0[6],list(2,VV[200],base0[6]),CMPcadr((V1330)))));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2873;
T2873:;
	if((V1333!= VV[197]))goto T2906;
	base[1]= make_cons((V1330),Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2906;
T2906:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC125(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM126; VC126
	vs_check;
	{register object V1350;
	check_arg(1);
	V1350=(base[0]);
	vs_top=sup;
	if(!(type_of((V1350))==t_cons)){
	goto T2908;}
	if((CMPcar((V1350)))==(VV[35])){
	goto T2910;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2910;
T2910:;
	base[1]= CMPcadr((V1350));
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2912;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2912;
T2912:;
	{register object V1351;
	base[1]= CMPcadr((V1350));
	vs_top=(vs_base=base+1)+1;
	Leval();
	vs_top=sup;
	V1351= vs_base[0];{object V1352;
	V1352= (*(LnkLI380))((V1351));
	if(V1352==Cnil)goto T2917;
	base[1]= V1352;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2917;
T2917:;}
	if(!(type_of((V1351))==t_fixnum||type_of((V1351))==t_bignum)){
	goto T2919;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2919;
T2919:;
	if(type_of((V1351))==t_character){
	goto T2921;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2921;
T2921:;
	base[1]= (V1351);
	vs_top=(vs_base=base+1)+1;
	Lstandard_char_p();
	return;}
	goto T2908;
T2908:;
	base[1]= (*(LnkLI380))((V1350));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function INITARG	*/

static void L7(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM127; VC127
	vs_check;
	{object V1353;
	object V1354;
	object V1355;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1353=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2924;}
	V1354=(base[1]);
	V1355= Ct;
	vs_top=sup;
	goto T2925;
	goto T2924;
T2924:;
	V1354= Cnil;
	V1355= Cnil;
	goto T2925;
T2925:;
	if(((V1355))==Cnil){
	goto T2928;}
	{object V1358;
	base[3]= base0[0];
	base[4]= V1354;
	base[5]= V1353;
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V1358= vs_base[0];
	base0[0]= (V1358);
	base[3]= V1354;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2928;
T2928:;
	base[3]= base0[0];
	base[4]= (V1353);
	vs_top=(vs_base=base+3)+2;
	Lgetf();
	return;
	}
}
/*	local function CHECK-DECLARATION	*/

static void L6(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM128; VC128
	vs_check;
	{object V1359;
	check_arg(1);
	V1359=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1360;
	register object V1361;
	V1360= Cnil;
	V1361= (V1359);
	goto T2939;
T2939:;
	if(!(((V1361))==Cnil)){
	goto T2941;}
	goto T2940;
	goto T2941;
T2941:;
	V1360= CMPcar((V1361));
	V1361= CMPcdr((V1361));
	if(!(type_of((V1360))==t_cons)){
	goto T2948;}
	{register object x= CMPcar((V1360)),V1362= VV[11];
	while(V1362!=Cnil)
	if(x==(V1362->c.c_car)){
	goto T2952;
	}else V1362=V1362->c.c_cdr;
	goto T2948;}
	goto T2952;
T2952:;
	base[1]= VV[8];
	base[2]= VV[12];
	base[3]= (V1360);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk364)();
	vs_top=sup;
	goto T2948;
T2948:;
	goto T2939;
	goto T2940;
T2940:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function DUPLICATE-OPTION	*/

static void L5(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM129; VC129
	vs_check;
	{object V1363;
	check_arg(1);
	V1363=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[8];
	base[2]= VV[10];
	base[3]= (V1363);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk364)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC124(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM130; VC130
	vs_check;
	{object V1364;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1364=(base[0]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	base[1]= vs_base[0];
	{object V1365;
	V1365= (V1364);
	 vs_top=base+2;
	 while(V1365!=Cnil)
	 {vs_push((V1365)->c.c_car);V1365=(V1365)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
static object  LnkTLI508(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[508],(void **)(void *)&LnkLI508,5,first,ap);va_end(ap);return V1;} /* OPTIMIZE-GENERIC-FUNCTION-CALL */
static void LnkT507(){ call_or_link(VV[507],(void **)(void *)&Lnk507);} /* GENERIC-FUNCTION-NAME-P */
static object  LnkTLI506(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[506],(void **)(void *)&LnkLI506,3,first,ap);va_end(ap);return V1;} /* OPTIMIZE-SLOT-BOUNDP */
static object  LnkTLI505(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[505],(void **)(void *)&LnkLI505,3,first,ap);va_end(ap);return V1;} /* OPTIMIZE-SET-SLOT-VALUE */
static object  LnkTLI504(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[504],(void **)(void *)&LnkLI504,3,first,ap);va_end(ap);return V1;} /* OPTIMIZE-SLOT-VALUE */
static object  LnkTLI503(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[503],(void **)(void *)&LnkLI503,3,first,ap);va_end(ap);return V1;} /* CAN-OPTIMIZE-ACCESS */
static void LnkT502(){ call_or_link(VV[502],(void **)(void *)&Lnk502);} /* MAKE-KEYWORD */
static object  LnkTLI501(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[501],(void **)(void *)&LnkLI501,2,first,ap);va_end(ap);return V1;} /* PRINTING-RANDOM-THING-INTERNAL */
static void LnkT500(){ call_or_link(VV[500],(void **)(void *)&Lnk500);} /* SPECIALIZER-FROM-TYPE */
static void LnkT499(ptr) object *ptr;{ call_or_link_closure(VV[499],(void **)(void *)&Lnk499,(void **)(void *)&Lclptr499);} /* SPECIALIZER-TYPE */
static void LnkT498(ptr) object *ptr;{ call_or_link_closure(VV[498],(void **)(void *)&Lnk498,(void **)(void *)&Lclptr498);} /* SPECIALIZERP */
static object  LnkTLI497(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[497],(void **)(void *)&LnkLI497,4,first,ap);va_end(ap);return V1;} /* EXPAND-SYMBOL-MACROLET-INTERNAL */
static object  LnkTLI496(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[496],(void **)(void *)&LnkLI496,first,ap);va_end(ap);return V1;} /* RELIST* */
static object  LnkTLI495(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[495],(void **)(void *)&LnkLI495,3,first,ap);va_end(ap);return V1;} /* RECONS */
static object  LnkTLI494(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[494],(void **)(void *)&LnkLI494,2,first,ap);va_end(ap);return V1;} /* VARIABLE-LEXICAL-P */
static object  LnkTLI493(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[493],(void **)(void *)&LnkLI493,first,ap);va_end(ap);return V1;} /* GET-METHOD */
static void LnkT492(ptr) object *ptr;{ call_or_link_closure(VV[492],(void **)(void *)&Lnk492,(void **)(void *)&Lclptr492);} /* COMPUTE-DISCRIMINATING-FUNCTION-ARGLIST-INFO */
static object  LnkTLI491(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[491],(void **)(void *)&LnkLI491,1,first,ap);va_end(ap);return V1;} /* UNPARSE-SPECIALIZERS */
static void LnkT490(ptr) object *ptr;{ call_or_link_closure(VV[490],(void **)(void *)&Lnk490,(void **)(void *)&Lclptr490);} /* METHOD-QUALIFIERS */
static object  LnkTLI489(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[489],(void **)(void *)&LnkLI489,1,first,ap);va_end(ap);return V1;} /* INTERN-FUNCTION-NAME */
static void LnkT488(ptr) object *ptr;{ call_or_link_closure(VV[488],(void **)(void *)&Lnk488,(void **)(void *)&Lclptr488);} /* METHOD-P */
static object  LnkTLI487(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[487],(void **)(void *)&LnkLI487,2,first,ap);va_end(ap);return V1;} /* SET-METHODS */
static void LnkT486(){ call_or_link(VV[486],(void **)(void *)&Lnk486);} /* REAL-MAKE-A-METHOD */
static void LnkT485(){ call_or_link(VV[485],(void **)(void *)&Lnk485);} /* DELETE */
static object  LnkTLI483(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[483],(void **)(void *)&LnkLI483,first,ap);va_end(ap);return V1;} /* REAL-GET-METHOD */
static void LnkT482(){ call_or_link(VV[482],(void **)(void *)&Lnk482);} /* REMOVE */
static object  LnkTLI481(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[481],(void **)(void *)&LnkLI481,first,ap);va_end(ap);return V1;} /* UPDATE-DFUN */
static object  LnkTLI477(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[477],(void **)(void *)&LnkLI477,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-QUALIFIERS */
static void LnkT304(){ call_or_link(VV[304],(void **)(void *)&Lnk304);} /* FIND-CLASS */
static void LnkT476(){ call_or_link(VV[476],(void **)(void *)&Lnk476);} /* SEVENTH */
static void LnkT475(){ call_or_link(VV[475],(void **)(void *)&Lnk475);} /* FIFTH */
static object  LnkTLI474(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[474],(void **)(void *)&LnkLI474,1,first,ap);va_end(ap);return V1;} /* PARSE-SPECIALIZERS */
static object  LnkTLI472(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[472],(void **)(void *)&LnkLI472,first,ap);va_end(ap);return V1;} /* INITIALIZE-METHOD-FUNCTION */
static object  LnkTLI470(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[470],(void **)(void *)&LnkLI470,1,first,ap);va_end(ap);return V1;} /* ARG-INFO-APPLYP */
static void LnkT469(ptr) object *ptr;{ call_or_link_closure(VV[469],(void **)(void *)&Lnk469,(void **)(void *)&Lclptr469);} /* MAKE-INSTANCE */
static void LnkT468(ptr) object *ptr;{ call_or_link_closure(VV[468],(void **)(void *)&Lnk468,(void **)(void *)&Lclptr468);} /* REINITIALIZE-INSTANCE */
static void LnkT467(ptr) object *ptr;{ call_or_link_closure(VV[467],(void **)(void *)&Lnk467,(void **)(void *)&Lclptr467);} /* CHANGE-CLASS */
static void LnkT314(ptr) object *ptr;{ call_or_link_closure(VV[314],(void **)(void *)&Lnk314,(void **)(void *)&Lclptr314);} /* FIND-METHOD-COMBINATION */
static void LnkT466(){ call_or_link(VV[466],(void **)(void *)&Lnk466);} /* WARN */
static void LnkT465(ptr) object *ptr;{ call_or_link_closure(VV[465],(void **)(void *)&Lnk465,(void **)(void *)&Lclptr465);} /* GF-DFUN-STATE */
static object  LnkTLI464(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[464],(void **)(void *)&LnkLI464,first,ap);va_end(ap);return V1;} /* SET-ARG-INFO */
static object  LnkTLI14(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[14],(void **)(void *)&LnkLI14,2,first,ap);va_end(ap);return V1;} /* PROCLAIM-DEFGENERIC */
static object  LnkTLI463(){return call_proc0(VV[463],(void **)(void *)&LnkLI463);} /* MAKE-ARG-INFO */
static object  LnkTLI462(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[462],(void **)(void *)&LnkLI462,4,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-SET-SLOT */
static object  LnkTLI461(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[461],(void **)(void *)&LnkLI461,2,first,ap);va_end(ap);return V1;} /* SET-FUNCALLABLE-INSTANCE-FUNCTION */
static object  LnkTLI460(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[460],(void **)(void *)&LnkLI460,first,ap);va_end(ap);return V1;} /* ALLOCATE-FUNCALLABLE-INSTANCE */
static object  LnkTLI459(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[459],(void **)(void *)&LnkLI459,first,ap);va_end(ap);return V1;} /* MAKE-EARLY-GF */
static void LnkT305(ptr) object *ptr;{ call_or_link_closure(VV[305],(void **)(void *)&Lnk305,(void **)(void *)&Lclptr305);} /* CLASSP */
static void LnkT458(ptr) object *ptr;{ call_or_link_closure(VV[458],(void **)(void *)&Lnk458,(void **)(void *)&Lclptr458);} /* COMPUTE-APPLICABLE-METHODS */
static void LnkT457(){ call_or_link(VV[457],(void **)(void *)&Lnk457);} /* FIND */
static object  LnkTLI456(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[456],(void **)(void *)&LnkLI456,1,first,ap);va_end(ap);return V1;} /* EARLY-GF-NAME */
static void LnkT455(ptr) object *ptr;{ call_or_link_closure(VV[455],(void **)(void *)&Lnk455,(void **)(void *)&Lclptr455);} /* GENERIC-FUNCTION-NAME */
static void LnkT454(){ call_or_link(VV[454],(void **)(void *)&Lnk454);} /* COMPUTE-APPLICABLE-METHODS-EMF */
static object  LnkTLI453(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[453],(void **)(void *)&LnkLI453,1,first,ap);va_end(ap);return V1;} /* EARLY-GF-P */
static void LnkT452(){ call_or_link(VV[452],(void **)(void *)&Lnk452);} /* RAISE-METATYPE */
static void LnkT451(ptr) object *ptr;{ call_or_link_closure(VV[451],(void **)(void *)&Lnk451,(void **)(void *)&Lclptr451);} /* GENERIC-FUNCTION-METHOD-COMBINATION */
static object  LnkTLI450(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[450],(void **)(void *)&LnkLI450,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-CLASS */
static object  LnkTLI449(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[449],(void **)(void *)&LnkLI449,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-SPECIALIZERS */
static void LnkT448(ptr) object *ptr;{ call_or_link_closure(VV[448],(void **)(void *)&Lnk448,(void **)(void *)&Lclptr448);} /* METHOD-SPECIALIZERS */
static object  LnkTLI447(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[447],(void **)(void *)&LnkLI447,1,first,ap);va_end(ap);return V1;} /* ARG-INFO-VALID-P */
static void LnkT51(ptr) object *ptr;{ call_or_link_closure(VV[51],(void **)(void *)&Lnk51,(void **)(void *)&Lclptr51);} /* METHOD-LAMBDA-LIST */
static object  LnkTLI446(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[446],(void **)(void *)&LnkLI446,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-LAMBDA-LIST */
static object  LnkTLI445(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[445],(void **)(void *)&LnkLI445,6,first,ap);va_end(ap);return V1;} /* SET-ARG-INFO1 */
static void LnkT444(){ call_or_link(VV[444],(void **)(void *)&Lnk444);} /* CHECK-METHOD-ARG-INFO */
static object  LnkTLI443(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[443],(void **)(void *)&LnkLI443,3,first,ap);va_end(ap);return V1;} /* COMPUTE-PRECEDENCE */
static object  LnkTLI442(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[442],(void **)(void *)&LnkLI442,257,first,ap);va_end(ap);return V1;} /* ARG-INFO-NUMBER-REQUIRED */
static object  LnkTLI441(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[441],(void **)(void *)&LnkLI441,1,first,ap);va_end(ap);return V1;} /* GF-LAMBDA-LIST */
static void LnkT440(ptr) object *ptr;{ call_or_link_closure(VV[440],(void **)(void *)&Lnk440,(void **)(void *)&Lclptr440);} /* GENERIC-FUNCTION-METHODS */
static void LnkT439(ptr) object *ptr;{ call_or_link_closure(VV[439],(void **)(void *)&Lnk439,(void **)(void *)&Lclptr439);} /* GF-ARG-INFO */
static void LnkT438(){ call_or_link(VV[438],(void **)(void *)&Lnk438);} /* COUNT-IF */
static void LnkT425(){ call_or_link(VV[425],(void **)(void *)&Lnk425);} /* RESTART-CASE */
static void LnkT424(){ call_or_link(VV[424],(void **)(void *)&Lnk424);} /* CONTINUE */
static object  LnkTLI422(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[422],(void **)(void *)&LnkLI422,1,first,ap);va_end(ap);return V1;} /* GENERIC-CLOBBERS-FUNCTION */
static object  LnkTLI421(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[421],(void **)(void *)&LnkLI421,1,first,ap);va_end(ap);return V1;} /* GET-SETF-FUNCTION-NAME */
static object  LnkTLI420(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[420],(void **)(void *)&LnkLI420,1,first,ap);va_end(ap);return V1;} /* KEYWORD-SPEC-NAME */
static void LnkT419(){ call_or_link(VV[419],(void **)(void *)&Lnk419);} /* ANALYZE-LAMBDA-LIST */
static object  LnkTLI417(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[417],(void **)(void *)&LnkLI417,1,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-FROM-FAST-FUNCTION */
static object  LnkTLI416(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[416],(void **)(void *)&LnkLI416,first,ap);va_end(ap);return V1;} /* INTERN-PV-TABLE */
static object  LnkTLI414(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[414],(void **)(void *)&LnkLI414,7,first,ap);va_end(ap);return V1;} /* LOAD-DEFMETHOD-INTERNAL */
static object  LnkTLI413(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[413],(void **)(void *)&LnkLI413,3,first,ap);va_end(ap);return V1;} /* MAKE-METHOD-SPEC */
static object  LnkTLI220(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[220],(void **)(void *)&LnkLI220,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-GET */
static object  LnkTLI412(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[412],(void **)(void *)&LnkLI412,1,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-PLIST */
static void LnkT411(ptr) object *ptr;{ call_or_link_closure(VV[411],(void **)(void *)&Lnk411,(void **)(void *)&Lclptr411);} /* STANDARD-GENERIC-FUNCTION-P */
static void LnkT410(){ call_or_link(VV[410],(void **)(void *)&Lnk410);} /* WALK-FORM */
static void LnkT409(){ call_or_link(VV[409],(void **)(void *)&Lnk409);} /* ERROR */
static void LnkT137(){ call_or_link(VV[137],(void **)(void *)&Lnk137);} /* SLOT-UNBOUND-INTERNAL */
static object  LnkTLI408(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[408],(void **)(void *)&LnkLI408,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT407(){ call_or_link(VV[407],(void **)(void *)&Lnk407);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT406(){ call_or_link(VV[406],(void **)(void *)&Lnk406);} /* STRUCTURE-SUBTYPE-P */
static void LnkT405(){ call_or_link(VV[405],(void **)(void *)&Lnk405);} /* MAKE-ARRAY */
static void LnkT396(ptr) object *ptr;{ call_or_link_closure(VV[396],(void **)(void *)&Lnk396,(void **)(void *)&Lclptr396);} /* NO-NEXT-METHOD */
static void LnkT397(ptr) object *ptr;{ call_or_link_closure(VV[397],(void **)(void *)&Lnk397,(void **)(void *)&Lclptr397);} /* METHOD-GENERIC-FUNCTION */
static void LnkT395(ptr) object *ptr;{ call_or_link_closure(VV[395],(void **)(void *)&Lnk395,(void **)(void *)&Lclptr395);} /* FIND-METHOD */
static void LnkT394(){ call_or_link(VV[394],(void **)(void *)&Lnk394);} /* DO-ARG-COUNT-ERROR */
static void LnkT393(){ call_or_link(VV[393],(void **)(void *)&Lnk393);} /* SLOT-NAME-LISTS-FROM-SLOTS */
static void LnkT392(){ call_or_link(VV[392],(void **)(void *)&Lnk392);} /* SOME */
static void LnkT390(){ call_or_link(VV[390],(void **)(void *)&Lnk390);} /* WALK-METHOD-LAMBDA */
static void LnkT126(){ call_or_link(VV[126],(void **)(void *)&Lnk126);} /* TYPEP */
static object  LnkTLI389(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[389],(void **)(void *)&LnkLI389,first,ap);va_end(ap);return V1;} /* GET-DECLARATION */
static void LnkT388(){ call_or_link(VV[388],(void **)(void *)&Lnk388);} /* MAKE-METHOD-LAMBDA-INTERNAL */
static object  LnkTLI387(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[387],(void **)(void *)&LnkLI387,3,first,ap);va_end(ap);return V1;} /* MAKE-METHOD-INITARGS-FORM-INTERNAL */
static void LnkT386(){ call_or_link(VV[386],(void **)(void *)&Lnk386);} /* EXTRACT-DECLARATIONS */
static void LnkT385(){ call_or_link(VV[385],(void **)(void *)&Lnk385);} /* PARSE-SPECIALIZED-LAMBDA-LIST */
static void LnkT384(){ call_or_link(VV[384],(void **)(void *)&Lnk384);} /* MAKE-METHOD-FUNCTION-INTERNAL */
static object  LnkTLI383(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[383],(void **)(void *)&LnkLI383,first,ap);va_end(ap);return V1;} /* MAKE-DEFMETHOD-FORM-INTERNAL */
static void LnkT381(){ call_or_link(VV[381],(void **)(void *)&Lnk381);} /* EVERY */
static object  LnkTLI380(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[380],(void **)(void *)&LnkLI380,1,first,ap);va_end(ap);return V1;} /* INTERNED-SYMBOL-P */
static void LnkT379(ptr) object *ptr;{ call_or_link_closure(VV[379],(void **)(void *)&Lnk379,(void **)(void *)&Lclptr379);} /* CLASS-NAME */
static object  LnkTLI378(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[378],(void **)(void *)&LnkLI378,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static object  LnkTLI377(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[377],(void **)(void *)&LnkLI377,first,ap);va_end(ap);return V1;} /* MAKE-DEFMETHOD-FORM */
static void LnkT376(ptr) object *ptr;{ call_or_link_closure(VV[376],(void **)(void *)&Lnk376,(void **)(void *)&Lclptr376);} /* MAKE-METHOD-INITARGS-FORM */
static void LnkT375(ptr) object *ptr;{ call_or_link_closure(VV[375],(void **)(void *)&Lnk375,(void **)(void *)&Lclptr375);} /* MAKE-METHOD-LAMBDA */
static void LnkT374(){ call_or_link(VV[374],(void **)(void *)&Lnk374);} /* ADD-METHOD-DECLARATIONS */
static void LnkT373(ptr) object *ptr;{ call_or_link_closure(VV[373],(void **)(void *)&Lnk373,(void **)(void *)&Lclptr373);} /* GENERIC-FUNCTION-METHOD-CLASS */
static void LnkT315(ptr) object *ptr;{ call_or_link_closure(VV[315],(void **)(void *)&Lnk315,(void **)(void *)&Lclptr315);} /* CLASS-PROTOTYPE */
static object  LnkTLI304(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[304],(void **)(void *)&LnkLI304,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static void LnkT372(ptr) object *ptr;{ call_or_link_closure(VV[372],(void **)(void *)&Lnk372,(void **)(void *)&Lclptr372);} /* GENERIC-FUNCTION-P */
static object  LnkTLI362(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[362],(void **)(void *)&LnkLI362,1,first,ap);va_end(ap);return V1;} /* GDEFINITION */
static object  LnkTLI371(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[371],(void **)(void *)&LnkLI371,1,first,ap);va_end(ap);return V1;} /* GBOUNDP */
static object  LnkTLI370(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[370],(void **)(void *)&LnkLI370,7,first,ap);va_end(ap);return V1;} /* EXPAND-DEFMETHOD */
static void LnkT369(){ call_or_link(VV[369],(void **)(void *)&Lnk369);} /* PROTOTYPES-FOR-MAKE-METHOD-LAMBDA */
static void LnkT368(){ call_or_link(VV[368],(void **)(void *)&Lnk368);} /* PARSE-DEFMETHOD */
static void LnkT367(){ call_or_link(VV[367],(void **)(void *)&Lnk367);} /* ENSURE-GENERIC-FUNCTION */
static void LnkT366(){ call_or_link(VV[366],(void **)(void *)&Lnk366);} /* LOAD-TRUENAME */
static object  LnkTLI365(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[365],(void **)(void *)&LnkLI365,3,first,ap);va_end(ap);return V1;} /* MAKE-TOP-LEVEL-FORM */
static void LnkT364(){ call_or_link(VV[364],(void **)(void *)&Lnk364);} /* SPECIFIC-ERROR */
static object  LnkTLI363(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[363],(void **)(void *)&LnkLI363,3,first,ap);va_end(ap);return V1;} /* EXPAND-DEFGENERIC */
static void LnkT361(){ call_or_link(VV[361],(void **)(void *)&Lnk361);} /* SET-FUNCTION-NAME */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

