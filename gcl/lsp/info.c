
#include "cmpinclude.h"
#include "info.h"
init_info(){do_init(VV);}
/*	function definition for SHARP-U-READER	*/

static L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	{register object V1;
	object V2;
	object V3;
	V1=(base[0]);
	V2=(base[1]);
	V3=(base[2]);
	vs_top=sup;
TTL:;
	{object V4;
	base[3]= small_fixnum(10);
	base[4]= VV[0];
	base[5]= VV[1];
	base[6]= VV[2];
	base[7]= small_fixnum(0);
	vs_top=(vs_base=base+3)+5;
	(void) (*Lnk88)();
	vs_top=sup;
	V4= vs_base[0];{object V5;
	{object V6;
	{int V7;
	V7= 0;
	if(!((type_of((V1))==t_stream? (((V1))->sm.sm_fp)!=0: 0 ))){
	goto T15;}
	V7= getc(((V1))->sm.sm_fp);
	if(!((V7)==(-1))){
	goto T20;}
	if(!((feof(((V1))->sm.sm_fp)))){
	goto T20;}
	V6= Cnil;
	goto T12;
T20:;
	V6= code_char((V7));
	goto T12;
T15:;
	V6= read_char1((V1),Cnil);}
T12:;
	if(type_of((V6))==t_character){
	goto T24;}
	V5= Cnil;
	goto T11;
T24:;
	V5= (((34))==((char_code((V6))))?Ct:Cnil);}
T11:;
	if(V5==Cnil)goto T10;
	goto T9;
T10:;}
	base[3]= VV[4];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
T9:;
T29:;
	{register object V8;
	{register int V9;
	V9= 0;
	if(!((type_of((V1))==t_stream? (((V1))->sm.sm_fp)!=0: 0 ))){
	goto T34;}
	V9= getc(((V1))->sm.sm_fp);
	if(!((V9)==(-1))){
	goto T39;}
	if(!((feof(((V1))->sm.sm_fp)))){
	goto T39;}
	V8= Cnil;
	goto T31;
T39:;
	V8= code_char((V9));
	goto T31;
T34:;
	V8= read_char1((V1),Cnil);}
T31:;
	if(type_of(V8)==t_character){
	goto T47;}
	goto T45;
T47:;
	if(!(((34))==((char_code(V8))))){
	goto T45;}
	goto T27;
T45:;
	if(type_of(V8)==t_character){
	goto T51;}
	goto T43;
T51:;
	if(!(((92))==((char_code(V8))))){
	goto T43;}
	{register int V12;
	V12= 0;
	if(!((type_of((V1))==t_stream? (((V1))->sm.sm_fp)!=0: 0 ))){
	goto T57;}
	V12= getc(((V1))->sm.sm_fp);
	if(!((V12)==(-1))){
	goto T62;}
	if(!((feof(((V1))->sm.sm_fp)))){
	goto T62;}
	V8= Cnil;
	goto T54;
T62:;
	V8= code_char((V12));
	goto T54;
T57:;
	V8= read_char1((V1),Cnil);}
T54:;{object V13;
	{register object x= (V8),V15= VV[6];
	while(V15!=Cnil)
	if(eql(x,V15->c.c_car->c.c_car) &&V15->c.c_car != Cnil){
	V14= (V15->c.c_car);
	goto T69;
	}else V15=V15->c.c_cdr;
	V14= Cnil;}
T69:;
	V13= CMPcdr(V14);
	if(V13==Cnil)goto T67;
	V8= V13;
	goto T66;
T67:;}
T66:;
T43:;
	{register object V17;
	register int V18;
	int V19;
	V17= (V4);
	V18= (((V17))->st.st_fillp);
	V19= (((V17))->st.st_dim);
	if(!((V18)<(V19))){
	goto T74;}
	(void)((((V17))->st.st_fillp)=((1)+(V18)));
	V20 = CMPmake_fixnum(V18);
	(void)(aset1((V17),fix(V20),V8));
	goto T30;
T74:;
	base[3]= V8;
	base[4]= (V17);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk89)();
	vs_top=sup;}}
T30:;
	goto T29;
T27:;
	base[3]= (V4);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for FILE-TO-STRING	*/

static L2()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM2; VC2
	vs_check;
	bds_check;
	{VOL object V21;
	V21=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T81;}
	vs_top=sup;
	goto T82;
T81:;
	base[1]= small_fixnum(0);
T82:;
	bds_bind(VV[7],Ct);
	base[3]= small_fixnum(0);
	base[5]= (V21);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk90)();
	vs_top=sup;
	base[4]= vs_base[0];
	{object tag;frame_ptr fr;object p;bool active;
	frs_push(FRS_PROTECT,Cnil);
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	base[6]= base[4];
	vs_top=(vs_base=base+6)+1;
	Lfile_length();
	vs_top=sup;
	base[3]= vs_base[0];{VOL object V22;
	if(number_compare(small_fixnum(0),base[1])<=0){
	goto T93;}
	V22= Cnil;
	goto T92;
T93:;
	V22= (number_compare(base[1],base[3])<=0?Ct:Cnil);
T92:;
	if(V22==Cnil)goto T91;
	goto T90;
T91:;}
	base[6]= VV[8];
	base[7]= base[1];
	vs_top=(vs_base=base+6)+2;
	Lerror();
	vs_top=sup;
T90:;
	{object V23;
	base[6]= number_minus(base[3],base[1]);
	base[7]= VV[0];
	base[8]= VV[1];
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk88)();
	vs_top=sup;
	V23= vs_base[0];
	if(!(number_compare(base[1],small_fixnum(0))>0)){
	goto T101;}
	base[6]= base[4];
	base[7]= base[1];
	vs_top=(vs_base=base+6)+2;
	Lfile_position();
	vs_top=sup;
T101:;
	base[6]= (V23);
	base[7]= small_fixnum(0);
	base[8]= CMPmake_fixnum(length((V23)));
	base[9]= base[4];
	vs_top=(vs_base=base+6)+4;
	(void) (*Lnk91)();
	vs_top=sup;
	base[6]= (V23);
	vs_top=(vs_base=base+6)+1;}
	active=FALSE;}
	base[5]=Cnil;
	while(vs_base<vs_top)
	{base[5]=MMcons(vs_top[-1],base[5]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if((base[4])==Cnil){
	goto T111;}
	base[6]= base[4];
	vs_top=(vs_base=base+6)+1;
	Lclose();
	vs_top=sup;
T111:;
	vs_base=vs_top=base+6;
	for(p= base[5];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	bds_unwind1;
	return;}}
	}
}
/*	function definition for ATOI	*/

