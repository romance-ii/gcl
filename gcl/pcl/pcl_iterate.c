
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
	V32= append(V26,(V5));
	{object V33 = list(3,VV[0],(V6),list(3,VV[1],V16,make_cons(VV[2],/* INLINE-ARGS */V32)));
	VMR2(V33)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-ITERATE-FORM	*/

static object LI3(V37,V38,V39)

object V37;object V38;object V39;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V40;
	object V41;
	register object V42;
	object V43;
	object V44;
	object V45;
	object V46;
	object V47;
	base[0]=MMcons((VV[8]->s.s_dbind),Cnil);
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V40= vs_base[0];
	V41= list(2,VV[7],(V40));
	{object V48;
	object V49= (V37);
	if(V49==Cnil){
	V42= Cnil;
	goto T22;}
	base[4]=V48=MMcons(Cnil,Cnil);
	goto T23;
T23:;
	{object V51;
	V51= CMPcar((V49->c.c_car));
	if(!(type_of((V51))==t_cons||((V51))==Cnil)){
	goto T27;}
	base[5]= (V51);
	vs_top=(vs_base=base+5)+1;
	Lcopy_list();
	vs_top=sup;
	(V48->c.c_cdr)= vs_base[0];
	goto T24;
	goto T27;
T27:;
	(V48->c.c_cdr)= make_cons((V51),Cnil);}
	goto T24;
T24:;
	while(MMcdr(V48)!=Cnil)V48=MMcdr(V48);
	if((V49=MMcdr(V49))==Cnil){
	base[4]=base[4]->c.c_cdr;
	V42= base[4];
	goto T22;}
	goto T23;}
	goto T22;
T22:;
	V43= Cnil;
	V44= Cnil;
	V45= Cnil;
	V46= Cnil;
	V47= Cnil;
	{object V52;
	V52= (V42);
	goto T37;
T37:;
	if(((V52))!=Cnil){
	goto T38;}
	goto T35;
	goto T38;
T38:;
	{register object x= CMPcar((V52)),V53= CMPcdr((V52));
	while(V53!=Cnil)
	if(eql(x,V53->c.c_car)){
	goto T44;
	}else V53=V53->c.c_cdr;
	goto T42;}
	goto T44;
T44:;
	base[4]= VV[9];
	base[5]= CMPcar((V52));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk126)();
	vs_top=sup;
	goto T42;
T42:;
	V52= CMPcdr((V52));
	goto T37;}
	goto T35;
T35:;
	base[4]=make_cclosure_new(LC4,Cnil,base[0],Cdata);
	base[4]=MMcons(base[4],base[0]);
	{object V54;
	register object V55;
	V54= (V37);
	V55= CMPcar((V54));
	goto T54;
T54:;
	if(!(((V54))==Cnil)){
	goto T55;}
	goto T50;
	goto T55;
T55:;
	if(!(type_of((V55))==t_cons)){
	goto T60;}
	if(type_of(CMPcdr((V55)))==t_cons){
	goto T61;}
	goto T60;
T60:;
	base[6]= VV[10];
	base[7]= (V55);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk126)();
	vs_top=sup;
	goto T59;
	goto T61;
T61:;
	if((CMPcddr((V55)))==Cnil){
	goto T67;}
	base[6]= VV[11];
	base[7]= (V55);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk126)();
	vs_top=sup;
	goto T67;
T67:;
	{register object V56;
	object V57;
	object V58;
	object V59;
	object V60;
	object V61;
	base[6]= CMPcadr((V55));
	base[7]= VV[12];
	base[8]= (V39);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk127)();
	if(vs_base>=vs_top){vs_top=sup;goto T76;}
	V56= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T77;}
	V57= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T78;}
	V58= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T79;}
	V59= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T80;}
	V60= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T81;}
	V61= vs_base[0];
	vs_top=sup;
	goto T82;
	goto T76;
T76:;
	V56= Cnil;
	goto T77;
T77:;
	V57= Cnil;
	goto T78;
T78:;
	V58= Cnil;
	goto T79;
T79:;
	V59= Cnil;
	goto T80;
T80:;
	V60= Cnil;
	goto T81;
T81:;
	V61= Cnil;
	goto T82;
T82:;
	{register object V62;
	object V63;
	object V64;
	V62= CMPcar((V55));
	V63= Cnil;
	V64= Cnil;
	if(!(type_of((V62))==t_cons||((V62))==Cnil)){
	goto T89;}
	base[7]= (V62);
	vs_top=(vs_base=base+7)+1;
	Lcopy_list();
	vs_top=sup;
	V62= vs_base[0];
	goto T87;
	goto T89;
T89:;
	V62= make_cons((V62),Cnil);
	goto T87;
T87:;
	{object V65;
	V65= (((V56))==(VV[13])?Ct:Cnil);
	if(((V65))==Cnil){
	goto T95;}
	goto T92;
	goto T95;
T95:;
	V56= (VFUN_NARGS=2,(*(LnkLI128))((V56),small_fixnum(1)));
	if(((V56))!=Cnil){
	goto T98;}
	{object V66;
	V66= CMPcadr((V55));
	if(!(type_of((V66))==t_cons)){
	goto T104;}
	base[7]= CMPcar((V66));
	vs_top=(vs_base=base+7)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T104;}
	(void)((VFUN_NARGS=3,(*(LnkLI129))(VV[14],VV[15],(V66))));
	goto T102;
	goto T104;
T104:;
	(void)((VFUN_NARGS=3,(*(LnkLI129))(VV[16],VV[17],(V66))));
	goto T102;
T102:;
	V56= VV[13];
	goto T92;}
	goto T98;
T98:;
	V56= CMPcdr((V56));
	{object V67;
	V67= CMPcar((V56));
	V56= CMPcdr((V56));
	V63= (V67);}
	if(((V58))==Cnil){
	goto T117;}
	base[7]= (V58);
	base[8]= (V57);
	base[9]= (V39);
	base[10]= (V47);
	base[11]= (base[4]->c.c_car);
	vs_top=(vs_base=base+7)+5;
	(void) (*Lnk130)();
	if(vs_base<vs_top){
	V58= vs_base[0];
	vs_base++;
	}else{
	V58= Cnil;}
	if(vs_base<vs_top){
	V64= vs_base[0];
	}else{
	V64= Cnil;}
	vs_top=sup;
	V47= Cnil;
	goto T117;
T117:;
	{register object V68;
	object V69;
	object V70;
	base[7]= (V56);
	base[8]= (V63);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk131)();
	if(vs_base>=vs_top){vs_top=sup;goto T132;}
	V68= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T133;}
	V69= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T134;}
	V70= vs_base[0];
	vs_top=sup;
	goto T135;
	goto T132;
T132:;
	V68= Cnil;
	goto T133;
T133:;
	V69= Cnil;
	goto T134;
T134:;
	V70= Cnil;
	goto T135;
T135:;
	if(((V69))==Cnil){
	goto T136;}
	V60= nconc((V60),(V69));
	goto T136;
T136:;
	if(((V60))==Cnil){
	goto T142;}
	V56= listA(4,VV[18],Cnil,make_cons(VV[19],(V60)),(V70));
	goto T140;
	goto T142;
T142:;
	if((CMPcdr((V70)))!=Cnil){
	goto T145;}
	V56= CMPcar((V70));
	goto T140;
	goto T145;
T145:;
	V56= make_cons(VV[20],(V70));
	goto T140;
T140:;}
	base[7]= (V56);
	base[8]= (V39);
	base[9]= (V64);
	base[10]= CMPcar((V63));
	base[11]= (V41);
	base[12]= (V42);
	base[13]= (V55);
	vs_top=(vs_base=base+7)+7;
	(void) (*Lnk132)();
	vs_top=sup;
	V56= vs_base[0];
	if(((V56))==(VV[13])){
	goto T92;}
	if(((V59))==Cnil){
	goto T92;}
	{object V72;
	object V73= (V59);
	if(V73==Cnil){
	V71= Cnil;
	goto T160;}
	base[7]=V72=MMcons(Cnil,Cnil);
	goto T161;
T161:;
	{object V75;
	V75= CMPcar((V73->c.c_car));
	if(!(((V75))==(VV[21]))){
	goto T166;}
	V77= CMPcadr((V73->c.c_car));
	V78= (check_alist(V64),sublis1(V64,CMPcddr((V73->c.c_car)),&eql));
	V76= make_cons(/* INLINE-ARGS */V77,V78);
	goto T164;
	goto T166;
T166:;
	V76= (check_alist(V64),sublis1(V64,CMPcdr((V73->c.c_car)),&eql));
	goto T164;
T164:;
	(V72->c.c_car)= make_cons((V75),V76);}
	if((V73=MMcdr(V73))==Cnil){
	V71= base[7];
	goto T160;}
	V72=MMcdr(V72)=MMcons(Cnil,Cnil);
	goto T161;}
	goto T160;
