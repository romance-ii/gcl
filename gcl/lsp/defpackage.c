
#include <cmpinclude.h>
#include "defpackage.h"
init_defpackage(){do_init(VV);}
/*	macro definition for DEFPACKAGE	*/

static L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	base[3]= V1;}
T3:;
	vs_base=vs_top;
	(void) (*Lnk3)();
	vs_top=sup;
	{register object x= (VV[3]->s.s_dbind),V2= VV[4];
	while(V2!=Cnil)
	if(eql(x,V2->c.c_car)){
	goto T10;
	}else V2=V2->c.c_cdr;}
T10:;
	base[4]= VV[6];
	base[5]= VV[7];
	base[6]= (VV[3]->s.s_dbind);
	vs_top=(vs_base=base+4)+3;
	Lcerror();
	vs_top=sup;
	goto T3;
	base[4]=MMcons(Cnil,Cnil);
	(base[4]->c.c_car)=make_cclosure_new(LC3,Cnil,base[4],Cdata);
T18:;
	base[5]= (VV[3]->s.s_dbind);
	base[6]= base[3];
	base[7]= VV[10];
	base[8]= (VV[85]->s.s_gfdef);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk86)();
	vs_top=sup;
	V3= vs_base[0];
	(void)(number_compare(small_fixnum(2),V3)<=0);
	base[5]= VV[11];
	base[6]= (VV[3]->s.s_dbind);
	base[8]= (VV[3]->s.s_dbind);
	base[9]= base[3];
	vs_top=(vs_base=base+8)+2;
	L5(base);
	vs_top=sup;
	V4= vs_base[0];
	base[7]= CMPcar(V4);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk87)();
	vs_top=sup;
	goto T18;
	base[2]= coerce_to_string(base[2]);
	{object V5;
	object V6;
	object V7;
	register object V8;
	register object V9;
	register object V10;
	register object V11;
	register object V12;
	object V13;
	base[6]= VV[12];
	base[7]= base[3];
	vs_top=(vs_base=base+6)+2;
	L5(base);
	vs_top=sup;
	V16= vs_base[0];
	{object V14;
	object V15= V16;
	if(V15==Cnil){
	V5= Cnil;
	goto T41;}
	base[5]=V14=MMcons(Cnil,Cnil);
T42:;
	(V14->c.c_car)= coerce_to_string((V15->c.c_car));
	if((V15=MMcdr(V15))==Cnil){
	V5= base[5];
	goto T41;}
	V14=MMcdr(V14)=MMcons(Cnil,Cnil);
	goto T42;}
T41:;
	base[5]= VV[13];
	base[6]= base[3];
	vs_top=(vs_base=base+5)+2;
	L5(base);
	vs_top=sup;
	V17= vs_base[0];
	V6= CMPcar(V17);
	base[5]= VV[14];
	base[6]= base[3];
	vs_top=(vs_base=base+5)+2;
	L5(base);
	vs_top=sup;
	V18= vs_base[0];
	V7= CMPcar(V18);
	base[6]= VV[15];
	base[7]= base[3];
	vs_top=(vs_base=base+6)+2;
	L5(base);
	vs_top=sup;
	V21= vs_base[0];
	{object V19;
	object V20= V21;
	if(V20==Cnil){
	V8= Cnil;
	goto T55;}
	base[5]=V19=MMcons(Cnil,Cnil);
T56:;
	(V19->c.c_car)= coerce_to_string((V20->c.c_car));
	if((V20=MMcdr(V20))==Cnil){
	V8= base[5];
	goto T55;}
	V19=MMcdr(V19)=MMcons(Cnil,Cnil);
	goto T56;}
T55:;
	base[6]= VV[16];
	base[7]= base[3];
	vs_top=(vs_base=base+6)+2;
	L5(base);
	vs_top=sup;
	V24= vs_base[0];
	{object V22;
	object V23= V24;
	if(V23==Cnil){
	V9= Cnil;
	goto T61;}
	base[5]=V22=MMcons(Cnil,Cnil);
T62:;
	(V22->c.c_car)= coerce_to_string((V23->c.c_car));
	if((V23=MMcdr(V23))==Cnil){
	V9= base[5];
	goto T61;}
	V22=MMcdr(V22)=MMcons(Cnil,Cnil);
	goto T62;}
T61:;
	base[6]= VV[17];
	base[7]= base[3];
	vs_top=(vs_base=base+6)+2;
	L5(base);
	vs_top=sup;
	V27= vs_base[0];
	{object V25;
	object V26= V27;
	if(V26==Cnil){
	V10= Cnil;
	goto T67;}
	base[5]=V25=MMcons(Cnil,Cnil);
T68:;
	(V25->c.c_car)= coerce_to_string((V26->c.c_car));
	if((V26=MMcdr(V26))==Cnil){
	V10= base[5];
	goto T67;}
	V25=MMcdr(V25)=MMcons(Cnil,Cnil);
	goto T68;}
T67:;
T75:;
	base[5]= VV[19];
	base[6]= base[3];
	vs_top=(vs_base=base+5)+2;
	L4(base);
	vs_top=sup;
	V28= coerce_to_string(CMPcar((VV[18]->s.s_dbind)));
	{object V30;
	object V31= CMPcdr((VV[18]->s.s_dbind));
	if(V31==Cnil){
	V29= Cnil;
	goto T84;}
	base[5]=V30=MMcons(Cnil,Cnil);
T85:;
	(V30->c.c_car)= coerce_to_string((V31->c.c_car));
	if((V31=MMcdr(V31))==Cnil){
	V29= base[5];
	goto T84;}
	V30=MMcdr(V30)=MMcons(Cnil,Cnil);
	goto T85;}
T84:;
	(void)(make_cons(/* INLINE-ARGS */V28,V29));
	goto T75;
T90:;
	base[5]= VV[21];
	base[6]= base[3];
	vs_top=(vs_base=base+5)+2;
	L4(base);
	vs_top=sup;
	V32= coerce_to_string(CMPcar((VV[18]->s.s_dbind)));
	{object V34;
	object V35= CMPcdr((VV[18]->s.s_dbind));
	if(V35==Cnil){
	V33= Cnil;
	goto T99;}
	base[5]=V34=MMcons(Cnil,Cnil);
T100:;
	(V34->c.c_car)= coerce_to_string((V35->c.c_car));
	if((V35=MMcdr(V35))==Cnil){
	V33= base[5];
	goto T99;}
	V34=MMcdr(V34)=MMcons(Cnil,Cnil);
	goto T100;}
T99:;
	(void)(make_cons(/* INLINE-ARGS */V32,V33));
	goto T90;
	base[6]= VV[22];
	base[7]= base[3];
	vs_top=(vs_base=base+6)+2;
	L5(base);
	vs_top=sup;
	V38= vs_base[0];
	{object V36;
	object V37= V38;
	if(V37==Cnil){
	V13= Cnil;
	goto T103;}
	base[5]=V36=MMcons(Cnil,Cnil);
T104:;
	(V36->c.c_car)= coerce_to_string((V37->c.c_car));
	if((V37=MMcdr(V37))==Cnil){
	V13= base[5];
	goto T103;}
	V36=MMcdr(V36)=MMcons(Cnil,Cnil);
	goto T104;}
T103:;
T112:;
	base[5]= (V8);
	base[6]= (V9);
T122:;
	(void)(CMPcdr((VV[18]->s.s_dbind)));
	goto T122;
T132:;
	(void)(CMPcdr((VV[18]->s.s_dbind)));
	goto T132;
	vs_top=(vs_base=base+5)+4;
	L2(base);
	vs_top=sup;
	base[5]= VV[25];
	base[6]= CMPcar((VV[23]->s.s_dbind));
T145:;
	(void)(CMPcdr((VV[23]->s.s_dbind)));
	{object V39= (VV[26]->s.s_dbind);
	if(!eql(V39,VV[27]))goto T152;
	goto T146;
T152:;
	if(!eql(V39,VV[28]))goto T153;
	goto T146;
T153:;
	if(!eql(V39,VV[29]))goto T154;
	goto T146;
T154:;
	if(!eql(V39,VV[30]))goto T155;
	goto T146;
T155:;}
T146:;
	goto T145;
	vs_top=(vs_base=base+5)+3;
	Lerror();
	vs_top=sup;
	goto T112;
T159:;
	base[5]= (V10);
	base[6]= (V9);
	vs_top=(vs_base=base+5)+2;
	L2(base);
	vs_top=sup;
	base[5]= VV[31];
	base[6]= CMPcar((VV[23]->s.s_dbind));
T172:;
	(void)(CMPcdr((VV[23]->s.s_dbind)));
	{object V40= (VV[26]->s.s_dbind);
	if(!eql(V40,VV[27]))goto T179;
	goto T173;
T179:;
	if(!eql(V40,VV[28]))goto T180;
	goto T173;
T180:;}
T173:;
	goto T172;
	vs_top=(vs_base=base+5)+3;
	Lerror();
	vs_top=sup;
	goto T159;
	V41= list(2,VV[46],base[2]);
	V42= list(3,VV[48],base[2],base[2]);
	if(((V5))==Cnil){
	goto T185;}
	V44= list(4,VV[48],base[2],base[2],list(2,VV[49],(V5)));
	V43= make_cons(/* INLINE-ARGS */V44,Cnil);
	goto T183;
T185:;
	V43= Cnil;
T183:;
	base[5]= VV[50];
	base[6]= base[3];
	base[7]= VV[10];
	base[8]= (VV[85]->s.s_gfdef);
	vs_top=(vs_base=base+5)+4;
	Lmember();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T189;}
	V46= list(3,VV[51],list(2,VV[52],list(2,VV[46],base[2])),base[2]);
	V45= make_cons(/* INLINE-ARGS */V46,Cnil);
	goto T187;
