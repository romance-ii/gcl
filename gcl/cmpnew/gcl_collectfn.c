
#include "cmpinclude.h"
#include "gcl_collectfn.h"
void init_gcl_collectfn(){do_init(VV);}
/*	function definition for MAKE-FN	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	{object V1;
	object V2;
	object V3;
	object V4;
	object V5;
	object V6;
	object V7;
	object V8;
	object V9;
	parse_key(vs_base,FALSE,FALSE,9,VV[7],VV[15],VV[84],VV[85],VV[86],VV[67],VV[68],VV[87],VV[88]);
	vs_top=sup;
	V1=(base[0]);
	V2=(base[1]);
	V3=(base[2]);
	V4=(base[3]);
	V5=(base[4]);
	V6=(base[5]);
	V7=(base[6]);
	V8=(base[7]);
	V9=(base[8]);
	base[18]= VV[0];
	base[19]= (V1);
	base[20]= (V2);
	base[21]= (V3);
	base[22]= (V4);
	base[23]= (V5);
	base[24]= (V6);
	base[25]= (V7);
	base[26]= (V8);
	base[27]= (V9);
	vs_top=(vs_base=base+18)+10;
	siLmake_structure();
	return;
	}
}
/*	function definition for ADD-CALLEE	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{register object V10;
	V10=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V10))==t_cons)){
	goto T12;}
	if(!((CMPcar((V10)))==(VV[1]))){
	goto T14;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T14;
T14:;
	V10= CMPcar((V10));
	goto TTL;
	goto T12;
T12:;
	{object V11;
	V11= (((V10))==(VV[2])?Ct:Cnil);
	if(((V11))==Cnil){
	goto T20;}
	base[1]= (V11);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T20;
T20:;
	if(((V10))==Cnil){
	goto T23;}
	{object V13;
	object V14;
	vs_base=vs_top;
	(void) (*Lnk89)();
	vs_top=sup;
	V13= vs_base[0];
	base[3]= V10;
	base[4]= STREF(object,(V13),16);
	vs_top=(vs_base=base+3)+2;
	Ladjoin();
	vs_top=sup;
	V14= vs_base[0];
	V15= Ct;
	STSET(object,(V13),16, (V14));
	base[3]= (V14);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T23;
T23:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for ADD-MACRO-CALLEE	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{register object V16;
	V16=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;{object V17;
	{register object V18;
	register object V19;
	V18= Cnil;
	V19= (VV[3]->s.s_dbind);
	goto T32;
T32:;
	if(((V19))==Cnil){
	goto T35;}
	goto T34;
	goto T35;
T35:;
	goto T33;
	goto T34;
T34:;
	{register object V20;
	V20= CMPcar((V19));
	V18= (V20);}
	if(!(type_of((V18))==t_cons)){
	goto T40;}
	if(!((CMPcar((V18)))==((V16)))){
	goto T40;}
	V17= Ct;
	goto T30;
	goto T40;
T40:;
	V19= CMPcdr((V19));
	goto T32;
	goto T33;
T33:;
	V17= Cnil;
	goto T30;
	V17= Cnil;
	goto T30;}
	goto T30;
T30:;
	if(V17==Cnil)goto T29;
	base[1]= V17;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T29;
T29:;}
	{object V22;
	object V23;
	vs_base=vs_top;
	(void) (*Lnk89)();
	vs_top=sup;
	V22= vs_base[0];
	base[3]= V16;
	base[4]= STREF(object,(V22),32);
	vs_top=(vs_base=base+3)+2;
	Ladjoin();
	vs_top=sup;
	V23= vs_base[0];
	V24= Ct;
	STSET(object,(V22),32, (V23));
	base[3]= (V23);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for CLEAR-CALL-TABLE	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	(VV[4]->s.s_dbind)= Cnil;
	(VV[5]->s.s_dbind)= Cnil;
	base[0]= VV[7];
	base[1]= VV[8];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk90)();
	vs_top=sup;
	(VV[6]->s.s_dbind)= vs_base[0];
	base[0]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	Lclrhash();
	vs_top=sup;
	{object V26;
	object V27;
	V26= (VV[9]->s.s_dbind);
	V27= (VV[6]->s.s_dbind);
	base[0]= VV[8];
	base[1]= (V26);
	base[2]= (V27);
	vs_top=(vs_base=base+0)+3;
	siLhash_set();
	return;}
}
/*	function definition for EMIT-FN	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	{object V28;
	V28=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	(VV[10]->s.s_dbind)= (V28);
	base[1]= (VV[10]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for TYPE-OR	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V29;
	register object V30;
	V29=(base[0]);
	V30=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(((V30))==(VV[11]))){
	goto T69;}
	base[2]= VV[11];
	vs_top=(vs_base=base+2)+1;
	return;
	goto T69;
T69:;
	{object V31= (V29);
	if((V31!= Cnil))goto T71;
	base[2]= (V30);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T71;
T71:;
	if((V31!= Ct)
	&& (V31!= VV[91]))goto T72;
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T72;
T72:;
	if((V31!= VV[12])
	&& (V31!= VV[92])
	&& (V31!= VV[93]))goto T73;
	if(!(((V30))==(VV[12]))){
	goto T75;}
	base[2]= VV[12];
	vs_top=(vs_base=base+2)+1;
	return;
	goto T75;
T75:;
	V29= Ct;
	goto TTL;
	goto T73;
T73:;
	base[2]= VV[11];
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for CURRENT-FN	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((VV[13]->s.s_dbind))==t_cons)){
	goto T81;}
	{register object x= CMPcar((VV[13]->s.s_dbind)),V32= VV[14];
	while(V32!=Cnil)
	if(eql(x,V32->c.c_car)){
	goto T85;
	}else V32=V32->c.c_cdr;
	goto T81;}
	goto T85;
T85:;
	if(!(type_of(CMPcadr((VV[13]->s.s_dbind)))==t_symbol)){
	goto T81;}
	base[0]= CMPcadr((VV[13]->s.s_dbind));
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T81;}
	if(((VV[4]->s.s_dbind))==Cnil){
	goto T91;}
	if(!(equal(CMPcadr((VV[13]->s.s_dbind)),STREF(object,(VV[4]->s.s_dbind),0)))){
	goto T91;}
	base[0]= (VV[4]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	return;
	goto T91;
T91:;
	base[0]= CMPcadr((VV[13]->s.s_dbind));
	base[1]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	(VV[4]->s.s_dbind)= vs_base[0];
	if(((VV[4]->s.s_dbind))!=Cnil){
	goto T95;}
	base[0]= VV[7];
	base[1]= CMPcadr((VV[13]->s.s_dbind));
	base[2]= VV[15];
	base[3]= CMPcar((VV[13]->s.s_dbind));
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk90)();
	vs_top=sup;
	(VV[4]->s.s_dbind)= vs_base[0];
	{object V33;
	object V34;
	object V35;
	V33= CMPcadr((VV[13]->s.s_dbind));
	V34= (VV[9]->s.s_dbind);
	V35= (VV[4]->s.s_dbind);
	base[1]= (V33);
	base[2]= (V34);
	base[3]= (V35);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;}
	(VV[5]->s.s_dbind)= make_cons((VV[4]->s.s_dbind),(VV[5]->s.s_dbind));
	goto T95;
T95:;
	base[0]= (VV[4]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	return;
	goto T81;
T81:;
	base[0]= (VV[6]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for WHO-CALLS	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	base[0]=MMcons(base[0],Cnil);
	vs_top=sup;
	base[1]=MMcons(Cnil,base[0]);
	base[2]=MMcons(Cnil,base[1]);
	base[3]= 
	make_cclosure_new(LC30,Cnil,base[2],Cdata);
	base[4]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+3)+2;
	Lmaphash();
	vs_top=sup;
	base[3]= (base[1]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	return;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for ADD-VALUE-TYPE	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	{object V36;
	object V37;
	V36=(base[0]);
	V37=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V38;
	vs_base=vs_top;
	(void) (*Lnk89)();
	vs_top=sup;
	V38= vs_base[0];
	if(((V37))==Cnil){
	goto T122;}
	{object V41;
	base[4]= V37;
	base[5]= STREF(object,V38,12);
	base[6]= VV[17];
	base[7]= VV[18];
	vs_top=(vs_base=base+4)+4;
	Ladjoin();
	vs_top=sup;
	V41= vs_base[0];
	V42= Ct;
	STSET(object,V38,12, (V41));
	base[4]= (V41);
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T122;
T122:;
	base[3]= STREF(object,(V38),8);
	base[4]= (V36);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk94)();
	vs_top=sup;
	V43= vs_base[0];
	V44= Ct;
	STSET(object,(V38),8, V43);
	base[3]= V43;
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for GET-VAR-TYPES	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V45;
	V45=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V46;
	register object V47;
	V46= Cnil;
	V47= (V45);
	{object V48;
	register object V49;
	register object V50;
	V48= Cnil;
	V49= Cnil;
	V50= Cnil;
	goto T133;
T133:;
	if(((V47))==Cnil){
	goto T136;}
	goto T135;
	goto T136;
T136:;
	goto T134;
	goto T135;
T135:;
	{register object V51;
	V51= CMPcar((V47));
	V46= (V51);}
	V50= STREF(object,(V46),20);
	if(((V49))==Cnil){
	goto T145;}
	{register object V52;
	register object V53;
	V52= (V49);
	V49= make_cons((V50),Cnil);
	V53= (V49);
	((V52))->c.c_cdr = (V53);
	goto T143;}
	goto T145;
T145:;
	V49= make_cons((V50),Cnil);
	V48= (V49);
	goto T143;
T143:;
	V47= CMPcdr((V47));
	goto T133;
	goto T134;
T134:;
	base[1]= (V48);
	vs_top=(vs_base=base+1)+1;
	return;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}}
	}
}
/*	function definition for RECORD-ARG-INFO	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{object V54;
	V54=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V55;
	vs_base=vs_top;
	(void) (*Lnk89)();
	vs_top=sup;
	V55= vs_base[0];
	base[2]= CMPcar((V54));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk95)();
	vs_top=sup;
	V56= vs_base[0];
	V57= Ct;
	STSET(object,(V55),24, V56);
	(void)(V56);
	{register object V58;
	register object V59;
	V59= CMPcdr((V54));
	V58= Cnil;
	{register object V60;
	register object V61;
	V60= Cnil;
	V61= VV[20];
	goto T166;
T166:;
	if(((V61))==Cnil){
	goto T169;}
	goto T168;
	goto T169;
T169:;
	goto T167;
	goto T168;
T168:;
	if(((V59))==Cnil){
	goto T172;}
	goto T171;
	goto T172;
T172:;
	goto T167;
	goto T171;
T171:;
	{register object V62;
	V62= CMPcar((V59));
	V58= (V62);}
	{register object V63;
	V63= CMPcar((V61));
	V60= (V63);}
	if(((V58))==Cnil){
	goto T180;}
	if(((V60))==Cnil){
	goto T180;}
	if((VV[11])==Cnil){
	goto T162;}
	goto T163;
	goto T180;
T180:;
	V59= CMPcdr((V59));
	V61= CMPcdr((V61));
	goto T166;
	goto T167;
T167:;
	goto T162;
	goto T162;}}
	goto T163;
T163:;
	V64= make_cons(VV[11],Cnil);
	V65= nconc(STREF(object,(V55),24),/* INLINE-ARGS */V64);
	V66= Ct;
	STSET(object,(V55),24, /* INLINE-ARGS */V65);
	base[2]= /* INLINE-ARGS */V65;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T162;
