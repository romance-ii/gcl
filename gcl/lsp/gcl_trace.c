
#include "cmpinclude.h"
#include "gcl_trace.h"
void init_gcl_trace(){do_init(VV);}
/*	macro definition for TRACE	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	base[2]= V1;}
	if((base[2])!=Cnil){
	goto T2;}
	base[3]= VV[0];
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2;
T2:;
	base[3]= list(3,VV[1],VV[2],list(3,VV[3],list(3,VV[4],list(3,VV[5],VV[6],list(2,VV[7],base[2])),VV[8]),VV[9]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for UNTRACE	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	vs_top=sup;
	{object V2=base[0]->c.c_cdr;
	base[2]= V2;}
	if((base[2])!=Cnil){
	goto T5;}
	base[3]= VV[10];
	vs_top=(vs_base=base+3)+1;
	return;
	goto T5;
T5:;
	base[3]= list(3,VV[5],VV[11],list(2,VV[7],base[2]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function TRACE-ONE-PREPROCESS	*/

static object LI3(V4)

object V4;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	if(!(type_of((V4))==t_symbol)){
	goto T8;}
	V4= make_cons((V4),Cnil);
	goto TTL;
	goto T8;
T8:;
	{register object V5;
	register object V6;
	object V7;
	object V8;
	register object V9;
	register object V10;
	register object V11;
	register object V12;
	register object V13;
	V5= CMPcdr((V4));
	V7= list(3,VV[12],list(2,VV[7],CMPcar((V4))),VV[13]);
	V8= list(3,VV[12],list(2,VV[7],CMPcar((V4))),VV[14]);
	V6= Cnil;
	V9= Ct;
	V10= Ct;
	V11= Ct;
	V12= Cnil;
	V13= Cnil;
	goto T16;
T16:;
	if(((V5))!=Cnil){
	goto T17;}
	if(((V12))==Cnil){
	goto T20;}
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V13= vs_base[0];
	if(!(((V9))==(Ct))){
	goto T27;}
	V9= list(3,VV[15],(V13),(V12));
	goto T25;
	goto T27;
T27:;
	V9= list(4,VV[16],list(3,VV[15],(V13),(V12)),(V9),Cnil);
	goto T25;
T25:;
	V14= make_cons((V13),small_fixnum(0));
	V6= make_cons(/* INLINE-ARGS */V14,(V6));
	V10= list(3,VV[17],list(3,VV[18],(V13),list(2,VV[19],(V13))),(V10));
	V11= list(3,VV[17],list(3,VV[18],(V13),list(2,VV[20],(V13))),(V11));
	goto T20;
T20:;
	V15= CMPcar((V4));
	V16= list(2,VV[7],(V9));
	V17= list(2,VV[7],(V10));
	V18= list(2,VV[7],(V7));
	V19= list(2,VV[7],(V11));
	{object V20 = list(7,/* INLINE-ARGS */V15,(V6),/* INLINE-ARGS */V16,/* INLINE-ARGS */V17,/* INLINE-ARGS */V18,/* INLINE-ARGS */V19,list(2,VV[7],(V8)));
	VMR3(V20)}
	goto T17;
T17:;
	{object V21= CMPcar((V5));
	if((V21!= VV[29]))goto T38;
	{register object V22;
	register object V23;
	V22= CMPcadr((V5));
	V23= Cnil;
	goto T42;
T42:;
	if(((V22))!=Cnil){
	goto T43;}
	V6= (V23);
	goto T39;
	goto T43;
T43:;
	if(!(type_of(CMPcar((V22)))==t_symbol)){
	goto T51;}
	V24= make_cons(CMPcar((V22)),Cnil);
	goto T49;
	goto T51;
T51:;
	V25= CMPcaar((V22));
	base[0]= CMPcadar((V22));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V26= vs_base[0];
	V24= make_cons(/* INLINE-ARGS */V25,V26);
	goto T49;
T49:;
	V23= make_cons(V24,(V23));
	V22= CMPcdr((V22));
	goto T42;}
	goto T39;
T39:;
	goto T37;
	goto T38;
T38:;
	if((V21!= VV[98]))goto T58;
	V9= CMPcadr((V5));
	goto T37;
	goto T58;
T58:;
	if((V21!= VV[99]))goto T60;
	V10= CMPcadr((V5));
	goto T37;
	goto T60;
T60:;
	if((V21!= VV[100]))goto T62;
	V7= CMPcadr((V5));
	goto T37;
	goto T62;
T62:;
	if((V21!= VV[101]))goto T64;
	V11= CMPcadr((V5));
	goto T37;
	goto T64;
T64:;
	if((V21!= VV[102]))goto T66;
	V8= CMPcadr((V5));
	goto T37;
	goto T66;
T66:;
	if((V21!= VV[28]))goto T68;
	V12= CMPcadr((V5));
	goto T37;
	goto T68;
T68:;}
	goto T37;
T37:;
	V5= CMPcddr((V5));
	goto T16;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CHECK-TRACE-SPEC	*/

static object LI4(V28)

register object V28;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if(!(type_of((V28))==t_symbol)){
	goto T73;}
	{object V29 = Ct;
	VMR4(V29)}
	goto T73;
T73:;
	if(!(type_of((V28))==t_cons)){
	goto T76;}
	base[0]= (V28);
	vs_top=(vs_base=base+0)+1;
	Llast();
	vs_top=sup;
	V30= vs_base[0];
	if((CMPcdr(V30))!=Cnil){
	goto T76;}
	{object V31 = (*(LnkLI103))((V28),CMPcdr((V28)),Cnil);
	VMR4(V31)}
	goto T76;
T76:;
	base[0]= VV[21];
	base[1]= (V28);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V32 = vs_base[0];
	VMR4(V32)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CHECK-DECLARATIONS	*/

static object LI5(V34)

register object V34;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{register object V35;
	V35= Cnil;
	if(!(type_of((V34))==t_cons)){
	goto T86;}
	if(!(type_of(CMPcar((V34)))==t_cons)){
	goto T91;}
	V35= CMPcar((V34));
	goto T89;
	goto T91;
T91:;
	V35= list(2,CMPcar((V34)),Cnil);
	goto T89;
T89:;
	if(type_of(CMPcar((V35)))==t_symbol){
	goto T93;}
	base[0]= VV[22];
	base[1]= CMPcar((V35));
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T93;
T93:;
	if((CMPcddr((V35)))==Cnil){
	goto T98;}
	base[0]= VV[23];
	base[1]= (V35);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T98;
T98:;
	V37= CMPcar((V35));
	V38= (*(LnkLI104))();
	{register object x= /* INLINE-ARGS */V37,V36= /* INLINE-ARGS */V38;
	while(V36!=Cnil)
	if(eql(x,V36->c.c_car->c.c_car) &&V36->c.c_car != Cnil){
	goto T105;
	}else V36=V36->c.c_cdr;
	goto T104;}
	goto T105;
T105:;
	base[0]= VV[24];
	base[1]= CMPcar((V35));
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V39 = vs_base[0];
	VMR5(V39)}
	goto T104;
T104:;
	{object V40 = Cnil;
	VMR5(V40)}
	goto T86;
T86:;
	{object V41 = Cnil;
	VMR5(V41)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CHECK-TRACE-ARGS	*/

static object LI6(V45,V46,V47)

register object V45;register object V46;register object V47;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	if(((V46))==Cnil){
	goto T109;}
	if((CMPcdr((V46)))!=Cnil){
	goto T112;}
	base[0]= VV[25];
	base[1]= (V45);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V48 = vs_base[0];
	VMR6(V48)}
	goto T112;
T112:;
	{register object x= CMPcar((V46)),V49= (V47);
	while(V49!=Cnil)
	if(eql(x,V49->c.c_car)){
	goto T118;
	}else V49=V49->c.c_cdr;
	goto T117;}
	goto T118;
T118:;
	base[0]= VV[26];
	base[1]= CMPcar((V46));
	base[2]= (V45);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V50 = vs_base[0];
	VMR6(V50)}
	goto T117;
