
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
/*	function definition for ARRAY-DISPLACEMENT	*/

static L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	{object V8;
	check_arg(1);
	V8=(base[0]);
	vs_top=sup;
TTL:;
	{object V9;
	base[1]= (V8);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk19)();
	vs_top=sup;
	V9= vs_base[0];
	base[1]= car((V9));
	base[2]= cdr((V9));
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	function definition for MAKE-ARRAY	*/

static L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	{register object V10;
	object V11;
	object V12;
	register object V13;
	object V14;
	object V15;
	object V16;
	object V17;
	object V18;
	object V19;
	if(vs_top-vs_base<1) too_few_arguments();
	parse_key(vs_base+1,FALSE,FALSE,8,VV[8],VV[7],VV[9],VV[15],VV[11],VV[20],VV[21],VV[14]);
	V10=(base[0]);
	vs_top=sup;
	if(base[9]==Cnil){
	V11= Ct;
	}else{
	V11=(base[1]);}
	V12=(base[2]);
	V13=(base[3]);
	V14=(base[11]);
	V15=(base[4]);
	V16=(base[5]);
	V17=(base[6]);
	if(base[15]==Cnil){
	V18= small_fixnum(0);
	}else{
	V18=(base[7]);}
	V19=(base[8]);
	if(!(type_of((V10))==t_fixnum||type_of((V10))==t_bignum)){
	goto T61;}
	V10= make_cons((V10),Cnil);
T61:;
	base[17]= (V11);
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk22)();
	vs_top=sup;
	V11= vs_base[0];
	if(!((length((V10)))==(1))){
	goto T69;}
	{register object V20;
	base[17]= (V11);
	base[18]= car((V10));
	base[19]= (V15);
	base[20]= (V16);
	base[21]= (V17);
	base[22]= (V18);
	base[23]= (V19);
	base[24]= (V12);
	vs_top=(vs_base=base+17)+8;
	siLmake_vector();
	vs_top=sup;
	V20= vs_base[0];
	if(((V14))==Cnil){
	goto T80;}
	{int V21;
	register int V22;
	V21= fix(car((V10)));
	V22= 0;
T86:;
	if(!((V22)>=(V21))){
	goto T87;}
	goto T80;
T87:;
	V23= elt((V13),V22);
	(void)(aset1((V20),V22,/* INLINE-ARGS */V23));
	V22= (V22)+1;
	goto T86;}
T80:;
	base[17]= (V20);
	vs_top=(vs_base=base+17)+1;
	return;}
T69:;
	{register object V24;
	base[18]= (V11);
	vs_top=(vs_base=base+18)+1;
	(void) (*Lnk23)();
	vs_top=sup;
	base[17]= vs_base[0];
	base[18]= (V19);
	base[19]= (V12);
	base[20]= (V17);
	base[21]= (V18);
	base[22]= (V10);
	vs_top=(vs_base=base+17)+6;
	(void) (*Lnk24)();
	vs_top=sup;
	V24= vs_base[0];
	if(((V16))==Cnil){
	goto T103;}
	base[17]= VV[6];
	vs_top=(vs_base=base+17)+1;
	Lerror();
	vs_top=sup;
T103:;
	{register object x= small_fixnum(0),V25= (V10);
	while(!endp(V25))
	if(eql(x,V25->c.c_car)){
	goto T107;
	}else V25=V25->c.c_cdr;}
	if(((V14))==Cnil){
	goto T107;}
	{register object V26;
	base[17]= make_fixnum(length((V10)));
	base[18]= VV[7];
	base[19]= small_fixnum(0);
	vs_top=(vs_base=base+17)+3;
	Lmake_list();
	vs_top=sup;
	V26= vs_base[0];
T117:;
	base[17]= (V24);
	base[19]= (V13);
	base[20]= (V26);
	vs_top=(vs_base=base+19)+2;
	(void) (*Lnk25)();
	vs_top=sup;
	base[18]= vs_base[0];
	base[19]= (V26);
	vs_top=(vs_base=base+17)+3;
	(void) (*Lnk26)();
	vs_top=sup;
	base[17]= (V26);
	base[18]= (V10);
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk27)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T126;}
	goto T107;
T126:;
	goto T117;}
