
#include "cmpinclude.h"
#include "loop.h"
init_loop(){do_init(VV);}
/*	macro definition for LOOP-COPYLIST*	*/

static L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	if(!endp(V1))invalid_macro_call();}
	base[3]= list(2,VV[0],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for LOOP-SIMPLE-ERROR	*/

static L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	check_arg(2);
	vs_top=sup;
	{object V2=base[0]->c.c_cdr;
	if(endp(V2))invalid_macro_call();
	base[2]= (V2->c.c_car);
	V2=V2->c.c_cdr;
	if(endp(V2)){
	base[3]= Cnil;
	base[4]= Cnil;
	} else {
	base[3]= (V2->c.c_car);
	base[4]= Ct;
	V2=V2->c.c_cdr;}
	if(!endp(V2))invalid_macro_call();}
	if((base[4])==Cnil){
	goto T4;}
	V3= VV[2];
	goto T2;
T4:;
	V3= VV[3];
T2:;
	V4= list(2,VV[4],base[2]);
	if(base[4]==Cnil){
	V5= Cnil;
	goto T6;}
	V5= make_cons(base[3],Cnil);
T6:;
	base[5]= listA(4,VV[1],V3,/* INLINE-ARGS */V4,V5);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for LOOP-WARN	*/

static L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	check_arg(2);
	vs_top=sup;
	{object V6=base[0]->c.c_cdr;
	if(endp(V6))invalid_macro_call();
	base[2]= (V6->c.c_car);
	V6=V6->c.c_cdr;
	if(endp(V6)){
	base[3]= Cnil;
	base[4]= Cnil;
	} else {
	base[3]= (V6->c.c_car);
	base[4]= Ct;
	V6=V6->c.c_cdr;}
	if(!endp(V6))invalid_macro_call();}
	if((base[4])==Cnil){
	goto T9;}
	V7= (VFUN_NARGS=4,(*(LnkLI225))(VV[6],VV[7],base[2],VV[8]));
	base[5]= list(3,VV[5],/* INLINE-ARGS */V7,base[3]);
	vs_top=(vs_base=base+5)+1;
	return;
T9:;
	base[5]= list(2,VV[5],list(2,VV[4],(VFUN_NARGS=3,(*(LnkLI225))(VV[6],VV[9],base[2]))));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for LOOP-POP-SOURCE	*/

static L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	check_arg(2);
	vs_top=sup;
	{object V8=base[0]->c.c_cdr;
	if(!endp(V8))invalid_macro_call();}
	base[2]= VV[10];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	macro definition for LOOP-GENTEMP	*/

static L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	check_arg(2);
	vs_top=sup;
	{object V9=base[0]->c.c_cdr;
	if(endp(V9)){
	base[2]= VV[11];
	} else {
	base[2]= (V9->c.c_car);
	V9=V9->c.c_cdr;}
	if(!endp(V9))invalid_macro_call();}
	base[3]= list(2,VV[12],list(2,VV[4],symbol_name(cadr(base[2]))));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for LOOP-MAKE-PSETQ	*/

static L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	{register object V10;
	check_arg(1);
	V10=(base[0]);
	vs_top=sup;
TTL:;
	if((V10)==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	V11= car((V10));
	if((cddr((V10)))!=Cnil){
	goto T15;}
	V12= cadr((V10));
	goto T13;
T15:;
	V13= cadr((V10));
	base[2]= cddr((V10));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk226)();
	vs_top=sup;
	V14= vs_base[0];
	V12= list(3,VV[13],/* INLINE-ARGS */V13,V14);
T13:;
	base[1]= list(2,/* INLINE-ARGS */V11,V12);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk227)();
	return;
	}
}
/*	function definition for LOOP-MAKE-DESETQ	*/

static L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	{object V15;
	check_arg(1);
	V15=(base[0]);
	vs_top=sup;
TTL:;
	if((symbol_value(VV[14]))==Cnil){
	goto T20;}
	{register object V17;
	V17= (V15);
T24:;
	if(((V17))!=Cnil){
	goto T25;}
	V16= VV[15];
	goto T22;
T25:;{object V18;
	if((((car((V17)))==Cnil?Ct:Cnil))==Cnil){
	goto T32;}
	V18= Cnil;
	goto T31;
T32:;
	V18= (type_of(car((V17)))==t_symbol?Ct:Cnil);
T31:;
	if(V18==Cnil)goto T30;
	goto T29;
T30:;}
	V16= VV[16];
	goto T22;
T29:;
	V17= cddr((V17));
	goto T24;}
T22:;
	base[1]= make_cons(V16,(V15));
	vs_top=(vs_base=base+1)+1;
	return;
T20:;
	{register object V19;
	register object V20;
	register object V21;
	register object V22;
	V19= (V15);
	V20= Cnil;
	V21= Cnil;
	V22= Cnil;
T38:;
	if(((V19))!=Cnil){
	goto T39;}
	if((V20)==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	base[1]= make_cons(VV[15],(V20));
	vs_top=(vs_base=base+1)+1;
	return;
T39:;
	V21= car((V19));
	V22= cadr((V19));
	if(type_of((V21))!=t_cons){
	goto T47;}
	if(type_of((V22))!=t_cons){
	goto T47;}
	{register object x= car((V22)),V23= VV[17];
	while(!endp(V23))
	if(eql(x,V23->c.c_car)){
	goto T54;
	}else V23=V23->c.c_cdr;
	goto T48;}
T54:;
	if(type_of(cadr((V22)))!=t_cons){
	goto T47;}
T48:;
	if(symbol_value(VV[18])!=Cnil){
	V24= symbol_value(VV[18]);
	goto T57;}
	base[1]= VV[19];
	vs_top=(vs_base=base+1)+1;
	Lgentemp();
	vs_top=sup;
	setq(VV[18],vs_base[0]);
	V24= symbol_value(VV[18]);
T57:;{object V25;
	V25= symbol_value(VV[18]);
	V19= listA(5,V24,(V22),(V21),V25,cddr((V19)));}
T47:;
	base[1]= car((V19));
	base[2]= cadr((V19));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk228)();
	vs_top=sup;
	V26= vs_base[0];
	V20= nconc((V20),V26);
	V19= cddr((V19));
	goto T38;}
	}
}
/*	function definition for LOOP-DESETQ-INTERNAL	*/

static L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	{register object V27;
	object V28;
	check_arg(2);
	V27=(base[0]);
	V28=(base[1]);
	vs_top=sup;
TTL:;
	if(((V27))!=Cnil){
	goto T69;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T69:;
	if(!(type_of((V27))!=t_cons)){
	goto T72;}
	base[2]= list(2,(V27),(V28));
	vs_top=(vs_base=base+2)+1;
	return;
T72:;
	base[2]= car((V27));
	base[3]= list(2,VV[20],(V28));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk228)();
	vs_top=sup;
	V29= vs_base[0];
	base[2]= cdr((V27));
	base[3]= list(2,VV[21],(V28));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk228)();
	vs_top=sup;
	V30= vs_base[0];
	base[2]= nconc(V29,V30);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for LOOP-MAKE-SETQ	*/

static L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	{object V31;
	check_arg(1);
	V31=(base[0]);
	vs_top=sup;
TTL:;
	if((V31)==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	base[1]= (V31);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk229)();
	return;
	}
}
/*	function definition for LOOP-CONSTRUCT-RETURN	*/

static L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	{object V32;
	check_arg(1);
	V32=(base[0]);
	vs_top=sup;
TTL:;
	if((symbol_value(VV[22]))==Cnil){
	goto T82;}
	base[1]= list(3,VV[23],car(symbol_value(VV[22])),(V32));
	vs_top=(vs_base=base+1)+1;
	return;
T82:;
	base[1]= list(2,VV[24],(V32));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-TEQUAL	*/

static L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	{object V33;
	object V34;
	check_arg(2);
	V33=(base[0]);
	V34=(base[1]);
	vs_top=sup;
TTL:;
	if(type_of((V33))==t_symbol){
	goto T84;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T84:;
	base[2]= (V33);
	base[3]= (V34);
	vs_top=(vs_base=base+2)+2;
	Lstring_eq();
	return;
	}
}
/*	function definition for LOOP-TASSOC	*/

static L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	{object V35;
	object V36;
	check_arg(2);
	V35=(base[0]);
	V36=(base[1]);
	vs_top=sup;
TTL:;
	if(type_of((V35))==t_symbol){
	goto T88;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T88:;
	base[2]= (V35);
	base[3]= (V36);
	base[4]= VV[25];
	base[5]= symbol_function(VV[230]);
	vs_top=(vs_base=base+2)+4;
	Lassoc();
	return;
	}
}
/*	function definition for LOOP-TMEMBER	*/

static L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	{object V37;
	object V38;
	check_arg(2);
	V37=(base[0]);
	V38=(base[1]);
	vs_top=sup;
TTL:;
	if(type_of((V37))==t_symbol){
	goto T94;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T94:;
	base[2]= (V37);
	base[3]= (V38);
	base[4]= VV[25];
	base[5]= symbol_function(VV[230]);
	vs_top=(vs_base=base+2)+4;
	Lmember();
	return;
	}
}
/*	macro definition for DEFINE-LOOP-MACRO	*/

static L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	check_arg(2);
	vs_top=sup;
	{object V39=base[0]->c.c_cdr;
	if(endp(V39))invalid_macro_call();
	base[2]= (V39->c.c_car);
	V39=V39->c.c_cdr;
	if(!endp(V39))invalid_macro_call();}
	if(!((base[2])==(VV[26]))){
	goto T101;}
	goto T100;
T101:;{object V40;
	base[3]= base[2];
	base[4]= VV[27];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	V40= vs_base[0];
	if(V40==Cnil)goto T103;
	goto T100;
T103:;}{object V41;
	base[3]= base[2];
	base[4]= VV[28];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	V41= vs_base[0];
	if(V41==Cnil)goto T107;
	goto T100;
T107:;}
	base[3]= VV[2];
	base[4]= VV[29];
	base[5]= base[2];
	vs_top=(vs_base=base+3)+3;
	Lerror();
	vs_top=sup;
T100:;
	base[3]= listA(3,VV[30],base[2],VV[31]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for LOOP	*/

static L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	check_arg(2);
	vs_top=sup;
	{object V42=base[0]->c.c_cdr;
	base[2]= V42;}
	base[3]= base[0];
	base[4]= base[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk232)();
	return;
}
/*	macro definition for LOOP-FINISH	*/

static L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	check_arg(2);
	vs_top=sup;
	{object V43=base[0]->c.c_cdr;
	if(!endp(V43))invalid_macro_call();}
	base[2]= VV[32];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	function definition for LOOP-TRANSLATE	*/

static L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	bds_check;
	{object V44;
	check_arg(2);
	V44=(base[0]);
	bds_bind(VV[33],base[1]);
	vs_top=sup;
TTL:;
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk233)();
	bds_unwind1;
	return;
	}
}
/*	function definition for LOOP-END-TESTIFY	*/

static L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	{register object V45;
	check_arg(1);
	V45=(base[0]);
	vs_top=sup;
TTL:;
	if(((V45))!=Cnil){
	goto T118;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T118:;
	V45= nreverse((V45));
	if((cdr((V45)))!=Cnil){
	goto T122;}
	V46= car((V45));
	goto T120;
T122:;
	V46= make_cons(VV[35],(V45));
T120:;
	base[1]= list(3,VV[34],V46,VV[36]);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-OPTIMIZE-DUPLICATED-CODE-ETC	*/

static L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	check_arg(0);
	vs_top=sup;
TTL:;
	{register object V47;
	register object V48;
	object V49;
	object V50;
	register object V51;
	object V52;
	object V53;
	V47= Cnil;
	V48= Cnil;
	V49= Cnil;
	V50= Cnil;
	V51= Cnil;
	V52= Cnil;
	V53= Cnil;
	{object V54;
	object V55;
	V54= nreverse(symbol_value(VV[37]));
	V55= nreverse(symbol_value(VV[38]));
T136:;
	if(!(equal((V54),(V55)))){
	goto T137;}
	V56= (VFUN_NARGS=2,(*(LnkLI234))(Cnil,(V54)));
	V57= nreverse(symbol_value(VV[39]));
	setq(VV[39],nconc(/* INLINE-ARGS */V56,/* INLINE-ARGS */V57));
	goto T132;
T137:;
	V47= make_cons(car((V54)),(V47));
	V48= make_cons(car((V55)),(V48));
	V54= cdr((V54));
	V55= cdr((V55));
	goto T136;}
T132:;
	if((symbol_value(VV[40]))==Cnil){
	goto T152;}
	V58= (VFUN_NARGS=2,(*(LnkLI234))(Cnil,(V47)));
	setq(VV[37],nreverse(/* INLINE-ARGS */V58));
	V59= (VFUN_NARGS=2,(*(LnkLI234))(Cnil,(V48)));
	setq(VV[38],nreverse(/* INLINE-ARGS */V59));
	goto T150;
T152:;
	setq(VV[37],Cnil);
	setq(VV[38],Cnil);
	V47= nreverse((V47));
	V48= nreverse((V48));
	{object V60;
	register object V61;
	V60= (V47);
	V61= (V48);
T167:;
	if(((V61))!=Cnil){
	goto T168;}
	goto T165;
T168:;
	if(equal(car((V61)),car((V60)))){
	goto T174;}
	V53= (V61);
	goto T172;
T174:;
	base[0]= car((V61));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk136)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T172;}
	goto T165;
T172:;
	V60= cdr((V60));
	V61= cdr((V61));
	goto T167;}
T165:;
	if(((V53))==Cnil){
	goto T184;}
T189:;
	if((car((V47)))!=Cnil){
	goto T193;}
	goto T192;
T193:;
	setq(VV[37],make_cons(car((V47)),symbol_value(VV[37])));
T192:;
	if((car((V48)))!=Cnil){
	goto T197;}
	goto T196;
T197:;
	setq(VV[38],make_cons(car((V48)),symbol_value(VV[38])));
T196:;
	V47= cdr((V47));
	V48= cdr((V48));
	if(((V48))==(cdr((V53)))){
	goto T205;}
	goto T204;
T205:;
	goto T187;
T204:;
	goto T189;
T187:;
	setq(VV[37],nreverse(symbol_value(VV[37])));
	setq(VV[38],nreverse(symbol_value(VV[38])));
T184:;
	{object V62;
	object V63;
	V62= nreverse((V47));
	V63= nreverse((V48));
T216:;
	if(((V63))!=Cnil){
	goto T217;}
	goto T212;
T217:;
	V51= car((V63));
	V52= car((V62));
	{object V64;
	if(((V51))==Cnil){
	goto T227;}
	V64= Cnil;
	goto T226;
T227:;
	V64= (((V52))==Cnil?Ct:Cnil);
T226:;
	if(((V64))==Cnil){
	goto T230;}
	goto T225;
T230:;
	if(!(equal((V51),(V52)))){
	goto T233;}
	base[0]= (V50);
	base[1]= (V49);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk235)();
	vs_top=sup;
	setq(VV[39],make_cons((V51),symbol_value(VV[39])));
	V50= Cnil;
	V49= Cnil;
	goto T225;
T233:;
	if((V51)==Cnil){
	goto T243;}
	V49= make_cons((V51),(V49));
T243:;
	if((V52)==Cnil){
	goto T225;}
	V50= make_cons((V52),(V50));}
T225:;
	V62= cdr((V62));
	V63= cdr((V63));
	goto T216;}
