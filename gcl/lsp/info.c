
#include <cmpinclude.h>
#include "info.h"
init_info(){do_init(VV);}
/*	function definition for SHARP-U-READER	*/

static L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	{register object V1;
	object V2;
	object V3;
	check_arg(3);
	V1=(base[0]);
	V2=(base[1]);
	V3=(base[2]);
	vs_top=sup;
TTL:;
	{register object V4;
	V4= (VFUN_NARGS=5,(*(LnkLI87))(small_fixnum(10),VV[0],VV[1],VV[2],small_fixnum(0)));
	base[3]= (V1);
	vs_top=(vs_base=base+3)+1;
	Lread_char();
	vs_top=sup;
	V5= vs_base[0];
	if(!(eql(V5,VV[3]))){
	goto T5;}
	goto T4;
T5:;
	base[3]= VV[4];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
T4:;
T12:;
	{register object V6;
	base[3]= (V1);
	vs_top=(vs_base=base+3)+1;
	Lread_char();
	vs_top=sup;
	V6= vs_base[0];
	if(!(eql((V6),VV[3]))){
	goto T18;}
	goto T10;
T18:;
	if(!(eql((V6),VV[5]))){
	goto T16;}
	base[3]= (V1);
	vs_top=(vs_base=base+3)+1;
	Lread_char();
	vs_top=sup;
	V6= vs_base[0];{object V7;
	{register object x= (V6),V9= VV[6];
	while(!endp(V9))
	if(type_of(V9->c.c_car)==t_cons &&eql(x,V9->c.c_car->c.c_car)){
	V8= (V9->c.c_car);
	goto T28;
	}else V9=V9->c.c_cdr;
	V8= Cnil;}
T28:;
	V7= cdr(V8);
	if(V7==Cnil)goto T26;
	V6= V7;
	goto T25;
T26:;}
T25:;
T16:;
	(void)((VFUN_NARGS=2,(*(LnkLI88))((V6),(V4))));}
	goto T12;
T10:;
	base[3]= (V4);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for FILE-TO-STRING	*/

static L2()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM2; VC2
	vs_reserve(VM2);
	bds_check;
	{VOL object V10;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V10=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T30;}
	vs_top=sup;
	goto T31;
T30:;
	base[1]= small_fixnum(0);
T31:;
	bds_bind(VV[7],Ct);
	base[3]= small_fixnum(0);
	base[5]= (V10);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk89)();
	vs_top=sup;
	base[4]= vs_base[0];
	{object tag;frame_ptr fr;object p;bool active;
	frs_push(FRS_PROTECT,Cnil);
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	base[6]= base[4];
	vs_top=(vs_base=base+6)+1;
	Lfile_length();
	vs_top=sup;
	base[3]= vs_base[0];{VOL object V11;
	if(number_compare(small_fixnum(0),base[1])<=0){
	goto T42;}
	V11= Cnil;
	goto T41;
T42:;
	V11= (number_compare(base[1],base[3])<=0?Ct:Cnil);
T41:;
	if(V11==Cnil)goto T40;
	goto T39;
T40:;}
	base[6]= VV[8];
	base[7]= base[1];
	vs_top=(vs_base=base+6)+2;
	Lerror();
	vs_top=sup;
T39:;
	{object V12;
	V13= number_minus(base[3],base[1]);
	V12= (VFUN_NARGS=3,(*(LnkLI87))(/* INLINE-ARGS */V13,VV[0],VV[1]));
	if(!(number_compare(base[1],small_fixnum(0))>0)){
	goto T47;}
	base[6]= base[4];
	base[7]= base[1];
	vs_top=(vs_base=base+6)+2;
	Lfile_position();
	vs_top=sup;
T47:;
	base[6]= (V12);
	base[7]= small_fixnum(0);
	base[8]= make_fixnum(length((V12)));
	base[9]= base[4];
	vs_top=(vs_base=base+6)+4;
	(void) (*Lnk90)();
	vs_top=sup;
	base[6]= (V12);
	vs_top=(vs_base=base+6)+1;}
	active=FALSE;}
	base[5]=Cnil;
	while(vs_base<vs_top)
	{base[5]=MMcons(vs_top[-1],base[5]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if((base[4])==Cnil){
	goto T57;}
	base[6]= base[4];
	vs_top=(vs_base=base+6)+1;
	Lclose();
	vs_top=sup;
T57:;
	vs_base=vs_top=base+6;
	for(p= base[5];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	bds_unwind1;
	return;}}
	}
}
/*	function definition for ATOI	*/

static L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	{register object V14;
	register int V15;
	check_arg(2);
	V14=(base[0]);
	V15=fix(base[1]);
	vs_top=sup;
TTL:;
	{register int V16;
	register int V17;
	register int V18;
	V16= 0;
	V17= 0;
	V18= length((V14));
T66:;
	if(!((V15)<(V18))){
	goto T69;}
	goto T68;
T69:;
	goto T67;
T68:;
	{unsigned char V19= char_code(aref1((V14),V15));
	V17= (/* INLINE-ARGS */V19);}
	V15= (V15)+(1);
	V17= (V17)-(48);
	if(!((V17)>=(0))){
	goto T79;}
	if(!((V17)<(10))){
	goto T79;}
	V20 = make_fixnum(V17);
	V21 = make_fixnum(V16);
	V22= number_times(small_fixnum(10),V21);
	V16= fix(number_plus(V20,/* INLINE-ARGS */V22));
	goto T77;
T79:;
	goto T64;
T77:;
	goto T66;
T67:;
	goto T64;
	goto T64;
T64:;
	base[2]= make_fixnum(V16);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for INFO-GET-TAGS	*/

static L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	bds_check;
	{object V23;
	check_arg(1);
	V23=(base[0]);
	vs_top=sup;
TTL:;
	{register int V24;
	object V25;
	register object V26;
	V24= 0;
	bds_bind(VV[9],Cnil);
	V25= Cnil;
	V26= Cnil;
	bds_bind(VV[10],Ct);
	{register object V27;
	register int V28;
	base[3]= (V23);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk91)();
	vs_top=sup;
	V27= vs_base[0];
	V28= 0;
	{int V29= fix((VFUN_NARGS=3,(*(LnkLI92))(VV[11],(V27),small_fixnum(0))));
	if(!((/* INLINE-ARGS */V29)>=(0))){
	goto T91;}}
	V28= (*(LnkLI93))(0);
	V30 = make_fixnum(V28);
	V24= fix((VFUN_NARGS=3,(*(LnkLI92))(VV[12],(V27),V30)));
T99:;
	V31 = make_fixnum(V28);
	V32 = make_fixnum(V24);
	{int V33= fix((VFUN_NARGS=4,(*(LnkLI92))(VV[13],(V27),V31,V32)));
	if(!((/* INLINE-ARGS */V33)>=(0))){
	goto T102;}}
	goto T101;
T102:;
	goto T100;
T101:;
	V28= (*(LnkLI93))(0);
	base[3]= (V27);
	base[4]= make_fixnum((*(LnkLI94))(2));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk95)();
	vs_top=sup;
	V34= vs_base[0];
	base[3]= (V27);
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk96)();
	vs_top=sup;
	V35= vs_base[0];
	V36= make_cons(V34,V35);
	V26= make_cons(/* INLINE-ARGS */V36,(V26));
	goto T99;
T100:;
	goto T91;
	goto T91;
T91:;
	V37 = make_fixnum(V28);
	{int V38= fix((VFUN_NARGS=3,(*(LnkLI92))(VV[14],(V27),V37)));
	if(!((/* INLINE-ARGS */V38)>=(0))){
	goto T115;}}
	V28= (*(LnkLI93))(0);
	V39 = make_fixnum(V28);
	{int V40= fix((VFUN_NARGS=3,(*(LnkLI92))(VV[15],(V27),V39)));
	if(!((/* INLINE-ARGS */V40)>=(0))){
	goto T115;}}
	base[3]= (V27);
	base[4]= make_fixnum(V28);
	base[5]= make_fixnum((*(LnkLI93))(0));
	vs_top=(vs_base=base+3)+3;
	Lsubseq();
	vs_top=sup;
	V25= vs_base[0];
T115:;
	if(((V26))==Cnil){
	goto T126;}
	if((V25)!=Cnil){
	goto T126;}
	base[3]= VV[16];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk97)();
	vs_top=sup;
T126:;
	V41= nreverse((V26));
	base[3]= make_cons((V25),/* INLINE-ARGS */V41);
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;}}
	}
}
/*	function definition for RE-QUOTE-STRING	*/

