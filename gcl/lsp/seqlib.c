
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
	if(!(((V113))==(Cnil))){
	goto T203;}
	V113= symbol_function(VV[33]);
goto T203;
T203:;
	{long V114;
	if(((V110))==Cnil){
	goto T209;}
	V114= (long)(*(LnkLI34))((V110));
	goto T207;
goto T209;
T209:;
	V114= 0;
goto T207;
T207:;
	{long V115;
	V115= (long)(*(LnkLI35))((V111),(V106));
	if(!((V114)<=(V115))){
	goto T213;}
	goto T212;
goto T213;
T213:;
	V116 = make_fixnum(V114);
	V117 = make_fixnum(V115);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V116,V117)));
goto T212;
T212:;
	{long V118;
	if(((V112))!=Cnil){
	goto T217;}
	V118= 2147483647;
	goto T215;
goto T217;
T217:;
	V118= fix((V112));
goto T215;
T215:;
	if((V108)==Cnil){
	goto T220;}
	if((V109)==Cnil){
	goto T220;}
	(void)((*(LnkLI40))());
goto T220;
T220:;
	if(((V107))!=Cnil){
	goto T222;}
	if(!(type_of((V106))==t_cons||((V106))==Cnil)){
	goto T225;}
	{register object V119;
	register object V120;
	V119= (V106);
	V120= Cnil;
	{register long V121;
	V121= 0;
goto T230;
T230:;
	if(!((V121)>=(V114))){
	goto T231;}
	goto T227;
goto T231;
T231:;
	V120= make_cons(car((V119)),(V120));
	{register object V122;
	V122= car((V119));
	V119= cdr((V119));}
	V121= (long)(1)+(V121);
	goto T230;}
goto T227;
T227:;
	{register long V123;
	register long V124;
	V123= V114;
	V124= 0;
goto T247;
T247:;
	if((V123)>=(V115)){
	goto T249;}
	if((V124)>=(V118)){
	goto T249;}
	if(!(endp_prop((V119)))){
	goto T248;}
goto T249;
T249:;
	base[0]= (V120);
	base[1]= (V119);
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	{object V125 = vs_base[0];
	VMR11(V125)}
goto T248;
T248:;
	base[0]= car((V119));
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V113));
	vs_top=sup;
	V126= vs_base[0];
	if(((*(LnkLI41))((V108),(V109),(V105),V126))==Cnil){
	goto T260;}
	V124= (long)(1)+(V124);
	{register object V127;
	V127= car((V119));
	V119= cdr((V119));
	goto T258;}
goto T260;
T260:;
	V120= make_cons(car((V119)),(V120));
	{register object V128;
	V128= car((V119));
	V119= cdr((V119));}
goto T258;
T258:;
	V123= (long)(1)+(V123);
	goto T247;}}
goto T225;
T225:;
	V129 = make_fixnum(V114);
	V130 = make_fixnum(V115);
	V131 = make_fixnum(V118);
	{object V132 = (VFUN_NARGS=16,(*(LnkLI42))((V105),(V106),VV[10],(V107),VV[11],(V108),VV[12],(V109),VV[13],V129,VV[14],V130,VV[15],V131,VV[16],(V113)));
	VMR11(V132)}
goto T222;
T222:;
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
	if(!(((V145))==(Cnil))){
	goto T278;}
	V145= symbol_function(VV[33]);
goto T278;
T278:;
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
	if(!(((V156))==(Cnil))){
	goto T284;}
	V156= symbol_function(VV[33]);
goto T284;
T284:;
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
	if(!(((V169))==(Cnil))){
	goto T291;}
	V169= symbol_function(VV[33]);
goto T291;
T291:;
	{register long V171;
	if(((V166))==Cnil){
	goto T297;}
	V171= (long)(*(LnkLI34))((V166));
	goto T295;
goto T297;
T297:;
	V171= 0;
goto T295;
T295:;
	{long V172;
	V172= (long)(*(LnkLI35))((V167),(V162));
	if(!((V171)<=(V172))){
	goto T301;}
	goto T300;
goto T301;
T301:;
	V173 = make_fixnum(V171);
	V174 = make_fixnum(V172);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V173,V174)));
goto T300;
T300:;
	{register long V175;
	if(((V168))!=Cnil){
	goto T305;}
	V175= 2147483647;
	goto T303;
goto T305;
T305:;
	V175= fix((V168));
goto T303;
T303:;
	if((V164)==Cnil){
	goto T308;}
	if((V165)==Cnil){
	goto T308;}
	(void)((*(LnkLI40))());
goto T308;
T308:;
	if(((V163))!=Cnil){
	goto T310;}
	if(!(type_of((V162))==t_cons||((V162))==Cnil)){
	goto T313;}
	{object V176;
	register object V177;
	V176= make_cons(Cnil,(V162));
	V177= (V176);
	{long V178;
	V178= 0;
goto T320;
T320:;
	if(!((V178)>=(V171))){
	goto T321;}
	goto T317;
goto T321;
T321:;
	{object V179;
	V179= car((V177));
	V177= cdr((V177));}
	V178= (long)(1)+(V178);
	goto T320;}
goto T317;
T317:;
	{long V180;
	long V181;
	V180= V171;
	V181= 0;
goto T335;
T335:;
	if((V180)>=(V172)){
	goto T337;}
	if((V181)>=(V175)){
	goto T337;}
	if(!(endp_prop(cdr((V177))))){
	goto T336;}
goto T337;
T337:;
	{object V182 = cdr((V176));
	VMR14(V182)}
goto T336;
T336:;
	base[1]= cadr((V177));
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event((V169));
	vs_top=sup;
	V183= vs_base[0];
	if(((*(LnkLI41))((V164),(V165),(V161),V183))==Cnil){
	goto T346;}
	V181= (long)(1)+(V181);
	if(type_of((V177))!=t_cons)FEwrong_type_argument(Scons,(V177));
	((V177))->c.c_cdr = cddr((V177));
	goto T344;
goto T346;
T346:;
	V177= cdr((V177));
goto T344;
T344:;
	V180= (long)(1)+(V180);
	goto T335;}}
goto T313;
T313:;
	{long V184;
	V185 = make_fixnum(V171);
	V186 = make_fixnum(V172);
	V187 = make_fixnum(V175);
	V184= fix((VFUN_NARGS=16,(*(LnkLI45))((V161),(V162),VV[10],(V163),VV[11],(V164),VV[12],(V165),VV[13],V185,VV[14],V186,VV[15],V187,VV[16],(V169))));
	if(!((V184)<(V175))){
	goto T357;}
	V175= V184;
goto T357;
T357:;
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
goto T366;
T366:;
	if(!((V189)>=(V170))){
	goto T367;}
	{object V194 = (V188);
	VMR14(V194)}
goto T367;
T367:;
	if(!((V171)<=(V189))){
	goto T373;}
	if(!((V189)<(V172))){
	goto T373;}
	if(!((V191)<(V175))){
	goto T373;}
	base[0]= elt((V162),V189);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V169));
	vs_top=sup;
	V195= vs_base[0];
	if(((*(LnkLI41))((V164),(V165),(V161),V195))==Cnil){
	goto T373;}
	V191= (long)(1)+(V191);
	goto T371;
