
#include "cmpinclude.h"
#include "gcl_cmpinline.h"
void init_gcl_cmpinline(){do_init(VV);}
/*	local entry for function MAKE-INFO	*/

static object LI1(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{object V1;
	object V2;
	object V3;
	object V4;
	object V5;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI1key,first,ap);
	V1=(Vcs[0]);
	V2=(Vcs[1]);
	if(Vcs[2]==0){
	V3= Ct;
	}else{
	V3=(Vcs[2]);}
	V4=(Vcs[3]);
	V5=(Vcs[4]);
	base[0]= VV[0];
	base[1]= (V1);
	base[2]= (V2);
	base[3]= (V3);
	base[4]= (V4);
	base[5]= (V5);
	vs_top=(vs_base=base+0)+6;
	siLmake_structure();
	vs_top=sup;
	{object V6 = vs_base[0];
	VMR1(V6)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function ADD-INFO	*/

static object LI2(V9,V10)

register object V9;object V10;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	V11= append(STREF(object,(V10),0),STREF(object,(V9),0));
	V12= Ct;
	STSET(object,(V9),0, /* INLINE-ARGS */V11);
	(void)(/* INLINE-ARGS */V11);
	V13= append(STREF(object,(V10),4),STREF(object,(V9),4));
	V14= Ct;
	STSET(object,(V9),4, /* INLINE-ARGS */V13);
	(void)(/* INLINE-ARGS */V13);
	if((STREF(object,(V10),12))==Cnil){
	goto T11;}
	V15= Ct;
	STSET(object,(V9),12, Ct);
	{object V16 = Ct;
	VMR2(V16)}
	goto T11;
T11:;
	{object V17 = Cnil;
	VMR2(V17)}
	return Cnil;
}
/*	local entry for function ARGS-INFO-CHANGED-VARS	*/

static object LI3(V20,V21)

register object V20;object V21;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V22= STREF(object,(V20),4);
	if((V22== VV[71])
	|| (V22== VV[45])
	|| (V22== VV[72])
	|| (V22== VV[46])
	|| (V22== VV[47]))goto T14;
	if((V22!= VV[18]))goto T13;
	goto T14;
T14:;
	{register object V23;
	register object V24;
	V23= (V21);
	V24= CMPcar((V23));
	goto T18;
T18:;
	if(!(((V23))==Cnil)){
	goto T19;}
	{object V25 = Cnil;
	VMR3(V25)}
	goto T19;
T19:;
	{register object x= (V20),V26= STREF(object,CMPcadr((V24)),0);
	while(V26!=Cnil)
	if(eql(x,V26->c.c_car)){
	goto T25;
	}else V26=V26->c.c_cdr;
	goto T23;}
	goto T25;
T25:;
	{object V27 = Ct;
	VMR3(V27)}
	goto T23;
T23:;
	V23= CMPcdr((V23));
	V24= CMPcar((V23));
	goto T18;}
	goto T13;
T13:;
	if((V22!= VV[73]))goto T31;
	{object V28 = Cnil;
	VMR3(V28)}
	goto T31;
T31:;
	{register object V29;
	register object V30;
	V29= (V21);
	V30= CMPcar((V29));
	goto T35;
T35:;
	if(!(((V29))==Cnil)){
	goto T36;}
	{object V31 = Cnil;
	VMR3(V31)}
	goto T36;
T36:;
	{register object x= (V20),V32= STREF(object,CMPcadr((V30)),0);
	while(V32!=Cnil)
	if(eql(x,V32->c.c_car)){
	goto T41;
	}else V32=V32->c.c_cdr;}
	if((STREF(object,CMPcadr((V30)),12))==Cnil){
	goto T40;}
	goto T41;
T41:;
	{object V33 = Ct;
	VMR3(V33)}
	goto T40;
T40:;
	V29= CMPcdr((V29));
	V30= CMPcar((V29));
	goto T35;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ARGS-INFO-REFERRED-VARS	*/

static object LI4(V36,V37)

register object V36;object V37;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{object V38= STREF(object,(V36),4);
	if((V38== VV[71])
	|| (V38== VV[73])
	|| (V38== VV[45])
	|| (V38== VV[72])
	|| (V38== VV[46]))goto T51;
	if((V38!= VV[47])
	&& (V38!= VV[18]))goto T50;
	goto T51;
T51:;
	{register object V39;
	register object V40;
	V39= (V37);
	V40= CMPcar((V39));
	goto T55;
T55:;
	if(!(((V39))==Cnil)){
	goto T56;}
	{object V41 = Cnil;
	VMR4(V41)}
	goto T56;
T56:;
	{register object x= (V36),V42= STREF(object,CMPcadr((V40)),4);
	while(V42!=Cnil)
	if(eql(x,V42->c.c_car)){
	goto T62;
	}else V42=V42->c.c_cdr;
	goto T60;}
	goto T62;
T62:;
	{object V43 = Ct;
	VMR4(V43)}
	goto T60;
T60:;
	V39= CMPcdr((V39));
	V40= CMPcar((V39));
	goto T55;}
	goto T50;
T50:;
	{register object V44;
	register object V45;
	V44= (V37);
	V45= CMPcar((V44));
	goto T71;
T71:;
	if(!(((V44))==Cnil)){
	goto T72;}
	{object V46 = Cnil;
	VMR4(V46)}
	goto T72;
T72:;
	{register object x= (V36),V47= STREF(object,CMPcadr((V45)),4);
	while(V47!=Cnil)
	if(eql(x,V47->c.c_car)){
	goto T77;
	}else V47=V47->c.c_cdr;}
	if((STREF(object,CMPcadr((V45)),12))==Cnil){
	goto T76;}
	goto T77;
T77:;
	{object V48 = Ct;
	VMR4(V48)}
	goto T76;
T76:;
	V44= CMPcdr((V44));
	V45= CMPcar((V44));
	goto T71;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INC-INLINE-BLOCKS	*/

static object LI5()

{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	if(!(type_of((VV[2]->s.s_dbind))==t_cons)){
	goto T87;}
	{object V49;
	object V50;
	V49= (VV[2]->s.s_dbind);
	V50= number_plus(CMPcar((V49)),small_fixnum(1));
	((V49))->c.c_car = (V50);
	{object V51 = (V50);
	VMR5(V51)}}
	goto T87;
T87:;
	(VV[2]->s.s_dbind)= number_plus((VV[2]->s.s_dbind),small_fixnum(1));
	{object V52 = (VV[2]->s.s_dbind);
	VMR5(V52)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INLINE-ARGS	*/

static object LI6(object V54,object V53,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	bds_check;
	{object V55;
	object V56;
	object V57;
	va_start(ap,first);
	V55= V54;
	V56= V53;
	narg = narg - 2;
	if (narg <= 0) goto T93;
	else {
	V57= first;}
	--narg; goto T94;
	goto T93;
T93:;
	V57= Cnil;
	goto T94;
T94:;
	{register object V58;
	register object V59;
	V58= Cnil;
	V59= Cnil;
	{register object V60;
	object V61;
	V60= (V55);
	V61= (V56);
	goto T99;
T99:;
	if(!(((V60))==Cnil)){
	goto T100;}
	{object V62 = reverse((V58));
	VMR6(V62)}
	goto T100;
T100:;
	{register object V63;
	register object V64;
	V63= CMPcar((V60));
	V64= CMPcar((V61));
	{object V65= CMPcar((V63));
	if((V65!= VV[14]))goto T107;
	{object V66;
	V66= (*(LnkLI74))(CMPcaddr((V63)),(V64));
	V58= make_cons((V66),(V58));
	goto T104;}
	goto T107;
T107:;
	if((V65!= VV[1]))goto T110;
	if(((*(LnkLI75))(CMPcaaddr((V63)),CMPcdr((V60))))==Cnil){
	goto T112;}
	{register object x= STREF(object,CMPcaaddr((V63)),4),V67= (VV[3]->s.s_dbind);
	while(V67!=Cnil)
	if(eql(x,V67->c.c_car)){
	goto T117;
	}else V67=V67->c.c_cdr;
	goto T115;}
	goto T117;
T117:;
	if(!(((V64))==(STREF(object,CMPcaaddr((V63)),4)))){
	goto T115;}
	{object V68;
	(VV[4]->s.s_dbind)= number_plus((VV[4]->s.s_dbind),small_fixnum(1));
	V68= (VV[4]->s.s_dbind);
	princ_str("\n	{",VV[5]);
	V69= (*(LnkLI77))((V64));
	(void)((*(LnkLI76))(/* INLINE-ARGS */V69));
	princ_char(86,VV[5]);
	(void)((*(LnkLI76))((V68)));
	princ_str("= V",VV[5]);
	(void)((*(LnkLI76))(STREF(object,CMPcaaddr((V63)),16)));
	princ_char(59,VV[5]);
	{object V70;
	V70= list(3,VV[6],(V68),VV[7]);
	V58= make_cons((V70),(V58));}
	(void)((*(LnkLI78))());
	goto T104;}
	goto T115;
T115:;
	{object V71;
	V71= (*(LnkLI79))();
	princ_str("\n	",VV[5]);
	(void)((*(LnkLI76))((V71)));
	princ_str("= ",VV[5]);
	(void)((*(LnkLI80))(CMPcaaddr((V63)),CMPcadr(CMPcaddr((V63)))));
	princ_char(59,VV[5]);
	{object V72;
	V72= (*(LnkLI74))((V71),(V64));
	V58= make_cons((V72),(V58));
	goto T104;}}
	goto T112;
T112:;
	{register object x= STREF(object,CMPcaaddr((V63)),4),V73= VV[8];
	while(V73!=Cnil)
	if(eql(x,V73->c.c_car)){
	goto T145;
	}else V73=V73->c.c_cdr;
	goto T143;}
	goto T145;
T145:;
	if(((V64))==(STREF(object,CMPcaaddr((V63)),4))){
	goto T143;}
	{object V74;
	V74= (VFUN_NARGS=1,(*(LnkLI81))((V64)));
	princ_str("\n	V",VV[5]);
	(void)((*(LnkLI76))((V74)));
	princ_str(" = ",VV[5]);
	V75= make_cons(VV[1],CMPcaddr((V63)));
	V76= (*(LnkLI74))(/* INLINE-ARGS */V75,(V64));
	(void)((*(LnkLI76))(/* INLINE-ARGS */V76));
	princ_char(59,VV[5]);
	{object V77;
	V77= list(2,VV[6],(V74));
	V58= make_cons((V77),(V58));
	goto T104;}}
	goto T143;
T143:;
	{object V78;
	V79= make_cons(VV[1],CMPcaddr((V63)));
	V78= (*(LnkLI74))(/* INLINE-ARGS */V79,(V64));
	V58= make_cons((V78),(V58));
	goto T104;}
	goto T110;
T110:;
	if((V65!= VV[82]))goto T158;
	{object V80;
	V80= CMPcaddr((V63));
	if(((*(LnkLI83))((V80)))!=Cnil){
	goto T163;}
	goto T160;
	goto T163;
T163:;
	V59= (*(LnkLI84))((V80),CMPcadddr((V63)),STREF(object,CMPcadr((V63)),8));
	if(((V59))!=Cnil){
	goto T165;}
	goto T160;
	goto T165;
T165:;
	(void)((*(LnkLI85))((V59)));}
	{register object V81;
	V81= (*(LnkLI86))((V59),CMPcadddr((V63)));
	base[0]= small_fixnum(0);
	base[1]= CMPcaddr((V59));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T172;}
	if(((VV[9]->s.s_dbind))==Cnil){
	goto T170;}
	goto T172;
T172:;
	{register object x= CMPcadr((V59)),V82= VV[10];
	while(V82!=Cnil)
	if(eql(x,V82->c.c_car)){
	goto T179;
	}else V82=V82->c.c_cdr;
	goto T171;}
	goto T179;
T179:;
	if(((V64))==(CMPcadr((V59)))){
	goto T171;}
	goto T170;
T170:;
	{object V83;
	V83= (VFUN_NARGS=1,(*(LnkLI81))((V64)));
	princ_str("\n	V",VV[5]);
	(void)((*(LnkLI76))((V83)));
	princ_str(" = ",VV[5]);
	V84= (*(LnkLI74))((V81),(V64));
	(void)((*(LnkLI76))(/* INLINE-ARGS */V84));
	princ_char(59,VV[5]);
	{object V85;
	V85= list(2,VV[6],(V83));
	V58= make_cons((V85),(V58));
	goto T104;}}
	goto T171;
T171:;
	if(((*(LnkLI87))(CMPcdr((V60)),CMPcdr((V61))))!=Cnil){
	goto T190;}
	base[0]= small_fixnum(0);
	base[1]= CMPcaddr((V59));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T194;}
	if(((V57))==Cnil){
	goto T190;}
	{register object x= (V57),V86= VV[11];
	while(V86!=Cnil)
	if(x==(V86->c.c_car)){
	goto T201;
	}else V86=V86->c.c_cdr;
	goto T190;}
	goto T201;
T201:;
	goto T194;
T194:;
	base[0]= small_fixnum(4);
	base[1]= CMPcaddr((V59));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T190;}
	base[0]= small_fixnum(1);
	base[1]= CMPcaddr((V59));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T191;}
	if((CMPcdr((V60)))==Cnil){
	goto T191;}
	goto T190;
T190:;
	{object V87;
	V87= Cnil;
	if(!(((V64))==(Ct))){
	goto T213;}
	V87= (VFUN_NARGS=0,(*(LnkLI81))());
	princ_str("\n	V",VV[5]);
	(void)((*(LnkLI76))((V87)));
	princ_str("= ",VV[5]);
	base[0]= (V81);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk88)();
	vs_top=sup;
	goto T211;
	goto T213;
T213:;
	(VV[4]->s.s_dbind)= number_plus((VV[4]->s.s_dbind),small_fixnum(1));
	V87= (VV[4]->s.s_dbind);
	princ_str("\n	{",VV[5]);
	V88= (*(LnkLI77))((V64));
	(void)((*(LnkLI76))(/* INLINE-ARGS */V88));
	princ_char(86,VV[5]);
	(void)((*(LnkLI76))((V87)));
	princ_str("= ",VV[5]);
	{object V89= (V64);
	if((V89!= VV[45]))goto T232;
	base[0]= (V81);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk89)();
	vs_top=sup;
	goto T231;
	goto T232;
T232:;
	if((V89!= VV[40]))goto T234;
	(void)((VFUN_NARGS=2,(*(LnkLI90))((V81),VV[7])));
	goto T231;
	goto T234;
T234:;
	if((V89!= VV[72]))goto T235;
	base[0]= (V81);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk91)();
	vs_top=sup;
	goto T231;
	goto T235;
T235:;
	if((V89!= VV[46]))goto T237;
	base[0]= (V81);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk92)();
	vs_top=sup;
	goto T231;
	goto T237;
T237:;
	if((V89!= VV[47]))goto T239;
	base[0]= (V81);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk93)();
	vs_top=sup;
	goto T231;
	goto T239;
T239:;
	base[0]= (V81);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk88)();
	vs_top=sup;}
	goto T231;
T231:;
	(void)((*(LnkLI78))());
	goto T211;
T211:;
	princ_char(59,VV[5]);
	{object V90;
	V90= list(3,VV[6],(V87),VV[7]);
	V58= make_cons((V90),(V58));
	goto T104;}}
	goto T191;
T191:;
	{object V91;
	V91= (*(LnkLI74))((V81),(V64));
	V58= make_cons((V91),(V58));
	goto T104;}}
	goto T160;
T160:;
	{object V92;
	if(((VV[9]->s.s_dbind))==Cnil){
	goto T250;}
	V92= list(2,VV[6],(VFUN_NARGS=0,(*(LnkLI81))()));
	goto T248;
	goto T250;
T250:;
	V92= list(2,VV[12],(*(LnkLI94))());
	goto T248;
T248:;
	bds_bind(VV[13],(V92));
	V93= (*(LnkLI95))((V63));
	bds_unwind1;
	{object V94;
	V94= (*(LnkLI74))((V92),(V64));
	V58= make_cons((V94),(V58));
	goto T104;}}
	goto T158;
T158:;
	if((V65!= VV[96]))goto T255;
	{object V95;
	V95= (*(LnkLI97))(CMPcdr((V63)),(V64));
	V58= make_cons((V95),(V58));
	goto T104;}
	goto T255;
T255:;
	if((V65!= VV[98]))goto T258;
	{object V96;
	object V97;
	V96= CMPcaddr((V63));
	V97= CMPcadddr((V63));
	base[0]= make_cons(VV[1],(V96));
	bds_bind(VV[13],base[0]);
	V98= (*(LnkLI95))((V97));
	bds_unwind1;
	if(!((CMPcar((V97)))==(VV[14]))){
	goto T264;}
	{object V99;
	V99= (*(LnkLI74))(CMPcaddr((V97)),(V64));
	V58= make_cons((V99),(V58));
	goto T104;}
	goto T264;
T264:;
	V60= listA(3,(V63),list(3,VV[1],CMPcadr((V63)),(V96)),CMPcdr((V60)));
	V61= make_cons((V64),(V61));
	goto T104;}
	goto T258;
T258:;
	{object V100;
	if(((VV[9]->s.s_dbind))==Cnil){
	goto T273;}
	if(!(((V64))==(Ct))){
	goto T276;}
	V100= list(2,VV[6],(VFUN_NARGS=0,(*(LnkLI81))()));
	goto T271;
	goto T276;
T276:;
	{object V101;
	(VV[4]->s.s_dbind)= number_plus((VV[4]->s.s_dbind),small_fixnum(1));
	V101= make_cons((V64),(VV[4]->s.s_dbind));
	(VV[15]->s.s_dbind)= make_cons((V101),(VV[15]->s.s_dbind));}
	{register object x= (V64),V103= (VV[3]->s.s_dbind);
	while(V103!=Cnil)
	if(eql(x,V103->c.c_car)){
	goto T285;
	}else V103=V103->c.c_cdr;
	goto T284;}
	goto T285;
T285:;
	V102= (V64);
	goto T282;
	goto T284;
T284:;
	V102= VV[18];
	goto T282;
T282:;
	V104= (VFUN_NARGS=6,(*(LnkLI99))(VV[16],(V64),VV[17],V102,VV[19],CMPcdar((VV[15]->s.s_dbind))));
	V100= list(3,VV[1],/* INLINE-ARGS */V104,Cnil);
	goto T271;
	goto T273;
T273:;
	V100= list(2,VV[12],(*(LnkLI94))());
	goto T271;
T271:;
	bds_bind(VV[13],(V100));
	(void)((*(LnkLI95))((V63)));
	{object V105;
	V105= (*(LnkLI74))((V100),(V64));
	V58= make_cons((V105),(V58));
	bds_unwind1;}}}}
	goto T104;