static L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	{register object V42;
	check_arg(1);
	V42=(base[0]);
	vs_top=sup;
TTL:;
	{register int V43;
	int V44;
	register object V45;
	register int V46;
	V43= 0;
	V44= length((V42));
	V45= Cnil;
	V46= 0;
	{register object V47;
	V47= Cnil;
T136:;
T139:;
	if(!((V43)<(V44))){
	goto T142;}
	goto T141;
T142:;
	goto T140;
T141:;
	V45= aref1((V42),V43);
	if(((VFUN_NARGS=2,(*(LnkLI98))((V45),VV[17])))==Cnil){
	goto T146;}
	if(((V47))==Cnil){
	goto T150;}
	(void)((VFUN_NARGS=2,(*(LnkLI88))(VV[5],(V47))));
	goto T146;
T150:;
	V46= (V46)+(1);
T146:;
	if(((V47))==Cnil){
	goto T153;}
	(void)((VFUN_NARGS=2,(*(LnkLI88))((V45),(V47))));
T153:;
	V43= (V43)+(1);
	goto T139;
T140:;
	goto T137;
	goto T137;
T137:;
	{register object V48;
	V48= (V47);
	if(((V48))==Cnil){
	goto T161;}
	goto T159;
T161:;
	if(!((V46)>(0))){
	goto T164;}
	V49 = make_fixnum((length((V42)))+(V46));
	V47= (VFUN_NARGS=5,(*(LnkLI87))(V49,VV[0],VV[1],VV[2],small_fixnum(0)));
	V43= 0;
	goto T136;
T164:;
	V47= (V42);}
T159:;
	goto T134;
T134:;
	base[1]= (V47);
	vs_top=(vs_base=base+1)+1;
	return;}}
	}
}
/*	function definition for GET-MATCH	*/

static L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	{object V50;
	object V51;
	check_arg(2);
	V50=(base[0]);
	V51=(base[1]);
	vs_top=sup;
TTL:;
	base[2]= (V50);
	base[3]= make_fixnum((*(LnkLI94))(fix((V51))));
	base[4]= make_fixnum((*(LnkLI93))(fix((V51))));
	vs_top=(vs_base=base+2)+3;
	Lsubseq();
	return;
	}
}
/*	function definition for GET-NODES	*/

static L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	bds_check;
	{register object V52;
	register object V53;
	check_arg(2);
	V52=(base[0]);
	V53=(base[1]);
	vs_top=sup;
TTL:;
	{register int V54;
	register object V55;
	V54= 0;
	V55= Cnil;
	bds_bind(VV[10],Ct);
	bds_bind(VV[9],Cnil);
	if(((V53))==Cnil){
	goto T177;}
	base[4]= VV[18];
	base[6]= (V52);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk99)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= VV[19];
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V52= vs_base[0];
T187:;
	V56 = make_fixnum(V54);
	{int V57= fix((VFUN_NARGS=3,(*(LnkLI92))((V52),(V53),V56)));
	if(!((/* INLINE-ARGS */V57)>=(0))){
	goto T190;}}
	goto T189;
T190:;
	goto T188;
T189:;
	V54= (*(LnkLI93))(0);
	base[4]= (V53);
	base[5]= small_fixnum(1);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk96)();
	vs_top=sup;
	V58= vs_base[0];
	V55= make_cons(V58,(V55));
	goto T187;
T188:;
	goto T185;
	goto T185;
T185:;
	base[4]= nreverse((V55));
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	bds_unwind1;
	return;
T177:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	bds_unwind1;
	return;}
	}
}
/*	function definition for GET-INDEX-NODE	*/

static L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	check_arg(0);
	vs_top=sup;
TTL:;{object V59;
	V59= caddr(symbol_value(VV[20]));
	if(V59==Cnil)goto T200;
	base[0]= V59;
	vs_top=(vs_base=base+0)+1;
	return;
T200:;}
	{object V60;
	object V61;
	object V62;
	V60= Cnil;
	V61= car(cadr(symbol_value(VV[20])));
	if((V61)==Cnil){
	V62= Cnil;
	goto T204;}
	base[2]= VV[21];
	base[3]= (V61);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk101)();
	vs_top=sup;
	V63= vs_base[0];
	V62= car(V63);
T204:;
	if(((V62))==Cnil){
	goto T209;}
	base[2]= (V62);
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk102)();
	vs_top=sup;
	V60= vs_base[0];
	{object V64;
	V64= symbol_value(VV[20]);
	if(type_of(cddr((V64)))!=t_cons)FEwrong_type_argument(Scons,cddr((V64)));
	(cddr((V64)))->c.c_car = V60;
	(void)(cddr((V64)));
	base[2]= V60;
	vs_top=(vs_base=base+2)+1;
	return;}
T209:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
}
/*	function definition for NODES-FROM-INDEX	*/

