
#include "cmpinclude.h"
#include "seqlib.h"
void init_seqlib(){do_init(VV);}
/*	local entry for function SEQTYPE	*/

static object LI1(V2)

register object V2;
{	 VMB1 VMS1 VMV1
goto TTL;
TTL:;
	if(!(type_of((V2))==t_cons||((V2))==Cnil)){
	goto T2;}
	{object V3 = VV[0];
	VMR1(V3)}
goto T2;
T2:;
	if(!(type_of((V2))==t_string)){
	goto T5;}
	{object V4 = VV[1];
	VMR1(V4)}
goto T5;
T5:;
	if(!((type_of((V2))==t_bitvector))){
	goto T8;}
	{object V5 = VV[2];
	VMR1(V5)}
goto T8;
T8:;
	if(!(type_of((V2))==t_vector||
type_of((V2))==t_string||
type_of((V2))==t_bitvector)){
	goto T11;}
	base[0]= (V2);
	vs_top=(vs_base=base+0)+1;
	Larray_element_type();
	vs_top=sup;
	V6= vs_base[0];
	{object V7 = list(2,VV[3],V6);
	VMR1(V7)}
goto T11;
T11:;
	base[0]= VV[4];
	base[1]= (V2);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V8 = vs_base[0];
	VMR1(V8)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CALL-TEST	*/

static object LI2(V13,V14,V15,V16)

object V13;object V14;object V15;object V16;
{	 VMB2 VMS2 VMV2
goto TTL;
TTL:;
	if(((V13))==Cnil){
	goto T18;}
	base[0]= (V15);
	base[1]= (V16);
	vs_top=(vs_base=base+0)+2;
	super_funcall_no_event((V13));
	vs_top=sup;
	{object V17 = vs_base[0];
	VMR2(V17)}
goto T18;
T18:;
	if(((V14))==Cnil){
	goto T23;}
	base[0]= (V15);
	base[1]= (V16);
	vs_top=(vs_base=base+0)+2;
	super_funcall_no_event((V14));
	vs_top=sup;
	V18= vs_base[0];
	{object V19 = ((V18)==Cnil?Ct:Cnil);
	VMR2(V19)}
goto T23;
T23:;
	{object V20 = (eql((V15),(V16))?Ct:Cnil);
	VMR2(V20)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CHECK-SEQ-START-END	*/

static object LI3(V23,V24)

object V23;object V24;
{	 VMB3 VMS3 VMV3
goto TTL;
TTL:;
	if(!(type_of((V23))==t_fixnum)){
	goto T29;}
	if(type_of((V24))==t_fixnum){
	goto T28;}
goto T29;
T29:;
	base[0]= VV[5];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T28;
T28:;
	if(!((fix((V23)))>(fix((V24))))){
	goto T35;}
	base[0]= VV[6];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V25 = vs_base[0];
	VMR3(V25)}
goto T35;
T35:;
	{object V26 = Cnil;
	VMR3(V26)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function TEST-ERROR	*/

static object LI4()

{	 VMB4 VMS4 VMV4
goto TTL;
TTL:;
	base[0]= VV[7];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V27 = vs_base[0];
	VMR4(V27)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BAD-SEQ-LIMIT	*/

static object LI5(V28,va_alist)
	object V28;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB5 VMS5 VMV5
	{object V29;
	object V30;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V29= V28;
	narg = narg - 1;
	if (narg <= 0) goto T39;
	else {
	V30= va_arg(ap,object);}
	--narg; goto T40;
goto T39;
T39:;
	V30= Cnil;
goto T40;
T40:;
	base[0]= VV[8];
	base[1]= VV[9];
	if(((V30))==Cnil){
	goto T46;}
	base[2]= list(2,(V29),(V30));
	goto T44;
goto T46;
T46:;
	base[2]= (V29);
goto T44;
T44:;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	{object V31 = vs_base[0];
	VMR5(V31)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function THE-END	*/

static object LI6(V34,V35)

register object V34;object V35;
{	 VMB6 VMS6 VMV6
goto TTL;
TTL:;
	if(!(type_of((V34))==t_fixnum)){
	goto T49;}
	if(!((fix((V34)))<=((long)length((V35))))){
	goto T52;}
	goto T51;
goto T52;
T52:;
	(void)((VFUN_NARGS=1,(*(LnkLI33))((V34))));
goto T51;
T51:;
	{long V36 = fix((V34));
	VMR6((object)V36)}
goto T49;
T49:;
	if(((V34))!=Cnil){
	goto T55;}
	{long V37 = (long)length((V35));
	VMR6((object)V37)}
goto T55;
T55:;
	{long V38 = fix((VFUN_NARGS=1,(*(LnkLI33))((V34))));
	VMR6((object)V38)}
}
/*	local entry for function THE-START	*/

static object LI7(V40)

register object V40;
{	 VMB7 VMS7 VMV7
goto TTL;
TTL:;
	if(!(type_of((V40))==t_fixnum)){
	goto T58;}
	if(!((fix((V40)))>=(0))){
	goto T61;}
	goto T60;
goto T61;
T61:;
	(void)((VFUN_NARGS=1,(*(LnkLI33))((V40))));
goto T60;
T60:;
	{long V41 = fix((V40));
	VMR7((object)V41)}
goto T58;
T58:;
	if(((V40))!=Cnil){
	goto T64;}
	{long V42 = 0;
	VMR7((object)V42)}
goto T64;
T64:;
	{long V43 = fix((VFUN_NARGS=1,(*(LnkLI33))((V40))));
	VMR7((object)V43)}
}
/*	function definition for REDUCE	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	{register object V44;
	register object V45;
	object V46;
	object V47;
	object V48;
	object V49;
	object V50;
	register object V51;
	if(vs_top-vs_base<2) too_few_arguments();
	parse_key(vs_base+2,FALSE,FALSE,5,VV[11],VV[14],VV[15],VV[34],VV[17]);
	V44=(base[0]);
	V45=(base[1]);
	vs_top=sup;
	V46=(base[2]);
	V47=(base[3]);
	V48=(base[4]);
	V49=(base[5]);
	V50=(base[10]);
	if(base[11]==Cnil){
	V51= symbol_function(VV[35]);
	}else{
	V51=(base[6]);}
	{register long V52;
	if(((V47))==Cnil){
	goto T69;}
	V52= (long)(*(LnkLI36))((V47));
	goto T67;
goto T69;
T69:;
	V52= 0;
goto T67;
T67:;
	{register long V53;
	V53= (long)(*(LnkLI37))((V48),(V45));
	if(!((V52)<=(V53))){
	goto T73;}
	goto T72;
goto T73;
T73:;
	V54 = make_fixnum(V52);
	V55 = make_fixnum(V53);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V54,V55)));
goto T72;
T72:;
	if(((V46))!=Cnil){
	goto T76;}
	if(((V50))!=Cnil){
	goto T78;}
	if(!((V52)>=(V53))){
	goto T81;}
	vs_base=vs_top;
	super_funcall_no_event((V44));
	return;
goto T81;
T81:;
	V56= elt((V45),V52);
	V49= (
	(type_of((V51)) == t_sfun ?(*(((V51))->sfn.sfn_self)):
	(fcall.fun=((V51)),fcall.argd=1,fcalln))(/* INLINE-ARGS */V56));
	V52= (long)(1)+(V52);
goto T78;
T78:;
	{register object V57;
	V57= (V49);
goto T88;
T88:;
	if(!((V52)>=(V53))){
	goto T89;}
	base[12]= (V57);
	vs_top=(vs_base=base+12)+1;
	return;
goto T89;
T89:;
	{object V59;
	V59= elt((V45),V52);
	V52= (long)(1)+(V52);
	base[12]= (V59);}
	vs_top=(vs_base=base+12)+1;
	super_funcall_no_event((V51));
	vs_top=sup;
	V58= vs_base[0];
	V57= (
	(type_of((V44)) == t_sfun ?(*(((V44))->sfn.sfn_self)):
	(fcall.fun=((V44)),fcall.argd=2,fcalln))((V57),V58));
	goto T88;}
goto T76;
T76:;
	if(((V50))!=Cnil){
	goto T101;}
	if(!((V52)>=(V53))){
	goto T104;}
	vs_base=vs_top;
	super_funcall_no_event((V44));
	return;
goto T104;
T104:;
	V53= (long)(V53)+(-1);
	V60= elt((V45),V53);
	V49= (
	(type_of((V51)) == t_sfun ?(*(((V51))->sfn.sfn_self)):
	(fcall.fun=((V51)),fcall.argd=1,fcalln))(/* INLINE-ARGS */V60));
goto T101;
T101:;
	{register object V61;
	V61= (V49);
goto T111;
T111:;
	if(!((V52)>=(V53))){
	goto T112;}
	base[12]= (V61);
	vs_top=(vs_base=base+12)+1;
	return;
goto T112;
T112:;
	V53= (long)(-1)+(V53);
	base[12]= elt((V45),V53);
	vs_top=(vs_base=base+12)+1;
	super_funcall_no_event((V51));
	vs_top=sup;
	V62= vs_base[0];
	V61= (
	(type_of((V44)) == t_sfun ?(*(((V44))->sfn.sfn_self)):
	(fcall.fun=((V44)),fcall.argd=2,fcalln))(V62,(V61)));
	goto T111;}}}
	}
}
/*	local entry for function FILL	*/

static object LI9(V64,V63,va_alist)
	object V64,V63;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{register object V65;
	register object V66;
	object V67;
	object V68;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V65= V64;
	V66= V63;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI9key,ap);
	V67=(Vcs[2]);
	V68=(Vcs[3]);
	{long V69;
	if(((V67))==Cnil){
	goto T125;}
	V69= (long)(*(LnkLI36))((V67));
	goto T123;
goto T125;
T125:;
	V69= 0;
goto T123;
T123:;
	{register long V70;
	V70= (long)(*(LnkLI37))((V68),(V65));
	if(!((V69)<=(V70))){
	goto T129;}
	goto T128;
goto T129;
T129:;
	V71 = make_fixnum(V69);
	V72 = make_fixnum(V70);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V71,V72)));
goto T128;
T128:;
	{register long V73;
	V73= V69;
goto T133;
T133:;
	if(!((V73)>=(V70))){
	goto T134;}
	{object V74 = (V65);
	VMR9(V74)}
goto T134;
T134:;
	(void)(elt_set((V65),V73,(V66)));
	V73= (long)(1)+(V73);
	goto T133;}}}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function REPLACE	*/

static object LI10(V76,V75,va_alist)
	object V76,V75;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{register object V77;
	object V78;
	object V79;
	object V80;
	object V81;
	object V82;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V77= V76;
	V78= V75;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI10key,ap);
	V79=(Vcs[2]);
	V80=(Vcs[3]);
	V81=(Vcs[4]);
	V82=(Vcs[5]);
	{long V83;
	if(((V79))==Cnil){
	goto T144;}
	V83= (long)(*(LnkLI36))((V79));
	goto T142;
goto T144;
T144:;
	V83= 0;
goto T142;
T142:;
	{long V84;
	V84= (long)(*(LnkLI37))((V80),(V77));
	if(!((V83)<=(V84))){
	goto T148;}
	goto T147;
goto T148;
T148:;
	V85 = make_fixnum(V83);
	V86 = make_fixnum(V84);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V85,V86)));
goto T147;
T147:;
	{long V87;
	if(((V81))==Cnil){
	goto T152;}
	V87= (long)(*(LnkLI36))((V81));
	goto T150;
goto T152;
T152:;
	V87= 0;
goto T150;
T150:;
	{long V88;
	V88= (long)(*(LnkLI37))((V82),(V78));
	if(!((V87)<=(V88))){
	goto T156;}
	goto T155;
goto T156;
T156:;
	V89 = make_fixnum(V87);
	V90 = make_fixnum(V88);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V89,V90)));
