
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
	if(((V30))==Cnil){
	goto T45;}
	base[1]= list(2,(V29),(V30));
	goto T43;
goto T45;
T45:;
	base[1]= (V29);
goto T43;
T43:;
	vs_top=(vs_base=base+0)+2;
	Lerror();
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
	goto T48;}
	if(!((fix((V34)))<=((long)length((V35))))){
	goto T51;}
	goto T50;
goto T51;
T51:;
	(void)((VFUN_NARGS=1,(*(LnkLI31))((V34))));
goto T50;
T50:;
	{long V36 = fix((V34));
	VMR6((object)V36)}
goto T48;
T48:;
	if(((V34))!=Cnil){
	goto T54;}
	{long V37 = (long)length((V35));
	VMR6((object)V37)}
goto T54;
T54:;
	{long V38 = fix((VFUN_NARGS=1,(*(LnkLI31))((V34))));
	VMR6((object)V38)}
}
/*	local entry for function THE-START	*/

static object LI7(V40)

register object V40;
{	 VMB7 VMS7 VMV7
goto TTL;
TTL:;
	if(!(type_of((V40))==t_fixnum)){
	goto T57;}
	if(!((fix((V40)))>=(0))){
	goto T60;}
	goto T59;
goto T60;
T60:;
	(void)((VFUN_NARGS=1,(*(LnkLI31))((V40))));
goto T59;
T59:;
	{long V41 = fix((V40));
	VMR7((object)V41)}
goto T57;
T57:;
	if(((V40))!=Cnil){
	goto T63;}
	{long V42 = 0;
	VMR7((object)V42)}
goto T63;
T63:;
	{long V43 = fix((VFUN_NARGS=1,(*(LnkLI31))((V40))));
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
	parse_key(vs_base+2,FALSE,FALSE,5,VV[10],VV[13],VV[14],VV[32],VV[16]);
	V44=(base[0]);
	V45=(base[1]);
	vs_top=sup;
	V46=(base[2]);
	V47=(base[3]);
	V48=(base[4]);
	V49=(base[5]);
	V50=(base[10]);
	if(base[11]==Cnil){
	V51= symbol_function(VV[33]);
	}else{
	V51=(base[6]);}
	{register long V52;
	if(((V47))==Cnil){
	goto T68;}
	V52= (long)(*(LnkLI34))((V47));
	goto T66;
goto T68;
T68:;
	V52= 0;
goto T66;
T66:;
	{register long V53;
	V53= (long)(*(LnkLI35))((V48),(V45));
	if(!((V52)<=(V53))){
	goto T72;}
	goto T71;
goto T72;
T72:;
	V54 = make_fixnum(V52);
	V55 = make_fixnum(V53);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V54,V55)));
goto T71;
T71:;
	if(((V46))!=Cnil){
	goto T75;}
	if(((V50))!=Cnil){
	goto T77;}
	if(!((V52)>=(V53))){
	goto T80;}
	vs_base=vs_top;
	super_funcall_no_event((V44));
	return;
goto T80;
T80:;
	V56= elt((V45),V52);
	V49= (
	(type_of((V51)) == t_sfun ?(*(((V51))->sfn.sfn_self)):
	(fcall.fun=((V51)),fcall.argd=1,fcalln))(/* INLINE-ARGS */V56));
	V52= (long)(1)+(V52);
goto T77;
T77:;
	{register object V57;
	V57= (V49);
goto T87;
T87:;
	if(!((V52)>=(V53))){
	goto T88;}
	base[12]= (V57);
	vs_top=(vs_base=base+12)+1;
	return;
goto T88;
T88:;
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
	goto T87;}
goto T75;
T75:;
	if(((V50))!=Cnil){
	goto T100;}
	if(!((V52)>=(V53))){
	goto T103;}
	vs_base=vs_top;
	super_funcall_no_event((V44));
	return;
goto T103;
T103:;
	V53= (long)(V53)+(-1);
	V60= elt((V45),V53);
	V49= (
	(type_of((V51)) == t_sfun ?(*(((V51))->sfn.sfn_self)):
	(fcall.fun=((V51)),fcall.argd=1,fcalln))(/* INLINE-ARGS */V60));
goto T100;
T100:;
	{register object V61;
	V61= (V49);
goto T110;
T110:;
	if(!((V52)>=(V53))){
	goto T111;}
	base[12]= (V61);
	vs_top=(vs_base=base+12)+1;
	return;
goto T111;
T111:;
	V53= (long)(-1)+(V53);
	base[12]= elt((V45),V53);
	vs_top=(vs_base=base+12)+1;
	super_funcall_no_event((V51));
	vs_top=sup;
	V62= vs_base[0];
	V61= (
	(type_of((V44)) == t_sfun ?(*(((V44))->sfn.sfn_self)):
	(fcall.fun=((V44)),fcall.argd=2,fcalln))(V62,(V61)));
	goto T110;}}}
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
	goto T124;}
	V69= (long)(*(LnkLI34))((V67));
	goto T122;
goto T124;
T124:;
	V69= 0;
goto T122;
T122:;
	{register long V70;
	V70= (long)(*(LnkLI35))((V68),(V65));
	if(!((V69)<=(V70))){
	goto T128;}
	goto T127;
goto T128;
T128:;
	V71 = make_fixnum(V69);
	V72 = make_fixnum(V70);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V71,V72)));
goto T127;
T127:;
	{register long V73;
	V73= V69;
goto T132;
T132:;
	if(!((V73)>=(V70))){
	goto T133;}
	{object V74 = (V65);
	VMR9(V74)}
goto T133;
T133:;
	(void)(elt_set((V65),V73,(V66)));
	V73= (long)(1)+(V73);
	goto T132;}}}
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
	goto T143;}
	V83= (long)(*(LnkLI34))((V79));
	goto T141;
goto T143;
T143:;
	V83= 0;
goto T141;
T141:;
	{long V84;
	V84= (long)(*(LnkLI35))((V80),(V77));
	if(!((V83)<=(V84))){
	goto T147;}
	goto T146;
goto T147;
T147:;
	V85 = make_fixnum(V83);
	V86 = make_fixnum(V84);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V85,V86)));
goto T146;
T146:;
	{long V87;
	if(((V81))==Cnil){
	goto T151;}
	V87= (long)(*(LnkLI34))((V81));
	goto T149;
goto T151;
T151:;
	V87= 0;
goto T149;
T149:;
	{long V88;
	V88= (long)(*(LnkLI35))((V82),(V78));
	if(!((V87)<=(V88))){
	goto T155;}
	goto T154;
goto T155;
T155:;
	V89 = make_fixnum(V87);
	V90 = make_fixnum(V88);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V89,V90)));
goto T154;
T154:;
	if(!(((V77))==((V78)))){
	goto T158;}
	if(!((V83)>(V87))){
	goto T158;}
	{register long V91;
	long V92;
	register long V93;
	register long V94;
	V91= 0;
	if(!(((long)(V84)-(V83))<((long)(V88)-(V87)))){
	goto T165;}
	V92= (long)(V84)-(V83);
	goto T163;
goto T165;
T165:;
	V92= (long)(V88)-(V87);
goto T163;
T163:;
	V93= (long)(V83)+((long)(-1)+(V92));
	V94= (long)(V87)+((long)(-1)+(V92));
goto T170;
T170:;
	if(!((V91)>=(V92))){
	goto T171;}
	{object V95 = (V77);
	VMR10(V95)}
goto T171;
T171:;
	V96= elt((V78),V94);
	(void)(elt_set((V77),V93,/* INLINE-ARGS */V96));
	V91= (long)(1)+(V91);
	V93= (long)(-1)+(V93);
	V94= (long)(-1)+(V94);
	goto T170;}
goto T158;
T158:;
	{register long V97;
	long V98;
	register long V99;
	register long V100;
	V97= 0;
	if(!(((long)(V84)-(V83))<((long)(V88)-(V87)))){
	goto T186;}
	V98= (long)(V84)-(V83);
	goto T184;
goto T186;
T186:;
	V98= (long)(V88)-(V87);
goto T184;
T184:;
	V99= V83;
	V100= V87;
goto T191;
T191:;
	if(!((V97)>=(V98))){
	goto T192;}
	{object V101 = (V77);
	VMR10(V101)}
goto T192;
T192:;
	V102= elt((V78),V100);
	(void)(elt_set((V77),V99,/* INLINE-ARGS */V102));
	V97= (long)(1)+(V97);
	V99= (long)(1)+(V99);
	V100= (long)(1)+(V100);
	goto T191;}}}}}
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
	V113= symbol_function(VV[33]);
	}else{
	V113=(Vcs[8]);}
	{long V114;
	if(((V110))==Cnil){
	goto T205;}
	V114= (long)(*(LnkLI34))((V110));
	goto T203;
goto T205;
T205:;
	V114= 0;
goto T203;
T203:;
	{long V115;
	V115= (long)(*(LnkLI35))((V111),(V106));
	if(!((V114)<=(V115))){
	goto T209;}
	goto T208;
goto T209;
T209:;
	V116 = make_fixnum(V114);
	V117 = make_fixnum(V115);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V116,V117)));
goto T208;
T208:;
	{long V118;
	if(((V112))!=Cnil){
	goto T213;}
	V118= 2147483647;
	goto T211;
goto T213;
T213:;
	V118= fix((V112));
goto T211;
T211:;
	if((V108)==Cnil){
	goto T216;}
	if((V109)==Cnil){
	goto T216;}
	(void)((*(LnkLI40))());
goto T216;
T216:;
	if(((V107))!=Cnil){
	goto T218;}
	if(!(type_of((V106))==t_cons||((V106))==Cnil)){
	goto T221;}
	{register object V119;
	register object V120;
	V119= (V106);
	V120= Cnil;
	{register long V121;
	V121= 0;
goto T226;
T226:;
	if(!((V121)>=(V114))){
	goto T227;}
	goto T223;
goto T227;
T227:;
	V120= make_cons(car((V119)),(V120));
	{register object V122;
	V122= car((V119));
	V119= cdr((V119));}
	V121= (long)(1)+(V121);
	goto T226;}
goto T223;
T223:;
	{register long V123;
	register long V124;
	V123= V114;
	V124= 0;
goto T243;
T243:;
	if((V123)>=(V115)){
	goto T245;}
	if((V124)>=(V118)){
	goto T245;}
	if(!(endp((V119)))){
	goto T244;}
goto T245;
T245:;
	base[0]= (V120);
	base[1]= (V119);
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	{object V125 = vs_base[0];
	VMR11(V125)}
goto T244;
T244:;
	base[0]= car((V119));
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V113));
	vs_top=sup;
	V126= vs_base[0];
	if(((*(LnkLI41))((V108),(V109),(V105),V126))==Cnil){
	goto T256;}
	V124= (long)(1)+(V124);
	{register object V127;
	V127= car((V119));
	V119= cdr((V119));
	goto T254;}
goto T256;
T256:;
	V120= make_cons(car((V119)),(V120));
	{register object V128;
	V128= car((V119));
	V119= cdr((V119));}
goto T254;
T254:;
	V123= (long)(1)+(V123);
	goto T243;}}