T189:;
	V45= Cnil;
T187:;
	V47= listA(3,VV[47],/* INLINE-ARGS */V42,append(V43,V45));
	V48= list(2,VV[49],(V5));
	if(((V7))==Cnil){
	goto T197;}
	V49= Cnil;
	goto T195;
T197:;
	V49= Cnil;
T195:;
	V50= list(4,VV[45],/* INLINE-ARGS */V41,/* INLINE-ARGS */V47,listA(7,VV[53],base[2],VV[54],VV[55],VV[56],/* INLINE-ARGS */V48,V49));
	if(((V6))==Cnil){
	goto T201;}
	base[5]= base[2];
	base[6]= VV[59];
	vs_top=(vs_base=base+5)+2;
	Lintern();
	vs_top=sup;
	V52= vs_base[0];
	V53= list(3,VV[57],list(3,VV[58],list(2,VV[49],V52),VV[60]),(V6));
	V51= make_cons(/* INLINE-ARGS */V53,Cnil);
	goto T199;
T201:;
	V51= Cnil;
T199:;
	V54= list(2,VV[62],list(2,VV[46],base[2]));
	V55= make_cons(/* INLINE-ARGS */V54,Cnil);
	if(((V8))==Cnil){
	goto T209;}
	V57= list(2,VV[63],list(3,VV[64],VV[65],list(2,VV[49],(V8))));
	base[5]= make_cons(/* INLINE-ARGS */V57,Cnil);
	goto T207;
