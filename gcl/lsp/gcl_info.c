
#include "cmpinclude.h"
#include "gcl_info.h"
void init_gcl_info(){do_init(VV);}
/*	function definition for SHARP-U-READER	*/

static void L1()
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
	goto TTL;
TTL:;
	{object V4;
	base[3]= small_fixnum(10);
	base[4]= VV[0];
	base[5]= VV[1];
	base[6]= VV[2];
	base[7]= small_fixnum(0);
	vs_top=(vs_base=base+3)+5;
	(void) (*Lnk89)();
	vs_top=sup;
	V4= vs_base[0];{object V5;
	{object V6;
	{long V7;
	V7= 0;
	if(!((type_of((V1))==t_stream? (((V1))->sm.sm_fp)!=0: 0 ))){
	goto T15;}
	V7= (long)getc(((V1))->sm.sm_fp);
	if(!((V7)==(-1))){
	goto T20;}
	if(!((feof(((V1))->sm.sm_fp)))){
	goto T20;}
	V6= Cnil;
	goto T12;
	goto T20;
T20:;
	V6= code_char((V7));
	goto T12;
	goto T15;
T15:;
	V6= read_char1((V1),Cnil);}
	goto T12;
T12:;
	if(type_of((V6))==t_character){
	goto T24;}
	V5= Cnil;
	goto T11;
	goto T24;
T24:;
	V5= (((long)(34))==((long)(char_code((V6))))?Ct:Cnil);}
	goto T11;
T11:;
	if(V5==Cnil)goto T10;
	goto T9;
	goto T10;
T10:;}
	base[3]= VV[4];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T9;
T9:;
	goto T29;
T29:;
	{register object V8;
	{register long V9;
	V9= 0;
	if(!((type_of((V1))==t_stream? (((V1))->sm.sm_fp)!=0: 0 ))){
	goto T34;}
	V9= (long)getc(((V1))->sm.sm_fp);
	if(!((V9)==(-1))){
	goto T39;}
	if(!((feof(((V1))->sm.sm_fp)))){
	goto T39;}
	V8= Cnil;
	goto T31;
	goto T39;
T39:;
	V8= code_char((V9));
	goto T31;
	goto T34;
T34:;
	V8= read_char1((V1),Cnil);}
	goto T31;
T31:;
	if(type_of(V8)==t_character){
	goto T47;}
	goto T45;
	goto T47;
T47:;
	if(!(((long)(34))==((long)(char_code(V8))))){
	goto T45;}
	goto T27;
	goto T45;
T45:;
	if(type_of(V8)==t_character){
	goto T51;}
	goto T43;
	goto T51;
T51:;
	if(!(((long)(92))==((long)(char_code(V8))))){
	goto T43;}
	{register long V12;
	V12= 0;
	if(!((type_of((V1))==t_stream? (((V1))->sm.sm_fp)!=0: 0 ))){
	goto T57;}
	V12= (long)getc(((V1))->sm.sm_fp);
	if(!((V12)==(-1))){
	goto T62;}
	if(!((feof(((V1))->sm.sm_fp)))){
	goto T62;}
	V8= Cnil;
	goto T54;
	goto T62;
T62:;
	V8= code_char((V12));
	goto T54;
	goto T57;
T57:;
	V8= read_char1((V1),Cnil);}
	goto T54;
T54:;{object V13;
	{register object x= (V8),V15= VV[6];
	while(V15!=Cnil)
	if(eql(x,V15->c.c_car->c.c_car) &&V15->c.c_car != Cnil){
	V14= (V15->c.c_car);
	goto T69;
	}else V15=V15->c.c_cdr;
	V14= Cnil;}
	goto T69;
T69:;
	V13= CMPcdr(V14);
	if(V13==Cnil)goto T67;
	V8= V13;
	goto T66;
	goto T67;
T67:;}
	goto T66;
T66:;
	goto T43;
T43:;
	{register object V17;
	register long V18;
	long V19;
	V17= (V4);
	V18= (long)(((V17))->st.st_fillp);
	V19= (long)(((V17))->st.st_dim);
	if(!((V18)<(V19))){
	goto T74;}
	(void)((((V17))->st.st_fillp)=((long)(1)+(V18)));
	V20 = CMPmake_fixnum(V18);
	(void)(aset1((V17),fix(V20),V8));
	goto T30;
	goto T74;
T74:;
	base[3]= V8;
	base[4]= (V17);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk90)();
	vs_top=sup;}}
	goto T30;
T30:;
	goto T29;
	goto T27;
T27:;
	base[3]= (V4);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for FILE-TO-STRING	*/

static void L2()
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
	goto T81;
T81:;
	base[1]= small_fixnum(0);
	goto T82;
T82:;
	bds_bind(VV[7],Ct);
	base[3]= small_fixnum(0);
	base[5]= (V21);
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
	base[3]= vs_base[0];{VOL object V22;
	if(number_compare(small_fixnum(0),base[1])<=0){
	goto T93;}
	V22= Cnil;
	goto T92;
	goto T93;
T93:;
	V22= (number_compare(base[1],base[3])<=0?Ct:Cnil);
	goto T92;
T92:;
	if(V22==Cnil)goto T91;
	goto T90;
	goto T91;
T91:;}
	base[6]= VV[8];
	base[7]= base[1];
	vs_top=(vs_base=base+6)+2;
	Lerror();
	vs_top=sup;
	goto T90;
T90:;
	{object V23;
	base[6]= number_minus(base[3],base[1]);
	base[7]= VV[0];
	base[8]= VV[1];
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk89)();
	vs_top=sup;
	V23= vs_base[0];
	if(!(number_compare(base[1],small_fixnum(0))>0)){
	goto T101;}
	base[6]= base[4];
	base[7]= base[1];
	vs_top=(vs_base=base+6)+2;
	Lfile_position();
	vs_top=sup;
	goto T101;
T101:;
	base[6]= (V23);
	base[7]= small_fixnum(0);
	base[8]= CMPmake_fixnum((long)length((V23)));
	base[9]= base[4];
	vs_top=(vs_base=base+6)+4;
	(void) (*Lnk92)();
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
	goto T111;
T111:;
	vs_base=vs_top=base+6;
	for(p= base[5];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	bds_unwind1;
	return;}}
	}
}
/*	function definition for ATOI	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{register object V24;
	register long V25;
	V24=(base[0]);
	V25=fix(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register long V26;
	register long V27;
	register long V28;
	V26= 0;
	V27= 0;
	V28= (long)((V24))->v.v_fillp;
	goto T120;
T120:;
	if(!((V25)<(V28))){
	goto T123;}
	goto T122;
	goto T123;
T123:;
	goto T121;
	goto T122;
T122:;
	V27= (long)(((V24))->ust.ust_self[V25]);
	V25= (long)(V25)+(1);
	V27= (long)(V27)-(48);
	if(!((V27)>=(0))){
	goto T133;}
	if(!((V27)<(10))){
	goto T133;}
	V29 = CMPmake_fixnum(V27);
	V30 = CMPmake_fixnum(V26);
	V31= number_times(small_fixnum(10),V30);
	V26= fix(number_plus(V29,/* INLINE-ARGS */V31));
	goto T131;
	goto T133;
T133:;
	goto T118;
	goto T131;
