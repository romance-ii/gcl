
#include "cmpinclude.h"
#include "pcl_iterate.h"
void init_pcl_iterate(){do_init(VV);}
/*	macro definition for ITERATE	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	base[3]= V1;}
	base[4]= (*(LnkLI125))(base[2],base[3],base[1]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function SIMPLE-EXPAND-ITERATE-FORM	*/

static object LI2(V4,V5)

object V4;object V5;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	{object V6;
	object V7;
	object V8;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V6= vs_base[0];
	{object V9;
	object V10= (V4);
	if(V10==Cnil){
	V7= Cnil;
	goto T2;}
	base[3]=V9=MMcons(Cnil,Cnil);
	goto T3;
T3:;
	{object V12;
	V12= CMPcar((V10->c.c_car));
	if(!(type_of((V12))==t_cons||((V12))==Cnil)){
	goto T7;}
	(V9->c.c_car)= (V12);
	goto T4;
	goto T7;
T7:;
	(V9->c.c_car)= make_cons((V12),Cnil);}
	goto T4;
T4:;
	if((V10=MMcdr(V10))==Cnil){
	V7= base[3];
	goto T2;}
	V9=MMcdr(V9)=MMcons(Cnil,Cnil);
	goto T3;}
	goto T2;
T2:;
	{object V13;
	object V14= (V4);
	if(V14==Cnil){
	V8= Cnil;
	goto T9;}
	base[3]=V13=MMcons(Cnil,Cnil);
	goto T10;
T10:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	(V13->c.c_car)= vs_base[0];
	if((V14=MMcdr(V14))==Cnil){
	V8= base[3];
	goto T9;}
	V13=MMcdr(V13)=MMcons(Cnil,Cnil);
	goto T10;}
	goto T9;
T9:;
	{object V17;
	object V18= (V8);
	object V19= (V4);
	object V20= (V7);
	if(V18==Cnil||V19==Cnil||V20==Cnil){
	V16= Cnil;
	goto T12;}
	base[3]=V17=MMcons(Cnil,Cnil);
	goto T13;
T13:;
	V24= list(2,(V18->c.c_car),CMPcadr((V19->c.c_car)));
	base[4]= (V20->c.c_car);
	vs_top=(vs_base=base+4)+1;
	Lcopy_list();
	vs_top=sup;
	V25= vs_base[0];
	(V17->c.c_cdr)= make_cons(/* INLINE-ARGS */V24,V25);
	while(MMcdr(V17)!=Cnil)V17=MMcdr(V17);
	if((V18=MMcdr(V18))==Cnil||(V19=MMcdr(V19))==Cnil||(V20=MMcdr(V20))==Cnil){
	base[3]=base[3]->c.c_cdr;
	V16= base[3];
	goto T12;}
	goto T13;}
	goto T12;
T12:;
	{object V27;
	object V28= (V7);
	object V29= (V8);
	if(V28==Cnil||V29==Cnil){
	V26= Cnil;
	goto T17;}
	base[3]=V27=MMcons(Cnil,Cnil);
	goto T18;
T18:;
	(V27->c.c_car)= list(3,VV[3],(V28->c.c_car),list(3,VV[4],(V29->c.c_car),list(2,VV[5],list(3,VV[6],Cnil,list(2,VV[7],(V6))))));
	if((V28=MMcdr(V28))==Cnil||(V29=MMcdr(V29))==Cnil){
	V26= base[3];
	goto T17;}
	V27=MMcdr(V27)=MMcons(Cnil,Cnil);
	goto T18;}
	goto T17;
T17:;
	V32 = (V5);
	V33= append(V26,V32);
	{object V34 = list(3,VV[0],(V6),list(3,VV[1],V16,make_cons(VV[2],/* INLINE-ARGS */V33)));
	VMR2(V34)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-ITERATE-FORM	*/

static object LI3(V38,V39,V40)

object V38;object V39;object V40;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V41;
	object V42;
	register object V43;
	object V44;
	object V45;
	object V46;
	object V47;
	object V48;
	base[0]=MMcons((VV[8]->s.s_dbind),Cnil);
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V41= vs_base[0];
	V42= list(2,VV[7],(V41));
	{object V49;
	object V50= (V38);
	if(V50==Cnil){
	V43= Cnil;
	goto T22;}
	base[4]=V49=MMcons(Cnil,Cnil);
	goto T23;
T23:;
	{object V52;
	V52= CMPcar((V50->c.c_car));
	if(!(type_of((V52))==t_cons||((V52))==Cnil)){
	goto T27;}
	base[5]= (V52);
	vs_top=(vs_base=base+5)+1;
	Lcopy_list();
	vs_top=sup;
	(V49->c.c_cdr)= vs_base[0];
	goto T24;
	goto T27;
T27:;
	(V49->c.c_cdr)= make_cons((V52),Cnil);}
	goto T24;
T24:;
	while(MMcdr(V49)!=Cnil)V49=MMcdr(V49);
	if((V50=MMcdr(V50))==Cnil){
	base[4]=base[4]->c.c_cdr;
	V43= base[4];
	goto T22;}
	goto T23;}
	goto T22;
T22:;
	V44= Cnil;
	V45= Cnil;
	V46= Cnil;
	V47= Cnil;
	V48= Cnil;
	{object V53;
	V53= (V43);
	goto T37;
T37:;
	if(((V53))!=Cnil){
	goto T38;}
	goto T35;
	goto T38;
T38:;
	{register object x= CMPcar((V53)),V54= CMPcdr((V53));
	while(V54!=Cnil)
	if(eql(x,V54->c.c_car)){
	goto T44;
	}else V54=V54->c.c_cdr;
	goto T42;}
	goto T44;
T44:;
	base[4]= VV[9];
	base[5]= CMPcar((V53));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk126)();
	vs_top=sup;
	goto T42;
T42:;
	V53= CMPcdr((V53));
	goto T37;}
	goto T35;
T35:;
	base[4]=make_cclosure_new(LC4,Cnil,base[0],Cdata);
	base[4]=MMcons(base[4],base[0]);
	{object V55;
	register object V56;
	V55= (V38);
	V56= CMPcar((V55));
	goto T54;
T54:;
	if(!(((V55))==Cnil)){
	goto T55;}
	goto T50;
	goto T55;
T55:;
	if(!(type_of((V56))==t_cons)){
	goto T60;}
	if(type_of(CMPcdr((V56)))==t_cons){
	goto T61;}
	goto T60;
T60:;
	base[6]= VV[10];
	base[7]= (V56);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk126)();
	vs_top=sup;
	goto T59;
	goto T61;
T61:;
	if((CMPcddr((V56)))==Cnil){
	goto T67;}
	base[6]= VV[11];
	base[7]= (V56);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk126)();
	vs_top=sup;
	goto T67;
T67:;
	{register object V57;
	object V58;
	object V59;
	object V60;
	object V61;
	object V62;
	base[6]= CMPcadr((V56));
	base[7]= VV[12];
	base[8]= (V40);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk127)();
	if(vs_base>=vs_top){vs_top=sup;goto T76;}
	V57= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T77;}
	V58= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T78;}
	V59= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T79;}
	V60= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T80;}
	V61= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T81;}
	V62= vs_base[0];
	vs_top=sup;
	goto T82;
	goto T76;
T76:;
	V57= Cnil;
	goto T77;
T77:;
	V58= Cnil;
	goto T78;
T78:;
	V59= Cnil;
	goto T79;
T79:;
	V60= Cnil;
	goto T80;
T80:;
	V61= Cnil;
	goto T81;
T81:;
	V62= Cnil;
	goto T82;
T82:;
	{register object V63;
	object V64;
	object V65;
	V63= CMPcar((V56));
	V64= Cnil;
	V65= Cnil;
	if(!(type_of((V63))==t_cons||((V63))==Cnil)){
	goto T89;}
	base[7]= (V63);
	vs_top=(vs_base=base+7)+1;
	Lcopy_list();
	vs_top=sup;
	V63= vs_base[0];
	goto T87;
	goto T89;
T89:;
	V63= make_cons((V63),Cnil);
	goto T87;
T87:;
	{object V66;
	V66= (((V57))==(VV[13])?Ct:Cnil);
	if(((V66))==Cnil){
	goto T95;}
	goto T92;
	goto T95;
T95:;
	V57= (VFUN_NARGS=2,(*(LnkLI128))((V57),small_fixnum(1)));
	if(((V57))!=Cnil){
	goto T98;}
	{object V67;
	V67= CMPcadr((V56));
	if(!(type_of((V67))==t_cons)){
	goto T104;}
	base[7]= CMPcar((V67));
	vs_top=(vs_base=base+7)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T104;}
	(void)((VFUN_NARGS=3,(*(LnkLI129))(VV[14],VV[15],(V67))));
	goto T102;
	goto T104;
T104:;
	(void)((VFUN_NARGS=3,(*(LnkLI129))(VV[16],VV[17],(V67))));
	goto T102;
T102:;
	V57= VV[13];
	goto T92;}
	goto T98;
T98:;
	V57= CMPcdr((V57));
	{object V68;
	V68= CMPcar((V57));
	V57= CMPcdr((V57));
	V64= (V68);}
	if(((V59))==Cnil){
	goto T117;}
	base[7]= (V59);
	base[8]= (V58);
	base[9]= (V40);
	base[10]= (V48);
	base[11]= (base[4]->c.c_car);
	vs_top=(vs_base=base+7)+5;
	(void) (*Lnk130)();
	if(vs_base<vs_top){
	V59= vs_base[0];
	vs_base++;
	}else{
	V59= Cnil;}
	if(vs_base<vs_top){
	V65= vs_base[0];
	}else{
	V65= Cnil;}
	vs_top=sup;
	V48= Cnil;
	goto T117;
T117:;
	{register object V69;
	object V70;
	object V71;
	base[7]= (V57);
	base[8]= (V64);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk131)();
	if(vs_base>=vs_top){vs_top=sup;goto T132;}
	V69= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T133;}
	V70= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T134;}
	V71= vs_base[0];
	vs_top=sup;
	goto T135;
	goto T132;
T132:;
	V69= Cnil;
	goto T133;