T212:;
	base[0]= (V50);
	base[1]= (V49);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk235)();
	vs_top=sup;
T150:;
	if(symbol_value(VV[41])==Cnil){
	goto T252;}
	V65= list(3,VV[15],symbol_value(VV[41]),Cnil);
	setq(VV[38],make_cons(/* INLINE-ARGS */V65,symbol_value(VV[38])));
T252:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;}
}
/*	function definition for LOOP-OUTPUT-GROUP	*/

static L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{register object V66;
	register object V67;
	check_arg(2);
	V66=(base[0]);
	V67=(base[1]);
	vs_top=sup;
TTL:;
	if((V67)!=Cnil){
	if(((V67))!=Cnil){
	goto T254;}
	goto T255;}
	if(((V66))!=Cnil){
	goto T254;}
T255:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T254:;
	{object V68;
	if(symbol_value(VV[41])!=Cnil){
	V68= symbol_value(VV[41]);
	goto T256;}
	base[3]= VV[42];
	vs_top=(vs_base=base+3)+1;
	Lgentemp();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= Ct;
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk236)();
	vs_top=sup;
	setq(VV[41],vs_base[0]);
	V68= symbol_value(VV[41]);
T256:;
	if(((V66))!=Cnil){
	goto T265;}
	V69= list(3,VV[43],(V68),make_cons(VV[44],(V67)));
	goto T263;
T265:;
	if(((V67))!=Cnil){
	goto T268;}
	V69= list(3,VV[34],(V68),make_cons(VV[44],(V66)));
	goto T263;
T268:;
	V70= make_cons((V68),(V66));
	V69= list(3,VV[45],/* INLINE-ARGS */V70,make_cons(Ct,(V67)));
T263:;
	setq(VV[39],make_cons(V69,symbol_value(VV[39])));
	base[2]= symbol_value(VV[39]);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for LOOP-TRANSLATE-1	*/

static L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	bds_check;
	check_arg(1);
	bds_bind(VV[46],base[0]);
	vs_top=sup;
TTL:;
	if((car((VV[46]->s.s_dbind)))==(VV[26])){
	goto T271;}
	goto T270;
T271:;
	(VV[46]->s.s_dbind)= cdr((VV[46]->s.s_dbind));
T270:;
	{register object V71;
	register object V72;
	object V73;
	bds_bind(VV[47],Cnil);
	bds_bind(VV[48],Cnil);
	bds_bind(VV[49],Cnil);
	bds_bind(VV[50],Cnil);
	bds_bind(VV[51],Cnil);
	bds_bind(VV[52],Cnil);
	bds_bind(VV[53],Cnil);
	bds_bind(VV[54],Cnil);
	bds_bind(VV[55],Cnil);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[37],Cnil);
	bds_bind(VV[39],Cnil);
	bds_bind(VV[59],Cnil);
	bds_bind(VV[38],Cnil);
	bds_bind(VV[60],Cnil);
	bds_bind(VV[61],Cnil);
	bds_bind(VV[62],Cnil);
	bds_bind(VV[63],Cnil);
	bds_bind(VV[41],Cnil);
	bds_bind(VV[18],Cnil);
	bds_bind(VV[22],Cnil);
	bds_bind(VV[64],Cnil);
	V71= Cnil;
	V72= Cnil;
	V73= Cnil;
T278:;
	if(((VV[46]->s.s_dbind))!=Cnil){
	goto T279;}
	if((VV[62]->s.s_dbind)==Cnil){
	goto T282;}
	base[25]= VV[2];
	base[26]= VV[65];
	base[27]= caadar((VV[62]->s.s_dbind));
	vs_top=(vs_base=base+25)+3;
	Lerror();
	vs_top=sup;
T282:;
	vs_base=vs_top;
	(void) (*Lnk237)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk238)();
	vs_top=sup;
	if((VV[18]->s.s_dbind)==Cnil){
	goto T288;}
	V73= make_cons((VV[18]->s.s_dbind),(V73));
T288:;
	V74= car((VV[22]->s.s_dbind));
	base[25]= nreverse((VV[57]->s.s_dbind));
	base[26]= (VV[37]->s.s_dbind);
	base[28]= (VV[39]->s.s_dbind);
	base[29]= (VV[38]->s.s_dbind);
	V77= nreverse((VV[60]->s.s_dbind));
	V78= nreverse((VV[61]->s.s_dbind));
	base[30]= listA(4,VV[70],VV[71],VV[72],append(/* INLINE-ARGS */V77,/* INLINE-ARGS */V78));
	vs_top=(vs_base=base+28)+3;
	Lappend();
	vs_top=sup;
	V76= vs_base[0];
	base[27]= make_cons(VV[69],V76);
	vs_top=(vs_base=base+25)+3;
	Lappend();
	vs_top=sup;
	V75= vs_base[0];
	V72= list(3,VV[66],/* INLINE-ARGS */V74,list(3,VV[67],(V73),make_cons(VV[68],V75)));
	{object V79;
	register object V80;
	object V81;
	V79= Cnil;
	V80= Cnil;
	V81= Cnil;
T302:;
	if(((VV[54]->s.s_dbind))!=Cnil){
	goto T303;}
	goto T300;
T303:;
	V79= car((VV[54]->s.s_dbind));
	(VV[54]->s.s_dbind)= cdr((VV[54]->s.s_dbind));
	V80= car((VV[55]->s.s_dbind));
	(VV[55]->s.s_dbind)= cdr((VV[55]->s.s_dbind));
	V72= make_cons((V72),Cnil);
	{object V82;
	V82= car((VV[56]->s.s_dbind));
	(VV[56]->s.s_dbind)= cdr((VV[56]->s.s_dbind));
	V81= (V82);}
	if(((V81))!=Cnil){
	goto T318;}
	goto T317;
T318:;
	base[25]= (V81);
	vs_top=(vs_base=base+25)+1;
	(void) (*Lnk229)();
	vs_top=sup;
	V83= vs_base[0];
	V72= make_cons(V83,(V72));
T317:;
	if((V80)==Cnil){
	goto T327;}
	V84= make_cons(VV[73],(V80));
	V72= make_cons(/* INLINE-ARGS */V84,(V72));
T327:;
	V85= nreverse((V79));
	V72= listA(3,VV[67],/* INLINE-ARGS */V85,(V72));
	goto T302;}
T300:;
	{register object V86;
	V86= (VV[58]->s.s_dbind);
T335:;
	if(((V86))!=Cnil){
	goto T336;}
	goto T333;
T336:;
	V87= car((V86));
	V88= make_cons((V72),Cnil);
	V72= append(/* INLINE-ARGS */V87,/* INLINE-ARGS */V88);
	V86= cdr((V86));
	goto T335;}
T333:;
	base[25]= (V72);
	vs_top=(vs_base=base+25)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
T279:;
	V71= car((VV[46]->s.s_dbind));
	if(!(type_of((V71))==t_symbol)){
	goto T348;}
	{object V89;
	V89= car((VV[46]->s.s_dbind));
	(VV[46]->s.s_dbind)= cdr((VV[46]->s.s_dbind));
	goto T346;}
T348:;
	V71= VV[74];
T346:;
	base[25]= (V71);
	base[26]= VV[27];
	vs_top=(vs_base=base+25)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	V72= vs_base[0];
	if(((V72))==Cnil){
	goto T357;}
	base[25]= cadr((V72));
	{object V90;
	V90= cddr((V72));
	 vs_top=base+26;
	 while(!endp(V90))
	 {vs_push(car(V90));V90=cdr(V90);}
	vs_base=base+26;}
	super_funcall_no_event(base[25]);
	vs_top=sup;
	goto T355;
T357:;
	base[25]= (V71);
	base[26]= VV[28];
	vs_top=(vs_base=base+25)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	V72= vs_base[0];
	if(((V72))==Cnil){
	goto T365;}
	base[25]= (V72);
	vs_top=(vs_base=base+25)+1;
	(void) (*Lnk239)();
	vs_top=sup;
	goto T355;
T365:;
	base[25]= (V71);
	base[26]= VV[75];
	vs_top=(vs_base=base+25)+2;
	(void) (*Lnk240)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T372;}
	base[25]= VV[2];
	base[26]= VV[76];
	base[27]= list(3,(V71),car((VV[46]->s.s_dbind)),cadr((VV[46]->s.s_dbind)));
	vs_top=(vs_base=base+25)+3;
	Lerror();
	vs_top=sup;
	goto T355;
T372:;
	base[25]= VV[2];
	base[26]= VV[77];
	base[27]= (V71);
	vs_top=(vs_base=base+25)+3;
	Lerror();
	vs_top=sup;
T355:;
	goto T278;}
}
/*	function definition for LOOP-BIND-BLOCK	*/

static L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	check_arg(0);
	vs_top=sup;
TTL:;
	if((symbol_value(VV[49]))==Cnil){
	goto T385;}
	setq(VV[54],make_cons(symbol_value(VV[49]),symbol_value(VV[54])));
	setq(VV[55],make_cons(symbol_value(VV[52]),symbol_value(VV[55])));
	setq(VV[49],Cnil);
	setq(VV[52],Cnil);
	setq(VV[56],make_cons(symbol_value(VV[53]),symbol_value(VV[56])));
	setq(VV[53],Cnil);
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
T385:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LOOP-GET-PROGN-1	*/

static L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	check_arg(0);
	vs_top=sup;
TTL:;
	{register object V91;
	register object V92;
	{object V94;
	V94= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));
	V93= (V94);}
	V91= make_cons(V93,Cnil);
	V92= car(symbol_value(VV[46]));
T405:;
	if(!(type_of((V92))!=t_cons)){
	goto T406;}
	base[0]= nreverse((V91));
	vs_top=(vs_base=base+0)+1;
	return;
T406:;
	{register object V96;
	V96= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));
	V95= (V96);}
	V91= make_cons(V95,(V91));
	V92= car(symbol_value(VV[46]));
	goto T405;}
}
/*	function definition for LOOP-GET-PROGN	*/

static L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	check_arg(0);
	vs_top=sup;
TTL:;
	{object V97;
	vs_base=vs_top;
	(void) (*Lnk241)();
	vs_top=sup;
	V97= vs_base[0];
	if((cdr((V97)))!=Cnil){
	goto T420;}
	base[0]= car((V97));
	vs_top=(vs_base=base+0)+1;
	return;
T420:;
	base[0]= make_cons(VV[44],(V97));
	vs_top=(vs_base=base+0)+1;
	return;}
}
/*	function definition for LOOP-GET-FORM	*/

static L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_reserve(VM25);
	{object V98;
	check_arg(1);
	V98=(base[0]);
	vs_top=sup;
TTL:;
	{register object V99;
	vs_base=vs_top;
	(void) (*Lnk241)();
	vs_top=sup;
	V99= vs_base[0];
	if((cdr((V99)))!=Cnil){
	goto T424;}
	base[1]= car((V99));
	vs_top=(vs_base=base+1)+1;
	return;
T424:;
	if(!(type_of((V98))!=t_cons)){
	goto T429;}
	V100= make_cons((V98),(V99));
	goto T427;
T429:;
	V100= append((V98),(V99));
T427:;
	(void)((VFUN_NARGS=2,(*(LnkLI5))(VV[78],V100)));
	base[1]= make_cons(VV[44],(V99));
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for LOOP-TYPED-ARITH	*/

static L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_reserve(VM26);
	{object V101;
	object V102;
	check_arg(2);
	V101=(base[0]);
	V102=(base[1]);
	vs_top=sup;
TTL:;
	base[2]= (V101);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for LOOP-TYPED-INIT	*/

static L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	{object V103;
	check_arg(1);
	V103=(base[0]);
	vs_top=sup;
TTL:;
	{object V104;
	V104= Cnil;
	base[1]= (V103);
	base[2]= VV[79];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk240)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T432;}
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+1)+1;
	return;
T432:;
	base[1]= (V103);
	base[2]= symbol_value(VV[80]);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk240)();
	vs_top=sup;
	V105= vs_base[0];
	V104= car(V105);
	if(((V104))==Cnil){
	goto T437;}
	{register object x= (V104),V106= VV[81];
	while(!endp(V106))
	if(eql(x,V106->c.c_car)){
	goto T445;
	}else V106=V106->c.c_cdr;
	goto T444;}
T445:;
	base[1]= VV[82];
	vs_top=(vs_base=base+1)+1;
	return;
T444:;
	base[1]= (*(LnkLI242))(small_fixnum(0),(V104));
	vs_top=(vs_base=base+1)+1;
	return;
T437:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for LOOP-MAKE-VARIABLE	*/

static L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_reserve(VM28);
	{register object V107;
	register object V108;
	register object V109;
	check_arg(3);
	V107=(base[0]);
	V108=(base[1]);
	V109=(base[2]);
	vs_top=sup;
TTL:;
	if(((V107))!=Cnil){
	goto T448;}
	if(((V108))==Cnil){
	goto T446;}
	base[3]= VV[83];
	vs_top=(vs_base=base+3)+1;
	Lgentemp();
	vs_top=sup;
	V107= vs_base[0];
	V110= list(2,(V107),(V108));
	setq(VV[49],make_cons(/* INLINE-ARGS */V110,symbol_value(VV[49])));
	V111= list(2,VV[84],(V107));
	setq(VV[52],make_cons(/* INLINE-ARGS */V111,symbol_value(VV[52])));
	goto T446;
T448:;
	if(!(type_of((V107))!=t_cons)){
	goto T458;}
	if((symbol_value(VV[48]))==Cnil){
	goto T462;}
	{register object x= (V107),V112= symbol_value(VV[47]);
	while(!endp(V112))
	if(eql(x,V112->c.c_car)){
	goto T466;
	}else V112=V112->c.c_cdr;
	goto T465;}
T466:;
	base[3]= VV[2];
	base[4]= VV[85];
	base[5]= (V107);
	vs_top=(vs_base=base+3)+3;
	Lerror();
	vs_top=sup;
	goto T460;
T465:;
	setq(VV[47],make_cons((V107),symbol_value(VV[47])));
	goto T460;
T462:;
	{register object x= (V107),V113= symbol_value(VV[49]);
	while(!endp(V113))
	if(type_of(V113->c.c_car)==t_cons &&eql(x,V113->c.c_car->c.c_car)){
	goto T472;
	}else V113=V113->c.c_cdr;
	goto T460;}
T472:;
	base[3]= VV[2];
	base[4]= VV[86];
	base[5]= (V107);
	vs_top=(vs_base=base+3)+3;
	Lerror();
	vs_top=sup;
T460:;
	if(!(type_of((V107))==t_symbol)){
	goto T477;}
	goto T476;
T477:;
	base[3]= VV[2];
	base[4]= VV[87];
	base[5]= (V107);
	vs_top=(vs_base=base+3)+3;
	Lerror();
	vs_top=sup;
T476:;
	base[3]= (V107);
	base[4]= (V109);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk92)();
	vs_top=sup;
	if((V108)!=Cnil){
	V114= (V108);
	goto T486;}
	base[3]= (V109);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk243)();
	vs_top=sup;
	V114= vs_base[0];
