
#include "cmpinclude.h"
#include "seqlib.h"
init_seqlib(){do_init(VV);}
/*	local entry for function SEQTYPE	*/

static object LI1(V2)

register object V2;
{	 VMB1 VMS1 VMV1
TTL:;
	if(!(type_of((V2))==t_cons||((V2))==Cnil)){
	goto T2;}
	{object V3 = VV[0];
	VMR1(V3)}
T2:;
	if(!(type_of((V2))==t_string)){
	goto T5;}
	{object V4 = VV[1];
	VMR1(V4)}
T5:;
	if(!((type_of((V2))==t_bitvector))){
	goto T8;}
	{object V5 = VV[2];
	VMR1(V5)}
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
T11:;
	base[0]= VV[4];
	base[1]= (V2);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V8 = vs_base[0];
	VMR1(V8)}
}
/*	local entry for function CALL-TEST	*/

static object LI2(V13,V14,V15,V16)

object V13;object V14;object V15;object V16;
{	 VMB2 VMS2 VMV2
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
T23:;
	{object V20 = (eql((V15),(V16))?Ct:Cnil);
	VMR2(V20)}
}
/*	local entry for function CHECK-SEQ-START-END	*/

static object LI3(V23,V24)

object V23;object V24;
{	 VMB3 VMS3 VMV3
TTL:;
	if(!(type_of((V23))==t_fixnum)){
	goto T29;}
	if(type_of((V24))==t_fixnum){
	goto T28;}
T29:;
	base[0]= VV[5];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T28:;
	if(!((fix((V23)))>(fix((V24))))){
	goto T35;}
	base[0]= VV[6];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V25 = vs_base[0];
	VMR3(V25)}
T35:;
	{object V26 = Cnil;
	VMR3(V26)}
}
/*	local entry for function TEST-ERROR	*/

static object LI4()

{	 VMB4 VMS4 VMV4
TTL:;
	base[0]= VV[7];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V27 = vs_base[0];
	VMR4(V27)}
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
	if(narg <1) too_few_arguments();
	V29= V28;
	narg = narg - 1;
	if (narg <= 0) goto T39;
	else {
	va_start(ap);
	V30= va_arg(ap,object);}
	--narg; goto T40;
T39:;
	V30= Cnil;
T40:;
	base[0]= VV[8];
	if(((V30))==Cnil){
	goto T45;}
	base[1]= list(2,(V29),(V30));
	goto T43;
T45:;
	base[1]= (V29);
T43:;
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V31 = vs_base[0];
	VMR5(V31)}}
	}
/*	local entry for function THE-END	*/

static int LI6(V34,V35)

register object V34;object V35;
{	 VMB6 VMS6 VMV6
TTL:;
	if(!(type_of((V34))==t_fixnum)){
	goto T48;}
	if(!((fix((V34)))<=(length((V35))))){
	goto T51;}
	goto T50;
T51:;
	(void)((VFUN_NARGS=1,(*(LnkLI31))((V34))));
T50:;
	{int V36 = fix((V34));
	VMR6(V36)}
T48:;
	if(((V34))!=Cnil){
	goto T54;}
	{int V37 = length((V35));
	VMR6(V37)}
T54:;
	{int V38 = fix((VFUN_NARGS=1,(*(LnkLI31))((V34))));
	VMR6(V38)}
}
/*	local entry for function THE-START	*/

static int LI7(V40)

register object V40;
{	 VMB7 VMS7 VMV7
TTL:;
	if(!(type_of((V40))==t_fixnum)){
	goto T57;}
	if(!((fix((V40)))>=(0))){
	goto T60;}
	goto T59;
T60:;
	(void)((VFUN_NARGS=1,(*(LnkLI31))((V40))));
T59:;
	{int V41 = fix((V40));
	VMR7(V41)}
T57:;
	if(((V40))!=Cnil){
	goto T63;}
	{int V42 = 0;
	VMR7(V42)}
T63:;
	{int V43 = fix((VFUN_NARGS=1,(*(LnkLI31))((V40))));
	VMR7(V43)}
}
/*	function definition for REDUCE	*/

static L8()
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
	{register int V52;
	if(((V47))==Cnil){
	goto T68;}
	V52= (*(LnkLI34))((V47));
	goto T66;
T68:;
	V52= 0;
T66:;
	{register int V53;
	V53= (*(LnkLI35))((V48),(V45));
	if(!((V52)<=(V53))){
	goto T72;}
	goto T71;
T72:;
	V54 = make_fixnum(V52);
	V55 = make_fixnum(V53);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V54,V55)));
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
T80:;
	V56= elt((V45),V52);
	V49= (
	(type_of((V51)) == t_sfun ?(*(object (*)())(((V51))->sfn.sfn_self)):
	(fcall.fun=((V51)),fcall.argd=1,fcalln))(/* INLINE-ARGS */V56));
	V52= (1)+(V52);
T77:;
	{register object V57;
	V57= (V49);
T87:;
	if(!((V52)>=(V53))){
	goto T88;}
	base[12]= (V57);
	vs_top=(vs_base=base+12)+1;
	return;
T88:;
	{object V59;
	V59= elt((V45),V52);
	V52= (1)+(V52);
	base[12]= (V59);}
	vs_top=(vs_base=base+12)+1;
	super_funcall_no_event((V51));
	vs_top=sup;
	V58= vs_base[0];
	V57= (
	(type_of((V44)) == t_sfun ?(*(object (*)())(((V44))->sfn.sfn_self)):
	(fcall.fun=((V44)),fcall.argd=2,fcalln))((V57),V58));
	goto T87;}
T75:;
	if(((V50))!=Cnil){
	goto T100;}
	if(!((V52)>=(V53))){
	goto T103;}
	vs_base=vs_top;
	super_funcall_no_event((V44));
	return;
T103:;
	V53= (V53)+(-1);
	V60= elt((V45),V53);
	V49= (
	(type_of((V51)) == t_sfun ?(*(object (*)())(((V51))->sfn.sfn_self)):
	(fcall.fun=((V51)),fcall.argd=1,fcalln))(/* INLINE-ARGS */V60));
T100:;
	{register object V61;
	V61= (V49);
T110:;
	if(!((V52)>=(V53))){
	goto T111;}
	base[12]= (V61);
	vs_top=(vs_base=base+12)+1;
	return;
T111:;
	V53= (-1)+(V53);
	base[12]= elt((V45),V53);
	vs_top=(vs_base=base+12)+1;
	super_funcall_no_event((V51));
	vs_top=sup;
	V62= vs_base[0];
	V61= (
	(type_of((V44)) == t_sfun ?(*(object (*)())(((V44))->sfn.sfn_self)):
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
	if(narg <2) too_few_arguments();
	V65= V64;
	V66= V63;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI9key,ap);
	V67=(Vcs[2]);
	V68=(Vcs[3]);
	{int V69;
	if(((V67))==Cnil){
	goto T124;}
	V69= (*(LnkLI34))((V67));
	goto T122;
T124:;
	V69= 0;
T122:;
	{register int V70;
	V70= (*(LnkLI35))((V68),(V65));
	if(!((V69)<=(V70))){
	goto T128;}
	goto T127;
T128:;
	V71 = make_fixnum(V69);
	V72 = make_fixnum(V70);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V71,V72)));
T127:;
	{register int V73;
	V73= V69;
T132:;
	if(!((V73)>=(V70))){
	goto T133;}
	{object V74 = (V65);
	VMR9(V74)}
T133:;
	(void)(elt_set((V65),V73,(V66)));
	V73= (1)+(V73);
	goto T132;}}}}
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
	if(narg <2) too_few_arguments();
	V77= V76;
	V78= V75;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI10key,ap);
	V79=(Vcs[2]);
	V80=(Vcs[3]);
	V81=(Vcs[4]);
	V82=(Vcs[5]);
	{int V83;
	if(((V79))==Cnil){
	goto T143;}
	V83= (*(LnkLI34))((V79));
	goto T141;
T143:;
	V83= 0;
T141:;
	{int V84;
	V84= (*(LnkLI35))((V80),(V77));
	if(!((V83)<=(V84))){
	goto T147;}
	goto T146;
T147:;
	V85 = make_fixnum(V83);
	V86 = make_fixnum(V84);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V85,V86)));
