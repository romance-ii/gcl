
#include "cmpinclude.h"
#include "pcl_slots_boot.h"
void init_pcl_slots_boot(){do_init(VV);}
/*	macro definition for SLOT-SYMBOL	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[3]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	if(!endp(V1))invalid_macro_call();}
	V2= list(2,VV[1],base[2]);
	{object V4= base[3];
	if((V4!= VV[27]))goto T2;
	V3= VV[5];
	goto T1;
	goto T2;
T2:;
	if((V4!= VV[30]))goto T3;
	V3= VV[6];
	goto T1;
	goto T3;
T3:;
	if((V4!= VV[42]))goto T4;
	V3= VV[7];
	goto T1;
	goto T4;
T4:;
	FEerror("The ECASE key value ~s is illegal.",1,V4);
	V3= Cnil;
	goto T1;}
	goto T1;
T1:;
	V5= list(3,VV[3],base[2],list(2,VV[4],V3));
	V6= list(2,VV[11],base[2]);
	V7= list(4,VV[0],/* INLINE-ARGS */V6,list(2,VV[12],list(2,VV[11],base[2])),VV[13]);
	V8= list(2,VV[14],base[2]);
	base[4]= list(4,VV[0],/* INLINE-ARGS */V2,list(3,VV[2],/* INLINE-ARGS */V5,list(3,VV[8],list(6,VV[9],Cnil,VV[10],/* INLINE-ARGS */V7,/* INLINE-ARGS */V8,symbol_name(base[3])),VV[15])),VV[16]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function SLOT-READER-SYMBOL	*/

static object LI2(V10)

register object V10;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if(!(type_of((V10))==t_symbol)){
	goto T6;}{object V11;
	{object V12 =((V10))->s.s_plist;
	 object ind= VV[5];
	while(V12!=Cnil){
	if(V12->c.c_car==ind){
	V11= (V12->c.c_cdr->c.c_car);
	goto T9;
	}else V12=V12->c.c_cdr->c.c_cdr;}
	V11= Cnil;}
	goto T9;
T9:;
	if(V11==Cnil)goto T8;
	{object V13 = V11;
	VMR2(V13)}
	goto T8;
T8:;}
	base[1]= Cnil;
	base[2]= VV[10];
	base[4]= (V10);
	vs_top=(vs_base=base+4)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T15;}
	base[5]= (V10);
	vs_top=(vs_base=base+5)+1;
	Lsymbol_package();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lpackage_name();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T13;
	goto T15;
T15:;
	base[3]= VV[13];
	goto T13;
T13:;
	base[4]= symbol_name((V10));
	base[5]= VV[17];
	vs_top=(vs_base=base+1)+5;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[15]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V14 = vs_base[0];
	VMR2(V14)}
	goto T6;
T6:;
	base[0]= VV[18];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V15 = vs_base[0];
	VMR2(V15)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SLOT-WRITER-SYMBOL	*/

static object LI3(V17)

register object V17;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	if(!(type_of((V17))==t_symbol)){
	goto T25;}{object V18;
	{object V19 =((V17))->s.s_plist;
	 object ind= VV[6];
	while(V19!=Cnil){
	if(V19->c.c_car==ind){
	V18= (V19->c.c_cdr->c.c_car);
	goto T28;
	}else V19=V19->c.c_cdr->c.c_cdr;}
	V18= Cnil;}
	goto T28;
T28:;
	if(V18==Cnil)goto T27;
	{object V20 = V18;
	VMR3(V20)}
	goto T27;
T27:;}
	base[1]= Cnil;
	base[2]= VV[10];
	base[4]= (V17);
	vs_top=(vs_base=base+4)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T34;}
	base[5]= (V17);
	vs_top=(vs_base=base+5)+1;
	Lsymbol_package();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lpackage_name();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T32;
	goto T34;
T34:;
	base[3]= VV[13];
	goto T32;
T32:;
	base[4]= symbol_name((V17));
	base[5]= VV[19];
	vs_top=(vs_base=base+1)+5;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[15]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V21 = vs_base[0];
	VMR3(V21)}
	goto T25;
T25:;
	base[0]= VV[18];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V22 = vs_base[0];
	VMR3(V22)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SLOT-BOUNDP-SYMBOL	*/

static object LI4(V24)

register object V24;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if(!(type_of((V24))==t_symbol)){
	goto T44;}{object V25;
	{object V26 =((V24))->s.s_plist;
	 object ind= VV[7];
	while(V26!=Cnil){
	if(V26->c.c_car==ind){
	V25= (V26->c.c_cdr->c.c_car);
	goto T47;
	}else V26=V26->c.c_cdr->c.c_cdr;}
	V25= Cnil;}
	goto T47;
T47:;
	if(V25==Cnil)goto T46;
	{object V27 = V25;
	VMR4(V27)}
	goto T46;
T46:;}
	base[1]= Cnil;
	base[2]= VV[10];
	base[4]= (V24);
	vs_top=(vs_base=base+4)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T53;}
	base[5]= (V24);
	vs_top=(vs_base=base+5)+1;
	Lsymbol_package();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lpackage_name();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T51;
	goto T53;
T53:;
	base[3]= VV[13];
	goto T51;
T51:;
	base[4]= symbol_name((V24));
	base[5]= VV[20];
	vs_top=(vs_base=base+1)+5;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[15]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V28 = vs_base[0];
	VMR4(V28)}
	goto T44;
T44:;
	base[0]= VV[18];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V29 = vs_base[0];
	VMR4(V29)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for ASV-FUNCALL	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V30=base[0]->c.c_cdr;
	if(endp(V30))invalid_macro_call();
	base[2]= (V30->c.c_car);
	V30=V30->c.c_cdr;
	if(endp(V30))invalid_macro_call();
	base[3]= (V30->c.c_car);
	V30=V30->c.c_cdr;
	if(endp(V30))invalid_macro_call();
	base[4]= (V30->c.c_car);
	V30=V30->c.c_cdr;
	base[5]= V30;}
	V31= list(2,VV[21],list(2,VV[4],base[2]));
	V32= make_cons(base[2],base[5]);
	V33= list(2,VV[4],base[2]);
	base[6]= list(4,VV[0],/* INLINE-ARGS */V31,/* INLINE-ARGS */V32,list(3,VV[22],/* INLINE-ARGS */V33,list(2,VV[4],base[3])));
	vs_top=(vs_base=base+6)+1;
	return;
}
/*	local entry for function NO-SLOT	*/

static object LI6(V36,V37)

object V36;object V37;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	base[0]= VV[23];
	base[1]= (V37);
	base[2]= (V36);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V38 = vs_base[0];
	VMR6(V38)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for ACCESSOR-SLOT-VALUE	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V39=base[0]->c.c_cdr;
	if(endp(V39))invalid_macro_call();
	base[2]= (V39->c.c_car);
	V39=V39->c.c_cdr;
	if(endp(V39))invalid_macro_call();
	base[3]= (V39->c.c_car);
	V39=V39->c.c_cdr;
	if(!endp(V39))invalid_macro_call();}
	base[4]= base[3];
	vs_top=(vs_base=base+4)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T65;}
	base[4]= VV[24];
	base[5]= VV[25];
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
	goto T65;
T65:;
	{object V40;
	object V41;
	base[6]= base[3];
	vs_top=(vs_base=base+6)+1;
	Leval();
	vs_top=sup;
	V40= vs_base[0];
	V41= (*(LnkLI92))((V40));
	base[6]= list(5,VV[26],(V41),(V40),VV[27],base[2]);
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	macro definition for ACCESSOR-SET-SLOT-VALUE	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V42=base[0]->c.c_cdr;
	if(endp(V42))invalid_macro_call();
	base[2]= (V42->c.c_car);
	V42=V42->c.c_cdr;
	if(endp(V42))invalid_macro_call();
	base[3]= (V42->c.c_car);
	V42=V42->c.c_cdr;
	if(endp(V42))invalid_macro_call();
	base[4]= (V42->c.c_car);
	V42=V42->c.c_cdr;
	if(!endp(V42))invalid_macro_call();}
	base[5]= base[3];
	vs_top=(vs_base=base+5)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T74;}
	base[5]= VV[28];
	base[6]= VV[29];
	vs_top=(vs_base=base+5)+2;
	Lerror();
	vs_top=sup;
	goto T74;