T486:;
	V115= list(2,(V107),V114);
	setq(VV[49],make_cons(/* INLINE-ARGS */V115,symbol_value(VV[49])));
	goto T446;
T458:;
	if(((V108))==Cnil){
	goto T489;}
	if((symbol_value(VV[14]))==Cnil){
	goto T492;}
	base[3]= (V107);
	base[4]= (V109);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk92)();
	vs_top=sup;
	V116= list(2,(V107),(V108));
	setq(VV[49],make_cons(/* INLINE-ARGS */V116,symbol_value(VV[49])));
	goto T446;
T492:;
	{object V117;
	base[3]= VV[88];
	vs_top=(vs_base=base+3)+1;
	Lgentemp();
	vs_top=sup;
	V117= vs_base[0];
	V118= list(2,(V117),(V108));
	setq(VV[49],make_cons(/* INLINE-ARGS */V118,symbol_value(VV[49])));
	setq(VV[53],listA(3,(V107),(V117),symbol_value(VV[53])));
	base[3]= (V107);
	base[4]= Cnil;
	base[5]= (V109);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk236)();
	vs_top=sup;
	goto T446;}
T489:;
	{object V119;
	object V120;
	V119= Cnil;
	V120= Cnil;
	if(!(type_of((V109))!=t_cons)){
	goto T509;}
	V120= (V109);
	V119= (V120);
	goto T507;
T509:;
	V119= car((V109));
	V120= cdr((V109));
T507:;
	base[3]= car((V107));
	base[4]= Cnil;
	base[5]= (V119);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk236)();
	vs_top=sup;
	base[3]= cdr((V107));
	base[4]= Cnil;
	base[5]= (V120);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk236)();
	vs_top=sup;}
T446:;
	base[3]= (V107);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	function definition for LOOP-MAKE-ITERATION-VARIABLE	*/

static L29()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_reserve(VM29);
	bds_check;
	{object V121;
	object V122;
	object V123;
	check_arg(3);
	V121=(base[0]);
	V122=(base[1]);
	V123=(base[2]);
	vs_top=sup;
TTL:;
	bds_bind(VV[48],Ct);
	base[4]= (V121);
	base[5]= (V122);
	base[6]= (V123);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk236)();
	bds_unwind1;
	return;
	}
}
/*	function definition for LOOP-DECLARE-VARIABLE	*/

static L30()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_reserve(VM30);
	{register object V124;
	register object V125;
	check_arg(2);
	V124=(base[0]);
	V125=(base[1]);
	vs_top=sup;
TTL:;
	if(((V124))==Cnil){
	goto T526;}
	if(((V125))!=Cnil){
	goto T527;}
T526:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T527:;
	if(!(type_of((V124))==t_symbol)){
	goto T532;}
	{register object x= (V124),V126= symbol_value(VV[50]);
	while(!endp(V126))
	if(eql(x,V126->c.c_car)){
	goto T532;
	}else V126=V126->c.c_cdr;}
	base[2]= (V125);
	base[3]= VV[90];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T539;}
	V127= Ct;
	goto T537;
T539:;
	V127= (V125);
T537:;
	V128= list(3,VV[89],V127,(V124));
	setq(VV[52],make_cons(/* INLINE-ARGS */V128,symbol_value(VV[52])));
	base[2]= symbol_value(VV[52]);
	vs_top=(vs_base=base+2)+1;
	return;
T532:;
	if(!(type_of((V124))==t_cons)){
	goto T544;}
	if(!(type_of((V125))==t_cons)){
	goto T547;}
	base[2]= car((V124));
	base[3]= car((V125));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk92)();
	vs_top=sup;
	V124= cdr((V124));
	V125= cdr((V125));
	goto TTL;
T547:;
	base[2]= car((V124));
	base[3]= (V125);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk92)();
	vs_top=sup;
	V124= cdr((V124));
	goto TTL;
T544:;
	base[2]= VV[2];
	base[3]= VV[91];
	base[4]= list(3,VV[92],(V124),(V125));
	vs_top=(vs_base=base+2)+3;
	Lerror();
	return;
	}
}
/*	function definition for LOOP-CONSTANTP	*/

static L31()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_reserve(VM31);
	{object V129;
	check_arg(1);
	V129=(base[0]);
	vs_top=sup;
TTL:;
	base[1]= (V129);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	return;
	}
}
/*	function definition for LOOP-MAYBE-BIND-FORM	*/

static L32()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_reserve(VM32);
	{object V130;
	object V131;
	check_arg(2);
	V130=(base[0]);
	V131=(base[1]);
	vs_top=sup;
TTL:;
	base[2]= (V130);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk245)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T566;}
	base[2]= (V130);
	vs_top=(vs_base=base+2)+1;
	return;
T566:;
	base[3]= VV[93];
	vs_top=(vs_base=base+3)+1;
	Lgentemp();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V130);
	base[4]= (V131);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk236)();
	return;
	}
}
/*	function definition for LOOP-OPTIONAL-TYPE	*/

static L33()
{register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_reserve(VM33);
	check_arg(0);
	vs_top=sup;
TTL:;
	{register object V132;
	V132= car(symbol_value(VV[46]));
	if(((((V132))==Cnil?Ct:Cnil))==Cnil){
	goto T574;}
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
T574:;
	if(!(((type_of((V132))!=t_cons?Ct:Cnil))==Cnil)){
	goto T578;}
	goto T576;
T578:;{object V133;
	base[0]= (V132);
	base[1]= VV[94];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk240)();
	vs_top=sup;
	V133= vs_base[0];
	if(V133==Cnil)goto T580;
	if((V133)!=Cnil){
	goto T576;}
	goto T577;
T580:;}
	base[0]= (V132);
	base[1]= symbol_value(VV[80]);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk240)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T576;}
T577:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
T576:;
	{object V134;
	V134= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));
	base[0]= (V134);
	vs_top=(vs_base=base+0)+1;
	return;}}
}
/*	function definition for LOOP-MAKE-CONDITIONALIZATION	*/

static L34()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_reserve(VM34);
	{object V135;
	check_arg(1);
	V135=(base[0]);
	vs_top=sup;
TTL:;
	if((symbol_value(VV[62]))==Cnil){
	goto T590;}
	base[3]= symbol_value(VV[62]);
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V138= vs_base[0];
	base[2]= car(V138);
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V137= vs_base[0];
	base[1]= car(V137);
	vs_top=(vs_base=base+1)+1;
	Llast();
	vs_top=sup;
	V136= vs_base[0];
	V139= make_cons((V135),Cnil);
	if(type_of(V136)!=t_cons)FEwrong_type_argument(Scons,V136);
	(V136)->c.c_cdr = /* INLINE-ARGS */V139;
	base[1]= car(symbol_value(VV[46]));
	base[2]= VV[95];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T600;}
	{object V140;
	V140= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T600:;
	base[1]= car(symbol_value(VV[46]));
	base[2]= VV[96];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T609;}
	{object V141;
	V141= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));}
	{object V142;
	base[1]= symbol_value(VV[62]);
	vs_top=(vs_base=base+1)+1;
	Llast();
	vs_top=sup;
	V143= vs_base[0];
	V142= car(V143);
	{object V144;
	V144= ((cddr((V142)))==Cnil?Ct:Cnil);
	if(((V144))==Cnil){
	goto T623;}
	goto T617;
T623:;
	if((cdr(symbol_value(VV[62])))!=Cnil){
	goto T626;}
	base[1]= VV[2];
	base[2]= VV[97];
	base[3]= list(3,VV[96],car(symbol_value(VV[46])),cadr(symbol_value(VV[46])));
	vs_top=(vs_base=base+1)+3;
	Lerror();
	vs_top=sup;
	goto T617;
T626:;
	V145= nreverse(symbol_value(VV[62]));
	setq(VV[62],cdr(/* INLINE-ARGS */V145));
	base[2]= car(symbol_value(VV[62]));
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V147= vs_base[0];
	base[1]= car(V147);
	vs_top=(vs_base=base+1)+1;
	Llast();
	vs_top=sup;
	V146= vs_base[0];
	V148= make_cons((V142),Cnil);
	if(type_of(V146)!=t_cons)FEwrong_type_argument(Scons,V146);
	(V146)->c.c_cdr = /* INLINE-ARGS */V148;
	setq(VV[62],nreverse(symbol_value(VV[62])));}}
T617:;
	base[2]= symbol_value(VV[62]);
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V150= vs_base[0];
	base[1]= car(V150);
	vs_top=(vs_base=base+1)+1;
	Llast();
	vs_top=sup;
	V149= vs_base[0];
	V151= make_cons(Ct,Cnil);
	V152= make_cons(/* INLINE-ARGS */V151,Cnil);
	if(type_of(V149)!=t_cons)FEwrong_type_argument(Scons,V149);
	(V149)->c.c_cdr = /* INLINE-ARGS */V152;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T609:;
	{register object V153;
	register object V154;
	V153= car(symbol_value(VV[62]));
	V154= cdr(symbol_value(VV[62]));
T648:;
	if(((V154))!=Cnil){
	goto T649;}
	goto T644;
T649:;
	base[2]= (V153);
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V156= vs_base[0];
	base[1]= car(V156);
	vs_top=(vs_base=base+1)+1;
	Llast();
	vs_top=sup;
	V155= vs_base[0];
	V157= make_cons(car((V154)),Cnil);
	if(type_of(V155)!=t_cons)FEwrong_type_argument(Scons,V155);
	(V155)->c.c_cdr = /* INLINE-ARGS */V157;
	V153= car((V154));
	V154= cdr((V154));
	goto T648;}
T644:;
	{object V158;
	V158= car(symbol_value(VV[62]));
	setq(VV[62],Cnil);
	base[1]= (V158);
	vs_top=(vs_base=base+1)+1;
	return;}
T590:;
	base[1]= (V135);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-PSEUDO-BODY	*/

static L35()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_reserve(VM35);
	{object V159;
	check_arg(1);
	V159=(base[0]);
	vs_top=sup;
TTL:;
	{register object V160;
	base[2]= (V159);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk246)();
	vs_top=sup;
	V160= vs_base[0];
	if(((V160))==Cnil){
	goto T668;}
	if((symbol_value(VV[59]))==Cnil){
	goto T671;}
	setq(VV[39],make_cons((V160),symbol_value(VV[39])));
	base[2]= symbol_value(VV[39]);
	vs_top=(vs_base=base+2)+1;
	return;
T671:;
	setq(VV[37],make_cons((V160),symbol_value(VV[37])));
	setq(VV[38],make_cons((V160),symbol_value(VV[38])));
	base[2]= symbol_value(VV[38]);
	vs_top=(vs_base=base+2)+1;
	return;
T668:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for LOOP-EMIT-BODY	*/

static L36()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_reserve(VM36);
	{object V161;
	check_arg(1);
	V161=(base[0]);
	vs_top=sup;
TTL:;
	setq(VV[59],Ct);
	base[1]= (V161);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk247)();
	return;
	}
}
/*	function definition for LOOP-DO-NAMED	*/

static L37()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_reserve(VM37);
	check_arg(0);
	vs_top=sup;
TTL:;
	{register object V162;
	{object V163;
	V163= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));
	V162= (V163);}
	if(((V162))==Cnil){
	goto T685;}
	if(type_of((V162))==t_symbol){
	goto T684;}
T685:;
	base[0]= VV[2];
	base[1]= VV[98];
	base[2]= (V162);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
T684:;
	if((symbol_value(VV[37]))!=Cnil){
	goto T693;}
	if((symbol_value(VV[39]))!=Cnil){
	goto T693;}
	if((symbol_value(VV[61]))==Cnil){
	goto T692;}
T693:;
	base[0]= VV[2];
	base[1]= VV[99];
	base[2]= (V162);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
T692:;
	setq(VV[22],make_cons((V162),symbol_value(VV[22])));
	if((cdr(symbol_value(VV[22])))==Cnil){
	goto T703;}
	base[0]= VV[2];
	base[1]= VV[100];
	base[2]= symbol_value(VV[22]);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	return;
T703:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;}
}
/*	function definition for LOOP-DO-INITIALLY	*/

static L38()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_reserve(VM38);
	check_arg(0);
	vs_top=sup;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk248)();
	vs_top=sup;
	V164= vs_base[0];
	setq(VV[57],make_cons(V164,symbol_value(VV[57])));
	base[0]= symbol_value(VV[57]);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LOOP-NODECLARE	*/

static L39()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_reserve(VM39);
	check_arg(0);
	vs_top=sup;
TTL:;
	{register object V165;
	{object V166;
	V166= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));
	V165= (V166);}
	if(!(((V165))==Cnil)){
	goto T716;}
	goto T715;
T716:;
	if(!(type_of((V165))==t_cons)){
	goto T718;}
	goto T715;
T718:;
	base[1]= VV[2];
	base[2]= VV[101];
	base[3]= (V165);
	vs_top=(vs_base=base+1)+3;
	Lerror();
	vs_top=sup;
T715:;
	setq(VV[50],append((V165),symbol_value(VV[50])));
	base[1]= symbol_value(VV[50]);
	vs_top=(vs_base=base+1)+1;
	return;}
}
/*	function definition for LOOP-DO-FINALLY	*/

static L40()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_reserve(VM40);
	check_arg(0);
	vs_top=sup;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk248)();
	vs_top=sup;
	V167= vs_base[0];
	setq(VV[60],make_cons(V167,symbol_value(VV[60])));
	base[0]= symbol_value(VV[60]);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LOOP-DO-DO	*/

