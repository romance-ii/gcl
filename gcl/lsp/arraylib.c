
#include "cmpinclude.h"
#include "arraylib.h"
init_arraylib(){do_init(VV);}
/*	function definition for BEST-ARRAY-ELEMENT-TYPE	*/

static L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	{register object V1;
	check_arg(1);
	V1=(base[0]);
	vs_top=sup;
TTL:;
	if(eql(Ct,(V1))){
	goto T1;}
	if(((V1))!=Cnil){
	goto T2;}
T1:;
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
T2:;
	{register object x= (V1),V2= VV[0];
	while(!endp(V2))
	if(x==(V2->c.c_car)){
	goto T8;
	}else V2=V2->c.c_cdr;
	goto T7;}
T8:;
	base[1]= (V1);
	vs_top=(vs_base=base+1)+1;
	return;
T7:;
	base[1]= (V1);
	base[2]= VV[1];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk18)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T10;}
	{register object V3;
	register object V4;
	V3= VV[2];
	V4= car((V3));
T17:;
	if(!(endp((V3)))){
	goto T18;}
	base[2]= VV[1];
	vs_top=(vs_base=base+2)+1;
	return;
T18:;
	base[2]= (V1);
	base[3]= (V4);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk18)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T22;}
	base[2]= (V4);
	vs_top=(vs_base=base+2)+1;
	return;
T22:;
	V3= cdr((V3));
	V4= car((V3));
	goto T17;}
T10:;
	if(!(eql((V1),VV[3]))){
	goto T33;}
	base[1]= VV[4];
	vs_top=(vs_base=base+1)+1;
	return;
T33:;{object V5;
	{register object V6;
	register object V7;
	V6= VV[5];
	V7= car((V6));
T40:;
	if(!(endp((V6)))){
	goto T41;}
	V5= Cnil;
	goto T36;
T41:;
	base[2]= (V1);
	base[3]= (V7);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk18)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T45;}
	V5= (V7);
	goto T36;
T45:;
	V6= cdr((V6));
	V7= car((V6));
	goto T40;}
T36:;
	if(V5==Cnil)goto T35;
	base[1]= V5;
	vs_top=(vs_base=base+1)+1;
	return;
T35:;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for MAKE-ARRAY	*/

static L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	{register object V8;
	object V9;
	object V10;
	register object V11;
	object V12;
	object V13;
	object V14;
	object V15;
	object V16;
	object V17;
	if(vs_top-vs_base<1) too_few_arguments();
	parse_key(vs_base+1,FALSE,FALSE,8,VV[8],VV[7],VV[9],VV[15],VV[11],VV[19],VV[20],VV[14]);
	V8=(base[0]);
	vs_top=sup;
	if(base[9]==Cnil){
	V9= Ct;
	}else{
	V9=(base[1]);}
	V10=(base[2]);
	V11=(base[3]);
	V12=(base[11]);
	V13=(base[4]);
	V14=(base[5]);
	V15=(base[6]);
	if(base[15]==Cnil){
	V16= small_fixnum(0);
	}else{
	V16=(base[7]);}
	V17=(base[8]);
	if(!(type_of((V8))==t_fixnum||type_of((V8))==t_bignum)){
	goto T57;}
	V8= make_cons((V8),Cnil);
T57:;
	base[17]= (V9);
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk21)();
	vs_top=sup;
	V9= vs_base[0];
	if(!((length((V8)))==(1))){
	goto T65;}
	{register object V18;
	base[17]= (V9);
	base[18]= car((V8));
	base[19]= (V13);
	base[20]= (V14);
	base[21]= (V15);
	base[22]= (V16);
	base[23]= (V17);
	base[24]= (V10);
	vs_top=(vs_base=base+17)+8;
	siLmake_vector();
	vs_top=sup;
	V18= vs_base[0];
	if(((V12))==Cnil){
	goto T76;}
	{int V19;
	register int V20;
	V19= fix(car((V8)));
	V20= 0;
T82:;
	if(!((V20)>=(V19))){
	goto T83;}
	goto T76;
T83:;
	V21= elt((V11),V20);
	(void)(aset1((V18),V20,/* INLINE-ARGS */V21));
	V20= (V20)+1;
	goto T82;}
T76:;
	base[17]= (V18);
	vs_top=(vs_base=base+17)+1;
	return;}