goto T373;
T373:;
	V196= elt((V162),V189);
	(void)(elt_set((V188),V190,/* INLINE-ARGS */V196));
	V190= (long)(1)+(V190);
goto T371;
T371:;
	V189= (long)(1)+(V189);
	goto T366;}}
goto T310;
T310:;
	{long V197;
	V198 = make_fixnum(V171);
	V199 = make_fixnum(V172);
	V200 = make_fixnum(V175);
	V197= fix((VFUN_NARGS=16,(*(LnkLI45))((V161),(V162),VV[10],(V163),VV[11],(V164),VV[12],(V165),VV[13],V198,VV[14],V199,VV[15],V200,VV[16],(V169))));
	if(!((V197)<(V175))){
	goto T390;}
	V175= V197;
goto T390;
T390:;
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
goto T399;
T399:;
	if(!((V202)<(0))){
	goto T400;}
	{object V207 = (V201);
	VMR14(V207)}
goto T400;
T400:;
	if(!((V171)<=(V202))){
	goto T406;}
	if(!((V202)<(V172))){
	goto T406;}
	if(!((V204)<(V175))){
	goto T406;}
	base[0]= elt((V162),V202);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V169));
	vs_top=sup;
	V208= vs_base[0];
	if(((*(LnkLI41))((V164),(V165),(V161),V208))==Cnil){
	goto T406;}
	V204= (long)(1)+(V204);
	goto T404;
goto T406;
T406:;
	V209= elt((V162),V202);
	(void)(elt_set((V201),V203,/* INLINE-ARGS */V209));
	V203= (long)(-1)+(V203);
goto T404;
T404:;
	V202= (long)(-1)+(V202);
	goto T399;}}}}}}
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
	if(!(((V218))==(Cnil))){
	goto T423;}
	V218= symbol_function(VV[33]);
goto T423;
T423:;
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
	if(!(((V229))==(Cnil))){
	goto T429;}
	V229= symbol_function(VV[33]);
goto T429;
T429:;
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
	register object V241;
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
	if(!(((V241))==(Cnil))){
	goto T435;}
	V241= symbol_function(VV[33]);
goto T435;
T435:;
	{long V242;
	if(((V239))==Cnil){
	goto T441;}
	V242= (long)(*(LnkLI34))((V239));
	goto T439;
goto T441;
T441:;
	V242= 0;
goto T439;
T439:;
	{long V243;
	V243= (long)(*(LnkLI35))((V240),(V235));
	if(!((V242)<=(V243))){
	goto T445;}
	goto T444;
goto T445;
T445:;
	V244 = make_fixnum(V242);
	V245 = make_fixnum(V243);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V244,V245)));
goto T444;
T444:;
	if((V237)==Cnil){
	goto T447;}
	if((V238)==Cnil){
	goto T447;}
	(void)((*(LnkLI40))());
goto T447;
T447:;
	if(((V236))!=Cnil){
	goto T449;}
	{register long V246;
	register long V247;
	V246= V242;
	V247= 0;
goto T454;
T454:;
	if(!((V246)>=(V243))){
	goto T455;}
	{object V248 = make_fixnum(V247);
	VMR17(V248)}
goto T455;
T455:;
	base[0]= elt((V235),V246);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V241));
	vs_top=sup;
	V249= vs_base[0];
	if(((*(LnkLI41))((V237),(V238),(V234),V249))==Cnil){
	goto T459;}
	V247= (long)(1)+(V247);
goto T459;
T459:;
	V246= (long)(1)+(V246);
	goto T454;}
goto T449;
T449:;
	{register long V250;
	register long V251;
	V250= (long)(-1)+(V243);
	V251= 0;
goto T471;
T471:;
	if(!((V250)<(V242))){
	goto T472;}
	{object V252 = make_fixnum(V251);
	VMR17(V252)}
goto T472;
T472:;
	base[0]= elt((V235),V250);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V241));
	vs_top=sup;
	V253= vs_base[0];
	if(((*(LnkLI41))((V237),(V238),(V234),V253))==Cnil){
	goto T476;}
	V251= (long)(1)+(V251);
goto T476;
T476:;
	V250= (long)(-1)+(V250);
	goto T471;}}}
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
	if(!(((V261))==(Cnil))){
	goto T486;}
	V261= symbol_function(VV[33]);
goto T486;
T486:;
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
	if(!(((V271))==(Cnil))){
	goto T492;}
	V271= symbol_function(VV[33]);
goto T492;
T492:;
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
	register object V284;
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
	if(!(((V284))==(Cnil))){
	goto T498;}
	V284= symbol_function(VV[33]);
goto T498;
T498:;
	{long V285;
	if(((V281))==Cnil){
	goto T504;}
	V285= (long)(*(LnkLI34))((V281));
	goto T502;
goto T504;
T504:;
	V285= 0;
goto T502;
T502:;
	{long V286;
	V286= (long)(*(LnkLI35))((V282),(V277));
	if(!((V285)<=(V286))){
	goto T508;}
	goto T507;
goto T508;
T508:;
	V287 = make_fixnum(V285);
	V288 = make_fixnum(V286);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V287,V288)));