T104:;
	V60= CMPcdr((V60));
	V61= CMPcdr((V61));
	goto T99;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function COERCE-LOC	*/

static object LI7(V108,V109)

register object V108;object V109;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V110= (V109);
	if((V110!= VV[45]))goto T293;
	{object V111 = list(2,VV[20],(V108));
	VMR7(V111)}
	goto T293;
T293:;
	if((V110!= VV[40]))goto T294;
	{object V112 = list(2,VV[21],(V108));
	VMR7(V112)}
	goto T294;
T294:;
	if((V110!= VV[72]))goto T295;
	{object V113 = list(2,VV[22],(V108));
	VMR7(V113)}
	goto T295;
T295:;
	if((V110!= VV[46]))goto T296;
	{object V114 = list(2,VV[23],(V108));
	VMR7(V114)}
	goto T296;
T296:;
	if((V110!= VV[47]))goto T297;
	{object V115 = list(2,VV[24],(V108));
	VMR7(V115)}
	goto T297;
T297:;
	{object V116 = (V108);
	VMR7(V116)}}
	return Cnil;
}
/*	local entry for function GET-INLINE-LOC	*/

static object LI8(V119,V120)

object V119;object V120;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V121;
	object V122;
	V121= CMPcar(CMPcdddr((V119)));
	V122= Cnil;
	V122= (VFUN_NARGS=3,(*(LnkLI7))((V120),CMPcar((V119)),(V121)));
	if(!(type_of((V121))==t_string)){
	goto T302;}
	if(!((((V121))->ust.ust_self[0])==(64))){
	goto T302;}
	{register long V123;
	object V124;
	V123= 1;
	V124= Cnil;
	{unsigned char V125;
	V125= ((V121))->ust.ust_self[V123];
	goto T311;
T311:;
	if(!((V125)==(59))){
	goto T312;}
	V123= (long)(V123)+(1);
	goto T308;
	goto T312;
T312:;
	{object V126;
	V126= CMPmake_fixnum((long)((long)(V125))-(48));
	V124= make_cons((V126),(V124));}
	V123= (long)(V123)+(1);
	V125= ((V121))->ust.ust_self[V123];
	goto T311;}
	goto T308;
T308:;
	{object V127;
	long V128;
	register object V129;
	V128= 0;
	V127= (V122);
	V129= Cnil;
	goto T327;
T327:;
	if(!(((V127))==Cnil)){
	goto T328;}
	V122= reverse((V129));
	goto T302;
	goto T328;
T328:;
	V131 = CMPmake_fixnum(V128);
	{register object x= V131,V130= (V124);
	while(V130!=Cnil)
	if(eql(x,V130->c.c_car)){
	goto T336;
	}else V130=V130->c.c_cdr;
	goto T335;}
	goto T336;
T336:;
	{register object V132;
	register object V133;
	object V134;
	V132= CMPcar((V127));
	V133= (V132);
	V134= Cnil;
	if(!(type_of((V132))==t_cons)){
	goto T340;}
	{register object x= CMPcar((V132)),V135= VV[27];
	while(V135!=Cnil)
	if(eql(x,V135->c.c_car)){
	goto T344;
	}else V135=V135->c.c_cdr;
	goto T340;}
	goto T344;
T344:;
	V134= CMPcar((V132));
	V133= CMPcadr((V132));
	goto T340;
T340:;
	if(!(type_of((V133))==t_cons)){
	goto T349;}
	{register object x= CMPcar((V133)),V136= VV[28];
	while(V136!=Cnil)
	if(eql(x,V136->c.c_car)){
	goto T348;
	}else V136=V136->c.c_cdr;}
	{register object x= CMPcar((V133)),V137= VV[29];
	while(V137!=Cnil)
	if(eql(x,V137->c.c_car)){
	goto T355;
	}else V137=V137->c.c_cdr;
	goto T349;}
	goto T355;
T355:;
	base[2]= small_fixnum(0);
	base[3]= CMPcadr((V133));
	vs_top=(vs_base=base+2)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T348;}
	base[2]= small_fixnum(1);
	base[3]= CMPcadr((V133));
	vs_top=(vs_base=base+2)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T349;}
	goto T348;
T348:;
	princ_str("\n	{",VV[5]);
	(void)((*(LnkLI78))());
	{register object V138;
	(VV[4]->s.s_dbind)= number_plus((VV[4]->s.s_dbind),small_fixnum(1));
	V138= (VV[4]->s.s_dbind);
	{object V139;
	V139= list(2,VV[6],(V138));
	V129= make_cons((V139),(V129));}
	{object V140= (V134);
	if((V140!= Cnil))goto T372;
	princ_str("object V",VV[5]);
	(void)((*(LnkLI76))((V138)));
	princ_str("= ",VV[5]);
	base[2]= (V132);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk88)();
	vs_top=sup;
	goto T366;
	goto T372;
T372:;
	if((V140!= VV[20]))goto T378;
	princ_str("int V",VV[5]);
	(void)((*(LnkLI76))((V138)));
	princ_str("= ",VV[5]);
	base[2]= (V133);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk89)();
	vs_top=sup;
	goto T366;
	goto T378;
T378:;
	if((V140!= VV[21]))goto T384;
	princ_str("GEN V",VV[5]);
	(void)((*(LnkLI76))((V138)));
	princ_str("= ",VV[5]);
	(void)((VFUN_NARGS=2,(*(LnkLI90))((V133),VV[30])));
	goto T366;
	goto T384;
T384:;
	if((V140!= VV[22]))goto T389;
	princ_str("unsigned char V",VV[5]);
	(void)((*(LnkLI76))((V138)));
	princ_str("= ",VV[5]);
	base[2]= (V133);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk91)();
	vs_top=sup;
	goto T366;
	goto T389;
