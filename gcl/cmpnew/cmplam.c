
#include <cmpinclude.h>
#include "cmplam.h"
init_cmplam(){do_init(VV);}
/*	macro definition for CK-SPEC	*/

static L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	if(!endp(V1))invalid_macro_call();}
	base[3]= list(3,VV[0],base[2],VV[1]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for CK-VL	*/

static L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	check_arg(2);
	vs_top=sup;
	{object V2=base[0]->c.c_cdr;
	if(endp(V2))invalid_macro_call();
	base[2]= (V2->c.c_car);
	V2=V2->c.c_cdr;
	if(!endp(V2))invalid_macro_call();}
	base[3]= list(3,VV[0],base[2],VV[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for DOWNWARD-FUNCTION	*/

static L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	check_arg(2);
	vs_top=sup;
	{object V3=base[0]->c.c_cdr;
	if(endp(V3))invalid_macro_call();
	base[2]= (V3->c.c_car);
	V3=V3->c.c_cdr;
	if(!endp(V3))invalid_macro_call();}
	base[3]= list(2,VV[3],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function C1DOWNWARD-FUNCTION	*/

static object LI4(V5)

register object V5;
{	 VMB4 VMS4 VMV4
TTL:;
	{register object V6;
	object V7;
	V8= list(2,VV[3],car((V5)));
	V6= (*(LnkLI79))(/* INLINE-ARGS */V8);
	V7= cadr((V6));
	if(!(type_of((V5))==t_cons)){
	goto T4;}
	if(!(type_of(car((V5)))==t_cons)){
	goto T4;}
	if(!((caar((V5)))==(VV[4]))){
	goto T4;}
	if((cadr(car((V5))))!=Cnil){
	goto T4;}
	{register object V9;
	register object V10;
	V9= structure_ref((V7),VV[5],1);
	V10= car((V9));
T16:;
	if(!(endp((V9)))){
	goto T17;}
	goto T12;
T17:;
	V11= structure_ref((V10),VV[6],1);
	if(!((/* INLINE-ARGS */V11)==(VV[7]))){
	goto T21;}
	if((structure_ref((V10),VV[6],3))==Cnil){
	goto T21;}
	(void)(structure_set((V10),VV[6],1,VV[8]));
T21:;
	V9= cdr((V9));
	V10= car((V9));
	goto T16;}
T12:;
	if(type_of(V6)!=t_cons)FEwrong_type_argument(Scons,V6);
	(V6)->c.c_car = VV[9];
	{object V14 = (V6);
	VMR4(V14)}
T4:;
	{object V15 = (V6);
	VMR4(V15)}}
}
/*	local entry for function WT-MAKE-DCLOSURE	*/

static object LI5(V18,V19)

register object V18;object V19;
{	 VMB5 VMS5 VMV5
TTL:;
	princ_str("\n	(DownClose",VV[10]);
	(void)((*(LnkLI80))((V18)));
	princ_str(".t=t_dclosure,DownClose",VV[10]);
	(void)((*(LnkLI80))((V18)));
	princ_str(".dc_self=LC",VV[10]);
	(void)((*(LnkLI80))((V18)));
	princ_char(44,VV[10]);
	princ_str("DownClose",VV[10]);
	(void)((*(LnkLI80))((V18)));
	princ_str(".dc_env=base0,(object)&DownClose",VV[10]);
	(void)((*(LnkLI80))((V18)));
	princ_char(41,VV[10]);
	{object V20 = Cnil;
	VMR5(V20)}
}
/*	local entry for function WFS-ERROR	*/

static object LI6()

{	 VMB6 VMS6 VMV6
TTL:;
	base[0]= VV[11];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V21 = vs_base[0];
	VMR6(V21)}
}
/*	local entry for function WT-DOWNWARD-CLOSURE-MACRO	*/

static object LI7(V23)

object V23;
{	 VMB7 VMS7 VMV7
TTL:;
	if((symbol_value(VV[12]))==Cnil){
	goto T49;}
	princ_str("\n#define DCnames",VV[13]);
	(void)((*(LnkLI81))((V23)));
	princ_char(32,VV[13]);
	setq(VV[12],(VFUN_NARGS=2,(*(LnkLI82))(VV[14],symbol_value(VV[12]))));
	if((symbol_value(VV[12]))==Cnil){
	goto T58;}
	(void)((*(LnkLI81))(VV[15]));
	{register object V24;
	V24= symbol_value(VV[12]);
T63:;
	if(((V24))!=Cnil){
	goto T64;}
	goto T61;
T64:;
	(void)((*(LnkLI81))(VV[16]));
	(void)((*(LnkLI81))(car((V24))));
	if((cdr((V24)))==Cnil){
	goto T70;}
	(void)((*(LnkLI81))(VV[17]));
T70:;
	V24= cdr((V24));
	goto T63;}
T61:;
	{object V25 = (*(LnkLI81))(VV[18]);
	VMR7(V25)}
T58:;
	{object V26 = Cnil;
	VMR7(V26)}
T49:;
	{object V27 = Cnil;
	VMR7(V27)}
}
/*	local entry for function C2DOWNWARD-FUNCTION	*/

static object LI8(V29)

object V29;
{	 VMB8 VMS8 VMV8
TTL:;
	{register object V30;
	setq(VV[22],number_plus(symbol_value(VV[22]),small_fixnum(1)));
	V30= (VFUN_NARGS=4,(*(LnkLI83))(VV[19],VV[20],VV[21],symbol_value(VV[22])));
	if((symbol_value(VV[25]))!=Cnil){
	goto T82;}
	V31= Cnil;
	goto T80;
T82:;
	V31= make_cons(small_fixnum(0),small_fixnum(0));
T80:;
	V32= list(5,VV[24],V31,symbol_value(VV[26]),(V30),(V29));
	setq(VV[23],make_cons(/* INLINE-ARGS */V32,symbol_value(VV[23])));
	setq(VV[27],make_cons((V30),symbol_value(VV[27])));
	V33= structure_ref((V30),VV[28],3);
	setq(VV[12],make_cons(/* INLINE-ARGS */V33,symbol_value(VV[12])));
	V34= list(3,VV[29],structure_ref((V30),VV[28],3),symbol_value(VV[25]));
	{object V35 = (VFUN_NARGS=1,(*(LnkLI84))(/* INLINE-ARGS */V34));
	VMR8(V35)}}
}
/*	local entry for function C1LAMBDA-EXPR	*/

static object LI9(V36,va_alist)
	object V36;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	bds_check;
	{object V37;
	object V38;
	object V39;
	if(narg <1) too_few_arguments();
	V37= V36;
	narg = narg - 1;
	if (narg <= 0) goto T88;
	else {
	va_start(ap);
	V38= va_arg(ap,object);}
	V39= Ct;
	--narg; goto T89;
T88:;
	V38= Cnil;
	V39= Cnil;
T89:;
	{object V40;
	object V41;
	object V42;
	object V43;
	object V44;
	object V45;
	object V46;
	object V47;
	object V48;
	object V49;
	register object V50;
	register object V51;
	object V52;
	register object V53;
	register object V54;
	register object V55;
	object V56;
	register object V57;
	object V58;
	object V59;
	object V60;
	V40= Cnil;
	V41= Cnil;
	V42= Cnil;
	V43= Cnil;
	V44= Cnil;
	V45= Cnil;
	V46= Cnil;
	V47= Cnil;
	V48= Cnil;
	V49= Cnil;
	V50= Cnil;
	V51= Cnil;
	V52= Cnil;
	V53= Cnil;
	V54= Cnil;
	V55= Cnil;
	V56= Cnil;
	V57= Cnil;
	bds_bind(VV[30],symbol_value(VV[30]));
	V58= (VFUN_NARGS=0,(*(LnkLI85))());
	V59= Cnil;
	V60= symbol_value(VV[31]);
	if(!(endp((V37)))){
	goto T112;}
	V61= make_cons(VV[4],(V37));
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[32],/* INLINE-ARGS */V61)));
T112:;
	base[2]= cdr((V37));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk87)();
	if(vs_base<vs_top){
	V52= vs_base[0];
	vs_base++;
	}else{
	V52= Cnil;}
	if(vs_base<vs_top){
	V53= vs_base[0];
	vs_base++;
	}else{
	V53= Cnil;}
	if(vs_base<vs_top){
	V55= vs_base[0];
	vs_base++;
	}else{
	V55= Cnil;}
	if(vs_base<vs_top){
	V54= vs_base[0];
	vs_base++;
	}else{
	V54= Cnil;}
	if(vs_base<vs_top){
	V56= vs_base[0];
	vs_base++;
	}else{
	V56= Cnil;}
	if(vs_base<vs_top){
	V49= vs_base[0];
	}else{
	V49= Cnil;}
	vs_top=sup;
	if(((V39))==Cnil){
	goto T119;}
	V62= listA(3,VV[33],(V38),(V52));
	V52= make_cons(/* INLINE-ARGS */V62,Cnil);
T119:;
	(void)((*(LnkLI88))((V53)));
	V50= car((V37));
T128:;
	if(((V50))!=Cnil){
	goto T134;}
	goto T126;
T134:;
	if(type_of((V50))==t_cons){
	goto T137;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[34],(V50))));
T137:;
	{object V64;
	V64= car((V50));
	V50= cdr((V50));
	V51= (V64);}
	{object V63= (V51);
	if((V63!= VV[69]))goto T145;
	goto T129;
T145:;
	if((V63!= VV[68]))goto T146;
	goto T130;
T146:;
	if((V63!= VV[71]))goto T147;
	goto T131;
T147:;
	if((V63!= VV[73]))goto T148;
	goto T132;
T148:;}
	{object V65;
	V65= (*(LnkLI89))((V51),(V53),(V54),(V55));
	V57= make_cons((V51),(V57));
	(VV[30]->s.s_dbind)= make_cons((V65),(VV[30]->s.s_dbind));
	V40= make_cons((V65),(V40));}
	goto T128;
T129:;
	if(((V50))!=Cnil){
	goto T156;}
	goto T126;
T156:;
	if(type_of((V50))==t_cons){
	goto T159;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[34],(V50))));
T159:;
	{object V67;
	V67= car((V50));
	V50= cdr((V50));
	V51= (V67);}
	{object V66= (V51);
	if((V66!= VV[68]))goto T167;
	goto T130;
T167:;
	if((V66!= VV[71]))goto T168;
	goto T131;
T168:;
	if((V66!= VV[73]))goto T169;
	goto T132;
T169:;}
	if(type_of((V51))==t_cons){
	goto T172;}
	{object V68;
	V68= (*(LnkLI89))((V51),(V53),(V54),(V55));
	V57= make_cons((V51),(V57));
	V69= structure_ref((V68),VV[6],5);
	V70= (*(LnkLI90))(/* INLINE-ARGS */V69);
	V71= list(3,(V68),/* INLINE-ARGS */V70,Cnil);
	V41= make_cons(/* INLINE-ARGS */V71,(V41));
	(VV[30]->s.s_dbind)= make_cons((V68),(VV[30]->s.s_dbind));
	goto T170;}