T162:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for GET-VALUE-TYPE	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	bds_check;
	{object V67;
	V67=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object x= (V67),V68= (VV[21]->s.s_dbind);
	while(V68!=Cnil)
	if(x==(V68->c.c_car)){
	goto T192;
	}else V68=V68->c.c_cdr;
	goto T191;}
	goto T192;
T192:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T191;
T191:;
	{object V69;
	V69= ON_STACK_CONS((V67),(VV[21]->s.s_dbind));
	bds_bind(VV[21],(V69));
	base[2]= (V67);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk96)();
	bds_unwind1;
	return;}
	}
}
/*	function definition for GET-VALUE-TYPE1	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	bds_check;
	{object V70;
	V70=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V71;
	V71= Cnil;
	bds_bind(VV[22],CMPmake_fixnum((long)(1)+(fix((VV[22]->s.s_dbind)))));
	if(!((fix((VV[22]->s.s_dbind)))>(100))){
	goto T198;}
	base[2]= VV[11];
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T198;
T198:;
	base[2]= (V70);
	base[3]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V71= vs_base[0];
	if(((V71))==Cnil){
	goto T201;}{object V72;
	V72= STREF(object,(V71),20);
	if(V72==Cnil)goto T206;
	base[2]= V72;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T206;
T206:;}
	{register object V73;
	V73= STREF(object,(V71),8);
	{register object V74;
	register object V75;
	V75= STREF(object,(V71),12);
	V74= Cnil;
	goto T211;
T211:;
	if(((V75))==Cnil){
	goto T214;}
	goto T213;
	goto T214;
T214:;
	goto T212;
	goto T213;
T213:;
	{register object V76;
	V76= CMPcar((V75));
	V74= (V76);}
	if(!(type_of((V74))==t_symbol)){
	goto T221;}
	base[2]= (V73);
	base[4]= (V74);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk97)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk94)();
	vs_top=sup;
	V73= vs_base[0];
	goto T219;
	goto T221;
T221:;
	if(!(type_of((V74))==t_cons)){
	goto T228;}
	if(!((CMPcar((V74)))==(VV[1]))){
	goto T228;}
	base[2]= (V73);
	if(!(eql(CMPcdr((V74)),small_fixnum(1)))){
	goto T236;}
	base[3]= Ct;
	goto T234;
	goto T236;
T236:;
	base[3]= VV[11];
	goto T234;
T234:;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk94)();
	vs_top=sup;
	V73= vs_base[0];
	goto T219;
	goto T228;
T228:;
	base[2]= VV[23];
	base[3]= (V74);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	vs_top=sup;
	goto T219;
T219:;
	V75= CMPcdr((V75));
	goto T211;
	goto T212;
T212:;
	if((V73)!=Cnil){
	goto T242;}{object V77;
	V77= STREF(object,(V71),8);
	if(V77==Cnil)goto T243;
	goto T242;
	goto T243;
T243:;}{object V78;
	V78= STREF(object,(V71),12);
	if(V78==Cnil)goto T245;
	goto T242;
	goto T245;
T245:;}
	V73= Ct;
	goto T242;
T242:;
	V79= Ct;
	STSET(object,(V71),20, (V73));
	(void)((V73));
	base[2]= (V73);
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;}}
	goto T201;
T201:;
	{object V80;
	{object V81 =((V70))->s.s_plist;
	 object ind= VV[24];
	while(V81!=Cnil){
	if(V81->c.c_car==ind){
	V80= (V81->c.c_cdr->c.c_car);
	goto T251;
	}else V81=V81->c.c_cdr->c.c_cdr;}
	V80= Cnil;}
	goto T251;
T251:;
	if(((V80))==Cnil){
	goto T253;}
	base[2]= (V80);
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T253;
T253:;
	{object V82;
	{object V83 =((V70))->s.s_plist;
	 object ind= VV[25];
	while(V83!=Cnil){
	if(V83->c.c_car==ind){
	V82= (V83->c.c_cdr->c.c_car);
	goto T255;
	}else V83=V83->c.c_cdr->c.c_cdr;}
	V82= Cnil;}
	goto T255;
T255:;
	if(((V82))==Cnil){
	goto T257;}
	base[2]= (V82);
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T257;
T257:;
	base[2]= VV[11];
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;}}}
	}
}
/*	function definition for RESULT-TYPE-FROM-LOC	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{register object V84;
	V84=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V84))==t_cons)){
	goto T260;}
	{object V85= CMPcar((V84));
	if((V85!= VV[93])
	&& (V85!= VV[92]))goto T262;
	base[1]= VV[12];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T262;
T262:;
	if((V85!= VV[19]))goto T263;
	base[1]= STREF(object,CMPcadr((V84)),20);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T263;
T263:;
	if(!(type_of(CMPcar((V84)))==t_symbol)){
	goto T265;}
	{object V86 =(CMPcar((V84)))->s.s_plist;
	 object ind= VV[26];
	while(V86!=Cnil){
	if(V86->c.c_car==ind){
	if(((V86->c.c_cdr->c.c_car))==Cnil){
	goto T265;}
	goto T268;
	}else V86=V86->c.c_cdr->c.c_cdr;}
	goto T265;}
	goto T268;
T268:;
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T265;
T265:;
	V87= list(3,VV[27],VV[11],(V84));
	(void)(print(/* INLINE-ARGS */V87,Cnil));
	base[1]= VV[11];
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T260;
T260:;
	if(((V84))==(Ct)){
	goto T270;}
	if(((V84))!=Cnil){
	goto T271;}
	goto T270;
