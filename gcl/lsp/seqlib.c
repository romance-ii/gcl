
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

static object LI5(object V28,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB5 VMS5 VMV5
	{object V29;
	object V30;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V29= V28;
	narg = narg - 1;
	if (narg <= 0) goto T39;
	else {
	V30= first;}
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

static object LI9(object V64,object V63,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{register object V65;
	register object V66;
	object V67;
	object V68;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V65= V64;
	V66= V63;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI9key,first,ap);
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

static object LI10(object V76,object V75,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{register object V77;
	object V78;
	object V79;
	object V80;
	object V81;
	object V82;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V77= V76;
	V78= V75;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI10key,first,ap);
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

static object LI11(object V104,object V103,object first,...)
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
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V105= V104;
	V106= V103;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI11key,first,ap);
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
	{IDECL(GEN V118,V118space,V118alloc);
	if(((V112))!=Cnil){
	goto T218;}
	ISETQ_FIX(V118,V118alloc,2147483647);
	goto T216;
	goto T218;
T218:;SETQ_IO(V118,V118alloc,(V112));
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
	V126 = make_fixnum(V125);
	V127 = make_integer(V118);
	if(number_compare(V126,V127)>=0){
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
	{object V128 = vs_base[0];
	VMR11(V128)}
	goto T250;
T250:;
	base[0]= car((V119));
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V113));
	vs_top=sup;
	V129= vs_base[0];
	if(((*(LnkLI43))((V108),(V109),(V105),V129))==Cnil){
	goto T262;}
	V125= (long)(1)+(V125);
	{register object V130;
	V130= car((V119));
	V119= cdr((V119));
	goto T260;}
	goto T262;
T262:;
	{register object V131;
	V131= car((V119));
	V120= make_cons((V131),(V120));}
	{register object V132;
	V132= car((V119));
	V119= cdr((V119));}
	goto T260;
T260:;
	V124= (long)(1)+(V124);
	goto T249;}}
	goto T226;
T226:;
	V133 = make_fixnum(V114);
	V134 = make_fixnum(V115);
	V135 = make_integer(V118);
	{object V136 = (VFUN_NARGS=16,(*(LnkLI44))((V105),(V106),VV[11],(V107),VV[12],(V108),VV[13],(V109),VV[14],V133,VV[15],V134,VV[16],V135,VV[17],(V113)));
	VMR11(V136)}
	goto T223;
T223:;
	V137 = make_fixnum(V114);
	V138 = make_fixnum(V115);
	V139 = make_integer(V118);
	{object V140 = (VFUN_NARGS=16,(*(LnkLI44))((V105),(V106),VV[11],(V107),VV[12],(V108),VV[13],(V109),VV[14],V137,VV[15],V138,VV[16],V139,VV[17],(V113)));
	VMR11(V140)}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function REMOVE-IF	*/

static object LI12(object V142,object V141,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V143;
	object V144;
	object V145;
	object V146;
	object V147;
	object V148;
	object V149;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V143= V142;
	V144= V141;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI12key,first,ap);
	V145=(Vcs[2]);
	V146=(Vcs[3]);
	V147=(Vcs[4]);
	V148=(Vcs[5]);
	if(Vcs[6]==0){
	V149= symbol_function(VV[35]);
	}else{
	V149=(Vcs[6]);}
	if(!(((V149))==(Cnil))){
	goto T281;}
	V149= symbol_function(VV[35]);
	goto T281;
T281:;
	V150= symbol_function(VV[46]);
	{object V151 = (VFUN_NARGS=14,(*(LnkLI45))((V143),(V144),VV[11],(V145),VV[12],V150,VV[14],(V146),VV[15],(V147),VV[16],(V148),VV[17],(V149)));
	VMR12(V151)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function REMOVE-IF-NOT	*/

static object LI13(object V153,object V152,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB13 VMS13 VMV13
	{object V154;
	object V155;
	object V156;
	object V157;
	object V158;
	object V159;
	object V160;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V154= V153;
	V155= V152;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI13key,first,ap);
	V156=(Vcs[2]);
	V157=(Vcs[3]);
	V158=(Vcs[4]);
	V159=(Vcs[5]);
	if(Vcs[6]==0){
	V160= symbol_function(VV[35]);
	}else{
	V160=(Vcs[6]);}
	if(!(((V160))==(Cnil))){
	goto T287;}
	V160= symbol_function(VV[35]);
	goto T287;
T287:;
	V161= symbol_function(VV[46]);
	{object V162 = (VFUN_NARGS=14,(*(LnkLI45))((V154),(V155),VV[11],(V156),VV[13],V161,VV[14],(V157),VV[15],(V158),VV[16],(V159),VV[17],(V160)));
	VMR13(V162)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function DELETE	*/

static object LI14(object V164,object V163,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB14 VMS14 VMV14
	{object V165;
	register object V166;
	object V167;
	object V168;
	object V169;
	object V170;
	object V171;
	object V172;
	object V173;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V165= V164;
	V166= V163;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI14key,first,ap);
	V167=(Vcs[2]);
	V168=(Vcs[3]);
	V169=(Vcs[4]);
	V170=(Vcs[5]);
	V171=(Vcs[6]);
	V172=(Vcs[7]);
	if(Vcs[8]==0){
	V173= symbol_function(VV[35]);
	}else{
	V173=(Vcs[8]);}
	{long V174;
	V174= (long)length((V166));
	if(!(((V173))==(Cnil))){
	goto T294;}
	V173= symbol_function(VV[35]);
	goto T294;
T294:;
	{register long V175;
	if(((V170))==Cnil){
	goto T300;}
	V175= (long)(*(LnkLI36))((V170));
	goto T298;
	goto T300;
T300:;
	V175= 0;
	goto T298;
T298:;
	{long V176;
	V176= (long)(*(LnkLI37))((V171),(V166));
	if(!((V175)<=(V176))){
	goto T304;}
	goto T303;
	goto T304;
T304:;
	V177 = make_fixnum(V175);
	V178 = make_fixnum(V176);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V177,V178)));
	goto T303;
T303:;
	{IDECL(register GEN V179,V179space,V179alloc);
	if(((V172))!=Cnil){
	goto T308;}
	ISETQ_FIX(V179,V179alloc,2147483647);
	goto T306;
	goto T308;
T308:;SETQ_IO(V179,V179alloc,(V172));
	goto T306;
T306:;
	if((V168)==Cnil){
	goto T311;}
	if((V169)==Cnil){
	goto T311;}
	(void)((*(LnkLI42))());
	goto T311;
T311:;
	if(((V167))!=Cnil){
	goto T313;}
	if(!(type_of((V166))==t_cons||((V166))==Cnil)){
	goto T316;}
	{object V180;
	register object V181;
	V180= make_cons(Cnil,(V166));
	V181= (V180);
	{long V182;
	V182= 0;
	goto T323;
T323:;
	if(!((V182)>=(V175))){
	goto T324;}
	goto T320;
	goto T324;
T324:;
	{object V183;
	V183= car((V181));
	V181= cdr((V181));}
	V182= (long)(1)+(V182);
	goto T323;}
	goto T320;
T320:;
	{long V184;
	long V185;
	V184= V175;
	V185= 0;
	goto T338;
T338:;
	if((V184)>=(V176)){
	goto T340;}
	V186 = make_fixnum(V185);
	V187 = make_integer(V179);
	if(number_compare(V186,V187)>=0){
	goto T340;}
	if(!(endp_prop(cdr((V181))))){
	goto T339;}
	goto T340;
T340:;
	{object V188 = cdr((V180));
	VMR14(V188)}
	goto T339;
T339:;
	base[1]= cadr((V181));
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event((V173));
	vs_top=sup;
	V189= vs_base[0];
	if(((*(LnkLI43))((V168),(V169),(V165),V189))==Cnil){
	goto T349;}
	V185= (long)(1)+(V185);
	if(type_of((V181))!=t_cons)FEwrong_type_argument(Scons,(V181));
	((V181))->c.c_cdr = cddr((V181));
	goto T347;
	goto T349;
T349:;
	V181= cdr((V181));
	goto T347;
T347:;
	V184= (long)(1)+(V184);
	goto T338;}}
	goto T316;
T316:;
	{long V190;
	V191 = make_fixnum(V175);
	V192 = make_fixnum(V176);
	V193 = make_integer(V179);
	V190= fix((VFUN_NARGS=16,(*(LnkLI47))((V165),(V166),VV[11],(V167),VV[12],(V168),VV[13],(V169),VV[14],V191,VV[15],V192,VV[16],V193,VV[17],(V173))));
	V194 = make_fixnum(V190);
	V195 = make_integer(V179);
	if(!(number_compare(V194,V195)<0)){
	goto T360;}ISETQ_FIX(V179,V179alloc,V190);
	goto T360;
T360:;
	V196 = make_integer(V179);
	if(!(number_compare(V196,small_fixnum(0))<0)){
	goto T364;}
	ISETQ_FIX(V179,V179alloc,0);
	goto T364;
T364:;
	{object V197;
	register long V198;
	long V199;
	long V200;
	V201= (*(LnkLI49))((V166));
	V202 = fix(make_integer(V179));
	V203 = make_fixnum((long)(V174)-(V202));
	V197= (VFUN_NARGS=2,(*(LnkLI48))(/* INLINE-ARGS */V201,V203));
	V198= 0;
	V199= 0;
	V200= 0;
	goto T373;
T373:;
	if(!((V198)>=(V174))){
	goto T374;}
	{object V204 = (V197);
	VMR14(V204)}
	goto T374;
T374:;
	if(!((V175)<=(V198))){
	goto T380;}
	if(!((V198)<(V176))){
	goto T380;}
	V205 = make_fixnum(V200);
	V206 = make_integer(V179);
	if(!(number_compare(V205,V206)<0)){
	goto T380;}
	base[0]= elt((V166),V198);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V173));
	vs_top=sup;
	V207= vs_base[0];
	if(((*(LnkLI43))((V168),(V169),(V165),V207))==Cnil){
	goto T380;}
	V200= (long)(1)+(V200);
	goto T378;
	goto T380;
T380:;
	V208= elt((V166),V198);
	(void)(elt_set((V197),V199,/* INLINE-ARGS */V208));
	V199= (long)(1)+(V199);
	goto T378;
T378:;
	V198= (long)(1)+(V198);
	goto T373;}}
	goto T313;
T313:;
	{long V209;
	V210 = make_fixnum(V175);
	V211 = make_fixnum(V176);
	V212 = make_integer(V179);
	V209= fix((VFUN_NARGS=16,(*(LnkLI47))((V165),(V166),VV[11],(V167),VV[12],(V168),VV[13],(V169),VV[14],V210,VV[15],V211,VV[16],V212,VV[17],(V173))));
	V213 = make_fixnum(V209);
	V214 = make_integer(V179);
	if(!(number_compare(V213,V214)<0)){
	goto T397;}ISETQ_FIX(V179,V179alloc,V209);
	goto T397;
T397:;
	V215 = make_integer(V179);
	if(!(number_compare(V215,small_fixnum(0))<0)){
	goto T401;}
	ISETQ_FIX(V179,V179alloc,0);
	goto T401;
T401:;
	{object V216;
	register long V217;
	long V218;
	long V219;
	V220= (*(LnkLI49))((V166));
	V221 = fix(make_integer(V179));
	V222 = make_fixnum((long)(V174)-(V221));
	V216= (VFUN_NARGS=2,(*(LnkLI48))(/* INLINE-ARGS */V220,V222));
	V217= (long)(-1)+(V174);
	V223 = fix(make_integer(V179));
	V218= (long)(-1)+((long)(V174)-(V223));
	V219= 0;
	goto T410;
T410:;
	if(!((V217)<(0))){
	goto T411;}
	{object V224 = (V216);
	VMR14(V224)}
	goto T411;
T411:;
	if(!((V175)<=(V217))){
	goto T417;}
	if(!((V217)<(V176))){
	goto T417;}
	V225 = make_fixnum(V219);
	V226 = make_integer(V179);
	if(!(number_compare(V225,V226)<0)){
	goto T417;}
	base[0]= elt((V166),V217);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V173));
	vs_top=sup;
	V227= vs_base[0];
	if(((*(LnkLI43))((V168),(V169),(V165),V227))==Cnil){
	goto T417;}
	V219= (long)(1)+(V219);
	goto T415;
	goto T417;
T417:;
	V228= elt((V166),V217);
	(void)(elt_set((V216),V218,/* INLINE-ARGS */V228));
	V218= (long)(-1)+(V218);
	goto T415;
T415:;
	V217= (long)(-1)+(V217);
	goto T410;}}}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function DELETE-IF	*/

static object LI15(object V230,object V229,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB15 VMS15 VMV15
	{object V231;
	object V232;
	object V233;
	object V234;
	object V235;
	object V236;
	object V237;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V231= V230;
	V232= V229;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI15key,first,ap);
	V233=(Vcs[2]);
	V234=(Vcs[3]);
	V235=(Vcs[4]);
	V236=(Vcs[5]);
	if(Vcs[6]==0){
	V237= symbol_function(VV[35]);
	}else{
	V237=(Vcs[6]);}
	if(!(((V237))==(Cnil))){
	goto T434;}
	V237= symbol_function(VV[35]);
	goto T434;
T434:;
	V238= symbol_function(VV[46]);
	{object V239 = (VFUN_NARGS=14,(*(LnkLI44))((V231),(V232),VV[11],(V233),VV[12],V238,VV[14],(V234),VV[15],(V235),VV[16],(V236),VV[17],(V237)));
	VMR15(V239)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function DELETE-IF-NOT	*/

static object LI16(object V241,object V240,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB16 VMS16 VMV16
	{object V242;
	object V243;
	object V244;
	object V245;
	object V246;
	object V247;
	object V248;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V242= V241;
	V243= V240;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI16key,first,ap);
	V244=(Vcs[2]);
	V245=(Vcs[3]);
	V246=(Vcs[4]);
	V247=(Vcs[5]);
	if(Vcs[6]==0){
	V248= symbol_function(VV[35]);
	}else{
	V248=(Vcs[6]);}
	if(!(((V248))==(Cnil))){
	goto T440;}
	V248= symbol_function(VV[35]);
	goto T440;
T440:;
	V249= symbol_function(VV[46]);
	{object V250 = (VFUN_NARGS=14,(*(LnkLI44))((V242),(V243),VV[11],(V244),VV[13],V249,VV[14],(V245),VV[15],(V246),VV[16],(V247),VV[17],(V248)));
	VMR16(V250)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function COUNT	*/

static object LI17(object V252,object V251,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB17 VMS17 VMV17
	{object V253;
	register object V254;
	object V255;
	register object V256;
	register object V257;
	object V258;
	object V259;
	register object V260;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V253= V252;
	V254= V251;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI17key,first,ap);
	V255=(Vcs[2]);
	V256=(Vcs[3]);
	V257=(Vcs[4]);
	V258=(Vcs[5]);
	V259=(Vcs[6]);
	if(Vcs[7]==0){
	V260= symbol_function(VV[35]);
	}else{
	V260=(Vcs[7]);}
	if(!(((V260))==(Cnil))){
	goto T446;}
	V260= symbol_function(VV[35]);
	goto T446;
T446:;
	{long V261;
	if(((V258))==Cnil){
	goto T452;}
	V261= (long)(*(LnkLI36))((V258));
	goto T450;
	goto T452;
T452:;
	V261= 0;
	goto T450;
T450:;
	{long V262;
	V262= (long)(*(LnkLI37))((V259),(V254));
	if(!((V261)<=(V262))){
	goto T456;}
	goto T455;
	goto T456;
T456:;
	V263 = make_fixnum(V261);
	V264 = make_fixnum(V262);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V263,V264)));
	goto T455;
T455:;
	if((V256)==Cnil){
	goto T458;}
	if((V257)==Cnil){
	goto T458;}
	(void)((*(LnkLI42))());
	goto T458;
T458:;
	if(((V255))!=Cnil){
	goto T460;}
	{register long V265;
	register long V266;
	V265= V261;
	V266= 0;
	goto T465;
T465:;
	if(!((V265)>=(V262))){
	goto T466;}
	{object V267 = make_fixnum(V266);
	VMR17(V267)}
	goto T466;
T466:;
	base[0]= elt((V254),V265);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V260));
	vs_top=sup;
	V268= vs_base[0];
	if(((*(LnkLI43))((V256),(V257),(V253),V268))==Cnil){
	goto T470;}
	V266= (long)(1)+(V266);
	goto T470;
T470:;
	V265= (long)(1)+(V265);
	goto T465;}
	goto T460;
T460:;
	{register long V269;
	register long V270;
	V269= (long)(-1)+(V262);
	V270= 0;
	goto T482;
T482:;
	if(!((V269)<(V261))){
	goto T483;}
	{object V271 = make_fixnum(V270);
	VMR17(V271)}
	goto T483;
T483:;
	base[0]= elt((V254),V269);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V260));
	vs_top=sup;
	V272= vs_base[0];
	if(((*(LnkLI43))((V256),(V257),(V253),V272))==Cnil){
	goto T487;}
	V270= (long)(1)+(V270);
	goto T487;
T487:;
	V269= (long)(-1)+(V269);
	goto T482;}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function COUNT-IF	*/

static object LI18(object V274,object V273,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB18 VMS18 VMV18
	{object V275;
	object V276;
	object V277;
	object V278;
	object V279;
	object V280;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V275= V274;
	V276= V273;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI18key,first,ap);
	V277=(Vcs[2]);
	V278=(Vcs[3]);
	V279=(Vcs[4]);
	if(Vcs[5]==0){
	V280= symbol_function(VV[35]);
	}else{
	V280=(Vcs[5]);}
	if(!(((V280))==(Cnil))){
	goto T497;}
	V280= symbol_function(VV[35]);
	goto T497;
T497:;
	V281= symbol_function(VV[46]);
	{object V282 = (VFUN_NARGS=12,(*(LnkLI50))((V275),(V276),VV[11],(V277),VV[12],V281,VV[14],(V278),VV[15],(V279),VV[17],(V280)));
	VMR18(V282)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function COUNT-IF-NOT	*/

static object LI19(object V284,object V283,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB19 VMS19 VMV19
	{object V285;
	object V286;
	object V287;
	object V288;
	object V289;
	object V290;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V285= V284;
	V286= V283;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI19key,first,ap);
	V287=(Vcs[2]);
	V288=(Vcs[3]);
	V289=(Vcs[4]);
	if(Vcs[5]==0){
	V290= symbol_function(VV[35]);
	}else{
	V290=(Vcs[5]);}
	if(!(((V290))==(Cnil))){
	goto T503;}
	V290= symbol_function(VV[35]);
	goto T503;
T503:;
	V291= symbol_function(VV[46]);
	{object V292 = (VFUN_NARGS=12,(*(LnkLI50))((V285),(V286),VV[11],(V287),VV[13],V291,VV[14],(V288),VV[15],(V289),VV[17],(V290)));
	VMR19(V292)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function INTERNAL-COUNT	*/

static object LI20(object V294,object V293,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB20 VMS20 VMV20
	{object V295;
	register object V296;
	object V297;
	register object V298;
	register object V299;
	object V300;
	object V301;
	object V302;
	register object V303;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V295= V294;
	V296= V293;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI20key,first,ap);
	V297=(Vcs[2]);
	V298=(Vcs[3]);
	V299=(Vcs[4]);
	V300=(Vcs[5]);
	V301=(Vcs[6]);
	V302=(Vcs[7]);
	if(Vcs[8]==0){
	V303= symbol_function(VV[35]);
	}else{
	V303=(Vcs[8]);}
	if(!(((V303))==(Cnil))){
	goto T509;}
	V303= symbol_function(VV[35]);
	goto T509;
T509:;
	{long V304;
	if(((V300))==Cnil){
	goto T515;}
	V304= (long)(*(LnkLI36))((V300));
	goto T513;
	goto T515;
T515:;
	V304= 0;
	goto T513;
T513:;
	{long V305;
	V305= (long)(*(LnkLI37))((V301),(V296));
	if(!((V304)<=(V305))){
	goto T519;}
	goto T518;
	goto T519;
T519:;
	V306 = make_fixnum(V304);
	V307 = make_fixnum(V305);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V306,V307)));
	goto T518;
T518:;
	{IDECL(GEN V308,V308space,V308alloc);
	if(((V302))!=Cnil){
	goto T523;}
	ISETQ_FIX(V308,V308alloc,2147483647);
	goto T521;
	goto T523;
T523:;SETQ_IO(V308,V308alloc,(V302));
	goto T521;
T521:;
	if((V298)==Cnil){
	goto T526;}
	if((V299)==Cnil){
	goto T526;}
	(void)((*(LnkLI42))());
	goto T526;
T526:;
	if(((V297))!=Cnil){
	goto T528;}
	{register long V309;
	register long V310;
	V309= V304;
	V310= 0;
	goto T533;
T533:;
	if(!((V309)>=(V305))){
	goto T534;}
	{object V311 = make_fixnum(V310);
	VMR20(V311)}
	goto T534;
T534:;
	V312 = make_fixnum(V310);
	V313 = make_integer(V308);
	if(!(number_compare(V312,V313)<0)){
	goto T538;}
	base[0]= elt((V296),V309);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V303));
	vs_top=sup;
	V314= vs_base[0];
	if(((*(LnkLI43))((V298),(V299),(V295),V314))==Cnil){
	goto T538;}
	V310= (long)(1)+(V310);
	goto T538;
T538:;
	V309= (long)(1)+(V309);
	goto T533;}
	goto T528;
T528:;
	{register long V315;
	register long V316;
	V315= (long)(-1)+(V305);
	V316= 0;
	goto T552;
T552:;
	if(!((V315)<(V304))){
	goto T553;}
	{object V317 = make_fixnum(V316);
	VMR20(V317)}
	goto T553;
T553:;
	V318 = make_fixnum(V316);
	V319 = make_integer(V308);
	if(!(number_compare(V318,V319)<0)){
	goto T557;}
	base[0]= elt((V296),V315);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V303));
	vs_top=sup;
	V320= vs_base[0];
	if(((*(LnkLI43))((V298),(V299),(V295),V320))==Cnil){
	goto T557;}
	V316= (long)(1)+(V316);
	goto T557;
T557:;
	V315= (long)(-1)+(V315);
	goto T552;}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function INTERNAL-COUNT-IF	*/

static object LI21(object V322,object V321,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB21 VMS21 VMV21
	{object V323;
	object V324;
	object V325;
	object V326;
	object V327;
	object V328;
	object V329;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V323= V322;
	V324= V321;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI21key,first,ap);
	V325=(Vcs[2]);
	V326=(Vcs[3]);
	V327=(Vcs[4]);
	V328=(Vcs[5]);
	if(Vcs[6]==0){
	V329= symbol_function(VV[35]);
	}else{
	V329=(Vcs[6]);}
	if(!(((V329))==(Cnil))){
	goto T569;}
	V329= symbol_function(VV[35]);
	goto T569;
T569:;
	V330= symbol_function(VV[46]);
	{object V331 = (VFUN_NARGS=14,(*(LnkLI47))((V323),(V324),VV[11],(V325),VV[12],V330,VV[14],(V326),VV[15],(V327),VV[16],(V328),VV[17],(V329)));
	VMR21(V331)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function INTERNAL-COUNT-IF-NOT	*/

static object LI22(object V333,object V332,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB22 VMS22 VMV22
	{object V334;
	object V335;
	object V336;
	object V337;
	object V338;
	object V339;
	object V340;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V334= V333;
	V335= V332;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI22key,first,ap);
	V336=(Vcs[2]);
	V337=(Vcs[3]);
	V338=(Vcs[4]);
	V339=(Vcs[5]);
	if(Vcs[6]==0){
	V340= symbol_function(VV[35]);
	}else{
	V340=(Vcs[6]);}
	if(!(((V340))==(Cnil))){
	goto T575;}
	V340= symbol_function(VV[35]);
	goto T575;
T575:;
	V341= symbol_function(VV[46]);
	{object V342 = (VFUN_NARGS=14,(*(LnkLI47))((V334),(V335),VV[11],(V336),VV[13],V341,VV[14],(V337),VV[15],(V338),VV[16],(V339),VV[17],(V340)));
	VMR22(V342)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function SUBSTITUTE	*/

static object LI23(object V345,object V344,object V343,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB23 VMS23 VMV23
	{object V346;
	object V347;
	register object V348;
	object V349;
	object V350;
	object V351;
	object V352;
	object V353;
	object V354;
	object V355;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V346= V345;
	V347= V344;
	V348= V343;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI23key,first,ap);
	V349=(Vcs[3]);
	V350=(Vcs[4]);
	V351=(Vcs[5]);
	V352=(Vcs[6]);
	V353=(Vcs[7]);
	V354=(Vcs[8]);
	if(Vcs[9]==0){
	V355= symbol_function(VV[35]);
	}else{
	V355=(Vcs[9]);}
	{long V356;
	V356= (long)length((V348));
	if(!(((V355))==(Cnil))){
	goto T582;}
	V355= symbol_function(VV[35]);
	goto T582;
T582:;
	{long V357;
	if(((V352))==Cnil){
	goto T588;}
	V357= (long)(*(LnkLI36))((V352));
	goto T586;
	goto T588;
T588:;
	V357= 0;
	goto T586;
T586:;
	{long V358;
	V358= (long)(*(LnkLI37))((V353),(V348));
	if(!((V357)<=(V358))){
	goto T592;}
	goto T591;
	goto T592;
T592:;
	V359 = make_fixnum(V357);
	V360 = make_fixnum(V358);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V359,V360)));
	goto T591;
T591:;
	{IDECL(GEN V361,V361space,V361alloc);
	if(((V354))!=Cnil){
	goto T596;}
	ISETQ_FIX(V361,V361alloc,2147483647);
	goto T594;
	goto T596;
T596:;SETQ_IO(V361,V361alloc,(V354));
	goto T594;
T594:;
	if((V350)==Cnil){
	goto T599;}
	if((V351)==Cnil){
	goto T599;}
	(void)((*(LnkLI42))());
	goto T599;
T599:;
	if(((V349))!=Cnil){
	goto T601;}
	{register object V362;
	register long V363;
	register long V364;
	V365= (*(LnkLI49))((V348));
	V366 = make_fixnum(V356);
	V362= (VFUN_NARGS=2,(*(LnkLI48))(/* INLINE-ARGS */V365,V366));
	V363= 0;
	V364= 0;
	goto T607;
T607:;
	if(!((V363)>=(V356))){
	goto T608;}
	{object V367 = (V362);
	VMR23(V367)}
	goto T608;
T608:;
	if(!((V357)<=(V363))){
	goto T614;}
	if(!((V363)<(V358))){
	goto T614;}
	V368 = make_fixnum(V364);
	V369 = make_integer(V361);
	if(!(number_compare(V368,V369)<0)){
	goto T614;}
	base[0]= elt((V348),V363);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V355));
	vs_top=sup;
	V370= vs_base[0];
	if(((*(LnkLI43))((V350),(V351),(V347),V370))==Cnil){
	goto T614;}
	(void)(elt_set((V362),V363,(V346)));
	V364= (long)(1)+(V364);
	goto T612;
	goto T614;
T614:;
	V371= elt((V348),V363);
	(void)(elt_set((V362),V363,/* INLINE-ARGS */V371));
	goto T612;
T612:;
	V363= (long)(1)+(V363);
	goto T607;}
	goto T601;
T601:;
	{register object V372;
	register long V373;
	register long V374;
	V375= (*(LnkLI49))((V348));
	V376 = make_fixnum(V356);
	V372= (VFUN_NARGS=2,(*(LnkLI48))(/* INLINE-ARGS */V375,V376));
	V373= (long)(-1)+(V356);
	V374= 0;
	goto T633;
T633:;
	if(!((V373)<(0))){
	goto T634;}
	{object V377 = (V372);
	VMR23(V377)}
	goto T634;
T634:;
	if(!((V357)<=(V373))){
	goto T640;}
	if(!((V373)<(V358))){
	goto T640;}
	V378 = make_fixnum(V374);
	V379 = make_integer(V361);
	if(!(number_compare(V378,V379)<0)){
	goto T640;}
	base[0]= elt((V348),V373);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V355));
	vs_top=sup;
	V380= vs_base[0];
	if(((*(LnkLI43))((V350),(V351),(V347),V380))==Cnil){
	goto T640;}
	(void)(elt_set((V372),V373,(V346)));
	V374= (long)(1)+(V374);
	goto T638;
	goto T640;
T640:;
	V381= elt((V348),V373);
	(void)(elt_set((V372),V373,/* INLINE-ARGS */V381));
	goto T638;
T638:;
	V373= (long)(-1)+(V373);
	goto T633;}}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function SUBSTITUTE-IF	*/

static object LI24(object V384,object V383,object V382,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB24 VMS24 VMV24
	{object V385;
	object V386;
	object V387;
	object V388;
	object V389;
	object V390;
	object V391;
	object V392;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V385= V384;
	V386= V383;
	V387= V382;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI24key,first,ap);
	V388=(Vcs[3]);
	V389=(Vcs[4]);
	V390=(Vcs[5]);
	V391=(Vcs[6]);
	if(Vcs[7]==0){
	V392= symbol_function(VV[35]);
	}else{
	V392=(Vcs[7]);}
	if(!(((V392))==(Cnil))){
	goto T656;}
	V392= symbol_function(VV[35]);
	goto T656;
T656:;
	V393= symbol_function(VV[46]);
	{object V394 = (VFUN_NARGS=15,(*(LnkLI51))((V385),(V386),(V387),VV[11],(V388),VV[12],V393,VV[14],(V389),VV[15],(V390),VV[16],(V391),VV[17],(V392)));
	VMR24(V394)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function SUBSTITUTE-IF-NOT	*/

static object LI25(object V397,object V396,object V395,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB25 VMS25 VMV25
	{object V398;
	object V399;
	object V400;
	object V401;
	object V402;
	object V403;
	object V404;
	object V405;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V398= V397;
	V399= V396;
	V400= V395;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI25key,first,ap);
	V401=(Vcs[3]);
	V402=(Vcs[4]);
	V403=(Vcs[5]);
	V404=(Vcs[6]);
	if(Vcs[7]==0){
	V405= symbol_function(VV[35]);
	}else{
	V405=(Vcs[7]);}
	if(!(((V405))==(Cnil))){
	goto T662;}
	V405= symbol_function(VV[35]);
	goto T662;
T662:;
	V406= symbol_function(VV[46]);
	{object V407 = (VFUN_NARGS=15,(*(LnkLI51))((V398),(V399),(V400),VV[11],(V401),VV[13],V406,VV[14],(V402),VV[15],(V403),VV[16],(V404),VV[17],(V405)));
	VMR25(V407)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function NSUBSTITUTE	*/

static object LI26(object V410,object V409,object V408,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB26 VMS26 VMV26
	{object V411;
	object V412;
	register object V413;
	object V414;
	object V415;
	object V416;
	object V417;
	object V418;
	object V419;
	register object V420;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V411= V410;
	V412= V409;
	V413= V408;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI26key,first,ap);
	V414=(Vcs[3]);
	V415=(Vcs[4]);
	V416=(Vcs[5]);
	V417=(Vcs[6]);
	V418=(Vcs[7]);
	V419=(Vcs[8]);
	if(Vcs[9]==0){
	V420= symbol_function(VV[35]);
	}else{
	V420=(Vcs[9]);}
	if(!(((V420))==(Cnil))){
	goto T668;}
	V420= symbol_function(VV[35]);
	goto T668;
T668:;
	{long V421;
	if(((V417))==Cnil){
	goto T674;}
	V421= (long)(*(LnkLI36))((V417));
	goto T672;
	goto T674;
T674:;
	V421= 0;
	goto T672;
T672:;
	{long V422;
	V422= (long)(*(LnkLI37))((V418),(V413));
	if(!((V421)<=(V422))){
	goto T678;}
	goto T677;
	goto T678;
T678:;
	V423 = make_fixnum(V421);
	V424 = make_fixnum(V422);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V423,V424)));
	goto T677;
T677:;
	{IDECL(GEN V425,V425space,V425alloc);
	if(((V419))!=Cnil){
	goto T682;}
	ISETQ_FIX(V425,V425alloc,2147483647);
	goto T680;
	goto T682;
T682:;SETQ_IO(V425,V425alloc,(V419));
	goto T680;
T680:;
	if((V415)==Cnil){
	goto T685;}
	if((V416)==Cnil){
	goto T685;}
	(void)((*(LnkLI42))());
	goto T685;
T685:;
	if(((V414))!=Cnil){
	goto T687;}
	{register long V426;
	register long V427;
	V426= V421;
	V427= 0;
	goto T692;
T692:;
	if(!((V426)>=(V422))){
	goto T693;}
	{object V428 = (V413);
	VMR26(V428)}
	goto T693;
T693:;
	V429 = make_fixnum(V427);
	V430 = make_integer(V425);
	if(!(number_compare(V429,V430)<0)){
	goto T697;}
	base[0]= elt((V413),V426);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V420));
	vs_top=sup;
	V431= vs_base[0];
	if(((*(LnkLI43))((V415),(V416),(V412),V431))==Cnil){
	goto T697;}
	(void)(elt_set((V413),V426,(V411)));
	V427= (long)(1)+(V427);
	goto T697;
T697:;
	V426= (long)(1)+(V426);
	goto T692;}
	goto T687;
T687:;
	{register long V432;
	register long V433;
	V432= (long)(-1)+(V422);
	V433= 0;
	goto T712;
T712:;
	if(!((V432)<(V421))){
	goto T713;}
	{object V434 = (V413);
	VMR26(V434)}
	goto T713;
T713:;
	V435 = make_fixnum(V433);
	V436 = make_integer(V425);
	if(!(number_compare(V435,V436)<0)){
	goto T717;}
	base[0]= elt((V413),V432);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V420));
	vs_top=sup;
	V437= vs_base[0];
	if(((*(LnkLI43))((V415),(V416),(V412),V437))==Cnil){
	goto T717;}
	(void)(elt_set((V413),V432,(V411)));
	V433= (long)(1)+(V433);
	goto T717;
T717:;
	V432= (long)(-1)+(V432);
	goto T712;}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function NSUBSTITUTE-IF	*/

static object LI27(object V440,object V439,object V438,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB27 VMS27 VMV27
	{object V441;
	object V442;
	object V443;
	object V444;
	object V445;
	object V446;
	object V447;
	object V448;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V441= V440;
	V442= V439;
	V443= V438;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI27key,first,ap);
	V444=(Vcs[3]);
	V445=(Vcs[4]);
	V446=(Vcs[5]);
	V447=(Vcs[6]);
	if(Vcs[7]==0){
	V448= symbol_function(VV[35]);
	}else{
	V448=(Vcs[7]);}
	if(!(((V448))==(Cnil))){
	goto T730;}
	V448= symbol_function(VV[35]);
	goto T730;
T730:;
	V449= symbol_function(VV[46]);
	{object V450 = (VFUN_NARGS=15,(*(LnkLI52))((V441),(V442),(V443),VV[11],(V444),VV[12],V449,VV[14],(V445),VV[15],(V446),VV[16],(V447),VV[17],(V448)));
	VMR27(V450)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function NSUBSTITUTE-IF-NOT	*/

static object LI28(object V453,object V452,object V451,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB28 VMS28 VMV28
	{object V454;
	object V455;
	object V456;
	object V457;
	object V458;
	object V459;
	object V460;
	object V461;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V454= V453;
	V455= V452;
	V456= V451;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI28key,first,ap);
	V457=(Vcs[3]);
	V458=(Vcs[4]);
	V459=(Vcs[5]);
	V460=(Vcs[6]);
	if(Vcs[7]==0){
	V461= symbol_function(VV[35]);
	}else{
	V461=(Vcs[7]);}
	if(!(((V461))==(Cnil))){
	goto T736;}
	V461= symbol_function(VV[35]);
	goto T736;
T736:;
	V462= symbol_function(VV[46]);
	{object V463 = (VFUN_NARGS=15,(*(LnkLI52))((V454),(V455),(V456),VV[11],(V457),VV[13],V462,VV[14],(V458),VV[15],(V459),VV[16],(V460),VV[17],(V461)));
	VMR28(V463)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function FIND	*/

static object LI29(object V465,object V464,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB29 VMS29 VMV29
	{object V466;
	register object V467;
	object V468;
	register object V469;
	register object V470;
	object V471;
	object V472;
	register object V473;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V466= V465;
	V467= V464;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI29key,first,ap);
	V468=(Vcs[2]);
	V469=(Vcs[3]);
	V470=(Vcs[4]);
	V471=(Vcs[5]);
	V472=(Vcs[6]);
	if(Vcs[7]==0){
	V473= symbol_function(VV[35]);
	}else{
	V473=(Vcs[7]);}
	if(!(((V473))==(Cnil))){
	goto T742;}
	V473= symbol_function(VV[35]);
	goto T742;
T742:;
	{long V474;
	if(((V471))==Cnil){
	goto T748;}
	V474= (long)(*(LnkLI36))((V471));
	goto T746;
	goto T748;
T748:;
	V474= 0;
	goto T746;
T746:;
	{long V475;
	V475= (long)(*(LnkLI37))((V472),(V467));
	if(!((V474)<=(V475))){
	goto T752;}
	goto T751;
	goto T752;
T752:;
	V476 = make_fixnum(V474);
	V477 = make_fixnum(V475);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V476,V477)));
	goto T751;
T751:;
	if((V469)==Cnil){
	goto T754;}
	if((V470)==Cnil){
	goto T754;}
	(void)((*(LnkLI42))());
	goto T754;
T754:;
	if(((V468))!=Cnil){
	goto T756;}
	{register long V478;
	V478= V474;
	goto T760;
T760:;
	if(!((V478)>=(V475))){
	goto T761;}
	{object V479 = Cnil;
	VMR29(V479)}
	goto T761;
T761:;
	base[0]= elt((V467),V478);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V473));
	vs_top=sup;
	V480= vs_base[0];
	if(((*(LnkLI43))((V469),(V470),(V466),V480))==Cnil){
	goto T765;}
	{object V481 = elt((V467),V478);
	VMR29(V481)}
	goto T765;
T765:;
	V478= (long)(1)+(V478);
	goto T760;}
	goto T756;
T756:;
	{register long V482;
	V482= (long)(-1)+(V475);
	goto T775;
T775:;
	if(!((V482)<(V474))){
	goto T776;}
	{object V483 = Cnil;
	VMR29(V483)}
	goto T776;
T776:;
	base[0]= elt((V467),V482);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V473));
	vs_top=sup;
	V484= vs_base[0];
	if(((*(LnkLI43))((V469),(V470),(V466),V484))==Cnil){
	goto T780;}
	{object V485 = elt((V467),V482);
	VMR29(V485)}
	goto T780;
T780:;
	V482= (long)(-1)+(V482);
	goto T775;}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function FIND-IF	*/

static object LI30(object V487,object V486,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB30 VMS30 VMV30
	{object V488;
	object V489;
	object V490;
	object V491;
	object V492;
	object V493;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V488= V487;
	V489= V486;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI30key,first,ap);
	V490=(Vcs[2]);
	V491=(Vcs[3]);
	V492=(Vcs[4]);
	if(Vcs[5]==0){
	V493= symbol_function(VV[35]);
	}else{
	V493=(Vcs[5]);}
	if(!(((V493))==(Cnil))){
	goto T789;}
	V493= symbol_function(VV[35]);
	goto T789;
T789:;
	V494= symbol_function(VV[46]);
	{object V495 = (VFUN_NARGS=12,(*(LnkLI53))((V488),(V489),VV[11],(V490),VV[12],V494,VV[14],(V491),VV[15],(V492),VV[17],(V493)));
	VMR30(V495)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function FIND-IF-NOT	*/

static object LI31(object V497,object V496,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB31 VMS31 VMV31
	{object V498;
	object V499;
	object V500;
	object V501;
	object V502;
	object V503;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V498= V497;
	V499= V496;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI31key,first,ap);
	V500=(Vcs[2]);
	V501=(Vcs[3]);
	V502=(Vcs[4]);
	if(Vcs[5]==0){
	V503= symbol_function(VV[35]);
	}else{
	V503=(Vcs[5]);}
	if(!(((V503))==(Cnil))){
	goto T795;}
	V503= symbol_function(VV[35]);
	goto T795;
T795:;
	V504= symbol_function(VV[46]);
	{object V505 = (VFUN_NARGS=12,(*(LnkLI53))((V498),(V499),VV[11],(V500),VV[13],V504,VV[14],(V501),VV[15],(V502),VV[17],(V503)));
	VMR31(V505)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function POSITION	*/

static object LI32(object V507,object V506,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB32 VMS32 VMV32
	{object V508;
	register object V509;
	object V510;
	register object V511;
	register object V512;
	object V513;
	object V514;
	register object V515;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V508= V507;
	V509= V506;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI32key,first,ap);
	V510=(Vcs[2]);
	V511=(Vcs[3]);
	V512=(Vcs[4]);
	V513=(Vcs[5]);
	V514=(Vcs[6]);
	if(Vcs[7]==0){
	V515= symbol_function(VV[35]);
	}else{
	V515=(Vcs[7]);}
	if(!(((V515))==(Cnil))){
	goto T801;}
	V515= symbol_function(VV[35]);
	goto T801;
T801:;
	{long V516;
	if(((V513))==Cnil){
	goto T807;}
	V516= (long)(*(LnkLI36))((V513));
	goto T805;
	goto T807;
T807:;
	V516= 0;
	goto T805;
T805:;
	{long V517;
	V517= (long)(*(LnkLI37))((V514),(V509));
	if(!((V516)<=(V517))){
	goto T811;}
	goto T810;
	goto T811;
T811:;
	V518 = make_fixnum(V516);
	V519 = make_fixnum(V517);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V518,V519)));
	goto T810;
T810:;
	if((V511)==Cnil){
	goto T813;}
	if((V512)==Cnil){
	goto T813;}
	(void)((*(LnkLI42))());
	goto T813;
T813:;
	if(((V510))!=Cnil){
	goto T815;}
	{register long V520;
	V520= V516;
	goto T819;
T819:;
	if(!((V520)>=(V517))){
	goto T820;}
	{object V521 = Cnil;
	VMR32(V521)}
	goto T820;
T820:;
	base[0]= elt((V509),V520);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V515));
	vs_top=sup;
	V522= vs_base[0];
	if(((*(LnkLI43))((V511),(V512),(V508),V522))==Cnil){
	goto T824;}
	{object V523 = make_fixnum(V520);
	VMR32(V523)}
	goto T824;
T824:;
	V520= (long)(1)+(V520);
	goto T819;}
	goto T815;
T815:;
	{register long V524;
	V524= (long)(-1)+(V517);
	goto T834;
T834:;
	if(!((V524)<(V516))){
	goto T835;}
	{object V525 = Cnil;
	VMR32(V525)}
	goto T835;
T835:;
	base[0]= elt((V509),V524);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V515));
	vs_top=sup;
	V526= vs_base[0];
	if(((*(LnkLI43))((V511),(V512),(V508),V526))==Cnil){
	goto T839;}
	{object V527 = make_fixnum(V524);
	VMR32(V527)}
	goto T839;
T839:;
	V524= (long)(-1)+(V524);
	goto T834;}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function POSITION-IF	*/

static object LI33(object V529,object V528,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB33 VMS33 VMV33
	{object V530;
	object V531;
	object V532;
	object V533;
	object V534;
	object V535;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V530= V529;
	V531= V528;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI33key,first,ap);
	V532=(Vcs[2]);
	V533=(Vcs[3]);
	V534=(Vcs[4]);
	if(Vcs[5]==0){
	V535= symbol_function(VV[35]);
	}else{
	V535=(Vcs[5]);}
	if(!(((V535))==(Cnil))){
	goto T848;}
	V535= symbol_function(VV[35]);
	goto T848;
T848:;
	V536= symbol_function(VV[46]);
	{object V537 = (VFUN_NARGS=12,(*(LnkLI54))((V530),(V531),VV[11],(V532),VV[12],V536,VV[14],(V533),VV[15],(V534),VV[17],(V535)));
	VMR33(V537)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function POSITION-IF-NOT	*/

static object LI34(object V539,object V538,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB34 VMS34 VMV34
	{object V540;
	object V541;
	object V542;
	object V543;
	object V544;
	object V545;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V540= V539;
	V541= V538;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI34key,first,ap);
	V542=(Vcs[2]);
	V543=(Vcs[3]);
	V544=(Vcs[4]);
	if(Vcs[5]==0){
	V545= symbol_function(VV[35]);
	}else{
	V545=(Vcs[5]);}
	if(!(((V545))==(Cnil))){
	goto T854;}
	V545= symbol_function(VV[35]);
	goto T854;
T854:;
	V546= symbol_function(VV[46]);
	{object V547 = (VFUN_NARGS=12,(*(LnkLI54))((V540),(V541),VV[11],(V542),VV[13],V546,VV[14],(V543),VV[15],(V544),VV[17],(V545)));
	VMR34(V547)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function REMOVE-DUPLICATES	*/

static object LI35(object V548,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB35 VMS35 VMV35
	{register object V549;
	object V550;
	register object V551;
	register object V552;
	object V553;
	object V554;
	register object V555;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V549= V548;
	narg= narg - 1;
	{
	parse_key_new_new(narg,Vcs +1,(struct key *)(void *)&LI35key,first,ap);
	V550=(Vcs[1]);
	V551=(Vcs[2]);
	V552=(Vcs[3]);
	V553=(Vcs[4]);
	V554=(Vcs[5]);
	if(Vcs[6]==0){
	V555= symbol_function(VV[35]);
	}else{
	V555=(Vcs[6]);}
	if((V551)==Cnil){
	goto T860;}
	if((V552)==Cnil){
	goto T860;}
	(void)((*(LnkLI42))());
	goto T860;
T860:;
	if(!(type_of((V549))==t_cons||((V549))==Cnil)){
	goto T861;}
	if(((V550))!=Cnil){
	goto T861;}
	if(((V553))!=Cnil){
	goto T861;}
	if(((V554))!=Cnil){
	goto T861;}
	if(!(endp_prop((V549)))){
	goto T870;}
	{object V556 = Cnil;
	VMR35(V556)}
	goto T870;
T870:;
	{register object V557;
	register object V558;
	V557= (V549);
	V558= Cnil;
	goto T874;
T874:;
	if(!(endp_prop(cdr((V557))))){
	goto T875;}
	base[0]= (V558);
	base[1]= (V557);
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	{object V559 = vs_base[0];
	VMR35(V559)}
	goto T875;
T875:;
	base[0]= car((V557));
	base[1]= cdr((V557));
	base[2]= VV[12];
	base[3]= (V551);
	base[4]= VV[13];
	base[5]= (V552);
	base[6]= VV[17];
	base[7]= (V555);
	vs_top=(vs_base=base+0)+8;
	(void) (*Lnk55)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T881;}
	V558= make_cons(car((V557)),(V558));
	goto T881;
T881:;
	V557= cdr((V557));
	goto T874;}
	goto T861;
T861:;
	{object V560 = (VFUN_NARGS=13,(*(LnkLI56))((V549),VV[11],(V550),VV[12],(V551),VV[13],(V552),VV[14],(V553),VV[15],(V554),VV[17],(V555)));
	VMR35(V560)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function DELETE-DUPLICATES	*/

static object LI36(object V561,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB36 VMS36 VMV36
	{register object V562;
	object V563;
	object V564;
	object V565;
	object V566;
	object V567;
	register object V568;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V562= V561;
	narg= narg - 1;
	{
	parse_key_new_new(narg,Vcs +1,(struct key *)(void *)&LI36key,first,ap);
	V563=(Vcs[1]);
	V564=(Vcs[2]);
	V565=(Vcs[3]);
	V566=(Vcs[4]);
	V567=(Vcs[5]);
	if(Vcs[6]==0){
	V568= symbol_function(VV[35]);
	}else{
	V568=(Vcs[6]);}
	{long V569;
	V569= (long)length((V562));
	if((V564)==Cnil){
	goto T898;}
	if((V565)==Cnil){
	goto T898;}
	(void)((*(LnkLI42))());
	goto T898;
T898:;
	if(!(type_of((V562))==t_cons||((V562))==Cnil)){
	goto T899;}
	if(((V563))!=Cnil){
	goto T899;}
	if(((V566))!=Cnil){
	goto T899;}
	if(((V567))!=Cnil){
	goto T899;}
	if(!(endp_prop((V562)))){
	goto T908;}
	{object V570 = Cnil;
	VMR36(V570)}
	goto T908;
T908:;
	{register object V571;
	V571= (V562);
	goto T912;
T912:;
	if(!(endp_prop(cdr((V571))))){
	goto T913;}
	{object V572 = (V562);
	VMR36(V572)}
	goto T913;
T913:;
	base[0]= car((V571));
	base[1]= cdr((V571));
	base[2]= VV[12];
	base[3]= (V564);
	base[4]= VV[13];
	base[5]= (V565);
	base[6]= VV[17];
	base[7]= (V568);
	vs_top=(vs_base=base+0)+8;
	(void) (*Lnk55)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T919;}
	if(type_of((V571))!=t_cons)FEwrong_type_argument(Scons,(V571));
	((V571))->c.c_car = cadr((V571));
	if(type_of((V571))!=t_cons)FEwrong_type_argument(Scons,(V571));
	((V571))->c.c_cdr = cddr((V571));
	goto T917;
	goto T919;
T919:;
	V571= cdr((V571));
	goto T917;
T917:;
	goto T912;}
	goto T899;
T899:;
	{register long V573;
	if(((V566))==Cnil){
	goto T935;}
	V573= (long)(*(LnkLI36))((V566));
	goto T933;
	goto T935;
T935:;
	V573= 0;
	goto T933;
T933:;
	{register long V574;
	V574= (long)(*(LnkLI37))((V567),(V562));
	if(!((V573)<=(V574))){
	goto T939;}
	goto T938;
	goto T939;
T939:;
	V575 = make_fixnum(V573);
	V576 = make_fixnum(V574);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V575,V576)));
	goto T938;
T938:;
	if(((V563))!=Cnil){
	goto T942;}
	{long V577;
	long V578;
	V577= 0;
	V578= V573;
	goto T947;
T947:;
	if(!((V578)>=(V574))){
	goto T948;}
	{object V579;
	register long V580;
	long V581;
	V582= (*(LnkLI49))((V562));
	V583 = make_fixnum((long)(V569)-(V577));
	V579= (VFUN_NARGS=2,(*(LnkLI48))(/* INLINE-ARGS */V582,V583));
	V580= 0;
	V581= 0;
	goto T955;
T955:;
	if(!((V580)>=(V569))){
	goto T956;}
	{object V584 = (V579);
	VMR36(V584)}
	goto T956;
T956:;
	{object V585;
	if((V573)<=(V580)){
	goto T962;}
	V585= Cnil;
	goto T961;
	goto T962;
T962:;
	if((V580)<(V574)){
	goto T964;}
	V585= Cnil;
	goto T961;
	goto T964;
T964:;
	base[0]= elt((V562),V580);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V568));
	vs_top=sup;
	V586= vs_base[0];
	V587 = make_fixnum((long)(1)+(V580));
	V588 = make_fixnum(V574);
	V585= (VFUN_NARGS=12,(*(LnkLI54))(V586,(V562),VV[12],(V564),VV[13],(V565),VV[14],V587,VV[15],V588,VV[17],(V568)));
	goto T961;
T961:;
	if(((V585))==Cnil){
	goto T969;}
	goto T960;
	goto T969;
T969:;
	V589= elt((V562),V580);
	(void)(elt_set((V579),V581,/* INLINE-ARGS */V589));
	V581= (long)(1)+(V581);}
	goto T960;
T960:;
	V580= (long)(1)+(V580);
	goto T955;}
	goto T948;
T948:;
	base[0]= elt((V562),V578);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V568));
	vs_top=sup;
	V590= vs_base[0];
	V591 = make_fixnum((long)(1)+(V578));
	V592 = make_fixnum(V574);
	if(((VFUN_NARGS=12,(*(LnkLI54))(V590,(V562),VV[12],(V564),VV[13],(V565),VV[14],V591,VV[15],V592,VV[17],(V568))))==Cnil){
	goto T977;}
	V577= (long)(1)+(V577);
	goto T977;
T977:;
	V578= (long)(1)+(V578);
	goto T947;}
	goto T942;
T942:;
	{long V593;
	long V594;
	V593= 0;
	V594= (long)(-1)+(V574);
	goto T989;
T989:;
	if(!((V594)<(V573))){
	goto T990;}
	{object V595;
	register long V596;
	long V597;
	V598= (*(LnkLI49))((V562));
	V599 = make_fixnum((long)(V569)-(V593));
	V595= (VFUN_NARGS=2,(*(LnkLI48))(/* INLINE-ARGS */V598,V599));
	V596= (long)(-1)+(V569);
	V597= (long)((long)(-1)+(V569))-(V593);
	goto T997;
T997:;
	if(!((V596)<(0))){
	goto T998;}
	{object V600 = (V595);
	VMR36(V600)}
	goto T998;
T998:;
	{object V601;
	if((V573)<=(V596)){
	goto T1004;}
	V601= Cnil;
	goto T1003;
	goto T1004;
T1004:;
	if((V596)<(V574)){
	goto T1006;}
	V601= Cnil;
	goto T1003;
	goto T1006;
T1006:;
	base[0]= elt((V562),V596);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V568));
	vs_top=sup;
	V602= vs_base[0];
	V603 = make_fixnum(V573);
	V604 = make_fixnum(V596);
	V601= (VFUN_NARGS=14,(*(LnkLI54))(V602,(V562),VV[11],Ct,VV[12],(V564),VV[13],(V565),VV[14],V603,VV[15],V604,VV[17],(V568)));
	goto T1003;
T1003:;
	if(((V601))==Cnil){
	goto T1011;}
	goto T1002;
	goto T1011;
T1011:;
	V605= elt((V562),V596);
	(void)(elt_set((V595),V597,/* INLINE-ARGS */V605));
	V597= (long)(-1)+(V597);}
	goto T1002;
T1002:;
	V596= (long)(-1)+(V596);
	goto T997;}
	goto T990;
T990:;
	base[0]= elt((V562),V594);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V568));
	vs_top=sup;
	V606= vs_base[0];
	V607 = make_fixnum(V573);
	V608 = make_fixnum(V594);
	if(((VFUN_NARGS=14,(*(LnkLI54))(V606,(V562),VV[11],Ct,VV[12],(V564),VV[13],(V565),VV[14],V607,VV[15],V608,VV[17],(V568))))==Cnil){
	goto T1019;}
	V593= (long)(1)+(V593);
	goto T1019;
T1019:;
	V594= (long)(-1)+(V594);
	goto T989;}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function MISMATCH	*/

static object LI37(object V610,object V609,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB37 VMS37 VMV37
	{object V611;
	object V612;
	object V613;
	object V614;
	object V615;
	register object V616;
	object V617;
	object V618;
	object V619;
	object V620;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V611= V610;
	V612= V609;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI37key,first,ap);
	V613=(Vcs[2]);
	V614=(Vcs[3]);
	V615=(Vcs[4]);
	if(Vcs[5]==0){
	V616= symbol_function(VV[35]);
	}else{
	V616=(Vcs[5]);}
	V617=(Vcs[6]);
	V618=(Vcs[7]);
	V619=(Vcs[8]);
	V620=(Vcs[9]);
	if((V614)==Cnil){
	goto T1029;}
	if((V615)==Cnil){
	goto T1029;}
	(void)((*(LnkLI42))());
	goto T1029;
T1029:;
	{register long V621;
	if(((V617))==Cnil){
	goto T1032;}
	V621= (long)(*(LnkLI36))((V617));
	goto T1030;
	goto T1032;
T1032:;
	V621= 0;
	goto T1030;
T1030:;
	{register long V622;
	V622= (long)(*(LnkLI37))((V619),(V611));
	if(!((V621)<=(V622))){
	goto T1036;}
	goto T1035;
	goto T1036;
T1036:;
	V623 = make_fixnum(V621);
	V624 = make_fixnum(V622);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V623,V624)));
	goto T1035;
T1035:;
	{register long V625;
	if(((V618))==Cnil){
	goto T1040;}
	V625= (long)(*(LnkLI36))((V618));
	goto T1038;
	goto T1040;
T1040:;
	V625= 0;
	goto T1038;
T1038:;
	{register long V626;
	V626= (long)(*(LnkLI37))((V620),(V612));
	if(!((V625)<=(V626))){
	goto T1044;}
	goto T1043;
	goto T1044;
T1044:;
	V627 = make_fixnum(V625);
	V628 = make_fixnum(V626);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V627,V628)));
	goto T1043;
T1043:;
	if(((V613))!=Cnil){
	goto T1047;}
	{register long V629;
	register long V630;
	V629= V621;
	V630= V625;
	goto T1052;
T1052:;
	if((V629)>=(V622)){
	goto T1054;}
	if(!((V630)>=(V626))){
	goto T1053;}
	goto T1054;
T1054:;
	if(!((V629)>=(V622))){
	goto T1059;}
	if(!((V630)>=(V626))){
	goto T1059;}
	{object V631 = Cnil;
	VMR37(V631)}
	goto T1059;
T1059:;
	{object V632 = make_fixnum(V629);
	VMR37(V632)}
	goto T1053;
T1053:;
	base[0]= elt((V611),V629);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V616));
	vs_top=sup;
	V633= vs_base[0];
	base[0]= elt((V612),V630);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V616));
	vs_top=sup;
	V634= vs_base[0];
	if(((*(LnkLI43))((V614),(V615),V633,V634))!=Cnil){
	goto T1064;}
	{object V635 = make_fixnum(V629);
	VMR37(V635)}
	goto T1064;
T1064:;
	V629= (long)(1)+(V629);
	V630= (long)(1)+(V630);
	goto T1052;}
	goto T1047;