goto T507;
T507:;
	{long V289;
	if(((V283))!=Cnil){
	goto T512;}
	V289= 2147483647;
	goto T510;
goto T512;
T512:;
	V289= fix((V283));
goto T510;
T510:;
	if((V279)==Cnil){
	goto T515;}
	if((V280)==Cnil){
	goto T515;}
	(void)((*(LnkLI40))());
goto T515;
T515:;
	if(((V278))!=Cnil){
	goto T517;}
	{register long V290;
	register long V291;
	V290= V285;
	V291= 0;
goto T522;
T522:;
	if(!((V290)>=(V286))){
	goto T523;}
	{object V292 = make_fixnum(V291);
	VMR20(V292)}
goto T523;
T523:;
	if(!((V291)<(V289))){
	goto T527;}
	base[0]= elt((V277),V290);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V284));
	vs_top=sup;
	V293= vs_base[0];
	if(((*(LnkLI41))((V279),(V280),(V276),V293))==Cnil){
	goto T527;}
	V291= (long)(1)+(V291);
goto T527;
T527:;
	V290= (long)(1)+(V290);
	goto T522;}
goto T517;
T517:;
	{register long V294;
	register long V295;
	V294= (long)(-1)+(V286);
	V295= 0;
goto T541;
T541:;
	if(!((V294)<(V285))){
	goto T542;}
	{object V296 = make_fixnum(V295);
	VMR20(V296)}
goto T542;
T542:;
	if(!((V295)<(V289))){
	goto T546;}
	base[0]= elt((V277),V294);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V284));
	vs_top=sup;
	V297= vs_base[0];
	if(((*(LnkLI41))((V279),(V280),(V276),V297))==Cnil){
	goto T546;}
	V295= (long)(1)+(V295);
goto T546;
T546:;
	V294= (long)(-1)+(V294);
	goto T541;}}}}
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
	if(!(((V306))==(Cnil))){
	goto T558;}
	V306= symbol_function(VV[33]);
goto T558;
T558:;
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
	if(!(((V317))==(Cnil))){
	goto T564;}
	V317= symbol_function(VV[33]);
goto T564;
T564:;
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
	if(!(((V332))==(Cnil))){
	goto T571;}
	V332= symbol_function(VV[33]);
goto T571;
T571:;
	{long V334;
	if(((V329))==Cnil){
	goto T577;}
	V334= (long)(*(LnkLI34))((V329));
	goto T575;
goto T577;
T577:;
	V334= 0;
goto T575;
T575:;
	{long V335;
	V335= (long)(*(LnkLI35))((V330),(V325));
	if(!((V334)<=(V335))){
	goto T581;}
	goto T580;
goto T581;
T581:;
	V336 = make_fixnum(V334);
	V337 = make_fixnum(V335);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V336,V337)));
goto T580;
T580:;
	{long V338;
	if(((V331))!=Cnil){
	goto T585;}
	V338= 2147483647;
	goto T583;
goto T585;
T585:;
	V338= fix((V331));
goto T583;
T583:;
	if((V327)==Cnil){
	goto T588;}
	if((V328)==Cnil){
	goto T588;}
	(void)((*(LnkLI40))());
goto T588;
T588:;
	if(((V326))!=Cnil){
	goto T590;}
	{register object V339;
	register long V340;
	register long V341;
	V342= (*(LnkLI47))((V325));
	V343 = make_fixnum(V333);
	V339= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V342,V343));
	V340= 0;
	V341= 0;
goto T596;
T596:;
	if(!((V340)>=(V333))){
	goto T597;}
	{object V344 = (V339);
	VMR23(V344)}
goto T597;
T597:;
	if(!((V334)<=(V340))){
	goto T603;}
	if(!((V340)<(V335))){
	goto T603;}
	if(!((V341)<(V338))){
	goto T603;}
	base[0]= elt((V325),V340);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V332));
	vs_top=sup;
	V345= vs_base[0];
	if(((*(LnkLI41))((V327),(V328),(V324),V345))==Cnil){
	goto T603;}
	(void)(elt_set((V339),V340,(V323)));
	V341= (long)(1)+(V341);
	goto T601;
goto T603;
T603:;
	V346= elt((V325),V340);
	(void)(elt_set((V339),V340,/* INLINE-ARGS */V346));
goto T601;
T601:;
	V340= (long)(1)+(V340);
	goto T596;}
goto T590;
T590:;
	{register object V347;
	register long V348;
	register long V349;
	V350= (*(LnkLI47))((V325));
	V351 = make_fixnum(V333);
	V347= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V350,V351));
	V348= (long)(-1)+(V333);
	V349= 0;
goto T622;
T622:;
	if(!((V348)<(0))){
	goto T623;}
	{object V352 = (V347);
	VMR23(V352)}
goto T623;
T623:;
	if(!((V334)<=(V348))){
	goto T629;}
	if(!((V348)<(V335))){
	goto T629;}
	if(!((V349)<(V338))){
	goto T629;}
	base[0]= elt((V325),V348);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V332));
	vs_top=sup;
	V353= vs_base[0];
	if(((*(LnkLI41))((V327),(V328),(V324),V353))==Cnil){
	goto T629;}
	(void)(elt_set((V347),V348,(V323)));
	V349= (long)(1)+(V349);
	goto T627;
goto T629;
T629:;
	V354= elt((V325),V348);
	(void)(elt_set((V347),V348,/* INLINE-ARGS */V354));
goto T627;
T627:;
	V348= (long)(-1)+(V348);
	goto T622;}}}}}
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
	if(!(((V365))==(Cnil))){
	goto T645;}
	V365= symbol_function(VV[33]);
goto T645;
T645:;
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
	if(!(((V378))==(Cnil))){
	goto T651;}
	V378= symbol_function(VV[33]);