T270:;
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T271;
T271:;
	V88= list(3,VV[27],VV[28],(V84));
	(void)(print(/* INLINE-ARGS */V88,Cnil));
	base[1]= VV[11];
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for SMALL-ALL-T-P	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	{object V89;
	object V90;
	V89=(base[0]);
	V90=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V90))==(Ct)){
	goto T276;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T276;
T276:;
	if(((long)length((V89)))<(10)){
	goto T278;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T278;
T278:;
	{register object V91;
	register object V92;
	V91= Cnil;
	V92= (V89);
	{register object V94;
	V94= Cnil;
	goto T281;
T281:;
	if(((V92))==Cnil){
	goto T284;}
	goto T283;
	goto T284;
T284:;
	goto T282;
	goto T283;
T283:;
	{register object V95;
	V95= CMPcar((V92));
	V91= (V95);}
	V94= (((V91))==(Ct)?Ct:Cnil);
	if(((V94))==Cnil){
	goto T292;}
	goto T291;
	goto T292;
T292:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T291;
T291:;
	V92= CMPcdr((V92));
	goto T281;
	goto T282;
T282:;
	base[2]= Ct;
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
/*	function definition for NO-MAKE-PROCLAIMS-HACK	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[98];
	base[1]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lmaphash();
	vs_top=sup;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for MAKE-PROCLAIMS	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	bds_check;
	if(vs_base>=vs_top){vs_top=sup;goto T302;}
	base[0]=MMcons(base[0],Cnil);
	vs_top=sup;
	goto T303;
	goto T302;
T302:;
	base[0]= (VV[29]->s.s_dbind);
	base[0]=MMcons(base[0],Cnil);
	goto T303;
T303:;
	base[4]= VV[17];
	base[5]= VV[18];
	vs_top=(vs_base=base+4)+2;
	Lmake_hash_table();
	vs_top=sup;
	base[1]= vs_base[0];
	base[1]=MMcons(base[1],base[0]);
	bds_bind(VV[30],Cnil);
	bds_bind(VV[31],Cnil);
	base[4]= (VV[33]->s.s_dbind);
	vs_top=(vs_base=base+4)+1;
	Lpackage_name();
	vs_top=sup;
	V96= vs_base[0];
	V97= list(2,VV[32],V96);
	(void)(print(/* INLINE-ARGS */V97,(base[0]->c.c_car)));
	base[4]=MMcons(Cnil,base[1]);
	base[5]=MMcons(Cnil,base[4]);
	base[6]= 
	make_cclosure_new(LC32,Cnil,base[5],Cdata);
	base[7]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+6)+2;
	Lmaphash();
	vs_top=sup;
	goto T311;
	goto T311;
T311:;
	base[4]= 
	make_cclosure_new(LC33,Cnil,base[1],Cdata);
	base[5]= (base[1]->c.c_car);
	vs_top=(vs_base=base+4)+2;
	Lmaphash();
	vs_top=sup;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	bds_unwind1;
	return;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	bds_unwind1;
	return;
}
/*	function definition for SETUP-SYS-PROCLAIMS	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;{object V98;
	base[0]= VV[39];
	base[1]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V98= vs_base[0];
	if(V98==Cnil)goto T320;
	base[0]= V98;
	vs_top=(vs_base=base+0)+1;
	return;
	goto T320;
T320:;}{object V99;
	{object V100 =(VV[39])->s.s_plist;
	 object ind= VV[40];
	while(V100!=Cnil){
	if(V100->c.c_car==ind){
	V99= (V100->c.c_cdr->c.c_car);
	goto T325;
	}else V100=V100->c.c_cdr->c.c_cdr;}
	V99= Cnil;}
	goto T325;
T325:;
	if(V99==Cnil)goto T324;
	base[0]= V99;
	vs_top=(vs_base=base+0)+1;
	return;
	goto T324;
T324:;}{object V101;
	base[1]= VV[41];
	base[2]= (VV[42]->s.s_dbind);
	base[3]= VV[43];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk99)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk100)();
	vs_top=sup;
	V101= vs_base[0];
	if(V101==Cnil)goto T326;
	base[0]= V101;
	vs_top=(vs_base=base+0)+1;
	return;
	goto T326;
T326:;}
	vs_base=vs_top;
	(void) (*Lnk101)();
	return;
}
/*	function definition for MAKE-ALL-PROCLAIMS	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{object V102;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V102=(base[0]);
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk102)();
	vs_top=sup;
	{register object V103;
	register object V104;
	V103= (V102);
	V104= CMPcar((V103));
	goto T337;
T337:;
	if(!(((V103))==Cnil)){
	goto T338;}
	goto T333;
	goto T338;
T338:;
	base[3]=VV[100]->s.s_gfdef;
	base[4]= (V104);
	vs_top=(vs_base=base+4)+1;
	Ldirectory();
	vs_top=sup;
	V107= vs_base[0];
	{object V105;
	object V106= V107;
	if(V106==Cnil){
	goto T342;}
	base[2]=V105=MMcons(Cnil,Cnil);
	goto T343;
T343:;
	base[4]= (V106->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk100)();
	vs_top=sup;
	(V105->c.c_car)= vs_base[0];
	if((V106=MMcdr(V106))==Cnil){
	goto T342;}
	V105=MMcdr(V105)=MMcons(Cnil,Cnil);
	goto T343;}
	goto T342;
T342:;
	V103= CMPcdr((V103));
	V104= CMPcar((V103));
	goto T337;}
	goto T333;
T333:;
	vs_base=vs_top;
	(void) (*Lnk103)();
	return;
	}
}
/*	function definition for WRITE-SYS-PROCLAIMS	*/

