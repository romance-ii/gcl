
#include "cmpinclude.h"
#include "clcs_install.h"
void init_clcs_install(){do_init(VV);}
/*	local entry for function progn 'compile2194	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk26)();
	vs_top=sup;
	{object V1 = Cnil;
	VMR1(V1)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2206	*/

static object LI2()

{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if(!((VV[0])->s.s_dbind!=OBJNULL)){
	goto T4;}
	goto T3;
	goto T4;
T4:;
	(VV[0]->s.s_dbind)= VV[1];
	goto T3;
T3:;
	{object V2 = Cnil;
	VMR2(V2)}
	return Cnil;
}
/*	local entry for function progn 'compile2219	*/

static object LI3()

{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V3 = Cnil;
	VMR3(V3)}
	return Cnil;
}
/*	local entry for function INSTALL-SYMBOL	*/

static object LI4(V6,V7)

register object V6;object V7;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{object V8 =((V6))->s.s_plist;
	 object ind= VV[2];
	while(V8!=Cnil){
	if(V8->c.c_car==ind){
	if(((V8->c.c_cdr->c.c_car))!=Cnil){
	goto T8;}
	goto T10;
	}else V8=V8->c.c_cdr->c.c_cdr;}}
	goto T10;
T10:;
	base[0]= (V6);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V9= vs_base[0];
	(void)(sputprop((V6),VV[2],V9));
	goto T8;
T8:;
	base[0]= (V6);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V10= vs_base[0];
	base[0]= (V7);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V11= vs_base[0];
	if((V10)==(V11)){
	goto T14;}
	base[0]= (V6);
	base[2]= (V7);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
	{object V12 = vs_base[0];
	VMR4(V12)}
	goto T14;