T65:;
	{register object V22;
	base[18]= (V9);
	vs_top=(vs_base=base+18)+1;
	(void) (*Lnk22)();
	vs_top=sup;
	base[17]= vs_base[0];
	base[18]= (V17);
	base[19]= (V10);
	base[20]= (V15);
	base[21]= (V16);
	base[22]= (V8);
	vs_top=(vs_base=base+17)+6;
	(void) (*Lnk23)();
	vs_top=sup;
	V22= vs_base[0];
	if(((V14))==Cnil){
	goto T99;}
	base[17]= VV[6];
	vs_top=(vs_base=base+17)+1;
	Lerror();
	vs_top=sup;
T99:;
	{register object x= small_fixnum(0),V23= (V8);
	while(!endp(V23))
	if(eql(x,V23->c.c_car)){
	goto T103;
	}else V23=V23->c.c_cdr;}
	if(((V12))==Cnil){
	goto T103;}
	{register object V24;
	base[17]= make_fixnum(length((V8)));
	base[18]= VV[7];
	base[19]= small_fixnum(0);
	vs_top=(vs_base=base+17)+3;
	Lmake_list();
	vs_top=sup;
	V24= vs_base[0];
T113:;
	base[17]= (V22);
	base[19]= (V11);
	base[20]= (V24);
	vs_top=(vs_base=base+19)+2;
	(void) (*Lnk24)();
	vs_top=sup;
	base[18]= vs_base[0];
	base[19]= (V24);
	vs_top=(vs_base=base+17)+3;
	(void) (*Lnk25)();
	vs_top=sup;
	base[17]= (V24);
	base[18]= (V8);
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk26)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T122;}
	goto T103;
T122:;
	goto T113;}
T103:;
	base[17]= (V22);
	vs_top=(vs_base=base+17)+1;
	return;}
	}
}
/*	function definition for INCREMENT-CURSOR	*/

static L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	{register object V25;
	object V26;
	check_arg(2);
	V25=(base[0]);
	V26=(base[1]);
	vs_top=sup;
TTL:;
	if(((V25))!=Cnil){
	goto T130;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
T130:;
	{object V27;
	base[2]= cdr((V25));
	base[3]= cdr((V26));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk26)();
	vs_top=sup;
	V27= vs_base[0];
	if(((V27))==Cnil){
	goto T136;}
	if(!(((fix(car((V25))))+1)>=(fix(car((V26)))))){
	goto T139;}
	if(type_of((V25))!=t_cons)FEwrong_type_argument(Scons,(V25));
	((V25))->c.c_car = small_fixnum(0);
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
T139:;
	V28 = make_fixnum((fix(car((V25))))+1);
	if(type_of((V25))!=t_cons)FEwrong_type_argument(Scons,(V25));
	((V25))->c.c_car = V28;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T136:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for SEQUENCE-CURSOR	*/

static L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	{object V29;
	object V30;
	check_arg(2);
	V29=(base[0]);
	V30=(base[1]);
	vs_top=sup;
TTL:;
	if(((V30))!=Cnil){
	goto T144;}
	base[2]= (V29);
	vs_top=(vs_base=base+2)+1;
	return;
T144:;
	V29= elt((V29),fix(car((V30))));
	V30= cdr((V30));
	goto TTL;
	}
}
/*	function definition for VECTOR	*/

static L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	{object V31;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=ON_STACK_CONS(p[-1],p[0]);}
	V31=(base[0]);
	vs_top=sup;
	{object V32;
	V33 = make_fixnum(length((V31)));
	V32= make_cons(V33,Cnil);
	base[2]= (V32);
	base[3]= VV[8];
	base[4]= Ct;
	base[5]= VV[9];
	base[6]= (V31);
	vs_top=(vs_base=base+2)+5;
	(void) (*Lnk27)();
	return;}
	}
}
/*	function definition for ARRAY-DIMENSIONS	*/