T172:;
	if(type_of(cdr((V51)))==t_cons){
	goto T181;}
	if((cdr((V51)))==Cnil){
	goto T183;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[35],(V51))));
T183:;
	{object V72;
	V72= (*(LnkLI89))(car((V51)),(V53),(V54),(V55));
	V57= make_cons(car((V51)),(V57));
	V73= structure_ref((V72),VV[6],5);
	V74= (*(LnkLI90))(/* INLINE-ARGS */V73);
	V75= list(3,(V72),/* INLINE-ARGS */V74,Cnil);
	V41= make_cons(/* INLINE-ARGS */V75,(V41));
	(VV[30]->s.s_dbind)= make_cons((V72),(VV[30]->s.s_dbind));
	goto T170;}
T181:;
	if(type_of(cddr((V51)))==t_cons){
	goto T193;}
	if((cddr((V51)))==Cnil){
	goto T195;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[35],(V51))));
T195:;
	{object V76;
	object V77;
	V76= (*(LnkLI91))(cadr((V51)),(V58));
	V77= (*(LnkLI89))(car((V51)),(V53),(V54),(V55));
	V57= make_cons(car((V51)),(V57));
	V78= structure_ref((V77),VV[6],5);
	V79= (*(LnkLI92))(/* INLINE-ARGS */V78,(V76),cadr((V51)));
	V80= list(3,(V77),/* INLINE-ARGS */V79,Cnil);
	V41= make_cons(/* INLINE-ARGS */V80,(V41));
	(VV[30]->s.s_dbind)= make_cons((V77),(VV[30]->s.s_dbind));
	goto T170;}
T193:;
	if((cdddr((V51)))==Cnil){
	goto T205;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[35],(V51))));
T205:;
	{object V81;
	object V82;
	object V83;
	V81= (*(LnkLI91))(cadr((V51)),(V58));
	V82= (*(LnkLI89))(car((V51)),(V53),(V54),(V55));
	V83= (*(LnkLI89))(caddr((V51)),(V53),(V54),(V55));
	V57= make_cons(car((V51)),(V57));
	V57= make_cons(caddr((V51)),(V57));
	V84= structure_ref((V82),VV[6],5);
	V85= (*(LnkLI92))(/* INLINE-ARGS */V84,(V81),cadr((V51)));
	V86= list(3,(V82),/* INLINE-ARGS */V85,(V83));
	V41= make_cons(/* INLINE-ARGS */V86,(V41));
	(VV[30]->s.s_dbind)= make_cons((V82),(VV[30]->s.s_dbind));
	(VV[30]->s.s_dbind)= make_cons((V83),(VV[30]->s.s_dbind));}
T170:;
	goto T129;
T130:;
	if(type_of((V50))==t_cons){
	goto T220;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[34],(V50))));
T220:;
	V57= make_cons(car((V50)),(V57));
	{object V88;
	V88= car((V50));
	V50= cdr((V50));
	V87= (V88);}
	V42= (*(LnkLI89))(V87,(V53),(V54),(V55));
	(VV[30]->s.s_dbind)= make_cons((V42),(VV[30]->s.s_dbind));
	if(((V50))!=Cnil){
	goto T233;}
	goto T126;
T233:;
	if(type_of((V50))==t_cons){
	goto T236;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[34],(V50))));
T236:;
	{object V90;
	V90= car((V50));
	V50= cdr((V50));
	V51= (V90);}
	{object V89= (V51);
	if((V89!= VV[71]))goto T244;
	goto T131;
T244:;
	if((V89!= VV[73]))goto T245;
	goto T132;
T245:;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[36],(V51))));
T131:;
	V44= Ct;
	if(((V50))!=Cnil){
	goto T248;}
	goto T126;
T248:;
	if(type_of((V50))==t_cons){
	goto T251;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[34],(V50))));
T251:;
	{object V92;
	V92= car((V50));
	V50= cdr((V50));
	V51= (V92);}
	{object V91= (V51);
	if((V91!= VV[73]))goto T259;
	goto T132;
T259:;
	if((V91!= VV[72]))goto T260;
	V46= Ct;
	if(((V50))!=Cnil){
	goto T263;}
	goto T126;
T263:;
	if(type_of((V50))==t_cons){
	goto T266;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[34],(V50))));
T266:;
	{object V94;
	V94= car((V50));
	V50= cdr((V50));
	V51= (V94);}
	{object V93= (V51);
	if((V93!= VV[73]))goto T274;
	goto T132;
T274:;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[37],(V51))));
	goto T254;
T260:;}
T254:;
	if(type_of((V51))==t_cons){
	goto T275;}
	V51= make_cons((V51),Cnil);
T275:;
	if(!(type_of(car((V51)))==t_cons)){
	goto T281;}
	{object V95= caar((V51));
	if(!((type_of(V95)==t_symbol&&(V95)->s.s_hpack==keyword_package))){
	goto T284;}}
	if(!(type_of(cdar((V51)))==t_cons)){
	goto T284;}
	if((cddar((V51)))==Cnil){
	goto T283;}
T284:;
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[35],(V51))));
T283:;
	V51= listA(3,caar((V51)),cadar((V51)),cdr((V51)));
	goto T279;
T281:;
	if(type_of(car((V51)))==t_symbol){
	goto T291;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[35],(V51))));
T291:;
	base[2]= coerce_to_string(car((V51)));
	base[3]= VV[38];
	vs_top=(vs_base=base+2)+2;
	Lintern();
	vs_top=sup;
	V96= vs_base[0];
	V51= listA(3,V96,car((V51)),cdr((V51)));
T279:;
	if(type_of(cddr((V51)))==t_cons){
	goto T300;}
	if((cddr((V51)))==Cnil){
	goto T302;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[35],(V51))));
T302:;
	{object V97;
	V97= (*(LnkLI89))(cadr((V51)),(V53),(V54),(V55));
	V57= make_cons(cadr((V51)),(V57));
	V98= car((V51));
	V99= structure_ref((V97),VV[6],5);
	V100= (*(LnkLI90))(/* INLINE-ARGS */V99);
	V101= list(4,/* INLINE-ARGS */V98,(V97),/* INLINE-ARGS */V100,(VFUN_NARGS=2,(*(LnkLI93))(VV[39],VV[40])));
	V43= make_cons(/* INLINE-ARGS */V101,(V43));
	(VV[30]->s.s_dbind)= make_cons((V97),(VV[30]->s.s_dbind));
	goto T298;}
T300:;
	if(type_of(cdddr((V51)))==t_cons){
	goto T312;}
	if((cdddr((V51)))==Cnil){
	goto T314;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[35],(V51))));
T314:;
	{object V102;
	object V103;
	V102= (*(LnkLI91))(caddr((V51)),(V58));
	V103= (*(LnkLI89))(cadr((V51)),(V53),(V54),(V55));
	V57= make_cons(cadr((V51)),(V57));
	V104= car((V51));
	V105= structure_ref((V103),VV[6],5);
	V106= (*(LnkLI92))(/* INLINE-ARGS */V105,(V102),caddr((V51)));
	V107= list(4,/* INLINE-ARGS */V104,(V103),/* INLINE-ARGS */V106,(VFUN_NARGS=2,(*(LnkLI93))(VV[39],VV[40])));
	V43= make_cons(/* INLINE-ARGS */V107,(V43));
	(VV[30]->s.s_dbind)= make_cons((V103),(VV[30]->s.s_dbind));
	goto T298;}
T312:;
	if((cddddr((V51)))==Cnil){
	goto T324;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[35],(V51))));
T324:;
	{object V108;
	object V109;
	object V110;
	V108= (*(LnkLI91))(caddr((V51)),(V58));
	V109= (*(LnkLI89))(cadr((V51)),(V53),(V54),(V55));
	V110= (*(LnkLI89))(cadddr((V51)),(V53),(V54),(V55));
	V57= make_cons(cadr((V51)),(V57));
	V57= make_cons(cadddr((V51)),(V57));
	V111= car((V51));
	V112= structure_ref((V109),VV[6],5);
	V113= (*(LnkLI92))(/* INLINE-ARGS */V112,(V108),caddr((V51)));
	V114= list(4,/* INLINE-ARGS */V111,(V109),/* INLINE-ARGS */V113,(V110));
	V43= make_cons(/* INLINE-ARGS */V114,(V43));
	(VV[30]->s.s_dbind)= make_cons((V109),(VV[30]->s.s_dbind));
	(VV[30]->s.s_dbind)= make_cons((V110),(VV[30]->s.s_dbind));}
T298:;
	goto T131;
T132:;
	V59= (VFUN_NARGS=0,(*(LnkLI85))());
T133:;
	if(((V50))!=Cnil){
	goto T340;}
	(void)((*(LnkLI94))((V58),(V59)));
	goto T126;
T340:;
	if(type_of((V50))==t_cons){
	goto T344;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[34],(V50))));
T344:;
	{object V115;
	V115= car((V50));
	V50= cdr((V50));
	V51= (V115);}
	if(!(type_of((V51))==t_cons)){
	goto T354;}
	if(type_of(cdr((V51)))==t_cons){
	goto T357;}
	if((cdr((V51)))==Cnil){
	goto T359;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[35],(V51))));
T359:;
	{object V116;
	V116= (*(LnkLI89))(car((V51)),(V53),(V54),(V55));
	V57= make_cons(car((V51)),(V57));
	V117= structure_ref((V116),VV[6],5);
	V118= (*(LnkLI90))(/* INLINE-ARGS */V117);
	V48= make_cons(/* INLINE-ARGS */V118,(V48));
	V47= make_cons((V116),(V47));
	(VV[30]->s.s_dbind)= make_cons((V116),(VV[30]->s.s_dbind));
	goto T352;}
T357:;
	if((cddr((V51)))==Cnil){
	goto T370;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[35],(V51))));
T370:;
	{object V119;
	object V120;
	V119= (*(LnkLI91))(cadr((V51)),(V59));
	V120= (*(LnkLI89))(car((V51)),(V53),(V54),(V55));
	V57= make_cons(car((V51)),(V57));
	V121= structure_ref((V120),VV[6],5);
	V122= (*(LnkLI92))(/* INLINE-ARGS */V121,(V119),cadr((V51)));
	V48= make_cons(/* INLINE-ARGS */V122,(V48));
	V47= make_cons((V120),(V47));
	(VV[30]->s.s_dbind)= make_cons((V120),(VV[30]->s.s_dbind));
	goto T352;}
T354:;
	{object V123;
	V123= (*(LnkLI89))((V51),(V53),(V54),(V55));
	V57= make_cons((V51),(V57));
	V124= structure_ref((V123),VV[6],5);
	V125= (*(LnkLI90))(/* INLINE-ARGS */V124);
	V48= make_cons(/* INLINE-ARGS */V125,(V48));
	V47= make_cons((V123),(V47));
	(VV[30]->s.s_dbind)= make_cons((V123),(VV[30]->s.s_dbind));}
T352:;
	goto T133;