static void L20()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM20; VC20
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[44];
	base[2]= VV[45];
	base[3]= VV[46];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk104)();
	vs_top=sup;
	base[0]= vs_base[0];
	frs_push(FRS_PROTECT,Cnil);
	{object tag=Cnil;frame_ptr fr=NULL;object p;bool active;
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	base[2]= base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk105)();
	active=FALSE;}
	base[1]=Cnil;
	while(vs_base<vs_top)
	{base[1]=MMcons(vs_top[-1],base[1]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if((base[0])==Cnil){
	goto T359;}
	base[2]= base[0];
	vs_top=(vs_base=base+2)+1;
	Lclose();
	vs_top=sup;
	goto T359;
T359:;
	vs_base=vs_top=base+2;
	for(p= base[1];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	return;}}
}
/*	function definition for ADD-FN-DATA	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{object V108;
	V108=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V109;
	object V110;
	V109= Cnil;
	V110= Cnil;
	{register object V111;
	base[1]= (VV[47]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk106)();
	vs_top=sup;
	V110= vs_base[0];
	if(((V110))!=Cnil){
	goto T366;}
	V111= Cnil;
	goto T365;
	goto T366;
T366:;
	base[1]= (V110);
	vs_top=(vs_base=base+1)+1;
	Ltruename();
	vs_top=sup;
	V111= vs_base[0];
	goto T365;
T365:;
	{register object V112;
	register object V113;
	V112= (V108);
	V113= CMPcar((V112));
	goto T374;
T374:;
	if(!(((V112))==Cnil)){
	goto T375;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T375;
T375:;
	if(!(eql(STREF(object,(V113),0),VV[8]))){
	goto T379;}
	base[3]= VV[41];
	base[4]= VV[48];
	base[6]= (V111);
	vs_top=(vs_base=base+6)+1;
	Lnamestring();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk99)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lintern();
	vs_top=sup;
	V114= vs_base[0];
	V115= Ct;
	STSET(object,(V113),0, V114);
	(void)(V114);
	(void)(sputprop(STREF(object,(V113),0),VV[8],Ct));
	goto T379;
T379:;
	{register object V116;
	register object V117;
	register object V118;
	V116= STREF(object,(V113),0);
	V117= (VV[9]->s.s_dbind);
	V118= (V113);
	base[3]= (V116);
	base[4]= (V117);
	base[5]= (V118);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	base[2]= STREF(object,(V113),0);
	base[3]= (VV[49]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V109= vs_base[0];
	if(((V109))==Cnil){
	goto T396;}
	if(!(equal((V109),(V111)))){
	goto T402;}
	goto T396;
	goto T402;
T402:;
	base[2]= Ct;
	base[3]= VV[50];
	base[4]= STREF(object,(V113),0);
	base[5]= (V111);
	base[6]= (V109);
	vs_top=(vs_base=base+2)+5;
	Lformat();
	vs_top=sup;
	goto T396;
T396:;
	{register object V119;
	register object V120;
	register object V121;
	V119= STREF(object,(V113),0);
	V120= (VV[49]->s.s_dbind);
	V121= (V111);
	base[3]= (V119);
	base[4]= (V120);
	base[5]= (V121);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	V112= CMPcdr((V112));
	V113= CMPcar((V112));
	goto T374;}}}
	}
}
/*	function definition for DUMP-FN-DATA	*/

static void L22()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM22; VC22
	vs_check;
	bds_check;
	{VOL object V122;
	if(vs_base>=vs_top){vs_top=sup;goto T421;}
	V122=(base[0]);
	vs_top=sup;
	goto T422;
	goto T421;
T421:;
	V122= VV[51];
	goto T422;
T422:;
	base[4]= VV[52];
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	bds_bind(VV[33],vs_base[0]);
	bds_bind(VV[30],Cnil);
	bds_bind(VV[31],Cnil);
	base[5]= (V122);
	base[6]= VV[45];
	base[7]= VV[46];
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk104)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[4]=MMcons(base[4],Cnil);
	frs_push(FRS_PROTECT,Cnil);
	{object tag=Cnil;frame_ptr fr=NULL;object p;bool active;
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	base[6]= (base[4]->c.c_car);
	base[7]= VV[53];
	base[8]= VV[54];
	vs_top=(vs_base=base+6)+3;
	Lformat();
	vs_top=sup;
	base[6]= 
	make_cclosure_new(LC34,Cnil,base[4],Cdata);
	base[7]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+6)+2;
	Lmaphash();
	vs_top=sup;
	goto T435;
	goto T435;