static L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{register object V24;
	register int V25;
	V24=(base[0]);
	V25=fix(base[1]);
	vs_top=sup;
TTL:;
	{register int V26;
	register int V27;
	register int V28;
	V26= 0;
	V27= 0;
	V28= ((V24))->v.v_fillp;
T120:;
	if(!((V25)<(V28))){
	goto T123;}
	goto T122;
T123:;
	goto T121;
T122:;
	V27= (((V24))->ust.ust_self[V25]);
	V25= (V25)+(1);
	V27= (V27)-(48);
	if(!((V27)>=(0))){
	goto T133;}
	if(!((V27)<(10))){
	goto T133;}
	V29 = CMPmake_fixnum(V27);
	V30 = CMPmake_fixnum(V26);
	V31= number_times(small_fixnum(10),V30);
	V26= fix(number_plus(V29,/* INLINE-ARGS */V31));
	goto T131;
T133:;
	goto T118;
T131:;
	goto T120;
T121:;
	goto T118;
	goto T118;
T118:;
	base[2]= CMPmake_fixnum(V26);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for INFO-GET-TAGS	*/

static L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	bds_check;
	{object V32;
	V32=(base[0]);
	vs_top=sup;
TTL:;
	{register int V33;
	object V34;
	register object V35;
	V33= 0;
	bds_bind(VV[9],Cnil);
	V34= Cnil;
	V35= Cnil;
	bds_bind(VV[10],Ct);
	{register object V36;
	register int V37;
	base[3]= (V32);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk92)();
	vs_top=sup;
	V36= vs_base[0];
	V37= 0;
	{int V38= fix((VFUN_NARGS=3,(*(LnkLI93))(VV[11],(V36),small_fixnum(0))));
	if(!((/* INLINE-ARGS */V38)>=(0))){
	goto T145;}}
	V37= (*(LnkLI94))(0);
	V39 = CMPmake_fixnum(V37);
	V33= fix((VFUN_NARGS=3,(*(LnkLI93))(VV[12],(V36),V39)));
T153:;
	V40 = CMPmake_fixnum(V37);
	V41 = CMPmake_fixnum(V33);
	{int V42= fix((VFUN_NARGS=4,(*(LnkLI93))(VV[13],(V36),V40,V41)));
	if(!((/* INLINE-ARGS */V42)>=(0))){
	goto T156;}}
	goto T155;
T156:;
	goto T154;
T155:;
	V37= (*(LnkLI94))(0);
	base[3]= (V36);
	base[4]= CMPmake_fixnum((*(LnkLI95))(2));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk96)();
	vs_top=sup;
	V43= vs_base[0];
	base[3]= (V36);
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk97)();
	vs_top=sup;
	V44= vs_base[0];
	V45= make_cons(V43,V44);
	V35= make_cons(/* INLINE-ARGS */V45,(V35));
	goto T153;
T154:;
	goto T145;
	goto T145;
T145:;
	V46 = CMPmake_fixnum(V37);
	{int V47= fix((VFUN_NARGS=3,(*(LnkLI93))(VV[14],(V36),V46)));
	if(!((/* INLINE-ARGS */V47)>=(0))){
	goto T169;}}
	V37= (*(LnkLI94))(0);
	V48 = CMPmake_fixnum(V37);
	{int V49= fix((VFUN_NARGS=3,(*(LnkLI93))(VV[15],(V36),V48)));
	if(!((/* INLINE-ARGS */V49)>=(0))){
	goto T169;}}
	base[3]= (V36);
	base[4]= CMPmake_fixnum(V37);
	base[5]= CMPmake_fixnum((*(LnkLI94))(0));
	vs_top=(vs_base=base+3)+3;
	Lsubseq();
	vs_top=sup;
	V34= vs_base[0];
T169:;
	if(((V35))==Cnil){
	goto T180;}
	if((V34)!=Cnil){
	goto T180;}
	base[3]= VV[16];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk98)();
	vs_top=sup;
T180:;
	V50= nreverse((V35));
	base[3]= make_cons((V34),/* INLINE-ARGS */V50);
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;}}
	}
}
/*	function definition for RE-QUOTE-STRING	*/

static L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	{object V51;
	V51=(base[0]);
	vs_top=sup;
TTL:;
	{register int V52;
	int V53;
	object V54;
	int V55;
	V52= 0;
	V53= ((V51))->v.v_fillp;
	V54= Cnil;
	V55= 0;
	{register object V56;
	V56= Cnil;
T190:;
T193:;
	if(!((V52)<(V53))){
	goto T196;}
	goto T195;
T196:;
	goto T194;
T195:;
	V54= code_char(((V51))->ust.ust_self[V52]);
	base[1]= (V54);
	base[2]= VV[17];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk99)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T200;}
	if(((V56))==Cnil){
	goto T206;}
	{unsigned char V57;
	register object V58;
	register int V59;
	int V60;
	V57= 92;
	V58= (V56);
	V59= (((V58))->st.st_fillp);
	V60= (((V58))->st.st_dim);
	if(!((V59)<(V60))){
	goto T213;}
	(void)((((V58))->st.st_fillp)=((1)+(V59)));
	V61 = CMPmake_fixnum(V59);
	(void)(aset1((V58),fix(V61),code_char(V57)));
	goto T200;
T213:;
	base[1]= code_char(V57);
	base[2]= (V58);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk89)();
	vs_top=sup;
	goto T200;}
T206:;
	V55= (V55)+(1);
T200:;
	if(((V56))==Cnil){
	goto T220;}
	{register object V63;
	register int V64;
	int V65;
	V63= (V56);
	V64= (((V63))->st.st_fillp);
	V65= (((V63))->st.st_dim);
	if(!((V64)<(V65))){
	goto T227;}
	(void)((((V63))->st.st_fillp)=((1)+(V64)));
	V66 = CMPmake_fixnum(V64);
	(void)(aset1((V63),fix(V66),V54));
	goto T220;
T227:;
	base[1]= V54;
	base[2]= (V63);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk89)();
	vs_top=sup;}
T220:;
	V52= (V52)+(1);
	goto T193;
T194:;
	goto T191;
	goto T191;
T191:;
	{object V67;
	V67= (V56);
	if(((V67))==Cnil){
	goto T238;}
	goto T236;
T238:;
	if(!((V55)>(0))){
	goto T241;}
	base[1]= CMPmake_fixnum((((V51))->v.v_fillp)+(V55));
	base[2]= VV[0];
	base[3]= VV[1];
	base[4]= VV[2];
	base[5]= small_fixnum(0);
	vs_top=(vs_base=base+1)+5;
	(void) (*Lnk88)();
	vs_top=sup;
	V56= vs_base[0];
	V52= 0;
	goto T190;
T241:;
	V56= (V51);}
T236:;
	goto T188;
T188:;
	base[1]= (V56);
	vs_top=(vs_base=base+1)+1;
	return;}}
	}
}
/*	function definition for GET-MATCH	*/

static L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V68;
	object V69;
	V68=(base[0]);
	V69=(base[1]);
	vs_top=sup;
TTL:;
	base[2]= (V68);
	base[3]= CMPmake_fixnum((*(LnkLI95))(fix((V69))));
	base[4]= CMPmake_fixnum((*(LnkLI94))(fix((V69))));
	vs_top=(vs_base=base+2)+3;
	Lsubseq();
	return;
	}
}
/*	function definition for GET-NODES	*/

static L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	bds_check;
	{register object V70;
	register object V71;
	V70=(base[0]);
	V71=(base[1]);
	vs_top=sup;
TTL:;
	{register int V72;
	register object V73;
	V72= 0;
	V73= Cnil;
	bds_bind(VV[10],Ct);
	bds_bind(VV[9],Cnil);
	if(((V71))==Cnil){
	goto T259;}
	base[4]= VV[18];
	base[6]= (V70);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk100)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= VV[19];
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk101)();
	vs_top=sup;
	V70= vs_base[0];