T133:;
	V70= Cnil;
	goto T134;
T134:;
	V71= Cnil;
	goto T135;
T135:;
	if(((V70))==Cnil){
	goto T136;}
	V61= nconc((V61),(V70));
	goto T136;
T136:;
	if(((V61))==Cnil){
	goto T142;}
	V57= listA(4,VV[18],Cnil,make_cons(VV[19],(V61)),(V71));
	goto T140;
	goto T142;
T142:;
	if((CMPcdr((V71)))!=Cnil){
	goto T145;}
	V57= CMPcar((V71));
	goto T140;
	goto T145;
T145:;
	V57= make_cons(VV[20],(V71));
	goto T140;
T140:;}
	base[7]= (V57);
	base[8]= (V40);
	base[9]= (V65);
	base[10]= CMPcar((V64));
	base[11]= (V42);
	base[12]= (V43);
	base[13]= (V56);
	vs_top=(vs_base=base+7)+7;
	(void) (*Lnk132)();
	vs_top=sup;
	V57= vs_base[0];
	V72 = (V57);
	if((V72)==(VV[13])){
	goto T92;}
	if(((V60))==Cnil){
	goto T92;}
	V73 = (V45);
	{object V75;
	object V76= (V60);
	if(V76==Cnil){
	V74= Cnil;
	goto T160;}
	base[7]=V75=MMcons(Cnil,Cnil);
	goto T161;
T161:;
	{object V78;
	V78= CMPcar((V76->c.c_car));
	V79 = (V78);
	if(!(((V78))==(VV[21]))){
	goto T166;}
	V81= CMPcadr((V76->c.c_car));
	V82= (check_alist(V65),sublis1(V65,CMPcddr((V76->c.c_car)),&eql));
	V80= make_cons(/* INLINE-ARGS */V81,V82);
	goto T164;
	goto T166;
T166:;
	V80= (check_alist(V65),sublis1(V65,CMPcdr((V76->c.c_car)),&eql));
	goto T164;
T164:;
	(V75->c.c_car)= make_cons(V79,V80);}
	if((V76=MMcdr(V76))==Cnil){
	V74= base[7];
	goto T160;}
	V75=MMcdr(V75)=MMcons(Cnil,Cnil);
	goto T161;}
	goto T160;
T160:;
	V45= nconc(V73,V74);}
	goto T92;
T92:;
	if(!(((V57))==(VV[13]))){
	goto T169;}
	{object V85;
	object V86;
	vs_base=vs_top;
	L4(base);
	vs_top=sup;
	V85= vs_base[0];
	V86= CMPcadr((V56));
	V87 = (V85);
	if(((V48))==Cnil){
	goto T178;}
	{object V90;
	V90= (V48);
	V48= Cnil;
	V89= (V90);}
	V91= append(V89,VV[23]);
	V88= make_cons(VV[20],/* INLINE-ARGS */V91);
	goto T176;
	goto T178;
T178:;
	V88= (V86);
	goto T176;
T176:;
	V92= list(2,V87,V88);
	V59= make_cons(/* INLINE-ARGS */V92,Cnil);
	V57= list(3,VV[4],(V85),list(2,VV[5],list(3,VV[6],Cnil,(V42))));}
	goto T169;
T169:;
	{object V93;
	base[8]= (V63);
	vs_top=(vs_base=base+8)+1;
	Lcopy_list();
	vs_top=sup;
	V94= vs_base[0];
	V95 = (V57);
	V93= (*(LnkLI133))(V94,V95);
	V46= make_cons((V93),(V46));}
	{register object V96;
	register object V97;
	V96= (V63);
	V97= CMPcar((V96));
	goto T193;
T193:;
	if(!(((V96))==Cnil)){
	goto T194;}
	goto T189;
	goto T194;
T194:;
	{object V98;
	V98= CMPcar((V43));
	V43= CMPcdr((V43));}
	V96= CMPcdr((V96));
	V97= CMPcar((V96));
	goto T193;}
	goto T189;
T189:;
	base[7]= (V47);
	base[8]= (V59);
	if(((V62))==Cnil){
	goto T213;}
	V99= CMPcar((V63));
	V100= append((V62),VV[24]);
	V101= list(2,/* INLINE-ARGS */V99,make_cons(VV[20],/* INLINE-ARGS */V100));
	base[9]= make_cons(/* INLINE-ARGS */V101,CMPcdr((V63)));
	goto T211;
	goto T213;
T213:;
	base[9]= (V63);
	goto T211;
T211:;
	vs_top=(vs_base=base+7)+3;
	Lnconc();
	vs_top=sup;
	V47= vs_base[0];}}
	goto T59;
T59:;
	V55= CMPcdr((V55));
	V56= CMPcar((V55));
	goto T54;}
	goto T50;
T50:;
	{register object V102;
	V102= (V39);
	goto T222;
T222:;
	if(!(type_of((V102))==t_cons)){
	goto T224;}
	if(!(type_of(CMPcar((V102)))==t_cons)){
	goto T224;}
	if((CMPcaar((V102)))==(VV[19])){
	goto T223;}
	goto T224;
T224:;
	if(((V102))==((V39))){
	goto T220;}
	base[4]= (V39);
	base[5]= (V102);
	vs_top=(vs_base=base+4)+2;
	Lldiff();
	vs_top=sup;
	V44= vs_base[0];
	V39= (V102);
	goto T220;
	goto T223;
T223:;
	V102= CMPcdr((V102));
	goto T222;}
	goto T220;
T220:;
	V103 = (V47);
	if((V45)==Cnil){
	base[4]= Cnil;
	goto T242;}
	V105= make_cons(VV[19],(V45));
	base[4]= make_cons(/* INLINE-ARGS */V105,Cnil);
	goto T242;
T242:;
	base[5]= (V44);
	base[6]= (V48);
	V106= nreverse((V46));
	V107 = (V39);
	V108= append(/* INLINE-ARGS */V106,V107);
	V109= make_cons(VV[2],/* INLINE-ARGS */V108);
	base[7]= make_cons(/* INLINE-ARGS */V109,Cnil);
	vs_top=(vs_base=base+4)+4;
	Lappend();
	vs_top=sup;
	V104= vs_base[0];
	{object V110 = list(3,VV[0],(V41),listA(3,VV[1],V103,V104));
	VMR3(V110)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for EXPAND-INTO-LET	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{object V111;
	object V112;
	object V113;
	check_arg(3);
	V111=(base[0]);
	V112=(base[1]);
	V113=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V114;
	register object V115;
	register object V116;
	register object V117;
	register object V118;
	V114= (V111);
	V115= Cnil;
	V116= Cnil;
	V117= Cnil;
	V118= Cnil;
	goto T247;
T247:;
	base[3]= (V114);
	base[4]= (V113);
	vs_top=(vs_base=base+3)+2;
	Lmacroexpand_1();
	if(vs_base<vs_top){
	V114= vs_base[0];
	vs_base++;
	}else{
	V114= Cnil;}
	if(vs_base<vs_top){
	V115= vs_base[0];
	}else{
	V115= Cnil;}
	vs_top=sup;
	{register object V119;
	V119= (((type_of((V114))==t_cons?Ct:Cnil))==Cnil?Ct:Cnil);
	if(((V119))==Cnil){
	goto T256;}
	goto T253;
	goto T256;
T256:;
	V116= CMPcar((V114));
	V120 = (V116);
	if(!(type_of(V120)==t_symbol)){
	goto T259;}
	{object V121= (V116);
	if((V121!= VV[18])
	&& (V121!= VV[1]))goto T262;
	V117= CMPcadr((V114));
	V118= CMPcddr((V114));
	goto T248;
	goto T262;
T262:;
	goto T253;}
	goto T259;
T259:;
	if(!(type_of((V116))==t_cons)){
	goto T253;}
	if(!((CMPcar((V116)))==(VV[6]))){
	goto T253;}
	base[3]= VV[134];
	V117= CMPcadr((V116));
	base[4]= (V117);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk135)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T253;}
	if(!(((long)length(CMPcadr((V114))))==((long)length((V117))))){
	goto T253;}
	if((CMPcddr((V114)))!=Cnil){
	goto T253;}
	V118= CMPcddr((V116));
	{object V122;
	object V123= (V117);
	object V124= CMPcadr((V114));
	if(V123==Cnil||V124==Cnil){
	V117= Cnil;
	goto T283;}
	base[3]=V122=MMcons(Cnil,Cnil);
	goto T284;
T284:;
	(V122->c.c_car)= list(2,(V123->c.c_car),(V124->c.c_car));
	if((V123=MMcdr(V123))==Cnil||(V124=MMcdr(V124))==Cnil){
	V117= base[3];
	goto T283;}
	V122=MMcdr(V122)=MMcons(Cnil,Cnil);
	goto T284;}
	goto T283;
T283:;
	V116= VV[18];
	goto T248;}
	goto T253;
T253:;
	if(((V115))==Cnil){
	goto T289;}
	goto T247;
	goto T289;
T289:;
	base[3]= (V114);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T248;
T248:;
	{object V125;
	object V126;
	object V127;
	V125= (*(LnkLI136))((V117));
	V126= Cnil;
	V127= Cnil;
	{object V128;
	object V129;
	object V130;
	base[3]= (V118);
	base[4]= (V125);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk131)();
	if(vs_base>=vs_top){vs_top=sup;goto T296;}
	V128= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T297;}
	V129= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T298;}
	V130= vs_base[0];
	vs_top=sup;
	goto T299;
	goto T296;
T296:;
	V128= Cnil;
	goto T297;
T297:;
	V129= Cnil;
	goto T298;
T298:;
	V130= Cnil;
	goto T299;
T299:;
	V127= (*(LnkLI137))((V125),(V128));
	if(((V127))==Cnil){
	goto T301;}
	base[3]= (VV[138]->s.s_gfdef);
	base[4]= (V127);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk135)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T307;}
	V131= VV[16];
	goto T305;
	goto T307;
T307:;
	V131= VV[14];
	goto T305;
T305:;
	V132 = (V112);
	V133 = (V111);
	V134 = (V127);
	(void)((VFUN_NARGS=5,(*(LnkLI129))(V131,VV[26],V132,V133,V134)));
	base[3]= VV[13];
	vs_top=(vs_base=base+3)+1;
	return;
	goto T301;
