
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
	{register object V122;
	V122= car((V119));
	V120= make_cons((V122),(V120));}
	{register object V123;
	V123= car((V119));
	V119= cdr((V119));}
	V121= (long)(1)+(V121);
	goto T230;}
goto T227;
T227:;
	{register long V124;
	register long V125;
	V124= V114;
	V125= 0;
goto T248;
T248:;
	if((V124)>=(V115)){
	goto T250;}
	if((V125)>=(V118)){
	goto T250;}
	if(!(endp_prop((V119)))){
	goto T249;}
goto T250;
T250:;
	base[0]= (V120);
	base[1]= (V119);
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	{object V126 = vs_base[0];
	VMR11(V126)}
goto T249;
T249:;
	base[0]= car((V119));
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V113));
	vs_top=sup;
	V127= vs_base[0];
	if(((*(LnkLI41))((V108),(V109),(V105),V127))==Cnil){
	goto T261;}
	V125= (long)(1)+(V125);
	{register object V128;
	V128= car((V119));
	V119= cdr((V119));
	goto T259;}
goto T261;
T261:;
	{register object V129;
	V129= car((V119));
	V120= make_cons((V129),(V120));}
	{register object V130;
	V130= car((V119));
	V119= cdr((V119));}
goto T259;
T259:;
	V124= (long)(1)+(V124);
	goto T248;}}
goto T225;
T225:;
	V131 = make_fixnum(V114);
	V132 = make_fixnum(V115);
	V133 = make_fixnum(V118);
	{object V134 = (VFUN_NARGS=16,(*(LnkLI42))((V105),(V106),VV[10],(V107),VV[11],(V108),VV[12],(V109),VV[13],V131,VV[14],V132,VV[15],V133,VV[16],(V113)));
	VMR11(V134)}
goto T222;
T222:;
	V135 = make_fixnum(V114);
	V136 = make_fixnum(V115);
	V137 = make_fixnum(V118);
	{object V138 = (VFUN_NARGS=16,(*(LnkLI42))((V105),(V106),VV[10],(V107),VV[11],(V108),VV[12],(V109),VV[13],V135,VV[14],V136,VV[15],V137,VV[16],(V113)));
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
	V147= symbol_function(VV[33]);
	}else{
	V147=(Vcs[6]);}
	if(!(((V147))==(Cnil))){
	goto T280;}
	V147= symbol_function(VV[33]);
goto T280;
T280:;
	V148= symbol_function(VV[44]);
	{object V149 = (VFUN_NARGS=14,(*(LnkLI43))((V141),(V142),VV[10],(V143),VV[11],V148,VV[13],(V144),VV[14],(V145),VV[15],(V146),VV[16],(V147)));
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
	V158= symbol_function(VV[33]);
	}else{
	V158=(Vcs[6]);}
	if(!(((V158))==(Cnil))){
	goto T286;}
	V158= symbol_function(VV[33]);
goto T286;
T286:;
	V159= symbol_function(VV[44]);
	{object V160 = (VFUN_NARGS=14,(*(LnkLI43))((V152),(V153),VV[10],(V154),VV[12],V159,VV[13],(V155),VV[14],(V156),VV[15],(V157),VV[16],(V158)));
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
	V171= symbol_function(VV[33]);
	}else{
	V171=(Vcs[8]);}
	{long V172;
	V172= (long)length((V164));
	if(!(((V171))==(Cnil))){
	goto T293;}
	V171= symbol_function(VV[33]);
goto T293;
T293:;
	{register long V173;
	if(((V168))==Cnil){
	goto T299;}
	V173= (long)(*(LnkLI34))((V168));
	goto T297;
goto T299;
T299:;
	V173= 0;
goto T297;
T297:;
	{long V174;
	V174= (long)(*(LnkLI35))((V169),(V164));
	if(!((V173)<=(V174))){
	goto T303;}
	goto T302;
goto T303;
T303:;
	V175 = make_fixnum(V173);
	V176 = make_fixnum(V174);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V175,V176)));
goto T302;
T302:;
	{register long V177;
	if(((V170))!=Cnil){
	goto T307;}
	V177= 2147483647;
	goto T305;
goto T307;
T307:;
	V177= fix((V170));
goto T305;
T305:;
	if((V166)==Cnil){
	goto T310;}
	if((V167)==Cnil){
	goto T310;}
	(void)((*(LnkLI40))());
goto T310;
T310:;
	if(((V165))!=Cnil){
	goto T312;}
	if(!(type_of((V164))==t_cons||((V164))==Cnil)){
	goto T315;}
	{object V178;
	register object V179;
	V178= make_cons(Cnil,(V164));
	V179= (V178);
	{long V180;
	V180= 0;
goto T322;
T322:;
	if(!((V180)>=(V173))){
	goto T323;}
	goto T319;
goto T323;
T323:;
	{object V181;
	V181= car((V179));
	V179= cdr((V179));}
	V180= (long)(1)+(V180);
	goto T322;}
goto T319;
T319:;
	{long V182;
	long V183;
	V182= V173;
	V183= 0;
goto T337;
T337:;
	if((V182)>=(V174)){
	goto T339;}
	if((V183)>=(V177)){
	goto T339;}
	if(!(endp_prop(cdr((V179))))){
	goto T338;}
goto T339;
T339:;
	{object V184 = cdr((V178));
	VMR14(V184)}
goto T338;
T338:;
	base[1]= cadr((V179));
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event((V171));
	vs_top=sup;
	V185= vs_base[0];
	if(((*(LnkLI41))((V166),(V167),(V163),V185))==Cnil){
	goto T348;}
	V183= (long)(1)+(V183);
	if(type_of((V179))!=t_cons)FEwrong_type_argument(Scons,(V179));
	((V179))->c.c_cdr = cddr((V179));
	goto T346;
goto T348;
T348:;
	V179= cdr((V179));
goto T346;
T346:;
	V182= (long)(1)+(V182);
	goto T337;}}
goto T315;
T315:;
	{long V186;
	V187 = make_fixnum(V173);
	V188 = make_fixnum(V174);
	V189 = make_fixnum(V177);
	V186= fix((VFUN_NARGS=16,(*(LnkLI45))((V163),(V164),VV[10],(V165),VV[11],(V166),VV[12],(V167),VV[13],V187,VV[14],V188,VV[15],V189,VV[16],(V171))));
	if(!((V186)<(V177))){
	goto T359;}
	V177= V186;
goto T359;
T359:;
	{object V190;
	register long V191;
	long V192;
	long V193;
	V194= (*(LnkLI47))((V164));
	V195 = make_fixnum((long)(V172)-(V177));
	V190= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V194,V195));
	V191= 0;
	V192= 0;
	V193= 0;
goto T368;
T368:;
	if(!((V191)>=(V172))){
	goto T369;}
	{object V196 = (V190);
	VMR14(V196)}
goto T369;
T369:;
	if(!((V173)<=(V191))){
	goto T375;}
	if(!((V191)<(V174))){
	goto T375;}
	if(!((V193)<(V177))){
	goto T375;}
	base[0]= elt((V164),V191);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V171));
	vs_top=sup;
	V197= vs_base[0];
	if(((*(LnkLI41))((V166),(V167),(V163),V197))==Cnil){
	goto T375;}
	V193= (long)(1)+(V193);
	goto T373;
goto T375;
T375:;
	V198= elt((V164),V191);
	(void)(elt_set((V190),V192,/* INLINE-ARGS */V198));
	V192= (long)(1)+(V192);
goto T373;
T373:;
	V191= (long)(1)+(V191);
	goto T368;}}