T74:;
	base[5]= base[2];
	base[6]= base[1];
	vs_top=(vs_base=base+5)+2;
	Lmacroexpand();
	vs_top=sup;
	base[2]= vs_base[0];
	base[5]= base[3];
	base[6]= base[1];
	vs_top=(vs_base=base+5)+2;
	Lmacroexpand();
	vs_top=sup;
	base[3]= vs_base[0];
	{object V43;
	object V44;
	object V45;
	object V46;
	base[9]= base[3];
	vs_top=(vs_base=base+9)+1;
	Leval();
	vs_top=sup;
	V43= vs_base[0];
	base[9]= base[4];
	vs_top=(vs_base=base+9)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T92;}
	if(type_of(base[4])!=t_cons){
	goto T92;}
	{object V47;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V47= vs_base[0];
	{object V48;
	V49= list(2,(V47),base[2]);
	V48= make_cons(/* INLINE-ARGS */V49,Cnil);
	base[2]= (V47);
	V44= (V48);
	goto T90;}}
	goto T92;
T92:;
	V44= Cnil;
	goto T90;
T90:;
	V45= (*(LnkLI93))((V43));
	V46= list(6,VV[26],(V45),(V43),VV[30],base[4],base[2]);
	if(((V44))==Cnil){
	goto T104;}
	base[9]= list(3,VV[31],(V44),(V46));
	vs_top=(vs_base=base+9)+1;
	return;
	goto T104;
T104:;
	base[9]= (V46);
	vs_top=(vs_base=base+9)+1;
	return;}
}
/*	macro definition for ACCESSOR-SLOT-BOUNDP	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V50=base[0]->c.c_cdr;
	if(endp(V50))invalid_macro_call();
	base[2]= (V50->c.c_car);
	V50=V50->c.c_cdr;
	if(endp(V50))invalid_macro_call();
	base[3]= (V50->c.c_car);
	V50=V50->c.c_cdr;
	if(!endp(V50))invalid_macro_call();}
	base[4]= base[3];
	vs_top=(vs_base=base+4)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T106;}
	base[4]= VV[32];
	base[5]= VV[33];
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
	goto T106;
T106:;
	{object V51;
	object V52;
	base[6]= base[3];
	vs_top=(vs_base=base+6)+1;
	Leval();
	vs_top=sup;
	V51= vs_base[0];
	V52= (*(LnkLI94))((V51));
	base[6]= list(3,VV[34],base[2],list(2,VV[4],(V51)));
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	local entry for function STRUCTURE-SLOT-BOUNDP	*/

static object LI10(V54)

object V54;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V55 = Ct;
	VMR10(V55)}
	return Cnil;
}
/*	local entry for function MAKE-STRUCTURE-SLOT-BOUNDP-FUNCTION	*/

static object LI11(V57)

object V57;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{object V58;
	base[2]= (V57);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk95)(Lclptr95);
	vs_top=sup;
	base[0]= vs_base[0];
	base[0]=MMcons(base[0],Cnil);
	V58= 
	make_cclosure_new(LC40,Cnil,base[0],Cdata);
	base[2]= (V58);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk96)();
	vs_top=sup;
	{object V59 = (V58);
	VMR11(V59)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-OPTIMIZED-STD-ACCESSOR-METHOD-FUNCTION	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{register object V60;
	register object V61;
	object V62;
	check_arg(3);
	V60=(base[0]);
	V61=(base[1]);
	V62=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (V60);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk97)(Lclptr97);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T121;}
	{object V63= (V62);
	if((V63!= VV[27]))goto T124;
	base[3]= (V61);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk95)(Lclptr95);
	return;
	goto T124;
T124:;
	if((V63!= VV[30]))goto T126;
	base[3]= (V61);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk98)(Lclptr98);
	return;
	goto T126;
T126:;
	if((V63!= VV[42]))goto T128;
	base[3]= (*(LnkLI99))((V61));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T128;
T128:;
	FEerror("The ECASE key value ~s is illegal.",1,V63);
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T121;
T121:;
	{object V64;
	object V65;
	object V66;
	object V67;
	object V68;
	base[8]= (V60);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk100)(Lclptr100);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T131;}
	V64= Cnil;
	goto T129;
	goto T131;
T131:;
	base[8]= (V60);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk101)(Lclptr101);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T135;}
	V64= Ct;
	goto T129;
	goto T135;
T135:;
	base[8]= VV[36];
	base[9]= (V60);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	vs_top=sup;
	V64= vs_base[0];
	goto T129;
T129:;
	base[8]= (V61);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk102)(Lclptr102);
	vs_top=sup;
	V65= vs_base[0];
	base[8]= (V61);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk103)(Lclptr103);
	vs_top=sup;
	V66= vs_base[0];
	{object V69= (V62);
	if((V69!= VV[27]))goto T145;
	V67= (VV[104]->s.s_gfdef);
	goto T144;
	goto T145;
T145:;
	if((V69!= VV[30]))goto T146;
	V67= (VV[105]->s.s_gfdef);
	goto T144;
	goto T146;
T146:;
	if((V69!= VV[42]))goto T147;
	V67= (VV[106]->s.s_gfdef);
	goto T144;
	goto T147;
T147:;
	FEerror("The ECASE key value ~s is illegal.",1,V69);
	V67= Cnil;
	goto T144;}
	goto T144;
T144:;
	V68= (
	(type_of((V67)) == t_sfun ?(*(((V67))->sfn.sfn_self)):
	(fcall.argd=3,type_of((V67))==t_vfun) ?
	(*(((V67))->sfn.sfn_self)):
	(fcall.fun=((V67)),fcalln))((V64),(V65),(V66)));
	base[8]= (V68);
	base[9]= (V66);
	vs_top=(vs_base=base+8)+2;
	return;}
	}
}
/*	function definition for MAKE-OPTIMIZED-STD-READER-METHOD-FUNCTION	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V70;
	check_arg(3);
	V70=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	base[2]=MMcons(base[2],base[1]);
	vs_top=sup;
	{register object V71;
	V71= (base[2]->c.c_car);
	if(!(type_of((V71))==t_fixnum)){
	goto T153;}
	if(((V70))==Cnil){
	goto T156;}
	base[3]= 
	make_cclosure_new(LC41,Cnil,base[2],Cdata);
	goto T151;
	goto T156;
T156:;
	base[3]= 
	make_cclosure_new(LC42,Cnil,base[2],Cdata);
	goto T151;
	goto T153;
T153:;
	if(!(type_of((V71))==t_cons)){
	goto T159;}
	base[3]= 
	make_cclosure_new(LC43,Cnil,base[2],Cdata);
	goto T151;
	goto T159;
T159:;
	base[5]= VV[38];
	base[6]= (V71);
	base[7]= VV[39];
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk107)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	base[3]= vs_base[0];}
	goto T151;
T151:;
	base[4]= list(2,VV[27],(base[1]->c.c_car));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk108)();
	return;
	}
}
/*	function definition for MAKE-OPTIMIZED-STD-WRITER-METHOD-FUNCTION	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V72;
	object V73;
	check_arg(3);
	V72=(base[0]);
	V73=(base[1]);
	base[2]=MMcons(base[2],Cnil);
	vs_top=sup;
	{register object V74;
	V74= (base[2]->c.c_car);
	if(!(type_of((V74))==t_fixnum)){
	goto T168;}
	if(((V72))==Cnil){
	goto T171;}
	base[3]= 
	make_cclosure_new(LC44,Cnil,base[2],Cdata);
	goto T166;
	goto T171;
T171:;
	base[3]= 
	make_cclosure_new(LC45,Cnil,base[2],Cdata);
	goto T166;
	goto T168;
T168:;
	if(!(type_of((V74))==t_cons)){
	goto T174;}
	base[3]= 
	make_cclosure_new(LC46,Cnil,base[2],Cdata);
	goto T166;
	goto T174;
T174:;
	base[5]= VV[38];
	base[6]= (V74);
	base[7]= VV[40];
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk107)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	base[3]= vs_base[0];}
	goto T166;
T166:;
	base[4]= list(2,VV[30],(V73));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk108)();
	return;
	}
}
/*	function definition for MAKE-OPTIMIZED-STD-BOUNDP-METHOD-FUNCTION	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	{object V75;
	object V76;
	check_arg(3);
	V75=(base[0]);
	V76=(base[1]);
	base[2]=MMcons(base[2],Cnil);
	vs_top=sup;
	{register object V77;
	V77= (base[2]->c.c_car);
	if(!(type_of((V77))==t_fixnum)){
	goto T183;}
	if(((V75))==Cnil){
	goto T186;}
	base[3]= 
	make_cclosure_new(LC47,Cnil,base[2],Cdata);
	goto T181;
	goto T186;
T186:;
	base[3]= 
	make_cclosure_new(LC48,Cnil,base[2],Cdata);
	goto T181;
	goto T183;
T183:;
	if(!(type_of((V77))==t_cons)){
	goto T189;}
	base[3]= 
	make_cclosure_new(LC49,Cnil,base[2],Cdata);
	goto T181;
	goto T189;
T189:;
	base[5]= VV[38];
	base[6]= (V77);
	base[7]= VV[41];
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk107)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	base[3]= vs_base[0];}
	goto T181;
T181:;
	base[4]= list(2,VV[42],(V76));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk108)();
	return;
	}
}
/*	local entry for function MAKE-OPTIMIZED-STRUCTURE-SLOT-VALUE-USING-CLASS-METHOD-FUNCTION	*/