T389:;
	if((V140!= VV[23]))goto T395;
	princ_str("double V",VV[5]);
	(void)((*(LnkLI76))((V138)));
	princ_str("= ",VV[5]);
	base[2]= (V133);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk92)();
	vs_top=sup;
	goto T366;
	goto T395;
T395:;
	if((V140!= VV[24]))goto T401;
	princ_str("float V",VV[5]);
	(void)((*(LnkLI76))((V138)));
	princ_str("= ",VV[5]);
	base[2]= (V133);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk93)();
	vs_top=sup;
	goto T366;
	goto T401;
T401:;
	(void)((*(LnkLI100))());}}
	goto T366;
T366:;
	princ_char(59,VV[5]);
	goto T333;
	goto T349;
T349:;
	V129= make_cons(V132,(V129));
	goto T333;}
	goto T335;
T335:;
	{object V142;
	V142= CMPcar((V127));
	V129= make_cons((V142),(V129));}
	goto T333;
T333:;
	V127= CMPcdr((V127));
	V128= (long)(V128)+1;
	goto T327;}}
	goto T302;
T302:;
	V143= (*(LnkLI101))(CMPcadr((V119)));
	{object V144 = list(4,/* INLINE-ARGS */V143,CMPcaddr((V119)),(V121),(V122));
	VMR8(V144)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INLINE-TYPE	*/

static object LI9(V146)

object V146;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;{object V147;
	{register object x= (V146),V149= (VV[31]->s.s_dbind);
	while(V149!=Cnil)
	if(eql(x,V149->c.c_car->c.c_car) &&V149->c.c_car != Cnil){
	V148= (V149->c.c_car);
	goto T417;
	}else V149=V149->c.c_cdr;
	V148= Cnil;}
	goto T417;
T417:;
	V147= CMPcdr(V148);
	if(V147==Cnil)goto T415;
	{object V150 = V147;
	VMR9(V150)}
	goto T415;
T415:;}
	{object V151 = VV[32];
	VMR9(V151)}
	return Cnil;
}
/*	local entry for function GET-INLINE-INFO	*/

