
#include "cmpinclude.h"
#include "seq.h"
init_seq(){do_init(VV);}
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
	if(narg <2) too_few_arguments();
	V3= V2;
	V4= V1;
	narg= narg - 2;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +2,&LI1key,ap);
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
T10:;
	base[0]= (V4);
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	{object V10 = vs_base[0];
	VMR1(V10)}
T7:;
	if(((V3))==(VV[2])){
	goto T16;}
	if(!(((V3))==(VV[3]))){
	goto T17;}
T16:;
	V7= VV[4];
	goto T5;
T17:;
	if(((V3))==(VV[5])){
	goto T21;}
	if(!(((V3))==(VV[6]))){
	goto T22;}
T21:;
	V7= VV[7];
	goto T5;
T22:;
	if(((V3))==(VV[8])){
	goto T26;}
	if(!(((V3))==(VV[9]))){
	goto T27;}
T26:;
	V7= Ct;
	goto T5;
T27:;
	V3= (*(LnkLI13))((V3));
	if(!((car((V3)))==(VV[0]))){
	goto T33;}
	if(((V6))==Cnil){
	goto T37;}
	base[0]= (V4);
	base[1]= VV[1];
	base[2]= (V5);
	vs_top=(vs_base=base+0)+3;
	Lmake_list();
	vs_top=sup;
	{object V11 = vs_base[0];
	VMR1(V11)}
T37:;
	base[0]= (V4);
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	{object V12 = vs_base[0];
	VMR1(V12)}
T33:;
	if((car((V3)))==(VV[10])){
	goto T43;}
	if((car((V3)))==(VV[11])){
	goto T43;}
	base[0]= VV[12];
	base[1]= (V3);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
T43:;{object V13;
	V13= cadr((V3));
	if(V13==Cnil)goto T50;
	V7= V13;
	goto T5;
T50:;}
	V7= Ct;
T5:;
	V7= (*(LnkLI14))((V7));
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
	goto T63;}
	{register int V14;
	register int V15;
	V14= 0;
	V15= fix((V4));
T69:;
	if(!((V14)>=(V15))){
	goto T70;}
	goto T63;
T70:;
	(void)(elt_set((V8),V14,(V5)));
	V14= (V14)+1;
	goto T69;}