static L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	bds_check;
	{register object V66;
	check_arg(1);
	V66=(base[0]);
	vs_top=sup;
TTL:;
	{register object V67;
	register object V68;
	V67= small_fixnum(0);
	V68= Cnil;
	bds_bind(VV[10],Ct);
	bds_bind(VV[9],Cnil);
	{register object V69;
	vs_base=vs_top;
	(void) (*Lnk103)();
	vs_top=sup;
	V69= vs_base[0];
	if(((V69))==Cnil){
	goto T222;}
	base[3]= VV[22];
	base[5]= (V66);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk99)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[23];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V66= vs_base[0];
T232:;
	{int V70= fix((VFUN_NARGS=3,(*(LnkLI92))((V66),(V69),(V67))));
	if(!((/* INLINE-ARGS */V70)>=(0))){
	goto T235;}}
	goto T234;
T235:;
	goto T233;
T234:;
	V67= make_fixnum((*(LnkLI93))(0));
	base[3]= (V69);
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk96)();
	vs_top=sup;
	V71= vs_base[0];
	base[3]= (V69);
	base[4]= small_fixnum(2);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk96)();
	vs_top=sup;
	V72= vs_base[0];
	V73= make_cons(V71,V72);
	V68= make_cons(/* INLINE-ARGS */V73,(V68));
	goto T232;
T233:;
	goto T230;
	goto T230;
T230:;
	base[3]= nreverse((V68));
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
T222:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;}}
	}
}
/*	function definition for GET-NODE-INDEX	*/

static L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	bds_check;
	{register object V74;
	object V75;
	check_arg(2);
	V74=(base[0]);
	V75=(base[1]);
	vs_top=sup;
TTL:;
	{object V76;
	V76= (V74);
	bds_bind(VV[9],Cnil);
	if(((V75))!=Cnil){
	goto T250;}
	base[3]= small_fixnum(0);
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;
T250:;
	base[3]= VV[24];
	base[5]= (V74);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk99)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[25];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V74= vs_base[0];
	{int V77= fix((VFUN_NARGS=2,(*(LnkLI92))((V74),(V75))));
	if(!((/* INLINE-ARGS */V77)>=(0))){
	goto T259;}}
	base[3]= (V75);
	base[4]= make_fixnum((*(LnkLI94))(1));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk95)();
	bds_unwind1;
	return;
T259:;
	base[3]= VV[26];
	base[4]= (V76);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk97)();
	vs_top=sup;
	base[3]= small_fixnum(0);
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;}
	}
}
/*	function definition for ALL-MATCHES	*/

static L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	bds_check;
	{object V78;
	object V79;
	check_arg(2);
	V78=(base[0]);
	V79=(base[1]);
	vs_top=sup;
TTL:;
	{register int V80;
	V80= 0;
	bds_bind(VV[9],Cnil);
	{register object V81;
	register object V82;
	register object V83;
	V81= Cnil;
	V82= Cnil;
	V83= Cnil;
T268:;
	V84 = make_fixnum(V80);
	V80= fix((VFUN_NARGS=3,(*(LnkLI92))((V78),(V79),V84)));
	if(!((V80)>=(0))){
	goto T271;}
	goto T270;
T271:;
	goto T269;
T270:;{object V85;
	V85= make_fixnum(V80);
	V80= (*(LnkLI93))(0);
	V86 = make_fixnum(V80);
	V83= list(2,V85,V86);}
	if(((V82))==Cnil){
	goto T279;}
	{register object V87;
	register object V88;
	V87= (V82);
	V82= make_cons((V83),Cnil);
	V88= (V82);
	if(type_of((V87))!=t_cons)FEwrong_type_argument(Scons,(V87));
	((V87))->c.c_cdr = (V88);
	goto T277;}
T279:;
	V82= make_cons((V83),Cnil);
	V81= (V82);
T277:;
	goto T268;
T269:;
	base[3]= (V81);
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;}}
	}
}
/*	macro definition for NODE	*/

static L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	check_arg(2);
	vs_top=sup;
	{object V89=base[0]->c.c_cdr;
	if(endp(V89))invalid_macro_call();
	base[2]= (V89->c.c_car);
	V89=V89->c.c_cdr;
	if(endp(V89))invalid_macro_call();
	base[3]= (V89->c.c_car);
	V89=V89->c.c_cdr;
	if(!endp(V89))invalid_macro_call();}
	V90= (VFUN_NARGS=2,(*(LnkLI98))(base[2],VV[28]));
	base[4]= list(3,VV[27],/* INLINE-ARGS */V90,base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for NODE-OFFSET	*/

static L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	{object V91;
	check_arg(1);
	V91=(base[0]);
	vs_top=sup;
TTL:;
	base[1]= number_plus(car(cadr(cddddr((V91)))),cadr((V91)));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for SETUP-INFO	*/

static L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	bds_check;
	{register object V92;
	check_arg(1);
	V92=(base[0]);
	vs_top=sup;
TTL:;
	{object V93;
	register object V94;
	V93= Cnil;
	V94= Cnil;
	if(!((symbol_value(VV[29]))==(symbol_value(VV[30])))){
	goto T292;}
	goto T291;
T292:;
	setq(VV[29],symbol_value(VV[30]));
	base[1]= symbol_value(VV[30]);
	base[2]= VV[32];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk100)();
	vs_top=sup;
	V95= vs_base[0];
	setq(VV[31],make_cons(V95,symbol_value(VV[31])));
	base[1]= symbol_value(VV[31]);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk104)();
	vs_top=sup;
	setq(VV[31],vs_base[0]);
T291:;
	if(!(equal((V92),VV[33]))){
	goto T303;}
	V92= VV[34];
T303:;
	base[1]= (V92);
	base[2]= symbol_value(VV[31]);
	base[3]= VV[35];
	base[4]= Cnil;
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk105)();
	vs_top=sup;
	V94= vs_base[0];
	if(((V94))!=Cnil){
	goto T313;}
	if(equal((V92),VV[36])){
	goto T313;}
	{object V96;
	base[3]= VV[37];
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk102)();
	vs_top=sup;
	V96= vs_base[0];
	bds_bind(VV[10],Cnil);
	base[3]= VV[38];
	base[5]= (V92);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk99)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[39];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V97= vs_base[0];
	{int V98= fix((VFUN_NARGS=2,(*(LnkLI92))(V97,(V96))));
	if(!((/* INLINE-ARGS */V98)>=(0))){
	bds_unwind1;
	goto T313;}}
	base[3]= (V96);
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk96)();
	vs_top=sup;
	V94= vs_base[0];
	bds_unwind1;}