T126:;
	V40= reverse((V40));
	V41= reverse((V41));
	V43= reverse((V43));
	V47= reverse((V47));
	V48= reverse((V48));
	(void)((*(LnkLI95))((V57),(V55),(V54)));
	V52= (*(LnkLI96))((V56),(V52));
	(void)((*(LnkLI94))((V58),cadr((V52))));
	{object V126;
	object V127;
	V126= (V40);
	V127= car((V126));
T409:;
	if(!(endp((V126)))){
	goto T410;}
	goto T405;
T410:;
	(void)((*(LnkLI97))((V127)));
	V126= cdr((V126));
	V127= car((V126));
	goto T409;}
T405:;
	{object V128;
	object V129;
	V128= (V41);
	V129= car((V128));
T424:;
	if(!(endp((V128)))){
	goto T425;}
	goto T420;
T425:;
	(void)((*(LnkLI97))(car((V129))));
	if((caddr((V129)))==Cnil){
	goto T430;}
	(void)((*(LnkLI97))(caddr((V129))));
T430:;
	V128= cdr((V128));
	V129= car((V128));
	goto T424;}
T420:;
	if(((V42))==Cnil){
	goto T438;}
	(void)((*(LnkLI97))((V42)));
T438:;
	{object V130;
	object V131;
	V130= (V43);
	V131= car((V130));
T445:;
	if(!(endp((V130)))){
	goto T446;}
	goto T441;
T446:;
	(void)((*(LnkLI97))(cadr((V131))));
	if((cadddr((V131)))==Cnil){
	goto T451;}
	(void)((*(LnkLI97))(cadddr((V131))));
T451:;
	V130= cdr((V130));
	V131= car((V130));
	goto T445;}
T441:;
	{object V132;
	object V133;
	V132= (V47);
	V133= car((V132));
T463:;
	if(!(endp((V132)))){
	goto T464;}
	goto T459;
T464:;
	(void)((*(LnkLI97))((V133)));
	V132= cdr((V132));
	V133= car((V132));
	goto T463;}
T459:;
	if(((V47))==Cnil){
	goto T474;}
	(void)((*(LnkLI94))((V59),cadr((V52))));
	V52= list(5,VV[41],(V59),(V47),(V48),(V52));
	if(!(eql((V60),symbol_value(VV[31])))){
	goto T480;}
	goto T474;
T480:;
	(void)(structure_set((V59),VV[5],4,Ct));
T474:;
	V52= (*(LnkLI98))((V40),(V52),(V38));
	V45= list(6,(V40),(V41),(V42),(V44),(V43),(V46));
	if(symbol_value(VV[42])==Cnil){
	goto T486;}
	(void)((*(LnkLI99))((V45)));
T486:;
	{object V134 = list(5,VV[4],(V58),(V45),(V49),(V52));
	bds_unwind1;
	VMR9(V134)}}}
	}
/*	local entry for function FIX-DOWN-ARGS	*/

static object LI10(V138,V139,V140)

object V138;object V139;object V140;
{	 VMB10 VMS10 VMV10
TTL:;
	{object V141;
	object V142;
	register object V143;
	register object V144;
	V141= Cnil;
	V142= Cnil;
	V143= Cnil;
	V144= Cnil;
	{object V145;
	object V146;
	V145= get((V140),VV[43],Cnil);
	V146= get((V140),VV[44],Cnil);
	{register object V147;
	register object V148;
	V147= (V138);
	V148= (V145);
T495:;
	if(((V147))!=Cnil){
	goto T496;}
	goto T493;
T496:;
	V144= car((V147));
	if(((V146))!=Cnil){
	goto T504;}
	if((car((V148)))==(Ct)){
	goto T504;}
	{object V149 = (V139);
	VMR10(V149)}
T504:;
	V150= structure_ref((V144),VV[6],1);
	if(!((/* INLINE-ARGS */V150)==(VV[8]))){
	goto T502;}
	V151= structure_ref((V144),VV[6],4);
	if(!((/* INLINE-ARGS */V151)==(VV[45]))){
	goto T502;}
	{register object V152;
	object V153;
	V154= structure_ref((V144),VV[6],0);
	V152= (*(LnkLI89))(/* INLINE-ARGS */V154,Cnil,Cnil,Cnil);
	if((V143)!=Cnil){
	V155= (V143);
	goto T514;}
	V143= (VFUN_NARGS=0,(*(LnkLI85))());
	V155= (V143);
T514:;
	V153= list(3,VV[6],V155,list(2,(V152),Cnil));
	V141= make_cons((V144),(V141));
	{register object V157;
	V157= (V152);
	if(type_of(V147)!=t_cons)FEwrong_type_argument(Scons,V147);
	(V147)->c.c_car = (V157);}
	{register object V158;
	object V159;
	V158= (V143);
	V160= structure_ref((V158),VV[5],1);
	V159= make_cons((V152),/* INLINE-ARGS */V160);
	(void)(structure_set((V158),VV[5],1,(V159)));}
	V142= make_cons((V153),(V142));}
T502:;
	V147= cdr((V147));
	V148= cdr((V148));
	goto T495;}
T493:;
	if(((V141))==Cnil){
	goto T530;}
	{object V161 = list(5,VV[41],(V143),(V141),(V142),(V139));
	VMR10(V161)}
T530:;
	{object V162 = (V139);
	VMR10(V162)}}}
}
/*	local entry for function THE-PARAMETER	*/

static object LI11(V164)

register object V164;
{	 VMB11 VMS11 VMV11
TTL:;
	if(type_of((V164))==t_symbol){
	goto T532;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[46],(V164))));
T532:;
	base[0]= (V164);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T535;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[47],(V164))));
T535:;
	{object V165 = (V164);
	VMR11(V165)}
}
/*	local entry for function C2LAMBDA-EXPR	*/

static object LI12(V167,V166,va_alist)
	object V167,V166;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	bds_check;
	{register object V168;
	object V169;
	object V170;
	object V171;
	if(narg <2) too_few_arguments();
	V168= V167;
	V169= V166;
	narg = narg - 2;
	if (narg <= 0) goto T539;
	else {
	va_start(ap);
	V170= va_arg(ap,object);}
	V171= Ct;
	--narg; goto T540;
T539:;
	V170= Cnil;
	V171= Cnil;
T540:;
	if((symbol_value(VV[49]))==Cnil){
	goto T544;}
	if(((V171))==Cnil){
	goto T544;}
	{register object V172;
	register object V173;
	V172= car((V168));
	V173= car((V172));
T554:;
	if(!(endp((V172)))){
	goto T555;}
	goto T550;
T555:;
	if((structure_ref((V173),VV[6],3))==Cnil){
	goto T559;}
	goto T544;
T559:;
	V172= cdr((V172));
	V173= car((V172));
	goto T554;}
T550:;
	if((cadr((V168)))!=Cnil){
	goto T544;}
	if((caddr((V168)))!=Cnil){
	goto T544;}
	if((cadddr((V168)))!=Cnil){
	goto T544;}
	base[0]= make_cons((V170),car((V168)));
	goto T542;
T544:;
	base[0]= Cnil;
T542:;
	bds_bind(VV[48],base[0]);
	if((caddr((V168)))==Cnil){
	goto T574;}
	V174= structure_ref(caddr((V168)),VV[6],5);
	if(!((/* INLINE-ARGS */V174)==(VV[51]))){
	goto T574;}
	base[1]= Ct;
	goto T572;
T574:;
	base[1]= symbol_value(VV[50]);
T572:;
	bds_bind(VV[50],base[1]);
	if((cadddr((V168)))==Cnil){
	goto T579;}
	{object V175 = (*(LnkLI100))((V168),(V169));
	bds_unwind1;
	bds_unwind1;
	VMR12(V175)}
T579:;
	{object V176 = (*(LnkLI101))((V168),(V169));
	bds_unwind1;
	bds_unwind1;
	VMR12(V176)}}
	}
/*	local entry for function C2LAMBDA-EXPR-WITHOUT-KEY	*/

static object LI13(V179,V180)