goto T312;
T312:;
	{long V199;
	V200 = make_fixnum(V173);
	V201 = make_fixnum(V174);
	V202 = make_fixnum(V177);
	V199= fix((VFUN_NARGS=16,(*(LnkLI45))((V163),(V164),VV[10],(V165),VV[11],(V166),VV[12],(V167),VV[13],V200,VV[14],V201,VV[15],V202,VV[16],(V171))));
	if(!((V199)<(V177))){
	goto T392;}
	V177= V199;
goto T392;
T392:;
	{object V203;
	register long V204;
	long V205;
	long V206;
	V207= (*(LnkLI47))((V164));
	V208 = make_fixnum((long)(V172)-(V177));
	V203= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V207,V208));
	V204= (long)(-1)+(V172);
	V205= (long)(-1)+((long)(V172)-(V177));
	V206= 0;
goto T401;
T401:;
	if(!((V204)<(0))){
	goto T402;}
	{object V209 = (V203);
	VMR14(V209)}
goto T402;
T402:;
	if(!((V173)<=(V204))){
	goto T408;}
	if(!((V204)<(V174))){
	goto T408;}
	if(!((V206)<(V177))){
	goto T408;}
	base[0]= elt((V164),V204);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V171));
	vs_top=sup;
	V210= vs_base[0];
	if(((*(LnkLI41))((V166),(V167),(V163),V210))==Cnil){
	goto T408;}
	V206= (long)(1)+(V206);
	goto T406;
goto T408;
T408:;
	V211= elt((V164),V204);
	(void)(elt_set((V203),V205,/* INLINE-ARGS */V211));
	V205= (long)(-1)+(V205);
goto T406;
T406:;
	V204= (long)(-1)+(V204);
	goto T401;}}}}}}
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
	V220= symbol_function(VV[33]);
	}else{
	V220=(Vcs[6]);}
	if(!(((V220))==(Cnil))){
	goto T425;}
	V220= symbol_function(VV[33]);
goto T425;
T425:;
	V221= symbol_function(VV[44]);
	{object V222 = (VFUN_NARGS=14,(*(LnkLI42))((V214),(V215),VV[10],(V216),VV[11],V221,VV[13],(V217),VV[14],(V218),VV[15],(V219),VV[16],(V220)));
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
	V231= symbol_function(VV[33]);
	}else{
	V231=(Vcs[6]);}
	if(!(((V231))==(Cnil))){
	goto T431;}
	V231= symbol_function(VV[33]);
goto T431;
T431:;
	V232= symbol_function(VV[44]);
	{object V233 = (VFUN_NARGS=14,(*(LnkLI42))((V225),(V226),VV[10],(V227),VV[12],V232,VV[13],(V228),VV[14],(V229),VV[15],(V230),VV[16],(V231)));
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
	V243= symbol_function(VV[33]);
	}else{
	V243=(Vcs[7]);}
	if(!(((V243))==(Cnil))){
	goto T437;}
	V243= symbol_function(VV[33]);
goto T437;
T437:;
	{long V244;
	if(((V241))==Cnil){
	goto T443;}
	V244= (long)(*(LnkLI34))((V241));
	goto T441;
goto T443;
T443:;
	V244= 0;
goto T441;
T441:;
	{long V245;
	V245= (long)(*(LnkLI35))((V242),(V237));
	if(!((V244)<=(V245))){
	goto T447;}
	goto T446;
goto T447;
T447:;
	V246 = make_fixnum(V244);
	V247 = make_fixnum(V245);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V246,V247)));
goto T446;
T446:;
	if((V239)==Cnil){
	goto T449;}
	if((V240)==Cnil){
	goto T449;}
	(void)((*(LnkLI40))());
goto T449;
T449:;
	if(((V238))!=Cnil){
	goto T451;}
	{register long V248;
	register long V249;
	V248= V244;
	V249= 0;
goto T456;
T456:;
	if(!((V248)>=(V245))){
	goto T457;}
	{object V250 = make_fixnum(V249);
	VMR17(V250)}
goto T457;
T457:;
	base[0]= elt((V237),V248);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V243));
	vs_top=sup;
	V251= vs_base[0];
	if(((*(LnkLI41))((V239),(V240),(V236),V251))==Cnil){
	goto T461;}
	V249= (long)(1)+(V249);
goto T461;
T461:;
	V248= (long)(1)+(V248);
	goto T456;}
goto T451;
T451:;
	{register long V252;
	register long V253;
	V252= (long)(-1)+(V245);
	V253= 0;
goto T473;
T473:;
	if(!((V252)<(V244))){
	goto T474;}
	{object V254 = make_fixnum(V253);
	VMR17(V254)}
goto T474;
T474:;
	base[0]= elt((V237),V252);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V243));
	vs_top=sup;
	V255= vs_base[0];
	if(((*(LnkLI41))((V239),(V240),(V236),V255))==Cnil){
	goto T478;}
	V253= (long)(1)+(V253);
goto T478;
T478:;
	V252= (long)(-1)+(V252);
	goto T473;}}}
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
	V263= symbol_function(VV[33]);
	}else{
	V263=(Vcs[5]);}
	if(!(((V263))==(Cnil))){
	goto T488;}
	V263= symbol_function(VV[33]);
goto T488;
T488:;
	V264= symbol_function(VV[44]);
	{object V265 = (VFUN_NARGS=12,(*(LnkLI48))((V258),(V259),VV[10],(V260),VV[11],V264,VV[13],(V261),VV[14],(V262),VV[16],(V263)));
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
	V273= symbol_function(VV[33]);
	}else{
	V273=(Vcs[5]);}
	if(!(((V273))==(Cnil))){
	goto T494;}
	V273= symbol_function(VV[33]);
goto T494;
T494:;
	V274= symbol_function(VV[44]);
	{object V275 = (VFUN_NARGS=12,(*(LnkLI48))((V268),(V269),VV[10],(V270),VV[12],V274,VV[13],(V271),VV[14],(V272),VV[16],(V273)));
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
	V286= symbol_function(VV[33]);
	}else{
	V286=(Vcs[8]);}
	if(!(((V286))==(Cnil))){
	goto T500;}
	V286= symbol_function(VV[33]);
goto T500;
T500:;
	{long V287;
	if(((V283))==Cnil){
	goto T506;}
	V287= (long)(*(LnkLI34))((V283));
	goto T504;
goto T506;
T506:;
	V287= 0;
goto T504;
T504:;
	{long V288;
	V288= (long)(*(LnkLI35))((V284),(V279));
	if(!((V287)<=(V288))){
	goto T510;}
	goto T509;
goto T510;
T510:;
	V289 = make_fixnum(V287);
	V290 = make_fixnum(V288);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V289,V290)));
goto T509;
T509:;
	{long V291;
	if(((V285))!=Cnil){
	goto T514;}
	V291= 2147483647;
	goto T512;
goto T514;
T514:;
	V291= fix((V285));
goto T512;
T512:;
	if((V281)==Cnil){
	goto T517;}
	if((V282)==Cnil){
	goto T517;}
	(void)((*(LnkLI40))());
goto T517;
T517:;
	if(((V280))!=Cnil){
	goto T519;}
	{register long V292;
	register long V293;
	V292= V287;
	V293= 0;
goto T524;
T524:;
	if(!((V292)>=(V288))){
	goto T525;}
	{object V294 = make_fixnum(V293);
	VMR20(V294)}
goto T525;
T525:;
	if(!((V293)<(V291))){
	goto T529;}
	base[0]= elt((V279),V292);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V286));
	vs_top=sup;
	V295= vs_base[0];
	if(((*(LnkLI41))((V281),(V282),(V278),V295))==Cnil){
	goto T529;}
	V293= (long)(1)+(V293);
