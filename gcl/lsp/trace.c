
#include "cmpinclude.h"
#include "trace.h"
void init_trace(){do_init(VV);}
/*	macro definition for TRACE	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	check_arg(2);
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
	vs_reserve(VM2);
	check_arg(2);
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
	V5= cdr((V4));
	V7= list(3,VV[12],list(2,VV[7],car((V4))),VV[13]);
	V8= list(3,VV[12],list(2,VV[7],car((V4))),VV[14]);
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
	V15= car((V4));
	V16= list(2,VV[7],(V9));
	V17= list(2,VV[7],(V10));
	V18= list(2,VV[7],(V7));
	V19= list(2,VV[7],(V11));
	{object V20 = list(7,/* INLINE-ARGS */V15,(V6),/* INLINE-ARGS */V16,/* INLINE-ARGS */V17,/* INLINE-ARGS */V18,/* INLINE-ARGS */V19,list(2,VV[7],(V8)));
	VMR3(V20)}
	goto T17;
T17:;
	{object V21= car((V5));
	if((V21!= VV[29]))goto T38;
	{register object V22;
	register object V23;
	V22= cadr((V5));
	V23= Cnil;
	goto T42;
T42:;
	if(((V22))!=Cnil){
	goto T43;}
	V6= (V23);
	goto T39;
	goto T43;
T43:;
	if(!(type_of(car((V22)))==t_symbol)){
	goto T51;}
	V24= make_cons(car((V22)),Cnil);
	goto T49;
	goto T51;
T51:;
	V25= caar((V22));
	base[0]= cadar((V22));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V26= vs_base[0];
	V24= make_cons(/* INLINE-ARGS */V25,V26);
	goto T49;
T49:;
	V23= make_cons(V24,(V23));
	V22= cdr((V22));
	goto T42;}
	goto T39;
T39:;
	goto T37;
	goto T38;
T38:;
	if((V21!= VV[98]))goto T58;
	V9= cadr((V5));
	goto T37;
	goto T58;
T58:;
	if((V21!= VV[99]))goto T60;
	V10= cadr((V5));
	goto T37;
	goto T60;
T60:;
	if((V21!= VV[100]))goto T62;
	V7= cadr((V5));
	goto T37;
	goto T62;
T62:;
	if((V21!= VV[101]))goto T64;
	V11= cadr((V5));
	goto T37;
	goto T64;
T64:;
	if((V21!= VV[102]))goto T66;
	V8= cadr((V5));
	goto T37;
	goto T66;
T66:;
	if((V21!= VV[28]))goto T68;
	V12= cadr((V5));
	goto T37;
	goto T68;
T68:;}
	goto T37;