static object LI17(V79)

object V79;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	base[0]=MMcons((V79),Cnil);
	{object V80 = 
	make_cclosure_new(LC50,Cnil,base[0],Cdata);
	VMR16(V80)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-OPTIMIZED-STRUCTURE-SETF-SLOT-VALUE-USING-CLASS-METHOD-FUNCTION	*/

static object LI19(V82)

object V82;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	base[0]=MMcons((V82),Cnil);
	{object V83 = 
	make_cclosure_new(LC51,Cnil,base[0],Cdata);
	VMR17(V83)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-OPTIMIZED-STRUCTURE-SLOT-BOUNDP-USING-CLASS-METHOD-FUNCTION	*/

static object LI21(V85)

object V85;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	base[0]=MMcons((V85),Cnil);
	{object V86 = 
	make_cclosure_new(LC52,Cnil,base[0],Cdata);
	VMR18(V86)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-OPTIMIZED-STD-SLOT-VALUE-USING-CLASS-METHOD-FUNCTION	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{register object V87;
	register object V88;
	object V89;
	check_arg(3);
	V87=(base[0]);
	V88=(base[1]);
	V89=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (V87);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk97)(Lclptr97);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T197;}
	{object V90= (V89);
	if((V90!= VV[27]))goto T200;
	base[3]= (V88);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk95)(Lclptr95);
	vs_top=sup;
	V91= vs_base[0];
	base[3]= (*(LnkLI109))(V91);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T200;
T200:;
	if((V90!= VV[30]))goto T203;
	base[3]= (V88);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk98)(Lclptr98);
	vs_top=sup;
	V92= vs_base[0];
	base[3]= (*(LnkLI110))(V92);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T203;
T203:;
	if((V90!= VV[42]))goto T206;
	base[3]= (V88);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk98)(Lclptr98);
	vs_top=sup;
	V93= vs_base[0];
	base[3]= (*(LnkLI111))(V93);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T206;
T206:;
	FEerror("The ECASE key value ~s is illegal.",1,V90);
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T197;
T197:;
	{object V94;
	object V95;
	object V96;
	object V97;
	base[7]= (V87);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk100)(Lclptr100);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T211;}
	V94= Cnil;
	goto T209;
	goto T211;
T211:;
	base[7]= (V87);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk101)(Lclptr101);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T215;}
	V94= Ct;
	goto T209;
	goto T215;
T215:;
	base[7]= VV[43];
	base[8]= (V87);
	vs_top=(vs_base=base+7)+2;
	Lerror();
	vs_top=sup;
	V94= vs_base[0];
	goto T209;
T209:;
	base[7]= (V88);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk102)(Lclptr102);
	vs_top=sup;
	V95= vs_base[0];
	base[7]= (V88);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk103)(Lclptr103);
	vs_top=sup;
	V96= vs_base[0];
	{object V98= (V89);
	if((V98!= VV[27]))goto T225;
	V97= (VV[112]->s.s_gfdef);
	goto T224;
	goto T225;
T225:;
	if((V98!= VV[30]))goto T226;
	V97= (VV[113]->s.s_gfdef);
	goto T224;
	goto T226;
T226:;
	if((V98!= VV[42]))goto T227;
	V97= (VV[114]->s.s_gfdef);
	goto T224;
	goto T227;
T227:;
	FEerror("The ECASE key value ~s is illegal.",1,V98);
	V97= Cnil;
	goto T224;}
	goto T224;
T224:;
	base[8]= (V94);
	base[9]= (V95);
	base[10]= (V96);
	vs_top=(vs_base=base+8)+3;
	{object _funobj = (V97);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= (V96);
	vs_top=(vs_base=base+7)+2;
	return;}
	}
}
/*	local entry for function MAKE-OPTIMIZED-STD-SLOT-VALUE-USING-CLASS-METHOD-FUNCTION	*/

static object LI24(V102,V103,V104)

object V102;object V103;object V104;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	base[0]=MMcons((V104),Cnil);
	base[1]=MMcons((V103),base[0]);
	{register object V105;
	V105= (base[0]->c.c_car);
	if(!(type_of((V105))==t_fixnum)){
	goto T234;}
	if(((V102))==Cnil){
	goto T237;}
	{object V106 = 
	make_cclosure_new(LC53,Cnil,base[1],Cdata);
	VMR20(V106)}
	goto T237;
T237:;
	{object V107 = 
	make_cclosure_new(LC54,Cnil,base[1],Cdata);
	VMR20(V107)}
	goto T234;
T234:;
	if(!(type_of((V105))==t_cons)){
	goto T240;}
	{object V108 = 
	make_cclosure_new(LC55,Cnil,base[1],Cdata);
	VMR20(V108)}
	goto T240;
T240:;
	base[3]= VV[38];
	base[4]= (V105);
	base[5]= VV[50];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk107)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	{object V109 = vs_base[0];
	VMR20(V109)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-OPTIMIZED-STD-SETF-SLOT-VALUE-USING-CLASS-METHOD-FUNCTION	*/

static object LI26(V113,V114,V115)

object V113;object V114;object V115;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	base[0]=MMcons((V115),Cnil);
	{register object V116;
	V116= (base[0]->c.c_car);
	if(!(type_of((V116))==t_fixnum)){
	goto T247;}
	if(((V113))==Cnil){
	goto T250;}
	{object V117 = 
	make_cclosure_new(LC56,Cnil,base[0],Cdata);
	VMR21(V117)}
	goto T250;
T250:;
	{object V118 = 
	make_cclosure_new(LC57,Cnil,base[0],Cdata);
	VMR21(V118)}
	goto T247;
T247:;
	if(!(type_of((V116))==t_cons)){
	goto T253;}
	{object V119 = 
	make_cclosure_new(LC58,Cnil,base[0],Cdata);
	VMR21(V119)}
	goto T253;
T253:;
	base[2]= VV[38];
	base[3]= (V116);
	base[4]= VV[52];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk107)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	{object V120 = vs_base[0];
	VMR21(V120)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-OPTIMIZED-STD-SLOT-BOUNDP-USING-CLASS-METHOD-FUNCTION	*/

static object LI28(V124,V125,V126)

object V124;object V125;object V126;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	base[0]=MMcons((V126),Cnil);
	{register object V127;
	V127= (base[0]->c.c_car);
	if(!(type_of((V127))==t_fixnum)){
	goto T260;}
	if(((V124))==Cnil){
	goto T263;}
	{object V128 = 
	make_cclosure_new(LC59,Cnil,base[0],Cdata);
	VMR22(V128)}
	goto T263;
T263:;
	{object V129 = 
	make_cclosure_new(LC60,Cnil,base[0],Cdata);
	VMR22(V129)}
	goto T260;
T260:;
	if(!(type_of((V127))==t_cons)){
	goto T266;}
	{object V130 = 
	make_cclosure_new(LC61,Cnil,base[0],Cdata);
	VMR22(V130)}
	goto T266;
T266:;
	base[2]= VV[38];
	base[3]= (V127);
	base[4]= VV[54];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk107)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	{object V131 = vs_base[0];
	VMR22(V131)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-ACCESSOR-FROM-SVUC-METHOD-FUNCTION	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{object V132;
	check_arg(4);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	base[2]=MMcons(base[2],base[1]);
	V132=(base[3]);
	vs_top=sup;
	{object V133= (V132);
	if((V133!= VV[27]))goto T273;
	base[4]= 
	make_cclosure_new(LC62,Cnil,base[2],Cdata);
	goto T272;
	goto T273;
T273:;
	if((V133!= VV[30]))goto T274;
	base[4]= 
	make_cclosure_new(LC63,Cnil,base[2],Cdata);
	goto T272;
	goto T274;
T274:;
	if((V133!= VV[42]))goto T275;
	base[4]= 
	make_cclosure_new(LC64,Cnil,base[2],Cdata);
	goto T272;
	goto T275;
T275:;
	base[4]= Cnil;}
	goto T272;
T272:;
	base[6]= (base[0]->c.c_car);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk115)(Lclptr115);
	vs_top=sup;
	V134= vs_base[0];
	base[6]= (base[1]->c.c_car);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk102)(Lclptr102);
	vs_top=sup;
	V135= vs_base[0];
	base[5]= list(3,(V132),V134,V135);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk108)();
	return;
	}
}
/*	local entry for function MAKE-INTERNAL-READER-METHOD-FUNCTION	*/