object V179;object V180;
{	 VMB13 VMS13 VMV13
	bds_check;
TTL:;
	{object V181;
	object V182;
	object V183;
	register object V184;
	V181= car((V179));
	V182= cadr((V179));
	V183= caddr((V179));
	V184= Cnil;
	bds_bind(VV[52],symbol_value(VV[52]));
	bds_bind(VV[53],symbol_value(VV[53]));
	bds_bind(VV[25],symbol_value(VV[25]));
	bds_bind(VV[26],symbol_value(VV[26]));
	base[7]= Cnil;
	{register object V185;
	object V186;
	V185= (V181);
	V186= car((V185));
T590:;
	if(!(endp((V185)))){
	goto T591;}
	goto T586;
T591:;
	base[9]= (V186);
	vs_top=(vs_base=base+9)+1;
	L14(base);
	vs_top=sup;
	V185= cdr((V185));
	V186= car((V185));
	goto T590;}
T586:;
	{register object V187;
	object V188;
	V187= (V182);
	V188= car((V187));
T606:;
	if(!(endp((V187)))){
	goto T607;}
	goto T602;
T607:;
	base[9]= car((V188));
	vs_top=(vs_base=base+9)+1;
	L14(base);
	vs_top=sup;
	if((caddr((V188)))==Cnil){
	goto T613;}
	base[9]= caddr((V188));
	vs_top=(vs_base=base+9)+1;
	L14(base);
	vs_top=sup;
T613:;
	V187= cdr((V187));
	V188= car((V187));
	goto T606;}
T602:;
	if(((V183))==Cnil){
	goto T585;}
	base[8]= (V183);
	vs_top=(vs_base=base+8)+1;
	L14(base);
	vs_top=sup;
T585:;
	if((symbol_value(VV[55]))!=Cnil){
	goto T626;}
	if((symbol_value(VV[56]))==Cnil){
	goto T625;}
T626:;
	if(((V183))!=Cnil){
	goto T630;}
	if(((V182))==Cnil){
	goto T631;}
T630:;
	if(((V181))==Cnil){
	goto T635;}
	princ_str("\n	if(vs_top-vs_base<",VV[10]);
	V189 = make_fixnum(length((V181)));
	(void)((*(LnkLI80))(V189));
	princ_str(") too_few_arguments();",VV[10]);
T635:;
	if(((V183))!=Cnil){
	goto T625;}
	princ_str("\n	if(vs_top-vs_base>",VV[10]);
	V190 = make_fixnum(length((V181)));
	V191 = make_fixnum(length((V182)));
	V192= number_plus(V190,V191);
	(void)((*(LnkLI80))(/* INLINE-ARGS */V192));
	princ_str(") too_many_arguments();",VV[10]);
	goto T625;
T631:;
	princ_str("\n	check_arg(",VV[10]);
	V193 = make_fixnum(length((V181)));
	(void)((*(LnkLI80))(V193));
	princ_str(");",VV[10]);
T625:;
	{register object V194;
	object V195;
	V194= (V181);
	V195= car((V194));
T653:;
	if(!(endp((V194)))){
	goto T654;}
	goto T649;
T654:;
	V196= (*(LnkLI102))();
	(void)(structure_set((V195),VV[6],2,/* INLINE-ARGS */V196));
	V194= cdr((V194));
	V195= car((V194));
	goto T653;}
T649:;
	{register object V197;
	object V198;
	V197= (V182);
	V198= car((V197));
T668:;
	if(!(endp((V197)))){
	goto T669;}
	goto T664;
T669:;
	V199= car((V198));
	V200= (*(LnkLI102))();
	(void)(structure_set(/* INLINE-ARGS */V199,VV[6],2,/* INLINE-ARGS */V200));
	V197= cdr((V197));
	V198= car((V197));
	goto T668;}
T664:;
	if(((V183))==Cnil){
	goto T679;}
	V201= (*(LnkLI102))();
	(void)(structure_set((V183),VV[6],2,/* INLINE-ARGS */V201));
T679:;
	{register object V202;
	object V203;
	V202= (V182);
	V203= car((V202));
T686:;
	if(!(endp((V202)))){
	goto T687;}
	goto T682;
T687:;
	if((caddr((V203)))==Cnil){
	goto T691;}
	V204= caddr((V203));
	V205= (*(LnkLI102))();
	(void)(structure_set(/* INLINE-ARGS */V204,VV[6],2,/* INLINE-ARGS */V205));
T691:;
	V202= cdr((V202));
	V203= car((V202));
	goto T686;}
T682:;
	{register object V206;
	object V207;
	V206= (V181);
	V207= car((V206));
T703:;
	if(!(endp((V206)))){
	goto T704;}
	goto T699;
T704:;
	(void)((*(LnkLI103))((V207)));
	V206= cdr((V206));
	V207= car((V206));
	goto T703;}
T699:;
	if(((V182))!=Cnil){
	goto T716;}
	if(((V183))==Cnil){
	goto T714;}
T716:;
	if(((V181))==Cnil){
	goto T714;}
	princ_str("\n	vs_base=vs_base+",VV[10]);
	V208 = make_fixnum(length((V181)));
	(void)((*(LnkLI80))(V208));
	princ_char(59,VV[10]);
T714:;
	if(((V182))==Cnil){
	goto T726;}
	bds_bind(VV[25],(VV[25]->s.s_dbind));
	bds_bind(VV[52],(VV[52]->s.s_dbind));
	bds_bind(VV[26],(VV[26]->s.s_dbind));
	if(((V183))==Cnil){
	goto T729;}
	princ_str("\n	vs_top[0]=Cnil;",VV[10]);
	princ_str("\n	{object *p=vs_top, *q=vs_base+",VV[10]);
	V209 = make_fixnum(length((V182)));
	(void)((*(LnkLI80))(V209));
	princ_char(59,VV[10]);
	princ_str("\n	 for(;p>q;p--)p[-1]=MMcons(p[-1],p[0]);}",VV[10]);
T729:;
	{register object V210;
	V210= (V182);
T741:;
	if(!(endp((V210)))){
	goto T742;}
	goto T739;
T742:;
	setq(VV[57],number_plus(symbol_value(VV[57]),small_fixnum(1)));
	V211= make_cons(symbol_value(VV[57]),Cnil);
	V184= make_cons(/* INLINE-ARGS */V211,(V184));
	princ_str("\n	if(vs_base>=vs_top){",VV[10]);
	(void)((*(LnkLI104))());
	if(type_of(car((V184)))!=t_cons)FEwrong_type_argument(Scons,car((V184)));
	(car((V184)))->c.c_cdr = Ct;
	(void)(car((V184)));
	princ_str("goto T",VV[10]);
	(void)((*(LnkLI80))(car(car((V184)))));
	princ_char(59,VV[10]);
	princ_char(125,VV[10]);
	(void)((*(LnkLI103))(caar((V210))));
	if((caddar((V210)))==Cnil){
	goto T760;}
	(void)((*(LnkLI105))(caddar((V210)),Ct));
T760:;
	if((cdr((V210)))==Cnil){
	goto T763;}
	princ_str("\n	vs_base++;",VV[10]);
T763:;
	V210= cdr((V210));
	goto T741;}
T739:;
	if(((V183))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T728;}
	V212= (*(LnkLI103))((V183));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
T728:;
	princ_str("\n	",VV[10]);
	(void)((*(LnkLI104))());
	{object V213;
	setq(VV[57],number_plus(symbol_value(VV[57]),small_fixnum(1)));
	V213= make_cons(symbol_value(VV[57]),Cnil);
	princ_str("\n	",VV[10]);
	if(type_of((V213))!=t_cons)FEwrong_type_argument(Scons,(V213));
	((V213))->c.c_cdr = Ct;
	princ_str("goto T",VV[10]);
	(void)((*(LnkLI80))(car((V213))));
	princ_char(59,VV[10]);
	V184= reverse((V184));
	{register object V214;
	register object V215;
	V214= (V182);
	V215= car((V214));
T788:;
	if(!(endp((V214)))){
	goto T789;}
	goto T784;
T789:;
	if((cdr(car((V184))))==Cnil){
	goto T793;}
	princ_str("\nT",VV[10]);
	(void)((*(LnkLI80))(car(car((V184)))));
	princ_str(":;",VV[10]);
T793:;
	{object V216;
	V216= car((V184));
	V184= cdr((V184));}
	(void)((*(LnkLI106))(car((V215)),cadr((V215))));
	if((caddr((V215)))==Cnil){
	goto T804;}
	(void)((*(LnkLI105))(caddr((V215)),Cnil));
T804:;
	V214= cdr((V214));
	V215= car((V214));
	goto T788;}
T784:;
	if(((V183))==Cnil){
	goto T812;}
	(void)((*(LnkLI105))((V183),Cnil));
T812:;
	if((cdr((V213)))==Cnil){
	goto T724;}
	princ_str("\nT",VV[10]);
	(void)((*(LnkLI80))(car((V213))));
	princ_str(":;",VV[10]);
	goto T724;}
T726:;
	if(((V183))==Cnil){
	goto T821;}
	princ_str("\n	vs_top[0]=Cnil;",VV[10]);
	princ_str("\n	{object *p=vs_top;",VV[10]);
	princ_str("\n	 for(;p>vs_base;p--)p[-1]=",VV[10]);
	if((symbol_value(VV[50]))==Cnil){
	goto T832;}
	V217= VV[58];
	goto T830;
T832:;
	V217= VV[59];
T830:;
	(void)((*(LnkLI80))(V217));
	princ_str("(p[-1],p[0]);}",VV[10]);
	(void)((*(LnkLI103))((V183)));
	princ_str("\n	",VV[10]);
	(void)((*(LnkLI104))());
	goto T724;
T821:;
	princ_str("\n	",VV[10]);
	(void)((*(LnkLI104))());
T724:;
	if((symbol_value(VV[48]))==Cnil){
	goto T838;}
	(VV[52]->s.s_dbind)= make_cons(VV[60],(VV[52]->s.s_dbind));
	princ_str("\nTTL:;",VV[10]);
T838:;
	base[8]= (V180);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk107)();
	vs_top=sup;
	if((base[7])==Cnil){
	goto T847;}
	princ_str("\n	}",VV[10]);
	{object V218 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR13(V218)}
T847:;
	{object V219 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR13(V219)}}
}
/*	local entry for function C2LAMBDA-EXPR-WITH-KEY	*/

static object LI15(V222,V223)