T313:;
	if(((V94))==Cnil){
	goto T334;}
	{object V99;
	base[3]= (V94);
	vs_top=(vs_base=base+3)+1;
	Ltruename();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lnamestring();
	vs_top=sup;
	V99= vs_base[0];
	{register object x= (V99),V100= symbol_value(VV[40]);
	while(!endp(V100))
	if(type_of(V100->c.c_car)==t_cons &&equal(x,V100->c.c_car->c.c_car)){
	V93= (V100->c.c_car);
	goto T342;
	}else V100=V100->c.c_cdr;
	V93= Cnil;}
T342:;
	if(((V93))==Cnil){
	goto T340;}
	setq(VV[20],(V93));
	goto T332;
T340:;
	base[2]= (V99);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk106)();
	vs_top=sup;
	V101= vs_base[0];
	setq(VV[20],list(3,(V99),V101,Cnil));
	setq(VV[40],make_cons(symbol_value(VV[20]),symbol_value(VV[40])));
	goto T332;}
T334:;
	base[1]= Ct;
	base[2]= VV[41];
	base[3]= (V92);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
T332:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for GET-INFO-CHOICES	*/

static L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	{object V102;
	object V103;
	check_arg(2);
	V102=(base[0]);
	V103=(base[1]);
	vs_top=sup;
TTL:;
	if(!(eql((V103),VV[42]))){
	goto T353;}
	base[2]= (V102);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk107)();
	return;
T353:;
	base[2]= (V102);
	base[3]= car(cadr(symbol_value(VV[20])));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk101)();
	return;
	}
}
/*	function definition for ADD-FILE	*/

static L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	{object V104;
	register object V105;
	check_arg(2);
	V104=(base[0]);
	V105=(base[1]);
	vs_top=sup;
TTL:;
	{register object V106;
	V106= (V104);
T361:;
	if((V106)!=Cnil){
	goto T363;}
	goto T362;
T363:;
	{register object V107;
	register object V108;
	V107= (V106);
	V108= list(2,car((V106)),(V105));
	if(type_of((V107))!=t_cons)FEwrong_type_argument(Scons,(V107));
	((V107))->c.c_car = (V108);}
	V106= cdr((V106));
	goto T361;
T362:;
	goto T359;
	goto T359;
T359:;
	base[2]= (V104);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for INFO-ERROR	*/

static L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{object V109;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V109=(base[0]);
	vs_top=sup;
	if((symbol_value(VV[43]))==Cnil){
	goto T372;}
	base[2]= Cnil;
	{object V110;
	V110= (V109);
	 vs_top=base+3;
	 while(!endp(V110))
	 {vs_push(car(V110));V110=cdr(V110);}
	vs_base=base+2;}
	Lformat();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk108)();
	return;
T372:;
	{object V111;
	V111= (V109);
	 vs_top=base+1;
	 while(!endp(V111))
	 {vs_push(car(V111));V111=cdr(V111);}
	vs_base=base+1;}
	Lerror();
	return;
	}
}
/*	function definition for INFO-GET-FILE	*/

static L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	{register object V112;
	check_arg(1);
	V112=(base[0]);
	vs_top=sup;
TTL:;
	base[1]= (V112);
	base[2]= car(symbol_value(VV[20]));
	vs_top=(vs_base=base+1)+2;
	Lmerge_pathnames();
	vs_top=sup;
	V112= vs_base[0];
	if(!(equal(car(symbol_value(VV[44])),(V112)))){
	goto T384;}
	V113= symbol_value(VV[44]);
	goto T382;
T384:;
	base[1]= (V112);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk91)();
	vs_top=sup;
	V114= vs_base[0];
	setq(VV[44],make_cons((V112),V114));
	V113= symbol_value(VV[44]);
T382:;
	base[1]= cdr(V113);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for WAITING	*/

static L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	{object V115;
	check_arg(1);
	V115=(base[0]);
	vs_top=sup;
TTL:;
	if(symbol_value(VV[43])==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	base[1]= (V115);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T389;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T389:;
	base[1]= VV[45];
	base[2]= (V115);
	base[3]= VV[46];
	base[4]= VV[47];
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk109)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T392;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T392:;
	base[1]= VV[48];
	base[2]= VV[49];
	base[3]= VV[50];
	vs_top=(vs_base=base+1)+3;
	super_funcall_no_event((V115));
	return;
	}
}
/*	function definition for END-WAITING	*/

static L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{object V116;
	check_arg(1);
	V116=(base[0]);
	vs_top=sup;
TTL:;
	base[1]= (V116);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T401;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T401:;
	base[1]= VV[48];
	base[2]= VV[49];
	base[3]= VV[51];
	vs_top=(vs_base=base+1)+3;
	super_funcall_no_event((V116));
	return;
	}
}
/*	function definition for INFO-SUBFILE	*/

static L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	{register object V117;
	check_arg(1);
	V117=(base[0]);
	vs_top=sup;
TTL:;
	{object V118;
	register object V119;
	register object V120;
	V118= cdr(cadr(symbol_value(VV[20])));
	V119= Cnil;
	V120= Cnil;
	if((V118)==Cnil){
	goto T408;}
	if(number_compare((V117),small_fixnum(0))>=0){
	goto T409;}
	goto T408;
T409:;
	{register object V121;
	register object V122;
	V121= (V118);
	V122= car((V121));
T414:;
	if(!(endp((V121)))){
	goto T415;}
	goto T408;
T415:;
	if(!(number_compare(car((V122)),(V117))>0)){
	goto T419;}
	V120= car((V122));
	goto T408;
T419:;
	V119= (V122);
	V121= cdr((V121));
	V122= car((V121));
	goto T414;}
T408:;
	if((V119)!=Cnil){
	base[1]= (V119);
	goto T431;}
	base[1]= make_cons(small_fixnum(0),car(symbol_value(VV[20])));
T431:;
	base[2]= (V120);
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	function definition for INFO-NODE-FROM-POSITION	*/

static L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	{object V123;
	check_arg(1);
	V123=(base[0]);
	vs_top=sup;
TTL:;
	{register object V124;
	V124= small_fixnum(0);
	{object V125;
	register object V126;
	register object V127;
	base[4]= (V123);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk110)();
	vs_top=sup;
	V125= vs_base[0];
	base[4]= cdr((V125));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V126= vs_base[0];
	V127= number_minus((V123),car((V125)));
T441:;
	{int V128= fix((VFUN_NARGS=4,(*(LnkLI92))(VV[52],(V126),(V124),(V127))));
	if(!((/* INLINE-ARGS */V128)>=(0))){
	goto T444;}}
	goto T443;
T444:;
	goto T442;
T443:;
	V124= make_fixnum((*(LnkLI93))(0));
	goto T441;
T442:;
	goto T439;
	goto T439;
T439:;
	V124= number_minus((V124),small_fixnum(1));
	{int V129= fix((VFUN_NARGS=3,(*(LnkLI92))(VV[53],(V126),(V124))));
	if(!((/* INLINE-ARGS */V129)>=(0))){
	goto T452;}}
	{object V130;
	object V131;
	object V132;
	object V133;
	object V134;
	V130= make_fixnum((*(LnkLI94))(0));
	V131= make_fixnum((*(LnkLI93))(0));
	base[9]= (V126);
	base[10]= small_fixnum(1);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk96)();
	vs_top=sup;
	V132= vs_base[0];
	{int V135= fix((VFUN_NARGS=3,(*(LnkLI92))(VV[54],(V126),(V131))));
	if(!((/* INLINE-ARGS */V135)>=(0))){
	goto T461;}}
	V133= make_fixnum((*(LnkLI94))(0));
	goto T459;
T461:;
	V133= make_fixnum(length((V126)));
T459:;
	V134= listA(7,(V126),(V131),(V133),(V130),(V132),(V125),symbol_value(VV[20]));
	base[9]= (V134);
	vs_top=(vs_base=base+9)+1;
	return;}
T452:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}}
	}
}
/*	function definition for SHOW-INFO	*/