static object LI31(V138,V139)

object V138;object V139;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	base[0]=MMcons((V139),Cnil);
	V140= list(3,VV[62],(V138),(base[0]->c.c_car));
	V141= 
	make_cclosure_new(LC65,Cnil,base[0],Cdata);
	{object V142 = listA(3,VV[61],/* INLINE-ARGS */V140,listA(3,VV[63],V141,VV[71]));
	VMR24(V142)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-STD-READER-METHOD-FUNCTION	*/

static object LI33(V145,V146)

object V145;object V146;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	base[0]=MMcons((V146),Cnil);
	{object V147;
	register object V148;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V147= vs_base[0];
	V149= 
	make_cclosure_new(LC66,Cnil,base[0],Cdata);
	base[3]= listA(3,VV[63],V149,VV[80]);
	vs_top=(vs_base=base+3)+1;
	Lcopy_tree();
	vs_top=sup;
	V148= vs_base[0];
	{object V152;
	V153= list(2,Cnil,(base[0]->c.c_car));
	V152= make_cons(/* INLINE-ARGS */V153,Cnil);
	{object V154;
	base[5]= (V148);
	base[6]= VV[75];
	base[7]= Cnil;
	vs_top=(vs_base=base+5)+3;
	Lgetf();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V152);
	base[6]= VV[76];
	vs_top=(vs_base=base+4)+3;
	siLput_f();
	vs_top=sup;
	V154= vs_base[0];
	{object V155;
	base[4]= (V148);
	base[5]= (V154);
	base[6]= VV[75];
	vs_top=(vs_base=base+4)+3;
	siLput_f();
	vs_top=sup;
	V155= vs_base[0];
	V148= (V155);}}}
	{object V159;
	base[4]= (V148);
	base[5]= VV[75];
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	Lgetf();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= V147;
	base[5]= VV[77];
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V159= vs_base[0];
	{object V160;
	base[3]= (V148);
	base[4]= (V159);
	base[5]= VV[75];
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V160= vs_base[0];
	V148= (V160);}}
	{object V161 = listA(3,VV[61],list(3,VV[78],(V145),(base[0]->c.c_car)),(V148));
	VMR25(V161)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-STD-WRITER-METHOD-FUNCTION	*/

static object LI35(V164,V165)

object V164;object V165;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	base[0]=MMcons((V165),Cnil);
	{object V166;
	register object V167;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V166= vs_base[0];
	V168= 
	make_cclosure_new(LC67,Cnil,base[0],Cdata);
	base[3]= listA(3,VV[63],V168,VV[85]);
	vs_top=(vs_base=base+3)+1;
	Lcopy_tree();
	vs_top=sup;
	V167= vs_base[0];
	{object V171;
	V171= list(2,Cnil,list(2,Cnil,(base[0]->c.c_car)));
	{object V172;
	base[5]= (V167);
	base[6]= VV[75];
	base[7]= Cnil;
	vs_top=(vs_base=base+5)+3;
	Lgetf();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V171);
	base[6]= VV[76];
	vs_top=(vs_base=base+4)+3;
	siLput_f();
	vs_top=sup;
	V172= vs_base[0];
	{object V173;
	base[4]= (V167);
	base[5]= (V172);
	base[6]= VV[75];
	vs_top=(vs_base=base+4)+3;
	siLput_f();
	vs_top=sup;
	V173= vs_base[0];
	V167= (V173);}}}
	{object V177;
	base[4]= (V167);
	base[5]= VV[75];
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	Lgetf();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= V166;
	base[5]= VV[77];
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V177= vs_base[0];
	{object V178;
	base[3]= (V167);
	base[4]= (V177);
	base[5]= VV[75];
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V178= vs_base[0];
	V167= (V178);}}
	{object V179 = listA(3,VV[61],list(3,VV[83],(V164),(base[0]->c.c_car)),(V167));
	VMR26(V179)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-STD-BOUNDP-METHOD-FUNCTION	*/

static object LI37(V182,V183)

object V182;object V183;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	base[0]=MMcons((V183),Cnil);
	{object V184;
	register object V185;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V184= vs_base[0];
	V186= 
	make_cclosure_new(LC68,Cnil,base[0],Cdata);
	base[3]= listA(3,VV[63],V186,VV[90]);
	vs_top=(vs_base=base+3)+1;
	Lcopy_tree();
	vs_top=sup;
	V185= vs_base[0];
	{object V189;
	V190= list(2,Cnil,(base[0]->c.c_car));
	V189= make_cons(/* INLINE-ARGS */V190,Cnil);
	{object V191;
	base[5]= (V185);
	base[6]= VV[75];
	base[7]= Cnil;
	vs_top=(vs_base=base+5)+3;
	Lgetf();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V189);
	base[6]= VV[76];
	vs_top=(vs_base=base+4)+3;
	siLput_f();
	vs_top=sup;
	V191= vs_base[0];
	{object V192;
	base[4]= (V185);
	base[5]= (V191);
	base[6]= VV[75];
	vs_top=(vs_base=base+4)+3;
	siLput_f();
	vs_top=sup;
	V192= vs_base[0];
	V185= (V192);}}}
	{object V196;
	base[4]= (V185);
	base[5]= VV[75];
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	Lgetf();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= V184;
	base[5]= VV[77];
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V196= vs_base[0];
	{object V197;
	base[3]= (V185);
	base[4]= (V196);
	base[5]= VV[75];
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V197= vs_base[0];
	V185= (V197);}}
	{object V198 = listA(3,VV[61],list(3,VV[88],(V182),(base[0]->c.c_car)),(V185));
	VMR27(V198)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INITIALIZE-INTERNAL-SLOT-GFS	*/

static object LI38(object V199,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB28 VMS28 VMV28
	{register object V200;
	register object V201;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V200= V199;
	narg = narg - 1;
	if (narg <= 0) goto T387;
	else {
	V201= first;}
	--narg; goto T388;
	goto T387;
T387:;
	V201= Cnil;
	goto T388;
T388:;
	if(((V201))==Cnil){
	goto T391;}
	if(!(((V201))==(VV[27]))){
	goto T390;}
	goto T391;
T391:;
	{object V202;
	object V203;
	V202= (*(LnkLI92))((V200));
	base[2]= (V202);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk116)();
	vs_top=sup;
	V203= vs_base[0];
	base[2]= (V203);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk117)(Lclptr117);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T390;}
	base[2]= (VV[91]->s.s_dbind);
	base[3]= (V203);
	base[4]= (V200);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk118)(Lclptr118);
	vs_top=sup;}
	goto T390;
T390:;
	if(((V201))==Cnil){
	goto T405;}
	if(!(((V201))==(VV[30]))){
	goto T404;}
	goto T405;
T405:;
	{object V204;
	object V205;
	V204= (*(LnkLI93))((V200));
	base[2]= (V204);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk116)();
	vs_top=sup;
	V205= vs_base[0];
	base[2]= (V205);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk117)(Lclptr117);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T404;}
	base[2]= (VV[91]->s.s_dbind);
	base[3]= (V205);
	base[4]= (V200);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk119)(Lclptr119);
	vs_top=sup;}
	goto T404;