T107:;
	base[17]= (V24);
	vs_top=(vs_base=base+17)+1;
	return;}
	}
}
/*	function definition for INCREMENT-CURSOR	*/

static L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	{register object V27;
	object V28;
	check_arg(2);
	V27=(base[0]);
	V28=(base[1]);
	vs_top=sup;
TTL:;
	if(((V27))!=Cnil){
	goto T134;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
T134:;
	{object V29;
	base[2]= cdr((V27));
	base[3]= cdr((V28));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk27)();
	vs_top=sup;
	V29= vs_base[0];
	if(((V29))==Cnil){
	goto T140;}
	if(!(((fix(car((V27))))+1)>=(fix(car((V28)))))){
	goto T143;}
	if(type_of((V27))!=t_cons)FEwrong_type_argument(Scons,(V27));
	((V27))->c.c_car = small_fixnum(0);
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
T143:;
	V30 = make_fixnum((fix(car((V27))))+1);
	if(type_of((V27))!=t_cons)FEwrong_type_argument(Scons,(V27));
	((V27))->c.c_car = V30;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T140:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for SEQUENCE-CURSOR	*/

static L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	{object V31;
	object V32;
	check_arg(2);
	V31=(base[0]);
	V32=(base[1]);
	vs_top=sup;
TTL:;
	if(((V32))!=Cnil){
	goto T148;}
	base[2]= (V31);
	vs_top=(vs_base=base+2)+1;
	return;
T148:;
	V31= elt((V31),fix(car((V32))));
	V32= cdr((V32));
	goto TTL;
	}
}
/*	function definition for VECTOR	*/

static L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	{object V33;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=ON_STACK_CONS(p[-1],p[0]);}
	V33=(base[0]);
	vs_top=sup;
	{object V34;
	V35 = make_fixnum(length((V33)));
	V34= make_cons(V35,Cnil);
	base[2]= (V34);
	base[3]= VV[8];
	base[4]= Ct;
	base[5]= VV[9];
	base[6]= (V33);
	vs_top=(vs_base=base+2)+5;
	(void) (*Lnk28)();
	return;}
	}
}
/*	function definition for ARRAY-DIMENSIONS	*/

static L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	{register object V36;
	check_arg(1);
	V36=(base[0]);
	vs_top=sup;
TTL:;
	{register object V37;
	register object V38;
	base[1]= (V36);
	vs_top=(vs_base=base+1)+1;
	Larray_rank();
	vs_top=sup;
	V37= vs_base[0];
	V38= Cnil;
T162:;
	if(!(number_compare((V37),small_fixnum(0))==0)){
	goto T163;}
	base[1]= (V38);
	vs_top=(vs_base=base+1)+1;
	return;
T163:;
	V37= one_minus((V37));
	base[1]= (V36);
	base[2]= (V37);
	vs_top=(vs_base=base+1)+2;
	Larray_dimension();
	vs_top=sup;
	V39= vs_base[0];
	V38= make_cons(V39,(V38));
	goto T162;}
	}
}
/*	function definition for ARRAY-IN-BOUNDS-P	*/

static L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	{register object V40;
	object V41;
	if(vs_top-vs_base<1) too_few_arguments();
	V40=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=ON_STACK_CONS(p[-1],p[0]);}
	V41=(base[1]);
	vs_top=sup;
	{register object V42;
	base[3]= (V40);
	vs_top=(vs_base=base+3)+1;
	Larray_rank();
	vs_top=sup;
	V42= vs_base[0];
	V43 = make_fixnum(length((V41)));
	if(!(number_compare((V42),V43)!=0)){
	goto T178;}
	base[3]= VV[10];
	base[4]= (V42);
	base[5]= make_fixnum(length((V41)));
	vs_top=(vs_base=base+3)+3;
	Lerror();
	vs_top=sup;
T178:;
	{register object V44;
	register object V45;
	V44= small_fixnum(0);
	V45= (V41);
T185:;
	if(!(number_compare((V44),(V42))>=0)){
	goto T186;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
T186:;
	if(number_compare(car((V45)),small_fixnum(0))<0){
	goto T191;}
	V46= car((V45));
	base[3]= (V40);
	base[4]= (V44);
	vs_top=(vs_base=base+3)+2;
	Larray_dimension();
	vs_top=sup;
	V47= vs_base[0];
	if(!(number_compare(/* INLINE-ARGS */V46,V47)>=0)){
	goto T190;}
T191:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
T190:;
	V44= one_plus((V44));
	V45= cdr((V45));
	goto T185;}}
	}
}
/*	function definition for ARRAY-ROW-MAJOR-INDEX	*/