T146:;
	{int V87;
	if(((V81))==Cnil){
	goto T151;}
	V87= (*(LnkLI34))((V81));
	goto T149;
T151:;
	V87= 0;
T149:;
	{int V88;
	V88= (*(LnkLI35))((V82),(V78));
	if(!((V87)<=(V88))){
	goto T155;}
	goto T154;
T155:;
	V89 = make_fixnum(V87);
	V90 = make_fixnum(V88);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V89,V90)));
T154:;
	if(!(((V77))==((V78)))){
	goto T158;}
	if(!((V83)>(V87))){
	goto T158;}
	{register int V91;
	int V92;
	register int V93;
	register int V94;
	V91= 0;
	if(!(((V84)-(V83))<((V88)-(V87)))){
	goto T165;}
	V92= (V84)-(V83);
	goto T163;
T165:;
	V92= (V88)-(V87);
T163:;
	V93= (V83)+((-1)+(V92));
	V94= (V87)+((-1)+(V92));
T170:;
	if(!((V91)>=(V92))){
	goto T171;}
	{object V95 = (V77);
	VMR10(V95)}
T171:;
	V96= elt((V78),V94);
	(void)(elt_set((V77),V93,/* INLINE-ARGS */V96));
	V91= (1)+(V91);
	V93= (-1)+(V93);
	V94= (-1)+(V94);
	goto T170;}
T158:;
	{register int V97;
	int V98;
	register int V99;
	register int V100;
	V97= 0;
	if(!(((V84)-(V83))<((V88)-(V87)))){
	goto T186;}
	V98= (V84)-(V83);
	goto T184;
T186:;
	V98= (V88)-(V87);
T184:;
	V99= V83;
	V100= V87;
T191:;
	if(!((V97)>=(V98))){
	goto T192;}
	{object V101 = (V77);
	VMR10(V101)}
T192:;
	V102= elt((V78),V100);
	(void)(elt_set((V77),V99,/* INLINE-ARGS */V102));
	V97= (1)+(V97);
	V99= (1)+(V99);
	V100= (1)+(V100);
	goto T191;}}}}}}
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
	if(narg <2) too_few_arguments();
	V105= V104;
	V106= V103;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI11key,ap);
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
	{int V114;
	if(((V110))==Cnil){
	goto T205;}
	V114= (*(LnkLI34))((V110));
	goto T203;
T205:;
	V114= 0;
T203:;
	{int V115;
	V115= (*(LnkLI35))((V111),(V106));
	if(!((V114)<=(V115))){
	goto T209;}
	goto T208;
T209:;
	V116 = make_fixnum(V114);
	V117 = make_fixnum(V115);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V116,V117)));
T208:;
	{int V118;
	if(((V112))!=Cnil){
	goto T213;}
	V118= 2147483647;
	goto T211;
T213:;
	V118= fix((V112));
T211:;
	if((V108)==Cnil){
	goto T216;}
	if((V109)==Cnil){
	goto T216;}
	(void)((*(LnkLI40))());
T216:;
	if(((V107))!=Cnil){
	goto T218;}
	if(!(type_of((V106))==t_cons||((V106))==Cnil)){
	goto T221;}
	{register object V119;
	register object V120;
	V119= (V106);
	V120= Cnil;
	{register int V121;
	V121= 0;
T226:;
	if(!((V121)>=(V114))){
	goto T227;}
	goto T223;
T227:;
	V120= make_cons(car((V119)),(V120));
	{register object V122;
	V122= car((V119));
	V119= cdr((V119));}
	V121= (1)+(V121);
	goto T226;}
T223:;
	{register int V123;
	register int V124;
	V123= V114;
	V124= 0;
T243:;
	if((V123)>=(V115)){
	goto T245;}
	if((V124)>=(V118)){
	goto T245;}
	if(!(endp((V119)))){
	goto T244;}
T245:;
	base[0]= (V120);
	base[1]= (V119);
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	{object V125 = vs_base[0];
	VMR11(V125)}
T244:;
	base[0]= car((V119));
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V113));
	vs_top=sup;
	V126= vs_base[0];
	if(((*(LnkLI41))((V108),(V109),(V105),V126))==Cnil){
	goto T256;}
	V124= (1)+(V124);
	{register object V127;
	V127= car((V119));
	V119= cdr((V119));
	goto T254;}
T256:;
	V120= make_cons(car((V119)),(V120));
	{register object V128;
	V128= car((V119));
	V119= cdr((V119));}
T254:;
	V123= (1)+(V123);
	goto T243;}}
T221:;
	V129 = make_fixnum(V114);
	V130 = make_fixnum(V115);
	V131 = make_fixnum(V118);
	{object V132 = (VFUN_NARGS=16,(*(LnkLI42))((V105),(V106),VV[10],(V107),VV[11],(V108),VV[12],(V109),VV[13],V129,VV[14],V130,VV[15],V131,VV[16],(V113)));
	VMR11(V132)}
T218:;
	V133 = make_fixnum(V114);
	V134 = make_fixnum(V115);
	V135 = make_fixnum(V118);
	{object V136 = (VFUN_NARGS=16,(*(LnkLI42))((V105),(V106),VV[10],(V107),VV[11],(V108),VV[12],(V109),VV[13],V133,VV[14],V134,VV[15],V135,VV[16],(V113)));
	VMR11(V136)}}}}}
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
	if(narg <2) too_few_arguments();
	V139= V138;
	V140= V137;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI12key,ap);
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
	VMR12(V147)}}
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
	if(narg <2) too_few_arguments();
	V150= V149;
	V151= V148;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI13key,ap);
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
	VMR13(V158)}}
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
	if(narg <2) too_few_arguments();
	V161= V160;
	V162= V159;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI14key,ap);
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
	{int V170;
	V170= length((V162));
	{register int V171;
	if(((V166))==Cnil){
	goto T281;}
	V171= (*(LnkLI34))((V166));
	goto T279;
T281:;
	V171= 0;
T279:;
	{register int V172;
	V172= (*(LnkLI35))((V167),(V162));
	if(!((V171)<=(V172))){
	goto T285;}
	goto T284;
T285:;
	V173 = make_fixnum(V171);
	V174 = make_fixnum(V172);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V173,V174)));