T404:;
	{object V206 = Cnil;
	VMR28(V206)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function INITIALIZE-INTERNAL-SLOT-GFS*	*/

static object LI39(V210,V211,V212)

object V210;object V211;object V212;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{register object V213;
	register object V214;
	V213= (V210);
	V214= CMPcar((V213));
	goto T423;
T423:;
	if(!(((V213))==Cnil)){
	goto T424;}
	goto T419;
	goto T424;
T424:;
	(void)((VFUN_NARGS=2,(*(LnkLI120))((V214),VV[27])));
	V213= CMPcdr((V213));
	V214= CMPcar((V213));
	goto T423;}
	goto T419;
T419:;
	{register object V215;
	register object V216;
	V215= (V211);
	V216= CMPcar((V215));
	goto T438;
T438:;
	if(!(((V215))==Cnil)){
	goto T439;}
	goto T434;
	goto T439;
T439:;
	(void)((VFUN_NARGS=2,(*(LnkLI120))((V216),VV[30])));
	V215= CMPcdr((V215));
	V216= CMPcar((V215));
	goto T438;}
	goto T434;
T434:;
	{register object V217;
	register object V218;
	V217= (V212);
	V218= CMPcar((V217));
	goto T452;
T452:;
	if(!(((V217))==Cnil)){
	goto T453;}
	{object V219 = Cnil;
	VMR29(V219)}
	goto T453;
T453:;
	(void)((VFUN_NARGS=2,(*(LnkLI120))((V218),VV[42])));
	V217= CMPcdr((V217));
	V218= CMPcar((V217));
	goto T452;}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC68(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	{object V220;
	object V221;
	register object V222;
	check_arg(3);
	V220=(base[0]);
	V221=(base[1]);
	V222=(base[2]);
	vs_top=sup;
	{object V224;
	object V225;
	V224= CMPcar((V220));
	V225= CMPcdr((V220));
	{object V226;
	if(type_of(V222)==t_structure){
	goto T474;}
	goto T472;
	goto T474;
T474:;
	if(!(((V222)->str.str_def)==(VV[89]))){
	goto T472;}
	V226= STREF(object,(V222),4);
	goto T470;
	goto T472;
T472:;{object V228;
	V228= (VV[44]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V222);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V229= vs_base[0];
	if(!((V228)==(CMPcar(V229)))){
	goto T477;}}
	V226= CMPcar(((V222))->cc.cc_turbo[12]);
	goto T470;
	goto T477;
T477:;
	V226= Cnil;
	goto T470;
T470:;
	{object V230;
	V230= ((V224))->v.v_self[1];
	{register object V231;
	V231= (V230);
	if(!(type_of((V231))==t_fixnum)){
	goto T484;}
	base[3]= ((((((V226))->v.v_self[fix((V230))])==(VV[73])?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T484;
T484:;
	if(!(type_of((V231))==t_cons)){
	goto T487;}
	base[3]= ((((CMPcdr((V230)))==(VV[73])?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T487;
T487:;
	base[3]= (V222);
	base[4]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk123)();
	return;}}}}
	}
}
/*	local function CLOSURE	*/

static void LC67(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	{object V232;
	object V233;
	object V234;
	register object V235;
	check_arg(4);
	V232=(base[0]);
	V233=(base[1]);
	V234=(base[2]);
	V235=(base[3]);
	vs_top=sup;
	{object V237;
	object V238;
	V237= CMPcar((V232));
	V238= CMPcdr((V232));
	{object V239;
	if(type_of(V235)==t_structure){
	goto T502;}
	goto T500;
	goto T502;
T502:;
	if(!(((V235)->str.str_def)==(VV[84]))){
	goto T500;}
	V239= STREF(object,(V235),4);
	goto T498;
	goto T500;
T500:;{object V241;
	V241= (VV[44]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V235);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V242= vs_base[0];
	if(!((V241)==(CMPcar(V242)))){
	goto T505;}}
	V239= CMPcar(((V235))->cc.cc_turbo[12]);
	goto T498;
	goto T505;
T505:;
	V239= Cnil;
	goto T498;
T498:;
	{object V243;
	V243= ((V237))->v.v_self[1];
	{register object V244;
	V244= (V243);
	if(!(type_of((V244))==t_fixnum)){
	goto T512;}
	base[4]= ((V239))->v.v_self[fix((V243))]= ((V234));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T512;
T512:;
	if(!(type_of((V244))==t_cons)){
	goto T515;}
	(V243)->c.c_cdr = V234;
	base[4]= V234;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T515;
T515:;
	base[4]= (V235);
	base[5]= (base0[0]->c.c_car);
	base[6]= (V234);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk124)();
	return;}}}}
	}
}
/*	local function CLOSURE	*/

static void LC66(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	{object V247;
	object V248;
	register object V249;
	check_arg(3);
	V247=(base[0]);
	V248=(base[1]);
	V249=(base[2]);
	vs_top=sup;
	{object V251;
	object V252;
	V251= CMPcar((V247));
	V252= CMPcdr((V247));
	{object V253;
	if(type_of(V249)==t_structure){
	goto T532;}
	goto T530;
	goto T532;
T532:;
	if(!(((V249)->str.str_def)==(VV[79]))){
	goto T530;}
	V253= STREF(object,(V249),4);
	goto T528;
	goto T530;
T530:;{object V255;
	V255= (VV[44]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V249);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V256= vs_base[0];
	if(!((V255)==(CMPcar(V256)))){
	goto T535;}}
	V253= CMPcar(((V249))->cc.cc_turbo[12]);
	goto T528;
	goto T535;
T535:;
	V253= Cnil;
	goto T528;
T528:;
	{register object V257;
	V257= ((V251))->v.v_self[1];
	{register object V258;
	V258= (V257);
	if(!(type_of((V258))==t_fixnum)){
	goto T544;}
	V257= ((V253))->v.v_self[fix((V257))];
	goto T542;
	goto T544;
T544:;
	if(!(type_of((V258))==t_cons)){
	goto T547;}
	V257= CMPcdr((V257));
	goto T542;
	goto T547;
T547:;
	V257= VV[73];}
	goto T542;
T542:;
	if(!(((V257))==(VV[73]))){
	goto T550;}
	base[3]= (V249);
	base[4]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk125)();
	return;
	goto T550;
T550:;
	base[3]= (V257);
	vs_top=(vs_base=base+3)+1;
	return;}}}
	}
}
/*	local function CLOSURE	*/

static void LC65(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_check;
	{object V259;
	object V260;
	register object V261;
	check_arg(3);
	V259=(base[0]);
	V260=(base[1]);
	V261=(base[2]);
	vs_top=sup;
	{register object V263;
	if(type_of(V261)==t_structure){
	goto T561;}
	goto T559;
	goto T561;
T561:;
	if(!(((V261)->str.str_def)==(VV[69]))){
	goto T559;}
	V263= STREF(object,(V261),0);
	goto T557;
	goto T559;
T559:;{object V265;
	V265= (VV[44]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V261);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V266= vs_base[0];
	if(!((V265)==(CMPcar(V266)))){
	goto T564;}}
	V263= CMPcar(((V261))->cc.cc_turbo[13]);
	goto T557;
	goto T564;
T564:;
	V263= Cnil;
	goto T557;
T557:;
	if(((V263))==Cnil){
	goto T570;}
	{object V267;
	object V268;
	V267= ((V263))->v.v_self[11];{object V269;
	{register long V270;
	V270= 0;
	{register object V271;
	register object V272;
	V271= ((V263))->v.v_self[9];
	V272= CMPcar((V271));
	goto T580;
T580:;
	if(!(((V271))==Cnil)){
	goto T581;}
	V269= Cnil;
	goto T575;
	goto T581;
T581:;
	if(!(((base0[0]->c.c_car))==((V272)))){
	goto T585;}
	V269= CMPmake_fixnum(V270);
	goto T575;
	goto T585;
T585:;
	V270= (long)(V270)+(1);
	V271= CMPcdr((V271));
	V272= CMPcar((V271));
	goto T580;}}
	goto T575;
T575:;
	if(V269==Cnil)goto T574;
	V268= V269;
	goto T573;
	goto T574;
T574:;}
	{register object x= (base0[0]->c.c_car),V273= ((V263))->v.v_self[10];
	while(V273!=Cnil)
	if(EQ(x,V273->c.c_car->c.c_car) &&V273->c.c_car != Cnil){
	V268= (V273->c.c_car);
	goto T573;
	}else V273=V273->c.c_cdr;
	V268= Cnil;}
	goto T573;
T573:;
	{register object V274;
	V274= (V268);
	if(!(type_of((V274))==t_fixnum)){
	goto T596;}
	{object V275;
	if(type_of(V261)==t_structure){
	goto T603;}
	goto T601;
	goto T603;
T603:;
	if(!(((V261)->str.str_def)==(VV[70]))){
	goto T601;}
	V276= STREF(object,(V261),4);
	goto T599;
	goto T601;
T601:;{object V278;
	V278= (VV[44]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V261);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V279= vs_base[0];
	if(!((V278)==(CMPcar(V279)))){
	goto T606;}}
	V276= CMPcar(((V261))->cc.cc_turbo[12]);
	goto T599;
	goto T606;
T606:;
	base[5]= VV[66];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	V276= vs_base[0];
	goto T599;
T599:;
	V275= (V276)->v.v_self[fix((V268))];
	if(!(((V275))==((VV[35]->s.s_dbind)))){
	goto T613;}
	base[5]= (*(LnkLI126))((V261));
	base[6]= (V261);
	base[7]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk127)(Lclptr127);
	return;
	goto T613;
T613:;
	base[5]= (V275);
	vs_top=(vs_base=base+5)+1;
	return;}
	goto T596;
T596:;
	if(!(type_of((V274))==t_cons)){
	goto T619;}
	{object V280;
	V280= CMPcdr((V268));
	if(!(((V280))==((VV[35]->s.s_dbind)))){
	goto T623;}
	base[5]= (*(LnkLI126))((V261));
	base[6]= (V261);
	base[7]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk127)(Lclptr127);
	return;
	goto T623;
T623:;
	base[5]= (V280);
	vs_top=(vs_base=base+5)+1;
	return;}
	goto T619;
T619:;
	base[5]= VV[67];
	base[6]= (V267);
	base[7]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+5)+3;
	Lerror();
	return;}}
	goto T570;
T570:;
	base[3]= (V261);
	base[4]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk125)();
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC64(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	{object V281;
	check_arg(1);
	V281=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	base[2]= VV[55];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk128)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T635;}
	base[1]= STREF(object,(base0[0]->c.c_car),0);
	base[2]= STREF(object,(base0[0]->c.c_car),4);
	base[3]= STREF(object,(base0[0]->c.c_car),8);
	base[4]= (base0[2]->c.c_car);
	base[5]= (V281);
	base[6]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+2)+5;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T635;
T635:;
	{register object V282;
	V282= (base0[0]->c.c_car);
	base[1]= (V282);
	base[2]= VV[56];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk128)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T646;}
	{object V283;
	object V284;
	register object V285;
	V283= STREF(object,(base0[0]->c.c_car),0);
	V284= list(3,(base0[2]->c.c_car),(V281),(base0[1]->c.c_car));
	V285= STREF(object,(base0[0]->c.c_car),4);
	if(((V285))==Cnil){
	goto T654;}
	if((CMPcdr((V285)))!=Cnil){
	goto T654;}
	base[1]= (V284);
	base[2]= CMPcar((V285));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V283);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T654;
T654:;
	base[1]= (V283);
	base[2]= (V284);
	{object V286;
	V286= (V285);
	 vs_top=base+3;
	 while(V286!=Cnil)
	 {vs_push((V286)->c.c_car);V286=(V286)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T646;
T646:;
	base[1]= (V282);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T664;}
	base[1]= (base0[2]->c.c_car);
	base[2]= (V281);
	base[3]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T664;
T664:;
	base[2]= VV[57];
	base[3]= (V282);
	base[4]= VV[60];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk107)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC63(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	{object V287;
	object V288;
	check_arg(2);
	V287=(base[0]);
	V288=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	base[3]= VV[55];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk128)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T676;}
	base[2]= STREF(object,(base0[0]->c.c_car),0);
	base[3]= STREF(object,(base0[0]->c.c_car),4);
	base[4]= STREF(object,(base0[0]->c.c_car),8);
	base[5]= (V287);
	base[6]= (base0[2]->c.c_car);
	base[7]= (V288);
	base[8]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+3)+6;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T676;