T160:;
	V44= nconc((V44),V71);}
	goto T92;
T92:;
	if(!(((V56))==(VV[13]))){
	goto T169;}
	{object V81;
	object V82;
	vs_base=vs_top;
	L4(base);
	vs_top=sup;
	V81= vs_base[0];
	V82= CMPcadr((V55));
	if(((V47))==Cnil){
	goto T178;}
	{object V85;
	V85= (V47);
	V47= Cnil;
	V84= (V85);}
	V86= append(V84,VV[23]);
	V83= make_cons(VV[20],/* INLINE-ARGS */V86);
	goto T176;
	goto T178;
T178:;
	V83= (V82);
	goto T176;
T176:;
	V87= list(2,(V81),V83);
	V58= make_cons(/* INLINE-ARGS */V87,Cnil);
	V56= list(3,VV[4],(V81),list(2,VV[5],list(3,VV[6],Cnil,(V41))));}
	goto T169;
T169:;
	{object V88;
	base[8]= (V62);
	vs_top=(vs_base=base+8)+1;
	Lcopy_list();
	vs_top=sup;
	V89= vs_base[0];
	V88= (*(LnkLI133))(V89,(V56));
	V45= make_cons((V88),(V45));}
	{register object V90;
	register object V91;
	V90= (V62);
	V91= CMPcar((V90));
	goto T193;
T193:;
	if(!(((V90))==Cnil)){
	goto T194;}
	goto T189;
	goto T194;
T194:;
	{object V92;
	V92= CMPcar((V42));
	V42= CMPcdr((V42));}
	V90= CMPcdr((V90));
	V91= CMPcar((V90));
	goto T193;}
	goto T189;
T189:;
	base[7]= (V46);
	base[8]= (V58);
	if(((V61))==Cnil){
	goto T213;}
	V93= CMPcar((V62));
	V94= append((V61),VV[24]);
	V95= list(2,/* INLINE-ARGS */V93,make_cons(VV[20],/* INLINE-ARGS */V94));
	base[9]= make_cons(/* INLINE-ARGS */V95,CMPcdr((V62)));
	goto T211;
	goto T213;
T213:;
	base[9]= (V62);
	goto T211;
T211:;
	vs_top=(vs_base=base+7)+3;
	Lnconc();
	vs_top=sup;
	V46= vs_base[0];}}
	goto T59;
T59:;
	V54= CMPcdr((V54));
	V55= CMPcar((V54));
	goto T54;}
	goto T50;
T50:;
	{register object V96;
	V96= (V38);
	goto T222;
T222:;
	if(!(type_of((V96))==t_cons)){
	goto T224;}
	if(!(type_of(CMPcar((V96)))==t_cons)){
	goto T224;}
	if((CMPcaar((V96)))==(VV[19])){
	goto T223;}
	goto T224;
T224:;
	if(((V96))==((V38))){
	goto T220;}
	base[4]= (V38);
	base[5]= (V96);
	vs_top=(vs_base=base+4)+2;
	Lldiff();
	vs_top=sup;
	V43= vs_base[0];
	V38= (V96);
	goto T220;
	goto T223;
T223:;
	V96= CMPcdr((V96));
	goto T222;}
	goto T220;
T220:;
	if((V44)==Cnil){
	base[4]= Cnil;
	goto T242;}
	V98= make_cons(VV[19],(V44));
	base[4]= make_cons(/* INLINE-ARGS */V98,Cnil);
	goto T242;
T242:;
	base[5]= (V43);
	base[6]= (V47);
	V99= nreverse((V45));
	V100= append(/* INLINE-ARGS */V99,(V38));
	V101= make_cons(VV[2],/* INLINE-ARGS */V100);
	base[7]= make_cons(/* INLINE-ARGS */V101,Cnil);
	vs_top=(vs_base=base+4)+4;
	Lappend();
	vs_top=sup;
	V97= vs_base[0];
	{object V102 = list(3,VV[0],(V40),listA(3,VV[1],(V46),V97));
	VMR3(V102)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for EXPAND-INTO-LET	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{object V103;
	object V104;
	object V105;
	check_arg(3);
	V103=(base[0]);
	V104=(base[1]);
	V105=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V106;
	register object V107;
	register object V108;
	register object V109;
	register object V110;
	V106= (V103);
	V107= Cnil;
	V108= Cnil;
	V109= Cnil;
	V110= Cnil;
	goto T247;
T247:;
	base[3]= (V106);
	base[4]= (V105);
	vs_top=(vs_base=base+3)+2;
	Lmacroexpand_1();
	if(vs_base<vs_top){
	V106= vs_base[0];
	vs_base++;
	}else{
	V106= Cnil;}
	if(vs_base<vs_top){
	V107= vs_base[0];
	}else{
	V107= Cnil;}
	vs_top=sup;
	{register object V111;
	V111= (((type_of((V106))==t_cons?Ct:Cnil))==Cnil?Ct:Cnil);
	if(((V111))==Cnil){
	goto T256;}
	goto T253;
	goto T256;
T256:;
	V108= CMPcar((V106));
	if(!(type_of((V108))==t_symbol)){
	goto T259;}
	{object V112= (V108);
	if((V112!= VV[18])
	&& (V112!= VV[1]))goto T262;
	V109= CMPcadr((V106));
	V110= CMPcddr((V106));
	goto T248;
	goto T262;
T262:;
	goto T253;}
	goto T259;
T259:;
	if(!(type_of((V108))==t_cons)){
	goto T253;}
	if(!((CMPcar((V108)))==(VV[6]))){
	goto T253;}
	base[3]= VV[134];
	V109= CMPcadr((V108));
	base[4]= (V109);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk135)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T253;}
	if(!(((long)length(CMPcadr((V106))))==((long)length((V109))))){
	goto T253;}
	if((CMPcddr((V106)))!=Cnil){
	goto T253;}
	V110= CMPcddr((V108));
	{object V113;
	object V114= (V109);
	object V115= CMPcadr((V106));
	if(V114==Cnil||V115==Cnil){
	V109= Cnil;
	goto T283;}
	base[3]=V113=MMcons(Cnil,Cnil);
	goto T284;
T284:;
	(V113->c.c_car)= list(2,(V114->c.c_car),(V115->c.c_car));
	if((V114=MMcdr(V114))==Cnil||(V115=MMcdr(V115))==Cnil){
	V109= base[3];
	goto T283;}
	V113=MMcdr(V113)=MMcons(Cnil,Cnil);
	goto T284;}
	goto T283;
T283:;
	V108= VV[18];
	goto T248;}
	goto T253;
T253:;
	if(((V107))==Cnil){
	goto T289;}
	goto T247;
	goto T289;
T289:;
	base[3]= (V106);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T248;
T248:;
	{object V116;
	object V117;
	object V118;
	V116= (*(LnkLI136))((V109));
	V117= Cnil;
	V118= Cnil;
	{object V119;
	object V120;
	object V121;
	base[3]= (V110);
	base[4]= (V116);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk131)();
	if(vs_base>=vs_top){vs_top=sup;goto T296;}
	V119= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T297;}
	V120= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T298;}
	V121= vs_base[0];
	vs_top=sup;
	goto T299;
	goto T296;
T296:;
	V119= Cnil;
	goto T297;
T297:;
	V120= Cnil;
	goto T298;
T298:;
	V121= Cnil;
	goto T299;
T299:;
	V118= (*(LnkLI137))((V116),(V119));
	if(((V118))==Cnil){
	goto T301;}
	base[3]= (VV[138]->s.s_gfdef);
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk135)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T307;}
	V122= VV[16];
	goto T305;
	goto T307;
T307:;
	V122= VV[14];
	goto T305;
T305:;
	(void)((VFUN_NARGS=5,(*(LnkLI129))(V122,VV[26],(V104),(V103),(V118))));
	base[3]= VV[13];
	vs_top=(vs_base=base+3)+1;
	return;
	goto T301;
T301:;
	if(type_of((V121))==t_cons){
	goto T313;}
	base[3]= Cnil;
	goto T311;
	goto T313;
T313:;
	if((CMPcdr((V121)))!=Cnil){
	goto T316;}
	base[3]= CMPcar((V121));
	goto T311;
	goto T316;
T316:;
	base[4]= (V121);
	vs_top=(vs_base=base+4)+1;
	Lbutlast();
	vs_top=sup;
	V117= vs_base[0];
	base[4]= (V121);
	vs_top=(vs_base=base+4)+1;
	Llast();
	vs_top=sup;
	V123= vs_base[0];
	base[3]= CMPcar(V123);
	goto T311;