T117:;
	{object V51= CMPcar((V46));
	if((V51!= VV[100])
	&& (V51!= VV[102])
	&& (V51!= VV[98])
	&& (V51!= VV[99])
	&& (V51!= VV[101]))goto T122;
	{object V52;
	V52= CMPcddr((V46));
	V47= make_cons(CMPcar((V46)),(V47));
	V46= (V52);}
	goto TTL;
	goto T122;
T122:;
	if((V51!= VV[28]))goto T127;
	{object V53= CMPcadr((V46));
	if(!(type_of(V53)==t_fixnum||type_of(V53)==t_bignum)){
	goto T129;}}
	if(number_compare(CMPcadr((V46)),small_fixnum(0))>0){
	goto T128;}
	goto T129;
T129:;
	base[0]= VV[27];
	base[1]= CMPcadr((V46));
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T128;
T128:;
	V46= CMPcddr((V46));
	V47= make_cons(VV[28],(V47));
	goto TTL;
	goto T127;
T127:;
	if((V51!= VV[29]))goto T139;
	(void)((*(LnkLI105))(CMPcadr((V46))));
	V46= CMPcddr((V46));
	V47= make_cons(VV[29],(V47));
	goto TTL;
	goto T139;
T139:;
	base[0]= VV[30];
	base[1]= (V45);
	base[2]= CMPcar((V46));
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V54 = vs_base[0];
	VMR6(V54)}}
	goto T109;
T109:;
	{object V55 = Cnil;
	VMR6(V55)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function TRACE-ONE	*/

static object LI7(V57)

register object V57;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V58;
	register object V59;
	V58= Cnil;
	if(!(type_of((V57))==t_cons)){
	goto T151;}
	V59= CMPcar((V57));
	goto T149;
	goto T151;
T151:;
	V59= (V57);
	goto T149;
T149:;
	base[1]= (V59);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T153;}
	base[1]= (VV[31]->s.s_dbind);
	base[2]= VV[32];
	base[3]= (V59);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	{object V60 = Cnil;
	VMR7(V60)}
	goto T153;
T153:;
	base[1]= (V59);
	vs_top=(vs_base=base+1)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T161;}
	base[1]= (VV[31]->s.s_dbind);
	base[2]= VV[33];
	base[3]= (V59);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	{object V61 = Cnil;
	VMR7(V61)}
	goto T161;
