
#include "cmpinclude.h"
#include "seq.h"
void init_seq(){do_init(VV);}
/*	local entry for function MAKE-SEQUENCE	*/

static object LI1(V2,V1,va_alist)
	object V2,V1;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{register object V3;
	register object V4;
	register object V5;
	object V6;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V3= V2;
	V4= V1;
	narg= narg - 2;
	{
	parse_key_new(narg,Vcs +2,(struct key *)&LI1key,ap);
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
	if(!(type_of(car(caddr((V3))))==t_fixnum)){
	goto T70;}
	if(equal(car(caddr((V3))),(V4))){
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
	vs_top=sup;
goto T70;
T70:;{object V13;
	V13= cadr((V3));
	if(V13==Cnil)goto T83;
	V7= V13;
	goto T5;
goto T83;
T83:;}
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
	goto T96;}
	{register long V14;
	register long V15;
	V14= 0;
	V15= fix((V4));
goto T102;
T102:;
	if(!((V14)>=(V15))){
	goto T103;}
	goto T96;
goto T103;
T103:;
	(void)(elt_set((V8),V14,(V5)));
	V14= (long)(V14)+1;
	goto T102;}
goto T96;
T96:;
	{object V16 = (V8);
	VMR1(V16)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function CONCATENATE	*/

static object LI2(V17,va_alist)
	object V17;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB2 VMS2 VMV2
	{object V18;
	object V19;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V18= V17;
	narg= narg - 1;
	V20 = list_vector(narg,ap);
	V19= V20;
	{register object V21;
	register object V22;
	register long V23;
	{object V25;
	{object V26;
	object V27= (V19);
	if(endp(V27)){
	V25= Cnil;
	goto T113;}
	base[0]=V26=MMcons(Cnil,Cnil);
goto T114;
T114:;
	base[1]= (V27->c.c_car);
	vs_top=(vs_base=base+1)+1;
	Llength();
	vs_top=sup;
	(V26->c.c_car)= vs_base[0];
	V27=MMcdr(V27);
	if(endp(V27)){
	V25= base[0];
	goto T113;}
	V26=MMcdr(V26)=MMcons(Cnil,Cnil);
	goto T114;}
goto T113;
T113:;
	 vs_top=base+0;
	 while(!endp(V25))
	 {vs_push(car(V25));V25=cdr(V25);}
	vs_base=base+0;}
	Lplus();
	vs_top=sup;
	V24= vs_base[0];
	V21= (VFUN_NARGS=2,(*(LnkLI25))((V18),V24));
	V23= 0;
	V22= (V19);
goto T119;
T119:;
	if(((V22))!=Cnil){
	goto T120;}
	{object V28 = (V21);
	VMR2(V28)}
goto T120;
T120:;
	{register long V29;
	register long V30;
	V29= 0;
	V30= (long)length(car((V22)));
goto T128;
T128:;
	if(!((V29)>=(V30))){
	goto T129;}
	goto T124;
goto T129;
T129:;
	V31= elt(car((V22)),V29);
	(void)(elt_set((V21),V23,/* INLINE-ARGS */V31));
	V23= (long)(V23)+(1);
	V29= (long)(V29)+1;
	goto T128;}
goto T124;
T124:;
	V22= cdr((V22));
	goto T119;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAP	*/

static object LI3(V34,V33,V32,va_alist)
	object V34,V33,V32;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB3 VMS3 VMV3
	{object V35;
	register object V36;
	object V37;
	register object V38;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <3) too_few_arguments();
	V35= V34;
	V36= V33;
	V37= V32;
	narg= narg - 3;
	V39 = list_vector(narg,ap);
	V38= V39;
	V38= make_cons((V37),(V38));
	{object V40;
	{object V41;
	{object V42;
	object V43= (V38);
	if(endp(V43)){
	V41= Cnil;
	goto T145;}
	base[0]=V42=MMcons(Cnil,Cnil);
goto T146;
T146:;
	base[1]= (V43->c.c_car);
	vs_top=(vs_base=base+1)+1;
	Llength();
	vs_top=sup;
	(V42->c.c_car)= vs_base[0];
	V43=MMcdr(V43);
	if(endp(V43)){
	V41= base[0];
	goto T145;}
	V42=MMcdr(V42)=MMcons(Cnil,Cnil);
	goto T146;}
goto T145;
T145:;
	 vs_top=base+0;
	 while(!endp(V41))
	 {vs_push(car(V41));V41=cdr(V41);}
	vs_base=base+0;}
	Lmin();
	vs_top=sup;
	V40= vs_base[0];
	if(((V35))!=Cnil){
	goto T150;}
	{register long V44;
	long V45;
	V44= 0;
	V45= fix((V40));
goto T155;
T155:;
	if(!((V44)>=(V45))){
	goto T156;}
	{object V46 = Cnil;
	VMR3(V46)}
goto T156;
T156:;
	base[0]= (V36);
	{object V47;
	{object V48;
	object V49= (V38);
	if(endp(V49)){
	V47= Cnil;
	goto T162;}
	base[1]=V48=MMcons(Cnil,Cnil);
goto T163;
T163:;
	{register object V50;
	V50= (V49->c.c_car);
	(V48->c.c_car)= elt((V50),V44);}
	V49=MMcdr(V49);
	if(endp(V49)){
	V47= base[1];
	goto T162;}
	V48=MMcdr(V48)=MMcons(Cnil,Cnil);
	goto T163;}
goto T162;
T162:;
	 vs_top=base+1;
	 while(!endp(V47))
	 {vs_push(car(V47));V47=cdr(V47);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V44= (long)(V44)+1;
	goto T155;}
goto T150;
T150:;
	{register object V51;
	V51= (VFUN_NARGS=2,(*(LnkLI25))((V35),(V40)));
	{register long V52;
	long V53;
	V52= 0;
	V53= fix((V40));
goto T172;
T172:;
	if(!((V52)>=(V53))){
	goto T173;}
	{object V54 = (V51);
	VMR3(V54)}
goto T173;
T173:;
	base[0]= (V36);
	{object V56;
	{object V57;
	object V58= (V38);
	if(endp(V58)){
	V56= Cnil;
	goto T180;}
	base[1]=V57=MMcons(Cnil,Cnil);
goto T181;
T181:;
	{register object V59;
	V59= (V58->c.c_car);
	(V57->c.c_car)= elt((V59),V52);}
	V58=MMcdr(V58);
	if(endp(V58)){
	V56= base[1];
	goto T180;}
	V57=MMcdr(V57)=MMcons(Cnil,Cnil);
	goto T181;}
goto T180;
T180:;
	 vs_top=base+1;
	 while(!endp(V56))
	 {vs_push(car(V56));V56=cdr(V56);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V55= vs_base[0];
	(void)(elt_set((V51),V52,V55));
	V52= (long)(V52)+1;
	goto T172;}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SOME	*/

static object LI4(V61,V60,va_alist)
	object V61,V60;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB4 VMS4 VMV4
	{register object V62;
	object V63;
	register object V64;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V62= V61;
	V63= V60;
	narg= narg - 2;
	V65 = list_vector(narg,ap);
	V64= V65;
	V64= make_cons((V63),(V64));
	{register long V66;
	register long V67;
	V66= 0;
	{object V68;
	{object V69;
	object V70= (V64);
	if(endp(V70)){
	V68= Cnil;
	goto T190;}
	base[0]=V69=MMcons(Cnil,Cnil);
goto T191;
T191:;
	base[1]= (V70->c.c_car);
	vs_top=(vs_base=base+1)+1;
	Llength();
	vs_top=sup;
	(V69->c.c_car)= vs_base[0];
	V70=MMcdr(V70);
	if(endp(V70)){
	V68= base[0];
	goto T190;}
	V69=MMcdr(V69)=MMcons(Cnil,Cnil);
	goto T191;}
goto T190;
T190:;
	 vs_top=base+0;
	 while(!endp(V68))
	 {vs_push(car(V68));V68=cdr(V68);}
	vs_base=base+0;}
	Lmin();
	vs_top=sup;
	V67= fix(vs_base[0]);
goto T195;
T195:;
	if(!((V66)>=(V67))){
	goto T196;}
	{object V71 = Cnil;
	VMR4(V71)}
goto T196;
T196:;
	{register object V72;
	base[0]= (V62);
	{object V73;
	{object V74;
	object V75= (V64);
	if(endp(V75)){
	V73= Cnil;
	goto T203;}
	base[1]=V74=MMcons(Cnil,Cnil);
goto T204;
T204:;
	{register object V76;
	V76= (V75->c.c_car);
	(V74->c.c_car)= elt((V76),V66);}
	V75=MMcdr(V75);
	if(endp(V75)){
	V73= base[1];
	goto T203;}
	V74=MMcdr(V74)=MMcons(Cnil,Cnil);
	goto T204;}
goto T203;
T203:;
	 vs_top=base+1;
	 while(!endp(V73))
	 {vs_push(car(V73));V73=cdr(V73);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V72= vs_base[0];
	if(((V72))==Cnil){
	goto T200;}
	{object V77 = (V72);
	VMR4(V77)}}
goto T200;
T200:;
	V66= (long)(V66)+1;
	goto T195;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function EVERY	*/

static object LI5(V79,V78,va_alist)
	object V79,V78;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB5 VMS5 VMV5
	{register object V80;
	object V81;
	register object V82;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V80= V79;
	V81= V78;
	narg= narg - 2;
	V83 = list_vector(narg,ap);
	V82= V83;
	V82= make_cons((V81),(V82));
	{register long V84;
	register long V85;
	V84= 0;
	{object V86;
	{object V87;
	object V88= (V82);
	if(endp(V88)){
	V86= Cnil;
	goto T215;}
	base[0]=V87=MMcons(Cnil,Cnil);
goto T216;
T216:;
	base[1]= (V88->c.c_car);
	vs_top=(vs_base=base+1)+1;
	Llength();
	vs_top=sup;
	(V87->c.c_car)= vs_base[0];
	V88=MMcdr(V88);
	if(endp(V88)){
	V86= base[0];
	goto T215;}
	V87=MMcdr(V87)=MMcons(Cnil,Cnil);
	goto T216;}
goto T215;
T215:;
	 vs_top=base+0;
	 while(!endp(V86))
	 {vs_push(car(V86));V86=cdr(V86);}
	vs_base=base+0;}
	Lmin();
	vs_top=sup;
	V85= fix(vs_base[0]);
goto T220;
T220:;
	if(!((V84)>=(V85))){
	goto T221;}
	{object V89 = Ct;
	VMR5(V89)}
goto T221;
T221:;
	base[0]= (V80);
	{object V90;
	{object V91;
	object V92= (V82);
	if(endp(V92)){
	V90= Cnil;
	goto T229;}
	base[1]=V91=MMcons(Cnil,Cnil);
goto T230;
T230:;
	{register object V93;
	V93= (V92->c.c_car);
	(V91->c.c_car)= elt((V93),V84);}
	V92=MMcdr(V92);
	if(endp(V92)){
	V90= base[1];
	goto T229;}
	V91=MMcdr(V91)=MMcons(Cnil,Cnil);
	goto T230;}
goto T229;
T229:;
	 vs_top=base+1;
	 while(!endp(V90))
	 {vs_push(car(V90));V90=cdr(V90);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T225;}
	{object V94 = Cnil;
	VMR5(V94)}
goto T225;
T225:;
	V84= (long)(V84)+1;
	goto T220;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function NOTANY	*/

static object LI6(V96,V95,va_alist)
	object V96,V95;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	{object V97;
	object V98;
	object V99;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V97= V96;
	V98= V95;
	narg= narg - 2;
	V100 = list_vector(narg,ap);
	V99= V100;
	base[0]= (V97);
	base[1]= (V98);
	{object V102;
	V102= (V99);
	 vs_top=base+2;
	 while(!endp(V102))
	 {vs_push(car(V102));V102=cdr(V102);}
	vs_base=base+0;}
	(void) (*Lnk26)();
	vs_top=sup;
	V101= vs_base[0];
	{object V103 = ((V101)==Cnil?Ct:Cnil);
	VMR6(V103)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function NOTEVERY	*/

static object LI7(V105,V104,va_alist)
	object V105,V104;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	{object V106;
	object V107;
	object V108;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V106= V105;
	V107= V104;
	narg= narg - 2;
	V109 = list_vector(narg,ap);
	V108= V109;
	base[0]= (V106);
	base[1]= (V107);
	{object V111;
	V111= (V108);
	 vs_top=base+2;
	 while(!endp(V111))
	 {vs_push(car(V111));V111=cdr(V111);}
	vs_base=base+0;}
	(void) (*Lnk27)();
	vs_top=sup;
	V110= vs_base[0];
	{object V112 = ((V110)==Cnil?Ct:Cnil);
	VMR7(V112)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
static void LnkT27(){ call_or_link(VV[27],(void **)&Lnk27);} /* EVERY */
static void LnkT26(){ call_or_link(VV[26],(void **)&Lnk26);} /* SOME */
static object  LnkTLI25(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[25],(void **)&LnkLI25,ap);va_end(ap);return V1;} /* MAKE-SEQUENCE */
static object  LnkTLI24(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[24],(void **)&LnkLI24,1,ap);va_end(ap);return V1;} /* BEST-ARRAY-ELEMENT-TYPE */
static void LnkT23(){ call_or_link(VV[23],(void **)&Lnk23);} /* SPECIFIC-ERROR */
static void LnkT22(){ call_or_link(VV[22],(void **)&Lnk22);} /* SUBTYPEP */
static object  LnkTLI21(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[21],(void **)&LnkLI21,1,ap);va_end(ap);return V1;} /* NORMALIZE-TYPE */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