static L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	{register object V34;
	check_arg(1);
	V34=(base[0]);
	vs_top=sup;
TTL:;
	{register object V35;
	register object V36;
	base[1]= (V34);
	vs_top=(vs_base=base+1)+1;
	Larray_rank();
	vs_top=sup;
	V35= vs_base[0];
	V36= Cnil;
T158:;
	if(!(number_compare((V35),small_fixnum(0))==0)){
	goto T159;}
	base[1]= (V36);
	vs_top=(vs_base=base+1)+1;
	return;
T159:;
	V35= one_minus((V35));
	base[1]= (V34);
	base[2]= (V35);
	vs_top=(vs_base=base+1)+2;
	Larray_dimension();
	vs_top=sup;
	V37= vs_base[0];
	V36= make_cons(V37,(V36));
	goto T158;}
	}
}
/*	function definition for ARRAY-IN-BOUNDS-P	*/

static L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	{register object V38;
	object V39;
	if(vs_top-vs_base<1) too_few_arguments();
	V38=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=ON_STACK_CONS(p[-1],p[0]);}
	V39=(base[1]);
	vs_top=sup;
	{register object V40;
	base[3]= (V38);
	vs_top=(vs_base=base+3)+1;
	Larray_rank();
	vs_top=sup;
	V40= vs_base[0];
	V41 = make_fixnum(length((V39)));
	if(!(number_compare((V40),V41)!=0)){
	goto T174;}
	base[3]= VV[10];
	base[4]= (V40);
	base[5]= make_fixnum(length((V39)));
	vs_top=(vs_base=base+3)+3;
	Lerror();
	vs_top=sup;
T174:;
	{register object V42;
	register object V43;
	V42= small_fixnum(0);
	V43= (V39);
T181:;
	if(!(number_compare((V42),(V40))>=0)){
	goto T182;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
T182:;
	if(number_compare(car((V43)),small_fixnum(0))<0){
	goto T187;}
	V44= car((V43));
	base[3]= (V38);
	base[4]= (V42);
	vs_top=(vs_base=base+3)+2;
	Larray_dimension();
	vs_top=sup;
	V45= vs_base[0];
	if(!(number_compare(/* INLINE-ARGS */V44,V45)>=0)){
	goto T186;}
T187:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
T186:;
	V42= one_plus((V42));
	V43= cdr((V43));
	goto T181;}}
	}
}
/*	function definition for ARRAY-ROW-MAJOR-INDEX	*/

static L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	{register object V46;
	object V47;
	if(vs_top-vs_base<1) too_few_arguments();
	V46=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=ON_STACK_CONS(p[-1],p[0]);}
	V47=(base[1]);
	vs_top=sup;
	{register object V48;
	register object V49;
	register object V50;
	V48= small_fixnum(0);
	V49= small_fixnum(0);
	V50= (V47);
T199:;
	if(((V50))!=Cnil){
	goto T200;}
	base[2]= (V49);
	vs_top=(vs_base=base+2)+1;
	return;
T200:;
	{object V51;
	V51= one_plus((V48));
	base[2]= (V46);
	base[3]= (V48);
	vs_top=(vs_base=base+2)+2;
	Larray_dimension();
	vs_top=sup;
	V52= vs_base[0];
	V53= number_times((V49),V52);
	V49= number_plus(/* INLINE-ARGS */V53,car((V50)));
	V50= cdr((V50));
	V48= (V51);}
	goto T199;}
	}
}
/*	function definition for BIT	*/

static L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	{object V54;
	object V55;
	if(vs_top-vs_base<1) too_few_arguments();
	V54=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=ON_STACK_CONS(p[-1],p[0]);}
	V55=(base[1]);
	vs_top=sup;
	base[2]= (V54);
	{object V56;
	V56= (V55);
	 vs_top=base+3;
	 while(!endp(V56))
	 {vs_push(car(V56));V56=cdr(V56);}
	vs_base=base+2;}
	Laref();
	return;
	}
}
/*	function definition for SBIT	*/

static L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	{object V57;
	object V58;
	if(vs_top-vs_base<1) too_few_arguments();
	V57=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=ON_STACK_CONS(p[-1],p[0]);}
	V58=(base[1]);
	vs_top=sup;
	base[2]= (V57);
	{object V59;
	V59= (V58);
	 vs_top=base+3;
	 while(!endp(V59))
	 {vs_push(car(V59));V59=cdr(V59);}
	vs_base=base+2;}
	Laref();
	return;
	}
}
/*	function definition for BIT-AND	*/