T311:;
	base[4]= (V108);
	base[5]= (V109);
	base[6]= (V119);
	base[7]= (V120);
	base[8]= (V117);
	vs_top=(vs_base=base+3)+6;
	return;}}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local entry for function VARIABLES-FROM-LET	*/

static object LI6(V125)

object V125;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{object V126;
	object V127= (V125);
	if(V127==Cnil){
	{object V128 = Cnil;
	VMR5(V128)}}
	base[0]=V126=MMcons(Cnil,Cnil);
	goto T328;
T328:;
	if(!(type_of((V127->c.c_car))==t_cons)){
	goto T331;}
	(V126->c.c_car)= CMPcar((V127->c.c_car));
	goto T329;
	goto T331;
T331:;
	(V126->c.c_car)= (V127->c.c_car);
	goto T329;
T329:;
	if((V127=MMcdr(V127))==Cnil){
	{object V130 = base[0];
	VMR5(V130)}}
	V126=MMcdr(V126)=MMcons(Cnil,Cnil);
	goto T328;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for ITERATE-TRANSFORM-BODY	*/

static void L7()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM6; VC6
	vs_check;
	{VOL object V131;
	check_arg(7);
	V131=(base[0]);
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
	base[8]= (V131);
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
	{register object V132;
	object V133;
	check_arg(2);
	V132=(base[0]);
	V133=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V134;
	register object V135;
	register object V136;
	V134= Cnil;
	V135= Cnil;
	V136= Cnil;
	goto T337;
T337:;
	if(((V132))==Cnil){
	goto T340;}
	V136= CMPcar((V132));
	if(!(type_of((V136))==t_cons)){
	goto T340;}
	if((CMPcar((V136)))==(VV[19])){
	goto T339;}
	goto T340;
T340:;
	base[2]= (V134);
	base[3]= (V135);
	base[4]= (V132);
	vs_top=(vs_base=base+2)+3;
	return;
	goto T339;
T339:;
	{
	object V137= CMPcdr((V136));
	if(V137==Cnil){
	goto T350;}
	goto T351;
T351:;
	{register object V138;
	V138= (V137->c.c_car);
	{object V139= CMPcar((V138));
	if((V139!= VV[140])
	&& (V139!= VV[141])
	&& (V139!= VV[142]))goto T353;
	V135= make_cons(V138,(V135));
	goto T352;
	goto T353;
T353:;
	{object V141;
	register object V142;
	object V143;
	if(!((CMPcar((V138)))==(VV[21]))){
	goto T357;}
	V141= CMPcddr((V138));
	goto T355;
	goto T357;
T357:;
	V141= CMPcdr((V138));
	goto T355;
T355:;
	base[4]= (V133);
	base[5]= (V141);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk143)();
	vs_top=sup;
	V142= vs_base[0];
	V143= Cnil;
	if(((V142))!=Cnil){
	goto T364;}
	V135= make_cons(V138,(V135));
	goto T352;
	goto T364;
T364:;
	base[4]= (V141);
	base[5]= (V142);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk144)();
	vs_top=sup;
	V143= vs_base[0];
	if(((V143))!=Cnil){
	goto T368;}
	V134= make_cons(V138,(V134));
	goto T352;
	goto T368;
T368:;
	{object V146;
	if((CMPcar((V138)))==(VV[21])){
	goto T376;}
	V147= Cnil;
	goto T375;
	goto T376;
T376:;
	V147= make_cons(CMPcadr((V138)),Cnil);
	goto T375;
T375:;
	V146= make_cons(VV[21],V147);
	{object V148;
	V148= append((V146),(V143));
	V135= make_cons((V148),(V135));}
	{object V149;
	V149= append((V146),(V142));
	V134= make_cons((V149),(V134));}}}}}
	goto T352;
T352:;
	if((V137=MMcdr(V137))==Cnil){
	(void)(CMPcdr((V136)));
	goto T350;}
	goto T351;}
	goto T350;
T350:;
	{object V150;
	V150= CMPcar((V132));
	V132= CMPcdr((V132));}
	goto T337;}
	}
}
/*	local entry for function EXTRACT-SPECIAL-BINDINGS	*/

static object LI9(V153,V154)

register object V153;object V154;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{register object V155;
	base[0]= (VV[138]->s.s_gfdef);
	base[1]= (V153);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk145)();
	vs_top=sup;
	V155= vs_base[0];
	{register object V156;
	register object V157;
	V156= (V154);
	V157= CMPcar((V156));
	goto T394;
T394:;
	if(!(((V156))==Cnil)){
	goto T395;}
	goto T390;
	goto T395;
T395:;
	if(!((CMPcar((V157)))==(VV[30]))){
	goto T399;}
	base[1]= (V155);
	base[3]= (V153);
	base[4]= CMPcdr((V157));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk143)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk146)();
	vs_top=sup;
	V155= vs_base[0];
	goto T399;
T399:;
	V156= CMPcdr((V156));
	V157= CMPcar((V156));
	goto T394;}
	goto T390;
T390:;
	{object V158 = (V155);
	VMR8(V158)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FUNCTION-LAMBDA-P	*/

static object LI10(object V159,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{register object V160;
	object V161;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V160= V159;
	narg = narg - 1;
	if (narg <= 0) goto T412;
	else {
	V161= first;}
	--narg; goto T413;
	goto T412;
T412:;
	V161= Cnil;
	goto T413;
T413:;
	{object V162;
	object V163;
	V162= Cnil;
	V163= Cnil;
	if(type_of((V160))==t_cons){
	goto T415;}
	{object V164 = Cnil;
	VMR9(V164)}
	goto T415;
T415:;
	if((CMPcar((V160)))==(VV[5])){
	goto T417;}
	{object V165 = Cnil;
	VMR9(V165)}
	goto T417;
T417:;
	V160= CMPcdr((V160));
	if(type_of((V160))==t_cons){
	goto T419;}
	{object V166 = Cnil;
	VMR9(V166)}
	goto T419;
T419:;
	if((CMPcdr((V160)))==Cnil){
	goto T422;}
	{object V167 = Cnil;
	VMR9(V167)}
	goto T422;
T422:;
	V160= CMPcar((V160));
	if(type_of((V160))==t_cons){
	goto T424;}
	{object V168 = Cnil;
	VMR9(V168)}
	goto T424;
T424:;
	if((CMPcar((V160)))==(VV[6])){
	goto T427;}
	{object V169 = Cnil;
	VMR9(V169)}
	goto T427;
T427:;
	V163= CMPcdr((V160));
	if(type_of((V163))==t_cons){
	goto T429;}
	{object V170 = Cnil;
	VMR9(V170)}
	goto T429;
T429:;
	V162= CMPcar((V163));
	if(type_of((V162))==t_cons||((V162))==Cnil){
	goto T432;}
	{object V171 = Cnil;
	VMR9(V171)}
	goto T432;
T432:;
	if(!(((V161))==Cnil)){
	goto T437;}
	goto T435;
	goto T437;
T437:;
	V172 = CMPmake_fixnum((long)length((V162)));
	if(eql(V172,(V161))){
	goto T435;}
	{object V173 = Cnil;
	VMR9(V173)}
	goto T435;
T435:;
	{object V174 = (V160);
	VMR9(V174)}}
	va_end(ap);
	return Cnil;}
	}
/*	function definition for RENAME-LET-BINDINGS	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V175;
	object V176;
	object V177;
	object V178;
	object V179;
	if(vs_top-vs_base<4) too_few_arguments();
	if(vs_top-vs_base>5) too_many_arguments();
	V175=(base[0]);
	V176=(base[1]);
	V177=(base[2]);
	V178=(base[3]);
	vs_base=vs_base+4;
	if(vs_base>=vs_top){vs_top=sup;goto T439;}
	V179=(base[4]);
	vs_top=sup;
	goto T440;
	goto T439;
T439:;
	V179= Cnil;
	goto T440;
T440:;
	{register object V180;
	V180= Cnil;
	{object V181;
	object V182= (V175);
	if(V182==Cnil){
	base[5]= Cnil;
	goto T442;}
	base[6]=V181=MMcons(Cnil,Cnil);
	goto T443;
T443:;
	{register object V183;
	V183= (V182->c.c_car);
	{object V184;
	object V185;
	if(type_of((V183))==t_cons){
	goto T447;}
	V184= Cnil;
	goto T445;
	goto T447;
T447:;
	if(((V176))==(VV[18])){
	goto T449;}
	if(((V180))!=Cnil){
	goto T450;}
	goto T449;
T449:;
	V184= CMPcadr((V183));
	goto T445;
	goto T450;
T450:;
	base[7]= CMPcadr((V183));
	base[8]= (V180);
	base[9]= (V177);
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk147)();
	vs_top=sup;
	V184= vs_base[0];
	goto T445;
T445:;
	if(((V179))==Cnil){
	goto T459;}
	V185= (
	(type_of((V179)) == t_sfun ?(*(((V179))->sfn.sfn_self)):
	(fcall.argd=0,type_of((V179))==t_vfun) ?
	(*(((V179))->sfn.sfn_self)):
	(fcall.fun=((V179)),fcalln))());
	goto T457;
	goto T459;
T459:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V185= vs_base[0];
	goto T457;
T457:;
	{object V186;
	if(!(type_of((V183))==t_cons)){
	goto T465;}
	V187= CMPcar((V183));
	goto T463;
	goto T465;
T465:;
	V187= (V183);
	goto T463;
T463:;
	V186= make_cons(V187,(V185));
	V180= make_cons((V186),(V180));}
	if(((V178))==Cnil){
	goto T468;}
	V188= make_cons((V184),Cnil);
	V189= append((V178),/* INLINE-ARGS */V188);
	V184= make_cons(VV[20],/* INLINE-ARGS */V189);
	V178= Cnil;
	goto T468;