T284:;
	{register int V175;
	if(((V168))!=Cnil){
	goto T289;}
	V175= 2147483647;
	goto T287;
T289:;
	V175= fix((V168));
T287:;
	if((V164)==Cnil){
	goto T292;}
	if((V165)==Cnil){
	goto T292;}
	(void)((*(LnkLI40))());
T292:;
	if(((V163))!=Cnil){
	goto T294;}
	if(!(type_of((V162))==t_cons||((V162))==Cnil)){
	goto T297;}
	{object V176;
	register object V177;
	V176= make_cons(Cnil,(V162));
	V177= (V176);
	{int V178;
	V178= 0;
T304:;
	if(!((V178)>=(V171))){
	goto T305;}
	goto T301;
T305:;
	{object V179;
	V179= car((V177));
	V177= cdr((V177));}
	V178= (1)+(V178);
	goto T304;}
T301:;
	{int V180;
	int V181;
	V180= V171;
	V181= 0;
T319:;
	if((V180)>=(V172)){
	goto T321;}
	if((V181)>=(V175)){
	goto T321;}
	if(!(endp(cdr((V177))))){
	goto T320;}
T321:;
	{object V182 = cdr((V176));
	VMR14(V182)}
T320:;
	base[1]= cadr((V177));
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event((V169));
	vs_top=sup;
	V183= vs_base[0];
	if(((*(LnkLI41))((V164),(V165),(V161),V183))==Cnil){
	goto T330;}
	V181= (1)+(V181);
	if(type_of((V177))!=t_cons)FEwrong_type_argument(Scons,(V177));
	((V177))->c.c_cdr = cddr((V177));
	goto T328;
T330:;
	V177= cdr((V177));
T328:;
	V180= (1)+(V180);
	goto T319;}}
T297:;
	{int V184;
	V185 = make_fixnum(V171);
	V186 = make_fixnum(V172);
	V187 = make_fixnum(V175);
	V184= fix((VFUN_NARGS=16,(*(LnkLI45))((V161),(V162),VV[10],(V163),VV[11],(V164),VV[12],(V165),VV[13],V185,VV[14],V186,VV[15],V187,VV[16],(V169))));
	if(!((V184)<(V175))){
	goto T341;}
	V175= V184;
T341:;
	{object V188;
	register int V189;
	int V190;
	int V191;
	V192= (*(LnkLI47))((V162));
	V193 = make_fixnum((V170)-(V175));
	V188= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V192,V193));
	V189= 0;
	V190= 0;
	V191= 0;
T350:;
	if(!((V189)>=(V170))){
	goto T351;}
	{object V194 = (V188);
	VMR14(V194)}
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
	V191= (1)+(V191);
	goto T355;
T357:;
	V196= elt((V162),V189);
	(void)(elt_set((V188),V190,/* INLINE-ARGS */V196));
	V190= (1)+(V190);
T355:;
	V189= (1)+(V189);
	goto T350;}}
T294:;
	{int V197;
	V198 = make_fixnum(V171);
	V199 = make_fixnum(V172);
	V200 = make_fixnum(V175);
	V197= fix((VFUN_NARGS=16,(*(LnkLI45))((V161),(V162),VV[10],(V163),VV[11],(V164),VV[12],(V165),VV[13],V198,VV[14],V199,VV[15],V200,VV[16],(V169))));
	if(!((V197)<(V175))){
	goto T374;}
	V175= V197;
T374:;
	{object V201;
	register int V202;
	int V203;
	int V204;
	V205= (*(LnkLI47))((V162));
	V206 = make_fixnum((V170)-(V175));
	V201= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V205,V206));
	V202= (-1)+(V170);
	V203= ((-1)+(V172))-(V197);
	V204= 0;
T383:;
	if(!((V202)<(0))){
	goto T384;}
	{object V207 = (V201);
	VMR14(V207)}
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
	V204= (1)+(V204);
	goto T388;
T390:;
	V209= elt((V162),V202);
	(void)(elt_set((V201),V203,/* INLINE-ARGS */V209));
	V203= (-1)+(V203);
T388:;
	V202= (-1)+(V202);
	goto T383;}}}}}}}
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
	if(narg <2) too_few_arguments();
	V212= V211;
	V213= V210;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI15key,ap);
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
	VMR15(V220)}}
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
	if(narg <2) too_few_arguments();
	V223= V222;
	V224= V221;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI16key,ap);
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
	VMR16(V231)}}
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
	if(narg <2) too_few_arguments();
	V234= V233;
	V235= V232;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI17key,ap);
	V236=(Vcs[2]);
	V237=(Vcs[3]);
	V238=(Vcs[4]);
	V239=(Vcs[5]);
	V240=(Vcs[6]);
	if(Vcs[7]==0){
	V241= symbol_function(VV[33]);
	}else{
	V241=(Vcs[7]);}
	{int V242;
	if(((V239))==Cnil){
	goto T413;}
	V242= (*(LnkLI34))((V239));
	goto T411;
T413:;
	V242= 0;
T411:;
	{int V243;
	V243= (*(LnkLI35))((V240),(V235));
	if(!((V242)<=(V243))){
	goto T417;}
	goto T416;
T417:;
	V244 = make_fixnum(V242);
	V245 = make_fixnum(V243);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V244,V245)));
T416:;
	if((V237)==Cnil){
	goto T419;}
	if((V238)==Cnil){
	goto T419;}
	(void)((*(LnkLI40))());
T419:;
	if(((V236))!=Cnil){
	goto T421;}
	{register int V246;
	register int V247;
	V246= V242;
	V247= 0;
T426:;
	if(!((V246)>=(V243))){
	goto T427;}
	{object V248 = make_fixnum(V247);
	VMR17(V248)}
T427:;
	base[0]= elt((V235),V246);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V241));
	vs_top=sup;
	V249= vs_base[0];
	if(((*(LnkLI41))((V237),(V238),(V234),V249))==Cnil){
	goto T431;}
	V247= (1)+(V247);
T431:;
	V246= (1)+(V246);
	goto T426;}
T421:;
	{register int V250;
	register int V251;
	V250= (-1)+(V243);
	V251= 0;
T443:;
	if(!((V250)<(V242))){
	goto T444;}
	{object V252 = make_fixnum(V251);
	VMR17(V252)}
T444:;
	base[0]= elt((V235),V250);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V241));
	vs_top=sup;
	V253= vs_base[0];
	if(((*(LnkLI41))((V237),(V238),(V234),V253))==Cnil){
	goto T448;}
	V251= (1)+(V251);