static L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	{object V60;
	object V61;
	object V62;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V60=(base[0]);
	V61=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T216;}
	V62=(base[2]);
	vs_top=sup;
	goto T217;
T216:;
	V62= Cnil;
T217:;
	base[3]= small_fixnum(1);
	base[4]= (V60);
	base[5]= (V61);
	base[6]= (V62);
	vs_top=(vs_base=base+3)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for BIT-IOR	*/

static L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	{object V63;
	object V64;
	object V65;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V63=(base[0]);
	V64=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T223;}
	V65=(base[2]);
	vs_top=sup;
	goto T224;
T223:;
	V65= Cnil;
T224:;
	base[3]= small_fixnum(7);
	base[4]= (V63);
	base[5]= (V64);
	base[6]= (V65);
	vs_top=(vs_base=base+3)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for BIT-XOR	*/

static L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	{object V66;
	object V67;
	object V68;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V66=(base[0]);
	V67=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T230;}
	V68=(base[2]);
	vs_top=sup;
	goto T231;
T230:;
	V68= Cnil;
T231:;
	base[3]= small_fixnum(6);
	base[4]= (V66);
	base[5]= (V67);
	base[6]= (V68);
	vs_top=(vs_base=base+3)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for BIT-EQV	*/

static L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	{object V69;
	object V70;
	object V71;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V69=(base[0]);
	V70=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T237;}
	V71=(base[2]);
	vs_top=sup;
	goto T238;
T237:;
	V71= Cnil;
T238:;
	base[3]= small_fixnum(9);
	base[4]= (V69);
	base[5]= (V70);
	base[6]= (V71);
	vs_top=(vs_base=base+3)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for BIT-NAND	*/

static L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	{object V72;
	object V73;
	object V74;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V72=(base[0]);
	V73=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T244;}
	V74=(base[2]);
	vs_top=sup;
	goto T245;
T244:;
	V74= Cnil;
T245:;
	base[3]= small_fixnum(14);
	base[4]= (V72);
	base[5]= (V73);
	base[6]= (V74);
	vs_top=(vs_base=base+3)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for BIT-NOR	*/

static L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	{object V75;
	object V76;
	object V77;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V75=(base[0]);
	V76=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T251;}
	V77=(base[2]);
	vs_top=sup;
	goto T252;
T251:;
	V77= Cnil;
T252:;
	base[3]= small_fixnum(8);
	base[4]= (V75);
	base[5]= (V76);
	base[6]= (V77);
	vs_top=(vs_base=base+3)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for BIT-ANDC1	*/

static L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{object V78;
	object V79;
	object V80;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V78=(base[0]);
	V79=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T258;}
	V80=(base[2]);
	vs_top=sup;
	goto T259;
T258:;
	V80= Cnil;
T259:;
	base[3]= small_fixnum(4);
	base[4]= (V78);
	base[5]= (V79);
	base[6]= (V80);
	vs_top=(vs_base=base+3)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for BIT-ANDC2	*/

static L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	{object V81;
	object V82;
	object V83;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V81=(base[0]);
	V82=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T265;}
	V83=(base[2]);
	vs_top=sup;
	goto T266;
T265:;
	V83= Cnil;
T266:;
	base[3]= small_fixnum(2);
	base[4]= (V81);
	base[5]= (V82);
	base[6]= (V83);
	vs_top=(vs_base=base+3)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for BIT-ORC1	*/

static L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	{object V84;
	object V85;
	object V86;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V84=(base[0]);
	V85=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T272;}
	V86=(base[2]);
	vs_top=sup;
	goto T273;
T272:;
	V86= Cnil;
T273:;
	base[3]= small_fixnum(13);
	base[4]= (V84);
	base[5]= (V85);
	base[6]= (V86);
	vs_top=(vs_base=base+3)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for BIT-ORC2	*/

static L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{object V87;
	object V88;
	object V89;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V87=(base[0]);
	V88=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T279;}
	V89=(base[2]);
	vs_top=sup;
	goto T280;
T279:;
	V89= Cnil;
T280:;
	base[3]= small_fixnum(11);
	base[4]= (V87);
	base[5]= (V88);
	base[6]= (V89);
	vs_top=(vs_base=base+3)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for BIT-NOT	*/

static L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	{object V90;
	object V91;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V90=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T286;}
	V91=(base[1]);
	vs_top=sup;
	goto T287;
