
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
	{object V5= base[3];
	if((V5!= VV[35]))goto T2;
	V3= VV[5];
	goto T1;
	goto T2;
T2:;
	if((V5!= VV[38]))goto T3;
	V3= VV[6];
	goto T1;
	goto T3;
T3:;
	if((V5!= VV[57]))goto T4;
	V3= VV[7];
	goto T1;
	goto T4;
T4:;
	base[4]= VV[8];
	base[5]= VV[9];
	base[6]= VV[10];
	base[7]= VV[11];
	base[8]= base[3];
	base[9]= VV[12];
	base[10]= VV[13];
	base[11]= VV[14];
	base[12]= VV[15];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk129)();
	vs_top=sup;
	V3= vs_base[0];}
	goto T1;
T1:;
	V6= list(3,VV[3],base[2],list(2,VV[4],V3));
	V7= list(2,VV[19],base[2]);
	V8= list(4,VV[0],/* INLINE-ARGS */V7,list(2,VV[20],list(2,VV[19],base[2])),VV[21]);
	V9= list(2,VV[22],base[2]);
	base[4]= list(4,VV[0],/* INLINE-ARGS */V2,list(3,VV[2],/* INLINE-ARGS */V6,list(3,VV[16],list(6,VV[17],Cnil,VV[18],/* INLINE-ARGS */V8,/* INLINE-ARGS */V9,symbol_name(base[3])),VV[23])),VV[24]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function SLOT-READER-SYMBOL	*/

static object LI2(V11)

register object V11;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if(!(type_of((V11))==t_symbol)){
	goto T15;}{object V12;
	{object V13 =((V11))->s.s_plist;
	 object ind= VV[5];
	while(V13!=Cnil){
	if(V13->c.c_car==ind){
	V12= (V13->c.c_cdr->c.c_car);
	goto T18;
	}else V13=V13->c.c_cdr->c.c_cdr;}
	V12= Cnil;}
	goto T18;
T18:;
	if(V12==Cnil)goto T17;
	{object V14 = V12;
	VMR2(V14)}
	goto T17;
T17:;}
	base[1]= Cnil;
	base[2]= VV[18];
	base[4]= (V11);
	vs_top=(vs_base=base+4)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T24;}
	base[5]= (V11);
	vs_top=(vs_base=base+5)+1;
	Lsymbol_package();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lpackage_name();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T22;
	goto T24;
T24:;
	base[3]= VV[21];
	goto T22;
T22:;
	base[4]= symbol_name((V11));
	base[5]= VV[25];
	vs_top=(vs_base=base+1)+5;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[23]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V15 = vs_base[0];
	VMR2(V15)}
	goto T15;
T15:;
	base[0]= VV[26];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V16 = vs_base[0];
	VMR2(V16)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SLOT-WRITER-SYMBOL	*/

static object LI3(V18)

register object V18;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	if(!(type_of((V18))==t_symbol)){
	goto T34;}{object V19;
	{object V20 =((V18))->s.s_plist;
	 object ind= VV[6];
	while(V20!=Cnil){
	if(V20->c.c_car==ind){
	V19= (V20->c.c_cdr->c.c_car);
	goto T37;
	}else V20=V20->c.c_cdr->c.c_cdr;}
	V19= Cnil;}
	goto T37;
T37:;
	if(V19==Cnil)goto T36;
	{object V21 = V19;
	VMR3(V21)}
	goto T36;
T36:;}
	base[1]= Cnil;
	base[2]= VV[18];
	base[4]= (V18);
	vs_top=(vs_base=base+4)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T43;}
	base[5]= (V18);
	vs_top=(vs_base=base+5)+1;
	Lsymbol_package();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lpackage_name();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T41;
	goto T43;
T43:;
	base[3]= VV[21];
	goto T41;
T41:;
	base[4]= symbol_name((V18));
	base[5]= VV[27];
	vs_top=(vs_base=base+1)+5;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[23]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V22 = vs_base[0];
	VMR3(V22)}
	goto T34;
T34:;
	base[0]= VV[26];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V23 = vs_base[0];
	VMR3(V23)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SLOT-BOUNDP-SYMBOL	*/

static object LI4(V25)

register object V25;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if(!(type_of((V25))==t_symbol)){
	goto T53;}{object V26;
	{object V27 =((V25))->s.s_plist;
	 object ind= VV[7];
	while(V27!=Cnil){
	if(V27->c.c_car==ind){
	V26= (V27->c.c_cdr->c.c_car);
	goto T56;
	}else V27=V27->c.c_cdr->c.c_cdr;}
	V26= Cnil;}
	goto T56;
T56:;
	if(V26==Cnil)goto T55;
	{object V28 = V26;
	VMR4(V28)}
	goto T55;
T55:;}
	base[1]= Cnil;
	base[2]= VV[18];
	base[4]= (V25);
	vs_top=(vs_base=base+4)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T62;}
	base[5]= (V25);
	vs_top=(vs_base=base+5)+1;
	Lsymbol_package();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lpackage_name();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T60;
	goto T62;
T62:;
	base[3]= VV[21];
	goto T60;
T60:;
	base[4]= symbol_name((V25));
	base[5]= VV[28];
	vs_top=(vs_base=base+1)+5;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[23]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V29 = vs_base[0];
	VMR4(V29)}
	goto T53;
T53:;
	base[0]= VV[26];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V30 = vs_base[0];
	VMR4(V30)}
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
	{object V31=base[0]->c.c_cdr;
	if(endp(V31))invalid_macro_call();
	base[2]= (V31->c.c_car);
	V31=V31->c.c_cdr;
	if(endp(V31))invalid_macro_call();
	base[3]= (V31->c.c_car);
	V31=V31->c.c_cdr;
	if(endp(V31))invalid_macro_call();
	base[4]= (V31->c.c_car);
	V31=V31->c.c_cdr;
	base[5]= V31;}
	V32= list(2,VV[29],list(2,VV[4],base[2]));
	V33= make_cons(base[2],base[5]);
	V34= list(2,VV[4],base[2]);
	base[6]= list(4,VV[0],/* INLINE-ARGS */V32,/* INLINE-ARGS */V33,list(3,VV[30],/* INLINE-ARGS */V34,list(2,VV[4],base[3])));
	vs_top=(vs_base=base+6)+1;
	return;
}
/*	local entry for function NO-SLOT	*/

static object LI6(V37,V38)

object V37;object V38;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	base[0]= VV[31];
	base[1]= (V38);
	base[2]= (V37);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V39 = vs_base[0];
	VMR6(V39)}
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
	{object V40=base[0]->c.c_cdr;
	if(endp(V40))invalid_macro_call();
	base[2]= (V40->c.c_car);
	V40=V40->c.c_cdr;
	if(endp(V40))invalid_macro_call();
	base[3]= (V40->c.c_car);
	V40=V40->c.c_cdr;
	if(!endp(V40))invalid_macro_call();}
	base[4]= base[3];
	vs_top=(vs_base=base+4)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T74;}
	base[4]= VV[32];
	base[5]= VV[33];
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
	goto T74;
T74:;
	{object V41;
	object V42;
	base[6]= base[3];
	vs_top=(vs_base=base+6)+1;
	Leval();
	vs_top=sup;
	V41= vs_base[0];
	V42= (*(LnkLI130))((V41));
	base[6]= list(5,VV[34],(V42),(V41),VV[35],base[2]);
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
	{object V43=base[0]->c.c_cdr;
	if(endp(V43))invalid_macro_call();
	base[2]= (V43->c.c_car);
	V43=V43->c.c_cdr;
	if(endp(V43))invalid_macro_call();
	base[3]= (V43->c.c_car);
	V43=V43->c.c_cdr;
	if(endp(V43))invalid_macro_call();
	base[4]= (V43->c.c_car);
	V43=V43->c.c_cdr;
	if(!endp(V43))invalid_macro_call();}
	base[5]= base[3];
	vs_top=(vs_base=base+5)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T83;}
	base[5]= VV[36];
	base[6]= VV[37];
	vs_top=(vs_base=base+5)+2;
	Lerror();
	vs_top=sup;
	goto T83;