T1047:;
	{register long V636;
	register long V637;
	V636= (long)(-1)+(V622);
	V637= (long)(-1)+(V626);
	goto T1078;
T1078:;
	if((V636)<(V621)){
	goto T1080;}
	if(!((V637)<(V625))){
	goto T1079;}
	goto T1080;
T1080:;
	if(!((V636)<(V621))){
	goto T1085;}
	if(!((V637)<(V625))){
	goto T1085;}
	{object V638 = Cnil;
	VMR37(V638)}
	goto T1085;
T1085:;
	{object V639 = make_fixnum((long)(1)+(V636));
	VMR37(V639)}
	goto T1079;
T1079:;
	base[0]= elt((V611),V636);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V616));
	vs_top=sup;
	V640= vs_base[0];
	base[0]= elt((V612),V637);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V616));
	vs_top=sup;
	V641= vs_base[0];
	if(((*(LnkLI43))((V614),(V615),V640,V641))!=Cnil){
	goto T1090;}
	{object V642 = make_fixnum((long)(1)+(V636));
	VMR37(V642)}
	goto T1090;
T1090:;
	V636= (long)(-1)+(V636);
	V637= (long)(-1)+(V637);
	goto T1078;}}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function SEARCH	*/

static object LI38(object V644,object V643,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB38 VMS38 VMV38
	{object V645;
	object V646;
	object V647;
	object V648;
	object V649;
	register object V650;
	object V651;
	object V652;
	object V653;
	object V654;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V645= V644;
	V646= V643;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI38key,first,ap);
	V647=(Vcs[2]);
	V648=(Vcs[3]);
	V649=(Vcs[4]);
	if(Vcs[5]==0){
	V650= symbol_function(VV[35]);
	}else{
	V650=(Vcs[5]);}
	V651=(Vcs[6]);
	V652=(Vcs[7]);
	V653=(Vcs[8]);
	V654=(Vcs[9]);
	if((V648)==Cnil){
	goto T1102;}
	if((V649)==Cnil){
	goto T1102;}
	(void)((*(LnkLI42))());
	goto T1102;
T1102:;
	{long V655;
	if(((V651))==Cnil){
	goto T1105;}
	V655= (long)(*(LnkLI36))((V651));
	goto T1103;
	goto T1105;
T1105:;
	V655= 0;
	goto T1103;
T1103:;
	{long V656;
	V656= (long)(*(LnkLI37))((V653),(V645));
	if(!((V655)<=(V656))){
	goto T1109;}
	goto T1108;
	goto T1109;
T1109:;
	V657 = make_fixnum(V655);
	V658 = make_fixnum(V656);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V657,V658)));
	goto T1108;