goto T155;
T155:;
	if(!(((V77))==((V78)))){
	goto T159;}
	if(!((V83)>(V87))){
	goto T159;}
	{register long V91;
	long V92;
	register long V93;
	register long V94;
	V91= 0;
	if(!(((long)(V84)-(V83))<((long)(V88)-(V87)))){
	goto T166;}
	V92= (long)(V84)-(V83);
	goto T164;
goto T166;
T166:;
	V92= (long)(V88)-(V87);
goto T164;
T164:;
	V93= (long)(V83)+((long)(-1)+(V92));
	V94= (long)(V87)+((long)(-1)+(V92));
goto T171;
T171:;
	if(!((V91)>=(V92))){
	goto T172;}
	{object V95 = (V77);
	VMR10(V95)}
goto T172;
T172:;
	V96= elt((V78),V94);
	(void)(elt_set((V77),V93,/* INLINE-ARGS */V96));
	V91= (long)(1)+(V91);
	V93= (long)(-1)+(V93);
	V94= (long)(-1)+(V94);
	goto T171;}
goto T159;
T159:;
	{register long V97;
	long V98;
	register long V99;
	register long V100;
	V97= 0;
	if(!(((long)(V84)-(V83))<((long)(V88)-(V87)))){
	goto T187;}
	V98= (long)(V84)-(V83);
	goto T185;
goto T187;
T187:;
	V98= (long)(V88)-(V87);
goto T185;
T185:;
	V99= V83;
	V100= V87;
goto T192;
T192:;
	if(!((V97)>=(V98))){
	goto T193;}
	{object V101 = (V77);
	VMR10(V101)}
goto T193;
T193:;
	V102= elt((V78),V100);
	(void)(elt_set((V77),V99,/* INLINE-ARGS */V102));
	V97= (long)(1)+(V97);
	V99= (long)(1)+(V99);
	V100= (long)(1)+(V100);
	goto T192;}}}}}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function REMOVE	*/

static object LI11(V104,V103,va_alist)
	object V104,V103;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V105;
	object V106;
	object V107;
	object V108;
	object V109;
	object V110;
	object V111;
	object V112;
	object V113;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V105= V104;
	V106= V103;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI11key,ap);
	V107=(Vcs[2]);
	V108=(Vcs[3]);
	V109=(Vcs[4]);
	V110=(Vcs[5]);
	V111=(Vcs[6]);
	V112=(Vcs[7]);
	if(Vcs[8]==0){
	V113= symbol_function(VV[35]);
	}else{
	V113=(Vcs[8]);}
	if(!(((V113))==(Cnil))){
	goto T204;}
	V113= symbol_function(VV[35]);
goto T204;
T204:;
	{long V114;
	if(((V110))==Cnil){
	goto T210;}
	V114= (long)(*(LnkLI36))((V110));
	goto T208;
goto T210;
T210:;
	V114= 0;
goto T208;
T208:;
	{long V115;
	V115= (long)(*(LnkLI37))((V111),(V106));
	if(!((V114)<=(V115))){
	goto T214;}
	goto T213;
goto T214;
T214:;
	V116 = make_fixnum(V114);
	V117 = make_fixnum(V115);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V116,V117)));
goto T213;
T213:;
	{long V118;
	if(((V112))!=Cnil){
	goto T218;}
	V118= 2147483647;
	goto T216;
goto T218;
T218:;
	V118= fix((V112));
goto T216;
T216:;
	if((V108)==Cnil){
	goto T221;}
	if((V109)==Cnil){
	goto T221;}
	(void)((*(LnkLI42))());
goto T221;
T221:;
	if(((V107))!=Cnil){
	goto T223;}
	if(!(type_of((V106))==t_cons||((V106))==Cnil)){
	goto T226;}
	{register object V119;
	register object V120;
	V119= (V106);
	V120= Cnil;
	{register long V121;
	V121= 0;
goto T231;
T231:;
	if(!((V121)>=(V114))){
	goto T232;}
	goto T228;
goto T232;
T232:;
	{register object V122;
	V122= car((V119));
	V120= make_cons((V122),(V120));}
	{register object V123;
	V123= car((V119));
	V119= cdr((V119));}
	V121= (long)(1)+(V121);
	goto T231;}
goto T228;
T228:;
	{register long V124;
	register long V125;
	V124= V114;
	V125= 0;
goto T249;
T249:;
	if((V124)>=(V115)){
	goto T251;}
	if((V125)>=(V118)){
	goto T251;}
	if(!(endp_prop((V119)))){
	goto T250;}
goto T251;
T251:;
	base[0]= (V120);
	base[1]= (V119);
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	{object V126 = vs_base[0];
	VMR11(V126)}
goto T250;
T250:;
	base[0]= car((V119));
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V113));
	vs_top=sup;
	V127= vs_base[0];
	if(((*(LnkLI43))((V108),(V109),(V105),V127))==Cnil){
	goto T262;}
	V125= (long)(1)+(V125);
	{register object V128;
	V128= car((V119));
	V119= cdr((V119));
	goto T260;}
goto T262;
T262:;
	{register object V129;
	V129= car((V119));
	V120= make_cons((V129),(V120));}
	{register object V130;
	V130= car((V119));
	V119= cdr((V119));}
goto T260;
T260:;
	V124= (long)(1)+(V124);
	goto T249;}}
goto T226;
T226:;
	V131 = make_fixnum(V114);
	V132 = make_fixnum(V115);
	V133 = make_fixnum(V118);
	{object V134 = (VFUN_NARGS=16,(*(LnkLI44))((V105),(V106),VV[11],(V107),VV[12],(V108),VV[13],(V109),VV[14],V131,VV[15],V132,VV[16],V133,VV[17],(V113)));
	VMR11(V134)}
goto T223;
T223:;
	V135 = make_fixnum(V114);
	V136 = make_fixnum(V115);
	V137 = make_fixnum(V118);
	{object V138 = (VFUN_NARGS=16,(*(LnkLI44))((V105),(V106),VV[11],(V107),VV[12],(V108),VV[13],(V109),VV[14],V135,VV[15],V136,VV[16],V137,VV[17],(V113)));
	VMR11(V138)}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function REMOVE-IF	*/

static object LI12(V140,V139,va_alist)
	object V140,V139;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V141;
	object V142;
	object V143;
	object V144;
	object V145;
	object V146;
	object V147;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V141= V140;
	V142= V139;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI12key,ap);
	V143=(Vcs[2]);
	V144=(Vcs[3]);
	V145=(Vcs[4]);
	V146=(Vcs[5]);
	if(Vcs[6]==0){
	V147= symbol_function(VV[35]);
	}else{
	V147=(Vcs[6]);}
	if(!(((V147))==(Cnil))){
	goto T281;}
	V147= symbol_function(VV[35]);
goto T281;
T281:;
	V148= symbol_function(VV[46]);
	{object V149 = (VFUN_NARGS=14,(*(LnkLI45))((V141),(V142),VV[11],(V143),VV[12],V148,VV[14],(V144),VV[15],(V145),VV[16],(V146),VV[17],(V147)));
	VMR12(V149)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function REMOVE-IF-NOT	*/

static object LI13(V151,V150,va_alist)
	object V151,V150;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB13 VMS13 VMV13
	{object V152;
	object V153;
	object V154;
	object V155;
	object V156;
	object V157;
	object V158;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V152= V151;
	V153= V150;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI13key,ap);
	V154=(Vcs[2]);
	V155=(Vcs[3]);
	V156=(Vcs[4]);
	V157=(Vcs[5]);
	if(Vcs[6]==0){
	V158= symbol_function(VV[35]);
	}else{
	V158=(Vcs[6]);}
	if(!(((V158))==(Cnil))){
	goto T287;}
	V158= symbol_function(VV[35]);
goto T287;
T287:;
	V159= symbol_function(VV[46]);
	{object V160 = (VFUN_NARGS=14,(*(LnkLI45))((V152),(V153),VV[11],(V154),VV[13],V159,VV[14],(V155),VV[15],(V156),VV[16],(V157),VV[17],(V158)));
	VMR13(V160)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function DELETE	*/

static object LI14(V162,V161,va_alist)
	object V162,V161;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB14 VMS14 VMV14
	{object V163;
	register object V164;
	object V165;
	object V166;
	object V167;
	object V168;
	object V169;
	object V170;
	object V171;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V163= V162;
	V164= V161;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI14key,ap);
	V165=(Vcs[2]);
	V166=(Vcs[3]);
	V167=(Vcs[4]);
	V168=(Vcs[5]);
	V169=(Vcs[6]);
	V170=(Vcs[7]);
	if(Vcs[8]==0){
	V171= symbol_function(VV[35]);
	}else{
	V171=(Vcs[8]);}
	{long V172;
	V172= (long)length((V164));
	if(!(((V171))==(Cnil))){
	goto T294;}
	V171= symbol_function(VV[35]);
goto T294;
T294:;
	{register long V173;
	if(((V168))==Cnil){
	goto T300;}
	V173= (long)(*(LnkLI36))((V168));
	goto T298;
goto T300;
T300:;
	V173= 0;
goto T298;
T298:;
	{long V174;
	V174= (long)(*(LnkLI37))((V169),(V164));
	if(!((V173)<=(V174))){
	goto T304;}
	goto T303;
goto T304;
T304:;
	V175 = make_fixnum(V173);
	V176 = make_fixnum(V174);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V175,V176)));
goto T303;
T303:;
	{register long V177;
	if(((V170))!=Cnil){
	goto T308;}
	V177= 2147483647;
	goto T306;
goto T308;
T308:;
	V177= fix((V170));
goto T306;
T306:;
	if((V166)==Cnil){
	goto T311;}
	if((V167)==Cnil){
	goto T311;}
	(void)((*(LnkLI42))());
goto T311;
T311:;
	if(((V165))!=Cnil){
	goto T313;}
	if(!(type_of((V164))==t_cons||((V164))==Cnil)){
	goto T316;}
	{object V178;
	register object V179;
	V178= make_cons(Cnil,(V164));
	V179= (V178);
	{long V180;
	V180= 0;
goto T323;
T323:;
	if(!((V180)>=(V173))){
	goto T324;}
	goto T320;
goto T324;
T324:;
	{object V181;
	V181= car((V179));
	V179= cdr((V179));}
	V180= (long)(1)+(V180);
	goto T323;}
goto T320;
T320:;
	{long V182;
	long V183;
	V182= V173;
	V183= 0;
goto T338;
T338:;
	if((V182)>=(V174)){
	goto T340;}
	if((V183)>=(V177)){
	goto T340;}
	if(!(endp_prop(cdr((V179))))){
	goto T339;}
goto T340;
T340:;
	{object V184 = cdr((V178));
	VMR14(V184)}
goto T339;
T339:;
	base[1]= cadr((V179));
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event((V171));
	vs_top=sup;
	V185= vs_base[0];
	if(((*(LnkLI43))((V166),(V167),(V163),V185))==Cnil){
	goto T349;}
	V183= (long)(1)+(V183);
	if(type_of((V179))!=t_cons)FEwrong_type_argument(Scons,(V179));
	((V179))->c.c_cdr = cddr((V179));
	goto T347;
goto T349;
T349:;
	V179= cdr((V179));
goto T347;
T347:;
	V182= (long)(1)+(V182);
	goto T338;}}
goto T316;
T316:;
	{long V186;
	V187 = make_fixnum(V173);
	V188 = make_fixnum(V174);
	V189 = make_fixnum(V177);
	V186= fix((VFUN_NARGS=16,(*(LnkLI47))((V163),(V164),VV[11],(V165),VV[12],(V166),VV[13],(V167),VV[14],V187,VV[15],V188,VV[16],V189,VV[17],(V171))));
	if(!((V186)<(V177))){
	goto T360;}
	V177= V186;
goto T360;
T360:;
	{object V190;
	register long V191;
	long V192;
	long V193;
	V194= (*(LnkLI49))((V164));
	V195 = make_fixnum((long)(V172)-(V177));
	V190= (VFUN_NARGS=2,(*(LnkLI48))(/* INLINE-ARGS */V194,V195));
	V191= 0;
	V192= 0;
	V193= 0;
goto T369;
T369:;
	if(!((V191)>=(V172))){
	goto T370;}
	{object V196 = (V190);
	VMR14(V196)}
goto T370;
T370:;
	if(!((V173)<=(V191))){
	goto T376;}
	if(!((V191)<(V174))){
	goto T376;}
	if(!((V193)<(V177))){
	goto T376;}
	base[0]= elt((V164),V191);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V171));
	vs_top=sup;
	V197= vs_base[0];
	if(((*(LnkLI43))((V166),(V167),(V163),V197))==Cnil){
	goto T376;}
	V193= (long)(1)+(V193);
	goto T374;
goto T376;
T376:;
	V198= elt((V164),V191);
	(void)(elt_set((V190),V192,/* INLINE-ARGS */V198));
	V192= (long)(1)+(V192);
goto T374;
T374:;
	V191= (long)(1)+(V191);
	goto T369;}}
goto T313;
T313:;
	{long V199;
	V200 = make_fixnum(V173);
	V201 = make_fixnum(V174);
	V202 = make_fixnum(V177);
	V199= fix((VFUN_NARGS=16,(*(LnkLI47))((V163),(V164),VV[11],(V165),VV[12],(V166),VV[13],(V167),VV[14],V200,VV[15],V201,VV[16],V202,VV[17],(V171))));
	if(!((V199)<(V177))){
	goto T393;}
	V177= V199;
goto T393;
T393:;
	{object V203;
	register long V204;
	long V205;
	long V206;
	V207= (*(LnkLI49))((V164));
	V208 = make_fixnum((long)(V172)-(V177));
	V203= (VFUN_NARGS=2,(*(LnkLI48))(/* INLINE-ARGS */V207,V208));
	V204= (long)(-1)+(V172);
	V205= (long)(-1)+((long)(V172)-(V177));
	V206= 0;
goto T402;
T402:;
	if(!((V204)<(0))){
	goto T403;}
	{object V209 = (V203);
	VMR14(V209)}
goto T403;
T403:;
	if(!((V173)<=(V204))){
	goto T409;}
	if(!((V204)<(V174))){
	goto T409;}
	if(!((V206)<(V177))){
	goto T409;}
	base[0]= elt((V164),V204);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V171));
	vs_top=sup;
	V210= vs_base[0];
	if(((*(LnkLI43))((V166),(V167),(V163),V210))==Cnil){
	goto T409;}
	V206= (long)(1)+(V206);
	goto T407;
goto T409;
T409:;
	V211= elt((V164),V204);
	(void)(elt_set((V203),V205,/* INLINE-ARGS */V211));
	V205= (long)(-1)+(V205);
goto T407;
T407:;
	V204= (long)(-1)+(V204);
	goto T402;}}}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function DELETE-IF	*/