T161:;
	base[1]= (V59);
	vs_top=(vs_base=base+1)+1;
	Lmacro_function();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T169;}
	base[1]= (VV[31]->s.s_dbind);
	base[2]= VV[34];
	base[3]= (V59);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	{object V62 = Cnil;
	VMR7(V62)}
	goto T169;
T169:;
	{object V63 =((V59))->s.s_plist;
	 object ind= VV[35];
	while(V63!=Cnil){
	if(V63->c.c_car==ind){
	if(((V63->c.c_cdr->c.c_car))==Cnil){
	goto T177;}
	goto T179;
	}else V63=V63->c.c_cdr->c.c_cdr;}
	goto T177;}
	goto T179;
T179:;
	(void)((*(LnkLI106))((V59)));
	goto T177;
T177:;
	(void)((*(LnkLI107))((V57)));
	V57= (*(LnkLI108))((V57));
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V58= vs_base[0];
	base[1]= (V58);
	base[3]= (V59);
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	siLfset();
	vs_top=sup;
	base[1]= list(4,VV[36],(V59),VV[37],listA(4,VV[38],list(2,VV[7],(V58)),VV[39],CMPcddr((V57))));
	vs_top=(vs_base=base+1)+1;
	Leval();
	vs_top=sup;
	(void)(putprop((V59),(V58),VV[35]));
	V64= make_cons((V59),CMPcadr((V57)));
	(VV[40]->s.s_dbind)= make_cons(/* INLINE-ARGS */V64,(VV[40]->s.s_dbind));
	{object V65 = make_cons((V59),Cnil);
	VMR7(V65)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function RESET-TRACE-DECLARATIONS	*/

static object LI8(V67)

register object V67;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	if(((V67))==Cnil){
	goto T194;}
	base[0]= CMPcaar((V67));
	base[1]= CMPcdar((V67));
	vs_top=(vs_base=base+0)+2;
	Lset();
	vs_top=sup;
	V67= CMPcdr((V67));
	goto TTL;
	goto T194;
T194:;
	{object V68 = Cnil;
	VMR8(V68)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ALL-TRACE-DECLARATIONS	*/

static object LI9()

{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{register object V69;
	V69= Cnil;
	{register object V70;
	register object V71;
	V70= (VV[40]->s.s_dbind);
	V71= CMPcar((V70));
	goto T206;
T206:;
	if(!(((V70))==Cnil)){
	goto T207;}
	goto T202;
	goto T207;
T207:;
	V69= append((V69),CMPcdr((V71)));
	V70= CMPcdr((V70));
	V71= CMPcar((V70));
	goto T206;}
	goto T202;
T202:;
	{object V72 = (V69);
	VMR9(V72)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for TRACE-CALL	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	bds_check;
	{object V73;
	register object V74;
	object V75;
	object V76;
	object V77;
	object V78;
	object V79;
	V73=(base[0]);
	V74=(base[1]);
	V75=(base[2]);
	V76=(base[3]);
	V77=(base[4]);
	V78=(base[5]);
	V79=(base[6]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V80;
	object V81;
	bds_bind(VV[41],(VV[41]->s.s_dbind));
	V80= Cnil;
	V81= Cnil;
	if(!(number_compare((VV[41]->s.s_dbind),small_fixnum(0))==0)){
	goto T220;}
	V82= (*(LnkLI104))();
	(void)((*(LnkLI109))(/* INLINE-ARGS */V82));
	goto T220;
T220:;
	V83= list(2,VV[13],list(2,VV[7],(V74)));
	base[8]= list(3,VV[1],make_cons(/* INLINE-ARGS */V83,Cnil),(V75));
	vs_top=(vs_base=base+8)+1;
	Leval();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T224;}
	(VV[41]->s.s_dbind)= one_plus((VV[41]->s.s_dbind));
	V84= number_times((VV[41]->s.s_dbind),small_fixnum(2));
	V81= (number_compare(/* INLINE-ARGS */V84,small_fixnum(20))<=0?(/* INLINE-ARGS */V84):small_fixnum(20));
	base[8]= (VV[31]->s.s_dbind);
	vs_top=(vs_base=base+8)+1;
	Lfresh_line();
	vs_top=sup;
	if(((V76))==(Ct)){
	goto T234;}
	V85= list(2,VV[13],list(2,VV[7],(V74)));
	base[8]= list(3,VV[1],make_cons(/* INLINE-ARGS */V85,Cnil),(V76));
	vs_top=(vs_base=base+8)+1;
	Leval();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T233;}
	goto T234;
T234:;
	base[8]= (VV[31]->s.s_dbind);
	base[9]= VV[42];
	base[10]= (V81);
	base[11]= (VV[41]->s.s_dbind);
	vs_top=(vs_base=base+8)+4;
	Lformat();
	vs_top=sup;
	base[8]= (VV[31]->s.s_dbind);
	base[9]= VV[43];
	V86= list(2,VV[13],list(2,VV[7],(V74)));
	base[11]= list(3,VV[1],make_cons(/* INLINE-ARGS */V86,Cnil),(V77));
	vs_top=(vs_base=base+11)+1;
	Leval();
	vs_top=sup;
	base[10]= vs_base[0];
	vs_top=(vs_base=base+8)+3;
	Lformat();
	vs_top=sup;
	base[8]= (VV[31]->s.s_dbind);
	vs_top=(vs_base=base+8)+1;
	Lfresh_line();
	vs_top=sup;
	goto T233;
T233:;
	base[8]= (V73);
	{object V87;
	V87= (V74);
	 vs_top=base+9;
	 while(V87!=Cnil)
	 {vs_push((V87)->c.c_car);V87=(V87)->c.c_cdr;}
	vs_base=base+9;}
	super_funcall_no_event(base[8]);
	Llist();
	vs_top=sup;
	V80= vs_base[0];
	if(((V78))==(Ct)){
	goto T256;}
	V88= list(2,VV[13],list(2,VV[7],(V74)));
	base[8]= list(3,VV[1],list(2,/* INLINE-ARGS */V88,list(2,VV[14],list(2,VV[7],(V80)))),(V78));
	vs_top=(vs_base=base+8)+1;
	Leval();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T255;}
	goto T256;
T256:;
	base[8]= (VV[31]->s.s_dbind);
	base[9]= VV[44];
	base[10]= (V81);
	base[11]= (VV[41]->s.s_dbind);
	vs_top=(vs_base=base+8)+4;
	Lformat();
	vs_top=sup;
	base[8]= (VV[31]->s.s_dbind);
	base[9]= VV[45];
	V89= list(2,VV[13],list(2,VV[7],(V74)));
	base[11]= list(3,VV[1],list(2,/* INLINE-ARGS */V89,list(2,VV[14],list(2,VV[7],(V80)))),(V79));
	vs_top=(vs_base=base+11)+1;
	Leval();
	vs_top=sup;
	base[10]= vs_base[0];
	vs_top=(vs_base=base+8)+3;
	Lformat();
	vs_top=sup;
	goto T255;
T255:;
	(VV[41]->s.s_dbind)= one_minus((VV[41]->s.s_dbind));
	base[8]= (V80);
	vs_top=(vs_base=base+8)+1;
	Lvalues_list();
	bds_unwind1;
	return;
	goto T224;
T224:;
	base[8]= (V73);
	{object V90;
	V90= (V74);
	 vs_top=base+9;
	 while(V90!=Cnil)
	 {vs_push((V90)->c.c_car);V90=(V90)->c.c_cdr;}
	vs_base=base+9;}
	super_funcall_no_event(base[8]);
	bds_unwind1;
	return;}
	}
}
/*	local entry for function UNTRACE-ONE	*/

static object LI12(V92)

object V92;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{object V93;
	base[0]=MMcons((V92),Cnil);
	V93= Cnil;
	{object V94 =((base[0]->c.c_car))->s.s_plist;
	 object ind= VV[35];
	while(V94!=Cnil){
	if(V94->c.c_car==ind){
	V93= (V94->c.c_cdr->c.c_car);
	goto T279;
	}else V94=V94->c.c_cdr->c.c_cdr;}
	V93= Cnil;}
	goto T279;
T279:;
	if(((V93))==Cnil){
	goto T277;}
	(void)(remprop((base[0]->c.c_car),VV[35]));
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T283;}
	base[1]= (VV[31]->s.s_dbind);
	base[2]= VV[46];
	base[3]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T281;
	goto T283;
T283:;
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	V95= vs_base[0];
	if(!(type_of(V95)==t_cons)){
	goto T290;}
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	V96= vs_base[0];
	if(!(type_of(CMPcadddr(V96))==t_cons)){
	goto T290;}
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	V97= vs_base[0];
	if(!((CMPcar(CMPcadddr(V97)))==(VV[38]))){
	goto T290;}
	base[1]= (base[0]->c.c_car);
	base[3]= (V93);
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	siLfset();
	vs_top=sup;
	goto T281;
	goto T290;
T290:;
	base[1]= (VV[31]->s.s_dbind);
	base[2]= VV[47];
	base[3]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T281;
T281:;
	V98= 
	make_cclosure_new(LC17,Cnil,base[0],Cdata);
	(VV[40]->s.s_dbind)= (VFUN_NARGS=4,(*(LnkLI110))(V98,(VV[40]->s.s_dbind),VV[48],small_fixnum(1)));
	{object V99 = make_cons((base[0]->c.c_car),Cnil);
	VMR11(V99)}
	goto T277;
T277:;
	base[1]= (VV[31]->s.s_dbind);
	base[2]= VV[49];
	base[3]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	{object V100 = Cnil;
	VMR11(V100)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function STEP-READ-LINE	*/

static object LI13()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{register object V101;
	{long V102;
	V102= 0;
	if(!((type_of((VV[50]->s.s_dbind))==t_stream? (((VV[50]->s.s_dbind))->sm.sm_fp)!=0: 0 ))){
	goto T318;}
	V102= (long)getc(((VV[50]->s.s_dbind))->sm.sm_fp);
	if(!((V102)==(-1))){
	goto T323;}
	if(!((feof(((VV[50]->s.s_dbind))->sm.sm_fp)))){
	goto T323;}
	V101= Cnil;
	goto T315;
	goto T323;
T323:;
	V101= code_char((V102));
	goto T315;
	goto T318;
T318:;
	V101= read_char1((VV[50]->s.s_dbind),Cnil);}
	goto T315;
T315:;
	goto T328;
T328:;
	if(char_code((V101))==char_code(VV[51])){
	goto T330;}
	if(!(char_code((V101))==char_code(VV[52]))){
	goto T329;}
	goto T330;
T330:;
	{object V103 = Cnil;
	VMR12(V103)}
	goto T329;
T329:;
	{register long V104;
	V104= 0;
	if(!((type_of((VV[50]->s.s_dbind))==t_stream? (((VV[50]->s.s_dbind))->sm.sm_fp)!=0: 0 ))){
	goto T339;}
	V104= (long)getc(((VV[50]->s.s_dbind))->sm.sm_fp);
	if(!((V104)==(-1))){
	goto T344;}
	if(!((feof(((VV[50]->s.s_dbind))->sm.sm_fp)))){
	goto T344;}
	V101= Cnil;
	goto T336;
	goto T344;
T344:;
	V101= code_char((V104));
	goto T336;
	goto T339;
T339:;
	V101= read_char1((VV[50]->s.s_dbind),Cnil);}
	goto T336;
T336:;
	goto T328;}
	return Cnil;
}
/*	macro definition for IF-ERROR	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	vs_top=sup;
	{object V105=base[0]->c.c_cdr;
	base[2]= (V105->c.c_car);
	V105=V105->c.c_cdr;
	base[3]= (V105->c.c_car);}
	{object V106;
	object V107;
	object V108;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V106= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V107= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V108= vs_base[0];
	V109= list(2,(V106),(V107));
	V110= list(5,VV[18],(V106),base[3],(V107),Ct);
	base[4]= list(3,VV[1],/* INLINE-ARGS */V109,list(3,VV[53],(V108),list(3,VV[3],/* INLINE-ARGS */V110,list(3,VV[54],(V108),list(4,VV[16],(V107),(V106),base[2])))));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for STEP	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	vs_top=sup;
	{object V111=base[0]->c.c_cdr;
	base[2]= (V111->c.c_car);}
	base[3]= list(6,VV[55],VV[56],VV[57],VV[58],VV[59],list(3,VV[60],list(2,VV[7],base[2]),Cnil));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for STEPPER	*/