static L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	bds_check;
	{register object V136;
	register object V137;
	object V138;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V136=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T464;}
	V137=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T465;}
	V138=(base[2]);
	vs_top=sup;
	goto T466;
T464:;
	V137= Cnil;
T465:;
	V138= symbol_value(VV[43]);
T466:;
	{register object V139;
	register object V140;
	register int V141;
	int V142;
	V139= Cnil;
	bds_bind(VV[9],Cnil);
	V140= Cnil;
	V141= 0;
	V142= -1;
	if(!(type_of((V136))==t_cons)){
	goto T474;}
	if(!(type_of(cdr((V136)))==t_cons)){
	goto T474;}
	V140= cadr((V136));
	V136= car((V136));
T474:;
	if(!(type_of((V136))==t_cons)){
	goto T473;}
	V137= car((V136));
	V136= cdr((V136));
T473:;
	if(!(type_of((V136))==t_string)){
	goto T488;}
	goto T487;
T488:;
	base[4]= VV[55];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk97)();
	vs_top=sup;
T487:;
	base[4]= symbol_value(VV[56]);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	{int V143= fix((VFUN_NARGS=2,(*(LnkLI92))(VV[57],(V136))));
	if(!((/* INLINE-ARGS */V143)>=(0))){
	goto T493;}}
	base[4]= (V136);
	base[5]= small_fixnum(1);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk96)();
	vs_top=sup;
	V140= vs_base[0];
	base[4]= (V136);
	base[5]= small_fixnum(2);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk96)();
	vs_top=sup;
	V136= vs_base[0];
	if(!(equal((V136),VV[58]))){
	goto T493;}
	V136= VV[59];
T493:;
	if(((V140))==Cnil){
	goto T507;}
	base[4]= (V140);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk113)();
	vs_top=sup;
T507:;
	{object V144;
	base[4]= (V136);
	base[5]= car(cadr(symbol_value(VV[20])));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk114)();
	vs_top=sup;
	V144= vs_base[0];
	if(((V144))!=Cnil){
	goto T514;}
	base[4]= Ct;
	base[5]= VV[60];
	base[6]= (V136);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	return;
T514:;
	base[4]= (V144);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk110)();
	vs_top=sup;
	V139= vs_base[0];
	{register object V145;
	object V146;
	base[6]= cdr((V139));
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V145= vs_base[0];
	V146= number_minus((V144),car((V139)));
	base[6]= VV[61];
	base[8]= (V136);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk99)();
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= VV[62];
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V147= vs_base[0];
	{int V148= fix((VFUN_NARGS=3,(*(LnkLI92))(V147,(V145),(V146))));
	if(!((/* INLINE-ARGS */V148)>=(0))){
	goto T528;}}
	{object V149;
	register object V150;
	register object V151;
	object V152;
	V149= make_fixnum((*(LnkLI94))(0));
	V150= make_fixnum((*(LnkLI93))(0));
	{int V153= fix((VFUN_NARGS=3,(*(LnkLI92))(VV[63],(V145),(V150))));
	if(!((/* INLINE-ARGS */V153)>=(0))){
	goto T539;}}
	V151= make_fixnum((*(LnkLI94))(0));
	goto T537;
T539:;
	V151= make_fixnum(length((V145)));
T537:;
	V152= listA(7,(V145),(V150),(V151),(V149),(V136),(V139),symbol_value(VV[20]));
	if(((V137))==Cnil){
	goto T542;}
	base[10]= (V137);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk99)();
	vs_top=sup;
	V137= vs_base[0];
	bds_bind(VV[10],Cnil);
	base[11]= VV[64];
	base[12]= (V137);
	base[13]= VV[65];
	vs_top=(vs_base=base+11)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V154= vs_base[0];
	V142= fix((VFUN_NARGS=4,(*(LnkLI92))(V154,(V145),(V150),(V151))));
	if((V142)>=(0)){
	goto T548;}
	{int V155= fix((VFUN_NARGS=4,(*(LnkLI92))((V137),(V145),(V150),(V151))));
	if(!((/* INLINE-ARGS */V155)>=(0))){
	bds_unwind1;
	goto T542;}}
T548:;
	V156 = make_fixnum((*(LnkLI94))(0));
	V141= fix(number_minus(V156,(V150)));
	bds_unwind1;
T542:;
	if(((V138))==Cnil){
	goto T559;}
	{object V157;
	base[10]= (V152);
	base[11]= make_fixnum(V141);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk115)();
	vs_top=sup;
	V157= vs_base[0];
	base[10]= symbol_value(VV[56]);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk116)();
	vs_top=sup;
	base[10]= (V157);
	vs_top=(vs_base=base+10)+1;
	bds_unwind1;
	return;}
T559:;
	{object V158;
	if(!((V142)>=(0))){
	goto T568;}
	base[10]= (V150);
	base[11]= small_fixnum(1);
	base[12]= make_fixnum(V141);
	vs_top=(vs_base=base+10)+3;
	Lplus();
	vs_top=sup;
	V159= vs_base[0];
	{int V160= fix((VFUN_NARGS=4,(*(LnkLI92))(VV[66],(V145),V159,(V151))));
	if(!((/* INLINE-ARGS */V160)>=(0))){
	goto T568;}}
	V158= make_fixnum((*(LnkLI94))(0));
	goto T566;
T568:;
	V158= (V151);
T566:;
	base[10]= (V145);
	V161 = make_fixnum(V141);
	base[11]= number_plus(V161,(V150));
	base[12]= (V158);
	vs_top=(vs_base=base+10)+3;
	Lsubseq();
	bds_unwind1;
	return;}}