goto T221;
T221:;
	V129 = make_fixnum(V114);
	V130 = make_fixnum(V115);
	V131 = make_fixnum(V118);
	{object V132 = (VFUN_NARGS=16,(*(LnkLI42))((V105),(V106),VV[10],(V107),VV[11],(V108),VV[12],(V109),VV[13],V129,VV[14],V130,VV[15],V131,VV[16],(V113)));
	VMR11(V132)}
goto T218;
T218:;
	V133 = make_fixnum(V114);
	V134 = make_fixnum(V115);
	V135 = make_fixnum(V118);
	{object V136 = (VFUN_NARGS=16,(*(LnkLI42))((V105),(V106),VV[10],(V107),VV[11],(V108),VV[12],(V109),VV[13],V133,VV[14],V134,VV[15],V135,VV[16],(V113)));
	VMR11(V136)}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function REMOVE-IF	*/

static object LI12(V138,V137,va_alist)
	object V138,V137;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V139;
	object V140;
	object V141;
	object V142;
	object V143;
	object V144;
	object V145;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V139= V138;
	V140= V137;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI12key,ap);
	V141=(Vcs[2]);
	V142=(Vcs[3]);
	V143=(Vcs[4]);
	V144=(Vcs[5]);
	if(Vcs[6]==0){
	V145= symbol_function(VV[33]);
	}else{
	V145=(Vcs[6]);}
	V146= symbol_function(VV[44]);
	{object V147 = (VFUN_NARGS=14,(*(LnkLI43))((V139),(V140),VV[10],(V141),VV[11],V146,VV[13],(V142),VV[14],(V143),VV[15],(V144),VV[16],(V145)));
	VMR12(V147)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function REMOVE-IF-NOT	*/

static object LI13(V149,V148,va_alist)
	object V149,V148;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB13 VMS13 VMV13
	{object V150;
	object V151;
	object V152;
	object V153;
	object V154;
	object V155;
	object V156;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V150= V149;
	V151= V148;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI13key,ap);
	V152=(Vcs[2]);
	V153=(Vcs[3]);
	V154=(Vcs[4]);
	V155=(Vcs[5]);
	if(Vcs[6]==0){
	V156= symbol_function(VV[33]);
	}else{
	V156=(Vcs[6]);}
	V157= symbol_function(VV[44]);
	{object V158 = (VFUN_NARGS=14,(*(LnkLI43))((V150),(V151),VV[10],(V152),VV[12],V157,VV[13],(V153),VV[14],(V154),VV[15],(V155),VV[16],(V156)));
	VMR13(V158)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function DELETE	*/

static object LI14(V160,V159,va_alist)
	object V160,V159;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB14 VMS14 VMV14
	{object V161;
	register object V162;
	object V163;
	object V164;
	object V165;
	object V166;
	object V167;
	object V168;
	object V169;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V161= V160;
	V162= V159;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI14key,ap);
	V163=(Vcs[2]);
	V164=(Vcs[3]);
	V165=(Vcs[4]);
	V166=(Vcs[5]);
	V167=(Vcs[6]);
	V168=(Vcs[7]);
	if(Vcs[8]==0){
	V169= symbol_function(VV[33]);
	}else{
	V169=(Vcs[8]);}
	{long V170;
	V170= (long)length((V162));
	{register long V171;
	if(((V166))==Cnil){
	goto T281;}
	V171= (long)(*(LnkLI34))((V166));
	goto T279;
goto T281;
T281:;
	V171= 0;
goto T279;
T279:;
	{long V172;
	V172= (long)(*(LnkLI35))((V167),(V162));
	if(!((V171)<=(V172))){
	goto T285;}
	goto T284;
goto T285;
T285:;
	V173 = make_fixnum(V171);
	V174 = make_fixnum(V172);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V173,V174)));
goto T284;
T284:;
	{register long V175;
	if(((V168))!=Cnil){
	goto T289;}
	V175= 2147483647;
	goto T287;
goto T289;
T289:;
	V175= fix((V168));
goto T287;
T287:;
	if((V164)==Cnil){
	goto T292;}
	if((V165)==Cnil){
	goto T292;}
	(void)((*(LnkLI40))());
goto T292;
T292:;
	if(((V163))!=Cnil){
	goto T294;}
	if(!(type_of((V162))==t_cons||((V162))==Cnil)){
	goto T297;}
	{object V176;
	register object V177;
	V176= make_cons(Cnil,(V162));
	V177= (V176);
	{long V178;
	V178= 0;
goto T304;
T304:;
	if(!((V178)>=(V171))){
	goto T305;}
	goto T301;
goto T305;
T305:;
	{object V179;
	V179= car((V177));
	V177= cdr((V177));}
	V178= (long)(1)+(V178);
	goto T304;}
goto T301;
T301:;
	{long V180;
	long V181;
	V180= V171;
	V181= 0;
goto T319;
T319:;
	if((V180)>=(V172)){
	goto T321;}
	if((V181)>=(V175)){
	goto T321;}
	if(!(endp(cdr((V177))))){
	goto T320;}
goto T321;
T321:;
	{object V182 = cdr((V176));
	VMR14(V182)}
goto T320;
T320:;
	base[1]= cadr((V177));
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event((V169));
	vs_top=sup;
	V183= vs_base[0];
	if(((*(LnkLI41))((V164),(V165),(V161),V183))==Cnil){
	goto T330;}
	V181= (long)(1)+(V181);
	if(type_of((V177))!=t_cons)FEwrong_type_argument(Scons,(V177));
	((V177))->c.c_cdr = cddr((V177));
	goto T328;
goto T330;
T330:;
	V177= cdr((V177));
goto T328;
T328:;
	V180= (long)(1)+(V180);
	goto T319;}}
goto T297;
T297:;
	{long V184;
	V185 = make_fixnum(V171);
	V186 = make_fixnum(V172);
	V187 = make_fixnum(V175);
	V184= fix((VFUN_NARGS=16,(*(LnkLI45))((V161),(V162),VV[10],(V163),VV[11],(V164),VV[12],(V165),VV[13],V185,VV[14],V186,VV[15],V187,VV[16],(V169))));
	if(!((V184)<(V175))){
	goto T341;}
	V175= V184;
goto T341;
T341:;
	{object V188;
	register long V189;
	long V190;
	long V191;
	V192= (*(LnkLI47))((V162));
	V193 = make_fixnum((long)(V170)-(V175));
	V188= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V192,V193));
	V189= 0;
	V190= 0;
	V191= 0;
goto T350;
T350:;
	if(!((V189)>=(V170))){
	goto T351;}
	{object V194 = (V188);
	VMR14(V194)}
goto T351;
T351:;
	if(!((V171)<=(V189))){
	goto T357;}
	if(!((V189)<(V172))){
	goto T357;}
	if(!((V191)<(V175))){
	goto T357;}
	base[0]= elt((V162),V189);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V169));
	vs_top=sup;
	V195= vs_base[0];
	if(((*(LnkLI41))((V164),(V165),(V161),V195))==Cnil){
	goto T357;}
	V191= (long)(1)+(V191);
	goto T355;
goto T357;
T357:;
	V196= elt((V162),V189);
	(void)(elt_set((V188),V190,/* INLINE-ARGS */V196));
	V190= (long)(1)+(V190);
goto T355;
T355:;
	V189= (long)(1)+(V189);
	goto T350;}}
goto T294;
T294:;
	{long V197;
	V198 = make_fixnum(V171);
	V199 = make_fixnum(V172);
	V200 = make_fixnum(V175);
	V197= fix((VFUN_NARGS=16,(*(LnkLI45))((V161),(V162),VV[10],(V163),VV[11],(V164),VV[12],(V165),VV[13],V198,VV[14],V199,VV[15],V200,VV[16],(V169))));
	if(!((V197)<(V175))){
	goto T374;}
	V175= V197;
goto T374;
T374:;
	{object V201;
	register long V202;
	long V203;
	long V204;
	V205= (*(LnkLI47))((V162));
	V206 = make_fixnum((long)(V170)-(V175));
	V201= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V205,V206));
	V202= (long)(-1)+(V170);
	V203= (long)(-1)+((long)(V170)-(V175));
	V204= 0;
goto T383;
T383:;
	if(!((V202)<(0))){
	goto T384;}
	{object V207 = (V201);
	VMR14(V207)}
goto T384;
T384:;
	if(!((V171)<=(V202))){
	goto T390;}
	if(!((V202)<(V172))){
	goto T390;}
	if(!((V204)<(V175))){
	goto T390;}
	base[0]= elt((V162),V202);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V169));
	vs_top=sup;
	V208= vs_base[0];
	if(((*(LnkLI41))((V164),(V165),(V161),V208))==Cnil){
	goto T390;}
	V204= (long)(1)+(V204);
	goto T388;
goto T390;
T390:;
	V209= elt((V162),V202);
	(void)(elt_set((V201),V203,/* INLINE-ARGS */V209));
	V203= (long)(-1)+(V203);
goto T388;
T388:;
	V202= (long)(-1)+(V202);
	goto T383;}}}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function DELETE-IF	*/