T448:;
	V250= (-1)+(V250);
	goto T443;}}}}
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
	if(narg <2) too_few_arguments();
	V256= V255;
	V257= V254;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI18key,ap);
	V258=(Vcs[2]);
	V259=(Vcs[3]);
	V260=(Vcs[4]);
	if(Vcs[5]==0){
	V261= symbol_function(VV[33]);
	}else{
	V261=(Vcs[5]);}
	V262= symbol_function(VV[44]);
	{object V263 = (VFUN_NARGS=12,(*(LnkLI48))((V256),(V257),VV[10],(V258),VV[11],V262,VV[13],(V259),VV[14],(V260),VV[16],(V261)));
	VMR18(V263)}}
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
	if(narg <2) too_few_arguments();
	V266= V265;
	V267= V264;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI19key,ap);
	V268=(Vcs[2]);
	V269=(Vcs[3]);
	V270=(Vcs[4]);
	if(Vcs[5]==0){
	V271= symbol_function(VV[33]);
	}else{
	V271=(Vcs[5]);}
	V272= symbol_function(VV[44]);
	{object V273 = (VFUN_NARGS=12,(*(LnkLI48))((V266),(V267),VV[10],(V268),VV[12],V272,VV[13],(V269),VV[14],(V270),VV[16],(V271)));
	VMR19(V273)}}
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
	if(narg <2) too_few_arguments();
	V276= V275;
	V277= V274;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI20key,ap);
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
	{int V285;
	if(((V281))==Cnil){
	goto T464;}
	V285= (*(LnkLI34))((V281));
	goto T462;
T464:;
	V285= 0;
T462:;
	{int V286;
	V286= (*(LnkLI35))((V282),(V277));
	if(!((V285)<=(V286))){
	goto T468;}
	goto T467;
T468:;
	V287 = make_fixnum(V285);
	V288 = make_fixnum(V286);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V287,V288)));
T467:;
	{int V289;
	if(((V283))!=Cnil){
	goto T472;}
	V289= 2147483647;
	goto T470;
T472:;
	V289= fix((V283));
T470:;
	if((V279)==Cnil){
	goto T475;}
	if((V280)==Cnil){
	goto T475;}
	(void)((*(LnkLI40))());
T475:;
	if(((V278))!=Cnil){
	goto T477;}
	{register int V290;
	register int V291;
	V290= V285;
	V291= 0;
T482:;
	if(!((V290)>=(V286))){
	goto T483;}
	{object V292 = make_fixnum(V291);
	VMR20(V292)}
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
	V291= (1)+(V291);
T487:;
	V290= (1)+(V290);
	goto T482;}
T477:;
	{register int V294;
	register int V295;
	V294= (-1)+(V286);
	V295= 0;
T501:;
	if(!((V294)<(V285))){
	goto T502;}
	{object V296 = make_fixnum(V295);
	VMR20(V296)}
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
	V295= (1)+(V295);
T506:;
	V294= (-1)+(V294);
	goto T501;}}}}}
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
	if(narg <2) too_few_arguments();
	V300= V299;
	V301= V298;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI21key,ap);
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
	VMR21(V308)}}
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
	if(narg <2) too_few_arguments();
	V311= V310;
	V312= V309;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI22key,ap);
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
	VMR22(V319)}}
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
	if(narg <3) too_few_arguments();
	V323= V322;
	V324= V321;
	V325= V320;
	narg= narg - 3;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +3,&LI23key,ap);
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
	{int V333;
	V333= length((V325));
	{int V334;
	if(((V329))==Cnil){
	goto T525;}
	V334= (*(LnkLI34))((V329));
	goto T523;
T525:;
	V334= 0;
T523:;
	{int V335;
	V335= (*(LnkLI35))((V330),(V325));
	if(!((V334)<=(V335))){
	goto T529;}
	goto T528;
T529:;
	V336 = make_fixnum(V334);
	V337 = make_fixnum(V335);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V336,V337)));
T528:;
	{int V338;
	if(((V331))!=Cnil){
	goto T533;}
	V338= 2147483647;
	goto T531;
T533:;
	V338= fix((V331));
T531:;
	if((V327)==Cnil){
	goto T536;}
	if((V328)==Cnil){
	goto T536;}
	(void)((*(LnkLI40))());
T536:;
	if(((V326))!=Cnil){
	goto T538;}
	{register object V339;
	register int V340;
	register int V341;
	V342= (*(LnkLI47))((V325));
	V343 = make_fixnum(V333);
	V339= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V342,V343));
	V340= 0;
	V341= 0;
T544:;
	if(!((V340)>=(V333))){
	goto T545;}
	{object V344 = (V339);
	VMR23(V344)}
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
	V341= (1)+(V341);
	goto T549;
T551:;
	V346= elt((V325),V340);
	(void)(elt_set((V339),V340,/* INLINE-ARGS */V346));
T549:;
	V340= (1)+(V340);
	goto T544;}
T538:;
	{register object V347;
	register int V348;
	register int V349;
	V350= (*(LnkLI47))((V325));
	V351 = make_fixnum(V333);
	V347= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V350,V351));
	V348= (-1)+(V333);
	V349= 0;
T570:;
	if(!((V348)<(0))){
	goto T571;}
	{object V352 = (V347);
	VMR23(V352)}
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
	V349= (1)+(V349);
	goto T575;
T577:;
	V354= elt((V325),V348);
	(void)(elt_set((V347),V348,/* INLINE-ARGS */V354));
T575:;
	V348= (-1)+(V348);
	goto T570;}}}}}}
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
	if(narg <3) too_few_arguments();
	V358= V357;
	V359= V356;
	V360= V355;
	narg= narg - 3;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +3,&LI24key,ap);
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
	VMR24(V367)}}
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
	if(narg <3) too_few_arguments();
	V371= V370;
	V372= V369;
	V373= V368;
	narg= narg - 3;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +3,&LI25key,ap);
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
	VMR25(V380)}}
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
	if(narg <3) too_few_arguments();
	V384= V383;
	V385= V382;
	V386= V381;
	narg= narg - 3;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +3,&LI26key,ap);
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
	{int V394;
	if(((V390))==Cnil){
	goto T599;}
	V394= (*(LnkLI34))((V390));
	goto T597;
T599:;
	V394= 0;
T597:;
	{int V395;
	V395= (*(LnkLI35))((V391),(V386));
	if(!((V394)<=(V395))){
	goto T603;}
	goto T602;
T603:;
	V396 = make_fixnum(V394);
	V397 = make_fixnum(V395);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V396,V397)));
T602:;
	{int V398;
	if(((V392))!=Cnil){
	goto T607;}
	V398= 2147483647;
	goto T605;
T607:;
	V398= fix((V392));
T605:;
	if((V388)==Cnil){
	goto T610;}
	if((V389)==Cnil){
	goto T610;}
	(void)((*(LnkLI40))());
T610:;
	if(((V387))!=Cnil){
	goto T612;}
	{register int V399;
	register int V400;
	V399= V394;
	V400= 0;
T617:;
	if(!((V399)>=(V395))){
	goto T618;}
	{object V401 = (V386);
	VMR26(V401)}
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
	V400= (1)+(V400);
T622:;
	V399= (1)+(V399);
	goto T617;}
T612:;
	{register int V403;
	register int V404;
	V403= (-1)+(V395);
	V404= 0;
T637:;
	if(!((V403)<(V394))){
	goto T638;}
	{object V405 = (V386);
	VMR26(V405)}
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
	V404= (1)+(V404);
T642:;
	V403= (-1)+(V403);
	goto T637;}}}}}
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
	if(narg <3) too_few_arguments();
	V410= V409;
	V411= V408;
	V412= V407;
	narg= narg - 3;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +3,&LI27key,ap);
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
	VMR27(V419)}}
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
	if(narg <3) too_few_arguments();
	V423= V422;
	V424= V421;
	V425= V420;
	narg= narg - 3;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +3,&LI28key,ap);
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
	VMR28(V432)}}
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
	if(narg <2) too_few_arguments();
	V435= V434;
	V436= V433;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI29key,ap);
	V437=(Vcs[2]);
	V438=(Vcs[3]);
	V439=(Vcs[4]);
	V440=(Vcs[5]);
	V441=(Vcs[6]);
	if(Vcs[7]==0){
	V442= symbol_function(VV[33]);
	}else{
	V442=(Vcs[7]);}
	{int V443;
	if(((V440))==Cnil){
	goto T661;}
	V443= (*(LnkLI34))((V440));
	goto T659;
T661:;
	V443= 0;
T659:;
	{int V444;
	V444= (*(LnkLI35))((V441),(V436));
	if(!((V443)<=(V444))){
	goto T665;}
	goto T664;
T665:;
	V445 = make_fixnum(V443);
	V446 = make_fixnum(V444);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V445,V446)));
