
#include "cmpinclude.h"
#include "gcl_info.h"
void init_gcl_info(){do_init(VV);}
/*	local entry for function SHARP-U-READER	*/

static object LI1(V4,V5,V6)

register object V4;object V5;object V6;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	{object V7;
	V7= (VFUN_NARGS=5,(*(LnkLI89))(small_fixnum(10),VV[0],VV[1],VV[2],small_fixnum(0)));{object V8;
	{object V9;
	{long V10;
	V10= 0;
	if(!((type_of((V4))==t_stream? (((V4))->sm.sm_fp)!=0: 0 ))){
	goto T10;}
	V10= (long)getc(((V4))->sm.sm_fp);
	if(!((V10)==(-1))){
	goto T15;}
	if(!((feof(((V4))->sm.sm_fp)))){
	goto T15;}
	V9= Cnil;
	goto T7;
	goto T15;
T15:;
	V9= code_char((V10));
	goto T7;
	goto T10;
T10:;
	V9= read_char1((V4),Cnil);}
	goto T7;
T7:;
	if(type_of((V9))==t_character){
	goto T19;}
	V8= Cnil;
	goto T6;
	goto T19;
T19:;
	V8= (((long)(34))==((long)(char_code((V9))))?Ct:Cnil);}
	goto T6;
T6:;
	if(V8==Cnil)goto T5;
	goto T4;
	goto T5;
T5:;}
	base[0]= VV[4];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T4;
T4:;
	goto T24;
T24:;
	{register object V11;
	{register long V12;
	V12= 0;
	if(!((type_of((V4))==t_stream? (((V4))->sm.sm_fp)!=0: 0 ))){
	goto T29;}
	V12= (long)getc(((V4))->sm.sm_fp);
	if(!((V12)==(-1))){
	goto T34;}
	if(!((feof(((V4))->sm.sm_fp)))){
	goto T34;}
	V11= Cnil;
	goto T26;
	goto T34;
T34:;
	V11= code_char((V12));
	goto T26;
	goto T29;
T29:;
	V11= read_char1((V4),Cnil);}
	goto T26;
T26:;
	if(type_of(V11)==t_character){
	goto T42;}
	goto T40;
	goto T42;
T42:;
	if(!(((long)(34))==((long)(char_code(V11))))){
	goto T40;}
	goto T22;
	goto T40;
T40:;
	if(type_of(V11)==t_character){
	goto T46;}
	goto T38;
	goto T46;
T46:;
	if(!(((long)(92))==((long)(char_code(V11))))){
	goto T38;}
	{register long V15;
	V15= 0;
	if(!((type_of((V4))==t_stream? (((V4))->sm.sm_fp)!=0: 0 ))){
	goto T52;}
	V15= (long)getc(((V4))->sm.sm_fp);
	if(!((V15)==(-1))){
	goto T57;}
	if(!((feof(((V4))->sm.sm_fp)))){
	goto T57;}
	V11= Cnil;
	goto T49;
	goto T57;
T57:;
	V11= code_char((V15));
	goto T49;
	goto T52;
T52:;
	V11= read_char1((V4),Cnil);}
	goto T49;
T49:;{object V16;
	{register object x= (V11),V18= VV[6];
	while(V18!=Cnil)
	if(eql(x,V18->c.c_car->c.c_car) &&V18->c.c_car != Cnil){
	V17= (V18->c.c_car);
	goto T64;
	}else V18=V18->c.c_cdr;
	V17= Cnil;}
	goto T64;
T64:;
	V16= CMPcdr(V17);
	if(V16==Cnil)goto T62;
	V11= V16;
	goto T61;
	goto T62;
T62:;}
	goto T61;
T61:;
	goto T38;
T38:;
	{register object V20;
	register long V21;
	long V22;
	V20= (V7);
	V21= (long)(((V20))->st.st_fillp);
	V22= (long)(((V20))->st.st_dim);
	if(!((V21)<(V22))){
	goto T69;}
	(void)((((V20))->st.st_fillp)=((long)(1)+(V21)));
	V23 = CMPmake_fixnum(V21);
	(void)(aset1((V20),fix(V23),V11));
	goto T25;
	goto T69;
T69:;
	(void)((VFUN_NARGS=2,(*(LnkLI90))(V11,(V20))));}}
	goto T25;
T25:;
	goto T24;
	goto T22;
T22:;
	{object V24 = (V7);
	VMR1(V24)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FILE-TO-STRING	*/

static object LI2(object V25,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB2 VMS2 VMV2
	bds_check;
	{VOL object V26;
	va_start(ap,first);
	V26= V25;
	narg = narg - 1;
	if (narg <= 0) goto T74;
	else {
	base[1]= first;}
	--narg; goto T75;
	goto T74;
T74:;
	base[1]= small_fixnum(0);
	goto T75;
T75:;
	bds_bind(VV[7],Ct);
	base[3]= small_fixnum(0);
	base[5]= (V26);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk91)();
	vs_top=sup;
	base[4]= vs_base[0];
	frs_push(FRS_PROTECT,Cnil);
	{object tag=Cnil;frame_ptr fr=NULL;object p;bool active;
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	base[6]= base[4];
	vs_top=(vs_base=base+6)+1;
	Lfile_length();
	vs_top=sup;
	base[3]= vs_base[0];{VOL object V27;
	if(number_compare(small_fixnum(0),base[1])<=0){
	goto T86;}
	V27= Cnil;
	goto T85;
	goto T86;
T86:;
	V27= (number_compare(base[1],base[3])<=0?Ct:Cnil);
	goto T85;
T85:;
	if(V27==Cnil)goto T84;
	goto T83;
	goto T84;
T84:;}
	base[6]= VV[8];
	base[7]= base[1];
	vs_top=(vs_base=base+6)+2;
	Lerror();
	vs_top=sup;
	goto T83;
T83:;
	{object V28;
	V29= number_minus(base[3],base[1]);
	V28= (VFUN_NARGS=3,(*(LnkLI89))(/* INLINE-ARGS */V29,VV[0],VV[1]));
	if(!(number_compare(base[1],small_fixnum(0))>0)){
	goto T91;}
	base[6]= base[4];
	base[7]= base[1];
	vs_top=(vs_base=base+6)+2;
	Lfile_position();
	vs_top=sup;
	goto T91;
T91:;
	base[6]= (V28);
	base[7]= small_fixnum(0);
	base[8]= CMPmake_fixnum((long)length((V28)));
	base[9]= base[4];
	vs_top=(vs_base=base+6)+4;
	(void) (*Lnk92)();
	vs_top=sup;
	base[6]= (V28);
	vs_top=(vs_base=base+6)+1;}
	active=FALSE;}
	base[5]=Cnil;
	while(vs_base<vs_top)
	{base[5]=MMcons(vs_top[-1],base[5]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if((base[4])==Cnil){
	goto T101;}
	base[6]= base[4];
	vs_top=(vs_base=base+6)+1;
	Lclose();
	vs_top=sup;
	goto T101;
T101:;
	vs_base=vs_top=base+6;
	for(p= base[5];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	vs_top=sup;
	{object V30 = vs_base[0];
	bds_unwind1;
	VMR2(V30)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function ATOI	*/

static object LI3(V33,V34)

register object V33;register long V34;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{register long V35;
	register long V36;
	register long V37;
	V35= 0;
	V36= 0;
	V37= (long)((V33))->v.v_fillp;
	goto T110;
T110:;
	if(!((V34)<(V37))){
	goto T113;}
	goto T112;
	goto T113;
T113:;
	goto T111;
	goto T112;
T112:;
	V36= (long)(((V33))->ust.ust_self[V34]);
	V34= (long)(V34)+(1);
	V36= (long)(V36)-(48);
	if(!((V36)>=(0))){
	goto T123;}
	if(!((V36)<(10))){
	goto T123;}
	V38 = CMPmake_fixnum(V36);
	V39 = CMPmake_fixnum(V35);
	V40= number_times(small_fixnum(10),V39);
	V35= fix(number_plus(V38,/* INLINE-ARGS */V40));
	goto T121;
	goto T123;
T123:;
	goto T108;
	goto T121;
T121:;
	goto T110;
	goto T111;
T111:;
	goto T108;
	goto T108;
	goto T108;
T108:;
	{long V41 = V35;
	VMR3((object)V41)}}
}
/*	local entry for function INFO-GET-TAGS	*/

static object LI4(V43)

object V43;
{	 VMB4 VMS4 VMV4
	bds_check;
	goto TTL;
TTL:;
	{register long V44;
	object V45;
	register object V46;
	V44= 0;
	bds_bind(VV[9],Cnil);
	V45= Cnil;
	V46= Cnil;
	bds_bind(VV[10],Ct);
	{register object V47;
	register long V48;
	V47= (VFUN_NARGS=1,(*(LnkLI93))((V43)));
	V48= 0;
	{long V49= fix((VFUN_NARGS=3,(*(LnkLI94))(VV[11],(V47),small_fixnum(0))));
	if(!((/* INLINE-ARGS */V49)>=(0))){
	goto T134;}}
	V48= (long)(*(LnkLI95))(0);
	V50 = CMPmake_fixnum(V48);
	V44= fix((VFUN_NARGS=3,(*(LnkLI94))(VV[12],(V47),V50)));
	goto T142;
T142:;
	V51 = CMPmake_fixnum(V48);
	V52 = CMPmake_fixnum(V44);
	{long V53= fix((VFUN_NARGS=4,(*(LnkLI94))(VV[13],(V47),V51,V52)));
	if(!((/* INLINE-ARGS */V53)>=(0))){
	goto T145;}}
	goto T144;
	goto T145;
T145:;
	goto T143;
	goto T144;
T144:;
	V48= (long)(*(LnkLI95))(0);
	{long V54= (long)(*(LnkLI97))(2);
	V55 = CMPmake_fixnum((long)(*(LnkLI96))((V47),/* INLINE-ARGS */V54));
	V56= (*(LnkLI98))((V47),small_fixnum(1));
	V57= make_cons(V55,/* INLINE-ARGS */V56);
	V46= make_cons(/* INLINE-ARGS */V57,(V46));}
	goto T142;
	goto T143;
T143:;
	goto T134;
	goto T134;
	goto T134;
T134:;
	V58 = CMPmake_fixnum(V48);
	{long V59= fix((VFUN_NARGS=3,(*(LnkLI94))(VV[14],(V47),V58)));
	if(!((/* INLINE-ARGS */V59)>=(0))){
	goto T152;}}
	V48= (long)(*(LnkLI95))(0);
	V60 = CMPmake_fixnum(V48);
	{long V61= fix((VFUN_NARGS=3,(*(LnkLI94))(VV[15],(V47),V60)));
	if(!((/* INLINE-ARGS */V61)>=(0))){
	goto T152;}}
	base[2]= (V47);
	base[3]= CMPmake_fixnum(V48);
	base[4]= CMPmake_fixnum((long)(*(LnkLI95))(0));
	vs_top=(vs_base=base+2)+3;
	Lsubseq();
	vs_top=sup;
	V45= vs_base[0];
	goto T152;
T152:;
	if(((V46))==Cnil){
	goto T163;}
	if((V45)!=Cnil){
	goto T163;}
	base[2]= VV[16];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk99)();
	vs_top=sup;
	goto T163;
T163:;
	V62= nreverse((V46));
	{object V63 = make_cons((V45),/* INLINE-ARGS */V62);
	bds_unwind1;
	bds_unwind1;
	VMR4(V63)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function RE-QUOTE-STRING	*/

static object LI5(V65)

object V65;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{register long V66;
	long V67;
	object V68;
	long V69;
	V66= 0;
	V67= (long)((V65))->v.v_fillp;
	V68= Cnil;
	V69= 0;
	{register object V70;
	V70= Cnil;
	goto T173;
T173:;
	goto T176;
T176:;
	if(!((V66)<(V67))){
	goto T179;}
	goto T178;
	goto T179;
T179:;
	goto T177;
	goto T178;
T178:;
	V68= code_char(((V65))->ust.ust_self[V66]);
	if(((VFUN_NARGS=2,(*(LnkLI100))((V68),VV[17])))==Cnil){
	goto T183;}
	if(((V70))==Cnil){
	goto T187;}
	{unsigned char V71;
	register object V72;
	register long V73;
	long V74;
	V71= 92;
	V72= (V70);
	V73= (long)(((V72))->st.st_fillp);
	V74= (long)(((V72))->st.st_dim);
	if(!((V73)<(V74))){
	goto T194;}
	(void)((((V72))->st.st_fillp)=((long)(1)+(V73)));
	V75 = CMPmake_fixnum(V73);
	(void)(aset1((V72),fix(V75),code_char(V71)));
	goto T183;
	goto T194;
T194:;
	(void)((VFUN_NARGS=2,(*(LnkLI90))(code_char(V71),(V72))));
	goto T183;}
	goto T187;
T187:;
	V69= (long)(V69)+(1);
	goto T183;
T183:;
	if(((V70))==Cnil){
	goto T199;}
	{register object V77;
	register long V78;
	long V79;
	V77= (V70);
	V78= (long)(((V77))->st.st_fillp);
	V79= (long)(((V77))->st.st_dim);
	if(!((V78)<(V79))){
	goto T206;}
	(void)((((V77))->st.st_fillp)=((long)(1)+(V78)));
	V80 = CMPmake_fixnum(V78);
	(void)(aset1((V77),fix(V80),V68));
	goto T199;
	goto T206;
T206:;
	(void)((VFUN_NARGS=2,(*(LnkLI90))(V68,(V77))));}
	goto T199;
T199:;
	V66= (long)(V66)+(1);
	goto T176;
	goto T177;
T177:;
	goto T174;
	goto T174;
	goto T174;
T174:;
	{object V81;
	V81= (V70);
	if(((V81))==Cnil){
	goto T215;}
	goto T213;
	goto T215;
T215:;
	if(!((V69)>(0))){
	goto T218;}
	V82 = CMPmake_fixnum((long)((long)((V65))->v.v_fillp)+(V69));
	V70= (VFUN_NARGS=5,(*(LnkLI89))(V82,VV[0],VV[1],VV[2],small_fixnum(0)));
	V66= 0;
	goto T173;
	goto T218;
T218:;
	V70= (V65);}
	goto T213;
T213:;
	goto T171;
	goto T171;
T171:;
	{object V83 = (V70);
	VMR5(V83)}}}
	return Cnil;
}
/*	local entry for function GET-MATCH	*/

static object LI6(V86,V87)

object V86;object V87;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	base[0]= (V86);
	base[1]= CMPmake_fixnum((long)(*(LnkLI97))(fix((V87))));
	base[2]= CMPmake_fixnum((long)(*(LnkLI95))(fix((V87))));
	vs_top=(vs_base=base+0)+3;
	Lsubseq();
	vs_top=sup;
	{object V88 = vs_base[0];
	VMR6(V88)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-NODES	*/

static object LI7(V91,V92)

register object V91;register object V92;
{	 VMB7 VMS7 VMV7
	bds_check;
	goto TTL;
TTL:;
	{register long V93;
	register object V94;
	V93= 0;
	V94= Cnil;
	bds_bind(VV[10],Ct);
	bds_bind(VV[9],Cnil);
	if(((V92))==Cnil){
	goto T231;}
	base[2]= VV[18];
	base[3]= (*(LnkLI101))((V91));
	base[4]= VV[19];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk102)();
	vs_top=sup;
	V91= vs_base[0];
	goto T240;
T240:;
	V95 = CMPmake_fixnum(V93);
	{long V96= fix((VFUN_NARGS=3,(*(LnkLI94))((V91),(V92),V95)));
	if(!((/* INLINE-ARGS */V96)>=(0))){
	goto T243;}}
	goto T242;
	goto T243;
T243:;
	goto T241;
	goto T242;
T242:;
	V93= (long)(*(LnkLI95))(0);
	V97= (*(LnkLI98))((V92),small_fixnum(1));
	V94= make_cons(/* INLINE-ARGS */V97,(V94));
	goto T240;
	goto T241;
T241:;
	goto T238;
	goto T238;
	goto T238;
T238:;
	{object V98 = nreverse((V94));
	bds_unwind1;
	bds_unwind1;
	VMR7(V98)}
	goto T231;
T231:;
	{object V99 = Cnil;
	bds_unwind1;
	bds_unwind1;
	VMR7(V99)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-INDEX-NODE	*/

static object LI8()

{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;{object V100;
	V100= CMPcaddr((VV[20]->s.s_dbind));
	if(V100==Cnil)goto T250;
	{object V101 = V100;
	VMR8(V101)}
	goto T250;
T250:;}
	{object V102;
	object V103;
	object V104;
	V102= Cnil;
	V103= CMPcar(CMPcadr((VV[20]->s.s_dbind)));
	if((V103)==Cnil){
	V104= Cnil;
	goto T254;}
	V105= (*(LnkLI103))(VV[21],(V103));
	V104= CMPcar(/* INLINE-ARGS */V105);
	goto T254;
T254:;
	if(((V104))==Cnil){
	goto T256;}
	base[2]= (V104);
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk104)();
	vs_top=sup;
	V102= vs_base[0];
	{object V106;
	V106= (VV[20]->s.s_dbind);
	(CMPcddr((V106)))->c.c_car = V102;
	(void)(CMPcddr((V106)));
	{object V108 = V102;
	VMR8(V108)}}
	goto T256;
T256:;
	{object V109 = Cnil;
	VMR8(V109)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function NODES-FROM-INDEX	*/

static object LI9(V111)

register object V111;
{	 VMB9 VMS9 VMV9
	bds_check;
	goto TTL;
TTL:;
	{register object V112;
	register object V113;
	V112= small_fixnum(0);
	V113= Cnil;
	bds_bind(VV[10],Ct);
	bds_bind(VV[9],Cnil);
	{register object V114;
	V114= (*(LnkLI105))();
	if(((V114))==Cnil){
	goto T269;}
	base[2]= VV[22];
	base[3]= (*(LnkLI101))((V111));
	base[4]= VV[23];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk102)();
	vs_top=sup;
	V111= vs_base[0];
	goto T278;
T278:;
	{long V115= fix((VFUN_NARGS=3,(*(LnkLI94))((V111),(V114),(V112))));
	if(!((/* INLINE-ARGS */V115)>=(0))){
	goto T281;}}
	goto T280;
	goto T281;
T281:;
	goto T279;
	goto T280;
T280:;
	V112= CMPmake_fixnum((long)(*(LnkLI95))(0));
	V116= (*(LnkLI98))((V114),small_fixnum(1));
	V117= (*(LnkLI98))((V114),small_fixnum(2));
	V118= make_cons(/* INLINE-ARGS */V116,/* INLINE-ARGS */V117);
	V113= make_cons(/* INLINE-ARGS */V118,(V113));
	goto T278;
	goto T279;
T279:;
	goto T276;
	goto T276;
	goto T276;
T276:;
	{object V119 = nreverse((V113));
	bds_unwind1;
	bds_unwind1;
	VMR9(V119)}
	goto T269;
T269:;
	{object V120 = Cnil;
	bds_unwind1;
	bds_unwind1;
	VMR9(V120)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-NODE-INDEX	*/

static object LI10(V123,V124)

register object V123;object V124;
{	 VMB10 VMS10 VMV10
	bds_check;
	goto TTL;
TTL:;
	{object V125;
	V125= (V123);
	bds_bind(VV[9],Cnil);
	if(((V124))!=Cnil){
	goto T290;}
	{long V126 = 0;
	bds_unwind1;
	VMR10((object)V126)}
	goto T290;
T290:;
	base[1]= VV[24];
	base[2]= (*(LnkLI101))((V123));
	base[3]= VV[25];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk102)();
	vs_top=sup;
	V123= vs_base[0];
	{long V127= fix((VFUN_NARGS=2,(*(LnkLI94))((V123),(V124))));
	if(!((/* INLINE-ARGS */V127)>=(0))){
	goto T298;}}
	{long V128= (long)(*(LnkLI97))(1);
	{long V129 = (long)(*(LnkLI96))((V124),/* INLINE-ARGS */V128);
	bds_unwind1;
	VMR10((object)V129)}}
	goto T298;
T298:;
	base[1]= VV[26];
	base[2]= (V125);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk99)();
	vs_top=sup;
	{long V130 = 0;
	bds_unwind1;
	VMR10((object)V130)}}
	base[0]=base[0];
}
/*	local entry for function ALL-MATCHES	*/

static object LI11(V133,V134)

object V133;object V134;
{	 VMB11 VMS11 VMV11
	bds_check;
	goto TTL;
TTL:;
	{register long V135;
	V135= 0;
	bds_bind(VV[9],Cnil);
	{register object V136;
	register object V137;
	register object V138;
	V136= Cnil;
	V137= Cnil;
	V138= Cnil;
	goto T305;
T305:;
	V139 = CMPmake_fixnum(V135);
	V135= fix((VFUN_NARGS=3,(*(LnkLI94))((V133),(V134),V139)));
	if(!((V135)>=(0))){
	goto T308;}
	goto T307;
	goto T308;
T308:;
	goto T306;
	goto T307;
T307:;{object V140;
	V140= CMPmake_fixnum(V135);
	V135= (long)(*(LnkLI95))(0);
	V141 = CMPmake_fixnum(V135);
	V138= list(2,V140,V141);}
	if(((V137))==Cnil){
	goto T316;}
	{register object V142;
	register object V143;
	V142= (V137);
	V137= make_cons((V138),Cnil);
	V143= (V137);
	((V142))->c.c_cdr = (V143);
	goto T314;}
	goto T316;
T316:;
	V137= make_cons((V138),Cnil);
	V136= (V137);
	goto T314;
T314:;
	goto T305;
	goto T306;
T306:;
	{object V144 = (V136);
	bds_unwind1;
	VMR11(V144)}
	{object V145 = Cnil;
	bds_unwind1;
	VMR11(V145)}
	{object V146 = Cnil;
	bds_unwind1;
	VMR11(V146)}}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for NODE	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	vs_top=sup;
	{object V147=base[0]->c.c_cdr;
	base[2]= (V147->c.c_car);
	V147=V147->c.c_cdr;
	base[3]= (V147->c.c_car);}
	V148= (VFUN_NARGS=2,(*(LnkLI100))(base[2],VV[28]));
	base[4]= list(3,VV[27],/* INLINE-ARGS */V148,base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function NODE-OFFSET	*/

static object LI13(V150)

object V150;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{object V151 = number_plus(CMPcar(CMPcadr(CMPcddddr((V150)))),CMPcadr((V150)));
	VMR13(V151)}
	return Cnil;
}
/*	local entry for function SETUP-INFO	*/

static object LI14(V153)

register object V153;
{	 VMB14 VMS14 VMV14
	bds_check;
	goto TTL;
TTL:;
	{object V154;
	register object V155;
	V154= Cnil;
	V155= Cnil;
	if(!(((VV[29]->s.s_dbind))==((VV[30]->s.s_dbind)))){
	goto T329;}
	goto T328;
	goto T329;
T329:;
	(VV[29]->s.s_dbind)= (VV[30]->s.s_dbind);
	{object V156;
	base[1]= (VV[30]->s.s_dbind);
	base[2]= VV[31];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk102)();
	vs_top=sup;
	V156= vs_base[0];
	(VV[32]->s.s_dbind)= make_cons((V156),(VV[32]->s.s_dbind));}
	(VV[32]->s.s_dbind)= (*(LnkLI106))((VV[32]->s.s_dbind));
	goto T328;
T328:;
	if(!(equal((V153),VV[33]))){
	goto T339;}
	V153= VV[34];
	goto T339;
T339:;
	V155= (VFUN_NARGS=4,(*(LnkLI107))((V153),(VV[32]->s.s_dbind),VV[35],Cnil));
	{object V157;
	V157= (VFUN_NARGS=2,(*(LnkLI108))(VV[36],(V155)));
	if(((V157))==Cnil){
	goto T345;}
	base[0]= (V155);
	base[1]= small_fixnum(0);
	base[2]= (V157);
	vs_top=(vs_base=base+0)+3;
	Lsubseq();
	vs_top=sup;
	V155= vs_base[0];}
	goto T345;
T345:;
	if(((V155))!=Cnil){
	goto T353;}
	if(equal((V153),VV[37])){
	goto T353;}
	{object V158;
	base[2]= VV[38];
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk104)();
	vs_top=sup;
	V158= vs_base[0];
	bds_bind(VV[10],Cnil);
	base[2]= VV[39];
	base[3]= (*(LnkLI101))((V153));
	base[4]= VV[40];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk102)();
	vs_top=sup;
	V159= vs_base[0];
	{long V160= fix((VFUN_NARGS=2,(*(LnkLI94))(V159,(V158))));
	if(!((/* INLINE-ARGS */V160)>=(0))){
	bds_unwind1;
	goto T353;}}
	V155= (*(LnkLI98))((V158),small_fixnum(1));
	bds_unwind1;}
	goto T353;
T353:;
	if(((V155))==Cnil){
	goto T371;}
	{object V161;
	base[2]= (V155);
	vs_top=(vs_base=base+2)+1;
	Ltruename();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	Lnamestring();
	vs_top=sup;
	V161= vs_base[0];
	{register object x= (V161),V162= (VV[41]->s.s_dbind);
	while(V162!=Cnil)
	if(equal(x,V162->c.c_car->c.c_car) &&V162->c.c_car != Cnil){
	V154= (V162->c.c_car);
	goto T379;
	}else V162=V162->c.c_cdr;
	V154= Cnil;}
	goto T379;
T379:;
	if(((V154))==Cnil){
	goto T377;}
	(VV[20]->s.s_dbind)= (V154);
	goto T369;
	goto T377;
T377:;
	V163= (*(LnkLI109))((V161));
	(VV[20]->s.s_dbind)= list(3,(V161),/* INLINE-ARGS */V163,Cnil);
	(VV[41]->s.s_dbind)= make_cons((VV[20]->s.s_dbind),(VV[41]->s.s_dbind));
	goto T369;}
	goto T371;
T371:;
	base[0]= Ct;
	base[1]= VV[42];
	base[2]= (V153);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T369;
T369:;
	{object V164 = Cnil;
	VMR14(V164)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-INFO-CHOICES	*/

static object LI15(V167,V168)

object V167;object V168;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(!(eql((V168),VV[43]))){
	goto T388;}
	{object V169 = (*(LnkLI110))((V167));
	VMR15(V169)}
	goto T388;
T388:;
	{object V170 = (*(LnkLI103))((V167),CMPcar(CMPcadr((VV[20]->s.s_dbind))));
	VMR15(V170)}
	return Cnil;
}
/*	local entry for function ADD-FILE	*/

static object LI16(V173,V174)

object V173;register object V174;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	{register object V175;
	V175= (V173);
	goto T393;
T393:;
	if((V175)!=Cnil){
	goto T395;}
	goto T394;
	goto T395;
T395:;
	{register object V176;
	register object V177;
	V176= (V175);
	V177= list(2,CMPcar((V175)),(V174));
	((V176))->c.c_car = (V177);}
	V175= CMPcdr((V175));
	goto T393;
	goto T394;
T394:;
	goto T391;
	goto T391;
	goto T391;
T391:;
	{object V178 = (V173);
	VMR16(V178)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for INFO-ERROR	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{object V179;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V179=(base[0]);
	vs_top=sup;
	if(((VV[44]->s.s_dbind))==Cnil){
	goto T404;}
	base[2]= Cnil;
	{object V180;
	V180= (V179);
	 vs_top=base+3;
	 while(V180!=Cnil)
	 {vs_push((V180)->c.c_car);V180=(V180)->c.c_cdr;}
	vs_base=base+2;}
	Lformat();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk111)();
	return;
	goto T404;
T404:;
	{object V181;
	V181= (V179);
	 vs_top=base+1;
	 while(V181!=Cnil)
	 {vs_push((V181)->c.c_car);V181=(V181)->c.c_cdr;}
	vs_base=base+1;}
	Lerror();
	return;
	}
}
/*	local entry for function INFO-GET-FILE	*/

static object LI18(V183)

register object V183;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	base[0]= (V183);
	base[1]= CMPcar((VV[20]->s.s_dbind));
	vs_top=(vs_base=base+0)+2;
	Lmerge_pathnames();
	vs_top=sup;
	V183= vs_base[0];
	if(!(equal(CMPcar((VV[45]->s.s_dbind)),(V183)))){
	goto T416;}
	V184= (VV[45]->s.s_dbind);
	goto T414;
	goto T416;
T416:;
	V185= (VFUN_NARGS=1,(*(LnkLI93))((V183)));
	(VV[45]->s.s_dbind)= make_cons((V183),/* INLINE-ARGS */V185);
	V184= (VV[45]->s.s_dbind);
	goto T414;
T414:;
	{object V186 = CMPcdr(V184);
	VMR18(V186)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for WAITING	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{object V187;
	V187=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((VV[44]->s.s_dbind)==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	base[1]= (V187);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T419;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T419;
T419:;
	base[1]= VV[46];
	base[2]= (V187);
	base[3]= VV[47];
	base[4]= VV[48];
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk112)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T422;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T422;
T422:;
	base[1]= VV[49];
	base[2]= VV[50];
	base[3]= VV[51];
	vs_top=(vs_base=base+1)+3;
	super_funcall_no_event((V187));
	return;
	}
}
/*	function definition for END-WAITING	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{object V188;
	V188=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V188);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T431;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T431;
T431:;
	base[1]= VV[49];
	base[2]= VV[50];
	base[3]= VV[52];
	vs_top=(vs_base=base+1)+3;
	super_funcall_no_event((V188));
	return;
	}
}
/*	function definition for INFO-SUBFILE	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{register object V189;
	V189=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V190;
	register object V191;
	register object V192;
	V190= CMPcdr(CMPcadr((VV[20]->s.s_dbind)));
	V191= Cnil;
	V192= Cnil;
	if((V190)==Cnil){
	goto T438;}
	if(number_compare((V189),small_fixnum(0))>=0){
	goto T439;}
	goto T438;
	goto T439;
T439:;
	{register object V193;
	register object V194;
	V193= (V190);
	V194= CMPcar((V193));
	goto T444;
T444:;
	if(!(((V193))==Cnil)){
	goto T445;}
	goto T438;
	goto T445;
T445:;
	if(!(number_compare(CMPcar((V194)),(V189))>0)){
	goto T449;}
	V192= CMPcar((V194));
	goto T438;
	goto T449;
T449:;
	V191= (V194);
	V193= CMPcdr((V193));
	V194= CMPcar((V193));
	goto T444;}
	goto T438;
T438:;
	if((V191)!=Cnil){
	base[1]= (V191);
	goto T461;}
	base[1]= make_cons(small_fixnum(0),CMPcar((VV[20]->s.s_dbind)));
	goto T461;
T461:;
	base[2]= (V192);
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	local entry for function INFO-NODE-FROM-POSITION	*/

static object LI22(V196)

object V196;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	{register object V197;
	V197= small_fixnum(0);
	{object V198;
	register object V199;
	register object V200;
	base[3]= (V196);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk113)();
	vs_top=sup;
	V198= vs_base[0];
	V199= (*(LnkLI114))(CMPcdr((V198)));
	V200= number_minus((V196),CMPcar((V198)));
	goto T470;
T470:;
	{long V201= fix((VFUN_NARGS=4,(*(LnkLI94))(VV[53],(V199),(V197),(V200))));
	if(!((/* INLINE-ARGS */V201)>=(0))){
	goto T473;}}
	goto T472;
	goto T473;
T473:;
	goto T471;
	goto T472;
T472:;
	V197= CMPmake_fixnum((long)(*(LnkLI95))(0));
	goto T470;
	goto T471;
T471:;
	goto T468;
	goto T468;
	goto T468;
T468:;
	V197= number_minus((V197),small_fixnum(1));
	{long V202= fix((VFUN_NARGS=3,(*(LnkLI94))(VV[54],(V199),(V197))));
	if(!((/* INLINE-ARGS */V202)>=(0))){
	goto T481;}}
	{object V203;
	object V204;
	object V205;
	object V206;
	object V207;
	V203= CMPmake_fixnum((long)(*(LnkLI97))(0));
	V204= CMPmake_fixnum((long)(*(LnkLI95))(0));
	V205= (*(LnkLI98))((V199),small_fixnum(1));
	{long V208= fix((VFUN_NARGS=3,(*(LnkLI94))(VV[55],(V199),(V204))));
	if(!((/* INLINE-ARGS */V208)>=(0))){
	goto T488;}}
	V206= CMPmake_fixnum((long)(*(LnkLI97))(0));
	goto T486;
	goto T488;
T488:;
	V206= CMPmake_fixnum((long)length((V199)));
	goto T486;
T486:;
	V207= listA(7,(V199),(V204),(V206),(V203),(V205),(V198),(VV[20]->s.s_dbind));
	{object V209 = (V207);
	VMR22(V209)}}
	goto T481;
T481:;
	{object V210 = Cnil;
	VMR22(V210)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SHOW-INFO	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	bds_check;
	{register object V211;
	register object V212;
	object V213;
	V211=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T491;}
	V212=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T492;}
	V213=(base[2]);
	vs_top=sup;
	goto T493;
	goto T491;
T491:;
	V212= Cnil;
	goto T492;
T492:;
	V213= (VV[44]->s.s_dbind);
	goto T493;
T493:;
	{register object V214;
	register object V215;
	register long V216;
	long V217;
	V214= Cnil;
	bds_bind(VV[9],Cnil);
	V215= Cnil;
	V216= 0;
	V217= -1;
	if(!(type_of((V211))==t_cons)){
	goto T501;}
	if(!(type_of(CMPcdr((V211)))==t_cons)){
	goto T501;}
	V215= CMPcadr((V211));
	V211= CMPcar((V211));
	goto T501;
T501:;
	if(!(type_of((V211))==t_cons)){
	goto T500;}
	V212= CMPcar((V211));
	V211= CMPcdr((V211));
	goto T500;
T500:;
	if(!(type_of((V211))==t_string)){
	goto T515;}
	goto T514;
	goto T515;
T515:;
	base[4]= VV[56];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk99)();
	vs_top=sup;
	goto T514;
T514:;
	base[4]= (VV[57]->s.s_dbind);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	{long V218= fix((VFUN_NARGS=2,(*(LnkLI94))(VV[58],(V211))));
	if(!((/* INLINE-ARGS */V218)>=(0))){
	goto T520;}}
	V215= (*(LnkLI98))((V211),small_fixnum(1));
	V211= (*(LnkLI98))((V211),small_fixnum(2));
	if(!(equal((V211),VV[59]))){
	goto T520;}
	V211= VV[60];
	goto T520;
T520:;
	if(((V215))==Cnil){
	goto T530;}
	(void)((*(LnkLI116))((V215)));
	goto T530;
T530:;
	{object V219;
	V219= CMPmake_fixnum((long)(*(LnkLI117))((V211),CMPcar(CMPcadr((VV[20]->s.s_dbind)))));
	if(((V219))!=Cnil){
	goto T534;}
	base[4]= Ct;
	base[5]= VV[61];
	base[6]= (V211);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	return;
	goto T534;
T534:;
	base[4]= (V219);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk113)();
	vs_top=sup;
	V214= vs_base[0];
	{register object V220;
	object V221;
	V220= (*(LnkLI114))(CMPcdr((V214)));
	V221= number_minus((V219),CMPcar((V214)));
	base[6]= VV[62];
	base[7]= (*(LnkLI101))((V211));
	base[8]= VV[63];
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk102)();
	vs_top=sup;
	V222= vs_base[0];
	{long V223= fix((VFUN_NARGS=3,(*(LnkLI94))(V222,(V220),(V221))));
	if(!((/* INLINE-ARGS */V223)>=(0))){
	goto T547;}}
	{object V224;
	register object V225;
	register object V226;
	object V227;
	V224= CMPmake_fixnum((long)(*(LnkLI97))(0));
	V225= CMPmake_fixnum((long)(*(LnkLI95))(0));
	{long V228= fix((VFUN_NARGS=3,(*(LnkLI94))(VV[64],(V220),(V225))));
	if(!((/* INLINE-ARGS */V228)>=(0))){
	goto T557;}}
	V226= CMPmake_fixnum((long)(*(LnkLI97))(0));
	goto T555;
	goto T557;
T557:;
	V226= CMPmake_fixnum((long)length((V220)));
	goto T555;
T555:;
	V227= listA(7,(V220),(V225),(V226),(V224),(V211),(V214),(VV[20]->s.s_dbind));
	if(((V212))==Cnil){
	goto T560;}
	V212= (*(LnkLI101))((V212));
	bds_bind(VV[10],Cnil);
	base[11]= VV[65];
	base[12]= (V212);
	base[13]= VV[66];
	vs_top=(vs_base=base+11)+3;
	(void) (*Lnk102)();
	vs_top=sup;
	V229= vs_base[0];
	V217= fix((VFUN_NARGS=4,(*(LnkLI94))(V229,(V220),(V225),(V226))));
	if((V217)>=(0)){
	goto T565;}
	{long V230= fix((VFUN_NARGS=4,(*(LnkLI94))((V212),(V220),(V225),(V226))));
	if(!((/* INLINE-ARGS */V230)>=(0))){
	bds_unwind1;
	goto T560;}}
	goto T565;
T565:;
	V231 = CMPmake_fixnum((long)(*(LnkLI97))(0));
	V216= fix(number_minus(V231,(V225)));
	bds_unwind1;
	goto T560;
T560:;
	if(((V213))==Cnil){
	goto T576;}
	{object V232;
	base[10]= (V227);
	base[11]= CMPmake_fixnum(V216);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk118)();
	vs_top=sup;
	V232= vs_base[0];
	base[10]= (VV[57]->s.s_dbind);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk119)();
	vs_top=sup;
	base[10]= (V232);
	vs_top=(vs_base=base+10)+1;
	bds_unwind1;
	return;}
	goto T576;
T576:;
	{object V233;
	if(!((V217)>=(0))){
	goto T585;}
	base[10]= (V225);
	base[11]= small_fixnum(1);
	base[12]= CMPmake_fixnum(V216);
	vs_top=(vs_base=base+10)+3;
	Lplus();
	vs_top=sup;
	V234= vs_base[0];
	{long V235= fix((VFUN_NARGS=4,(*(LnkLI94))(VV[67],(V220),V234,(V226))));
	if(!((/* INLINE-ARGS */V235)>=(0))){
	goto T585;}}
	V233= CMPmake_fixnum((long)(*(LnkLI97))(0));
	goto T583;
	goto T585;
T585:;
	V233= (V226);
	goto T583;
T583:;
	base[10]= (V220);
	V236 = CMPmake_fixnum(V216);
	base[11]= number_plus(V236,(V225));
	base[12]= (V233);
	vs_top=(vs_base=base+10)+3;
	Lsubseq();
	bds_unwind1;
	return;}}
	goto T547;
T547:;
	base[6]= VV[68];
	base[7]= (V211);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk99)();
	vs_top=sup;
	base[6]= (VV[57]->s.s_dbind);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk119)();
	bds_unwind1;
	return;}}}
	}
}
/*	local entry for function INFO-AUX	*/

static object LI24(V239,V240)

object V239;object V240;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{register object V241;
	register object V242;
	V241= Cnil;
	V242= (V240);
	{object V243;
	register object V244;
	register object V245;
	register object V246;
	V243= Cnil;
	V244= Cnil;
	V245= Cnil;
	V246= Cnil;
	goto T601;
T601:;
	if(((V242))==Cnil){
	goto T604;}
	goto T603;
	goto T604;
T604:;
	goto T602;
	goto T603;
T603:;
	{object V247;
	V247= CMPcar((V242));
	V241= (V247);}
	(void)((*(LnkLI116))((V241)));
	V248= (*(LnkLI121))((V239),VV[69]);
	base[0]= (*(LnkLI120))(/* INLINE-ARGS */V248,(V241));
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V245= vs_base[0];
	if(((V244))==Cnil){
	goto T615;}
	{register object V250;
	V250= (V245);
	(V244)->c.c_cdr = (V250);
	if(((V250))!=Cnil){
	goto T617;}}
	goto T613;
	goto T617;
T617:;
	base[0]= CMPcdr((V244));
	vs_top=(vs_base=base+0)+1;
	Llast();
	vs_top=sup;
	V244= vs_base[0];
	goto T613;
	goto T615;
T615:;
	V243= (V245);
	base[0]= (V243);
	vs_top=(vs_base=base+0)+1;
	Llast();
	vs_top=sup;
	V244= vs_base[0];
	goto T613;
T613:;
	V251= (*(LnkLI121))((V239),VV[43]);
	base[0]= (*(LnkLI120))(/* INLINE-ARGS */V251,(V241));
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V246= vs_base[0];
	if(((V244))==Cnil){
	goto T631;}
	{register object V253;
	V253= (V246);
	(V244)->c.c_cdr = (V253);
	if(((V253))!=Cnil){
	goto T633;}}
	goto T629;
	goto T633;
T633:;
	base[0]= CMPcdr((V244));
	vs_top=(vs_base=base+0)+1;
	Llast();
	vs_top=sup;
	V244= vs_base[0];
	goto T629;
	goto T631;
T631:;
	V243= (V246);
	base[0]= (V243);
	vs_top=(vs_base=base+0)+1;
	Llast();
	vs_top=sup;
	V244= vs_base[0];
	goto T629;
T629:;
	V242= CMPcdr((V242));
	goto T601;
	goto T602;
T602:;
	{object V254 = (V243);
	VMR24(V254)}
	{object V255 = Cnil;
	VMR24(V255)}
	{object V256 = Cnil;
	VMR24(V256)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INFO-SEARCH	*/

static object LI25(object V257,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB25 VMS25 VMV25
	{object V258;
	register object V259;
	register object V260;
	va_start(ap,first);
	V258= V257;
	narg = narg - 1;
	if (narg <= 0) goto T646;
	else {
	V259= first;}
	if (--narg <= 0) goto T647;
	else {
	V260= va_arg(ap,object);}
	--narg; goto T648;
	goto T646;
T646:;
	V259= Cnil;
	goto T647;
T647:;
	V260= Cnil;
	goto T648;
T648:;
	{register object V261;
	V261= Cnil;
	if((V259)!=Cnil){
	goto T652;}
	V259= small_fixnum(0);
	goto T652;
T652:;
	goto T656;
T656:;
	if((V259)!=Cnil){
	goto T658;}
	goto T657;
	goto T658;
T658:;
	{register object V262;
	register object V263;
	base[0]= (V259);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk113)();
	if(vs_base>=vs_top){vs_top=sup;goto T662;}
	V262= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T663;}
	V263= vs_base[0];
	vs_top=sup;
	goto T664;
	goto T662;
T662:;
	V262= Cnil;
	goto T663;
T663:;
	V263= Cnil;
	goto T664;
T664:;
	V261= (V263);
	if((V260)==Cnil){
	goto T667;}
	if((V261)==Cnil){
	goto T667;}
	if(number_compare((V260),(V261))<0){
	goto T668;}
	goto T667;
	goto T668;
T668:;
	V261= (V260);
	goto T667;
T667:;
	{register object V264;
	register object V265;
	object V266;
	object V267;
	V264= (*(LnkLI114))(CMPcdr((V262)));
	V265= CMPcar((V262));
	V266= number_minus((V259),(V265));
	V267= CMPmake_fixnum((long)length((V264)));
	if(((V261))==Cnil){
	goto T680;}
	V268= number_minus((V261),(V265));
	goto T678;
	goto T680;
T680:;
	V268= (V267);
	goto T678;
T678:;
	{long V269= fix((VFUN_NARGS=4,(*(LnkLI94))((V258),(V264),(V266),V268)));
	if(!((/* INLINE-ARGS */V269)>=(0))){
	goto T671;}}
	V270 = CMPmake_fixnum((long)(*(LnkLI97))(0));
	{object V271 = number_plus((V265),V270);
	VMR25(V271)}}
	goto T671;
T671:;
	V259= (V263);}
	goto T656;
	goto T657;
T657:;
	goto T654;
	goto T654;
	goto T654;
T654:;
	{object V272 = small_fixnum(-1);
	VMR25(V272)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function IDESCRIBE	*/

static object LI26(V274)

register object V274;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V275;
	V275= (*(LnkLI122))((V274),(VV[70]->s.s_dbind));
	{register object V276;
	register object V277;
	V276= (V275);
	V277= CMPcar((V276));
	goto T688;
T688:;
	if(!(((V276))==Cnil)){
	goto T689;}
	{object V278 = Cnil;
	VMR26(V278)}
	goto T689;
T689:;
	if(!(type_of(CMPcar((V277)))==t_cons)){
	goto T697;}
	if(!(equalp(CMPcaar((V277)),(V274)))){
	goto T693;}
	goto T695;
	goto T697;
T697:;
	if(!(equalp(CMPcar((V277)),(V274)))){
	goto T693;}
	goto T695;
T695:;
	base[2]= Ct;
	base[3]= VV[71];
	base[4]= (V277);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	base[2]= (V277);
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk104)();
	vs_top=sup;
	V279= vs_base[0];
	(void)(princ(V279,Cnil));
	goto T693;
T693:;
	V276= CMPcdr((V276));
	V277= CMPcar((V276));
	goto T688;}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for INFO	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	bds_check;
	{object V280;
	object V281;
	V280=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T712;}
	V281=(base[1]);
	vs_top=sup;
	goto T713;
	goto T712;
T712:;
	V281= (VV[70]->s.s_dbind);
	goto T713;
T713:;
	{object V282;
	register object V283;
	object V284;
	V282= Cnil;
	bds_bind(VV[20],Cnil);
	V283= Cnil;
	V284= Cnil;
	{object V285;
	V285= (*(LnkLI122))((V280),(V281));
	if(((VV[44]->s.s_dbind))==Cnil){
	goto T720;}
	base[3]= (V285);
	base[4]= (V281);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk123)();
	bds_unwind1;
	return;
	goto T720;
T720:;
	if(((V285))==Cnil){
	goto T725;}
	base[3]= CMPmake_fixnum((long)length((V285)));
	base[3]=MMcons(base[3],Cnil);
	{register long V286;
	V286= 0;
	{register object V287;
	register object V288;
	V287= Cnil;
	V288= (V285);
	{object V289;
	V289= Cnil;
	goto T731;
T731:;
	if(((V288))==Cnil){
	goto T734;}
	goto T733;
	goto T734;
T734:;
	goto T732;
	goto T733;
T733:;
	{object V290;
	V290= CMPcar((V288));
	V287= (V290);}
	V283= Cnil;
	V284= Cnil;
	if(!(type_of((V287))==t_cons)){
	goto T744;}
	if(!(type_of(CMPcdr((V287)))==t_cons)){
	goto T744;}
	V283= CMPcadr((V287));
	V287= CMPcar((V287));
	goto T744;
T744:;
	if(!(type_of((V287))==t_cons)){
	goto T743;}
	V284= CMPcar((V287));
	V287= CMPcdr((V287));
	goto T743;
T743:;
	base[4]= Ct;
	base[5]= VV[72];
	base[6]= CMPmake_fixnum(V286);
	base[7]= (V284);
	if(!(((V283))==((V289)))){
	goto T764;}
	base[8]= Cnil;
	goto T762;
	goto T764;
T764:;
	V289= (V283);
	base[8]= (V289);
	goto T762;
T762:;
	base[9]= (V287);
	vs_top=(vs_base=base+4)+6;
	Lformat();
	vs_top=sup;
	if(!((V286)<(2147483646))){
	goto T769;}
	goto T768;
	goto T769;
T769:;
	(void)((*(LnkLI124))());
	goto T768;
T768:;
	V286= (long)(V286)+(1);
	V288= CMPcdr((V288));
	goto T731;
	goto T732;
T732:;
	goto T728;
	goto T728;}}}
	goto T728;
T728:;
	if(!(((long)length((V285)))>(1))){
	goto T778;}
	base[4]= Ct;
	base[5]= VV[74];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	goto T776;
	goto T778;
T778:;
	princ_char(10,Cnil);
	goto T776;
T776:;
	{object V291;
	object V292;
	register object V293;
	if(!(((long)length((V285)))>(1))){
	goto T784;}
	vs_base=vs_top;
	Lread_line();
	vs_top=sup;
	V291= vs_base[0];
	goto T782;
	goto T784;
T784:;
	V291= VV[75];
	goto T782;
T782:;
	V292= small_fixnum(0);
	V293= Cnil;
	goto T788;
T788:;
	if(!(equal((V291),VV[76]))){
	goto T791;}
	goto T790;
	goto T791;
T791:;
	goto T789;
	goto T790;
T790:;
	vs_base=vs_top;
	Lread_line();
	vs_top=sup;
	V291= vs_base[0];
	goto T788;
	goto T789;
T789:;
	goto T786;
	goto T786;
	goto T786;
T786:;
	goto T798;
T798:;{object V294;
	base[4]= (V291);
	base[5]= Cnil;
	base[6]= Cnil;
	base[7]= VV[77];
	base[8]= (V292);
	vs_top=(vs_base=base+4)+5;
	(void) (*Lnk125)();
	if(vs_base<vs_top){
	V293= vs_base[0];
	vs_base++;
	}else{
	V293= Cnil;}
	if(vs_base<vs_top){
	V292= vs_base[0];
	}else{
	V292= Cnil;}
	vs_top=sup;
	V294= (V293);
	if(V294==Cnil)goto T801;
	goto T800;
	goto T801;
T801:;}
	goto T799;
	goto T800;
T800:;
	if(!(type_of((V293))==t_fixnum||
type_of((V293))==t_bignum||
type_of((V293))==t_ratio||
type_of((V293))==t_shortfloat||
type_of((V293))==t_longfloat||
type_of((V293))==t_complex)){
	goto T811;}
	V282= make_cons((V293),(V282));
	goto T809;
	goto T811;
T811:;
	V282= (V293);
	goto T796;
	goto T809;
T809:;
	goto T798;
	goto T799;
T799:;
	goto T796;
	goto T796;
	goto T796;
T796:;
	if(!(type_of((V282))==t_cons)){
	goto T819;}
	V282= nreverse((V282));
	goto T817;
	goto T819;
T819:;
	if(!(type_of((V282))==t_symbol)){
	goto T817;}
	V295= symbol_name((V282));
	if(equal(/* INLINE-ARGS */V295,VV[78])){
	goto T825;}
	V282= Cnil;
	goto T824;
	goto T825;
T825:;
	{register long V296;
	long V297;
	V296= 0;
	{object V298;
	V298= CMPmake_fixnum((long)length((V285)));{object V299;
	V299= (type_of((V298))==t_fixnum?Ct:Cnil);
	if(V299==Cnil)goto T831;
	goto T830;
	goto T831;
T831:;}
	(void)((*(LnkLI124))());
	goto T830;
T830:;
	V297= fix((V298));}
	{object V300;
	register object V301;
	V300= Cnil;
	V301= Cnil;
	goto T834;
T834:;
	if((V296)>=(V297)){
	goto T837;}
	goto T836;
	goto T837;
T837:;
	goto T835;
	goto T836;
T836:;
	if(((V301))==Cnil){
	goto T841;}
	{object V302;
	object V303;
	V302= (V301);
	V304 = CMPmake_fixnum(V296);
	V301= make_cons(V304,Cnil);
	V303= (V301);
	((V302))->c.c_cdr = (V303);
	goto T839;}
	goto T841;
T841:;
	V305 = CMPmake_fixnum(V296);
	V301= make_cons(V305,Cnil);
	V300= (V301);
	goto T839;
T839:;
	V296= (long)(V296)+(1);
	goto T834;
	goto T835;
T835:;
	V282= (V300);
	goto T824;
	V282= Cnil;
	goto T824;
	V282= Cnil;
	goto T824;}}
	goto T824;
T824:;
	goto T817;
T817:;
	if(((V282))==Cnil){
	goto T853;}
	V306= 
	make_cclosure_new(LC32,Cnil,base[3],Cdata);
	V282= (VFUN_NARGS=2,(*(LnkLI126))(V306,(V282)));
	base[4]= Ct;
	base[5]= VV[79];
	base[6]= CMPcar((VV[20]->s.s_dbind));
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T853;
T853:;
	{object V307;
	register object V308;
	V307= Cnil;
	V308= (V282);
	goto T863;
T863:;
	if(((V308))==Cnil){
	goto T866;}
	goto T865;
	goto T866;
T866:;
	goto T864;
	goto T865;
T865:;
	{object V309;
	V309= CMPcar((V308));
	V307= (V309);}
	base[4]= nth(fix((V307)),(V285));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk104)();
	vs_top=sup;
	V310= vs_base[0];
	(void)(princ(V310,Cnil));
	V308= CMPcdr((V308));
	goto T863;
	goto T864;
T864:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	return;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	return;}}
	goto T725;
T725:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;}}
	}
}
/*	local entry for function DEFAULT-INFO-HOTLIST	*/

static object LI28()

{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	base[1]= VV[80];
	vs_base=vs_top;
	(void) (*Lnk127)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	Lmerge_pathnames();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lnamestring();
	vs_top=sup;
	{object V311 = vs_base[0];
	VMR28(V311)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-TO-HOTLIST	*/

static object LI30(V313)

VOL object V313;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	base[0]= (V313);
	if(!(type_of(base[0])==t_symbol)){
	goto T880;}
	{object V314 =(base[0])->s.s_plist;
	 object ind= VV[69];
	while(V314!=Cnil){
	if(V314->c.c_car==ind){
	base[0]= (V314->c.c_cdr->c.c_car);
	goto T883;
	}else V314=V314->c.c_cdr->c.c_cdr;}
	base[0]= Cnil;}
	goto T883;
T883:;
	goto T880;
T880:;
	if((base[0])==Cnil){
	goto T885;}
	base[2]= (*(LnkLI128))();
	base[3]= VV[81];
	base[4]= VV[82];
	base[5]= VV[83];
	base[6]= VV[84];
	base[7]= VV[85];
	base[8]= VV[86];
	vs_top=(vs_base=base+2)+7;
	(void) (*Lnk91)();
	vs_top=sup;
	base[1]= vs_base[0];
	frs_push(FRS_PROTECT,Cnil);
	{object tag=Cnil;frame_ptr fr=NULL;object p;bool active;
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	base[3]= base[1];
	vs_top=(vs_base=base+3)+1;
	Lfile_position();
	vs_top=sup;
	V315= vs_base[0];
	if(!(number_compare(V315,small_fixnum(10))<0)){
	goto T896;}
	(void)(princ(VV[87],base[1]));
	goto T896;
T896:;
	base[3]= base[1];
	base[4]= VV[88];
	base[5]= CMPcaddr(CMPcddddr(base[0]));
	base[6]= CMPcar(CMPcddddr(base[0]));
	vs_top=(vs_base=base+3)+4;
	Lformat();
	active=FALSE;}
	base[2]=Cnil;
	while(vs_base<vs_top)
	{base[2]=MMcons(vs_top[-1],base[2]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if((base[1])==Cnil){
	goto T905;}
	base[3]= base[1];
	vs_top=(vs_base=base+3)+1;
	Lclose();
	vs_top=sup;
	goto T905;
T905:;
	vs_base=vs_top=base+3;
	for(p= base[2];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	vs_top=sup;
	{object V316 = vs_base[0];
	VMR29(V316)}}}
	goto T885;
T885:;
	{object V317 = Cnil;
	VMR29(V317)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LIST-MATCHES	*/

static object LI31(object V318,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB30 VMS30 VMV30
	{object V319;
	object V320;
	va_start(ap,first);
	V319= V318;
	narg= narg - 1;
	V321 = list_vector_new(narg,first,ap);
	V320= V321;
	{register object V322;
	register object V323;
	V322= Cnil;
	V323= (V320);
	{object V324;
	register object V325;
	register object V326;
	V324= Cnil;
	V325= Cnil;
	V326= Cnil;
	goto T910;
T910:;
	if(((V323))==Cnil){
	goto T913;}
	goto T912;
	goto T913;
T913:;
	goto T911;
	goto T912;
T912:;
	{register object V327;
	V327= CMPcar((V323));
	V322= (V327);}
	{long V328= (long)(*(LnkLI97))(fix((V322)));
	if((/* INLINE-ARGS */V328)>=(0)){
	goto T920;}}
	V326= Cnil;
	goto T919;
	goto T920;
T920:;
	V326= (*(LnkLI98))((V319),(V322));
	goto T919;
T919:;
	if(((V325))==Cnil){
	goto T924;}
	{register object V329;
	register object V330;
	V329= (V325);
	V325= make_cons((V326),Cnil);
	V330= (V325);
	((V329))->c.c_cdr = (V330);
	goto T922;}
	goto T924;
T924:;
	V325= make_cons((V326),Cnil);
	V324= (V325);
	goto T922;
T922:;
	V323= CMPcdr((V323));
	goto T910;
	goto T911;
T911:;
	{object V331 = (V324);
	VMR30(V331)}
	{object V332 = Cnil;
	VMR30(V332)}
	{object V333 = Cnil;
	VMR30(V333)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local function CLOSURE	*/

static void LC32(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	{object V334;
	V334=(base[0]);
	vs_top=sup;
	if(type_of((V334))==t_fixnum||type_of((V334))==t_bignum){
	goto T936;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T936;
T936:;
	base[1]= (number_compare((V334),(base0[0]->c.c_car))>=0?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static object  LnkTLI128(){return call_proc0(VV[128],(void **)(void *)&LnkLI128);} /* DEFAULT-INFO-HOTLIST */
static void LnkT127(){ call_or_link(VV[127],(void **)(void *)&Lnk127);} /* USER-HOMEDIR-PATHNAME */
static object  LnkTLI126(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[126],(void **)(void *)&LnkLI126,first,ap);va_end(ap);return V1;} /* REMOVE-IF */
static void LnkT125(){ call_or_link(VV[125],(void **)(void *)&Lnk125);} /* READ-FROM-STRING */
static object  LnkTLI124(){return call_proc0(VV[124],(void **)(void *)&LnkLI124);} /* TYPE-ERROR */
static void LnkT123(){ call_or_link(VV[123],(void **)(void *)&Lnk123);} /* OFFER-CHOICES */
static object  LnkTLI122(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[122],(void **)(void *)&LnkLI122,2,first,ap);va_end(ap);return V1;} /* INFO-AUX */
static object  LnkTLI121(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[121],(void **)(void *)&LnkLI121,2,first,ap);va_end(ap);return V1;} /* GET-INFO-CHOICES */
static object  LnkTLI120(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[120],(void **)(void *)&LnkLI120,2,first,ap);va_end(ap);return V1;} /* ADD-FILE */
static void LnkT119(){ call_or_link(VV[119],(void **)(void *)&Lnk119);} /* END-WAITING */
static void LnkT118(){ call_or_link(VV[118],(void **)(void *)&Lnk118);} /* PRINT-NODE */
static object  LnkTLI117(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[117],(void **)(void *)&LnkLI117,258,first,ap);va_end(ap);return V1;} /* GET-NODE-INDEX */
static object  LnkTLI116(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[116],(void **)(void *)&LnkLI116,1,first,ap);va_end(ap);return V1;} /* SETUP-INFO */
static void LnkT115(){ call_or_link(VV[115],(void **)(void *)&Lnk115);} /* WAITING */
static object  LnkTLI114(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[114],(void **)(void *)&LnkLI114,1,first,ap);va_end(ap);return V1;} /* INFO-GET-FILE */
static void LnkT113(){ call_or_link(VV[113],(void **)(void *)&Lnk113);} /* INFO-SUBFILE */
static void LnkT112(){ call_or_link(VV[112],(void **)(void *)&Lnk112);} /* WINFO */
static void LnkT111(){ call_or_link(VV[111],(void **)(void *)&Lnk111);} /* TKERROR */
static object  LnkTLI110(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[110],(void **)(void *)&LnkLI110,1,first,ap);va_end(ap);return V1;} /* NODES-FROM-INDEX */
static object  LnkTLI109(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[109],(void **)(void *)&LnkLI109,1,first,ap);va_end(ap);return V1;} /* INFO-GET-TAGS */
static object  LnkTLI108(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[108],(void **)(void *)&LnkLI108,first,ap);va_end(ap);return V1;} /* SEARCH */
static object  LnkTLI107(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[107],(void **)(void *)&LnkLI107,first,ap);va_end(ap);return V1;} /* FILE-SEARCH */
static object  LnkTLI106(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[106],(void **)(void *)&LnkLI106,1,first,ap);va_end(ap);return V1;} /* FIX-LOAD-PATH */
static object  LnkTLI105(){return call_proc0(VV[105],(void **)(void *)&LnkLI105);} /* GET-INDEX-NODE */
static void LnkT104(){ call_or_link(VV[104],(void **)(void *)&Lnk104);} /* SHOW-INFO */
static object  LnkTLI103(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[103],(void **)(void *)&LnkLI103,2,first,ap);va_end(ap);return V1;} /* GET-NODES */
static void LnkT102(){ call_or_link(VV[102],(void **)(void *)&Lnk102);} /* STRING-CONCATENATE */
static object  LnkTLI101(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[101],(void **)(void *)&LnkLI101,1,first,ap);va_end(ap);return V1;} /* RE-QUOTE-STRING */
static object  LnkTLI100(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[100],(void **)(void *)&LnkLI100,first,ap);va_end(ap);return V1;} /* POSITION */
static void LnkT99(){ call_or_link(VV[99],(void **)(void *)&Lnk99);} /* INFO-ERROR */
static object  LnkTLI98(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[98],(void **)(void *)&LnkLI98,2,first,ap);va_end(ap);return V1;} /* GET-MATCH */
static object  LnkTLI97(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[97],(void **)(void *)&LnkLI97,4353,first,ap);va_end(ap);return V1;} /* MATCH-BEGINNING */
static object  LnkTLI96(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[96],(void **)(void *)&LnkLI96,16642,first,ap);va_end(ap);return V1;} /* ATOI */
static object  LnkTLI95(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[95],(void **)(void *)&LnkLI95,4353,first,ap);va_end(ap);return V1;} /* MATCH-END */
static object  LnkTLI94(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[94],(void **)(void *)&LnkLI94,first,ap);va_end(ap);return V1;} /* STRING-MATCH */
static object  LnkTLI93(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[93],(void **)(void *)&LnkLI93,first,ap);va_end(ap);return V1;} /* FILE-TO-STRING */
static void LnkT92(){ call_or_link(VV[92],(void **)(void *)&Lnk92);} /* FREAD */
static void LnkT91(){ call_or_link(VV[91],(void **)(void *)&Lnk91);} /* OPEN */
static object  LnkTLI90(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[90],(void **)(void *)&LnkLI90,first,ap);va_end(ap);return V1;} /* VECTOR-PUSH-EXTEND */
static object  LnkTLI89(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[89],(void **)(void *)&LnkLI89,first,ap);va_end(ap);return V1;} /* MAKE-ARRAY */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