T1108:;
	{register long V659;
	if(((V652))==Cnil){
	goto T1113;}
	V659= (long)(*(LnkLI36))((V652));
	goto T1111;
	goto T1113;
T1113:;
	V659= 0;
	goto T1111;
T1111:;
	{long V660;
	V660= (long)(*(LnkLI37))((V654),(V646));
	if(!((V659)<=(V660))){
	goto T1117;}
	goto T1116;
	goto T1117;
T1117:;
	V661 = make_fixnum(V659);
	V662 = make_fixnum(V660);
	(void)((VFUN_NARGS=2,(*(LnkLI33))(V661,V662)));
	goto T1116;
T1116:;
	if(((V647))!=Cnil){
	goto T1120;}
	goto T1123;
T1123:;
	{register long V663;
	register long V664;
	V663= V655;
	V664= V659;
	goto T1129;
T1129:;
	if(!((V663)>=(V656))){
	goto T1130;}
	{object V665 = make_fixnum(V659);
	VMR38(V665)}
	goto T1130;
T1130:;
	if(!((V664)>=(V660))){
	goto T1134;}
	{object V666 = Cnil;
	VMR38(V666)}
	goto T1134;
T1134:;
	base[0]= elt((V645),V663);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V650));
	vs_top=sup;
	V667= vs_base[0];
	base[0]= elt((V646),V664);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V650));
	vs_top=sup;
	V668= vs_base[0];
	if(((*(LnkLI43))((V648),(V649),V667,V668))!=Cnil){
	goto T1137;}
	goto T1125;
	goto T1137;