static object LI15(V211,V210,va_alist)
	object V211,V210;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB15 VMS15 VMV15
	{object V212;
	object V213;
	object V214;
	object V215;
	object V216;
	object V217;
	object V218;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V212= V211;
	V213= V210;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI15key,ap);
	V214=(Vcs[2]);
	V215=(Vcs[3]);
	V216=(Vcs[4]);
	V217=(Vcs[5]);
	if(Vcs[6]==0){
	V218= symbol_function(VV[33]);
	}else{
	V218=(Vcs[6]);}
	V219= symbol_function(VV[44]);
	{object V220 = (VFUN_NARGS=14,(*(LnkLI42))((V212),(V213),VV[10],(V214),VV[11],V219,VV[13],(V215),VV[14],(V216),VV[15],(V217),VV[16],(V218)));
	VMR15(V220)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function DELETE-IF-NOT	*/

static object LI16(V222,V221,va_alist)
	object V222,V221;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB16 VMS16 VMV16
	{object V223;
	object V224;
	object V225;
	object V226;
	object V227;
	object V228;
	object V229;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V223= V222;
	V224= V221;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI16key,ap);
	V225=(Vcs[2]);
	V226=(Vcs[3]);
	V227=(Vcs[4]);
	V228=(Vcs[5]);
	if(Vcs[6]==0){
	V229= symbol_function(VV[33]);
	}else{
	V229=(Vcs[6]);}
	V230= symbol_function(VV[44]);
	{object V231 = (VFUN_NARGS=14,(*(LnkLI42))((V223),(V224),VV[10],(V225),VV[12],V230,VV[13],(V226),VV[14],(V227),VV[15],(V228),VV[16],(V229)));
	VMR16(V231)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function COUNT	*/

static object LI17(V233,V232,va_alist)
	object V233,V232;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB17 VMS17 VMV17
	{object V234;
	register object V235;
	object V236;
	register object V237;
	register object V238;
	object V239;
	object V240;
	object V241;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V234= V233;
	V235= V232;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI17key,ap);
	V236=(Vcs[2]);
	V237=(Vcs[3]);
	V238=(Vcs[4]);
	V239=(Vcs[5]);
	V240=(Vcs[6]);
	if(Vcs[7]==0){
	V241= symbol_function(VV[33]);
	}else{
	V241=(Vcs[7]);}
	{long V242;
	if(((V239))==Cnil){
	goto T413;}
	V242= (long)(*(LnkLI34))((V239));
	goto T411;
goto T413;
T413:;
	V242= 0;
goto T411;
T411:;
	{long V243;
	V243= (long)(*(LnkLI35))((V240),(V235));
	if(!((V242)<=(V243))){
	goto T417;}
	goto T416;
goto T417;
T417:;
	V244 = make_fixnum(V242);
	V245 = make_fixnum(V243);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V244,V245)));
goto T416;
T416:;
	if((V237)==Cnil){
	goto T419;}
	if((V238)==Cnil){
	goto T419;}
	(void)((*(LnkLI40))());
goto T419;
T419:;
	if(((V236))!=Cnil){
	goto T421;}
	{register long V246;
	register long V247;
	V246= V242;
	V247= 0;
goto T426;
T426:;
	if(!((V246)>=(V243))){
	goto T427;}
	{object V248 = make_fixnum(V247);
	VMR17(V248)}
goto T427;
T427:;
	base[0]= elt((V235),V246);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V241));
	vs_top=sup;
	V249= vs_base[0];
	if(((*(LnkLI41))((V237),(V238),(V234),V249))==Cnil){
	goto T431;}
	V247= (long)(1)+(V247);
goto T431;
T431:;
	V246= (long)(1)+(V246);
	goto T426;}
goto T421;
T421:;
	{register long V250;
	register long V251;
	V250= (long)(-1)+(V243);
	V251= 0;
goto T443;
T443:;
	if(!((V250)<(V242))){
	goto T444;}
	{object V252 = make_fixnum(V251);
	VMR17(V252)}
goto T444;
T444:;
	base[0]= elt((V235),V250);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V241));
	vs_top=sup;
	V253= vs_base[0];
	if(((*(LnkLI41))((V237),(V238),(V234),V253))==Cnil){
	goto T448;}
	V251= (long)(1)+(V251);
goto T448;
T448:;
	V250= (long)(-1)+(V250);
	goto T443;}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function COUNT-IF	*/

static object LI18(V255,V254,va_alist)
	object V255,V254;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB18 VMS18 VMV18
	{object V256;
	object V257;
	object V258;
	object V259;
	object V260;
	object V261;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V256= V255;
	V257= V254;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI18key,ap);
	V258=(Vcs[2]);
	V259=(Vcs[3]);
	V260=(Vcs[4]);
	if(Vcs[5]==0){
	V261= symbol_function(VV[33]);
	}else{
	V261=(Vcs[5]);}
	V262= symbol_function(VV[44]);
	{object V263 = (VFUN_NARGS=12,(*(LnkLI48))((V256),(V257),VV[10],(V258),VV[11],V262,VV[13],(V259),VV[14],(V260),VV[16],(V261)));
	VMR18(V263)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function COUNT-IF-NOT	*/

static object LI19(V265,V264,va_alist)
	object V265,V264;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB19 VMS19 VMV19
	{object V266;
	object V267;
	object V268;
	object V269;
	object V270;
	object V271;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V266= V265;
	V267= V264;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI19key,ap);
	V268=(Vcs[2]);
	V269=(Vcs[3]);
	V270=(Vcs[4]);
	if(Vcs[5]==0){
	V271= symbol_function(VV[33]);
	}else{
	V271=(Vcs[5]);}
	V272= symbol_function(VV[44]);
	{object V273 = (VFUN_NARGS=12,(*(LnkLI48))((V266),(V267),VV[10],(V268),VV[12],V272,VV[13],(V269),VV[14],(V270),VV[16],(V271)));
	VMR19(V273)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function INTERNAL-COUNT	*/

static object LI20(V275,V274,va_alist)
	object V275,V274;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB20 VMS20 VMV20
	{object V276;
	register object V277;
	object V278;
	register object V279;
	register object V280;
	object V281;
	object V282;
	object V283;
	object V284;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V276= V275;
	V277= V274;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI20key,ap);
	V278=(Vcs[2]);
	V279=(Vcs[3]);
	V280=(Vcs[4]);
	V281=(Vcs[5]);
	V282=(Vcs[6]);
	V283=(Vcs[7]);
	if(Vcs[8]==0){
	V284= symbol_function(VV[33]);
	}else{
	V284=(Vcs[8]);}
	{long V285;
	if(((V281))==Cnil){
	goto T464;}
	V285= (long)(*(LnkLI34))((V281));
	goto T462;
goto T464;
T464:;
	V285= 0;
goto T462;
T462:;
	{long V286;
	V286= (long)(*(LnkLI35))((V282),(V277));
	if(!((V285)<=(V286))){
	goto T468;}
	goto T467;
goto T468;
T468:;
	V287 = make_fixnum(V285);
	V288 = make_fixnum(V286);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V287,V288)));
goto T467;
T467:;
	{long V289;
	if(((V283))!=Cnil){
	goto T472;}
	V289= 2147483647;
	goto T470;
goto T472;
T472:;
	V289= fix((V283));
goto T470;
T470:;
	if((V279)==Cnil){
	goto T475;}
	if((V280)==Cnil){
	goto T475;}
	(void)((*(LnkLI40))());
goto T475;
T475:;
	if(((V278))!=Cnil){
	goto T477;}
	{register long V290;
	register long V291;
	V290= V285;
	V291= 0;
goto T482;
T482:;
	if(!((V290)>=(V286))){
	goto T483;}
	{object V292 = make_fixnum(V291);
	VMR20(V292)}
goto T483;
T483:;
	if(!((V291)<(V289))){
	goto T487;}
	base[0]= elt((V277),V290);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V284));
	vs_top=sup;
	V293= vs_base[0];
	if(((*(LnkLI41))((V279),(V280),(V276),V293))==Cnil){
	goto T487;}
	V291= (long)(1)+(V291);
goto T487;
T487:;
	V290= (long)(1)+(V290);
	goto T482;}
goto T477;
T477:;
	{register long V294;
	register long V295;
	V294= (long)(-1)+(V286);
	V295= 0;
goto T501;
T501:;
	if(!((V294)<(V285))){
	goto T502;}
	{object V296 = make_fixnum(V295);
	VMR20(V296)}
goto T502;
T502:;
	if(!((V295)<(V289))){
	goto T506;}
	base[0]= elt((V277),V294);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V284));
	vs_top=sup;
	V297= vs_base[0];
	if(((*(LnkLI41))((V279),(V280),(V276),V297))==Cnil){
	goto T506;}
	V295= (long)(1)+(V295);
goto T506;
T506:;
	V294= (long)(-1)+(V294);
	goto T501;}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function INTERNAL-COUNT-IF	*/

static object LI21(V299,V298,va_alist)
	object V299,V298;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB21 VMS21 VMV21
	{object V300;
	object V301;
	object V302;
	object V303;
	object V304;
	object V305;
	object V306;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V300= V299;
	V301= V298;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI21key,ap);
	V302=(Vcs[2]);
	V303=(Vcs[3]);
	V304=(Vcs[4]);
	V305=(Vcs[5]);
	if(Vcs[6]==0){
	V306= symbol_function(VV[33]);
	}else{
	V306=(Vcs[6]);}
	V307= symbol_function(VV[44]);
	{object V308 = (VFUN_NARGS=14,(*(LnkLI45))((V300),(V301),VV[10],(V302),VV[11],V307,VV[13],(V303),VV[14],(V304),VV[15],(V305),VV[16],(V306)));
	VMR21(V308)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function INTERNAL-COUNT-IF-NOT	*/

static object LI22(V310,V309,va_alist)
	object V310,V309;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB22 VMS22 VMV22
	{object V311;
	object V312;
	object V313;
	object V314;
	object V315;
	object V316;
	object V317;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V311= V310;
	V312= V309;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI22key,ap);
	V313=(Vcs[2]);
	V314=(Vcs[3]);
	V315=(Vcs[4]);
	V316=(Vcs[5]);
	if(Vcs[6]==0){
	V317= symbol_function(VV[33]);
	}else{
	V317=(Vcs[6]);}
	V318= symbol_function(VV[44]);
	{object V319 = (VFUN_NARGS=14,(*(LnkLI45))((V311),(V312),VV[10],(V313),VV[12],V318,VV[13],(V314),VV[14],(V315),VV[15],(V316),VV[16],(V317)));
	VMR22(V319)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function SUBSTITUTE	*/

static object LI23(V322,V321,V320,va_alist)
	object V322,V321,V320;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB23 VMS23 VMV23
	{object V323;
	object V324;
	register object V325;
	object V326;
	object V327;
	object V328;
	object V329;
	object V330;
	object V331;
	object V332;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <3) too_few_arguments();
	V323= V322;
	V324= V321;
	V325= V320;
	narg= narg - 3;
	{
	parse_key_new(narg,Vcs +3,(struct key *)&LI23key,ap);
	V326=(Vcs[3]);
	V327=(Vcs[4]);
	V328=(Vcs[5]);
	V329=(Vcs[6]);
	V330=(Vcs[7]);
	V331=(Vcs[8]);
	if(Vcs[9]==0){
	V332= symbol_function(VV[33]);
	}else{
	V332=(Vcs[9]);}
	{long V333;
	V333= (long)length((V325));
	{long V334;
	if(((V329))==Cnil){
	goto T525;}
	V334= (long)(*(LnkLI34))((V329));
	goto T523;
goto T525;
T525:;
	V334= 0;
goto T523;
T523:;
	{long V335;
	V335= (long)(*(LnkLI35))((V330),(V325));
	if(!((V334)<=(V335))){
	goto T529;}
	goto T528;
goto T529;
T529:;
	V336 = make_fixnum(V334);
	V337 = make_fixnum(V335);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V336,V337)));
goto T528;
T528:;
	{long V338;
	if(((V331))!=Cnil){
	goto T533;}
	V338= 2147483647;
	goto T531;
goto T533;
T533:;
	V338= fix((V331));
goto T531;
T531:;
	if((V327)==Cnil){
	goto T536;}
	if((V328)==Cnil){
	goto T536;}
	(void)((*(LnkLI40))());
goto T536;
T536:;
	if(((V326))!=Cnil){
	goto T538;}
	{register object V339;
	register long V340;
	register long V341;
	V342= (*(LnkLI47))((V325));
	V343 = make_fixnum(V333);
	V339= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V342,V343));
	V340= 0;
	V341= 0;
goto T544;
T544:;
	if(!((V340)>=(V333))){
	goto T545;}
	{object V344 = (V339);
	VMR23(V344)}
goto T545;
T545:;
	if(!((V334)<=(V340))){
	goto T551;}
	if(!((V340)<(V335))){
	goto T551;}
	if(!((V341)<(V338))){
	goto T551;}
	base[0]= elt((V325),V340);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V332));
	vs_top=sup;
	V345= vs_base[0];
	if(((*(LnkLI41))((V327),(V328),(V324),V345))==Cnil){
	goto T551;}
	(void)(elt_set((V339),V340,(V323)));
	V341= (long)(1)+(V341);
	goto T549;
goto T551;
T551:;
	V346= elt((V325),V340);
	(void)(elt_set((V339),V340,/* INLINE-ARGS */V346));
goto T549;
T549:;
	V340= (long)(1)+(V340);
	goto T544;}