T301:;
	if(type_of((V130))==t_cons){
	goto T313;}
	base[3]= Cnil;
	goto T311;
	goto T313;
T313:;
	if((CMPcdr((V130)))!=Cnil){
	goto T316;}
	base[3]= CMPcar((V130));
	goto T311;
	goto T316;
T316:;
	base[4]= (V130);
	vs_top=(vs_base=base+4)+1;
	Lbutlast();
	vs_top=sup;
	V126= vs_base[0];
	base[4]= (V130);
	vs_top=(vs_base=base+4)+1;
	Llast();
	vs_top=sup;
	V135= vs_base[0];
	base[3]= CMPcar(V135);
	goto T311;
T311:;
	base[4]= (V116);
	base[5]= (V117);
	base[6]= (V128);
	base[7]= (V129);
	base[8]= (V126);
	vs_top=(vs_base=base+3)+6;
	return;}}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local entry for function VARIABLES-FROM-LET	*/

static object LI6(V137)

object V137;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{object V138;
	object V139= (V137);
	if(V139==Cnil){
	{object V140 = Cnil;
	VMR5(V140)}}
	base[0]=V138=MMcons(Cnil,Cnil);
	goto T328;
T328:;
	if(!(type_of((V139->c.c_car))==t_cons)){
	goto T331;}
	(V138->c.c_car)= CMPcar((V139->c.c_car));
	goto T329;
	goto T331;
T331:;
	(V138->c.c_car)= (V139->c.c_car);
	goto T329;
T329:;
	if((V139=MMcdr(V139))==Cnil){
	{object V142 = base[0];
	VMR5(V142)}}
	V138=MMcdr(V138)=MMcons(Cnil,Cnil);
	goto T328;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for ITERATE-TRANSFORM-BODY	*/

static void L7()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM6; VC6
	vs_check;
	{VOL object V143;
	check_arg(7);
	V143=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	base[2]=MMcons(base[2],base[1]);
	base[3]=MMcons(base[3],base[2]);
	base[4]=MMcons(base[4],base[3]);
	base[5]=MMcons(base[5],base[4]);
	base[6]=MMcons(base[6],base[5]);
	vs_top=sup;
	base[7]=alloc_frame_id();
	base[7]=MMcons(base[7],base[6]);
	frs_push(FRS_CATCH,(base[7]->c.c_car));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	base[8]= (V143);
	base[9]= (base[1]->c.c_car);
	base[10]= 
	make_cclosure_new(LC38,Cnil,base[7],Cdata);
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk139)();
	frs_pop();
	return;
	}
	}
}
/*	function definition for PARSE-DECLARATIONS	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	{register object V144;
	object V145;
	check_arg(2);
	V144=(base[0]);
	V145=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V146;
	register object V147;
	register object V148;
	V146= Cnil;
	V147= Cnil;
	V148= Cnil;
	goto T337;
T337:;
	if(((V144))==Cnil){
	goto T340;}
	V148= CMPcar((V144));
	V149 = (V148);
	if(!(type_of(V149)==t_cons)){
	goto T340;}
	if((CMPcar((V148)))==(VV[19])){
	goto T339;}
	goto T340;
T340:;
	base[2]= (V146);
	base[3]= (V147);
	base[4]= (V144);
	vs_top=(vs_base=base+2)+3;
	return;
	goto T339;
T339:;
	{
	object V150= CMPcdr((V148));
	if(V150==Cnil){
	goto T350;}
	goto T351;
T351:;
	{register object V151;
	V151= (V150->c.c_car);
	{object V152= CMPcar((V151));
	if((V152!= VV[140])
	&& (V152!= VV[141])
	&& (V152!= VV[142]))goto T353;
	V147= make_cons(V151,(V147));
	goto T352;
	goto T353;
T353:;
	{object V154;
	register object V155;
	object V156;
	if(!((CMPcar((V151)))==(VV[21]))){
	goto T357;}
	V154= CMPcddr((V151));
	goto T355;
	goto T357;
T357:;
	V154= CMPcdr((V151));
	goto T355;
T355:;
	base[4]= (V145);
	base[5]= (V154);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk143)();
	vs_top=sup;
	V155= vs_base[0];
	V156= Cnil;
	if(((V155))!=Cnil){
	goto T364;}
	V147= make_cons(V151,(V147));
	goto T352;
	goto T364;
T364:;
	base[4]= (V154);
	base[5]= (V155);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk144)();
	vs_top=sup;
	V156= vs_base[0];
	if(((V156))!=Cnil){
	goto T368;}
	V146= make_cons(V151,(V146));
	goto T352;
	goto T368;
T368:;
	{object V159;
	if((CMPcar((V151)))==(VV[21])){
	goto T376;}
	V160= Cnil;
	goto T375;
	goto T376;
T376:;
	V160= make_cons(CMPcadr((V151)),Cnil);
	goto T375;
T375:;
	V159= make_cons(VV[21],V160);
	{object V161;
	V161= append((V159),(V156));
	V147= make_cons((V161),(V147));}
	{object V162;
	V162= append((V159),(V155));
	V146= make_cons((V162),(V146));}}}}}
	goto T352;
T352:;
	if((V150=MMcdr(V150))==Cnil){
	(void)(CMPcdr((V148)));
	goto T350;}
	goto T351;}
	goto T350;
T350:;
	{object V163;
	V163= CMPcar((V144));
	V144= CMPcdr((V144));}
	goto T337;}
	}
}
/*	local entry for function EXTRACT-SPECIAL-BINDINGS	*/

static object LI9(V166,V167)

register object V166;object V167;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{register object V168;
	base[0]= (VV[138]->s.s_gfdef);
	base[1]= (V166);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk145)();
	vs_top=sup;
	V168= vs_base[0];
	{register object V169;
	register object V170;
	V169= (V167);
	V170= CMPcar((V169));
	goto T394;
T394:;
	if(!(((V169))==Cnil)){
	goto T395;}
	goto T390;
	goto T395;
T395:;
	if(!((CMPcar((V170)))==(VV[30]))){
	goto T399;}
	base[1]= (V168);
	base[3]= (V166);
	base[4]= CMPcdr((V170));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk143)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk146)();
	vs_top=sup;
	V168= vs_base[0];
	goto T399;
T399:;
	V169= CMPcdr((V169));
	V170= CMPcar((V169));
	goto T394;}
	goto T390;
T390:;
	{object V171 = (V168);
	VMR8(V171)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FUNCTION-LAMBDA-P	*/

static object LI10(object V172,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{register object V173;
	object V174;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V173= V172;
	narg = narg - 1;
	if (narg <= 0) goto T412;
	else {
	V174= first;}
	--narg; goto T413;
	goto T412;
T412:;
	V174= Cnil;
	goto T413;
T413:;
	{object V175;
	object V176;
	V175= Cnil;
	V176= Cnil;
	if(type_of((V173))==t_cons){
	goto T415;}
	{object V177 = Cnil;
	VMR9(V177)}
	goto T415;
T415:;
	if((CMPcar((V173)))==(VV[5])){
	goto T417;}
	{object V178 = Cnil;
	VMR9(V178)}
	goto T417;
T417:;
	V173= CMPcdr((V173));
	V179 = (V173);
	if(type_of(V179)==t_cons){
	goto T419;}
	{object V180 = Cnil;
	VMR9(V180)}
	goto T419;
T419:;
	if((CMPcdr((V173)))==Cnil){
	goto T422;}
	{object V181 = Cnil;
	VMR9(V181)}
	goto T422;
T422:;
	V173= CMPcar((V173));
	V182 = (V173);
	if(type_of(V182)==t_cons){
	goto T424;}
	{object V183 = Cnil;
	VMR9(V183)}
	goto T424;
T424:;
	if((CMPcar((V173)))==(VV[6])){
	goto T427;}
	{object V184 = Cnil;
	VMR9(V184)}
	goto T427;
T427:;
	V176= CMPcdr((V173));
	V185 = (V176);
	if(type_of(V185)==t_cons){
	goto T429;}
	{object V186 = Cnil;
	VMR9(V186)}
	goto T429;
T429:;
	V175= CMPcar((V176));
	V187 = (V175);
	if(type_of(V187)==t_cons||(V187)==Cnil){
	goto T432;}
	{object V188 = Cnil;
	VMR9(V188)}
	goto T432;
T432:;
	if(!(((V174))==Cnil)){
	goto T437;}
	goto T435;
	goto T437;
T437:;
	V189 = CMPmake_fixnum((long)length((V175)));
	if(eql(V189,(V174))){
	goto T435;}
	{object V190 = Cnil;
	VMR9(V190)}
	goto T435;
T435:;
	{object V191 = (V173);
	VMR9(V191)}}
	va_end(ap);
	return Cnil;}
	}
/*	function definition for RENAME-LET-BINDINGS	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V192;
	object V193;
	object V194;
	object V195;
	object V196;
	if(vs_top-vs_base<4) too_few_arguments();
	if(vs_top-vs_base>5) too_many_arguments();
	V192=(base[0]);
	V193=(base[1]);
	V194=(base[2]);
	V195=(base[3]);
	vs_base=vs_base+4;
	if(vs_base>=vs_top){vs_top=sup;goto T439;}
	V196=(base[4]);
	vs_top=sup;
	goto T440;
	goto T439;
T439:;
	V196= Cnil;
	goto T440;
T440:;
	{register object V197;
	V197= Cnil;
	{object V198;
	object V199= (V192);
	if(V199==Cnil){
	base[5]= Cnil;
	goto T442;}
	base[6]=V198=MMcons(Cnil,Cnil);
	goto T443;
T443:;
	{register object V200;
	V200= (V199->c.c_car);
	{object V201;
	object V202;
	if(type_of((V200))==t_cons){
	goto T447;}
	V201= Cnil;
	goto T445;
	goto T447;
T447:;
	if(((V193))==(VV[18])){
	goto T449;}
	if(((V197))!=Cnil){
	goto T450;}
	goto T449;
T449:;
	V201= CMPcadr((V200));
	goto T445;
	goto T450;
T450:;
	base[7]= CMPcadr((V200));
	base[8]= (V197);
	base[9]= (V194);
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk147)();
	vs_top=sup;
	V201= vs_base[0];
	goto T445;
T445:;
	if(((V196))==Cnil){
	goto T459;}
	V202= (
	(type_of((V196)) == t_sfun ?(*(((V196))->sfn.sfn_self)):
	(fcall.argd=0,type_of((V196))==t_vfun) ?
	(*(((V196))->sfn.sfn_self)):
	(fcall.fun=((V196)),fcalln))());
	goto T457;
	goto T459;
T459:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V202= vs_base[0];
	goto T457;
T457:;
	{object V203;
	if(!(type_of((V200))==t_cons)){
	goto T465;}
	V204= CMPcar((V200));
	goto T463;
	goto T465;
T465:;
	V204= (V200);
	goto T463;
T463:;
	V205 = (V202);
	V203= make_cons(V204,V205);
	V197= make_cons((V203),(V197));}
	if(((V195))==Cnil){
	goto T468;}
	V206= make_cons((V201),Cnil);
	V207= append((V195),/* INLINE-ARGS */V206);
	V201= make_cons(VV[20],/* INLINE-ARGS */V207);
	V195= Cnil;
	goto T468;