static object LI15(V213,V212,va_alist)
	object V213,V212;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB15 VMS15 VMV15
	{object V214;
	object V215;
	object V216;
	object V217;
	object V218;
	object V219;
	object V220;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V214= V213;
	V215= V212;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI15key,ap);
	V216=(Vcs[2]);
	V217=(Vcs[3]);
	V218=(Vcs[4]);
	V219=(Vcs[5]);
	if(Vcs[6]==0){
	V220= symbol_function(VV[35]);
	}else{
	V220=(Vcs[6]);}
	if(!(((V220))==(Cnil))){
	goto T426;}
	V220= symbol_function(VV[35]);
goto T426;
T426:;
	V221= symbol_function(VV[46]);
	{object V222 = (VFUN_NARGS=14,(*(LnkLI44))((V214),(V215),VV[11],(V216),VV[12],V221,VV[14],(V217),VV[15],(V218),VV[16],(V219),VV[17],(V220)));
	VMR15(V222)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function DELETE-IF-NOT	*/

static object LI16(V224,V223,va_alist)
	object V224,V223;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB16 VMS16 VMV16
	{object V225;
	object V226;
	object V227;
	object V228;
	object V229;
	object V230;
	object V231;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V225= V224;
	V226= V223;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI16key,ap);
	V227=(Vcs[2]);
	V228=(Vcs[3]);
	V229=(Vcs[4]);
	V230=(Vcs[5]);
	if(Vcs[6]==0){
	V231= symbol_function(VV[35]);
	}else{
	V231=(Vcs[6]);}
	if(!(((V231))==(Cnil))){
	goto T432;}
	V231= symbol_function(VV[35]);
goto T432;
T432:;
	V232= symbol_function(VV[46]);
	{object V233 = (VFUN_NARGS=14,(*(LnkLI44))((V225),(V226),VV[11],(V227),VV[13],V232,VV[14],(V228),VV[15],(V229),VV[16],(V230),VV[17],(V231)));
	VMR16(V233)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function COUNT	*/

static object LI17(V235,V234,va_alist)
	object V235,V234;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB17 VMS17 VMV17
	{object V236;
	register object V237;
	object V238;
	register object V239;
	register object V240;
	object V241;
	object V242;
	register object V243;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V236= V235;
	V237= V234;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI17key,ap);
	V238=(Vcs[2]);
	V239=(Vcs[3]);
	V240=(Vcs[4]);
	V241=(Vcs[5]);
	V242=(Vcs[6]);
	if(Vcs[7]==0){
	V243= symbol_function(VV[35]);
	}else{
	V243=(Vcs[7]);}
	if(!(((V243))==(Cnil))){
	goto T438;}
	V243= symbol_function(VV[35]);
goto T438;
T438:;
	{long V244;
	if(((V241))==Cnil){
	goto T444;}
	V244= (long)(*(LnkLI36))((V241));
	goto T442;
goto T444;
T444:;
	V244= 0;
goto T442;
T442:;
	{long V245;
	V245= (long)(*(LnkLI37))((V242),(V237));
	if(!((V244)<=(V245))){
	goto T448;}
	goto T447;
goto T448;
T448:;
	V246 = make_fixnum(V244);
	V247 = make_fixnum(V245);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V246,V247)));
goto T447;
T447:;
	if((V239)==Cnil){
	goto T450;}
	if((V240)==Cnil){
	goto T450;}
	(void)((*(LnkLI42))());
goto T450;
T450:;
	if(((V238))!=Cnil){
	goto T452;}
	{register long V248;
	register long V249;
	V248= V244;
	V249= 0;
goto T457;
T457:;
	if(!((V248)>=(V245))){
	goto T458;}
	{object V250 = make_fixnum(V249);
	VMR17(V250)}
goto T458;
T458:;
	base[0]= elt((V237),V248);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V243));
	vs_top=sup;
	V251= vs_base[0];
	if(((*(LnkLI43))((V239),(V240),(V236),V251))==Cnil){
	goto T462;}
	V249= (long)(1)+(V249);
goto T462;
T462:;
	V248= (long)(1)+(V248);
	goto T457;}
goto T452;
T452:;
	{register long V252;
	register long V253;
	V252= (long)(-1)+(V245);
	V253= 0;
goto T474;
T474:;
	if(!((V252)<(V244))){
	goto T475;}
	{object V254 = make_fixnum(V253);
	VMR17(V254)}
goto T475;
T475:;
	base[0]= elt((V237),V252);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V243));
	vs_top=sup;
	V255= vs_base[0];
	if(((*(LnkLI43))((V239),(V240),(V236),V255))==Cnil){
	goto T479;}
	V253= (long)(1)+(V253);
goto T479;
T479:;
	V252= (long)(-1)+(V252);
	goto T474;}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function COUNT-IF	*/

static object LI18(V257,V256,va_alist)
	object V257,V256;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB18 VMS18 VMV18
	{object V258;
	object V259;
	object V260;
	object V261;
	object V262;
	object V263;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V258= V257;
	V259= V256;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI18key,ap);
	V260=(Vcs[2]);
	V261=(Vcs[3]);
	V262=(Vcs[4]);
	if(Vcs[5]==0){
	V263= symbol_function(VV[35]);
	}else{
	V263=(Vcs[5]);}
	if(!(((V263))==(Cnil))){
	goto T489;}
	V263= symbol_function(VV[35]);
goto T489;
T489:;
	V264= symbol_function(VV[46]);
	{object V265 = (VFUN_NARGS=12,(*(LnkLI50))((V258),(V259),VV[11],(V260),VV[12],V264,VV[14],(V261),VV[15],(V262),VV[17],(V263)));
	VMR18(V265)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function COUNT-IF-NOT	*/

static object LI19(V267,V266,va_alist)
	object V267,V266;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB19 VMS19 VMV19
	{object V268;
	object V269;
	object V270;
	object V271;
	object V272;
	object V273;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V268= V267;
	V269= V266;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI19key,ap);
	V270=(Vcs[2]);
	V271=(Vcs[3]);
	V272=(Vcs[4]);
	if(Vcs[5]==0){
	V273= symbol_function(VV[35]);
	}else{
	V273=(Vcs[5]);}
	if(!(((V273))==(Cnil))){
	goto T495;}
	V273= symbol_function(VV[35]);
goto T495;
T495:;
	V274= symbol_function(VV[46]);
	{object V275 = (VFUN_NARGS=12,(*(LnkLI50))((V268),(V269),VV[11],(V270),VV[13],V274,VV[14],(V271),VV[15],(V272),VV[17],(V273)));
	VMR19(V275)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function INTERNAL-COUNT	*/

static object LI20(V277,V276,va_alist)
	object V277,V276;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB20 VMS20 VMV20
	{object V278;
	register object V279;
	object V280;
	register object V281;
	register object V282;
	object V283;
	object V284;
	object V285;
	register object V286;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V278= V277;
	V279= V276;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI20key,ap);
	V280=(Vcs[2]);
	V281=(Vcs[3]);
	V282=(Vcs[4]);
	V283=(Vcs[5]);
	V284=(Vcs[6]);
	V285=(Vcs[7]);
	if(Vcs[8]==0){
	V286= symbol_function(VV[35]);
	}else{
	V286=(Vcs[8]);}
	if(!(((V286))==(Cnil))){
	goto T501;}
	V286= symbol_function(VV[35]);
goto T501;
T501:;
	{long V287;
	if(((V283))==Cnil){
	goto T507;}
	V287= (long)(*(LnkLI36))((V283));
	goto T505;
goto T507;
T507:;
	V287= 0;
goto T505;
T505:;
	{long V288;
	V288= (long)(*(LnkLI37))((V284),(V279));
	if(!((V287)<=(V288))){
	goto T511;}
	goto T510;
goto T511;
T511:;
	V289 = make_fixnum(V287);
	V290 = make_fixnum(V288);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V289,V290)));
goto T510;
T510:;
	{long V291;
	if(((V285))!=Cnil){
	goto T515;}
	V291= 2147483647;
	goto T513;
goto T515;
T515:;
	V291= fix((V285));
goto T513;
T513:;
	if((V281)==Cnil){
	goto T518;}
	if((V282)==Cnil){
	goto T518;}
	(void)((*(LnkLI42))());
goto T518;
T518:;
	if(((V280))!=Cnil){
	goto T520;}
	{register long V292;
	register long V293;
	V292= V287;
	V293= 0;
goto T525;
T525:;
	if(!((V292)>=(V288))){
	goto T526;}
	{object V294 = make_fixnum(V293);
	VMR20(V294)}
goto T526;
T526:;
	if(!((V293)<(V291))){
	goto T530;}
	base[0]= elt((V279),V292);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V286));
	vs_top=sup;
	V295= vs_base[0];
	if(((*(LnkLI43))((V281),(V282),(V278),V295))==Cnil){
	goto T530;}
	V293= (long)(1)+(V293);
goto T530;
T530:;
	V292= (long)(1)+(V292);
	goto T525;}
goto T520;
T520:;
	{register long V296;
	register long V297;
	V296= (long)(-1)+(V288);
	V297= 0;
goto T544;
T544:;
	if(!((V296)<(V287))){
	goto T545;}
	{object V298 = make_fixnum(V297);
	VMR20(V298)}
goto T545;
T545:;
	if(!((V297)<(V291))){
	goto T549;}
	base[0]= elt((V279),V296);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V286));
	vs_top=sup;
	V299= vs_base[0];
	if(((*(LnkLI43))((V281),(V282),(V278),V299))==Cnil){
	goto T549;}
	V297= (long)(1)+(V297);
goto T549;
T549:;
	V296= (long)(-1)+(V296);
	goto T544;}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function INTERNAL-COUNT-IF	*/