T435:;
	(void)(princ(VV[55],(base[4]->c.c_car)));
	base[6]= (base[4]->c.c_car);
	vs_top=(vs_base=base+6)+1;
	Ltruename();
	active=FALSE;}
	base[5]=Cnil;
	while(vs_base<vs_top)
	{base[5]=MMcons(vs_top[-1],base[5]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if(((base[4]->c.c_car))==Cnil){
	goto T442;}
	base[6]= (base[4]->c.c_car);
	vs_top=(vs_base=base+6)+1;
	Lclose();
	vs_top=sup;
	goto T442;
T442:;
	vs_base=vs_top=base+6;
	for(p= base[5];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;}}
	}
}
/*	function definition for RECORD-CALL-INFO	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{object V123;
	register object V124;
	V123=(base[0]);
	V124=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V124))==Cnil){
	goto T446;}
	if(!(type_of((V124))==t_symbol)){
	goto T446;}
	base[2]= (V124);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk107)();
	vs_top=sup;
	goto T446;
T446:;
	if(!(((V123))==(VV[56]))){
	goto T452;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T452;
T452:;
	{object V125= (VV[57]->s.s_dbind);
	if((V125!= VV[108]))goto T455;
	if(!(((V123))==(VV[58]))){
	goto T457;}
	base[2]= Cnil;
	if((V124)!=Cnil){
	base[3]= (V124);
	goto T460;}
	base[3]= VV[59];
	goto T460;
T460:;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk109)();
	return;
	goto T457;
T457:;
	base[3]= (V123);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk110)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk109)();
	return;
	goto T455;
T455:;
	if((V125!= VV[111]))goto T464;
	base[2]= VV[12];
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk109)();
	return;
	goto T464;
T464:;
	if((V125!= VV[112]))goto T467;
	base[2]= Ct;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk109)();
	return;
	goto T467;
T467:;
	if((V125!= VV[113]))goto T470;
	(VV[60]->s.s_dbind)= make_cons((V124),Cnil);
	base[2]= (VV[60]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T470;
T470:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for LIST-UNDEFINED-FUNCTIONS	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]=MMcons(Cnil,Cnil);
	base[1]= 
	make_cclosure_new(LC35,Cnil,base[0],Cdata);
	base[2]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lmaphash();
	vs_top=sup;
	goto T472;
	goto T472;
T472:;
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	return;
}
/*	function definition for INIT-FN	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LIST-UNCALLED-FUNCTIONS	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	{object V126;
	base[2]=MMcons(small_fixnum(0),Cnil);
	base[3]= 
	make_cclosure_new(LC36,Cnil,base[2],Cdata);
	base[4]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+3)+2;
	Lmaphash();
	vs_top=sup;
	V126= (base[2]->c.c_car);
	goto T477;
	V126= Cnil;
	goto T477;
	V126= Cnil;
	goto T477;
T477:;
	base[2]= VV[17];
	base[3]= VV[63];
	base[4]= VV[64];
	base[5]= number_plus(small_fixnum(3),(V126));
	vs_top=(vs_base=base+2)+4;
	Lmake_hash_table();
	vs_top=sup;
	base[1]= vs_base[0];
	base[1]=MMcons(base[1],Cnil);
	base[2]= 
	make_cclosure_new(LC37,Cnil,base[1],Cdata);
	base[3]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lmaphash();
	vs_top=sup;
	goto T488;
	goto T488;
T488:;
	base[2]=MMcons(Cnil,base[1]);
	base[3]=MMcons(Cnil,base[2]);
	base[4]= 
	make_cclosure_new(LC38,Cnil,base[3],Cdata);
	base[5]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+4)+2;
	Lmaphash();
	vs_top=sup;
	base[4]= (base[2]->c.c_car);
	vs_top=(vs_base=base+4)+1;
	return;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	function definition for RECORD-FN	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	{object V127;
	object V128;
	object V129;
	object V130;
	V127=(base[0]);
	V128=(base[1]);
	V129=(base[2]);
	V130=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V130))!=Cnil){
	goto T498;}
	V130= Ct;
	goto T498;
T498:;
	if((VV[10]->s.s_dbind)==Cnil){
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	if((VV[66]->s.s_dbind)==Cnil){
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	{object V131;
	base[4]= VV[7];
	base[5]= (V127);
	base[6]= VV[15];
	base[7]= (V128);
	base[8]= VV[67];
	base[9]= (V130);
	base[10]= VV[68];
	base[11]= (V129);
	vs_top=(vs_base=base+4)+8;
	(void) (*Lnk90)();
	vs_top=sup;
	V131= vs_base[0];
	(VV[5]->s.s_dbind)= make_cons(V131,(VV[5]->s.s_dbind));
	{object V134;
	V134= (VV[9]->s.s_dbind);
	base[4]= V127;
	base[5]= (V134);
	base[6]= V131;
	vs_top=(vs_base=base+4)+3;
	siLhash_set();
	return;}}
	}
}
/*	function definition for GET-PACKAGES	*/

static void L28()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM28; VC28
	vs_check;
	bds_check;
	{VOL object V136;
	if(vs_base>=vs_top){vs_top=sup;goto T517;}
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T518;}
	V136=(base[1]);
	vs_top=sup;
	goto T519;
	goto T517;
T517:;
	base[0]= VV[69];
	goto T518;
T518:;
	V136= Cnil;
	goto T519;