T269:;
	V74 = CMPmake_fixnum(V72);
	{int V75= fix((VFUN_NARGS=3,(*(LnkLI93))((V70),(V71),V74)));
	if(!((/* INLINE-ARGS */V75)>=(0))){
	goto T272;}}
	goto T271;
T272:;
	goto T270;
T271:;
	V72= (*(LnkLI94))(0);
	base[4]= (V71);
	base[5]= small_fixnum(1);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk97)();
	vs_top=sup;
	V76= vs_base[0];
	V73= make_cons(V76,(V73));
	goto T269;
T270:;
	goto T267;
	goto T267;
T267:;
	base[4]= nreverse((V73));
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	bds_unwind1;
	return;
T259:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	bds_unwind1;
	return;}
	}
}
/*	function definition for GET-INDEX-NODE	*/

static L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	vs_top=sup;
TTL:;{object V77;
	V77= CMPcaddr((VV[20]->s.s_dbind));
	if(V77==Cnil)goto T282;
	base[0]= V77;
	vs_top=(vs_base=base+0)+1;
	return;
T282:;}
	{object V78;
	object V79;
	object V80;
	V78= Cnil;
	V79= CMPcar(CMPcadr((VV[20]->s.s_dbind)));
	if((V79)==Cnil){
	V80= Cnil;
	goto T286;}
	base[2]= VV[21];
	base[3]= (V79);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk102)();
	vs_top=sup;
	V81= vs_base[0];
	V80= CMPcar(V81);
T286:;
	if(((V80))==Cnil){
	goto T291;}
	base[2]= (V80);
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk103)();
	vs_top=sup;
	V78= vs_base[0];
	{object V82;
	V82= (VV[20]->s.s_dbind);
	(CMPcddr((V82)))->c.c_car = V78;
	(void)(CMPcddr((V82)));
	base[2]= V78;
	vs_top=(vs_base=base+2)+1;
	return;}
T291:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
}
/*	function definition for NODES-FROM-INDEX	*/

static L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	bds_check;
	{register object V84;
	V84=(base[0]);
	vs_top=sup;
TTL:;
	{register object V85;
	register object V86;
	V85= small_fixnum(0);
	V86= Cnil;
	bds_bind(VV[10],Ct);
	bds_bind(VV[9],Cnil);
	{register object V87;
	vs_base=vs_top;
	(void) (*Lnk104)();
	vs_top=sup;
	V87= vs_base[0];
	if(((V87))==Cnil){
	goto T304;}
	base[3]= VV[22];
	base[5]= (V84);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk100)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[23];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk101)();
	vs_top=sup;
	V84= vs_base[0];
T314:;
	{int V88= fix((VFUN_NARGS=3,(*(LnkLI93))((V84),(V87),(V85))));
	if(!((/* INLINE-ARGS */V88)>=(0))){
	goto T317;}}
	goto T316;
T317:;
	goto T315;
T316:;
	V85= CMPmake_fixnum((*(LnkLI94))(0));
	base[3]= (V87);
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk97)();
	vs_top=sup;
	V89= vs_base[0];
	base[3]= (V87);
	base[4]= small_fixnum(2);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk97)();
	vs_top=sup;
	V90= vs_base[0];
	V91= make_cons(V89,V90);
	V86= make_cons(/* INLINE-ARGS */V91,(V86));
	goto T314;
T315:;
	goto T312;
	goto T312;
T312:;
	base[3]= nreverse((V86));
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
T304:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;}}
	}
}
/*	function definition for GET-NODE-INDEX	*/

static L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	bds_check;
	{register object V92;
	object V93;
	V92=(base[0]);
	V93=(base[1]);
	vs_top=sup;
TTL:;
	{object V94;
	V94= (V92);
	bds_bind(VV[9],Cnil);
	if(((V93))!=Cnil){
	goto T332;}
	base[3]= small_fixnum(0);
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;
T332:;
	base[3]= VV[24];
	base[5]= (V92);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk100)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[25];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk101)();
	vs_top=sup;
	V92= vs_base[0];
	{int V95= fix((VFUN_NARGS=2,(*(LnkLI93))((V92),(V93))));
	if(!((/* INLINE-ARGS */V95)>=(0))){
	goto T341;}}
	base[3]= (V93);
	base[4]= CMPmake_fixnum((*(LnkLI95))(1));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk96)();
	bds_unwind1;
	return;
T341:;
	base[3]= VV[26];
	base[4]= (V94);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk98)();
	vs_top=sup;
	base[3]= small_fixnum(0);
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;}
	}
}
/*	function definition for ALL-MATCHES	*/

static L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	bds_check;
	{object V96;
	object V97;
	V96=(base[0]);
	V97=(base[1]);
	vs_top=sup;
TTL:;
	{register int V98;
	V98= 0;
	bds_bind(VV[9],Cnil);
	{register object V99;
	register object V100;
	register object V101;
	V99= Cnil;
	V100= Cnil;
	V101= Cnil;
T350:;
	V102 = CMPmake_fixnum(V98);
	V98= fix((VFUN_NARGS=3,(*(LnkLI93))((V96),(V97),V102)));
	if(!((V98)>=(0))){
	goto T353;}
	goto T352;
T353:;
	goto T351;
T352:;{object V103;
	V103= CMPmake_fixnum(V98);
	V98= (*(LnkLI94))(0);
	V104 = CMPmake_fixnum(V98);
	V101= list(2,V103,V104);}
	if(((V100))==Cnil){
	goto T361;}
	{register object V105;
	register object V106;
	V105= (V100);
	V100= make_cons((V101),Cnil);
	V106= (V100);
	((V105))->c.c_cdr = (V106);
	goto T359;}
T361:;
	V100= make_cons((V101),Cnil);
	V99= (V100);
T359:;
	goto T350;
T351:;
	base[3]= (V99);
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;}}
	}
}
/*	macro definition for NODE	*/