static L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	{register object V48;
	object V49;
	if(vs_top-vs_base<1) too_few_arguments();
	V48=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=ON_STACK_CONS(p[-1],p[0]);}
	V49=(base[1]);
	vs_top=sup;
	{register object V50;
	register object V51;
	register object V52;
	V50= small_fixnum(0);
	V51= small_fixnum(0);
	V52= (V49);
T203:;
	if(((V52))!=Cnil){
	goto T204;}
	base[2]= (V51);
	vs_top=(vs_base=base+2)+1;
	return;
T204:;
	{object V53;
	V53= one_plus((V50));
	base[2]= (V48);
	base[3]= (V50);
	vs_top=(vs_base=base+2)+2;
	Larray_dimension();
	vs_top=sup;
	V54= vs_base[0];
	V55= number_times((V51),V54);
	V51= number_plus(/* INLINE-ARGS */V55,car((V52)));
	V52= cdr((V52));
	V50= (V53);}
	goto T203;}
	}
}
/*	function definition for BIT	*/

static L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	{object V56;
	object V57;
	if(vs_top-vs_base<1) too_few_arguments();
	V56=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=ON_STACK_CONS(p[-1],p[0]);}
	V57=(base[1]);
	vs_top=sup;
	base[2]= (V56);
	{object V58;
	V58= (V57);
	 vs_top=base+3;
	 while(!endp(V58))
	 {vs_push(car(V58));V58=cdr(V58);}
	vs_base=base+2;}
	Laref();
	return;
	}
}
/*	function definition for SBIT	*/

static L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	{object V59;
	object V60;
	if(vs_top-vs_base<1) too_few_arguments();
	V59=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=ON_STACK_CONS(p[-1],p[0]);}
	V60=(base[1]);
	vs_top=sup;
	base[2]= (V59);
	{object V61;
	V61= (V60);
	 vs_top=base+3;
	 while(!endp(V61))
	 {vs_push(car(V61));V61=cdr(V61);}
	vs_base=base+2;}
	Laref();
	return;
	}
}
/*	function definition for BIT-AND	*/

static L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	{object V62;
	object V63;
	object V64;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V62=(base[0]);
	V63=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T220;}
	V64=(base[2]);
	vs_top=sup;
	goto T221;
T220:;
	V64= Cnil;
T221:;
	base[3]= small_fixnum(1);
	base[4]= (V62);
	base[5]= (V63);
	base[6]= (V64);
	vs_top=(vs_base=base+3)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for BIT-IOR	*/

static L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	{object V65;
	object V66;
	object V67;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V65=(base[0]);
	V66=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T227;}
	V67=(base[2]);
	vs_top=sup;
	goto T228;
T227:;
	V67= Cnil;
T228:;
	base[3]= small_fixnum(7);
	base[4]= (V65);
	base[5]= (V66);
	base[6]= (V67);
	vs_top=(vs_base=base+3)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for BIT-XOR	*/

static L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	{object V68;
	object V69;
	object V70;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V68=(base[0]);
	V69=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T234;}
	V70=(base[2]);
	vs_top=sup;
	goto T235;
T234:;
	V70= Cnil;
T235:;
	base[3]= small_fixnum(6);
	base[4]= (V68);
	base[5]= (V69);
	base[6]= (V70);
	vs_top=(vs_base=base+3)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for BIT-EQV	*/