object V222;object V223;
{	 VMB14 VMS14 VMV14
	bds_check;
TTL:;
	{object V224;
	object V225;
	object V226;
	object V227;
	object V228;
	register object V229;
	V224= car((V222));
	V225= cadr((V222));
	V226= caddr((V222));
	V227= car(cddddr((V222)));
	V228= cadr(cddddr((V222)));
	V229= Cnil;
	bds_bind(VV[52],symbol_value(VV[52]));
	bds_bind(VV[53],symbol_value(VV[53]));
	bds_bind(VV[25],symbol_value(VV[25]));
	bds_bind(VV[26],symbol_value(VV[26]));
	base[9]= Cnil;
	{register object V230;
	object V231;
	V230= (V224);
	V231= car((V230));
T861:;
	if(!(endp((V230)))){
	goto T862;}
	goto T857;
T862:;
	base[11]= (V231);
	vs_top=(vs_base=base+11)+1;
	L16(base);
	vs_top=sup;
	V230= cdr((V230));
	V231= car((V230));
	goto T861;}
T857:;
	{register object V232;
	object V233;
	V232= (V225);
	V233= car((V232));
T877:;
	if(!(endp((V232)))){
	goto T878;}
	goto T873;
T878:;
	base[11]= car((V233));
	vs_top=(vs_base=base+11)+1;
	L16(base);
	vs_top=sup;
	if((caddr((V233)))==Cnil){
	goto T884;}
	base[11]= caddr((V233));
	vs_top=(vs_base=base+11)+1;
	L16(base);
	vs_top=sup;
T884:;
	V232= cdr((V232));
	V233= car((V232));
	goto T877;}
T873:;
	if(((V226))==Cnil){
	goto T893;}
	base[10]= (V226);
	vs_top=(vs_base=base+10)+1;
	L16(base);
	vs_top=sup;
T893:;
	{register object V234;
	object V235;
	V234= (V227);
	V235= car((V234));
T900:;
	if(!(endp((V234)))){
	goto T901;}
	goto T856;
T901:;
	base[11]= cadr((V235));
	vs_top=(vs_base=base+11)+1;
	L16(base);
	vs_top=sup;
	if((cadddr((V235)))==Cnil){
	goto T907;}
	base[11]= cadddr((V235));
	vs_top=(vs_base=base+11)+1;
	L16(base);
	vs_top=sup;
T907:;
	V234= cdr((V234));
	V235= car((V234));
	goto T900;}
T856:;
	if((symbol_value(VV[55]))!=Cnil){
	goto T918;}
	if((symbol_value(VV[56]))==Cnil){
	goto T916;}
T918:;
	if(((V224))==Cnil){
	goto T916;}
	if(((V224))==Cnil){
	goto T916;}
	princ_str("\n	if(vs_top-vs_base<",VV[10]);
	V236 = make_fixnum(length((V224)));
	(void)((*(LnkLI80))(V236));
	princ_str(") too_few_arguments();",VV[10]);
T916:;
	{register object V237;
	object V238;
	V237= (V224);
	V238= car((V237));
T932:;
	if(!(endp((V237)))){
	goto T933;}
	goto T928;
T933:;
	V239= (*(LnkLI102))();
	(void)(structure_set((V238),VV[6],2,/* INLINE-ARGS */V239));
	V237= cdr((V237));
	V238= car((V237));
	goto T932;}
T928:;
	{register object V240;
	object V241;
	V240= (V225);
	V241= car((V240));
T947:;
	if(!(endp((V240)))){
	goto T948;}
	goto T943;
T948:;
	V242= car((V241));
	V243= (*(LnkLI102))();
	(void)(structure_set(/* INLINE-ARGS */V242,VV[6],2,/* INLINE-ARGS */V243));
	V240= cdr((V240));
	V241= car((V240));
	goto T947;}
T943:;
	if(((V226))==Cnil){
	goto T958;}
	V244= (*(LnkLI102))();
	(void)(structure_set((V226),VV[6],2,/* INLINE-ARGS */V244));
T958:;
	{register object V245;
	object V246;
	V245= (V227);
	V246= car((V245));
T965:;
	if(!(endp((V245)))){
	goto T966;}
	goto T961;
T966:;
	V247= cadr((V246));
	V248= (*(LnkLI102))();
	(void)(structure_set(/* INLINE-ARGS */V247,VV[6],2,/* INLINE-ARGS */V248));
	V245= cdr((V245));
	V246= car((V245));
	goto T965;}
T961:;
	{register object V249;
	object V250;
	V249= (V227);
	V250= car((V249));
T980:;
	if(!(endp((V249)))){
	goto T981;}
	goto T976;
T981:;
	V251= cadddr((V250));
	V252= (*(LnkLI102))();
	(void)(structure_set(/* INLINE-ARGS */V251,VV[6],2,/* INLINE-ARGS */V252));
	V249= cdr((V249));
	V250= car((V249));
	goto T980;}
T976:;
	{register object V253;
	object V254;
	V253= (V225);
	V254= car((V253));
T995:;
	if(!(endp((V253)))){
	goto T996;}
	goto T991;
T996:;
	if((caddr((V254)))==Cnil){
	goto T1000;}
	V255= caddr((V254));
	V256= (*(LnkLI102))();
	(void)(structure_set(/* INLINE-ARGS */V255,VV[6],2,/* INLINE-ARGS */V256));
T1000:;
	V253= cdr((V253));
	V254= car((V253));
	goto T995;}
T991:;
	princ_str("\n	parse_key(vs_base",VV[10]);
	if(((V224))!=Cnil){
	goto T1011;}
	if(((V225))==Cnil){
	goto T1010;}
T1011:;
	princ_char(43,VV[10]);
	V257 = make_fixnum(length((V224)));
	V258 = make_fixnum(length((V225)));
	V259= number_plus(V257,V258);
	(void)((*(LnkLI80))(/* INLINE-ARGS */V259));
T1010:;
	if(((V226))==Cnil){
	goto T1019;}
	princ_str(",TRUE,",VV[10]);
	goto T1017;
T1019:;
	princ_str(",FALSE,",VV[10]);
T1017:;
	if(((V228))==Cnil){
	goto T1025;}
	princ_str("TRUE,",VV[10]);
	goto T1023;
T1025:;
	princ_str("FALSE,",VV[10]);
T1023:;
	V260 = make_fixnum(length((V227)));
	(void)((*(LnkLI80))(V260));
	{register object V261;
	object V262;
	V261= (V227);
	V262= car((V261));
T1035:;
	if(!(endp((V261)))){
	goto T1036;}
	goto T1031;
T1036:;
	princ_str(",VV[",VV[10]);
	V263= (*(LnkLI108))(car((V262)));
	(void)((*(LnkLI80))(/* INLINE-ARGS */V263));
	princ_char(93,VV[10]);
	V261= cdr((V261));
	V262= car((V261));
	goto T1035;}
T1031:;
	princ_str(");",VV[10]);
	{register object V264;
	object V265;
	V264= (V224);
	V265= car((V264));
T1055:;
	if(!(endp((V264)))){
	goto T1056;}
	goto T1051;
T1056:;
	(void)((*(LnkLI103))((V265)));
	V264= cdr((V264));
	V265= car((V264));
	goto T1055;}
T1051:;
	if(((V225))==Cnil){
	goto T1066;}
	if(((V224))==Cnil){
	goto T1069;}
	princ_str("\n	vs_base += ",VV[10]);
	V266 = make_fixnum(length((V224)));
	(void)((*(LnkLI80))(V266));
	princ_char(59,VV[10]);
T1069:;
	bds_bind(VV[25],(VV[25]->s.s_dbind));
	bds_bind(VV[52],(VV[52]->s.s_dbind));
	bds_bind(VV[26],(VV[26]->s.s_dbind));
	{register object V267;
	V267= (V225);
T1077:;
	if(!(endp((V267)))){
	goto T1078;}
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T1075;
T1078:;
	setq(VV[57],number_plus(symbol_value(VV[57]),small_fixnum(1)));
	V268= make_cons(symbol_value(VV[57]),Cnil);
	V229= make_cons(/* INLINE-ARGS */V268,(V229));
	princ_str("\n	if(vs_base>=vs_top){vs_top=sup;",VV[10]);
	if(type_of(car((V229)))!=t_cons)FEwrong_type_argument(Scons,car((V229)));
	(car((V229)))->c.c_cdr = Ct;
	(void)(car((V229)));
	princ_str("goto T",VV[10]);
	(void)((*(LnkLI80))(car(car((V229)))));
	princ_char(59,VV[10]);
	princ_char(125,VV[10]);
	(void)((*(LnkLI103))(caar((V267))));
	if((caddar((V267)))==Cnil){
	goto T1095;}
	(void)((*(LnkLI105))(caddar((V267)),Ct));
T1095:;
	if((cdr((V267)))==Cnil){
	goto T1098;}
	princ_str("\n	vs_base++;",VV[10]);
T1098:;
	V267= cdr((V267));
	goto T1077;}
T1075:;
	V229= reverse((V229));
T1066:;
	princ_str("\n	vs_top=sup;",VV[10]);
	if(((V225))==Cnil){
	goto T1108;}
	{object V269;
	setq(VV[57],number_plus(symbol_value(VV[57]),small_fixnum(1)));
	V269= make_cons(symbol_value(VV[57]),Cnil);
	if(type_of((V269))!=t_cons)FEwrong_type_argument(Scons,(V269));
	((V269))->c.c_cdr = Ct;
	princ_str("goto T",VV[10]);
	(void)((*(LnkLI80))(car((V269))));
	princ_char(59,VV[10]);
	{register object V270;
	register object V271;
	V270= (V225);
	V271= car((V270));
T1122:;
	if(!(endp((V270)))){
	goto T1123;}
	goto T1118;
T1123:;
	if((cdr(car((V229))))==Cnil){
	goto T1127;}
	princ_str("\nT",VV[10]);
	(void)((*(LnkLI80))(car(car((V229)))));
	princ_str(":;",VV[10]);
T1127:;
	{object V272;
	V272= car((V229));
	V229= cdr((V229));}
	(void)((*(LnkLI106))(car((V271)),cadr((V271))));
	if((caddr((V271)))==Cnil){
	goto T1138;}
	(void)((*(LnkLI105))(caddr((V271)),Cnil));
T1138:;
	V270= cdr((V270));
	V271= car((V270));
	goto T1122;}
T1118:;
	if((cdr((V269)))==Cnil){
	goto T1108;}
	princ_str("\nT",VV[10]);
	(void)((*(LnkLI80))(car((V269))));
	princ_str(":;",VV[10]);}
T1108:;
	if(((V226))==Cnil){
	goto T1151;}
	(void)((*(LnkLI103))((V226)));
T1151:;
	{register object V273;
	register object V274;
	V273= (V227);
	V274= car((V273));
T1158:;
	if(!(endp((V273)))){
	goto T1159;}
	goto T1154;
T1159:;
	if(!((caaddr((V274)))==(VV[61]))){
	goto T1165;}
	if((caddr(caddr((V274))))!=Cnil){
	goto T1165;}
	(void)((*(LnkLI103))(cadr((V274))));
	goto T1163;
T1165:;
	princ_str("\n	if(",VV[10]);
	V275= structure_ref(cadddr((V274)),VV[6],2);
	(void)((*(LnkLI109))(/* INLINE-ARGS */V275));
	princ_str("==Cnil){",VV[10]);
	bds_bind(VV[25],(VV[25]->s.s_dbind));
	bds_bind(VV[52],(VV[52]->s.s_dbind));
	bds_bind(VV[26],(VV[26]->s.s_dbind));
	V276= (*(LnkLI106))(cadr((V274)),caddr((V274)));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	princ_str("\n	}else{",VV[10]);
	(void)((*(LnkLI103))(cadr((V274))));
	princ_char(125,VV[10]);
T1163:;
	V277= structure_ref(cadddr((V274)),VV[6],1);
	if((/* INLINE-ARGS */V277)==(VV[40])){
	goto T1179;}
	(void)((*(LnkLI103))(cadddr((V274))));
T1179:;
	V273= cdr((V273));
	V274= car((V273));
	goto T1158;}
T1154:;
	base[10]= (V223);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk107)();
	vs_top=sup;
	if((base[9])==Cnil){
	goto T1190;}
	princ_str("\n	}",VV[10]);
	{object V278 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR14(V278)}
T1190:;
	{object V279 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR14(V279)}}
}
/*	local entry for function NEED-TO-SET-VS-POINTERS	*/

static object LI17(V281)

object V281;
{	 VMB15 VMS15 VMV15
TTL:;
	if(symbol_value(VV[55])!=Cnil){
	{object V282 = symbol_value(VV[55]);
	VMR15(V282)}}
	if(symbol_value(VV[56])!=Cnil){
	{object V283 = symbol_value(VV[56]);
	VMR15(V283)}}{object V284;
	V284= cadr((V281));
	if(V284==Cnil)goto T1193;
	{object V285 = V284;
	VMR15(V285)}
T1193:;}{object V286;
	V286= caddr((V281));
	if(V286==Cnil)goto T1195;
	{object V287 = V286;
	VMR15(V287)}
T1195:;}
	{object V288 = cadddr((V281));
	VMR15(V288)}
}
/*	local entry for function C1DM	*/

static object LI18(V292,V293,V294)