static L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	vs_top=sup;
	{object V107=base[0]->c.c_cdr;
	base[2]= (V107->c.c_car);
	V107=V107->c.c_cdr;
	base[3]= (V107->c.c_car);}
	base[4]= base[2];
	base[5]= VV[28];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk99)();
	vs_top=sup;
	V108= vs_base[0];
	base[4]= list(3,VV[27],V108,base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for NODE-OFFSET	*/

static L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V109;
	V109=(base[0]);
	vs_top=sup;
TTL:;
	base[1]= number_plus(CMPcar(CMPcadr(CMPcddddr((V109)))),CMPcadr((V109)));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for SETUP-INFO	*/

static L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	bds_check;
	{register object V110;
	V110=(base[0]);
	vs_top=sup;
TTL:;
	{object V111;
	register object V112;
	V111= Cnil;
	V112= Cnil;
	if(!(((VV[29]->s.s_dbind))==((VV[30]->s.s_dbind)))){
	goto T377;}
	goto T376;
T377:;
	(VV[29]->s.s_dbind)= (VV[30]->s.s_dbind);
	base[1]= (VV[30]->s.s_dbind);
	base[2]= VV[32];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk101)();
	vs_top=sup;
	V113= vs_base[0];
	(VV[31]->s.s_dbind)= make_cons(V113,(VV[31]->s.s_dbind));
	base[1]= (VV[31]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk105)();
	vs_top=sup;
	(VV[31]->s.s_dbind)= vs_base[0];
T376:;
	if(!(equal((V110),VV[33]))){
	goto T388;}
	V110= VV[34];
T388:;
	base[1]= (V110);
	base[2]= (VV[31]->s.s_dbind);
	base[3]= VV[35];
	base[4]= Cnil;
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk106)();
	vs_top=sup;
	V112= vs_base[0];
	if(((V112))!=Cnil){
	goto T398;}
	if(equal((V110),VV[36])){
	goto T398;}
	{object V114;
	base[3]= VV[37];
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk103)();
	vs_top=sup;
	V114= vs_base[0];
	bds_bind(VV[10],Cnil);
	base[3]= VV[38];
	base[5]= (V110);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk100)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[39];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk101)();
	vs_top=sup;
	V115= vs_base[0];
	{int V116= fix((VFUN_NARGS=2,(*(LnkLI93))(V115,(V114))));
	if(!((/* INLINE-ARGS */V116)>=(0))){
	bds_unwind1;
	goto T398;}}
	base[3]= (V114);
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk97)();
	vs_top=sup;
	V112= vs_base[0];
	bds_unwind1;}
T398:;
	if(((V112))==Cnil){
	goto T419;}
	{object V117;
	base[3]= (V112);
	vs_top=(vs_base=base+3)+1;
	Ltruename();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lnamestring();
	vs_top=sup;
	V117= vs_base[0];
	{register object x= (V117),V118= (VV[40]->s.s_dbind);
	while(V118!=Cnil)
	if(equal(x,V118->c.c_car->c.c_car) &&V118->c.c_car != Cnil){
	V111= (V118->c.c_car);
	goto T427;
	}else V118=V118->c.c_cdr;
	V111= Cnil;}
T427:;
	if(((V111))==Cnil){
	goto T425;}
	(VV[20]->s.s_dbind)= (V111);
	goto T417;
T425:;
	base[2]= (V117);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk107)();
	vs_top=sup;
	V119= vs_base[0];
	(VV[20]->s.s_dbind)= list(3,(V117),V119,Cnil);
	(VV[40]->s.s_dbind)= make_cons((VV[20]->s.s_dbind),(VV[40]->s.s_dbind));
	goto T417;}
T419:;
	base[1]= Ct;
	base[2]= VV[41];
	base[3]= (V110);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
T417:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for GET-INFO-CHOICES	*/

static L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	{object V120;
	object V121;
	V120=(base[0]);
	V121=(base[1]);
	vs_top=sup;
TTL:;
	if(!(eql((V121),VV[42]))){
	goto T438;}
	base[2]= (V120);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk108)();
	return;
T438:;
	base[2]= (V120);
	base[3]= CMPcar(CMPcadr((VV[20]->s.s_dbind)));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk102)();
	return;
	}
}
/*	function definition for ADD-FILE	*/

static L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V122;
	register object V123;
	V122=(base[0]);
	V123=(base[1]);
	vs_top=sup;
TTL:;
	{register object V124;
	V124= (V122);
T446:;
	if((V124)!=Cnil){
	goto T448;}
	goto T447;
T448:;
	{register object V125;
	register object V126;
	V125= (V124);
	V126= list(2,CMPcar((V124)),(V123));
	((V125))->c.c_car = (V126);}
	V124= CMPcdr((V124));
	goto T446;
T447:;
	goto T444;
	goto T444;
T444:;
	base[2]= (V122);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for INFO-ERROR	*/

static L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{object V127;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V127=(base[0]);
	vs_top=sup;
	if(((VV[43]->s.s_dbind))==Cnil){
	goto T457;}
	base[2]= Cnil;
	{object V128;
	V128= (V127);
	 vs_top=base+3;
	 while(V128!=Cnil)
	 {vs_push((V128)->c.c_car);V128=(V128)->c.c_cdr;}
	vs_base=base+2;}
	Lformat();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk109)();
	return;
T457:;
	{object V129;
	V129= (V127);
	 vs_top=base+1;
	 while(V129!=Cnil)
	 {vs_push((V129)->c.c_car);V129=(V129)->c.c_cdr;}
	vs_base=base+1;}
	Lerror();
	return;
	}
}
/*	function definition for INFO-GET-FILE	*/

static L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{register object V130;
	V130=(base[0]);
	vs_top=sup;
TTL:;
	base[1]= (V130);
	base[2]= CMPcar((VV[20]->s.s_dbind));
	vs_top=(vs_base=base+1)+2;
	Lmerge_pathnames();
	vs_top=sup;
	V130= vs_base[0];
	if(!(equal(CMPcar((VV[44]->s.s_dbind)),(V130)))){
	goto T469;}
	V131= (VV[44]->s.s_dbind);
	goto T467;
T469:;
	base[1]= (V130);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk92)();
	vs_top=sup;
	V132= vs_base[0];
	(VV[44]->s.s_dbind)= make_cons((V130),V132);
	V131= (VV[44]->s.s_dbind);
T467:;
	base[1]= CMPcdr(V131);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for WAITING	*/

static L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{object V133;
	V133=(base[0]);
	vs_top=sup;
TTL:;
	if((VV[43]->s.s_dbind)==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	base[1]= (V133);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T474;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T474:;
	base[1]= VV[45];
	base[2]= (V133);
	base[3]= VV[46];
	base[4]= VV[47];
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk110)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T477;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T477:;
	base[1]= VV[48];
	base[2]= VV[49];
	base[3]= VV[50];
	vs_top=(vs_base=base+1)+3;
	super_funcall_no_event((V133));
	return;
	}
}
/*	function definition for END-WAITING	*/

static L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{object V134;
	V134=(base[0]);
	vs_top=sup;
TTL:;
	base[1]= (V134);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T486;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T486:;
	base[1]= VV[48];
	base[2]= VV[49];
	base[3]= VV[51];
	vs_top=(vs_base=base+1)+3;
	super_funcall_no_event((V134));
	return;
	}
}
/*	function definition for INFO-SUBFILE	*/