static L41()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_reserve(VM41);
	check_arg(0);
	vs_top=sup;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk248)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk249)();
	return;
}
/*	function definition for LOOP-DO-RETURN	*/

static L42()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_reserve(VM42);
	check_arg(0);
	vs_top=sup;
TTL:;
	base[2]= VV[24];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk250)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk251)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk247)();
	return;
}
/*	function definition for LOOP-DO-COLLECT	*/

static L43()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_reserve(VM43);
	{object V168;
	check_arg(1);
	V168=(base[0]);
	vs_top=sup;
TTL:;
	{register object V169;
	register object V170;
	register object V171;
	object V172;
	register object V173;
	register object V174;
	object V175;
	object V176;
	{object V177= (V168);
	if((V177!= VV[118])
	&& (V177!= VV[252]))goto T731;
	V176= VV[102];
	goto T730;
T731:;
	if((V177!= VV[253])
	&& (V177!= VV[103])
	&& (V177!= VV[254]))goto T732;
	V176= VV[103];
	goto T730;
T732:;
	if((V177!= VV[255])
	&& (V177!= VV[104]))goto T733;
	V176= VV[104];
	goto T730;
T733:;
	base[1]= VV[105];
	base[2]= (V168);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	V176= vs_base[0];}
T730:;
	V169= Cnil;
	V170= Cnil;
	V171= Cnil;
	V172= Cnil;
	V173= Cnil;
	V174= Cnil;
	V175= Cnil;
	base[1]= (V168);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk250)();
	vs_top=sup;
	V170= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk256)();
	vs_top=sup;
	V173= vs_base[0];
	base[1]= car(symbol_value(VV[46]));
	base[2]= VV[106];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T741;}
	{object V178;
	V178= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));}
	{object V179;
	V179= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));
	V169= (V179);}
	V175= (V169);
T741:;
	{register object x= (V169),V180= symbol_value(VV[64]);
	while(!endp(V180))
	if(type_of(V180->c.c_car)==t_cons &&eql(x,V180->c.c_car->c.c_car)){
	V174= (V180->c.c_car);
	goto T759;
	}else V180=V180->c.c_cdr;
	V174= Cnil;}
T759:;
	if(((V174))==Cnil){
	goto T757;}
	V174= cdr((V174));
	if(((V176))==(car((V174)))){
	goto T762;}
	base[1]= VV[2];
	base[2]= VV[107];
	base[3]= list(2,(V176),car((V174)));
	vs_top=(vs_base=base+1)+3;
	Lerror();
	vs_top=sup;
	goto T760;
T762:;
	if(((V173))==Cnil){
	goto T760;}
	if(((V173))==(cadr((V174)))){
	goto T760;}
	base[1]= VV[108];
	base[2]= (V173);
	base[3]= cadr((V174));
	base[4]= car((V174));
	vs_top=(vs_base=base+1)+4;
	Lerror();
	vs_top=sup;
T760:;
	V174= cdr((V174));
	V173= car((V174));
	V174= cdr((V174));
	V169= car((V174));
	V174= cdr((V174));
	V172= car((V174));
	V171= cadr((V174));
	if(((V176))==(VV[102])){
	goto T787;}
	goto T755;
T787:;
	if(((type_of((V170))!=t_cons?Ct:Cnil))==Cnil){
	goto T789;}
	goto T755;
T789:;
	if(((V171))==Cnil){
	goto T791;}
	goto T755;
T791:;
	V181= cdr((V174));
	base[2]= VV[109];
	vs_top=(vs_base=base+2)+1;
	Lgentemp();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	base[3]= (V173);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk236)();
	vs_top=sup;
	V171= vs_base[0];
	if(type_of(/* INLINE-ARGS */V181)!=t_cons)FEwrong_type_argument(Scons,/* INLINE-ARGS */V181);
	(/* INLINE-ARGS */V181)->c.c_car = (V171);
	goto T755;
T757:;
	if(((V173))!=Cnil){
	goto T798;}
	{object V182= (V168);
	if((V182!= VV[255]))goto T802;
	V173= VV[110];
	goto T801;
T802:;
	if((V182!= VV[252])
	&& (V182!= VV[118])
	&& (V182!= VV[104]))goto T803;
	V173= VV[111];
	goto T801;
T803:;
	V173= Cnil;}
T801:;
T798:;
	if(((V169))!=Cnil){
	goto T804;}
	base[2]= VV[112];
	vs_top=(vs_base=base+2)+1;
	Lgentemp();
	vs_top=sup;
	V169= vs_base[0];
	base[1]= (V169);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk251)();
	vs_top=sup;
	V183= vs_base[0];
	setq(VV[61],make_cons(V183,symbol_value(VV[61])));
T804:;
	base[1]= (V169);
	base[2]= Cnil;
	base[3]= (V173);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk257)();
	vs_top=sup;
	if(!(((V176))==(VV[102]))){
	goto T818;}
	if(type_of((V170))!=t_cons){
	goto T820;}
	base[2]= VV[112];
	vs_top=(vs_base=base+2)+1;
	Lgentemp();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	base[3]= (V173);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk236)();
	vs_top=sup;
	V171= vs_base[0];
T820:;
	base[2]= VV[113];
	vs_top=(vs_base=base+2)+1;
	Lgentemp();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Ct;
	base[3]= Cnil;
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk236)();
	vs_top=sup;
	V172= vs_base[0];
	goto T816;
T818:;
	if(!(((V176))==(VV[103]))){
	goto T816;}
	base[2]= VV[112];
	vs_top=(vs_base=base+2)+1;
	Lgentemp();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk236)();
	vs_top=sup;
	V172= vs_base[0];
	base[2]= VV[112];
	vs_top=(vs_base=base+2)+1;
	Lgentemp();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk236)();
	vs_top=sup;
	V171= vs_base[0];
T816:;
	V184= list(6,(V175),(V176),(V173),(V169),(V172),(V171));
	setq(VV[64],make_cons(/* INLINE-ARGS */V184,symbol_value(VV[64])));
T755:;
	{object V185= (V168);
	if((V185!= VV[255]))goto T848;
	base[2]= VV[114];
	base[3]= (V173);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk258)();
	vs_top=sup;
	V186= vs_base[0];
	V171= list(3,VV[15],(V169),list(2,V186,(V169)));
	if(((V170))==(Ct)){
	goto T854;}
	if(!(equal((V170),VV[115]))){
	goto T855;}
T854:;
	base[1]= (V171);
	goto T847;
T855:;
	base[1]= list(3,VV[34],(V170),(V171));
	goto T847;
T848:;
	if((V185!= VV[104]))goto T859;
	base[2]= VV[116];
	base[3]= (V173);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk258)();
	vs_top=sup;
	V187= vs_base[0];
	base[1]= list(3,VV[15],(V169),list(3,V187,(V170),(V169)));
	goto T847;
T859:;
	if((V185!= VV[118])
	&& (V185!= VV[252]))goto T863;
	{object V188;
	object V189;
	V188= Cnil;
	V189= Cnil;
	if((V171)==Cnil){
	goto T864;}
	V190= list(3,VV[15],(V171),(V170));
	V188= make_cons(/* INLINE-ARGS */V190,Cnil);
	V170= (V171);
T864:;
	V189= list(2,(V169),(V170));
	base[2]= (V173);
	base[3]= VV[117];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk240)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T874;}
	if(!(((V168))==(VV[118]))){
	goto T881;}
	base[2]= VV[119];
	goto T879;
T881:;
	base[2]= VV[120];
T879:;
	base[3]= (V173);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk258)();
	vs_top=sup;
	V192= vs_base[0];
	V193= list(3,VV[35],(V172),make_cons(V192,(V189)));
	V191= list(3,VV[34],/* INLINE-ARGS */V193,listA(4,VV[15],(V172),Cnil,(V189)));
	goto T872;
T874:;
	V194= list(3,(V172),list(3,VV[15],(V172),Cnil),(V170));
	V191= list(3,VV[15],(V169),list(3,VV[45],/* INLINE-ARGS */V194,list(2,Ct,make_cons((V168),(V189)))));
T872:;
	V188= make_cons(V191,(V188));
	if((cdr((V188)))==Cnil){
	goto T885;}
	V195= nreverse((V188));
	base[1]= make_cons(VV[44],/* INLINE-ARGS */V195);
	goto T847;
T885:;
	base[1]= car((V188));
	goto T847;}
T863:;
	{object V196= (V168);
	if((V196!= VV[103]))goto T888;
	V170= list(2,VV[103],(V170));
	goto T887;
T888:;
	if((V196!= VV[254]))goto T890;{object V197;
	if(((type_of((V170))!=t_cons?Ct:Cnil))==Cnil){
	goto T893;}
	V197= Cnil;
	goto T892;
T893:;
	V197= ((car((V170)))==(VV[103])?Ct:Cnil);
T892:;
	if(V197==Cnil)goto T891;
	goto T887;
T891:;}
	V170= list(2,VV[0],(V170));
	goto T887;
T890:;}
T887:;
	{object V198;
	V199= list(2,VV[21],list(3,VV[122],(V172),(V171)));
	V198= list(4,VV[121],(V172),/* INLINE-ARGS */V199,list(3,VV[15],(V169),(V171)));
	if(type_of((V170))!=t_cons){
	goto T898;}
	if(!((car((V170)))==(VV[103]))){
	goto T898;}
	if((cdr((V170)))==Cnil){
	goto T898;}
	base[2]= cddr((V170));
	base[3]= (V198);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk259)();
	vs_top=sup;
	V200= vs_base[0];
	base[1]= list(5,VV[15],(V171),(V170),(V172),V200);
	goto T847;
T898:;
	V201= list(3,VV[15],(V171),(V170));
	base[1]= list(3,VV[34],/* INLINE-ARGS */V201,list(3,VV[15],(V172),list(2,VV[123],(V198))));}}
T847:;
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk249)();
	return;}
	}
}
/*	function definition for LOOP-CDRIFY	*/

static L44()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_reserve(VM44);
	{object V202;
	register object V203;
	check_arg(2);
	V202=(base[0]);
	V203=(base[1]);
	vs_top=sup;
TTL:;
	{register int V204;
	V204= length((V202));
T909:;
	if(!((V204)<(4))){
	goto T910;}
	if(!((V204)==0)){
	goto T914;}
	base[2]= (V203);
	vs_top=(vs_base=base+2)+1;
	return;
T914:;
	if(!((V204)==(1))){
	goto T918;}
	V205= VV[21];
	goto T916;
T918:;
	if(!((V204)==(2))){
	goto T921;}
	V205= VV[124];
	goto T916;
T921:;
	V205= VV[125];
T916:;
	base[2]= list(2,V205,(V203));
	vs_top=(vs_base=base+2)+1;
	return;
T910:;
	V203= list(2,VV[126],(V203));
	V204= (V204)-(4);
	goto T909;}
	}
}
/*	function definition for LOOP-DO-WHILE	*/

static L45()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_reserve(VM45);
	{object V206;
	object V207;
	check_arg(2);
	V206=(base[0]);
	V207=(base[1]);
	vs_top=sup;
TTL:;
	{object V208;
	base[3]= (V207);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk250)();
	vs_top=sup;
	V208= vs_base[0];
	if((symbol_value(VV[62]))==Cnil){
	goto T931;}
	base[3]= VV[2];
	base[4]= VV[127];
	base[5]= list(2,(V207),(V208));
	vs_top=(vs_base=base+3)+3;
	Lerror();
	vs_top=sup;
T931:;
	if(((V206))==Cnil){
	goto T940;}
	V209= VV[34];
	goto T938;
T940:;
	V209= VV[43];
T938:;
	base[3]= list(3,V209,(V208),VV[128]);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk247)();
	return;}
	}
}
/*	function definition for LOOP-DO-WHEN	*/

static L46()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_reserve(VM46);
	{object V210;
	object V211;
	check_arg(2);
	V210=(base[0]);
	V211=(base[1]);
	vs_top=sup;
TTL:;
	{object V212;
	register object V213;
	base[2]= (V211);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk250)();
	vs_top=sup;
	V212= vs_base[0];
	V213= Cnil;
	base[2]= cadr(symbol_value(VV[46]));
	base[3]= VV[129];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T946;}
	vs_base=vs_top;
	(void) (*Lnk260)();
	vs_top=sup;
	V214= vs_base[0];
	V213= list(3,VV[15],V214,(V212));
	V215= car(symbol_value(VV[46]));{object V216;
	V216= symbol_value(VV[63]);
	setq(VV[46],listA(3,/* INLINE-ARGS */V215,V216,cddr(symbol_value(VV[46]))));}
	goto T944;
T946:;
	V213= (V212);
T944:;
	if((V210)==Cnil){
	goto T955;}
	V213= list(2,VV[130],(V213));
T955:;{object V217;
	V217= symbol_value(VV[62]);
	V218= list(2,VV[45],make_cons((V213),Cnil));
	V219= make_cons(/* INLINE-ARGS */V218,Cnil);
	setq(VV[62],nconc(V217,/* INLINE-ARGS */V219));}
	base[2]= symbol_value(VV[62]);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for LOOP-DO-WITH	*/

static L47()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_reserve(VM47);
	check_arg(0);
	vs_top=sup;
TTL:;
	{register object V220;
	register object V221;
	register object V222;
	register object V223;
	V220= Cnil;
	V221= Cnil;
	V222= Cnil;
	V223= Cnil;
T960:;
	{register object V224;
	V224= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));
	V220= (V224);}
	V221= car(symbol_value(VV[46]));
	base[0]= (V221);
	base[1]= VV[131];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T972;}
	{register object V225;
	V225= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));}
	base[0]= list(3,VV[132],(V220),VV[131]);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk250)();
	vs_top=sup;
	V222= vs_base[0];
	V223= Cnil;
	goto T970;
T972:;
	base[0]= (V221);
	base[1]= VV[95];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T984;}
	base[0]= (V221);
	base[1]= VV[27];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T984;}
	base[0]= (V221);
	base[1]= VV[28];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T985;}
T984:;
	V222= Cnil;
	V223= Cnil;
	goto T970;
T985:;
	vs_base=vs_top;
	(void) (*Lnk256)();
	vs_top=sup;
	V223= vs_base[0];
	V221= car(symbol_value(VV[46]));
	base[0]= (V221);
	base[1]= VV[131];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1005;}
	{register object V226;
	V226= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));}
	base[0]= list(4,VV[132],(V220),(V223),VV[131]);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk250)();
	vs_top=sup;
	V222= vs_base[0];
	goto T970;