T468:;
	(V181->c.c_car)= list(2,(V185),(V184));}}
	if((V182=MMcdr(V182))==Cnil){
	base[5]= base[6];
	goto T442;}
	V181=MMcdr(V181)=MMcons(Cnil,Cnil);
	goto T443;}
	goto T442;
T442:;
	base[6]= (V180);
	vs_top=(vs_base=base+5)+2;
	return;}
	}
}
/*	function definition for RENAME-VARIABLES	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{object V190;
	check_arg(3);
	V190=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	base[2]=MMcons(base[2],base[1]);
	vs_top=sup;
	base[3]= (V190);
	base[4]= (base[2]->c.c_car);
	base[5]= 
	make_cclosure_new(LC39,Cnil,base[2],Cdata);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk139)();
	return;
	}
}
/*	local entry for function MV-SETQ	*/

static object LI13(V193,V194)

register object V193;register object V194;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	if(((V193))!=Cnil){
	goto T479;}
	{object V195 = (V194);
	VMR12(V195)}
	goto T479;
T479:;
	if(type_of((V193))==t_cons){
	goto T482;}
	{object V196 = list(3,VV[3],(V193),(V194));
	VMR12(V196)}
	goto T482;
T482:;
	if(!(type_of((V194))==t_cons||((V194))==Cnil)){
	goto T485;}
	if(!((CMPcar((V194)))==(VV[31]))){
	goto T485;}
	{object V197;
	V197= CMPcar((V194));
	V194= CMPcdr((V194));}
	{object V199;
	object V200= (V193);
	if(V200==Cnil){
	V198= Cnil;
	goto T493;}
	base[0]=V199=MMcons(Cnil,Cnil);
	goto T494;
T494:;
	V202= CMPcar(V200);
	if((CMPcdr(V200))!=Cnil){
	goto T497;}
	if((CMPcdr((V194)))!=Cnil){
	goto T498;}
	goto T497;
T497:;
	{object V204;
	V204= CMPcar((V194));
	V194= CMPcdr((V194));
	V203= (V204);
	goto T496;}
	goto T498;
T498:;
	V203= make_cons(VV[33],(V194));
	goto T496;
T496:;
	(V199->c.c_cdr)= list(2,/* INLINE-ARGS */V202,V203);
	while(MMcdr(V199)!=Cnil)V199=MMcdr(V199);
	if((V200=MMcdr(V200))==Cnil){
	base[0]=base[0]->c.c_cdr;
	V198= base[0];
	goto T493;}
	goto T494;}
	goto T493;
T493:;
	{object V205 = make_cons(VV[32],V198);
	VMR12(V205)}
	goto T485;
T485:;
	if((CMPcdr((V193)))!=Cnil){
	goto T506;}
	{object V206 = list(3,VV[32],CMPcar((V193)),(V194));
	VMR12(V206)}
	goto T506;
T506:;
	{object V207 = list(3,VV[3],(V193),(V194));
	VMR12(V207)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VARIABLE-SAME-P	*/

static object LI14(V211,V212,V213)

object V211;object V212;object V213;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	V214= (*(LnkLI148))((V211),(V212));
	V215= (*(LnkLI148))((V211),(V213));
	{object V216 = ((/* INLINE-ARGS */V214)==(/* INLINE-ARGS */V215)?Ct:Cnil);
	VMR13(V216)}
	return Cnil;
}
/*	local entry for function MAYBE-WARN	*/