T664:;
	if((V438)==Cnil){
	goto T667;}
	if((V439)==Cnil){
	goto T667;}
	(void)((*(LnkLI40))());
T667:;
	if(((V437))!=Cnil){
	goto T669;}
	{register int V447;
	V447= V443;
T673:;
	if(!((V447)>=(V444))){
	goto T674;}
	{object V448 = Cnil;
	VMR29(V448)}
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
T678:;
	V447= (1)+(V447);
	goto T673;}
T669:;
	{register int V451;
	V451= (-1)+(V444);
T688:;
	if(!((V451)<(V443))){
	goto T689;}
	{object V452 = Cnil;
	VMR29(V452)}
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
T693:;
	V451= (-1)+(V451);
	goto T688;}}}}
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
	if(narg <2) too_few_arguments();
	V457= V456;
	V458= V455;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI30key,ap);
	V459=(Vcs[2]);
	V460=(Vcs[3]);
	V461=(Vcs[4]);
	if(Vcs[5]==0){
	V462= symbol_function(VV[33]);
	}else{
	V462=(Vcs[5]);}
	V463= symbol_function(VV[44]);
	{object V464 = (VFUN_NARGS=12,(*(LnkLI51))((V457),(V458),VV[10],(V459),VV[11],V463,VV[13],(V460),VV[14],(V461),VV[16],(V462)));
	VMR30(V464)}}
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
	if(narg <2) too_few_arguments();
	V467= V466;
	V468= V465;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI31key,ap);
	V469=(Vcs[2]);
	V470=(Vcs[3]);
	V471=(Vcs[4]);
	if(Vcs[5]==0){
	V472= symbol_function(VV[33]);
	}else{
	V472=(Vcs[5]);}
	V473= symbol_function(VV[44]);
	{object V474 = (VFUN_NARGS=12,(*(LnkLI51))((V467),(V468),VV[10],(V469),VV[12],V473,VV[13],(V470),VV[14],(V471),VV[16],(V472)));
	VMR31(V474)}}
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
	if(narg <2) too_few_arguments();
	V477= V476;
	V478= V475;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI32key,ap);
	V479=(Vcs[2]);
	V480=(Vcs[3]);
	V481=(Vcs[4]);
	V482=(Vcs[5]);
	V483=(Vcs[6]);
	if(Vcs[7]==0){
	V484= symbol_function(VV[33]);
	}else{
	V484=(Vcs[7]);}
	{int V485;
	if(((V482))==Cnil){
	goto T708;}
	V485= (*(LnkLI34))((V482));
	goto T706;
T708:;
	V485= 0;
T706:;
	{int V486;
	V486= (*(LnkLI35))((V483),(V478));
	if(!((V485)<=(V486))){
	goto T712;}
	goto T711;
T712:;
	V487 = make_fixnum(V485);
	V488 = make_fixnum(V486);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V487,V488)));
T711:;
	if((V480)==Cnil){
	goto T714;}
	if((V481)==Cnil){
	goto T714;}
	(void)((*(LnkLI40))());
T714:;
	if(((V479))!=Cnil){
	goto T716;}
	{register int V489;
	V489= V485;
T720:;
	if(!((V489)>=(V486))){
	goto T721;}
	{object V490 = Cnil;
	VMR32(V490)}
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
T725:;
	V489= (1)+(V489);
	goto T720;}
T716:;
	{register int V493;
	V493= (-1)+(V486);
T735:;
	if(!((V493)<(V485))){
	goto T736;}
	{object V494 = Cnil;
	VMR32(V494)}
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
T740:;
	V493= (-1)+(V493);
	goto T735;}}}}
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
	if(narg <2) too_few_arguments();
	V499= V498;
	V500= V497;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI33key,ap);
	V501=(Vcs[2]);
	V502=(Vcs[3]);
	V503=(Vcs[4]);
	if(Vcs[5]==0){
	V504= symbol_function(VV[33]);
	}else{
	V504=(Vcs[5]);}
	V505= symbol_function(VV[44]);
	{object V506 = (VFUN_NARGS=12,(*(LnkLI52))((V499),(V500),VV[10],(V501),VV[11],V505,VV[13],(V502),VV[14],(V503),VV[16],(V504)));
	VMR33(V506)}}
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
	if(narg <2) too_few_arguments();
	V509= V508;
	V510= V507;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI34key,ap);
	V511=(Vcs[2]);
	V512=(Vcs[3]);
	V513=(Vcs[4]);
	if(Vcs[5]==0){
	V514= symbol_function(VV[33]);
	}else{
	V514=(Vcs[5]);}
	V515= symbol_function(VV[44]);
	{object V516 = (VFUN_NARGS=12,(*(LnkLI52))((V509),(V510),VV[10],(V511),VV[12],V515,VV[13],(V512),VV[14],(V513),VV[16],(V514)));
	VMR34(V516)}}
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
	if(narg <1) too_few_arguments();
	V518= V517;
	narg= narg - 1;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +1,&LI35key,ap);
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
T763:;
	{register object V526;
	register object V527;
	V526= (V518);
	V527= Cnil;
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
T774:;
	V526= cdr((V526));
	goto T767;}
T754:;
	{object V529 = (VFUN_NARGS=13,(*(LnkLI54))((V518),VV[10],(V519),VV[11],(V520),VV[12],(V521),VV[13],(V522),VV[14],(V523),VV[16],(V524)));
	VMR35(V529)}}
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
	if(narg <1) too_few_arguments();
	V531= V530;
	narg= narg - 1;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +1,&LI36key,ap);
	V532=(Vcs[1]);
	V533=(Vcs[2]);
	V534=(Vcs[3]);
	V535=(Vcs[4]);
	V536=(Vcs[5]);
	if(Vcs[6]==0){
	V537= symbol_function(VV[33]);
	}else{
	V537=(Vcs[6]);}
	{int V538;
	V538= length((V531));
	if((V533)==Cnil){
	goto T791;}
	if((V534)==Cnil){
	goto T791;}
	(void)((*(LnkLI40))());
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
T801:;
	{register object V540;
	V540= (V531);
T805:;
	if(!(endp(cdr((V540))))){
	goto T806;}
	{object V541 = (V531);
	VMR36(V541)}
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
T812:;
	V540= cdr((V540));
T810:;
	goto T805;}
T792:;
	{register int V542;
	if(((V535))==Cnil){
	goto T828;}
	V542= (*(LnkLI34))((V535));
	goto T826;
T828:;
	V542= 0;
T826:;
	{register int V543;
	V543= (*(LnkLI35))((V536),(V531));
	if(!((V542)<=(V543))){
	goto T832;}
	goto T831;
T832:;
	V544 = make_fixnum(V542);
	V545 = make_fixnum(V543);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V544,V545)));