T528:;
	base[6]= VV[67];
	base[7]= (V136);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk97)();
	vs_top=sup;
	base[6]= symbol_value(VV[56]);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk116)();
	bds_unwind1;
	return;}}}
	}
}
/*	function definition for INFO-AUX	*/

static L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	{object V162;
	object V163;
	check_arg(2);
	V162=(base[0]);
	V163=(base[1]);
	vs_top=sup;
TTL:;
	{register object V164;
	register object V165;
	V164= Cnil;
	V165= (V163);
	{object V166;
	register object V167;
	register object V168;
	register object V169;
	V166= Cnil;
	V167= Cnil;
	V168= Cnil;
	V169= Cnil;
T584:;
	if(((V165))==Cnil){
	goto T587;}
	goto T586;
T587:;
	goto T585;
T586:;
	{object V170;
	V170= car((V165));
	V164= (V170);}
	base[2]= (V164);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk113)();
	vs_top=sup;
	base[4]= (V162);
	base[5]= VV[68];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk117)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V164);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk118)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	V168= vs_base[0];
	if(((V167))==Cnil){
	goto T603;}
	{register object V172;
	V172= (V168);
	if(type_of(V167)!=t_cons)FEwrong_type_argument(Scons,V167);
	(V167)->c.c_cdr = (V172);
	if(((V172))!=Cnil){
	goto T605;}}
	goto T601;
T605:;
	base[2]= cdr((V167));
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V167= vs_base[0];
	goto T601;
T603:;
	V166= (V168);
	base[2]= (V166);
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V167= vs_base[0];
T601:;
	base[4]= (V162);
	base[5]= VV[42];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk117)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V164);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk118)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	V169= vs_base[0];
	if(((V167))==Cnil){
	goto T623;}
	{register object V174;
	V174= (V169);
	if(type_of(V167)!=t_cons)FEwrong_type_argument(Scons,V167);
	(V167)->c.c_cdr = (V174);
	if(((V174))!=Cnil){
	goto T625;}}
	goto T621;
T625:;
	base[2]= cdr((V167));
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V167= vs_base[0];
	goto T621;
T623:;
	V166= (V169);
	base[2]= (V166);
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V167= vs_base[0];
T621:;
	V165= cdr((V165));
	goto T584;
T585:;
	base[2]= (V166);
	vs_top=(vs_base=base+2)+1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}}
	}
}
/*	function definition for INFO-SEARCH	*/

static L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_reserve(VM25);
	{object V175;
	register object V176;
	register object V177;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V175=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T638;}
	V176=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T639;}
	V177=(base[2]);
	vs_top=sup;
	goto T640;
T638:;
	V176= Cnil;
T639:;
	V177= Cnil;
T640:;
	{register object V178;
	V178= Cnil;
	if((V176)!=Cnil){
	goto T644;}
	V176= small_fixnum(0);
T644:;
T648:;
	if((V176)!=Cnil){
	goto T650;}
	goto T649;
T650:;
	{register object V179;
	register object V180;
	base[3]= (V176);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk110)();
	if(vs_base>=vs_top){vs_top=sup;goto T654;}
	V179= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T655;}
	V180= vs_base[0];
	vs_top=sup;
	goto T656;
T654:;
	V179= Cnil;
T655:;
	V180= Cnil;
T656:;
	V178= (V180);
	if((V177)==Cnil){
	goto T659;}
	if((V178)==Cnil){
	goto T659;}
	if(number_compare((V177),(V178))<0){
	goto T660;}
	goto T659;
T660:;
	V178= (V177);
T659:;
	{register object V181;
	register object V182;
	object V183;
	object V184;
	base[7]= cdr((V179));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V181= vs_base[0];
	V182= car((V179));
	V183= number_minus((V176),(V182));
	V184= make_fixnum(length((V181)));
	if(((V178))==Cnil){
	goto T673;}
	V185= number_minus((V178),(V182));
	goto T671;
T673:;
	V185= (V184);
T671:;
	{int V186= fix((VFUN_NARGS=4,(*(LnkLI92))((V175),(V181),(V183),V185)));
	if(!((/* INLINE-ARGS */V186)>=(0))){
	goto T663;}}
	V187 = make_fixnum((*(LnkLI94))(0));
	base[7]= number_plus((V182),V187);
	vs_top=(vs_base=base+7)+1;
	return;}
T663:;
	V176= (V180);}
	goto T648;
T649:;
	goto T646;
	goto T646;
T646:;
	base[3]= small_fixnum(-1);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for IDESCRIBE	*/

static L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_reserve(VM26);
	{register object V188;
	check_arg(1);
	V188=(base[0]);
	vs_top=sup;
TTL:;
	{object V189;
	base[2]= (V188);
	base[3]= symbol_value(VV[69]);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk119)();
	vs_top=sup;
	V189= vs_base[0];
	{register object V190;
	register object V191;
	V190= (V189);
	V191= car((V190));
T683:;
	if(!(endp((V190)))){
	goto T684;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
T684:;
	if(!(type_of(car((V191)))==t_cons)){
	goto T692;}
	if(!(equalp(caar((V191)),(V188)))){
	goto T688;}
	goto T690;
T692:;
	if(!(equalp(car((V191)),(V188)))){
	goto T688;}
T690:;
	base[3]= Ct;
	base[4]= VV[70];
	base[5]= (V191);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[3]= (V191);
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk102)();
	vs_top=sup;
	V192= vs_base[0];
	(void)(princ(V192,Cnil));
T688:;
	V190= cdr((V190));
	V191= car((V190));
	goto T683;}}
	}
}
/*	function definition for INFO	*/

static L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	bds_check;
	{object V193;
	object V194;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V193=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T707;}
	V194=(base[1]);
	vs_top=sup;
	goto T708;
T707:;
	V194= symbol_value(VV[69]);
T708:;
	{object V195;
	register object V196;
	object V197;
	V195= Cnil;
	bds_bind(VV[20],Cnil);
	V196= Cnil;
	V197= Cnil;
	{object V198;
	base[3]= (V193);
	base[4]= (V194);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk119)();
	vs_top=sup;
	V198= vs_base[0];
	if((symbol_value(VV[43]))==Cnil){
	goto T717;}
	base[3]= (V198);
	base[4]= (V194);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk120)();
	bds_unwind1;
	return;