T468:;
	(V198->c.c_car)= list(2,(V202),(V201));}}
	if((V199=MMcdr(V199))==Cnil){
	base[5]= base[6];
	goto T442;}
	V198=MMcdr(V198)=MMcons(Cnil,Cnil);
	goto T443;}
	goto T442;
T442:;
	base[6]= (V197);
	vs_top=(vs_base=base+5)+2;
	return;}
	}
}
/*	function definition for RENAME-VARIABLES	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{object V208;
	check_arg(3);
	V208=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	base[2]=MMcons(base[2],base[1]);
	vs_top=sup;
	base[3]= (V208);
	base[4]= (base[2]->c.c_car);
	base[5]= 
	make_cclosure_new(LC39,Cnil,base[2],Cdata);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk139)();
	return;
	}
}
/*	local entry for function MV-SETQ	*/

static object LI13(V211,V212)

register object V211;register object V212;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	if(((V211))!=Cnil){
	goto T479;}
	{object V213 = (V212);
	VMR12(V213)}
	goto T479;
T479:;
	if(type_of((V211))==t_cons){
	goto T482;}
	{object V214 = list(3,VV[3],(V211),(V212));
	VMR12(V214)}
	goto T482;
T482:;
	if(!(type_of((V212))==t_cons||((V212))==Cnil)){
	goto T485;}
	if(!((CMPcar((V212)))==(VV[31]))){
	goto T485;}
	{object V215;
	V215= CMPcar((V212));
	V212= CMPcdr((V212));}
	{object V217;
	object V218= (V211);
	if(V218==Cnil){
	V216= Cnil;
	goto T493;}
	base[0]=V217=MMcons(Cnil,Cnil);
	goto T494;
T494:;
	V220= CMPcar(V218);
	if((CMPcdr(V218))!=Cnil){
	goto T497;}
	if((CMPcdr((V212)))!=Cnil){
	goto T498;}
	goto T497;
T497:;
	{object V222;
	V222= CMPcar((V212));
	V212= CMPcdr((V212));
	V221= (V222);
	goto T496;}
	goto T498;
T498:;
	V221= make_cons(VV[33],(V212));
	goto T496;
T496:;
	(V217->c.c_cdr)= list(2,/* INLINE-ARGS */V220,V221);
	while(MMcdr(V217)!=Cnil)V217=MMcdr(V217);
	if((V218=MMcdr(V218))==Cnil){
	base[0]=base[0]->c.c_cdr;
	V216= base[0];
	goto T493;}
	goto T494;}
	goto T493;
T493:;
	{object V223 = make_cons(VV[32],V216);
	VMR12(V223)}
	goto T485;
T485:;
	if((CMPcdr((V211)))!=Cnil){
	goto T506;}
	{object V224 = list(3,VV[32],CMPcar((V211)),(V212));
	VMR12(V224)}
	goto T506;
T506:;
	{object V225 = list(3,VV[3],(V211),(V212));
	VMR12(V225)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VARIABLE-SAME-P	*/

static object LI14(V229,V230,V231)

object V229;object V230;object V231;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	V232= (*(LnkLI148))((V229),(V230));
	V233= (*(LnkLI148))((V229),(V231));
	{object V234 = ((/* INLINE-ARGS */V232)==(/* INLINE-ARGS */V233)?Ct:Cnil);
	VMR13(V234)}
	return Cnil;
}
/*	local entry for function MAYBE-WARN	*/