object V292;register object V293;register object V294;
{	 VMB16 VMS16 VMV16
	bds_check;
TTL:;
	{object V295;
	object V296;
	object V297;
	object V298;
	register object V299;
	register object V300;
	register object V301;
	object V302;
	object V303;
	bds_bind(VV[53],symbol_value(VV[53]));
	V295= Cnil;
	V296= Cnil;
	V297= symbol_value(VV[31]);
	bds_bind(VV[62],Cnil);
	bds_bind(VV[63],(VFUN_NARGS=0,(*(LnkLI85))()));
	bds_bind(VV[64],Cnil);
	V298= Cnil;
	V299= Cnil;
	V300= Cnil;
	V301= Cnil;
	V302= Cnil;
	V303= Cnil;
	base[4]= (V294);
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk87)();
	if(vs_base<vs_top){
	V294= vs_base[0];
	vs_base++;
	}else{
	V294= Cnil;}
	if(vs_base<vs_top){
	V299= vs_base[0];
	vs_base++;
	}else{
	V299= Cnil;}
	if(vs_base<vs_top){
	V301= vs_base[0];
	vs_base++;
	}else{
	V301= Cnil;}
	if(vs_base<vs_top){
	V300= vs_base[0];
	vs_base++;
	}else{
	V300= Cnil;}
	if(vs_base<vs_top){
	V302= vs_base[0];
	vs_base++;
	}else{
	V302= Cnil;}
	if(vs_base<vs_top){
	V298= vs_base[0];
	}else{
	V298= Cnil;}
	vs_top=sup;
	V304= listA(3,VV[33],(V292),(V294));
	V294= make_cons(/* INLINE-ARGS */V304,Cnil);
	(void)((*(LnkLI88))((V299)));
	if(!(type_of((V293))==t_cons||((V293))==Cnil)){
	goto T1214;}
	if(!((car((V293)))==(VV[65]))){
	goto T1214;}
	(VV[62]->s.s_dbind)= make_cons(cadr((V293)),(VV[62]->s.s_dbind));
	V295= (*(LnkLI89))(cadr((V293)),(V299),(V300),(V301));
	(VV[64]->s.s_dbind)= make_cons((V295),(VV[64]->s.s_dbind));
	setq(VV[30],make_cons((V295),symbol_value(VV[30])));
	V293= cddr((V293));
T1214:;
	{register object V305;
	if(type_of((V293))==t_cons||((V293))==Cnil){
	goto T1230;}
	V305= Cnil;
	goto T1229;
T1230:;
	{register object V306;
	V306= (V293);
T1233:;
	if(type_of((V306))==t_cons){
	goto T1234;}
	V305= Cnil;
	goto T1229;
T1234:;
	if(!((VV[66])==(car((V306))))){
	goto T1238;}
	V305= (V306);
	goto T1229;
T1238:;
	V306= cdr((V306));
	goto T1233;}
T1229:;
	if(((V305))==Cnil){
	goto T1228;}
	(VV[62]->s.s_dbind)= make_cons(cadr((V305)),(VV[62]->s.s_dbind));
	V296= (*(LnkLI89))(cadr((V305)),(V299),(V300),(V301));
	(VV[64]->s.s_dbind)= make_cons((V296),(VV[64]->s.s_dbind));
	setq(VV[30],make_cons((V296),symbol_value(VV[30])));
	base[4]= (V293);
	base[5]= (V305);
	vs_top=(vs_base=base+4)+2;
	Lldiff();
	vs_top=sup;
	V307= vs_base[0];
	V293= append(V307,cddr((V305)));}
T1228:;
	base[4]= (V293);
	base[5]= (V299);
	base[6]= (V300);
	base[7]= (V301);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk110)();
	if(vs_base<vs_top){
	V293= vs_base[0];
	vs_base++;
	}else{
	V293= Cnil;}
	if(vs_base<vs_top){
	V303= vs_base[0];
	}else{
	V303= Cnil;}
	vs_top=sup;
	(void)((*(LnkLI95))((VV[62]->s.s_dbind),(V301),(V300)));
	V294= (*(LnkLI96))((V302),(V294));{object V308;
	V308= (VV[63]->s.s_dbind);
	(void)((*(LnkLI94))(V308,cadr((V294))));}
	{object V309;
	V309= (eql((V297),symbol_value(VV[31]))?Ct:Cnil);
	if(((V309))==Cnil){
	goto T1271;}
	goto T1268;
T1271:;
	(void)(structure_set((VV[63]->s.s_dbind),VV[5],4,Ct));
	(void)(sputprop((V292),VV[67],Ct));}
T1268:;
	{register object V310;
	register object V311;
	V310= (VV[64]->s.s_dbind);
	V311= car((V310));
T1278:;
	if(!(endp((V310)))){
	goto T1279;}
	goto T1274;
T1279:;
	(void)((*(LnkLI97))((V311)));
	V310= cdr((V310));
	V311= car((V310));
	goto T1278;}
T1274:;
	{object V312 = list(7,(V298),(V303),(V295),(V296),(V293),(V294),(VV[63]->s.s_dbind));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR16(V312)}}
}
/*	function definition for C1DM-VL	*/

static L19()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{register object V313;
	register object V314;
	register object V315;
	register object V316;
	check_arg(4);
	V313=(base[0]);
	V314=(base[1]);
	V315=(base[2]);
	V316=(base[3]);
	vs_top=sup;
TTL:;
	{register object V317;
	object V318;
	object V319;
	object V320;
	object V321;
	object V322;
	object V323;
	object V324;
	object V325;
	object V326;
	object V327;
	object V328;
	object V329;
	object V330;
	V317= Cnil;
	V318= Cnil;
	V319= Cnil;
	V320= Cnil;
	V321= Cnil;
	V322= Cnil;
	V323= Cnil;
	V324= Cnil;
	V325= Cnil;
	V326= Cnil;
	V327= Cnil;
	V328= Cnil;
	V329= small_fixnum(0);
	V330= Cnil;
T1290:;
	if(type_of((V313))==t_cons){
	goto T1291;}
	if(((V313))==Cnil){
	goto T1294;}
	if(((V318))==Cnil){
	goto T1297;}
	base[4]= VV[68];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
T1297:;
	base[4]= (V313);
	base[5]= (V314);
	base[6]= (V315);
	base[7]= (V316);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk112)();
	vs_top=sup;
	V324= vs_base[0];
T1294:;
	V331= reverse((V322));
	V332= reverse((V323));
	V333= reverse((V326));
	base[4]= list(7,/* INLINE-ARGS */V331,/* INLINE-ARGS */V332,(V324),(V325),/* INLINE-ARGS */V333,(V328),reverse((V327)));
	base[5]= (V330);
	vs_top=(vs_base=base+4)+2;
	return;
T1291:;
	{register object V334;
	V334= car((V313));
	if(!(((V334))==(VV[69]))){
	goto T1312;}
	if(((V317))==Cnil){
	goto T1314;}
	base[4]= VV[69];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
T1314:;
	V317= Ct;
	{object V335;
	V335= car((V313));
	V313= cdr((V313));
	goto T1309;}
T1312:;
	if(((V334))==(VV[68])){
	goto T1323;}
	if(!(((V334))==(VV[70]))){
	goto T1324;}
T1323:;
	if(((V318))==Cnil){
	goto T1328;}
	base[4]= (V334);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
T1328:;
	base[4]= cadr((V313));
	base[5]= (V314);
	base[6]= (V315);
	base[7]= (V316);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk112)();
	vs_top=sup;
	V324= vs_base[0];
	V318= Ct;
	V317= Ct;
	V313= cddr((V313));
	if(!(((V334))==(VV[70]))){
	goto T1309;}
	V330= (V329);
	goto T1309;
T1324:;
	if(!(((V334))==(VV[71]))){
	goto T1348;}
	if(((V319))==Cnil){
	goto T1350;}
	base[4]= VV[71];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
T1350:;
	V319= Ct;
	V318= Ct;
	V317= Ct;
	V325= Ct;
	{object V336;
	V336= car((V313));
	V313= cdr((V313));
	goto T1309;}
T1348:;
	if(!(((V334))==(VV[72]))){
	goto T1366;}
	if(((V319))==Cnil){
	goto T1369;}
	if(((V320))==Cnil){
	goto T1368;}
T1369:;
	base[4]= VV[72];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
T1368:;
	V320= Ct;
	V328= Ct;
	{object V337;
	V337= car((V313));
	V313= cdr((V313));
	goto T1309;}
T1366:;
	if(!(((V334))==(VV[73]))){
	goto T1382;}
	if(((V321))==Cnil){
	goto T1384;}
	base[4]= VV[73];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
T1384:;
	V321= Ct;
	V320= Ct;
	V319= Ct;
	V318= Ct;
	V317= Ct;
	{object V338;
	V338= car((V313));
	V313= cdr((V313));
	goto T1309;}
T1382:;
	if(((V321))==Cnil){
	goto T1402;}
	{object V339;
	object V340;
	V339= Cnil;
	V340= Cnil;
	if(!(type_of((V334))==t_symbol)){
	goto T1407;}
	V339= (V334);
	V340= (*(LnkLI113))();
	goto T1405;
T1407:;
	V339= car((V334));
	if(!(endp(cdr((V334))))){
	goto T1415;}
	V340= (*(LnkLI113))();
	goto T1405;
T1415:;
	V340= (*(LnkLI91))(cadr((V334)),symbol_value(VV[63]));
T1405:;
	base[4]= (V339);
	base[5]= (V314);
	base[6]= (V315);
	base[7]= (V316);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk112)();
	vs_top=sup;
	V341= vs_base[0];
	V342= list(2,V341,(V340));
	V327= make_cons(/* INLINE-ARGS */V342,(V327));}
	{object V343;
	V343= car((V313));
	V313= cdr((V313));
	goto T1309;}
T1402:;
	if(((V319))==Cnil){
	goto T1429;}
	{object V344;
	object V345;
	object V346;
	object V347;
	V344= Cnil;
	V345= Cnil;
	V346= Cnil;
	V347= Cnil;
	if(!(type_of((V334))==t_symbol)){
	goto T1434;}
	V344= (V334);
	base[4]= coerce_to_string((V334));
	base[5]= VV[38];
	vs_top=(vs_base=base+4)+2;
	Lintern();
	vs_top=sup;
	V345= vs_base[0];
	V346= (*(LnkLI113))();
	goto T1432;
T1434:;
	if(!(type_of(car((V334)))==t_symbol)){
	goto T1445;}
	V344= car((V334));
	base[4]= coerce_to_string(car((V334)));
	base[5]= VV[38];
	vs_top=(vs_base=base+4)+2;
	Lintern();
	vs_top=sup;
	V345= vs_base[0];
	goto T1443;
T1445:;
	V344= cadar((V334));
	V345= caar((V334));
T1443:;
	if(!(endp(cdr((V334))))){
	goto T1456;}
	V346= (*(LnkLI113))();
	goto T1432;
T1456:;
	V346= (*(LnkLI91))(cadr((V334)),symbol_value(VV[63]));
	if(endp(cddr((V334)))){
	goto T1432;}
	V347= caddr((V334));
T1432:;
	base[4]= (V344);
	base[5]= (V314);
	base[6]= (V315);
	base[7]= (V316);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk112)();
	vs_top=sup;
	V348= vs_base[0];
	if(((V347))==Cnil){
	goto T1472;}
	base[4]= (V347);
	base[5]= (V314);
	base[6]= (V315);
	base[7]= (V316);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk112)();
	vs_top=sup;
	V349= vs_base[0];
	goto T1470;
T1472:;
	V349= Cnil;
T1470:;
	V350= list(4,(V345),V348,(V346),V349);
	V326= make_cons(/* INLINE-ARGS */V350,(V326));}
	{object V351;
	V351= car((V313));
	V313= cdr((V313));
	goto T1309;}
T1429:;
	if(((V317))==Cnil){
	goto T1482;}
	{object V352;
	object V353;
	object V354;
	V352= Cnil;
	V353= Cnil;
	V354= Cnil;
	if(!(type_of((V334))==t_symbol)){
	goto T1487;}
	V352= (V334);
	V353= (*(LnkLI113))();
	goto T1485;
T1487:;
	V352= car((V334));
	if(!(endp(cdr((V334))))){
	goto T1495;}
	V353= (*(LnkLI113))();
	goto T1485;
T1495:;
	V353= (*(LnkLI91))(cadr((V334)),symbol_value(VV[63]));
	if(endp(cddr((V334)))){
	goto T1485;}
	V354= caddr((V334));
T1485:;
	base[4]= (V352);
	base[5]= (V314);
	base[6]= (V315);
	base[7]= (V316);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk112)();
	vs_top=sup;
	V355= vs_base[0];
	if(((V354))==Cnil){
	goto T1511;}
	base[4]= (V354);
	base[5]= (V314);
	base[6]= (V315);
	base[7]= (V316);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk112)();
	vs_top=sup;
	V356= vs_base[0];
	goto T1509;