T1005:;
	if((symbol_value(VV[46]))==Cnil){
	goto T1016;}
	base[0]= (V221);
	base[1]= VV[27];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1016;}
	base[0]= (V221);
	base[1]= VV[28];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1016;}
	base[0]= (V221);
	base[1]= VV[95];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1016;}
	base[0]= VV[2];
	base[1]= VV[133];
	base[2]= (V221);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	goto T970;
T1016:;
	V222= Cnil;
T970:;
	base[0]= (V220);
	base[1]= (V222);
	base[2]= (V223);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk236)();
	vs_top=sup;
	base[0]= car(symbol_value(VV[46]));
	base[1]= VV[95];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1040;}
	goto T958;
T1040:;
	{register object V227;
	V227= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));}
	goto T960;}
T958:;
	vs_base=vs_top;
	(void) (*Lnk238)();
	return;
}
/*	function definition for LOOP-DO-ALWAYS	*/

static L48()
{register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_reserve(VM48);
	{object V228;
	check_arg(1);
	V228=(base[0]);
	vs_top=sup;
TTL:;
	{object V229;
	base[1]= VV[134];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk250)();
	vs_top=sup;
	V229= vs_base[0];
	if(((V228))==Cnil){
	goto T1055;}
	V230= VV[34];
	goto T1053;
T1055:;
	V230= VV[43];
T1053:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk251)();
	vs_top=sup;
	V231= vs_base[0];
	base[1]= list(3,V230,(V229),V231);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk249)();
	vs_top=sup;
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk251)();
	vs_top=sup;
	V232= vs_base[0];
	setq(VV[61],make_cons(V232,symbol_value(VV[61])));
	base[1]= symbol_value(VV[61]);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for LOOP-DO-THEREIS	*/

static L49()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_reserve(VM49);
	check_arg(0);
	vs_top=sup;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk260)();
	vs_top=sup;
	V233= vs_base[0];
	base[1]= VV[135];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk250)();
	vs_top=sup;
	V234= vs_base[0];
	V235= list(3,VV[15],V233,V234);
	base[1]= symbol_value(VV[63]);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk251)();
	vs_top=sup;
	V236= vs_base[0];
	base[0]= list(3,VV[34],/* INLINE-ARGS */V235,V236);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk249)();
	return;
}
/*	function definition for LOOP-SIMPLEP	*/

static L50()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM50; VC50
	vs_reserve(VM50);
	{VOL object V237;
	check_arg(1);
	V237=(base[0]);
	vs_top=sup;
TTL:;
	if(((V237))!=Cnil){
	goto T1069;}
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+1)+1;
	return;
T1069:;
	frs_push(FRS_CATCH,VV[136]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	{int V238;
	base[1]= (V237);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk261)();
	vs_top=sup;
	V238= fix(vs_base[0]);
	if((V238)<(20)){
	goto T1074;}
	frs_pop();
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T1074:;
	frs_pop();
	base[1]= make_fixnum(V238);
	vs_top=(vs_base=base+1)+1;
	return;}}
	}
}
/*	function definition for LOOP-SIMPLEP-1	*/

static L51()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_reserve(VM51);
	{register object V239;
	check_arg(1);
	V239=(base[0]);
	vs_top=sup;
TTL:;
	{register int V240;
	V240= 0;
	base[1]= (V239);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk245)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1078;}
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+1)+1;
	return;
T1078:;
	if(!(type_of((V239))!=t_cons)){
	goto T1082;}
	base[1]= small_fixnum(1);
	vs_top=(vs_base=base+1)+1;
	return;
T1082:;
	if(!((car((V239)))==(VV[45]))){
	goto T1085;}
	{register object V241;
	V241= cdr((V239));
T1090:;
	if(((V241))!=Cnil){
	goto T1091;}
	goto T1087;
T1091:;
	{register object V242;
	V242= car((V241));
T1098:;
	if(((V242))!=Cnil){
	goto T1099;}
	goto T1095;
T1099:;
	base[2]= car((V242));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk261)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= make_fixnum(V240);
	base[3]= small_fixnum(1);
	vs_top=(vs_base=base+1)+3;
	Lplus();
	vs_top=sup;
	V240= fix(vs_base[0]);
	V242= cdr((V242));
	goto T1098;}
T1095:;
	V241= cdr((V241));
	goto T1090;}
T1087:;
	base[1]= make_fixnum(V240);
	vs_top=(vs_base=base+1)+1;
	return;
T1085:;
	if(!(type_of(car((V239)))==t_symbol)){
	goto T1116;}
	{register object V243;
	object V244;
	V243= car((V239));
	V244= Cnil;
	V244= get((V243),VV[136],Cnil);
	if(((V244))==Cnil){
	goto T1121;}
	if(!(type_of((V244))==t_fixnum)){
	goto T1125;}
	V240= fix((V244));
	goto T1119;
T1125:;
	V240= fix((
	(type_of((V244)) == t_sfun ?(*(object (*)())(((V244))->sfn.sfn_self)):
	(fcall.fun=((V244)),fcall.argd=1,fcalln))((V239))));
	V239= Cnil;
	goto T1119;
T1121:;
	{object V245;
	{register object x= (V243),V246= VV[137];
	while(!endp(V246))
	if(eql(x,V246->c.c_car)){
	V245= V246;
	goto T1131;
	}else V246=V246->c.c_cdr;
	V245= Cnil;}
T1131:;
	if(((V245))==Cnil){
	goto T1133;}
	goto T1119;
T1133:;
	{register object x= (V243),V247= VV[138];
	while(!endp(V247))
	if(eql(x,V247->c.c_car)){
	goto T1137;
	}else V247=V247->c.c_cdr;
	goto T1136;}
T1137:;
	V240= 1;
	goto T1119;
T1136:;
	{register object x= (V243),V248= VV[139];
	while(!endp(V248))
	if(eql(x,V248->c.c_car)){
	goto T1141;
	}else V248=V248->c.c_cdr;
	goto T1140;}
T1141:;
	V240= 2;
	goto T1119;
T1140:;
	{register object x= (V243),V249= VV[140];
	while(!endp(V249))
	if(eql(x,V249->c.c_car)){
	goto T1145;
	}else V249=V249->c.c_cdr;
	goto T1144;}
T1145:;
	V240= 3;
	goto T1119;
T1144:;
	{register object x= (V243),V250= VV[141];
	while(!endp(V250))
	if(eql(x,V250->c.c_car)){
	goto T1149;
	}else V250=V250->c.c_cdr;
	goto T1148;}
T1149:;
	V240= 4;
	goto T1119;
T1148:;
	{register object x= (V243),V251= symbol_value(VV[136]);
	while(!endp(V251))
	if(eql(x,V251->c.c_car)){
	goto T1153;
	}else V251=V251->c.c_cdr;
	goto T1152;}
T1153:;
	V240= 2;
	goto T1119;
T1152:;
	{object V252;
	object V253;
	base[1]= (V239);
	base[2]= symbol_value(VV[33]);
	vs_top=(vs_base=base+1)+2;
	Lmacroexpand_1();
	if(vs_base>=vs_top){vs_top=sup;goto T1158;}
	V252= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1159;}
	V253= vs_base[0];
	vs_top=sup;
	goto T1160;
T1158:;
	V252= Cnil;
T1159:;
	V253= Cnil;
T1160:;
	if(((V253))==Cnil){
	goto T1162;}
	base[1]= (V252);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk261)();
	vs_top=sup;
	V240= fix(vs_base[0]);
	V239= Cnil;
	goto T1119;
T1162:;
	{frame_ptr fr;
	fr=frs_sch_catch(VV[136]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[136]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	unwind(fr,VV[136]);}}}
T1119:;
	{register object V254;
	V254= cdr((V239));
T1172:;
	if(((V254))!=Cnil){
	goto T1173;}
	goto T1169;
T1173:;
	base[2]= car((V254));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk261)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= small_fixnum(1);
	base[3]= make_fixnum(V240);
	vs_top=(vs_base=base+1)+3;
	Lplus();
	vs_top=sup;
	V240= fix(vs_base[0]);
	V254= cdr((V254));
	goto T1172;}
T1169:;
	base[1]= make_fixnum(V240);
	vs_top=(vs_base=base+1)+1;
	return;}
T1116:;
	{frame_ptr fr;
	fr=frs_sch_catch(VV[136]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[136]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	unwind(fr,VV[136]);}}
	}
}
/*	function definition for LOOP-HACK-ITERATION	*/

static L52()
{register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_reserve(VM52);
	bds_check;
	{register object V255;
	check_arg(1);
	V255=(base[0]);
	vs_top=sup;
TTL:;
	{object V256;
	register object V257;
	register object V258;
	object V259;
	register object V260;
	register object V261;
	object V262;
	object V263;
	object V264;
	object V265;
	register object V266;
	object V267;
	object V268;
	object V269;
	V256= (V255);
	V257= symbol_value(VV[46]);
	V258= Cnil;
	V259= Cnil;
	V260= Cnil;
	V261= Cnil;
	V262= Cnil;
	V263= Cnil;
	V264= Cnil;
	V265= Cnil;
	V266= Cnil;
	V267= Cnil;
	V268= Cnil;
	V269= Cnil;
T1188:;
	base[1]= cadr((V255));
	{object V270;
	V270= cddr((V255));
	 vs_top=base+2;
	 while(!endp(V270))
	 {vs_push(car(V270));V270=cdr(V270);}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	vs_top=sup;
	V267= vs_base[0];
	V266= (V267);
	if((car((V266)))!=Cnil){
	goto T1197;}
	goto T1196;
T1197:;
	V258= make_cons(car((V266)),(V258));
T1196:;
	V266= cdr((V266));
	base[1]= car((V266));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V271= vs_base[0];
	V259= nconc((V259),V271);
	V266= cdr((V266));
	if((car((V266)))!=Cnil){
	goto T1206;}
	goto T1205;
T1206:;
	V260= make_cons(car((V266)),(V260));
T1205:;
	V266= cdr((V266));
	base[1]= car((V266));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V272= vs_base[0];
	V261= nconc((V261),V272);
	V266= cdr((V266));
	if(symbol_value(VV[62])!=Cnil){
	if((symbol_value(VV[62]))!=Cnil){
	goto T1218;}
	goto T1219;}
	if((symbol_value(VV[59]))!=Cnil){
	goto T1218;}
T1219:;
	goto T1217;
T1218:;
	if((V266)!=Cnil){
	if(((V266))!=Cnil){
	goto T1220;}
	goto T1221;}
	if((V258)!=Cnil){
	if(((V258))!=Cnil){
	goto T1220;}
	goto T1221;}
	if((V260)!=Cnil){
	if(((V260))!=Cnil){
	goto T1220;}
	goto T1221;}
	if(((V261))!=Cnil){
	goto T1220;}
T1221:;
	goto T1217;
T1220:;
	{object V273;
	V273= list(4,car((V255)),car((V257)),cadr((V257)),caddr((V257)));
	if((symbol_value(VV[59]))==Cnil){
	goto T1224;}
	base[1]= VV[2];
	base[2]= VV[142];
	base[3]= (V273);
	vs_top=(vs_base=base+1)+3;
	Lerror();
	vs_top=sup;
	goto T1217;
T1224:;
	base[1]= VV[2];
	base[2]= VV[143];
	base[3]= (V273);
	vs_top=(vs_base=base+1)+3;
	Lerror();
	vs_top=sup;}
T1217:;
	if((V266)!=Cnil){
	goto T1232;}
	V266= (V267);
T1232:;
	if((car((V266)))!=Cnil){
	goto T1235;}
	goto T1234;
T1235:;
	V262= make_cons(car((V266)),(V262));
T1234:;
	V266= cdr((V266));
	base[1]= car((V266));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V274= vs_base[0];
	V263= nconc((V263),V274);
	V266= cdr((V266));
	if((car((V266)))!=Cnil){
	goto T1244;}
	goto T1243;
T1244:;
	V264= make_cons(car((V266)),(V264));
T1243:;
	base[1]= cadr((V266));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V275= vs_base[0];
	V265= nconc((V265),V275);
	base[1]= car(symbol_value(VV[46]));
	base[2]= VV[95];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1253;}
	if((symbol_value(VV[62]))==Cnil){
	goto T1252;}
	base[1]= cadr(symbol_value(VV[46]));
	base[2]= VV[28];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1252;}
T1253:;
	base[1]= (V262);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk262)();
	vs_top=sup;
	V276= vs_base[0];
	base[1]= (V263);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk226)();
	vs_top=sup;
	V277= vs_base[0];
	base[1]= (V264);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk262)();
	vs_top=sup;
	V278= vs_base[0];
	base[1]= (V265);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk227)();
	vs_top=sup;
	V279= vs_base[0];
	V268= list(4,V276,V277,V278,V279);
	base[1]= (V258);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk262)();
	vs_top=sup;
	V280= vs_base[0];
	base[1]= (V259);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk226)();
	vs_top=sup;
	V281= vs_base[0];
	base[1]= (V260);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk262)();
	vs_top=sup;
	V282= vs_base[0];
	base[1]= (V261);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk227)();
	vs_top=sup;
	V283= vs_base[0];
	V269= list(4,V280,V281,V282,V283);
	if((symbol_value(VV[62]))!=Cnil){
	goto T1285;}
	base[1]= (V268);
	base[2]= symbol_value(VV[37]);
	vs_top=(vs_base=base+1)+2;
	Lreconc();
	vs_top=sup;
	setq(VV[37],vs_base[0]);
	base[1]= (V269);
	base[2]= symbol_value(VV[38]);
	vs_top=(vs_base=base+1)+2;
	Lreconc();
	vs_top=sup;
	setq(VV[38],vs_base[0]);
	goto T1283;
T1285:;
	base[3]= symbol_value(VV[62]);
	{object V284;
	object V285= base[3];
	if(endp(V285)){
	base[1]= Cnil;
	goto T1295;}
	base[2]=V284=MMcons(Cnil,Cnil);
T1296:;
	V287= car((V285->c.c_car));
	{object V289;
	object V290= cdr((V285->c.c_car));
	if(endp(V290)){
	V288= Cnil;
	goto T1298;}
	base[4]=V289=MMcons(Cnil,Cnil);
T1299:;
	base[5]= (V290->c.c_car);
	vs_top=(vs_base=base+5)+1;
	Lcopy_list();
	vs_top=sup;
	(V289->c.c_car)= vs_base[0];
	if(endp(V290=MMcdr(V290))){
	V288= base[4];
	goto T1298;}
	V289=MMcdr(V289)=MMcons(Cnil,Cnil);
	goto T1299;}
T1298:;
	(V284->c.c_car)= make_cons(/* INLINE-ARGS */V287,V288);
	if(endp(V285=MMcdr(V285))){
	base[1]= base[2];
	goto T1295;}
	V284=MMcdr(V284)=MMcons(Cnil,Cnil);
	goto T1296;}