T83:;
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
	{object V44;
	object V45;
	object V46;
	object V47;
	base[9]= base[3];
	vs_top=(vs_base=base+9)+1;
	Leval();
	vs_top=sup;
	V44= vs_base[0];
	base[9]= base[4];
	vs_top=(vs_base=base+9)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T101;}
	if(type_of(base[4])!=t_cons){
	goto T101;}
	{object V48;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V48= vs_base[0];
	{object V49;
	V50= list(2,(V48),base[2]);
	V49= make_cons(/* INLINE-ARGS */V50,Cnil);
	base[2]= (V48);
	V45= (V49);
	goto T99;}}
	goto T101;
T101:;
	V45= Cnil;
	goto T99;
T99:;
	V46= (*(LnkLI131))((V44));
	V47= list(6,VV[34],(V46),(V44),VV[38],base[4],base[2]);
	if(((V45))==Cnil){
	goto T113;}
	base[9]= list(3,VV[39],(V45),(V47));
	vs_top=(vs_base=base+9)+1;
	return;
	goto T113;
T113:;
	base[9]= (V47);
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
	{object V51=base[0]->c.c_cdr;
	if(endp(V51))invalid_macro_call();
	base[2]= (V51->c.c_car);
	V51=V51->c.c_cdr;
	if(endp(V51))invalid_macro_call();
	base[3]= (V51->c.c_car);
	V51=V51->c.c_cdr;
	if(!endp(V51))invalid_macro_call();}
	base[4]= base[3];
	vs_top=(vs_base=base+4)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T115;}
	base[4]= VV[40];
	base[5]= VV[41];
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
	goto T115;
T115:;
	{object V52;
	object V53;
	base[6]= base[3];
	vs_top=(vs_base=base+6)+1;
	Leval();
	vs_top=sup;
	V52= vs_base[0];
	V53= (*(LnkLI132))((V52));
	base[6]= list(3,VV[42],base[2],list(2,VV[4],(V52)));
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	local entry for function STRUCTURE-SLOT-BOUNDP	*/

static object LI10(V55)

object V55;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V56 = Ct;
	VMR10(V56)}
	return Cnil;
}
/*	local entry for function MAKE-STRUCTURE-SLOT-BOUNDP-FUNCTION	*/

static object LI11(V58)

object V58;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{object V59;
	base[2]= (V58);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk133)(Lclptr133);
	vs_top=sup;
	base[0]= vs_base[0];
	base[0]=MMcons(base[0],Cnil);
	V59= 
	make_cclosure_new(LC40,Cnil,base[0],Cdata);
	base[2]= (V59);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk134)();
	vs_top=sup;
	{object V60 = (V59);
	VMR11(V60)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-OPTIMIZED-STD-ACCESSOR-METHOD-FUNCTION	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{register object V61;
	register object V62;
	object V63;
	check_arg(3);
	V61=(base[0]);
	V62=(base[1]);
	V63=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (V61);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk135)(Lclptr135);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T130;}
	{object V65= V63;
	if((V65!= VV[35]))goto T133;
	base[3]= (V62);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk133)(Lclptr133);
	return;
	goto T133;
T133:;
	if((V65!= VV[38]))goto T135;
	base[3]= (V62);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk136)(Lclptr136);
	return;
	goto T135;
T135:;
	if((V65!= VV[57]))goto T137;
	base[3]= (*(LnkLI137))((V62));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T137;
T137:;
	base[3]= VV[8];
	base[4]= VV[9];
	base[5]= VV[10];
	base[6]= VV[11];
	base[7]= V63;
	base[8]= VV[12];
	base[9]= VV[44];
	base[10]= VV[14];
	base[11]= VV[45];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk129)();
	return;}
	goto T130;
T130:;
	{object V66;
	object V67;
	object V68;
	object V69;
	object V70;
	base[8]= (V61);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk138)(Lclptr138);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T149;}
	V66= Cnil;
	goto T147;
	goto T149;
T149:;
	base[8]= (V61);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk139)(Lclptr139);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T153;}
	V66= Ct;
	goto T147;
	goto T153;
T153:;
	base[8]= VV[46];
	base[9]= (V61);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	vs_top=sup;
	V66= vs_base[0];
	goto T147;
T147:;
	base[8]= (V62);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk140)(Lclptr140);
	vs_top=sup;
	V67= vs_base[0];
	base[8]= (V62);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk141)(Lclptr141);
	vs_top=sup;
	V68= vs_base[0];
	{object V72= V63;
	if((V72!= VV[35]))goto T163;
	V69= (VV[142]->s.s_gfdef);
	goto T162;
	goto T163;
T163:;
	if((V72!= VV[38]))goto T164;
	V69= (VV[143]->s.s_gfdef);
	goto T162;
	goto T164;
T164:;
	if((V72!= VV[57]))goto T165;
	V69= (VV[144]->s.s_gfdef);
	goto T162;
	goto T165;
T165:;
	base[8]= VV[8];
	base[9]= VV[9];
	base[10]= VV[10];
	base[11]= VV[11];
	base[12]= V63;
	base[13]= VV[12];
	base[14]= VV[47];
	base[15]= VV[14];
	base[16]= VV[48];
	vs_top=(vs_base=base+8)+9;
	(void) (*Lnk129)();
	vs_top=sup;
	V69= vs_base[0];}
	goto T162;
T162:;
	V70= (
	(type_of((V69)) == t_sfun ?(*(((V69))->sfn.sfn_self)):
	(fcall.argd=3,type_of((V69))==t_vfun) ?
	(*(((V69))->sfn.sfn_self)):
	(fcall.fun=((V69)),fcalln))((V66),(V67),(V68)));
	base[8]= (V70);
	base[9]= (V68);
	vs_top=(vs_base=base+8)+2;
	return;}
	}
}
/*	function definition for MAKE-OPTIMIZED-STD-READER-METHOD-FUNCTION	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V73;
	check_arg(3);
	V73=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	base[2]=MMcons(base[2],base[1]);
	vs_top=sup;
	{object V74;
	V74= (base[2]->c.c_car);
	{register object V75;
	V75= (V74);
	if(!(type_of((V75))==t_fixnum)){
	goto T180;}
	if(((V73))==Cnil){
	goto T183;}
	base[3]= 
	make_cclosure_new(LC41,Cnil,base[2],Cdata);
	goto T178;
	goto T183;
T183:;
	base[3]= 
	make_cclosure_new(LC42,Cnil,base[2],Cdata);
	goto T178;
	goto T180;
T180:;
	if(!(type_of((V75))==t_cons)){
	goto T186;}
	base[3]= 
	make_cclosure_new(LC43,Cnil,base[2],Cdata);
	goto T178;
	goto T186;
T186:;
	base[4]= VV[8];
	base[5]= VV[9];
	base[6]= VV[50];
	base[7]= VV[11];
	base[8]= (V74);
	base[9]= VV[12];
	base[10]= VV[51];
	base[11]= VV[14];
	base[12]= VV[52];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk129)();
	vs_top=sup;
	base[3]= vs_base[0];}}
	goto T178;
T178:;
	base[4]= list(2,VV[35],(base[1]->c.c_car));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk145)();
	return;
	}
}
/*	function definition for MAKE-OPTIMIZED-STD-WRITER-METHOD-FUNCTION	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V76;
	object V77;
	check_arg(3);
	V76=(base[0]);
	V77=(base[1]);
	base[2]=MMcons(base[2],Cnil);
	vs_top=sup;
	{object V78;
	V78= (base[2]->c.c_car);
	{register object V79;
	V79= (V78);
	if(!(type_of((V79))==t_fixnum)){
	goto T200;}
	if(((V76))==Cnil){
	goto T203;}
	base[3]= 
	make_cclosure_new(LC44,Cnil,base[2],Cdata);
	goto T198;
	goto T203;
T203:;
	base[3]= 
	make_cclosure_new(LC45,Cnil,base[2],Cdata);
	goto T198;
	goto T200;
T200:;
	if(!(type_of((V79))==t_cons)){
	goto T206;}
	base[3]= 
	make_cclosure_new(LC46,Cnil,base[2],Cdata);
	goto T198;
	goto T206;
T206:;
	base[4]= VV[8];
	base[5]= VV[9];
	base[6]= VV[50];
	base[7]= VV[11];
	base[8]= (V78);
	base[9]= VV[12];
	base[10]= VV[53];
	base[11]= VV[14];
	base[12]= VV[54];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk129)();
	vs_top=sup;
	base[3]= vs_base[0];}}
	goto T198;
T198:;
	base[4]= list(2,VV[38],(V77));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk145)();
	return;
	}
}
/*	function definition for MAKE-OPTIMIZED-STD-BOUNDP-METHOD-FUNCTION	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	{object V80;
	object V81;
	check_arg(3);
	V80=(base[0]);
	V81=(base[1]);
	base[2]=MMcons(base[2],Cnil);
	vs_top=sup;
	{object V82;
	V82= (base[2]->c.c_car);
	{register object V83;
	V83= (V82);
	if(!(type_of((V83))==t_fixnum)){
	goto T220;}
	if(((V80))==Cnil){
	goto T223;}
	base[3]= 
	make_cclosure_new(LC47,Cnil,base[2],Cdata);
	goto T218;
	goto T223;
T223:;
	base[3]= 
	make_cclosure_new(LC48,Cnil,base[2],Cdata);
	goto T218;
	goto T220;
T220:;
	if(!(type_of((V83))==t_cons)){
	goto T226;}
	base[3]= 
	make_cclosure_new(LC49,Cnil,base[2],Cdata);
	goto T218;
	goto T226;
T226:;
	base[4]= VV[8];
	base[5]= VV[9];
	base[6]= VV[50];
	base[7]= VV[11];
	base[8]= (V82);
	base[9]= VV[12];
	base[10]= VV[55];
	base[11]= VV[14];
	base[12]= VV[56];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk129)();
	vs_top=sup;
	base[3]= vs_base[0];}}
	goto T218;
T218:;
	base[4]= list(2,VV[57],(V81));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk145)();
	return;
	}
}
/*	local entry for function MAKE-OPTIMIZED-STRUCTURE-SLOT-VALUE-USING-CLASS-METHOD-FUNCTION	*/