T63:;
	{object V16 = (V8);
	VMR1(V16)}}}
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
	if(narg <1) too_few_arguments();
	V18= V17;
	narg= narg - 1;
	va_start(ap);
	V20 = list_vector(narg,ap);
	V19= V20;
	{register object V21;
	register object V22;
	register int V23;
	{object V25;
	{object V26;
	object V27= (V19);
	if(endp(V27)){
	V25= Cnil;
	goto T80;}
	base[0]=V26=MMcons(Cnil,Cnil);
T81:;
	base[1]= (V27->c.c_car);
	vs_top=(vs_base=base+1)+1;
	Llength();
	vs_top=sup;
	(V26->c.c_car)= vs_base[0];
	if(endp(V27=MMcdr(V27))){
	V25= base[0];
	goto T80;}
	V26=MMcdr(V26)=MMcons(Cnil,Cnil);
	goto T81;}
T80:;
	 vs_top=base+0;
	 while(!endp(V25))
	 {vs_push(car(V25));V25=cdr(V25);}
	vs_base=base+0;}
	Lplus();
	vs_top=sup;
	V24= vs_base[0];
	V21= (VFUN_NARGS=2,(*(LnkLI15))((V18),V24));
	V23= 0;
	V22= (V19);
T86:;
	if(((V22))!=Cnil){
	goto T87;}
	{object V28 = (V21);
	VMR2(V28)}
T87:;
	{register int V29;
	register int V30;
	V29= 0;
	V30= length(car((V22)));
T95:;
	if(!((V29)>=(V30))){
	goto T96;}
	goto T91;
T96:;
	V31= elt(car((V22)),V29);
	(void)(elt_set((V21),V23,/* INLINE-ARGS */V31));
	V23= (V23)+(1);
	V29= (V29)+1;
	goto T95;}
T91:;
	V22= cdr((V22));
	goto T86;}}
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
	if(narg <3) too_few_arguments();
	V35= V34;
	V36= V33;
	V37= V32;
	narg= narg - 3;
	va_start(ap);
	V39 = list_vector(narg,ap);
	V38= V39;
	V38= make_cons((V37),(V38));
	{object V40;
	{object V41;
	{object V42;
	object V43= (V38);
	if(endp(V43)){
	V41= Cnil;
	goto T112;}
	base[0]=V42=MMcons(Cnil,Cnil);
T113:;
	base[1]= (V43->c.c_car);
	vs_top=(vs_base=base+1)+1;
	Llength();
	vs_top=sup;
	(V42->c.c_car)= vs_base[0];
	if(endp(V43=MMcdr(V43))){
	V41= base[0];
	goto T112;}
	V42=MMcdr(V42)=MMcons(Cnil,Cnil);
	goto T113;}
T112:;
	 vs_top=base+0;
	 while(!endp(V41))
	 {vs_push(car(V41));V41=cdr(V41);}
	vs_base=base+0;}
	Lmin();
	vs_top=sup;
	V40= vs_base[0];
	if(((V35))!=Cnil){
	goto T117;}
	{register int V44;
	int V45;
	V44= 0;
	V45= fix((V40));
T122:;
	if(!((V44)>=(V45))){
	goto T123;}
	{object V46 = Cnil;
	VMR3(V46)}
T123:;
	base[0]= (V36);
	{object V47;
	{object V48;
	object V49= (V38);
	if(endp(V49)){
	V47= Cnil;
	goto T129;}
	base[1]=V48=MMcons(Cnil,Cnil);
T130:;
	{register object V50;
	V50= (V49->c.c_car);
	(V48->c.c_car)= elt((V50),V44);}
	if(endp(V49=MMcdr(V49))){
	V47= base[1];
	goto T129;}
	V48=MMcdr(V48)=MMcons(Cnil,Cnil);
	goto T130;}
T129:;
	 vs_top=base+1;
	 while(!endp(V47))
	 {vs_push(car(V47));V47=cdr(V47);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V44= (V44)+1;
	goto T122;}
T117:;
	{register object V51;
	V51= (VFUN_NARGS=2,(*(LnkLI15))((V35),(V40)));
	{register int V52;
	int V53;
	V52= 0;
	V53= fix((V40));
T139:;
	if(!((V52)>=(V53))){
	goto T140;}
	{object V54 = (V51);
	VMR3(V54)}
T140:;
	base[0]= (V36);
	{object V56;
	{object V57;
	object V58= (V38);
	if(endp(V58)){
	V56= Cnil;
	goto T147;}
	base[1]=V57=MMcons(Cnil,Cnil);
T148:;
	{register object V59;
	V59= (V58->c.c_car);
	(V57->c.c_car)= elt((V59),V52);}
	if(endp(V58=MMcdr(V58))){
	V56= base[1];
	goto T147;}
	V57=MMcdr(V57)=MMcons(Cnil,Cnil);
	goto T148;}
T147:;
	 vs_top=base+1;
	 while(!endp(V56))
	 {vs_push(car(V56));V56=cdr(V56);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V55= vs_base[0];
	(void)(elt_set((V51),V52,V55));
	V52= (V52)+1;
	goto T139;}}}}
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
	if(narg <2) too_few_arguments();
	V62= V61;
	V63= V60;
	narg= narg - 2;
	va_start(ap);
	V65 = list_vector(narg,ap);
	V64= V65;
	V64= make_cons((V63),(V64));
	{register int V66;
	register int V67;
	V66= 0;
	{object V68;
	{object V69;
	object V70= (V64);
	if(endp(V70)){
	V68= Cnil;
	goto T157;}
	base[0]=V69=MMcons(Cnil,Cnil);
T158:;
	base[1]= (V70->c.c_car);
	vs_top=(vs_base=base+1)+1;
	Llength();
	vs_top=sup;
	(V69->c.c_car)= vs_base[0];
	if(endp(V70=MMcdr(V70))){
	V68= base[0];
	goto T157;}
	V69=MMcdr(V69)=MMcons(Cnil,Cnil);
	goto T158;}
T157:;
	 vs_top=base+0;
	 while(!endp(V68))
	 {vs_push(car(V68));V68=cdr(V68);}
	vs_base=base+0;}
	Lmin();
	vs_top=sup;
	V67= fix(vs_base[0]);
T162:;
	if(!((V66)>=(V67))){
	goto T163;}
	{object V71 = Cnil;
	VMR4(V71)}
T163:;
	{register object V72;
	base[0]= (V62);
	{object V73;
	{object V74;
	object V75= (V64);
	if(endp(V75)){
	V73= Cnil;
	goto T170;}
	base[1]=V74=MMcons(Cnil,Cnil);
T171:;
	{register object V76;
	V76= (V75->c.c_car);
	(V74->c.c_car)= elt((V76),V66);}
	if(endp(V75=MMcdr(V75))){
	V73= base[1];
	goto T170;}
	V74=MMcdr(V74)=MMcons(Cnil,Cnil);
	goto T171;}
T170:;
	 vs_top=base+1;
	 while(!endp(V73))
	 {vs_push(car(V73));V73=cdr(V73);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V72= vs_base[0];
	if(((V72))==Cnil){
	goto T167;}
	{object V77 = (V72);
	VMR4(V77)}}
T167:;
	V66= (V66)+1;
	goto T162;}}
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
	if(narg <2) too_few_arguments();
	V80= V79;
	V81= V78;
	narg= narg - 2;
	va_start(ap);
	V83 = list_vector(narg,ap);
	V82= V83;
	V82= make_cons((V81),(V82));
	{register int V84;
	register int V85;
	V84= 0;
	{object V86;
	{object V87;
	object V88= (V82);
	if(endp(V88)){
	V86= Cnil;
	goto T182;}
	base[0]=V87=MMcons(Cnil,Cnil);
T183:;
	base[1]= (V88->c.c_car);
	vs_top=(vs_base=base+1)+1;
	Llength();
	vs_top=sup;
	(V87->c.c_car)= vs_base[0];
	if(endp(V88=MMcdr(V88))){
	V86= base[0];
	goto T182;}
	V87=MMcdr(V87)=MMcons(Cnil,Cnil);
	goto T183;}
T182:;
	 vs_top=base+0;
	 while(!endp(V86))
	 {vs_push(car(V86));V86=cdr(V86);}
	vs_base=base+0;}
	Lmin();
	vs_top=sup;
	V85= fix(vs_base[0]);
T187:;
	if(!((V84)>=(V85))){
	goto T188;}
	{object V89 = Ct;
	VMR5(V89)}
T188:;
	base[0]= (V80);
	{object V90;
	{object V91;
	object V92= (V82);
	if(endp(V92)){
	V90= Cnil;
	goto T196;}
	base[1]=V91=MMcons(Cnil,Cnil);
T197:;
	{register object V93;
	V93= (V92->c.c_car);
	(V91->c.c_car)= elt((V93),V84);}
	if(endp(V92=MMcdr(V92))){
	V90= base[1];
	goto T196;}
	V91=MMcdr(V91)=MMcons(Cnil,Cnil);
	goto T197;}
T196:;
	 vs_top=base+1;
	 while(!endp(V90))
	 {vs_push(car(V90));V90=cdr(V90);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T192;}
	{object V94 = Cnil;
	VMR5(V94)}
T192:;
	V84= (V84)+1;
	goto T187;}}
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
	if(narg <2) too_few_arguments();
	V97= V96;
	V98= V95;
	narg= narg - 2;
	va_start(ap);
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
	(void) (*Lnk16)();
	vs_top=sup;
	V101= vs_base[0];
	{object V103 = ((V101)==Cnil?Ct:Cnil);
	VMR6(V103)}}
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
	if(narg <2) too_few_arguments();
	V106= V105;
	V107= V104;
	narg= narg - 2;
	va_start(ap);
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
	(void) (*Lnk17)();
	vs_top=sup;
	V110= vs_base[0];
	{object V112 = ((V110)==Cnil?Ct:Cnil);
	VMR7(V112)}}
	}
static LnkT17(){ call_or_link(VV[17],&Lnk17);} /* EVERY */
static LnkT16(){ call_or_link(VV[16],&Lnk16);} /* SOME */
static object  LnkTLI15(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[15],&LnkLI15,ap);} /* MAKE-SEQUENCE */
static object  LnkTLI14(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[14],&LnkLI14,1,ap);} /* BEST-ARRAY-ELEMENT-TYPE */
static object  LnkTLI13(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[13],&LnkLI13,1,ap);} /* NORMALIZE-TYPE */