T1137:;
	V663= (long)(1)+(V663);
	V664= (long)(1)+(V664);
	goto T1129;}
	goto T1125;
T1125:;
	V659= (long)(1)+(V659);
	goto T1123;
	goto T1120;
T1120:;
	goto T1151;
T1151:;
	{register long V669;
	register long V670;
	V669= (long)(-1)+(V656);
	V670= (long)(-1)+(V660);
	goto T1157;
T1157:;
	if(!((V669)<(V655))){
	goto T1158;}
	{object V671 = make_fixnum((long)(1)+(V670));
	VMR38(V671)}
	goto T1158;
T1158:;
	if(!((V670)<(V659))){
	goto T1162;}
	{object V672 = Cnil;
	VMR38(V672)}
	goto T1162;
T1162:;
	base[0]= elt((V645),V669);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V650));
	vs_top=sup;
	V673= vs_base[0];
	base[0]= elt((V646),V670);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V650));
	vs_top=sup;
	V674= vs_base[0];
	if(((*(LnkLI43))((V648),(V649),V673,V674))!=Cnil){
	goto T1165;}
	goto T1153;
	goto T1165;
T1165:;
	V669= (long)(-1)+(V669);
	V670= (long)(-1)+(V670);
	goto T1157;}
	goto T1153;