static object LI17(V85)

object V85;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	base[0]=MMcons((V85),Cnil);
	{object V86 = 
	make_cclosure_new(LC50,Cnil,base[0],Cdata);
	VMR16(V86)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-OPTIMIZED-STRUCTURE-SETF-SLOT-VALUE-USING-CLASS-METHOD-FUNCTION	*/

static object LI19(V88)

object V88;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	base[0]=MMcons((V88),Cnil);
	{object V89 = 
	make_cclosure_new(LC51,Cnil,base[0],Cdata);
	VMR17(V89)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-OPTIMIZED-STRUCTURE-SLOT-BOUNDP-USING-CLASS-METHOD-FUNCTION	*/

static object LI21(V91)

object V91;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	base[0]=MMcons((V91),Cnil);
	{object V92 = 
	make_cclosure_new(LC52,Cnil,base[0],Cdata);
	VMR18(V92)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-OPTIMIZED-STD-SLOT-VALUE-USING-CLASS-METHOD-FUNCTION	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{register object V93;
	register object V94;
	object V95;
	check_arg(3);
	V93=(base[0]);
	V94=(base[1]);
	V95=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (V93);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk135)(Lclptr135);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T239;}
	{object V97= V95;
	if((V97!= VV[35]))goto T242;
	base[3]= (V94);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk133)(Lclptr133);
	vs_top=sup;
	V98= vs_base[0];
	base[3]= (*(LnkLI146))(V98);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T242;
T242:;
	if((V97!= VV[38]))goto T245;
	base[3]= (V94);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk136)(Lclptr136);
	vs_top=sup;
	V99= vs_base[0];
	base[3]= (*(LnkLI147))(V99);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T245;
T245:;
	if((V97!= VV[57]))goto T248;
	base[3]= (V94);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk136)(Lclptr136);
	vs_top=sup;
	V100= vs_base[0];
	base[3]= (*(LnkLI148))(V100);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T248;
T248:;
	base[3]= VV[8];
	base[4]= VV[9];
	base[5]= VV[10];
	base[6]= VV[11];
	base[7]= V95;
	base[8]= VV[12];
	base[9]= VV[58];
	base[10]= VV[14];
	base[11]= VV[59];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk129)();
	return;}
	goto T239;
T239:;
	{object V101;
	object V102;
	object V103;
	object V104;
	base[7]= (V93);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk138)(Lclptr138);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T262;}
	V101= Cnil;
	goto T260;
	goto T262;
T262:;
	base[7]= (V93);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk139)(Lclptr139);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T266;}
	V101= Ct;
	goto T260;
	goto T266;
T266:;
	base[7]= VV[60];
	base[8]= (V93);
	vs_top=(vs_base=base+7)+2;
	Lerror();
	vs_top=sup;
	V101= vs_base[0];
	goto T260;
T260:;
	base[7]= (V94);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk140)(Lclptr140);
	vs_top=sup;
	V102= vs_base[0];
	base[7]= (V94);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk141)(Lclptr141);
	vs_top=sup;
	V103= vs_base[0];
	{object V106= V95;
	if((V106!= VV[35]))goto T276;
	V104= (VV[149]->s.s_gfdef);
	goto T275;
	goto T276;
T276:;
	if((V106!= VV[38]))goto T277;
	V104= (VV[150]->s.s_gfdef);
	goto T275;
	goto T277;
T277:;
	if((V106!= VV[57]))goto T278;
	V104= (VV[151]->s.s_gfdef);
	goto T275;
	goto T278;
T278:;
	base[7]= VV[8];
	base[8]= VV[9];
	base[9]= VV[10];
	base[10]= VV[11];
	base[11]= V95;
	base[12]= VV[12];
	base[13]= VV[61];
	base[14]= VV[14];
	base[15]= VV[62];
	vs_top=(vs_base=base+7)+9;
	(void) (*Lnk129)();
	vs_top=sup;
	V104= vs_base[0];}
	goto T275;
T275:;
	base[8]= (V101);
	base[9]= (V102);
	base[10]= (V103);
	vs_top=(vs_base=base+8)+3;
	{object _funobj = (V104);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= (V103);
	vs_top=(vs_base=base+7)+2;
	return;}
	}
}
/*	local entry for function MAKE-OPTIMIZED-STD-SLOT-VALUE-USING-CLASS-METHOD-FUNCTION	*/

static object LI24(V110,V111,V112)