goto T651;
T651:;
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
	object V388;
	object V389;
	object V390;
	object V391;
	object V392;
	register object V393;
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
	if(!(((V393))==(Cnil))){
	goto T657;}
	V393= symbol_function(VV[33]);
goto T657;
T657:;
	{long V394;
	if(((V390))==Cnil){
	goto T663;}
	V394= (long)(*(LnkLI34))((V390));
	goto T661;
goto T663;
T663:;
	V394= 0;
goto T661;
T661:;
	{long V395;
	V395= (long)(*(LnkLI35))((V391),(V386));
	if(!((V394)<=(V395))){
	goto T667;}
	goto T666;
goto T667;
T667:;
	V396 = make_fixnum(V394);
	V397 = make_fixnum(V395);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V396,V397)));
goto T666;
T666:;
	{long V398;
	if(((V392))!=Cnil){
	goto T671;}
	V398= 2147483647;
	goto T669;
goto T671;
T671:;
	V398= fix((V392));
goto T669;
T669:;
	if((V388)==Cnil){
	goto T674;}
	if((V389)==Cnil){
	goto T674;}
	(void)((*(LnkLI40))());
goto T674;
T674:;
	if(((V387))!=Cnil){
	goto T676;}
	{register long V399;
	register long V400;
	V399= V394;
	V400= 0;
goto T681;
T681:;
	if(!((V399)>=(V395))){
	goto T682;}
	{object V401 = (V386);
	VMR26(V401)}
goto T682;
T682:;
	if(!((V400)<(V398))){
	goto T686;}
	base[0]= elt((V386),V399);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V393));
	vs_top=sup;
	V402= vs_base[0];
	if(((*(LnkLI41))((V388),(V389),(V385),V402))==Cnil){
	goto T686;}
	(void)(elt_set((V386),V399,(V384)));
	V400= (long)(1)+(V400);
goto T686;
T686:;
	V399= (long)(1)+(V399);
	goto T681;}
goto T676;
T676:;
	{register long V403;
	register long V404;
	V403= (long)(-1)+(V395);
	V404= 0;
goto T701;
T701:;
	if(!((V403)<(V394))){
	goto T702;}
	{object V405 = (V386);
	VMR26(V405)}
goto T702;
T702:;
	if(!((V404)<(V398))){
	goto T706;}
	base[0]= elt((V386),V403);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V393));
	vs_top=sup;
	V406= vs_base[0];
	if(((*(LnkLI41))((V388),(V389),(V385),V406))==Cnil){
	goto T706;}
	(void)(elt_set((V386),V403,(V384)));
	V404= (long)(1)+(V404);
goto T706;
T706:;
	V403= (long)(-1)+(V403);
	goto T701;}}}}
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
	if(!(((V417))==(Cnil))){
	goto T719;}
	V417= symbol_function(VV[33]);
goto T719;
T719:;
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
	if(!(((V430))==(Cnil))){
	goto T725;}
	V430= symbol_function(VV[33]);
goto T725;
T725:;
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
	{object V435;
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
	if(!(((V442))==(Cnil))){
	goto T731;}
	V442= symbol_function(VV[33]);
goto T731;
T731:;
	{long V443;
	if(((V440))==Cnil){
	goto T737;}
	V443= (long)(*(LnkLI34))((V440));
	goto T735;
goto T737;
T737:;
	V443= 0;
goto T735;
T735:;
	{long V444;
	V444= (long)(*(LnkLI35))((V441),(V436));
	if(!((V443)<=(V444))){
	goto T741;}
	goto T740;
goto T741;
T741:;
	V445 = make_fixnum(V443);
	V446 = make_fixnum(V444);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V445,V446)));
goto T740;
T740:;
	if((V438)==Cnil){
	goto T743;}
	if((V439)==Cnil){
	goto T743;}
	(void)((*(LnkLI40))());
goto T743;
T743:;
	if(((V437))!=Cnil){
	goto T745;}
	{register long V447;
	V447= V443;
goto T749;
T749:;
	if(!((V447)>=(V444))){
	goto T750;}
	{object V448 = Cnil;
	VMR29(V448)}
goto T750;
T750:;
	base[0]= elt((V436),V447);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V442));
	vs_top=sup;
	V449= vs_base[0];
	if(((*(LnkLI41))((V438),(V439),(V435),V449))==Cnil){
	goto T754;}
	{object V450 = elt((V436),V447);
	VMR29(V450)}
goto T754;
T754:;
	V447= (long)(1)+(V447);
	goto T749;}
goto T745;
T745:;
	{register long V451;
	V451= (long)(-1)+(V444);
goto T764;
T764:;
	if(!((V451)<(V443))){
	goto T765;}
	{object V452 = Cnil;
	VMR29(V452)}
goto T765;
T765:;
	base[0]= elt((V436),V451);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V442));
	vs_top=sup;
	V453= vs_base[0];
	if(((*(LnkLI41))((V438),(V439),(V435),V453))==Cnil){
	goto T769;}
	{object V454 = elt((V436),V451);
	VMR29(V454)}
goto T769;
T769:;
	V451= (long)(-1)+(V451);
	goto T764;}}}
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
	if(!(((V462))==(Cnil))){
	goto T778;}
	V462= symbol_function(VV[33]);
goto T778;
T778:;
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
	if(!(((V472))==(Cnil))){
	goto T784;}
	V472= symbol_function(VV[33]);
goto T784;
T784:;
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
	{object V477;
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
	if(!(((V484))==(Cnil))){
	goto T790;}
	V484= symbol_function(VV[33]);
goto T790;
T790:;
	{long V485;
	if(((V482))==Cnil){
	goto T796;}
	V485= (long)(*(LnkLI34))((V482));
	goto T794;
goto T796;
T796:;
	V485= 0;
goto T794;
T794:;
	{long V486;
	V486= (long)(*(LnkLI35))((V483),(V478));
	if(!((V485)<=(V486))){
	goto T800;}
	goto T799;
goto T800;
T800:;
	V487 = make_fixnum(V485);
	V488 = make_fixnum(V486);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V487,V488)));