T131:;
	goto T120;
	goto T121;
T121:;
	goto T118;
	goto T118;
	goto T118;
T118:;
	base[2]= CMPmake_fixnum(V26);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for INFO-GET-TAGS	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	bds_check;
	{object V32;
	V32=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register long V33;
	object V34;
	register object V35;
	V33= 0;
	bds_bind(VV[9],Cnil);
	V34= Cnil;
	V35= Cnil;
	bds_bind(VV[10],Ct);
	{register object V36;
	register long V37;
	base[3]= (V32);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk93)();
	vs_top=sup;
	V36= vs_base[0];
	V37= 0;
	{long V38= fix((VFUN_NARGS=3,(*(LnkLI94))(VV[11],(V36),small_fixnum(0))));
	if(!((/* INLINE-ARGS */V38)>=(0))){
	goto T145;}}
	V37= (long)(*(LnkLI95))(0);
	V39 = CMPmake_fixnum(V37);
	V33= fix((VFUN_NARGS=3,(*(LnkLI94))(VV[12],(V36),V39)));
	goto T153;
T153:;
	V40 = CMPmake_fixnum(V37);
	V41 = CMPmake_fixnum(V33);
	{long V42= fix((VFUN_NARGS=4,(*(LnkLI94))(VV[13],(V36),V40,V41)));
	if(!((/* INLINE-ARGS */V42)>=(0))){
	goto T156;}}
	goto T155;
	goto T156;
T156:;
	goto T154;
	goto T155;
T155:;
	V37= (long)(*(LnkLI95))(0);
	base[3]= (V36);
	base[4]= CMPmake_fixnum((long)(*(LnkLI96))(2));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk97)();
	vs_top=sup;
	V43= vs_base[0];
	base[3]= (V36);
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk98)();
	vs_top=sup;
	V44= vs_base[0];
	V45= make_cons(V43,V44);
	V35= make_cons(/* INLINE-ARGS */V45,(V35));
	goto T153;
	goto T154;
T154:;
	goto T145;
	goto T145;
	goto T145;
T145:;
	V46 = CMPmake_fixnum(V37);
	{long V47= fix((VFUN_NARGS=3,(*(LnkLI94))(VV[14],(V36),V46)));
	if(!((/* INLINE-ARGS */V47)>=(0))){
	goto T169;}}
	V37= (long)(*(LnkLI95))(0);
	V48 = CMPmake_fixnum(V37);
	{long V49= fix((VFUN_NARGS=3,(*(LnkLI94))(VV[15],(V36),V48)));
	if(!((/* INLINE-ARGS */V49)>=(0))){
	goto T169;}}
	base[3]= (V36);
	base[4]= CMPmake_fixnum(V37);
	base[5]= CMPmake_fixnum((long)(*(LnkLI95))(0));
	vs_top=(vs_base=base+3)+3;
	Lsubseq();
	vs_top=sup;
	V34= vs_base[0];
	goto T169;
T169:;
	if(((V35))==Cnil){
	goto T180;}
	if((V34)!=Cnil){
	goto T180;}
	base[3]= VV[16];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk99)();
	vs_top=sup;
	goto T180;
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

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	{object V51;
	V51=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register long V52;
	long V53;
	object V54;
	long V55;
	V52= 0;
	V53= (long)((V51))->v.v_fillp;
	V54= Cnil;
	V55= 0;
	{register object V56;
	V56= Cnil;
	goto T190;
T190:;
	goto T193;
T193:;
	if(!((V52)<(V53))){
	goto T196;}
	goto T195;
	goto T196;
T196:;
	goto T194;
	goto T195;
T195:;
	V54= code_char(((V51))->ust.ust_self[V52]);
	base[1]= (V54);
	base[2]= VV[17];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk100)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T200;}
	if(((V56))==Cnil){
	goto T206;}
	{unsigned char V57;
	register object V58;
	register long V59;
	long V60;
	V57= 92;
	V58= (V56);
	V59= (long)(((V58))->st.st_fillp);
	V60= (long)(((V58))->st.st_dim);
	if(!((V59)<(V60))){
	goto T213;}
	(void)((((V58))->st.st_fillp)=((long)(1)+(V59)));
	V61 = CMPmake_fixnum(V59);
	(void)(aset1((V58),fix(V61),code_char(V57)));
	goto T200;
	goto T213;
T213:;
	base[1]= code_char(V57);
	base[2]= (V58);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk90)();
	vs_top=sup;
	goto T200;}
	goto T206;
T206:;
	V55= (long)(V55)+(1);
	goto T200;
T200:;
	if(((V56))==Cnil){
	goto T220;}
	{register object V63;
	register long V64;
	long V65;
	V63= (V56);
	V64= (long)(((V63))->st.st_fillp);
	V65= (long)(((V63))->st.st_dim);
	if(!((V64)<(V65))){
	goto T227;}
	(void)((((V63))->st.st_fillp)=((long)(1)+(V64)));
	V66 = CMPmake_fixnum(V64);
	(void)(aset1((V63),fix(V66),V54));
	goto T220;
	goto T227;
T227:;
	base[1]= V54;
	base[2]= (V63);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk90)();
	vs_top=sup;}
	goto T220;
T220:;
	V52= (long)(V52)+(1);
	goto T193;
	goto T194;
T194:;
	goto T191;
	goto T191;
	goto T191;
T191:;
	{object V67;
	V67= (V56);
	if(((V67))==Cnil){
	goto T238;}
	goto T236;
	goto T238;
T238:;
	if(!((V55)>(0))){
	goto T241;}
	base[1]= CMPmake_fixnum((long)((long)((V51))->v.v_fillp)+(V55));
	base[2]= VV[0];
	base[3]= VV[1];
	base[4]= VV[2];
	base[5]= small_fixnum(0);
	vs_top=(vs_base=base+1)+5;
	(void) (*Lnk89)();
	vs_top=sup;
	V56= vs_base[0];
	V52= 0;
	goto T190;
	goto T241;
T241:;
	V56= (V51);}
	goto T236;
T236:;
	goto T188;
	goto T188;
T188:;
	base[1]= (V56);
	vs_top=(vs_base=base+1)+1;
	return;}}
	}
}
/*	function definition for GET-MATCH	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V68;
	object V69;
	V68=(base[0]);
	V69=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V68);
	base[3]= CMPmake_fixnum((long)(*(LnkLI96))(fix((V69))));
	base[4]= CMPmake_fixnum((long)(*(LnkLI95))(fix((V69))));
	vs_top=(vs_base=base+2)+3;
	Lsubseq();
	return;
	}
}
/*	function definition for GET-NODES	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	bds_check;
	{register object V70;
	register object V71;
	V70=(base[0]);
	V71=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register long V72;
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
	(void) (*Lnk101)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= VV[19];
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk102)();
	vs_top=sup;
	V70= vs_base[0];
	goto T269;
T269:;
	V74 = CMPmake_fixnum(V72);
	{long V75= fix((VFUN_NARGS=3,(*(LnkLI94))((V70),(V71),V74)));
	if(!((/* INLINE-ARGS */V75)>=(0))){
	goto T272;}}
	goto T271;
	goto T272;
T272:;
	goto T270;
	goto T271;