T831:;
	if(((V532))!=Cnil){
	goto T835;}
	{int V546;
	int V547;
	V546= 0;
	V547= V542;
T840:;
	if(!((V547)>=(V543))){
	goto T841;}
	{object V548;
	register int V549;
	int V550;
	V551= (*(LnkLI47))((V531));
	V552 = make_fixnum((V538)-(V546));
	V548= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V551,V552));
	V549= 0;
	V550= 0;
T848:;
	if(!((V549)>=(V538))){
	goto T849;}
	{object V553 = (V548);
	VMR36(V553)}
T849:;
	{object V554;
	if((V542)<=(V549)){
	goto T855;}
	V554= Cnil;
	goto T854;
T855:;
	if((V549)<(V543)){
	goto T857;}
	V554= Cnil;
	goto T854;
T857:;
	base[0]= elt((V531),V549);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V537));
	vs_top=sup;
	V555= vs_base[0];
	V556 = make_fixnum((1)+(V549));
	V557 = make_fixnum(V543);
	V554= (VFUN_NARGS=12,(*(LnkLI52))(V555,(V531),VV[11],(V533),VV[12],(V534),VV[13],V556,VV[14],V557,VV[16],(V537)));
T854:;
	if(((V554))==Cnil){
	goto T862;}
	goto T853;
T862:;
	V558= elt((V531),V549);
	(void)(elt_set((V548),V550,/* INLINE-ARGS */V558));
	V550= (1)+(V550);}
T853:;
	V549= (1)+(V549);
	goto T848;}
T841:;
	base[0]= elt((V531),V547);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V537));
	vs_top=sup;
	V559= vs_base[0];
	V560 = make_fixnum((1)+(V547));
	V561 = make_fixnum(V543);
	if(((VFUN_NARGS=12,(*(LnkLI52))(V559,(V531),VV[11],(V533),VV[12],(V534),VV[13],V560,VV[14],V561,VV[16],(V537))))==Cnil){
	goto T870;}
	V546= (1)+(V546);
T870:;
	V547= (1)+(V547);
	goto T840;}
T835:;
	{int V562;
	int V563;
	V562= 0;
	V563= (-1)+(V543);
T882:;
	if(!((V563)<(V542))){
	goto T883;}
	{object V564;
	register int V565;
	int V566;
	V567= (*(LnkLI47))((V531));
	V568 = make_fixnum((V538)-(V562));
	V564= (VFUN_NARGS=2,(*(LnkLI46))(/* INLINE-ARGS */V567,V568));
	V565= (-1)+(V538);
	V566= ((-1)+(V538))-(V562);
T890:;
	if(!((V565)<(0))){
	goto T891;}
	{object V569 = (V564);
	VMR36(V569)}
T891:;
	{object V570;
	if((V542)<=(V565)){
	goto T897;}
	V570= Cnil;
	goto T896;
T897:;
	if((V565)<(V543)){
	goto T899;}
	V570= Cnil;
	goto T896;
T899:;
	base[0]= elt((V531),V565);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V537));
	vs_top=sup;
	V571= vs_base[0];
	V572 = make_fixnum(V542);
	V573 = make_fixnum(V565);
	V570= (VFUN_NARGS=14,(*(LnkLI52))(V571,(V531),VV[10],Ct,VV[11],(V533),VV[12],(V534),VV[13],V572,VV[14],V573,VV[16],(V537)));
T896:;
	if(((V570))==Cnil){
	goto T904;}
	goto T895;
T904:;
	V574= elt((V531),V565);
	(void)(elt_set((V564),V566,/* INLINE-ARGS */V574));
	V566= (-1)+(V566);}
T895:;
	V565= (-1)+(V565);
	goto T890;}
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
	V562= (1)+(V562);
T912:;
	V563= (-1)+(V563);
	goto T882;}}}}}
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
	if(narg <2) too_few_arguments();
	V580= V579;
	V581= V578;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI37key,ap);
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
T922:;
	{register int V590;
	if(((V586))==Cnil){
	goto T925;}
	V590= (*(LnkLI34))((V586));
	goto T923;
T925:;
	V590= 0;
T923:;
	{register int V591;
	V591= (*(LnkLI35))((V588),(V580));
	if(!((V590)<=(V591))){
	goto T929;}
	goto T928;
T929:;
	V592 = make_fixnum(V590);
	V593 = make_fixnum(V591);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V592,V593)));
T928:;
	{register int V594;
	if(((V587))==Cnil){
	goto T933;}
	V594= (*(LnkLI34))((V587));
	goto T931;
T933:;
	V594= 0;
T931:;
	{register int V595;
	V595= (*(LnkLI35))((V589),(V581));
	if(!((V594)<=(V595))){
	goto T937;}
	goto T936;
T937:;
	V596 = make_fixnum(V594);
	V597 = make_fixnum(V595);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V596,V597)));
T936:;
	if(((V582))!=Cnil){
	goto T940;}
	{register int V598;
	register int V599;
	V598= V590;
	V599= V594;
T945:;
	if((V598)>=(V591)){
	goto T947;}
	if(!((V599)>=(V595))){
	goto T946;}
T947:;
	if(!((V598)>=(V591))){
	goto T952;}
	if(!((V599)>=(V595))){
	goto T952;}
	{object V600 = Cnil;
	VMR37(V600)}
T952:;
	{object V601 = make_fixnum(V598);
	VMR37(V601)}
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
T957:;
	V598= (1)+(V598);
	V599= (1)+(V599);
	goto T945;}
T940:;
	{register int V605;
	register int V606;
	V605= (-1)+(V591);
	V606= (-1)+(V595);
T971:;
	if((V605)<(V590)){
	goto T973;}
	if(!((V606)<(V594))){
	goto T972;}
T973:;
	if(!((V605)<(V590))){
	goto T978;}
	if(!((V606)<(V594))){
	goto T978;}
	{object V607 = Cnil;
	VMR37(V607)}
T978:;
	{object V608 = make_fixnum((1)+(V605));
	VMR37(V608)}
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
	{object V611 = make_fixnum((1)+(V605));
	VMR37(V611)}
T983:;
	V605= (-1)+(V605);
	V606= (-1)+(V606);
	goto T971;}}}}}}
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
	if(narg <2) too_few_arguments();
	V614= V613;
	V615= V612;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI38key,ap);
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
T995:;
	{int V624;
	if(((V620))==Cnil){
	goto T998;}
	V624= (*(LnkLI34))((V620));
	goto T996;
T998:;
	V624= 0;
T996:;
	{int V625;
	V625= (*(LnkLI35))((V622),(V614));
	if(!((V624)<=(V625))){
	goto T1002;}
	goto T1001;
T1002:;
	V626 = make_fixnum(V624);
	V627 = make_fixnum(V625);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V626,V627)));