goto T799;
T799:;
	if((V480)==Cnil){
	goto T802;}
	if((V481)==Cnil){
	goto T802;}
	(void)((*(LnkLI40))());
goto T802;
T802:;
	if(((V479))!=Cnil){
	goto T804;}
	{register long V489;
	V489= V485;
goto T808;
T808:;
	if(!((V489)>=(V486))){
	goto T809;}
	{object V490 = Cnil;
	VMR32(V490)}
goto T809;
T809:;
	base[0]= elt((V478),V489);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V484));
	vs_top=sup;
	V491= vs_base[0];
	if(((*(LnkLI41))((V480),(V481),(V477),V491))==Cnil){
	goto T813;}
	{object V492 = make_fixnum(V489);
	VMR32(V492)}
goto T813;
T813:;
	V489= (long)(1)+(V489);
	goto T808;}
goto T804;
T804:;
	{register long V493;
	V493= (long)(-1)+(V486);
goto T823;
T823:;
	if(!((V493)<(V485))){
	goto T824;}
	{object V494 = Cnil;
	VMR32(V494)}
goto T824;
T824:;
	base[0]= elt((V478),V493);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V484));
	vs_top=sup;
	V495= vs_base[0];
	if(((*(LnkLI41))((V480),(V481),(V477),V495))==Cnil){
	goto T828;}
	{object V496 = make_fixnum(V493);
	VMR32(V496)}
goto T828;
T828:;
	V493= (long)(-1)+(V493);
	goto T823;}}}
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
	if(!(((V504))==(Cnil))){
	goto T837;}
	V504= symbol_function(VV[33]);
goto T837;
T837:;
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
	if(!(((V514))==(Cnil))){
	goto T843;}
	V514= symbol_function(VV[33]);
goto T843;
T843:;
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
	goto T849;}
	if((V521)==Cnil){
	goto T849;}
	(void)((*(LnkLI40))());
goto T849;
T849:;
	if(!(type_of((V518))==t_cons||((V518))==Cnil)){
	goto T850;}
	if(((V519))!=Cnil){
	goto T850;}
	if(((V522))!=Cnil){
	goto T850;}
	if(((V523))!=Cnil){
	goto T850;}
	if(!(endp_prop((V518)))){
	goto T859;}
	{object V525 = Cnil;
	VMR35(V525)}
goto T859;
T859:;
	{register object V526;
	register object V527;
	V526= (V518);
	V527= Cnil;
goto T863;
T863:;
	if(!(endp_prop(cdr((V526))))){
	goto T864;}
	base[0]= (V527);
	base[1]= (V526);
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	{object V528 = vs_base[0];
	VMR35(V528)}
goto T864;
T864:;
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
	goto T870;}
	V527= make_cons(car((V526)),(V527));
goto T870;
T870:;
	V526= cdr((V526));
	goto T863;}
goto T850;
T850:;
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
	goto T887;}
	if((V534)==Cnil){
	goto T887;}
	(void)((*(LnkLI40))());
goto T887;
T887:;
	if(!(type_of((V531))==t_cons||((V531))==Cnil)){
	goto T888;}
	if(((V532))!=Cnil){
	goto T888;}
	if(((V535))!=Cnil){
	goto T888;}
	if(((V536))!=Cnil){
	goto T888;}
	if(!(endp_prop((V531)))){
	goto T897;}
	{object V539 = Cnil;
	VMR36(V539)}
goto T897;
T897:;
	{register object V540;
	V540= (V531);
goto T901;
T901:;
	if(!(endp_prop(cdr((V540))))){
	goto T902;}
	{object V541 = (V531);
	VMR36(V541)}
goto T902;
T902:;
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
	goto T908;}
	if(type_of((V540))!=t_cons)FEwrong_type_argument(Scons,(V540));
	((V540))->c.c_car = cadr((V540));
	if(type_of((V540))!=t_cons)FEwrong_type_argument(Scons,(V540));
	((V540))->c.c_cdr = cddr((V540));
	goto T906;
goto T908;
T908:;
	V540= cdr((V540));
goto T906;
T906:;
	goto T901;}
goto T888;
T888:;
	{register long V542;
	if(((V535))==Cnil){
	goto T924;}
	V542= (long)(*(LnkLI34))((V535));
	goto T922;
goto T924;
T924:;
	V542= 0;
goto T922;
T922:;
	{register long V543;
	V543= (long)(*(LnkLI35))((V536),(V531));
	if(!((V542)<=(V543))){
	goto T928;}
	goto T927;
goto T928;
T928:;
	V544 = make_fixnum(V542);
	V545 = make_fixnum(V543);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V544,V545)));
goto T927;
T927:;
	if(((V532))!=Cnil){
	goto T931;}
	{long V546;
	long V547;
	V546= 0;
	V547= V542;
goto T936;
T936:;
	if(!((V547)>=(V543))){
	goto T937;}
	{object V548;
	register long V549;
	long V550;
	V551= (*(LnkLI47))((V531));
	V552 = make_fixnum((long)(V538)-(V546));
	V548= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V551,V552));
	V549= 0;
	V550= 0;
goto T944;
T944:;
	if(!((V549)>=(V538))){
	goto T945;}
	{object V553 = (V548);
	VMR36(V553)}
goto T945;
T945:;
	{object V554;
	if((V542)<=(V549)){
	goto T951;}
	V554= Cnil;
	goto T950;
goto T951;
T951:;
	if((V549)<(V543)){
	goto T953;}
	V554= Cnil;
	goto T950;
goto T953;
T953:;
	base[0]= elt((V531),V549);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V537));
	vs_top=sup;
	V555= vs_base[0];
	V556 = make_fixnum((long)(1)+(V549));
	V557 = make_fixnum(V543);
	V554= (VFUN_NARGS=12,(*(LnkLI52))(V555,(V531),VV[11],(V533),VV[12],(V534),VV[13],V556,VV[14],V557,VV[16],(V537)));
goto T950;
T950:;
	if(((V554))==Cnil){
	goto T958;}
	goto T949;
goto T958;
T958:;
	V558= elt((V531),V549);
	(void)(elt_set((V548),V550,/* INLINE-ARGS */V558));
	V550= (long)(1)+(V550);}