T676:;
	{register object V289;
	V289= (base0[0]->c.c_car);
	base[2]= (V289);
	base[3]= VV[56];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk128)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T688;}
	{object V290;
	object V291;
	register object V292;
	V290= STREF(object,(base0[0]->c.c_car),0);
	V291= list(4,(V287),(base0[2]->c.c_car),(V288),(base0[1]->c.c_car));
	V292= STREF(object,(base0[0]->c.c_car),4);
	if(((V292))==Cnil){
	goto T696;}
	if((CMPcdr((V292)))!=Cnil){
	goto T696;}
	base[2]= (V291);
	base[3]= CMPcar((V292));
	vs_top=(vs_base=base+2)+2;
	{object _funobj = (V290);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T696;
T696:;
	base[2]= (V290);
	base[3]= (V291);
	{object V293;
	V293= (V292);
	 vs_top=base+4;
	 while(V293!=Cnil)
	 {vs_push((V293)->c.c_car);V293=(V293)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T688;
T688:;
	base[2]= (V289);
	vs_top=(vs_base=base+2)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T706;}
	base[2]= (V287);
	base[3]= (base0[2]->c.c_car);
	base[4]= (V288);
	base[5]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+2)+4;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T706;
T706:;
	base[3]= VV[57];
	base[4]= (V289);
	base[5]= VV[59];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk107)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC62(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	{object V294;
	check_arg(1);
	V294=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	base[2]= VV[55];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk128)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T719;}
	base[1]= STREF(object,(base0[0]->c.c_car),0);
	base[2]= STREF(object,(base0[0]->c.c_car),4);
	base[3]= STREF(object,(base0[0]->c.c_car),8);
	base[4]= (base0[2]->c.c_car);
	base[5]= (V294);
	base[6]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+2)+5;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T719;
T719:;
	{register object V295;
	V295= (base0[0]->c.c_car);
	base[1]= (V295);
	base[2]= VV[56];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk128)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T730;}
	{object V296;
	object V297;
	register object V298;
	V296= STREF(object,(base0[0]->c.c_car),0);
	V297= list(3,(base0[2]->c.c_car),(V294),(base0[1]->c.c_car));
	V298= STREF(object,(base0[0]->c.c_car),4);
	if(((V298))==Cnil){
	goto T738;}
	if((CMPcdr((V298)))!=Cnil){
	goto T738;}
	base[1]= (V297);
	base[2]= CMPcar((V298));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V296);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T738;