T519:;
	bds_bind(VV[70],Ct);
	base[3]=alloc_frame_id();
	frs_push(FRS_CATCH,base[3]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	bds_unwind1;
	return;}
	else{
	if(((V136))!=Cnil){
	goto T522;}
	base[5]= base[0];
	base[6]= VV[45];
	base[7]= VV[46];
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk104)();
	vs_top=sup;
	base[4]= vs_base[0];
	frs_push(FRS_PROTECT,Cnil);
	{object tag=Cnil;frame_ptr fr=NULL;object p;bool active;
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	base[6]= base[4];
	base[7]= VV[71];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk114)();
	vs_top=sup;
	base[6]= base[4];
	base[7]= VV[72];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk114)();
	vs_top=sup;
	base[6]= base[4];
	base[7]= VV[73];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk114)();
	vs_top=sup;
	base[6]= base[4];
	base[7]= VV[74];
	vs_top=(vs_base=base+6)+2;
	Lformat();
	vs_top=sup;
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	unwind(frs_sch(base[3]),Cnil);
	active=FALSE;}
	base[5]=Cnil;
	while(vs_base<vs_top)
	{base[5]=MMcons(vs_top[-1],base[5]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if((base[4])==Cnil){
	goto T543;}
	base[6]= base[4];
	vs_top=(vs_base=base+6)+1;
	Lclose();
	vs_top=sup;
	goto T543;
T543:;
	vs_base=vs_top=base+6;
	for(p= base[5];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	vs_top=sup;}}
	goto T522;
T522:;
	{object V137;
	register object V138;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V137= vs_base[0];
	V138= CMPcar((V137));
	goto T550;
T550:;
	if(!(((V137))==Cnil)){
	goto T551;}
	frs_pop();
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	bds_unwind1;
	return;
	goto T551;
T551:;
	base[6]= (V138);
	vs_top=(vs_base=base+6)+1;
	Lpackage_name();
	vs_top=sup;
	V140= vs_base[0];
	{register object x= V140,V139= VV[75];
	while(V139!=Cnil)
	if(equal(x,V139->c.c_car)){
	goto T555;
	}else V139=V139->c.c_cdr;}
	base[6]= base[0];
	base[7]= VV[76];
	base[9]= (V138);
	vs_top=(vs_base=base+9)+1;
	Lpackage_name();
	vs_top=sup;
	base[8]= vs_base[0];
	base[9]= (V136);
	vs_top=(vs_base=base+6)+4;
	Lformat();
	vs_top=sup;
	{object V141= (V136);
	if((V141!= VV[71]))goto T566;
	bds_bind(VV[70],Ct);
	base[8]= (V138);
	vs_top=(vs_base=base+8)+1;
	Lpackage_name();
	vs_top=sup;
	V142= vs_base[0];
	base[8]= (V138);
	vs_top=(vs_base=base+8)+1;
	Lpackage_nicknames();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T572;}
	base[8]= (V138);
	vs_top=(vs_base=base+8)+1;
	Lpackage_nicknames();
	vs_top=sup;
	V144= vs_base[0];
	V143= list(2,VV[78],list(2,VV[36],V144));
	goto T570;
	goto T572;
T572:;
	V143= Cnil;
	goto T570;
T570:;
	base[7]= listA(5,VV[32],V142,VV[77],Cnil,V143);
	vs_top=(vs_base=base+7)+1;
	L29(base);
	vs_top=sup;
	bds_unwind1;
	goto T555;
	goto T566;
T566:;
	if((V141!= VV[72]))goto T577;
	bds_bind(VV[70],Ct);
	base[8]= (V138);
	vs_top=(vs_base=base+8)+1;
	Lpackage_name();
	vs_top=sup;
	V145= vs_base[0];
	base[9]= (V138);
	vs_top=(vs_base=base+9)+1;
	Lpackage_use_list();
	vs_top=sup;
	V149= vs_base[0];
	{object V147;
	object V148= V149;
	if(V148==Cnil){
	V146= Cnil;
	goto T582;}
	base[8]=V147=MMcons(Cnil,Cnil);
	goto T583;
T583:;
	base[9]= (V148->c.c_car);
	vs_top=(vs_base=base+9)+1;
	Lpackage_name();
	vs_top=sup;
	(V147->c.c_car)= vs_base[0];
	if((V148=MMcdr(V148))==Cnil){
	V146= base[8];
	goto T582;}
	V147=MMcdr(V147)=MMcons(Cnil,Cnil);
	goto T583;}
	goto T582;
T582:;
	V150= list(2,VV[36],V146);
	base[8]= (V138);
	vs_top=(vs_base=base+8)+1;
	Lpackage_nicknames();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T590;}
	base[8]= (V138);
	vs_top=(vs_base=base+8)+1;
	Lpackage_nicknames();
	vs_top=sup;
	V152= vs_base[0];
	V151= list(2,VV[78],list(2,VV[36],V152));
	goto T588;
	goto T590;
T590:;
	V151= Cnil;
	goto T588;
T588:;
	base[7]= listA(5,VV[32],V145,VV[77],/* INLINE-ARGS */V150,V151);
	vs_top=(vs_base=base+7)+1;
	L29(base);
	vs_top=sup;
	bds_unwind1;
	{object V153;
	object V154;
	V153= Cnil;
	bds_bind(VV[33],(V138));
	V154= Cnil;
	{object V155;
	register object V156;
	register object V157;
	base[7]= V138;
	vs_top=(vs_base=base+7)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T598;}
	V155= V138;
	goto T596;
	goto T598;
T598:;
	base[7]= coerce_to_string(V138);
	vs_top=(vs_base=base+7)+1;
	Lfind_package();
	vs_top=sup;
	V155= vs_base[0];
	goto T596;
T596:;
	V156= Cnil;
	V157= Cnil;
	{object V159;
	object V160;
	base[8]= (V155);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V159= vs_base[0];
	V160= small_fixnum(0);
	goto T606;
T606:;
	if(!(number_compare((V160),(V159))>=0)){
	goto T607;}
	V156= Cnil;
	goto T595;
	goto T607;
T607:;
	base[8]= (V155);
	base[9]= (V160);
	vs_top=(vs_base=base+8)+2;
	siLpackage_external();
	vs_top=sup;
	V157= vs_base[0];
	goto T614;
T614:;
	if(((V157))!=Cnil){
	goto T619;}
	goto T615;
	goto T619;
T619:;
	V156= CMPcar((V157));
	V153= make_cons(V156,(V153));
	base[8]= (V156);
	vs_top=(vs_base=base+8)+1;
	Lsymbol_package();
	vs_top=sup;
	V162= vs_base[0];
	if(!((V162)==((V138)))){
	goto T627;}
	goto T626;
	goto T627;
T627:;
	V154= make_cons(V156,(V154));
	goto T626;
T626:;
	V157= CMPcdr((V157));
	goto T614;
	goto T615;
T615:;
	goto T612;
	goto T612;
T612:;
	V160= one_plus((V160));
	goto T606;}}
	goto T595;
T595:;
	base[7]= list(2,VV[79],list(2,VV[36],(V154)));
	vs_top=(vs_base=base+7)+1;
	L29(base);
	vs_top=sup;
	base[7]= list(2,VV[72],list(2,VV[36],(V153)));
	vs_top=(vs_base=base+7)+1;
	L29(base);
	vs_top=sup;
	bds_unwind1;
	goto T555;}
	goto T577;
T577:;
	if((V141!= VV[73]))goto T640;
	bds_bind(VV[70],Ct);
	base[8]= (V138);
	vs_top=(vs_base=base+8)+1;
	Lpackage_name();
	vs_top=sup;
	V164= vs_base[0];
	base[7]= list(2,VV[32],V164);
	vs_top=(vs_base=base+7)+1;
	L29(base);
	vs_top=sup;
	bds_unwind1;
	{object V165;
	object V166;
	base[7]= VV[80];
	vs_top=(vs_base=base+7)+1;
	Lfind_package();
	vs_top=sup;
	base[6]= vs_base[0];
	V165= Cnil;
	V166= Cnil;
	bds_bind(VV[33],base[6]);
	{object V167;
	object V168;
	base[9]= (V138);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk116)();
	vs_top=sup;
	V167= vs_base[0];
	V168= CMPcar((V167));
	goto T652;
T652:;
	if(!(((V167))==Cnil)){
	goto T653;}
	goto T647;
	goto T653;
T653:;
	base[9]= (V168);
	vs_top=(vs_base=base+9)+1;
	Lsymbol_package();
	vs_top=sup;
	V169= vs_base[0];
	if(!((V169)==((V138)))){
	goto T659;}
	V165= make_cons(V168,(V165));
	goto T657;
	goto T659;
T659:;
	V166= make_cons(V168,(V166));
	goto T657;
T657:;
	V167= CMPcdr((V167));
	V168= CMPcar((V167));
	goto T652;}
	goto T647;