T271:;
	V72= (long)(*(LnkLI95))(0);
	base[4]= (V71);
	base[5]= small_fixnum(1);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk98)();
	vs_top=sup;
	V76= vs_base[0];
	V73= make_cons(V76,(V73));
	goto T269;
	goto T270;
T270:;
	goto T267;
	goto T267;
	goto T267;
T267:;
	base[4]= nreverse((V73));
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T259;
T259:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	bds_unwind1;
	return;}
	}
}
/*	function definition for GET-INDEX-NODE	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;{object V77;
	V77= CMPcaddr((VV[20]->s.s_dbind));
	if(V77==Cnil)goto T282;
	base[0]= V77;
	vs_top=(vs_base=base+0)+1;
	return;
	goto T282;
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
	(void) (*Lnk103)();
	vs_top=sup;
	V81= vs_base[0];
	V80= CMPcar(V81);
	goto T286;
T286:;
	if(((V80))==Cnil){
	goto T291;}
	base[2]= (V80);
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk104)();
	vs_top=sup;
	V78= vs_base[0];
	{object V82;
	V82= (VV[20]->s.s_dbind);
	(CMPcddr((V82)))->c.c_car = V78;
	(void)(CMPcddr((V82)));
	base[2]= V78;
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T291;
T291:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
}
/*	function definition for NODES-FROM-INDEX	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	bds_check;
	{register object V84;
	V84=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V85;
	register object V86;
	V85= small_fixnum(0);
	V86= Cnil;
	bds_bind(VV[10],Ct);
	bds_bind(VV[9],Cnil);
	{register object V87;
	vs_base=vs_top;
	(void) (*Lnk105)();
	vs_top=sup;
	V87= vs_base[0];
	if(((V87))==Cnil){
	goto T304;}
	base[3]= VV[22];
	base[5]= (V84);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk101)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[23];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk102)();
	vs_top=sup;
	V84= vs_base[0];
	goto T314;
T314:;
	{long V88= fix((VFUN_NARGS=3,(*(LnkLI94))((V84),(V87),(V85))));
	if(!((/* INLINE-ARGS */V88)>=(0))){
	goto T317;}}
	goto T316;
	goto T317;
T317:;
	goto T315;
	goto T316;
T316:;
	V85= CMPmake_fixnum((long)(*(LnkLI95))(0));
	base[3]= (V87);
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk98)();
	vs_top=sup;
	V89= vs_base[0];
	base[3]= (V87);
	base[4]= small_fixnum(2);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk98)();
	vs_top=sup;
	V90= vs_base[0];
	V91= make_cons(V89,V90);
	V86= make_cons(/* INLINE-ARGS */V91,(V86));
	goto T314;
	goto T315;
T315:;
	goto T312;
	goto T312;
	goto T312;
T312:;
	base[3]= nreverse((V86));
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T304;
T304:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;}}
	}
}
/*	function definition for GET-NODE-INDEX	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	bds_check;
	{register object V92;
	object V93;
	V92=(base[0]);
	V93=(base[1]);
	vs_top=sup;
	goto TTL;
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
	goto T332;
T332:;
	base[3]= VV[24];
	base[5]= (V92);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk101)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[25];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk102)();
	vs_top=sup;
	V92= vs_base[0];
	{long V95= fix((VFUN_NARGS=2,(*(LnkLI94))((V92),(V93))));
	if(!((/* INLINE-ARGS */V95)>=(0))){
	goto T341;}}
	base[3]= (V93);
	base[4]= CMPmake_fixnum((long)(*(LnkLI96))(1));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk97)();
	bds_unwind1;
	return;
	goto T341;
T341:;
	base[3]= VV[26];
	base[4]= (V94);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk99)();
	vs_top=sup;
	base[3]= small_fixnum(0);
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;}
	}
}
/*	function definition for ALL-MATCHES	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	bds_check;
	{object V96;
	object V97;
	V96=(base[0]);
	V97=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register long V98;
	V98= 0;
	bds_bind(VV[9],Cnil);
	{register object V99;
	register object V100;
	register object V101;
	V99= Cnil;
	V100= Cnil;
	V101= Cnil;
	goto T350;
T350:;
	V102 = CMPmake_fixnum(V98);
	V98= fix((VFUN_NARGS=3,(*(LnkLI94))((V96),(V97),V102)));
	if(!((V98)>=(0))){
	goto T353;}
	goto T352;
	goto T353;
T353:;
	goto T351;
	goto T352;
T352:;{object V103;
	V103= CMPmake_fixnum(V98);
	V98= (long)(*(LnkLI95))(0);
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
	goto T361;
T361:;
	V100= make_cons((V101),Cnil);
	V99= (V100);
	goto T359;
T359:;
	goto T350;
	goto T351;
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

static void L12()
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
	(void) (*Lnk100)();
	vs_top=sup;
	V108= vs_base[0];
	base[4]= list(3,VV[27],V108,base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for NODE-OFFSET	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V109;
	V109=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= number_plus(CMPcar(CMPcadr(CMPcddddr((V109)))),CMPcadr((V109)));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for SETUP-INFO	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	bds_check;
	{register object V110;
	V110=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V111;
	register object V112;
	V111= Cnil;
	V112= Cnil;
	if(!(((VV[29]->s.s_dbind))==((VV[30]->s.s_dbind)))){
	goto T377;}
	goto T376;
	goto T377;
T377:;
	(VV[29]->s.s_dbind)= (VV[30]->s.s_dbind);
	{object V113;
	base[2]= (VV[30]->s.s_dbind);
	base[3]= VV[31];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk102)();
	vs_top=sup;
	V113= vs_base[0];
	(VV[32]->s.s_dbind)= make_cons((V113),(VV[32]->s.s_dbind));}
	base[1]= (VV[32]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk106)();
	vs_top=sup;
	(VV[32]->s.s_dbind)= vs_base[0];
	goto T376;
T376:;
	if(!(equal((V110),VV[33]))){
	goto T388;}
	V110= VV[34];
	goto T388;
T388:;
	base[1]= (V110);
	base[2]= (VV[32]->s.s_dbind);
	base[3]= VV[35];
	base[4]= Cnil;
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk107)();
	vs_top=sup;
	V112= vs_base[0];
	{object V114;
	base[1]= VV[36];
	base[2]= (V112);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk108)();
	vs_top=sup;
	V114= vs_base[0];
	if(((V114))==Cnil){
	goto T398;}
	base[1]= (V112);
	base[2]= small_fixnum(0);
	base[3]= (V114);
	vs_top=(vs_base=base+1)+3;
	Lsubseq();
	vs_top=sup;
	V112= vs_base[0];}
	goto T398;
T398:;
	if(((V112))!=Cnil){
	goto T408;}
	if(equal((V110),VV[37])){
	goto T408;}
	{object V115;
	base[3]= VV[38];
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk104)();
	vs_top=sup;
	V115= vs_base[0];
	bds_bind(VV[10],Cnil);
	base[3]= VV[39];
	base[5]= (V110);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk101)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[40];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk102)();
	vs_top=sup;
	V116= vs_base[0];
	{long V117= fix((VFUN_NARGS=2,(*(LnkLI94))(V116,(V115))));
	if(!((/* INLINE-ARGS */V117)>=(0))){
	bds_unwind1;
	goto T408;}}
	base[3]= (V115);
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk98)();
	vs_top=sup;
	V112= vs_base[0];
	bds_unwind1;}
	goto T408;