static object LI15(object V235,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB14 VMS14 VMV14
	{object V236;
	object V237;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V236= V235;
	narg= narg - 1;
	V238 = list_vector_new(narg,first,ap);
	V237= V238;
	{object V239= (VV[34]->s.s_dbind);
	if((V239!= Cnil))goto T511;
	goto T509;
	goto T511;
T511:;
	if((V239!= VV[16]))goto T512;
	if(!(((V236))==(VV[16]))){
	goto T509;}
	goto T510;
	goto T512;
T512:;}
	goto T510;
T510:;
	base[0]=VV[126]->s.s_gfdef;
	{object V240;
	V240= (V237);
	 vs_top=base+1;
	 while(V240!=Cnil)
	 {vs_push((V240)->c.c_car);V240=(V240)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk126)();
	vs_top=sup;
	{object V241 = vs_base[0];
	VMR14(V241)}
	goto T509;
T509:;
	{object V242 = Cnil;
	VMR14(V242)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	macro definition for INTERVAL	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V243=base[0]->c.c_cdr;
	{object V244=getf(V243,VV[149],OBJNULL);
	if(V244==OBJNULL){
	base[2]= Cnil;} else {
	base[2]= V244;
	}}
	{object V245=getf(V243,VV[150],OBJNULL);
	if(V245==OBJNULL){
	base[3]= Cnil;} else {
	base[3]= V245;
	}}
	{object V246=getf(V243,VV[151],OBJNULL);
	if(V246==OBJNULL){
	base[4]= Cnil;} else {
	base[4]= V246;
	}}
	{object V247=getf(V243,VV[152],OBJNULL);
	if(V247==OBJNULL){
	base[5]= Cnil;} else {
	base[5]= V247;
	}}
	{object V248=getf(V243,VV[153],OBJNULL);
	if(V248==OBJNULL){
	base[6]= Cnil;} else {
	base[6]= V248;
	}}
	{object V249=getf(V243,VV[154],OBJNULL);
	if(V249==OBJNULL){
	base[7]= Cnil;} else {
	base[7]= V249;
	}}
	{object V250=getf(V243,VV[155],OBJNULL);
	if(V250==OBJNULL){
	base[8]= Cnil;} else {
	base[8]= V250;
	}}
	{object V251=getf(V243,VV[156],OBJNULL);
	if(V251==OBJNULL){
	base[9]= Cnil;} else {
	base[9]= V251;
	}}
	check_other_key(V243,8,VV[149],VV[150],VV[151],VV[152],VV[153],VV[154],VV[155],VV[156]);}
	if((base[2])==Cnil){
	goto T523;}
	if((base[3])==Cnil){
	goto T523;}
	base[10]= VV[35];
	base[11]= base[0];
	vs_top=(vs_base=base+10)+2;
	Lerror();
	return;
	goto T523;
T523:;
	base[10]= Cnil;
	base[11]= list(4,base[4],base[5],base[6],base[7]);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk157)();
	vs_top=sup;
	V252= vs_base[0];
	if((CMPcdr(V252))==Cnil){
	goto T530;}
	base[10]= VV[36];
	base[11]= base[0];
	vs_top=(vs_base=base+10)+2;
	Lerror();
	return;
	goto T530;
T530:;
	{object V253;
	register object V254;
	object V255;
	if(base[3]!=Cnil){
	V253= base[3];
	goto T537;}
	if(base[5]!=Cnil){
	V253= base[5];
	goto T537;}
	V253= base[6];
	goto T537;
T537:;
	if(base[4]!=Cnil){
	V254= base[4];
	goto T538;}
	if(base[5]!=Cnil){
	V254= base[5];
	goto T538;}
	if(base[6]!=Cnil){
	V254= base[6];
	goto T538;}
	V254= base[7];
	goto T538;
T538:;
	if((base[8])!=Cnil){
	goto T541;}
	V255= small_fixnum(1);
	goto T539;
	goto T541;
T541:;
	base[13]= base[8];
	vs_top=(vs_base=base+13)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T544;}
	V255= base[8];
	goto T539;
	goto T544;
T544:;
	V255= Cnil;
	goto T539;
T539:;
	if(base[2]!=Cnil){
	V256= base[2];
	goto T547;}
	if(base[3]!=Cnil){
	V256= base[3];
	goto T547;}
	V256= small_fixnum(0);
	goto T547;
T547:;
	V257= list(2,VV[37],V256);
	if((V254)==Cnil){
	V258= Cnil;
	goto T548;}
	V259= list(2,VV[38],(V254));
	V258= make_cons(/* INLINE-ARGS */V259,Cnil);
	goto T548;
T548:;
	if(((V255))==Cnil){
	goto T550;}
	V260= Cnil;
	goto T549;
	goto T550;
T550:;
	V261= list(2,VV[39],base[8]);
	V260= make_cons(/* INLINE-ARGS */V261,Cnil);
	goto T549;
T549:;
	V262= append(V258,V260);
	V263= make_cons(/* INLINE-ARGS */V257,/* INLINE-ARGS */V262);
	if(base[9]==Cnil){
	V264= Cnil;
	goto T552;}
	if((V254)==Cnil){
	V265= Cnil;
	goto T553;}
	V265= VV[40];
	goto T553;
T553:;
	if(((V255))==Cnil){
	goto T555;}
	V266= Cnil;
	goto T554;
	goto T555;
T555:;
	V266= VV[41];
	goto T554;
T554:;
	V267= list(2,VV[19],listA(4,VV[21],base[9],VV[37],append(V265,V266)));
	V264= make_cons(/* INLINE-ARGS */V267,Cnil);
	goto T552;
T552:;
	if(((V254))!=Cnil){
	goto T559;}
	V268= VV[43];
	goto T557;
	goto T559;
T559:;
	V268= Cnil;
	goto T557;
T557:;
	if(((V254))==Cnil){
	goto T563;}
	if((base[6])==Cnil){
	goto T567;}
	V270= VV[45];
	goto T565;
	goto T567;
T567:;
	if((base[7])==Cnil){
	goto T570;}
	V270= VV[46];
	goto T565;
	goto T570;
T570:;
	if(((V253))==Cnil){
	goto T573;}
	V270= VV[47];
	goto T565;
	goto T573;
T573:;
	V270= VV[48];
	goto T565;
T565:;
	V269= listA(3,VV[44],make_cons(V270,VV[49]),VV[50]);
	goto T561;
	goto T563;
T563:;
	V269= VV[37];
	goto T561;
T561:;
	if(((V253))==Cnil){
	goto T577;}
	V271= VV[51];
	goto T575;
	goto T577;
T577:;
	V271= VV[52];
	goto T575;
T575:;
	if((V255)!=Cnil){
	V272= (V255);
	goto T579;}
	V272= VV[39];
	goto T579;
T579:;
	V273= list(3,VV[33],V269,list(3,VV[32],VV[37],list(3,V271,VV[37],V272)));
	V274= make_cons(/* INLINE-ARGS */V273,Cnil);
	V275= list(2,VV[5],listA(3,VV[6],VV[42],append(V268,/* INLINE-ARGS */V274)));
	V276= make_cons(/* INLINE-ARGS */V275,Cnil);
	base[13]= listA(3,VV[18],/* INLINE-ARGS */V263,append(V264,/* INLINE-ARGS */V276));
	vs_top=(vs_base=base+13)+1;
	return;}
}
/*	macro definition for LIST-ELEMENTS	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V277=base[0]->c.c_cdr;
	if(endp(V277))invalid_macro_call();
	base[2]= (V277->c.c_car);
	V277=V277->c.c_cdr;
	{object V278=getf(V277,VV[155],OBJNULL);
	if(V278==OBJNULL){
	base[3]= VV[53];} else {
	base[3]= V278;
	}}
	check_other_key(V277,1,VV[155]);}
	V279= list(2,VV[54],base[2]);
	V280= make_cons(/* INLINE-ARGS */V279,Cnil);
	base[4]= list(3,VV[18],/* INLINE-ARGS */V280,list(2,VV[5],list(3,VV[6],VV[55],list(3,VV[33],VV[56],list(3,VV[32],VV[54],list(3,VV[4],base[3],VV[54]))))));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for LIST-TAILS	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V281=base[0]->c.c_cdr;
	if(endp(V281))invalid_macro_call();
	base[2]= (V281->c.c_car);
	V281=V281->c.c_cdr;
	{object V282=getf(V281,VV[155],OBJNULL);
	if(V282==OBJNULL){
	base[3]= VV[57];} else {
	base[3]= V282;
	}}
	check_other_key(V281,1,VV[155]);}
	V283= list(2,VV[54],base[2]);
	V284= make_cons(/* INLINE-ARGS */V283,Cnil);
	base[4]= list(3,VV[18],/* INLINE-ARGS */V284,list(2,VV[5],list(3,VV[6],VV[58],list(3,VV[33],VV[59],list(3,VV[32],VV[54],list(3,VV[4],base[3],VV[54]))))));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for ELEMENTS	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V285=base[0]->c.c_cdr;
	if(endp(V285))invalid_macro_call();
	base[2]= (V285->c.c_car);
	V285=V285->c.c_cdr;
	if(!endp(V285))invalid_macro_call();}
	{object V286;
	object V287;
	object V288;
	if(type_of(base[2])==t_cons){
	goto T583;}
	V286= Cnil;
	goto T582;
	goto T583;
T583:;
	if((CMPcar(base[2]))==(VV[60])){
	goto T585;}
	V286= Cnil;
	goto T582;
	goto T585;
T585:;
	V286= CMPcadr(base[2]);
	goto T582;
T582:;
	if(((V286))==Cnil){
	goto T589;}
	V287= (*(LnkLI158))((V286));
	goto T587;
	goto T589;
T589:;
	V287= VV[61];
	goto T587;
T587:;
	V288= (((V286))==(VV[62])?Ct:Cnil);
	V289= list(2,VV[64],base[2]);
	if(((V288))==Cnil){
	goto T593;}
	V290= Cnil;
	goto T592;
	goto T593;
T593:;
	V290= VV[65];
	goto T592;
T592:;
	V291= listA(3,VV[63],/* INLINE-ARGS */V289,V290);
	if(((V288))==Cnil){
	goto T597;}
	V292= VV[68];
	goto T595;
	goto T597;
T597:;
	V292= list(2,VV[69],make_cons((V287),VV[70]));
	goto T595;
T595:;
	base[6]= list(3,VV[1],/* INLINE-ARGS */V291,list(2,VV[5],list(3,VV[6],VV[66],list(3,VV[31],list(3,VV[67],V292,VV[71]),VV[72]))));
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	macro definition for PLIST-ELEMENTS	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V293=base[0]->c.c_cdr;
	if(endp(V293))invalid_macro_call();
	base[2]= (V293->c.c_car);
	V293=V293->c.c_cdr;
	if(!endp(V293))invalid_macro_call();}
	V294= list(2,VV[54],base[2]);
	base[3]= list(3,VV[18],make_cons(/* INLINE-ARGS */V294,Cnil),VV[73]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function SEQUENCE-ACCESSOR	*/

static object LI21(V296)

object V296;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	if(!(type_of((V296))==t_cons)){
	goto T601;}
	V298= CMPcar((V296));
	goto T599;
	goto T601;
T601:;
	V298= (V296);
	goto T599;
T599:;
	{object V297= V298;
	if((V297!= VV[159])
	&& (V297!= VV[160])
	&& (V297!= VV[161]))goto T603;
	{object V299 = VV[74];
	VMR20(V299)}
	goto T603;
T603:;
	if((V297!= VV[162]))goto T604;
	{object V300 = VV[75];
	VMR20(V300)}
	goto T604;
T604:;
	if((V297!= VV[163]))goto T605;
	{object V301 = VV[76];
	VMR20(V301)}
	goto T605;
T605:;
	if((V297!= VV[164]))goto T606;
	{object V302 = VV[77];
	VMR20(V302)}
	goto T606;
T606:;
	if((V297!= VV[165]))goto T607;
	{object V303 = VV[78];
	VMR20(V303)}
	goto T607;
T607:;
	if((V297!= VV[166]))goto T608;
	{object V304 = VV[79];
	VMR20(V304)}
	goto T608;
T608:;
	{object V305 = VV[61];
	VMR20(V305)}}
	return Cnil;
}
/*	macro definition for EACHTIME	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V306=base[0]->c.c_cdr;
	if(endp(V306))invalid_macro_call();
	base[2]= (V306->c.c_car);
	V306=V306->c.c_cdr;
	if(!endp(V306))invalid_macro_call();}
	base[3]= list(2,VV[5],list(4,VV[6],VV[80],VV[81],base[2]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for WHILE	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V307=base[0]->c.c_cdr;
	if(endp(V307))invalid_macro_call();
	base[2]= (V307->c.c_car);
	V307=V307->c.c_cdr;
	if(!endp(V307))invalid_macro_call();}
	base[3]= list(2,VV[5],list(3,VV[6],VV[82],list(3,VV[83],base[2],VV[84])));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for UNTIL	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V308=base[0]->c.c_cdr;
	if(endp(V308))invalid_macro_call();
	base[2]= (V308->c.c_car);
	V308=V308->c.c_cdr;
	if(!endp(V308))invalid_macro_call();}
	base[3]= list(2,VV[5],list(3,VV[6],VV[85],list(3,VV[86],base[2],VV[87])));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for GATHERING	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V309=base[0]->c.c_cdr;
	if(endp(V309))invalid_macro_call();
	base[2]= (V309->c.c_car);
	V309=V309->c.c_cdr;
	base[3]= V309;}{object V310;
	V310= (*(LnkLI167))(base[2],base[3],base[1]);
	if(V310==Cnil)goto T609;
	base[4]= V310;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T609;
T609:;}
	base[4]= (*(LnkLI168))(base[2],base[3],base[1]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for WITH-GATHERING	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V311=base[0]->c.c_cdr;
	if(endp(V311))invalid_macro_call();
	base[2]= (V311->c.c_car);
	V311=V311->c.c_cdr;
	if(endp(V311))invalid_macro_call();
	base[3]= (V311->c.c_car);
	V311=V311->c.c_cdr;
	base[4]= V311;}
	{object V313;
	object V314= base[2];
	if(V314==Cnil){
	V312= Cnil;
	goto T611;}
	base[5]=V313=MMcons(Cnil,Cnil);
	goto T612;
T612:;
	(V313->c.c_car)= CMPcar((V314->c.c_car));
	if((V314=MMcdr(V314))==Cnil){
	V312= base[5];
	goto T611;}
	V313=MMcdr(V313)=MMcons(Cnil,Cnil);
	goto T612;}
	goto T611;
T611:;
	V315 = base[4];
	base[5]= listA(4,VV[88],V312,list(3,VV[89],base[2],base[3]),V315);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function SIMPLE-EXPAND-GATHERING-FORM	*/

static object LI27(V319,V320,V321)

register object V319;object V320;object V321;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V322;
	object V323;
	if(!(type_of((V319))==t_symbol)){
	goto T618;}
	V327= list(2,VV[90],make_cons((V319),Cnil));
	V319= make_cons(/* INLINE-ARGS */V327,Cnil);
	V326= (V319);
	goto T616;
	goto T618;
T618:;
	V326= (V319);
	goto T616;
T616:;
	{object V324;
	object V325= V326;
	if(V325==Cnil){
	V322= Cnil;
	goto T614;}
	base[0]=V324=MMcons(Cnil,Cnil);
	goto T615;
T615:;
	(V324->c.c_car)= CMPcar((V325->c.c_car));
	if((V325=MMcdr(V325))==Cnil){
	V322= base[0];
	goto T614;}
	V324=MMcdr(V324)=MMcons(Cnil,Cnil);
	goto T615;}
	goto T614;