object V110;object V111;object V112;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	base[0]=MMcons((V112),Cnil);
	base[1]=MMcons((V111),base[0]);
	{object V113;
	V113= (base[0]->c.c_car);
	{register object V114;
	V114= (V113);
	if(!(type_of((V114))==t_fixnum)){
	goto T294;}
	if(((V110))==Cnil){
	goto T297;}
	{object V115 = 
	make_cclosure_new(LC53,Cnil,base[1],Cdata);
	VMR20(V115)}
	goto T297;
T297:;
	{object V116 = 
	make_cclosure_new(LC54,Cnil,base[1],Cdata);
	VMR20(V116)}
	goto T294;
T294:;
	if(!(type_of((V114))==t_cons)){
	goto T300;}
	{object V117 = 
	make_cclosure_new(LC55,Cnil,base[1],Cdata);
	VMR20(V117)}
	goto T300;
T300:;
	base[2]= VV[8];
	base[3]= VV[9];
	base[4]= VV[50];
	base[5]= VV[11];
	base[6]= (V113);
	base[7]= VV[12];
	base[8]= VV[70];
	base[9]= VV[14];
	base[10]= VV[71];
	vs_top=(vs_base=base+2)+9;
	(void) (*Lnk129)();
	vs_top=sup;
	{object V118 = vs_base[0];
	VMR20(V118)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-OPTIMIZED-STD-SETF-SLOT-VALUE-USING-CLASS-METHOD-FUNCTION	*/

static object LI26(V122,V123,V124)

object V122;object V123;object V124;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	base[0]=MMcons((V124),Cnil);
	{object V125;
	V125= (base[0]->c.c_car);
	{register object V126;
	V126= (V125);
	if(!(type_of((V126))==t_fixnum)){
	goto T312;}
	if(((V122))==Cnil){
	goto T315;}
	{object V127 = 
	make_cclosure_new(LC56,Cnil,base[0],Cdata);
	VMR21(V127)}
	goto T315;
T315:;
	{object V128 = 
	make_cclosure_new(LC57,Cnil,base[0],Cdata);
	VMR21(V128)}
	goto T312;
T312:;
	if(!(type_of((V126))==t_cons)){
	goto T318;}
	{object V129 = 
	make_cclosure_new(LC58,Cnil,base[0],Cdata);
	VMR21(V129)}
	goto T318;
T318:;
	base[1]= VV[8];
	base[2]= VV[9];
	base[3]= VV[50];
	base[4]= VV[11];
	base[5]= (V125);
	base[6]= VV[12];
	base[7]= VV[74];
	base[8]= VV[14];
	base[9]= VV[75];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk129)();
	vs_top=sup;
	{object V130 = vs_base[0];
	VMR21(V130)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-OPTIMIZED-STD-SLOT-BOUNDP-USING-CLASS-METHOD-FUNCTION	*/

static object LI28(V134,V135,V136)

object V134;object V135;object V136;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	base[0]=MMcons((V136),Cnil);
	{object V137;
	V137= (base[0]->c.c_car);
	{register object V138;
	V138= (V137);
	if(!(type_of((V138))==t_fixnum)){
	goto T330;}
	if(((V134))==Cnil){
	goto T333;}
	{object V139 = 
	make_cclosure_new(LC59,Cnil,base[0],Cdata);
	VMR22(V139)}
	goto T333;
T333:;
	{object V140 = 
	make_cclosure_new(LC60,Cnil,base[0],Cdata);
	VMR22(V140)}
	goto T330;
T330:;
	if(!(type_of((V138))==t_cons)){
	goto T336;}
	{object V141 = 
	make_cclosure_new(LC61,Cnil,base[0],Cdata);
	VMR22(V141)}
	goto T336;
T336:;
	base[1]= VV[8];
	base[2]= VV[9];
	base[3]= VV[50];
	base[4]= VV[11];
	base[5]= (V137);
	base[6]= VV[12];
	base[7]= VV[78];
	base[8]= VV[14];
	base[9]= VV[79];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk129)();
	vs_top=sup;
	{object V142 = vs_base[0];
	VMR22(V142)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-ACCESSOR-FROM-SVUC-METHOD-FUNCTION	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{object V143;
	check_arg(4);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	base[2]=MMcons(base[2],base[1]);
	V143=(base[3]);
	vs_top=sup;
	{object V144= (V143);
	if((V144!= VV[35]))goto T348;
	base[4]= 
	make_cclosure_new(LC62,Cnil,base[2],Cdata);
	goto T347;
	goto T348;
T348:;
	if((V144!= VV[38]))goto T349;
	base[4]= 
	make_cclosure_new(LC63,Cnil,base[2],Cdata);
	goto T347;
	goto T349;
T349:;
	if((V144!= VV[57]))goto T350;
	base[4]= 
	make_cclosure_new(LC64,Cnil,base[2],Cdata);
	goto T347;
	goto T350;
T350:;
	base[4]= Cnil;}
	goto T347;
T347:;
	base[6]= (base[0]->c.c_car);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk152)(Lclptr152);
	vs_top=sup;
	V145= vs_base[0];
	base[6]= (base[1]->c.c_car);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk140)(Lclptr140);
	vs_top=sup;
	V146= vs_base[0];
	base[5]= list(3,(V143),V145,V146);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk145)();
	return;
	}
}
/*	local entry for function MAKE-INTERNAL-READER-METHOD-FUNCTION	*/

static object LI31(V149,V150)

object V149;object V150;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	base[0]=MMcons((V150),Cnil);
	V151= list(3,VV[89],(V149),(base[0]->c.c_car));
	V152= 
	make_cclosure_new(LC65,Cnil,base[0],Cdata);
	{object V153 = listA(3,VV[88],/* INLINE-ARGS */V151,listA(3,VV[90],V152,VV[102]));
	VMR24(V153)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-STD-READER-METHOD-FUNCTION	*/

static object LI33(V156,V157)

object V156;object V157;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	base[0]=MMcons((V157),Cnil);
	{object V158;
	register object V159;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V158= vs_base[0];
	V160= 
	make_cclosure_new(LC66,Cnil,base[0],Cdata);
	base[3]= listA(3,VV[90],V160,VV[113]);
	vs_top=(vs_base=base+3)+1;
	Lcopy_tree();
	vs_top=sup;
	V159= vs_base[0];
	{object V163;
	V164= list(2,Cnil,(base[0]->c.c_car));
	V163= make_cons(/* INLINE-ARGS */V164,Cnil);
	{object V165;
	base[5]= (V159);
	base[6]= VV[107];
	base[7]= Cnil;
	vs_top=(vs_base=base+5)+3;
	Lgetf();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V163);
	base[6]= VV[108];
	vs_top=(vs_base=base+4)+3;
	siLput_f();
	vs_top=sup;
	V165= vs_base[0];
	{object V166;
	base[4]= (V159);
	base[5]= (V165);
	base[6]= VV[107];
	vs_top=(vs_base=base+4)+3;
	siLput_f();
	vs_top=sup;
	V166= vs_base[0];
	V159= (V166);}}}
	{object V170;
	base[4]= (V159);
	base[5]= VV[107];
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	Lgetf();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= V158;
	base[5]= VV[109];
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V170= vs_base[0];
	{object V171;
	base[3]= (V159);
	base[4]= (V170);
	base[5]= VV[107];
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V171= vs_base[0];
	V159= (V171);}}
	{object V172 = listA(3,VV[88],list(3,VV[110],(V156),(base[0]->c.c_car)),(V159));
	VMR25(V172)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-STD-WRITER-METHOD-FUNCTION	*/

static object LI35(V175,V176)

object V175;object V176;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	base[0]=MMcons((V176),Cnil);
	{object V177;
	register object V178;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V177= vs_base[0];
	V179= 
	make_cclosure_new(LC67,Cnil,base[0],Cdata);
	base[3]= listA(3,VV[90],V179,VV[120]);
	vs_top=(vs_base=base+3)+1;
	Lcopy_tree();
	vs_top=sup;
	V178= vs_base[0];
	{object V182;
	V182= list(2,Cnil,list(2,Cnil,(base[0]->c.c_car)));
	{object V183;
	base[5]= (V178);
	base[6]= VV[107];
	base[7]= Cnil;
	vs_top=(vs_base=base+5)+3;
	Lgetf();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V182);
	base[6]= VV[108];
	vs_top=(vs_base=base+4)+3;
	siLput_f();
	vs_top=sup;
	V183= vs_base[0];
	{object V184;
	base[4]= (V178);
	base[5]= (V183);
	base[6]= VV[107];
	vs_top=(vs_base=base+4)+3;
	siLput_f();
	vs_top=sup;
	V184= vs_base[0];
	V178= (V184);}}}
	{object V188;
	base[4]= (V178);
	base[5]= VV[107];
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	Lgetf();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= V177;
	base[5]= VV[109];
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V188= vs_base[0];
	{object V189;
	base[3]= (V178);
	base[4]= (V188);
	base[5]= VV[107];
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V189= vs_base[0];
	V178= (V189);}}
	{object V190 = listA(3,VV[88],list(3,VV[117],(V175),(base[0]->c.c_car)),(V178));
	VMR26(V190)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-STD-BOUNDP-METHOD-FUNCTION	*/

static object LI37(V193,V194)

object V193;object V194;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	base[0]=MMcons((V194),Cnil);
	{object V195;
	register object V196;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V195= vs_base[0];
	V197= 
	make_cclosure_new(LC68,Cnil,base[0],Cdata);
	base[3]= listA(3,VV[90],V197,VV[127]);
	vs_top=(vs_base=base+3)+1;
	Lcopy_tree();
	vs_top=sup;
	V196= vs_base[0];
	{object V200;
	V201= list(2,Cnil,(base[0]->c.c_car));
	V200= make_cons(/* INLINE-ARGS */V201,Cnil);
	{object V202;
	base[5]= (V196);
	base[6]= VV[107];
	base[7]= Cnil;
	vs_top=(vs_base=base+5)+3;
	Lgetf();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V200);
	base[6]= VV[108];
	vs_top=(vs_base=base+4)+3;
	siLput_f();
	vs_top=sup;
	V202= vs_base[0];
	{object V203;
	base[4]= (V196);
	base[5]= (V202);
	base[6]= VV[107];
	vs_top=(vs_base=base+4)+3;
	siLput_f();
	vs_top=sup;
	V203= vs_base[0];
	V196= (V203);}}}
	{object V207;
	base[4]= (V196);
	base[5]= VV[107];
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	Lgetf();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= V195;
	base[5]= VV[109];
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V207= vs_base[0];
	{object V208;
	base[3]= (V196);
	base[4]= (V207);
	base[5]= VV[107];
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V208= vs_base[0];
	V196= (V208);}}
	{object V209 = listA(3,VV[88],list(3,VV[124],(V193),(base[0]->c.c_car)),(V196));
	VMR27(V209)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INITIALIZE-INTERNAL-SLOT-GFS	*/

static object LI38(object V210,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB28 VMS28 VMV28
	{register object V211;
	register object V212;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V211= V210;
	narg = narg - 1;
	if (narg <= 0) goto T462;
	else {
	V212= first;}
	--narg; goto T463;
	goto T462;
T462:;
	V212= Cnil;
	goto T463;
T463:;
	if(((V212))==Cnil){
	goto T466;}
	if(!(((V212))==(VV[35]))){
	goto T465;}
	goto T466;
T466:;
	{object V213;
	object V214;
	V213= (*(LnkLI130))((V211));
	base[2]= (V213);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk153)();
	vs_top=sup;
	V214= vs_base[0];
	base[2]= (V214);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk154)(Lclptr154);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T465;}
	base[2]= (VV[128]->s.s_dbind);
	base[3]= (V214);
	base[4]= (V211);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk155)(Lclptr155);
	vs_top=sup;}
	goto T465;
T465:;
	if(((V212))==Cnil){
	goto T480;}
	if(!(((V212))==(VV[38]))){
	goto T479;}
	goto T480;
T480:;
	{object V215;
	object V216;
	V215= (*(LnkLI131))((V211));
	base[2]= (V215);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk153)();
	vs_top=sup;
	V216= vs_base[0];
	base[2]= (V216);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk154)(Lclptr154);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T479;}
	base[2]= (VV[128]->s.s_dbind);
	base[3]= (V216);
	base[4]= (V211);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk156)(Lclptr156);
	vs_top=sup;}
	goto T479;
T479:;
	{object V217 = Cnil;
	VMR28(V217)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function INITIALIZE-INTERNAL-SLOT-GFS*	*/

static object LI39(V221,V222,V223)

object V221;object V222;object V223;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{register object V224;
	register object V225;
	V224= (V221);
	V225= CMPcar((V224));
	goto T498;
T498:;
	if(!(((V224))==Cnil)){
	goto T499;}
	goto T494;
	goto T499;
T499:;
	(void)((VFUN_NARGS=2,(*(LnkLI157))((V225),VV[35])));
	V224= CMPcdr((V224));
	V225= CMPcar((V224));
	goto T498;}
	goto T494;
T494:;
	{register object V226;
	register object V227;
	V226= (V222);
	V227= CMPcar((V226));
	goto T513;
T513:;
	if(!(((V226))==Cnil)){
	goto T514;}
	goto T509;
	goto T514;
T514:;
	(void)((VFUN_NARGS=2,(*(LnkLI157))((V227),VV[38])));
	V226= CMPcdr((V226));
	V227= CMPcar((V226));
	goto T513;}
	goto T509;
T509:;
	{register object V228;
	register object V229;
	V228= (V223);
	V229= CMPcar((V228));
	goto T527;
T527:;
	if(!(((V228))==Cnil)){
	goto T528;}
	{object V230 = Cnil;
	VMR29(V230)}
	goto T528;
T528:;
	(void)((VFUN_NARGS=2,(*(LnkLI157))((V229),VV[57])));
	V228= CMPcdr((V228));
	V229= CMPcar((V228));
	goto T527;}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC68(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	{register object V231;
	object V232;
	register object V233;
	check_arg(3);
	V231=(base[0]);
	V232=(base[1]);
	V233=(base[2]);
	vs_top=sup;
	{object V235;
	object V236;
	V235= CMPcar((V231));
	V236= CMPcdr((V231));
	{object V237;
	if(type_of(V233)==t_structure){
	goto T548;}
	goto T546;
	goto T548;
T548:;
	if(!(((V233)->str.str_def)==(VV[126]))){
	goto T546;}
	V237= STREF(object,(V233),4);
	goto T544;
	goto T546;
T546:;{object V239;
	V239= (VV[63]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V233);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk158)();
	vs_top=sup;
	V240= vs_base[0];
	if(!((V239)==(CMPcar(V240)))){
	goto T551;}}
	V237= CMPcar(((V233))->cc.cc_turbo[12]);
	goto T544;
	goto T551;
T551:;
	V237= Cnil;
	goto T544;
T544:;
	{object V241;
	V241= ((V235))->v.v_self[1];
	{register object V242;
	V242= (V241);
	if(!(type_of((V242))==t_fixnum)){
	goto T558;}
	base[3]= ((((((V237))->v.v_self[fix((V241))])==(VV[104])?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T558;
T558:;
	if(!(type_of((V242))==t_cons)){
	goto T561;}
	base[3]= ((((CMPcdr((V241)))==(VV[104])?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T561;
T561:;
	base[3]= (V233);
	base[4]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk160)();
	return;}}}}
	}
}
/*	local function CLOSURE	*/

static void LC67(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	{register object V243;
	object V244;
	register object V245;
	register object V246;
	check_arg(4);
	V243=(base[0]);
	V244=(base[1]);
	V245=(base[2]);
	V246=(base[3]);
	vs_top=sup;
	{object V248;
	object V249;
	V248= CMPcar((V243));
	V249= CMPcdr((V243));
	{object V250;
	if(type_of(V246)==t_structure){
	goto T575;}
	goto T573;
	goto T575;
T575:;
	if(!(((V246)->str.str_def)==(VV[119]))){
	goto T573;}
	V250= STREF(object,(V246),4);
	goto T571;
	goto T573;
T573:;{object V252;
	V252= (VV[63]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V246);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk158)();
	vs_top=sup;
	V253= vs_base[0];
	if(!((V252)==(CMPcar(V253)))){
	goto T578;}}
	V250= CMPcar(((V246))->cc.cc_turbo[12]);
	goto T571;
	goto T578;
T578:;
	V250= Cnil;
	goto T571;
T571:;
	{object V254;
	V254= ((V248))->v.v_self[1];
	{register object V255;
	V255= (V254);
	if(!(type_of((V255))==t_fixnum)){
	goto T585;}
	base[4]= ((V250))->v.v_self[fix((V254))]= ((V245));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T585;
T585:;
	if(!(type_of((V255))==t_cons)){
	goto T588;}
	(V254)->c.c_cdr = V245;
	base[4]= V245;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T588;
T588:;
	base[4]= (V246);
	base[5]= (base0[0]->c.c_car);
	base[6]= (V245);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk161)();
	return;}}}}
	}
}
/*	local function CLOSURE	*/

static void LC66(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	{register object V258;
	object V259;
	register object V260;
	check_arg(3);
	V258=(base[0]);
	V259=(base[1]);
	V260=(base[2]);
	vs_top=sup;
	{object V262;
	object V263;
	V262= CMPcar((V258));
	V263= CMPcdr((V258));
	{object V264;
	if(type_of(V260)==t_structure){
	goto T604;}
	goto T602;
	goto T604;
T604:;
	if(!(((V260)->str.str_def)==(VV[112]))){
	goto T602;}
	V264= STREF(object,(V260),4);
	goto T600;
	goto T602;
T602:;{object V266;
	V266= (VV[63]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V260);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk158)();
	vs_top=sup;
	V267= vs_base[0];
	if(!((V266)==(CMPcar(V267)))){
	goto T607;}}
	V264= CMPcar(((V260))->cc.cc_turbo[12]);
	goto T600;
	goto T607;
T607:;
	V264= Cnil;
	goto T600;
T600:;
	{register object V268;
	V268= ((V262))->v.v_self[1];
	{register object V269;
	V269= (V268);
	if(!(type_of((V269))==t_fixnum)){
	goto T616;}
	V268= ((V264))->v.v_self[fix((V268))];
	goto T614;
	goto T616;
T616:;
	if(!(type_of((V269))==t_cons)){
	goto T619;}
	V268= CMPcdr((V268));
	goto T614;
	goto T619;
T619:;
	V268= VV[104];}
	goto T614;
T614:;
	if(!(((V268))==(VV[104]))){
	goto T622;}
	base[3]= (V260);
	base[4]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk162)();
	return;
	goto T622;
T622:;
	base[3]= (V268);
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
	{object V270;
	object V271;
	register object V272;
	check_arg(3);
	V270=(base[0]);
	V271=(base[1]);
	V272=(base[2]);
	vs_top=sup;
	{register object V274;
	if(type_of(V272)==t_structure){
	goto T632;}
	goto T630;
	goto T632;
T632:;
	if(!(((V272)->str.str_def)==(VV[100]))){
	goto T630;}
	V274= STREF(object,(V272),0);
	goto T628;
	goto T630;
T630:;{object V276;
	V276= (VV[63]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V272);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk158)();
	vs_top=sup;
	V277= vs_base[0];
	if(!((V276)==(CMPcar(V277)))){
	goto T635;}}
	V274= CMPcar(((V272))->cc.cc_turbo[13]);
	goto T628;
	goto T635;
T635:;
	V274= Cnil;
	goto T628;
T628:;
	if(((V274))==Cnil){
	goto T641;}
	{object V278;
	object V279;
	V278= ((V274))->v.v_self[11];{object V280;
	{register long V281;
	V281= 0;
	{register object V282;
	register object V283;
	V282= ((V274))->v.v_self[9];
	V283= CMPcar((V282));
	goto T651;
T651:;
	if(!(((V282))==Cnil)){
	goto T652;}
	V280= Cnil;
	goto T646;
	goto T652;
T652:;
	if(!(((base0[0]->c.c_car))==((V283)))){
	goto T656;}
	V280= CMPmake_fixnum(V281);
	goto T646;
	goto T656;
T656:;
	V281= (long)(V281)+(1);
	V282= CMPcdr((V282));
	V283= CMPcar((V282));
	goto T651;}}
	goto T646;
T646:;
	if(V280==Cnil)goto T645;
	V279= V280;
	goto T644;
	goto T645;
T645:;}
	{register object x= (base0[0]->c.c_car),V284= ((V274))->v.v_self[10];
	while(V284!=Cnil)
	if(EQ(x,V284->c.c_car->c.c_car) &&V284->c.c_car != Cnil){
	V279= (V284->c.c_car);
	goto T644;
	}else V284=V284->c.c_cdr;
	V279= Cnil;}
	goto T644;
T644:;
	{register object V285;
	V285= (V279);
	if(!(type_of((V285))==t_fixnum)){
	goto T667;}
	{object V286;
	if(type_of(V272)==t_structure){
	goto T674;}
	goto T672;
	goto T674;
T674:;
	if(!(((V272)->str.str_def)==(VV[101]))){
	goto T672;}
	V287= STREF(object,(V272),4);
	goto T670;
	goto T672;
T672:;{object V289;
	V289= (VV[63]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V272);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk158)();
	vs_top=sup;
	V290= vs_base[0];
	if(!((V289)==(CMPcar(V290)))){
	goto T677;}}
	V287= CMPcar(((V272))->cc.cc_turbo[12]);
	goto T670;
	goto T677;
T677:;
	base[5]= VV[93];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	V287= vs_base[0];
	goto T670;
T670:;
	V286= (V287)->v.v_self[fix((V279))];
	if(!(((V286))==((VV[43]->s.s_dbind)))){
	goto T684;}
	base[5]= (*(LnkLI163))((V272));
	base[6]= (V272);
	base[7]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk164)(Lclptr164);
	return;
	goto T684;
T684:;
	base[5]= (V286);
	vs_top=(vs_base=base+5)+1;
	return;}
	goto T667;
T667:;
	if(!(type_of((V285))==t_cons)){
	goto T690;}
	{object V291;
	V291= CMPcdr((V279));
	if(!(((V291))==((VV[43]->s.s_dbind)))){
	goto T694;}
	base[5]= (*(LnkLI163))((V272));
	base[6]= (V272);
	base[7]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk164)(Lclptr164);
	return;
	goto T694;
T694:;
	base[5]= (V291);
	vs_top=(vs_base=base+5)+1;
	return;}
	goto T690;
T690:;
	base[5]= VV[94];
	base[6]= (V278);
	base[7]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+5)+3;
	Lerror();
	return;}}
	goto T641;
T641:;
	base[3]= (V272);
	base[4]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk162)();
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC64(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	{object V292;
	check_arg(1);
	V292=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	base[2]= VV[80];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk165)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T706;}
	base[1]= STREF(object,(base0[0]->c.c_car),0);
	base[2]= STREF(object,(base0[0]->c.c_car),4);
	base[3]= STREF(object,(base0[0]->c.c_car),8);
	base[4]= (base0[2]->c.c_car);
	base[5]= (V292);
	base[6]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+2)+5;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T706;
T706:;
	{object V293;
	V293= (base0[0]->c.c_car);
	{register object V294;
	V294= (V293);
	base[1]= (V294);
	base[2]= VV[81];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk165)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T717;}
	{object V295;
	object V296;
	register object V297;
	V295= STREF(object,(base0[0]->c.c_car),0);
	V296= list(3,(base0[2]->c.c_car),(V292),(base0[1]->c.c_car));
	V297= STREF(object,(base0[0]->c.c_car),4);
	if(((V297))==Cnil){
	goto T725;}
	if((CMPcdr((V297)))!=Cnil){
	goto T725;}
	base[1]= (V296);
	base[2]= CMPcar((V297));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V295);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T725;
T725:;
	base[1]= (V295);
	base[2]= (V296);
	{object V298;
	V298= (V297);
	 vs_top=base+3;
	 while(V298!=Cnil)
	 {vs_push((V298)->c.c_car);V298=(V298)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T717;
T717:;
	base[1]= (V294);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T735;}
	base[1]= (base0[2]->c.c_car);
	base[2]= (V292);
	base[3]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T735;
T735:;
	base[1]= VV[8];
	base[2]= VV[9];
	base[3]= VV[50];
	base[4]= VV[11];
	base[5]= (V293);
	base[6]= VV[12];
	base[7]= VV[86];
	base[8]= VV[14];
	base[9]= VV[87];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk129)();
	return;}}
	}
}
/*	local function CLOSURE	*/