T1001:;
	{register int V628;
	if(((V621))==Cnil){
	goto T1006;}
	V628= (*(LnkLI34))((V621));
	goto T1004;
T1006:;
	V628= 0;
T1004:;
	{int V629;
	V629= (*(LnkLI35))((V623),(V615));
	if(!((V628)<=(V629))){
	goto T1010;}
	goto T1009;
T1010:;
	V630 = make_fixnum(V628);
	V631 = make_fixnum(V629);
	(void)((VFUN_NARGS=2,(*(LnkLI31))(V630,V631)));
T1009:;
	if(((V616))!=Cnil){
	goto T1013;}
T1016:;
	{register int V632;
	register int V633;
	V632= V624;
	V633= V628;
T1022:;
	if(!((V632)>=(V625))){
	goto T1023;}
	{object V634 = make_fixnum(V628);
	VMR38(V634)}
T1023:;
	if(!((V633)>=(V629))){
	goto T1027;}
	{object V635 = Cnil;
	VMR38(V635)}
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
T1030:;
	V632= (1)+(V632);
	V633= (1)+(V633);
	goto T1022;}
T1018:;
	V628= (1)+(V628);
	goto T1016;
T1013:;
T1044:;
	{register int V638;
	register int V639;
	V638= (-1)+(V625);
	V639= (-1)+(V629);
T1050:;
	if(!((V638)<(V624))){
	goto T1051;}
	{object V640 = make_fixnum((1)+(V639));
	VMR38(V640)}
T1051:;
	if(!((V639)<(V628))){
	goto T1055;}
	{object V641 = Cnil;
	VMR38(V641)}
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
T1058:;
	V638= (-1)+(V638);
	V639= (-1)+(V639);
	goto T1050;}
T1046:;
	V629= (-1)+(V629);
	goto T1044;}}}}}
	}}
/*	function definition for SORT	*/

static L39()
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
T1073:;
	base[4]= (*(LnkLI56))((V644),0,length((V644)),(V645),(V646));
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	function definition for LIST-MERGE-SORT	*/

static L40()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_reserve(VM40);
	{object V647;
	check_arg(3);
	V647=(base[0]);
	vs_top=sup;
TTL:;
	base[3]= (V647);
	vs_top=(vs_base=base+3)+1;
	L41(base);
	return;
	}
}
/*	local entry for function QUICK-SORT	*/

static object LI42(V653,V654,V655,V656,V657)

register object V653;int V654;int V655;register object V656;register object V657;
{	 VMB41 VMS41 VMV41
TTL:;
	if(!((V655)<=((1)+(V654)))){
	goto T1080;}
	{object V658 = (V653);
	VMR41(V658)}
T1080:;
	{register int V659;
	register int V660;
	object V661;
	register object V662;
	V659= V654;
	V660= V655;
	V661= elt((V653),V654);
	V662= (
	(type_of((V657)) == t_sfun ?(*(object (*)())(((V657))->sfn.sfn_self)):
	(fcall.fun=((V657)),fcall.argd=1,fcalln))((V661)));
T1088:;
T1092:;
	V660= (-1)+(V660);
	if((V659)<(V660)){
	goto T1096;}
	goto T1086;
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
T1093:;
	goto T1092;
T1090:;
T1107:;
	V659= (1)+(V659);
	if((V659)<(V660)){
	goto T1111;}
	goto T1086;
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
T1108:;
	goto T1107;
T1105:;
	{object V663;
	V663= elt((V653),V659);
	V664= elt((V653),V660);
	(void)(elt_set((V653),V659,/* INLINE-ARGS */V664));
	(void)(elt_set((V653),V660,(V663)));}
	goto T1088;
T1086:;
	V665= elt((V653),V659);
	(void)(elt_set((V653),V654,/* INLINE-ARGS */V665));
	(void)(elt_set((V653),V659,(V661)));
	(void)((*(LnkLI56))((V653),V654,V659,(V656),(V657)));
	V654= (1)+(V659);
	goto TTL;}
}
/*	function definition for STABLE-SORT	*/

static L43()
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
T1134:;
	if(type_of((V666))==t_string){
	goto T1139;}
	if(!((type_of((V666))==t_bitvector))){
	goto T1140;}
T1139:;
	base[4]= (V666);
	base[5]= (V667);
	base[6]= VV[16];
	base[7]= (V668);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk57)();
	return;
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
	register object V677;
	object V678;
	object V679;
	if(narg <4) too_few_arguments();
	V675= V674;
	V676= V673;
	V677= V672;
	V678= V671;
	narg= narg - 4;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +4,&LI44key,ap);
	if(Vcs[4]==0){
	V679= symbol_function(VV[33]);
	}else{
	V679=(Vcs[4]);}
	{int V680;
	int V681;
	V680= length((V676));
	V681= length((V677));
	{register object V682;
	register int V683;
	register int V684;
	register int V685;
	V686 = make_fixnum((V680)+(V681));
	V682= (VFUN_NARGS=2,(*(LnkLI46))((V675),V686));
	V683= 0;
	V684= 0;
	V685= 0;
T1160:;
	if(!((V684)==(V680))){
	goto T1161;}
	if(!((V685)==(V681))){
	goto T1161;}
	{object V687 = (V682);
	VMR43(V687)}
T1161:;
	if(!((V684)<(V680))){
	goto T1169;}
	if(!((V685)<(V681))){
	goto T1169;}
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
	goto T1174;}
	V688= elt((V676),V684);
	(void)(elt_set((V682),V683,/* INLINE-ARGS */V688));
	V684= (1)+(V684);
	goto T1167;
T1174:;
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
	goto T1183;}
	V689= elt((V677),V685);
	(void)(elt_set((V682),V683,/* INLINE-ARGS */V689));
	V685= (1)+(V685);
	goto T1167;
T1183:;
	V690= elt((V676),V684);
	(void)(elt_set((V682),V683,/* INLINE-ARGS */V690));
	V684= (1)+(V684);
	goto T1167;
T1169:;
	if(!((V684)<(V680))){
	goto T1194;}
	V691= elt((V676),V684);
	(void)(elt_set((V682),V683,/* INLINE-ARGS */V691));
	V684= (1)+(V684);
	goto T1167;
T1194:;
	V692= elt((V677),V685);
	(void)(elt_set((V682),V683,/* INLINE-ARGS */V692));
	V685= (1)+(V685);
T1167:;
	V683= (1)+(V683);
	goto T1160;}}}
	}}
/*	function definition for MAP-INTO	*/

static L45()
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
	goto T1206;}
	base[4]= (V693);
	base[5]= small_fixnum(0);
	vs_top=(vs_base=base+4)+2;
	Larray_dimension();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T1204;
T1206:;
	base[3]= make_fixnum(length((V693)));
T1204:;
	{object V697;
	{object V699;
	object V700= (V695);
	if(endp(V700)){
	V697= Cnil;
	goto T1212;}
	base[4]=V699=MMcons(Cnil,Cnil);
T1213:;
	base[5]= (V700->c.c_car);
	vs_top=(vs_base=base+5)+1;
	Llength();
	vs_top=sup;
	(V699->c.c_car)= vs_base[0];
	if(endp(V700=MMcdr(V700))){
	V697= base[4];
	goto T1212;}
	V699=MMcdr(V699)=MMcons(Cnil,Cnil);
	goto T1213;}
T1212:;
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
	goto T1216;}
	base[3]= (V693);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk59)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1216;}
	base[3]= (V693);
	base[4]= (V696);
	vs_top=(vs_base=base+3)+2;
	siLfill_pointer_set();
	vs_top=sup;