goto T949;
T949:;
	V549= (long)(1)+(V549);
	goto T944;}
goto T937;
T937:;
	base[0]= elt((V531),V547);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V537));
	vs_top=sup;
	V559= vs_base[0];
	V560 = make_fixnum((long)(1)+(V547));
	V561 = make_fixnum(V543);
	if(((VFUN_NARGS=12,(*(LnkLI52))(V559,(V531),VV[11],(V533),VV[12],(V534),VV[13],V560,VV[14],V561,VV[16],(V537))))==Cnil){
	goto T966;}
	V546= (long)(1)+(V546);
goto T966;
T966:;
	V547= (long)(1)+(V547);
	goto T936;}
goto T931;
T931:;
	{long V562;
	long V563;
	V562= 0;
	V563= (long)(-1)+(V543);
goto T978;
T978:;
	if(!((V563)<(V542))){
	goto T979;}
	{object V564;
	register long V565;
	long V566;
	V567= (*(LnkLI47))((V531));
	V568 = make_fixnum((long)(V538)-(V562));
	V564= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V567,V568));
	V565= (long)(-1)+(V538);
	V566= (long)((long)(-1)+(V538))-(V562);
goto T986;
T986:;
	if(!((V565)<(0))){
	goto T987;}
	{object V569 = (V564);
	VMR36(V569)}
goto T987;
T987:;
	{object V570;
	if((V542)<=(V565)){
	goto T993;}
	V570= Cnil;
	goto T992;
goto T993;
T993:;
	if((V565)<(V543)){
	goto T995;}
	V570= Cnil;
	goto T992;
goto T995;
T995:;
	base[0]= elt((V531),V565);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V537));
	vs_top=sup;
	V571= vs_base[0];
	V572 = make_fixnum(V542);
	V573 = make_fixnum(V565);
	V570= (VFUN_NARGS=14,(*(LnkLI52))(V571,(V531),VV[10],Ct,VV[11],(V533),VV[12],(V534),VV[13],V572,VV[14],V573,VV[16],(V537)));
goto T992;
T992:;
	if(((V570))==Cnil){
	goto T1000;}
	goto T991;
goto T1000;
T1000:;
	V574= elt((V531),V565);
	(void)(elt_set((V564),V566,/* INLINE-ARGS */V574));
	V566= (long)(-1)+(V566);}
goto T991;
T991:;
	V565= (long)(-1)+(V565);
	goto T986;}
goto T979;
T979:;
	base[0]= elt((V531),V563);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V537));
	vs_top=sup;
	V575= vs_base[0];
	V576 = make_fixnum(V542);
	V577 = make_fixnum(V563);
	if(((VFUN_NARGS=14,(*(LnkLI52))(V575,(V531),VV[10],Ct,VV[11],(V533),VV[12],(V534),VV[13],V576,VV[14],V577,VV[16],(V537))))==Cnil){
	goto T1008;}
	V562= (long)(1)+(V562);
goto T1008;
T1008:;
	V563= (long)(-1)+(V563);
	goto T978;}}}}
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
	goto T1018;}
	if((V584)==Cnil){
	goto T1018;}
	(void)((*(LnkLI40))());
goto T1018;
T1018:;
	{register long V590;
	if(((V586))==Cnil){
	goto T1021;}
	V590= (long)(*(LnkLI34))((V586));
	goto T1019;
goto T1021;
T1021:;
	V590= 0;
goto T1019;
T1019:;
	{register long V591;
	V591= (long)(*(LnkLI35))((V588),(V580));
	if(!((V590)<=(V591))){
	goto T1025;}
	goto T1024;
goto T1025;
T1025:;
	V592 = make_fixnum(V590);
	V593 = make_fixnum(V591);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V592,V593)));
goto T1024;
T1024:;
	{register long V594;
	if(((V587))==Cnil){
	goto T1029;}
	V594= (long)(*(LnkLI34))((V587));
	goto T1027;
goto T1029;
T1029:;
	V594= 0;
goto T1027;
T1027:;
	{register long V595;
	V595= (long)(*(LnkLI35))((V589),(V581));
	if(!((V594)<=(V595))){
	goto T1033;}
	goto T1032;
goto T1033;
T1033:;
	V596 = make_fixnum(V594);
	V597 = make_fixnum(V595);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V596,V597)));
goto T1032;
T1032:;
	if(((V582))!=Cnil){
	goto T1036;}
	{register long V598;
	register long V599;
	V598= V590;
	V599= V594;
goto T1041;
T1041:;
	if((V598)>=(V591)){
	goto T1043;}
	if(!((V599)>=(V595))){
	goto T1042;}
goto T1043;
T1043:;
	if(!((V598)>=(V591))){
	goto T1048;}
	if(!((V599)>=(V595))){
	goto T1048;}
	{object V600 = Cnil;
	VMR37(V600)}
goto T1048;
T1048:;
	{object V601 = make_fixnum(V598);
	VMR37(V601)}
goto T1042;
T1042:;
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
	goto T1053;}
	{object V604 = make_fixnum(V598);
	VMR37(V604)}
goto T1053;
T1053:;
	V598= (long)(1)+(V598);
	V599= (long)(1)+(V599);
	goto T1041;}
goto T1036;
T1036:;
	{register long V605;
	register long V606;
	V605= (long)(-1)+(V591);
	V606= (long)(-1)+(V595);
goto T1067;
T1067:;
	if((V605)<(V590)){
	goto T1069;}
	if(!((V606)<(V594))){
	goto T1068;}
goto T1069;
T1069:;
	if(!((V605)<(V590))){
	goto T1074;}
	if(!((V606)<(V594))){
	goto T1074;}
	{object V607 = Cnil;
	VMR37(V607)}
goto T1074;
T1074:;
	{object V608 = make_fixnum((long)(1)+(V605));
	VMR37(V608)}
goto T1068;
T1068:;
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
	goto T1079;}
	{object V611 = make_fixnum((long)(1)+(V605));
	VMR37(V611)}