static L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	{object V71;
	object V72;
	object V73;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V71=(base[0]);
	V72=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T241;}
	V73=(base[2]);
	vs_top=sup;
	goto T242;
T241:;
	V73= Cnil;
T242:;
	base[3]= small_fixnum(9);
	base[4]= (V71);
	base[5]= (V72);
	base[6]= (V73);
	vs_top=(vs_base=base+3)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for BIT-NAND	*/

static L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	{object V74;
	object V75;
	object V76;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V74=(base[0]);
	V75=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T248;}
	V76=(base[2]);
	vs_top=sup;
	goto T249;
T248:;
	V76= Cnil;
T249:;
	base[3]= small_fixnum(14);
	base[4]= (V74);
	base[5]= (V75);
	base[6]= (V76);
	vs_top=(vs_base=base+3)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for BIT-NOR	*/

static L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{object V77;
	object V78;
	object V79;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V77=(base[0]);
	V78=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T255;}
	V79=(base[2]);
	vs_top=sup;
	goto T256;
T255:;
	V79= Cnil;
T256:;
	base[3]= small_fixnum(8);
	base[4]= (V77);
	base[5]= (V78);
	base[6]= (V79);
	vs_top=(vs_base=base+3)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for BIT-ANDC1	*/

static L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	{object V80;
	object V81;
	object V82;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V80=(base[0]);
	V81=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T262;}
	V82=(base[2]);
	vs_top=sup;
	goto T263;
T262:;
	V82= Cnil;
T263:;
	base[3]= small_fixnum(4);
	base[4]= (V80);
	base[5]= (V81);
	base[6]= (V82);
	vs_top=(vs_base=base+3)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for BIT-ANDC2	*/

static L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	{object V83;
	object V84;
	object V85;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V83=(base[0]);
	V84=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T269;}
	V85=(base[2]);
	vs_top=sup;
	goto T270;
T269:;
	V85= Cnil;
T270:;
	base[3]= small_fixnum(2);
	base[4]= (V83);
	base[5]= (V84);
	base[6]= (V85);
	vs_top=(vs_base=base+3)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for BIT-ORC1	*/

static L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{object V86;
	object V87;
	object V88;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V86=(base[0]);
	V87=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T276;}
	V88=(base[2]);
	vs_top=sup;
	goto T277;
T276:;
	V88= Cnil;
T277:;
	base[3]= small_fixnum(13);
	base[4]= (V86);
	base[5]= (V87);
	base[6]= (V88);
	vs_top=(vs_base=base+3)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for BIT-ORC2	*/

static L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	{object V89;
	object V90;
	object V91;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V89=(base[0]);
	V90=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T283;}
	V91=(base[2]);
	vs_top=sup;
	goto T284;
T283:;
	V91= Cnil;
T284:;
	base[3]= small_fixnum(11);
	base[4]= (V89);
	base[5]= (V90);
	base[6]= (V91);
	vs_top=(vs_base=base+3)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for BIT-NOT	*/

static L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	{object V92;
	object V93;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V92=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T290;}
	V93=(base[1]);
	vs_top=sup;
	goto T291;
T290:;
	V93= Cnil;
T291:;
	base[2]= small_fixnum(12);
	base[3]= (V92);
	base[4]= (V92);
	base[5]= (V93);
	vs_top=(vs_base=base+2)+4;
	siLbit_array_op();
	return;
	}
}
/*	function definition for VECTOR-PUSH	*/

