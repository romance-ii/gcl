
#include <cmpinclude.h>
#include "destructuring_bind.h"
init_destructuring_bind(){do_init(VV);}
/*	macro definition for MEMQ	*/

static L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	base[3]= (V1->c.c_car);}
	base[4]= listA(4,VV[0],base[2],base[3],VV[1]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for MAKE-CAXR	*/

static L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{object V2;
	object V3;
	V2=(base[0]);
	V3=(base[1]);
	vs_top=sup;
TTL:;
	if(!(number_compare((V2),small_fixnum(4))<0)){
	goto T2;}
	base[2]= list(2,nth(fix((V2)),VV[2]),(V3));
	vs_top=(vs_base=base+2)+1;
	return;
T2:;
	V2= number_minus((V2),small_fixnum(4));
	V3= list(2,VV[3],(V3));
	goto TTL;
	}
}
/*	function definition for MAKE-CDXR	*/

static L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{register object V4;
	object V5;
	V4=(base[0]);
	V5=(base[1]);
	vs_top=sup;
TTL:;
	if(!(number_compare(small_fixnum(0),(V4))==0)){
	goto T8;}
	base[2]= (V5);
	vs_top=(vs_base=base+2)+1;
	return;
T8:;
	if(!(number_compare((V4),small_fixnum(5))<0)){
	goto T11;}
	base[2]= list(2,nth(fix((V4)),VV[4]),(V5));
	vs_top=(vs_base=base+2)+1;
	return;
T11:;
	V4= number_minus((V4),small_fixnum(4));
	V5= list(2,VV[3],(V5));
	goto TTL;
	}
}
/*	function definition for EXTRACT-DECLARATIONS	*/

static L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{register object V6;
	object V7;
	V6=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T16;}
	V7=(base[1]);
	vs_top=sup;
	goto T17;
T16:;
	V7= Cnil;
T17:;
	{object V8;
	register object V9;
	register object V10;
	V8= Cnil;
	V9= Cnil;
	V10= Cnil;
	if(!(type_of(CMPcar((V6)))==t_string)){
	goto T19;}
	if((CMPcdr((V6)))==Cnil){
	goto T19;}
	{object V11;
	V11= CMPcar((V6));
	V6= CMPcdr((V6));
	V8= (V11);}
T19:;
T30:;
	if(((V6))!=Cnil){
	goto T32;}
	goto T28;
T32:;
	V10= CMPcar((V6));
T40:;
	if(type_of((V10))==t_cons||((V10))==Cnil){
	goto T43;}
	goto T28;
T43:;
	if(!((CMPcar((V10)))==(VV[5]))){
	goto T46;}
	goto T38;
T46:;
	{register object V12;
	object V13;
	base[2]= (V10);
	base[3]= (V7);
	vs_top=(vs_base=base+2)+2;
	Lmacroexpand_1();
	if(vs_base>=vs_top){vs_top=sup;goto T51;}
	V12= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T52;}
	V13= vs_base[0];
	vs_top=sup;
	goto T53;
T51:;
	V12= Cnil;
T52:;
	V13= Cnil;
T53:;
	if(!(((V12))==((V10)))){
	goto T54;}
	if(((V13))==Cnil){
	goto T55;}
T54:;
	V10= (V12);
	goto T41;
T55:;
	goto T28;}
T41:;
	goto T40;
T38:;
	{object V14;
	V14= CMPcar((V6));
	V6= CMPcdr((V6));}
	{register object V15;
	register object V16;
	V15= CMPcdr((V10));
	V16= CMPcar((V15));
T68:;
	if(!(((V15))==Cnil)){
	goto T69;}
	goto T31;
T69:;
	V9= make_cons((V16),(V9));
	V15= CMPcdr((V15));
	V16= CMPcar((V15));
	goto T68;}
T31:;
	goto T30;
T28:;
	base[2]= (V8);
	if((V9)==Cnil){
	base[3]= Cnil;
	goto T82;}
	V17= nreverse((V9));
	V18= make_cons(VV[5],/* INLINE-ARGS */V17);
	base[3]= make_cons(/* INLINE-ARGS */V18,Cnil);
T82:;
	base[4]= (V6);
	vs_top=(vs_base=base+2)+3;
	return;}
	}
}
/*	function definition for DESTRUCTURE	*/