static object LI10(V155,V156,V157)

object V155;register object V156;object V157;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{register object V158;
	base[0]=MMcons(Cnil,Cnil);
	V158= Cnil;
	if(((VFUN_NARGS=2,(*(LnkLI102))((V155),(V156))))!=Cnil){
	goto T420;}
	goto T419;
	goto T420;
T420:;
	(void)((*(LnkLI103))((V155),(V157),(V156)));
	goto T419;
T419:;
	{object V159;
	object V160= (V156);
	if(V160==Cnil){
	V156= Cnil;
	goto T423;}
	base[1]=V159=MMcons(Cnil,Cnil);
	goto T424;
T424:;
	(V159->c.c_car)= STREF(object,CMPcadr((V160->c.c_car)),8);
	if((V160=MMcdr(V160))==Cnil){
	V156= base[1];
	goto T423;}
	V159=MMcdr(V159)=MMcons(Cnil,Cnil);
	goto T424;}
	goto T423;
T423:;
	if(((VV[33]->s.s_dbind))==Cnil){
	goto T430;}
	{object V162 =((V155))->s.s_plist;
	 object ind= VV[34];
	while(V162!=Cnil){
	if(V162->c.c_car==ind){
	(base[0]->c.c_car)= (V162->c.c_cdr->c.c_car);
	goto T432;
	}else V162=V162->c.c_cdr->c.c_cdr;}
	(base[0]->c.c_car)= Cnil;}
	goto T432;
T432:;
	if(((base[0]->c.c_car))==Cnil){
	goto T426;}
	goto T428;
	goto T430;
T430:;
	{object V163 =((V155))->s.s_plist;
	 object ind= VV[35];
	while(V163!=Cnil){
	if(V163->c.c_car==ind){
	(base[0]->c.c_car)= (V163->c.c_cdr->c.c_car);
	goto T433;
	}else V163=V163->c.c_cdr->c.c_cdr;}
	(base[0]->c.c_car)= Cnil;}
	goto T433;
T433:;
	if(((base[0]->c.c_car))==Cnil){
	goto T426;}
	goto T428;
T428:;
	{register object V164;
	object V165;
	V164= (base[0]->c.c_car);
	V165= CMPcar((V164));
	goto T437;
T437:;
	if(!(((V164))==Cnil)){
	goto T438;}
	goto T426;
	goto T438;
T438:;
	V158= (*(LnkLI104))((V165),(V156),(V157));
	if(((V158))==Cnil){
	goto T442;}
	{object V166 = (V158);
	VMR10(V166)}
	goto T442;
T442:;
	V164= CMPcdr((V164));
	V165= CMPcar((V164));
	goto T437;}
	goto T426;
T426:;
	{object V167 =((V155))->s.s_plist;
	 object ind= VV[36];
	while(V167!=Cnil){
	if(V167->c.c_car==ind){
	(base[0]->c.c_car)= (V167->c.c_cdr->c.c_car);
	goto T454;
	}else V167=V167->c.c_cdr->c.c_cdr;}
	(base[0]->c.c_car)= Cnil;}
	goto T454;
T454:;
	if(((base[0]->c.c_car))==Cnil){
	goto T451;}
	{register object V168;
	object V169;
	V168= (base[0]->c.c_car);
	V169= CMPcar((V168));
	goto T458;
T458:;
	if(!(((V168))==Cnil)){
	goto T459;}
	goto T451;
	goto T459;
T459:;
	V158= (*(LnkLI104))((V169),(V156),(V157));
	if(((V158))==Cnil){
	goto T463;}
	{object V170 = (V158);
	VMR10(V170)}
	goto T463;
T463:;
	V168= CMPcdr((V168));
	V169= CMPcar((V168));
	goto T458;}
	goto T451;
T451:;
	{register object V171;
	object V172;
	V171= (VV[37]->s.s_dbind);
	V172= CMPcar((V171));
	goto T476;
T476:;
	if(!(((V171))==Cnil)){
	goto T477;}
	goto T472;
	goto T477;
T477:;
	if(!((CMPcar((V172)))==((V155)))){
	goto T481;}
	V158= (*(LnkLI104))(CMPcdr((V172)),(V156),(V157));
	if(((V158))==Cnil){
	goto T481;}
	{object V173 = (V158);
	VMR10(V173)}
	goto T481;
T481:;
	V171= CMPcdr((V171));
	V172= CMPcar((V171));
	goto T476;}
	goto T472;
T472:;
	{object V174 =((V155))->s.s_plist;
	 object ind= VV[38];
	while(V174!=Cnil){
	if(V174->c.c_car==ind){
	(base[0]->c.c_car)= (V174->c.c_cdr->c.c_car);
	goto T496;
	}else V174=V174->c.c_cdr->c.c_cdr;}
	(base[0]->c.c_car)= Cnil;}
	goto T496;
T496:;
	if(((base[0]->c.c_car))==Cnil){
	goto T492;}
	if(!(type_of((base[0]->c.c_car))==t_cons)){
	goto T499;}
	if(!(type_of(CMPcar((base[0]->c.c_car)))==t_fixnum)){
	goto T499;}
	{object V175;
	V176 = CMPmake_fixnum((long)length((V156)));
	V175= (number_compare(V176,CMPcar((base[0]->c.c_car)))>=0?Ct:Cnil);
	(base[0]->c.c_car)= CMPcdr((base[0]->c.c_car));
	if(((V175))==Cnil){
	goto T492;}
	goto T497;}
	goto T499;
T499:;
	goto T497;
T497:;
	base[1]= CMPmake_fixnum((long)length((V156)));
	base[2]= VV[39];
	base[3]= Ct;
	vs_top=(vs_base=base+1)+3;
	Lmake_list();
	vs_top=sup;
	V177= vs_base[0];
	V178= 
	make_cclosure_new(LC27,Cnil,base[0],Cdata);
	{object V179 = list(4,V177,Ct,small_fixnum(3),V178);
	VMR10(V179)}
	goto T492;
T492:;
	{object V180 = Cnil;
	VMR10(V180)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INLINE-TYPE-MATCHES	*/

static object LI11(V184,V185,V186)

object V184;object V185;object V186;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{register object V187;
	V187= Cnil;
	if(type_of(CMPcaddr((V184)))==t_fixnum){
	goto T512;}
	(void)((*(LnkLI105))((V184)));
	goto T512;
T512:;
	{register object x= VV[40],V188= CMPcar((V184));
	while(V188!=Cnil)
	if(eql(x,V188->c.c_car)){
	goto T517;
	}else V188=V188->c.c_cdr;
	goto T515;}
	goto T517;
T517:;
	{object V189 = Cnil;
	VMR11(V189)}
	goto T515;
T515:;
	{register object V190;
	V190= CMPcar((V184));
	{register object V191;
	register object V192;
	V191= (V185);
	V192= CMPcar((V191));
	goto T526;
T526:;
	if(!(((V191))==Cnil)){
	goto T527;}
	if(!(equal((V190),VV[41]))){
	goto T530;}
	goto T521;
	goto T530;
T530:;
	if(!(((V190))==Cnil)){
	goto T519;}
	goto T521;
	goto T527;
T527:;
	if(!(((V190))==Cnil)){
	goto T533;}
	goto T519;
	goto T533;
T533:;
	if(!(equal((V190),VV[42]))){
	goto T536;}
	V190= VV[43];
	goto T536;
T536:;
	if(!((CMPcar((V190)))==(VV[44]))){
	goto T542;}
	if(((*(LnkLI106))(VV[45],(V192)))==Cnil){
	goto T545;}
	{register object V193;
	V193= VV[45];
	V187= make_cons((V193),(V187));
	goto T540;}
	goto T545;
T545:;
	if(((*(LnkLI106))(VV[46],(V192)))==Cnil){
	goto T550;}
	{register object V194;
	V194= VV[46];
	V187= make_cons((V194),(V187));
	goto T540;}
	goto T550;
T550:;
	if(((*(LnkLI106))(VV[47],(V192)))==Cnil){
	goto T555;}
	{register object V195;
	V195= VV[47];
	V187= make_cons((V195),(V187));
	goto T540;}
	goto T555;
T555:;
	goto T519;
	goto T542;
T542:;
	if(((*(LnkLI106))(CMPcar((V190)),(V192)))==Cnil){
	goto T560;}
	{register object V196;
	V196= CMPcar((V190));
	V187= make_cons((V196),(V187));
	goto T540;}
	goto T560;
T560:;
	goto T519;
	goto T540;
T540:;
	{register object V197;
	V197= CMPcar((V190));
	V190= CMPcdr((V190));}
	V191= CMPcdr((V191));
	V192= CMPcar((V191));
	goto T526;}}
	goto T521;
T521:;
	if(((*(LnkLI106))(CMPcadr((V184)),(V186)))==Cnil){
	goto T519;}
	V198= reverse((V187));
	{object V199 = make_cons(/* INLINE-ARGS */V198,CMPcdr((V184)));
	VMR11(V199)}
	goto T519;
T519:;
	{object V200 = Cnil;
	VMR11(V200)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function NEED-TO-PROTECT	*/

static object LI12(V203,V204)

object V203;object V204;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{register object V205;
	V205= Cnil;
	{register object V206;
	register object V207;
	V206= (V203);
	V207= (V204);
	goto T576;
T576:;
	if(!(((V206))==Cnil)){
	goto T577;}
	{object V208 = Cnil;
	VMR12(V208)}
	goto T577;
T577:;
	{register object V209;
	V209= CMPcar((V206));
	{object V210= CMPcar((V209));
	if((V210!= VV[14]))goto T583;
	goto T581;
	goto T583;
T583:;
	if((V210!= VV[1]))goto T584;
	if(((*(LnkLI75))(CMPcaaddr((V209)),CMPcdr((V206))))!=Cnil){
	goto T585;}
	{register object x= STREF(object,CMPcaaddr((V209)),4),V211= VV[48];
	while(V211!=Cnil)
	if(eql(x,V211->c.c_car)){
	goto T589;
	}else V211=V211->c.c_cdr;
	goto T581;}
	goto T589;
T589:;
	if((CMPcar((V207)))==(STREF(object,CMPcaaddr((V209)),4))){
	goto T581;}
	goto T585;
T585:;
	{object V212 = Ct;
	VMR12(V212)}
	goto T584;
T584:;
	if((V210!= VV[82]))goto T591;
	{register object V213;
	V213= CMPcaddr((V209));
	if(((*(LnkLI83))((V213)))==Cnil){
	goto T593;}
	V205= (*(LnkLI84))((V213),CMPcadddr((V209)),STREF(object,CMPcadr((V209)),8));
	if(((V205))==Cnil){
	goto T593;}
	base[0]= small_fixnum(0);
	base[1]= CMPcaddr((V205));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T593;}
	base[0]= small_fixnum(1);
	base[1]= CMPcaddr((V205));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T593;}
	base[0]= small_fixnum(4);
	base[1]= CMPcaddr((V205));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T593;}
	{register object x= CMPcadr((V205)),V214= VV[49];
	while(V214!=Cnil)
	if(eql(x,V214->c.c_car)){
	goto T613;
	}else V214=V214->c.c_cdr;
	goto T611;}
	goto T613;
T613:;
	if(!((CMPcar((V207)))==(CMPcadr((V205))))){
	goto T593;}
	goto T611;
T611:;
	if(((*(LnkLI87))(CMPcadddr((V209)),CMPcar((V205))))==Cnil){
	goto T581;}
	goto T593;
T593:;
	{object V215 = Ct;
	VMR12(V215)}}
	goto T591;
T591:;
	if((V210!= VV[96]))goto T616;
	V216= make_cons(CMPcaddr((V209)),Cnil);
	if(((*(LnkLI87))(/* INLINE-ARGS */V216,VV[50]))==Cnil){
	goto T581;}
	{object V217 = Ct;
	VMR12(V217)}
	goto T616;
T616:;
	{object V218 = Ct;
	VMR12(V218)}}}
	goto T581;
T581:;
	V206= CMPcdr((V206));
	V207= CMPcdr((V207));
	goto T576;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-C-PUSH	*/

static object LI13()

{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	if(((VV[9]->s.s_dbind))==Cnil){
	goto T624;}
	(void)((*(LnkLI78))());
	{object V219;
	(VV[4]->s.s_dbind)= number_plus((VV[4]->s.s_dbind),small_fixnum(1));
	V219= (VV[4]->s.s_dbind);
	princ_char(123,VV[5]);
	(void)((*(LnkLI76))((VV[51]->s.s_dbind)));
	princ_str("object V",VV[5]);
	(void)((*(LnkLI76))((V219)));
	princ_char(59,VV[5]);
	{object V220 = list(2,VV[6],(V219));
	VMR13(V220)}}
	goto T624;
T624:;
	{object V221 = list(2,VV[12],(*(LnkLI94))());
	VMR13(V221)}
	return Cnil;
}
/*	local entry for function CLOSE-INLINE-BLOCKS	*/

static object LI14()

{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{register object V222;
	V222= (VV[2]->s.s_dbind);
	if(!(type_of((V222))==t_cons)){
	goto T636;}
	if(!(eql(CMPcdr((V222)),VV[52]))){
	goto T639;}
	princ_str("restore_avma;",VV[5]);
	goto T639;
T639:;
	V222= CMPcar((V222));
	goto T636;
T636:;
	{register long V223;
	register long V224;
	V223= fix((V222));
	V224= 0;
	goto T647;
T647:;
	if(!((V224)>=(V223))){
	goto T648;}
	{object V225 = Cnil;
	VMR14(V225)}
	goto T648;
T648:;
	princ_char(125,VV[5]);
	V224= (long)(V224)+1;
	goto T647;}}
	return Cnil;
}
/*	function definition for WT-INLINE-LOC	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	{register object V226;
	object V227;
	V226=(base[0]);
	V227=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register long V228;
	long V229;
	V228= 0;
	V229= -1;
	if(!(type_of((V226))==t_string)){
	goto T660;}
	if(!((((V226))->ust.ust_self[0])==(64))){
	goto T662;}
	V228= 1;
	goto T668;
T668:;
	if(!((((V226))->ust.ust_self[V228])==(59))){
	goto T669;}
	V228= (long)(V228)+(1);
	goto T662;
	goto T669;
T669:;
	V228= (long)(V228)+(1);
	goto T668;
	goto T662;
T662:;
	{long V230;
	V230= (long)((V226))->v.v_fillp;
	goto T680;
T680:;
	if(!((V228)>=(V230))){
	goto T681;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T681;
T681:;
	{unsigned char V231;
	V231= ((V226))->ust.ust_self[V228];
	if(!((V231)==(35))){
	goto T688;}
	{register object V232;
	register object V233;
	V232= code_char(((V226))->ust.ust_self[(long)(V228)+1]);
	V233= small_fixnum(0);
	if(type_of(V232)==t_character){
	goto T695;}
	goto T693;
	goto T695;
T695:;
	if(!(((long)(42))==((long)(char_code(V232))))){
	goto T693;}
	if(!((V229)>=(0))){
	goto T697;}
	V235 = CMPmake_fixnum(V229);
	V236= one_plus(V235);
	V237 = CMPmake_fixnum((long)length((V227)));
	if(!(number_compare(/* INLINE-ARGS */V236,V237)<0)){
	goto T697;}
	princ_char(44,VV[5]);
	goto T697;
