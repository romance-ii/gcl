
#include "cmpinclude.h"
#include "gcl_cmpwt.h"
void init_gcl_cmpwt(){do_init(VV);}
/*	local entry for function WT-COMMENT	*/

static object LI1(object V1,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{object V2;
	object V3;
	va_start(ap,first);
	V2= V1;
	narg = narg - 1;
	if (narg <= 0) goto T1;
	else {
	V3= first;}
	--narg; goto T2;
	goto T1;
T1:;
	V3= Cnil;
	goto T2;
T2:;
	princ_str("\n/*	",VV[0]);
	(void)(princ((V2),(VV[0]->s.s_dbind)));
	if(((V3))==Cnil){
	goto T6;}
	{register object V4;
	V4= symbol_name((V3));
	{register long V5;
	register long V6;
	V5= (long)((V4))->v.v_fillp;
	V6= 0;
	goto T13;
T13:;
	if(!((V6)>=(V5))){
	goto T14;}
	goto T6;
	goto T14;
T14:;
	{register unsigned char V7;
	V7= ((V4))->ust.ust_self[V6];
	if((V7)==(47)){
	goto T18;}
	(void)(princ(code_char(V7),(VV[0]->s.s_dbind)));}
	goto T18;
T18:;
	V6= (long)(V6)+1;
	goto T13;}}
	goto T6;
T6:;
	princ_str("	*/\n",VV[0]);
	{object V8 = Cnil;
	VMR1(V8)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function WT1	*/

static object LI2(V10)

register object V10;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if(type_of((V10))==t_string){
	goto T27;}
	if(type_of((V10))==t_fixnum||type_of((V10))==t_bignum){
	goto T27;}
	if(!(type_of((V10))==t_character)){
	goto T28;}
	goto T27;
T27:;
	(void)(princ((V10),(VV[0]->s.s_dbind)));
	goto T26;
	goto T28;
T28:;
	if(type_of((V10))==t_longfloat){
	goto T34;}
	if(!(type_of((V10))==t_shortfloat)){
	goto T35;}
	goto T34;
T34:;
	base[0]= (VV[0]->s.s_dbind);
	base[1]= VV[2];
	base[2]= (V10);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T26;
	goto T35;
T35:;
	base[0]= (V10);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk43)();
	vs_top=sup;
	goto T26;
T26:;
	{object V11 = Cnil;
	VMR2(V11)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-H1	*/

static object LI3(V13)

register object V13;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	if(!(type_of((V13))==t_cons)){
	goto T45;}
	{object V14;
	{object V15 =(CMPcar((V13)))->s.s_plist;
	 object ind= VV[3];
	while(V15!=Cnil){
	if(V15->c.c_car==ind){
	V14= (V15->c.c_cdr->c.c_car);
	goto T47;
	}else V15=V15->c.c_cdr->c.c_cdr;}
	V14= Cnil;}
	goto T47;
T47:;
	if(((V14))==Cnil){
	goto T49;}
	base[0]= (V14);
	{object V16;
	V16= CMPcdr((V13));
	 vs_top=base+1;
	 while(V16!=Cnil)
	 {vs_push((V16)->c.c_car);V16=(V16)->c.c_cdr;}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	goto T43;
	goto T49;
T49:;
	base[0]= VV[4];
	base[1]= (V13);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk44)();
	vs_top=sup;
	goto T43;}
	goto T45;
T45:;
	(void)(princ((V13),(VV[5]->s.s_dbind)));
	goto T43;
T43:;
	{object V17 = Cnil;
	VMR3(V17)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PUSH-DATA-INCF	*/

static object LI4(V19)

object V19;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{object V20;
	register object V21;
	register long V22;
	long V23;
	base[2]= (V19);
	base[3]= small_fixnum(-1000);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	V24= vs_base[0];
	V20= make_cons(V24,(V19));
	V21= CMPcar((VV[6]->s.s_dbind));
	V22= (long)(((V21))->st.st_fillp);
	V23= (long)(((V21))->st.st_dim);
	if(!((V22)<(V23))){
	goto T64;}
	(void)((((V21))->st.st_fillp)=((long)(1)+(V22)));
	V25 = CMPmake_fixnum(V22);
	(void)(aset1((V21),fix(V25),(V20)));
	goto T55;
	goto T64;
T64:;
	(void)((VFUN_NARGS=2,(*(LnkLI46))((V20),(V21))));}
	goto T55;
T55:;
	(VV[7]->s.s_dbind)= number_plus((VV[7]->s.s_dbind),small_fixnum(1));
	{object V26 = (VV[7]->s.s_dbind);
	VMR4(V26)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-DATA1	*/

static object LI5(V28)

object V28;
{	 VMB5 VMS5 VMV5
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[8],Cnil);
	bds_bind(VV[9],small_fixnum(10));
	bds_bind(VV[10],Ct);
	bds_bind(VV[11],Cnil);
	bds_bind(VV[12],Cnil);
	bds_bind(VV[13],Cnil);
	bds_bind(VV[14],VV[15]);
	bds_bind(VV[16],Ct);
	bds_bind(VV[17],Ct);
	bds_bind(VV[18],Ct);
	bds_bind(VV[19],Ct);
	bds_bind(VV[20],Ct);
	princ_char(10,VV[21]);
	{object V29 = prin1((V28),(VV[21]->s.s_dbind));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR5(V29)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VERIFY-DATA-VECTOR	*/

static object LI6(V31)

register object V31;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{register object V32;
	V32= Cnil;
	{register object V33;
	register object V34;
	V33= CMPmake_fixnum((long)length((V31)));
	V34= small_fixnum(0);
	goto T75;
T75:;
	if(!(number_compare((V34),(V33))>=0)){
	goto T76;}
	goto T71;
	goto T76;
T76:;
	V32= aref1((V31),fix((V34)));
	{register object V35;
	base[1]= CMPcdr((V32));
	base[2]= small_fixnum(-1000);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	V35= vs_base[0];
	if(eql(CMPcar((V32)),(V35))){
	goto T82;}
	(void)((VFUN_NARGS=2,(*(LnkLI47))(VV[22],CMPcdr((V32)))));}
	goto T82;
T82:;
	(void)(aset1((V31),fix((V34)),CMPcdr((V32))));
	V34= one_plus((V34));
	goto T75;}
	goto T71;
T71:;
	{object V36 = (V31);
	VMR6(V36)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-INIT	*/

static object LI7(object V37,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	{object V38;
	object V39;
	va_start(ap,first);
	V38= V37;
	narg = narg - 1;
	if (narg <= 0) goto T92;
	else {
	V39= first;}
	--narg; goto T93;
	goto T92;
T92:;
	V39= Cnil;
	goto T93;
T93:;
	{object V40;
	base[0]= (V38);
	base[1]= small_fixnum(-1000);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	V41= vs_base[0];
	V40= make_cons(V41,(V38));
	{object V42;
	object V43;
	V42= (VV[6]->s.s_dbind);
	if(((V39))==Cnil){
	goto T103;}
	V44= CMPcadr((VV[6]->s.s_dbind));
	V45= make_cons((V40),Cnil);
	V43= nconc(/* INLINE-ARGS */V44,/* INLINE-ARGS */V45);
	goto T101;
	goto T103;
T103:;
	V43= make_cons((V40),CMPcadr((VV[6]->s.s_dbind)));
	goto T101;
T101:;
	(CMPcdr((V42)))->c.c_car = (V43);
	(void)(CMPcdr((V42)));}
	{object V46 = (V38);
	VMR7(V46)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for WT-DATA-FILE	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	(void)((*(LnkLI48))(CMPcar((VV[6]->s.s_dbind))));
	{object V47;
	V48= nreverse(CMPcadr((VV[6]->s.s_dbind)));
	V47= (*(LnkLI49))(/* INLINE-ARGS */V48,VV[23]);
	(void)((*(LnkLI48))((V47)));
	V49= CMPcar((VV[6]->s.s_dbind));
	V50 = CMPmake_fixnum((long)length(CMPcar((VV[6]->s.s_dbind))));
	V51= number_minus(V50,small_fixnum(1));
	V52= make_cons(VV[24],(V47));
	(void)(aset1(/* INLINE-ARGS */V49,fix(/* INLINE-ARGS */V51),/* INLINE-ARGS */V52));
	{object V53;
	object V54;
	V53= (VV[6]->s.s_dbind);
	V54= nreverse(CMPcaddr((VV[6]->s.s_dbind)));
	(CMPcddr((V53)))->c.c_car = (V54);
	(void)(CMPcddr((V53)));}
	if(((VV[25]->s.s_dbind))==Cnil){
	goto T115;}
	vs_base=vs_top;
	(void) (*Lnk50)();
	return;
	goto T115;
T115:;
	base[1]= (VV[21]->s.s_dbind);
	base[2]= VV[26];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	{register object V55;
	register object V56;
	V55= CMPcaddr((VV[6]->s.s_dbind));
	V56= CMPcar((V55));
	goto T124;
T124:;
	if(!(((V55))==Cnil)){
	goto T125;}
	goto T120;
	goto T125;
T125:;
	base[3]= (VV[21]->s.s_dbind);
	base[4]= VV[27];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI51))((V56)));
	V55= CMPcdr((V55));
	V56= CMPcar((V55));
	goto T124;}
	goto T120;
T120:;
	(void)((*(LnkLI51))(CMPcar((VV[6]->s.s_dbind))));
	base[1]= (VV[21]->s.s_dbind);
	base[2]= VV[28];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	return;}
}
/*	function definition for WT-FASD-DATA-FILE	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	{object V57;
	object V58;
	V57= CMPcar((VV[6]->s.s_dbind));
	V58= Cnil;
	base[1]= (V57);
	base[2]= elt(CMPcar((VV[25]->s.s_dbind)),fix(small_fixnum(1)));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk52)();
	vs_top=sup;
	V58= CMPcaddr((VV[6]->s.s_dbind));
	if(((V58))==Cnil){
	goto T146;}
	{register object V59;
	register object V60;
	V59= (V58);
	V60= CMPcar((V59));
	goto T153;
T153:;
	if(!(((V59))==Cnil)){
	goto T154;}
	goto T146;
	goto T154;
T154:;
	{register long V61;
	V61= 1;
	if(!((type_of((VV[21]->s.s_dbind))==t_stream? (((VV[21]->s.s_dbind))->sm.sm_fp)!=0: 0 ))){
	goto T162;}
	(void)((putc(V61,((VV[21]->s.s_dbind))->sm.sm_fp)));
	goto T160;
	goto T162;
T162:;
	base[2]= CMPmake_fixnum(V61);
	base[3]= (VV[21]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lwrite_byte();
	vs_top=sup;
	goto T160;
T160:;}
	base[2]= (V60);
	base[3]= CMPcar((VV[25]->s.s_dbind));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk53)();
	vs_top=sup;
	V59= CMPcdr((V59));
	V60= CMPcar((V59));
	goto T153;}
	goto T146;
T146:;
	base[1]= (V57);
	base[2]= CMPcar((VV[25]->s.s_dbind));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk53)();
	vs_top=sup;
	base[1]= CMPcar((VV[25]->s.s_dbind));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk54)();
	return;}
}
/*	local entry for function WT-DATA-BEGIN	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V62 = Cnil;
	VMR10(V62)}
	return Cnil;
}
/*	local entry for function WT-DATA-END	*/

static object LI11()

{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{object V63 = Cnil;
	VMR11(V63)}
	return Cnil;
}
/*	local entry for function WT-DATA-PACKAGE-OPERATION	*/

static object LI12(V65)

object V65;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V67;
	object V68;
	V67= (VV[6]->s.s_dbind);
	V68= make_cons(V65,CMPcaddr((V67)));
	(CMPcddr((V67)))->c.c_car = (V68);
	(void)(CMPcddr((V67)));
	{object V69 = (V68);
	VMR12(V69)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for WT	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	vs_top=sup;
	{object V70=base[0]->c.c_cdr;
	base[2]= V70;
	base[3]= Cnil;}
	{register object V71;
	register object V72;
	V71= base[2];
	V72= CMPcar((V71));
	goto T185;
T185:;
	if(!(((V71))==Cnil)){
	goto T186;}
	V73= make_cons(Cnil,base[3]);
	V74= reverse(/* INLINE-ARGS */V73);
	base[5]= make_cons(VV[29],/* INLINE-ARGS */V74);
	vs_top=(vs_base=base+5)+1;
	return;
	goto T186;
T186:;
	if(!(type_of((V72))==t_string)){
	goto T192;}
	{register object V75;
	V75= list(3,VV[30],(V72),VV[0]);
	base[3]= make_cons((V75),base[3]);
	goto T190;}
	goto T192;
T192:;
	{register object V76;
	V76= list(2,VV[31],(V72));
	base[3]= make_cons((V76),base[3]);}
	goto T190;
T190:;
	V71= CMPcdr((V71));
	V72= CMPcar((V71));
	goto T185;}
}
/*	macro definition for WT-H	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	vs_top=sup;
	{object V77=base[0]->c.c_cdr;
	base[2]= V77;
	base[3]= Cnil;}
	if(!((base[2])==Cnil)){
	goto T205;}
	base[4]= VV[32];
	vs_top=(vs_base=base+4)+1;
	return;
	goto T205;
T205:;
	if(!(type_of(CMPcar(base[2]))==t_string)){
	goto T208;}
	{register object V78;
	register object V79;
	V78= CMPcdr(base[2]);
	V79= CMPcar((V78));
	goto T213;
T213:;
	if(!(((V78))==Cnil)){
	goto T214;}
	V80= (VFUN_NARGS=3,(*(LnkLI55))(VV[33],VV[34],CMPcar(base[2])));
	V81= list(3,VV[30],/* INLINE-ARGS */V80,VV[5]);
	V82= make_cons(Cnil,base[3]);
	base[6]= listA(3,VV[29],/* INLINE-ARGS */V81,reverse(/* INLINE-ARGS */V82));
	vs_top=(vs_base=base+6)+1;
	return;
	goto T214;
T214:;
	if(!(type_of((V79))==t_string)){
	goto T220;}
	{register object V83;
	V83= list(3,VV[30],(V79),VV[5]);
	base[3]= make_cons((V83),base[3]);
	goto T218;}
	goto T220;
T220:;
	{register object V84;
	V84= list(2,VV[35],(V79));
	base[3]= make_cons((V84),base[3]);}
	goto T218;
T218:;
	V78= CMPcdr((V78));
	V79= CMPcar((V78));
	goto T213;}
	goto T208;
T208:;
	{register object V85;
	register object V86;
	V85= base[2];
	V86= CMPcar((V85));
	goto T234;
T234:;
	if(!(((V85))==Cnil)){
	goto T235;}
	V87= make_cons(Cnil,base[3]);
	base[5]= listA(3,VV[29],VV[36],reverse(/* INLINE-ARGS */V87));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T235;
T235:;
	if(!(type_of((V86))==t_string)){
	goto T241;}
	{register object V88;
	V88= list(3,VV[30],(V86),VV[5]);
	base[3]= make_cons((V88),base[3]);
	goto T239;}
	goto T241;
T241:;
	{register object V89;
	V89= list(2,VV[35],(V86));
	base[3]= make_cons((V89),base[3]);}
	goto T239;
T239:;
	V85= CMPcdr((V85));
	V86= CMPcar((V85));
	goto T234;}
}
/*	macro definition for WT-NL	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	vs_top=sup;
	{object V90=base[0]->c.c_cdr;
	base[2]= V90;
	base[3]= Cnil;}
	if(!((base[2])==Cnil)){
	goto T254;}
	base[4]= VV[37];
	vs_top=(vs_base=base+4)+1;
	return;
	goto T254;
T254:;
	if(!(type_of(CMPcar(base[2]))==t_string)){
	goto T257;}
	{register object V91;
	register object V92;
	V91= CMPcdr(base[2]);
	V92= CMPcar((V91));
	goto T262;
T262:;
	if(!(((V91))==Cnil)){
	goto T263;}
	V93= (VFUN_NARGS=3,(*(LnkLI55))(VV[33],VV[38],CMPcar(base[2])));
	V94= list(3,VV[30],/* INLINE-ARGS */V93,VV[0]);
	V95= make_cons(Cnil,base[3]);
	base[6]= listA(3,VV[29],/* INLINE-ARGS */V94,reverse(/* INLINE-ARGS */V95));
	vs_top=(vs_base=base+6)+1;
	return;
	goto T263;
T263:;
	if(!(type_of((V92))==t_string)){
	goto T269;}
	{register object V96;
	V96= list(3,VV[30],(V92),VV[0]);
	base[3]= make_cons((V96),base[3]);
	goto T267;}
	goto T269;
T269:;
	{register object V97;
	V97= list(2,VV[31],(V92));
	base[3]= make_cons((V97),base[3]);}
	goto T267;
T267:;
	V91= CMPcdr((V91));
	V92= CMPcar((V91));
	goto T262;}
	goto T257;
T257:;
	{register object V98;
	register object V99;
	V98= base[2];
	V99= CMPcar((V98));
	goto T283;
T283:;
	if(!(((V98))==Cnil)){
	goto T284;}
	V100= make_cons(Cnil,base[3]);
	base[5]= listA(3,VV[29],VV[39],reverse(/* INLINE-ARGS */V100));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T284;
T284:;
	if(!(type_of((V99))==t_string)){
	goto T290;}
	{register object V101;
	V101= list(3,VV[30],(V99),VV[0]);
	base[3]= make_cons((V101),base[3]);
	goto T288;}
	goto T290;
T290:;
	{register object V102;
	V102= list(2,VV[31],(V99));
	base[3]= make_cons((V102),base[3]);}
	goto T288;
T288:;
	V98= CMPcdr((V98));
	V99= CMPcar((V98));
	goto T283;}
}
/*	macro definition for WT-NL1	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	vs_top=sup;
	{object V103=base[0]->c.c_cdr;
	base[2]= V103;
	base[3]= Cnil;}
	if(!((base[2])==Cnil)){
	goto T303;}
	base[4]= VV[40];
	vs_top=(vs_base=base+4)+1;
	return;
	goto T303;
T303:;
	if(!(type_of(CMPcar(base[2]))==t_string)){
	goto T306;}
	{register object V104;
	register object V105;
	V104= CMPcdr(base[2]);
	V105= CMPcar((V104));
	goto T311;
T311:;
	if(!(((V104))==Cnil)){
	goto T312;}
	V106= (VFUN_NARGS=3,(*(LnkLI55))(VV[33],VV[41],CMPcar(base[2])));
	V107= list(3,VV[30],/* INLINE-ARGS */V106,VV[0]);
	V108= make_cons(Cnil,base[3]);
	base[6]= listA(3,VV[29],/* INLINE-ARGS */V107,reverse(/* INLINE-ARGS */V108));
	vs_top=(vs_base=base+6)+1;
	return;
	goto T312;
T312:;
	if(!(type_of((V105))==t_string)){
	goto T318;}
	{register object V109;
	V109= list(3,VV[30],(V105),VV[0]);
	base[3]= make_cons((V109),base[3]);
	goto T316;}
	goto T318;
T318:;
	{register object V110;
	V110= list(2,VV[31],(V105));
	base[3]= make_cons((V110),base[3]);}
	goto T316;
T316:;
	V104= CMPcdr((V104));
	V105= CMPcar((V104));
	goto T311;}
	goto T306;