T1153:;
	V660= (long)(-1)+(V660);
	goto T1151;}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for SORT	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_reserve(VM39);
	{register object V675;
	object V676;
	object V677;
	if(vs_top-vs_base<2) too_few_arguments();
	parse_key(vs_base+2,FALSE,FALSE,1,VV[17]);
	V675=(base[0]);
	V676=(base[1]);
	vs_top=sup;
	if(base[3]==Cnil){
	V677= symbol_function(VV[35]);
	}else{
	V677=(base[2]);}
	if(!(type_of((V675))==t_cons||((V675))==Cnil)){
	goto T1180;}
	base[4]= (V675);
	base[5]= (V676);
	base[6]= (V677);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk57)();
	return;
	goto T1180;
T1180:;
	base[4]= (*(LnkLI58))((V675),0,(long)length((V675)),(V676),(V677));
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	function definition for LIST-MERGE-SORT	*/

static void L40()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_reserve(VM40);
	{object V678;
	check_arg(3);
	V678=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (V678);
	vs_top=(vs_base=base+3)+1;
	L41(base);
	return;
	}
}
/*	local entry for function QUICK-SORT	*/

static object LI42(V684,V685,V686,V687,V688)

register object V684;long V685;long V686;register object V687;register object V688;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	if(!((V686)<=((long)(1)+(V685)))){
	goto T1187;}
	{object V689 = (V684);
	VMR41(V689)}
	goto T1187;