T647:;
	base[7]= list(2,VV[73],list(2,VV[36],(V165)));
	vs_top=(vs_base=base+7)+1;
	L29(base);
	vs_top=sup;
	base[7]= list(2,VV[81],list(2,VV[36],(V166)));
	vs_top=(vs_base=base+7)+1;
	L29(base);
	vs_top=sup;
	{object V172;
	V172= Cnil;
	{object V173;
	register object V174;
	register object V175;
	base[7]= V138;
	vs_top=(vs_base=base+7)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T677;}
	V173= V138;
	goto T675;
	goto T677;
T677:;
	base[7]= coerce_to_string(V138);
	vs_top=(vs_base=base+7)+1;
	Lfind_package();
	vs_top=sup;
	V173= vs_base[0];
	goto T675;
T675:;
	V174= Cnil;
	V175= Cnil;
	{object V177;
	register object V178;
	base[9]= (V173);
	vs_top=(vs_base=base+9)+1;
	Lpackage_use_list();
	vs_top=sup;
	V179= vs_base[0];
	V177= make_cons((V173),V179);
	V178= CMPcar((V177));
	goto T686;
T686:;
	if(!(((V177))==Cnil)){
	goto T687;}
	V174= Cnil;
	goto T674;
	goto T687;
T687:;
	{long V180;
	long V181;
	base[9]= (V178);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk115)();
	if(vs_base>=vs_top){vs_top=sup;goto T696;}
	V180= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T697;}
	V181= fix(vs_base[0]);
	vs_top=sup;
	goto T698;
	goto T696;
T696:;
	V180= fix(Cnil);
	goto T697;
T697:;
	V181= fix(Cnil);
	goto T698;
T698:;
	if(((V173))==((V178))){
	goto T699;}
	V181= 0;
	goto T699;
T699:;
	{object V182;
	register object V183;
	V184 = CMPmake_fixnum(V181);
	V185 = CMPmake_fixnum(V180);
	V182= number_plus(V184,V185);
	V183= small_fixnum(0);
	goto T706;
T706:;
	if(!(number_compare((V183),(V182))>=0)){
	goto T707;}
	goto T693;
	goto T707;
T707:;
	V186 = CMPmake_fixnum(V181);
	if(!(number_compare((V183),V186)<0)){
	goto T716;}
	base[10]= (V178);
	base[11]= (V183);
	vs_top=(vs_base=base+10)+2;
	siLpackage_internal();
	vs_top=sup;
	V175= vs_base[0];
	goto T714;
	goto T716;
T716:;
	base[10]= (V178);
	V187 = CMPmake_fixnum(V181);
	base[11]= number_minus((V183),V187);
	vs_top=(vs_base=base+10)+2;
	siLpackage_external();
	vs_top=sup;
	V175= vs_base[0];
	goto T714;
T714:;
	goto T712;
T712:;
	if(((V175))!=Cnil){
	goto T722;}
	goto T713;
	goto T722;
T722:;
	V174= CMPcar((V175));
	if(((V178))==((V173))){
	goto T728;}
	base[11]= symbol_name((V174));
	base[12]= (V173);
	vs_top=(vs_base=base+11)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[10]= vs_base[0];
	vs_top=(vs_base=base+10)+1;
	Llast();
	vs_top=sup;
	V188= vs_base[0];
	if(!((VV[82])==(CMPcar(V188)))){
	goto T727;}
	goto T728;
T728:;
	base[10]= (V174);
	vs_top=(vs_base=base+10)+1;
	Lsymbol_package();
	vs_top=sup;
	V189= vs_base[0];
	if((V189)==((V138))){
	goto T737;}
	V172= make_cons(V174,(V172));
	goto T737;
T737:;
	goto T727;
T727:;
	V175= CMPcdr((V175));
	goto T712;
	goto T713;
T713:;
	goto T710;
	goto T710;
T710:;
	V183= one_plus((V183));
	goto T706;}}
	goto T693;
T693:;
	V177= CMPcdr((V177));
	V178= CMPcar((V177));
	goto T686;}}
	goto T674;
T674:;
	base[7]= list(2,VV[79],list(2,VV[36],(V172)));
	vs_top=(vs_base=base+7)+1;
	L29(base);
	vs_top=sup;
	bds_unwind1;
	goto T555;}}
	goto T640;
T640:;
	FEerror("The ECASE key value ~s is illegal.",1,V141);
	goto T555;}
	goto T555;
T555:;
	V137= CMPcdr((V137));
	V138= CMPcar((V137));
	goto T550;}
	}
	}
}
/*	local function PR	*/