static void L16()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM15; VC15
	vs_check;
	bds_check;
	{VOL object V112;
	VOL object V113;
	V112=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T352;}
	V113=(base[1]);
	vs_top=sup;
	goto T353;
	goto T352;
T352:;
	V113= Cnil;
	goto T353;
T353:;
	{VOL object V114;
	VOL object V115;
	V114= Cnil;
	bds_bind(VV[61],(VV[61]->s.s_dbind));
	V115= Cnil;
	if(!(((VV[62]->s.s_dbind))==(Ct))){
	goto T357;}
	base[3]= (V112);
	base[4]= Cnil;
	base[5]= Cnil;
	base[6]= (V113);
	vs_top=(vs_base=base+3)+4;
	Levalhook();
	bds_unwind1;
	return;
	goto T357;
T357:;
	if(!(type_of((VV[62]->s.s_dbind))==t_fixnum||
type_of((VV[62]->s.s_dbind))==t_bignum||
type_of((VV[62]->s.s_dbind))==t_ratio||
type_of((VV[62]->s.s_dbind))==t_shortfloat||
type_of((VV[62]->s.s_dbind))==t_longfloat||
type_of((VV[62]->s.s_dbind))==t_complex)){
	goto T364;}
	V116= one_plus((VV[61]->s.s_dbind));
	if(!(number_compare(/* INLINE-ARGS */V116,(VV[62]->s.s_dbind))>=0)){
	goto T368;}
	base[3]= (V112);
	base[4]= Cnil;
	base[5]= Cnil;
	base[6]= (V113);
	vs_top=(vs_base=base+3)+4;
	Levalhook();
	bds_unwind1;
	return;
	goto T368;
T368:;
	(VV[62]->s.s_dbind)= Cnil;
	goto T364;
T364:;
	if(((VV[63]->s.s_dbind))==Cnil){
	goto T375;}
	if(!(type_of((V112))==t_cons)){
	goto T379;}
	if(!((CMPcar((V112)))==((VV[63]->s.s_dbind)))){
	goto T379;}
	bds_bind(VV[63],Cnil);
	base[4]= (V112);
	base[5]= (V113);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk60)();
	bds_unwind1;
	bds_unwind1;
	return;
	goto T379;