static L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{register object V135;
	V135=(base[0]);
	vs_top=sup;
TTL:;
	{object V136;
	register object V137;
	register object V138;
	V136= CMPcdr(CMPcadr((VV[20]->s.s_dbind)));
	V137= Cnil;
	V138= Cnil;
	if((V136)==Cnil){
	goto T493;}
	if(number_compare((V135),small_fixnum(0))>=0){
	goto T494;}
	goto T493;
T494:;
	{register object V139;
	register object V140;
	V139= (V136);
	V140= CMPcar((V139));
T499:;
	if(!(((V139))==Cnil)){
	goto T500;}
	goto T493;
T500:;
	if(!(number_compare(CMPcar((V140)),(V135))>0)){
	goto T504;}
	V138= CMPcar((V140));
	goto T493;
T504:;
	V137= (V140);
	V139= CMPcdr((V139));
	V140= CMPcar((V139));
	goto T499;}
T493:;
	if((V137)!=Cnil){
	base[1]= (V137);
	goto T516;}
	base[1]= make_cons(small_fixnum(0),CMPcar((VV[20]->s.s_dbind)));
T516:;
	base[2]= (V138);
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	function definition for INFO-NODE-FROM-POSITION	*/

static L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	{object V141;
	V141=(base[0]);
	vs_top=sup;
TTL:;
	{register object V142;
	V142= small_fixnum(0);
	{object V143;
	register object V144;
	register object V145;
	base[4]= (V141);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V143= vs_base[0];
	base[4]= CMPcdr((V143));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V144= vs_base[0];
	V145= number_minus((V141),CMPcar((V143)));
T526:;
	{int V146= fix((VFUN_NARGS=4,(*(LnkLI93))(VV[52],(V144),(V142),(V145))));
	if(!((/* INLINE-ARGS */V146)>=(0))){
	goto T529;}}
	goto T528;
T529:;
	goto T527;
T528:;
	V142= CMPmake_fixnum((*(LnkLI94))(0));
	goto T526;
T527:;
	goto T524;
	goto T524;
T524:;
	V142= number_minus((V142),small_fixnum(1));
	{int V147= fix((VFUN_NARGS=3,(*(LnkLI93))(VV[53],(V144),(V142))));
	if(!((/* INLINE-ARGS */V147)>=(0))){
	goto T537;}}
	{object V148;
	object V149;
	object V150;
	object V151;
	object V152;
	V148= CMPmake_fixnum((*(LnkLI95))(0));
	V149= CMPmake_fixnum((*(LnkLI94))(0));
	base[9]= (V144);
	base[10]= small_fixnum(1);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk97)();
	vs_top=sup;
	V150= vs_base[0];
	{int V153= fix((VFUN_NARGS=3,(*(LnkLI93))(VV[54],(V144),(V149))));
	if(!((/* INLINE-ARGS */V153)>=(0))){
	goto T546;}}
	V151= CMPmake_fixnum((*(LnkLI95))(0));
	goto T544;
T546:;
	V151= CMPmake_fixnum(length((V144)));
T544:;
	V152= listA(7,(V144),(V149),(V151),(V148),(V150),(V143),(VV[20]->s.s_dbind));
	base[9]= (V152);
	vs_top=(vs_base=base+9)+1;
	return;}
T537:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}}
	}
}
/*	function definition for SHOW-INFO	*/

static L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	bds_check;
	{register object V154;
	register object V155;
	object V156;
	V154=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T549;}
	V155=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T550;}
	V156=(base[2]);
	vs_top=sup;
	goto T551;
T549:;
	V155= Cnil;
T550:;
	V156= (VV[43]->s.s_dbind);
T551:;
	{register object V157;
	register object V158;
	register int V159;
	int V160;
	V157= Cnil;
	bds_bind(VV[9],Cnil);
	V158= Cnil;
	V159= 0;
	V160= -1;
	if(!(type_of((V154))==t_cons)){
	goto T559;}
	if(!(type_of(CMPcdr((V154)))==t_cons)){
	goto T559;}
	V158= CMPcadr((V154));
	V154= CMPcar((V154));
T559:;
	if(!(type_of((V154))==t_cons)){
	goto T558;}
	V155= CMPcar((V154));
	V154= CMPcdr((V154));
T558:;
	if(!(type_of((V154))==t_string)){
	goto T573;}
	goto T572;
T573:;
	base[4]= VV[55];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk98)();
	vs_top=sup;
T572:;
	base[4]= (VV[56]->s.s_dbind);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk113)();
	vs_top=sup;
	{int V161= fix((VFUN_NARGS=2,(*(LnkLI93))(VV[57],(V154))));
	if(!((/* INLINE-ARGS */V161)>=(0))){
	goto T578;}}
	base[4]= (V154);
	base[5]= small_fixnum(1);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk97)();
	vs_top=sup;
	V158= vs_base[0];
	base[4]= (V154);
	base[5]= small_fixnum(2);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk97)();
	vs_top=sup;
	V154= vs_base[0];
	if(!(equal((V154),VV[58]))){
	goto T578;}
	V154= VV[59];
T578:;
	if(((V158))==Cnil){
	goto T592;}
	base[4]= (V158);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk114)();
	vs_top=sup;
T592:;
	{object V162;
	base[4]= (V154);
	base[5]= CMPcar(CMPcadr((VV[20]->s.s_dbind)));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk115)();
	vs_top=sup;
	V162= vs_base[0];
	if(((V162))!=Cnil){
	goto T599;}
	base[4]= Ct;
	base[5]= VV[60];
	base[6]= (V154);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	return;
T599:;
	base[4]= (V162);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V157= vs_base[0];
	{register object V163;
	object V164;
	base[6]= CMPcdr((V157));
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V163= vs_base[0];
	V164= number_minus((V162),CMPcar((V157)));
	base[6]= VV[61];
	base[8]= (V154);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk100)();
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= VV[62];
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk101)();
	vs_top=sup;
	V165= vs_base[0];
	{int V166= fix((VFUN_NARGS=3,(*(LnkLI93))(V165,(V163),(V164))));
	if(!((/* INLINE-ARGS */V166)>=(0))){
	goto T613;}}
	{object V167;
	register object V168;
	register object V169;
	object V170;
	V167= CMPmake_fixnum((*(LnkLI95))(0));
	V168= CMPmake_fixnum((*(LnkLI94))(0));
	{int V171= fix((VFUN_NARGS=3,(*(LnkLI93))(VV[63],(V163),(V168))));
	if(!((/* INLINE-ARGS */V171)>=(0))){
	goto T624;}}
	V169= CMPmake_fixnum((*(LnkLI95))(0));
	goto T622;
T624:;
	V169= CMPmake_fixnum(length((V163)));
T622:;
	V170= listA(7,(V163),(V168),(V169),(V167),(V154),(V157),(VV[20]->s.s_dbind));
	if(((V155))==Cnil){
	goto T627;}
	base[10]= (V155);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk100)();
	vs_top=sup;
	V155= vs_base[0];
	bds_bind(VV[10],Cnil);
	base[11]= VV[64];
	base[12]= (V155);
	base[13]= VV[65];
	vs_top=(vs_base=base+11)+3;
	(void) (*Lnk101)();
	vs_top=sup;
	V172= vs_base[0];
	V160= fix((VFUN_NARGS=4,(*(LnkLI93))(V172,(V163),(V168),(V169))));
	if((V160)>=(0)){
	goto T633;}
	{int V173= fix((VFUN_NARGS=4,(*(LnkLI93))((V155),(V163),(V168),(V169))));
	if(!((/* INLINE-ARGS */V173)>=(0))){
	bds_unwind1;
	goto T627;}}
T633:;
	V174 = CMPmake_fixnum((*(LnkLI95))(0));
	V159= fix(number_minus(V174,(V168)));
	bds_unwind1;
T627:;
	if(((V156))==Cnil){
	goto T644;}
	{object V175;
	base[10]= (V170);
	base[11]= CMPmake_fixnum(V159);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk116)();
	vs_top=sup;
	V175= vs_base[0];
	base[10]= (VV[56]->s.s_dbind);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk117)();
	vs_top=sup;
	base[10]= (V175);
	vs_top=(vs_base=base+10)+1;
	bds_unwind1;
	return;}