goto T538;
T538:;
	{register object V347;
	register long V348;
	register long V349;
	V350= (*(LnkLI47))((V325));
	V351 = make_fixnum(V333);
	V347= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V350,V351));
	V348= (long)(-1)+(V333);
	V349= 0;
goto T570;
T570:;
	if(!((V348)<(0))){
	goto T571;}
	{object V352 = (V347);
	VMR23(V352)}
goto T571;
T571:;
	if(!((V334)<=(V348))){
	goto T577;}
	if(!((V348)<(V335))){
	goto T577;}
	if(!((V349)<(V338))){
	goto T577;}
	base[0]= elt((V325),V348);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V332));
	vs_top=sup;
	V353= vs_base[0];
	if(((*(LnkLI41))((V327),(V328),(V324),V353))==Cnil){
	goto T577;}
	(void)(elt_set((V347),V348,(V323)));
	V349= (long)(1)+(V349);
	goto T575;
goto T577;
T577:;
	V354= elt((V325),V348);
	(void)(elt_set((V347),V348,/* INLINE-ARGS */V354));
goto T575;
T575:;
	V348= (long)(-1)+(V348);
	goto T570;}}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function SUBSTITUTE-IF	*/

static object LI24(V357,V356,V355,va_alist)
	object V357,V356,V355;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB24 VMS24 VMV24
	{object V358;
	object V359;
	object V360;
	object V361;
	object V362;
	object V363;
	object V364;
	object V365;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <3) too_few_arguments();
	V358= V357;
	V359= V356;
	V360= V355;
	narg= narg - 3;
	{
	parse_key_new(narg,Vcs +3,(struct key *)&LI24key,ap);
	V361=(Vcs[3]);
	V362=(Vcs[4]);
	V363=(Vcs[5]);
	V364=(Vcs[6]);
	if(Vcs[7]==0){
	V365= symbol_function(VV[33]);
	}else{
	V365=(Vcs[7]);}
	V366= symbol_function(VV[44]);
	{object V367 = (VFUN_NARGS=15,(*(LnkLI49))((V358),(V359),(V360),VV[10],(V361),VV[11],V366,VV[13],(V362),VV[14],(V363),VV[15],(V364),VV[16],(V365)));
	VMR24(V367)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function SUBSTITUTE-IF-NOT	*/

static object LI25(V370,V369,V368,va_alist)
	object V370,V369,V368;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB25 VMS25 VMV25
	{object V371;
	object V372;
	object V373;
	object V374;
	object V375;
	object V376;
	object V377;
	object V378;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <3) too_few_arguments();
	V371= V370;
	V372= V369;
	V373= V368;
	narg= narg - 3;
	{
	parse_key_new(narg,Vcs +3,(struct key *)&LI25key,ap);
	V374=(Vcs[3]);
	V375=(Vcs[4]);
	V376=(Vcs[5]);
	V377=(Vcs[6]);
	if(Vcs[7]==0){
	V378= symbol_function(VV[33]);
	}else{
	V378=(Vcs[7]);}
	V379= symbol_function(VV[44]);
	{object V380 = (VFUN_NARGS=15,(*(LnkLI49))((V371),(V372),(V373),VV[10],(V374),VV[12],V379,VV[13],(V375),VV[14],(V376),VV[15],(V377),VV[16],(V378)));
	VMR25(V380)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function NSUBSTITUTE	*/

static object LI26(V383,V382,V381,va_alist)
	object V383,V382,V381;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB26 VMS26 VMV26
	{object V384;
	object V385;
	register object V386;
	object V387;
	register object V388;
	register object V389;
	object V390;
	object V391;
	object V392;
	object V393;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <3) too_few_arguments();
	V384= V383;
	V385= V382;
	V386= V381;
	narg= narg - 3;
	{
	parse_key_new(narg,Vcs +3,(struct key *)&LI26key,ap);
	V387=(Vcs[3]);
	V388=(Vcs[4]);
	V389=(Vcs[5]);
	V390=(Vcs[6]);
	V391=(Vcs[7]);
	V392=(Vcs[8]);
	if(Vcs[9]==0){
	V393= symbol_function(VV[33]);
	}else{
	V393=(Vcs[9]);}
	{long V394;
	if(((V390))==Cnil){
	goto T599;}
	V394= (long)(*(LnkLI34))((V390));
	goto T597;
goto T599;
T599:;
	V394= 0;
goto T597;
T597:;
	{long V395;
	V395= (long)(*(LnkLI35))((V391),(V386));
	if(!((V394)<=(V395))){
	goto T603;}
	goto T602;
goto T603;
T603:;
	V396 = make_fixnum(V394);
	V397 = make_fixnum(V395);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V396,V397)));
goto T602;
T602:;
	{long V398;
	if(((V392))!=Cnil){
	goto T607;}
	V398= 2147483647;
	goto T605;
goto T607;
T607:;
	V398= fix((V392));
goto T605;
T605:;
	if((V388)==Cnil){
	goto T610;}
	if((V389)==Cnil){
	goto T610;}
	(void)((*(LnkLI40))());
goto T610;
T610:;
	if(((V387))!=Cnil){
	goto T612;}
	{register long V399;
	register long V400;
	V399= V394;
	V400= 0;
goto T617;
T617:;
	if(!((V399)>=(V395))){
	goto T618;}
	{object V401 = (V386);
	VMR26(V401)}
goto T618;
T618:;
	if(!((V400)<(V398))){
	goto T622;}
	base[0]= elt((V386),V399);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V393));
	vs_top=sup;
	V402= vs_base[0];
	if(((*(LnkLI41))((V388),(V389),(V385),V402))==Cnil){
	goto T622;}
	(void)(elt_set((V386),V399,(V384)));
	V400= (long)(1)+(V400);
goto T622;
T622:;
	V399= (long)(1)+(V399);
	goto T617;}
goto T612;
T612:;
	{register long V403;
	register long V404;
	V403= (long)(-1)+(V395);
	V404= 0;
goto T637;
T637:;
	if(!((V403)<(V394))){
	goto T638;}
	{object V405 = (V386);
	VMR26(V405)}
goto T638;
T638:;
	if(!((V404)<(V398))){
	goto T642;}
	base[0]= elt((V386),V403);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V393));
	vs_top=sup;
	V406= vs_base[0];
	if(((*(LnkLI41))((V388),(V389),(V385),V406))==Cnil){
	goto T642;}
	(void)(elt_set((V386),V403,(V384)));
	V404= (long)(1)+(V404);
goto T642;
T642:;
	V403= (long)(-1)+(V403);
	goto T637;}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function NSUBSTITUTE-IF	*/

static object LI27(V409,V408,V407,va_alist)
	object V409,V408,V407;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB27 VMS27 VMV27
	{object V410;
	object V411;
	object V412;
	object V413;
	object V414;
	object V415;
	object V416;
	object V417;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <3) too_few_arguments();
	V410= V409;
	V411= V408;
	V412= V407;
	narg= narg - 3;
	{
	parse_key_new(narg,Vcs +3,(struct key *)&LI27key,ap);
	V413=(Vcs[3]);
	V414=(Vcs[4]);
	V415=(Vcs[5]);
	V416=(Vcs[6]);
	if(Vcs[7]==0){
	V417= symbol_function(VV[33]);
	}else{
	V417=(Vcs[7]);}
	V418= symbol_function(VV[44]);
	{object V419 = (VFUN_NARGS=15,(*(LnkLI50))((V410),(V411),(V412),VV[10],(V413),VV[11],V418,VV[13],(V414),VV[14],(V415),VV[15],(V416),VV[16],(V417)));
	VMR27(V419)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function NSUBSTITUTE-IF-NOT	*/

static object LI28(V422,V421,V420,va_alist)
	object V422,V421,V420;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB28 VMS28 VMV28
	{object V423;
	object V424;
	object V425;
	object V426;
	object V427;
	object V428;
	object V429;
	object V430;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <3) too_few_arguments();
	V423= V422;
	V424= V421;
	V425= V420;
	narg= narg - 3;
	{
	parse_key_new(narg,Vcs +3,(struct key *)&LI28key,ap);
	V426=(Vcs[3]);
	V427=(Vcs[4]);
	V428=(Vcs[5]);
	V429=(Vcs[6]);
	if(Vcs[7]==0){
	V430= symbol_function(VV[33]);
	}else{
	V430=(Vcs[7]);}
	V431= symbol_function(VV[44]);
	{object V432 = (VFUN_NARGS=15,(*(LnkLI50))((V423),(V424),(V425),VV[10],(V426),VV[12],V431,VV[13],(V427),VV[14],(V428),VV[15],(V429),VV[16],(V430)));
	VMR28(V432)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function FIND	*/

static object LI29(V434,V433,va_alist)
	object V434,V433;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB29 VMS29 VMV29
	{register object V435;
	register object V436;
	object V437;
	register object V438;
	register object V439;
	object V440;
	object V441;
	register object V442;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V435= V434;
	V436= V433;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI29key,ap);
	V437=(Vcs[2]);
	V438=(Vcs[3]);
	V439=(Vcs[4]);
	V440=(Vcs[5]);
	V441=(Vcs[6]);
	if(Vcs[7]==0){
	V442= symbol_function(VV[33]);
	}else{
	V442=(Vcs[7]);}
	{long V443;
	if(((V440))==Cnil){
	goto T661;}
	V443= (long)(*(LnkLI34))((V440));
	goto T659;
goto T661;
T661:;
	V443= 0;
goto T659;
T659:;
	{long V444;
	V444= (long)(*(LnkLI35))((V441),(V436));
	if(!((V443)<=(V444))){
	goto T665;}
	goto T664;
goto T665;
T665:;
	V445 = make_fixnum(V443);
	V446 = make_fixnum(V444);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V445,V446)));
goto T664;
T664:;
	if((V438)==Cnil){
	goto T667;}
	if((V439)==Cnil){
	goto T667;}
	(void)((*(LnkLI40))());
goto T667;
T667:;
	if(((V437))!=Cnil){
	goto T669;}
	{register long V447;
	V447= V443;
goto T673;
T673:;
	if(!((V447)>=(V444))){
	goto T674;}
	{object V448 = Cnil;
	VMR29(V448)}
goto T674;
T674:;
	base[0]= elt((V436),V447);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V442));
	vs_top=sup;
	V449= vs_base[0];
	if(((*(LnkLI41))((V438),(V439),(V435),V449))==Cnil){
	goto T678;}
	{object V450 = elt((V436),V447);
	VMR29(V450)}
goto T678;
T678:;
	V447= (long)(1)+(V447);
	goto T673;}
goto T669;
T669:;
	{register long V451;
	V451= (long)(-1)+(V444);
goto T688;
T688:;
	if(!((V451)<(V443))){
	goto T689;}
	{object V452 = Cnil;
	VMR29(V452)}
goto T689;
T689:;
	base[0]= elt((V436),V451);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V442));
	vs_top=sup;
	V453= vs_base[0];
	if(((*(LnkLI41))((V438),(V439),(V435),V453))==Cnil){
	goto T693;}
	{object V454 = elt((V436),V451);
	VMR29(V454)}
goto T693;
T693:;
	V451= (long)(-1)+(V451);
	goto T688;}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function FIND-IF	*/