T408:;
	if(((V112))==Cnil){
	goto T429;}
	{object V118;
	base[3]= (V112);
	vs_top=(vs_base=base+3)+1;
	Ltruename();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lnamestring();
	vs_top=sup;
	V118= vs_base[0];
	{register object x= (V118),V119= (VV[41]->s.s_dbind);
	while(V119!=Cnil)
	if(equal(x,V119->c.c_car->c.c_car) &&V119->c.c_car != Cnil){
	V111= (V119->c.c_car);
	goto T437;
	}else V119=V119->c.c_cdr;
	V111= Cnil;}
	goto T437;
T437:;
	if(((V111))==Cnil){
	goto T435;}
	(VV[20]->s.s_dbind)= (V111);
	goto T427;
	goto T435;
T435:;
	base[2]= (V118);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk109)();
	vs_top=sup;
	V120= vs_base[0];
	(VV[20]->s.s_dbind)= list(3,(V118),V120,Cnil);
	(VV[41]->s.s_dbind)= make_cons((VV[20]->s.s_dbind),(VV[41]->s.s_dbind));
	goto T427;}
	goto T429;
T429:;
	base[1]= Ct;
	base[2]= VV[42];
	base[3]= (V110);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T427;
T427:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for GET-INFO-CHOICES	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	{object V121;
	object V122;
	V121=(base[0]);
	V122=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(eql((V122),VV[43]))){
	goto T448;}
	base[2]= (V121);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk110)();
	return;
	goto T448;
T448:;
	base[2]= (V121);
	base[3]= CMPcar(CMPcadr((VV[20]->s.s_dbind)));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk103)();
	return;
	}
}
/*	function definition for ADD-FILE	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V123;
	register object V124;
	V123=(base[0]);
	V124=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V125;
	V125= (V123);
	goto T456;
T456:;
	if((V125)!=Cnil){
	goto T458;}
	goto T457;
	goto T458;
T458:;
	{register object V126;
	register object V127;
	V126= (V125);
	V127= list(2,CMPcar((V125)),(V124));
	((V126))->c.c_car = (V127);}
	V125= CMPcdr((V125));
	goto T456;
	goto T457;
T457:;
	goto T454;
	goto T454;
	goto T454;
T454:;
	base[2]= (V123);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for INFO-ERROR	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{object V128;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V128=(base[0]);
	vs_top=sup;
	if(((VV[44]->s.s_dbind))==Cnil){
	goto T467;}
	base[2]= Cnil;
	{object V129;
	V129= (V128);
	 vs_top=base+3;
	 while(V129!=Cnil)
	 {vs_push((V129)->c.c_car);V129=(V129)->c.c_cdr;}
	vs_base=base+2;}
	Lformat();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk111)();
	return;
	goto T467;
T467:;
	{object V130;
	V130= (V128);
	 vs_top=base+1;
	 while(V130!=Cnil)
	 {vs_push((V130)->c.c_car);V130=(V130)->c.c_cdr;}
	vs_base=base+1;}
	Lerror();
	return;
	}
}
/*	function definition for INFO-GET-FILE	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{register object V131;
	V131=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V131);
	base[2]= CMPcar((VV[20]->s.s_dbind));
	vs_top=(vs_base=base+1)+2;
	Lmerge_pathnames();
	vs_top=sup;
	V131= vs_base[0];
	if(!(equal(CMPcar((VV[45]->s.s_dbind)),(V131)))){
	goto T479;}
	V132= (VV[45]->s.s_dbind);
	goto T477;
	goto T479;
T479:;
	base[1]= (V131);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk93)();
	vs_top=sup;
	V133= vs_base[0];
	(VV[45]->s.s_dbind)= make_cons((V131),V133);
	V132= (VV[45]->s.s_dbind);
	goto T477;
T477:;
	base[1]= CMPcdr(V132);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for WAITING	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{object V134;
	V134=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((VV[44]->s.s_dbind)==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	base[1]= (V134);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T484;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T484;
T484:;
	base[1]= VV[46];
	base[2]= (V134);
	base[3]= VV[47];
	base[4]= VV[48];
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk112)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T487;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T487;
T487:;
	base[1]= VV[49];
	base[2]= VV[50];
	base[3]= VV[51];
	vs_top=(vs_base=base+1)+3;
	super_funcall_no_event((V134));
	return;
	}
}
/*	function definition for END-WAITING	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{object V135;
	V135=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V135);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T496;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T496;
T496:;
	base[1]= VV[49];
	base[2]= VV[50];
	base[3]= VV[52];
	vs_top=(vs_base=base+1)+3;
	super_funcall_no_event((V135));
	return;
	}
}
/*	function definition for INFO-SUBFILE	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{register object V136;
	V136=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V137;
	register object V138;
	register object V139;
	V137= CMPcdr(CMPcadr((VV[20]->s.s_dbind)));
	V138= Cnil;
	V139= Cnil;
	if((V137)==Cnil){
	goto T503;}
	if(number_compare((V136),small_fixnum(0))>=0){
	goto T504;}
	goto T503;
	goto T504;
T504:;
	{register object V140;
	register object V141;
	V140= (V137);
	V141= CMPcar((V140));
	goto T509;
T509:;
	if(!(((V140))==Cnil)){
	goto T510;}
	goto T503;
	goto T510;
T510:;
	if(!(number_compare(CMPcar((V141)),(V136))>0)){
	goto T514;}
	V139= CMPcar((V141));
	goto T503;
	goto T514;
T514:;
	V138= (V141);
	V140= CMPcdr((V140));
	V141= CMPcar((V140));
	goto T509;}
	goto T503;
T503:;
	if((V138)!=Cnil){
	base[1]= (V138);
	goto T526;}
	base[1]= make_cons(small_fixnum(0),CMPcar((VV[20]->s.s_dbind)));
	goto T526;
T526:;
	base[2]= (V139);
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	function definition for INFO-NODE-FROM-POSITION	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	{object V142;
	V142=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V143;
	V143= small_fixnum(0);
	{object V144;
	register object V145;
	register object V146;
	base[4]= (V142);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk113)();
	vs_top=sup;
	V144= vs_base[0];
	base[4]= CMPcdr((V144));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk114)();
	vs_top=sup;
	V145= vs_base[0];
	V146= number_minus((V142),CMPcar((V144)));
	goto T536;
T536:;
	{long V147= fix((VFUN_NARGS=4,(*(LnkLI94))(VV[53],(V145),(V143),(V146))));
	if(!((/* INLINE-ARGS */V147)>=(0))){
	goto T539;}}
	goto T538;
	goto T539;
T539:;
	goto T537;
	goto T538;
T538:;
	V143= CMPmake_fixnum((long)(*(LnkLI95))(0));
	goto T536;
	goto T537;
T537:;
	goto T534;
	goto T534;
	goto T534;