T644:;
	{object V176;
	if(!((V160)>=(0))){
	goto T653;}
	base[10]= (V168);
	base[11]= small_fixnum(1);
	base[12]= CMPmake_fixnum(V159);
	vs_top=(vs_base=base+10)+3;
	Lplus();
	vs_top=sup;
	V177= vs_base[0];
	{int V178= fix((VFUN_NARGS=4,(*(LnkLI93))(VV[66],(V163),V177,(V169))));
	if(!((/* INLINE-ARGS */V178)>=(0))){
	goto T653;}}
	V176= CMPmake_fixnum((*(LnkLI95))(0));
	goto T651;
T653:;
	V176= (V169);
T651:;
	base[10]= (V163);
	V179 = CMPmake_fixnum(V159);
	base[11]= number_plus(V179,(V168));
	base[12]= (V176);
	vs_top=(vs_base=base+10)+3;
	Lsubseq();
	bds_unwind1;
	return;}}
T613:;
	base[6]= VV[67];
	base[7]= (V154);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk98)();
	vs_top=sup;
	base[6]= (VV[56]->s.s_dbind);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk117)();
	bds_unwind1;
	return;}}}
	}
}
/*	function definition for INFO-AUX	*/

static L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{object V180;
	object V181;
	V180=(base[0]);
	V181=(base[1]);
	vs_top=sup;
TTL:;
	{register object V182;
	register object V183;
	V182= Cnil;
	V183= (V181);
	{object V184;
	register object V185;
	register object V186;
	register object V187;
	V184= Cnil;
	V185= Cnil;
	V186= Cnil;
	V187= Cnil;
T669:;
	if(((V183))==Cnil){
	goto T672;}
	goto T671;
T672:;
	goto T670;
T671:;
	{object V188;
	V188= CMPcar((V183));
	V182= (V188);}
	base[2]= (V182);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk114)();
	vs_top=sup;
	base[4]= (V180);
	base[5]= VV[68];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk118)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V182);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk119)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	V186= vs_base[0];
	if(((V185))==Cnil){
	goto T688;}
	{register object V190;
	V190= (V186);
	(V185)->c.c_cdr = (V190);
	if(((V190))!=Cnil){
	goto T690;}}
	goto T686;
T690:;
	base[2]= CMPcdr((V185));
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V185= vs_base[0];
	goto T686;
T688:;
	V184= (V186);
	base[2]= (V184);
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V185= vs_base[0];
T686:;
	base[4]= (V180);
	base[5]= VV[42];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk118)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V182);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk119)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	V187= vs_base[0];
	if(((V185))==Cnil){
	goto T708;}
	{register object V192;
	V192= (V187);
	(V185)->c.c_cdr = (V192);
	if(((V192))!=Cnil){
	goto T710;}}
	goto T706;
T710:;
	base[2]= CMPcdr((V185));
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V185= vs_base[0];
	goto T706;
T708:;
	V184= (V187);
	base[2]= (V184);
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V185= vs_base[0];
T706:;
	V183= CMPcdr((V183));
	goto T669;
T670:;
	base[2]= (V184);
	vs_top=(vs_base=base+2)+1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}}
	}
}
/*	function definition for INFO-SEARCH	*/

static L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	{object V193;
	register object V194;
	register object V195;
	V193=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T723;}
	V194=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T724;}
	V195=(base[2]);
	vs_top=sup;
	goto T725;
T723:;
	V194= Cnil;
T724:;
	V195= Cnil;
T725:;
	{register object V196;
	V196= Cnil;
	if((V194)!=Cnil){
	goto T729;}
	V194= small_fixnum(0);
T729:;
T733:;
	if((V194)!=Cnil){
	goto T735;}
	goto T734;
T735:;
	{register object V197;
	register object V198;
	base[3]= (V194);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk111)();
	if(vs_base>=vs_top){vs_top=sup;goto T739;}
	V197= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T740;}
	V198= vs_base[0];
	vs_top=sup;
	goto T741;
T739:;
	V197= Cnil;
T740:;
	V198= Cnil;
T741:;
	V196= (V198);
	if((V195)==Cnil){
	goto T744;}
	if((V196)==Cnil){
	goto T744;}
	if(number_compare((V195),(V196))<0){
	goto T745;}
	goto T744;
T745:;
	V196= (V195);
T744:;
	{register object V199;
	register object V200;
	object V201;
	object V202;
	base[7]= CMPcdr((V197));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V199= vs_base[0];
	V200= CMPcar((V197));
	V201= number_minus((V194),(V200));
	V202= CMPmake_fixnum(length((V199)));
	if(((V196))==Cnil){
	goto T758;}
	V203= number_minus((V196),(V200));
	goto T756;
T758:;
	V203= (V202);
T756:;
	{int V204= fix((VFUN_NARGS=4,(*(LnkLI93))((V193),(V199),(V201),V203)));
	if(!((/* INLINE-ARGS */V204)>=(0))){
	goto T748;}}
	V205 = CMPmake_fixnum((*(LnkLI95))(0));
	base[7]= number_plus((V200),V205);
	vs_top=(vs_base=base+7)+1;
	return;}
T748:;
	V194= (V198);}
	goto T733;
T734:;
	goto T731;
	goto T731;
T731:;
	base[3]= small_fixnum(-1);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for IDESCRIBE	*/

static L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	{register object V206;
	V206=(base[0]);
	vs_top=sup;
TTL:;
	{object V207;
	base[2]= (V206);
	base[3]= (VV[69]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk120)();
	vs_top=sup;
	V207= vs_base[0];
	{register object V208;
	register object V209;
	V208= (V207);
	V209= CMPcar((V208));
T768:;
	if(!(((V208))==Cnil)){
	goto T769;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
T769:;
	if(!(type_of(CMPcar((V209)))==t_cons)){
	goto T777;}
	if(!(equalp(CMPcaar((V209)),(V206)))){
	goto T773;}
	goto T775;
T777:;
	if(!(equalp(CMPcar((V209)),(V206)))){
	goto T773;}
T775:;
	base[3]= Ct;
	base[4]= VV[70];
	base[5]= (V209);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[3]= (V209);
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk103)();
	vs_top=sup;
	V210= vs_base[0];
	(void)(princ(V210,Cnil));
T773:;
	V208= CMPcdr((V208));
	V209= CMPcar((V208));
	goto T768;}}
	}
}
/*	function definition for INFO	*/

static L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	bds_check;
	{object V211;
	object V212;
	V211=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T792;}
	V212=(base[1]);
	vs_top=sup;
	goto T793;
T792:;
	V212= (VV[69]->s.s_dbind);
T793:;
	{object V213;
	register object V214;
	object V215;
	V213= Cnil;
	bds_bind(VV[20],Cnil);
	V214= Cnil;
	V215= Cnil;
	{object V216;
	base[3]= (V211);
	base[4]= (V212);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk120)();
	vs_top=sup;
	V216= vs_base[0];
	if(((VV[43]->s.s_dbind))==Cnil){
	goto T802;}
	base[3]= (V216);
	base[4]= (V212);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk121)();
	bds_unwind1;
	return;
