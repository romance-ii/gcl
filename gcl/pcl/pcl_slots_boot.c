
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
	V134 = (V132);
	base[6]= (base[0]->c.c_car);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk115)(Lclptr115);
	vs_top=sup;
	V135= vs_base[0];
	base[6]= (base[1]->c.c_car);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk102)(Lclptr102);
	vs_top=sup;
	V136= vs_base[0];
	base[5]= list(3,V134,V135,V136);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk108)();
	return;
	}
}
/*	local entry for function MAKE-INTERNAL-READER-METHOD-FUNCTION	*/

static object LI31(V139,V140)

object V139;object V140;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	base[0]=MMcons((V140),Cnil);
	V141= list(3,VV[62],(V139),(base[0]->c.c_car));
	V142= 
	make_cclosure_new(LC65,Cnil,base[0],Cdata);
	{object V143 = listA(3,VV[61],/* INLINE-ARGS */V141,listA(3,VV[63],V142,VV[71]));
	VMR24(V143)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-STD-READER-METHOD-FUNCTION	*/

static object LI33(V146,V147)

object V146;object V147;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	base[0]=MMcons((V147),Cnil);
	{object V148;
	register object V149;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V148= vs_base[0];
	V150= 
	make_cclosure_new(LC66,Cnil,base[0],Cdata);
	base[3]= listA(3,VV[63],V150,VV[80]);
	vs_top=(vs_base=base+3)+1;
	Lcopy_tree();
	vs_top=sup;
	V149= vs_base[0];
	{object V153;
	V154= list(2,Cnil,(base[0]->c.c_car));
	V153= make_cons(/* INLINE-ARGS */V154,Cnil);
	{object V155;
	base[5]= (V149);
	base[6]= VV[75];
	base[7]= Cnil;
	vs_top=(vs_base=base+5)+3;
	Lgetf();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V153);
	base[6]= VV[76];
	vs_top=(vs_base=base+4)+3;
	siLput_f();
	vs_top=sup;
	V155= vs_base[0];
	{object V156;
	base[4]= (V149);
	base[5]= (V155);
	base[6]= VV[75];
	vs_top=(vs_base=base+4)+3;
	siLput_f();
	vs_top=sup;
	V156= vs_base[0];
	V149= (V156);}}}
	{object V160;
	base[4]= (V149);
	base[5]= VV[75];
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	Lgetf();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= V148;
	base[5]= VV[77];
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V160= vs_base[0];
	{object V161;
	base[3]= (V149);
	base[4]= (V160);
	base[5]= VV[75];
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V161= vs_base[0];
	V149= (V161);}}
	{object V162 = listA(3,VV[61],list(3,VV[78],(V146),(base[0]->c.c_car)),(V149));
	VMR25(V162)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-STD-WRITER-METHOD-FUNCTION	*/

static object LI35(V165,V166)

object V165;object V166;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	base[0]=MMcons((V166),Cnil);
	{object V167;
	register object V168;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V167= vs_base[0];
	V169= 
	make_cclosure_new(LC67,Cnil,base[0],Cdata);
	base[3]= listA(3,VV[63],V169,VV[85]);
	vs_top=(vs_base=base+3)+1;
	Lcopy_tree();
	vs_top=sup;
	V168= vs_base[0];
	{object V172;
	V172= list(2,Cnil,list(2,Cnil,(base[0]->c.c_car)));
	{object V173;
	base[5]= (V168);
	base[6]= VV[75];
	base[7]= Cnil;
	vs_top=(vs_base=base+5)+3;
	Lgetf();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V172);
	base[6]= VV[76];
	vs_top=(vs_base=base+4)+3;
	siLput_f();
	vs_top=sup;
	V173= vs_base[0];
	{object V174;
	base[4]= (V168);
	base[5]= (V173);
	base[6]= VV[75];
	vs_top=(vs_base=base+4)+3;
	siLput_f();
	vs_top=sup;
	V174= vs_base[0];
	V168= (V174);}}}
	{object V178;
	base[4]= (V168);
	base[5]= VV[75];
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	Lgetf();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= V167;
	base[5]= VV[77];
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V178= vs_base[0];
	{object V179;
	base[3]= (V168);
	base[4]= (V178);
	base[5]= VV[75];
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V179= vs_base[0];
	V168= (V179);}}
	{object V180 = listA(3,VV[61],list(3,VV[83],(V165),(base[0]->c.c_car)),(V168));
	VMR26(V180)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-STD-BOUNDP-METHOD-FUNCTION	*/

static object LI37(V183,V184)

object V183;object V184;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	base[0]=MMcons((V184),Cnil);
	{object V185;
	register object V186;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V185= vs_base[0];
	V187= 
	make_cclosure_new(LC68,Cnil,base[0],Cdata);
	base[3]= listA(3,VV[63],V187,VV[90]);
	vs_top=(vs_base=base+3)+1;
	Lcopy_tree();
	vs_top=sup;
	V186= vs_base[0];
	{object V190;
	V191= list(2,Cnil,(base[0]->c.c_car));
	V190= make_cons(/* INLINE-ARGS */V191,Cnil);
	{object V192;
	base[5]= (V186);
	base[6]= VV[75];
	base[7]= Cnil;
	vs_top=(vs_base=base+5)+3;
	Lgetf();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V190);
	base[6]= VV[76];
	vs_top=(vs_base=base+4)+3;
	siLput_f();
	vs_top=sup;
	V192= vs_base[0];
	{object V193;
	base[4]= (V186);
	base[5]= (V192);
	base[6]= VV[75];
	vs_top=(vs_base=base+4)+3;
	siLput_f();
	vs_top=sup;
	V193= vs_base[0];
	V186= (V193);}}}
	{object V197;
	base[4]= (V186);
	base[5]= VV[75];
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	Lgetf();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= V185;
	base[5]= VV[77];
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V197= vs_base[0];
	{object V198;
	base[3]= (V186);
	base[4]= (V197);
	base[5]= VV[75];
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V198= vs_base[0];
	V186= (V198);}}
	{object V199 = listA(3,VV[61],list(3,VV[88],(V183),(base[0]->c.c_car)),(V186));
	VMR27(V199)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INITIALIZE-INTERNAL-SLOT-GFS	*/

static object LI38(object V200,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB28 VMS28 VMV28
	{register object V201;
	register object V202;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V201= V200;
	narg = narg - 1;
	if (narg <= 0) goto T387;
	else {
	V202= first;}
	--narg; goto T388;
	goto T387;
T387:;
	V202= Cnil;
	goto T388;
T388:;
	if(((V202))==Cnil){
	goto T391;}
	if(!(((V202))==(VV[27]))){
	goto T390;}
	goto T391;
T391:;
	{object V203;
	object V204;
	V203= (*(LnkLI92))((V201));
	base[2]= (V203);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk116)();
	vs_top=sup;
	V204= vs_base[0];
	base[2]= (V204);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk117)(Lclptr117);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T390;}
	base[2]= (VV[91]->s.s_dbind);
	base[3]= (V204);
	base[4]= (V201);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk118)(Lclptr118);
	vs_top=sup;}
	goto T390;
T390:;
	if(((V202))==Cnil){
	goto T405;}
	if(!(((V202))==(VV[30]))){
	goto T404;}
	goto T405;
T405:;
	{object V205;
	object V206;
	V205= (*(LnkLI93))((V201));
	base[2]= (V205);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk116)();
	vs_top=sup;
	V206= vs_base[0];
	base[2]= (V206);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk117)(Lclptr117);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T404;}
	base[2]= (VV[91]->s.s_dbind);
	base[3]= (V206);
	base[4]= (V201);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk119)(Lclptr119);
	vs_top=sup;}
	goto T404;