goto T529;
T529:;
	V292= (long)(1)+(V292);
	goto T524;}
goto T519;
T519:;
	{register long V296;
	register long V297;
	V296= (long)(-1)+(V288);
	V297= 0;
goto T543;
T543:;
	if(!((V296)<(V287))){
	goto T544;}
	{object V298 = make_fixnum(V297);
	VMR20(V298)}
goto T544;
T544:;
	if(!((V297)<(V291))){
	goto T548;}
	base[0]= elt((V279),V296);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V286));
	vs_top=sup;
	V299= vs_base[0];
	if(((*(LnkLI41))((V281),(V282),(V278),V299))==Cnil){
	goto T548;}
	V297= (long)(1)+(V297);
goto T548;
T548:;
	V296= (long)(-1)+(V296);
	goto T543;}}}}
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
	V308= symbol_function(VV[33]);
	}else{
	V308=(Vcs[6]);}
	if(!(((V308))==(Cnil))){
	goto T560;}
	V308= symbol_function(VV[33]);
goto T560;
T560:;
	V309= symbol_function(VV[44]);
	{object V310 = (VFUN_NARGS=14,(*(LnkLI45))((V302),(V303),VV[10],(V304),VV[11],V309,VV[13],(V305),VV[14],(V306),VV[15],(V307),VV[16],(V308)));
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
	V319= symbol_function(VV[33]);
	}else{
	V319=(Vcs[6]);}
	if(!(((V319))==(Cnil))){
	goto T566;}
	V319= symbol_function(VV[33]);
goto T566;
T566:;
	V320= symbol_function(VV[44]);
	{object V321 = (VFUN_NARGS=14,(*(LnkLI45))((V313),(V314),VV[10],(V315),VV[12],V320,VV[13],(V316),VV[14],(V317),VV[15],(V318),VV[16],(V319)));
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
	V334= symbol_function(VV[33]);
	}else{
	V334=(Vcs[9]);}
	{long V335;
	V335= (long)length((V327));
	if(!(((V334))==(Cnil))){
	goto T573;}
	V334= symbol_function(VV[33]);
goto T573;
T573:;
	{long V336;
	if(((V331))==Cnil){
	goto T579;}
	V336= (long)(*(LnkLI34))((V331));
	goto T577;
goto T579;
T579:;
	V336= 0;
goto T577;
T577:;
	{long V337;
	V337= (long)(*(LnkLI35))((V332),(V327));
	if(!((V336)<=(V337))){
	goto T583;}
	goto T582;
goto T583;
T583:;
	V338 = make_fixnum(V336);
	V339 = make_fixnum(V337);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V338,V339)));
goto T582;
T582:;
	{long V340;
	if(((V333))!=Cnil){
	goto T587;}
	V340= 2147483647;
	goto T585;
goto T587;
T587:;
	V340= fix((V333));
goto T585;
T585:;
	if((V329)==Cnil){
	goto T590;}
	if((V330)==Cnil){
	goto T590;}
	(void)((*(LnkLI40))());
goto T590;
T590:;
	if(((V328))!=Cnil){
	goto T592;}
	{register object V341;
	register long V342;
	register long V343;
	V344= (*(LnkLI47))((V327));
	V345 = make_fixnum(V335);
	V341= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V344,V345));
	V342= 0;
	V343= 0;
goto T598;
T598:;
	if(!((V342)>=(V335))){
	goto T599;}
	{object V346 = (V341);
	VMR23(V346)}
goto T599;
T599:;
	if(!((V336)<=(V342))){
	goto T605;}
	if(!((V342)<(V337))){
	goto T605;}
	if(!((V343)<(V340))){
	goto T605;}
	base[0]= elt((V327),V342);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V334));
	vs_top=sup;
	V347= vs_base[0];
	if(((*(LnkLI41))((V329),(V330),(V326),V347))==Cnil){
	goto T605;}
	(void)(elt_set((V341),V342,(V325)));
	V343= (long)(1)+(V343);
	goto T603;
goto T605;
T605:;
	V348= elt((V327),V342);
	(void)(elt_set((V341),V342,/* INLINE-ARGS */V348));
goto T603;
T603:;
	V342= (long)(1)+(V342);
	goto T598;}
goto T592;
T592:;
	{register object V349;
	register long V350;
	register long V351;
	V352= (*(LnkLI47))((V327));
	V353 = make_fixnum(V335);
	V349= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V352,V353));
	V350= (long)(-1)+(V335);
	V351= 0;
goto T624;
T624:;
	if(!((V350)<(0))){
	goto T625;}
	{object V354 = (V349);
	VMR23(V354)}
goto T625;
T625:;
	if(!((V336)<=(V350))){
	goto T631;}
	if(!((V350)<(V337))){
	goto T631;}
	if(!((V351)<(V340))){
	goto T631;}
	base[0]= elt((V327),V350);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V334));
	vs_top=sup;
	V355= vs_base[0];
	if(((*(LnkLI41))((V329),(V330),(V326),V355))==Cnil){
	goto T631;}
	(void)(elt_set((V349),V350,(V325)));
	V351= (long)(1)+(V351);
	goto T629;
goto T631;
T631:;
	V356= elt((V327),V350);
	(void)(elt_set((V349),V350,/* INLINE-ARGS */V356));
goto T629;
T629:;
	V350= (long)(-1)+(V350);
	goto T624;}}}}}
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
	V367= symbol_function(VV[33]);
	}else{
	V367=(Vcs[7]);}
	if(!(((V367))==(Cnil))){
	goto T647;}
	V367= symbol_function(VV[33]);
goto T647;
T647:;
	V368= symbol_function(VV[44]);
	{object V369 = (VFUN_NARGS=15,(*(LnkLI49))((V360),(V361),(V362),VV[10],(V363),VV[11],V368,VV[13],(V364),VV[14],(V365),VV[15],(V366),VV[16],(V367)));
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
	V380= symbol_function(VV[33]);
	}else{
	V380=(Vcs[7]);}
	if(!(((V380))==(Cnil))){
	goto T653;}
	V380= symbol_function(VV[33]);
goto T653;
T653:;
	V381= symbol_function(VV[44]);
	{object V382 = (VFUN_NARGS=15,(*(LnkLI49))((V373),(V374),(V375),VV[10],(V376),VV[12],V381,VV[13],(V377),VV[14],(V378),VV[15],(V379),VV[16],(V380)));
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
	V395= symbol_function(VV[33]);
	}else{
	V395=(Vcs[9]);}
	if(!(((V395))==(Cnil))){
	goto T659;}
	V395= symbol_function(VV[33]);
goto T659;
T659:;
	{long V396;
	if(((V392))==Cnil){
	goto T665;}
	V396= (long)(*(LnkLI34))((V392));
	goto T663;
goto T665;
T665:;
	V396= 0;
goto T663;
T663:;
	{long V397;
	V397= (long)(*(LnkLI35))((V393),(V388));
	if(!((V396)<=(V397))){
	goto T669;}
	goto T668;
goto T669;
T669:;
	V398 = make_fixnum(V396);
	V399 = make_fixnum(V397);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V398,V399)));