static void L29(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	{object V191;
	V191=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= base0[0];
	base[2]= VV[83];
	base[3]= (V191);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC38(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	{object V192;
	object V193;
	V192=(base[0]);
	V193=(base[1]);
	vs_top=sup;
	base[2]= (V192);
	base[3]= (base0[2]->c.c_car);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T764;}
	{register object x= STREF(object,(V193),4),V194= VV[65];
	while(V194!=Cnil)
	if(x==(V194->c.c_car)){
	goto T769;
	}else V194=V194->c.c_cdr;
	goto T764;}
	goto T769;
T769:;
	if(((base0[0]->c.c_car))==Cnil){
	goto T771;}
	{object V195;
	object V196;
	V195= (base0[0]->c.c_car);
	(base0[0]->c.c_car)= make_cons((V192),Cnil);
	V196= (base0[0]->c.c_car);
	((V195))->c.c_cdr = (V196);
	base[3]= (V196);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T771;
T771:;
	(base0[0]->c.c_car)= make_cons((V192),Cnil);
	(base0[1]->c.c_car)= (base0[0]->c.c_car);
	base[2]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T764;
T764:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC37(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	{object V197;
	object V198;
	V197=(base[0]);
	V198=(base[1]);
	vs_top=sup;
	{register object V199;
	register object V200;
	V200= STREF(object,(V198),16);
	V199= Cnil;
	goto T782;
T782:;
	if(((V200))==Cnil){
	goto T785;}
	goto T784;
	goto T785;
T785:;
	goto T783;
	goto T784;
T784:;
	{register object V201;
	V201= CMPcar((V200));
	V199= (V201);}
	{register object V202;
	register object V203;
	register object V204;
	V202= (V199);
	V203= (base0[0]->c.c_car);
	V204= Ct;
	base[2]= (V202);
	base[3]= (V203);
	base[4]= (V204);
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	vs_top=sup;}
	V200= CMPcdr((V200));
	goto T782;
	goto T783;
T783:;
	goto T779;
	goto T779;}
	goto T779;
T779:;
	{register object V205;
	register object V206;
	V206= STREF(object,(V198),32);
	V205= Cnil;
	goto T802;
T802:;
	if(((V206))==Cnil){
	goto T805;}
	goto T804;
	goto T805;
T805:;
	goto T803;
	goto T804;
T804:;
	{register object V207;
	V207= CMPcar((V206));
	V205= (V207);}
	{register object V208;
	register object V209;
	register object V210;
	V208= (V205);
	V209= (base0[0]->c.c_car);
	V210= Ct;
	base[2]= (V208);
	base[3]= (V209);
	base[4]= (V210);
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	vs_top=sup;}
	V206= CMPcdr((V206));
	goto T802;
	goto T803;
T803:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC36(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	{object V211;
	object V212;
	V211=(base[0]);
	V212=(base[1]);
	vs_top=sup;
	(base0[0]->c.c_car)= one_plus((base0[0]->c.c_car));
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC35(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_check;
	{object V213;
	object V214;
	V213=(base[0]);
	V214=(base[1]);
	vs_top=sup;
	{register object V215;
	register object V216;
	V216= STREF(object,(V214),16);
	V215= Cnil;
	goto T827;
T827:;
	if(((V216))==Cnil){
	goto T830;}
	goto T829;
	goto T830;
T830:;
	goto T828;
	goto T829;
T829:;
	{register object V217;
	V217= CMPcar((V216));
	V215= (V217);}
	base[2]= (V215);
	vs_top=(vs_base=base+2)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T835;}
	base[2]= (V215);
	base[3]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T835;}
	{object V218 =((V215))->s.s_plist;
	 object ind= VV[61];
	while(V218!=Cnil){
	if(V218->c.c_car==ind){
	if(((V218->c.c_cdr->c.c_car))!=Cnil){
	goto T835;}
	goto T845;
	}else V218=V218->c.c_cdr->c.c_cdr;}}
	goto T845;
T845:;
	{object V219 =((V215))->s.s_plist;
	 object ind= VV[62];
	while(V219!=Cnil){
	if(V219->c.c_car==ind){
	if(((V219->c.c_cdr->c.c_car))!=Cnil){
	goto T835;}
	goto T847;
	}else V219=V219->c.c_cdr->c.c_cdr;}}
	goto T847;
T847:;
	{object V220 =((V215))->s.s_plist;
	 object ind= VV[8];
	while(V220!=Cnil){
	if(V220->c.c_car==ind){
	if(((V220->c.c_cdr->c.c_car))!=Cnil){
	goto T835;}
	goto T848;
	}else V220=V220->c.c_cdr->c.c_cdr;}}
	goto T848;
T848:;
	{register object V221;
	V221= (V215);
	base[2]= (V221);
	base[3]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+2)+2;
	Ladjoin();
	vs_top=sup;
	(base0[0]->c.c_car)= vs_base[0];}
	goto T835;
T835:;
	V216= CMPcdr((V216));
	goto T827;
	goto T828;
T828:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC34(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	{object V222;
	object V223;
	V222=(base[0]);
	V223=(base[1]);
	vs_top=sup;
	base[2]= print((V223),(base0[0]->c.c_car));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC33(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	{object V224;
	object V225;
	V224=(base[0]);
	V225=(base[1]);
	vs_top=sup;
	V226= list(2,VV[35],list(2,VV[36],listA(3,VV[37],make_cons(VV[38],(V224)),(V225))));
	base[2]= print(/* INLINE-ARGS */V226,(base0[1]->c.c_car));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC32(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	{object V227;
	object V228;
	V227=(base[0]);
	V228=(base[1]);
	vs_top=sup;
	{object V229;
	if(!(eql(small_fixnum(1),STREF(object,(V228),28)))){
	goto T861;}
	V229= Ct;
	goto T860;
	goto T861;
T861:;
	V229= ((((STREF(object,(V228),4))==(VV[34])?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T860;
T860:;
	if(((V229))==Cnil){
	goto T864;}
	base[2]= (V229);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T864;
T864:;
	base[2]= (V227);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk97)();
	vs_top=sup;
	(base0[1]->c.c_car)= vs_base[0];
	(base0[0]->c.c_car)= STREF(object,(V228),24);
	{object V231;
	object V232;
	object V233;
	V231= list(2,(base0[0]->c.c_car),(base0[1]->c.c_car));
	V232= (base0[2]->c.c_car);
	base[4]= (V231);
	base[5]= (V232);
	vs_top=(vs_base=base+4)+2;
	Lgethash();
	vs_top=sup;
	V234= vs_base[0];
	V233= make_cons(V227,V234);
	base[4]= (V231);
	base[5]= (V232);
	base[6]= (V233);
	vs_top=(vs_base=base+4)+3;
	siLhash_set();
	return;}}
	}
}
/*	local function CLOSURE	*/

static void LC31(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	{object V235;
	object V236;
	V235=(base[0]);
	V236=(base[1]);
	vs_top=sup;
	V237= Ct;
	STSET(object,(V236),28, small_fixnum(1));
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC30(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	{object V238;
	object V239;
	V238=(base[0]);
	V239=(base[1]);
	vs_top=sup;
	{register object x= (base0[2]->c.c_car),V240= STREF(object,(V239),16);
	while(V240!=Cnil)
	if(eql(x,V240->c.c_car)){
	goto T883;
	}else V240=V240->c.c_cdr;}
	{register object x= (base0[2]->c.c_car),V241= STREF(object,(V239),32);
	while(V241!=Cnil)
	if(eql(x,V241->c.c_car)){
	goto T887;
	}else V241=V241->c.c_cdr;
	goto T884;}
	goto T887;
T887:;
	goto T883;
T883:;
	if(((base0[0]->c.c_car))==Cnil){
	goto T889;}
	{object V242;
	object V243;
	V242= (base0[0]->c.c_car);
	(base0[0]->c.c_car)= make_cons((V238),Cnil);
	V243= (base0[0]->c.c_car);
	((V242))->c.c_cdr = (V243);
	base[3]= (V243);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T889;
T889:;
	(base0[0]->c.c_car)= make_cons((V238),Cnil);
	(base0[1]->c.c_car)= (base0[0]->c.c_car);
	base[2]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T884;
T884:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
static void LnkT116(){ call_or_link(VV[116],(void **)(void *)&Lnk116);} /* PACKAGE-SHADOWING-SYMBOLS */
static void LnkT115(){ call_or_link(VV[115],(void **)(void *)&Lnk115);} /* PACKAGE-SIZE */
static void LnkT114(){ call_or_link(VV[114],(void **)(void *)&Lnk114);} /* GET-PACKAGES */
static void LnkT110(){ call_or_link(VV[110],(void **)(void *)&Lnk110);} /* RESULT-TYPE-FROM-LOC */
static void LnkT109(){ call_or_link(VV[109],(void **)(void *)&Lnk109);} /* ADD-VALUE-TYPE */
static void LnkT107(){ call_or_link(VV[107],(void **)(void *)&Lnk107);} /* ADD-CALLEE */
static void LnkT106(){ call_or_link(VV[106],(void **)(void *)&Lnk106);} /* FP-INPUT-STREAM */
static void LnkT105(){ call_or_link(VV[105],(void **)(void *)&Lnk105);} /* MAKE-PROCLAIMS */
static void LnkT104(){ call_or_link(VV[104],(void **)(void *)&Lnk104);} /* OPEN */
static void LnkT103(){ call_or_link(VV[103],(void **)(void *)&Lnk103);} /* WRITE-SYS-PROCLAIMS */
static void LnkT102(){ call_or_link(VV[102],(void **)(void *)&Lnk102);} /* SETUP-SYS-PROCLAIMS */
static void LnkT101(){ call_or_link(VV[101],(void **)(void *)&Lnk101);} /* NO-MAKE-PROCLAIMS-HACK */
static void LnkT100(){ call_or_link(VV[100],(void **)(void *)&Lnk100);} /* LOAD */
static void LnkT99(){ call_or_link(VV[99],(void **)(void *)&Lnk99);} /* CONCATENATE */
static void LnkT97(){ call_or_link(VV[97],(void **)(void *)&Lnk97);} /* GET-VALUE-TYPE */
static void LnkT96(){ call_or_link(VV[96],(void **)(void *)&Lnk96);} /* GET-VALUE-TYPE1 */
static void LnkT95(){ call_or_link(VV[95],(void **)(void *)&Lnk95);} /* GET-VAR-TYPES */
static void LnkT94(){ call_or_link(VV[94],(void **)(void *)&Lnk94);} /* TYPE-OR */
static void LnkT90(){ call_or_link(VV[90],(void **)(void *)&Lnk90);} /* MAKE-FN */
static void LnkT89(){ call_or_link(VV[89],(void **)(void *)&Lnk89);} /* CURRENT-FN */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