static void LC63(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	{object V299;
	object V300;
	check_arg(2);
	V299=(base[0]);
	V300=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	base[3]= VV[80];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk165)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T752;}
	base[2]= STREF(object,(base0[0]->c.c_car),0);
	base[3]= STREF(object,(base0[0]->c.c_car),4);
	base[4]= STREF(object,(base0[0]->c.c_car),8);
	base[5]= (V299);
	base[6]= (base0[2]->c.c_car);
	base[7]= (V300);
	base[8]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+3)+6;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T752;
T752:;
	{object V301;
	V301= (base0[0]->c.c_car);
	{register object V302;
	V302= (V301);
	base[2]= (V302);
	base[3]= VV[81];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk165)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T764;}
	{object V303;
	object V304;
	register object V305;
	V303= STREF(object,(base0[0]->c.c_car),0);
	V304= list(4,(V299),(base0[2]->c.c_car),(V300),(base0[1]->c.c_car));
	V305= STREF(object,(base0[0]->c.c_car),4);
	if(((V305))==Cnil){
	goto T772;}
	if((CMPcdr((V305)))!=Cnil){
	goto T772;}
	base[2]= (V304);
	base[3]= CMPcar((V305));
	vs_top=(vs_base=base+2)+2;
	{object _funobj = (V303);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T772;
T772:;
	base[2]= (V303);
	base[3]= (V304);
	{object V306;
	V306= (V305);
	 vs_top=base+4;
	 while(V306!=Cnil)
	 {vs_push((V306)->c.c_car);V306=(V306)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T764;
T764:;
	base[2]= (V302);
	vs_top=(vs_base=base+2)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T782;}
	base[2]= (V299);
	base[3]= (base0[2]->c.c_car);
	base[4]= (V300);
	base[5]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+2)+4;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T782;
T782:;
	base[2]= VV[8];
	base[3]= VV[9];
	base[4]= VV[50];
	base[5]= VV[11];
	base[6]= (V301);
	base[7]= VV[12];
	base[8]= VV[84];
	base[9]= VV[14];
	base[10]= VV[85];
	vs_top=(vs_base=base+2)+9;
	(void) (*Lnk129)();
	return;}}
	}
}
/*	local function CLOSURE	*/

