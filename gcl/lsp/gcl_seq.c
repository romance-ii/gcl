
#include "cmpinclude.h"
#include "gcl_seq.h"
void init_gcl_seq(){do_init(VV);}
/*	local entry for function MAKE-SEQUENCE	*/

static object LI1(object V2,object V1,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{register object V3;
	register object V4;
	register object V5;
	object V6;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V3= V2;
	V4= V1;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI1key,first,ap);
	if(Vcs[2]==0){
	V5= Cnil;
	V6= Cnil;
	}else{
	V5=(Vcs[2]);
	V6= Ct;}
	{object V7;
	register object V8;
	V7= Cnil;
	V8= Cnil;
	if(!(((V3))==(VV[0]))){
	goto T7;}
	if(((V6))==Cnil){
	goto T10;}
	base[0]= (V4);
	base[1]= VV[1];
	base[2]= (V5);
	vs_top=(vs_base=base+0)+3;
	Lmake_list();
	vs_top=sup;
	{object V9 = vs_base[0];
	VMR1(V9)}
	goto T10;
T10:;
	base[0]= (V4);
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	{object V10 = vs_base[0];
	VMR1(V10)}
	goto T7;
T7:;
	if(((V3))==(VV[2])){
	goto T16;}
	if(!(((V3))==(VV[3]))){
	goto T17;}
	goto T16;
T16:;
	V7= VV[4];
	goto T5;
	goto T17;
T17:;
	if(((V3))==(VV[5])){
	goto T21;}
	if(!(((V3))==(VV[6]))){
	goto T22;}
	goto T21;
T21:;
	V7= VV[7];
	goto T5;
	goto T22;
T22:;
	if(((V3))==(VV[8])){
	goto T26;}
	if(!(((V3))==(VV[9]))){
	goto T27;}
	goto T26;
T26:;
	V7= Ct;
	goto T5;
	goto T27;
T27:;
	V3= (*(LnkLI21))((V3));
	base[0]= car((V3));
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk22)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T33;}
	if(!((VV[10])==(car((V3))))){
	goto T40;}
	if(!(equal((V4),small_fixnum(0)))){
	goto T39;}
	goto T40;
T40:;
	if(!((VV[11])==(car((V3))))){
	goto T38;}
	if(!(equal((V4),small_fixnum(0)))){
	goto T38;}
	goto T39;
T39:;
	base[0]= VV[12];
	base[1]= VV[13];
	base[2]= (V3);
	base[4]= Cnil;
	base[5]= VV[14];
	base[6]= (V4);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk23)();
	vs_top=sup;
	goto T38;
T38:;
	if(((V6))==Cnil){
	goto T55;}
	base[0]= (V4);
	base[1]= VV[1];
	base[2]= (V5);
	vs_top=(vs_base=base+0)+3;
	Lmake_list();
	vs_top=sup;
	{object V11 = vs_base[0];
	VMR1(V11)}
	goto T55;
T55:;
	base[0]= (V4);
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	{object V12 = vs_base[0];
	VMR1(V12)}
	goto T33;
T33:;
	if((car((V3)))==(VV[15])){
	goto T61;}
	if((car((V3)))==(VV[16])){
	goto T61;}
	base[0]= VV[12];
	base[1]= VV[17];
	base[2]= (V3);
	base[3]= VV[18];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk23)();
	vs_top=sup;
	goto T61;
T61:;
	{object V13;
	V13= caddr((V3));
	if(!(type_of((V13))==t_cons||((V13))==Cnil)){
	goto T72;}
	V13= car((V13));
	goto T72;
T72:;
	if(type_of((V13))==t_fixnum){
	goto T76;}
	V13= (V4);
	goto T76;
T76:;
	if(equal((V13),(V4))){
	goto T70;}
	base[0]= VV[12];
	base[1]= VV[19];
	base[2]= (V3);
	base[4]= Cnil;
	base[5]= VV[20];
	base[6]= (V3);
	base[7]= (V4);
	vs_top=(vs_base=base+4)+4;
	Lformat();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk23)();
	vs_top=sup;}
	goto T70;
T70:;{object V14;
	V14= cadr((V3));
	if(V14==Cnil)goto T90;
	V7= V14;
	goto T5;
	goto T90;
T90:;}
	V7= Ct;
	goto T5;