static L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	bds_check;
	{object V19;
	object V20;
	V19=(base[0]);
	V20=(base[1]);
	vs_top=sup;
TTL:;
	{object V21;
	bds_bind(VV[6],Cnil);
	V21= Cnil;
	(VV[6]->s.s_dbind)= VV[7];
	V22= list(3,VV[8],VV[9],(V20));
	V21= make_cons(/* INLINE-ARGS */V22,Cnil);
	V20= VV[9];
	base[4]= (V19);
	base[5]= (V20);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk19)();
	vs_top=sup;
	V23= vs_base[0];
	V24= nreverse(V23);
	base[3]= nconc((V21),/* INLINE-ARGS */V24);
	base[5]= Cnil;
	base[6]= (VV[6]->s.s_dbind);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk20)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	bds_unwind1;
	return;}
	}
}
/*	function definition for DESTRUCTURE-INTERNAL	*/

static L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V25;
	register object V26;
	V25=(base[0]);
	V26=(base[1]);
	vs_top=sup;
TTL:;
	{object V27;
	register object V28;
	register object V29;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V27= vs_base[0];
	base[2]= small_fixnum(0);
	V28= Cnil;
	V29= Cnil;
	{register object V30;
	V30= (V25);
T100:;
	if(((V30))!=Cnil){
	goto T101;}
	goto T98;
T101:;
	V28= CMPcar((V30));
	if(!(type_of((V28))==t_symbol)){
	goto T107;}
	{register object x= (V28),V31= VV[10];
	while(V31!=Cnil)
	if(x==(V31->c.c_car)){
	goto T110;
	}else V31=V31->c.c_cdr;}
	(VV[6]->s.s_dbind)= make_cons((V28),(VV[6]->s.s_dbind));
T110:;
	if((CMPcdr((V30)))!=Cnil){
	goto T115;}
	base[3]= (V28);
	base[4]= (V26);
	base[5]= Cnil;
	vs_top=(vs_base=base+3)+3;
	L7(base);
	vs_top=sup;
	V32= vs_base[0];
	V29= make_cons(V32,(V29));
	goto T105;
T115:;
	if(!(type_of(CMPcdr((V30)))==t_symbol)){
	goto T123;}
	base[3]= (V28);
	base[4]= (V26);
	base[5]= CMPcdr((V30));
	vs_top=(vs_base=base+3)+3;
	L7(base);
	vs_top=sup;
	V33= vs_base[0];
	V29= make_cons(V33,(V29));
	(VV[6]->s.s_dbind)= make_cons(CMPcdr((V30)),(VV[6]->s.s_dbind));
	goto T98;
T123:;
	{register object x= (V28),V34= VV[11];
	while(V34!=Cnil)
	if(x==(V34->c.c_car)){
	goto T135;
	}else V34=V34->c.c_cdr;
	goto T134;}
T135:;
	base[2]= number_plus(base[2],small_fixnum(1));
	goto T105;
T134:;
	{register object x= CMPcadr((V30)),V35= VV[12];
	while(V35!=Cnil)
	if(x==(V35->c.c_car)){
	goto T139;
	}else V35=V35->c.c_cdr;
	goto T138;}
T139:;
	base[3]= (V28);
	base[4]= (V26);
	base[5]= Cnil;
	vs_top=(vs_base=base+3)+3;
	L7(base);
	vs_top=sup;
	V36= vs_base[0];
	V29= make_cons(V36,(V29));
	base[2]= number_plus(base[2],small_fixnum(1));
	goto T105;
T138:;
	base[3]= (V28);
	base[4]= (V26);
	base[5]= (V26);
	vs_top=(vs_base=base+3)+3;
	L7(base);
	vs_top=sup;
	V37= vs_base[0];
	V29= make_cons(V37,(V29));
	goto T105;
T107:;
	V38= list(2,(V27),Cnil);
	V39= make_cons(/* INLINE-ARGS */V38,Cnil);
	base[3]= (V27);
	base[4]= (V26);
	if(!(type_of(CMPcdr((V30)))==t_symbol)){
	goto T159;}
	base[5]= CMPcdr((V30));
	goto T157;
T159:;
	base[5]= (V26);
T157:;
	vs_top=(vs_base=base+3)+3;
	L7(base);
	vs_top=sup;
	V40= vs_base[0];
	base[3]= CMPcar((V30));
	base[4]= (V27);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk19)();
	vs_top=sup;
	V41= vs_base[0];
	V42= listA(4,VV[13],/* INLINE-ARGS */V39,V40,nreverse(V41));
	V29= make_cons(/* INLINE-ARGS */V42,(V29));
	if(!(type_of(CMPcdr((V30)))==t_symbol)){
	goto T105;}
	(VV[6]->s.s_dbind)= make_cons(CMPcdr((V30)),(VV[6]->s.s_dbind));
	goto T98;
T105:;
	V30= CMPcdr((V30));
	goto T100;}