T306:;
	{register object V111;
	register object V112;
	V111= base[2];
	V112= CMPcar((V111));
	goto T332;
T332:;
	if(!(((V111))==Cnil)){
	goto T333;}
	V113= make_cons(Cnil,base[3]);
	base[5]= listA(3,VV[29],VV[42],reverse(/* INLINE-ARGS */V113));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T333;
T333:;
	if(!(type_of((V112))==t_string)){
	goto T339;}
	{register object V114;
	V114= list(3,VV[30],(V112),VV[0]);
	base[3]= make_cons((V114),base[3]);
	goto T337;}
	goto T339;
T339:;
	{register object V115;
	V115= list(2,VV[31],(V112));
	base[3]= make_cons((V115),base[3]);}
	goto T337;
T337:;
	V111= CMPcdr((V111));
	V112= CMPcar((V111));
	goto T332;}
}
static object  LnkTLI55(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[55],(void **)(void *)&LnkLI55,first,ap);va_end(ap);return V1;} /* CONCATENATE */
static void LnkT54(){ call_or_link(VV[54],(void **)(void *)&Lnk54);} /* CLOSE-FASD */
static void LnkT53(){ call_or_link(VV[53],(void **)(void *)&Lnk53);} /* WRITE-FASD-TOP */
static void LnkT52(){ call_or_link(VV[52],(void **)(void *)&Lnk52);} /* FIND-SHARING-TOP */
static object  LnkTLI51(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[51],(void **)(void *)&LnkLI51,1,first,ap);va_end(ap);return V1;} /* WT-DATA1 */
static void LnkT50(){ call_or_link(VV[50],(void **)(void *)&Lnk50);} /* WT-FASD-DATA-FILE */
static object  LnkTLI49(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[49],(void **)(void *)&LnkLI49,2,first,ap);va_end(ap);return V1;} /* COERCE */
static object  LnkTLI48(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[48],(void **)(void *)&LnkLI48,1,first,ap);va_end(ap);return V1;} /* VERIFY-DATA-VECTOR */
static object  LnkTLI47(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[47],(void **)(void *)&LnkLI47,first,ap);va_end(ap);return V1;} /* CMPWARN */
static object  LnkTLI46(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[46],(void **)(void *)&LnkLI46,first,ap);va_end(ap);return V1;} /* VECTOR-PUSH-EXTEND */
static void LnkT45(){ call_or_link(VV[45],(void **)(void *)&Lnk45);} /* HASH-EQUAL */
static void LnkT44(){ call_or_link(VV[44],(void **)(void *)&Lnk44);} /* CMPILER-ERROR */
static void LnkT43(){ call_or_link(VV[43],(void **)(void *)&Lnk43);} /* WT-LOC */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