T286:;
	V91= Cnil;
T287:;
	base[2]= small_fixnum(12);
	base[3]= (V90);
	base[4]= (V90);
	base[5]= (V91);
	vs_top=(vs_base=base+2)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for VECTOR-PUSH	*/

static L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	{object V92;
	register object V93;
	check_arg(2);
	V92=(base[0]);
	V93=(base[1]);
	vs_top=sup;
TTL:;
	{register int V94;
	base[2]= (V93);
	vs_top=(vs_base=base+2)+1;
	Lfill_pointer();
	vs_top=sup;
	V94= fix(vs_base[0]);
	base[2]= (V93);
	base[3]= small_fixnum(0);
	vs_top=(vs_base=base+2)+2;
	Larray_dimension();
	vs_top=sup;
	V95= vs_base[0];
	if(!((V94)<(fix(V95)))){
	goto T296;}
	(void)(aset1((V93),V94,(V92)));
	base[2]= (V93);
	base[3]= make_fixnum((V94)+1);
	vs_top=(vs_base=base+2)+2;
	siLfill_pointer_set();
	vs_top=sup;
	base[2]= make_fixnum(V94);
	vs_top=(vs_base=base+2)+1;
	return;
T296:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for VECTOR-PUSH-EXTEND	*/

static L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	{object V96;
	register object V97;
	object V98;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V96=(base[0]);
	V97=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T305;}
	V98=(base[2]);
	vs_top=sup;
	goto T306;
T305:;
	V98= Cnil;
T306:;
	{register int V99;
	base[3]= (V97);
	vs_top=(vs_base=base+3)+1;
	Lfill_pointer();
	vs_top=sup;
	V99= fix(vs_base[0]);
	base[3]= (V97);
	base[4]= small_fixnum(0);
	vs_top=(vs_base=base+3)+2;
	Larray_dimension();
	vs_top=sup;
	V100= vs_base[0];
	if(!((V99)<(fix(V100)))){
	goto T311;}
	(void)(aset1((V97),V99,(V96)));
	base[3]= (V97);
	base[4]= make_fixnum((V99)+1);
	vs_top=(vs_base=base+3)+2;
	siLfill_pointer_set();
	vs_top=sup;
	base[3]= make_fixnum(V99);
	vs_top=(vs_base=base+3)+1;
	return;
T311:;
	base[3]= (V97);
	base[5]= (V97);
	base[6]= small_fixnum(0);
	vs_top=(vs_base=base+5)+2;
	Larray_dimension();
	vs_top=sup;
	V101= vs_base[0];
	if((V98)!=Cnil){
	V102= (V98);
	goto T326;}
	base[5]= (V97);
	base[6]= small_fixnum(0);
	vs_top=(vs_base=base+5)+2;
	Larray_dimension();
	vs_top=sup;
	V103= vs_base[0];
	if(!((fix(V103))>(0))){
	goto T328;}
	base[5]= (V97);
	base[6]= small_fixnum(0);
	vs_top=(vs_base=base+5)+2;
	Larray_dimension();
	vs_top=sup;
	V102= vs_base[0];
	goto T326;
T328:;
	V102= small_fixnum(5);
T326:;
	V104= number_plus(V101,V102);
	base[4]= make_cons(/* INLINE-ARGS */V104,Cnil);
	base[5]= VV[8];
	base[7]= (V97);
	vs_top=(vs_base=base+7)+1;
	Larray_element_type();
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= VV[11];
	base[8]= make_fixnum(V99);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk28)();
	vs_top=sup;
	(void)(aset1((V97),V99,(V96)));
	base[3]= (V97);
	base[4]= make_fixnum((V99)+1);
	vs_top=(vs_base=base+3)+2;
	siLfill_pointer_set();
	vs_top=sup;
	base[3]= make_fixnum(V99);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for VECTOR-POP	*/

static L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	{register object V105;
	check_arg(1);
	V105=(base[0]);
	vs_top=sup;
TTL:;
	{int V106;
	base[1]= (V105);
	vs_top=(vs_base=base+1)+1;
	Lfill_pointer();
	vs_top=sup;
	V106= fix(vs_base[0]);
	if(!((V106)==(0))){
	goto T346;}
	base[1]= VV[12];
	base[2]= (V105);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
T346:;
	base[1]= (V105);
	base[2]= make_fixnum((V106)-1);
	vs_top=(vs_base=base+1)+2;
	siLfill_pointer_set();
	vs_top=sup;
	base[1]= aref1((V105),(V106)-1);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for ADJUST-ARRAY	*/

static L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_reserve(VM25);
	{register object V107;
	register object V108;
	register object V109;
	object V110;
	object V111;
	object V112;
	object V113;
	object V114;
	object V115;
	object V116;
	if(vs_top-vs_base<2) too_few_arguments();
	parse_key(vs_base+2,TRUE,FALSE,7,VV[8],VV[7],VV[9],VV[11],VV[19],VV[20],VV[14]);
	V107=(base[0]);
	V108=(base[1]);
	vs_top=sup;
	V109=(base[2]);
	V110=(base[3]);
	V111=(base[4]);
	V112=(base[5]);
	V113=(base[6]);
	V114=(base[7]);
	V115=(base[8]);
	V116=(base[9]);
	{register object V117;
	V117= Cnil;
	if(!(type_of((V108))==t_fixnum||type_of((V108))==t_bignum)){
	goto T355;}
	V108= make_cons((V108),Cnil);
T355:;
	{register object x= VV[11],V118= (V109);
	while(!endp(V118))
	if(eql(x,V118->c.c_car)){
	V117= V118;
	goto T363;
	}else V118=V118->c.c_cdr;
	V117= Cnil;}
T363:;
	if(((V117))==Cnil){
	goto T361;}
	base[17]= (V107);
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk29)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T359;}
	base[17]= VV[13];
	vs_top=(vs_base=base+17)+1;
	Lerror();
	vs_top=sup;
	goto T359;
T361:;
	base[17]= (V107);
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk29)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T359;}
	base[17]= (V107);
	vs_top=(vs_base=base+17)+1;
	Lfill_pointer();
	vs_top=sup;
	V119= vs_base[0];
	V109= ON_STACK_CONS(V119,(V109));
	V109= ON_STACK_CONS(VV[11],(V109));
T359:;
	base[17]= (V107);
	vs_top=(vs_base=base+17)+1;
	Larray_element_type();
	vs_top=sup;
	V110= vs_base[0];
	if(((V110))==(Ct)){
	goto T379;}
	V109= ON_STACK_CONS((V110),(V109));
	V109= ON_STACK_CONS(VV[8],(V109));
T379:;
	{register object x= VV[14],V120= (V109);
	while(!endp(V120))
	if(eql(x,V120->c.c_car)){
	goto T385;
	}else V120=V120->c.c_cdr;}
	base[17]= (V107);
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk30)();
	vs_top=sup;
	V121= vs_base[0];
	V109= ON_STACK_CONS(V121,(V109));
	V109= ON_STACK_CONS(VV[14],(V109));
T385:;
	{register object V122;
	base[17]= (V108);
	base[18]= VV[15];
	base[19]= Ct;
	{object V123;
	V123= (V109);
	 vs_top=base+20;
	 while(!endp(V123))
	 {vs_push(car(V123));V123=cdr(V123);}
	vs_base=base+17;}
	(void) (*Lnk27)();
	vs_top=sup;
	V122= vs_base[0];
	if((cdr((V108)))==Cnil){
	goto T399;}
	V124= cdr((V108));
	base[17]= (V107);
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk31)();
	vs_top=sup;
	V125= vs_base[0];
	if(!(equal(/* INLINE-ARGS */V124,cdr(V125)))){
	goto T400;}
	if(!(((V110))==(VV[16]))){
	goto T399;}
	base[17]= (V108);
	vs_top=(vs_base=base+17)+1;
	Llast();
	vs_top=sup;
	V126= vs_base[0];
	{int V127= fix(car(V126));
	if(!((0)==((V127>=0&&(8)>0?(V127)%(8):imod(V127,8))))){
	goto T400;}}
T399:;
	base[17]= (V107);
	base[18]= (V122);
	base[19]= small_fixnum(0);
	base[20]= small_fixnum(0);
	base[22]= (V122);
	vs_top=(vs_base=base+22)+1;
	(void) (*Lnk32)();
	vs_top=sup;
	V128= vs_base[0];
	base[22]= (V107);
	vs_top=(vs_base=base+22)+1;
	(void) (*Lnk32)();
	vs_top=sup;
	V129= vs_base[0];
	base[21]= (number_compare(V128,V129)<=0?(V128):V129);
	vs_top=(vs_base=base+17)+5;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T398;
T400:;
	{register object V130;
	base[17]= make_fixnum(length((V108)));
	base[18]= VV[7];
	base[19]= small_fixnum(0);
	vs_top=(vs_base=base+17)+3;
	Lmake_list();
	vs_top=sup;
	V130= vs_base[0];
T426:;
	base[17]= (V107);
	{object V131;
	V131= (V130);
	 vs_top=base+18;
	 while(!endp(V131))
	 {vs_push(car(V131));V131=cdr(V131);}
	vs_base=base+17;}
	(void) (*Lnk34)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T429;}
	base[17]= (V122);
	base[19]= (V107);
	{object V132;
	V132= (V130);
	 vs_top=base+20;
	 while(!endp(V132))
	 {vs_push(car(V132));V132=cdr(V132);}
	vs_base=base+19;}
	Laref();
	vs_top=sup;
	base[18]= vs_base[0];
	base[19]= (V130);
	vs_top=(vs_base=base+17)+3;
	(void) (*Lnk25)();
	vs_top=sup;
T429:;
	base[17]= (V130);
	base[18]= (V108);
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk26)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T439;}
	goto T398;