T209:;
	base[5]= Cnil;
T207:;
	if(((V11))==Cnil){
	goto T213;}
	{object V58;
	object V59= (V11);
	if(V59==Cnil){
	base[6]= Cnil;
	goto T211;}
	base[7]=V58=MMcons(Cnil,Cnil);
T215:;
	V61= list(2,VV[67],list(3,VV[68],VV[69],list(3,VV[70],VV[71],CMPcar((V59->c.c_car)))));
	(V58->c.c_car)= list(2,VV[66],list(3,VV[64],/* INLINE-ARGS */V61,list(2,VV[49],CMPcdr((V59->c.c_car)))));
	if((V59=MMcdr(V59))==Cnil){
	base[6]= base[7];
	goto T211;}
	V58=MMcdr(V58)=MMcons(Cnil,Cnil);
	goto T215;}
T213:;
	base[6]= Cnil;
T211:;{object V63;
	base[9]= VV[50];
	base[10]= base[3];
	vs_top=(vs_base=base+9)+2;
	L5(base);
	vs_top=sup;
	V66= vs_base[0];
	{object V64;
	object V65= V66;
	if(V65==Cnil){
	V63= Cnil;
	goto T220;}
	base[8]=V64=MMcons(Cnil,Cnil);
T221:;
	(V64->c.c_car)= coerce_to_string((V65->c.c_car));
	if((V65=MMcdr(V65))==Cnil){
	V63= base[8];
	goto T220;}
	V64=MMcdr(V64)=MMcons(Cnil,Cnil);
	goto T221;}
T220:;
	if(V63==Cnil)goto T219;
	V62= V63;
	goto T218;
T219:;}
	V62= VV[73];