static void LC62(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	{object V307;
	check_arg(1);
	V307=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	base[2]= VV[80];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk165)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T800;}
	base[1]= STREF(object,(base0[0]->c.c_car),0);
	base[2]= STREF(object,(base0[0]->c.c_car),4);
	base[3]= STREF(object,(base0[0]->c.c_car),8);
	base[4]= (base0[2]->c.c_car);
	base[5]= (V307);
	base[6]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+2)+5;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T800;
T800:;
	{object V308;
	V308= (base0[0]->c.c_car);
	{register object V309;
	V309= (V308);
	base[1]= (V309);
	base[2]= VV[81];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk165)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T811;}
	{object V310;
	object V311;
	register object V312;
	V310= STREF(object,(base0[0]->c.c_car),0);
	V311= list(3,(base0[2]->c.c_car),(V307),(base0[1]->c.c_car));
	V312= STREF(object,(base0[0]->c.c_car),4);
	if(((V312))==Cnil){
	goto T819;}
	if((CMPcdr((V312)))!=Cnil){
	goto T819;}
	base[1]= (V311);
	base[2]= CMPcar((V312));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V310);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T819;
T819:;
	base[1]= (V310);
	base[2]= (V311);
	{object V313;
	V313= (V312);
	 vs_top=base+3;
	 while(V313!=Cnil)
	 {vs_push((V313)->c.c_car);V313=(V313)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T811;
T811:;
	base[1]= (V309);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T829;}
	base[1]= (base0[2]->c.c_car);
	base[2]= (V307);
	base[3]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T829;
T829:;
	base[1]= VV[8];
	base[2]= VV[9];
	base[3]= VV[50];
	base[4]= VV[11];
	base[5]= (V308);
	base[6]= VV[12];
	base[7]= VV[82];
	base[8]= VV[14];
	base[9]= VV[83];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk129)();
	return;}}
	}
}
/*	local function CLOSURE	*/

