
#include "cmpinclude.h"
#include "clcs_install.h"
void init_clcs_install(){do_init(VV);}
/*	local entry for function progn 'compile2168	*/

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
/*	local entry for function progn 'compile2180	*/

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
/*	local entry for function progn 'compile2193	*/

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
	V9 = (V6);
	base[0]= (V6);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V10= vs_base[0];
	(void)(sputprop(V9,VV[2],V10));
	goto T8;
T8:;
	base[0]= (V6);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V11= vs_base[0];
	base[0]= (V7);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V12= vs_base[0];
	if((V11)==(V12)){
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
	{object V13 = vs_base[0];
	VMR4(V13)}
	goto T14;
T14:;
	{object V14 = Cnil;
	VMR4(V14)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REVERT-SYMBOL	*/

static object LI5(V16)

register object V16;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{object V17 =((V16))->s.s_plist;
	 object ind= VV[2];
	while(V17!=Cnil){
	if(V17->c.c_car==ind){
	if(((V17->c.c_cdr->c.c_car))==Cnil){
	goto T24;}
	goto T26;
	}else V17=V17->c.c_cdr->c.c_cdr;}
	goto T24;}
	goto T26;
T26:;
	base[0]= (V16);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V18= vs_base[0];
	{object V20 =((V16))->s.s_plist;
	 object ind= VV[2];
	while(V20!=Cnil){
	if(V20->c.c_car==ind){
	V19= (V20->c.c_cdr->c.c_car);
	goto T30;
	}else V20=V20->c.c_cdr->c.c_cdr;}
	V19= Cnil;}
	goto T30;
T30:;
	if((V18)==(V19)){
	goto T24;}
	base[0]= (V16);
	{object V21 =((V16))->s.s_plist;
	 object ind= VV[2];
	while(V21!=Cnil){
	if(V21->c.c_car==ind){
	base[1]= (V21->c.c_cdr->c.c_car);
	goto T32;
	}else V21=V21->c.c_cdr->c.c_cdr;}
	base[1]= Cnil;}
	goto T32;
T32:;
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
	{object V22 = vs_base[0];
	VMR5(V22)}
	goto T24;
T24:;
	{object V23 = Cnil;
	VMR5(V23)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2253	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	base[0]= VV[3];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk26)();
	vs_top=sup;
	{object V24 = Cnil;
	VMR6(V24)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2265	*/

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
	{object V26;
	object V27= base[1];
	if(V27==Cnil){
	V25= Cnil;
	goto T39;}
	base[0]=V26=MMcons(Cnil,Cnil);
	goto T40;
T40:;
	base[2]= symbol_name((V27->c.c_car));
	base[3]= VV[4];
	vs_top=(vs_base=base+2)+2;
	Lintern();
	vs_top=sup;
	V29= vs_base[0];
	V30 = (V27->c.c_car);
	(V26->c.c_car)= list(2,V29,V30);
	if((V27=MMcdr(V27))==Cnil){
	V25= base[0];
	goto T39;}
	V26=MMcdr(V26)=MMcons(Cnil,Cnil);
	goto T40;}
	goto T39;
T39:;
	(VV[3]->s.s_dbind)= nconc(V25,VV[5]);
	goto T35;
T35:;
	{object V31 = Cnil;
	VMR7(V31)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2282	*/

static object LI8()

{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V32 = Cnil;
	VMR8(V32)}
	return Cnil;
}
/*	local entry for function INSTALL-CLCS-SYMBOLS	*/

static object LI9()

{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{register object V33;
	register object V34;
	V33= (VV[3]->s.s_dbind);
	V34= CMPcar((V33));
	goto T50;
T50:;
	if(!(((V33))==Cnil)){
	goto T51;}
	goto T46;
	goto T51;
T51:;
	(void)((*(LnkLI27))(CMPcar((V34)),CMPcadr((V34))));
	V33= CMPcdr((V33));
	V34= CMPcar((V33));
	goto T50;}
	goto T46;
T46:;
	{object V35 = Cnil;
	VMR9(V35)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REVERT-CLCS-SYMBOLS	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{register object V36;
	register object V37;
	V36= reverse((VV[3]->s.s_dbind));
	V37= CMPcar((V36));
	goto T65;
T65:;
	if(!(((V36))==Cnil)){
	goto T66;}
	goto T61;
	goto T66;
T66:;
	(void)((*(LnkLI28))(CMPcar((V37))));
	V36= CMPcdr((V36));
	V37= CMPcar((V36));
	goto T65;}
	goto T61;
T61:;
	{object V38 = Cnil;
	VMR10(V38)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for CLCS-COMPILE-FILE	*/

static void L11()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM11; VC11
	vs_check;
	bds_check;
	{VOL object V39;
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V39=(base[1]);
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
	V40= 
	make_cclosure_new(LC16,Cnil,base[3],Cdata);
	V41= 
	make_cclosure_new(LC17,Cnil,base[3],Cdata);
	V42= (VFUN_NARGS=6,(*(LnkLI29))(VV[7],VV[8],VV[9],V40,VV[10],V41));
	V43= make_cons(/* INLINE-ARGS */V42,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V43,(VV[6]->s.s_dbind));
	bds_bind(VV[6],base[4]);
	{register object V44;
	{register object V45;
	{object V46 =(VV[12])->s.s_plist;
	 object ind= VV[2];
	while(V46!=Cnil){
	if(V46->c.c_car==ind){
	V45= (V46->c.c_cdr->c.c_car);
	goto T87;
	}else V46=V46->c.c_cdr->c.c_cdr;}
	V45= Cnil;}
	goto T87;
T87:;
	if(((V45))==Cnil){
	goto T89;}
	base[5]= (V45);
	goto T86;
	goto T89;
T89:;
	base[5]= (VV[12]->s.s_gfdef);}
	goto T86;
T86:;
	base[6]= (base[0]->c.c_car);
	{object V47;
	V47= (V39);
	 vs_top=base+7;
	 while(V47!=Cnil)
	 {vs_push((V47)->c.c_car);V47=(V47)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	Llist();
	vs_top=sup;
	V44= vs_base[0];
	if(((VV[13]->s.s_dbind))!=Cnil){
	goto T93;}
	base[5]= (V44);
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
	{register object V48;
	V48= (base[2]->c.c_car);
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
	V49= 
	make_cclosure_new(LC18,Cnil,base[2],Cdata);
	V50= 
	make_cclosure_new(LC19,Cnil,base[2],Cdata);
	V51= (VFUN_NARGS=6,(*(LnkLI29))(VV[7],VV[8],VV[9],V49,VV[10],V50));
	V52= make_cons(/* INLINE-ARGS */V51,Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V52,(VV[6]->s.s_dbind));
	bds_bind(VV[6],base[3]);
	{register object V53;
	{register object V54;
	{object V55 =(VV[17])->s.s_plist;
	 object ind= VV[2];
	while(V55!=Cnil){
	if(V55->c.c_car==ind){
	V54= (V55->c.c_cdr->c.c_car);
	goto T114;
	}else V55=V55->c.c_cdr->c.c_cdr;}
	V54= Cnil;}
	goto T114;
T114:;
	if(((V54))==Cnil){
	goto T116;}
	base[4]= (V54);
	goto T113;
	goto T116;
T116:;
	base[4]= (VV[12]->s.s_gfdef);}
	goto T113;
T113:;
	{object V56;
	V56= (base[0]->c.c_car);
	 vs_top=base+5;
	 while(V56!=Cnil)
	 {vs_push((V56)->c.c_car);V56=(V56)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	Llist();
	vs_top=sup;
	V53= vs_base[0];
	if(((VV[13]->s.s_dbind))!=Cnil){
	goto T119;}
	base[4]= (V53);
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
	{register object V57;
	V57= (base[1]->c.c_car);
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
	{VOL object V58;
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V58=(base[1]);
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
	V59= 
	make_cclosure_new(LC20,Cnil,base[3],Cdata);
	V60= 
	make_cclosure_new(LC21,Cnil,base[3],Cdata);
	V61= (VFUN_NARGS=6,(*(LnkLI29))(VV[7],VV[8],VV[9],V59,VV[10],V60));
	V62= make_cons(/* INLINE-ARGS */V61,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V62,(VV[6]->s.s_dbind));
	bds_bind(VV[6],base[4]);
	{register object V63;
	{object V64 =(VV[21])->s.s_plist;
	 object ind= VV[2];
	while(V64!=Cnil){
	if(V64->c.c_car==ind){
	V63= (V64->c.c_cdr->c.c_car);
	goto T138;
	}else V64=V64->c.c_cdr->c.c_cdr;}
	V63= Cnil;}
	goto T138;
T138:;
	if(((V63))==Cnil){
	goto T140;}
	base[5]= (V63);
	goto T137;
	goto T140;
T140:;
	base[5]= (VV[21]->s.s_gfdef);}
	goto T137;
T137:;
	base[6]= (base[0]->c.c_car);
	{object V65;
	V65= (V58);
	 vs_top=base+7;
	 while(V65!=Cnil)
	 {vs_push((V65)->c.c_car);V65=(V65)->c.c_cdr;}
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
	{register object V66;
	V66= (base[2]->c.c_car);
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
	{VOL object V67;
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V67=(base[1]);
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
	V68= 
	make_cclosure_new(LC22,Cnil,base[3],Cdata);
	V69= 
	make_cclosure_new(LC23,Cnil,base[3],Cdata);
	V70= (VFUN_NARGS=6,(*(LnkLI29))(VV[7],VV[8],VV[9],V68,VV[10],V69));
	V71= make_cons(/* INLINE-ARGS */V70,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V71,(VV[6]->s.s_dbind));
	bds_bind(VV[6],base[4]);
	{register object V72;
	{object V73 =(VV[24])->s.s_plist;
	 object ind= VV[2];
	while(V73!=Cnil){
	if(V73->c.c_car==ind){
	V72= (V73->c.c_cdr->c.c_car);
	goto T157;
	}else V73=V73->c.c_cdr->c.c_cdr;}
	V72= Cnil;}
	goto T157;
T157:;
	if(((V72))==Cnil){
	goto T159;}
	base[5]= (V72);
	goto T156;
	goto T159;
T159:;
	base[5]= (VV[24]->s.s_gfdef);}
	goto T156;
T156:;
	base[6]= (base[0]->c.c_car);
	{object V74;
	V74= (V67);
	 vs_top=base+7;
	 while(V74!=Cnil)
	 {vs_push((V74)->c.c_car);V74=(V74)->c.c_cdr;}
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
	{register object V75;
	V75= (base[2]->c.c_car);
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
/*	local entry for function progn 'compile2822	*/

static object LI15()

{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	(void)((*(LnkLI31))());
	{object V76 = Cnil;
	VMR15(V76)}
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{register object V77;
	V77=(base[0]);
	vs_top=sup;
	base[1]= (V77);
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
	{register object V78;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V78=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V78);
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
	{register object V79;
	V79=(base[0]);
	vs_top=sup;
	base[1]= (V79);
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
	{register object V80;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V80=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V80);
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
	{register object V81;
	V81=(base[0]);
	vs_top=sup;
	base[1]= (V81);
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
	{register object V82;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V82=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V82);
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
	{register object V83;
	V83=(base[0]);
	vs_top=sup;
	base[1]= (V83);
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
	{register object V84;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V84=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V84);
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