T717:;
	if(((V198))==Cnil){
	goto T722;}
	{register int V199;
	V199= 0;
	{register object V200;
	register object V201;
	V200= Cnil;
	V201= (V198);
	{object V202;
	V202= Cnil;
T727:;
	if(((V201))==Cnil){
	goto T730;}
	goto T729;
T730:;
	goto T728;
T729:;
	{object V203;
	V203= car((V201));
	V200= (V203);}
	V196= Cnil;
	V197= Cnil;
	if(!(type_of((V200))==t_cons)){
	goto T740;}
	if(!(type_of(cdr((V200)))==t_cons)){
	goto T740;}
	V196= cadr((V200));
	V200= car((V200));
T740:;
	if(!(type_of((V200))==t_cons)){
	goto T739;}
	V197= car((V200));
	V200= cdr((V200));
T739:;
	base[3]= Ct;
	base[4]= VV[71];
	base[5]= make_fixnum(V199);
	base[6]= (V197);
	if(!(((V196))==((V202)))){
	goto T760;}
	base[7]= Cnil;
	goto T758;
T760:;
	V202= (V196);
	base[7]= (V202);
T758:;
	base[8]= (V200);
	vs_top=(vs_base=base+3)+6;
	Lformat();
	vs_top=sup;
	if(!((V199)<(2147483646))){
	goto T765;}
	goto T764;
T765:;
	(void)((*(LnkLI121))());
T764:;
	V199= (V199)+(1);
	V201= cdr((V201));
	goto T727;
T728:;
	goto T724;
	goto T724;}}}
T724:;
	base[3]= Ct;
	base[4]= VV[73];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;
	{object V204;
	object V205;
	register object V206;
	vs_base=vs_top;
	Lread_line();
	vs_top=sup;
	V204= vs_base[0];
	V205= small_fixnum(0);
	V206= Cnil;
T778:;
	if(!(equal((V204),VV[74]))){
	goto T781;}
	goto T780;
T781:;
	goto T779;
T780:;
	vs_base=vs_top;
	Lread_line();
	vs_top=sup;
	V204= vs_base[0];
	goto T778;
T779:;
	goto T776;
	goto T776;
T776:;
T788:;{object V207;
	base[3]= (V204);
	base[4]= Cnil;
	base[5]= Cnil;
	base[6]= VV[75];
	base[7]= (V205);
	vs_top=(vs_base=base+3)+5;
	(void) (*Lnk122)();
	if(vs_base<vs_top){
	V206= vs_base[0];
	vs_base++;
	}else{
	V206= Cnil;}
	if(vs_base<vs_top){
	V205= vs_base[0];
	}else{
	V205= Cnil;}
	vs_top=sup;
	V207= (V206);
	if(V207==Cnil)goto T791;
	goto T790;
T791:;}
	goto T789;
T790:;
	if(!(type_of((V206))==t_fixnum||
type_of((V206))==t_bignum||
type_of((V206))==t_ratio||
type_of((V206))==t_shortfloat||
type_of((V206))==t_longfloat||
type_of((V206))==t_complex)){
	goto T801;}
	V195= make_cons((V206),(V195));
	goto T799;
T801:;
	V195= (V206);
	goto T786;
T799:;
	goto T788;
T789:;
	goto T786;
	goto T786;
T786:;
	if(!(type_of((V195))==t_cons)){
	goto T809;}
	V195= nreverse((V195));
	goto T807;
T809:;
	if(!(type_of((V195))==t_symbol)){
	goto T807;}
	V208= symbol_name((V195));
	if(equal(/* INLINE-ARGS */V208,VV[76])){
	goto T815;}
	V195= Cnil;
	goto T814;
T815:;
	{register int V209;
	int V210;
	V209= 0;
	{object V211;
	V211= make_fixnum(length((V198)));{object V212;
	V212= (type_of((V211))==t_fixnum?Ct:Cnil);
	if(V212==Cnil)goto T821;
	goto T820;
T821:;}
	(void)((*(LnkLI121))());
T820:;
	V210= fix((V211));}
	{object V213;
	register object V214;
	V213= Cnil;
	V214= Cnil;
T824:;
	if((V209)>=(V210)){
	goto T827;}
	goto T826;
T827:;
	goto T825;
T826:;
	if(((V214))==Cnil){
	goto T831;}
	{object V215;
	object V216;
	V215= (V214);
	V217 = make_fixnum(V209);
	V214= make_cons(V217,Cnil);
	V216= (V214);
	if(type_of((V215))!=t_cons)FEwrong_type_argument(Scons,(V215));
	((V215))->c.c_cdr = (V216);
	goto T829;}
T831:;
	V218 = make_fixnum(V209);
	V214= make_cons(V218,Cnil);
	V213= (V214);
T829:;
	V209= (V209)+(1);
	goto T824;
T825:;
	V195= (V213);
	goto T814;
	V195= Cnil;
	goto T814;
	V195= Cnil;
	goto T814;}}
T814:;
T807:;
	if(((V195))==Cnil){
	goto T843;}
	base[3]= Ct;
	base[4]= VV[77];
	base[5]= car((VV[20]->s.s_dbind));
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
T843:;
	{object V219;
	register object V220;
	V219= Cnil;
	V220= (V195);
T850:;
	if(((V220))==Cnil){
	goto T853;}
	goto T852;
T853:;
	goto T851;
T852:;
	{object V221;
	V221= car((V220));
	V219= (V221);}
	base[3]= nth(fixint((V219)),(V198));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk102)();
	vs_top=sup;
	V222= vs_base[0];
	(void)(princ(V222,Cnil));
	V220= cdr((V220));
	goto T850;
T851:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;}}
T722:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;}}
	}
}
/*	function definition for DEFAULT-INFO-HOTLIST	*/

static L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_reserve(VM28);
	check_arg(0);
	vs_top=sup;
TTL:;
	base[1]= VV[78];
	vs_base=vs_top;
	(void) (*Lnk123)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	Lmerge_pathnames();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lnamestring();
	return;
}
/*	function definition for ADD-TO-HOTLIST	*/

static L29()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM29; VC29
	vs_reserve(VM29);
	check_arg(1);
	vs_top=sup;
TTL:;
	if(!(type_of(base[0])==t_symbol)){
	goto T867;}
	base[0]= get(base[0],VV[68],Cnil);