static L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	{object V94;
	register object V95;
	check_arg(2);
	V94=(base[0]);
	V95=(base[1]);
	vs_top=sup;
TTL:;
	{register int V96;
	base[2]= (V95);
	vs_top=(vs_base=base+2)+1;
	Lfill_pointer();
	vs_top=sup;
	V96= fix(vs_base[0]);
	base[2]= (V95);
	base[3]= small_fixnum(0);
	vs_top=(vs_base=base+2)+2;
	Larray_dimension();
	vs_top=sup;
	V97= vs_base[0];
	if(!((V96)<(fix(V97)))){
	goto T300;}
	(void)(aset1((V95),V96,(V94)));
	base[2]= (V95);
	base[3]= make_fixnum((V96)+1);
	vs_top=(vs_base=base+2)+2;
	siLfill_pointer_set();
	vs_top=sup;
	base[2]= make_fixnum(V96);
	vs_top=(vs_base=base+2)+1;
	return;
T300:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for VECTOR-PUSH-EXTEND	*/

static L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	{object V98;
	register object V99;
	object V100;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V98=(base[0]);
	V99=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T309;}
	V100=(base[2]);
	vs_top=sup;
	goto T310;
T309:;
	V100= Cnil;
T310:;
	{register int V101;
	base[3]= (V99);
	vs_top=(vs_base=base+3)+1;
	Lfill_pointer();
	vs_top=sup;
	V101= fix(vs_base[0]);
	base[3]= (V99);
	base[4]= small_fixnum(0);
	vs_top=(vs_base=base+3)+2;
	Larray_dimension();
	vs_top=sup;
	V102= vs_base[0];
	if(!((V101)<(fix(V102)))){
	goto T315;}
	(void)(aset1((V99),V101,(V98)));
	base[3]= (V99);
	base[4]= make_fixnum((V101)+1);
	vs_top=(vs_base=base+3)+2;
	siLfill_pointer_set();
	vs_top=sup;
	base[3]= make_fixnum(V101);
	vs_top=(vs_base=base+3)+1;
	return;
T315:;
	base[3]= (V99);
	base[5]= (V99);
	base[6]= small_fixnum(0);
	vs_top=(vs_base=base+5)+2;
	Larray_dimension();
	vs_top=sup;
	V103= vs_base[0];
	if((V100)!=Cnil){
	V104= (V100);
	goto T330;}
	base[5]= (V99);
	base[6]= small_fixnum(0);
	vs_top=(vs_base=base+5)+2;
	Larray_dimension();
	vs_top=sup;
	V105= vs_base[0];
	if(!((fix(V105))>(0))){
	goto T332;}
	base[5]= (V99);
	base[6]= small_fixnum(0);
	vs_top=(vs_base=base+5)+2;
	Larray_dimension();
	vs_top=sup;
	V104= vs_base[0];
	goto T330;
T332:;
	V104= small_fixnum(5);
T330:;
	V106= number_plus(V103,V104);
	base[4]= make_cons(/* INLINE-ARGS */V106,Cnil);
	base[5]= VV[8];
	base[7]= (V99);
	vs_top=(vs_base=base+7)+1;
	Larray_element_type();
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= VV[11];
	base[8]= make_fixnum(V101);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk29)();
	vs_top=sup;
	(void)(aset1((V99),V101,(V98)));
	base[3]= (V99);
	base[4]= make_fixnum((V101)+1);
	vs_top=(vs_base=base+3)+2;
	siLfill_pointer_set();
	vs_top=sup;
	base[3]= make_fixnum(V101);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for VECTOR-POP	*/

static L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_reserve(VM25);
	{register object V107;
	check_arg(1);
	V107=(base[0]);
	vs_top=sup;
TTL:;
	{int V108;
	base[1]= (V107);
	vs_top=(vs_base=base+1)+1;
	Lfill_pointer();
	vs_top=sup;
	V108= fix(vs_base[0]);
	if(!((V108)==(0))){
	goto T350;}
	base[1]= VV[12];
	base[2]= (V107);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
T350:;
	base[1]= (V107);
	base[2]= make_fixnum((V108)-1);
	vs_top=(vs_base=base+1)+2;
	siLfill_pointer_set();
	vs_top=sup;
	base[1]= aref1((V107),(V108)-1);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for ADJUST-ARRAY	*/

static L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_reserve(VM26);
	{register object V109;
	register object V110;
	register object V111;
	object V112;
	object V113;
	object V114;
	object V115;
	object V116;
	object V117;
	object V118;
	if(vs_top-vs_base<2) too_few_arguments();
	parse_key(vs_base+2,TRUE,FALSE,7,VV[8],VV[7],VV[9],VV[11],VV[20],VV[21],VV[14]);
	V109=(base[0]);
	V110=(base[1]);
	vs_top=sup;
	V111=(base[2]);
	V112=(base[3]);
	V113=(base[4]);
	V114=(base[5]);
	V115=(base[6]);
	V116=(base[7]);
	V117=(base[8]);
	V118=(base[9]);
	{register object V119;
	V119= Cnil;
	if(!(type_of((V110))==t_fixnum||type_of((V110))==t_bignum)){
	goto T359;}
	V110= make_cons((V110),Cnil);
T359:;
	{register object x= VV[11],V120= (V111);
	while(!endp(V120))
	if(eql(x,V120->c.c_car)){
	V119= V120;
	goto T367;
	}else V120=V120->c.c_cdr;
	V119= Cnil;}
T367:;
	if(((V119))==Cnil){
	goto T365;}
	base[17]= (V109);
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk30)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T363;}
	base[17]= VV[13];
	vs_top=(vs_base=base+17)+1;
	Lerror();
	vs_top=sup;
	goto T363;
T365:;
	base[17]= (V109);
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk30)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T363;}
	base[17]= (V109);
	vs_top=(vs_base=base+17)+1;
	Lfill_pointer();
	vs_top=sup;
	V121= vs_base[0];
	V111= ON_STACK_CONS(V121,(V111));
	V111= ON_STACK_CONS(VV[11],(V111));
T363:;
	base[17]= (V109);
	vs_top=(vs_base=base+17)+1;
	Larray_element_type();
	vs_top=sup;
	V112= vs_base[0];
	if(((V112))==(Ct)){
	goto T383;}
	V111= ON_STACK_CONS((V112),(V111));
	V111= ON_STACK_CONS(VV[8],(V111));
T383:;
	{register object x= VV[14],V122= (V111);
	while(!endp(V122))
	if(eql(x,V122->c.c_car)){
	goto T389;
	}else V122=V122->c.c_cdr;}
	base[17]= (V109);
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk31)();
	vs_top=sup;
	V123= vs_base[0];
	V111= ON_STACK_CONS(V123,(V111));
	V111= ON_STACK_CONS(VV[14],(V111));
T389:;
	{register object V124;
	base[17]= (V110);
	base[18]= VV[15];
	base[19]= Ct;
	{object V125;
	V125= (V111);
	 vs_top=base+20;
	 while(!endp(V125))
	 {vs_push(car(V125));V125=cdr(V125);}
	vs_base=base+17;}
	(void) (*Lnk28)();
	vs_top=sup;
	V124= vs_base[0];
	if((cdr((V110)))==Cnil){
	goto T403;}
	V126= cdr((V110));
	base[17]= (V109);
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk32)();
	vs_top=sup;
	V127= vs_base[0];
	if(!(equal(/* INLINE-ARGS */V126,cdr(V127)))){
	goto T404;}
	if(!(((V112))==(VV[16]))){
	goto T403;}
	base[17]= (V110);
	vs_top=(vs_base=base+17)+1;
	Llast();
	vs_top=sup;
	V128= vs_base[0];
	{int V129= fix(car(V128));
	if(!((0)==((V129>=0&&(8)>0?(V129)%(8):imod(V129,8))))){
	goto T404;}}
T403:;
	base[17]= (V109);
	base[18]= (V124);
	base[19]= small_fixnum(0);
	base[20]= small_fixnum(0);
	base[22]= (V124);
	vs_top=(vs_base=base+22)+1;
	(void) (*Lnk33)();
	vs_top=sup;
	V130= vs_base[0];
	base[22]= (V109);
	vs_top=(vs_base=base+22)+1;
	(void) (*Lnk33)();
	vs_top=sup;
	V131= vs_base[0];
	base[21]= (number_compare(V130,V131)<=0?(V130):V131);
	vs_top=(vs_base=base+17)+5;
	(void) (*Lnk34)();
	vs_top=sup;
	goto T402;
T404:;
	{register object V132;
	base[17]= make_fixnum(length((V110)));
	base[18]= VV[7];
	base[19]= small_fixnum(0);
	vs_top=(vs_base=base+17)+3;
	Lmake_list();
	vs_top=sup;
	V132= vs_base[0];
T430:;
	base[17]= (V109);
	{object V133;
	V133= (V132);
	 vs_top=base+18;
	 while(!endp(V133))
	 {vs_push(car(V133));V133=cdr(V133);}
	vs_base=base+17;}
	(void) (*Lnk35)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T433;}
	base[17]= (V124);
	base[19]= (V109);
	{object V134;
	V134= (V132);
	 vs_top=base+20;
	 while(!endp(V134))
	 {vs_push(car(V134));V134=cdr(V134);}
	vs_base=base+19;}
	Laref();
	vs_top=sup;
	base[18]= vs_base[0];
	base[19]= (V132);
	vs_top=(vs_base=base+17)+3;
	(void) (*Lnk26)();
	vs_top=sup;
T433:;
	base[17]= (V132);
	base[18]= (V110);
	vs_top=(vs_base=base+17)+2;
	(void) (*Lnk27)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T443;}
	goto T402;