T614:;
	{object V328;
	object V329= (V319);
	if(V329==Cnil){
	V323= Cnil;
	goto T622;}
	base[0]=V328=MMcons(Cnil,Cnil);
	goto T623;
T623:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	(V328->c.c_car)= vs_base[0];
	if((V329=MMcdr(V329))==Cnil){
	V323= base[0];
	goto T622;}
	V328=MMcdr(V328)=MMcons(Cnil,Cnil);
	goto T623;}
	goto T622;
T622:;
	{object V332;
	object V333= (V322);
	object V334= (V323);
	if(V333==Cnil||V334==Cnil){
	V331= Cnil;
	goto T625;}
	base[0]=V332=MMcons(Cnil,Cnil);
	goto T626;
T626:;
	(V332->c.c_cdr)= list(2,(V333->c.c_car),(V334->c.c_car));
	while(MMcdr(V332)!=Cnil)V332=MMcdr(V332);
	if((V333=MMcdr(V333))==Cnil||(V334=MMcdr(V334))==Cnil){
	base[0]=base[0]->c.c_cdr;
	V331= base[0];
	goto T625;}
	goto T626;}
	goto T625;
T625:;
	{object V336;
	object V337= (V323);
	if(V337==Cnil){
	V335= Cnil;
	goto T628;}
	base[0]=V336=MMcons(Cnil,Cnil);
	goto T629;
T629:;
	(V336->c.c_car)= list(2,VV[4],(V337->c.c_car));
	if((V337=MMcdr(V337))==Cnil){
	V335= base[0];
	goto T628;}
	V336=MMcdr(V336)=MMcons(Cnil,Cnil);
	goto T629;}
	goto T628;
T628:;
	V339= make_cons(VV[31],V335);
	V340= make_cons(/* INLINE-ARGS */V339,Cnil);
	V341= list(2,VV[5],list(3,VV[6],V331,listA(3,VV[92],VV[93],append((V320),/* INLINE-ARGS */V340))));
	base[1]=VV[169]->s.s_gfdef;
	{object V343;
	object V344= (V319);
	if(V344==Cnil){
	V342= Cnil;
	goto T631;}
	base[0]=V343=MMcons(Cnil,Cnil);
	goto T632;
T632:;
	base[2]= (V344->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk169)();
	vs_top=sup;
	(V343->c.c_car)= vs_base[0];
	if((V344=MMcdr(V344))==Cnil){
	V342= base[0];
	goto T631;}
	V343=MMcdr(V343)=MMcons(Cnil,Cnil);
	goto T632;}
	goto T631;
T631:;
	{object V345 = listA(3,VV[91],/* INLINE-ARGS */V341,V342);
	VMR26(V345)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-GATHERING-FORM	*/

static object LI28(V349,V350,V351)

object V349;object V350;object V351;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V352;
	register object V353;
	object V354;
	register object V355;
	object V356;
	V352= Cnil;
	V353= Cnil;
	V354= Cnil;
	V355= Cnil;
	V356= Cnil;
	{object V357;
	register object V358;
	if(!(type_of((V349))==t_symbol)){
	goto T643;}
	V359= list(2,VV[90],make_cons((V349),Cnil));
	V357= make_cons(/* INLINE-ARGS */V359,Cnil);
	goto T641;
	goto T643;
T643:;
	V357= (V349);
	goto T641;
T641:;
	V358= CMPcar((V357));
	goto T647;
T647:;
	if(!(((V357))==Cnil)){
	goto T648;}
	goto T640;
	goto T648;
T648:;
	{register object V360;
	object V361;
	object V362;
	object V363;
	object V364;
	object V365;
	base[2]= CMPcadr((V358));
	base[3]= VV[89];
	base[4]= (V351);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk127)();
	if(vs_base>=vs_top){vs_top=sup;goto T657;}
	V360= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T658;}
	V361= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T659;}
	V362= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T660;}
	V363= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T661;}
	V364= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T662;}
	V365= vs_base[0];
	vs_top=sup;
	goto T663;
	goto T657;
T657:;
	V360= Cnil;
	goto T658;
T658:;
	V361= Cnil;
	goto T659;
T659:;
	V362= Cnil;
	goto T660;
T660:;
	V363= Cnil;
	goto T661;
T661:;
	V364= Cnil;
	goto T662;
T662:;
	V365= Cnil;
	goto T663;
T663:;
	{object V366;
	object V367;
	object V368;
	register object V369;
	V366= CMPcar((V358));
	V367= Cnil;
	V368= Cnil;
	V369= Cnil;
	if(!(type_of((V360))==t_cons)){
	goto T670;}
	if(!((CMPcar((V360)))==(VV[31]))){
	goto T670;}
	V360= CMPcdr((V360));
	V370 = (V360);
	if(!(type_of(V370)==t_cons)){
	goto T670;}
	V368= (VFUN_NARGS=1,(*(LnkLI128))(CMPcar((V360))));
	if(((V368))==Cnil){
	goto T670;}
	V360= CMPcdr((V360));
	V371 = (V360);
	if(!(type_of(V371)==t_cons)){
	goto T670;}
	V369= (VFUN_NARGS=2,(*(LnkLI128))(CMPcar((V360)),small_fixnum(0)));
	if(((V369))==Cnil){
	goto T670;}
	if((CMPcdr((V360)))!=Cnil){
	goto T670;}
	if(((V361))==Cnil){
	goto T689;}
	if(((V364))==Cnil){
	goto T692;}
	V372= CMPcadr((V358));
	V373= make_cons(VV[19],(V364));
	(void)((VFUN_NARGS=4,(*(LnkLI129))(VV[14],VV[94],/* INLINE-ARGS */V372,/* INLINE-ARGS */V373)));
	goto T669;
	goto T692;
T692:;
	if(((V362))==Cnil){
	goto T689;}
	base[3]= (V362);
	base[4]= (V361);
	base[5]= (V351);
	base[6]= (V353);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk130)();
	if(vs_base<vs_top){
	V362= vs_base[0];
	vs_base++;
	}else{
	V362= Cnil;}
	if(vs_base<vs_top){
	V367= vs_base[0];
	}else{
	V367= Cnil;}
	vs_top=sup;
	V354= nconc((V354),(V362));
	V353= Cnil;
	goto T689;
T689:;
	V353= nconc((V353),(V365));
	{object V374;
	V375 = (V366);
	V376= (*(LnkLI170))((V368),(V367),(V351));
	V374= make_cons(V375,/* INLINE-ARGS */V376);
	V352= make_cons((V374),(V352));}
	base[3]= (V369);
	base[4]= (V367);
	base[5]= (V351);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk147)();
	vs_top=sup;
	V369= vs_base[0];
	{object V377;
	if((CMPcdddr((V369)))!=Cnil){
	goto T720;}
	V377= CMPcaddr((V369));
	goto T718;
	goto T720;
T720:;
	V377= make_cons(VV[18],CMPcdr((V369)));
	goto T718;
T718:;
	V355= make_cons((V377),(V355));}
	if(((V363))==Cnil){
	goto T723;}
	V378 = (V356);
	V379= (check_alist(V367),sublis1(V367,(V363),&eql));
	V356= nconc(V378,V379);
	goto T723;
T723:;
	goto T652;
	goto T670;
T670:;
	(void)((VFUN_NARGS=3,(*(LnkLI129))(VV[14],VV[95],CMPcadr((V358)))));
	goto T669;
T669:;
	{register object V381;
	object V382;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V381= vs_base[0];
	V382= list(2,VV[96],CMPcadr((V358)));
	{object V383;
	V383= list(2,(V366),(V381));
	V352= make_cons((V383),(V352));}
	{object V384;
	V384= list(2,VV[4],list(2,VV[97],(V381)));
	V355= make_cons((V384),(V355));}
	V385 = (V381);
	if(((V353))==Cnil){
	goto T740;}
	{object V388;
	V388= (V353);
	V353= Cnil;
	V387= (V388);}
	V389= make_cons((V382),Cnil);
	V390= append(V387,/* INLINE-ARGS */V389);
	V386= make_cons(VV[20],/* INLINE-ARGS */V390);
	goto T738;
	goto T740;
T740:;
	V386= (V382);
	goto T738;
T738:;
	V391= list(2,V385,V386);
	V392= make_cons(/* INLINE-ARGS */V391,Cnil);
	V354= nconc((V354),/* INLINE-ARGS */V392);}
	goto T652;}}
	goto T652;
T652:;
	V357= CMPcdr((V357));
	V358= CMPcar((V357));
	goto T647;}
	goto T640;
T640:;
	base[0]= (V350);
	base[1]= (V351);
	base[2]= (V352);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk171)();
	vs_top=sup;
	V350= vs_base[0];
	if(!(((V350))==(VV[13]))){
	goto T756;}
	{object V393 = Cnil;
	VMR27(V393)}
	goto T756;
T756:;
	if((V356)==Cnil){
	V394= Cnil;
	goto T758;}
	V395= make_cons(VV[19],(V356));
	V394= make_cons(/* INLINE-ARGS */V395,Cnil);
	goto T758;
T758:;
	V396 = (V350);
	if((CMPcdr((V355)))!=Cnil){
	goto T761;}
	V397= CMPcar((V355));
	goto T759;
	goto T761;
T761:;
	V398= reverse((V355));
	V397= make_cons(VV[31],/* INLINE-ARGS */V398);
	goto T759;