T534:;
	V143= number_minus((V143),small_fixnum(1));
	{long V148= fix((VFUN_NARGS=3,(*(LnkLI94))(VV[54],(V145),(V143))));
	if(!((/* INLINE-ARGS */V148)>=(0))){
	goto T547;}}
	{object V149;
	object V150;
	object V151;
	object V152;
	object V153;
	V149= CMPmake_fixnum((long)(*(LnkLI96))(0));
	V150= CMPmake_fixnum((long)(*(LnkLI95))(0));
	base[9]= (V145);
	base[10]= small_fixnum(1);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk98)();
	vs_top=sup;
	V151= vs_base[0];
	{long V154= fix((VFUN_NARGS=3,(*(LnkLI94))(VV[55],(V145),(V150))));
	if(!((/* INLINE-ARGS */V154)>=(0))){
	goto T556;}}
	V152= CMPmake_fixnum((long)(*(LnkLI96))(0));
	goto T554;
	goto T556;
T556:;
	V152= CMPmake_fixnum((long)length((V145)));
	goto T554;
T554:;
	V153= listA(7,(V145),(V150),(V152),(V149),(V151),(V144),(VV[20]->s.s_dbind));
	base[9]= (V153);
	vs_top=(vs_base=base+9)+1;
	return;}
	goto T547;
T547:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}}
	}
}
/*	function definition for SHOW-INFO	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	bds_check;
	{register object V155;
	register object V156;
	object V157;
	V155=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T559;}
	V156=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T560;}
	V157=(base[2]);
	vs_top=sup;
	goto T561;
	goto T559;
T559:;
	V156= Cnil;
	goto T560;
T560:;
	V157= (VV[44]->s.s_dbind);
	goto T561;
T561:;
	{register object V158;
	register object V159;
	register long V160;
	long V161;
	V158= Cnil;
	bds_bind(VV[9],Cnil);
	V159= Cnil;
	V160= 0;
	V161= -1;
	if(!(type_of((V155))==t_cons)){
	goto T569;}
	if(!(type_of(CMPcdr((V155)))==t_cons)){
	goto T569;}
	V159= CMPcadr((V155));
	V155= CMPcar((V155));
	goto T569;
T569:;
	if(!(type_of((V155))==t_cons)){
	goto T568;}
	V156= CMPcar((V155));
	V155= CMPcdr((V155));
	goto T568;
T568:;
	if(!(type_of((V155))==t_string)){
	goto T583;}
	goto T582;
	goto T583;
T583:;
	base[4]= VV[56];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk99)();
	vs_top=sup;
	goto T582;
T582:;
	base[4]= (VV[57]->s.s_dbind);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	{long V162= fix((VFUN_NARGS=2,(*(LnkLI94))(VV[58],(V155))));
	if(!((/* INLINE-ARGS */V162)>=(0))){
	goto T588;}}
	base[4]= (V155);
	base[5]= small_fixnum(1);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk98)();
	vs_top=sup;
	V159= vs_base[0];
	base[4]= (V155);
	base[5]= small_fixnum(2);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk98)();
	vs_top=sup;
	V155= vs_base[0];
	if(!(equal((V155),VV[59]))){
	goto T588;}
	V155= VV[60];
	goto T588;
T588:;
	if(((V159))==Cnil){
	goto T602;}
	base[4]= (V159);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk116)();
	vs_top=sup;
	goto T602;
T602:;
	{object V163;
	base[4]= (V155);
	base[5]= CMPcar(CMPcadr((VV[20]->s.s_dbind)));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk117)();
	vs_top=sup;
	V163= vs_base[0];
	if(((V163))!=Cnil){
	goto T609;}
	base[4]= Ct;
	base[5]= VV[61];
	base[6]= (V155);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	return;
	goto T609;
T609:;
	base[4]= (V163);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk113)();
	vs_top=sup;
	V158= vs_base[0];
	{register object V164;
	object V165;
	base[6]= CMPcdr((V158));
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk114)();
	vs_top=sup;
	V164= vs_base[0];
	V165= number_minus((V163),CMPcar((V158)));
	base[6]= VV[62];
	base[8]= (V155);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk101)();
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= VV[63];
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk102)();
	vs_top=sup;
	V166= vs_base[0];
	{long V167= fix((VFUN_NARGS=3,(*(LnkLI94))(V166,(V164),(V165))));
	if(!((/* INLINE-ARGS */V167)>=(0))){
	goto T623;}}
	{object V168;
	register object V169;
	register object V170;
	object V171;
	V168= CMPmake_fixnum((long)(*(LnkLI96))(0));
	V169= CMPmake_fixnum((long)(*(LnkLI95))(0));
	{long V172= fix((VFUN_NARGS=3,(*(LnkLI94))(VV[64],(V164),(V169))));
	if(!((/* INLINE-ARGS */V172)>=(0))){
	goto T634;}}
	V170= CMPmake_fixnum((long)(*(LnkLI96))(0));
	goto T632;
	goto T634;
T634:;
	V170= CMPmake_fixnum((long)length((V164)));
	goto T632;
T632:;
	V171= listA(7,(V164),(V169),(V170),(V168),(V155),(V158),(VV[20]->s.s_dbind));
	if(((V156))==Cnil){
	goto T637;}
	base[10]= (V156);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk101)();
	vs_top=sup;
	V156= vs_base[0];
	bds_bind(VV[10],Cnil);
	base[11]= VV[65];
	base[12]= (V156);
	base[13]= VV[66];
	vs_top=(vs_base=base+11)+3;
	(void) (*Lnk102)();
	vs_top=sup;
	V173= vs_base[0];
	V161= fix((VFUN_NARGS=4,(*(LnkLI94))(V173,(V164),(V169),(V170))));
	if((V161)>=(0)){
	goto T643;}
	{long V174= fix((VFUN_NARGS=4,(*(LnkLI94))((V156),(V164),(V169),(V170))));
	if(!((/* INLINE-ARGS */V174)>=(0))){
	bds_unwind1;
	goto T637;}}
	goto T643;
T643:;
	V175 = CMPmake_fixnum((long)(*(LnkLI96))(0));
	V160= fix(number_minus(V175,(V169)));
	bds_unwind1;
	goto T637;
T637:;
	if(((V157))==Cnil){
	goto T654;}
	{object V176;
	base[10]= (V171);
	base[11]= CMPmake_fixnum(V160);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk118)();
	vs_top=sup;
	V176= vs_base[0];
	base[10]= (VV[57]->s.s_dbind);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk119)();
	vs_top=sup;
	base[10]= (V176);
	vs_top=(vs_base=base+10)+1;
	bds_unwind1;
	return;}
	goto T654;
T654:;
	{object V177;
	if(!((V161)>=(0))){
	goto T663;}
	base[10]= (V169);
	base[11]= small_fixnum(1);
	base[12]= CMPmake_fixnum(V160);
	vs_top=(vs_base=base+10)+3;
	Lplus();
	vs_top=sup;
	V178= vs_base[0];
	{long V179= fix((VFUN_NARGS=4,(*(LnkLI94))(VV[67],(V164),V178,(V170))));
	if(!((/* INLINE-ARGS */V179)>=(0))){
	goto T663;}}
	V177= CMPmake_fixnum((long)(*(LnkLI96))(0));
	goto T661;
	goto T663;
T663:;
	V177= (V170);
	goto T661;
T661:;
	base[10]= (V164);
	V180 = CMPmake_fixnum(V160);
	base[11]= number_plus(V180,(V169));
	base[12]= (V177);
	vs_top=(vs_base=base+10)+3;
	Lsubseq();
	bds_unwind1;
	return;}}
	goto T623;