T802:;
	if(((V216))==Cnil){
	goto T807;}
	base[3]= CMPmake_fixnum(length((V216)));
	base[3]=MMcons(base[3],Cnil);
	{register int V217;
	V217= 0;
	{register object V218;
	register object V219;
	V218= Cnil;
	V219= (V216);
	{object V220;
	V220= Cnil;
T813:;
	if(((V219))==Cnil){
	goto T816;}
	goto T815;
T816:;
	goto T814;
T815:;
	{object V221;
	V221= CMPcar((V219));
	V218= (V221);}
	V214= Cnil;
	V215= Cnil;
	if(!(type_of((V218))==t_cons)){
	goto T826;}
	if(!(type_of(CMPcdr((V218)))==t_cons)){
	goto T826;}
	V214= CMPcadr((V218));
	V218= CMPcar((V218));
T826:;
	if(!(type_of((V218))==t_cons)){
	goto T825;}
	V215= CMPcar((V218));
	V218= CMPcdr((V218));
T825:;
	base[4]= Ct;
	base[5]= VV[71];
	base[6]= CMPmake_fixnum(V217);
	base[7]= (V215);
	if(!(((V214))==((V220)))){
	goto T846;}
	base[8]= Cnil;
	goto T844;
T846:;
	V220= (V214);
	base[8]= (V220);
T844:;
	base[9]= (V218);
	vs_top=(vs_base=base+4)+6;
	Lformat();
	vs_top=sup;
	if(!((V217)<(2147483646))){
	goto T851;}
	goto T850;
T851:;
	vs_base=vs_top;
	(void) (*Lnk122)();
	vs_top=sup;
T850:;
	V217= (V217)+(1);
	V219= CMPcdr((V219));
	goto T813;
T814:;
	goto T810;
	goto T810;}}}
T810:;
	if(!((length((V216)))>(1))){
	goto T860;}
	base[4]= Ct;
	base[5]= VV[73];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	goto T858;
T860:;
	princ_char(10,Cnil);
T858:;
	{object V222;
	object V223;
	register object V224;
	if(!((length((V216)))>(1))){
	goto T866;}
	vs_base=vs_top;
	Lread_line();
	vs_top=sup;
	V222= vs_base[0];
	goto T864;
T866:;
	V222= VV[74];
T864:;
	V223= small_fixnum(0);
	V224= Cnil;
T870:;
	if(!(equal((V222),VV[75]))){
	goto T873;}
	goto T872;
T873:;
	goto T871;
T872:;
	vs_base=vs_top;
	Lread_line();
	vs_top=sup;
	V222= vs_base[0];
	goto T870;
T871:;
	goto T868;
	goto T868;
T868:;
T880:;{object V225;
	base[4]= (V222);
	base[5]= Cnil;
	base[6]= Cnil;
	base[7]= VV[76];
	base[8]= (V223);
	vs_top=(vs_base=base+4)+5;
	(void) (*Lnk123)();
	if(vs_base<vs_top){
	V224= vs_base[0];
	vs_base++;
	}else{
	V224= Cnil;}
	if(vs_base<vs_top){
	V223= vs_base[0];
	}else{
	V223= Cnil;}
	vs_top=sup;
	V225= (V224);
	if(V225==Cnil)goto T883;
	goto T882;
T883:;}
	goto T881;
T882:;
	if(!(type_of((V224))==t_fixnum||
type_of((V224))==t_bignum||
type_of((V224))==t_ratio||
type_of((V224))==t_shortfloat||
type_of((V224))==t_longfloat||
type_of((V224))==t_complex)){
	goto T893;}
	V213= make_cons((V224),(V213));
	goto T891;
T893:;
	V213= (V224);
	goto T878;
T891:;
	goto T880;
T881:;
	goto T878;
	goto T878;
T878:;
	if(!(type_of((V213))==t_cons)){
	goto T901;}
	V213= nreverse((V213));
	goto T899;
T901:;
	if(!(type_of((V213))==t_symbol)){
	goto T899;}
	V226= symbol_name((V213));
	if(equal(/* INLINE-ARGS */V226,VV[77])){
	goto T907;}
	V213= Cnil;
	goto T906;
T907:;
	{register int V227;
	int V228;
	V227= 0;
	{object V229;
	V229= CMPmake_fixnum(length((V216)));{object V230;
	V230= (type_of((V229))==t_fixnum?Ct:Cnil);
	if(V230==Cnil)goto T913;
	goto T912;
T913:;}
	vs_base=vs_top;
	(void) (*Lnk122)();
	vs_top=sup;
T912:;
	V228= fix((V229));}
	{object V231;
	register object V232;
	V231= Cnil;
	V232= Cnil;
T916:;
	if((V227)>=(V228)){
	goto T919;}
	goto T918;
T919:;
	goto T917;
T918:;
	if(((V232))==Cnil){
	goto T923;}
	{object V233;
	object V234;
	V233= (V232);
	V235 = CMPmake_fixnum(V227);
	V232= make_cons(V235,Cnil);
	V234= (V232);
	((V233))->c.c_cdr = (V234);
	goto T921;}
T923:;
	V236 = CMPmake_fixnum(V227);
	V232= make_cons(V236,Cnil);
	V231= (V232);
T921:;
	V227= (V227)+(1);
	goto T916;
T917:;
	V213= (V231);
	goto T906;
	V213= Cnil;
	goto T906;
	V213= Cnil;
	goto T906;}}
T906:;
T899:;
	if(((V213))==Cnil){
	goto T935;}
	base[4]= 
	make_cclosure_new(LC31,Cnil,base[3],Cdata);
	base[5]= (V213);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk124)();
	vs_top=sup;
	V213= vs_base[0];
	base[4]= Ct;
	base[5]= VV[78];
	base[6]= CMPcar((VV[20]->s.s_dbind));
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
T935:;
	{object V237;
	register object V238;
	V237= Cnil;
	V238= (V213);
T946:;
	if(((V238))==Cnil){
	goto T949;}
	goto T948;
T949:;
	goto T947;
T948:;
	{object V239;
	V239= CMPcar((V238));
	V237= (V239);}
	base[4]= nth(fix((V237)),(V216));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk103)();
	vs_top=sup;
	V240= vs_base[0];
	(void)(princ(V240,Cnil));
	V238= CMPcdr((V238));
	goto T946;
T947:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	return;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	return;}}
T807:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;}}
	}
}
/*	function definition for DEFAULT-INFO-HOTLIST	*/

static L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	vs_top=sup;
TTL:;
	base[1]= VV[79];
	vs_base=vs_top;
	(void) (*Lnk125)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	Lmerge_pathnames();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lnamestring();
	return;
}
/*	function definition for ADD-TO-HOTLIST	*/

static L29()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM29; VC29
	vs_check;
	vs_top=sup;
TTL:;
	if(!(type_of(base[0])==t_symbol)){
	goto T963;}
	{object V241 =(base[0])->s.s_plist;
	 object ind= VV[68];
	while(V241!=Cnil){
	if(V241->c.c_car==ind){
	base[0]= (V241->c.c_cdr->c.c_car);
	goto T966;
	}else V241=V241->c.c_cdr->c.c_cdr;}
	base[0]= Cnil;}