T867:;
	if((base[0])==Cnil){
	goto T872;}
	vs_base=vs_top;
	(void) (*Lnk124)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= VV[79];
	base[4]= VV[80];
	base[5]= VV[81];
	base[6]= VV[82];
	base[7]= VV[83];
	base[8]= VV[84];
	vs_top=(vs_base=base+2)+7;
	(void) (*Lnk89)();
	vs_top=sup;
	base[1]= vs_base[0];
	{object tag;frame_ptr fr;object p;bool active;
	frs_push(FRS_PROTECT,Cnil);
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	base[3]= base[1];
	vs_top=(vs_base=base+3)+1;
	Lfile_position();
	vs_top=sup;
	V223= vs_base[0];
	if(!(number_compare(V223,small_fixnum(10))<0)){
	goto T883;}
	(void)(princ(VV[85],base[1]));
T883:;
	base[3]= base[1];
	base[4]= VV[86];
	base[5]= caddr(cddddr(base[0]));
	base[6]= car(cddddr(base[0]));
	vs_top=(vs_base=base+3)+4;
	Lformat();
	active=FALSE;}
	base[2]=Cnil;
	while(vs_base<vs_top)
	{base[2]=MMcons(vs_top[-1],base[2]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if((base[1])==Cnil){
	goto T892;}
	base[3]= base[1];
	vs_top=(vs_base=base+3)+1;
	Lclose();
	vs_top=sup;
T892:;
	vs_base=vs_top=base+3;
	for(p= base[2];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	return;}}
T872:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
}
/*	function definition for LIST-MATCHES	*/

static L30()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_reserve(VM30);
	{object V224;
	object V225;
	if(vs_top-vs_base<1) too_few_arguments();
	V224=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V225=(base[1]);
	vs_top=sup;
	{register object V226;
	register object V227;
	V226= Cnil;
	V227= (V225);
	{object V228;
	register object V229;
	register object V230;
	V228= Cnil;
	V229= Cnil;
	V230= Cnil;
T897:;
	if(((V227))==Cnil){
	goto T900;}
	goto T899;
T900:;
	goto T898;
T899:;
	{register object V231;
	V231= car((V227));
	V226= (V231);}
	{int V232= (*(LnkLI94))(fix((V226)));
	if((/* INLINE-ARGS */V232)>=(0)){
	goto T907;}}
	V230= Cnil;
	goto T906;
T907:;
	base[2]= (V224);
	base[3]= (V226);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk96)();
	vs_top=sup;
	V230= vs_base[0];
T906:;
	if(((V229))==Cnil){
	goto T913;}
	{register object V233;
	register object V234;
	V233= (V229);
	V229= make_cons((V230),Cnil);
	V234= (V229);
	if(type_of((V233))!=t_cons)FEwrong_type_argument(Scons,(V233));
	((V233))->c.c_cdr = (V234);
	goto T911;}
T913:;
	V229= make_cons((V230),Cnil);
	V228= (V229);
T911:;
	V227= cdr((V227));
	goto T897;
T898:;
	base[2]= (V228);
	vs_top=(vs_base=base+2)+1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}}
	}
}
static LnkT124(){ call_or_link(VV[124],&Lnk124);} /* DEFAULT-INFO-HOTLIST */
static LnkT123(){ call_or_link(VV[123],&Lnk123);} /* USER-HOMEDIR-PATHNAME */
static LnkT122(){ call_or_link(VV[122],&Lnk122);} /* READ-FROM-STRING */
static object  LnkTLI121(){return call_proc0(VV[121],&LnkLI121);} /* TYPE-ERROR */
static LnkT120(){ call_or_link(VV[120],&Lnk120);} /* OFFER-CHOICES */
static LnkT119(){ call_or_link(VV[119],&Lnk119);} /* INFO-AUX */
static LnkT118(){ call_or_link(VV[118],&Lnk118);} /* ADD-FILE */
static LnkT117(){ call_or_link(VV[117],&Lnk117);} /* GET-INFO-CHOICES */
static LnkT116(){ call_or_link(VV[116],&Lnk116);} /* END-WAITING */
static LnkT115(){ call_or_link(VV[115],&Lnk115);} /* PRINT-NODE */
static LnkT114(){ call_or_link(VV[114],&Lnk114);} /* GET-NODE-INDEX */
static LnkT113(){ call_or_link(VV[113],&Lnk113);} /* SETUP-INFO */
static LnkT112(){ call_or_link(VV[112],&Lnk112);} /* WAITING */
static LnkT111(){ call_or_link(VV[111],&Lnk111);} /* INFO-GET-FILE */
static LnkT110(){ call_or_link(VV[110],&Lnk110);} /* INFO-SUBFILE */
static LnkT109(){ call_or_link(VV[109],&Lnk109);} /* WINFO */
static LnkT108(){ call_or_link(VV[108],&Lnk108);} /* TKERROR */
static LnkT107(){ call_or_link(VV[107],&Lnk107);} /* NODES-FROM-INDEX */
static LnkT106(){ call_or_link(VV[106],&Lnk106);} /* INFO-GET-TAGS */
static LnkT105(){ call_or_link(VV[105],&Lnk105);} /* FILE-SEARCH */
static LnkT104(){ call_or_link(VV[104],&Lnk104);} /* FIX-LOAD-PATH */
static LnkT103(){ call_or_link(VV[103],&Lnk103);} /* GET-INDEX-NODE */
static LnkT102(){ call_or_link(VV[102],&Lnk102);} /* SHOW-INFO */
static LnkT101(){ call_or_link(VV[101],&Lnk101);} /* GET-NODES */
static LnkT100(){ call_or_link(VV[100],&Lnk100);} /* STRING-CONCATENATE */
static LnkT99(){ call_or_link(VV[99],&Lnk99);} /* RE-QUOTE-STRING */
static object  LnkTLI98(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[98],&LnkLI98,ap);} /* POSITION */
static LnkT97(){ call_or_link(VV[97],&Lnk97);} /* INFO-ERROR */
static LnkT96(){ call_or_link(VV[96],&Lnk96);} /* GET-MATCH */
static LnkT95(){ call_or_link(VV[95],&Lnk95);} /* ATOI */
static int  LnkTLI94(va_alist)va_dcl{va_list ap;va_start(ap);return(int )call_proc(VV[94],&LnkLI94,4353,ap);} /* MATCH-BEGINNING */
static int  LnkTLI93(va_alist)va_dcl{va_list ap;va_start(ap);return(int )call_proc(VV[93],&LnkLI93,4353,ap);} /* MATCH-END */
static object  LnkTLI92(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[92],&LnkLI92,ap);} /* STRING-MATCH */
static LnkT91(){ call_or_link(VV[91],&Lnk91);} /* FILE-TO-STRING */
static LnkT90(){ call_or_link(VV[90],&Lnk90);} /* FREAD */
static LnkT89(){ call_or_link(VV[89],&Lnk89);} /* OPEN */
static object  LnkTLI88(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[88],&LnkLI88,ap);} /* VECTOR-PUSH-EXTEND */
static object  LnkTLI87(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[87],&LnkLI87,ap);} /* MAKE-ARRAY */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