T1295:;
	bds_bind(VV[62],base[1]);
	V293= (VFUN_NARGS=2,(*(LnkLI234))(Cnil,(V268)));
	base[2]= make_cons(VV[44],/* INLINE-ARGS */V293);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk246)();
	vs_top=sup;
	V292= vs_base[0];
	setq(VV[37],make_cons(V292,symbol_value(VV[37])));
	V294= symbol_value(VV[37]);
	bds_unwind1;
	V296= (VFUN_NARGS=2,(*(LnkLI234))(Cnil,(V269)));
	base[1]= make_cons(VV[44],/* INLINE-ARGS */V296);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk246)();
	vs_top=sup;
	V295= vs_base[0];
	setq(VV[38],make_cons(V295,symbol_value(VV[38])));
T1283:;
	vs_base=vs_top;
	(void) (*Lnk238)();
	vs_top=sup;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T1252:;
	{object V297;
	V297= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));}
	base[1]= car(symbol_value(VV[46]));
	base[2]= VV[28];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	V266= vs_base[0];
	if(((V266))==Cnil){
	goto T1316;}
	{object V298;
	V298= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));}
	V256= (V266);
	V255= (V256);
	goto T1314;
T1316:;
	V255= (V256);
T1314:;
	V257= symbol_value(VV[46]);
	goto T1188;}
	}
}
/*	function definition for LOOP-DO-FOR	*/

static L53()
{register object *base=vs_base;
	register object *sup=base+VM53; VC53
	vs_reserve(VM53);
	check_arg(0);
	vs_top=sup;
TTL:;
	{object V299;
	object V300;
	object V301;
	object V302;
	object V303;
	{object V304;
	V304= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));
	V299= (V304);}
	vs_base=vs_top;
	(void) (*Lnk256)();
	vs_top=sup;
	V300= vs_base[0];
	{object V305;
	V305= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));
	V301= (V305);}
	V302= Cnil;
	V303= Cnil;
	base[0]= list(3,VV[144],(V299),(V301));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk250)();
	vs_top=sup;
	V302= vs_base[0];{object V306;
	base[0]= (V301);
	base[1]= VV[145];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	V303= vs_base[0];
	V306= (V303);
	if(V306==Cnil)goto T1342;
	goto T1341;
T1342:;}
	base[0]= VV[2];
	base[1]= VV[146];
	base[2]= list(3,VV[144],(V299),(V301));
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
T1341:;
	base[0]= cadr((V303));
	base[1]= (V299);
	base[2]= (V302);
	base[3]= (V300);
	{object V307;
	V307= cddr((V303));
	 vs_top=base+4;
	 while(!endp(V307))
	 {vs_push(car(V307));V307=cdr(V307);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	return;}
}
/*	function definition for LOOP-DO-REPEAT	*/

static L54()
{register object *base=vs_base;
	register object *sup=base+VM54; VC54
	vs_reserve(VM54);
	check_arg(0);
	vs_top=sup;
TTL:;
	{object V308;
	base[1]= VV[147];
	vs_top=(vs_base=base+1)+1;
	Lgentemp();
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= VV[148];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk250)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= VV[110];
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk236)();
	vs_top=sup;
	V308= vs_base[0];
	base[0]= VV[149];
	base[1]= VV[110];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk258)();
	vs_top=sup;
	V309= vs_base[0];
	V310= list(2,VV[130],list(2,V309,(V308)));
	base[0]= VV[150];
	base[1]= VV[110];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk258)();
	vs_top=sup;
	V311= vs_base[0];
	base[0]= list(4,/* INLINE-ARGS */V310,Cnil,Cnil,list(2,(V308),list(2,V311,(V308))));
	vs_top=(vs_base=base+0)+1;
	return;}
}
/*	function definition for LOOP-WHEN-IT-VARIABLE	*/

static L55()
{register object *base=vs_base;
	register object *sup=base+VM55; VC55
	vs_reserve(VM55);
	check_arg(0);
	vs_top=sup;
TTL:;
	if(symbol_value(VV[63])!=Cnil){
	base[0]= symbol_value(VV[63]);
	vs_top=(vs_base=base+0)+1;
	return;}
	base[1]= VV[151];
	vs_top=(vs_base=base+1)+1;
	Lgentemp();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= Cnil;
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk236)();
	vs_top=sup;
	setq(VV[63],vs_base[0]);
	base[0]= symbol_value(VV[63]);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LOOP-FOR-EQUALS	*/

static L56()
{register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_reserve(VM56);
	{register object V312;
	object V313;
	object V314;
	check_arg(3);
	V312=(base[0]);
	V313=(base[1]);
	V314=(base[2]);
	vs_top=sup;
TTL:;
	base[3]= car(symbol_value(VV[46]));
	base[4]= VV[152];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1373;}
	{object V315;
	V315= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));}
	base[3]= (V312);
	base[4]= (V313);
	base[5]= (V314);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk257)();
	vs_top=sup;
	base[3]= list(5,VV[144],(V312),VV[131],(V313),VV[152]);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk250)();
	vs_top=sup;
	V316= vs_base[0];
	base[3]= listA(3,Cnil,list(2,(V312),V316),VV[153]);
	vs_top=(vs_base=base+3)+1;
	return;
T1373:;
	base[3]= (V312);
	base[4]= Cnil;
	base[5]= (V314);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk257)();
	vs_top=sup;
	{object V317;
	V317= list(2,(V312),(V313));
	if((symbol_value(VV[59]))==Cnil){
	goto T1393;}
	base[4]= (V317);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk227)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk249)();
	vs_top=sup;
	base[3]= VV[154];
	vs_top=(vs_base=base+3)+1;
	return;
T1393:;
	{object V318;
	V318= listA(3,Cnil,(V317),VV[155]);
	if(((V318))==Cnil){
	goto T1400;}
	base[3]= (V318);
	vs_top=(vs_base=base+3)+1;
	return;
T1400:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}}
	}
}
/*	function definition for LOOP-FOR-FIRST	*/

static L57()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_reserve(VM57);
	{register object V319;
	object V320;
	object V321;
	check_arg(3);
	V319=(base[0]);
	V320=(base[1]);
	V321=(base[2]);
	vs_top=sup;
TTL:;{object V322;
	base[3]= car(symbol_value(VV[46]));
	base[4]= VV[152];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	V322= vs_base[0];
	if(V322==Cnil)goto T1403;
	goto T1402;
T1403:;}
	base[3]= VV[2];
	base[4]= VV[156];
	base[5]= car(symbol_value(VV[46]));
	vs_top=(vs_base=base+3)+3;
	Lerror();
	vs_top=sup;
T1402:;
	{object V323;
	V323= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));}
	base[3]= (V319);
	base[4]= Cnil;
	base[5]= (V321);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk257)();
	vs_top=sup;
	base[3]= list(5,VV[144],(V319),VV[157],(V320),VV[152]);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk250)();
	vs_top=sup;
	V324= vs_base[0];
	V325= list(2,(V319),V324);
	base[3]= listA(7,Cnil,/* INLINE-ARGS */V325,Cnil,Cnil,Cnil,list(2,(V319),(V320)),VV[158]);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	function definition for LOOP-LIST-STEPPER	*/

static L58()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_reserve(VM58);
	{register object V326;
	object V327;
	object V328;
	object V329;
	check_arg(4);
	V326=(base[0]);
	V327=(base[1]);
	V328=(base[2]);
	V329=(base[3]);
	vs_top=sup;
TTL:;
	{register object V330;
	register object V331;
	object V332;
	object V333;
	register object V334;
	register object V335;
	base[4]= car(symbol_value(VV[46]));
	base[5]= VV[159];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1422;}
	{object V336;
	V336= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));}
	if(!(((V329))==(VV[20]))){
	goto T1433;}
	V337= VV[160];
	goto T1431;
T1433:;
	V337= VV[161];
T1431:;
	base[4]= list(5,VV[144],(V326),V337,(V327),VV[159]);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk250)();
	vs_top=sup;
	V330= vs_base[0];
	goto T1420;
T1422:;
	V330= VV[162];
T1420:;
	V331= Cnil;
	V332= Cnil;
	V333= Cnil;
	V334= Cnil;
	V335= Cnil;
	if(type_of((V330))!=t_cons){
	goto T1437;}
	{register object x= car((V330)),V338= VV[163];
	while(!endp(V338))
	if(eql(x,V338->c.c_car)){
	goto T1438;
	}else V338=V338->c.c_cdr;}
T1437:;
	base[4]= VV[165];
	vs_top=(vs_base=base+4)+1;
	Lgentemp();
	vs_top=sup;
	V332= vs_base[0];
	V333= list(2,VV[164],(V332));
	goto T1436;
T1438:;
	V333= make_cons(cadr((V330)),Cnil);
T1436:;
	if(!(type_of((V326))!=t_cons)){
	goto T1446;}
	if(((V329))!=Cnil){
	goto T1446;}
	base[4]= (V326);
	base[5]= (V327);
	base[6]= (V328);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk257)();
	vs_top=sup;
	V331= vs_base[0];
	goto T1444;
T1446:;
	base[4]= (V326);
	base[5]= Cnil;
	base[6]= (V328);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk257)();
	vs_top=sup;
	base[5]= VV[166];
	vs_top=(vs_base=base+5)+1;
	Lgentemp();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V327);
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk236)();
	vs_top=sup;
	V331= vs_base[0];
	if(((V329))==Cnil){
	goto T1467;}
	V339= list(2,(V329),(V331));
	goto T1465;
T1467:;
	V339= (V331);
T1465:;
	V335= list(2,(V326),V339);
T1444:;
	base[4]= (V333);
	vs_top=(vs_base=base+4)+1;
	Llast();
	vs_top=sup;
	V340= vs_base[0];
	V341= make_cons((V331),Cnil);
	if(type_of(V340)!=t_cons)FEwrong_type_argument(Scons,V340);
	(V340)->c.c_cdr = /* INLINE-ARGS */V341;
	if((V332)==Cnil){
	goto T1472;}
	base[4]= (V332);
	base[5]= (V330);
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk236)();
	vs_top=sup;
T1472:;
	V330= list(2,(V331),(V333));
	V334= list(2,VV[167],(V331));
	if(((V335))!=Cnil){
	goto T1481;}
	base[4]= list(8,Cnil,(V330),(V334),Cnil,Cnil,Cnil,(V334),Cnil);
	vs_top=(vs_base=base+4)+1;
	return;
T1481:;
	if(!((car((V333)))==(VV[21]))){
	goto T1484;}
	base[4]= list(4,(V334),(V335),Cnil,(V330));
	vs_top=(vs_base=base+4)+1;
	return;
T1484:;
	base[4]= list(8,list(2,VV[167],make_cons(VV[15],(V330))),Cnil,Cnil,(V335),(V334),Cnil,Cnil,(V335));
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	function definition for LOOP-FOR-ARITHMETIC	*/

static L59()
{register object *base=vs_base;
	register object *sup=base+VM59; VC59
	vs_reserve(VM59);
	{object V342;
	object V343;
	object V344;
	object V345;
	check_arg(4);
	V342=(base[0]);
	V343=(base[1]);
	V344=(base[2]);
	V345=(base[3]);
	vs_top=sup;
TTL:;
	base[4]= (V342);
	if((V344)!=Cnil){
	base[5]= (V344);
	goto T1487;}
	base[5]= VV[110];
T1487:;
	base[6]= Cnil;
	base[7]= Cnil;
	base[8]= Cnil;
	base[9]= Cnil;
	base[10]= Cnil;
	base[11]= Cnil;
	base[12]= list(4,VV[144],(V342),(V345),(V343));
	V346= list(2,(V345),(V343));
	base[14]= VV[168];
	base[15]= Cnil;
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk263)();
	vs_top=sup;
	V347= vs_base[0];
	base[13]= make_cons(/* INLINE-ARGS */V346,V347);
	vs_top=(vs_base=base+4)+10;
	(void) (*Lnk264)();
	return;
	}
}
/*	function definition for LOOP-NAMED-VARIABLE	*/

static L60()
{register object *base=vs_base;
	register object *sup=base+VM60; VC60
	vs_reserve(VM60);
	{object V348;
	check_arg(1);
	V348=(base[0]);
	vs_top=sup;
TTL:;
	{object V349;
	base[1]= (V348);
	base[2]= symbol_value(VV[51]);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	V349= vs_base[0];
	if(((V349))!=Cnil){
	goto T1503;}
	base[1]= VV[112];
	vs_top=(vs_base=base+1)+1;
	Lgentemp();
	return;
T1503:;
	setq(VV[51],(VFUN_NARGS=2,(*(LnkLI234))((V349),symbol_value(VV[51]))));
	base[1]= cdr((V349));
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for LOOP-FOR-BEING	*/

static L61()
{register object *base=vs_base;
	register object *sup=base+VM61; VC61
	vs_reserve(VM61);
	{object V350;
	register object V351;
	object V352;
	check_arg(3);
	V350=(base[0]);
	V351=(base[1]);
	V352=(base[2]);
	vs_top=sup;
TTL:;
	{register object V353;
	object V354;
	object V355;
	object V356;
	object V357;
	V353= Cnil;
	V354= Cnil;
	V355= Cnil;
	V356= Cnil;
	V357= Cnil;
	base[3]= (V351);
	base[4]= VV[169];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1509;}
	base[3]= (V351);
	base[4]= VV[170];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1510;}
T1509:;
	V356= Ct;
	V351= car(symbol_value(VV[46]));
	goto T1508;
T1510:;
	setq(VV[46],make_cons((V351),symbol_value(VV[46])));
T1508:;
	base[3]= (V351);
	base[4]= symbol_value(VV[171]);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	V353= vs_base[0];
	if(((V353))==Cnil){
	goto T1524;}
	if(((V356))!=Cnil){
	goto T1523;}
	base[3]= cadr(symbol_value(VV[46]));
	base[4]= VV[95];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1524;}
T1523:;
	{object V358;
	V358= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));
	goto T1522;}
T1524:;
	base[3]= list(3,VV[144],(V350),VV[172]);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk250)();
	vs_top=sup;
	V351= vs_base[0];
	base[3]= car(symbol_value(VV[46]));
	base[4]= VV[95];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1542;}
	if(!(((V356))==Cnil)){
	goto T1547;}
	goto T1546;
T1547:;
	base[3]= VV[2];
	base[4]= VV[173];
	base[5]= (V350);
	vs_top=(vs_base=base+3)+3;
	Lerror();
	vs_top=sup;