goto T668;
T668:;
	{long V400;
	if(((V394))!=Cnil){
	goto T673;}
	V400= 2147483647;
	goto T671;
goto T673;
T673:;
	V400= fix((V394));
goto T671;
T671:;
	if((V390)==Cnil){
	goto T676;}
	if((V391)==Cnil){
	goto T676;}
	(void)((*(LnkLI40))());
goto T676;
T676:;
	if(((V389))!=Cnil){
	goto T678;}
	{register long V401;
	register long V402;
	V401= V396;
	V402= 0;
goto T683;
T683:;
	if(!((V401)>=(V397))){
	goto T684;}
	{object V403 = (V388);
	VMR26(V403)}
goto T684;
T684:;
	if(!((V402)<(V400))){
	goto T688;}
	base[0]= elt((V388),V401);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V395));
	vs_top=sup;
	V404= vs_base[0];
	if(((*(LnkLI41))((V390),(V391),(V387),V404))==Cnil){
	goto T688;}
	(void)(elt_set((V388),V401,(V386)));
	V402= (long)(1)+(V402);
goto T688;
T688:;
	V401= (long)(1)+(V401);
	goto T683;}
goto T678;
T678:;
	{register long V405;
	register long V406;
	V405= (long)(-1)+(V397);
	V406= 0;
goto T703;
T703:;
	if(!((V405)<(V396))){
	goto T704;}
	{object V407 = (V388);
	VMR26(V407)}
goto T704;
T704:;
	if(!((V406)<(V400))){
	goto T708;}
	base[0]= elt((V388),V405);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V395));
	vs_top=sup;
	V408= vs_base[0];
	if(((*(LnkLI41))((V390),(V391),(V387),V408))==Cnil){
	goto T708;}
	(void)(elt_set((V388),V405,(V386)));
	V406= (long)(1)+(V406);
goto T708;
T708:;
	V405= (long)(-1)+(V405);
	goto T703;}}}}
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
	V419= symbol_function(VV[33]);
	}else{
	V419=(Vcs[7]);}
	if(!(((V419))==(Cnil))){
	goto T721;}
	V419= symbol_function(VV[33]);
goto T721;
T721:;
	V420= symbol_function(VV[44]);
	{object V421 = (VFUN_NARGS=15,(*(LnkLI50))((V412),(V413),(V414),VV[10],(V415),VV[11],V420,VV[13],(V416),VV[14],(V417),VV[15],(V418),VV[16],(V419)));
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
	V432= symbol_function(VV[33]);
	}else{
	V432=(Vcs[7]);}
	if(!(((V432))==(Cnil))){
	goto T727;}
	V432= symbol_function(VV[33]);
goto T727;
T727:;
	V433= symbol_function(VV[44]);
	{object V434 = (VFUN_NARGS=15,(*(LnkLI50))((V425),(V426),(V427),VV[10],(V428),VV[12],V433,VV[13],(V429),VV[14],(V430),VV[15],(V431),VV[16],(V432)));
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
	V444= symbol_function(VV[33]);
	}else{
	V444=(Vcs[7]);}
	if(!(((V444))==(Cnil))){
	goto T733;}
	V444= symbol_function(VV[33]);
goto T733;
T733:;
	{long V445;
	if(((V442))==Cnil){
	goto T739;}
	V445= (long)(*(LnkLI34))((V442));
	goto T737;
goto T739;
T739:;
	V445= 0;
goto T737;
T737:;
	{long V446;
	V446= (long)(*(LnkLI35))((V443),(V438));
	if(!((V445)<=(V446))){
	goto T743;}
	goto T742;
goto T743;
T743:;
	V447 = make_fixnum(V445);
	V448 = make_fixnum(V446);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V447,V448)));
goto T742;
T742:;
	if((V440)==Cnil){
	goto T745;}
	if((V441)==Cnil){
	goto T745;}
	(void)((*(LnkLI40))());
goto T745;
T745:;
	if(((V439))!=Cnil){
	goto T747;}
	{register long V449;
	V449= V445;
goto T751;
T751:;
	if(!((V449)>=(V446))){
	goto T752;}
	{object V450 = Cnil;
	VMR29(V450)}
goto T752;
T752:;
	base[0]= elt((V438),V449);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V444));
	vs_top=sup;
	V451= vs_base[0];
	if(((*(LnkLI41))((V440),(V441),(V437),V451))==Cnil){
	goto T756;}
	{object V452 = elt((V438),V449);
	VMR29(V452)}
goto T756;
T756:;
	V449= (long)(1)+(V449);
	goto T751;}
goto T747;
T747:;
	{register long V453;
	V453= (long)(-1)+(V446);
goto T766;
T766:;
	if(!((V453)<(V445))){
	goto T767;}
	{object V454 = Cnil;
	VMR29(V454)}
goto T767;
T767:;
	base[0]= elt((V438),V453);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V444));
	vs_top=sup;
	V455= vs_base[0];
	if(((*(LnkLI41))((V440),(V441),(V437),V455))==Cnil){
	goto T771;}
	{object V456 = elt((V438),V453);
	VMR29(V456)}
goto T771;
T771:;
	V453= (long)(-1)+(V453);
	goto T766;}}}
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
	V464= symbol_function(VV[33]);
	}else{
	V464=(Vcs[5]);}
	if(!(((V464))==(Cnil))){
	goto T780;}
	V464= symbol_function(VV[33]);
goto T780;
T780:;
	V465= symbol_function(VV[44]);
	{object V466 = (VFUN_NARGS=12,(*(LnkLI51))((V459),(V460),VV[10],(V461),VV[11],V465,VV[13],(V462),VV[14],(V463),VV[16],(V464)));
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
	V474= symbol_function(VV[33]);
	}else{
	V474=(Vcs[5]);}
	if(!(((V474))==(Cnil))){
	goto T786;}
	V474= symbol_function(VV[33]);
goto T786;
T786:;
	V475= symbol_function(VV[44]);
	{object V476 = (VFUN_NARGS=12,(*(LnkLI51))((V469),(V470),VV[10],(V471),VV[12],V475,VV[13],(V472),VV[14],(V473),VV[16],(V474)));
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
	V486= symbol_function(VV[33]);
	}else{
	V486=(Vcs[7]);}
	if(!(((V486))==(Cnil))){
	goto T792;}
	V486= symbol_function(VV[33]);
goto T792;
T792:;
	{long V487;
	if(((V484))==Cnil){
	goto T798;}
	V487= (long)(*(LnkLI34))((V484));
	goto T796;
goto T798;
T798:;
	V487= 0;
goto T796;
T796:;
	{long V488;
	V488= (long)(*(LnkLI35))((V485),(V480));
	if(!((V487)<=(V488))){
	goto T802;}
	goto T801;
goto T802;
T802:;
	V489 = make_fixnum(V487);
	V490 = make_fixnum(V488);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V489,V490)));
goto T801;
T801:;
	if((V482)==Cnil){
	goto T804;}
	if((V483)==Cnil){
	goto T804;}
	(void)((*(LnkLI40))());
goto T804;
T804:;
	if(((V481))!=Cnil){
	goto T806;}
	{register long V491;
	V491= V487;
goto T810;
T810:;
	if(!((V491)>=(V488))){
	goto T811;}
	{object V492 = Cnil;
	VMR32(V492)}
goto T811;
T811:;
	base[0]= elt((V480),V491);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V486));
	vs_top=sup;
	V493= vs_base[0];
	if(((*(LnkLI41))((V482),(V483),(V479),V493))==Cnil){
	goto T815;}
	{object V494 = make_fixnum(V491);
	VMR32(V494)}
goto T815;
T815:;
	V491= (long)(1)+(V491);
	goto T810;}
goto T806;
T806:;
	{register long V495;
	V495= (long)(-1)+(V488);
goto T825;
T825:;
	if(!((V495)<(V487))){
	goto T826;}
	{object V496 = Cnil;
	VMR32(V496)}
goto T826;
T826:;
	base[0]= elt((V480),V495);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V486));
	vs_top=sup;
	V497= vs_base[0];
	if(((*(LnkLI41))((V482),(V483),(V479),V497))==Cnil){
	goto T830;}
	{object V498 = make_fixnum(V495);
	VMR32(V498)}