static object LI15(object V217,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB14 VMS14 VMV14
	{object V218;
	object V219;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V218= V217;
	narg= narg - 1;
	V220 = list_vector_new(narg,first,ap);
	V219= V220;
	{object V221= (VV[34]->s.s_dbind);
	if((V221!= Cnil))goto T511;
	goto T509;
	goto T511;
T511:;
	if((V221!= VV[16]))goto T512;
	if(!(((V218))==(VV[16]))){
	goto T509;}
	goto T510;
	goto T512;
T512:;}
	goto T510;
T510:;
	base[0]=VV[126]->s.s_gfdef;
	{object V222;
	V222= (V219);
	 vs_top=base+1;
	 while(V222!=Cnil)
	 {vs_push((V222)->c.c_car);V222=(V222)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk126)();
	vs_top=sup;
	{object V223 = vs_base[0];
	VMR14(V223)}
	goto T509;
T509:;
	{object V224 = Cnil;
	VMR14(V224)}
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
	{object V225=base[0]->c.c_cdr;
	{object V226=getf(V225,VV[149],OBJNULL);
	if(V226==OBJNULL){
	base[2]= Cnil;} else {
	base[2]= V226;
	}}
	{object V227=getf(V225,VV[150],OBJNULL);
	if(V227==OBJNULL){
	base[3]= Cnil;} else {
	base[3]= V227;
	}}
	{object V228=getf(V225,VV[151],OBJNULL);
	if(V228==OBJNULL){
	base[4]= Cnil;} else {
	base[4]= V228;
	}}
	{object V229=getf(V225,VV[152],OBJNULL);
	if(V229==OBJNULL){
	base[5]= Cnil;} else {
	base[5]= V229;
	}}
	{object V230=getf(V225,VV[153],OBJNULL);
	if(V230==OBJNULL){
	base[6]= Cnil;} else {
	base[6]= V230;
	}}
	{object V231=getf(V225,VV[154],OBJNULL);
	if(V231==OBJNULL){
	base[7]= Cnil;} else {
	base[7]= V231;
	}}
	{object V232=getf(V225,VV[155],OBJNULL);
	if(V232==OBJNULL){
	base[8]= Cnil;} else {
	base[8]= V232;
	}}
	{object V233=getf(V225,VV[156],OBJNULL);
	if(V233==OBJNULL){
	base[9]= Cnil;} else {
	base[9]= V233;
	}}
	check_other_key(V225,8,VV[149],VV[150],VV[151],VV[152],VV[153],VV[154],VV[155],VV[156]);}
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
	V234= vs_base[0];
	if((CMPcdr(V234))==Cnil){
	goto T530;}
	base[10]= VV[36];
	base[11]= base[0];
	vs_top=(vs_base=base+10)+2;
	Lerror();
	return;
	goto T530;
T530:;
	{object V235;
	register object V236;
	object V237;
	if(base[3]!=Cnil){
	V235= base[3];
	goto T537;}
	if(base[5]!=Cnil){
	V235= base[5];
	goto T537;}
	V235= base[6];
	goto T537;
T537:;
	if(base[4]!=Cnil){
	V236= base[4];
	goto T538;}
	if(base[5]!=Cnil){
	V236= base[5];
	goto T538;}
	if(base[6]!=Cnil){
	V236= base[6];
	goto T538;}
	V236= base[7];
	goto T538;
T538:;
	if((base[8])!=Cnil){
	goto T541;}
	V237= small_fixnum(1);
	goto T539;
	goto T541;
T541:;
	base[13]= base[8];
	vs_top=(vs_base=base+13)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T544;}
	V237= base[8];
	goto T539;
	goto T544;
T544:;
	V237= Cnil;
	goto T539;
T539:;
	if(base[2]!=Cnil){
	V238= base[2];
	goto T547;}
	if(base[3]!=Cnil){
	V238= base[3];
	goto T547;}
	V238= small_fixnum(0);
	goto T547;
T547:;
	V239= list(2,VV[37],V238);
	if((V236)==Cnil){
	V240= Cnil;
	goto T548;}
	V241= list(2,VV[38],(V236));
	V240= make_cons(/* INLINE-ARGS */V241,Cnil);
	goto T548;
T548:;
	if(((V237))==Cnil){
	goto T550;}
	V242= Cnil;
	goto T549;
	goto T550;
T550:;
	V243= list(2,VV[39],base[8]);
	V242= make_cons(/* INLINE-ARGS */V243,Cnil);
	goto T549;
T549:;
	V244= append(V240,V242);
	V245= make_cons(/* INLINE-ARGS */V239,/* INLINE-ARGS */V244);
	if(base[9]==Cnil){
	V246= Cnil;
	goto T552;}
	if((V236)==Cnil){
	V247= Cnil;
	goto T553;}
	V247= VV[40];
	goto T553;
T553:;
	if(((V237))==Cnil){
	goto T555;}
	V248= Cnil;
	goto T554;
	goto T555;
T555:;
	V248= VV[41];
	goto T554;
T554:;
	V249= list(2,VV[19],listA(4,VV[21],base[9],VV[37],append(V247,V248)));
	V246= make_cons(/* INLINE-ARGS */V249,Cnil);
	goto T552;
T552:;
	if(((V236))!=Cnil){
	goto T559;}
	V250= VV[43];
	goto T557;
	goto T559;
T559:;
	V250= Cnil;
	goto T557;
T557:;
	if(((V236))==Cnil){
	goto T563;}
	if((base[6])==Cnil){
	goto T567;}
	V252= VV[45];
	goto T565;
	goto T567;
T567:;
	if((base[7])==Cnil){
	goto T570;}
	V252= VV[46];
	goto T565;
	goto T570;
T570:;
	if(((V235))==Cnil){
	goto T573;}
	V252= VV[47];
	goto T565;
	goto T573;
T573:;
	V252= VV[48];
	goto T565;
T565:;
	V251= listA(3,VV[44],make_cons(V252,VV[49]),VV[50]);
	goto T561;
	goto T563;
T563:;
	V251= VV[37];
	goto T561;
T561:;
	if(((V235))==Cnil){
	goto T577;}
	V253= VV[51];
	goto T575;
	goto T577;
T577:;
	V253= VV[52];
	goto T575;
T575:;
	if((V237)!=Cnil){
	V254= (V237);
	goto T579;}
	V254= VV[39];
	goto T579;
T579:;
	V255= list(3,VV[33],V251,list(3,VV[32],VV[37],list(3,V253,VV[37],V254)));
	V256= make_cons(/* INLINE-ARGS */V255,Cnil);
	V257= list(2,VV[5],listA(3,VV[6],VV[42],append(V250,/* INLINE-ARGS */V256)));
	V258= make_cons(/* INLINE-ARGS */V257,Cnil);
	base[13]= listA(3,VV[18],/* INLINE-ARGS */V245,append(V246,/* INLINE-ARGS */V258));
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
	{object V259=base[0]->c.c_cdr;
	if(endp(V259))invalid_macro_call();
	base[2]= (V259->c.c_car);
	V259=V259->c.c_cdr;
	{object V260=getf(V259,VV[155],OBJNULL);
	if(V260==OBJNULL){
	base[3]= VV[53];} else {
	base[3]= V260;
	}}
	check_other_key(V259,1,VV[155]);}
	V261= list(2,VV[54],base[2]);
	V262= make_cons(/* INLINE-ARGS */V261,Cnil);
	base[4]= list(3,VV[18],/* INLINE-ARGS */V262,list(2,VV[5],list(3,VV[6],VV[55],list(3,VV[33],VV[56],list(3,VV[32],VV[54],list(3,VV[4],base[3],VV[54]))))));
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
	{object V263=base[0]->c.c_cdr;
	if(endp(V263))invalid_macro_call();
	base[2]= (V263->c.c_car);
	V263=V263->c.c_cdr;
	{object V264=getf(V263,VV[155],OBJNULL);
	if(V264==OBJNULL){
	base[3]= VV[57];} else {
	base[3]= V264;
	}}
	check_other_key(V263,1,VV[155]);}
	V265= list(2,VV[54],base[2]);
	V266= make_cons(/* INLINE-ARGS */V265,Cnil);
	base[4]= list(3,VV[18],/* INLINE-ARGS */V266,list(2,VV[5],list(3,VV[6],VV[58],list(3,VV[33],VV[59],list(3,VV[32],VV[54],list(3,VV[4],base[3],VV[54]))))));
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
	{object V267=base[0]->c.c_cdr;
	if(endp(V267))invalid_macro_call();
	base[2]= (V267->c.c_car);
	V267=V267->c.c_cdr;
	if(!endp(V267))invalid_macro_call();}
	{object V268;
	object V269;
	object V270;
	if(type_of(base[2])==t_cons){
	goto T583;}
	V268= Cnil;
	goto T582;
	goto T583;
T583:;
	if((CMPcar(base[2]))==(VV[60])){
	goto T585;}
	V268= Cnil;
	goto T582;
	goto T585;
T585:;
	V268= CMPcadr(base[2]);
	goto T582;
T582:;
	if(((V268))==Cnil){
	goto T589;}
	V269= (*(LnkLI158))((V268));
	goto T587;
	goto T589;
T589:;
	V269= VV[61];
	goto T587;
T587:;
	V270= (((V268))==(VV[62])?Ct:Cnil);
	V271= list(2,VV[64],base[2]);
	if(((V270))==Cnil){
	goto T593;}
	V272= Cnil;
	goto T592;
	goto T593;
T593:;
	V272= VV[65];
	goto T592;
T592:;
	V273= listA(3,VV[63],/* INLINE-ARGS */V271,V272);
	if(((V270))==Cnil){
	goto T597;}
	V274= VV[68];
	goto T595;
	goto T597;
T597:;
	V274= list(2,VV[69],make_cons((V269),VV[70]));
	goto T595;
T595:;
	base[6]= list(3,VV[1],/* INLINE-ARGS */V273,list(2,VV[5],list(3,VV[6],VV[66],list(3,VV[31],list(3,VV[67],V274,VV[71]),VV[72]))));
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
	{object V275=base[0]->c.c_cdr;
	if(endp(V275))invalid_macro_call();
	base[2]= (V275->c.c_car);
	V275=V275->c.c_cdr;
	if(!endp(V275))invalid_macro_call();}
	V276= list(2,VV[54],base[2]);
	base[3]= list(3,VV[18],make_cons(/* INLINE-ARGS */V276,Cnil),VV[73]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function SEQUENCE-ACCESSOR	*/

static object LI21(V278)

object V278;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	if(!(type_of((V278))==t_cons)){
	goto T601;}
	V280= CMPcar((V278));
	goto T599;
	goto T601;
T601:;
	V280= (V278);
	goto T599;
T599:;
	{object V279= V280;
	if((V279!= VV[159])
	&& (V279!= VV[160])
	&& (V279!= VV[161]))goto T603;
	{object V281 = VV[74];
	VMR20(V281)}
	goto T603;
T603:;
	if((V279!= VV[162]))goto T604;
	{object V282 = VV[75];
	VMR20(V282)}
	goto T604;
T604:;
	if((V279!= VV[163]))goto T605;
	{object V283 = VV[76];
	VMR20(V283)}
	goto T605;
T605:;
	if((V279!= VV[164]))goto T606;
	{object V284 = VV[77];
	VMR20(V284)}
	goto T606;
T606:;
	if((V279!= VV[165]))goto T607;
	{object V285 = VV[78];
	VMR20(V285)}
	goto T607;
T607:;
	if((V279!= VV[166]))goto T608;
	{object V286 = VV[79];
	VMR20(V286)}
	goto T608;
T608:;
	{object V287 = VV[61];
	VMR20(V287)}}
	return Cnil;
}
/*	macro definition for EACHTIME	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V288=base[0]->c.c_cdr;
	if(endp(V288))invalid_macro_call();
	base[2]= (V288->c.c_car);
	V288=V288->c.c_cdr;
	if(!endp(V288))invalid_macro_call();}
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
	{object V289=base[0]->c.c_cdr;
	if(endp(V289))invalid_macro_call();
	base[2]= (V289->c.c_car);
	V289=V289->c.c_cdr;
	if(!endp(V289))invalid_macro_call();}
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
	{object V290=base[0]->c.c_cdr;
	if(endp(V290))invalid_macro_call();
	base[2]= (V290->c.c_car);
	V290=V290->c.c_cdr;
	if(!endp(V290))invalid_macro_call();}
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
	{object V291=base[0]->c.c_cdr;
	if(endp(V291))invalid_macro_call();
	base[2]= (V291->c.c_car);
	V291=V291->c.c_cdr;
	base[3]= V291;}{object V292;
	V292= (*(LnkLI167))(base[2],base[3],base[1]);
	if(V292==Cnil)goto T609;
	base[4]= V292;
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
	{object V293=base[0]->c.c_cdr;
	if(endp(V293))invalid_macro_call();
	base[2]= (V293->c.c_car);
	V293=V293->c.c_cdr;
	if(endp(V293))invalid_macro_call();
	base[3]= (V293->c.c_car);
	V293=V293->c.c_cdr;
	base[4]= V293;}
	{object V295;
	object V296= base[2];
	if(V296==Cnil){
	V294= Cnil;
	goto T611;}
	base[5]=V295=MMcons(Cnil,Cnil);
	goto T612;
T612:;
	(V295->c.c_car)= CMPcar((V296->c.c_car));
	if((V296=MMcdr(V296))==Cnil){
	V294= base[5];
	goto T611;}
	V295=MMcdr(V295)=MMcons(Cnil,Cnil);
	goto T612;}
	goto T611;
T611:;
	base[5]= listA(4,VV[88],V294,list(3,VV[89],base[2],base[3]),base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function SIMPLE-EXPAND-GATHERING-FORM	*/

static object LI27(V300,V301,V302)

register object V300;object V301;object V302;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V303;
	object V304;
	if(!(type_of((V300))==t_symbol)){
	goto T618;}
	V308= list(2,VV[90],make_cons((V300),Cnil));
	V300= make_cons(/* INLINE-ARGS */V308,Cnil);
	V307= (V300);
	goto T616;
	goto T618;
T618:;
	V307= (V300);
	goto T616;
T616:;
	{object V305;
	object V306= V307;
	if(V306==Cnil){
	V303= Cnil;
	goto T614;}
	base[0]=V305=MMcons(Cnil,Cnil);
	goto T615;
T615:;
	(V305->c.c_car)= CMPcar((V306->c.c_car));
	if((V306=MMcdr(V306))==Cnil){
	V303= base[0];
	goto T614;}
	V305=MMcdr(V305)=MMcons(Cnil,Cnil);
	goto T615;}
	goto T614;
T614:;
	{object V309;
	object V310= (V300);
	if(V310==Cnil){
	V304= Cnil;
	goto T622;}
	base[0]=V309=MMcons(Cnil,Cnil);
	goto T623;
T623:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	(V309->c.c_car)= vs_base[0];
	if((V310=MMcdr(V310))==Cnil){
	V304= base[0];
	goto T622;}
	V309=MMcdr(V309)=MMcons(Cnil,Cnil);
	goto T623;}
	goto T622;
T622:;
	{object V313;
	object V314= (V303);
	object V315= (V304);
	if(V314==Cnil||V315==Cnil){
	V312= Cnil;
	goto T625;}
	base[0]=V313=MMcons(Cnil,Cnil);
	goto T626;
T626:;
	(V313->c.c_cdr)= list(2,(V314->c.c_car),(V315->c.c_car));
	while(MMcdr(V313)!=Cnil)V313=MMcdr(V313);
	if((V314=MMcdr(V314))==Cnil||(V315=MMcdr(V315))==Cnil){
	base[0]=base[0]->c.c_cdr;
	V312= base[0];
	goto T625;}
	goto T626;}
	goto T625;
T625:;
	{object V317;
	object V318= (V304);
	if(V318==Cnil){
	V316= Cnil;
	goto T628;}
	base[0]=V317=MMcons(Cnil,Cnil);
	goto T629;
T629:;
	(V317->c.c_car)= list(2,VV[4],(V318->c.c_car));
	if((V318=MMcdr(V318))==Cnil){
	V316= base[0];
	goto T628;}
	V317=MMcdr(V317)=MMcons(Cnil,Cnil);
	goto T629;}
	goto T628;
T628:;
	V320= make_cons(VV[31],V316);
	V321= make_cons(/* INLINE-ARGS */V320,Cnil);
	V322= list(2,VV[5],list(3,VV[6],V312,listA(3,VV[92],VV[93],append((V301),/* INLINE-ARGS */V321))));
	base[1]=VV[169]->s.s_gfdef;
	{object V324;
	object V325= (V300);
	if(V325==Cnil){
	V323= Cnil;
	goto T631;}
	base[0]=V324=MMcons(Cnil,Cnil);
	goto T632;
T632:;
	base[2]= (V325->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk169)();
	vs_top=sup;
	(V324->c.c_car)= vs_base[0];
	if((V325=MMcdr(V325))==Cnil){
	V323= base[0];
	goto T631;}
	V324=MMcdr(V324)=MMcons(Cnil,Cnil);
	goto T632;}
	goto T631;
T631:;
	{object V326 = listA(3,VV[91],/* INLINE-ARGS */V322,V323);
	VMR26(V326)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-GATHERING-FORM	*/

static object LI28(V330,V331,V332)

object V330;object V331;object V332;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V333;
	register object V334;
	object V335;
	register object V336;
	object V337;
	V333= Cnil;
	V334= Cnil;
	V335= Cnil;
	V336= Cnil;
	V337= Cnil;
	{object V338;
	register object V339;
	if(!(type_of((V330))==t_symbol)){
	goto T643;}
	V340= list(2,VV[90],make_cons((V330),Cnil));
	V338= make_cons(/* INLINE-ARGS */V340,Cnil);
	goto T641;
	goto T643;
T643:;
	V338= (V330);
	goto T641;
T641:;
	V339= CMPcar((V338));
	goto T647;
T647:;
	if(!(((V338))==Cnil)){
	goto T648;}
	goto T640;
	goto T648;
T648:;
	{register object V341;
	object V342;
	object V343;
	object V344;
	object V345;
	object V346;
	base[2]= CMPcadr((V339));
	base[3]= VV[89];
	base[4]= (V332);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk127)();
	if(vs_base>=vs_top){vs_top=sup;goto T657;}
	V341= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T658;}
	V342= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T659;}
	V343= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T660;}
	V344= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T661;}
	V345= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T662;}
	V346= vs_base[0];
	vs_top=sup;
	goto T663;
	goto T657;
T657:;
	V341= Cnil;
	goto T658;
T658:;
	V342= Cnil;
	goto T659;
T659:;
	V343= Cnil;
	goto T660;
T660:;
	V344= Cnil;
	goto T661;
T661:;
	V345= Cnil;
	goto T662;
T662:;
	V346= Cnil;
	goto T663;
T663:;
	{object V347;
	object V348;
	object V349;
	register object V350;
	V347= CMPcar((V339));
	V348= Cnil;
	V349= Cnil;
	V350= Cnil;
	if(!(type_of((V341))==t_cons)){
	goto T670;}
	if(!((CMPcar((V341)))==(VV[31]))){
	goto T670;}
	V341= CMPcdr((V341));
	if(!(type_of((V341))==t_cons)){
	goto T670;}
	V349= (VFUN_NARGS=1,(*(LnkLI128))(CMPcar((V341))));
	if(((V349))==Cnil){
	goto T670;}
	V341= CMPcdr((V341));
	if(!(type_of((V341))==t_cons)){
	goto T670;}
	V350= (VFUN_NARGS=2,(*(LnkLI128))(CMPcar((V341)),small_fixnum(0)));
	if(((V350))==Cnil){
	goto T670;}
	if((CMPcdr((V341)))!=Cnil){
	goto T670;}
	if(((V342))==Cnil){
	goto T689;}
	if(((V345))==Cnil){
	goto T692;}
	V351= CMPcadr((V339));
	V352= make_cons(VV[19],(V345));
	(void)((VFUN_NARGS=4,(*(LnkLI129))(VV[14],VV[94],/* INLINE-ARGS */V351,/* INLINE-ARGS */V352)));
	goto T669;
	goto T692;
T692:;
	if(((V343))==Cnil){
	goto T689;}
	base[3]= (V343);
	base[4]= (V342);
	base[5]= (V332);
	base[6]= (V334);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk130)();
	if(vs_base<vs_top){
	V343= vs_base[0];
	vs_base++;
	}else{
	V343= Cnil;}
	if(vs_base<vs_top){
	V348= vs_base[0];
	}else{
	V348= Cnil;}
	vs_top=sup;
	V335= nconc((V335),(V343));
	V334= Cnil;
	goto T689;
T689:;
	V334= nconc((V334),(V346));
	{object V353;
	V354= (*(LnkLI170))((V349),(V348),(V332));
	V353= make_cons((V347),/* INLINE-ARGS */V354);
	V333= make_cons((V353),(V333));}
	base[3]= (V350);
	base[4]= (V348);
	base[5]= (V332);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk147)();
	vs_top=sup;
	V350= vs_base[0];
	{object V355;
	if((CMPcdddr((V350)))!=Cnil){
	goto T720;}
	V355= CMPcaddr((V350));
	goto T718;
	goto T720;
T720:;
	V355= make_cons(VV[18],CMPcdr((V350)));
	goto T718;
T718:;
	V336= make_cons((V355),(V336));}
	if(((V344))==Cnil){
	goto T723;}
	V356= (check_alist(V348),sublis1(V348,(V344),&eql));
	V337= nconc((V337),V356);
	goto T723;