T697:;
	{register object V238;
	V239 = CMPmake_fixnum(V229);
	V240= one_plus(V239);
	V238= nthcdr(fix(/* INLINE-ARGS */V240),(V227));
	goto T705;
T705:;
	if(((V238))!=Cnil){
	goto T706;}
	goto T690;
	goto T706;
T706:;
	base[2]= CMPcar((V238));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk88)();
	vs_top=sup;
	if((CMPcdr((V238)))==Cnil){
	goto T712;}
	princ_char(44,VV[5]);
	goto T712;
T712:;
	V238= CMPcdr((V238));
	goto T705;}
	goto T693;
T693:;
	base[2]= (V232);
	base[3]= small_fixnum(10);
	vs_top=(vs_base=base+2)+2;
	Ldigit_char_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T690;}
	base[2]= (V232);
	vs_top=(vs_base=base+2)+1;
	Lchar_code();
	vs_top=sup;
	V241= vs_base[0];
	V242 = CMPmake_fixnum((long)(48));
	V233= number_minus(V241,V242);
	V243 = CMPmake_fixnum((long)length((V226)));
	V244 = CMPmake_fixnum(V228);
	V245= number_plus(V244,small_fixnum(2));
	if(!(number_compare(V243,/* INLINE-ARGS */V245)>0)){
	goto T727;}
	V246 = CMPmake_fixnum(V228);
	V247= number_plus(V246,small_fixnum(2));
	V232= code_char(((V226))->ust.ust_self[fix(/* INLINE-ARGS */V247)]);
	base[2]= (V232);
	vs_top=(vs_base=base+2)+1;
	Ldigit_char_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T727;}
	V248= number_times((V233),small_fixnum(10));
	base[2]= (V232);
	vs_top=(vs_base=base+2)+1;
	Lchar_code();
	vs_top=sup;
	V249= vs_base[0];
	V250 = CMPmake_fixnum((long)(48));
	V251= number_minus(V249,V250);
	V233= number_plus(/* INLINE-ARGS */V248,/* INLINE-ARGS */V251);
	V228= (long)(V228)+(1);
	goto T727;