static object LI30(V456,V455,va_alist)
	object V456,V455;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB30 VMS30 VMV30
	{object V457;
	object V458;
	object V459;
	object V460;
	object V461;
	object V462;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V457= V456;
	V458= V455;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI30key,ap);
	V459=(Vcs[2]);
	V460=(Vcs[3]);
	V461=(Vcs[4]);
	if(Vcs[5]==0){
	V462= symbol_function(VV[33]);
	}else{
	V462=(Vcs[5]);}
	V463= symbol_function(VV[44]);
	{object V464 = (VFUN_NARGS=12,(*(LnkLI51))((V457),(V458),VV[10],(V459),VV[11],V463,VV[13],(V460),VV[14],(V461),VV[16],(V462)));
	VMR30(V464)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function FIND-IF-NOT	*/

static object LI31(V466,V465,va_alist)
	object V466,V465;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB31 VMS31 VMV31
	{object V467;
	object V468;
	object V469;
	object V470;
	object V471;
	object V472;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V467= V466;
	V468= V465;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI31key,ap);
	V469=(Vcs[2]);
	V470=(Vcs[3]);
	V471=(Vcs[4]);
	if(Vcs[5]==0){
	V472= symbol_function(VV[33]);
	}else{
	V472=(Vcs[5]);}
	V473= symbol_function(VV[44]);
	{object V474 = (VFUN_NARGS=12,(*(LnkLI51))((V467),(V468),VV[10],(V469),VV[12],V473,VV[13],(V470),VV[14],(V471),VV[16],(V472)));
	VMR31(V474)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function POSITION	*/

static object LI32(V476,V475,va_alist)
	object V476,V475;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB32 VMS32 VMV32
	{register object V477;
	register object V478;
	object V479;
	register object V480;
	register object V481;
	object V482;
	object V483;
	register object V484;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V477= V476;
	V478= V475;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI32key,ap);
	V479=(Vcs[2]);
	V480=(Vcs[3]);
	V481=(Vcs[4]);
	V482=(Vcs[5]);
	V483=(Vcs[6]);
	if(Vcs[7]==0){
	V484= symbol_function(VV[33]);
	}else{
	V484=(Vcs[7]);}
	{long V485;
	if(((V482))==Cnil){
	goto T708;}
	V485= (long)(*(LnkLI34))((V482));
	goto T706;
goto T708;
T708:;
	V485= 0;
goto T706;
T706:;
	{long V486;
	V486= (long)(*(LnkLI35))((V483),(V478));
	if(!((V485)<=(V486))){
	goto T712;}
	goto T711;
goto T712;
T712:;
	V487 = make_fixnum(V485);
	V488 = make_fixnum(V486);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V487,V488)));
goto T711;
T711:;
	if((V480)==Cnil){
	goto T714;}
	if((V481)==Cnil){
	goto T714;}
	(void)((*(LnkLI40))());
goto T714;
T714:;
	if(((V479))!=Cnil){
	goto T716;}
	{register long V489;
	V489= V485;
goto T720;
T720:;
	if(!((V489)>=(V486))){
	goto T721;}
	{object V490 = Cnil;
	VMR32(V490)}
goto T721;
T721:;
	base[0]= elt((V478),V489);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V484));
	vs_top=sup;
	V491= vs_base[0];
	if(((*(LnkLI41))((V480),(V481),(V477),V491))==Cnil){
	goto T725;}
	{object V492 = make_fixnum(V489);
	VMR32(V492)}
goto T725;
T725:;
	V489= (long)(1)+(V489);
	goto T720;}
goto T716;
T716:;
	{register long V493;
	V493= (long)(-1)+(V486);
goto T735;
T735:;
	if(!((V493)<(V485))){
	goto T736;}
	{object V494 = Cnil;
	VMR32(V494)}
goto T736;
T736:;
	base[0]= elt((V478),V493);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V484));
	vs_top=sup;
	V495= vs_base[0];
	if(((*(LnkLI41))((V480),(V481),(V477),V495))==Cnil){
	goto T740;}
	{object V496 = make_fixnum(V493);
	VMR32(V496)}
goto T740;
T740:;
	V493= (long)(-1)+(V493);
	goto T735;}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function POSITION-IF	*/

static object LI33(V498,V497,va_alist)
	object V498,V497;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB33 VMS33 VMV33
	{object V499;
	object V500;
	object V501;
	object V502;
	object V503;
	object V504;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V499= V498;
	V500= V497;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI33key,ap);
	V501=(Vcs[2]);
	V502=(Vcs[3]);
	V503=(Vcs[4]);
	if(Vcs[5]==0){
	V504= symbol_function(VV[33]);
	}else{
	V504=(Vcs[5]);}
	V505= symbol_function(VV[44]);
	{object V506 = (VFUN_NARGS=12,(*(LnkLI52))((V499),(V500),VV[10],(V501),VV[11],V505,VV[13],(V502),VV[14],(V503),VV[16],(V504)));
	VMR33(V506)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function POSITION-IF-NOT	*/

static object LI34(V508,V507,va_alist)
	object V508,V507;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB34 VMS34 VMV34
	{object V509;
	object V510;
	object V511;
	object V512;
	object V513;
	object V514;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V509= V508;
	V510= V507;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI34key,ap);
	V511=(Vcs[2]);
	V512=(Vcs[3]);
	V513=(Vcs[4]);
	if(Vcs[5]==0){
	V514= symbol_function(VV[33]);
	}else{
	V514=(Vcs[5]);}
	V515= symbol_function(VV[44]);
	{object V516 = (VFUN_NARGS=12,(*(LnkLI52))((V509),(V510),VV[10],(V511),VV[12],V515,VV[13],(V512),VV[14],(V513),VV[16],(V514)));
	VMR34(V516)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function REMOVE-DUPLICATES	*/

static object LI35(V517,va_alist)
	object V517;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB35 VMS35 VMV35
	{register object V518;
	object V519;
	register object V520;
	register object V521;
	object V522;
	object V523;
	register object V524;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V518= V517;
	narg= narg - 1;
	{
	parse_key_new(narg,Vcs +1,(struct key *)&LI35key,ap);
	V519=(Vcs[1]);
	V520=(Vcs[2]);
	V521=(Vcs[3]);
	V522=(Vcs[4]);
	V523=(Vcs[5]);
	if(Vcs[6]==0){
	V524= symbol_function(VV[33]);
	}else{
	V524=(Vcs[6]);}
	if((V520)==Cnil){
	goto T753;}
	if((V521)==Cnil){
	goto T753;}
	(void)((*(LnkLI40))());
goto T753;
T753:;
	if(!(type_of((V518))==t_cons||((V518))==Cnil)){
	goto T754;}
	if(((V519))!=Cnil){
	goto T754;}
	if(((V522))!=Cnil){
	goto T754;}
	if(((V523))!=Cnil){
	goto T754;}
	if(!(endp((V518)))){
	goto T763;}
	{object V525 = Cnil;
	VMR35(V525)}
goto T763;
T763:;
	{register object V526;
	register object V527;
	V526= (V518);
	V527= Cnil;
goto T767;
T767:;
	if(!(endp(cdr((V526))))){
	goto T768;}
	base[0]= (V527);
	base[1]= (V526);
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	{object V528 = vs_base[0];
	VMR35(V528)}
goto T768;
T768:;
	base[0]= car((V526));
	base[1]= cdr((V526));
	base[2]= VV[11];
	base[3]= (V520);
	base[4]= VV[12];
	base[5]= (V521);
	base[6]= VV[16];
	base[7]= (V524);
	vs_top=(vs_base=base+0)+8;
	(void) (*Lnk53)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T774;}
	V527= make_cons(car((V526)),(V527));
goto T774;
T774:;
	V526= cdr((V526));
	goto T767;}
goto T754;
T754:;
	{object V529 = (VFUN_NARGS=13,(*(LnkLI54))((V518),VV[10],(V519),VV[11],(V520),VV[12],(V521),VV[13],(V522),VV[14],(V523),VV[16],(V524)));
	VMR35(V529)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function DELETE-DUPLICATES	*/

static object LI36(V530,va_alist)
	object V530;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB36 VMS36 VMV36
	{register object V531;
	object V532;
	object V533;
	object V534;
	object V535;
	object V536;
	register object V537;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V531= V530;
	narg= narg - 1;
	{
	parse_key_new(narg,Vcs +1,(struct key *)&LI36key,ap);
	V532=(Vcs[1]);
	V533=(Vcs[2]);
	V534=(Vcs[3]);
	V535=(Vcs[4]);
	V536=(Vcs[5]);
	if(Vcs[6]==0){
	V537= symbol_function(VV[33]);
	}else{
	V537=(Vcs[6]);}
	{long V538;
	V538= (long)length((V531));
	if((V533)==Cnil){
	goto T791;}
	if((V534)==Cnil){
	goto T791;}
	(void)((*(LnkLI40))());
goto T791;
T791:;
	if(!(type_of((V531))==t_cons||((V531))==Cnil)){
	goto T792;}
	if(((V532))!=Cnil){
	goto T792;}
	if(((V535))!=Cnil){
	goto T792;}
	if(((V536))!=Cnil){
	goto T792;}
	if(!(endp((V531)))){
	goto T801;}
	{object V539 = Cnil;
	VMR36(V539)}
goto T801;
T801:;
	{register object V540;
	V540= (V531);
goto T805;
T805:;
	if(!(endp(cdr((V540))))){
	goto T806;}
	{object V541 = (V531);
	VMR36(V541)}
goto T806;
T806:;
	base[0]= car((V540));
	base[1]= cdr((V540));
	base[2]= VV[11];
	base[3]= (V533);
	base[4]= VV[12];
	base[5]= (V534);
	base[6]= VV[16];
	base[7]= (V537);
	vs_top=(vs_base=base+0)+8;
	(void) (*Lnk53)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T812;}
	if(type_of((V540))!=t_cons)FEwrong_type_argument(Scons,(V540));
	((V540))->c.c_car = cadr((V540));
	if(type_of((V540))!=t_cons)FEwrong_type_argument(Scons,(V540));
	((V540))->c.c_cdr = cddr((V540));
	goto T810;
goto T812;
T812:;
	V540= cdr((V540));
goto T810;
T810:;
	goto T805;}
goto T792;
T792:;
	{register long V542;
	if(((V535))==Cnil){
	goto T828;}
	V542= (long)(*(LnkLI34))((V535));
	goto T826;
goto T828;
T828:;
	V542= 0;
goto T826;
T826:;
	{register long V543;
	V543= (long)(*(LnkLI35))((V536),(V531));
	if(!((V542)<=(V543))){
	goto T832;}
	goto T831;
goto T832;
T832:;
	V544 = make_fixnum(V542);
	V545 = make_fixnum(V543);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V544,V545)));
goto T831;
T831:;
	if(((V532))!=Cnil){
	goto T835;}
	{long V546;
	long V547;
	V546= 0;
	V547= V542;
goto T840;
T840:;
	if(!((V547)>=(V543))){
	goto T841;}
	{object V548;
	register long V549;
	long V550;
	V551= (*(LnkLI47))((V531));
	V552 = make_fixnum((long)(V538)-(V546));
	V548= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V551,V552));
	V549= 0;
	V550= 0;
goto T848;
T848:;
	if(!((V549)>=(V538))){
	goto T849;}
	{object V553 = (V548);
	VMR36(V553)}
goto T849;
T849:;
	{object V554;
	if((V542)<=(V549)){
	goto T855;}
	V554= Cnil;
	goto T854;
goto T855;
T855:;
	if((V549)<(V543)){
	goto T857;}
	V554= Cnil;
	goto T854;
goto T857;
T857:;
	base[0]= elt((V531),V549);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V537));
	vs_top=sup;
	V555= vs_base[0];
	V556 = make_fixnum((long)(1)+(V549));
	V557 = make_fixnum(V543);
	V554= (VFUN_NARGS=12,(*(LnkLI52))(V555,(V531),VV[11],(V533),VV[12],(V534),VV[13],V556,VV[14],V557,VV[16],(V537)));
goto T854;
T854:;
	if(((V554))==Cnil){
	goto T862;}
	goto T853;
goto T862;
T862:;
	V558= elt((V531),V549);
	(void)(elt_set((V548),V550,/* INLINE-ARGS */V558));
	V550= (long)(1)+(V550);}
goto T853;
T853:;
	V549= (long)(1)+(V549);
	goto T848;}
goto T841;
T841:;
	base[0]= elt((V531),V547);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V537));
	vs_top=sup;
	V559= vs_base[0];
	V560 = make_fixnum((long)(1)+(V547));
	V561 = make_fixnum(V543);
	if(((VFUN_NARGS=12,(*(LnkLI52))(V559,(V531),VV[11],(V533),VV[12],(V534),VV[13],V560,VV[14],V561,VV[16],(V537))))==Cnil){
	goto T870;}
	V546= (long)(1)+(V546);