T5:;
	V7= (*(LnkLI24))((V7));
	base[0]= (V7);
	base[1]= (V4);
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	siLmake_vector();
	vs_top=sup;
	V8= vs_base[0];
	if(((V6))==Cnil){
	goto T103;}
	{register long V15;
	register long V16;
	V15= 0;
	V16= fix((V4));
	goto T109;
T109:;
	if(!((V15)>=(V16))){
	goto T110;}
	goto T103;
	goto T110;
T110:;
	(void)(elt_set((V8),V15,(V5)));
	V15= (long)(V15)+1;
	goto T109;}
	goto T103;
T103:;
	{object V17 = (V8);
	VMR1(V17)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function CONCATENATE	*/

static object LI2(object V18,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB2 VMS2 VMV2
	{object V19;
	object V20;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V19= V18;
	narg= narg - 1;
	V21 = list_vector_new(narg,first,ap);
	V20= V21;
	{register object V22;
	register object V23;
	register long V24;
	{object V26;
	{object V27;
	object V28= (V20);
	if(endp(V28)){
	V26= Cnil;
	goto T120;}
	base[0]=V27=MMcons(Cnil,Cnil);
	goto T121;
T121:;
	base[1]= (V28->c.c_car);
	vs_top=(vs_base=base+1)+1;
	Llength();
	vs_top=sup;
	(V27->c.c_car)= vs_base[0];
	V28=MMcdr(V28);
	if(endp(V28)){
	V26= base[0];
	goto T120;}
	V27=MMcdr(V27)=MMcons(Cnil,Cnil);
	goto T121;}
	goto T120;
T120:;
	 vs_top=base+0;
	 while(!endp(V26))
	 {vs_push(car(V26));V26=cdr(V26);}
	vs_base=base+0;}
	Lplus();
	vs_top=sup;
	V25= vs_base[0];
	V22= (VFUN_NARGS=2,(*(LnkLI25))((V19),V25));
	V24= 0;
	V23= (V20);
	goto T126;
T126:;
	if(((V23))!=Cnil){
	goto T127;}
	{object V29 = (V22);
	VMR2(V29)}
	goto T127;
T127:;
	{register long V30;
	register long V31;
	V30= 0;
	V31= (long)length(car((V23)));
	goto T135;
T135:;
	if(!((V30)>=(V31))){
	goto T136;}
	goto T131;
	goto T136;
T136:;
	V32= elt(car((V23)),V30);
	(void)(elt_set((V22),V24,/* INLINE-ARGS */V32));
	V24= (long)(V24)+(1);
	V30= (long)(V30)+1;
	goto T135;}
	goto T131;
T131:;
	V23= cdr((V23));
	goto T126;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAP	*/

static object LI3(object V35,object V34,object V33,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB3 VMS3 VMV3
	{object V36;
	register object V37;
	object V38;
	register object V39;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V36= V35;
	V37= V34;
	V38= V33;
	narg= narg - 3;
	V40 = list_vector_new(narg,first,ap);
	V39= V40;
	V39= make_cons((V38),(V39));
	{object V41;
	{object V42;
	{object V43;
	object V44= (V39);
	if(endp(V44)){
	V42= Cnil;
	goto T152;}
	base[0]=V43=MMcons(Cnil,Cnil);
	goto T153;
T153:;
	base[1]= (V44->c.c_car);
	vs_top=(vs_base=base+1)+1;
	Llength();
	vs_top=sup;
	(V43->c.c_car)= vs_base[0];
	V44=MMcdr(V44);
	if(endp(V44)){
	V42= base[0];
	goto T152;}
	V43=MMcdr(V43)=MMcons(Cnil,Cnil);
	goto T153;}
	goto T152;
T152:;
	 vs_top=base+0;
	 while(!endp(V42))
	 {vs_push(car(V42));V42=cdr(V42);}
	vs_base=base+0;}
	Lmin();
	vs_top=sup;
	V41= vs_base[0];
	if(((V36))!=Cnil){
	goto T157;}
	{register long V45;
	long V46;
	V45= 0;
	V46= fix((V41));
	goto T162;
T162:;
	if(!((V45)>=(V46))){
	goto T163;}
	{object V47 = Cnil;
	VMR3(V47)}
	goto T163;
T163:;
	base[0]= (V37);
	{object V48;
	{object V49;
	object V50= (V39);
	if(endp(V50)){
	V48= Cnil;
	goto T169;}
	base[1]=V49=MMcons(Cnil,Cnil);
	goto T170;
T170:;
	{register object V51;
	V51= (V50->c.c_car);
	(V49->c.c_car)= elt((V51),V45);}
	V50=MMcdr(V50);
	if(endp(V50)){
	V48= base[1];
	goto T169;}
	V49=MMcdr(V49)=MMcons(Cnil,Cnil);
	goto T170;}
	goto T169;
T169:;
	 vs_top=base+1;
	 while(!endp(V48))
	 {vs_push(car(V48));V48=cdr(V48);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V45= (long)(V45)+1;
	goto T162;}
	goto T157;
T157:;
	{register object V52;
	V52= (VFUN_NARGS=2,(*(LnkLI25))((V36),(V41)));
	{register long V53;
	long V54;
	V53= 0;
	V54= fix((V41));
	goto T179;
T179:;
	if(!((V53)>=(V54))){
	goto T180;}
	{object V55 = (V52);
	VMR3(V55)}
	goto T180;
T180:;
	base[0]= (V37);
	{object V57;
	{object V58;
	object V59= (V39);
	if(endp(V59)){
	V57= Cnil;
	goto T187;}
	base[1]=V58=MMcons(Cnil,Cnil);
	goto T188;
T188:;
	{register object V60;
	V60= (V59->c.c_car);
	(V58->c.c_car)= elt((V60),V53);}
	V59=MMcdr(V59);
	if(endp(V59)){
	V57= base[1];
	goto T187;}
	V58=MMcdr(V58)=MMcons(Cnil,Cnil);
	goto T188;}
	goto T187;
T187:;
	 vs_top=base+1;
	 while(!endp(V57))
	 {vs_push(car(V57));V57=cdr(V57);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V56= vs_base[0];
	(void)(elt_set((V52),V53,V56));
	V53= (long)(V53)+1;
	goto T179;}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SOME	*/

static object LI4(object V62,object V61,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB4 VMS4 VMV4
	{register object V63;
	object V64;
	register object V65;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V63= V62;
	V64= V61;
	narg= narg - 2;
	V66 = list_vector_new(narg,first,ap);
	V65= V66;
	V65= make_cons((V64),(V65));
	{register long V67;
	register long V68;
	V67= 0;
	{object V69;
	{object V70;
	object V71= (V65);
	if(endp(V71)){
	V69= Cnil;
	goto T197;}
	base[0]=V70=MMcons(Cnil,Cnil);
	goto T198;
T198:;
	base[1]= (V71->c.c_car);
	vs_top=(vs_base=base+1)+1;
	Llength();
	vs_top=sup;
	(V70->c.c_car)= vs_base[0];
	V71=MMcdr(V71);
	if(endp(V71)){
	V69= base[0];
	goto T197;}
	V70=MMcdr(V70)=MMcons(Cnil,Cnil);
	goto T198;}
	goto T197;
T197:;
	 vs_top=base+0;
	 while(!endp(V69))
	 {vs_push(car(V69));V69=cdr(V69);}
	vs_base=base+0;}
	Lmin();
	vs_top=sup;
	V68= fix(vs_base[0]);
	goto T202;
T202:;
	if(!((V67)>=(V68))){
	goto T203;}
	{object V72 = Cnil;
	VMR4(V72)}
	goto T203;
T203:;
	{register object V73;
	base[0]= (V63);
	{object V74;
	{object V75;
	object V76= (V65);
	if(endp(V76)){
	V74= Cnil;
	goto T210;}
	base[1]=V75=MMcons(Cnil,Cnil);
	goto T211;
T211:;
	{register object V77;
	V77= (V76->c.c_car);
	(V75->c.c_car)= elt((V77),V67);}
	V76=MMcdr(V76);
	if(endp(V76)){
	V74= base[1];
	goto T210;}
	V75=MMcdr(V75)=MMcons(Cnil,Cnil);
	goto T211;}
	goto T210;
T210:;
	 vs_top=base+1;
	 while(!endp(V74))
	 {vs_push(car(V74));V74=cdr(V74);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V73= vs_base[0];
	if(((V73))==Cnil){
	goto T207;}
	{object V78 = (V73);
	VMR4(V78)}}
	goto T207;
T207:;
	V67= (long)(V67)+1;
	goto T202;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function EVERY	*/

static object LI5(object V80,object V79,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB5 VMS5 VMV5
	{register object V81;
	object V82;
	register object V83;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V81= V80;
	V82= V79;
	narg= narg - 2;
	V84 = list_vector_new(narg,first,ap);
	V83= V84;
	V83= make_cons((V82),(V83));
	{register long V85;
	register long V86;
	V85= 0;
	{object V87;
	{object V88;
	object V89= (V83);
	if(endp(V89)){
	V87= Cnil;
	goto T222;}
	base[0]=V88=MMcons(Cnil,Cnil);
	goto T223;
T223:;
	base[1]= (V89->c.c_car);
	vs_top=(vs_base=base+1)+1;
	Llength();
	vs_top=sup;
	(V88->c.c_car)= vs_base[0];
	V89=MMcdr(V89);
	if(endp(V89)){
	V87= base[0];
	goto T222;}
	V88=MMcdr(V88)=MMcons(Cnil,Cnil);
	goto T223;}
	goto T222;
T222:;
	 vs_top=base+0;
	 while(!endp(V87))
	 {vs_push(car(V87));V87=cdr(V87);}
	vs_base=base+0;}
	Lmin();
	vs_top=sup;
	V86= fix(vs_base[0]);
	goto T227;
T227:;
	if(!((V85)>=(V86))){
	goto T228;}
	{object V90 = Ct;
	VMR5(V90)}
	goto T228;
T228:;
	base[0]= (V81);
	{object V91;
	{object V92;
	object V93= (V83);
	if(endp(V93)){
	V91= Cnil;
	goto T236;}
	base[1]=V92=MMcons(Cnil,Cnil);
	goto T237;
T237:;
	{register object V94;
	V94= (V93->c.c_car);
	(V92->c.c_car)= elt((V94),V85);}
	V93=MMcdr(V93);
	if(endp(V93)){
	V91= base[1];
	goto T236;}
	V92=MMcdr(V92)=MMcons(Cnil,Cnil);
	goto T237;}
	goto T236;
T236:;
	 vs_top=base+1;
	 while(!endp(V91))
	 {vs_push(car(V91));V91=cdr(V91);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T232;}
	{object V95 = Cnil;
	VMR5(V95)}
	goto T232;
T232:;
	V85= (long)(V85)+1;
	goto T227;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function NOTANY	*/

static object LI6(object V97,object V96,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	{object V98;
	object V99;
	object V100;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V98= V97;
	V99= V96;
	narg= narg - 2;
	V101 = list_vector_new(narg,first,ap);
	V100= V101;
	base[0]= (V98);
	base[1]= (V99);
	{object V103;
	V103= (V100);
	 vs_top=base+2;
	 while(!endp(V103))
	 {vs_push(car(V103));V103=cdr(V103);}
	vs_base=base+0;}
	(void) (*Lnk26)();
	vs_top=sup;
	V102= vs_base[0];
	{object V104 = ((V102)==Cnil?Ct:Cnil);
	VMR6(V104)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function NOTEVERY	*/

static object LI7(object V106,object V105,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	{object V107;
	object V108;
	object V109;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V107= V106;
	V108= V105;
	narg= narg - 2;
	V110 = list_vector_new(narg,first,ap);
	V109= V110;
	base[0]= (V107);
	base[1]= (V108);
	{object V112;
	V112= (V109);
	 vs_top=base+2;
	 while(!endp(V112))
	 {vs_push(car(V112));V112=cdr(V112);}
	vs_base=base+0;}
	(void) (*Lnk27)();
	vs_top=sup;
	V111= vs_base[0];
	{object V113 = ((V111)==Cnil?Ct:Cnil);
	VMR7(V113)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
static void LnkT27(){ call_or_link(VV[27],(void **)(void *)&Lnk27);} /* EVERY */
static void LnkT26(){ call_or_link(VV[26],(void **)(void *)&Lnk26);} /* SOME */
static object  LnkTLI25(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[25],(void **)(void *)&LnkLI25,first,ap);va_end(ap);return V1;} /* MAKE-SEQUENCE */
static object  LnkTLI24(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[24],(void **)(void *)&LnkLI24,1,first,ap);va_end(ap);return V1;} /* BEST-ARRAY-ELEMENT-TYPE */
static void LnkT23(){ call_or_link(VV[23],(void **)(void *)&Lnk23);} /* SPECIFIC-ERROR */
static void LnkT22(){ call_or_link(VV[22],(void **)(void *)&Lnk22);} /* SUBTYPEP */
static object  LnkTLI21(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[21],(void **)(void *)&LnkLI21,1,first,ap);va_end(ap);return V1;} /* NORMALIZE-TYPE */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