T218:;
	V67= list(2,VV[72],list(2,VV[49],V62));
	if(((V12))==Cnil){
	goto T229;}
	{object V69;
	object V70= (V12);
	if(V70==Cnil){
	base[8]= Cnil;
	goto T227;}
	base[9]=V69=MMcons(Cnil,Cnil);
T231:;
	V72= list(2,VV[67],list(3,VV[68],VV[75],list(3,VV[70],VV[71],CMPcar((V70->c.c_car)))));
	(V69->c.c_car)= list(2,VV[74],list(3,VV[64],/* INLINE-ARGS */V72,list(2,VV[49],CMPcdr((V70->c.c_car)))));
	if((V70=MMcdr(V70))==Cnil){
	base[8]= base[9];
	goto T227;}
	V69=MMcdr(V69)=MMcons(Cnil,Cnil);
	goto T231;}
T229:;
	base[8]= Cnil;
T227:;
	if(((V9))==Cnil){
	goto T235;}
	V73= list(3,VV[64],VV[76],list(2,VV[49],(V9)));
	base[9]= make_cons(/* INLINE-ARGS */V73,Cnil);
	goto T233;
T235:;
	base[9]= Cnil;
T233:;
	if(((V10))==Cnil){
	goto T239;}
	V74= list(2,VV[77],list(3,VV[64],VV[78],list(2,VV[49],(V10))));
	base[10]= make_cons(/* INLINE-ARGS */V74,Cnil);
	goto T237;
T239:;
	base[10]= Cnil;
T237:;
	if(((V13))==Cnil){
	goto T243;}
	V75= list(3,VV[79],list(2,VV[80],list(2,VV[49],(V13))),VV[81]);
	base[11]= make_cons(/* INLINE-ARGS */V75,Cnil);
	goto T241;
T243:;
	base[11]= Cnil;
T241:;
	vs_top=(vs_base=base+8)+4;
	Lappend();
	vs_top=sup;
	V68= vs_base[0];
	base[7]= make_cons(/* INLINE-ARGS */V67,V68);
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V56= vs_base[0];
	V76= listA(3,VV[61],/* INLINE-ARGS */V55,V56);
	V77= list(2,/* INLINE-ARGS */V76,list(2,VV[46],base[2]));
	base[5]= listA(4,VV[43],VV[44],/* INLINE-ARGS */V50,append(V51,/* INLINE-ARGS */V77));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	local function FIND-DUPLICATES	*/