T37:;
	V5= cddr((V5));
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
	if((cdr(V30))!=Cnil){
	goto T76;}
	{object V31 = (*(LnkLI103))((V28),cdr((V28)),Cnil);
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
	if(!(type_of(car((V34)))==t_cons)){
	goto T91;}
	V35= car((V34));
	goto T89;
	goto T91;
T91:;
	V35= list(2,car((V34)),Cnil);
	goto T89;
T89:;
	if(type_of(car((V35)))==t_symbol){
	goto T93;}
	base[0]= VV[22];
	base[1]= car((V35));
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T93;
T93:;
	if((cddr((V35)))==Cnil){
	goto T98;}
	base[0]= VV[23];
	base[1]= (V35);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T98;
T98:;
	V37= car((V35));
	V38= (*(LnkLI104))();
	{register object x= /* INLINE-ARGS */V37,V36= /* INLINE-ARGS */V38;
	while(!endp(V36))
	if(type_of(V36->c.c_car)==t_cons &&eql(x,V36->c.c_car->c.c_car)){
	goto T105;
	}else V36=V36->c.c_cdr;
	goto T104;}
	goto T105;
T105:;
	base[0]= VV[24];
	base[1]= car((V35));
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
	if((cdr((V46)))!=Cnil){
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
	{register object x= car((V46)),V49= (V47);
	while(!endp(V49))
	if(eql(x,V49->c.c_car)){
	goto T118;
	}else V49=V49->c.c_cdr;
	goto T117;}
	goto T118;
T118:;
	base[0]= VV[26];
	base[1]= car((V46));
	base[2]= (V45);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V50 = vs_base[0];
	VMR6(V50)}
	goto T117;
T117:;
	{object V51= car((V46));
	if((V51!= VV[100])
	&& (V51!= VV[102])
	&& (V51!= VV[98])
	&& (V51!= VV[99])
	&& (V51!= VV[101]))goto T122;
	{object V52;
	V52= cddr((V46));
	V47= make_cons(car((V46)),(V47));
	V46= (V52);}
	goto TTL;
	goto T122;
T122:;
	if((V51!= VV[28]))goto T127;
	{object V53= cadr((V46));
	if(!(type_of(V53)==t_fixnum||type_of(V53)==t_bignum)){
	goto T129;}}
	if(number_compare(cadr((V46)),small_fixnum(0))>0){
	goto T128;}
	goto T129;
T129:;
	base[0]= VV[27];
	base[1]= cadr((V46));
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T128;
T128:;
	V46= cddr((V46));
	V47= make_cons(VV[28],(V47));
	goto TTL;
	goto T127;
T127:;
	if((V51!= VV[29]))goto T139;
	(void)((*(LnkLI105))(cadr((V46))));
	V46= cddr((V46));
	V47= make_cons(VV[29],(V47));
	goto TTL;
	goto T139;
T139:;
	base[0]= VV[30];
	base[1]= (V45);
	base[2]= car((V46));
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
	V59= car((V57));
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
	base[1]= symbol_value(VV[31]);
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
	base[1]= symbol_value(VV[31]);
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
	base[1]= symbol_value(VV[31]);
	base[2]= VV[34];
	base[3]= (V59);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	{object V62 = Cnil;
	VMR7(V62)}
	goto T169;
T169:;
	if((get((V59),VV[35],Cnil))==Cnil){
	goto T177;}
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
	base[1]= list(4,VV[36],(V59),VV[37],listA(4,VV[38],list(2,VV[7],(V58)),VV[39],cddr((V57))));
	vs_top=(vs_base=base+1)+1;
	Leval();
	vs_top=sup;
	(void)(putprop((V59),(V58),VV[35]));
	V63= make_cons((V59),cadr((V57)));
	setq(VV[40],make_cons(/* INLINE-ARGS */V63,symbol_value(VV[40])));
	{object V64 = make_cons((V59),Cnil);
	VMR7(V64)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function RESET-TRACE-DECLARATIONS	*/

static object LI8(V66)

register object V66;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	if(((V66))==Cnil){
	goto T194;}
	base[0]= caar((V66));
	base[1]= cdar((V66));
	vs_top=(vs_base=base+0)+2;
	Lset();
	vs_top=sup;
	V66= cdr((V66));
	goto TTL;
	goto T194;
T194:;
	{object V67 = Cnil;
	VMR8(V67)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ALL-TRACE-DECLARATIONS	*/

static object LI9()

{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{register object V68;
	V68= Cnil;
	{register object V69;
	register object V70;
	V69= symbol_value(VV[40]);
	V70= car((V69));
	goto T206;
T206:;
	if(!(endp_prop((V69)))){
	goto T207;}
	goto T202;
	goto T207;
T207:;
	V68= append((V68),cdr((V70)));
	V69= cdr((V69));
	V70= car((V69));
	goto T206;}
	goto T202;
T202:;
	{object V71 = (V68);
	VMR9(V71)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for TRACE-CALL	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	bds_check;
	{object V72;
	register object V73;
	object V74;
	object V75;
	object V76;
	object V77;
	object V78;
	check_arg(7);
	V72=(base[0]);
	V73=(base[1]);
	V74=(base[2]);
	V75=(base[3]);
	V76=(base[4]);
	V77=(base[5]);
	V78=(base[6]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V79;
	object V80;
	bds_bind(VV[41],symbol_value(VV[41]));
	V79= Cnil;
	V80= Cnil;
	if(!(number_compare((VV[41]->s.s_dbind),small_fixnum(0))==0)){
	goto T220;}
	V81= (*(LnkLI104))();
	(void)((*(LnkLI109))(/* INLINE-ARGS */V81));
	goto T220;
T220:;
	V82= list(2,VV[13],list(2,VV[7],(V73)));
	base[8]= list(3,VV[1],make_cons(/* INLINE-ARGS */V82,Cnil),(V74));
	vs_top=(vs_base=base+8)+1;
	Leval();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T224;}
	(VV[41]->s.s_dbind)= one_plus((VV[41]->s.s_dbind));
	V83= number_times((VV[41]->s.s_dbind),small_fixnum(2));
	V80= (number_compare(/* INLINE-ARGS */V83,small_fixnum(20))<=0?(/* INLINE-ARGS */V83):small_fixnum(20));
	base[8]= symbol_value(VV[31]);
	vs_top=(vs_base=base+8)+1;
	Lfresh_line();
	vs_top=sup;
	if(((V75))==(Ct)){
	goto T234;}
	V84= list(2,VV[13],list(2,VV[7],(V73)));
	base[8]= list(3,VV[1],make_cons(/* INLINE-ARGS */V84,Cnil),(V75));
	vs_top=(vs_base=base+8)+1;
	Leval();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T233;}
	goto T234;
T234:;
	base[8]= symbol_value(VV[31]);
	base[9]= VV[42];
	base[10]= (V80);
	base[11]= (VV[41]->s.s_dbind);
	vs_top=(vs_base=base+8)+4;
	Lformat();
	vs_top=sup;
	base[8]= symbol_value(VV[31]);
	base[9]= VV[43];
	V85= list(2,VV[13],list(2,VV[7],(V73)));
	base[11]= list(3,VV[1],make_cons(/* INLINE-ARGS */V85,Cnil),(V76));
	vs_top=(vs_base=base+11)+1;
	Leval();
	vs_top=sup;
	base[10]= vs_base[0];
	vs_top=(vs_base=base+8)+3;
	Lformat();
	vs_top=sup;
	base[8]= symbol_value(VV[31]);
	vs_top=(vs_base=base+8)+1;
	Lfresh_line();
	vs_top=sup;
	goto T233;
T233:;
	base[8]= (V72);
	{object V86;
	V86= (V73);
	 vs_top=base+9;
	 while(!endp(V86))
	 {vs_push(car(V86));V86=cdr(V86);}
	vs_base=base+9;}
	super_funcall_no_event(base[8]);
	Llist();
	vs_top=sup;
	V79= vs_base[0];
	if(((V77))==(Ct)){
	goto T256;}
	V87= list(2,VV[13],list(2,VV[7],(V73)));
	base[8]= list(3,VV[1],list(2,/* INLINE-ARGS */V87,list(2,VV[14],list(2,VV[7],(V79)))),(V77));
	vs_top=(vs_base=base+8)+1;
	Leval();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T255;}
	goto T256;
T256:;
	base[8]= symbol_value(VV[31]);
	base[9]= VV[44];
	base[10]= (V80);
	base[11]= (VV[41]->s.s_dbind);
	vs_top=(vs_base=base+8)+4;
	Lformat();
	vs_top=sup;
	base[8]= symbol_value(VV[31]);
	base[9]= VV[45];
	V88= list(2,VV[13],list(2,VV[7],(V73)));
	base[11]= list(3,VV[1],list(2,/* INLINE-ARGS */V88,list(2,VV[14],list(2,VV[7],(V79)))),(V78));
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
	base[8]= (V79);
	vs_top=(vs_base=base+8)+1;
	Lvalues_list();
	bds_unwind1;
	return;
	goto T224;
T224:;
	base[8]= (V72);
	{object V89;
	V89= (V73);
	 vs_top=base+9;
	 while(!endp(V89))
	 {vs_push(car(V89));V89=cdr(V89);}
	vs_base=base+9;}
	super_funcall_no_event(base[8]);
	bds_unwind1;
	return;}
	}
}
/*	local entry for function UNTRACE-ONE	*/

static object LI12(V91)

object V91;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{object V92;
	base[0]=MMcons((V91),Cnil);
	V92= Cnil;
	V92= get((base[0]->c.c_car),VV[35],Cnil);
	if(((V92))==Cnil){
	goto T277;}
	(void)(remprop((base[0]->c.c_car),VV[35]));
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T283;}
	base[1]= symbol_value(VV[31]);
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
	V93= vs_base[0];
	if(!(type_of(V93)==t_cons)){
	goto T290;}
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	V94= vs_base[0];
	if(!(type_of(cadddr(V94))==t_cons)){
	goto T290;}
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	V95= vs_base[0];
	if(!((car(cadddr(V95)))==(VV[38]))){
	goto T290;}
	base[1]= (base[0]->c.c_car);
	base[3]= (V92);
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
	base[1]= symbol_value(VV[31]);
	base[2]= VV[47];
	base[3]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T281;
T281:;
	V96= 
	make_cclosure_new(LC17,Cnil,base[0],Cdata);
	setq(VV[40],(VFUN_NARGS=4,(*(LnkLI110))(V96,symbol_value(VV[40]),VV[48],small_fixnum(1))));
	{object V97 = make_cons((base[0]->c.c_car),Cnil);
	VMR11(V97)}
	goto T277;
T277:;
	base[1]= symbol_value(VV[31]);
	base[2]= VV[49];
	base[3]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	{object V98 = Cnil;
	VMR11(V98)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function STEP-READ-LINE	*/

static object LI13()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{register object V99;
	base[0]= symbol_value(VV[50]);
	vs_top=(vs_base=base+0)+1;
	Lread_char();
	vs_top=sup;
	V99= vs_base[0];
	goto T318;
T318:;
	base[0]= (V99);
	base[1]= VV[51];
	vs_top=(vs_base=base+0)+2;
	Lchar_eq();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T320;}
	base[0]= (V99);
	base[1]= VV[52];
	vs_top=(vs_base=base+0)+2;
	Lchar_eq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T319;}
	goto T320;
T320:;
	{object V100 = Cnil;
	VMR12(V100)}
	goto T319;
T319:;
	base[0]= symbol_value(VV[50]);
	vs_top=(vs_base=base+0)+1;
	Lread_char();
	vs_top=sup;
	V99= vs_base[0];
	goto T318;}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for IF-ERROR	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	check_arg(2);
	vs_top=sup;
	{object V101=base[0]->c.c_cdr;
	if(endp(V101))invalid_macro_call();
	base[2]= (V101->c.c_car);
	V101=V101->c.c_cdr;
	if(endp(V101))invalid_macro_call();
	base[3]= (V101->c.c_car);
	V101=V101->c.c_cdr;
	if(!endp(V101))invalid_macro_call();}
	{object V102;
	object V103;
	object V104;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V102= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V103= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V104= vs_base[0];
	V105= list(2,(V102),(V103));
	V106= list(5,VV[18],(V102),base[3],(V103),Ct);
	base[4]= list(3,VV[1],/* INLINE-ARGS */V105,list(3,VV[53],(V104),list(3,VV[3],/* INLINE-ARGS */V106,list(3,VV[54],(V104),list(4,VV[16],(V103),(V102),base[2])))));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for STEP	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	check_arg(2);
	vs_top=sup;
	{object V107=base[0]->c.c_cdr;
	if(endp(V107))invalid_macro_call();
	base[2]= (V107->c.c_car);
	V107=V107->c.c_cdr;
	if(!endp(V107))invalid_macro_call();}
	base[3]= list(6,VV[55],VV[56],VV[57],VV[58],VV[59],list(3,VV[60],list(2,VV[7],base[2]),Cnil));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for STEPPER	*/

static void L16()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM15; VC15
	vs_reserve(VM15);
	bds_check;
	{VOL object V108;
	VOL object V109;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V108=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T336;}
	V109=(base[1]);
	vs_top=sup;
	goto T337;
	goto T336;
T336:;
	V109= Cnil;
	goto T337;
T337:;
	{VOL object V110;
	VOL object V111;
	V110= Cnil;
	bds_bind(VV[61],symbol_value(VV[61]));
	V111= Cnil;
	if(!((symbol_value(VV[62]))==(Ct))){
	goto T341;}
	base[3]= (V108);
	base[4]= Cnil;
	base[5]= Cnil;
	base[6]= (V109);
	vs_top=(vs_base=base+3)+4;
	Levalhook();
	bds_unwind1;
	return;
	goto T341;
T341:;
	if(!(type_of(symbol_value(VV[62]))==t_fixnum||
type_of(symbol_value(VV[62]))==t_bignum||
type_of(symbol_value(VV[62]))==t_ratio||
type_of(symbol_value(VV[62]))==t_shortfloat||
type_of(symbol_value(VV[62]))==t_longfloat||
type_of(symbol_value(VV[62]))==t_complex)){
	goto T348;}
	V112= one_plus((VV[61]->s.s_dbind));
	if(!(number_compare(/* INLINE-ARGS */V112,symbol_value(VV[62]))>=0)){
	goto T352;}
	base[3]= (V108);
	base[4]= Cnil;
	base[5]= Cnil;
	base[6]= (V109);
	vs_top=(vs_base=base+3)+4;
	Levalhook();
	bds_unwind1;
	return;
	goto T352;
T352:;
	setq(VV[62],Cnil);
	goto T348;
T348:;
	if((symbol_value(VV[63]))==Cnil){
	goto T359;}
	if(!(type_of((V108))==t_cons)){
	goto T363;}
	if(!((car((V108)))==(symbol_value(VV[63])))){
	goto T363;}
	bds_bind(VV[63],Cnil);
	base[4]= (V108);
	base[5]= (V109);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk60)();
	bds_unwind1;
	bds_unwind1;
	return;
	goto T363;
T363:;
	base[3]= (V108);
	base[4]= symbol_function(VV[60]);
	base[5]= Cnil;
	base[6]= (V109);
	vs_top=(vs_base=base+3)+4;
	Levalhook();
	bds_unwind1;
	return;
	goto T359;
T359:;
	(VV[61]->s.s_dbind)= one_plus((VV[61]->s.s_dbind));
	V113= number_times((VV[61]->s.s_dbind),small_fixnum(2));
	V111= (number_compare(/* INLINE-ARGS */V113,small_fixnum(20))<=0?(/* INLINE-ARGS */V113):small_fixnum(20));
	goto T379;
T379:;
	base[3]= symbol_value(VV[50]);
	base[4]= VV[64];
	base[5]= (V111);
	base[6]= (V108);
	vs_top=(vs_base=base+3)+4;
	Lformat();
	vs_top=sup;
	base[3]= symbol_value(VV[50]);
	vs_top=(vs_base=base+3)+1;
	Lfinish_output();
	vs_top=sup;
	{register object V116;
	base[3]= symbol_value(VV[50]);
	vs_top=(vs_base=base+3)+1;
	Lread_char();
	vs_top=sup;
	V116= vs_base[0];
	goto T392;
T392:;
	base[3]= (V116);
	base[4]= VV[65];
	vs_top=(vs_base=base+3)+2;
	Lchar_neq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T393;}
	base[3]= (V116);
	base[4]= VV[66];
	vs_top=(vs_base=base+3)+2;
	Lchar_neq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T393;}
	V115= (V116);
	goto T388;
	goto T393;
T393:;
	base[3]= symbol_value(VV[50]);
	vs_top=(vs_base=base+3)+1;
	Lread_char();
	vs_top=sup;
	V116= vs_base[0];
	goto T392;}
	goto T388;
T388:;
	{object V114= V115;
	if(!eql(V114,VV[51])
	&& !eql(V114,VV[52]))goto T407;
	base[3]= (V108);
	base[4]= symbol_function(VV[60]);
	base[5]= Cnil;
	base[6]= (V109);
	vs_top=(vs_base=base+3)+4;
	Levalhook();
	Llist();
	vs_top=sup;
	V110= vs_base[0];
	goto T377;
	goto T407;
T407:;
	if(!eql(V114,VV[67])
	&& !eql(V114,VV[68]))goto T415;
	(void)((*(LnkLI111))());
	base[3]= (V108);
	base[4]= symbol_function(VV[60]);
	base[5]= Cnil;
	base[6]= (V109);
	vs_top=(vs_base=base+3)+4;
	Levalhook();
	Llist();
	vs_top=sup;
	V110= vs_base[0];
	goto T377;
	goto T415;
T415:;
	if(!eql(V114,VV[69])
	&& !eql(V114,VV[70]))goto T424;
	(void)((*(LnkLI111))());
	base[3]= (V108);
	base[4]= Cnil;
	base[5]= Cnil;
	base[6]= (V109);
	vs_top=(vs_base=base+3)+4;
	Levalhook();
	Llist();
	vs_top=sup;
	V110= vs_base[0];
	goto T377;
	goto T424;
T424:;
	if(!eql(V114,VV[71])
	&& !eql(V114,VV[72]))goto T433;
	(void)((*(LnkLI111))());
	base[3]= (V108);
	base[4]= VV[73];
	base[5]= symbol_value(VV[50]);
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
	goto T380;
	goto T433;
T433:;
	if(!eql(V114,VV[77])
	&& !eql(V114,VV[78]))goto T445;
	base[4]= Cnil;
	base[5]= Cnil;
	frs_push(FRS_PROTECT,Cnil);
	{object tag=Cnil;frame_ptr fr=NULL;object p;bool active;
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	{object V117;
	base[7]= symbol_value(VV[50]);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V117= vs_base[0];
	(void)((*(LnkLI111))());
	base[4]= (V117);}
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
	goto T456;}
	base[3]= base[4];
	goto T446;
	goto T456;
T456:;
	base[3]= Cnil;
	goto T446;
	vs_base=vs_top=base+7;
	for(p= base[6];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	vs_top=sup;
	base[3]= vs_base[0];}}
	goto T446;
T446:;
	bds_bind(VV[63],base[3]);
	base[4]= (V108);
	base[5]= symbol_function(VV[60]);
	base[6]= Cnil;
	base[7]= (V109);
	vs_top=(vs_base=base+4)+4;
	Levalhook();
	Llist();
	vs_top=sup;
	V110= vs_base[0];
	bds_unwind1;
	goto T377;
	goto T445;
T445:;
	if(!eql(V114,VV[79])
	&& !eql(V114,VV[80]))goto T465;
	(void)((*(LnkLI111))());
	setq(VV[62],Ct);
	base[3]= (V108);
	base[4]= Cnil;
	base[5]= Cnil;
	base[6]= (V109);
	vs_top=(vs_base=base+3)+4;
	Levalhook();
	Llist();
	vs_top=sup;
	V110= vs_base[0];
	goto T377;
	goto T465;
T465:;
	if(!eql(V114,VV[81])
	&& !eql(V114,VV[82]))goto T476;
	(void)((*(LnkLI111))());
	setq(VV[62],(VV[61]->s.s_dbind));
	base[3]= (V108);
	base[4]= Cnil;
	base[5]= Cnil;
	base[6]= (V109);
	vs_top=(vs_base=base+3)+4;
	Levalhook();
	Llist();
	vs_top=sup;
	V110= vs_base[0];
	goto T377;
	goto T476;
T476:;
	if(!eql(V114,VV[83])
	&& !eql(V114,VV[84]))goto T487;
	base[3]= (V109);
	{VOL object V118;
	VOL object V119;
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
	{object V120;
	base[13]= symbol_value(VV[50]);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V120= vs_base[0];
	(void)((*(LnkLI111))());
	base[10]= (V120);}
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
	goto T503;}
	base[9]= base[10];
	goto T493;
	goto T503;
T503:;
	base[9]= Cnil;
	goto T493;
	vs_base=vs_top=base+13;
	for(p= base[12];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	vs_top=sup;
	base[9]= vs_base[0];}}
	goto T493;