T1511:;
	V356= Cnil;
T1509:;
	V357= list(3,V355,(V353),V356);
	V323= make_cons(/* INLINE-ARGS */V357,(V323));}
	{object V358;
	V358= car((V313));
	V313= cdr((V313));}
	V329= number_plus((V329),small_fixnum(1));
	goto T1309;
T1482:;
	base[4]= (V334);
	base[5]= (V314);
	base[6]= (V315);
	base[7]= (V316);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk112)();
	vs_top=sup;
	V359= vs_base[0];
	V322= make_cons(V359,(V322));
	{object V360;
	V360= car((V313));
	V313= cdr((V313));}
	V329= number_plus((V329),small_fixnum(1));}
T1309:;
	goto T1290;}
	}
}
/*	function definition for C1DM-V	*/

static L20()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	{register object V361;
	object V362;
	object V363;
	object V364;
	check_arg(4);
	V361=(base[0]);
	V362=(base[1]);
	V363=(base[2]);
	V364=(base[3]);
	vs_top=sup;
TTL:;
	if(!(type_of((V361))==t_symbol)){
	goto T1537;}
	setq(VV[62],make_cons((V361),symbol_value(VV[62])));
	V361= (*(LnkLI89))((V361),(V362),(V363),(V364));
	setq(VV[30],make_cons((V361),symbol_value(VV[30])));
	setq(VV[64],make_cons((V361),symbol_value(VV[64])));
	base[4]= (V361);
	vs_top=(vs_base=base+4)+1;
	return;
T1537:;
	base[4]= (V361);
	base[5]= (V362);
	base[6]= (V363);
	base[7]= (V364);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk110)();
	return;
	}
}
/*	local entry for function C1DM-BAD-KEY	*/

static object LI21(V366)

object V366;
{	 VMB19 VMS19 VMV19
TTL:;
	{object V367 = (VFUN_NARGS=2,(*(LnkLI86))(VV[74],(V366)));
	VMR19(V367)}
}
/*	function definition for C2DM	*/

static L22()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{register object V368;
	register object V369;
	object V370;
	object V371;
	check_arg(4);
	V368=(base[0]);
	V369=(base[1]);
	V370=(base[2]);
	V371=(base[3]);
	vs_top=sup;
TTL:;
	{object V372;
	setq(VV[54],number_plus(symbol_value(VV[54]),small_fixnum(1)));
	V372= symbol_value(VV[54]);
	if((symbol_value(VV[55]))!=Cnil){
	goto T1554;}
	if((symbol_value(VV[56]))==Cnil){
	goto T1553;}
T1554:;
	princ_str("\n	check_arg(2);",VV[10]);
T1553:;
	if(((V368))==Cnil){
	goto T1561;}
	V373= (*(LnkLI102))();
	(void)(structure_set((V368),VV[6],2,/* INLINE-ARGS */V373));
	goto T1559;
T1561:;
	(void)((*(LnkLI102))());
T1559:;
	if(((V369))==Cnil){
	goto T1565;}
	V374= (*(LnkLI102))();
	(void)(structure_set((V369),VV[6],2,/* INLINE-ARGS */V374));
	goto T1563;
T1565:;
	(void)((*(LnkLI102))());
T1563:;
	(void)((*(LnkLI114))((V370)));
	princ_str("\n	vs_top=sup;",VV[10]);
	if(((V368))==Cnil){
	goto T1570;}
	(void)((*(LnkLI103))((V368)));
T1570:;
	if(((V369))==Cnil){
	goto T1573;}
	(void)((*(LnkLI103))((V369)));
T1573:;
	princ_str("\n	{object V",VV[10]);
	(void)((*(LnkLI80))((V372)));
	princ_str("=base[0]->c.c_cdr;",VV[10]);
	(void)((*(LnkLI115))((V370),(V372)));
	princ_char(125,VV[10]);
	base[5]= (V371);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk107)();
	return;}
	}
}
/*	local entry for function C2DM-RESERVE-VL	*/

static object LI23(V376)

object V376;
{	 VMB21 VMS21 VMV21
TTL:;
	{register object V377;
	object V378;
	V377= car((V376));
	V378= car((V377));
T1588:;
	if(!(endp((V377)))){
	goto T1589;}
	goto T1584;
T1589:;
	(void)((*(LnkLI116))((V378)));
	V377= cdr((V377));
	V378= car((V377));
	goto T1588;}
T1584:;
	{register object V379;
	register object V380;
	V379= cadr((V376));
	V380= car((V379));
T1603:;
	if(!(endp((V379)))){
	goto T1604;}
	goto T1599;
T1604:;
	(void)((*(LnkLI116))(car((V380))));
	if((caddr((V380)))==Cnil){
	goto T1609;}
	(void)((*(LnkLI116))(caddr((V380))));
T1609:;
	V379= cdr((V379));
	V380= car((V379));
	goto T1603;}
T1599:;
	if((caddr((V376)))==Cnil){
	goto T1617;}
	(void)((*(LnkLI116))(caddr((V376))));
T1617:;
	{register object V381;
	register object V382;
	V381= car(cddddr((V376)));
	V382= car((V381));
T1624:;
	if(!(endp((V381)))){
	goto T1625;}
	goto T1620;
T1625:;
	(void)((*(LnkLI116))(cadr((V382))));
	if((cadddr((V382)))==Cnil){
	goto T1630;}
	(void)((*(LnkLI116))(cadddr((V382))));
T1630:;
	V381= cdr((V381));
	V382= car((V381));
	goto T1624;}
T1620:;
	{register object V383;
	object V384;
	V383= caddr(cddddr((V376)));
	V384= car((V383));
T1641:;
	if(!(endp((V383)))){
	goto T1642;}
	{object V385 = Cnil;
	VMR21(V385)}
T1642:;
	(void)((*(LnkLI116))(car((V384))));
	V383= cdr((V383));
	V384= car((V383));
	goto T1641;}
}
/*	local entry for function C2DM-RESERVE-V	*/

static object LI24(V387)

object V387;
{	 VMB22 VMS22 VMV22
TTL:;
	if(!(type_of((V387))==t_cons)){
	goto T1653;}
	{object V388 = (*(LnkLI114))((V387));
	VMR22(V388)}
T1653:;
	V389= (*(LnkLI102))();
	{object V390 = structure_set((V387),VV[6],2,/* INLINE-ARGS */V389);
	VMR22(V390)}
}
/*	local entry for function C2DM-BIND-VL	*/

static object LI25(V393,V394)

object V393;register object V394;
{	 VMB23 VMS23 VMV23
	bds_check;
TTL:;
	{object V395;
	object V396;
	object V397;
	object V398;
	object V399;
	object V400;
	object V401;
	V395= car((V393));
	V396= cadr((V393));
	V397= caddr((V393));
	V398= cadddr((V393));
	V399= car(cddddr((V393)));
	V400= cadr(cddddr((V393)));
	V401= caddr(cddddr((V393)));
	{register object V402;
	V402= (V395);
T1664:;
	if(!(endp((V402)))){
	goto T1665;}
	goto T1662;
T1665:;
	if((symbol_value(VV[55]))!=Cnil){
	goto T1670;}
	if((symbol_value(VV[56]))==Cnil){
	goto T1669;}
T1670:;
	princ_str("\n	if(endp(V",VV[10]);
	(void)((*(LnkLI80))((V394)));
	princ_str("))invalid_macro_call();",VV[10]);
T1669:;
	V403= car((V402));
	V404= list(2,VV[75],(V394));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V403,/* INLINE-ARGS */V404));
	if((cdr((V402)))!=Cnil){
	goto T1679;}
	if(((V396))!=Cnil){
	goto T1679;}
	if(((V397))!=Cnil){
	goto T1679;}
	if(((V398))!=Cnil){
	goto T1679;}
	if((symbol_value(VV[55]))!=Cnil){
	goto T1679;}
	if((symbol_value(VV[56]))==Cnil){
	goto T1678;}
T1679:;
	princ_str("\n	V",VV[10]);
	(void)((*(LnkLI80))((V394)));
	princ_str("=V",VV[10]);
	(void)((*(LnkLI80))((V394)));
	princ_str("->c.c_cdr;",VV[10]);
T1678:;
	V402= cdr((V402));
	goto T1664;}
T1662:;
	{register object V405;
	V405= (V396);
T1701:;
	if(!(endp((V405)))){
	goto T1702;}
	goto T1699;
T1702:;
	{register object V406;
	V406= car((V405));
	princ_str("\n	if(endp(V",VV[10]);
	(void)((*(LnkLI80))((V394)));
	princ_str(")){",VV[10]);
	bds_bind(VV[25],symbol_value(VV[25]));
	bds_bind(VV[52],symbol_value(VV[52]));
	bds_bind(VV[26],symbol_value(VV[26]));
	(void)((*(LnkLI118))(car((V406)),cadr((V406))));
	if((caddr((V406)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T1712;}
	V407= (*(LnkLI117))(caddr((V406)),Cnil);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
T1712:;
	princ_str("\n	} else {",VV[10]);
	V408= car((V406));
	V409= list(2,VV[75],(V394));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V408,/* INLINE-ARGS */V409));
	if((caddr((V406)))==Cnil){
	goto T1706;}
	(void)((*(LnkLI117))(caddr((V406)),Ct));}
T1706:;
	if((cdr((V405)))!=Cnil){
	goto T1722;}
	if(((V397))!=Cnil){
	goto T1722;}
	if(((V398))!=Cnil){
	goto T1722;}
	if((symbol_value(VV[55]))!=Cnil){
	goto T1722;}
	if((symbol_value(VV[56]))==Cnil){
	goto T1721;}
T1722:;
	princ_str("\n	V",VV[10]);
	(void)((*(LnkLI80))((V394)));
	princ_str("=V",VV[10]);
	(void)((*(LnkLI80))((V394)));
	princ_str("->c.c_cdr;",VV[10]);
T1721:;
	princ_char(125,VV[10]);
	V405= cdr((V405));
	goto T1701;}
T1699:;
	if(((V397))==Cnil){
	goto T1742;}
	V410= list(2,VV[76],(V394));
	(void)((*(LnkLI117))((V397),/* INLINE-ARGS */V410));
T1742:;
	{object V411;
	register object V412;
	V411= (V399);
	V412= car((V411));
T1749:;
	if(!(endp((V411)))){
	goto T1750;}
	goto T1745;
T1750:;
	{object V413;
	setq(VV[54],number_plus(symbol_value(VV[54]),small_fixnum(1)));
	V413= symbol_value(VV[54]);
	princ_str("\n	{object V",VV[10]);
	(void)((*(LnkLI80))((V413)));
	princ_str("=getf(V",VV[10]);
	(void)((*(LnkLI80))((V394)));
	princ_str(",VV[",VV[10]);
	V414= (*(LnkLI108))(car((V412)));
	(void)((*(LnkLI80))(/* INLINE-ARGS */V414));
	princ_str("],OBJNULL);",VV[10]);
	princ_str("\n	if(V",VV[10]);
	(void)((*(LnkLI80))((V413)));
	princ_str("==OBJNULL){",VV[10]);
	bds_bind(VV[25],symbol_value(VV[25]));
	bds_bind(VV[52],symbol_value(VV[52]));
	bds_bind(VV[26],symbol_value(VV[26]));
	(void)((*(LnkLI118))(cadr((V412)),caddr((V412))));
	if((cadddr((V412)))==Cnil){
	goto T1771;}
	(void)((*(LnkLI117))(cadddr((V412)),Cnil));
T1771:;
	princ_str("\n	} else {",VV[10]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	V415= cadr((V412));
	V416= list(2,VV[76],(V413));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V415,/* INLINE-ARGS */V416));
	if((cadddr((V412)))==Cnil){
	goto T1776;}
	(void)((*(LnkLI117))(cadddr((V412)),Ct));
T1776:;
	princ_str("}}",VV[10]);}
	V411= cdr((V411));
	V412= car((V411));
	goto T1749;}