T623:;
	base[6]= VV[68];
	base[7]= (V155);
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
/*	function definition for INFO-AUX	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{object V181;
	object V182;
	V181=(base[0]);
	V182=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V183;
	register object V184;
	V183= Cnil;
	V184= (V182);
	{object V185;
	register object V186;
	register object V187;
	register object V188;
	V185= Cnil;
	V186= Cnil;
	V187= Cnil;
	V188= Cnil;
	goto T679;
T679:;
	if(((V184))==Cnil){
	goto T682;}
	goto T681;
	goto T682;
T682:;
	goto T680;
	goto T681;
T681:;
	{object V189;
	V189= CMPcar((V184));
	V183= (V189);}
	base[2]= (V183);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk116)();
	vs_top=sup;
	base[4]= (V181);
	base[5]= VV[69];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk120)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V183);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	V187= vs_base[0];
	if(((V186))==Cnil){
	goto T698;}
	{register object V191;
	V191= (V187);
	(V186)->c.c_cdr = (V191);
	if(((V191))!=Cnil){
	goto T700;}}
	goto T696;
	goto T700;
T700:;
	base[2]= CMPcdr((V186));
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V186= vs_base[0];
	goto T696;
	goto T698;
T698:;
	V185= (V187);
	base[2]= (V185);
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V186= vs_base[0];
	goto T696;
T696:;
	base[4]= (V181);
	base[5]= VV[43];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk120)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V183);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	V188= vs_base[0];
	if(((V186))==Cnil){
	goto T718;}
	{register object V193;
	V193= (V188);
	(V186)->c.c_cdr = (V193);
	if(((V193))!=Cnil){
	goto T720;}}
	goto T716;
	goto T720;
T720:;
	base[2]= CMPcdr((V186));
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V186= vs_base[0];
	goto T716;
	goto T718;
T718:;
	V185= (V188);
	base[2]= (V185);
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V186= vs_base[0];
	goto T716;
T716:;
	V184= CMPcdr((V184));
	goto T679;
	goto T680;
T680:;
	base[2]= (V185);
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

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	{object V194;
	register object V195;
	register object V196;
	V194=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T733;}
	V195=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T734;}
	V196=(base[2]);
	vs_top=sup;
	goto T735;
	goto T733;
T733:;
	V195= Cnil;
	goto T734;
T734:;
	V196= Cnil;
	goto T735;
T735:;
	{register object V197;
	V197= Cnil;
	if((V195)!=Cnil){
	goto T739;}
	V195= small_fixnum(0);
	goto T739;
T739:;
	goto T743;
T743:;
	if((V195)!=Cnil){
	goto T745;}
	goto T744;
	goto T745;
T745:;
	{register object V198;
	register object V199;
	base[3]= (V195);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk113)();
	if(vs_base>=vs_top){vs_top=sup;goto T749;}
	V198= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T750;}
	V199= vs_base[0];
	vs_top=sup;
	goto T751;
	goto T749;
T749:;
	V198= Cnil;
	goto T750;
T750:;
	V199= Cnil;
	goto T751;
T751:;
	V197= (V199);
	if((V196)==Cnil){
	goto T754;}
	if((V197)==Cnil){
	goto T754;}
	if(number_compare((V196),(V197))<0){
	goto T755;}
	goto T754;
	goto T755;
T755:;
	V197= (V196);
	goto T754;
T754:;
	{register object V200;
	register object V201;
	object V202;
	object V203;
	base[7]= CMPcdr((V198));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk114)();
	vs_top=sup;
	V200= vs_base[0];
	V201= CMPcar((V198));
	V202= number_minus((V195),(V201));
	V203= CMPmake_fixnum((long)length((V200)));
	if(((V197))==Cnil){
	goto T768;}
	V204= number_minus((V197),(V201));
	goto T766;
	goto T768;
T768:;
	V204= (V203);
	goto T766;
T766:;
	{long V205= fix((VFUN_NARGS=4,(*(LnkLI94))((V194),(V200),(V202),V204)));
	if(!((/* INLINE-ARGS */V205)>=(0))){
	goto T758;}}
	V206 = CMPmake_fixnum((long)(*(LnkLI96))(0));
	base[7]= number_plus((V201),V206);
	vs_top=(vs_base=base+7)+1;
	return;}
	goto T758;
T758:;
	V195= (V199);}
	goto T743;
	goto T744;
T744:;
	goto T741;
	goto T741;
	goto T741;