T723:;
	goto T652;
	goto T670;
T670:;
	(void)((VFUN_NARGS=3,(*(LnkLI129))(VV[14],VV[95],CMPcadr((V339)))));
	goto T669;
T669:;
	{register object V358;
	object V359;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V358= vs_base[0];
	V359= list(2,VV[96],CMPcadr((V339)));
	{object V360;
	V360= list(2,(V347),(V358));
	V333= make_cons((V360),(V333));}
	{object V361;
	V361= list(2,VV[4],list(2,VV[97],(V358)));
	V336= make_cons((V361),(V336));}
	if(((V334))==Cnil){
	goto T740;}
	{object V364;
	V364= (V334);
	V334= Cnil;
	V363= (V364);}
	V365= make_cons((V359),Cnil);
	V366= append(V363,/* INLINE-ARGS */V365);
	V362= make_cons(VV[20],/* INLINE-ARGS */V366);
	goto T738;
	goto T740;
T740:;
	V362= (V359);
	goto T738;
T738:;
	V367= list(2,(V358),V362);
	V368= make_cons(/* INLINE-ARGS */V367,Cnil);
	V335= nconc((V335),/* INLINE-ARGS */V368);}
	goto T652;}}
	goto T652;
T652:;
	V338= CMPcdr((V338));
	V339= CMPcar((V338));
	goto T647;}
	goto T640;