T1187:;
	{register long V690;
	register long V691;
	object V692;
	register object V693;
	V690= V685;
	V691= V686;
	V692= elt((V684),V685);
	V693= (
	(type_of((V688)) == t_sfun ?(*(((V688))->sfn.sfn_self)):
	(fcall.fun=((V688)),fcall.argd=1,fcalln))((V692)));
	goto T1195;
T1195:;
	goto T1199;
T1199:;
	V691= (long)(-1)+(V691);
	if((V690)<(V691)){
	goto T1203;}
	goto T1193;
	goto T1203;
T1203:;
	base[3]= elt((V684),V691);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event((V688));
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V693);
	vs_top=(vs_base=base+2)+2;
	super_funcall_no_event((V687));
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1200;}
	goto T1197;
	goto T1200;
T1200:;
	goto T1199;
	goto T1197;
T1197:;
	goto T1214;
T1214:;
	V690= (long)(1)+(V690);
	if((V690)<(V691)){
	goto T1218;}
	goto T1193;
	goto T1218;
T1218:;
	base[3]= elt((V684),V690);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event((V688));
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V693);
	vs_top=(vs_base=base+2)+2;
	super_funcall_no_event((V687));
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1215;}
	goto T1212;
	goto T1215;
T1215:;
	goto T1214;
	goto T1212;