goto T830;
T830:;
	V495= (long)(-1)+(V495);
	goto T825;}}}
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
	V506= symbol_function(VV[33]);
	}else{
	V506=(Vcs[5]);}
	if(!(((V506))==(Cnil))){
	goto T839;}
	V506= symbol_function(VV[33]);
goto T839;
T839:;
	V507= symbol_function(VV[44]);
	{object V508 = (VFUN_NARGS=12,(*(LnkLI52))((V501),(V502),VV[10],(V503),VV[11],V507,VV[13],(V504),VV[14],(V505),VV[16],(V506)));
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
	V516= symbol_function(VV[33]);
	}else{
	V516=(Vcs[5]);}
	if(!(((V516))==(Cnil))){
	goto T845;}
	V516= symbol_function(VV[33]);
goto T845;
T845:;
	V517= symbol_function(VV[44]);
	{object V518 = (VFUN_NARGS=12,(*(LnkLI52))((V511),(V512),VV[10],(V513),VV[12],V517,VV[13],(V514),VV[14],(V515),VV[16],(V516)));
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
	V526= symbol_function(VV[33]);
	}else{
	V526=(Vcs[6]);}
	if((V522)==Cnil){
	goto T851;}
	if((V523)==Cnil){
	goto T851;}
	(void)((*(LnkLI40))());
goto T851;
T851:;
	if(!(type_of((V520))==t_cons||((V520))==Cnil)){
	goto T852;}
	if(((V521))!=Cnil){
	goto T852;}
	if(((V524))!=Cnil){
	goto T852;}
	if(((V525))!=Cnil){
	goto T852;}
	if(!(endp_prop((V520)))){
	goto T861;}
	{object V527 = Cnil;
	VMR35(V527)}
goto T861;
T861:;
	{register object V528;
	register object V529;
	V528= (V520);
	V529= Cnil;
goto T865;
T865:;
	if(!(endp_prop(cdr((V528))))){
	goto T866;}
	base[0]= (V529);
	base[1]= (V528);
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	{object V530 = vs_base[0];
	VMR35(V530)}
goto T866;
T866:;
	base[0]= car((V528));
	base[1]= cdr((V528));
	base[2]= VV[11];
	base[3]= (V522);
	base[4]= VV[12];
	base[5]= (V523);
	base[6]= VV[16];
	base[7]= (V526);
	vs_top=(vs_base=base+0)+8;
	(void) (*Lnk53)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T872;}
	V529= make_cons(car((V528)),(V529));
goto T872;
T872:;
	V528= cdr((V528));
	goto T865;}
goto T852;
T852:;
	{object V531 = (VFUN_NARGS=13,(*(LnkLI54))((V520),VV[10],(V521),VV[11],(V522),VV[12],(V523),VV[13],(V524),VV[14],(V525),VV[16],(V526)));
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
	V539= symbol_function(VV[33]);
	}else{
	V539=(Vcs[6]);}
	{long V540;
	V540= (long)length((V533));
	if((V535)==Cnil){
	goto T889;}
	if((V536)==Cnil){
	goto T889;}
	(void)((*(LnkLI40))());
goto T889;
T889:;
	if(!(type_of((V533))==t_cons||((V533))==Cnil)){
	goto T890;}
	if(((V534))!=Cnil){
	goto T890;}
	if(((V537))!=Cnil){
	goto T890;}
	if(((V538))!=Cnil){
	goto T890;}
	if(!(endp_prop((V533)))){
	goto T899;}
	{object V541 = Cnil;
	VMR36(V541)}
goto T899;
T899:;
	{register object V542;
	V542= (V533);
goto T903;
T903:;
	if(!(endp_prop(cdr((V542))))){
	goto T904;}
	{object V543 = (V533);
	VMR36(V543)}
goto T904;
T904:;
	base[0]= car((V542));
	base[1]= cdr((V542));
	base[2]= VV[11];
	base[3]= (V535);
	base[4]= VV[12];
	base[5]= (V536);
	base[6]= VV[16];
	base[7]= (V539);
	vs_top=(vs_base=base+0)+8;
	(void) (*Lnk53)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T910;}
	if(type_of((V542))!=t_cons)FEwrong_type_argument(Scons,(V542));
	((V542))->c.c_car = cadr((V542));
	if(type_of((V542))!=t_cons)FEwrong_type_argument(Scons,(V542));
	((V542))->c.c_cdr = cddr((V542));
	goto T908;
goto T910;
T910:;
	V542= cdr((V542));
goto T908;
T908:;
	goto T903;}
goto T890;
T890:;
	{register long V544;
	if(((V537))==Cnil){
	goto T926;}
	V544= (long)(*(LnkLI34))((V537));
	goto T924;
goto T926;
T926:;
	V544= 0;
goto T924;
T924:;
	{register long V545;
	V545= (long)(*(LnkLI35))((V538),(V533));
	if(!((V544)<=(V545))){
	goto T930;}
	goto T929;
goto T930;
T930:;
	V546 = make_fixnum(V544);
	V547 = make_fixnum(V545);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V546,V547)));
goto T929;
T929:;
	if(((V534))!=Cnil){
	goto T933;}
	{long V548;
	long V549;
	V548= 0;
	V549= V544;
goto T938;
T938:;
	if(!((V549)>=(V545))){
	goto T939;}
	{object V550;
	register long V551;
	long V552;
	V553= (*(LnkLI47))((V533));
	V554 = make_fixnum((long)(V540)-(V548));
	V550= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V553,V554));
	V551= 0;
	V552= 0;
goto T946;
T946:;
	if(!((V551)>=(V540))){
	goto T947;}
	{object V555 = (V550);
	VMR36(V555)}
goto T947;
T947:;
	{object V556;
	if((V544)<=(V551)){
	goto T953;}
	V556= Cnil;
	goto T952;
goto T953;
T953:;
	if((V551)<(V545)){
	goto T955;}
	V556= Cnil;
	goto T952;
goto T955;
T955:;
	base[0]= elt((V533),V551);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V539));
	vs_top=sup;
	V557= vs_base[0];
	V558 = make_fixnum((long)(1)+(V551));
	V559 = make_fixnum(V545);
	V556= (VFUN_NARGS=12,(*(LnkLI52))(V557,(V533),VV[11],(V535),VV[12],(V536),VV[13],V558,VV[14],V559,VV[16],(V539)));
goto T952;
T952:;
	if(((V556))==Cnil){
	goto T960;}
	goto T951;
goto T960;
T960:;
	V560= elt((V533),V551);
	(void)(elt_set((V550),V552,/* INLINE-ARGS */V560));
	V552= (long)(1)+(V552);}
goto T951;
T951:;
	V551= (long)(1)+(V551);
	goto T946;}
goto T939;
T939:;
	base[0]= elt((V533),V549);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V539));
	vs_top=sup;
	V561= vs_base[0];
	V562 = make_fixnum((long)(1)+(V549));
	V563 = make_fixnum(V545);
	if(((VFUN_NARGS=12,(*(LnkLI52))(V561,(V533),VV[11],(V535),VV[12],(V536),VV[13],V562,VV[14],V563,VV[16],(V539))))==Cnil){
	goto T968;}
	V548= (long)(1)+(V548);
goto T968;
T968:;
	V549= (long)(1)+(V549);
	goto T938;}