T379:;
	base[3]= (V112);
	base[4]= (VV[60]->s.s_gfdef);
	base[5]= Cnil;
	base[6]= (V113);
	vs_top=(vs_base=base+3)+4;
	Levalhook();
	bds_unwind1;
	return;
	goto T375;
T375:;
	(VV[61]->s.s_dbind)= one_plus((VV[61]->s.s_dbind));
	V117= number_times((VV[61]->s.s_dbind),small_fixnum(2));
	V115= (number_compare(/* INLINE-ARGS */V117,small_fixnum(20))<=0?(/* INLINE-ARGS */V117):small_fixnum(20));
	goto T395;
T395:;
	base[3]= (VV[50]->s.s_dbind);
	base[4]= VV[64];
	base[5]= (V115);
	base[6]= (V112);
	vs_top=(vs_base=base+3)+4;
	Lformat();
	vs_top=sup;
	base[3]= (VV[50]->s.s_dbind);
	vs_top=(vs_base=base+3)+1;
	Lfinish_output();
	vs_top=sup;
	{register object V120;
	{long V121;
	V121= 0;
	if(!((type_of((VV[50]->s.s_dbind))==t_stream? (((VV[50]->s.s_dbind))->sm.sm_fp)!=0: 0 ))){
	goto T408;}
	V121= (long)getc(((VV[50]->s.s_dbind))->sm.sm_fp);
	if(!((V121)==(-1))){
	goto T413;}
	if(!((feof(((VV[50]->s.s_dbind))->sm.sm_fp)))){
	goto T413;}
	V120= Cnil;
	goto T405;
	goto T413;
T413:;
	V120= code_char((V121));
	goto T405;
	goto T408;
T408:;
	V120= read_char1((VV[50]->s.s_dbind),Cnil);}
	goto T405;
T405:;
	goto T418;
T418:;
	if(!(char_code((V120))!=char_code(VV[65]))){
	goto T419;}
	if(!(char_code((V120))!=char_code(VV[66]))){
	goto T419;}
	V119= (V120);
	goto T404;
	goto T419;
T419:;
	{register long V122;
	V122= 0;
	if(!((type_of((VV[50]->s.s_dbind))==t_stream? (((VV[50]->s.s_dbind))->sm.sm_fp)!=0: 0 ))){
	goto T429;}
	V122= (long)getc(((VV[50]->s.s_dbind))->sm.sm_fp);
	if(!((V122)==(-1))){
	goto T434;}
	if(!((feof(((VV[50]->s.s_dbind))->sm.sm_fp)))){
	goto T434;}
	V120= Cnil;
	goto T426;
	goto T434;
T434:;
	V120= code_char((V122));
	goto T426;
	goto T429;
T429:;
	V120= read_char1((VV[50]->s.s_dbind),Cnil);}
	goto T426;
T426:;
	goto T418;}
	goto T404;