T759:;
	V399= list(2,V396,V397);
	{object V400 = listA(3,VV[1],(V354),append(V394,/* INLINE-ARGS */V399));
	VMR27(V400)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function RENAME-AND-CAPTURE-VARIABLES	*/

static object LI30(V404,V405,V406)

object V404;object V405;object V406;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	base[0]=MMcons((V406),Cnil);
	base[1]=MMcons((V405),base[0]);
	base[2]=MMcons(Cnil,base[1]);
	base[3]= (V404);
	base[4]= (base[0]->c.c_car);
	base[5]= 
	make_cclosure_new(LC40,Cnil,base[2],Cdata);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk139)();
	vs_top=sup;
	V407= vs_base[0];
	V408 = (base[2]->c.c_car);
	{object V409 = list(2,V407,V408);
	VMR28(V409)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for WALK-GATHERING-BODY	*/

static void L31()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM29; VC29
	vs_check;
	bds_check;
	{VOL object V410;
	check_arg(3);
	V410=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	base[2]=MMcons(base[2],base[1]);
	vs_top=sup;
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	{object V412;
	object V413= (base[2]->c.c_car);
	if(V413==Cnil){
	V411= Cnil;
	goto T768;}
	base[5]=V412=MMcons(Cnil,Cnil);
	goto T769;
T769:;
	(V412->c.c_car)= CMPcar((V413->c.c_car));
	if((V413=MMcdr(V413))==Cnil){
	V411= base[5];
	goto T768;}
	V412=MMcdr(V412)=MMcons(Cnil,Cnil);
	goto T769;}
	goto T768;
T768:;
	V414 = (VV[98]->s.s_dbind);
	base[4]= nconc(V411,V414);
	bds_bind(VV[98],base[4]);
	base[5]= make_cons(VV[20],(V410));
	base[6]= (base[1]->c.c_car);
	base[7]= 
	make_cclosure_new(LC41,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk139)();
	frs_pop();
	bds_unwind1;
	return;
	}
	}
}
/*	macro definition for COLLECTING	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V415=base[0]->c.c_cdr;
	{object V416=getf(V415,VV[172],OBJNULL);
	if(V416==OBJNULL){
	base[2]= Cnil;} else {
	base[2]= V416;
	}}
	check_other_key(V415,1,VV[172]);}
	V417= list(2,VV[108],base[2]);
	if(base[2]==Cnil){
	V418= Cnil;
	goto T775;}
	V418= VV[109];
	goto T775;
T775:;
	base[3]= list(3,VV[1],list(2,/* INLINE-ARGS */V417,list(2,VV[54],V418)),VV[110]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for JOINING	*/

static void L33()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V419=base[0]->c.c_cdr;
	{object V420=getf(V419,VV[172],OBJNULL);
	if(V420==OBJNULL){
	base[2]= Cnil;} else {
	base[2]= V420;
	}}
	check_other_key(V419,1,VV[172]);}
	V421= list(2,VV[111],base[2]);
	base[3]= list(3,VV[18],make_cons(/* INLINE-ARGS */V421,Cnil),VV[112]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for MAXIMIZING	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V422=base[0]->c.c_cdr;
	{object V423=getf(V422,VV[172],OBJNULL);
	if(V423==OBJNULL){
	base[2]= Cnil;} else {
	base[2]= V423;
	}}
	check_other_key(V422,1,VV[172]);}
	V424= list(2,VV[111],base[2]);
	V425= make_cons(/* INLINE-ARGS */V424,Cnil);
	base[3]= base[2];
	vs_top=(vs_base=base+3)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T780;}
	base[3]= base[2];
	vs_top=(vs_base=base+3)+1;
	Leval();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T780;}
	V426= VV[114];
	goto T778;
	goto T780;
T780:;
	V426= VV[115];
	goto T778;
T778:;
	base[3]= list(3,VV[18],/* INLINE-ARGS */V425,list(3,VV[31],list(2,VV[5],list(3,VV[6],VV[113],list(3,VV[86],V426,VV[116]))),VV[117]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for MINIMIZING	*/

static void L35()
{register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V427=base[0]->c.c_cdr;
	{object V428=getf(V427,VV[172],OBJNULL);
	if(V428==OBJNULL){
	base[2]= Cnil;} else {
	base[2]= V428;
	}}
	check_other_key(V427,1,VV[172]);}
	V429= list(2,VV[111],base[2]);
	V430= make_cons(/* INLINE-ARGS */V429,Cnil);
	base[3]= base[2];
	vs_top=(vs_base=base+3)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T789;}
	base[3]= base[2];
	vs_top=(vs_base=base+3)+1;
	Leval();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T789;}
	V431= VV[119];
	goto T787;
	goto T789;
T789:;
	V431= VV[120];
	goto T787;