static L2(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{object V78;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V78=(base[0]);
	vs_top=sup;
	{object V79;
	V79= Cnil;
T247:;
	(void)(CMPcdr((V78)));
T263:;
	base[1]= (VV[36]->s.s_dbind);
	base[2]= (V79);
	base[3]= VV[10];
	base[4]= (VV[85]->s.s_gfdef);
	base[5]= VV[40];
	base[6]= (VV[88]->s.s_gfdef);
	vs_top=(vs_base=base+1)+6;
	(void) (*Lnk89)();
	vs_top=sup;
	{register object x= (VV[34]->s.s_dbind),V80= (VV[38]->s.s_dbind);
	while(V80!=Cnil)
	if(eql(x,V80->c.c_car)){
	goto T280;
	}else V80=V80->c.c_cdr;}
T280:;
T283:;
	(void)(one_plus((VV[34]->s.s_dbind)));
	base[1]= (VV[36]->s.s_dbind);
	base[2]= (VV[41]->s.s_dbind);
	base[3]= VV[40];
	base[4]= (VV[88]->s.s_gfdef);
	vs_top=(vs_base=base+1)+4;
	Lmember();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T284;}
	if(((VV[38]->s.s_dbind))==Cnil){
	goto T301;}{object V81;
	V81= (VV[38]->s.s_dbind);
	V82= make_cons((VV[42]->s.s_dbind),Cnil);
	(void)(nconc(V81,/* INLINE-ARGS */V82));
	goto T284;}
T301:;
	V83= list(3,(VV[36]->s.s_dbind),(VV[34]->s.s_dbind),(VV[42]->s.s_dbind));
	V79= make_cons(/* INLINE-ARGS */V83,(V79));
	(VV[38]->s.s_dbind)= CMPcar((V79));
T284:;
	goto T283;
	goto T263;
	goto T247;
	base[1]= (V79);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function OPTION-TEST	*/

static LC3(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{object V84;
	object V85;
	V84=(base[0]);
	V85=(base[1]);
	vs_top=sup;
	if(!(type_of((V85))==t_cons)){
	goto T309;}
	base[2]= (equal(CMPcar((V85)),(V84))?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
T309:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function OPTION-VALUES	*/

static L5(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{register object V86;
	object V87;
	V86=(base[0]);
	V87=(base[1]);
	vs_top=sup;
TTL:;
T312:;
	base[2]= (V86);
	base[3]= (V87);
	base[4]= VV[40];
	base[5]= (base0[4]->c.c_car);
	vs_top=(vs_base=base+2)+4;
	Lmember();
	vs_top=sup;
	base[2]= (V86);
	base[3]= CMPcdr((VV[82]->s.s_dbind));
	base[4]= VV[40];
	base[5]= (base0[4]->c.c_car);
	vs_top=(vs_base=base+2)+4;
	Lmember();
	vs_top=sup;
	(void)(((VV[82]->s.s_dbind))==Cnil);
	(void)(CMPcdr(CMPcar((VV[82]->s.s_dbind))));
	goto T312;
	}
}
/*	local function OPTION-VALUES-LIST	*/

static L4(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	{register object V88;
	object V89;
	V88=(base[0]);
	V89=(base[1]);
	vs_top=sup;
TTL:;
T335:;
	base[2]= (V88);
	base[3]= (V89);
	base[4]= VV[40];
	base[5]= (base0[4]->c.c_car);
	vs_top=(vs_base=base+2)+4;
	Lmember();
	vs_top=sup;
	base[2]= (V88);
	base[3]= CMPcdr((VV[82]->s.s_dbind));
	base[4]= VV[40];
	base[5]= (base0[4]->c.c_car);
	vs_top=(vs_base=base+2)+4;
	Lmember();
	vs_top=sup;
	(void)(((VV[82]->s.s_dbind))==Cnil);
	(void)(CMPcdr(CMPcar((VV[82]->s.s_dbind))));
	goto T335;
	}
}
static LnkT89(){ call_or_link(VV[89],&Lnk89);} /* FIND */
static LnkT87(){ call_or_link(VV[87],&Lnk87);} /* WARN */
static LnkT86(){ call_or_link(VV[86],&Lnk86);} /* COUNT */
static LnkT3(){ call_or_link(VV[3],&Lnk3);} /* OPTION */