T1212:;
	{object V694;
	V694= elt((V684),V690);
	V695= elt((V684),V691);
	(void)(elt_set((V684),V690,/* INLINE-ARGS */V695));
	(void)(elt_set((V684),V691,(V694)));}
	goto T1195;
	goto T1193;
T1193:;
	V696= elt((V684),V690);
	(void)(elt_set((V684),V685,/* INLINE-ARGS */V696));
	(void)(elt_set((V684),V690,(V692)));
	(void)((*(LnkLI58))((V684),V685,V690,(V687),(V688)));
	V685= (long)(1)+(V690);
	goto TTL;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for STABLE-SORT	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_reserve(VM42);
	{register object V697;
	object V698;
	object V699;
	if(vs_top-vs_base<2) too_few_arguments();
	parse_key(vs_base+2,FALSE,FALSE,1,VV[17]);
	V697=(base[0]);
	V698=(base[1]);
	vs_top=sup;
	if(base[3]==Cnil){
	V699= symbol_function(VV[35]);
	}else{
	V699=(base[2]);}
	if(!(type_of((V697))==t_cons||((V697))==Cnil)){
	goto T1241;}
	base[4]= (V697);
	base[5]= (V698);
	base[6]= (V699);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk57)();
	return;
	goto T1241;
T1241:;
	if(type_of((V697))==t_string){
	goto T1246;}
	if(!((type_of((V697))==t_bitvector))){
	goto T1247;}
	goto T1246;
T1246:;
	base[4]= (V697);
	base[5]= (V698);
	base[6]= VV[17];
	base[7]= (V699);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk59)();
	return;
	goto T1247;
T1247:;
	base[4]= (*(LnkLI60))((V697),VV[0]);
	base[5]= (V698);
	base[6]= (V699);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk57)();
	vs_top=sup;
	V700= vs_base[0];
	V701= (*(LnkLI49))((V697));
	base[4]= (*(LnkLI60))(V700,/* INLINE-ARGS */V701);
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	local entry for function MERGE	*/

static object LI44(object V705,object V704,object V703,object V702,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB43 VMS43 VMV43
	{object V706;
	register object V707;
	object V708;
	object V709;
	register object V710;
	va_start(ap,first);
	if(narg <4) too_few_arguments();
	V706= V705;
	V707= V704;
	V708= V703;
	V709= V702;
	narg= narg - 4;
	{
	parse_key_new_new(narg,Vcs +4,(struct key *)(void *)&LI44key,first,ap);
	if(Vcs[4]==0){
	V710= symbol_function(VV[35]);
	}else{
	V710=(Vcs[4]);}
	{long V711;
	long V712;
	V711= (long)length((V707));
	V712= (long)length((V708));
	if(!(equal((V710),Cnil))){
	goto T1262;}
	V710= symbol_function(VV[35]);
	goto T1262;
T1262:;
	{register object V713;
	register long V714;
	register long V715;
	register long V716;
	V717 = make_fixnum((long)(V711)+(V712));
	V713= (VFUN_NARGS=2,(*(LnkLI48))((V706),V717));
	V714= 0;
	V715= 0;
	V716= 0;
	goto T1271;
T1271:;
	if(!((V715)==(V711))){
	goto T1272;}
	if(!((V716)==(V712))){
	goto T1272;}
	{object V718 = (V713);
	VMR43(V718)}
	goto T1272;
T1272:;
	if(!((V715)<(V711))){
	goto T1280;}
	if(!((V716)<(V712))){
	goto T1280;}
	base[1]= elt((V707),V715);
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event((V710));
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= elt((V708),V716);
	vs_top=(vs_base=base+2)+1;
	super_funcall_no_event((V710));
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	super_funcall_no_event((V709));
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1285;}
	V719= elt((V707),V715);
	(void)(elt_set((V713),V714,/* INLINE-ARGS */V719));
	V715= (long)(1)+(V715);
	goto T1278;
	goto T1285;
T1285:;
	base[1]= elt((V708),V716);
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event((V710));
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= elt((V707),V715);
	vs_top=(vs_base=base+2)+1;
	super_funcall_no_event((V710));
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	super_funcall_no_event((V709));
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1294;}
	V720= elt((V708),V716);
	(void)(elt_set((V713),V714,/* INLINE-ARGS */V720));
	V716= (long)(1)+(V716);
	goto T1278;
	goto T1294;
T1294:;
	V721= elt((V707),V715);
	(void)(elt_set((V713),V714,/* INLINE-ARGS */V721));
	V715= (long)(1)+(V715);
	goto T1278;
	goto T1280;
T1280:;
	if(!((V715)<(V711))){
	goto T1305;}
	V722= elt((V707),V715);
	(void)(elt_set((V713),V714,/* INLINE-ARGS */V722));
	V715= (long)(1)+(V715);
	goto T1278;
	goto T1305;
T1305:;
	V723= elt((V708),V716);
	(void)(elt_set((V713),V714,/* INLINE-ARGS */V723));
	V716= (long)(1)+(V716);
	goto T1278;
T1278:;
	V714= (long)(1)+(V714);
	goto T1271;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for MAP-INTO	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_reserve(VM44);
	{register object V724;
	register object V725;
	register object V726;
	if(vs_top-vs_base<2) too_few_arguments();
	V724=(base[0]);
	V725=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V726=(base[2]);
	vs_top=sup;
	{object V727;
	base[5]= (V724);
	vs_top=(vs_base=base+5)+1;
	Ltype_of();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[18];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk61)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1317;}
	base[4]= (V724);
	base[5]= small_fixnum(0);
	vs_top=(vs_base=base+4)+2;
	Larray_dimension();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T1315;
	goto T1317;
T1317:;
	base[3]= make_fixnum((long)length((V724)));
	goto T1315;
T1315:;
	{object V728;
	{object V729;
	object V730= (V726);
	if(endp(V730)){
	V728= Cnil;
	goto T1324;}
	base[4]=V729=MMcons(Cnil,Cnil);
	goto T1325;
T1325:;
	base[5]= (V730->c.c_car);
	vs_top=(vs_base=base+5)+1;
	Llength();
	vs_top=sup;
	(V729->c.c_car)= vs_base[0];
	V730=MMcdr(V730);
	if(endp(V730)){
	V728= base[4];
	goto T1324;}
	V729=MMcdr(V729)=MMcons(Cnil,Cnil);
	goto T1325;}
	goto T1324;
T1324:;
	 vs_top=base+4;
	 while(!endp(V728))
	 {vs_push(car(V728));V728=cdr(V728);}
	vs_base=base+3;}
	Lmin();
	vs_top=sup;
	V727= vs_base[0];
	base[4]= (V724);
	vs_top=(vs_base=base+4)+1;
	Ltype_of();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= VV[18];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk61)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1328;}
	base[3]= (V724);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk62)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1328;}
	base[3]= (V724);
	base[4]= (V727);
	vs_top=(vs_base=base+3)+2;
	siLfill_pointer_set();
	vs_top=sup;
	goto T1328;