goto T933;
T933:;
	{long V564;
	long V565;
	V564= 0;
	V565= (long)(-1)+(V545);
goto T980;
T980:;
	if(!((V565)<(V544))){
	goto T981;}
	{object V566;
	register long V567;
	long V568;
	V569= (*(LnkLI47))((V533));
	V570 = make_fixnum((long)(V540)-(V564));
	V566= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V569,V570));
	V567= (long)(-1)+(V540);
	V568= (long)((long)(-1)+(V540))-(V564);
goto T988;
T988:;
	if(!((V567)<(0))){
	goto T989;}
	{object V571 = (V566);
	VMR36(V571)}
goto T989;
T989:;
	{object V572;
	if((V544)<=(V567)){
	goto T995;}
	V572= Cnil;
	goto T994;
goto T995;
T995:;
	if((V567)<(V545)){
	goto T997;}
	V572= Cnil;
	goto T994;
goto T997;
T997:;
	base[0]= elt((V533),V567);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V539));
	vs_top=sup;
	V573= vs_base[0];
	V574 = make_fixnum(V544);
	V575 = make_fixnum(V567);
	V572= (VFUN_NARGS=14,(*(LnkLI52))(V573,(V533),VV[10],Ct,VV[11],(V535),VV[12],(V536),VV[13],V574,VV[14],V575,VV[16],(V539)));
goto T994;
T994:;
	if(((V572))==Cnil){
	goto T1002;}
	goto T993;
goto T1002;
T1002:;
	V576= elt((V533),V567);
	(void)(elt_set((V566),V568,/* INLINE-ARGS */V576));
	V568= (long)(-1)+(V568);}
goto T993;
T993:;
	V567= (long)(-1)+(V567);
	goto T988;}
goto T981;
T981:;
	base[0]= elt((V533),V565);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V539));
	vs_top=sup;
	V577= vs_base[0];
	V578 = make_fixnum(V544);
	V579 = make_fixnum(V565);
	if(((VFUN_NARGS=14,(*(LnkLI52))(V577,(V533),VV[10],Ct,VV[11],(V535),VV[12],(V536),VV[13],V578,VV[14],V579,VV[16],(V539))))==Cnil){
	goto T1010;}
	V564= (long)(1)+(V564);
goto T1010;
T1010:;
	V565= (long)(-1)+(V565);
	goto T980;}}}}
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
	V587= symbol_function(VV[33]);
	}else{
	V587=(Vcs[5]);}
	V588=(Vcs[6]);
	V589=(Vcs[7]);
	V590=(Vcs[8]);
	V591=(Vcs[9]);
	if((V585)==Cnil){
	goto T1020;}
	if((V586)==Cnil){
	goto T1020;}
	(void)((*(LnkLI40))());
goto T1020;
T1020:;
	{register long V592;
	if(((V588))==Cnil){
	goto T1023;}
	V592= (long)(*(LnkLI34))((V588));
	goto T1021;
goto T1023;
T1023:;
	V592= 0;
goto T1021;
T1021:;
	{register long V593;
	V593= (long)(*(LnkLI35))((V590),(V582));
	if(!((V592)<=(V593))){
	goto T1027;}
	goto T1026;
goto T1027;
T1027:;
	V594 = make_fixnum(V592);
	V595 = make_fixnum(V593);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V594,V595)));
goto T1026;
T1026:;
	{register long V596;
	if(((V589))==Cnil){
	goto T1031;}
	V596= (long)(*(LnkLI34))((V589));
	goto T1029;
goto T1031;
T1031:;
	V596= 0;
goto T1029;
T1029:;
	{register long V597;
	V597= (long)(*(LnkLI35))((V591),(V583));
	if(!((V596)<=(V597))){
	goto T1035;}
	goto T1034;
goto T1035;
T1035:;
	V598 = make_fixnum(V596);
	V599 = make_fixnum(V597);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V598,V599)));
goto T1034;
T1034:;
	if(((V584))!=Cnil){
	goto T1038;}
	{register long V600;
	register long V601;
	V600= V592;
	V601= V596;
goto T1043;
T1043:;
	if((V600)>=(V593)){
	goto T1045;}
	if(!((V601)>=(V597))){
	goto T1044;}
goto T1045;
T1045:;
	if(!((V600)>=(V593))){
	goto T1050;}
	if(!((V601)>=(V597))){
	goto T1050;}
	{object V602 = Cnil;
	VMR37(V602)}
goto T1050;
T1050:;
	{object V603 = make_fixnum(V600);
	VMR37(V603)}
goto T1044;
T1044:;
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
	if(((*(LnkLI41))((V585),(V586),V604,V605))!=Cnil){
	goto T1055;}
	{object V606 = make_fixnum(V600);
	VMR37(V606)}
goto T1055;
T1055:;
	V600= (long)(1)+(V600);
	V601= (long)(1)+(V601);
	goto T1043;}
goto T1038;
T1038:;
	{register long V607;
	register long V608;
	V607= (long)(-1)+(V593);
	V608= (long)(-1)+(V597);
goto T1069;
T1069:;
	if((V607)<(V592)){
	goto T1071;}
	if(!((V608)<(V596))){
	goto T1070;}
goto T1071;
T1071:;
	if(!((V607)<(V592))){
	goto T1076;}
	if(!((V608)<(V596))){
	goto T1076;}
	{object V609 = Cnil;
	VMR37(V609)}
goto T1076;
T1076:;
	{object V610 = make_fixnum((long)(1)+(V607));
	VMR37(V610)}
goto T1070;
T1070:;
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
	if(((*(LnkLI41))((V585),(V586),V611,V612))!=Cnil){
	goto T1081;}
	{object V613 = make_fixnum((long)(1)+(V607));
	VMR37(V613)}
goto T1081;
T1081:;
	V607= (long)(-1)+(V607);
	V608= (long)(-1)+(V608);
	goto T1069;}}}}}
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
	V621= symbol_function(VV[33]);
	}else{
	V621=(Vcs[5]);}
	V622=(Vcs[6]);
	V623=(Vcs[7]);
	V624=(Vcs[8]);
	V625=(Vcs[9]);
	if((V619)==Cnil){
	goto T1093;}
	if((V620)==Cnil){
	goto T1093;}
	(void)((*(LnkLI40))());
goto T1093;
T1093:;
	{long V626;
	if(((V622))==Cnil){
	goto T1096;}
	V626= (long)(*(LnkLI34))((V622));
	goto T1094;
goto T1096;
T1096:;
	V626= 0;
goto T1094;
T1094:;
	{long V627;
	V627= (long)(*(LnkLI35))((V624),(V616));
	if(!((V626)<=(V627))){
	goto T1100;}
	goto T1099;
goto T1100;
T1100:;
	V628 = make_fixnum(V626);
	V629 = make_fixnum(V627);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V628,V629)));
goto T1099;
T1099:;
	{register long V630;
	if(((V623))==Cnil){
	goto T1104;}
	V630= (long)(*(LnkLI34))((V623));
	goto T1102;
goto T1104;
T1104:;
	V630= 0;
goto T1102;
T1102:;
	{long V631;
	V631= (long)(*(LnkLI35))((V625),(V617));
	if(!((V630)<=(V631))){
	goto T1108;}
	goto T1107;
goto T1108;
T1108:;
	V632 = make_fixnum(V630);
	V633 = make_fixnum(V631);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V632,V633)));
goto T1107;
T1107:;
	if(((V618))!=Cnil){
	goto T1111;}