static object LI21(V301,V300,va_alist)
	object V301,V300;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB21 VMS21 VMV21
	{object V302;
	object V303;
	object V304;
	object V305;
	object V306;
	object V307;
	object V308;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V302= V301;
	V303= V300;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI21key,ap);
	V304=(Vcs[2]);
	V305=(Vcs[3]);
	V306=(Vcs[4]);
	V307=(Vcs[5]);
	if(Vcs[6]==0){
	V308= symbol_function(VV[35]);
	}else{
	V308=(Vcs[6]);}
	if(!(((V308))==(Cnil))){
	goto T561;}
	V308= symbol_function(VV[35]);
goto T561;
T561:;
	V309= symbol_function(VV[46]);
	{object V310 = (VFUN_NARGS=14,(*(LnkLI47))((V302),(V303),VV[11],(V304),VV[12],V309,VV[14],(V305),VV[15],(V306),VV[16],(V307),VV[17],(V308)));
	VMR21(V310)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function INTERNAL-COUNT-IF-NOT	*/

static object LI22(V312,V311,va_alist)
	object V312,V311;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB22 VMS22 VMV22
	{object V313;
	object V314;
	object V315;
	object V316;
	object V317;
	object V318;
	object V319;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V313= V312;
	V314= V311;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI22key,ap);
	V315=(Vcs[2]);
	V316=(Vcs[3]);
	V317=(Vcs[4]);
	V318=(Vcs[5]);
	if(Vcs[6]==0){
	V319= symbol_function(VV[35]);
	}else{
	V319=(Vcs[6]);}
	if(!(((V319))==(Cnil))){
	goto T567;}
	V319= symbol_function(VV[35]);
goto T567;
T567:;
	V320= symbol_function(VV[46]);
	{object V321 = (VFUN_NARGS=14,(*(LnkLI47))((V313),(V314),VV[11],(V315),VV[13],V320,VV[14],(V316),VV[15],(V317),VV[16],(V318),VV[17],(V319)));
	VMR22(V321)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function SUBSTITUTE	*/

static object LI23(V324,V323,V322,va_alist)
	object V324,V323,V322;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB23 VMS23 VMV23
	{object V325;
	object V326;
	register object V327;
	object V328;
	object V329;
	object V330;
	object V331;
	object V332;
	object V333;
	object V334;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <3) too_few_arguments();
	V325= V324;
	V326= V323;
	V327= V322;
	narg= narg - 3;
	{
	parse_key_new(narg,Vcs +3,(struct key *)&LI23key,ap);
	V328=(Vcs[3]);
	V329=(Vcs[4]);
	V330=(Vcs[5]);
	V331=(Vcs[6]);
	V332=(Vcs[7]);
	V333=(Vcs[8]);
	if(Vcs[9]==0){
	V334= symbol_function(VV[35]);
	}else{
	V334=(Vcs[9]);}
	{long V335;
	V335= (long)length((V327));
	if(!(((V334))==(Cnil))){
	goto T574;}
	V334= symbol_function(VV[35]);
goto T574;
T574:;
	{long V336;
	if(((V331))==Cnil){
	goto T580;}
	V336= (long)(*(LnkLI36))((V331));
	goto T578;
goto T580;
T580:;
	V336= 0;
goto T578;
T578:;
	{long V337;
	V337= (long)(*(LnkLI37))((V332),(V327));
	if(!((V336)<=(V337))){
	goto T584;}
	goto T583;
goto T584;
T584:;
	V338 = make_fixnum(V336);
	V339 = make_fixnum(V337);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V338,V339)));
goto T583;
T583:;
	{long V340;
	if(((V333))!=Cnil){
	goto T588;}
	V340= 2147483647;
	goto T586;
goto T588;
T588:;
	V340= fix((V333));
goto T586;
T586:;
	if((V329)==Cnil){
	goto T591;}
	if((V330)==Cnil){
	goto T591;}
	(void)((*(LnkLI42))());
goto T591;
T591:;
	if(((V328))!=Cnil){
	goto T593;}
	{register object V341;
	register long V342;
	register long V343;
	V344= (*(LnkLI49))((V327));
	V345 = make_fixnum(V335);
	V341= (VFUN_NARGS=2,(*(LnkLI48))(/* INLINE-ARGS */V344,V345));
	V342= 0;
	V343= 0;
goto T599;
T599:;
	if(!((V342)>=(V335))){
	goto T600;}
	{object V346 = (V341);
	VMR23(V346)}
goto T600;
T600:;
	if(!((V336)<=(V342))){
	goto T606;}
	if(!((V342)<(V337))){
	goto T606;}
	if(!((V343)<(V340))){
	goto T606;}
	base[0]= elt((V327),V342);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V334));
	vs_top=sup;
	V347= vs_base[0];
	if(((*(LnkLI43))((V329),(V330),(V326),V347))==Cnil){
	goto T606;}
	(void)(elt_set((V341),V342,(V325)));
	V343= (long)(1)+(V343);
	goto T604;
goto T606;
T606:;
	V348= elt((V327),V342);
	(void)(elt_set((V341),V342,/* INLINE-ARGS */V348));
goto T604;
T604:;
	V342= (long)(1)+(V342);
	goto T599;}
goto T593;
T593:;
	{register object V349;
	register long V350;
	register long V351;
	V352= (*(LnkLI49))((V327));
	V353 = make_fixnum(V335);
	V349= (VFUN_NARGS=2,(*(LnkLI48))(/* INLINE-ARGS */V352,V353));
	V350= (long)(-1)+(V335);
	V351= 0;
goto T625;
T625:;
	if(!((V350)<(0))){
	goto T626;}
	{object V354 = (V349);
	VMR23(V354)}
goto T626;
T626:;
	if(!((V336)<=(V350))){
	goto T632;}
	if(!((V350)<(V337))){
	goto T632;}
	if(!((V351)<(V340))){
	goto T632;}
	base[0]= elt((V327),V350);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V334));
	vs_top=sup;
	V355= vs_base[0];
	if(((*(LnkLI43))((V329),(V330),(V326),V355))==Cnil){
	goto T632;}
	(void)(elt_set((V349),V350,(V325)));
	V351= (long)(1)+(V351);
	goto T630;
goto T632;
T632:;
	V356= elt((V327),V350);
	(void)(elt_set((V349),V350,/* INLINE-ARGS */V356));
goto T630;
T630:;
	V350= (long)(-1)+(V350);
	goto T625;}}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function SUBSTITUTE-IF	*/

static object LI24(V359,V358,V357,va_alist)
	object V359,V358,V357;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB24 VMS24 VMV24
	{object V360;
	object V361;
	object V362;
	object V363;
	object V364;
	object V365;
	object V366;
	object V367;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <3) too_few_arguments();
	V360= V359;
	V361= V358;
	V362= V357;
	narg= narg - 3;
	{
	parse_key_new(narg,Vcs +3,(struct key *)&LI24key,ap);
	V363=(Vcs[3]);
	V364=(Vcs[4]);
	V365=(Vcs[5]);
	V366=(Vcs[6]);
	if(Vcs[7]==0){
	V367= symbol_function(VV[35]);
	}else{
	V367=(Vcs[7]);}
	if(!(((V367))==(Cnil))){
	goto T648;}
	V367= symbol_function(VV[35]);
goto T648;
T648:;
	V368= symbol_function(VV[46]);
	{object V369 = (VFUN_NARGS=15,(*(LnkLI51))((V360),(V361),(V362),VV[11],(V363),VV[12],V368,VV[14],(V364),VV[15],(V365),VV[16],(V366),VV[17],(V367)));
	VMR24(V369)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function SUBSTITUTE-IF-NOT	*/

static object LI25(V372,V371,V370,va_alist)
	object V372,V371,V370;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB25 VMS25 VMV25
	{object V373;
	object V374;
	object V375;
	object V376;
	object V377;
	object V378;
	object V379;
	object V380;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <3) too_few_arguments();
	V373= V372;
	V374= V371;
	V375= V370;
	narg= narg - 3;
	{
	parse_key_new(narg,Vcs +3,(struct key *)&LI25key,ap);
	V376=(Vcs[3]);
	V377=(Vcs[4]);
	V378=(Vcs[5]);
	V379=(Vcs[6]);
	if(Vcs[7]==0){
	V380= symbol_function(VV[35]);
	}else{
	V380=(Vcs[7]);}
	if(!(((V380))==(Cnil))){
	goto T654;}
	V380= symbol_function(VV[35]);
goto T654;
T654:;
	V381= symbol_function(VV[46]);
	{object V382 = (VFUN_NARGS=15,(*(LnkLI51))((V373),(V374),(V375),VV[11],(V376),VV[13],V381,VV[14],(V377),VV[15],(V378),VV[16],(V379),VV[17],(V380)));
	VMR25(V382)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function NSUBSTITUTE	*/

static object LI26(V385,V384,V383,va_alist)
	object V385,V384,V383;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB26 VMS26 VMV26
	{object V386;
	object V387;
	register object V388;
	object V389;
	object V390;
	object V391;
	object V392;
	object V393;
	object V394;
	register object V395;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <3) too_few_arguments();
	V386= V385;
	V387= V384;
	V388= V383;
	narg= narg - 3;
	{
	parse_key_new(narg,Vcs +3,(struct key *)&LI26key,ap);
	V389=(Vcs[3]);
	V390=(Vcs[4]);
	V391=(Vcs[5]);
	V392=(Vcs[6]);
	V393=(Vcs[7]);
	V394=(Vcs[8]);
	if(Vcs[9]==0){
	V395= symbol_function(VV[35]);
	}else{
	V395=(Vcs[9]);}
	if(!(((V395))==(Cnil))){
	goto T660;}
	V395= symbol_function(VV[35]);
goto T660;
T660:;
	{long V396;
	if(((V392))==Cnil){
	goto T666;}
	V396= (long)(*(LnkLI36))((V392));
	goto T664;
goto T666;
T666:;
	V396= 0;
goto T664;
T664:;
	{long V397;
	V397= (long)(*(LnkLI37))((V393),(V388));
	if(!((V396)<=(V397))){
	goto T670;}
	goto T669;
goto T670;
T670:;
	V398 = make_fixnum(V396);
	V399 = make_fixnum(V397);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V398,V399)));
goto T669;
T669:;
	{long V400;
	if(((V394))!=Cnil){
	goto T674;}
	V400= 2147483647;
	goto T672;
goto T674;
T674:;
	V400= fix((V394));
goto T672;
T672:;
	if((V390)==Cnil){
	goto T677;}
	if((V391)==Cnil){
	goto T677;}
	(void)((*(LnkLI42))());
goto T677;
T677:;
	if(((V389))!=Cnil){
	goto T679;}
	{register long V401;
	register long V402;
	V401= V396;
	V402= 0;
goto T684;
T684:;
	if(!((V401)>=(V397))){
	goto T685;}
	{object V403 = (V388);
	VMR26(V403)}
goto T685;
T685:;
	if(!((V402)<(V400))){
	goto T689;}
	base[0]= elt((V388),V401);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V395));
	vs_top=sup;
	V404= vs_base[0];
	if(((*(LnkLI43))((V390),(V391),(V387),V404))==Cnil){
	goto T689;}
	(void)(elt_set((V388),V401,(V386)));
	V402= (long)(1)+(V402);
goto T689;
T689:;
	V401= (long)(1)+(V401);
	goto T684;}
goto T679;
T679:;
	{register long V405;
	register long V406;
	V405= (long)(-1)+(V397);
	V406= 0;
goto T704;
T704:;
	if(!((V405)<(V396))){
	goto T705;}
	{object V407 = (V388);
	VMR26(V407)}
goto T705;
T705:;
	if(!((V406)<(V400))){
	goto T709;}
	base[0]= elt((V388),V405);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V395));
	vs_top=sup;
	V408= vs_base[0];
	if(((*(LnkLI43))((V390),(V391),(V387),V408))==Cnil){
	goto T709;}
	(void)(elt_set((V388),V405,(V386)));
	V406= (long)(1)+(V406);
goto T709;
T709:;
	V405= (long)(-1)+(V405);
	goto T704;}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function NSUBSTITUTE-IF	*/

static object LI27(V411,V410,V409,va_alist)
	object V411,V410,V409;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB27 VMS27 VMV27
	{object V412;
	object V413;
	object V414;
	object V415;
	object V416;
	object V417;
	object V418;
	object V419;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <3) too_few_arguments();
	V412= V411;
	V413= V410;
	V414= V409;
	narg= narg - 3;
	{
	parse_key_new(narg,Vcs +3,(struct key *)&LI27key,ap);
	V415=(Vcs[3]);
	V416=(Vcs[4]);
	V417=(Vcs[5]);
	V418=(Vcs[6]);
	if(Vcs[7]==0){
	V419= symbol_function(VV[35]);
	}else{
	V419=(Vcs[7]);}
	if(!(((V419))==(Cnil))){
	goto T722;}
	V419= symbol_function(VV[35]);
goto T722;
T722:;
	V420= symbol_function(VV[46]);
	{object V421 = (VFUN_NARGS=15,(*(LnkLI52))((V412),(V413),(V414),VV[11],(V415),VV[12],V420,VV[14],(V416),VV[15],(V417),VV[16],(V418),VV[17],(V419)));
	VMR27(V421)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function NSUBSTITUTE-IF-NOT	*/

static object LI28(V424,V423,V422,va_alist)
	object V424,V423,V422;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB28 VMS28 VMV28
	{object V425;
	object V426;
	object V427;
	object V428;
	object V429;
	object V430;
	object V431;
	object V432;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <3) too_few_arguments();
	V425= V424;
	V426= V423;
	V427= V422;
	narg= narg - 3;
	{
	parse_key_new(narg,Vcs +3,(struct key *)&LI28key,ap);
	V428=(Vcs[3]);
	V429=(Vcs[4]);
	V430=(Vcs[5]);
	V431=(Vcs[6]);
	if(Vcs[7]==0){
	V432= symbol_function(VV[35]);
	}else{
	V432=(Vcs[7]);}
	if(!(((V432))==(Cnil))){
	goto T728;}
	V432= symbol_function(VV[35]);
goto T728;
T728:;
	V433= symbol_function(VV[46]);
	{object V434 = (VFUN_NARGS=15,(*(LnkLI52))((V425),(V426),(V427),VV[11],(V428),VV[13],V433,VV[14],(V429),VV[15],(V430),VV[16],(V431),VV[17],(V432)));
	VMR28(V434)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function FIND	*/

static object LI29(V436,V435,va_alist)
	object V436,V435;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB29 VMS29 VMV29
	{object V437;
	register object V438;
	object V439;
	register object V440;
	register object V441;
	object V442;
	object V443;
	register object V444;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V437= V436;
	V438= V435;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI29key,ap);
	V439=(Vcs[2]);
	V440=(Vcs[3]);
	V441=(Vcs[4]);
	V442=(Vcs[5]);
	V443=(Vcs[6]);
	if(Vcs[7]==0){
	V444= symbol_function(VV[35]);
	}else{
	V444=(Vcs[7]);}
	if(!(((V444))==(Cnil))){
	goto T734;}
	V444= symbol_function(VV[35]);
goto T734;
T734:;
	{long V445;
	if(((V442))==Cnil){
	goto T740;}
	V445= (long)(*(LnkLI36))((V442));
	goto T738;
goto T740;
T740:;
	V445= 0;
goto T738;
T738:;
	{long V446;
	V446= (long)(*(LnkLI37))((V443),(V438));
	if(!((V445)<=(V446))){
	goto T744;}
	goto T743;
goto T744;
T744:;
	V447 = make_fixnum(V445);
	V448 = make_fixnum(V446);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V447,V448)));
goto T743;
T743:;
	if((V440)==Cnil){
	goto T746;}
	if((V441)==Cnil){
	goto T746;}
	(void)((*(LnkLI42))());
goto T746;
T746:;
	if(((V439))!=Cnil){
	goto T748;}
	{register long V449;
	V449= V445;
goto T752;
T752:;
	if(!((V449)>=(V446))){
	goto T753;}
	{object V450 = Cnil;
	VMR29(V450)}
goto T753;
T753:;
	base[0]= elt((V438),V449);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V444));
	vs_top=sup;
	V451= vs_base[0];
	if(((*(LnkLI43))((V440),(V441),(V437),V451))==Cnil){
	goto T757;}
	{object V452 = elt((V438),V449);
	VMR29(V452)}
goto T757;
T757:;
	V449= (long)(1)+(V449);
	goto T752;}
goto T748;
T748:;
	{register long V453;
	V453= (long)(-1)+(V446);
goto T767;
T767:;
	if(!((V453)<(V445))){
	goto T768;}
	{object V454 = Cnil;
	VMR29(V454)}
goto T768;
T768:;
	base[0]= elt((V438),V453);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V444));
	vs_top=sup;
	V455= vs_base[0];
	if(((*(LnkLI43))((V440),(V441),(V437),V455))==Cnil){
	goto T772;}
	{object V456 = elt((V438),V453);
	VMR29(V456)}
goto T772;
T772:;
	V453= (long)(-1)+(V453);
	goto T767;}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function FIND-IF	*/