T404:;
	{object V207 = Cnil;
	VMR28(V207)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function INITIALIZE-INTERNAL-SLOT-GFS*	*/

static object LI39(V211,V212,V213)

object V211;object V212;object V213;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{register object V214;
	register object V215;
	V214= (V211);
	V215= CMPcar((V214));
	goto T423;
T423:;
	if(!(((V214))==Cnil)){
	goto T424;}
	goto T419;
	goto T424;
T424:;
	(void)((VFUN_NARGS=2,(*(LnkLI120))((V215),VV[27])));
	V214= CMPcdr((V214));
	V215= CMPcar((V214));
	goto T423;}
	goto T419;
T419:;
	{register object V216;
	register object V217;
	V216= (V212);
	V217= CMPcar((V216));
	goto T438;
T438:;
	if(!(((V216))==Cnil)){
	goto T439;}
	goto T434;
	goto T439;
T439:;
	(void)((VFUN_NARGS=2,(*(LnkLI120))((V217),VV[30])));
	V216= CMPcdr((V216));
	V217= CMPcar((V216));
	goto T438;}
	goto T434;
T434:;
	{register object V218;
	register object V219;
	V218= (V213);
	V219= CMPcar((V218));
	goto T452;
T452:;
	if(!(((V218))==Cnil)){
	goto T453;}
	{object V220 = Cnil;
	VMR29(V220)}
	goto T453;
T453:;
	(void)((VFUN_NARGS=2,(*(LnkLI120))((V219),VV[42])));
	V218= CMPcdr((V218));
	V219= CMPcar((V218));
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
	{object V221;
	object V222;
	register object V223;
	check_arg(3);
	V221=(base[0]);
	V222=(base[1]);
	V223=(base[2]);
	vs_top=sup;
	{object V225;
	object V226;
	V225= CMPcar((V221));
	V226= CMPcdr((V221));
	{object V227;
	if(type_of(V223)==t_structure){
	goto T474;}
	goto T472;
	goto T474;
T474:;
	if(!(((V223)->str.str_def)==(VV[89]))){
	goto T472;}
	V227= STREF(object,(V223),4);
	goto T470;
	goto T472;
T472:;{object V229;
	V229= (VV[44]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V223);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V230= vs_base[0];
	if(!((V229)==(CMPcar(V230)))){
	goto T477;}}
	V227= CMPcar(((V223))->cc.cc_turbo[12]);
	goto T470;
	goto T477;
T477:;
	V227= Cnil;
	goto T470;
T470:;
	{object V231;
	V231= ((V225))->v.v_self[1];
	{register object V232;
	V232= (V231);
	if(!(type_of((V232))==t_fixnum)){
	goto T484;}
	base[3]= ((((((V227))->v.v_self[fix((V231))])==(VV[73])?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T484;
T484:;
	if(!(type_of((V232))==t_cons)){
	goto T487;}
	base[3]= ((((CMPcdr((V231)))==(VV[73])?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T487;
T487:;
	base[3]= (V223);
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
	{object V233;
	object V234;
	object V235;
	register object V236;
	check_arg(4);
	V233=(base[0]);
	V234=(base[1]);
	V235=(base[2]);
	V236=(base[3]);
	vs_top=sup;
	{object V238;
	object V239;
	V238= CMPcar((V233));
	V239= CMPcdr((V233));
	{object V240;
	if(type_of(V236)==t_structure){
	goto T502;}
	goto T500;
	goto T502;
T502:;
	if(!(((V236)->str.str_def)==(VV[84]))){
	goto T500;}
	V240= STREF(object,(V236),4);
	goto T498;
	goto T500;
T500:;{object V242;
	V242= (VV[44]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V236);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V243= vs_base[0];
	if(!((V242)==(CMPcar(V243)))){
	goto T505;}}
	V240= CMPcar(((V236))->cc.cc_turbo[12]);
	goto T498;
	goto T505;
T505:;
	V240= Cnil;
	goto T498;
T498:;
	{object V244;
	V244= ((V238))->v.v_self[1];
	{register object V245;
	V245= (V244);
	if(!(type_of((V245))==t_fixnum)){
	goto T512;}
	base[4]= ((V240))->v.v_self[fix((V244))]= ((V235));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T512;
T512:;
	if(!(type_of((V245))==t_cons)){
	goto T515;}
	(V244)->c.c_cdr = V235;
	base[4]= V235;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T515;
T515:;
	base[4]= (V236);
	base[5]= (base0[0]->c.c_car);
	base[6]= (V235);
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
	{object V248;
	object V249;
	register object V250;
	check_arg(3);
	V248=(base[0]);
	V249=(base[1]);
	V250=(base[2]);
	vs_top=sup;
	{object V252;
	object V253;
	V252= CMPcar((V248));
	V253= CMPcdr((V248));
	{object V254;
	if(type_of(V250)==t_structure){
	goto T532;}
	goto T530;
	goto T532;
T532:;
	if(!(((V250)->str.str_def)==(VV[79]))){
	goto T530;}
	V254= STREF(object,(V250),4);
	goto T528;
	goto T530;
T530:;{object V256;
	V256= (VV[44]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V250);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V257= vs_base[0];
	if(!((V256)==(CMPcar(V257)))){
	goto T535;}}
	V254= CMPcar(((V250))->cc.cc_turbo[12]);
	goto T528;
	goto T535;
T535:;
	V254= Cnil;
	goto T528;
T528:;
	{register object V258;
	V258= ((V252))->v.v_self[1];
	{register object V259;
	V259= (V258);
	if(!(type_of((V259))==t_fixnum)){
	goto T544;}
	V258= ((V254))->v.v_self[fix((V258))];
	goto T542;
	goto T544;
T544:;
	if(!(type_of((V259))==t_cons)){
	goto T547;}
	V258= CMPcdr((V258));
	goto T542;
	goto T547;
T547:;
	V258= VV[73];}
	goto T542;
T542:;
	if(!(((V258))==(VV[73]))){
	goto T550;}
	base[3]= (V250);
	base[4]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk125)();
	return;
	goto T550;
T550:;
	base[3]= (V258);
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
	{object V260;
	object V261;
	register object V262;
	check_arg(3);
	V260=(base[0]);
	V261=(base[1]);
	V262=(base[2]);
	vs_top=sup;
	{register object V264;
	if(type_of(V262)==t_structure){
	goto T561;}
	goto T559;
	goto T561;
T561:;
	if(!(((V262)->str.str_def)==(VV[69]))){
	goto T559;}
	V264= STREF(object,(V262),0);
	goto T557;
	goto T559;
T559:;{object V266;
	V266= (VV[44]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V262);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V267= vs_base[0];
	if(!((V266)==(CMPcar(V267)))){
	goto T564;}}
	V264= CMPcar(((V262))->cc.cc_turbo[13]);
	goto T557;
	goto T564;
T564:;
	V264= Cnil;
	goto T557;
T557:;
	if(((V264))==Cnil){
	goto T570;}
	{object V268;
	object V269;
	V268= ((V264))->v.v_self[11];{object V270;
	{register long V271;
	V271= 0;
	{register object V272;
	register object V273;
	V272= ((V264))->v.v_self[9];
	V273= CMPcar((V272));
	goto T580;
T580:;
	if(!(((V272))==Cnil)){
	goto T581;}
	V270= Cnil;
	goto T575;
	goto T581;
T581:;
	if(!(((base0[0]->c.c_car))==((V273)))){
	goto T585;}
	V270= CMPmake_fixnum(V271);
	goto T575;
	goto T585;
T585:;
	V271= (long)(V271)+(1);
	V272= CMPcdr((V272));
	V273= CMPcar((V272));
	goto T580;}}
	goto T575;
T575:;
	if(V270==Cnil)goto T574;
	V269= V270;
	goto T573;
	goto T574;
T574:;}
	{register object x= (base0[0]->c.c_car),V274= ((V264))->v.v_self[10];
	while(V274!=Cnil)
	if(EQ(x,V274->c.c_car->c.c_car) &&V274->c.c_car != Cnil){
	V269= (V274->c.c_car);
	goto T573;
	}else V274=V274->c.c_cdr;
	V269= Cnil;}
	goto T573;
T573:;
	{register object V275;
	V275= (V269);
	if(!(type_of((V275))==t_fixnum)){
	goto T596;}
	{object V276;
	if(type_of(V262)==t_structure){
	goto T603;}
	goto T601;
	goto T603;
T603:;
	if(!(((V262)->str.str_def)==(VV[70]))){
	goto T601;}
	V277= STREF(object,(V262),4);
	goto T599;
	goto T601;
T601:;{object V279;
	V279= (VV[44]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V262);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V280= vs_base[0];
	if(!((V279)==(CMPcar(V280)))){
	goto T606;}}
	V277= CMPcar(((V262))->cc.cc_turbo[12]);
	goto T599;
	goto T606;
T606:;
	base[5]= VV[66];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	V277= vs_base[0];
	goto T599;
T599:;
	V281 = fix((V269));
	V276= (V277)->v.v_self[V281];
	if(!(((V276))==((VV[35]->s.s_dbind)))){
	goto T613;}
	base[5]= (*(LnkLI126))((V262));
	base[6]= (V262);
	base[7]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk127)(Lclptr127);
	return;
	goto T613;
T613:;
	base[5]= (V276);
	vs_top=(vs_base=base+5)+1;
	return;}
	goto T596;
T596:;
	if(!(type_of((V275))==t_cons)){
	goto T619;}
	{object V282;
	V282= CMPcdr((V269));
	if(!(((V282))==((VV[35]->s.s_dbind)))){
	goto T623;}
	base[5]= (*(LnkLI126))((V262));
	base[6]= (V262);
	base[7]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk127)(Lclptr127);
	return;
	goto T623;
T623:;
	base[5]= (V282);
	vs_top=(vs_base=base+5)+1;
	return;}
	goto T619;
T619:;
	base[5]= VV[67];
	base[6]= (V268);
	base[7]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+5)+3;
	Lerror();
	return;}}
	goto T570;
T570:;
	base[3]= (V262);
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
	{object V283;
	check_arg(1);
	V283=(base[0]);
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
	base[5]= (V283);
	base[6]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+2)+5;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T635;
T635:;
	{register object V284;
	V284= (base0[0]->c.c_car);
	base[1]= (V284);
	base[2]= VV[56];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk128)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T646;}
	{object V285;
	object V286;
	register object V287;
	V285= STREF(object,(base0[0]->c.c_car),0);
	V286= list(3,(base0[2]->c.c_car),(V283),(base0[1]->c.c_car));
	V287= STREF(object,(base0[0]->c.c_car),4);
	if(((V287))==Cnil){
	goto T654;}
	if((CMPcdr((V287)))!=Cnil){
	goto T654;}
	base[1]= (V286);
	base[2]= CMPcar((V287));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V285);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T654;
T654:;
	base[1]= (V285);
	base[2]= (V286);
	{object V288;
	V288= (V287);
	 vs_top=base+3;
	 while(V288!=Cnil)
	 {vs_push((V288)->c.c_car);V288=(V288)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T646;
T646:;
	base[1]= (V284);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T664;}
	base[1]= (base0[2]->c.c_car);
	base[2]= (V283);
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
	base[3]= (V284);
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
	{object V289;
	object V290;
	check_arg(2);
	V289=(base[0]);
	V290=(base[1]);
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
	base[5]= (V289);
	base[6]= (base0[2]->c.c_car);
	base[7]= (V290);
	base[8]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+3)+6;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T676;
T676:;
	{register object V291;
	V291= (base0[0]->c.c_car);
	base[2]= (V291);
	base[3]= VV[56];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk128)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T688;}
	{object V292;
	object V293;
	register object V294;
	V292= STREF(object,(base0[0]->c.c_car),0);
	V293= list(4,(V289),(base0[2]->c.c_car),(V290),(base0[1]->c.c_car));
	V294= STREF(object,(base0[0]->c.c_car),4);
	if(((V294))==Cnil){
	goto T696;}
	if((CMPcdr((V294)))!=Cnil){
	goto T696;}
	base[2]= (V293);
	base[3]= CMPcar((V294));
	vs_top=(vs_base=base+2)+2;
	{object _funobj = (V292);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T696;
T696:;
	base[2]= (V292);
	base[3]= (V293);
	{object V295;
	V295= (V294);
	 vs_top=base+4;
	 while(V295!=Cnil)
	 {vs_push((V295)->c.c_car);V295=(V295)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T688;
T688:;
	base[2]= (V291);
	vs_top=(vs_base=base+2)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T706;}
	base[2]= (V289);
	base[3]= (base0[2]->c.c_car);
	base[4]= (V290);
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
	base[4]= (V291);
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
	{object V296;
	check_arg(1);
	V296=(base[0]);
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
	base[5]= (V296);
	base[6]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+2)+5;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T719;
T719:;
	{register object V297;
	V297= (base0[0]->c.c_car);
	base[1]= (V297);
	base[2]= VV[56];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk128)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T730;}
	{object V298;
	object V299;
	register object V300;
	V298= STREF(object,(base0[0]->c.c_car),0);
	V299= list(3,(base0[2]->c.c_car),(V296),(base0[1]->c.c_car));
	V300= STREF(object,(base0[0]->c.c_car),4);
	if(((V300))==Cnil){
	goto T738;}
	if((CMPcdr((V300)))!=Cnil){
	goto T738;}
	base[1]= (V299);
	base[2]= CMPcar((V300));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V298);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T738;
T738:;
	base[1]= (V298);
	base[2]= (V299);
	{object V301;
	V301= (V300);
	 vs_top=base+3;
	 while(V301!=Cnil)
	 {vs_push((V301)->c.c_car);V301=(V301)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T730;
T730:;
	base[1]= (V297);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T748;}
	base[1]= (base0[2]->c.c_car);
	base[2]= (V296);
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
	base[3]= (V297);
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
	{object V302;
	object V303;
	object V304;
	check_arg(3);
	V302=(base[0]);
	V303=(base[1]);
	V304=(base[2]);
	vs_top=sup;{object V305;
	V305= (VV[35]->s.s_dbind);
	base[3]= ((((V305)==(CMPcdr((base0[0]->c.c_car)))?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V306;
	object V307;
	object V308;
	check_arg(3);
	V306=(base[0]);
	V307=(base[1]);
	V308=(base[2]);
	vs_top=sup;{object V309;
	V309= (VV[35]->s.s_dbind);
	base[3]= ((((V309)==((STREF(object,(V307),4))->v.v_self[fix((base0[0]->c.c_car))])?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V310;
	object V311;
	object V312;
	check_arg(3);
	V310=(base[0]);
	V311=(base[1]);
	V312=(base[2]);
	vs_top=sup;{object V313;
	V313= (VV[35]->s.s_dbind);
	base[3]= ((((V313)==((CMPcar(((V311))->cc.cc_turbo[12]))->v.v_self[fix((base0[0]->c.c_car))])?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V314;
	object V315;
	object V316;
	object V317;
	check_arg(4);
	V314=(base[0]);
	V315=(base[1]);
	V316=(base[2]);
	V317=(base[3]);
	vs_top=sup;
	{object V318;
	V318= (base0[0]->c.c_car);
	((V318))->c.c_cdr = V314;
	base[4]= V314;
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
	{object V320;
	object V321;
	object V322;
	object V323;
	check_arg(4);
	V320=(base[0]);
	V321=(base[1]);
	V322=(base[2]);
	V323=(base[3]);
	vs_top=sup;
	base[4]= (STREF(object,(V322),4))->v.v_self[fix((base0[0]->c.c_car))]= ((V320));
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
	{object V324;
	object V325;
	object V326;
	object V327;
	check_arg(4);
	V324=(base[0]);
	V325=(base[1]);
	V326=(base[2]);
	V327=(base[3]);
	vs_top=sup;
	base[4]= (CMPcar(((V326))->cc.cc_turbo[12]))->v.v_self[fix((base0[0]->c.c_car))]= ((V324));
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
	{object V328;
	object V329;
	object V330;
	check_arg(3);
	V328=(base[0]);
	V329=(base[1]);
	V330=(base[2]);
	vs_top=sup;
	{object V331;
	V331= CMPcdr((base0[1]->c.c_car));
	if(!(((V331))==((VV[35]->s.s_dbind)))){
	goto T762;}
	base[3]= (V328);
	base[4]= (V329);
	base[5]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk127)(Lclptr127);
	return;
	goto T762;
T762:;
	base[3]= (V331);
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
	{object V332;
	register object V333;
	object V334;
	check_arg(3);
	V332=(base[0]);
	V333=(base[1]);
	V334=(base[2]);
	vs_top=sup;
	if(type_of(V333)==t_structure){
	goto T770;}
	goto T769;
	goto T770;
T770:;
	if(((V333)->str.str_def)==(VV[49])){
	goto T767;}
	goto T769;
T769:;
	base[3]= VV[47];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T767;
T767:;
	{object V336;
	V336= (STREF(object,(V333),4))->v.v_self[fix((base0[1]->c.c_car))];
	if(!(((V336))==((VV[35]->s.s_dbind)))){
	goto T775;}
	base[3]= (V332);
	base[4]= (V333);
	base[5]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk127)(Lclptr127);
	return;
	goto T775;
T775:;
	base[3]= (V336);
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
	{object V337;
	object V338;
	object V339;
	check_arg(3);
	V337=(base[0]);
	V338=(base[1]);
	V339=(base[2]);
	vs_top=sup;{object V340;
	V340= (VV[44]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V338);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V341= vs_base[0];
	if((V340)==(CMPcar(V341))){
	goto T780;}}
	base[3]= VV[45];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T780;
T780:;
	{object V342;
	V342= (CMPcar(((V338))->cc.cc_turbo[12]))->v.v_self[fix((base0[1]->c.c_car))];
	if(!(((V342))==((VV[35]->s.s_dbind)))){
	goto T789;}
	base[3]= (V337);
	base[4]= (V338);
	base[5]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk127)(Lclptr127);
	return;
	goto T789;
T789:;
	base[3]= (V342);
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
	{object V343;
	object V344;
	object V345;
	check_arg(3);
	V343=(base[0]);
	V344=(base[1]);
	V345=(base[2]);
	vs_top=sup;
	base[3]= (V344);
	vs_top=(vs_base=base+3)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V346= vs_base[0];
	V347 = (VV[35]->s.s_dbind);
	base[3]= ((((V346)==(V347)?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V348;
	object V349;
	object V350;
	object V351;
	check_arg(4);
	V348=(base[0]);
	V349=(base[1]);
	V350=(base[2]);
	V351=(base[3]);
	vs_top=sup;
	base[4]= (V348);
	base[5]= (V350);
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
	{object V352;
	object V353;
	object V354;
	check_arg(3);
	V352=(base[0]);
	V353=(base[1]);
	V354=(base[2]);
	vs_top=sup;
	{object V355;
	V355= (
	(type_of((base0[0]->c.c_car)) == t_sfun ?(*(((base0[0]->c.c_car))->sfn.sfn_self)):
	(fcall.argd=1,type_of((base0[0]->c.c_car))==t_vfun) ?
	(*(((base0[0]->c.c_car))->sfn.sfn_self)):
	(fcall.fun=((base0[0]->c.c_car)),fcalln))((V353)));
	if(!(((V355))==((VV[35]->s.s_dbind)))){
	goto T800;}
	base[3]= (V352);
	base[4]= (V353);
	base[6]= (V354);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk102)(Lclptr102);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk127)(Lclptr127);
	return;
	goto T800;
T800:;
	base[3]= (V355);
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
	{object V356;
	check_arg(1);
	V356=(base[0]);
	vs_top=sup;{object V357;
	V357= (VV[35]->s.s_dbind);
	base[1]= ((((V357)==(CMPcdr((base0[0]->c.c_car)))?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V358;
	check_arg(1);
	V358=(base[0]);
	vs_top=sup;{object V359;
	V359= (VV[35]->s.s_dbind);
	base[1]= ((((V359)==((STREF(object,(V358),4))->v.v_self[fix((base0[0]->c.c_car))])?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V360;
	check_arg(1);
	V360=(base[0]);
	vs_top=sup;{object V361;
	V361= (VV[35]->s.s_dbind);
	base[1]= ((((V361)==((CMPcar(((V360))->cc.cc_turbo[12]))->v.v_self[fix((base0[0]->c.c_car))])?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V362;
	object V363;
	check_arg(2);
	V362=(base[0]);
	V363=(base[1]);
	vs_top=sup;
	{object V364;
	V364= (base0[0]->c.c_car);
	((V364))->c.c_cdr = V362;
	base[2]= V362;
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
	{object V366;
	object V367;
	check_arg(2);
	V366=(base[0]);
	V367=(base[1]);
	vs_top=sup;
	base[2]= (STREF(object,(V367),4))->v.v_self[fix((base0[0]->c.c_car))]= ((V366));
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
	{object V368;
	object V369;
	check_arg(2);
	V368=(base[0]);
	V369=(base[1]);
	vs_top=sup;
	base[2]= (CMPcar(((V369))->cc.cc_turbo[12]))->v.v_self[fix((base0[0]->c.c_car))]= ((V368));
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
	{object V370;
	check_arg(1);
	V370=(base[0]);
	vs_top=sup;
	{object V371;
	V371= CMPcdr((base0[0]->c.c_car));
	if(!(((V371))==((VV[35]->s.s_dbind)))){
	goto T810;}
	base[1]= (*(LnkLI126))((V370));
	base[2]= (V370);
	base[3]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk127)(Lclptr127);
	return;
	goto T810;
T810:;
	base[1]= (V371);
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
	{object V372;
	check_arg(1);
	V372=(base[0]);
	vs_top=sup;
	{object V373;
	V373= (STREF(object,(V372),4))->v.v_self[fix((base0[0]->c.c_car))];
	if(!(((V373))==((VV[35]->s.s_dbind)))){
	goto T817;}
	base[1]= (*(LnkLI126))((V372));
	base[2]= (V372);
	base[3]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk127)(Lclptr127);
	return;
	goto T817;
T817:;
	base[1]= (V373);
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
	{object V374;
	check_arg(1);
	V374=(base[0]);
	vs_top=sup;
	{object V375;
	V375= (CMPcar(((V374))->cc.cc_turbo[12]))->v.v_self[fix((base0[0]->c.c_car))];
	if(!(((V375))==((VV[35]->s.s_dbind)))){
	goto T824;}
	base[1]= (*(LnkLI126))((V374));
	base[2]= (V374);
	base[3]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk127)(Lclptr127);
	return;
	goto T824;
T824:;
	base[1]= (V375);
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
	{object V376;
	check_arg(1);
	V376=(base[0]);
	vs_top=sup;
	base[1]= (V376);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V377= vs_base[0];
	V378 = (VV[35]->s.s_dbind);
	base[1]= ((((V377)==(V378)?Ct:Cnil))==Cnil?Ct:Cnil);
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