static void LC61(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	{object V314;
	object V315;
	object V316;
	check_arg(3);
	V314=(base[0]);
	V315=(base[1]);
	V316=(base[2]);
	vs_top=sup;{object V317;
	V317= (VV[43]->s.s_dbind);
	base[3]= ((((V317)==(CMPcdr((base0[0]->c.c_car)))?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V318;
	object V319;
	object V320;
	check_arg(3);
	V318=(base[0]);
	V319=(base[1]);
	V320=(base[2]);
	vs_top=sup;{object V321;
	V321= (VV[43]->s.s_dbind);
	base[3]= ((((V321)==((STREF(object,(V319),4))->v.v_self[fix((base0[0]->c.c_car))])?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V322;
	object V323;
	object V324;
	check_arg(3);
	V322=(base[0]);
	V323=(base[1]);
	V324=(base[2]);
	vs_top=sup;{object V325;
	V325= (VV[43]->s.s_dbind);
	base[3]= ((((V325)==((CMPcar(((V323))->cc.cc_turbo[12]))->v.v_self[fix((base0[0]->c.c_car))])?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V326;
	object V327;
	object V328;
	object V329;
	check_arg(4);
	V326=(base[0]);
	V327=(base[1]);
	V328=(base[2]);
	V329=(base[3]);
	vs_top=sup;
	{object V330;
	V330= (base0[0]->c.c_car);
	((V330))->c.c_cdr = V326;
	base[4]= V326;
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
	{object V332;
	object V333;
	object V334;
	object V335;
	check_arg(4);
	V332=(base[0]);
	V333=(base[1]);
	V334=(base[2]);
	V335=(base[3]);
	vs_top=sup;
	base[4]= (STREF(object,(V334),4))->v.v_self[fix((base0[0]->c.c_car))]= ((V332));
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
	{object V336;
	object V337;
	object V338;
	object V339;
	check_arg(4);
	V336=(base[0]);
	V337=(base[1]);
	V338=(base[2]);
	V339=(base[3]);
	vs_top=sup;
	base[4]= (CMPcar(((V338))->cc.cc_turbo[12]))->v.v_self[fix((base0[0]->c.c_car))]= ((V336));
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
	{object V340;
	object V341;
	object V342;
	check_arg(3);
	V340=(base[0]);
	V341=(base[1]);
	V342=(base[2]);
	vs_top=sup;
	{object V343;
	V343= CMPcdr((base0[1]->c.c_car));
	if(!(((V343))==((VV[43]->s.s_dbind)))){
	goto T848;}
	base[3]= (V340);
	base[4]= (V341);
	base[5]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk164)(Lclptr164);
	return;
	goto T848;
T848:;
	base[3]= (V343);
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
	{object V344;
	register object V345;
	object V346;
	check_arg(3);
	V344=(base[0]);
	V345=(base[1]);
	V346=(base[2]);
	vs_top=sup;
	if(type_of(V345)==t_structure){
	goto T856;}
	goto T855;
	goto T856;
T856:;
	if(((V345)->str.str_def)==(VV[69])){
	goto T853;}
	goto T855;
T855:;
	base[3]= VV[66];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T853;
T853:;
	{object V348;
	V348= (STREF(object,(V345),4))->v.v_self[fix((base0[1]->c.c_car))];
	if(!(((V348))==((VV[43]->s.s_dbind)))){
	goto T861;}
	base[3]= (V344);
	base[4]= (V345);
	base[5]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk164)(Lclptr164);
	return;
	goto T861;
T861:;
	base[3]= (V348);
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
	{object V349;
	object V350;
	object V351;
	check_arg(3);
	V349=(base[0]);
	V350=(base[1]);
	V351=(base[2]);
	vs_top=sup;{object V352;
	V352= (VV[63]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V350);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk158)();
	vs_top=sup;
	V353= vs_base[0];
	if((V352)==(CMPcar(V353))){
	goto T866;}}
	base[3]= VV[64];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T866;
T866:;
	{object V354;
	V354= (CMPcar(((V350))->cc.cc_turbo[12]))->v.v_self[fix((base0[1]->c.c_car))];
	if(!(((V354))==((VV[43]->s.s_dbind)))){
	goto T875;}
	base[3]= (V349);
	base[4]= (V350);
	base[5]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk164)(Lclptr164);
	return;
	goto T875;
T875:;
	base[3]= (V354);
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
	{object V355;
	object V356;
	object V357;
	check_arg(3);
	V355=(base[0]);
	V356=(base[1]);
	V357=(base[2]);
	vs_top=sup;
	base[3]= (V356);
	vs_top=(vs_base=base+3)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V358= vs_base[0];
	base[3]= ((((V358)==((VV[43]->s.s_dbind))?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V359;
	object V360;
	object V361;
	object V362;
	check_arg(4);
	V359=(base[0]);
	V360=(base[1]);
	V361=(base[2]);
	V362=(base[3]);
	vs_top=sup;
	base[4]= (V359);
	base[5]= (V361);
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
	{object V363;
	object V364;
	object V365;
	check_arg(3);
	V363=(base[0]);
	V364=(base[1]);
	V365=(base[2]);
	vs_top=sup;
	{object V366;
	V366= (
	(type_of((base0[0]->c.c_car)) == t_sfun ?(*(((base0[0]->c.c_car))->sfn.sfn_self)):
	(fcall.argd=1,type_of((base0[0]->c.c_car))==t_vfun) ?
	(*(((base0[0]->c.c_car))->sfn.sfn_self)):
	(fcall.fun=((base0[0]->c.c_car)),fcalln))((V364)));
	if(!(((V366))==((VV[43]->s.s_dbind)))){
	goto T886;}
	base[3]= (V363);
	base[4]= (V364);
	base[6]= (V365);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk140)(Lclptr140);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk164)(Lclptr164);
	return;
	goto T886;
T886:;
	base[3]= (V366);
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
	{object V367;
	check_arg(1);
	V367=(base[0]);
	vs_top=sup;{object V368;
	V368= (VV[43]->s.s_dbind);
	base[1]= ((((V368)==(CMPcdr((base0[0]->c.c_car)))?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V369;
	check_arg(1);
	V369=(base[0]);
	vs_top=sup;{object V370;
	V370= (VV[43]->s.s_dbind);
	base[1]= ((((V370)==((STREF(object,(V369),4))->v.v_self[fix((base0[0]->c.c_car))])?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V371;
	check_arg(1);
	V371=(base[0]);
	vs_top=sup;{object V372;
	V372= (VV[43]->s.s_dbind);
	base[1]= ((((V372)==((CMPcar(((V371))->cc.cc_turbo[12]))->v.v_self[fix((base0[0]->c.c_car))])?Ct:Cnil))==Cnil?Ct:Cnil);
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
	{object V373;
	object V374;
	check_arg(2);
	V373=(base[0]);
	V374=(base[1]);
	vs_top=sup;
	{object V375;
	V375= (base0[0]->c.c_car);
	((V375))->c.c_cdr = V373;
	base[2]= V373;
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
	{object V377;
	object V378;
	check_arg(2);
	V377=(base[0]);
	V378=(base[1]);
	vs_top=sup;
	base[2]= (STREF(object,(V378),4))->v.v_self[fix((base0[0]->c.c_car))]= ((V377));
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
	{object V379;
	object V380;
	check_arg(2);
	V379=(base[0]);
	V380=(base[1]);
	vs_top=sup;
	base[2]= (CMPcar(((V380))->cc.cc_turbo[12]))->v.v_self[fix((base0[0]->c.c_car))]= ((V379));
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
	{object V381;
	check_arg(1);
	V381=(base[0]);
	vs_top=sup;
	{object V382;
	V382= CMPcdr((base0[0]->c.c_car));
	if(!(((V382))==((VV[43]->s.s_dbind)))){
	goto T896;}
	base[1]= (*(LnkLI163))((V381));
	base[2]= (V381);
	base[3]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk164)(Lclptr164);
	return;
	goto T896;
T896:;
	base[1]= (V382);
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
	{object V383;
	check_arg(1);
	V383=(base[0]);
	vs_top=sup;
	{object V384;
	V384= (STREF(object,(V383),4))->v.v_self[fix((base0[0]->c.c_car))];
	if(!(((V384))==((VV[43]->s.s_dbind)))){
	goto T903;}
	base[1]= (*(LnkLI163))((V383));
	base[2]= (V383);
	base[3]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk164)(Lclptr164);
	return;
	goto T903;
T903:;
	base[1]= (V384);
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
	{object V385;
	check_arg(1);
	V385=(base[0]);
	vs_top=sup;
	{object V386;
	V386= (CMPcar(((V385))->cc.cc_turbo[12]))->v.v_self[fix((base0[0]->c.c_car))];
	if(!(((V386))==((VV[43]->s.s_dbind)))){
	goto T910;}
	base[1]= (*(LnkLI163))((V385));
	base[2]= (V385);
	base[3]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk164)(Lclptr164);
	return;
	goto T910;
T910:;
	base[1]= (V386);
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
	{object V387;
	check_arg(1);
	V387=(base[0]);
	vs_top=sup;
	base[1]= (V387);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V388= vs_base[0];
	base[1]= ((((V388)==((VV[43]->s.s_dbind))?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static void LnkT165(){ call_or_link(VV[165],(void **)(void *)&Lnk165);} /* STRUCTURE-SUBTYPE-P */
static void LnkT164(ptr) object *ptr;{ call_or_link_closure(VV[164],(void **)(void *)&Lnk164,(void **)(void *)&Lclptr164);} /* SLOT-UNBOUND */
static object  LnkTLI163(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[163],(void **)(void *)&LnkLI163,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static void LnkT162(){ call_or_link(VV[162],(void **)(void *)&Lnk162);} /* SLOT-VALUE */
static void LnkT161(){ call_or_link(VV[161],(void **)(void *)&Lnk161);} /* SET-SLOT-VALUE */
static void LnkT160(){ call_or_link(VV[160],(void **)(void *)&Lnk160);} /* SLOT-BOUNDP */
static object  LnkTLI159(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[159],(void **)(void *)&LnkLI159,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT158(){ call_or_link(VV[158],(void **)(void *)&Lnk158);} /* CCLOSURE-ENV-NTHCDR */
static object  LnkTLI157(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[157],(void **)(void *)&LnkLI157,first,ap);va_end(ap);return V1;} /* INITIALIZE-INTERNAL-SLOT-GFS */
static void LnkT156(ptr) object *ptr;{ call_or_link_closure(VV[156],(void **)(void *)&Lnk156,(void **)(void *)&Lclptr156);} /* ADD-WRITER-METHOD */
static void LnkT155(ptr) object *ptr;{ call_or_link_closure(VV[155],(void **)(void *)&Lnk155,(void **)(void *)&Lclptr155);} /* ADD-READER-METHOD */
static void LnkT154(ptr) object *ptr;{ call_or_link_closure(VV[154],(void **)(void *)&Lnk154,(void **)(void *)&Lclptr154);} /* GENERIC-FUNCTION-METHODS */
static void LnkT153(){ call_or_link(VV[153],(void **)(void *)&Lnk153);} /* ENSURE-GENERIC-FUNCTION */
static void LnkT152(ptr) object *ptr;{ call_or_link_closure(VV[152],(void **)(void *)&Lnk152,(void **)(void *)&Lclptr152);} /* CLASS-NAME */
static object  LnkTLI148(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[148],(void **)(void *)&LnkLI148,1,first,ap);va_end(ap);return V1;} /* MAKE-OPTIMIZED-STRUCTURE-SLOT-BOUNDP-USING-CLASS-METHOD-FUNCTION */
static object  LnkTLI147(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[147],(void **)(void *)&LnkLI147,1,first,ap);va_end(ap);return V1;} /* MAKE-OPTIMIZED-STRUCTURE-SETF-SLOT-VALUE-USING-CLASS-METHOD-FUNCTION */
static object  LnkTLI146(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[146],(void **)(void *)&LnkLI146,1,first,ap);va_end(ap);return V1;} /* MAKE-OPTIMIZED-STRUCTURE-SLOT-VALUE-USING-CLASS-METHOD-FUNCTION */
static void LnkT145(){ call_or_link(VV[145],(void **)(void *)&Lnk145);} /* SET-FUNCTION-NAME */
static void LnkT141(ptr) object *ptr;{ call_or_link_closure(VV[141],(void **)(void *)&Lnk141,(void **)(void *)&Lclptr141);} /* SLOT-DEFINITION-LOCATION */
static void LnkT140(ptr) object *ptr;{ call_or_link_closure(VV[140],(void **)(void *)&Lnk140,(void **)(void *)&Lclptr140);} /* SLOT-DEFINITION-NAME */
static void LnkT139(ptr) object *ptr;{ call_or_link_closure(VV[139],(void **)(void *)&Lnk139,(void **)(void *)&Lclptr139);} /* FUNCALLABLE-STANDARD-CLASS-P */
static void LnkT138(ptr) object *ptr;{ call_or_link_closure(VV[138],(void **)(void *)&Lnk138,(void **)(void *)&Lclptr138);} /* STANDARD-CLASS-P */
static object  LnkTLI137(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[137],(void **)(void *)&LnkLI137,1,first,ap);va_end(ap);return V1;} /* MAKE-STRUCTURE-SLOT-BOUNDP-FUNCTION */
static void LnkT136(ptr) object *ptr;{ call_or_link_closure(VV[136],(void **)(void *)&Lnk136,(void **)(void *)&Lclptr136);} /* SLOT-DEFINITION-INTERNAL-WRITER-FUNCTION */
static void LnkT135(ptr) object *ptr;{ call_or_link_closure(VV[135],(void **)(void *)&Lnk135,(void **)(void *)&Lclptr135);} /* STRUCTURE-CLASS-P */
static void LnkT134(){ call_or_link(VV[134],(void **)(void *)&Lnk134);} /* TURBO-CLOSURE */
static void LnkT133(ptr) object *ptr;{ call_or_link_closure(VV[133],(void **)(void *)&Lnk133,(void **)(void *)&Lclptr133);} /* SLOT-DEFINITION-INTERNAL-READER-FUNCTION */
static object  LnkTLI132(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[132],(void **)(void *)&LnkLI132,1,first,ap);va_end(ap);return V1;} /* SLOT-BOUNDP-SYMBOL */
static object  LnkTLI131(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[131],(void **)(void *)&LnkLI131,1,first,ap);va_end(ap);return V1;} /* SLOT-WRITER-SYMBOL */
static object  LnkTLI130(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[130],(void **)(void *)&LnkLI130,1,first,ap);va_end(ap);return V1;} /* SLOT-READER-SYMBOL */
static void LnkT129(){ call_or_link(VV[129],(void **)(void *)&Lnk129);} /* ERROR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

