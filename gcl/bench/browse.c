
#include "cmpinclude.h"
#include "browse.h"
void init__fix_t1_camm_debian_gcl_tmp_gclcvs_2_7_0_bench_browse(){do_init(VV);}
/*	local entry for function BROWSE-INIT	*/

static object LI1__BROWSE_INIT___t1_camm_debian_gcl_tmp_gclcvs_2_7_0_bench_browse(V5,V6,V7,V8)

long V5;register long V6;long V7;object V8;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	(VV[0]->s.s_dbind)= small_fixnum(21);
	{object V9;
	base[0]= (V8);
	vs_top=(vs_base=base+0)+1;
	Lcopy_tree();
	vs_top=sup;
	V9= vs_base[0];
	{register object V10;
	V10= (V9);
	goto T7;
T7:;
	if((CMPcdr((V10)))!=Cnil){
	goto T8;}
	((V10))->c.c_cdr = (V9);
	goto T5;
	goto T8;
T8:;
	V10= CMPcdr((V10));
	goto T7;}
	goto T5;
T5:;
	{register long V11;
	register long V12;
	register object V13;
	object V14;
	V11= V5;
	V12= V6;
	vs_base=vs_top;
	Lgentemp();
	vs_top=sup;
	V13= vs_base[0];
	V14= Cnil;
	goto T19;
T19:;
	if(!((V11)==((fixnum)0))){
	goto T20;}
	{object V15 = (V14);
	VMR1(V15)}
	goto T20;
T20:;
	V14= make_cons(V13,(V14));
	{register long V17;
	V17= V12;
	goto T29;
T29:;
	if(!((V17)==((fixnum)0))){
	goto T30;}
	goto T26;
	goto T30;
T30:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V18= vs_base[0];
	(void)(sputprop((V13),V18,Cnil));
	V17= (fixnum)(V17)-((fixnum)1);
	goto T29;}
	goto T26;
T26:;
	{register long V20;
	register object V21;
	register object V22;
	V20= V7;
	V21= (V9);
	V22= Cnil;
	goto T43;
T43:;
	if(!((V20)==((fixnum)0))){
	goto T44;}
	V19= (V22);
	goto T40;
	goto T44;
T44:;
	{register object V23;
	V23= CMPcar((V21));
	V22= make_cons((V23),(V22));}
	V20= (fixnum)(V20)-((fixnum)1);
	V21= CMPcdr((V21));
	goto T43;}
	goto T40;
T40:;
	(void)(sputprop((V13),VV[1],V19));
	{register long V24;
	V24= (fixnum)(V6)-(V12);
	goto T58;
T58:;
	if(!((V24)==((fixnum)0))){
	goto T59;}
	goto T55;
	goto T59;
T59:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V25= vs_base[0];
	(void)(sputprop((V13),V25,Cnil));
	V24= (fixnum)(V24)-((fixnum)1);
	goto T58;}
	goto T55;
T55:;
	V11= (fixnum)(V11)-((fixnum)1);
	if(!((V12)==((fixnum)0))){
	goto T72;}
	V12= V6;
	goto T70;
	goto T72;
T72:;
	V12= (fixnum)(V12)-((fixnum)1);
	goto T70;
T70:;
	vs_base=vs_top;
	Lgentemp();
	vs_top=sup;
	V13= vs_base[0];
	goto T19;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BROWSE-RANDOM	*/

static object LI2__BROWSE_RANDOM___t1_camm_debian_gcl_tmp_gclcvs_2_7_0_bench_browse()

{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	(VV[0]->s.s_dbind)= CMPmake_fixnum((long)((fixnum)(fix((VV[0]->s.s_dbind)))*((fixnum)17))%((fixnum)251));
	{object V26 = (VV[0]->s.s_dbind);
	VMR2(V26)}
	return Cnil;
}
/*	local entry for function BROWSE-RANDOMIZE	*/

static object LI3__BROWSE_RANDOMIZE___t1_camm_debian_gcl_tmp_gclcvs_2_7_0_bench_browse(V28)

register object V28;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{register object V29;
	V29= Cnil;
	goto T78;
T78:;
	if(((V28))!=Cnil){
	goto T79;}
	{object V30 = (V29);
	VMR3(V30)}
	goto T79;
T79:;
	{register long V31;
	{long V32= fix((*(LnkLI8))());
	V31= (fixnum)(/* INLINE-ARGS */V32)%((fixnum)length((V28)));}
	if(!((V31)==((fixnum)0))){
	goto T86;}
	{register object V33;
	V33= CMPcar((V28));
	V29= make_cons((V33),(V29));}
	V28= CMPcdr((V28));
	goto T83;
	goto T86;
T86:;
	{register long V34;
	register object V35;
	V34= V31;
	V35= (V28);
	goto T94;
T94:;
	if(!((V34)==((fixnum)1))){
	goto T95;}
	{register object V36;
	V36= CMPcadr((V35));
	V29= make_cons((V36),(V29));}
	((V35))->c.c_cdr = CMPcddr((V35));
	goto T83;
	goto T95;
T95:;
	V34= (fixnum)(V34)-((fixnum)1);
	V35= CMPcdr((V35));
	goto T94;}}
	goto T83;
T83:;
	goto T78;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MATCH	*/

static object LI4__MATCH___t1_camm_debian_gcl_tmp_gclcvs_2_7_0_bench_browse(V40,V41,V42)

object V40;object V41;object V42;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if(((V40))!=Cnil){
	goto T109;}
	{object V43 = (((V41))==Cnil?Ct:Cnil);
	VMR4(V43)}
	goto T109;
T109:;
	if(((V41))!=Cnil){
	goto T112;}
	{object V44 = Cnil;
	VMR4(V44)}
	goto T112;
T112:;
	if((CMPcar((V40)))==(VV[2])){
	goto T114;}
	if(!((CMPcar((V40)))==(CMPcar((V41))))){
	goto T115;}
	goto T114;
T114:;
	V40= CMPcdr((V40));
	V41= CMPcdr((V41));
	goto TTL;
	goto T115;
T115:;
	if(!((CMPcar((V40)))==(VV[3]))){
	goto T124;}{object V45;
	V45= (*(LnkLI9))(CMPcdr((V40)),(V41),(V42));
	if(V45==Cnil)goto T126;
	{object V46 = V45;
	VMR4(V46)}
	goto T126;
T126:;}{object V47;
	V47= (*(LnkLI9))(CMPcdr((V40)),CMPcdr((V41)),(V42));
	if(V47==Cnil)goto T128;
	{object V48 = V47;
	VMR4(V48)}
	goto T128;
T128:;}
	V41= CMPcdr((V41));
	goto TTL;
	goto T124;
T124:;
	if(!(type_of(CMPcar((V40)))!=t_cons)){
	goto T135;}
	{unsigned char V49;
	{object V50;
	long V51;
	V50= CMPcar((V40));
	V51= (fixnum)0;
	V52 = V51;
	V49= ((unsigned char *)((V50))->v.v_self)[V52];}
	if(!(((fixnum)(63))==((fixnum)(V49)))){
	goto T138;}}
	{object V53;
	{object V54;
	V54= CMPcar((V40));
	if(!((is_imm_fixnum((V54)) || ({enum type _tp=type_of((V54)); _tp==t_cons || _tp > t_character;})))){
	goto T146;}
	{register object V56;
	V56= V42;
	goto T149;
T149:;
	if(((V56))==Cnil){
	goto T151;}
	if((CMPcar((V56)))==Cnil){
	goto T150;}
	if(!(((V54))==(CMPcaar((V56))))){
	goto T150;}
	goto T151;
T151:;
	V53= CMPcar((V56));
	goto T143;
	goto T150;
T150:;
	V56= CMPcdr((V56));
	goto T149;}
	goto T146;
T146:;
	{register object V57;
	V57= V42;
	goto T162;
T162:;
	if(((V57))==Cnil){
	goto T164;}
	if((CMPcar((V57)))==Cnil){
	goto T163;}
	if(!(eql((V54),CMPcaar((V57))))){
	goto T163;}
	goto T164;
T164:;
	V53= CMPcar((V57));
	goto T143;
	goto T163;
T163:;
	V57= CMPcdr((V57));
	goto T162;}}
	goto T143;
T143:;
	if(((V53))==Cnil){
	goto T175;}
	V40= make_cons(CMPcdr((V53)),CMPcdr((V40)));
	goto TTL;
	goto T175;
T175:;
	{object V58;
	V58= CMPcdr((V40));
	{object V59;
	V59= CMPcdr((V41));
	V60= make_cons(CMPcar((V40)),CMPcar((V41)));
	V42= make_cons(/* INLINE-ARGS */V60,(V42));
	V41= (V59);
	V40= (V58);}}
	goto TTL;}
	goto T138;
T138:;
	{unsigned char V61;
	{object V62;
	long V63;
	V62= CMPcar((V40));
	V63= (fixnum)0;
	V64 = V63;
	V61= ((unsigned char *)((V62))->v.v_self)[V64];}
	if(!(((fixnum)(42))==((fixnum)(V61)))){
	goto T186;}}
	{object V65;
	{object V66;
	V66= CMPcar((V40));
	if(!((is_imm_fixnum((V66)) || ({enum type _tp=type_of((V66)); _tp==t_cons || _tp > t_character;})))){
	goto T194;}
	{register object V68;
	V68= V42;
	goto T197;
T197:;
	if(((V68))==Cnil){
	goto T199;}
	if((CMPcar((V68)))==Cnil){
	goto T198;}
	if(!(((V66))==(CMPcaar((V68))))){
	goto T198;}
	goto T199;
T199:;
	V65= CMPcar((V68));
	goto T191;
	goto T198;
T198:;
	V68= CMPcdr((V68));
	goto T197;}
	goto T194;
T194:;
	{register object V69;
	V69= V42;
	goto T210;
T210:;
	if(((V69))==Cnil){
	goto T212;}
	if((CMPcar((V69)))==Cnil){
	goto T211;}
	if(!(eql((V66),CMPcaar((V69))))){
	goto T211;}
	goto T212;
T212:;
	V65= CMPcar((V69));
	goto T191;
	goto T211;
T211:;
	V69= CMPcdr((V69));
	goto T210;}}
	goto T191;
T191:;
	if(((V65))==Cnil){
	goto T223;}
	V40= append(CMPcdr((V65)),CMPcdr((V40)));
	goto TTL;
	goto T223;
T223:;
	{object V70;
	object V71;
	register object V72;
	V71= make_cons(Cnil,(V41));
	V70= Cnil;
	V72= (V41);
	goto T231;
T231:;
	if(((V71))!=Cnil){
	goto T232;}
	{object V73 = Cnil;
	VMR4(V73)}
	goto T232;
T232:;
	V74= CMPcdr((V40));
	V75= make_cons(CMPcar((V40)),(V70));
	V76= make_cons(/* INLINE-ARGS */V75,(V42));
	if(((*(LnkLI9))(/* INLINE-ARGS */V74,(V72),/* INLINE-ARGS */V76))==Cnil){
	goto T236;}
	{object V77 = Ct;
	VMR4(V77)}
	goto T236;
T236:;
	V78= make_cons(CMPcar((V72)),Cnil);
	V70= nconc((V70),/* INLINE-ARGS */V78);
	V71= CMPcdr((V71));
	V72= CMPcdr((V72));
	goto T231;}}
	goto T186;
T186:;
	{object V79 = Cnil;
	VMR4(V79)}
	goto T135;
T135:;
	if(((type_of(CMPcar((V41)))!=t_cons?Ct:Cnil))==Cnil){
	goto T244;}
	{object V80 = Cnil;
	VMR4(V80)}
	goto T244;
T244:;
	if(((*(LnkLI9))(CMPcar((V40)),CMPcar((V41)),(V42)))!=Cnil){
	goto T246;}
	{object V81 = Cnil;
	VMR4(V81)}
	goto T246;
T246:;
	V40= CMPcdr((V40));
	V41= CMPcdr((V41));
	goto TTL;
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BROWSE	*/

static object LI5__BROWSE___t1_camm_debian_gcl_tmp_gclcvs_2_7_0_bench_browse()

{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	V82= (*(LnkLI12))((fixnum)100,(fixnum)10,(fixnum)4,VV[6]);
	V83= (*(LnkLI11))(/* INLINE-ARGS */V82);
	{object V84 = (*(LnkLI10))(/* INLINE-ARGS */V83,VV[7]);
	VMR5(V84)}
	return Cnil;
}
/*	local entry for function INVESTIGATE	*/

static object LI6__INVESTIGATE___t1_camm_debian_gcl_tmp_gclcvs_2_7_0_bench_browse(V87,V88)

object V87;register object V88;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{register object V89;
	V89= (V87);
	goto T253;
T253:;
	if(((V89))!=Cnil){
	goto T254;}
	{object V90 = Cnil;
	VMR6(V90)}
	goto T254;
T254:;
	{register object V91;
	V91= (V88);
	goto T260;
T260:;
	if(((V91))!=Cnil){
	goto T261;}
	goto T258;
	goto T261;
T261:;
	{register object V92;
	{object V93 =(CMPcar((V89)))->s.s_plist;
	 object ind= VV[1];
	while(V93!=Cnil){
	if(V93->c.c_car==ind){
	V92= (V93->c.c_cdr->c.c_car);
	goto T266;
	}else V93=V93->c.c_cdr->c.c_cdr;}
	V92= Cnil;}
	goto T266;
T266:;
	goto T268;
T268:;
	if(((V92))!=Cnil){
	goto T269;}
	goto T265;
	goto T269;
T269:;
	(void)((*(LnkLI9))(CMPcar((V91)),CMPcar((V92)),Cnil));
	V92= CMPcdr((V92));
	goto T268;}
	goto T265;
T265:;
	V91= CMPcdr((V91));
	goto T260;}
	goto T258;
T258:;
	V89= CMPcdr((V89));
	goto T253;}
	return Cnil;
}
/*	local entry for function TESTBROWSE	*/

static object LI7__TESTBROWSE___t1_camm_debian_gcl_tmp_gclcvs_2_7_0_bench_browse()

{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V94 = (*(LnkLI13))();
	VMR7(V94)}
	return Cnil;
}
static object  LnkTLI13(){return call_proc0(VV[13],0,(void **)(void *)&LnkLI13);} /* BROWSE */
static object  LnkTLI12(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[12],0,(void **)(void *)&LnkLI12,86020,first,ap);va_end(ap);return V1;} /* BROWSE-INIT */
static object  LnkTLI11(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[11],0,(void **)(void *)&LnkLI11,1,first,ap);va_end(ap);return V1;} /* BROWSE-RANDOMIZE */
static object  LnkTLI10(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[10],0,(void **)(void *)&LnkLI10,2,first,ap);va_end(ap);return V1;} /* INVESTIGATE */
static object  LnkTLI9(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[9],0,(void **)(void *)&LnkLI9,3,first,ap);va_end(ap);return V1;} /* MATCH */
static object  LnkTLI8(){return call_proc0(VV[8],0,(void **)(void *)&LnkLI8);} /* BROWSE-RANDOM */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