static object LI30(V458,V457,va_alist)
	object V458,V457;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB30 VMS30 VMV30
	{object V459;
	object V460;
	object V461;
	object V462;
	object V463;
	object V464;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V459= V458;
	V460= V457;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI30key,ap);
	V461=(Vcs[2]);
	V462=(Vcs[3]);
	V463=(Vcs[4]);
	if(Vcs[5]==0){
	V464= symbol_function(VV[35]);
	}else{
	V464=(Vcs[5]);}
	if(!(((V464))==(Cnil))){
	goto T781;}
	V464= symbol_function(VV[35]);
goto T781;
T781:;
	V465= symbol_function(VV[46]);
	{object V466 = (VFUN_NARGS=12,(*(LnkLI53))((V459),(V460),VV[11],(V461),VV[12],V465,VV[14],(V462),VV[15],(V463),VV[17],(V464)));
	VMR30(V466)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function FIND-IF-NOT	*/

static object LI31(V468,V467,va_alist)
	object V468,V467;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB31 VMS31 VMV31
	{object V469;
	object V470;
	object V471;
	object V472;
	object V473;
	object V474;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V469= V468;
	V470= V467;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI31key,ap);
	V471=(Vcs[2]);
	V472=(Vcs[3]);
	V473=(Vcs[4]);
	if(Vcs[5]==0){
	V474= symbol_function(VV[35]);
	}else{
	V474=(Vcs[5]);}
	if(!(((V474))==(Cnil))){
	goto T787;}
	V474= symbol_function(VV[35]);
goto T787;
T787:;
	V475= symbol_function(VV[46]);
	{object V476 = (VFUN_NARGS=12,(*(LnkLI53))((V469),(V470),VV[11],(V471),VV[13],V475,VV[14],(V472),VV[15],(V473),VV[17],(V474)));
	VMR31(V476)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function POSITION	*/

static object LI32(V478,V477,va_alist)
	object V478,V477;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB32 VMS32 VMV32
	{object V479;
	register object V480;
	object V481;
	register object V482;
	register object V483;
	object V484;
	object V485;
	register object V486;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V479= V478;
	V480= V477;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI32key,ap);
	V481=(Vcs[2]);
	V482=(Vcs[3]);
	V483=(Vcs[4]);
	V484=(Vcs[5]);
	V485=(Vcs[6]);
	if(Vcs[7]==0){
	V486= symbol_function(VV[35]);
	}else{
	V486=(Vcs[7]);}
	if(!(((V486))==(Cnil))){
	goto T793;}
	V486= symbol_function(VV[35]);
goto T793;
T793:;
	{long V487;
	if(((V484))==Cnil){
	goto T799;}
	V487= (long)(*(LnkLI36))((V484));
	goto T797;
goto T799;
T799:;
	V487= 0;
goto T797;
T797:;
	{long V488;
	V488= (long)(*(LnkLI37))((V485),(V480));
	if(!((V487)<=(V488))){
	goto T803;}
	goto T802;
goto T803;
T803:;
	V489 = make_fixnum(V487);
	V490 = make_fixnum(V488);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V489,V490)));
goto T802;
T802:;
	if((V482)==Cnil){
	goto T805;}
	if((V483)==Cnil){
	goto T805;}
	(void)((*(LnkLI42))());
goto T805;
T805:;
	if(((V481))!=Cnil){
	goto T807;}
	{register long V491;
	V491= V487;
goto T811;
T811:;
	if(!((V491)>=(V488))){
	goto T812;}
	{object V492 = Cnil;
	VMR32(V492)}
goto T812;
T812:;
	base[0]= elt((V480),V491);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V486));
	vs_top=sup;
	V493= vs_base[0];
	if(((*(LnkLI43))((V482),(V483),(V479),V493))==Cnil){
	goto T816;}
	{object V494 = make_fixnum(V491);
	VMR32(V494)}
goto T816;
T816:;
	V491= (long)(1)+(V491);
	goto T811;}
goto T807;
T807:;
	{register long V495;
	V495= (long)(-1)+(V488);
goto T826;
T826:;
	if(!((V495)<(V487))){
	goto T827;}
	{object V496 = Cnil;
	VMR32(V496)}
goto T827;
T827:;
	base[0]= elt((V480),V495);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V486));
	vs_top=sup;
	V497= vs_base[0];
	if(((*(LnkLI43))((V482),(V483),(V479),V497))==Cnil){
	goto T831;}
	{object V498 = make_fixnum(V495);
	VMR32(V498)}
goto T831;
T831:;
	V495= (long)(-1)+(V495);
	goto T826;}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function POSITION-IF	*/

static object LI33(V500,V499,va_alist)
	object V500,V499;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB33 VMS33 VMV33
	{object V501;
	object V502;
	object V503;
	object V504;
	object V505;
	object V506;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V501= V500;
	V502= V499;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI33key,ap);
	V503=(Vcs[2]);
	V504=(Vcs[3]);
	V505=(Vcs[4]);
	if(Vcs[5]==0){
	V506= symbol_function(VV[35]);
	}else{
	V506=(Vcs[5]);}
	if(!(((V506))==(Cnil))){
	goto T840;}
	V506= symbol_function(VV[35]);