T1546:;
	V359= list(2,VV[174],(V351));
	V355= make_cons(/* INLINE-ARGS */V359,Cnil);
	V354= Ct;
	{object V360;
	V360= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));}{object V361;
	{object V362;
	V362= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));
	V353= (V362);}
	base[3]= (V353);
	base[4]= VV[175];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk240)();
	vs_top=sup;
	V361= vs_base[0];
	if(V361==Cnil)goto T1561;
	goto T1560;
T1561:;}
	base[3]= VV[2];
	base[4]= VV[176];
	base[5]= (V353);
	vs_top=(vs_base=base+3)+3;
	Lerror();
	vs_top=sup;
T1560:;
	base[3]= car(symbol_value(VV[46]));
	base[4]= symbol_value(VV[171]);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	V353= vs_base[0];
	if(((V353))==Cnil){
	goto T1573;}
	{object V363;
	V363= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));
	goto T1522;}
T1573:;
	base[3]= listA(3,VV[144],(V350),VV[177]);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk250)();
	vs_top=sup;
	V364= vs_base[0];
	V357= list(2,VV[160],V364);
	V355= make_cons((V357),(V355));
	goto T1522;
T1542:;
	base[3]= car(symbol_value(VV[46]));
	base[4]= symbol_value(VV[171]);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	V353= vs_base[0];
	if(((V353))!=Cnil){
	goto T1586;}
	V357= list(2,VV[160],(V351));
	V355= make_cons((V357),Cnil);
	goto T1522;
T1586:;
	{object V365;
	V365= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));}
T1522:;
	{object V366;
	V366= (((((V353))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	if(((V366))==Cnil){
	goto T1599;}
	goto T1596;
T1599:;
	base[3]= VV[178];
	base[4]= symbol_value(VV[171]);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	V353= vs_base[0];
	if(((V353))!=Cnil){
	goto T1596;}
	base[3]= VV[2];
	base[4]= VV[179];
	base[5]= cadr((V357));
	vs_top=(vs_base=base+3)+3;
	Lerror();
	vs_top=sup;}
T1596:;
	V367= cadr((V353));
	V368= car((V353));
	base[3]= (V355);
	base[5]= caddr((V353));
	base[6]= Ct;
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk263)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	Lreconc();
	vs_top=sup;
	V369= vs_base[0];
	V353= (
	V370 = /* INLINE-ARGS */V367,
	(type_of(V370) == t_sfun ?(*(object (*)())((V370)->sfn.sfn_self)):
	(fcall.fun=(V370),fcall.argd=7,fcalln))(/* INLINE-ARGS */V368,(V350),(V352),V369,(V354),caddr((V353)),cdddr((V353))));
	if(symbol_value(VV[51])==Cnil){
	goto T1616;}
	base[3]= VV[2];
	base[4]= VV[180];
	base[5]= symbol_value(VV[51]);
	vs_top=(vs_base=base+3)+3;
	Lerror();
	vs_top=sup;
T1616:;
	setq(VV[51],Cnil);
	{register object V371;
	register object V372;
	V371= car((V353));
	V372= Cnil;
T1625:;
	if(((V371))!=Cnil){
	goto T1626;}
	goto T1622;
T1626:;
	V372= car((V371));
	if(!(type_of((V372))!=t_cons)){
	goto T1632;}
	base[3]= (V372);
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk257)();
	vs_top=sup;
	goto T1630;
T1632:;
	base[3]= car((V372));
	base[4]= cadr((V372));
	base[5]= caddr((V372));
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk257)();
	vs_top=sup;
T1630:;
	V371= cdr((V371));
	goto T1625;}
T1622:;
	V373= reverse(cadr((V353)));
	setq(VV[57],nconc(/* INLINE-ARGS */V373,symbol_value(VV[57])));
	base[3]= cddr((V353));
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for LOOP-GATHER-PREPS	*/

static L62()
{register object *base=vs_base;
	register object *sup=base+VM62; VC62
	vs_reserve(VM62);
	{object V374;
	object V375;
	check_arg(2);
	V374=(base[0]);
	V375=(base[1]);
	vs_top=sup;
TTL:;
	{register object V376;
	object V377;
	V376= car(symbol_value(VV[46]));
	V377= Cnil;
T1648:;
	base[2]= (V376);
	base[3]= (V374);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk240)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1653;}
	{object V379;
	V379= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));
	V378= (V379);}
	base[2]= list(5,VV[144],VV[181],VV[172],VV[181],(V376));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk250)();
	vs_top=sup;
	V380= vs_base[0];
	V381= list(2,V378,V380);
	V377= make_cons(/* INLINE-ARGS */V381,(V377));
	goto T1651;
T1653:;
	base[2]= (V376);
	base[3]= VV[182];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1665;}
	{object V382;
	V382= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));}
	if((V375)!=Cnil){
	goto T1673;}
	base[2]= VV[2];
	base[3]= VV[183];
	base[4]= list(2,VV[182],car(symbol_value(VV[46])));
	vs_top=(vs_base=base+2)+3;
	Lerror();
	vs_top=sup;
T1673:;
	{register object V383;
	register object V384;
	V383= car(symbol_value(VV[46]));
	V384= Cnil;
T1679:;
	if(!(type_of((V383))!=t_cons)){
	goto T1680;}
	goto T1651;
T1680:;
	if(!(type_of(cdr((V383)))!=t_cons)){
	goto T1687;}
	goto T1685;
T1687:;
	if(!((((cddr((V383)))==Cnil?Ct:Cnil))==Cnil)){
	goto T1689;}
	goto T1685;
T1689:;
	if(!(((type_of(car((V383)))==t_symbol?Ct:Cnil))==Cnil)){
	goto T1691;}
	goto T1685;
T1691:;
	if((cadr((V383)))!=Cnil){
	goto T1693;}
	goto T1686;
T1693:;
	if(((type_of(cadr((V383)))==t_symbol?Ct:Cnil))==Cnil){
	goto T1685;}
T1686:;
	goto T1684;
T1685:;
	base[2]= VV[2];
	base[3]= VV[184];
	base[4]= (V383);
	vs_top=(vs_base=base+2)+3;
	Lerror();
	vs_top=sup;
T1684:;
	if((cadr((V383)))==Cnil){
	goto T1698;}
	base[2]= car((V383));
	base[3]= symbol_value(VV[51]);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	V384= vs_base[0];
	if(((V384))!=Cnil){
	goto T1702;}
	goto T1701;
T1702:;
	base[2]= VV[2];
	base[3]= VV[185];
	base[4]= list(2,(V384),(V383));
	vs_top=(vs_base=base+2)+3;
	Lerror();
	vs_top=sup;
T1701:;
	V385= make_cons(car((V383)),cadr((V383)));
	setq(VV[51],make_cons(/* INLINE-ARGS */V385,symbol_value(VV[51])));
T1698:;
	{register object V386;
	V386= car(symbol_value(VV[46]));
	setq(VV[46],cdr(symbol_value(VV[46])));}
	V383= car(symbol_value(VV[46]));
	goto T1679;}
T1665:;
	base[2]= nreverse((V377));
	vs_top=(vs_base=base+2)+1;
	return;
T1651:;
	V376= car(symbol_value(VV[46]));
	goto T1648;}
	}
}
/*	function definition for LOOP-ADD-PATH	*/

static L63()
{register object *base=vs_base;
	register object *sup=base+VM63; VC63
	vs_reserve(VM63);
	{object V387;
	object V388;
	check_arg(2);
	V387=(base[0]);
	V388=(base[1]);
	vs_top=sup;
TTL:;
	V389= make_cons((V387),(V388));
	base[2]= (V387);
	base[3]= symbol_value(VV[171]);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	V390= vs_base[0];{object V391;
	V391= symbol_value(VV[171]);
	V392= symbol_function(VV[265]);
	V393= (VFUN_NARGS=4,(*(LnkLI234))(V390,V391,VV[25],V392));
	setq(VV[171],make_cons(/* INLINE-ARGS */V389,/* INLINE-ARGS */V393));}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	macro definition for DEFINE-LOOP-PATH	*/

static L64()
{register object *base=vs_base;
	register object *sup=base+VM64; VC64
	vs_reserve(VM64);
	check_arg(2);
	vs_top=sup;
	{object V394=base[0]->c.c_cdr;
	if(endp(V394))invalid_macro_call();
	base[2]= (V394->c.c_car);
	V394=V394->c.c_cdr;
	base[3]= V394;}
	if(!(type_of(base[2])!=t_cons)){
	goto T1730;}
	base[2]= make_cons(base[2],Cnil);
	goto T1728;
T1730:;
T1728:;
	{object V395;
	{object V396;
	object V397= base[2];
	if(endp(V397)){
	V395= Cnil;
	goto T1732;}
	base[4]=V396=MMcons(Cnil,Cnil);
T1733:;
	V399= list(2,VV[4],(V397->c.c_car));
	(V396->c.c_car)= list(3,VV[186],/* INLINE-ARGS */V399,list(2,VV[4],base[3]));
	if(endp(V397=MMcdr(V397))){
	V395= base[4];
	goto T1732;}
	V396=MMcdr(V396)=MMcons(Cnil,Cnil);
	goto T1733;}
T1732:;
	base[4]= listA(3,VV[187],VV[188],(V395));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	function definition for LOOP-SEQUENCER	*/

static L65()
{register object *base=vs_base;
	register object *sup=base+VM65; VC65
	vs_reserve(VM65);
	{object V400;
	object V401;
	object V402;
	object V403;
	object V404;
	object V405;
	object V406;
	object V407;
	register object V408;
	object V409;
	check_arg(10);
	V400=(base[0]);
	V401=(base[1]);
	V402=(base[2]);
	V403=(base[3]);
	V404=(base[4]);
	V405=(base[5]);
	V406=(base[6]);
	V407=(base[7]);
	V408=(base[8]);
	V409=(base[9]);
	vs_top=sup;
TTL:;
	{object V410;
	object V411;
	object V412;
	object V413;
	register object V414;
	register object V415;
	object V416;
	object V417;{object V419;
	base[10]= (V401);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk243)();
	vs_top=sup;
	V419= vs_base[0];
	if(V419==Cnil)goto T1737;
	V418= V419;
	goto T1736;
T1737:;}
	V418= small_fixnum(0);
T1736:;
	V413= one_plus(V418);
	V410= Cnil;
	V411= Cnil;
	V412= Cnil;
	V414= Cnil;
	V415= Cnil;
	V416= Cnil;
	V417= Cnil;
	if((V402)==Cnil){
	goto T1740;}
	base[10]= (V402);
	base[11]= Cnil;
	base[12]= (V403);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk257)();
	vs_top=sup;
T1740:;
	{register object V420;
	register object V421;
	register object V422;
	object V423;
	V420= (V409);
	V421= Cnil;
	V422= Cnil;
	V423= Cnil;
T1746:;
	if(((V420))!=Cnil){
	goto T1747;}
	goto T1744;
T1747:;
	V421= caar((V420));
	V422= cadar((V420));
	base[10]= (V421);
	base[11]= VV[189];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk240)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1757;}
	if((V411)==Cnil){
	goto T1761;}
	base[10]= VV[2];
	base[11]= VV[190];
	base[12]= list(2,(V402),car((V420)));
	vs_top=(vs_base=base+10)+3;
	Lerror();
	vs_top=sup;
T1761:;
	V411= Ct;
	base[10]= (V404);
	base[11]= (V422);
	base[12]= (V405);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk236)();
	vs_top=sup;
	goto T1755;
T1757:;
	base[10]= (V421);
	base[11]= VV[191];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk240)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1771;}
	if((V416)==Cnil){
	goto T1775;}
	base[10]= VV[2];
	base[11]= VV[192];
	base[12]= append((V408),(V420));
	vs_top=(vs_base=base+10)+3;
	Lerror();
	vs_top=sup;
T1775:;
	V416= Ct;
	base[10]= (V421);
	base[11]= VV[193];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1783;}
	V414= VV[194];
	goto T1781;
T1783:;
	base[10]= (V421);
	base[11]= VV[195];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1781;}
	V414= VV[196];
T1781:;
	base[10]= (V400);
	base[11]= (V422);
	base[12]= (V401);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk257)();
	vs_top=sup;
	goto T1755;
T1771:;
	base[10]= (V421);
	base[11]= VV[197];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1800;}
	V414= VV[196];
	V415= VV[196];
	if(((V415))==Cnil){
	goto T1797;}
	goto T1798;
T1800:;
	base[10]= (V421);
	base[11]= VV[198];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1807;}
	V415= Ct;
	goto T1798;
T1807:;
	base[10]= (V421);
	base[11]= VV[199];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1813;}
	V414= VV[194];
	V415= VV[194];
	if(((V415))==Cnil){
	goto T1797;}
	goto T1798;
T1813:;
	base[10]= (V421);
	base[11]= VV[200];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1820;}
	V414= VV[194];
	if((VV[194])==Cnil){
	goto T1797;}
	goto T1798;
T1820:;
	base[10]= (V421);
	base[11]= VV[201];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1826;}
	V414= VV[196];
	if((VV[196])==Cnil){
	goto T1797;}
	goto T1798;
T1826:;
	goto T1797;
T1798:;
	if((V417)==Cnil){
	goto T1831;}
	base[10]= VV[2];
	base[11]= VV[202];
	base[12]= append((V408),(V420));
	vs_top=(vs_base=base+10)+3;
	Lerror();
	vs_top=sup;
T1831:;
	V417= Ct;
	base[10]= (V422);
	base[11]= (V401);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk266)();
	vs_top=sup;
	V410= vs_base[0];
	goto T1755;
T1797:;
	base[10]= (V421);
	base[11]= VV[159];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk244)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1841;}
	base[10]= (V422);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk245)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1847;}
	V413= (V422);
	goto T1845;
T1847:;
	base[11]= VV[203];
	vs_top=(vs_base=base+11)+1;
	Lgentemp();
	vs_top=sup;
	base[10]= vs_base[0];
	base[11]= (V422);
	base[12]= VV[110];
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk236)();
	vs_top=sup;
	V413= vs_base[0];
T1845:;
	goto T1755;
T1841:;
	base[10]= VV[2];
	base[11]= VV[204];
	base[12]= append((V408),(V420));
	vs_top=(vs_base=base+10)+3;
	Lerror();
	vs_top=sup;
T1755:;
	if((V423)==Cnil){
	goto T1857;}
	if((V414)==Cnil){
	goto T1857;}
	if(((((V414))==((V423))?Ct:Cnil))==Cnil){
	goto T1858;}
	goto T1857;