T443:;
	goto T430;}
T402:;
	base[17]= (V109);
	base[18]= (V124);
	vs_top=(vs_base=base+17)+2;
	siLreplace_array();
	vs_top=sup;
	V119= cadr((V119));
	if(((V119))==Cnil){
	goto T455;}
	if(!(eql(Ct,(V119)))){
	goto T459;}
	base[17]= (V109);
	base[19]= (V109);
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk33)();
	vs_top=sup;
	base[18]= vs_base[0];
	vs_top=(vs_base=base+17)+2;
	siLfill_pointer_set();
	vs_top=sup;
	goto T455;
T459:;
	if(!(type_of((V119))==t_fixnum)){
	goto T465;}
	base[17]= (V109);
	base[18]= (V119);
	vs_top=(vs_base=base+17)+2;
	siLfill_pointer_set();
	vs_top=sup;
	goto T455;
T465:;
	base[17]= VV[17];
	base[18]= (V119);
	vs_top=(vs_base=base+17)+2;
	Lerror();
	vs_top=sup;
T455:;
	base[17]= (V109);
	vs_top=(vs_base=base+17)+1;
	return;}}
	}
}
static LnkT35(){ call_or_link(VV[35],&Lnk35);} /* ARRAY-IN-BOUNDS-P */
static LnkT34(){ call_or_link(VV[34],&Lnk34);} /* COPY-ARRAY-PORTION */
static LnkT33(){ call_or_link(VV[33],&Lnk33);} /* ARRAY-TOTAL-SIZE */
static LnkT32(){ call_or_link(VV[32],&Lnk32);} /* ARRAY-DIMENSIONS */
static LnkT31(){ call_or_link(VV[31],&Lnk31);} /* STATICP */
static LnkT30(){ call_or_link(VV[30],&Lnk30);} /* ARRAY-HAS-FILL-POINTER-P */
static LnkT29(){ call_or_link(VV[29],&Lnk29);} /* ADJUST-ARRAY */
static LnkT28(){ call_or_link(VV[28],&Lnk28);} /* MAKE-ARRAY */
static LnkT27(){ call_or_link(VV[27],&Lnk27);} /* INCREMENT-CURSOR */
static LnkT26(){ call_or_link(VV[26],&Lnk26);} /* ASET-BY-CURSOR */
static LnkT25(){ call_or_link(VV[25],&Lnk25);} /* SEQUENCE-CURSOR */
static LnkT24(){ call_or_link(VV[24],&Lnk24);} /* MAKE-ARRAY1 */
static LnkT23(){ call_or_link(VV[23],&Lnk23);} /* GET-AELTTYPE */
static LnkT22(){ call_or_link(VV[22],&Lnk22);} /* BEST-ARRAY-ELEMENT-TYPE */
static LnkT19(){ call_or_link(VV[19],&Lnk19);} /* ARRAY-DISPLACEMENT1 */
static LnkT18(){ call_or_link(VV[18],&Lnk18);} /* SUBTYPEP */