T1745:;
	if((symbol_value(VV[55]))!=Cnil){
	goto T1787;}
	if((symbol_value(VV[56]))==Cnil){
	goto T1785;}
T1787:;
	if(((V397))!=Cnil){
	goto T1785;}
	if(((V398))!=Cnil){
	goto T1785;}
	princ_str("\n	if(!endp(V",VV[10]);
	(void)((*(LnkLI80))((V394)));
	princ_str("))invalid_macro_call();",VV[10]);
T1785:;
	if((symbol_value(VV[55]))!=Cnil){
	goto T1799;}
	if((symbol_value(VV[56]))==Cnil){
	goto T1797;}
T1799:;
	if(((V398))==Cnil){
	goto T1797;}
	if(((V400))!=Cnil){
	goto T1797;}
	princ_str("\n	check_other_key(V",VV[10]);
	(void)((*(LnkLI80))((V394)));
	princ_char(44,VV[10]);
	V417 = make_fixnum(length((V399)));
	(void)((*(LnkLI80))(V417));
	{object V418;
	object V419;
	V418= (V399);
	V419= car((V418));
T1815:;
	if(!(endp((V418)))){
	goto T1816;}
	goto T1811;
T1816:;
	princ_str(",VV[",VV[10]);
	V420= (*(LnkLI108))(car((V419)));
	(void)((*(LnkLI80))(/* INLINE-ARGS */V420));
	princ_char(93,VV[10]);
	V418= cdr((V418));
	V419= car((V418));
	goto T1815;}
T1811:;
	princ_str(");",VV[10]);
T1797:;
	{object V421;
	object V422;
	V421= (V401);
	V422= car((V421));
T1833:;
	if(!(endp((V421)))){
	goto T1834;}
	{object V423 = Cnil;
	VMR23(V423)}
T1834:;
	(void)((*(LnkLI118))(car((V422)),cadr((V422))));
	V421= cdr((V421));
	V422= car((V421));
	goto T1833;}}
}
/*	local entry for function C2DM-BIND-LOC	*/

static object LI26(V426,V427)

object V426;object V427;
{	 VMB24 VMS24 VMV24
TTL:;
	if(!(type_of((V426))==t_cons)){
	goto T1845;}
	{object V428;
	setq(VV[54],number_plus(symbol_value(VV[54]),small_fixnum(1)));
	V428= symbol_value(VV[54]);
	princ_str("\n	{object V",VV[10]);
	(void)((*(LnkLI80))((V428)));
	princ_str("= ",VV[10]);
	(void)((*(LnkLI80))((V427)));
	princ_char(59,VV[10]);
	(void)((*(LnkLI115))((V426),(V428)));
	princ_char(125,VV[10]);
	{object V429 = Cnil;
	VMR24(V429)}}
T1845:;
	{object V430 = (*(LnkLI105))((V426),(V427));
	VMR24(V430)}
}
/*	local entry for function C2DM-BIND-INIT	*/

static object LI27(V433,V434)

object V433;object V434;
{	 VMB25 VMS25 VMV25
	bds_check;
TTL:;
	if(!(type_of((V433))==t_cons)){
	goto T1858;}
	{object V435;
	object V436;
	bds_bind(VV[53],symbol_value(VV[53]));
	bds_bind(VV[77],small_fixnum(0));
	setq(VV[54],number_plus(symbol_value(VV[54]),small_fixnum(1)));
	V435= symbol_value(VV[54]);
	V437= make_cons((V434),Cnil);
	V438= (VFUN_NARGS=2,(*(LnkLI119))(/* INLINE-ARGS */V437,VV[78]));
	V436= car(/* INLINE-ARGS */V438);
	princ_str("\n	{object V",VV[10]);
	(void)((*(LnkLI80))((V435)));
	princ_str("= ",VV[10]);
	(void)((*(LnkLI80))((V436)));
	princ_char(59,VV[10]);
	(void)((*(LnkLI115))((V433),(V435)));
	princ_char(125,VV[10]);
	{object V439 = (*(LnkLI120))();
	bds_unwind1;
	bds_unwind1;
	VMR25(V439)}}
T1858:;
	{object V440 = (*(LnkLI106))((V433),(V434));
	VMR25(V440)}
}
/*	local function DO-DECL	*/

static L16(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_reserve(VM26);
	{object V441;
	check_arg(1);
	V441=(base[0]);
	vs_top=sup;
TTL:;
	{object V442;
	V442= (*(LnkLI121))((V441));
	if(((V442))==Cnil){
	goto T1874;}
	{object V443;
	setq(VV[54],number_plus(symbol_value(VV[54]),small_fixnum(1)));
	V443= symbol_value(VV[54]);
	(void)(structure_set((V441),VV[6],1,(V442)));
	(void)(structure_set((V441),VV[6],4,(V443)));
	princ_str("\n	",VV[10]);
	if((base0[9])!=Cnil){
	goto T1881;}
	princ_char(123,VV[10]);
	base0[9]= Ct;
T1881:;
	base[1]= (V441);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk122)();
	return;}
T1874:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function DO-DECL	*/

static L14(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	{object V444;
	check_arg(1);
	V444=(base[0]);
	vs_top=sup;
TTL:;
	{object V445;
	V445= (*(LnkLI121))((V444));
	if(((V445))==Cnil){
	goto T1890;}
	{object V446;
	setq(VV[54],number_plus(symbol_value(VV[54]),small_fixnum(1)));
	V446= symbol_value(VV[54]);
	(void)(structure_set((V444),VV[6],1,(V445)));
	(void)(structure_set((V444),VV[6],4,(V446)));
	princ_str("\n	",VV[10]);
	if((base0[7])!=Cnil){
	goto T1897;}
	princ_char(123,VV[10]);
	base0[7]= Ct;
T1897:;
	base[1]= (V444);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk122)();
	return;}
T1890:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
static LnkT122(){ call_or_link(VV[122],&Lnk122);} /* WT-VAR-DECL */
static object  LnkTLI121(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[121],&LnkLI121,1,ap);} /* C2VAR-KIND */
static object  LnkTLI120(){return call_proc0(VV[120],&LnkLI120);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI119(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[119],&LnkLI119,ap);} /* INLINE-ARGS */
static object  LnkTLI118(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[118],&LnkLI118,2,ap);} /* C2DM-BIND-INIT */
static object  LnkTLI117(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[117],&LnkLI117,2,ap);} /* C2DM-BIND-LOC */
static object  LnkTLI116(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[116],&LnkLI116,1,ap);} /* C2DM-RESERVE-V */
static object  LnkTLI115(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[115],&LnkLI115,2,ap);} /* C2DM-BIND-VL */
static object  LnkTLI114(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[114],&LnkLI114,1,ap);} /* C2DM-RESERVE-VL */
static object  LnkTLI113(){return call_proc0(VV[113],&LnkLI113);} /* C1NIL */
static LnkT112(){ call_or_link(VV[112],&Lnk112);} /* C1DM-V */
static LnkT111(){ call_or_link(VV[111],&Lnk111);} /* DM-BAD-KEY */
static LnkT110(){ call_or_link(VV[110],&Lnk110);} /* C1DM-VL */
static object  LnkTLI109(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[109],&LnkLI109,1,ap);} /* WT-VS */
static object  LnkTLI108(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[108],&LnkLI108,1,ap);} /* ADD-SYMBOL */
static LnkT107(){ call_or_link(VV[107],&Lnk107);} /* C2EXPR */
static object  LnkTLI106(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[106],&LnkLI106,2,ap);} /* C2BIND-INIT */
static object  LnkTLI105(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[105],&LnkLI105,2,ap);} /* C2BIND-LOC */
static object  LnkTLI104(){return call_proc0(VV[104],&LnkLI104);} /* RESET-TOP */
static object  LnkTLI103(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[103],&LnkLI103,1,ap);} /* C2BIND */
static object  LnkTLI102(){return call_proc0(VV[102],&LnkLI102);} /* VS-PUSH */
static object  LnkTLI101(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[101],&LnkLI101,2,ap);} /* C2LAMBDA-EXPR-WITHOUT-KEY */
static object  LnkTLI100(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[100],&LnkLI100,2,ap);} /* C2LAMBDA-EXPR-WITH-KEY */
static object  LnkTLI99(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[99],&LnkLI99,1,ap);} /* RECORD-ARG-INFO */
static object  LnkTLI98(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[98],&LnkLI98,3,ap);} /* FIX-DOWN-ARGS */
static object  LnkTLI97(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[97],&LnkLI97,1,ap);} /* CHECK-VREF */
static object  LnkTLI96(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[96],&LnkLI96,2,ap);} /* C1DECL-BODY */
static object  LnkTLI95(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[95],&LnkLI95,3,ap);} /* CHECK-VDECL */
static object  LnkTLI94(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[94],&LnkLI94,2,ap);} /* ADD-INFO */
static object  LnkTLI93(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[93],&LnkLI93,ap);} /* MAKE-VAR */
static object  LnkTLI92(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[92],&LnkLI92,3,ap);} /* AND-FORM-TYPE */
static object  LnkTLI91(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[91],&LnkLI91,2,ap);} /* C1EXPR* */
static object  LnkTLI90(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[90],&LnkLI90,1,ap);} /* DEFAULT-INIT */
static object  LnkTLI89(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[89],&LnkLI89,4,ap);} /* C1MAKE-VAR */
static object  LnkTLI88(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[88],&LnkLI88,1,ap);} /* C1ADD-GLOBALS */
static LnkT87(){ call_or_link(VV[87],&Lnk87);} /* C1BODY */
static object  LnkTLI86(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[86],&LnkLI86,ap);} /* CMPERR */
static object  LnkTLI85(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[85],&LnkLI85,ap);} /* MAKE-INFO */
static object  LnkTLI84(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[84],&LnkLI84,ap);} /* UNWIND-EXIT */
static object  LnkTLI83(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[83],&LnkLI83,ap);} /* MAKE-FUN */
static object  LnkTLI82(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[82],&LnkLI82,ap);} /* DELETE */
static object  LnkTLI81(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[81],&LnkLI81,1,ap);} /* WT-H1 */
static object  LnkTLI80(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[80],&LnkLI80,1,ap);} /* WT1 */
static object  LnkTLI79(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[79],&LnkLI79,1,ap);} /* C1EXPR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