goto T1079;
T1079:;
	V605= (long)(-1)+(V605);
	V606= (long)(-1)+(V606);
	goto T1067;}}}}}
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
	goto T1091;}
	if((V618)==Cnil){
	goto T1091;}
	(void)((*(LnkLI40))());
goto T1091;
T1091:;
	{long V624;
	if(((V620))==Cnil){
	goto T1094;}
	V624= (long)(*(LnkLI34))((V620));
	goto T1092;
goto T1094;
T1094:;
	V624= 0;
goto T1092;
T1092:;
	{long V625;
	V625= (long)(*(LnkLI35))((V622),(V614));
	if(!((V624)<=(V625))){
	goto T1098;}
	goto T1097;
goto T1098;
T1098:;
	V626 = make_fixnum(V624);
	V627 = make_fixnum(V625);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V626,V627)));
goto T1097;
T1097:;
	{register long V628;
	if(((V621))==Cnil){
	goto T1102;}
	V628= (long)(*(LnkLI34))((V621));
	goto T1100;
goto T1102;
T1102:;
	V628= 0;
goto T1100;
T1100:;
	{long V629;
	V629= (long)(*(LnkLI35))((V623),(V615));
	if(!((V628)<=(V629))){
	goto T1106;}
	goto T1105;
goto T1106;
T1106:;
	V630 = make_fixnum(V628);
	V631 = make_fixnum(V629);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V630,V631)));
goto T1105;
T1105:;
	if(((V616))!=Cnil){
	goto T1109;}
goto T1112;
T1112:;
	{register long V632;
	register long V633;
	V632= V624;
	V633= V628;
goto T1118;
T1118:;
	if(!((V632)>=(V625))){
	goto T1119;}
	{object V634 = make_fixnum(V628);
	VMR38(V634)}
goto T1119;
T1119:;
	if(!((V633)>=(V629))){
	goto T1123;}
	{object V635 = Cnil;
	VMR38(V635)}
goto T1123;
T1123:;
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
	goto T1126;}
	goto T1114;
goto T1126;
T1126:;
	V632= (long)(1)+(V632);
	V633= (long)(1)+(V633);
	goto T1118;}
goto T1114;
T1114:;
	V628= (long)(1)+(V628);
	goto T1112;
goto T1109;
T1109:;
goto T1140;
T1140:;
	{register long V638;
	register long V639;
	V638= (long)(-1)+(V625);
	V639= (long)(-1)+(V629);
goto T1146;
T1146:;
	if(!((V638)<(V624))){
	goto T1147;}
	{object V640 = make_fixnum((long)(1)+(V639));
	VMR38(V640)}
goto T1147;
T1147:;
	if(!((V639)<(V628))){
	goto T1151;}
	{object V641 = Cnil;
	VMR38(V641)}
goto T1151;
T1151:;
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
	goto T1154;}
	goto T1142;
goto T1154;
T1154:;
	V638= (long)(-1)+(V638);
	V639= (long)(-1)+(V639);
	goto T1146;}
goto T1142;
T1142:;
	V629= (long)(-1)+(V629);
	goto T1140;}}}}
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
	goto T1169;}
	base[4]= (V644);
	base[5]= (V645);
	base[6]= (V646);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk55)();
	return;
goto T1169;
T1169:;
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
	goto T1176;}
	{object V658 = (V653);
	VMR41(V658)}
goto T1176;
T1176:;
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
goto T1184;
T1184:;
goto T1188;
T1188:;
	V660= (long)(-1)+(V660);
	if((V659)<(V660)){
	goto T1192;}
	goto T1182;
goto T1192;
T1192:;
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
	goto T1189;}
	goto T1186;
goto T1189;
T1189:;
	goto T1188;
goto T1186;
T1186:;
goto T1203;
T1203:;
	V659= (long)(1)+(V659);
	if((V659)<(V660)){
	goto T1207;}
	goto T1182;
goto T1207;
T1207:;
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
	goto T1204;}
	goto T1201;
goto T1204;
T1204:;
	goto T1203;
goto T1201;
T1201:;
	{object V663;
	V663= elt((V653),V659);
	V664= elt((V653),V660);
	(void)(elt_set((V653),V659,/* INLINE-ARGS */V664));
	(void)(elt_set((V653),V660,(V663)));}
	goto T1184;
goto T1182;
T1182:;
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
	goto T1230;}
	base[4]= (V666);
	base[5]= (V667);
	base[6]= (V668);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk55)();
	return;
goto T1230;
T1230:;
	if(type_of((V666))==t_string){
	goto T1235;}
	if(!((type_of((V666))==t_bitvector))){
	goto T1236;}
goto T1235;
T1235:;
	base[4]= (V666);
	base[5]= (V667);
	base[6]= VV[16];
	base[7]= (V668);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk57)();
	return;
goto T1236;
T1236:;
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
	goto T1251;}
	V679= symbol_function(VV[33]);
goto T1251;
T1251:;
	{register object V682;
	register long V683;
	register long V684;
	register long V685;
	V686 = make_fixnum((long)(V680)+(V681));
	V682= (VFUN_NARGS=2,(*(LnkLI46))((V675),V686));
	V683= 0;
	V684= 0;
	V685= 0;
goto T1260;
T1260:;
	if(!((V684)==(V680))){
	goto T1261;}
	if(!((V685)==(V681))){
	goto T1261;}
	{object V687 = (V682);
	VMR43(V687)}
goto T1261;
T1261:;
	if(!((V684)<(V680))){
	goto T1269;}
	if(!((V685)<(V681))){
	goto T1269;}
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
	goto T1274;}
	V688= elt((V676),V684);
	(void)(elt_set((V682),V683,/* INLINE-ARGS */V688));
	V684= (long)(1)+(V684);
	goto T1267;
goto T1274;
T1274:;
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
	goto T1283;}
	V689= elt((V677),V685);
	(void)(elt_set((V682),V683,/* INLINE-ARGS */V689));
	V685= (long)(1)+(V685);
	goto T1267;
goto T1283;
T1283:;
	V690= elt((V676),V684);
	(void)(elt_set((V682),V683,/* INLINE-ARGS */V690));
	V684= (long)(1)+(V684);
	goto T1267;