goto T870;
T870:;
	V547= (long)(1)+(V547);
	goto T840;}
goto T835;
T835:;
	{long V562;
	long V563;
	V562= 0;
	V563= (long)(-1)+(V543);
goto T882;
T882:;
	if(!((V563)<(V542))){
	goto T883;}
	{object V564;
	register long V565;
	long V566;
	V567= (*(LnkLI47))((V531));
	V568 = make_fixnum((long)(V538)-(V562));
	V564= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V567,V568));
	V565= (long)(-1)+(V538);
	V566= (long)((long)(-1)+(V538))-(V562);
goto T890;
T890:;
	if(!((V565)<(0))){
	goto T891;}
	{object V569 = (V564);
	VMR36(V569)}
goto T891;
T891:;
	{object V570;
	if((V542)<=(V565)){
	goto T897;}
	V570= Cnil;
	goto T896;
goto T897;
T897:;
	if((V565)<(V543)){
	goto T899;}
	V570= Cnil;
	goto T896;
goto T899;
T899:;
	base[0]= elt((V531),V565);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V537));
	vs_top=sup;
	V571= vs_base[0];
	V572 = make_fixnum(V542);
	V573 = make_fixnum(V565);
	V570= (VFUN_NARGS=14,(*(LnkLI52))(V571,(V531),VV[10],Ct,VV[11],(V533),VV[12],(V534),VV[13],V572,VV[14],V573,VV[16],(V537)));
goto T896;
T896:;
	if(((V570))==Cnil){
	goto T904;}
	goto T895;
goto T904;
T904:;
	V574= elt((V531),V565);
	(void)(elt_set((V564),V566,/* INLINE-ARGS */V574));
	V566= (long)(-1)+(V566);}
goto T895;
T895:;
	V565= (long)(-1)+(V565);
	goto T890;}
goto T883;
T883:;
	base[0]= elt((V531),V563);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V537));
	vs_top=sup;
	V575= vs_base[0];
	V576 = make_fixnum(V542);
	V577 = make_fixnum(V563);
	if(((VFUN_NARGS=14,(*(LnkLI52))(V575,(V531),VV[10],Ct,VV[11],(V533),VV[12],(V534),VV[13],V576,VV[14],V577,VV[16],(V537))))==Cnil){
	goto T912;}
	V562= (long)(1)+(V562);
goto T912;
T912:;
	V563= (long)(-1)+(V563);
	goto T882;}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function MISMATCH	*/

static object LI37(V579,V578,va_alist)
	object V579,V578;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB37 VMS37 VMV37
	{object V580;
	object V581;
	object V582;
	object V583;
	object V584;
	register object V585;
	object V586;
	object V587;
	object V588;
	object V589;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V580= V579;
	V581= V578;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI37key,ap);
	V582=(Vcs[2]);
	V583=(Vcs[3]);
	V584=(Vcs[4]);
	if(Vcs[5]==0){
	V585= symbol_function(VV[33]);
	}else{
	V585=(Vcs[5]);}
	V586=(Vcs[6]);
	V587=(Vcs[7]);
	V588=(Vcs[8]);
	V589=(Vcs[9]);
	if((V583)==Cnil){
	goto T922;}
	if((V584)==Cnil){
	goto T922;}
	(void)((*(LnkLI40))());
goto T922;
T922:;
	{register long V590;
	if(((V586))==Cnil){
	goto T925;}
	V590= (long)(*(LnkLI34))((V586));
	goto T923;
goto T925;
T925:;
	V590= 0;
goto T923;
T923:;
	{register long V591;
	V591= (long)(*(LnkLI35))((V588),(V580));
	if(!((V590)<=(V591))){
	goto T929;}
	goto T928;
goto T929;
T929:;
	V592 = make_fixnum(V590);
	V593 = make_fixnum(V591);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V592,V593)));
goto T928;
T928:;
	{register long V594;
	if(((V587))==Cnil){
	goto T933;}
	V594= (long)(*(LnkLI34))((V587));
	goto T931;
goto T933;
T933:;
	V594= 0;
goto T931;
T931:;
	{register long V595;
	V595= (long)(*(LnkLI35))((V589),(V581));
	if(!((V594)<=(V595))){
	goto T937;}
	goto T936;
goto T937;
T937:;
	V596 = make_fixnum(V594);
	V597 = make_fixnum(V595);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V596,V597)));
goto T936;
T936:;
	if(((V582))!=Cnil){
	goto T940;}
	{register long V598;
	register long V599;
	V598= V590;
	V599= V594;
goto T945;
T945:;
	if((V598)>=(V591)){
	goto T947;}
	if(!((V599)>=(V595))){
	goto T946;}
goto T947;
T947:;
	if(!((V598)>=(V591))){
	goto T952;}
	if(!((V599)>=(V595))){
	goto T952;}
	{object V600 = Cnil;
	VMR37(V600)}
goto T952;
T952:;
	{object V601 = make_fixnum(V598);
	VMR37(V601)}
goto T946;
T946:;
	base[0]= elt((V580),V598);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V585));
	vs_top=sup;
	V602= vs_base[0];
	base[0]= elt((V581),V599);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V585));
	vs_top=sup;
	V603= vs_base[0];
	if(((*(LnkLI41))((V583),(V584),V602,V603))!=Cnil){
	goto T957;}
	{object V604 = make_fixnum(V598);
	VMR37(V604)}
goto T957;
T957:;
	V598= (long)(1)+(V598);
	V599= (long)(1)+(V599);
	goto T945;}
goto T940;
T940:;
	{register long V605;
	register long V606;
	V605= (long)(-1)+(V591);
	V606= (long)(-1)+(V595);
goto T971;
T971:;
	if((V605)<(V590)){
	goto T973;}
	if(!((V606)<(V594))){
	goto T972;}
goto T973;
T973:;
	if(!((V605)<(V590))){
	goto T978;}
	if(!((V606)<(V594))){
	goto T978;}
	{object V607 = Cnil;
	VMR37(V607)}
goto T978;
T978:;
	{object V608 = make_fixnum((long)(1)+(V605));
	VMR37(V608)}
goto T972;
T972:;
	base[0]= elt((V580),V605);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V585));
	vs_top=sup;
	V609= vs_base[0];
	base[0]= elt((V581),V606);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V585));
	vs_top=sup;
	V610= vs_base[0];
	if(((*(LnkLI41))((V583),(V584),V609,V610))!=Cnil){
	goto T983;}
	{object V611 = make_fixnum((long)(1)+(V605));
	VMR37(V611)}
goto T983;
T983:;
	V605= (long)(-1)+(V605);
	V606= (long)(-1)+(V606);
	goto T971;}}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function SEARCH	*/