T1858:;
	base[10]= VV[2];
	base[11]= VV[205];
	base[12]= append((V408),(V420));
	vs_top=(vs_base=base+10)+3;
	Lerror();
	vs_top=sup;
T1857:;
	V423= (V414);
	V420= cdr((V420));
	goto T1746;}
T1744:;
	if((V404)==Cnil){
	goto T1868;}
	if(((V411))==Cnil){
	goto T1869;}
	goto T1868;
T1869:;
	base[10]= VV[2];
	base[11]= VV[206];
	base[12]= (V408);
	vs_top=(vs_base=base+10)+3;
	Lerror();
	vs_top=sup;
T1868:;
	V413= list(2,(V400),(V413));
	{register object x= (V414),V424= VV[207];
	while(!endp(V424))
	if(eql(x,V424->c.c_car)){
	goto T1879;
	}else V424=V424->c.c_cdr;
	goto T1878;}
T1879:;
	if((V416)!=Cnil){
	goto T1880;}
	base[10]= (V400);
	base[11]= small_fixnum(0);
	base[12]= (V401);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk257)();
	vs_top=sup;
T1880:;
	if((V417)!=Cnil){
	if(((V417))!=Cnil){
	goto T1885;}
	goto T1886;}
	if(((V407))==Cnil){
	goto T1888;}
	base[11]= VV[208];
	vs_top=(vs_base=base+11)+1;
	Lgentemp();
	vs_top=sup;
	V410= vs_base[0];
	base[10]= (V410);
	base[11]= Cnil;
	base[12]= (V401);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk236)();
	vs_top=sup;
	V425= list(3,VV[15],(V410),(V407));
	setq(VV[57],make_cons(/* INLINE-ARGS */V425,symbol_value(VV[57])));
	if((symbol_value(VV[57]))!=Cnil){
	goto T1885;}
	goto T1886;
T1888:;
T1886:;
	goto T1884;
T1885:;
	if(((V415))==Cnil){
	goto T1899;}
	V412= VV[209];
	goto T1897;
T1899:;
	V412= VV[210];
T1897:;
T1884:;
	V413= make_cons(VV[116],(V413));
	goto T1876;
T1878:;
	if(((V416))!=Cnil){
	goto T1902;}
	if((V407)!=Cnil){
	goto T1905;}
	base[10]= VV[2];
	base[11]= VV[211];
	base[12]= append((V408),(V409));
	vs_top=(vs_base=base+10)+3;
	Lerror();
	vs_top=sup;
T1905:;
	base[10]= (V400);
	base[11]= small_fixnum(0);
	base[12]= (V401);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk257)();
	vs_top=sup;
	base[10]= VV[150];
	base[11]= (V401);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk258)();
	vs_top=sup;
	V426= vs_base[0];
	V427= list(3,VV[15],(V400),list(2,V426,(V407)));
	setq(VV[57],make_cons(/* INLINE-ARGS */V427,symbol_value(VV[57])));
T1902:;
	if(((V407))==Cnil){
	goto T1917;}
	if(((V410))!=Cnil){
	goto T1917;}
	base[10]= (V401);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk243)();
	vs_top=sup;
	V410= vs_base[0];
	V415= Ct;
T1917:;
	if(((((V410))==Cnil?Ct:Cnil))==Cnil){
	goto T1927;}
	goto T1926;
T1927:;
	if(((V415))==Cnil){
	goto T1931;}
	V412= VV[212];
	goto T1929;
T1931:;
	V412= VV[213];
T1929:;
T1926:;
	V413= make_cons(VV[214],(V413));
T1876:;
	{object V428= caddr((V413));
	if(type_of(V428)==t_fixnum||
type_of(V428)==t_bignum||
type_of(V428)==t_ratio||
type_of(V428)==t_shortfloat||
type_of(V428)==t_longfloat||
type_of(V428)==t_complex){
	goto T1937;}}
	goto T1936;
T1937:;
	if(number_compare(caddr((V413)),small_fixnum(1))==0){
	goto T1935;}
T1936:;
	goto T1934;
T1935:;
	if(!((car((V413)))==(VV[116]))){
	goto T1942;}
	V430= VV[114];
	goto T1940;
T1942:;
	V430= VV[150];
T1940:;
	if(type_of((V413))!=t_cons)FEwrong_type_argument(Scons,(V413));
	((V413))->c.c_car = V430;
	V429= (V413);
	if(type_of(cdr(V429))!=t_cons)FEwrong_type_argument(Scons,cdr(V429));
	(cdr(V429))->c.c_cdr = Cnil;
	(void)(cdr(V429));
T1934:;
	base[10]= car((V413));
	base[11]= (V401);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk258)();
	vs_top=sup;
	V431= vs_base[0];
	if(type_of((V413))!=t_cons)FEwrong_type_argument(Scons,(V413));
	((V413))->c.c_car = V431;
	V413= list(2,(V400),(V413));
	base[10]= (V412);
	base[11]= (V401);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk258)();
	vs_top=sup;
	V412= vs_base[0];
	base[10]= list(2,(V400),(V410));
	base[11]= VV[215];
	base[12]= (V412);
	vs_top=(vs_base=base+10)+3;
	Lsubst();
	vs_top=sup;
	V412= vs_base[0];
	if((V406)==Cnil){
	goto T1959;}
	V406= list(2,(V402),(V406));
T1959:;
	base[10]= list(8,Cnil,(V413),(V412),(V406),Cnil,Cnil,(V412),(V406));
	vs_top=(vs_base=base+10)+1;
	return;}
	}
}
/*	function definition for LOOP-SEQUENCE-ELEMENTS-PATH	*/

static L66()
{register object *base=vs_base;
	register object *sup=base+VM66; VC66
	vs_reserve(VM66);
	{object V432;
	object V433;
	object V434;
	object V435;
	object V436;
	object V437;
	register object V438;
	check_arg(7);
	V432=(base[0]);
	V433=(base[1]);
	V434=(base[2]);
	V435=(base[3]);
	V436=(base[4]);
	V437=(base[5]);
	V438=(base[6]);
	vs_top=sup;
TTL:;
	{object V439;
	object V440;
	object V441;
	object V442;
	object V443;
	object V444;
	object V445;
	base[7]= VV[216];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk267)();
	vs_top=sup;
	V439= vs_base[0];
	base[7]= VV[217];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk267)();
	vs_top=sup;
	V440= vs_base[0];
	V445= list(5,VV[144],(V433),VV[172],VV[170],(V432));
	V441= Cnil;
	V442= Cnil;
	V443= Cnil;
	V444= Cnil;
	if(((V436))==Cnil){
	goto T1967;}
	V446= cddr((V445));
	V447= list(4,cadar((V435)),VV[95],VV[218],(V432));
	if(type_of(/* INLINE-ARGS */V446)!=t_cons)FEwrong_type_argument(Scons,/* INLINE-ARGS */V446);
	(/* INLINE-ARGS */V446)->c.c_cdr = /* INLINE-ARGS */V447;
	base[7]= VV[2];
	base[8]= VV[219];
	base[9]= (V445);
	vs_top=(vs_base=base+7)+3;
	Lerror();
	vs_top=sup;
T1967:;
	V441= car((V438));
	V438= cdr((V438));
	V442= car((V438));
	V438= cdr((V438));
	V443= car((V438));
	V444= cadr((V438));
	base[7]= (V439);
	base[8]= VV[110];
	base[9]= (V433);
	if((V434)!=Cnil){
	base[10]= (V434);
	goto T1988;}
	base[10]= (V444);
T1988:;
	base[11]= (V440);
	base[12]= (V443);
	base[13]= list(3,(V441),(V440),(V439));
	base[14]= list(2,(V442),(V440));
	base[15]= (V445);
	base[16]= (V435);
	vs_top=(vs_base=base+7)+10;
	(void) (*Lnk264)();
	vs_top=sup;
	V448= vs_base[0];
	base[7]= listA(3,Cnil,Cnil,V448);
	vs_top=(vs_base=base+7)+1;
	return;}
	}
}
/*	macro definition for DEFINE-LOOP-SEQUENCE-PATH	*/

static L67()
{register object *base=vs_base;
	register object *sup=base+VM67; VC67
	vs_reserve(VM67);
	check_arg(2);
	vs_top=sup;
	{object V449=base[0]->c.c_cdr;
	if(endp(V449))invalid_macro_call();
	base[2]= (V449->c.c_car);
	V449=V449->c.c_cdr;
	if(endp(V449))invalid_macro_call();
	base[3]= (V449->c.c_car);
	V449=V449->c.c_cdr;
	if(endp(V449))invalid_macro_call();
	base[4]= (V449->c.c_car);
	V449=V449->c.c_cdr;
	if(endp(V449)){
	base[5]= Cnil;
	} else {
	base[5]= (V449->c.c_car);
	V449=V449->c.c_cdr;}
	if(endp(V449)){
	base[6]= Cnil;
	} else {
	base[6]= (V449->c.c_car);
	V449=V449->c.c_cdr;}
	if(!endp(V449))invalid_macro_call();}
	base[7]= list(8,VV[220],base[2],VV[221],VV[222],base[3],base[4],base[5],base[6]);
	vs_top=(vs_base=base+7)+1;
	return;
}
/*	function definition for G1216	*/

static L68()
{register object *base=vs_base;
	register object *sup=base+VM68; VC68
	vs_reserve(VM68);
	{object V450;
	check_arg(1);
	V450=(base[0]);
	vs_top=sup;
TTL:;
	{
	object V451= car((V450));
	if(endp(V451)){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
T1997:;
	V453= listA(4,(V451->c.c_car),VV[221],VV[223],cdr((V450)));
	base[1]= (V451->c.c_car);
	base[2]= symbol_value(VV[171]);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	V454= vs_base[0];{object V455;
	V455= symbol_value(VV[171]);
	V456= symbol_function(VV[265]);
	V457= (VFUN_NARGS=6,(*(LnkLI234))(V454,V455,VV[25],V456,VV[224],small_fixnum(1)));
	setq(VV[171],make_cons(/* INLINE-ARGS */V453,/* INLINE-ARGS */V457));}
	if(endp(V451=MMcdr(V451))){
	base[1]= car((V450));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T1997;}
	}
}
static LnkT267(){ call_or_link(VV[267],&Lnk267);} /* LOOP-NAMED-VARIABLE */
static LnkT266(){ call_or_link(VV[266],&Lnk266);} /* LOOP-MAYBE-BIND-FORM */
static LnkT264(){ call_or_link(VV[264],&Lnk264);} /* LOOP-SEQUENCER */
static LnkT263(){ call_or_link(VV[263],&Lnk263);} /* LOOP-GATHER-PREPS */
static LnkT262(){ call_or_link(VV[262],&Lnk262);} /* LOOP-END-TESTIFY */
static LnkT261(){ call_or_link(VV[261],&Lnk261);} /* LOOP-SIMPLEP-1 */
static LnkT260(){ call_or_link(VV[260],&Lnk260);} /* LOOP-WHEN-IT-VARIABLE */
static LnkT259(){ call_or_link(VV[259],&Lnk259);} /* LOOP-CDRIFY */
static LnkT258(){ call_or_link(VV[258],&Lnk258);} /* LOOP-TYPED-ARITH */
static LnkT257(){ call_or_link(VV[257],&Lnk257);} /* LOOP-MAKE-ITERATION-VARIABLE */
static LnkT256(){ call_or_link(VV[256],&Lnk256);} /* LOOP-OPTIONAL-TYPE */
static LnkT251(){ call_or_link(VV[251],&Lnk251);} /* LOOP-CONSTRUCT-RETURN */
static LnkT250(){ call_or_link(VV[250],&Lnk250);} /* LOOP-GET-FORM */
static LnkT249(){ call_or_link(VV[249],&Lnk249);} /* LOOP-EMIT-BODY */
static LnkT248(){ call_or_link(VV[248],&Lnk248);} /* LOOP-GET-PROGN */
static LnkT247(){ call_or_link(VV[247],&Lnk247);} /* LOOP-PSEUDO-BODY */
static LnkT246(){ call_or_link(VV[246],&Lnk246);} /* LOOP-MAKE-CONDITIONALIZATION */
static LnkT245(){ call_or_link(VV[245],&Lnk245);} /* LOOP-CONSTANTP */
static LnkT244(){ call_or_link(VV[244],&Lnk244);} /* LOOP-TEQUAL */
static LnkT243(){ call_or_link(VV[243],&Lnk243);} /* LOOP-TYPED-INIT */
static LnkT92(){ call_or_link(VV[92],&Lnk92);} /* LOOP-DECLARE-VARIABLE */
static object  LnkTLI242(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[242],&LnkLI242,2,ap);} /* COERCE */
static object  LnkTLI5(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[5],&LnkLI5,ap);} /* WARN */
static LnkT241(){ call_or_link(VV[241],&Lnk241);} /* LOOP-GET-PROGN-1 */
static LnkT240(){ call_or_link(VV[240],&Lnk240);} /* LOOP-TMEMBER */
static LnkT239(){ call_or_link(VV[239],&Lnk239);} /* LOOP-HACK-ITERATION */
static LnkT238(){ call_or_link(VV[238],&Lnk238);} /* LOOP-BIND-BLOCK */
static LnkT237(){ call_or_link(VV[237],&Lnk237);} /* LOOP-OPTIMIZE-DUPLICATED-CODE-ETC */
static LnkT236(){ call_or_link(VV[236],&Lnk236);} /* LOOP-MAKE-VARIABLE */
static LnkT235(){ call_or_link(VV[235],&Lnk235);} /* LOOP-OUTPUT-GROUP */
static LnkT136(){ call_or_link(VV[136],&Lnk136);} /* LOOP-SIMPLEP */
static object  LnkTLI234(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[234],&LnkLI234,ap);} /* DELETE */
static LnkT233(){ call_or_link(VV[233],&Lnk233);} /* LOOP-TRANSLATE-1 */
static LnkT232(){ call_or_link(VV[232],&Lnk232);} /* LOOP-TRANSLATE */
static LnkT231(){ call_or_link(VV[231],&Lnk231);} /* LOOP-TASSOC */
static LnkT229(){ call_or_link(VV[229],&Lnk229);} /* LOOP-MAKE-DESETQ */
static LnkT228(){ call_or_link(VV[228],&Lnk228);} /* LOOP-DESETQ-INTERNAL */
static LnkT227(){ call_or_link(VV[227],&Lnk227);} /* LOOP-MAKE-SETQ */
static LnkT226(){ call_or_link(VV[226],&Lnk226);} /* LOOP-MAKE-PSETQ */
static object  LnkTLI225(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[225],&LnkLI225,ap);} /* CONCATENATE */