goto T1114;
T1114:;
	{register long V634;
	register long V635;
	V634= V626;
	V635= V630;
goto T1120;
T1120:;
	if(!((V634)>=(V627))){
	goto T1121;}
	{object V636 = make_fixnum(V630);
	VMR38(V636)}
goto T1121;
T1121:;
	if(!((V635)>=(V631))){
	goto T1125;}
	{object V637 = Cnil;
	VMR38(V637)}
goto T1125;
T1125:;
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
	if(((*(LnkLI41))((V619),(V620),V638,V639))!=Cnil){
	goto T1128;}
	goto T1116;
goto T1128;
T1128:;
	V634= (long)(1)+(V634);
	V635= (long)(1)+(V635);
	goto T1120;}
goto T1116;
T1116:;
	V630= (long)(1)+(V630);
	goto T1114;
goto T1111;
T1111:;
goto T1142;
T1142:;
	{register long V640;
	register long V641;
	V640= (long)(-1)+(V627);
	V641= (long)(-1)+(V631);
goto T1148;
T1148:;
	if(!((V640)<(V626))){
	goto T1149;}
	{object V642 = make_fixnum((long)(1)+(V641));
	VMR38(V642)}
goto T1149;
T1149:;
	if(!((V641)<(V630))){
	goto T1153;}
	{object V643 = Cnil;
	VMR38(V643)}
goto T1153;
T1153:;
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
	if(((*(LnkLI41))((V619),(V620),V644,V645))!=Cnil){
	goto T1156;}
	goto T1144;
goto T1156;
T1156:;
	V640= (long)(-1)+(V640);
	V641= (long)(-1)+(V641);
	goto T1148;}
goto T1144;
T1144:;
	V631= (long)(-1)+(V631);
	goto T1142;}}}}
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
	parse_key(vs_base+2,FALSE,FALSE,1,VV[16]);
	V646=(base[0]);
	V647=(base[1]);
	vs_top=sup;
	if(base[3]==Cnil){
	V648= symbol_function(VV[33]);
	}else{
	V648=(base[2]);}
	if(!(type_of((V646))==t_cons||((V646))==Cnil)){
	goto T1171;}
	base[4]= (V646);
	base[5]= (V647);
	base[6]= (V648);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk55)();
	return;
goto T1171;
T1171:;
	base[4]= (*(LnkLI56))((V646),0,(long)length((V646)),(V647),(V648));
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
	goto T1178;}
	{object V660 = (V655);
	VMR41(V660)}
goto T1178;
T1178:;
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
goto T1186;
T1186:;
goto T1190;
T1190:;
	V662= (long)(-1)+(V662);
	if((V661)<(V662)){
	goto T1194;}
	goto T1184;
goto T1194;
T1194:;
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
	goto T1191;}
	goto T1188;
goto T1191;
T1191:;
	goto T1190;
goto T1188;
T1188:;
goto T1205;
T1205:;
	V661= (long)(1)+(V661);
	if((V661)<(V662)){
	goto T1209;}
	goto T1184;
goto T1209;
T1209:;
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
	goto T1206;}
	goto T1203;
goto T1206;
T1206:;
	goto T1205;
goto T1203;
T1203:;
	{object V665;
	V665= elt((V655),V661);
	V666= elt((V655),V662);
	(void)(elt_set((V655),V661,/* INLINE-ARGS */V666));
	(void)(elt_set((V655),V662,(V665)));}
	goto T1186;
goto T1184;
T1184:;
	V667= elt((V655),V661);
	(void)(elt_set((V655),V656,/* INLINE-ARGS */V667));
	(void)(elt_set((V655),V661,(V663)));
	(void)((*(LnkLI56))((V655),V656,V661,(V658),(V659)));
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
	parse_key(vs_base+2,FALSE,FALSE,1,VV[16]);
	V668=(base[0]);
	V669=(base[1]);
	vs_top=sup;
	if(base[3]==Cnil){
	V670= symbol_function(VV[33]);
	}else{
	V670=(base[2]);}
	if(!(type_of((V668))==t_cons||((V668))==Cnil)){
	goto T1232;}
	base[4]= (V668);
	base[5]= (V669);
	base[6]= (V670);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk55)();
	return;
goto T1232;
T1232:;
	if(type_of((V668))==t_string){
	goto T1237;}
	if(!((type_of((V668))==t_bitvector))){
	goto T1238;}
goto T1237;
T1237:;
	base[4]= (V668);
	base[5]= (V669);
	base[6]= VV[16];
	base[7]= (V670);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk57)();
	return;
goto T1238;
T1238:;
	base[4]= (*(LnkLI58))((V668),VV[0]);
	base[5]= (V669);
	base[6]= (V670);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk55)();
	vs_top=sup;
	V671= vs_base[0];
	V672= (*(LnkLI47))((V668));
	base[4]= (*(LnkLI58))(V671,/* INLINE-ARGS */V672);
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
	V681= symbol_function(VV[33]);
	}else{
	V681=(Vcs[4]);}
	{long V682;
	long V683;
	V682= (long)length((V678));
	V683= (long)length((V679));
	if(!(equal((V681),Cnil))){
	goto T1253;}
	V681= symbol_function(VV[33]);
goto T1253;
T1253:;
	{register object V684;
	register long V685;
	register long V686;
	register long V687;
	V688 = make_fixnum((long)(V682)+(V683));
	V684= (VFUN_NARGS=2,(*(LnkLI46))((V677),V688));
	V685= 0;
	V686= 0;
	V687= 0;
goto T1262;
T1262:;
	if(!((V686)==(V682))){
	goto T1263;}
	if(!((V687)==(V683))){
	goto T1263;}
	{object V689 = (V684);
	VMR43(V689)}
goto T1263;
T1263:;
	if(!((V686)<(V682))){
	goto T1271;}
	if(!((V687)<(V683))){
	goto T1271;}
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
	goto T1276;}
	V690= elt((V678),V686);
	(void)(elt_set((V684),V685,/* INLINE-ARGS */V690));
	V686= (long)(1)+(V686);
	goto T1269;
goto T1276;
T1276:;
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
	goto T1285;}
	V691= elt((V679),V687);
	(void)(elt_set((V684),V685,/* INLINE-ARGS */V691));
	V687= (long)(1)+(V687);
	goto T1269;
goto T1285;
T1285:;
	V692= elt((V678),V686);
	(void)(elt_set((V684),V685,/* INLINE-ARGS */V692));
	V686= (long)(1)+(V686);
	goto T1269;
goto T1271;
T1271:;
	if(!((V686)<(V682))){
	goto T1296;}
	V693= elt((V678),V686);
	(void)(elt_set((V684),V685,/* INLINE-ARGS */V693));
	V686= (long)(1)+(V686);
	goto T1269;
goto T1296;
T1296:;
	V694= elt((V679),V687);
	(void)(elt_set((V684),V685,/* INLINE-ARGS */V694));
	V687= (long)(1)+(V687);
goto T1269;
T1269:;
	V685= (long)(1)+(V685);
	goto T1262;}}
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
	base[4]= (V695);
	vs_top=(vs_base=base+4)+1;
	Ltype_of();
	vs_top=sup;
	V700= vs_base[0];
	if(!((VV[17])==(V700))){
	goto T1308;}
	base[4]= (V695);
	base[5]= small_fixnum(0);
	vs_top=(vs_base=base+4)+2;
	Larray_dimension();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T1306;
goto T1308;
T1308:;
	base[3]= make_fixnum((long)length((V695)));