goto T840;
T840:;
	V507= symbol_function(VV[46]);
	{object V508 = (VFUN_NARGS=12,(*(LnkLI54))((V501),(V502),VV[11],(V503),VV[12],V507,VV[14],(V504),VV[15],(V505),VV[17],(V506)));
	VMR33(V508)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function POSITION-IF-NOT	*/

static object LI34(V510,V509,va_alist)
	object V510,V509;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB34 VMS34 VMV34
	{object V511;
	object V512;
	object V513;
	object V514;
	object V515;
	object V516;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V511= V510;
	V512= V509;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI34key,ap);
	V513=(Vcs[2]);
	V514=(Vcs[3]);
	V515=(Vcs[4]);
	if(Vcs[5]==0){
	V516= symbol_function(VV[35]);
	}else{
	V516=(Vcs[5]);}
	if(!(((V516))==(Cnil))){
	goto T846;}
	V516= symbol_function(VV[35]);
goto T846;
T846:;
	V517= symbol_function(VV[46]);
	{object V518 = (VFUN_NARGS=12,(*(LnkLI54))((V511),(V512),VV[11],(V513),VV[13],V517,VV[14],(V514),VV[15],(V515),VV[17],(V516)));
	VMR34(V518)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function REMOVE-DUPLICATES	*/

static object LI35(V519,va_alist)
	object V519;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB35 VMS35 VMV35
	{register object V520;
	object V521;
	register object V522;
	register object V523;
	object V524;
	object V525;
	register object V526;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V520= V519;
	narg= narg - 1;
	{
	parse_key_new(narg,Vcs +1,(struct key *)&LI35key,ap);
	V521=(Vcs[1]);
	V522=(Vcs[2]);
	V523=(Vcs[3]);
	V524=(Vcs[4]);
	V525=(Vcs[5]);
	if(Vcs[6]==0){
	V526= symbol_function(VV[35]);
	}else{
	V526=(Vcs[6]);}
	if((V522)==Cnil){
	goto T852;}
	if((V523)==Cnil){
	goto T852;}
	(void)((*(LnkLI42))());
goto T852;
T852:;
	if(!(type_of((V520))==t_cons||((V520))==Cnil)){
	goto T853;}
	if(((V521))!=Cnil){
	goto T853;}
	if(((V524))!=Cnil){
	goto T853;}
	if(((V525))!=Cnil){
	goto T853;}
	if(!(endp_prop((V520)))){
	goto T862;}
	{object V527 = Cnil;
	VMR35(V527)}
goto T862;
T862:;
	{register object V528;
	register object V529;
	V528= (V520);
	V529= Cnil;
goto T866;
T866:;
	if(!(endp_prop(cdr((V528))))){
	goto T867;}
	base[0]= (V529);
	base[1]= (V528);
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	{object V530 = vs_base[0];
	VMR35(V530)}
goto T867;
T867:;
	base[0]= car((V528));
	base[1]= cdr((V528));
	base[2]= VV[12];
	base[3]= (V522);
	base[4]= VV[13];
	base[5]= (V523);
	base[6]= VV[17];
	base[7]= (V526);
	vs_top=(vs_base=base+0)+8;
	(void) (*Lnk55)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T873;}
	V529= make_cons(car((V528)),(V529));
goto T873;
T873:;
	V528= cdr((V528));
	goto T866;}
goto T853;
T853:;
	{object V531 = (VFUN_NARGS=13,(*(LnkLI56))((V520),VV[11],(V521),VV[12],(V522),VV[13],(V523),VV[14],(V524),VV[15],(V525),VV[17],(V526)));
	VMR35(V531)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function DELETE-DUPLICATES	*/

static object LI36(V532,va_alist)
	object V532;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB36 VMS36 VMV36
	{register object V533;
	object V534;
	object V535;
	object V536;
	object V537;
	object V538;
	register object V539;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V533= V532;
	narg= narg - 1;
	{
	parse_key_new(narg,Vcs +1,(struct key *)&LI36key,ap);
	V534=(Vcs[1]);
	V535=(Vcs[2]);
	V536=(Vcs[3]);
	V537=(Vcs[4]);
	V538=(Vcs[5]);
	if(Vcs[6]==0){
	V539= symbol_function(VV[35]);
	}else{
	V539=(Vcs[6]);}
	{long V540;
	V540= (long)length((V533));
	if((V535)==Cnil){
	goto T890;}
	if((V536)==Cnil){
	goto T890;}
	(void)((*(LnkLI42))());
goto T890;
T890:;
	if(!(type_of((V533))==t_cons||((V533))==Cnil)){
	goto T891;}
	if(((V534))!=Cnil){
	goto T891;}
	if(((V537))!=Cnil){
	goto T891;}
	if(((V538))!=Cnil){
	goto T891;}
	if(!(endp_prop((V533)))){
	goto T900;}
	{object V541 = Cnil;
	VMR36(V541)}
goto T900;
T900:;
	{register object V542;
	V542= (V533);
goto T904;
T904:;
	if(!(endp_prop(cdr((V542))))){
	goto T905;}
	{object V543 = (V533);
	VMR36(V543)}
goto T905;
T905:;
	base[0]= car((V542));
	base[1]= cdr((V542));
	base[2]= VV[12];
	base[3]= (V535);
	base[4]= VV[13];
	base[5]= (V536);
	base[6]= VV[17];
	base[7]= (V539);
	vs_top=(vs_base=base+0)+8;
	(void) (*Lnk55)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T911;}
	if(type_of((V542))!=t_cons)FEwrong_type_argument(Scons,(V542));
	((V542))->c.c_car = cadr((V542));
	if(type_of((V542))!=t_cons)FEwrong_type_argument(Scons,(V542));
	((V542))->c.c_cdr = cddr((V542));
	goto T909;
goto T911;
T911:;
	V542= cdr((V542));
goto T909;
T909:;
	goto T904;}
goto T891;
T891:;
	{register long V544;
	if(((V537))==Cnil){
	goto T927;}
	V544= (long)(*(LnkLI36))((V537));
	goto T925;
goto T927;
T927:;
	V544= 0;
goto T925;
T925:;
	{register long V545;
	V545= (long)(*(LnkLI37))((V538),(V533));
	if(!((V544)<=(V545))){
	goto T931;}
	goto T930;
goto T931;
T931:;
	V546 = make_fixnum(V544);
	V547 = make_fixnum(V545);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V546,V547)));
goto T930;
T930:;
	if(((V534))!=Cnil){
	goto T934;}
	{long V548;
	long V549;
	V548= 0;
	V549= V544;
goto T939;
T939:;
	if(!((V549)>=(V545))){
	goto T940;}
	{object V550;
	register long V551;
	long V552;
	V553= (*(LnkLI49))((V533));
	V554 = make_fixnum((long)(V540)-(V548));
	V550= (VFUN_NARGS=2,(*(LnkLI48))(/* INLINE-ARGS */V553,V554));
	V551= 0;
	V552= 0;
goto T947;
T947:;
	if(!((V551)>=(V540))){
	goto T948;}
	{object V555 = (V550);
	VMR36(V555)}
goto T948;
T948:;
	{object V556;
	if((V544)<=(V551)){
	goto T954;}
	V556= Cnil;
	goto T953;
goto T954;
T954:;
	if((V551)<(V545)){
	goto T956;}
	V556= Cnil;
	goto T953;
goto T956;
T956:;
	base[0]= elt((V533),V551);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V539));
	vs_top=sup;
	V557= vs_base[0];
	V558 = make_fixnum((long)(1)+(V551));
	V559 = make_fixnum(V545);
	V556= (VFUN_NARGS=12,(*(LnkLI54))(V557,(V533),VV[12],(V535),VV[13],(V536),VV[14],V558,VV[15],V559,VV[17],(V539)));
goto T953;
T953:;
	if(((V556))==Cnil){
	goto T961;}
	goto T952;
goto T961;
T961:;
	V560= elt((V533),V551);
	(void)(elt_set((V550),V552,/* INLINE-ARGS */V560));
	V552= (long)(1)+(V552);}
goto T952;
T952:;
	V551= (long)(1)+(V551);
	goto T947;}
goto T940;
T940:;
	base[0]= elt((V533),V549);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V539));
	vs_top=sup;
	V561= vs_base[0];
	V562 = make_fixnum((long)(1)+(V549));
	V563 = make_fixnum(V545);
	if(((VFUN_NARGS=12,(*(LnkLI54))(V561,(V533),VV[12],(V535),VV[13],(V536),VV[14],V562,VV[15],V563,VV[17],(V539))))==Cnil){
	goto T969;}
	V548= (long)(1)+(V548);
goto T969;
T969:;
	V549= (long)(1)+(V549);
	goto T939;}
goto T934;
T934:;
	{long V564;
	long V565;
	V564= 0;
	V565= (long)(-1)+(V545);
goto T981;
T981:;
	if(!((V565)<(V544))){
	goto T982;}
	{object V566;
	register long V567;
	long V568;
	V569= (*(LnkLI49))((V533));
	V570 = make_fixnum((long)(V540)-(V564));
	V566= (VFUN_NARGS=2,(*(LnkLI48))(/* INLINE-ARGS */V569,V570));
	V567= (long)(-1)+(V540);
	V568= (long)((long)(-1)+(V540))-(V564);
goto T989;
T989:;
	if(!((V567)<(0))){
	goto T990;}
	{object V571 = (V566);
	VMR36(V571)}
goto T990;
T990:;
	{object V572;
	if((V544)<=(V567)){
	goto T996;}
	V572= Cnil;
	goto T995;
goto T996;
T996:;
	if((V567)<(V545)){
	goto T998;}
	V572= Cnil;
	goto T995;
goto T998;
T998:;
	base[0]= elt((V533),V567);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V539));
	vs_top=sup;
	V573= vs_base[0];
	V574 = make_fixnum(V544);
	V575 = make_fixnum(V567);
	V572= (VFUN_NARGS=14,(*(LnkLI54))(V573,(V533),VV[11],Ct,VV[12],(V535),VV[13],(V536),VV[14],V574,VV[15],V575,VV[17],(V539)));
goto T995;
T995:;
	if(((V572))==Cnil){
	goto T1003;}
	goto T994;
goto T1003;
T1003:;
	V576= elt((V533),V567);
	(void)(elt_set((V566),V568,/* INLINE-ARGS */V576));
	V568= (long)(-1)+(V568);}
goto T994;
T994:;
	V567= (long)(-1)+(V567);
	goto T989;}
goto T982;
T982:;
	base[0]= elt((V533),V565);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V539));
	vs_top=sup;
	V577= vs_base[0];
	V578 = make_fixnum(V544);
	V579 = make_fixnum(V565);
	if(((VFUN_NARGS=14,(*(LnkLI54))(V577,(V533),VV[11],Ct,VV[12],(V535),VV[13],(V536),VV[14],V578,VV[15],V579,VV[17],(V539))))==Cnil){
	goto T1011;}
	V564= (long)(1)+(V564);
goto T1011;
T1011:;
	V565= (long)(-1)+(V565);
	goto T981;}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function MISMATCH	*/

static object LI37(V581,V580,va_alist)
	object V581,V580;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB37 VMS37 VMV37
	{object V582;
	object V583;
	object V584;
	object V585;
	object V586;
	register object V587;
	object V588;
	object V589;
	object V590;
	object V591;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V582= V581;
	V583= V580;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI37key,ap);
	V584=(Vcs[2]);
	V585=(Vcs[3]);
	V586=(Vcs[4]);
	if(Vcs[5]==0){
	V587= symbol_function(VV[35]);
	}else{
	V587=(Vcs[5]);}
	V588=(Vcs[6]);
	V589=(Vcs[7]);
	V590=(Vcs[8]);
	V591=(Vcs[9]);
	if((V585)==Cnil){
	goto T1021;}
	if((V586)==Cnil){
	goto T1021;}
	(void)((*(LnkLI42))());
goto T1021;
T1021:;
	{register long V592;
	if(((V588))==Cnil){
	goto T1024;}
	V592= (long)(*(LnkLI36))((V588));
	goto T1022;
goto T1024;
T1024:;
	V592= 0;
goto T1022;
T1022:;
	{register long V593;
	V593= (long)(*(LnkLI37))((V590),(V582));
	if(!((V592)<=(V593))){
	goto T1028;}
	goto T1027;
goto T1028;
T1028:;
	V594 = make_fixnum(V592);
	V595 = make_fixnum(V593);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V594,V595)));
goto T1027;
T1027:;
	{register long V596;
	if(((V589))==Cnil){
	goto T1032;}
	V596= (long)(*(LnkLI36))((V589));
	goto T1030;
goto T1032;
T1032:;
	V596= 0;
goto T1030;
T1030:;
	{register long V597;
	V597= (long)(*(LnkLI37))((V591),(V583));
	if(!((V596)<=(V597))){
	goto T1036;}
	goto T1035;
goto T1036;
T1036:;
	V598 = make_fixnum(V596);
	V599 = make_fixnum(V597);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V598,V599)));
goto T1035;
T1035:;
	if(((V584))!=Cnil){
	goto T1039;}
	{register long V600;
	register long V601;
	V600= V592;
	V601= V596;
goto T1044;
T1044:;
	if((V600)>=(V593)){
	goto T1046;}
	if(!((V601)>=(V597))){
	goto T1045;}
goto T1046;
T1046:;
	if(!((V600)>=(V593))){
	goto T1051;}
	if(!((V601)>=(V597))){
	goto T1051;}
	{object V602 = Cnil;
	VMR37(V602)}
goto T1051;
T1051:;
	{object V603 = make_fixnum(V600);
	VMR37(V603)}
goto T1045;
T1045:;
	base[0]= elt((V582),V600);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V587));
	vs_top=sup;
	V604= vs_base[0];
	base[0]= elt((V583),V601);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V587));
	vs_top=sup;
	V605= vs_base[0];
	if(((*(LnkLI43))((V585),(V586),V604,V605))!=Cnil){
	goto T1056;}
	{object V606 = make_fixnum(V600);
	VMR37(V606)}
goto T1056;
T1056:;
	V600= (long)(1)+(V600);
	V601= (long)(1)+(V601);
	goto T1044;}