static object LI38(V613,V612,va_alist)
	object V613,V612;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB38 VMS38 VMV38
	{object V614;
	object V615;
	object V616;
	object V617;
	object V618;
	register object V619;
	object V620;
	object V621;
	object V622;
	object V623;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V614= V613;
	V615= V612;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI38key,ap);
	V616=(Vcs[2]);
	V617=(Vcs[3]);
	V618=(Vcs[4]);
	if(Vcs[5]==0){
	V619= symbol_function(VV[33]);
	}else{
	V619=(Vcs[5]);}
	V620=(Vcs[6]);
	V621=(Vcs[7]);
	V622=(Vcs[8]);
	V623=(Vcs[9]);
	if((V617)==Cnil){
	goto T995;}
	if((V618)==Cnil){
	goto T995;}
	(void)((*(LnkLI40))());
goto T995;
T995:;
	{long V624;
	if(((V620))==Cnil){
	goto T998;}
	V624= (long)(*(LnkLI34))((V620));
	goto T996;
goto T998;
T998:;
	V624= 0;
goto T996;
T996:;
	{long V625;
	V625= (long)(*(LnkLI35))((V622),(V614));
	if(!((V624)<=(V625))){
	goto T1002;}
	goto T1001;
goto T1002;
T1002:;
	V626 = make_fixnum(V624);
	V627 = make_fixnum(V625);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V626,V627)));
goto T1001;
T1001:;
	{register long V628;
	if(((V621))==Cnil){
	goto T1006;}
	V628= (long)(*(LnkLI34))((V621));
	goto T1004;
goto T1006;
T1006:;
	V628= 0;
goto T1004;
T1004:;
	{long V629;
	V629= (long)(*(LnkLI35))((V623),(V615));
	if(!((V628)<=(V629))){
	goto T1010;}
	goto T1009;
goto T1010;
T1010:;
	V630 = make_fixnum(V628);
	V631 = make_fixnum(V629);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V630,V631)));
goto T1009;
T1009:;
	if(((V616))!=Cnil){
	goto T1013;}
goto T1016;
T1016:;
	{register long V632;
	register long V633;
	V632= V624;
	V633= V628;
goto T1022;
T1022:;
	if(!((V632)>=(V625))){
	goto T1023;}
	{object V634 = make_fixnum(V628);
	VMR38(V634)}
goto T1023;
T1023:;
	if(!((V633)>=(V629))){
	goto T1027;}
	{object V635 = Cnil;
	VMR38(V635)}
goto T1027;
T1027:;
	base[0]= elt((V614),V632);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V619));
	vs_top=sup;
	V636= vs_base[0];
	base[0]= elt((V615),V633);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V619));
	vs_top=sup;
	V637= vs_base[0];
	if(((*(LnkLI41))((V617),(V618),V636,V637))!=Cnil){
	goto T1030;}
	goto T1018;
goto T1030;
T1030:;
	V632= (long)(1)+(V632);
	V633= (long)(1)+(V633);
	goto T1022;}
goto T1018;
T1018:;
	V628= (long)(1)+(V628);
	goto T1016;
goto T1013;
T1013:;
goto T1044;
T1044:;
	{register long V638;
	register long V639;
	V638= (long)(-1)+(V625);
	V639= (long)(-1)+(V629);
goto T1050;
T1050:;
	if(!((V638)<(V624))){
	goto T1051;}
	{object V640 = make_fixnum((long)(1)+(V639));
	VMR38(V640)}
goto T1051;
T1051:;
	if(!((V639)<(V628))){
	goto T1055;}
	{object V641 = Cnil;
	VMR38(V641)}
goto T1055;
T1055:;
	base[0]= elt((V614),V638);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V619));
	vs_top=sup;
	V642= vs_base[0];
	base[0]= elt((V615),V639);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V619));
	vs_top=sup;
	V643= vs_base[0];
	if(((*(LnkLI41))((V617),(V618),V642,V643))!=Cnil){
	goto T1058;}
	goto T1046;
goto T1058;
T1058:;
	V638= (long)(-1)+(V638);
	V639= (long)(-1)+(V639);
	goto T1050;}
goto T1046;
T1046:;
	V629= (long)(-1)+(V629);
	goto T1044;}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for SORT	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_reserve(VM39);
	{register object V644;
	object V645;
	object V646;
	if(vs_top-vs_base<2) too_few_arguments();
	parse_key(vs_base+2,FALSE,FALSE,1,VV[16]);
	V644=(base[0]);
	V645=(base[1]);
	vs_top=sup;
	if(base[3]==Cnil){
	V646= symbol_function(VV[33]);
	}else{
	V646=(base[2]);}
	if(!(type_of((V644))==t_cons||((V644))==Cnil)){
	goto T1073;}
	base[4]= (V644);
	base[5]= (V645);
	base[6]= (V646);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk55)();
	return;
goto T1073;
T1073:;
	base[4]= (*(LnkLI56))((V644),0,(long)length((V644)),(V645),(V646));
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	function definition for LIST-MERGE-SORT	*/

static void L40()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_reserve(VM40);
	{object V647;
	check_arg(3);
	V647=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	base[3]= (V647);
	vs_top=(vs_base=base+3)+1;
	L41(base);
	return;
	}
}
/*	local entry for function QUICK-SORT	*/

static object LI42(V653,V654,V655,V656,V657)

register object V653;long V654;long V655;register object V656;register object V657;
{	 VMB41 VMS41 VMV41
goto TTL;
TTL:;
	if(!((V655)<=((long)(1)+(V654)))){
	goto T1080;}
	{object V658 = (V653);
	VMR41(V658)}
goto T1080;
T1080:;
	{register long V659;
	register long V660;
	object V661;
	register object V662;
	V659= V654;
	V660= V655;
	V661= elt((V653),V654);
	V662= (
	(type_of((V657)) == t_sfun ?(*(((V657))->sfn.sfn_self)):
	(fcall.fun=((V657)),fcall.argd=1,fcalln))((V661)));
goto T1088;
T1088:;
goto T1092;
T1092:;
	V660= (long)(-1)+(V660);
	if((V659)<(V660)){
	goto T1096;}
	goto T1086;
goto T1096;
T1096:;
	base[3]= elt((V653),V660);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event((V657));
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V662);
	vs_top=(vs_base=base+2)+2;
	super_funcall_no_event((V656));
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1093;}
	goto T1090;
goto T1093;
T1093:;
	goto T1092;
goto T1090;
T1090:;
goto T1107;
T1107:;
	V659= (long)(1)+(V659);
	if((V659)<(V660)){
	goto T1111;}
	goto T1086;
goto T1111;
T1111:;
	base[3]= elt((V653),V659);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event((V657));
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V662);
	vs_top=(vs_base=base+2)+2;
	super_funcall_no_event((V656));
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1108;}
	goto T1105;
goto T1108;
T1108:;
	goto T1107;
goto T1105;
T1105:;
	{object V663;
	V663= elt((V653),V659);
	V664= elt((V653),V660);
	(void)(elt_set((V653),V659,/* INLINE-ARGS */V664));
	(void)(elt_set((V653),V660,(V663)));}
	goto T1088;
goto T1086;
T1086:;
	V665= elt((V653),V659);
	(void)(elt_set((V653),V654,/* INLINE-ARGS */V665));
	(void)(elt_set((V653),V659,(V661)));
	(void)((*(LnkLI56))((V653),V654,V659,(V656),(V657)));
	V654= (long)(1)+(V659);
	goto TTL;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for STABLE-SORT	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_reserve(VM42);
	{register object V666;
	object V667;
	object V668;
	if(vs_top-vs_base<2) too_few_arguments();
	parse_key(vs_base+2,FALSE,FALSE,1,VV[16]);
	V666=(base[0]);
	V667=(base[1]);
	vs_top=sup;
	if(base[3]==Cnil){
	V668= symbol_function(VV[33]);
	}else{
	V668=(base[2]);}
	if(!(type_of((V666))==t_cons||((V666))==Cnil)){
	goto T1134;}
	base[4]= (V666);
	base[5]= (V667);
	base[6]= (V668);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk55)();
	return;
goto T1134;
T1134:;
	if(type_of((V666))==t_string){
	goto T1139;}
	if(!((type_of((V666))==t_bitvector))){
	goto T1140;}
goto T1139;
T1139:;
	base[4]= (V666);
	base[5]= (V667);
	base[6]= VV[16];
	base[7]= (V668);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk57)();
	return;
goto T1140;
T1140:;
	base[4]= (*(LnkLI58))((V666),VV[0]);
	base[5]= (V667);
	base[6]= (V668);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk55)();
	vs_top=sup;
	V669= vs_base[0];
	V670= (*(LnkLI47))((V666));
	base[4]= (*(LnkLI58))(V669,/* INLINE-ARGS */V670);
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	local entry for function MERGE	*/