T1216:;
	{register object V702;
	register object V703;
	V702= (V696);
	V703= small_fixnum(0);
T1229:;
	if(!(number_compare((V703),(V702))>=0)){
	goto T1230;}
	base[3]= (V693);
	vs_top=(vs_base=base+3)+1;
	return;
T1230:;
	base[3]= (V694);
	{object V705;
	{object V706;
	object V707= (V695);
	if(endp(V707)){
	V705= Cnil;
	goto T1237;}
	base[4]=V706=MMcons(Cnil,Cnil);
T1238:;
	{register object V708;
	V708= (V707->c.c_car);
	(V706->c.c_car)= elt((V708),fixint((V703)));}
	if(endp(V707=MMcdr(V707))){
	V705= base[4];
	goto T1237;}
	V706=MMcdr(V706)=MMcons(Cnil,Cnil);
	goto T1238;}
T1237:;
	 vs_top=base+4;
	 while(!endp(V705))
	 {vs_push(car(V705));V705=cdr(V705);}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	vs_top=sup;
	V704= vs_base[0];
	(void)(elt_set((V693),fixint((V703)),V704));
	V703= one_plus((V703));
	goto T1229;}}
	}
}
/*	macro definition for WITH-HASH-TABLE-ITERATOR	*/

static L46()
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

static L41(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_reserve(VM46);
	{object V718;
	check_arg(1);
	V718=(base[0]);
	vs_top=sup;
TTL:;
	{int V719;
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
	V719= length((V718));
	if(!((V719)<(2))){
	goto T1255;}
	base[1]= (V718);
	vs_top=(vs_base=base+1)+1;
	return;
T1255:;
	if(!((V719)==(2))){
	goto T1253;}
	V724= (
	(type_of(base0[2]) == t_sfun ?(*(object (*)())((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V718))));
	V725= (
	(type_of(base0[2]) == t_sfun ?(*(object (*)())((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(cadr((V718))));
	base[1]= (V724);
	base[2]= (V725);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1264;}
	base[1]= (V718);
	vs_top=(vs_base=base+1)+1;
	return;
T1264:;
	base[1]= (V725);
	base[2]= (V724);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1269;}
	base[1]= nreverse((V718));
	vs_top=(vs_base=base+1)+1;
	return;
T1269:;
	base[1]= (V718);
	vs_top=(vs_base=base+1)+1;
	return;
T1253:;
	V719= (V719>=0&&(2)>0?(V719)/(2):ifloor(V719,2));
	{int V726;
	register object V727;
	V726= 1;
	V727= (V718);
T1278:;
	if(!((V726)>=(V719))){
	goto T1279;}
	V720= (V718);
	V721= cdr((V727));
	if(type_of((V727))!=t_cons)FEwrong_type_argument(Scons,(V727));
	((V727))->c.c_cdr = Cnil;
	goto T1275;
T1279:;
	V726= (1)+(V726);
	V727= cdr((V727));
	goto T1278;}
T1275:;
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
	goto T1299;}
	base[1]= (V721);
	vs_top=(vs_base=base+1)+1;
	return;
T1299:;
	if(!(endp((V721)))){
	goto T1297;}
	base[1]= (V720);
	vs_top=(vs_base=base+1)+1;
	return;
T1297:;
	V722= make_cons(Cnil,Cnil);
	V723= (V722);
	V724= (
	(type_of(base0[2]) == t_sfun ?(*(object (*)())((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V720))));
	V725= (
	(type_of(base0[2]) == t_sfun ?(*(object (*)())((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V721))));
T1248:;
	base[1]= (V724);
	base[2]= (V725);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1311;}
	goto T1249;
T1311:;
	base[1]= (V725);
	base[2]= (V724);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1316;}
	goto T1250;
T1316:;
	goto T1249;
T1249:;
	if(type_of((V723))!=t_cons)FEwrong_type_argument(Scons,(V723));
	((V723))->c.c_cdr = (V720);
	V723= cdr((V723));
	V720= cdr((V720));
	if(!(endp((V720)))){
	goto T1325;}
	if(type_of((V723))!=t_cons)FEwrong_type_argument(Scons,(V723));
	((V723))->c.c_cdr = (V721);
	base[1]= cdr((V722));
	vs_top=(vs_base=base+1)+1;
	return;
T1325:;
	V724= (
	(type_of(base0[2]) == t_sfun ?(*(object (*)())((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V720))));
	goto T1248;
T1250:;
	if(type_of((V723))!=t_cons)FEwrong_type_argument(Scons,(V723));
	((V723))->c.c_cdr = (V721);
	V723= cdr((V723));
	V721= cdr((V721));
	if(!(endp((V721)))){
	goto T1336;}
	if(type_of((V723))!=t_cons)FEwrong_type_argument(Scons,(V723));
	((V723))->c.c_cdr = (V720);
	base[1]= cdr((V722));
	vs_top=(vs_base=base+1)+1;
	return;
T1336:;
	V725= (
	(type_of(base0[2]) == t_sfun ?(*(object (*)())((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V721))));
	goto T1248;}
	}
}
static LnkT59(){ call_or_link(VV[59],&Lnk59);} /* ARRAY-HAS-FILL-POINTER-P */
static object  LnkTLI58(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[58],&LnkLI58,2,ap);} /* COERCE */
static LnkT57(){ call_or_link(VV[57],&Lnk57);} /* SORT */
static object  LnkTLI56(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[56],&LnkLI56,81925,ap);} /* QUICK-SORT */
static LnkT55(){ call_or_link(VV[55],&Lnk55);} /* LIST-MERGE-SORT */
static object  LnkTLI54(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[54],&LnkLI54,ap);} /* DELETE-DUPLICATES */
static LnkT53(){ call_or_link(VV[53],&Lnk53);} /* MEMBER1 */
static object  LnkTLI52(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[52],&LnkLI52,ap);} /* POSITION */
static object  LnkTLI51(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[51],&LnkLI51,ap);} /* FIND */
static object  LnkTLI50(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[50],&LnkLI50,ap);} /* NSUBSTITUTE */
static object  LnkTLI49(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[49],&LnkLI49,ap);} /* SUBSTITUTE */
static object  LnkTLI48(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[48],&LnkLI48,ap);} /* COUNT */
static object  LnkTLI47(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[47],&LnkLI47,1,ap);} /* SEQTYPE */
static object  LnkTLI46(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[46],&LnkLI46,ap);} /* MAKE-SEQUENCE */
static object  LnkTLI45(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[45],&LnkLI45,ap);} /* INTERNAL-COUNT */
static object  LnkTLI43(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[43],&LnkLI43,ap);} /* REMOVE */
static object  LnkTLI42(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[42],&LnkLI42,ap);} /* DELETE */
static object  LnkTLI41(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[41],&LnkLI41,4,ap);} /* CALL-TEST */
static object  LnkTLI40(){return call_proc0(VV[40],&LnkLI40);} /* TEST-ERROR */
static int  LnkTLI35(va_alist)va_dcl{va_list ap;va_start(ap);return(int )call_proc(VV[35],&LnkLI35,258,ap);} /* THE-END */
static int  LnkTLI34(va_alist)va_dcl{va_list ap;va_start(ap);return(int )call_proc(VV[34],&LnkLI34,257,ap);} /* THE-START */
static object  LnkTLI31(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[31],&LnkLI31,ap);} /* BAD-SEQ-LIMIT */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