T738:;
	base[1]= (V296);
	base[2]= (V297);
	{object V299;
	V299= (V298);
	 vs_top=base+3;
	 while(V299!=Cnil)
	 {vs_push((V299)->c.c_car);V299=(V299)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T730;
T730:;
	base[1]= (V295);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T748;}
	base[1]= (base0[2]->c.c_car);
	base[2]= (V294);
	base[3]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T748;
T748:;
	base[2]= VV[57];
	base[3]= (V295);
	base[4]= VV[58];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk107)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC61(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	{object V300;
	object V301;
	object V302;
	check_arg(3);
	V300=(base[0]);
	V301=(base[1]);
	V302=(base[2]);
	vs_top=sup;{object V303;
	V303= (VV[35]->s.s_dbind);
	base[3]= ((((V303)==(CMPcdr((base0[0]->c.c_car)))?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC60(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	{object V304;
	object V305;
	object V306;
	check_arg(3);
	V304=(base[0]);
	V305=(base[1]);
	V306=(base[2]);
	vs_top=sup;{object V307;
	V307= (VV[35]->s.s_dbind);
	base[3]= ((((V307)==((STREF(object,(V305),4))->v.v_self[fix((base0[0]->c.c_car))])?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC59(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	{object V308;
	object V309;
	object V310;
	check_arg(3);
	V308=(base[0]);
	V309=(base[1]);
	V310=(base[2]);
	vs_top=sup;{object V311;
	V311= (VV[35]->s.s_dbind);
	base[3]= ((((V311)==((CMPcar(((V309))->cc.cc_turbo[12]))->v.v_self[fix((base0[0]->c.c_car))])?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC58(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	{object V312;
	object V313;
	object V314;
	object V315;
	check_arg(4);
	V312=(base[0]);
	V313=(base[1]);
	V314=(base[2]);
	V315=(base[3]);
	vs_top=sup;
	{object V316;
	V316= (base0[0]->c.c_car);
	((V316))->c.c_cdr = V312;
	base[4]= V312;
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC57(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_check;
	{object V318;
	object V319;
	object V320;
	object V321;
	check_arg(4);
	V318=(base[0]);
	V319=(base[1]);
	V320=(base[2]);
	V321=(base[3]);
	vs_top=sup;
	base[4]= (STREF(object,(V320),4))->v.v_self[fix((base0[0]->c.c_car))]= ((V318));
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC56(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_check;
	{object V322;
	object V323;
	object V324;
	object V325;
	check_arg(4);
	V322=(base[0]);
	V323=(base[1]);
	V324=(base[2]);
	V325=(base[3]);
	vs_top=sup;
	base[4]= (CMPcar(((V324))->cc.cc_turbo[12]))->v.v_self[fix((base0[0]->c.c_car))]= ((V322));
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC55(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{object V326;
	object V327;
	object V328;
	check_arg(3);
	V326=(base[0]);
	V327=(base[1]);
	V328=(base[2]);
	vs_top=sup;
	{object V329;
	V329= CMPcdr((base0[1]->c.c_car));
	if(!(((V329))==((VV[35]->s.s_dbind)))){
	goto T762;}
	base[3]= (V326);
	base[4]= (V327);
	base[5]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk127)(Lclptr127);
	return;
	goto T762;
T762:;
	base[3]= (V329);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC54(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_check;
	{object V330;
	register object V331;
	object V332;
	check_arg(3);
	V330=(base[0]);
	V331=(base[1]);
	V332=(base[2]);
	vs_top=sup;
	if(type_of(V331)==t_structure){
	goto T770;}
	goto T769;
	goto T770;
T770:;
	if(((V331)->str.str_def)==(VV[49])){
	goto T767;}
	goto T769;
T769:;
	base[3]= VV[47];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T767;
T767:;
	{object V334;
	V334= (STREF(object,(V331),4))->v.v_self[fix((base0[1]->c.c_car))];
	if(!(((V334))==((VV[35]->s.s_dbind)))){
	goto T775;}
	base[3]= (V330);
	base[4]= (V331);
	base[5]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk127)(Lclptr127);
	return;
	goto T775;
T775:;
	base[3]= (V334);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC53(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	{object V335;
	object V336;
	object V337;
	check_arg(3);
	V335=(base[0]);
	V336=(base[1]);
	V337=(base[2]);
	vs_top=sup;{object V338;
	V338= (VV[44]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V336);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V339= vs_base[0];
	if((V338)==(CMPcar(V339))){
	goto T780;}}
	base[3]= VV[45];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T780;
T780:;
	{object V340;
	V340= (CMPcar(((V336))->cc.cc_turbo[12]))->v.v_self[fix((base0[1]->c.c_car))];
	if(!(((V340))==((VV[35]->s.s_dbind)))){
	goto T789;}
	base[3]= (V335);
	base[4]= (V336);
	base[5]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk127)(Lclptr127);
	return;
	goto T789;
T789:;
	base[3]= (V340);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC52(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	{object V341;
	object V342;
	object V343;
	check_arg(3);
	V341=(base[0]);
	V342=(base[1]);
	V343=(base[2]);
	vs_top=sup;
	base[3]= (V342);
	vs_top=(vs_base=base+3)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V344= vs_base[0];
	base[3]= ((((V344)==((VV[35]->s.s_dbind))?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC51(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	{object V345;
	object V346;
	object V347;
	object V348;
	check_arg(4);
	V345=(base[0]);
	V346=(base[1]);
	V347=(base[2]);
	V348=(base[3]);
	vs_top=sup;
	base[4]= (V345);
	base[5]= (V347);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local function CLOSURE	*/

static void LC50(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_check;
	{object V349;
	object V350;
	object V351;
	check_arg(3);
	V349=(base[0]);
	V350=(base[1]);
	V351=(base[2]);
	vs_top=sup;
	{object V352;
	V352= (
	(type_of((base0[0]->c.c_car)) == t_sfun ?(*(((base0[0]->c.c_car))->sfn.sfn_self)):
	(fcall.argd=1,type_of((base0[0]->c.c_car))==t_vfun) ?
	(*(((base0[0]->c.c_car))->sfn.sfn_self)):
	(fcall.fun=((base0[0]->c.c_car)),fcalln))((V350)));
	if(!(((V352))==((VV[35]->s.s_dbind)))){
	goto T800;}
	base[3]= (V349);
	base[4]= (V350);
	base[6]= (V351);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk102)(Lclptr102);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk127)(Lclptr127);
	return;
	goto T800;
T800:;
	base[3]= (V352);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC49(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	{object V353;
	check_arg(1);
	V353=(base[0]);
	vs_top=sup;{object V354;
	V354= (VV[35]->s.s_dbind);
	base[1]= ((((V354)==(CMPcdr((base0[0]->c.c_car)))?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC48(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM50; VC50
	vs_check;
	{object V355;
	check_arg(1);
	V355=(base[0]);
	vs_top=sup;{object V356;
	V356= (VV[35]->s.s_dbind);
	base[1]= ((((V356)==((STREF(object,(V355),4))->v.v_self[fix((base0[0]->c.c_car))])?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC47(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_check;
	{object V357;
	check_arg(1);
	V357=(base[0]);
	vs_top=sup;{object V358;
	V358= (VV[35]->s.s_dbind);
	base[1]= ((((V358)==((CMPcar(((V357))->cc.cc_turbo[12]))->v.v_self[fix((base0[0]->c.c_car))])?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC46(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_check;
	{object V359;
	object V360;
	check_arg(2);
	V359=(base[0]);
	V360=(base[1]);
	vs_top=sup;
	{object V361;
	V361= (base0[0]->c.c_car);
	((V361))->c.c_cdr = V359;
	base[2]= V359;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC45(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM53; VC53
	vs_check;
	{object V363;
	object V364;
	check_arg(2);
	V363=(base[0]);
	V364=(base[1]);
	vs_top=sup;
	base[2]= (STREF(object,(V364),4))->v.v_self[fix((base0[0]->c.c_car))]= ((V363));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC44(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM54; VC54
	vs_check;
	{object V365;
	object V366;
	check_arg(2);
	V365=(base[0]);
	V366=(base[1]);
	vs_top=sup;
	base[2]= (CMPcar(((V366))->cc.cc_turbo[12]))->v.v_self[fix((base0[0]->c.c_car))]= ((V365));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC43(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM55; VC55
	vs_check;
	{object V367;
	check_arg(1);
	V367=(base[0]);
	vs_top=sup;
	{object V368;
	V368= CMPcdr((base0[0]->c.c_car));
	if(!(((V368))==((VV[35]->s.s_dbind)))){
	goto T810;}
	base[1]= (*(LnkLI126))((V367));
	base[2]= (V367);
	base[3]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk127)(Lclptr127);
	return;
	goto T810;
T810:;
	base[1]= (V368);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC42(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_check;
	{object V369;
	check_arg(1);
	V369=(base[0]);
	vs_top=sup;
	{object V370;
	V370= (STREF(object,(V369),4))->v.v_self[fix((base0[0]->c.c_car))];
	if(!(((V370))==((VV[35]->s.s_dbind)))){
	goto T817;}
	base[1]= (*(LnkLI126))((V369));
	base[2]= (V369);
	base[3]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk127)(Lclptr127);
	return;
	goto T817;
T817:;
	base[1]= (V370);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC41(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_check;
	{object V371;
	check_arg(1);
	V371=(base[0]);
	vs_top=sup;
	{object V372;
	V372= (CMPcar(((V371))->cc.cc_turbo[12]))->v.v_self[fix((base0[0]->c.c_car))];
	if(!(((V372))==((VV[35]->s.s_dbind)))){
	goto T824;}
	base[1]= (*(LnkLI126))((V371));
	base[2]= (V371);
	base[3]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk127)(Lclptr127);
	return;
	goto T824;
T824:;
	base[1]= (V372);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC40(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_check;
	{object V373;
	check_arg(1);
	V373=(base[0]);
	vs_top=sup;
	base[1]= (V373);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V374= vs_base[0];
	base[1]= ((((V374)==((VV[35]->s.s_dbind))?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static void LnkT128(){ call_or_link(VV[128],(void **)(void *)&Lnk128);} /* STRUCTURE-SUBTYPE-P */
static void LnkT127(ptr) object *ptr;{ call_or_link_closure(VV[127],(void **)(void *)&Lnk127,(void **)(void *)&Lclptr127);} /* SLOT-UNBOUND */
static object  LnkTLI126(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[126],(void **)(void *)&LnkLI126,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static void LnkT125(){ call_or_link(VV[125],(void **)(void *)&Lnk125);} /* SLOT-VALUE */
static void LnkT124(){ call_or_link(VV[124],(void **)(void *)&Lnk124);} /* SET-SLOT-VALUE */
static void LnkT123(){ call_or_link(VV[123],(void **)(void *)&Lnk123);} /* SLOT-BOUNDP */
static object  LnkTLI122(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[122],(void **)(void *)&LnkLI122,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT121(){ call_or_link(VV[121],(void **)(void *)&Lnk121);} /* CCLOSURE-ENV-NTHCDR */
static object  LnkTLI120(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[120],(void **)(void *)&LnkLI120,first,ap);va_end(ap);return V1;} /* INITIALIZE-INTERNAL-SLOT-GFS */
static void LnkT119(ptr) object *ptr;{ call_or_link_closure(VV[119],(void **)(void *)&Lnk119,(void **)(void *)&Lclptr119);} /* ADD-WRITER-METHOD */
static void LnkT118(ptr) object *ptr;{ call_or_link_closure(VV[118],(void **)(void *)&Lnk118,(void **)(void *)&Lclptr118);} /* ADD-READER-METHOD */
static void LnkT117(ptr) object *ptr;{ call_or_link_closure(VV[117],(void **)(void *)&Lnk117,(void **)(void *)&Lclptr117);} /* GENERIC-FUNCTION-METHODS */
static void LnkT116(){ call_or_link(VV[116],(void **)(void *)&Lnk116);} /* ENSURE-GENERIC-FUNCTION */
static void LnkT115(ptr) object *ptr;{ call_or_link_closure(VV[115],(void **)(void *)&Lnk115,(void **)(void *)&Lclptr115);} /* CLASS-NAME */
static object  LnkTLI111(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[111],(void **)(void *)&LnkLI111,1,first,ap);va_end(ap);return V1;} /* MAKE-OPTIMIZED-STRUCTURE-SLOT-BOUNDP-USING-CLASS-METHOD-FUNCTION */
static object  LnkTLI110(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[110],(void **)(void *)&LnkLI110,1,first,ap);va_end(ap);return V1;} /* MAKE-OPTIMIZED-STRUCTURE-SETF-SLOT-VALUE-USING-CLASS-METHOD-FUNCTION */
static object  LnkTLI109(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[109],(void **)(void *)&LnkLI109,1,first,ap);va_end(ap);return V1;} /* MAKE-OPTIMIZED-STRUCTURE-SLOT-VALUE-USING-CLASS-METHOD-FUNCTION */
static void LnkT108(){ call_or_link(VV[108],(void **)(void *)&Lnk108);} /* SET-FUNCTION-NAME */
static void LnkT107(){ call_or_link(VV[107],(void **)(void *)&Lnk107);} /* TYPECASE-ERROR-STRING */
static void LnkT103(ptr) object *ptr;{ call_or_link_closure(VV[103],(void **)(void *)&Lnk103,(void **)(void *)&Lclptr103);} /* SLOT-DEFINITION-LOCATION */
static void LnkT102(ptr) object *ptr;{ call_or_link_closure(VV[102],(void **)(void *)&Lnk102,(void **)(void *)&Lclptr102);} /* SLOT-DEFINITION-NAME */
static void LnkT101(ptr) object *ptr;{ call_or_link_closure(VV[101],(void **)(void *)&Lnk101,(void **)(void *)&Lclptr101);} /* FUNCALLABLE-STANDARD-CLASS-P */
static void LnkT100(ptr) object *ptr;{ call_or_link_closure(VV[100],(void **)(void *)&Lnk100,(void **)(void *)&Lclptr100);} /* STANDARD-CLASS-P */
static object  LnkTLI99(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[99],(void **)(void *)&LnkLI99,1,first,ap);va_end(ap);return V1;} /* MAKE-STRUCTURE-SLOT-BOUNDP-FUNCTION */
static void LnkT98(ptr) object *ptr;{ call_or_link_closure(VV[98],(void **)(void *)&Lnk98,(void **)(void *)&Lclptr98);} /* SLOT-DEFINITION-INTERNAL-WRITER-FUNCTION */
static void LnkT97(ptr) object *ptr;{ call_or_link_closure(VV[97],(void **)(void *)&Lnk97,(void **)(void *)&Lclptr97);} /* STRUCTURE-CLASS-P */
static void LnkT96(){ call_or_link(VV[96],(void **)(void *)&Lnk96);} /* TURBO-CLOSURE */
static void LnkT95(ptr) object *ptr;{ call_or_link_closure(VV[95],(void **)(void *)&Lnk95,(void **)(void *)&Lclptr95);} /* SLOT-DEFINITION-INTERNAL-READER-FUNCTION */
static object  LnkTLI94(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[94],(void **)(void *)&LnkLI94,1,first,ap);va_end(ap);return V1;} /* SLOT-BOUNDP-SYMBOL */
static object  LnkTLI93(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[93],(void **)(void *)&LnkLI93,1,first,ap);va_end(ap);return V1;} /* SLOT-WRITER-SYMBOL */
static object  LnkTLI92(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[92],(void **)(void *)&LnkLI92,1,first,ap);va_end(ap);return V1;} /* SLOT-READER-SYMBOL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