static object LI44(V674,V673,V672,V671,va_alist)
	object V674,V673,V672,V671;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB43 VMS43 VMV43
	{object V675;
	register object V676;
	object V677;
	object V678;
	register object V679;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <4) too_few_arguments();
	V675= V674;
	V676= V673;
	V677= V672;
	V678= V671;
	narg= narg - 4;
	{
	parse_key_new(narg,Vcs +4,(struct key *)&LI44key,ap);
	if(Vcs[4]==0){
	V679= symbol_function(VV[33]);
	}else{
	V679=(Vcs[4]);}
	{long V680;
	long V681;
	V680= (long)length((V676));
	V681= (long)length((V677));
	if(!(equal((V679),Cnil))){
	goto T1155;}
	V679= symbol_function(VV[33]);
goto T1155;
T1155:;
	{register object V682;
	register long V683;
	register long V684;
	register long V685;
	V686 = make_fixnum((long)(V680)+(V681));
	V682= (VFUN_NARGS=2,(*(LnkLI46))((V675),V686));
	V683= 0;
	V684= 0;
	V685= 0;
goto T1164;
T1164:;
	if(!((V684)==(V680))){
	goto T1165;}
	if(!((V685)==(V681))){
	goto T1165;}
	{object V687 = (V682);
	VMR43(V687)}
goto T1165;
T1165:;
	if(!((V684)<(V680))){
	goto T1173;}
	if(!((V685)<(V681))){
	goto T1173;}
	base[1]= elt((V676),V684);
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event((V679));
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= elt((V677),V685);
	vs_top=(vs_base=base+2)+1;
	super_funcall_no_event((V679));
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	super_funcall_no_event((V678));
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1178;}
	V688= elt((V676),V684);
	(void)(elt_set((V682),V683,/* INLINE-ARGS */V688));
	V684= (long)(1)+(V684);
	goto T1171;
goto T1178;
T1178:;
	base[1]= elt((V677),V685);
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event((V679));
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= elt((V676),V684);
	vs_top=(vs_base=base+2)+1;
	super_funcall_no_event((V679));
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	super_funcall_no_event((V678));
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1187;}
	V689= elt((V677),V685);
	(void)(elt_set((V682),V683,/* INLINE-ARGS */V689));
	V685= (long)(1)+(V685);
	goto T1171;
goto T1187;
T1187:;
	V690= elt((V676),V684);
	(void)(elt_set((V682),V683,/* INLINE-ARGS */V690));
	V684= (long)(1)+(V684);
	goto T1171;
goto T1173;
T1173:;
	if(!((V684)<(V680))){
	goto T1198;}
	V691= elt((V676),V684);
	(void)(elt_set((V682),V683,/* INLINE-ARGS */V691));
	V684= (long)(1)+(V684);
	goto T1171;
goto T1198;
T1198:;
	V692= elt((V677),V685);
	(void)(elt_set((V682),V683,/* INLINE-ARGS */V692));
	V685= (long)(1)+(V685);
goto T1171;
T1171:;
	V683= (long)(1)+(V683);
	goto T1164;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for MAP-INTO	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_reserve(VM44);
	{register object V693;
	register object V694;
	register object V695;
	if(vs_top-vs_base<2) too_few_arguments();
	V693=(base[0]);
	V694=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V695=(base[2]);
	vs_top=sup;
	{object V696;
	base[4]= (V693);
	vs_top=(vs_base=base+4)+1;
	Ltype_of();
	vs_top=sup;
	V698= vs_base[0];
	if(!((VV[17])==(V698))){
	goto T1210;}
	base[4]= (V693);
	base[5]= small_fixnum(0);
	vs_top=(vs_base=base+4)+2;
	Larray_dimension();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T1208;
goto T1210;
T1210:;
	base[3]= make_fixnum((long)length((V693)));
goto T1208;
T1208:;
	{object V697;
	{object V699;
	object V700= (V695);
	if(endp(V700)){
	V697= Cnil;
	goto T1216;}
	base[4]=V699=MMcons(Cnil,Cnil);
goto T1217;
T1217:;
	base[5]= (V700->c.c_car);
	vs_top=(vs_base=base+5)+1;
	Llength();
	vs_top=sup;
	(V699->c.c_car)= vs_base[0];
	if(endp(V700=MMcdr(V700))){
	V697= base[4];
	goto T1216;}
	V699=MMcdr(V699)=MMcons(Cnil,Cnil);
	goto T1217;}
goto T1216;
T1216:;
	 vs_top=base+4;
	 while(!endp(V697))
	 {vs_push(car(V697));V697=cdr(V697);}
	vs_base=base+3;}
	Lmin();
	vs_top=sup;
	V696= vs_base[0];
	base[3]= (V693);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V701= vs_base[0];
	if(!((VV[17])==(V701))){
	goto T1220;}
	base[3]= (V693);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk59)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1220;}
	base[3]= (V693);
	base[4]= (V696);
	vs_top=(vs_base=base+3)+2;
	siLfill_pointer_set();
	vs_top=sup;
goto T1220;
T1220:;
	{register object V702;
	register object V703;
	V702= (V696);
	V703= small_fixnum(0);
goto T1233;
T1233:;
	if(!(number_compare((V703),(V702))>=0)){
	goto T1234;}
	base[3]= (V693);
	vs_top=(vs_base=base+3)+1;
	return;
goto T1234;
T1234:;
	base[3]= (V694);
	{object V705;
	{object V706;
	object V707= (V695);
	if(endp(V707)){
	V705= Cnil;
	goto T1241;}
	base[4]=V706=MMcons(Cnil,Cnil);
goto T1242;
T1242:;
	{register object V708;
	V708= (V707->c.c_car);
	(V706->c.c_car)= elt((V708),fixint((V703)));}
	if(endp(V707=MMcdr(V707))){
	V705= base[4];
	goto T1241;}
	V706=MMcdr(V706)=MMcons(Cnil,Cnil);
	goto T1242;}
goto T1241;
T1241:;
	 vs_top=base+4;
	 while(!endp(V705))
	 {vs_push(car(V705));V705=cdr(V705);}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	vs_top=sup;
	V704= vs_base[0];
	(void)(elt_set((V693),fixint((V703)),V704));
	V703= one_plus((V703));
	goto T1233;}}
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
	base[5]= VV[18];
	vs_top=(vs_base=base+5)+1;
	Lgensym();
	vs_top=sup;
	V712= vs_base[0];
	V713= list(2,(V711),base[3]);
	V714= list(2,/* INLINE-ARGS */V713,list(2,(V712),small_fixnum(0)));
	V715= list(2,VV[24],(V711));
	V716= list(4,VV[0],VV[23],/* INLINE-ARGS */V715,list(2,VV[24],(V712)));
	V717= list(3,base[2],Cnil,list(5,VV[0],VV[21],VV[22],/* INLINE-ARGS */V716,list(4,VV[0],VV[25],list(4,VV[0],VV[26],list(4,VV[0],VV[27],list(2,VV[24],(V712)),VV[28]),VV[29]),VV[30])));
	base[5]= list(3,VV[19],/* INLINE-ARGS */V714,listA(3,VV[20],make_cons(/* INLINE-ARGS */V717,Cnil),base[4]));
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
	goto T1259;}
	base[1]= (V718);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1259;
T1259:;
	if(!((V719)==(2))){
	goto T1257;}
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
	goto T1268;}
	base[1]= (V718);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1268;
T1268:;
	base[1]= (V725);
	base[2]= (V724);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1273;}
	base[1]= nreverse((V718));
	vs_top=(vs_base=base+1)+1;
	return;
goto T1273;
T1273:;
	base[1]= (V718);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1257;
T1257:;
	V719= (long)(V719>=0&&(2)>0?(V719)/(2):ifloor(V719,2));
	{long V726;
	register object V727;
	V726= 1;
	V727= (V718);
goto T1282;
T1282:;
	if(!((V726)>=(V719))){
	goto T1283;}
	V720= (V718);
	V721= cdr((V727));
	if(type_of((V727))!=t_cons)FEwrong_type_argument(Scons,(V727));
	((V727))->c.c_cdr = Cnil;
	goto T1279;
goto T1283;
T1283:;
	V726= (long)(1)+(V726);
	V727= cdr((V727));
	goto T1282;}
goto T1279;
T1279:;
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
	if(!(endp((V720)))){
	goto T1303;}
	base[1]= (V721);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1303;
T1303:;
	if(!(endp((V721)))){
	goto T1301;}
	base[1]= (V720);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1301;
T1301:;
	V722= make_cons(Cnil,Cnil);
	V723= (V722);
	V724= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V720))));
	V725= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V721))));
goto T1252;
T1252:;
	base[1]= (V724);
	base[2]= (V725);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1315;}
	goto T1253;
goto T1315;
T1315:;
	base[1]= (V725);
	base[2]= (V724);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1320;}
	goto T1254;
goto T1320;
T1320:;
	goto T1253;
goto T1253;
T1253:;
	if(type_of((V723))!=t_cons)FEwrong_type_argument(Scons,(V723));
	((V723))->c.c_cdr = (V720);
	V723= cdr((V723));
	V720= cdr((V720));
	if(!(endp((V720)))){
	goto T1329;}
	if(type_of((V723))!=t_cons)FEwrong_type_argument(Scons,(V723));
	((V723))->c.c_cdr = (V721);
	base[1]= cdr((V722));
	vs_top=(vs_base=base+1)+1;
	return;
goto T1329;
T1329:;
	V724= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V720))));
	goto T1252;
goto T1254;
T1254:;
	if(type_of((V723))!=t_cons)FEwrong_type_argument(Scons,(V723));
	((V723))->c.c_cdr = (V721);
	V723= cdr((V723));
	V721= cdr((V721));
	if(!(endp((V721)))){
	goto T1340;}
	if(type_of((V723))!=t_cons)FEwrong_type_argument(Scons,(V723));
	((V723))->c.c_cdr = (V720);
	base[1]= cdr((V722));
	vs_top=(vs_base=base+1)+1;
	return;
goto T1340;
T1340:;
	V725= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V721))));
	goto T1252;}
	}
}
static void LnkT59(){ call_or_link(VV[59],(void **)&Lnk59);} /* ARRAY-HAS-FILL-POINTER-P */
static object  LnkTLI58(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[58],(void **)&LnkLI58,2,ap);va_end(ap);return V1;} /* COERCE */
static void LnkT57(){ call_or_link(VV[57],(void **)&Lnk57);} /* SORT */
static object  LnkTLI56(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[56],(void **)&LnkLI56,81925,ap);va_end(ap);return V1;} /* QUICK-SORT */
static void LnkT55(){ call_or_link(VV[55],(void **)&Lnk55);} /* LIST-MERGE-SORT */
static object  LnkTLI54(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[54],(void **)&LnkLI54,ap);va_end(ap);return V1;} /* DELETE-DUPLICATES */
static void LnkT53(){ call_or_link(VV[53],(void **)&Lnk53);} /* MEMBER1 */
static object  LnkTLI52(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[52],(void **)&LnkLI52,ap);va_end(ap);return V1;} /* POSITION */
static object  LnkTLI51(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[51],(void **)&LnkLI51,ap);va_end(ap);return V1;} /* FIND */
static object  LnkTLI50(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[50],(void **)&LnkLI50,ap);va_end(ap);return V1;} /* NSUBSTITUTE */
static object  LnkTLI49(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[49],(void **)&LnkLI49,ap);va_end(ap);return V1;} /* SUBSTITUTE */
static object  LnkTLI48(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[48],(void **)&LnkLI48,ap);va_end(ap);return V1;} /* COUNT */
static object  LnkTLI47(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[47],(void **)&LnkLI47,1,ap);va_end(ap);return V1;} /* SEQTYPE */
static object  LnkTLI46(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[46],(void **)&LnkLI46,ap);va_end(ap);return V1;} /* MAKE-SEQUENCE */
static object  LnkTLI45(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[45],(void **)&LnkLI45,ap);va_end(ap);return V1;} /* INTERNAL-COUNT */
static object  LnkTLI43(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[43],(void **)&LnkLI43,ap);va_end(ap);return V1;} /* REMOVE */
static object  LnkTLI42(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[42],(void **)&LnkLI42,ap);va_end(ap);return V1;} /* DELETE */
static object  LnkTLI41(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[41],(void **)&LnkLI41,4,ap);va_end(ap);return V1;} /* CALL-TEST */
static object  LnkTLI40(){return call_proc0(VV[40],(void **)&LnkLI40);} /* TEST-ERROR */
static object  LnkTLI35(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[35],(void **)&LnkLI35,258,ap);va_end(ap);return V1;} /* THE-END */
static object  LnkTLI34(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[34],(void **)&LnkLI34,257,ap);va_end(ap);return V1;} /* THE-START */
static object  LnkTLI31(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[31],(void **)&LnkLI31,ap);va_end(ap);return V1;} /* BAD-SEQ-LIMIT */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