T1328:;
	{register object V731;
	register object V732;
	V731= (V727);
	V732= small_fixnum(0);
	goto T1342;
T1342:;
	if(!(number_compare((V732),(V731))>=0)){
	goto T1343;}
	base[3]= (V724);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T1343;
T1343:;
	base[3]= (V725);
	{object V734;
	{object V735;
	object V736= (V726);
	if(endp(V736)){
	V734= Cnil;
	goto T1350;}
	base[4]=V735=MMcons(Cnil,Cnil);
	goto T1351;
T1351:;
	{register object V737;
	V737= (V736->c.c_car);
	(V735->c.c_car)= elt((V737),fixint((V732)));}
	V736=MMcdr(V736);
	if(endp(V736)){
	V734= base[4];
	goto T1350;}
	V735=MMcdr(V735)=MMcons(Cnil,Cnil);
	goto T1351;}
	goto T1350;
T1350:;
	 vs_top=base+4;
	 while(!endp(V734))
	 {vs_push(car(V734));V734=cdr(V734);}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	vs_top=sup;
	V733= vs_base[0];
	(void)(elt_set((V724),fixint((V732)),V733));
	V732= one_plus((V732));
	goto T1342;}}
	}
}
/*	macro definition for WITH-HASH-TABLE-ITERATOR	*/

static void L46()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_reserve(VM45);
	check_arg(2);
	vs_top=sup;
	{object V738=base[0]->c.c_cdr;
	if(endp(V738))invalid_macro_call();
	{object V739= (V738->c.c_car);
	if(endp(V739))invalid_macro_call();
	base[2]= (V739->c.c_car);
	V739=V739->c.c_cdr;
	if(endp(V739))invalid_macro_call();
	base[3]= (V739->c.c_car);
	V739=V739->c.c_cdr;
	if(!endp(V739))invalid_macro_call();}
	V738=V738->c.c_cdr;
	base[4]= V738;}
	{object V740;
	object V741;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V740= vs_base[0];
	base[5]= VV[19];
	vs_top=(vs_base=base+5)+1;
	Lgensym();
	vs_top=sup;
	V741= vs_base[0];
	V742= list(2,(V740),base[3]);
	V743= list(2,/* INLINE-ARGS */V742,list(2,(V741),small_fixnum(0)));
	V744= list(2,VV[25],(V740));
	V745= list(4,VV[0],VV[24],/* INLINE-ARGS */V744,list(2,VV[25],(V741)));
	V746= list(3,base[2],Cnil,list(5,VV[0],VV[22],VV[23],/* INLINE-ARGS */V745,list(4,VV[0],VV[26],list(4,VV[0],VV[27],list(4,VV[0],VV[28],list(2,VV[25],(V741)),VV[29]),VV[30]),VV[31])));
	base[5]= list(3,VV[20],/* INLINE-ARGS */V743,listA(3,VV[21],make_cons(/* INLINE-ARGS */V746,Cnil),base[4]));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	local function SORT	*/

static void L41(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_reserve(VM46);
	{object V747;
	check_arg(1);
	V747=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{long V748;
	register object V749;
	register object V750;
	object V751;
	register object V752;
	register object V753;
	register object V754;
	V748= 0;
	V749= Cnil;
	V750= Cnil;
	V751= Cnil;
	V752= Cnil;
	V753= Cnil;
	V754= Cnil;
	V748= (long)length((V747));
	if(!((V748)<(2))){
	goto T1368;}
	base[1]= (V747);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1368;
T1368:;
	if(!((V748)==(2))){
	goto T1366;}
	V753= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V747))));
	V754= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(cadr((V747))));
	base[1]= (V753);
	base[2]= (V754);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1377;}
	base[1]= (V747);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1377;
T1377:;
	base[1]= (V754);
	base[2]= (V753);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1382;}
	base[1]= nreverse((V747));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1382;
T1382:;
	base[1]= (V747);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1366;
T1366:;
	V748= (long)(V748>=0&&(2)>0?(V748)/(2):ifloor(V748,2));
	{long V755;
	register object V756;
	V755= 1;
	V756= (V747);
	goto T1391;
T1391:;
	if(!((V755)>=(V748))){
	goto T1392;}
	V749= (V747);
	V750= cdr((V756));
	if(type_of((V756))!=t_cons)FEwrong_type_argument(Scons,(V756));
	((V756))->c.c_cdr = Cnil;
	goto T1388;
	goto T1392;
T1392:;
	V755= (long)(1)+(V755);
	V756= cdr((V756));
	goto T1391;}
	goto T1388;
T1388:;
	base[1]= (V749);
	vs_top=(vs_base=base+1)+1;
	L41(base0);
	vs_top=sup;
	V749= vs_base[0];
	base[1]= (V750);
	vs_top=(vs_base=base+1)+1;
	L41(base0);
	vs_top=sup;
	V750= vs_base[0];
	if(!(endp_prop((V749)))){
	goto T1412;}
	base[1]= (V750);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1412;
T1412:;
	if(!(endp_prop((V750)))){
	goto T1410;}
	base[1]= (V749);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1410;
T1410:;
	V751= make_cons(Cnil,Cnil);
	V752= (V751);
	V753= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V749))));
	V754= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V750))));
	goto T1361;
T1361:;
	base[1]= (V753);
	base[2]= (V754);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1424;}
	goto T1362;
	goto T1424;
T1424:;
	base[1]= (V754);
	base[2]= (V753);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1429;}
	goto T1363;
	goto T1429;
T1429:;
	goto T1362;
	goto T1362;
T1362:;
	if(type_of((V752))!=t_cons)FEwrong_type_argument(Scons,(V752));
	((V752))->c.c_cdr = (V749);
	V752= cdr((V752));
	V749= cdr((V749));
	if(!(endp_prop((V749)))){
	goto T1438;}
	if(type_of((V752))!=t_cons)FEwrong_type_argument(Scons,(V752));
	((V752))->c.c_cdr = (V750);
	base[1]= cdr((V751));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1438;
T1438:;
	V753= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V749))));
	goto T1361;
	goto T1363;
T1363:;
	if(type_of((V752))!=t_cons)FEwrong_type_argument(Scons,(V752));
	((V752))->c.c_cdr = (V750);
	V752= cdr((V752));
	V750= cdr((V750));
	if(!(endp_prop((V750)))){
	goto T1449;}
	if(type_of((V752))!=t_cons)FEwrong_type_argument(Scons,(V752));
	((V752))->c.c_cdr = (V749);
	base[1]= cdr((V751));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1449;
T1449:;
	V754= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V750))));
	goto T1361;}
	}
}
static void LnkT62(){ call_or_link(VV[62],(void **)(void *)&Lnk62);} /* ARRAY-HAS-FILL-POINTER-P */
static void LnkT61(){ call_or_link(VV[61],(void **)(void *)&Lnk61);} /* SUBTYPEP */
static object  LnkTLI60(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[60],(void **)(void *)&LnkLI60,2,first,ap);va_end(ap);return V1;} /* COERCE */
static void LnkT59(){ call_or_link(VV[59],(void **)(void *)&Lnk59);} /* SORT */
static object  LnkTLI58(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[58],(void **)(void *)&LnkLI58,81925,first,ap);va_end(ap);return V1;} /* QUICK-SORT */
static void LnkT57(){ call_or_link(VV[57],(void **)(void *)&Lnk57);} /* LIST-MERGE-SORT */
static object  LnkTLI56(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[56],(void **)(void *)&LnkLI56,first,ap);va_end(ap);return V1;} /* DELETE-DUPLICATES */
static void LnkT55(){ call_or_link(VV[55],(void **)(void *)&Lnk55);} /* MEMBER1 */
static object  LnkTLI54(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[54],(void **)(void *)&LnkLI54,first,ap);va_end(ap);return V1;} /* POSITION */
static object  LnkTLI53(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[53],(void **)(void *)&LnkLI53,first,ap);va_end(ap);return V1;} /* FIND */
static object  LnkTLI52(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[52],(void **)(void *)&LnkLI52,first,ap);va_end(ap);return V1;} /* NSUBSTITUTE */
static object  LnkTLI51(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[51],(void **)(void *)&LnkLI51,first,ap);va_end(ap);return V1;} /* SUBSTITUTE */
static object  LnkTLI50(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[50],(void **)(void *)&LnkLI50,first,ap);va_end(ap);return V1;} /* COUNT */
static object  LnkTLI49(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[49],(void **)(void *)&LnkLI49,1,first,ap);va_end(ap);return V1;} /* SEQTYPE */
static object  LnkTLI48(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[48],(void **)(void *)&LnkLI48,first,ap);va_end(ap);return V1;} /* MAKE-SEQUENCE */
static object  LnkTLI47(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[47],(void **)(void *)&LnkLI47,first,ap);va_end(ap);return V1;} /* INTERNAL-COUNT */
static object  LnkTLI45(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[45],(void **)(void *)&LnkLI45,first,ap);va_end(ap);return V1;} /* REMOVE */
static object  LnkTLI44(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[44],(void **)(void *)&LnkLI44,first,ap);va_end(ap);return V1;} /* DELETE */
static object  LnkTLI43(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[43],(void **)(void *)&LnkLI43,4,first,ap);va_end(ap);return V1;} /* CALL-TEST */
static object  LnkTLI42(){return call_proc0(VV[42],(void **)(void *)&LnkLI42);} /* TEST-ERROR */
static object  LnkTLI37(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[37],(void **)(void *)&LnkLI37,258,first,ap);va_end(ap);return V1;} /* THE-END */
static object  LnkTLI36(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[36],(void **)(void *)&LnkLI36,257,first,ap);va_end(ap);return V1;} /* THE-START */
static object  LnkTLI33(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[33],(void **)(void *)&LnkLI33,first,ap);va_end(ap);return V1;} /* BAD-SEQ-LIMIT */
static void LnkT32(){ call_or_link(VV[32],(void **)(void *)&Lnk32);} /* SPECIFIC-ERROR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