T741:;
	base[3]= small_fixnum(-1);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for IDESCRIBE	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	{register object V207;
	V207=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V208;
	base[2]= (V207);
	base[3]= (VV[70]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk122)();
	vs_top=sup;
	V208= vs_base[0];
	{register object V209;
	register object V210;
	V209= (V208);
	V210= CMPcar((V209));
	goto T778;
T778:;
	if(!(((V209))==Cnil)){
	goto T779;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T779;
T779:;
	if(!(type_of(CMPcar((V210)))==t_cons)){
	goto T787;}
	if(!(equalp(CMPcaar((V210)),(V207)))){
	goto T783;}
	goto T785;
	goto T787;
T787:;
	if(!(equalp(CMPcar((V210)),(V207)))){
	goto T783;}
	goto T785;
T785:;
	base[3]= Ct;
	base[4]= VV[71];
	base[5]= (V210);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[3]= (V210);
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk104)();
	vs_top=sup;
	V211= vs_base[0];
	(void)(princ(V211,Cnil));
	goto T783;
T783:;
	V209= CMPcdr((V209));
	V210= CMPcar((V209));
	goto T778;}}
	}
}
/*	function definition for INFO	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	bds_check;
	{object V212;
	object V213;
	V212=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T802;}
	V213=(base[1]);
	vs_top=sup;
	goto T803;
	goto T802;
T802:;
	V213= (VV[70]->s.s_dbind);
	goto T803;
T803:;
	{object V214;
	register object V215;
	object V216;
	V214= Cnil;
	bds_bind(VV[20],Cnil);
	V215= Cnil;
	V216= Cnil;
	{object V217;
	base[3]= (V212);
	base[4]= (V213);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk122)();
	vs_top=sup;
	V217= vs_base[0];
	if(((VV[44]->s.s_dbind))==Cnil){
	goto T812;}
	base[3]= (V217);
	base[4]= (V213);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk123)();
	bds_unwind1;
	return;
	goto T812;
T812:;
	if(((V217))==Cnil){
	goto T817;}
	base[3]= CMPmake_fixnum((long)length((V217)));
	base[3]=MMcons(base[3],Cnil);
	{register long V218;
	V218= 0;
	{register object V219;
	register object V220;
	V219= Cnil;
	V220= (V217);
	{object V221;
	V221= Cnil;
	goto T823;
T823:;
	if(((V220))==Cnil){
	goto T826;}
	goto T825;
	goto T826;
T826:;
	goto T824;
	goto T825;
T825:;
	{object V222;
	V222= CMPcar((V220));
	V219= (V222);}
	V215= Cnil;
	V216= Cnil;
	if(!(type_of((V219))==t_cons)){
	goto T836;}
	if(!(type_of(CMPcdr((V219)))==t_cons)){
	goto T836;}
	V215= CMPcadr((V219));
	V219= CMPcar((V219));
	goto T836;
T836:;
	if(!(type_of((V219))==t_cons)){
	goto T835;}
	V216= CMPcar((V219));
	V219= CMPcdr((V219));
	goto T835;
T835:;
	base[4]= Ct;
	base[5]= VV[72];
	base[6]= CMPmake_fixnum(V218);
	base[7]= (V216);
	if(!(((V215))==((V221)))){
	goto T856;}
	base[8]= Cnil;
	goto T854;
	goto T856;
T856:;
	V221= (V215);
	base[8]= (V221);
	goto T854;
T854:;
	base[9]= (V219);
	vs_top=(vs_base=base+4)+6;
	Lformat();
	vs_top=sup;
	if(!((V218)<(2147483646))){
	goto T861;}
	goto T860;
	goto T861;
T861:;
	vs_base=vs_top;
	(void) (*Lnk124)();
	vs_top=sup;
	goto T860;
T860:;
	V218= (long)(V218)+(1);
	V220= CMPcdr((V220));
	goto T823;
	goto T824;
T824:;
	goto T820;
	goto T820;}}}
	goto T820;
T820:;
	if(!(((long)length((V217)))>(1))){
	goto T870;}
	base[4]= Ct;
	base[5]= VV[74];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	goto T868;
	goto T870;
T870:;
	princ_char(10,Cnil);
	goto T868;
T868:;
	{object V223;
	object V224;
	register object V225;
	if(!(((long)length((V217)))>(1))){
	goto T876;}
	vs_base=vs_top;
	Lread_line();
	vs_top=sup;
	V223= vs_base[0];
	goto T874;
	goto T876;
T876:;
	V223= VV[75];
	goto T874;
T874:;
	V224= small_fixnum(0);
	V225= Cnil;
	goto T880;
T880:;
	if(!(equal((V223),VV[76]))){
	goto T883;}
	goto T882;
	goto T883;
T883:;
	goto T881;
	goto T882;
T882:;
	vs_base=vs_top;
	Lread_line();
	vs_top=sup;
	V223= vs_base[0];
	goto T880;
	goto T881;
T881:;
	goto T878;
	goto T878;
	goto T878;
T878:;
	goto T890;
T890:;{object V226;
	base[4]= (V223);
	base[5]= Cnil;
	base[6]= Cnil;
	base[7]= VV[77];
	base[8]= (V224);
	vs_top=(vs_base=base+4)+5;
	(void) (*Lnk125)();
	if(vs_base<vs_top){
	V225= vs_base[0];
	vs_base++;
	}else{
	V225= Cnil;}
	if(vs_base<vs_top){
	V224= vs_base[0];
	}else{
	V224= Cnil;}
	vs_top=sup;
	V226= (V225);
	if(V226==Cnil)goto T893;
	goto T892;
	goto T893;
T893:;}
	goto T891;
	goto T892;
T892:;
	if(!(type_of((V225))==t_fixnum||
type_of((V225))==t_bignum||
type_of((V225))==t_ratio||
type_of((V225))==t_shortfloat||
type_of((V225))==t_longfloat||
type_of((V225))==t_complex)){
	goto T903;}
	V214= make_cons((V225),(V214));
	goto T901;
	goto T903;
T903:;
	V214= (V225);
	goto T888;
	goto T901;
T901:;
	goto T890;
	goto T891;
T891:;
	goto T888;
	goto T888;
	goto T888;
T888:;
	if(!(type_of((V214))==t_cons)){
	goto T911;}
	V214= nreverse((V214));
	goto T909;
	goto T911;
T911:;
	if(!(type_of((V214))==t_symbol)){
	goto T909;}
	V227= symbol_name((V214));
	if(equal(/* INLINE-ARGS */V227,VV[78])){
	goto T917;}
	V214= Cnil;
	goto T916;
	goto T917;
T917:;
	{register long V228;
	long V229;
	V228= 0;
	{object V230;
	V230= CMPmake_fixnum((long)length((V217)));{object V231;
	V231= (type_of((V230))==t_fixnum?Ct:Cnil);
	if(V231==Cnil)goto T923;
	goto T922;
	goto T923;
T923:;}
	vs_base=vs_top;
	(void) (*Lnk124)();
	vs_top=sup;
	goto T922;
T922:;
	V229= fix((V230));}
	{object V232;
	register object V233;
	V232= Cnil;
	V233= Cnil;
	goto T926;
T926:;
	if((V228)>=(V229)){
	goto T929;}
	goto T928;
	goto T929;
T929:;
	goto T927;
	goto T928;
T928:;
	if(((V233))==Cnil){
	goto T933;}
	{object V234;
	object V235;
	V234= (V233);
	V236 = CMPmake_fixnum(V228);
	V233= make_cons(V236,Cnil);
	V235= (V233);
	((V234))->c.c_cdr = (V235);
	goto T931;}
	goto T933;
T933:;
	V237 = CMPmake_fixnum(V228);
	V233= make_cons(V237,Cnil);
	V232= (V233);
	goto T931;
T931:;
	V228= (long)(V228)+(1);
	goto T926;
	goto T927;
T927:;
	V214= (V232);
	goto T916;
	V214= Cnil;
	goto T916;
	V214= Cnil;
	goto T916;}}
	goto T916;
T916:;
	goto T909;
T909:;
	if(((V214))==Cnil){
	goto T945;}
	base[4]= 
	make_cclosure_new(LC31,Cnil,base[3],Cdata);
	base[5]= (V214);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk126)();
	vs_top=sup;
	V214= vs_base[0];
	base[4]= Ct;
	base[5]= VV[79];
	base[6]= CMPcar((VV[20]->s.s_dbind));
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T945;
T945:;
	{object V238;
	register object V239;
	V238= Cnil;
	V239= (V214);
	goto T956;
T956:;
	if(((V239))==Cnil){
	goto T959;}
	goto T958;
	goto T959;
T959:;
	goto T957;
	goto T958;
T958:;
	{object V240;
	V240= CMPcar((V239));
	V238= (V240);}
	base[4]= nth(fix((V238)),(V217));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk104)();
	vs_top=sup;
	V241= vs_base[0];
	(void)(princ(V241,Cnil));
	V239= CMPcdr((V239));
	goto T956;
	goto T957;
T957:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	return;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	return;}}
	goto T817;
T817:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;}}
	}
}
/*	function definition for DEFAULT-INFO-HOTLIST	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	vs_top=sup;
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
	return;
}
/*	function definition for ADD-TO-HOTLIST	*/

static void L29()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM29; VC29
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of(base[0])==t_symbol)){
	goto T973;}
	{object V242 =(base[0])->s.s_plist;
	 object ind= VV[69];
	while(V242!=Cnil){
	if(V242->c.c_car==ind){
	base[0]= (V242->c.c_cdr->c.c_car);
	goto T976;
	}else V242=V242->c.c_cdr->c.c_cdr;}
	base[0]= Cnil;}
	goto T976;
T976:;
	goto T973;
T973:;
	if((base[0])==Cnil){
	goto T978;}
	vs_base=vs_top;
	(void) (*Lnk128)();
	vs_top=sup;
	base[2]= vs_base[0];
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
	V243= vs_base[0];
	if(!(number_compare(V243,small_fixnum(10))<0)){
	goto T989;}
	(void)(princ(VV[87],base[1]));
	goto T989;