T966:;
T963:;
	if((base[0])==Cnil){
	goto T968;}
	vs_base=vs_top;
	(void) (*Lnk126)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= VV[80];
	base[4]= VV[81];
	base[5]= VV[82];
	base[6]= VV[83];
	base[7]= VV[84];
	base[8]= VV[85];
	vs_top=(vs_base=base+2)+7;
	(void) (*Lnk90)();
	vs_top=sup;
	base[1]= vs_base[0];
	{object tag;frame_ptr fr;object p;bool active;
	frs_push(FRS_PROTECT,Cnil);
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	base[3]= base[1];
	vs_top=(vs_base=base+3)+1;
	Lfile_position();
	vs_top=sup;
	V242= vs_base[0];
	if(!(number_compare(V242,small_fixnum(10))<0)){
	goto T979;}
	(void)(princ(VV[86],base[1]));
T979:;
	base[3]= base[1];
	base[4]= VV[87];
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
	goto T988;}
	base[3]= base[1];
	vs_top=(vs_base=base+3)+1;
	Lclose();
	vs_top=sup;
T988:;
	vs_base=vs_top=base+3;
	for(p= base[2];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	return;}}
T968:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
}
/*	function definition for LIST-MATCHES	*/

static L30()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	{object V243;
	object V244;
	V243=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V244=(base[1]);
	vs_top=sup;
	{register object V245;
	register object V246;
	V245= Cnil;
	V246= (V244);
	{object V247;
	register object V248;
	register object V249;
	V247= Cnil;
	V248= Cnil;
	V249= Cnil;
T993:;
	if(((V246))==Cnil){
	goto T996;}
	goto T995;
T996:;
	goto T994;
T995:;
	{register object V250;
	V250= CMPcar((V246));
	V245= (V250);}
	{int V251= (*(LnkLI95))(fix((V245)));
	if((/* INLINE-ARGS */V251)>=(0)){
	goto T1003;}}
	V249= Cnil;
	goto T1002;
T1003:;
	base[2]= (V243);
	base[3]= (V245);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk97)();
	vs_top=sup;
	V249= vs_base[0];
T1002:;
	if(((V248))==Cnil){
	goto T1009;}
	{register object V252;
	register object V253;
	V252= (V248);
	V248= make_cons((V249),Cnil);
	V253= (V248);
	((V252))->c.c_cdr = (V253);
	goto T1007;}
T1009:;
	V248= make_cons((V249),Cnil);
	V247= (V248);
T1007:;
	V246= CMPcdr((V246));
	goto T993;
T994:;
	base[2]= (V247);
	vs_top=(vs_base=base+2)+1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}}
	}
}
/*	local function CLOSURE	*/

static LC31(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	{object V254;
	V254=(base[0]);
	vs_top=sup;
	if(type_of((V254))==t_fixnum||type_of((V254))==t_bignum){
	goto T1021;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T1021:;
	base[1]= (number_compare((V254),(base0[0]->c.c_car))>=0?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static LnkT126(){ call_or_link(VV[126],&Lnk126);} /* DEFAULT-INFO-HOTLIST */
static LnkT125(){ call_or_link(VV[125],&Lnk125);} /* USER-HOMEDIR-PATHNAME */
static LnkT124(){ call_or_link(VV[124],&Lnk124);} /* REMOVE-IF */
static LnkT123(){ call_or_link(VV[123],&Lnk123);} /* READ-FROM-STRING */
static LnkT122(){ call_or_link(VV[122],&Lnk122);} /* TYPE-ERROR */
static LnkT121(){ call_or_link(VV[121],&Lnk121);} /* OFFER-CHOICES */
static LnkT120(){ call_or_link(VV[120],&Lnk120);} /* INFO-AUX */
static LnkT119(){ call_or_link(VV[119],&Lnk119);} /* ADD-FILE */
static LnkT118(){ call_or_link(VV[118],&Lnk118);} /* GET-INFO-CHOICES */
static LnkT117(){ call_or_link(VV[117],&Lnk117);} /* END-WAITING */
static LnkT116(){ call_or_link(VV[116],&Lnk116);} /* PRINT-NODE */
static LnkT115(){ call_or_link(VV[115],&Lnk115);} /* GET-NODE-INDEX */
static LnkT114(){ call_or_link(VV[114],&Lnk114);} /* SETUP-INFO */
static LnkT113(){ call_or_link(VV[113],&Lnk113);} /* WAITING */
static LnkT112(){ call_or_link(VV[112],&Lnk112);} /* INFO-GET-FILE */
static LnkT111(){ call_or_link(VV[111],&Lnk111);} /* INFO-SUBFILE */
static LnkT110(){ call_or_link(VV[110],&Lnk110);} /* WINFO */
static LnkT109(){ call_or_link(VV[109],&Lnk109);} /* TKERROR */
static LnkT108(){ call_or_link(VV[108],&Lnk108);} /* NODES-FROM-INDEX */
static LnkT107(){ call_or_link(VV[107],&Lnk107);} /* INFO-GET-TAGS */
static LnkT106(){ call_or_link(VV[106],&Lnk106);} /* FILE-SEARCH */
static LnkT105(){ call_or_link(VV[105],&Lnk105);} /* FIX-LOAD-PATH */
static LnkT104(){ call_or_link(VV[104],&Lnk104);} /* GET-INDEX-NODE */
static LnkT103(){ call_or_link(VV[103],&Lnk103);} /* SHOW-INFO */
static LnkT102(){ call_or_link(VV[102],&Lnk102);} /* GET-NODES */
static LnkT101(){ call_or_link(VV[101],&Lnk101);} /* STRING-CONCATENATE */
static LnkT100(){ call_or_link(VV[100],&Lnk100);} /* RE-QUOTE-STRING */
static LnkT99(){ call_or_link(VV[99],&Lnk99);} /* POSITION */
static LnkT98(){ call_or_link(VV[98],&Lnk98);} /* INFO-ERROR */
static LnkT97(){ call_or_link(VV[97],&Lnk97);} /* GET-MATCH */
static LnkT96(){ call_or_link(VV[96],&Lnk96);} /* ATOI */
static int  LnkTLI95(va_alist)va_dcl{va_list ap;va_start(ap);return(int )call_proc(VV[95],&LnkLI95,4353,ap);} /* MATCH-BEGINNING */
static int  LnkTLI94(va_alist)va_dcl{va_list ap;va_start(ap);return(int )call_proc(VV[94],&LnkLI94,4353,ap);} /* MATCH-END */
static object  LnkTLI93(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[93],&LnkLI93,ap);} /* STRING-MATCH */
static LnkT92(){ call_or_link(VV[92],&Lnk92);} /* FILE-TO-STRING */
static LnkT91(){ call_or_link(VV[91],&Lnk91);} /* FREAD */
static LnkT90(){ call_or_link(VV[90],&Lnk90);} /* OPEN */
static LnkT89(){ call_or_link(VV[89],&Lnk89);} /* VECTOR-PUSH-EXTEND */
static LnkT88(){ call_or_link(VV[88],&Lnk88);} /* MAKE-ARRAY */