T727:;
	V252 = CMPmake_fixnum(V229);
	if(!(number_compare((V233),V252)>=0)){
	goto T740;}
	V229= fix((V233));
	goto T740;
T740:;
	base[2]= nth(fix((V233)),(V227));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk88)();
	vs_top=sup;}
	goto T690;
T690:;
	V228= (long)(V228)+(2);
	goto T685;
	goto T688;
T688:;
	(void)(princ(code_char(V231),(VV[5]->s.s_dbind)));
	V228= (long)(V228)+(1);}
	goto T685;
T685:;
	goto T680;}
	goto T660;
T660:;
	base[2]= (V226);
	{object V253;
	V253= (V227);
	 vs_top=base+3;
	 while(V253!=Cnil)
	 {vs_push((V253)->c.c_car);V253=(V253)->c.c_cdr;}
	vs_base=base+3;}
	super_funcall_no_event(base[2]);
	return;}
	}
}
/*	function definition for WT-INLINE	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V254;
	object V255;
	object V256;
	V254=(base[0]);
	V255=(base[1]);
	V256=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (V255);
	base[4]= (V256);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk107)();
	return;
	}
}
/*	local entry for function WT-INLINE-COND	*/

static object LI17(V260,V261,V262)

object V260;object V261;object V262;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	princ_char(40,VV[5]);
	base[0]= (V261);
	base[1]= (V262);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	princ_str("?Ct:Cnil)",VV[5]);
	{object V263 = Cnil;
	VMR17(V263)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-INLINE-FIXNUM	*/

static object LI18(V267,V268,V269)

object V267;object V268;object V269;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	if(!(number_compare(small_fixnum(0),(VV[56]->s.s_dbind))==0)){
	goto T760;}
	princ_str("CMP",VV[5]);
	goto T760;
T760:;
	princ_str("make_fixnum((long)",VV[5]);
	base[0]= (V268);
	base[1]= (V269);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	princ_char(41,VV[5]);
	{object V270 = Cnil;
	VMR18(V270)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-INLINE-INTEGER	*/

static object LI19(V274,V275,V276)

object V274;object V275;object V276;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	princ_str("make_integer(",VV[5]);
	base[0]= (V275);
	base[1]= (V276);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	princ_char(41,VV[5]);
	{object V277 = Cnil;
	VMR19(V277)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-INLINE-CHARACTER	*/

static object LI20(V281,V282,V283)

object V281;object V282;object V283;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	princ_str("code_char(",VV[5]);
	base[0]= (V282);
	base[1]= (V283);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	princ_char(41,VV[5]);
	{object V284 = Cnil;
	VMR20(V284)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-INLINE-LONG-FLOAT	*/

static object LI21(V288,V289,V290)

object V288;object V289;object V290;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	princ_str("make_longfloat(",VV[5]);
	base[0]= (V289);
	base[1]= (V290);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	princ_char(41,VV[5]);
	{object V291 = Cnil;
	VMR21(V291)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-INLINE-SHORT-FLOAT	*/

static object LI22(V295,V296,V297)

object V295;object V296;object V297;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	princ_str("make_shortfloat(",VV[5]);
	base[0]= (V296);
	base[1]= (V297);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	princ_char(41,VV[5]);
	{object V298 = Cnil;
	VMR22(V298)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ARGS-CAUSE-SIDE-EFFECT	*/

static object LI23(V300)

object V300;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	{register object V301;
	V301= Cnil;
	{register object V302;
	register object V303;
	V302= (V300);
	V303= CMPcar((V302));
	goto T798;
T798:;
	if(!(((V302))==Cnil)){
	goto T799;}
	{object V304 = Cnil;
	VMR23(V304)}
	goto T799;
T799:;
	{object V305= CMPcar((V303));
	if((V305!= VV[14])
	&& (V305!= VV[1])
	&& (V305!= VV[96]))goto T804;
	goto T803;
	goto T804;
T804:;
	if((V305!= VV[82]))goto T805;
	{register object V306;
	V306= CMPcaddr((V303));
	if(((*(LnkLI83))((V306)))==Cnil){
	goto T807;}
	V301= (*(LnkLI84))((V306),CMPcadddr((V303)),STREF(object,CMPcadr((V303)),8));
	if(((V301))==Cnil){
	goto T807;}
	(void)((*(LnkLI105))((V301)));
	base[1]= small_fixnum(1);
	base[2]= CMPcaddr((V301));
	vs_top=(vs_base=base+1)+2;
	Llogbitp();
	vs_top=sup;
	V307= vs_base[0];
	if((V307)==Cnil){
	goto T803;}
	goto T807;
T807:;
	{object V308 = Ct;
	VMR23(V308)}}
	goto T805;
T805:;
	{object V309 = Ct;
	VMR23(V309)}}
	goto T803;
T803:;
	V302= CMPcdr((V302));
	V303= CMPcar((V302));
	goto T798;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LIST-INLINE	*/

static object LI24(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB24 VMS24 VMV24
	{object V310;
	va_start(ap,first);
	narg= narg - 0;
	V311 = list_vector_new(narg,first,ap);
	V310= V311;
	{object V312;
	object V313;
	V312= Cnil;
	V313= CMPmake_fixnum((long)length((V310)));
	if(type_of((VV[13]->s.s_dbind))==t_cons){
	goto T830;}
	V312= Cnil;
	goto T829;
	goto T830;
T830:;
	if((CMPcar((VV[13]->s.s_dbind)))==(VV[1])){
	goto T832;}
	V312= Cnil;
	goto T829;
	goto T832;
T832:;
	V312= ((STREF(object,CMPcadr((VV[13]->s.s_dbind)),20))==(VV[57])?Ct:Cnil);
	goto T829;
T829:;
	if(((V312))==Cnil){
	goto T827;}
	princ_str("(ALLOCA_CONS(",VV[5]);
	(void)((*(LnkLI76))((V313)));
	princ_str("),ON_STACK_LIST(",VV[5]);
	(void)((*(LnkLI76))((V313)));
	goto T825;
	goto T827;
T827:;
	princ_str("list(",VV[5]);
	V314 = CMPmake_fixnum((long)length((V310)));
	(void)((*(LnkLI76))(V314));
	goto T825;
T825:;
	{register object V315;
	register object V316;
	V315= (V310);
	V316= CMPcar((V315));
	goto T844;
T844:;
	if(!(((V315))==Cnil)){
	goto T845;}
	goto T840;
	goto T845;
T845:;
	(void)((*(LnkLI76))(VV[58]));
	(void)((*(LnkLI76))((V316)));
	V315= CMPcdr((V315));
	V316= CMPcar((V315));
	goto T844;}
	goto T840;
T840:;
	(void)((*(LnkLI76))(VV[59]));
	if(((V312))==Cnil){
	goto T860;}
	(void)((*(LnkLI76))(VV[59]));
	{object V317 = Cnil;
	VMR24(V317)}
	goto T860;
T860:;
	{object V318 = Cnil;
	VMR24(V318)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LIST*-INLINE	*/

static object LI25(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB25 VMS25 VMV25
	{register object V319;
	va_start(ap,first);
	narg= narg - 0;
	V320 = list_vector_new(narg,first,ap);
	V319= V320;switch((long)length((V319))){
	case 1:
	goto T864;
T864:;
	(void)((*(LnkLI76))(CMPcar((V319))));
	{object V321 = Cnil;
	VMR25(V321)}
	case 2:
	goto T865;
T865:;
	princ_str("make_cons(",VV[5]);
	(void)((*(LnkLI76))(CMPcar((V319))));
	princ_char(44,VV[5]);
	(void)((*(LnkLI76))(CMPcadr((V319))));
	princ_char(41,VV[5]);
	{object V322 = Cnil;
	VMR25(V322)}
	default:
	goto T866;
T866:;
	princ_str("listA(",VV[5]);
	V323 = CMPmake_fixnum((long)length((V319)));
	(void)((*(LnkLI76))(V323));
	{register object V324;
	register object V325;
	V324= (V319);
	V325= CMPcar((V324));
	goto T881;
T881:;
	if(!(((V324))==Cnil)){
	goto T882;}
	goto T877;
	goto T882;
T882:;
	(void)((*(LnkLI76))(VV[58]));
	(void)((*(LnkLI76))((V325)));
	V324= CMPcdr((V324));
	V325= CMPcar((V324));
	goto T881;}
	goto T877;
T877:;
	(void)((*(LnkLI76))(VV[59]));
	{object V326 = Cnil;
	VMR25(V326)}
	{object V327 = Cnil;
	VMR25(V327)}}
	{object V328 = Cnil;
	VMR25(V328)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function DEFSYSFUN	*/

static object LI26(V335,V336,V337,V338,V339,V340)

register object V335;object V336;object V337;register object V338;object V339;object V340;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	if(((V336))==Cnil){
	goto T895;}
	(void)(putprop((V335),(V336),VV[60]));
	goto T895;
T895:;
	if(((V337))==Cnil){
	goto T898;}
	{object V342;
	object V343= (V337);
	if(V343==Cnil){
	V341= Cnil;
	goto T901;}
	base[0]=V342=MMcons(Cnil,Cnil);
	goto T902;
T902:;
	if(!(((V343->c.c_car))==(VV[61]))){
	goto T905;}
	(V342->c.c_car)= VV[61];
	goto T903;
	goto T905;
T905:;
	(V342->c.c_car)= (*(LnkLI108))((V343->c.c_car));
	goto T903;
T903:;
	if((V343=MMcdr(V343))==Cnil){
	V341= base[0];
	goto T901;}
	V342=MMcdr(V342)=MMcons(Cnil,Cnil);
	goto T902;}
	goto T901;
T901:;
	(void)(putprop((V335),V341,VV[62]));
	goto T898;
T898:;
	if(((V338))==Cnil){
	goto T907;}
	{register object V345;
	if(!(type_of((V338))!=t_cons)){
	goto T913;}
	V346= make_cons((V338),Cnil);
	goto T911;
	goto T913;
T913:;
	V346= (V338);
	goto T911;
T911:;
	V345= (*(LnkLI109))(V346);
	if(!(type_of((V345))==t_cons)){
	goto T916;}
	goto T915;
	goto T916;
T916:;
	V345= make_cons((V345),Cnil);
	goto T915;
T915:;
	if((CMPcdr((V345)))!=Cnil){
	goto T921;}
	V347= CMPcar((V345));
	goto T919;
	goto T921;
T921:;
	V347= make_cons(VV[63],(V345));
	goto T919;
T919:;
	(void)(putprop((V335),V347,VV[64]));}
	goto T907;
T907:;
	if(((V339))==Cnil){
	goto T923;}
	(void)(putprop((V335),Ct,VV[65]));
	goto T923;
T923:;
	if(((V340))==Cnil){
	goto T927;}
	{object V348 = putprop((V335),Ct,VV[66]);
	VMR26(V348)}
	goto T927;
T927:;
	{object V349 = Cnil;
	VMR26(V349)}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC27(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	{object V350;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V350=(base[0]);
	vs_top=sup;
	princ_str("(VFUN_NARGS=",VV[5]);
	V351 = CMPmake_fixnum((long)length((V350)));
	(void)((*(LnkLI76))(V351));
	princ_char(44,VV[5]);
	base[1]= (base0[0]->c.c_car);
	base[2]= (V350);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	princ_char(41,VV[5]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static object  LnkTLI109(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[109],(void **)(void *)&LnkLI109,1,first,ap);va_end(ap);return V1;} /* FUNCTION-RETURN-TYPE */
static object  LnkTLI108(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[108],(void **)(void *)&LnkLI108,1,first,ap);va_end(ap);return V1;} /* TYPE-FILTER */
static void LnkT107(){ call_or_link(VV[107],(void **)(void *)&Lnk107);} /* WT-INLINE-LOC */
static object  LnkTLI106(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[106],(void **)(void *)&LnkLI106,2,first,ap);va_end(ap);return V1;} /* TYPE>= */
static object  LnkTLI105(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[105],(void **)(void *)&LnkLI105,1,first,ap);va_end(ap);return V1;} /* FIX-OPT */
static object  LnkTLI104(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[104],(void **)(void *)&LnkLI104,3,first,ap);va_end(ap);return V1;} /* INLINE-TYPE-MATCHES */
static object  LnkTLI103(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[103],(void **)(void *)&LnkLI103,3,first,ap);va_end(ap);return V1;} /* ADD-FAST-LINK */
static object  LnkTLI102(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[102],(void **)(void *)&LnkLI102,first,ap);va_end(ap);return V1;} /* FAST-LINK-PROCLAIMED-TYPE-P */
static object  LnkTLI101(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[101],(void **)(void *)&LnkLI101,1,first,ap);va_end(ap);return V1;} /* INLINE-TYPE */
static object  LnkTLI100(){return call_proc0(VV[100],(void **)(void *)&LnkLI100);} /* BABOON */
static object  LnkTLI7(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[7],(void **)(void *)&LnkLI7,first,ap);va_end(ap);return V1;} /* INLINE-ARGS */
static object  LnkTLI99(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[99],(void **)(void *)&LnkLI99,first,ap);va_end(ap);return V1;} /* MAKE-VAR */
static object  LnkTLI97(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[97],(void **)(void *)&LnkLI97,2,first,ap);va_end(ap);return V1;} /* COERCE-LOC-STRUCTURE-REF */
static object  LnkTLI95(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[95],(void **)(void *)&LnkLI95,1,first,ap);va_end(ap);return V1;} /* C2EXPR* */
static object  LnkTLI94(){return call_proc0(VV[94],(void **)(void *)&LnkLI94);} /* VS-PUSH */
static void LnkT93(){ call_or_link(VV[93],(void **)(void *)&Lnk93);} /* WT-SHORT-FLOAT-LOC */
static void LnkT92(){ call_or_link(VV[92],(void **)(void *)&Lnk92);} /* WT-LONG-FLOAT-LOC */
static void LnkT91(){ call_or_link(VV[91],(void **)(void *)&Lnk91);} /* WT-CHARACTER-LOC */
static object  LnkTLI90(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[90],(void **)(void *)&LnkLI90,first,ap);va_end(ap);return V1;} /* WT-INTEGER-LOC */
static void LnkT89(){ call_or_link(VV[89],(void **)(void *)&Lnk89);} /* WT-FIXNUM-LOC */
static void LnkT88(){ call_or_link(VV[88],(void **)(void *)&Lnk88);} /* WT-LOC */
static object  LnkTLI87(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[87],(void **)(void *)&LnkLI87,2,first,ap);va_end(ap);return V1;} /* NEED-TO-PROTECT */
static object  LnkTLI86(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[86],(void **)(void *)&LnkLI86,2,first,ap);va_end(ap);return V1;} /* GET-INLINE-LOC */
static object  LnkTLI85(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[85],(void **)(void *)&LnkLI85,1,first,ap);va_end(ap);return V1;} /* SAVE-AVMA */
static object  LnkTLI84(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[84],(void **)(void *)&LnkLI84,3,first,ap);va_end(ap);return V1;} /* GET-INLINE-INFO */
static object  LnkTLI83(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[83],(void **)(void *)&LnkLI83,1,first,ap);va_end(ap);return V1;} /* INLINE-POSSIBLE */
static object  LnkTLI81(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[81],(void **)(void *)&LnkLI81,first,ap);va_end(ap);return V1;} /* CS-PUSH */
static object  LnkTLI80(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[80],(void **)(void *)&LnkLI80,2,first,ap);va_end(ap);return V1;} /* WT-VAR */
static object  LnkTLI79(){return call_proc0(VV[79],(void **)(void *)&LnkLI79);} /* WT-C-PUSH */
static object  LnkTLI78(){return call_proc0(VV[78],(void **)(void *)&LnkLI78);} /* INC-INLINE-BLOCKS */
static object  LnkTLI77(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[77],(void **)(void *)&LnkLI77,1,first,ap);va_end(ap);return V1;} /* REP-TYPE */
static object  LnkTLI76(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[76],(void **)(void *)&LnkLI76,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI75(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[75],(void **)(void *)&LnkLI75,2,first,ap);va_end(ap);return V1;} /* ARGS-INFO-CHANGED-VARS */
static object  LnkTLI74(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[74],(void **)(void *)&LnkLI74,2,first,ap);va_end(ap);return V1;} /* COERCE-LOC */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