goto T1306;
T1306:;
	{object V699;
	{object V701;
	object V702= (V697);
	if(endp(V702)){
	V699= Cnil;
	goto T1314;}
	base[4]=V701=MMcons(Cnil,Cnil);
goto T1315;
T1315:;
	base[5]= (V702->c.c_car);
	vs_top=(vs_base=base+5)+1;
	Llength();
	vs_top=sup;
	(V701->c.c_car)= vs_base[0];
	V702=MMcdr(V702);
	if(endp(V702)){
	V699= base[4];
	goto T1314;}
	V701=MMcdr(V701)=MMcons(Cnil,Cnil);
	goto T1315;}
goto T1314;
T1314:;
	 vs_top=base+4;
	 while(!endp(V699))
	 {vs_push(car(V699));V699=cdr(V699);}
	vs_base=base+3;}
	Lmin();
	vs_top=sup;
	V698= vs_base[0];
	base[3]= (V695);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V703= vs_base[0];
	if(!((VV[17])==(V703))){
	goto T1318;}
	base[3]= (V695);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk59)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1318;}
	base[3]= (V695);
	base[4]= (V698);
	vs_top=(vs_base=base+3)+2;
	siLfill_pointer_set();
	vs_top=sup;
goto T1318;
T1318:;
	{register object V704;
	register object V705;
	V704= (V698);
	V705= small_fixnum(0);
goto T1331;
T1331:;
	if(!(number_compare((V705),(V704))>=0)){
	goto T1332;}
	base[3]= (V695);
	vs_top=(vs_base=base+3)+1;
	return;
goto T1332;
T1332:;
	base[3]= (V696);
	{object V707;
	{object V708;
	object V709= (V697);
	if(endp(V709)){
	V707= Cnil;
	goto T1339;}
	base[4]=V708=MMcons(Cnil,Cnil);
goto T1340;
T1340:;
	{register object V710;
	V710= (V709->c.c_car);
	(V708->c.c_car)= elt((V710),fixint((V705)));}
	V709=MMcdr(V709);
	if(endp(V709)){
	V707= base[4];
	goto T1339;}
	V708=MMcdr(V708)=MMcons(Cnil,Cnil);
	goto T1340;}
goto T1339;
T1339:;
	 vs_top=base+4;
	 while(!endp(V707))
	 {vs_push(car(V707));V707=cdr(V707);}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	vs_top=sup;
	V706= vs_base[0];
	(void)(elt_set((V695),fixint((V705)),V706));
	V705= one_plus((V705));
	goto T1331;}}
	}
}
/*	macro definition for WITH-HASH-TABLE-ITERATOR	*/

static void L46()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_reserve(VM45);
	check_arg(2);
	vs_top=sup;
	{object V711=base[0]->c.c_cdr;
	if(endp(V711))invalid_macro_call();
	{object V712= (V711->c.c_car);
	if(endp(V712))invalid_macro_call();
	base[2]= (V712->c.c_car);
	V712=V712->c.c_cdr;
	if(endp(V712))invalid_macro_call();
	base[3]= (V712->c.c_car);
	V712=V712->c.c_cdr;
	if(!endp(V712))invalid_macro_call();}
	V711=V711->c.c_cdr;
	base[4]= V711;}
	{object V713;
	object V714;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V713= vs_base[0];
	base[5]= VV[18];
	vs_top=(vs_base=base+5)+1;
	Lgensym();
	vs_top=sup;
	V714= vs_base[0];
	V715= list(2,(V713),base[3]);
	V716= list(2,/* INLINE-ARGS */V715,list(2,(V714),small_fixnum(0)));
	V717= list(2,VV[24],(V713));
	V718= list(4,VV[0],VV[23],/* INLINE-ARGS */V717,list(2,VV[24],(V714)));
	V719= list(3,base[2],Cnil,list(5,VV[0],VV[21],VV[22],/* INLINE-ARGS */V718,list(4,VV[0],VV[25],list(4,VV[0],VV[26],list(4,VV[0],VV[27],list(2,VV[24],(V714)),VV[28]),VV[29]),VV[30])));
	base[5]= list(3,VV[19],/* INLINE-ARGS */V716,listA(3,VV[20],make_cons(/* INLINE-ARGS */V719,Cnil),base[4]));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	local function SORT	*/

static void L41(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_reserve(VM46);
	{object V720;
	check_arg(1);
	V720=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{long V721;
	register object V722;
	register object V723;
	object V724;
	register object V725;
	register object V726;
	register object V727;
	V721= 0;
	V722= Cnil;
	V723= Cnil;
	V724= Cnil;
	V725= Cnil;
	V726= Cnil;
	V727= Cnil;
	V721= (long)length((V720));
	if(!((V721)<(2))){
	goto T1357;}
	base[1]= (V720);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1357;
T1357:;
	if(!((V721)==(2))){
	goto T1355;}
	V726= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V720))));
	V727= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(cadr((V720))));
	base[1]= (V726);
	base[2]= (V727);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1366;}
	base[1]= (V720);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1366;
T1366:;
	base[1]= (V727);
	base[2]= (V726);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1371;}
	base[1]= nreverse((V720));
	vs_top=(vs_base=base+1)+1;
	return;
goto T1371;
T1371:;
	base[1]= (V720);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1355;
T1355:;
	V721= (long)(V721>=0&&(2)>0?(V721)/(2):ifloor(V721,2));
	{long V728;
	register object V729;
	V728= 1;
	V729= (V720);
goto T1380;
T1380:;
	if(!((V728)>=(V721))){
	goto T1381;}
	V722= (V720);
	V723= cdr((V729));
	if(type_of((V729))!=t_cons)FEwrong_type_argument(Scons,(V729));
	((V729))->c.c_cdr = Cnil;
	goto T1377;
goto T1381;
T1381:;
	V728= (long)(1)+(V728);
	V729= cdr((V729));
	goto T1380;}
goto T1377;
T1377:;
	base[1]= (V722);
	vs_top=(vs_base=base+1)+1;
	L41(base0);
	vs_top=sup;
	V722= vs_base[0];
	base[1]= (V723);
	vs_top=(vs_base=base+1)+1;
	L41(base0);
	vs_top=sup;
	V723= vs_base[0];
	if(!(endp_prop((V722)))){
	goto T1401;}
	base[1]= (V723);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1401;
T1401:;
	if(!(endp_prop((V723)))){
	goto T1399;}
	base[1]= (V722);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1399;
T1399:;
	V724= make_cons(Cnil,Cnil);
	V725= (V724);
	V726= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V722))));
	V727= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V723))));
goto T1350;
T1350:;
	base[1]= (V726);
	base[2]= (V727);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1413;}
	goto T1351;
goto T1413;
T1413:;
	base[1]= (V727);
	base[2]= (V726);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1418;}
	goto T1352;
goto T1418;
T1418:;
	goto T1351;
goto T1351;
T1351:;
	if(type_of((V725))!=t_cons)FEwrong_type_argument(Scons,(V725));
	((V725))->c.c_cdr = (V722);
	V725= cdr((V725));
	V722= cdr((V722));
	if(!(endp_prop((V722)))){
	goto T1427;}
	if(type_of((V725))!=t_cons)FEwrong_type_argument(Scons,(V725));
	((V725))->c.c_cdr = (V723);
	base[1]= cdr((V724));
	vs_top=(vs_base=base+1)+1;
	return;
goto T1427;
T1427:;
	V726= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V722))));
	goto T1350;
goto T1352;
T1352:;
	if(type_of((V725))!=t_cons)FEwrong_type_argument(Scons,(V725));
	((V725))->c.c_cdr = (V723);
	V725= cdr((V725));
	V723= cdr((V723));
	if(!(endp_prop((V723)))){
	goto T1438;}
	if(type_of((V725))!=t_cons)FEwrong_type_argument(Scons,(V725));
	((V725))->c.c_cdr = (V722);
	base[1]= cdr((V724));
	vs_top=(vs_base=base+1)+1;
	return;
goto T1438;
T1438:;
	V727= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V723))));
	goto T1350;}
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