T493:;
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
	goto T511;}
	V118= base[6];
	goto T488;
	goto T511;
T511:;
	V118= Cnil;
	goto T488;
	vs_base=vs_top=base+9;
	for(p= base[8];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	vs_top=sup;
	V118= vs_base[0];}}
	goto T488;
T488:;
	V119= car((V118));
	goto T515;
T515:;
	if(!(endp_prop((V118)))){
	goto T516;}
	goto T380;
	goto T516;
T516:;
	base[6]= (V119);
	base[7]= VV[73];
	base[8]= symbol_value(VV[50]);
	base[9]= VV[75];
	base[10]= symbol_value(VV[85]);
	base[11]= VV[76];
	base[12]= symbol_value(VV[86]);
	vs_top=(vs_base=base+6)+7;
	Lwrite();
	vs_top=sup;
	princ_char(10,VV[50]);
	V118= cdr((V118));
	V119= car((V118));
	goto T515;}
	goto T487;
T487:;
	if(!eql(V114,VV[87])
	&& !eql(V114,VV[88]))goto T534;
	base[3]= (V109);
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
	{object V121;
	base[11]= symbol_value(VV[50]);
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V121= vs_base[0];
	(void)((*(LnkLI111))());
	base[8]= (V121);}
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
	goto T551;}
	base[7]= base[8];
	goto T541;
	goto T551;