T98:;
	base[3]= (V29);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	macro definition for DESTRUCTURING-BIND	*/

static L8()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	vs_top=sup;
	{object V43=base[0]->c.c_cdr;
	base[2]= (V43->c.c_car);
	V43=V43->c.c_cdr;
	base[3]= (V43->c.c_car);
	V43=V43->c.c_cdr;
	base[4]= V43;}
	{object V44;
	object V45;
	object V46;
	base[5]= base[4];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk21)();
	if(vs_base>=vs_top){vs_top=sup;goto T173;}
	V44= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T174;}
	V45= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T175;}
	V46= vs_base[0];
	vs_top=sup;
	goto T176;
T173:;
	V44= Cnil;
T174:;
	V45= Cnil;
T175:;
	V46= Cnil;
T176:;
	{object V47;
	object V48;
	base[5]= base[2];
	base[6]= base[3];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk22)();
	if(vs_base>=vs_top){vs_top=sup;goto T180;}
	V47= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T181;}
	V48= vs_base[0];
	vs_top=sup;
	goto T182;
T180:;
	V47= Cnil;
T181:;
	V48= Cnil;
T182:;
	base[5]= (V45);
	base[6]= (V47);
	base[7]= make_cons(VV[18],(V46));
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V49= vs_base[0];
	base[5]= listA(3,VV[13],(V48),V49);
	vs_top=(vs_base=base+5)+1;
	return;}}
}
/*	local function MAKE-POP	*/

static L7(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	{object V50;
	object V51;
	object V52;
	V50=(base[0]);
	V51=(base[1]);
	V52=(base[2]);
	vs_top=sup;
TTL:;
	{object V53;
	if(!(number_compare(small_fixnum(0),base0[2])==0)){
	goto T189;}
	if((V50)==Cnil){
	V54= Cnil;
	goto T191;}
	V54= list(3,VV[8],(V50),list(2,VV[15],(V51)));
T191:;
	if((V52)==Cnil){
	V55= Cnil;
	goto T192;}
	V55= list(3,VV[8],(V52),list(2,VV[16],(V51)));
T192:;
	V53= list(3,VV[14],V54,V55);
	goto T187;
T189:;
	if(((V52))!=Cnil){
	goto T194;}
	if((V50)==Cnil){
	V53= Cnil;
	goto T187;}
	base[3]= base0[2];
	base[4]= (V51);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk23)();
	vs_top=sup;
	V56= vs_base[0];
	V53= list(3,VV[8],(V50),V56);
	goto T187;
T194:;
	base[3]= base0[2];
	base[4]= (V51);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk24)();
	vs_top=sup;
	V57= vs_base[0];
	V58= list(3,VV[8],(V52),V57);
	if((V50)==Cnil){
	V59= Cnil;
	goto T202;}
	V59= list(3,VV[8],(V50),list(2,VV[17],(V52)));
T202:;
	V53= list(3,VV[14],/* INLINE-ARGS */V58,V59);
T187:;
	base0[2]= small_fixnum(0);
	base[3]= (V53);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
static LnkT24(){ call_or_link(VV[24],&Lnk24);} /* MAKE-CDXR */
static LnkT23(){ call_or_link(VV[23],&Lnk23);} /* MAKE-CAXR */
static LnkT22(){ call_or_link(VV[22],&Lnk22);} /* DESTRUCTURE */
static LnkT21(){ call_or_link(VV[21],&Lnk21);} /* EXTRACT-DECLARATIONS */
static LnkT20(){ call_or_link(VV[20],&Lnk20);} /* DELETE */
static LnkT19(){ call_or_link(VV[19],&Lnk19);} /* DESTRUCTURE-INTERNAL */