goto T1269;
T1269:;
	if(!((V684)<(V680))){
	goto T1294;}
	V691= elt((V676),V684);
	(void)(elt_set((V682),V683,/* INLINE-ARGS */V691));
	V684= (long)(1)+(V684);
	goto T1267;
goto T1294;
T1294:;
	V692= elt((V677),V685);
	(void)(elt_set((V682),V683,/* INLINE-ARGS */V692));
	V685= (long)(1)+(V685);
goto T1267;
T1267:;
	V683= (long)(1)+(V683);
	goto T1260;}}
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
	goto T1306;}
	base[4]= (V693);
	base[5]= small_fixnum(0);
	vs_top=(vs_base=base+4)+2;
	Larray_dimension();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T1304;
goto T1306;
T1306:;
	base[3]= make_fixnum((long)length((V693)));
goto T1304;
T1304:;
	{object V697;
	{object V699;
	object V700= (V695);
	if(endp(V700)){
	V697= Cnil;
	goto T1312;}
	base[4]=V699=MMcons(Cnil,Cnil);
goto T1313;
T1313:;
	base[5]= (V700->c.c_car);
	vs_top=(vs_base=base+5)+1;
	Llength();
	vs_top=sup;
	(V699->c.c_car)= vs_base[0];
	V700=MMcdr(V700);
	if(endp(V700)){
	V697= base[4];
	goto T1312;}
	V699=MMcdr(V699)=MMcons(Cnil,Cnil);
	goto T1313;}
goto T1312;
T1312:;
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
	goto T1316;}
	base[3]= (V693);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk59)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1316;}
	base[3]= (V693);
	base[4]= (V696);
	vs_top=(vs_base=base+3)+2;
	siLfill_pointer_set();
	vs_top=sup;
goto T1316;
T1316:;
	{register object V702;
	register object V703;
	V702= (V696);
	V703= small_fixnum(0);
goto T1329;
T1329:;
	if(!(number_compare((V703),(V702))>=0)){
	goto T1330;}
	base[3]= (V693);
	vs_top=(vs_base=base+3)+1;
	return;
goto T1330;
T1330:;
	base[3]= (V694);
	{object V705;
	{object V706;
	object V707= (V695);
	if(endp(V707)){
	V705= Cnil;
	goto T1337;}
	base[4]=V706=MMcons(Cnil,Cnil);
goto T1338;
T1338:;
	{register object V708;
	V708= (V707->c.c_car);
	(V706->c.c_car)= elt((V708),fixint((V703)));}
	V707=MMcdr(V707);
	if(endp(V707)){
	V705= base[4];
	goto T1337;}
	V706=MMcdr(V706)=MMcons(Cnil,Cnil);
	goto T1338;}
goto T1337;
T1337:;
	 vs_top=base+4;
	 while(!endp(V705))
	 {vs_push(car(V705));V705=cdr(V705);}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	vs_top=sup;
	V704= vs_base[0];
	(void)(elt_set((V693),fixint((V703)),V704));
	V703= one_plus((V703));
	goto T1329;}}
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
	goto T1355;}
	base[1]= (V718);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1355;
T1355:;
	if(!((V719)==(2))){
	goto T1353;}
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
	goto T1364;}
	base[1]= (V718);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1364;
T1364:;
	base[1]= (V725);
	base[2]= (V724);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1369;}
	base[1]= nreverse((V718));
	vs_top=(vs_base=base+1)+1;
	return;
goto T1369;
T1369:;
	base[1]= (V718);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1353;
T1353:;
	V719= (long)(V719>=0&&(2)>0?(V719)/(2):ifloor(V719,2));
	{long V726;
	register object V727;
	V726= 1;
	V727= (V718);
goto T1378;
T1378:;
	if(!((V726)>=(V719))){
	goto T1379;}
	V720= (V718);
	V721= cdr((V727));
	if(type_of((V727))!=t_cons)FEwrong_type_argument(Scons,(V727));
	((V727))->c.c_cdr = Cnil;
	goto T1375;
goto T1379;
T1379:;
	V726= (long)(1)+(V726);
	V727= cdr((V727));
	goto T1378;}
goto T1375;
T1375:;
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
	goto T1399;}
	base[1]= (V721);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1399;
T1399:;
	if(!(endp_prop((V721)))){
	goto T1397;}
	base[1]= (V720);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1397;
T1397:;
	V722= make_cons(Cnil,Cnil);
	V723= (V722);
	V724= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V720))));
	V725= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V721))));
goto T1348;
T1348:;
	base[1]= (V724);
	base[2]= (V725);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1411;}
	goto T1349;
goto T1411;
T1411:;
	base[1]= (V725);
	base[2]= (V724);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1416;}
	goto T1350;
goto T1416;
T1416:;
	goto T1349;
goto T1349;
T1349:;
	if(type_of((V723))!=t_cons)FEwrong_type_argument(Scons,(V723));
	((V723))->c.c_cdr = (V720);
	V723= cdr((V723));
	V720= cdr((V720));
	if(!(endp_prop((V720)))){
	goto T1425;}
	if(type_of((V723))!=t_cons)FEwrong_type_argument(Scons,(V723));
	((V723))->c.c_cdr = (V721);
	base[1]= cdr((V722));
	vs_top=(vs_base=base+1)+1;
	return;
goto T1425;
T1425:;
	V724= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V720))));
	goto T1348;
goto T1350;
T1350:;
	if(type_of((V723))!=t_cons)FEwrong_type_argument(Scons,(V723));
	((V723))->c.c_cdr = (V721);
	V723= cdr((V723));
	V721= cdr((V721));
	if(!(endp_prop((V721)))){
	goto T1436;}
	if(type_of((V723))!=t_cons)FEwrong_type_argument(Scons,(V723));
	((V723))->c.c_cdr = (V720);
	base[1]= cdr((V722));
	vs_top=(vs_base=base+1)+1;
	return;
goto T1436;
T1436:;
	V725= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V721))));
	goto T1348;}
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