T640:;
	base[0]= (V331);
	base[1]= (V332);
	base[2]= (V333);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk171)();
	vs_top=sup;
	V331= vs_base[0];
	if(!(((V331))==(VV[13]))){
	goto T756;}
	{object V369 = Cnil;
	VMR27(V369)}
	goto T756;
T756:;
	if((V337)==Cnil){
	V370= Cnil;
	goto T758;}
	V371= make_cons(VV[19],(V337));
	V370= make_cons(/* INLINE-ARGS */V371,Cnil);
	goto T758;
T758:;
	if((CMPcdr((V336)))!=Cnil){
	goto T761;}
	V372= CMPcar((V336));
	goto T759;
	goto T761;
T761:;
	V373= reverse((V336));
	V372= make_cons(VV[31],/* INLINE-ARGS */V373);
	goto T759;
T759:;
	V374= list(2,(V331),V372);
	{object V375 = listA(3,VV[1],(V335),append(V370,/* INLINE-ARGS */V374));
	VMR27(V375)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function RENAME-AND-CAPTURE-VARIABLES	*/

static object LI30(V379,V380,V381)

object V379;object V380;object V381;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	base[0]=MMcons((V381),Cnil);
	base[1]=MMcons((V380),base[0]);
	base[2]=MMcons(Cnil,base[1]);
	base[3]= (V379);
	base[4]= (base[0]->c.c_car);
	base[5]= 
	make_cclosure_new(LC40,Cnil,base[2],Cdata);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk139)();
	vs_top=sup;
	V382= vs_base[0];
	{object V383 = list(2,V382,(base[2]->c.c_car));
	VMR28(V383)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for WALK-GATHERING-BODY	*/

static void L31()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM29; VC29
	vs_check;
	bds_check;
	{VOL object V384;
	check_arg(3);
	V384=(base[0]);
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
	{object V386;
	object V387= (base[2]->c.c_car);
	if(V387==Cnil){
	V385= Cnil;
	goto T768;}
	base[5]=V386=MMcons(Cnil,Cnil);
	goto T769;
T769:;
	(V386->c.c_car)= CMPcar((V387->c.c_car));
	if((V387=MMcdr(V387))==Cnil){
	V385= base[5];
	goto T768;}
	V386=MMcdr(V386)=MMcons(Cnil,Cnil);
	goto T769;}
	goto T768;
T768:;
	base[4]= nconc(V385,(VV[98]->s.s_dbind));
	bds_bind(VV[98],base[4]);
	base[5]= make_cons(VV[20],(V384));
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
	{object V388=base[0]->c.c_cdr;
	{object V389=getf(V388,VV[172],OBJNULL);
	if(V389==OBJNULL){
	base[2]= Cnil;} else {
	base[2]= V389;
	}}
	check_other_key(V388,1,VV[172]);}
	V390= list(2,VV[108],base[2]);
	if(base[2]==Cnil){
	V391= Cnil;
	goto T775;}
	V391= VV[109];
	goto T775;
T775:;
	base[3]= list(3,VV[1],list(2,/* INLINE-ARGS */V390,list(2,VV[54],V391)),VV[110]);
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
	{object V392=base[0]->c.c_cdr;
	{object V393=getf(V392,VV[172],OBJNULL);
	if(V393==OBJNULL){
	base[2]= Cnil;} else {
	base[2]= V393;
	}}
	check_other_key(V392,1,VV[172]);}
	V394= list(2,VV[111],base[2]);
	base[3]= list(3,VV[18],make_cons(/* INLINE-ARGS */V394,Cnil),VV[112]);
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
	{object V395=base[0]->c.c_cdr;
	{object V396=getf(V395,VV[172],OBJNULL);
	if(V396==OBJNULL){
	base[2]= Cnil;} else {
	base[2]= V396;
	}}
	check_other_key(V395,1,VV[172]);}
	V397= list(2,VV[111],base[2]);
	V398= make_cons(/* INLINE-ARGS */V397,Cnil);
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
	V399= VV[114];
	goto T778;
	goto T780;
T780:;
	V399= VV[115];
	goto T778;
T778:;
	base[3]= list(3,VV[18],/* INLINE-ARGS */V398,list(3,VV[31],list(2,VV[5],list(3,VV[6],VV[113],list(3,VV[86],V399,VV[116]))),VV[117]));
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
	{object V400=base[0]->c.c_cdr;
	{object V401=getf(V400,VV[172],OBJNULL);
	if(V401==OBJNULL){
	base[2]= Cnil;} else {
	base[2]= V401;
	}}
	check_other_key(V400,1,VV[172]);}
	V402= list(2,VV[111],base[2]);
	V403= make_cons(/* INLINE-ARGS */V402,Cnil);
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
	V404= VV[119];
	goto T787;
	goto T789;
T789:;
	V404= VV[120];
	goto T787;
T787:;
	base[3]= list(3,VV[18],/* INLINE-ARGS */V403,list(3,VV[31],list(2,VV[5],list(3,VV[6],VV[118],list(3,VV[86],V404,VV[121]))),VV[122]));
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
	{object V405=base[0]->c.c_cdr;
	{object V406=getf(V405,VV[172],OBJNULL);
	if(V406==OBJNULL){
	base[2]= small_fixnum(0);} else {
	base[2]= V406;
	}}
	check_other_key(V405,1,VV[172]);}
	V407= list(2,VV[123],base[2]);
	base[3]= list(3,VV[18],make_cons(/* INLINE-ARGS */V407,Cnil),VV[124]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC41(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	{register object V408;
	object V409;
	register object V410;
	check_arg(3);
	V408=(base[0]);
	V409=(base[1]);
	V410=(base[2]);
	vs_top=sup;
	{register object V411;
	register object V412;
	V411= Cnil;
	V412= Cnil;
	if(!(type_of((V408))==t_cons)){
	goto T797;}
	if((CMPcar((V408)))==(VV[99])){
	goto T800;}
	if(!((CMPcar((V408)))==(VV[5]))){
	goto T802;}
	if(!((CMPcadr((V408)))==(VV[99]))){
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
	base[3]= (V408);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T800;
T800:;
	if((CMPcddr((V408)))!=Cnil){
	goto T815;}
	V412= VV[90];
	goto T813;
	goto T815;
T815:;
	V412= CMPcaddr((V408));
	goto T813;
T813:;
	{register object x= (V412),V413= (base0[1]->c.c_car);
	while(V413!=Cnil)
	if(eql(x,V413->c.c_car->c.c_car) &&V413->c.c_car != Cnil){
	V411= (V413->c.c_car);
	goto T812;
	}else V413=V413->c.c_cdr;
	V411= Cnil;}
	goto T812;
T812:;
	if(((V411))==Cnil){
	goto T810;}
	if((CMPcdddr((V408)))==Cnil){
	goto T817;}
	base[3]= VV[101];
	base[4]= (V408);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk126)();
	vs_top=sup;
	goto T817;
T817:;
	{object V414;
	V414= CMPcadr((V411));
	if(!(type_of((V414))==t_symbol)){
	goto T824;}
	base[3]= list(3,VV[4],list(2,VV[102],(V414)),CMPcadr((V408)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T824;
T824:;
	{register object V415;
	register object V416;
	V415= CMPcaddr((V411));
	V416= CMPcar((V415));
	goto T830;
T830:;
	if(!(((V415))==Cnil)){
	goto T831;}
	goto T826;
	goto T831;
T831:;
	if(((*(LnkLI173))((V416),(V410),(base0[2]->c.c_car)))!=Cnil){
	goto T835;}
	if(((*(LnkLI174))((V416),(V410)))==Cnil){
	goto T836;}
	if(((*(LnkLI174))((V416),(base0[2]->c.c_car)))!=Cnil){
	goto T835;}
	goto T836;
T836:;
	(void)((VFUN_NARGS=3,(*(LnkLI129))(VV[16],VV[103],(V416))));
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[171]);
	base[5]= VV[13];
	vs_top=(vs_base=base+5)+1;
	unwind(fr,Cnil);}
	goto T835;
T835:;
	V415= CMPcdr((V415));
	V416= CMPcar((V415));
	goto T830;}
	goto T826;
T826:;
	base[3]= list(2,(V414),CMPcadr((V408)));
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T810;
T810:;
	{register object x= (V412),V417= (VV[98]->s.s_dbind);
	while(V417!=Cnil)
	if(eql(x,V417->c.c_car)){
	V411= V417;
	goto T853;
	}else V417=V417->c.c_cdr;
	V411= Cnil;}
	goto T853;
T853:;
	if(((V411))==Cnil){
	goto T850;}
	if(((V412))==(VV[90])){
	goto T849;}
	if(((*(LnkLI173))((V412),(V410),CMPcadddr((V411))))==Cnil){
	goto T850;}
	goto T849;
T849:;
	base[3]= (V408);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T850;
T850:;
	if(!(((V412))==(VV[90]))){
	goto T859;}
	base[3]= VV[104];
	base[4]= (V408);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk126)();
	vs_top=sup;
	goto T857;
	goto T859;
T859:;
	base[3]= VV[105];
	base[4]= (V412);
	base[5]= (V408);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk126)();
	vs_top=sup;
	goto T857;
T857:;
	base[3]= make_cons(VV[106],CMPcdr((V408)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T797;
T797:;
	if(!(type_of((V408))==t_symbol)){
	goto T867;}
	{register object x= (V408),V418= (base0[1]->c.c_car);
	while(V418!=Cnil)
	if(eql(x,V418->c.c_car->c.c_car) &&V418->c.c_car != Cnil){
	V411= (V418->c.c_car);
	goto T872;
	}else V418=V418->c.c_cdr;
	V411= Cnil;}
	goto T872;
T872:;
	if(((V411))==Cnil){
	goto T867;}
	if(((*(LnkLI173))((V408),(V410),(base0[2]->c.c_car)))==Cnil){
	goto T867;}
	(void)((VFUN_NARGS=3,(*(LnkLI129))(VV[16],VV[107],(V408))));
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[171]);
	base[3]= VV[13];
	vs_top=(vs_base=base+3)+1;
	unwind(fr,Cnil);}
	goto T867;
T867:;
	base[3]= (V408);
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
	{register object V419;
	object V420;
	object V421;
	check_arg(3);
	V419=(base[0]);
	V420=(base[1]);
	V421=(base[2]);
	vs_top=sup;
	{object V422;
	V422= Cnil;
	if(!(type_of((V419))==t_symbol)){
	goto T876;}
	if(((*(LnkLI173))((V419),(V421),(base0[2]->c.c_car)))!=Cnil){
	goto T877;}
	goto T876;
T876:;
	base[3]= (V419);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T877;
T877:;
	{register object x= (V419),V423= (base0[1]->c.c_car);
	while(V423!=Cnil)
	if(eql(x,V423->c.c_car->c.c_car) &&V423->c.c_car != Cnil){
	V422= (V423->c.c_car);
	goto T884;
	}else V423=V423->c.c_cdr;
	V422= Cnil;}
	goto T884;
T884:;
	if(((V422))==Cnil){
	goto T882;}
	base[3]= CMPcdr((V422));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T882;
T882:;
	base[3]= V419;
	base[4]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+2;
	Ladjoin();
	vs_top=sup;
	(base0[0]->c.c_car)= vs_base[0];
	base[3]= (V419);
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
	{register object V425;
	object V426;
	object V427;
	check_arg(3);
	V425=(base[0]);
	V426=(base[1]);
	V427=(base[2]);
	vs_top=sup;
	{object V428;
	V428= Cnil;
	if(!(type_of((V425))==t_symbol)){
	goto T890;}
	{register object x= (V425),V429= (base0[1]->c.c_car);
	while(V429!=Cnil)
	if(eql(x,V429->c.c_car->c.c_car) &&V429->c.c_car != Cnil){
	V428= (V429->c.c_car);
	goto T895;
	}else V429=V429->c.c_cdr;
	V428= Cnil;}
	goto T895;
T895:;
	if(((V428))==Cnil){
	goto T890;}
	if(((*(LnkLI173))((V425),(V427),(base0[0]->c.c_car)))==Cnil){
	goto T890;}
	base[3]= CMPcdr((V428));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T890;
T890:;
	base[3]= (V425);
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
	{register object V430;
	object V431;
	register object V432;
	check_arg(3);
	V430=(base[0]);
	V431=(base[1]);
	V432=(base[2]);
	vs_top=sup;
	if(!(type_of((V430))==t_symbol)){
	goto T898;}
	{object V433;
	V433= Cnil;
	if(!(((V430))==((base0[4]->c.c_car)))){
	goto T901;}
	if(((*(LnkLI173))((V430),(V432),(base0[6]->c.c_car)))==Cnil){
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
	{register object x= (V430),V434= (base0[5]->c.c_car);
	while(V434!=Cnil)
	if(eql(x,V434->c.c_car->c.c_car) &&V434->c.c_car != Cnil){
	V433= (V434->c.c_car);
	goto T911;
	}else V434=V434->c.c_cdr;
	V433= Cnil;}
	goto T911;
T911:;
	if(((V433))==Cnil){
	goto T908;}
	if(((*(LnkLI173))((V430),(V432),(base0[6]->c.c_car)))==Cnil){
	goto T908;}
	base[3]= CMPcdr((V433));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T908;
T908:;
	{register object x= (V430),V435= (base0[2]->c.c_car);
	while(V435!=Cnil)
	if(eql(x,V435->c.c_car)){
	goto T916;
	}else V435=V435->c.c_cdr;
	goto T914;}
	goto T916;
T916:;
	if(((*(LnkLI173))((V430),(V432),(base0[6]->c.c_car)))==Cnil){
	goto T914;}
	(void)((VFUN_NARGS=4,(*(LnkLI129))(VV[16],VV[28],CMPcadr((base0[1]->c.c_car)),(V430))));
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[132]);
	base[3]= VV[13];
	vs_top=(vs_base=base+3)+1;
	unwind(fr,Cnil);}
	goto T914;
T914:;
	base[3]= (V430);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T898;
T898:;
	if(!(type_of((V430))==t_cons)){
	goto T921;}
	if(!((CMPcar((V430)))==(VV[4]))){
	goto T921;}
	if(!((CMPcadr((V430)))==((base0[4]->c.c_car)))){
	goto T921;}
	if(((*(LnkLI173))(CMPcadr((V430)),(V432),(base0[6]->c.c_car)))==Cnil){
	goto T921;}
	if((CMPcddr((V430)))==Cnil){
	goto T929;}
	(void)((VFUN_NARGS=4,(*(LnkLI129))(VV[14],VV[29],CMPcadr((base0[1]->c.c_car)),CMPcddr((V430)))));
	goto T929;
T929:;
	base[3]= (base0[3]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T921;
T921:;
	base[3]= (V430);
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
	{object V436;
	check_arg(1);
	V436=(base[0]);
	vs_top=sup;
	{register object x= (V436),V437= VV[25];
	while(V437!=Cnil)
	if(eql(x,V437->c.c_car)){
	base[1]= V437;
	vs_top=(vs_base=base+1)+1;
	return;
	}else V437=V437->c.c_cdr;
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
	vs_top=sup;{object V438;
	{object V439;
	V439= CMPcar((base0[0]->c.c_car));
	(base0[0]->c.c_car)= CMPcdr((base0[0]->c.c_car));
	V438= (V439);}
	if(V438==Cnil)goto T932;
	base[0]= V438;
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
TTL:;{object V440;
	{object V441;
	V441= CMPcar((base0[0]->c.c_car));
	(base0[0]->c.c_car)= CMPcdr((base0[0]->c.c_car));
	V440= (V441);}
	if(V440==Cnil)goto T937;
	base[0]= V440;
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