T404:;
	{object V118= V119;
	if(!eql(V118,VV[51])
	&& !eql(V118,VV[52]))goto T439;
	base[3]= (V112);
	base[4]= (VV[60]->s.s_gfdef);
	base[5]= Cnil;
	base[6]= (V113);
	vs_top=(vs_base=base+3)+4;
	Levalhook();
	Llist();
	vs_top=sup;
	V114= vs_base[0];
	goto T393;
	goto T439;
T439:;
	if(!eql(V118,VV[67])
	&& !eql(V118,VV[68]))goto T447;
	(void)((*(LnkLI111))());
	base[3]= (V112);
	base[4]= (VV[60]->s.s_gfdef);
	base[5]= Cnil;
	base[6]= (V113);
	vs_top=(vs_base=base+3)+4;
	Levalhook();
	Llist();
	vs_top=sup;
	V114= vs_base[0];
	goto T393;
	goto T447;
T447:;
	if(!eql(V118,VV[69])
	&& !eql(V118,VV[70]))goto T456;
	(void)((*(LnkLI111))());
	base[3]= (V112);
	base[4]= Cnil;
	base[5]= Cnil;
	base[6]= (V113);
	vs_top=(vs_base=base+3)+4;
	Levalhook();
	Llist();
	vs_top=sup;
	V114= vs_base[0];
	goto T393;
	goto T456;
T456:;
	if(!eql(V118,VV[71])
	&& !eql(V118,VV[72]))goto T465;
	(void)((*(LnkLI111))());
	base[3]= (V112);
	base[4]= VV[73];
	base[5]= (VV[50]->s.s_dbind);
	base[6]= VV[74];
	base[7]= Ct;
	base[8]= VV[75];
	base[9]= Cnil;
	base[10]= VV[76];
	base[11]= Cnil;
	vs_top=(vs_base=base+3)+9;
	Lwrite();
	vs_top=sup;
	princ_char(10,Cnil);
	goto T396;
	goto T465;
T465:;
	if(!eql(V118,VV[77])
	&& !eql(V118,VV[78]))goto T477;
	base[4]= Cnil;
	base[5]= Cnil;
	frs_push(FRS_PROTECT,Cnil);
	{object tag=Cnil;frame_ptr fr=NULL;object p;bool active;
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	{object V123;
	base[7]= (VV[50]->s.s_dbind);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V123= vs_base[0];
	(void)((*(LnkLI111))());
	base[4]= (V123);}
	base[5]= Ct;
	base[7]= Ct;
	vs_top=(vs_base=base+7)+1;
	active=FALSE;}
	base[6]=Cnil;
	while(vs_base<vs_top)
	{base[6]=MMcons(vs_top[-1],base[6]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if((base[5])==Cnil){
	goto T488;}
	base[3]= base[4];
	goto T478;
	goto T488;
T488:;
	base[3]= Cnil;
	goto T478;
	vs_base=vs_top=base+7;
	for(p= base[6];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	vs_top=sup;
	base[3]= vs_base[0];}}
	goto T478;
T478:;
	bds_bind(VV[63],base[3]);
	base[4]= (V112);
	base[5]= (VV[60]->s.s_gfdef);
	base[6]= Cnil;
	base[7]= (V113);
	vs_top=(vs_base=base+4)+4;
	Levalhook();
	Llist();
	vs_top=sup;
	V114= vs_base[0];
	bds_unwind1;
	goto T393;
	goto T477;
T477:;
	if(!eql(V118,VV[79])
	&& !eql(V118,VV[80]))goto T497;
	(void)((*(LnkLI111))());
	(VV[62]->s.s_dbind)= Ct;
	base[3]= (V112);
	base[4]= Cnil;
	base[5]= Cnil;
	base[6]= (V113);
	vs_top=(vs_base=base+3)+4;
	Levalhook();
	Llist();
	vs_top=sup;
	V114= vs_base[0];
	goto T393;
	goto T497;
T497:;
	if(!eql(V118,VV[81])
	&& !eql(V118,VV[82]))goto T508;
	(void)((*(LnkLI111))());
	(VV[62]->s.s_dbind)= (VV[61]->s.s_dbind);
	base[3]= (V112);
	base[4]= Cnil;
	base[5]= Cnil;
	base[6]= (V113);
	vs_top=(vs_base=base+3)+4;
	Levalhook();
	Llist();
	vs_top=sup;
	V114= vs_base[0];
	goto T393;
	goto T508;
T508:;
	if(!eql(V118,VV[83])
	&& !eql(V118,VV[84]))goto T519;
	base[3]= (V113);
	{VOL object V124;
	VOL object V125;
	base[6]= Cnil;
	base[7]= Cnil;
	frs_push(FRS_PROTECT,Cnil);
	{object tag=Cnil;frame_ptr fr=NULL;object p;bool active;
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	base[10]= Cnil;
	base[11]= Cnil;
	frs_push(FRS_PROTECT,Cnil);
	{object tag=Cnil;frame_ptr fr=NULL;object p;bool active;
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	{object V126;
	base[13]= (VV[50]->s.s_dbind);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V126= vs_base[0];
	(void)((*(LnkLI111))());
	base[10]= (V126);}
	base[11]= Ct;
	base[13]= Ct;
	vs_top=(vs_base=base+13)+1;
	active=FALSE;}
	base[12]=Cnil;
	while(vs_base<vs_top)
	{base[12]=MMcons(vs_top[-1],base[12]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if((base[11])==Cnil){
	goto T535;}
	base[9]= base[10];
	goto T525;
	goto T535;
T535:;
	base[9]= Cnil;
	goto T525;
	vs_base=vs_top=base+13;
	for(p= base[12];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	vs_top=sup;
	base[9]= vs_base[0];}}
	goto T525;
T525:;
	base[10]= Cnil;
	base[11]= Cnil;
	base[12]= base[3];
	vs_top=(vs_base=base+9)+4;
	Levalhook();
	Llist();
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= Ct;
	base[9]= Ct;
	vs_top=(vs_base=base+9)+1;
	active=FALSE;}
	base[8]=Cnil;
	while(vs_base<vs_top)
	{base[8]=MMcons(vs_top[-1],base[8]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if((base[7])==Cnil){
	goto T543;}
	V124= base[6];
	goto T520;
	goto T543;
T543:;
	V124= Cnil;
	goto T520;
	vs_base=vs_top=base+9;
	for(p= base[8];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	vs_top=sup;
	V124= vs_base[0];}}
	goto T520;
T520:;
	V125= CMPcar((V124));
	goto T547;
T547:;
	if(!(((V124))==Cnil)){
	goto T548;}
	goto T396;
	goto T548;
T548:;
	base[6]= (V125);
	base[7]= VV[73];
	base[8]= (VV[50]->s.s_dbind);
	base[9]= VV[75];
	base[10]= (VV[85]->s.s_dbind);
	base[11]= VV[76];
	base[12]= (VV[86]->s.s_dbind);
	vs_top=(vs_base=base+6)+7;
	Lwrite();
	vs_top=sup;
	princ_char(10,VV[50]);
	V124= CMPcdr((V124));
	V125= CMPcar((V124));
	goto T547;}
	goto T519;
T519:;
	if(!eql(V118,VV[87])
	&& !eql(V118,VV[88]))goto T566;
	base[3]= (V113);
	base[4]= Cnil;
	base[5]= Cnil;
	frs_push(FRS_PROTECT,Cnil);
	{object tag=Cnil;frame_ptr fr=NULL;object p;bool active;
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	base[8]= Cnil;
	base[9]= Cnil;
	frs_push(FRS_PROTECT,Cnil);
	{object tag=Cnil;frame_ptr fr=NULL;object p;bool active;
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	{object V127;
	base[11]= (VV[50]->s.s_dbind);
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V127= vs_base[0];
	(void)((*(LnkLI111))());
	base[8]= (V127);}
	base[9]= Ct;
	base[11]= Ct;
	vs_top=(vs_base=base+11)+1;
	active=FALSE;}
	base[10]=Cnil;
	while(vs_base<vs_top)
	{base[10]=MMcons(vs_top[-1],base[10]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if((base[9])==Cnil){
	goto T583;}
	base[7]= base[8];
	goto T573;
	goto T583;
T583:;
	base[7]= Cnil;
	goto T573;
	vs_base=vs_top=base+11;
	for(p= base[10];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	vs_top=sup;
	base[7]= vs_base[0];}}
	goto T573;
T573:;
	base[8]= Cnil;
	base[9]= Cnil;
	base[10]= base[3];
	vs_top=(vs_base=base+7)+4;
	Levalhook();
	Llist();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= Ct;
	base[7]= Ct;
	vs_top=(vs_base=base+7)+1;
	active=FALSE;}
	base[6]=Cnil;
	while(vs_base<vs_top)
	{base[6]=MMcons(vs_top[-1],base[6]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if((base[5])==Cnil){
	goto T591;}
	V114= base[4];
	goto T568;
	goto T591;
T591:;
	V114= Cnil;
	goto T568;
	vs_base=vs_top=base+7;
	for(p= base[6];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	vs_top=sup;
	V114= vs_base[0];}}
	goto T568;
T568:;
	goto T393;
	goto T566;
T566:;
	if(!eql(V118,VV[89])
	&& !eql(V118,VV[90]))goto T593;
	(void)((*(LnkLI111))());
	base[3]= one_plus((VV[92]->s.s_dbind));
	vs_base=vs_top;
	(void) (*Lnk113)();
	vs_top=sup;
	V128= vs_base[0];
	base[4]= one_minus(V128);
	base[5]= (VV[92]->s.s_dbind);
	bds_bind(VV[91],base[3]);
	bds_bind(VV[92],base[4]);
	bds_bind(VV[93],base[5]);
	vs_base=vs_top;
	(void) (*Lnk114)();
	vs_top=sup;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T396;
	goto T593;
T593:;
	(void)((*(LnkLI111))());
	princ_char(10,Cnil);
	base[3]= (VV[50]->s.s_dbind);
	base[4]= VV[94];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;
	princ_char(10,Cnil);}
	goto T396;
T396:;
	goto T395;
	goto T393;
T393:;
	base[3]= (V112);
	vs_top=(vs_base=base+3)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T606;}
	if(!(type_of((V112))==t_cons)){
	goto T605;}
	if(!((CMPcar((V112)))==(VV[7]))){
	goto T605;}
	goto T606;
T606:;
	base[3]= CMPcar((V114));
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;
	goto T605;
T605:;
	if(!(((V114))==Cnil)){
	goto T615;}
	base[3]= (VV[50]->s.s_dbind);
	base[4]= VV[95];
	base[5]= (V115);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	goto T613;
	goto T615;
T615:;
	{object V129;
	object V130;
	V129= (V114);
	V130= Ct;
	goto T621;
T621:;
	if(!(((V129))==Cnil)){
	goto T622;}
	goto T613;
	goto T622;
T622:;
	if(((V130))==Cnil){
	goto T628;}
	base[3]= (VV[50]->s.s_dbind);
	base[4]= VV[96];
	base[5]= (V115);
	base[6]= CMPcar((V129));
	vs_top=(vs_base=base+3)+4;
	Lformat();
	vs_top=sup;
	goto T626;
	goto T628;
T628:;
	base[3]= (VV[50]->s.s_dbind);
	base[4]= VV[97];
	base[5]= (V115);
	base[6]= CMPcar((V129));
	vs_top=(vs_base=base+3)+4;
	Lformat();
	vs_top=sup;
	goto T626;
T626:;
	V129= CMPcdr((V129));
	V130= Cnil;
	goto T621;}
	goto T613;
T613:;
	(VV[61]->s.s_dbind)= number_minus((VV[61]->s.s_dbind),small_fixnum(1));
	base[3]= (V114);
	vs_top=(vs_base=base+3)+1;
	Lvalues_list();
	bds_unwind1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC17(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V131;
	V131=(base[0]);
	vs_top=sup;
	base[1]= ((CMPcar((V131)))==((base0[0]->c.c_car))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static void LnkT114(){ call_or_link(VV[114],(void **)(void *)&Lnk114);} /* SIMPLE-BACKTRACE */
static void LnkT113(){ call_or_link(VV[113],(void **)(void *)&Lnk113);} /* IHS-TOP */
static void LnkT112(){ call_or_link(VV[112],(void **)(void *)&Lnk112);} /* READ-PRESERVING-WHITESPACE */
static object  LnkTLI111(){return call_proc0(VV[111],(void **)(void *)&LnkLI111);} /* STEP-READ-LINE */
static void LnkT60(){ call_or_link(VV[60],(void **)(void *)&Lnk60);} /* STEPPER */
static object  LnkTLI110(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[110],(void **)(void *)&LnkLI110,first,ap);va_end(ap);return V1;} /* DELETE-IF */
static object  LnkTLI109(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[109],(void **)(void *)&LnkLI109,1,first,ap);va_end(ap);return V1;} /* RESET-TRACE-DECLARATIONS */
static object  LnkTLI108(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[108],(void **)(void *)&LnkLI108,1,first,ap);va_end(ap);return V1;} /* TRACE-ONE-PREPROCESS */
static object  LnkTLI107(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[107],(void **)(void *)&LnkLI107,1,first,ap);va_end(ap);return V1;} /* CHECK-TRACE-SPEC */
static object  LnkTLI106(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[106],(void **)(void *)&LnkLI106,1,first,ap);va_end(ap);return V1;} /* UNTRACE-ONE */
static object  LnkTLI105(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[105],(void **)(void *)&LnkLI105,1,first,ap);va_end(ap);return V1;} /* CHECK-DECLARATIONS */
static object  LnkTLI104(){return call_proc0(VV[104],(void **)(void *)&LnkLI104);} /* ALL-TRACE-DECLARATIONS */
static object  LnkTLI103(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[103],(void **)(void *)&LnkLI103,3,first,ap);va_end(ap);return V1;} /* CHECK-TRACE-ARGS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