T989:;
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
	goto T998;}
	base[3]= base[1];
	vs_top=(vs_base=base+3)+1;
	Lclose();
	vs_top=sup;
	goto T998;
T998:;
	vs_base=vs_top=base+3;
	for(p= base[2];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	return;}}
	goto T978;
T978:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
}
/*	function definition for LIST-MATCHES	*/

static void L30()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	{object V244;
	object V245;
	V244=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V245=(base[1]);
	vs_top=sup;
	{register object V246;
	register object V247;
	V246= Cnil;
	V247= (V245);
	{object V248;
	register object V249;
	register object V250;
	V248= Cnil;
	V249= Cnil;
	V250= Cnil;
	goto T1003;
T1003:;
	if(((V247))==Cnil){
	goto T1006;}
	goto T1005;
	goto T1006;
T1006:;
	goto T1004;
	goto T1005;
T1005:;
	{register object V251;
	V251= CMPcar((V247));
	V246= (V251);}
	{long V252= (long)(*(LnkLI96))(fix((V246)));
	if((/* INLINE-ARGS */V252)>=(0)){
	goto T1013;}}
	V250= Cnil;
	goto T1012;
	goto T1013;
T1013:;
	base[2]= (V244);
	base[3]= (V246);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk98)();
	vs_top=sup;
	V250= vs_base[0];
	goto T1012;
T1012:;
	if(((V249))==Cnil){
	goto T1019;}
	{register object V253;
	register object V254;
	V253= (V249);
	V249= make_cons((V250),Cnil);
	V254= (V249);
	((V253))->c.c_cdr = (V254);
	goto T1017;}
	goto T1019;
T1019:;
	V249= make_cons((V250),Cnil);
	V248= (V249);
	goto T1017;
T1017:;
	V247= CMPcdr((V247));
	goto T1003;
	goto T1004;
T1004:;
	base[2]= (V248);
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

static void LC31(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	{object V255;
	V255=(base[0]);
	vs_top=sup;
	if(type_of((V255))==t_fixnum||type_of((V255))==t_bignum){
	goto T1031;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1031;
T1031:;
	base[1]= (number_compare((V255),(base0[0]->c.c_car))>=0?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static void LnkT128(){ call_or_link(VV[128],(void **)(void *)&Lnk128);} /* DEFAULT-INFO-HOTLIST */
static void LnkT127(){ call_or_link(VV[127],(void **)(void *)&Lnk127);} /* USER-HOMEDIR-PATHNAME */
static void LnkT126(){ call_or_link(VV[126],(void **)(void *)&Lnk126);} /* REMOVE-IF */
static void LnkT125(){ call_or_link(VV[125],(void **)(void *)&Lnk125);} /* READ-FROM-STRING */
static void LnkT124(){ call_or_link(VV[124],(void **)(void *)&Lnk124);} /* TYPE-ERROR */
static void LnkT123(){ call_or_link(VV[123],(void **)(void *)&Lnk123);} /* OFFER-CHOICES */
static void LnkT122(){ call_or_link(VV[122],(void **)(void *)&Lnk122);} /* INFO-AUX */
static void LnkT121(){ call_or_link(VV[121],(void **)(void *)&Lnk121);} /* ADD-FILE */
static void LnkT120(){ call_or_link(VV[120],(void **)(void *)&Lnk120);} /* GET-INFO-CHOICES */
static void LnkT119(){ call_or_link(VV[119],(void **)(void *)&Lnk119);} /* END-WAITING */
static void LnkT118(){ call_or_link(VV[118],(void **)(void *)&Lnk118);} /* PRINT-NODE */
static void LnkT117(){ call_or_link(VV[117],(void **)(void *)&Lnk117);} /* GET-NODE-INDEX */
static void LnkT116(){ call_or_link(VV[116],(void **)(void *)&Lnk116);} /* SETUP-INFO */
static void LnkT115(){ call_or_link(VV[115],(void **)(void *)&Lnk115);} /* WAITING */
static void LnkT114(){ call_or_link(VV[114],(void **)(void *)&Lnk114);} /* INFO-GET-FILE */
static void LnkT113(){ call_or_link(VV[113],(void **)(void *)&Lnk113);} /* INFO-SUBFILE */
static void LnkT112(){ call_or_link(VV[112],(void **)(void *)&Lnk112);} /* WINFO */
static void LnkT111(){ call_or_link(VV[111],(void **)(void *)&Lnk111);} /* TKERROR */
static void LnkT110(){ call_or_link(VV[110],(void **)(void *)&Lnk110);} /* NODES-FROM-INDEX */
static void LnkT109(){ call_or_link(VV[109],(void **)(void *)&Lnk109);} /* INFO-GET-TAGS */
static void LnkT108(){ call_or_link(VV[108],(void **)(void *)&Lnk108);} /* SEARCH */
static void LnkT107(){ call_or_link(VV[107],(void **)(void *)&Lnk107);} /* FILE-SEARCH */
static void LnkT106(){ call_or_link(VV[106],(void **)(void *)&Lnk106);} /* FIX-LOAD-PATH */
static void LnkT105(){ call_or_link(VV[105],(void **)(void *)&Lnk105);} /* GET-INDEX-NODE */
static void LnkT104(){ call_or_link(VV[104],(void **)(void *)&Lnk104);} /* SHOW-INFO */
static void LnkT103(){ call_or_link(VV[103],(void **)(void *)&Lnk103);} /* GET-NODES */
static void LnkT102(){ call_or_link(VV[102],(void **)(void *)&Lnk102);} /* STRING-CONCATENATE */
static void LnkT101(){ call_or_link(VV[101],(void **)(void *)&Lnk101);} /* RE-QUOTE-STRING */
static void LnkT100(){ call_or_link(VV[100],(void **)(void *)&Lnk100);} /* POSITION */
static void LnkT99(){ call_or_link(VV[99],(void **)(void *)&Lnk99);} /* INFO-ERROR */
static void LnkT98(){ call_or_link(VV[98],(void **)(void *)&Lnk98);} /* GET-MATCH */
static void LnkT97(){ call_or_link(VV[97],(void **)(void *)&Lnk97);} /* ATOI */
static object  LnkTLI96(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[96],(void **)(void *)&LnkLI96,4353,first,ap);va_end(ap);return V1;} /* MATCH-BEGINNING */
static object  LnkTLI95(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[95],(void **)(void *)&LnkLI95,4353,first,ap);va_end(ap);return V1;} /* MATCH-END */
static object  LnkTLI94(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[94],(void **)(void *)&LnkLI94,first,ap);va_end(ap);return V1;} /* STRING-MATCH */
static void LnkT93(){ call_or_link(VV[93],(void **)(void *)&Lnk93);} /* FILE-TO-STRING */
static void LnkT92(){ call_or_link(VV[92],(void **)(void *)&Lnk92);} /* FREAD */
static void LnkT91(){ call_or_link(VV[91],(void **)(void *)&Lnk91);} /* OPEN */
static void LnkT90(){ call_or_link(VV[90],(void **)(void *)&Lnk90);} /* VECTOR-PUSH-EXTEND */
static void LnkT89(){ call_or_link(VV[89],(void **)(void *)&Lnk89);} /* MAKE-ARRAY */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