goto T1039;
T1039:;
	{register long V607;
	register long V608;
	V607= (long)(-1)+(V593);
	V608= (long)(-1)+(V597);
goto T1070;
T1070:;
	if((V607)<(V592)){
	goto T1072;}
	if(!((V608)<(V596))){
	goto T1071;}
goto T1072;
T1072:;
	if(!((V607)<(V592))){
	goto T1077;}
	if(!((V608)<(V596))){
	goto T1077;}
	{object V609 = Cnil;
	VMR37(V609)}
goto T1077;
T1077:;
	{object V610 = make_fixnum((long)(1)+(V607));
	VMR37(V610)}
goto T1071;
T1071:;
	base[0]= elt((V582),V607);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V587));
	vs_top=sup;
	V611= vs_base[0];
	base[0]= elt((V583),V608);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V587));
	vs_top=sup;
	V612= vs_base[0];
	if(((*(LnkLI43))((V585),(V586),V611,V612))!=Cnil){
	goto T1082;}
	{object V613 = make_fixnum((long)(1)+(V607));
	VMR37(V613)}
goto T1082;
T1082:;
	V607= (long)(-1)+(V607);
	V608= (long)(-1)+(V608);
	goto T1070;}}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function SEARCH	*/

static object LI38(V615,V614,va_alist)
	object V615,V614;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB38 VMS38 VMV38
	{object V616;
	object V617;
	object V618;
	object V619;
	object V620;
	register object V621;
	object V622;
	object V623;
	object V624;
	object V625;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V616= V615;
	V617= V614;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI38key,ap);
	V618=(Vcs[2]);
	V619=(Vcs[3]);
	V620=(Vcs[4]);
	if(Vcs[5]==0){
	V621= symbol_function(VV[35]);
	}else{
	V621=(Vcs[5]);}
	V622=(Vcs[6]);
	V623=(Vcs[7]);
	V624=(Vcs[8]);
	V625=(Vcs[9]);
	if((V619)==Cnil){
	goto T1094;}
	if((V620)==Cnil){
	goto T1094;}
	(void)((*(LnkLI42))());
goto T1094;
T1094:;
	{long V626;
	if(((V622))==Cnil){
	goto T1097;}
	V626= (long)(*(LnkLI36))((V622));
	goto T1095;
goto T1097;
T1097:;
	V626= 0;
goto T1095;
T1095:;
	{long V627;
	V627= (long)(*(LnkLI37))((V624),(V616));
	if(!((V626)<=(V627))){
	goto T1101;}
	goto T1100;
goto T1101;
T1101:;
	V628 = make_fixnum(V626);
	V629 = make_fixnum(V627);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V628,V629)));
goto T1100;
T1100:;
	{register long V630;
	if(((V623))==Cnil){
	goto T1105;}
	V630= (long)(*(LnkLI36))((V623));
	goto T1103;
goto T1105;
T1105:;
	V630= 0;
goto T1103;
T1103:;
	{long V631;
	V631= (long)(*(LnkLI37))((V625),(V617));
	if(!((V630)<=(V631))){
	goto T1109;}
	goto T1108;
goto T1109;
T1109:;
	V632 = make_fixnum(V630);
	V633 = make_fixnum(V631);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V632,V633)));
goto T1108;
T1108:;
	if(((V618))!=Cnil){
	goto T1112;}
goto T1115;
T1115:;
	{register long V634;
	register long V635;
	V634= V626;
	V635= V630;
goto T1121;
T1121:;
	if(!((V634)>=(V627))){
	goto T1122;}
	{object V636 = make_fixnum(V630);
	VMR38(V636)}
goto T1122;
T1122:;
	if(!((V635)>=(V631))){
	goto T1126;}
	{object V637 = Cnil;
	VMR38(V637)}
goto T1126;
T1126:;
	base[0]= elt((V616),V634);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V621));
	vs_top=sup;
	V638= vs_base[0];
	base[0]= elt((V617),V635);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V621));
	vs_top=sup;
	V639= vs_base[0];
	if(((*(LnkLI43))((V619),(V620),V638,V639))!=Cnil){
	goto T1129;}
	goto T1117;
goto T1129;
T1129:;
	V634= (long)(1)+(V634);
	V635= (long)(1)+(V635);
	goto T1121;}
goto T1117;
T1117:;
	V630= (long)(1)+(V630);
	goto T1115;
goto T1112;
T1112:;
goto T1143;
T1143:;
	{register long V640;
	register long V641;
	V640= (long)(-1)+(V627);
	V641= (long)(-1)+(V631);
goto T1149;
T1149:;
	if(!((V640)<(V626))){
	goto T1150;}
	{object V642 = make_fixnum((long)(1)+(V641));
	VMR38(V642)}
goto T1150;
T1150:;
	if(!((V641)<(V630))){
	goto T1154;}
	{object V643 = Cnil;
	VMR38(V643)}
goto T1154;
T1154:;
	base[0]= elt((V616),V640);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V621));
	vs_top=sup;
	V644= vs_base[0];
	base[0]= elt((V617),V641);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V621));
	vs_top=sup;
	V645= vs_base[0];
	if(((*(LnkLI43))((V619),(V620),V644,V645))!=Cnil){
	goto T1157;}
	goto T1145;
goto T1157;
T1157:;
	V640= (long)(-1)+(V640);
	V641= (long)(-1)+(V641);
	goto T1149;}
goto T1145;
T1145:;
	V631= (long)(-1)+(V631);
	goto T1143;}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for SORT	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_reserve(VM39);
	{register object V646;
	object V647;
	object V648;
	if(vs_top-vs_base<2) too_few_arguments();
	parse_key(vs_base+2,FALSE,FALSE,1,VV[17]);
	V646=(base[0]);
	V647=(base[1]);
	vs_top=sup;
	if(base[3]==Cnil){
	V648= symbol_function(VV[35]);
	}else{
	V648=(base[2]);}
	if(!(type_of((V646))==t_cons||((V646))==Cnil)){
	goto T1172;}
	base[4]= (V646);
	base[5]= (V647);
	base[6]= (V648);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk57)();
	return;
goto T1172;
T1172:;
	base[4]= (*(LnkLI58))((V646),0,(long)length((V646)),(V647),(V648));
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	function definition for LIST-MERGE-SORT	*/

static void L40()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_reserve(VM40);
	{object V649;
	check_arg(3);
	V649=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	base[3]= (V649);
	vs_top=(vs_base=base+3)+1;
	L41(base);
	return;
	}
}
/*	local entry for function QUICK-SORT	*/

static object LI42(V655,V656,V657,V658,V659)

register object V655;long V656;long V657;register object V658;register object V659;
{	 VMB41 VMS41 VMV41
goto TTL;
TTL:;
	if(!((V657)<=((long)(1)+(V656)))){
	goto T1179;}
	{object V660 = (V655);
	VMR41(V660)}
goto T1179;
T1179:;
	{register long V661;
	register long V662;
	object V663;
	register object V664;
	V661= V656;
	V662= V657;
	V663= elt((V655),V656);
	V664= (
	(type_of((V659)) == t_sfun ?(*(((V659))->sfn.sfn_self)):
	(fcall.fun=((V659)),fcall.argd=1,fcalln))((V663)));
goto T1187;
T1187:;
goto T1191;
T1191:;
	V662= (long)(-1)+(V662);
	if((V661)<(V662)){
	goto T1195;}
	goto T1185;
goto T1195;
T1195:;
	base[3]= elt((V655),V662);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event((V659));
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V664);
	vs_top=(vs_base=base+2)+2;
	super_funcall_no_event((V658));
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1192;}
	goto T1189;
goto T1192;
T1192:;
	goto T1191;
goto T1189;
T1189:;
goto T1206;
T1206:;
	V661= (long)(1)+(V661);
	if((V661)<(V662)){
	goto T1210;}
	goto T1185;
goto T1210;
T1210:;
	base[3]= elt((V655),V661);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event((V659));
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V664);
	vs_top=(vs_base=base+2)+2;
	super_funcall_no_event((V658));
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1207;}
	goto T1204;
goto T1207;
T1207:;
	goto T1206;
goto T1204;
T1204:;
	{object V665;
	V665= elt((V655),V661);
	V666= elt((V655),V662);
	(void)(elt_set((V655),V661,/* INLINE-ARGS */V666));
	(void)(elt_set((V655),V662,(V665)));}
	goto T1187;
goto T1185;
T1185:;
	V667= elt((V655),V661);
	(void)(elt_set((V655),V656,/* INLINE-ARGS */V667));
	(void)(elt_set((V655),V661,(V663)));
	(void)((*(LnkLI58))((V655),V656,V661,(V658),(V659)));
	V656= (long)(1)+(V661);
	goto TTL;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for STABLE-SORT	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_reserve(VM42);
	{register object V668;
	object V669;
	object V670;
	if(vs_top-vs_base<2) too_few_arguments();
	parse_key(vs_base+2,FALSE,FALSE,1,VV[17]);
	V668=(base[0]);
	V669=(base[1]);
	vs_top=sup;
	if(base[3]==Cnil){
	V670= symbol_function(VV[35]);
	}else{
	V670=(base[2]);}
	if(!(type_of((V668))==t_cons||((V668))==Cnil)){
	goto T1233;}
	base[4]= (V668);
	base[5]= (V669);
	base[6]= (V670);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk57)();
	return;
goto T1233;
T1233:;
	if(type_of((V668))==t_string){
	goto T1238;}
	if(!((type_of((V668))==t_bitvector))){
	goto T1239;}
goto T1238;
T1238:;
	base[4]= (V668);
	base[5]= (V669);
	base[6]= VV[17];
	base[7]= (V670);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk59)();
	return;
goto T1239;
T1239:;
	base[4]= (*(LnkLI60))((V668),VV[0]);
	base[5]= (V669);
	base[6]= (V670);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk57)();
	vs_top=sup;
	V671= vs_base[0];
	V672= (*(LnkLI49))((V668));
	base[4]= (*(LnkLI60))(V671,/* INLINE-ARGS */V672);
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	local entry for function MERGE	*/

static object LI44(V676,V675,V674,V673,va_alist)
	object V676,V675,V674,V673;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB43 VMS43 VMV43
	{object V677;
	register object V678;
	object V679;
	object V680;
	register object V681;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <4) too_few_arguments();
	V677= V676;
	V678= V675;
	V679= V674;
	V680= V673;
	narg= narg - 4;
	{
	parse_key_new(narg,Vcs +4,(struct key *)&LI44key,ap);
	if(Vcs[4]==0){
	V681= symbol_function(VV[35]);
	}else{
	V681=(Vcs[4]);}
	{long V682;
	long V683;
	V682= (long)length((V678));
	V683= (long)length((V679));
	if(!(equal((V681),Cnil))){
	goto T1254;}
	V681= symbol_function(VV[35]);
goto T1254;
T1254:;
	{register object V684;
	register long V685;
	register long V686;
	register long V687;
	V688 = make_fixnum((long)(V682)+(V683));
	V684= (VFUN_NARGS=2,(*(LnkLI48))((V677),V688));
	V685= 0;
	V686= 0;
	V687= 0;
goto T1263;
T1263:;
	if(!((V686)==(V682))){
	goto T1264;}
	if(!((V687)==(V683))){
	goto T1264;}
	{object V689 = (V684);
	VMR43(V689)}
goto T1264;
T1264:;
	if(!((V686)<(V682))){
	goto T1272;}
	if(!((V687)<(V683))){
	goto T1272;}
	base[1]= elt((V678),V686);
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event((V681));
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= elt((V679),V687);
	vs_top=(vs_base=base+2)+1;
	super_funcall_no_event((V681));
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	super_funcall_no_event((V680));
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1277;}
	V690= elt((V678),V686);
	(void)(elt_set((V684),V685,/* INLINE-ARGS */V690));
	V686= (long)(1)+(V686);
	goto T1270;
goto T1277;
T1277:;
	base[1]= elt((V679),V687);
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event((V681));
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= elt((V678),V686);
	vs_top=(vs_base=base+2)+1;
	super_funcall_no_event((V681));
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	super_funcall_no_event((V680));
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1286;}
	V691= elt((V679),V687);
	(void)(elt_set((V684),V685,/* INLINE-ARGS */V691));
	V687= (long)(1)+(V687);
	goto T1270;
goto T1286;
T1286:;
	V692= elt((V678),V686);
	(void)(elt_set((V684),V685,/* INLINE-ARGS */V692));
	V686= (long)(1)+(V686);
	goto T1270;
goto T1272;
T1272:;
	if(!((V686)<(V682))){
	goto T1297;}
	V693= elt((V678),V686);
	(void)(elt_set((V684),V685,/* INLINE-ARGS */V693));
	V686= (long)(1)+(V686);
	goto T1270;
goto T1297;
T1297:;
	V694= elt((V679),V687);
	(void)(elt_set((V684),V685,/* INLINE-ARGS */V694));
	V687= (long)(1)+(V687);
goto T1270;
T1270:;
	V685= (long)(1)+(V685);
	goto T1263;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for MAP-INTO	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_reserve(VM44);
	{register object V695;
	register object V696;
	register object V697;
	if(vs_top-vs_base<2) too_few_arguments();
	V695=(base[0]);
	V696=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V697=(base[2]);
	vs_top=sup;
	{object V698;
	base[5]= (V695);
	vs_top=(vs_base=base+5)+1;
	Ltype_of();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[18];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk61)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1309;}
	base[4]= (V695);
	base[5]= small_fixnum(0);
	vs_top=(vs_base=base+4)+2;
	Larray_dimension();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T1307;
goto T1309;
T1309:;
	base[3]= make_fixnum((long)length((V695)));
goto T1307;
T1307:;
	{object V699;
	{object V700;
	object V701= (V697);
	if(endp(V701)){
	V699= Cnil;
	goto T1316;}
	base[4]=V700=MMcons(Cnil,Cnil);
goto T1317;
T1317:;
	base[5]= (V701->c.c_car);
	vs_top=(vs_base=base+5)+1;
	Llength();
	vs_top=sup;
	(V700->c.c_car)= vs_base[0];
	V701=MMcdr(V701);
	if(endp(V701)){
	V699= base[4];
	goto T1316;}
	V700=MMcdr(V700)=MMcons(Cnil,Cnil);
	goto T1317;}
goto T1316;
T1316:;
	 vs_top=base+4;
	 while(!endp(V699))
	 {vs_push(car(V699));V699=cdr(V699);}
	vs_base=base+3;}
	Lmin();
	vs_top=sup;
	V698= vs_base[0];
	base[4]= (V695);
	vs_top=(vs_base=base+4)+1;
	Ltype_of();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= VV[18];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk61)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1320;}
	base[3]= (V695);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk62)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1320;}
	base[3]= (V695);
	base[4]= (V698);
	vs_top=(vs_base=base+3)+2;
	siLfill_pointer_set();
	vs_top=sup;