T551:;
	base[7]= Cnil;
	goto T541;
	vs_base=vs_top=base+11;
	for(p= base[10];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	vs_top=sup;
	base[7]= vs_base[0];}}
	goto T541;
T541:;
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
	goto T559;}
	V110= base[4];
	goto T536;
	goto T559;
T559:;
	V110= Cnil;
	goto T536;
	vs_base=vs_top=base+7;
	for(p= base[6];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	vs_top=sup;
	V110= vs_base[0];}}
	goto T536;
T536:;
	goto T377;
	goto T534;
T534:;
	if(!eql(V114,VV[89])
	&& !eql(V114,VV[90]))goto T561;
	(void)((*(LnkLI111))());
	base[3]= one_plus(symbol_value(VV[92]));
	vs_base=vs_top;
	(void) (*Lnk113)();
	vs_top=sup;
	V122= vs_base[0];
	base[4]= one_minus(V122);
	base[5]= symbol_value(VV[92]);
	bds_bind(VV[91],base[3]);
	bds_bind(VV[92],base[4]);
	bds_bind(VV[93],base[5]);
	vs_base=vs_top;
	(void) (*Lnk114)();
	vs_top=sup;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T380;
	goto T561;
T561:;
	(void)((*(LnkLI111))());
	princ_char(10,Cnil);
	base[3]= symbol_value(VV[50]);
	base[4]= VV[94];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;
	princ_char(10,Cnil);}
	goto T380;