T14:;
	{object V13 = Cnil;
	VMR4(V13)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REVERT-SYMBOL	*/

static object LI5(V15)

register object V15;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{object V16 =((V15))->s.s_plist;
	 object ind= VV[2];
	while(V16!=Cnil){
	if(V16->c.c_car==ind){
	if(((V16->c.c_cdr->c.c_car))==Cnil){
	goto T24;}
	goto T26;
	}else V16=V16->c.c_cdr->c.c_cdr;}
	goto T24;}
	goto T26;
T26:;
	base[0]= (V15);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V17= vs_base[0];
	{object V19 =((V15))->s.s_plist;
	 object ind= VV[2];
	while(V19!=Cnil){
	if(V19->c.c_car==ind){
	V18= (V19->c.c_cdr->c.c_car);
	goto T30;
	}else V19=V19->c.c_cdr->c.c_cdr;}
	V18= Cnil;}
	goto T30;
T30:;
	if((V17)==(V18)){
	goto T24;}
	base[0]= (V15);
	{object V20 =((V15))->s.s_plist;
	 object ind= VV[2];
	while(V20!=Cnil){
	if(V20->c.c_car==ind){
	base[1]= (V20->c.c_cdr->c.c_car);
	goto T32;
	}else V20=V20->c.c_cdr->c.c_cdr;}
	base[1]= Cnil;}
	goto T32;
T32:;
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
	{object V21 = vs_base[0];
	VMR5(V21)}
	goto T24;
T24:;
	{object V22 = Cnil;
	VMR5(V22)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2279	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	base[0]= VV[3];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk26)();
	vs_top=sup;
	{object V23 = Cnil;
	VMR6(V23)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2291	*/

static object LI7()

{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	if(!((VV[3])->s.s_dbind!=OBJNULL)){
	goto T36;}
	goto T35;
	goto T36;
T36:;
	base[1]= (VV[0]->s.s_dbind);
	{object V25;
	object V26= base[1];
	if(V26==Cnil){
	V24= Cnil;
	goto T39;}
	base[0]=V25=MMcons(Cnil,Cnil);
	goto T40;
T40:;
	base[2]= symbol_name((V26->c.c_car));
	base[3]= VV[4];
	vs_top=(vs_base=base+2)+2;
	Lintern();
	vs_top=sup;
	V28= vs_base[0];
	(V25->c.c_car)= list(2,V28,(V26->c.c_car));
	if((V26=MMcdr(V26))==Cnil){
	V24= base[0];
	goto T39;}
	V25=MMcdr(V25)=MMcons(Cnil,Cnil);
	goto T40;}
	goto T39;
T39:;
	(VV[3]->s.s_dbind)= nconc(V24,VV[5]);
	goto T35;
T35:;
	{object V29 = Cnil;
	VMR7(V29)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2308	*/

static object LI8()

{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V30 = Cnil;
	VMR8(V30)}
	return Cnil;
}
/*	local entry for function INSTALL-CLCS-SYMBOLS	*/

static object LI9()

{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{register object V31;
	register object V32;
	V31= (VV[3]->s.s_dbind);
	V32= CMPcar((V31));
	goto T50;
T50:;
	if(!(((V31))==Cnil)){
	goto T51;}
	goto T46;
	goto T51;
T51:;
	(void)((*(LnkLI27))(CMPcar((V32)),CMPcadr((V32))));
	V31= CMPcdr((V31));
	V32= CMPcar((V31));
	goto T50;}
	goto T46;
T46:;
	{object V33 = Cnil;
	VMR9(V33)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REVERT-CLCS-SYMBOLS	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{register object V34;
	register object V35;
	V34= reverse((VV[3]->s.s_dbind));
	V35= CMPcar((V34));
	goto T65;
T65:;
	if(!(((V34))==Cnil)){
	goto T66;}
	goto T61;
	goto T66;
T66:;
	(void)((*(LnkLI28))(CMPcar((V35))));
	V34= CMPcdr((V34));
	V35= CMPcar((V34));
	goto T65;}
	goto T61;
T61:;
	{object V36 = Cnil;
	VMR10(V36)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for CLCS-COMPILE-FILE	*/

static void L11()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM11; VC11
	vs_check;
	bds_check;
	{VOL object V37;
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V37=(base[1]);
	vs_top=sup;
	goto T77;
T77:;
	base[2]=MMcons(Cnil,base[0]);
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[15]))goto T80;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V38= 
	make_cclosure_new(LC16,Cnil,base[3],Cdata);
	V39= 
	make_cclosure_new(LC17,Cnil,base[3],Cdata);
	V40= (VFUN_NARGS=6,(*(LnkLI29))(VV[7],VV[8],VV[9],V38,VV[10],V39));
	V41= make_cons(/* INLINE-ARGS */V40,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V41,(VV[6]->s.s_dbind));
	bds_bind(VV[6],base[4]);
	{register object V42;
	{register object V43;
	{object V44 =(VV[12])->s.s_plist;
	 object ind= VV[2];
	while(V44!=Cnil){
	if(V44->c.c_car==ind){
	V43= (V44->c.c_cdr->c.c_car);
	goto T87;
	}else V44=V44->c.c_cdr->c.c_cdr;}
	V43= Cnil;}
	goto T87;
T87:;
	if(((V43))==Cnil){
	goto T89;}
	base[5]= (V43);
	goto T86;
	goto T89;
T89:;
	base[5]= (VV[12]->s.s_gfdef);}
	goto T86;
T86:;
	base[6]= (base[0]->c.c_car);
	{object V45;
	V45= (V37);
	 vs_top=base+7;
	 while(V45!=Cnil)
	 {vs_push((V45)->c.c_car);V45=(V45)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	Llist();
	vs_top=sup;
	V42= vs_base[0];
	if(((VV[13]->s.s_dbind))!=Cnil){
	goto T93;}
	base[5]= (V42);
	vs_top=(vs_base=base+5)+1;
	Lvalues_list();
	frs_pop();
	bds_unwind1;
	return;
	goto T93;
T93:;
	base[5]= VV[14];
	base[6]= VV[12];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk30)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T78;}
	goto T80;
T80:;
	{register object V46;
	V46= (base[2]->c.c_car);
	base[4]= Cnil;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	vs_top=sup;
	frs_pop();
	goto T78;}
	frs_pop();
	goto T78;
	goto T78;
T78:;
	goto T77;
	}
}
/*	function definition for CLCS-COMPILE	*/

static void L12()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM12; VC12
	vs_check;
	bds_check;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	base[0]=MMcons(base[0],Cnil);
	vs_top=sup;
	goto T104;
T104:;
	base[1]=MMcons(Cnil,base[0]);
	base[2]=alloc_frame_id();
	base[2]=MMcons(base[2],base[1]);
	frs_push(FRS_CATCH,(base[2]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[19]))goto T107;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V47= 
	make_cclosure_new(LC18,Cnil,base[2],Cdata);
	V48= 
	make_cclosure_new(LC19,Cnil,base[2],Cdata);
	V49= (VFUN_NARGS=6,(*(LnkLI29))(VV[7],VV[8],VV[9],V47,VV[10],V48));
	V50= make_cons(/* INLINE-ARGS */V49,Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V50,(VV[6]->s.s_dbind));
	bds_bind(VV[6],base[3]);
	{register object V51;
	{register object V52;
	{object V53 =(VV[17])->s.s_plist;
	 object ind= VV[2];
	while(V53!=Cnil){
	if(V53->c.c_car==ind){
	V52= (V53->c.c_cdr->c.c_car);
	goto T114;
	}else V53=V53->c.c_cdr->c.c_cdr;}
	V52= Cnil;}
	goto T114;
T114:;
	if(((V52))==Cnil){
	goto T116;}
	base[4]= (V52);
	goto T113;
	goto T116;
T116:;
	base[4]= (VV[12]->s.s_gfdef);}
	goto T113;
T113:;
	{object V54;
	V54= (base[0]->c.c_car);
	 vs_top=base+5;
	 while(V54!=Cnil)
	 {vs_push((V54)->c.c_car);V54=(V54)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	Llist();
	vs_top=sup;
	V51= vs_base[0];
	if(((VV[13]->s.s_dbind))!=Cnil){
	goto T119;}
	base[4]= (V51);
	vs_top=(vs_base=base+4)+1;
	Lvalues_list();
	frs_pop();
	bds_unwind1;
	return;
	goto T119;
T119:;
	base[4]= VV[18];
	base[5]= VV[17];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk30)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T105;}
	goto T107;
T107:;
	{register object V55;
	V55= (base[1]->c.c_car);
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	vs_top=sup;
	frs_pop();
	goto T105;}
	frs_pop();
	goto T105;
	goto T105;
T105:;
	goto T104;
}
/*	function definition for CLCS-LOAD	*/

static void L13()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM13; VC13
	vs_check;
	bds_check;
	{VOL object V56;
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V56=(base[1]);
	vs_top=sup;
	goto T130;
T130:;
	base[2]=MMcons(Cnil,base[0]);
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[22]))goto T133;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V57= 
	make_cclosure_new(LC20,Cnil,base[3],Cdata);
	V58= 
	make_cclosure_new(LC21,Cnil,base[3],Cdata);
	V59= (VFUN_NARGS=6,(*(LnkLI29))(VV[7],VV[8],VV[9],V57,VV[10],V58));
	V60= make_cons(/* INLINE-ARGS */V59,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V60,(VV[6]->s.s_dbind));
	bds_bind(VV[6],base[4]);
	{register object V61;
	{object V62 =(VV[21])->s.s_plist;
	 object ind= VV[2];
	while(V62!=Cnil){
	if(V62->c.c_car==ind){
	V61= (V62->c.c_cdr->c.c_car);
	goto T138;
	}else V62=V62->c.c_cdr->c.c_cdr;}
	V61= Cnil;}
	goto T138;
T138:;
	if(((V61))==Cnil){
	goto T140;}
	base[5]= (V61);
	goto T137;
	goto T140;
T140:;
	base[5]= (VV[21]->s.s_gfdef);}
	goto T137;
T137:;
	base[6]= (base[0]->c.c_car);
	{object V63;
	V63= (V56);
	 vs_top=base+7;
	 while(V63!=Cnil)
	 {vs_push((V63)->c.c_car);V63=(V63)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	frs_pop();
	bds_unwind1;
	return;
	goto T133;
T133:;
	{register object V64;
	V64= (base[2]->c.c_car);
	base[4]= Cnil;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	vs_top=sup;
	frs_pop();
	goto T131;}
	frs_pop();
	goto T131;
	goto T131;
T131:;
	goto T130;
	}
}
/*	function definition for CLCS-OPEN	*/

static void L14()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM14; VC14
	vs_check;
	bds_check;
	{VOL object V65;
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V65=(base[1]);
	vs_top=sup;
	goto T149;
T149:;
	base[2]=MMcons(Cnil,base[0]);
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[25]))goto T152;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V66= 
	make_cclosure_new(LC22,Cnil,base[3],Cdata);
	V67= 
	make_cclosure_new(LC23,Cnil,base[3],Cdata);
	V68= (VFUN_NARGS=6,(*(LnkLI29))(VV[7],VV[8],VV[9],V66,VV[10],V67));
	V69= make_cons(/* INLINE-ARGS */V68,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V69,(VV[6]->s.s_dbind));
	bds_bind(VV[6],base[4]);
	{register object V70;
	{object V71 =(VV[24])->s.s_plist;
	 object ind= VV[2];
	while(V71!=Cnil){
	if(V71->c.c_car==ind){
	V70= (V71->c.c_cdr->c.c_car);
	goto T157;
	}else V71=V71->c.c_cdr->c.c_cdr;}
	V70= Cnil;}
	goto T157;
T157:;
	if(((V70))==Cnil){
	goto T159;}
	base[5]= (V70);
	goto T156;
	goto T159;
T159:;
	base[5]= (VV[24]->s.s_gfdef);}
	goto T156;
T156:;
	base[6]= (base[0]->c.c_car);
	{object V72;
	V72= (V65);
	 vs_top=base+7;
	 while(V72!=Cnil)
	 {vs_push((V72)->c.c_car);V72=(V72)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	frs_pop();
	bds_unwind1;
	return;
	goto T152;
T152:;
	{register object V73;
	V73= (base[2]->c.c_car);
	base[4]= Cnil;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	vs_top=sup;
	frs_pop();
	goto T150;}
	frs_pop();
	goto T150;
	goto T150;
T150:;
	goto T149;
	}
}
/*	local entry for function progn 'compile2828	*/

static object LI15()

{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	(void)((*(LnkLI31))());
	{object V74 = Cnil;
	VMR15(V74)}
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{register object V75;
	V75=(base[0]);
	vs_top=sup;
	base[1]= (V75);
	base[2]= VV[23];
	base[3]= (base0[2]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC22(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{register object V76;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V76=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V76);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[25]);
	vs_base=vs_top;
	unwind(fr,VV[25]);}
	}
}
/*	local function CLOSURE	*/

static void LC21(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{register object V77;
	V77=(base[0]);
	vs_top=sup;
	base[1]= (V77);
	base[2]= VV[20];
	base[3]= (base0[2]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC20(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{register object V78;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V78=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V78);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[22]);
	vs_base=vs_top;
	unwind(fr,VV[22]);}
	}
}
/*	local function CLOSURE	*/

static void LC19(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{register object V79;
	V79=(base[0]);
	vs_top=sup;
	base[1]= (V79);
	base[2]= VV[16];
	base[3]= CMPcar((base0[2]->c.c_car));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC18(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{register object V80;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V80=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V80);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[19]);
	vs_base=vs_top;
	unwind(fr,VV[19]);}
	}
}
/*	local function CLOSURE	*/

static void LC17(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	{register object V81;
	V81=(base[0]);
	vs_top=sup;
	base[1]= (V81);
	base[2]= VV[11];
	base[3]= (base0[2]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC16(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{register object V82;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V82=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V82);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[15]);
	vs_base=vs_top;
	unwind(fr,VV[15]);}
	}
}
static object  LnkTLI31(){return call_proc0(VV[31],(void **)(void *)&LnkLI31);} /* INSTALL-CLCS-SYMBOLS */
static void LnkT30(){ call_or_link(VV[30],(void **)(void *)&Lnk30);} /* ERROR */
static object  LnkTLI29(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[29],(void **)(void *)&LnkLI29,first,ap);va_end(ap);return V1;} /* MAKE-RESTART */
static object  LnkTLI28(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[28],(void **)(void *)&LnkLI28,1,first,ap);va_end(ap);return V1;} /* REVERT-SYMBOL */
static object  LnkTLI27(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[27],(void **)(void *)&LnkLI27,2,first,ap);va_end(ap);return V1;} /* INSTALL-SYMBOL */
static void LnkT26(){ call_or_link(VV[26],(void **)(void *)&Lnk26);} /* *MAKE-SPECIAL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