goto T1320;
T1320:;
	{register object V702;
	register object V703;
	V702= (V698);
	V703= small_fixnum(0);
goto T1334;
T1334:;
	if(!(number_compare((V703),(V702))>=0)){
	goto T1335;}
	base[3]= (V695);
	vs_top=(vs_base=base+3)+1;
	return;
goto T1335;
T1335:;
	base[3]= (V696);
	{object V705;
	{object V706;
	object V707= (V697);
	if(endp(V707)){
	V705= Cnil;
	goto T1342;}
	base[4]=V706=MMcons(Cnil,Cnil);
goto T1343;
T1343:;
	{register object V708;
	V708= (V707->c.c_car);
	(V706->c.c_car)= elt((V708),fixint((V703)));}
	V707=MMcdr(V707);
	if(endp(V707)){
	V705= base[4];
	goto T1342;}
	V706=MMcdr(V706)=MMcons(Cnil,Cnil);
	goto T1343;}
goto T1342;
T1342:;
	 vs_top=base+4;
	 while(!endp(V705))
	 {vs_push(car(V705));V705=cdr(V705);}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	vs_top=sup;
	V704= vs_base[0];
	(void)(elt_set((V695),fixint((V703)),V704));
	V703= one_plus((V703));
	goto T1334;}}
	}
}
/*	macro definition for WITH-HASH-TABLE-ITERATOR	*/

static void L46()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_reserve(VM45);
	check_arg(2);
	vs_top=sup;
	{object V709=base[0]->c.c_cdr;
	if(endp(V709))invalid_macro_call();
	{object V710= (V709->c.c_car);
	if(endp(V710))invalid_macro_call();
	base[2]= (V710->c.c_car);
	V710=V710->c.c_cdr;
	if(endp(V710))invalid_macro_call();
	base[3]= (V710->c.c_car);
	V710=V710->c.c_cdr;
	if(!endp(V710))invalid_macro_call();}
	V709=V709->c.c_cdr;
	base[4]= V709;}
	{object V711;
	object V712;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V711= vs_base[0];
	base[5]= VV[19];
	vs_top=(vs_base=base+5)+1;
	Lgensym();
	vs_top=sup;
	V712= vs_base[0];
	V713= list(2,(V711),base[3]);
	V714= list(2,/* INLINE-ARGS */V713,list(2,(V712),small_fixnum(0)));
	V715= list(2,VV[25],(V711));
	V716= list(4,VV[0],VV[24],/* INLINE-ARGS */V715,list(2,VV[25],(V712)));
	V717= list(3,base[2],Cnil,list(5,VV[0],VV[22],VV[23],/* INLINE-ARGS */V716,list(4,VV[0],VV[26],list(4,VV[0],VV[27],list(4,VV[0],VV[28],list(2,VV[25],(V712)),VV[29]),VV[30]),VV[31])));
	base[5]= list(3,VV[20],/* INLINE-ARGS */V714,listA(3,VV[21],make_cons(/* INLINE-ARGS */V717,Cnil),base[4]));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	local function SORT	*/

static void L41(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_reserve(VM46);
	{object V718;
	check_arg(1);
	V718=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{long V719;
	register object V720;
	register object V721;
	object V722;
	register object V723;
	register object V724;
	register object V725;
	V719= 0;
	V720= Cnil;
	V721= Cnil;
	V722= Cnil;
	V723= Cnil;
	V724= Cnil;
	V725= Cnil;
	V719= (long)length((V718));
	if(!((V719)<(2))){
	goto T1360;}
	base[1]= (V718);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1360;
T1360:;
	if(!((V719)==(2))){
	goto T1358;}
	V724= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V718))));
	V725= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(cadr((V718))));
	base[1]= (V724);
	base[2]= (V725);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1369;}
	base[1]= (V718);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1369;
T1369:;
	base[1]= (V725);
	base[2]= (V724);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1374;}
	base[1]= nreverse((V718));
	vs_top=(vs_base=base+1)+1;
	return;
goto T1374;
T1374:;
	base[1]= (V718);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1358;
T1358:;
	V719= (long)(V719>=0&&(2)>0?(V719)/(2):ifloor(V719,2));
	{long V726;
	register object V727;
	V726= 1;
	V727= (V718);
goto T1383;
T1383:;
	if(!((V726)>=(V719))){
	goto T1384;}
	V720= (V718);
	V721= cdr((V727));
	if(type_of((V727))!=t_cons)FEwrong_type_argument(Scons,(V727));
	((V727))->c.c_cdr = Cnil;
	goto T1380;
goto T1384;
T1384:;
	V726= (long)(1)+(V726);
	V727= cdr((V727));
	goto T1383;}
goto T1380;
T1380:;
	base[1]= (V720);
	vs_top=(vs_base=base+1)+1;
	L41(base0);
	vs_top=sup;
	V720= vs_base[0];
	base[1]= (V721);
	vs_top=(vs_base=base+1)+1;
	L41(base0);
	vs_top=sup;
	V721= vs_base[0];
	if(!(endp_prop((V720)))){
	goto T1404;}
	base[1]= (V721);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1404;
T1404:;
	if(!(endp_prop((V721)))){
	goto T1402;}
	base[1]= (V720);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1402;
T1402:;
	V722= make_cons(Cnil,Cnil);
	V723= (V722);
	V724= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V720))));
	V725= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V721))));
goto T1353;
T1353:;
	base[1]= (V724);
	base[2]= (V725);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1416;}
	goto T1354;
goto T1416;
T1416:;
	base[1]= (V725);
	base[2]= (V724);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1421;}
	goto T1355;
goto T1421;
T1421:;
	goto T1354;
goto T1354;
T1354:;
	if(type_of((V723))!=t_cons)FEwrong_type_argument(Scons,(V723));
	((V723))->c.c_cdr = (V720);
	V723= cdr((V723));
	V720= cdr((V720));
	if(!(endp_prop((V720)))){
	goto T1430;}
	if(type_of((V723))!=t_cons)FEwrong_type_argument(Scons,(V723));
	((V723))->c.c_cdr = (V721);
	base[1]= cdr((V722));
	vs_top=(vs_base=base+1)+1;
	return;
goto T1430;
T1430:;
	V724= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V720))));
	goto T1353;
goto T1355;
T1355:;
	if(type_of((V723))!=t_cons)FEwrong_type_argument(Scons,(V723));
	((V723))->c.c_cdr = (V721);
	V723= cdr((V723));
	V721= cdr((V721));
	if(!(endp_prop((V721)))){
	goto T1441;}
	if(type_of((V723))!=t_cons)FEwrong_type_argument(Scons,(V723));
	((V723))->c.c_cdr = (V720);
	base[1]= cdr((V722));
	vs_top=(vs_base=base+1)+1;
	return;
goto T1441;
T1441:;
	V725= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V721))));
	goto T1353;}
	}
}
static void LnkT62(){ call_or_link(VV[62],(void **)&Lnk62);} /* ARRAY-HAS-FILL-POINTER-P */
static void LnkT61(){ call_or_link(VV[61],(void **)&Lnk61);} /* SUBTYPEP */
static object  LnkTLI60(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[60],(void **)&LnkLI60,2,ap);va_end(ap);return V1;} /* COERCE */
static void LnkT59(){ call_or_link(VV[59],(void **)&Lnk59);} /* SORT */
static object  LnkTLI58(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[58],(void **)&LnkLI58,81925,ap);va_end(ap);return V1;} /* QUICK-SORT */
static void LnkT57(){ call_or_link(VV[57],(void **)&Lnk57);} /* LIST-MERGE-SORT */
static object  LnkTLI56(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[56],(void **)&LnkLI56,ap);va_end(ap);return V1;} /* DELETE-DUPLICATES */
static void LnkT55(){ call_or_link(VV[55],(void **)&Lnk55);} /* MEMBER1 */
static object  LnkTLI54(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[54],(void **)&LnkLI54,ap);va_end(ap);return V1;} /* POSITION */
static object  LnkTLI53(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[53],(void **)&LnkLI53,ap);va_end(ap);return V1;} /* FIND */
static object  LnkTLI52(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[52],(void **)&LnkLI52,ap);va_end(ap);return V1;} /* NSUBSTITUTE */
static object  LnkTLI51(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[51],(void **)&LnkLI51,ap);va_end(ap);return V1;} /* SUBSTITUTE */
static object  LnkTLI50(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[50],(void **)&LnkLI50,ap);va_end(ap);return V1;} /* COUNT */
static object  LnkTLI49(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[49],(void **)&LnkLI49,1,ap);va_end(ap);return V1;} /* SEQTYPE */
static object  LnkTLI48(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[48],(void **)&LnkLI48,ap);va_end(ap);return V1;} /* MAKE-SEQUENCE */
static object  LnkTLI47(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[47],(void **)&LnkLI47,ap);va_end(ap);return V1;} /* INTERNAL-COUNT */
static object  LnkTLI45(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[45],(void **)&LnkLI45,ap);va_end(ap);return V1;} /* REMOVE */
static object  LnkTLI44(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[44],(void **)&LnkLI44,ap);va_end(ap);return V1;} /* DELETE */
static object  LnkTLI43(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[43],(void **)&LnkLI43,4,ap);va_end(ap);return V1;} /* CALL-TEST */
static object  LnkTLI42(){return call_proc0(VV[42],(void **)&LnkLI42);} /* TEST-ERROR */
static object  LnkTLI37(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[37],(void **)&LnkLI37,258,ap);va_end(ap);return V1;} /* THE-END */
static object  LnkTLI36(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[36],(void **)&LnkLI36,257,ap);va_end(ap);return V1;} /* THE-START */
static object  LnkTLI33(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[33],(void **)&LnkLI33,ap);va_end(ap);return V1;} /* BAD-SEQ-LIMIT */
static void LnkT32(){ call_or_link(VV[32],(void **)&Lnk32);} /* SPECIFIC-ERROR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