T380:;
	goto T379;
	goto T377;
T377:;
	base[3]= (V108);
	vs_top=(vs_base=base+3)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T574;}
	if(!(type_of((V108))==t_cons)){
	goto T573;}
	if(!((car((V108)))==(VV[7]))){
	goto T573;}
	goto T574;
T574:;
	base[3]= car((V110));
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;
	goto T573;
T573:;
	if(!(endp_prop((V110)))){
	goto T583;}
	base[3]= symbol_value(VV[50]);
	base[4]= VV[95];
	base[5]= (V111);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	goto T581;
	goto T583;
T583:;
	{object V123;
	object V124;
	V123= (V110);
	V124= Ct;
	goto T589;
T589:;
	if(!(endp_prop((V123)))){
	goto T590;}
	goto T581;
	goto T590;
T590:;
	if(((V124))==Cnil){
	goto T596;}
	base[3]= symbol_value(VV[50]);
	base[4]= VV[96];
	base[5]= (V111);
	base[6]= car((V123));
	vs_top=(vs_base=base+3)+4;
	Lformat();
	vs_top=sup;
	goto T594;
	goto T596;
T596:;
	base[3]= symbol_value(VV[50]);
	base[4]= VV[97];
	base[5]= (V111);
	base[6]= car((V123));
	vs_top=(vs_base=base+3)+4;
	Lformat();
	vs_top=sup;
	goto T594;
T594:;
	V123= cdr((V123));
	V124= Cnil;
	goto T589;}
	goto T581;
T581:;
	(VV[61]->s.s_dbind)= number_minus((VV[61]->s.s_dbind),small_fixnum(1));
	base[3]= (V110);
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
	vs_reserve(VM16);
	{object V125;
	check_arg(1);
	V125=(base[0]);
	vs_top=sup;
	base[1]= ((car((V125)))==((base0[0]->c.c_car))?Ct:Cnil);
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