T787:;
	base[3]= list(3,VV[18],/* INLINE-ARGS */V430,list(3,VV[31],list(2,VV[5],list(3,VV[6],VV[118],list(3,VV[86],V431,VV[121]))),VV[122]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for SUMMING	*/

static void L36()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V432=base[0]->c.c_cdr;
	{object V433=getf(V432,VV[172],OBJNULL);
	if(V433==OBJNULL){
	base[2]= small_fixnum(0);} else {
	base[2]= V433;
	}}
	check_other_key(V432,1,VV[172]);}
	V434= list(2,VV[123],base[2]);
	base[3]= list(3,VV[18],make_cons(/* INLINE-ARGS */V434,Cnil),VV[124]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC41(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	{register object V435;
	object V436;
	register object V437;
	check_arg(3);
	V435=(base[0]);
	V436=(base[1]);
	V437=(base[2]);
	vs_top=sup;
	{register object V438;
	register object V439;
	V438= Cnil;
	V439= Cnil;
	if(!(type_of((V435))==t_cons)){
	goto T797;}
	if((CMPcar((V435)))==(VV[99])){
	goto T800;}
	if(!((CMPcar((V435)))==(VV[5]))){
	goto T802;}
	if(!((CMPcadr((V435)))==(VV[99]))){
	goto T802;}
	(void)((VFUN_NARGS=2,(*(LnkLI129))(VV[16],VV[100])));
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[171]);
	base[3]= VV[13];
	vs_top=(vs_base=base+3)+1;
	unwind(fr,Cnil);}
	goto T802;
T802:;
	base[3]= (V435);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T800;
T800:;
	if((CMPcddr((V435)))!=Cnil){
	goto T815;}
	V439= VV[90];
	goto T813;
	goto T815;
T815:;
	V439= CMPcaddr((V435));
	goto T813;
T813:;
	V441 = (V439);
	V442 = (base0[1]->c.c_car);
	{register object x= V441,V440= V442;
	while(V440!=Cnil)
	if(eql(x,V440->c.c_car->c.c_car) &&V440->c.c_car != Cnil){
	V438= (V440->c.c_car);
	goto T812;
	}else V440=V440->c.c_cdr;
	V438= Cnil;}
	goto T812;
T812:;
	if(((V438))==Cnil){
	goto T810;}
	if((CMPcdddr((V435)))==Cnil){
	goto T817;}
	base[3]= VV[101];
	base[4]= (V435);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk126)();
	vs_top=sup;
	goto T817;
T817:;
	{object V443;
	V443= CMPcadr((V438));
	if(!(type_of((V443))==t_symbol)){
	goto T824;}
	base[3]= list(3,VV[4],list(2,VV[102],(V443)),CMPcadr((V435)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T824;
T824:;
	{register object V444;
	register object V445;
	V444= CMPcaddr((V438));
	V445= CMPcar((V444));
	goto T830;
T830:;
	if(!(((V444))==Cnil)){
	goto T831;}
	goto T826;
	goto T831;
T831:;
	if(((*(LnkLI173))((V445),(V437),(base0[2]->c.c_car)))!=Cnil){
	goto T835;}
	if(((*(LnkLI174))((V445),(V437)))==Cnil){
	goto T836;}
	if(((*(LnkLI174))((V445),(base0[2]->c.c_car)))!=Cnil){
	goto T835;}
	goto T836;
T836:;
	(void)((VFUN_NARGS=3,(*(LnkLI129))(VV[16],VV[103],(V445))));
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[171]);
	base[5]= VV[13];
	vs_top=(vs_base=base+5)+1;
	unwind(fr,Cnil);}
	goto T835;
T835:;
	V444= CMPcdr((V444));
	V445= CMPcar((V444));
	goto T830;}
	goto T826;
T826:;
	base[3]= list(2,(V443),CMPcadr((V435)));
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T810;
T810:;
	{register object x= (V439),V446= (VV[98]->s.s_dbind);
	while(V446!=Cnil)
	if(eql(x,V446->c.c_car)){
	V438= V446;
	goto T853;
	}else V446=V446->c.c_cdr;
	V438= Cnil;}
	goto T853;
T853:;
	if(((V438))==Cnil){
	goto T850;}
	if(((V439))==(VV[90])){
	goto T849;}
	if(((*(LnkLI173))((V439),(V437),CMPcadddr((V438))))==Cnil){
	goto T850;}
	goto T849;
T849:;
	base[3]= (V435);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T850;
T850:;
	if(!(((V439))==(VV[90]))){
	goto T859;}
	base[3]= VV[104];
	base[4]= (V435);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk126)();
	vs_top=sup;
	goto T857;
	goto T859;
T859:;
	base[3]= VV[105];
	base[4]= (V439);
	base[5]= (V435);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk126)();
	vs_top=sup;
	goto T857;
T857:;
	base[3]= make_cons(VV[106],CMPcdr((V435)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T797;
T797:;
	if(!(type_of((V435))==t_symbol)){
	goto T867;}
	{register object x= (V435),V447= (base0[1]->c.c_car);
	while(V447!=Cnil)
	if(eql(x,V447->c.c_car->c.c_car) &&V447->c.c_car != Cnil){
	V438= (V447->c.c_car);
	goto T872;
	}else V447=V447->c.c_cdr;
	V438= Cnil;}
	goto T872;
T872:;
	if(((V438))==Cnil){
	goto T867;}
	if(((*(LnkLI173))((V435),(V437),(base0[2]->c.c_car)))==Cnil){
	goto T867;}
	(void)((VFUN_NARGS=3,(*(LnkLI129))(VV[16],VV[107],(V435))));
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[171]);
	base[3]= VV[13];
	vs_top=(vs_base=base+3)+1;
	unwind(fr,Cnil);}
	goto T867;
T867:;
	base[3]= (V435);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC40(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	{register object V448;
	object V449;
	object V450;
	check_arg(3);
	V448=(base[0]);
	V449=(base[1]);
	V450=(base[2]);
	vs_top=sup;
	{object V451;
	V451= Cnil;
	if(!(type_of((V448))==t_symbol)){
	goto T876;}
	if(((*(LnkLI173))((V448),(V450),(base0[2]->c.c_car)))!=Cnil){
	goto T877;}
	goto T876;
T876:;
	base[3]= (V448);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T877;
T877:;
	{register object x= (V448),V452= (base0[1]->c.c_car);
	while(V452!=Cnil)
	if(eql(x,V452->c.c_car->c.c_car) &&V452->c.c_car != Cnil){
	V451= (V452->c.c_car);
	goto T884;
	}else V452=V452->c.c_cdr;
	V451= Cnil;}
	goto T884;
T884:;
	if(((V451))==Cnil){
	goto T882;}
	base[3]= CMPcdr((V451));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T882;
T882:;
	base[3]= V448;
	base[4]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+2;
	Ladjoin();
	vs_top=sup;
	(base0[0]->c.c_car)= vs_base[0];
	base[3]= (V448);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC39(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	{register object V454;
	object V455;
	object V456;
	check_arg(3);
	V454=(base[0]);
	V455=(base[1]);
	V456=(base[2]);
	vs_top=sup;
	{object V457;
	V457= Cnil;
	if(!(type_of((V454))==t_symbol)){
	goto T890;}
	{register object x= (V454),V458= (base0[1]->c.c_car);
	while(V458!=Cnil)
	if(eql(x,V458->c.c_car->c.c_car) &&V458->c.c_car != Cnil){
	V457= (V458->c.c_car);
	goto T895;
	}else V458=V458->c.c_cdr;
	V457= Cnil;}
	goto T895;
T895:;
	if(((V457))==Cnil){
	goto T890;}
	if(((*(LnkLI173))((V454),(V456),(base0[0]->c.c_car)))==Cnil){
	goto T890;}
	base[3]= CMPcdr((V457));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T890;
T890:;
	base[3]= (V454);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC38(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	{register object V459;
	object V460;
	register object V461;
	check_arg(3);
	V459=(base[0]);
	V460=(base[1]);
	V461=(base[2]);
	vs_top=sup;
	if(!(type_of((V459))==t_symbol)){
	goto T898;}
	{object V462;
	V462= Cnil;
	if(!(((V459))==((base0[4]->c.c_car)))){
	goto T901;}
	if(((*(LnkLI173))((V459),(V461),(base0[6]->c.c_car)))==Cnil){
	goto T901;}
	(void)((VFUN_NARGS=3,(*(LnkLI129))(VV[14],VV[27],CMPcadr((base0[1]->c.c_car)))));
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[132]);
	base[3]= VV[13];
	vs_top=(vs_base=base+3)+1;
	unwind(fr,Cnil);}
	goto T901;
T901:;
	{register object x= (V459),V463= (base0[5]->c.c_car);
	while(V463!=Cnil)
	if(eql(x,V463->c.c_car->c.c_car) &&V463->c.c_car != Cnil){
	V462= (V463->c.c_car);
	goto T911;
	}else V463=V463->c.c_cdr;
	V462= Cnil;}
	goto T911;
T911:;
	if(((V462))==Cnil){
	goto T908;}
	if(((*(LnkLI173))((V459),(V461),(base0[6]->c.c_car)))==Cnil){
	goto T908;}
	base[3]= CMPcdr((V462));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T908;
T908:;
	{register object x= (V459),V464= (base0[2]->c.c_car);
	while(V464!=Cnil)
	if(eql(x,V464->c.c_car)){
	goto T916;
	}else V464=V464->c.c_cdr;
	goto T914;}
	goto T916;
T916:;
	if(((*(LnkLI173))((V459),(V461),(base0[6]->c.c_car)))==Cnil){
	goto T914;}
	(void)((VFUN_NARGS=4,(*(LnkLI129))(VV[16],VV[28],CMPcadr((base0[1]->c.c_car)),(V459))));
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[132]);
	base[3]= VV[13];
	vs_top=(vs_base=base+3)+1;
	unwind(fr,Cnil);}
	goto T914;
T914:;
	base[3]= (V459);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T898;
T898:;
	if(!(type_of((V459))==t_cons)){
	goto T921;}
	if(!((CMPcar((V459)))==(VV[4]))){
	goto T921;}
	if(!((CMPcadr((V459)))==((base0[4]->c.c_car)))){
	goto T921;}
	if(((*(LnkLI173))(CMPcadr((V459)),(V461),(base0[6]->c.c_car)))==Cnil){
	goto T921;}
	if((CMPcddr((V459)))==Cnil){
	goto T929;}
	(void)((VFUN_NARGS=4,(*(LnkLI129))(VV[14],VV[29],CMPcadr((base0[1]->c.c_car)),CMPcddr((V459)))));
	goto T929;
T929:;
	base[3]= (base0[3]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T921;
T921:;
	base[3]= (V459);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC37(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	{object V465;
	check_arg(1);
	V465=(base[0]);
	vs_top=sup;
	{register object x= (V465),V466= VV[25];
	while(V466!=Cnil)
	if(eql(x,V466->c.c_car)){
	base[1]= V466;
	vs_top=(vs_base=base+1)+1;
	return;
	}else V466=V466->c.c_cdr;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function GET-ITERATE-TEMP	*/

static void LC4(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	check_arg(0);
	vs_top=sup;{object V467;
	{object V468;
	V468= CMPcar((base0[0]->c.c_car));
	(base0[0]->c.c_car)= CMPcdr((base0[0]->c.c_car));
	V467= (V468);}
	if(V467==Cnil)goto T932;
	base[0]= V467;
	vs_top=(vs_base=base+0)+1;
	return;
	goto T932;
T932:;}
	vs_base=vs_top;
	Lgensym();
	return;
}
/*	local function GET-ITERATE-TEMP	*/

static void L4(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;{object V469;
	{object V470;
	V470= CMPcar((base0[0]->c.c_car));
	(base0[0]->c.c_car)= CMPcdr((base0[0]->c.c_car));
	V469= (V470);}
	if(V469==Cnil)goto T937;
	base[0]= V469;
	vs_top=(vs_base=base+0)+1;
	return;
	goto T937;
T937:;}
	vs_base=vs_top;
	Lgensym();
	return;
}
static object  LnkTLI174(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[174],(void **)(void *)&LnkLI174,2,first,ap);va_end(ap);return V1;} /* VARIABLE-SPECIAL-P */
static object  LnkTLI173(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[173],(void **)(void *)&LnkLI173,3,first,ap);va_end(ap);return V1;} /* VARIABLE-SAME-P */
static void LnkT171(){ call_or_link(VV[171],(void **)(void *)&Lnk171);} /* WALK-GATHERING-BODY */
static object  LnkTLI170(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[170],(void **)(void *)&LnkLI170,3,first,ap);va_end(ap);return V1;} /* RENAME-AND-CAPTURE-VARIABLES */
static void LnkT169(){ call_or_link(VV[169],(void **)(void *)&Lnk169);} /* SECOND */
static object  LnkTLI168(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[168],(void **)(void *)&LnkLI168,3,first,ap);va_end(ap);return V1;} /* SIMPLE-EXPAND-GATHERING-FORM */
static object  LnkTLI167(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[167],(void **)(void *)&LnkLI167,3,first,ap);va_end(ap);return V1;} /* OPTIMIZE-GATHERING-FORM */
static object  LnkTLI158(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[158],(void **)(void *)&LnkLI158,1,first,ap);va_end(ap);return V1;} /* SEQUENCE-ACCESSOR */
static void LnkT157(){ call_or_link(VV[157],(void **)(void *)&Lnk157);} /* REMOVE */
static object  LnkTLI148(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[148],(void **)(void *)&LnkLI148,2,first,ap);va_end(ap);return V1;} /* VARIABLE-LEXICAL-P */
static void LnkT147(){ call_or_link(VV[147],(void **)(void *)&Lnk147);} /* RENAME-VARIABLES */
static void LnkT146(){ call_or_link(VV[146],(void **)(void *)&Lnk146);} /* UNION */
static void LnkT145(){ call_or_link(VV[145],(void **)(void *)&Lnk145);} /* REMOVE-IF-NOT */
static void LnkT144(){ call_or_link(VV[144],(void **)(void *)&Lnk144);} /* SET-DIFFERENCE */
static void LnkT143(){ call_or_link(VV[143],(void **)(void *)&Lnk143);} /* INTERSECTION */
static void LnkT139(){ call_or_link(VV[139],(void **)(void *)&Lnk139);} /* WALK-FORM */
static object  LnkTLI137(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[137],(void **)(void *)&LnkLI137,2,first,ap);va_end(ap);return V1;} /* EXTRACT-SPECIAL-BINDINGS */
static object  LnkTLI136(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[136],(void **)(void *)&LnkLI136,1,first,ap);va_end(ap);return V1;} /* VARIABLES-FROM-LET */
static void LnkT135(){ call_or_link(VV[135],(void **)(void *)&Lnk135);} /* FIND-IF */
static object  LnkTLI133(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[133],(void **)(void *)&LnkLI133,2,first,ap);va_end(ap);return V1;} /* MV-SETQ */
static void LnkT132(){ call_or_link(VV[132],(void **)(void *)&Lnk132);} /* ITERATE-TRANSFORM-BODY */
static void LnkT131(){ call_or_link(VV[131],(void **)(void *)&Lnk131);} /* PARSE-DECLARATIONS */
static void LnkT130(){ call_or_link(VV[130],(void **)(void *)&Lnk130);} /* RENAME-LET-BINDINGS */
static object  LnkTLI129(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[129],(void **)(void *)&LnkLI129,first,ap);va_end(ap);return V1;} /* MAYBE-WARN */
static object  LnkTLI128(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[128],(void **)(void *)&LnkLI128,first,ap);va_end(ap);return V1;} /* FUNCTION-LAMBDA-P */
static void LnkT127(){ call_or_link(VV[127],(void **)(void *)&Lnk127);} /* EXPAND-INTO-LET */
static void LnkT126(){ call_or_link(VV[126],(void **)(void *)&Lnk126);} /* WARN */
static object  LnkTLI125(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[125],(void **)(void *)&LnkLI125,3,first,ap);va_end(ap);return V1;} /* OPTIMIZE-ITERATE-FORM */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