T439:;
	goto T426;}
T398:;
	base[17]= (V107);
	base[18]= (V122);
	vs_top=(vs_base=base+17)+2;
	siLreplace_array();
	vs_top=sup;
	V117= cadr((V117));
	if(((V117))==Cnil){
	goto T451;}
	if(!(eql(Ct,(V117)))){
	goto T455;}
	base[17]= (V107);
	base[19]= (V107);
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk32)();
	vs_top=sup;
	base[18]= vs_base[0];
	vs_top=(vs_base=base+17)+2;
	siLfill_pointer_set();
	vs_top=sup;
	goto T451;
T455:;
	if(!(type_of((V117))==t_fixnum)){
	goto T461;}
	base[17]= (V107);
	base[18]= (V117);
	vs_top=(vs_base=base+17)+2;
	siLfill_pointer_set();
	vs_top=sup;
	goto T451;
T461:;
	base[17]= VV[17];
	base[18]= (V117);
	vs_top=(vs_base=base+17)+2;
	Lerror();
	vs_top=sup;
T451:;
	base[17]= (V107);
	vs_top=(vs_base=base+17)+1;
	return;}}
	}
}
static LnkT34(){ call_or_link(VV[34],&Lnk34);} /* ARRAY-IN-BOUNDS-P */
static LnkT33(){ call_or_link(VV[33],&Lnk33);} /* COPY-ARRAY-PORTION */
static LnkT32(){ call_or_link(VV[32],&Lnk32);} /* ARRAY-TOTAL-SIZE */
static LnkT31(){ call_or_link(VV[31],&Lnk31);} /* ARRAY-DIMENSIONS */
static LnkT30(){ call_or_link(VV[30],&Lnk30);} /* STATICP */
static LnkT29(){ call_or_link(VV[29],&Lnk29);} /* ARRAY-HAS-FILL-POINTER-P */
static LnkT28(){ call_or_link(VV[28],&Lnk28);} /* ADJUST-ARRAY */
static LnkT27(){ call_or_link(VV[27],&Lnk27);} /* MAKE-ARRAY */
static LnkT26(){ call_or_link(VV[26],&Lnk26);} /* INCREMENT-CURSOR */
static LnkT25(){ call_or_link(VV[25],&Lnk25);} /* ASET-BY-CURSOR */
static LnkT24(){ call_or_link(VV[24],&Lnk24);} /* SEQUENCE-CURSOR */
static LnkT23(){ call_or_link(VV[23],&Lnk23);} /* MAKE-ARRAY1 */
static LnkT22(){ call_or_link(VV[22],&Lnk22);} /* GET-AELTTYPE */
static LnkT21(){ call_or_link(VV[21],&Lnk21);} /* BEST-ARRAY-ELEMENT-TYPE */
static LnkT18(){ call_or_link(VV[18],&Lnk18);} /* SUBTYPEP */
