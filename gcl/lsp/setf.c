
#include "cmpinclude.h"
#include "setf.h"
void init_setf(){do_init(VV);}
/*	macro definition for DEFSETF	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	base[3]= V1;}
	if((car(base[3]))==Cnil){
	goto T2;}
	if(type_of(car(base[3]))==t_symbol){
	goto T1;}
	base[4]= car(base[3]);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2;}
	goto T1;
T1:;
	V2= list(2,VV[3],base[2]);
	V3= list(4,VV[2],/* INLINE-ARGS */V2,list(2,VV[3],car(base[3])),VV[4]);
	V4= list(3,VV[5],list(2,VV[3],base[2]),VV[6]);
	V5= list(3,VV[5],list(2,VV[3],base[2]),VV[7]);
	V6= list(2,VV[3],base[2]);
	if(endp_prop(cdr(base[3]))){
	goto T11;}
	if(type_of(cadr(base[3]))==t_string){
	goto T13;}
	base[4]= VV[8];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T13;
T13:;
	if(endp_prop(cddr(base[3]))){
	goto T17;}
	base[4]= VV[9];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T17;
T17:;
	V7= cadr(base[3]);
	goto T9;
	goto T11;
T11:;
	V7= Cnil;
	goto T9;
T9:;
	V8= list(4,VV[2],/* INLINE-ARGS */V6,V7,VV[10]);
	base[4]= list(7,VV[0],VV[1],/* INLINE-ARGS */V3,/* INLINE-ARGS */V4,/* INLINE-ARGS */V5,/* INLINE-ARGS */V8,list(2,VV[3],base[2]));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T2;
T2:;
	base[4]= cadr(base[3]);
	vs_top=(vs_base=base+4)+1;
	Llist_length();
	vs_top=sup;
	V9= vs_base[0];
	if(number_compare(V9,small_fixnum(1))==0){
	goto T21;}
	base[4]= VV[11];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T21;
T21:;
	V10= list(2,VV[3],base[2]);
	V11= list(4,VV[2],/* INLINE-ARGS */V10,list(2,VV[3],base[3]),VV[13]);
	V12= list(3,VV[5],list(2,VV[3],base[2]),VV[14]);
	V13= list(3,VV[5],list(2,VV[3],base[2]),VV[15]);
	V14= list(2,VV[3],base[2]);
	V15= (*(LnkLI97))(cddr(base[3]));
	V16= list(4,VV[2],/* INLINE-ARGS */V14,/* INLINE-ARGS */V15,VV[16]);
	base[4]= list(7,VV[0],VV[12],/* INLINE-ARGS */V11,/* INLINE-ARGS */V12,/* INLINE-ARGS */V13,/* INLINE-ARGS */V16,list(2,VV[3],base[2]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for DEFINE-SETF-METHOD	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	check_arg(2);
	vs_top=sup;
	{object V17=base[0]->c.c_cdr;
	if(endp(V17))invalid_macro_call();
	base[2]= (V17->c.c_car);
	V17=V17->c.c_cdr;
	base[3]= V17;
	base[4]= Cnil;
	base[5]= Cnil;
	base[6]= Cnil;}
	base[7]= car(base[3]);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk98)();
	if(vs_base<vs_top){
	base[4]= vs_base[0];
	vs_base++;
	}else{
	base[4]= Cnil;}
	if(vs_base<vs_top){
	base[5]= vs_base[0];
	}else{
	base[5]= Cnil;}
	vs_top=sup;
	base[6]= cdr(base[3]);
	if((base[5])==Cnil){
	goto T37;}
	base[4]= make_cons(base[5],base[4]);
	goto T35;
	goto T37;
T37:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V18= vs_base[0];
	base[4]= make_cons(V18,base[4]);
	{object V19;
	V19= list(2,VV[17],list(2,VV[18],car(base[4])));
	base[6]= make_cons((V19),base[6]);}
	goto T35;
T35:;
	V20= list(2,VV[3],base[2]);
	V21= list(4,VV[2],/* INLINE-ARGS */V20,list(2,VV[20],listA(3,VV[21],base[4],base[6])),VV[22]);
	V22= list(3,VV[5],list(2,VV[3],base[2]),VV[23]);
	V23= list(3,VV[5],list(2,VV[3],base[2]),VV[24]);
	V24= list(2,VV[3],base[2]);
	V25= (*(LnkLI97))(cdr(base[3]));
	V26= list(4,VV[2],/* INLINE-ARGS */V24,/* INLINE-ARGS */V25,VV[25]);
	base[7]= list(7,VV[0],VV[19],/* INLINE-ARGS */V21,/* INLINE-ARGS */V22,/* INLINE-ARGS */V23,/* INLINE-ARGS */V26,list(2,VV[3],base[2]));
	vs_top=(vs_base=base+7)+1;
	return;
}
/*	function definition for GET-SETF-METHOD	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	{object V27;
	object V28;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V27=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T45;}
	V28=(base[1]);
	vs_top=sup;
	goto T46;
	goto T45;
T45:;
	V28= Cnil;
	goto T46;
T46:;
	{object V29;
	object V30;
	object V31;
	object V32;
	object V33;
	base[2]= (V27);
	base[3]= (V28);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk99)();
	if(vs_base>=vs_top){vs_top=sup;goto T51;}
	V29= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T52;}
	V30= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T53;}
	V31= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T54;}
	V32= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T55;}
	V33= vs_base[0];
	vs_top=sup;
	goto T56;
	goto T51;
T51:;
	V29= Cnil;
	goto T52;
T52:;
	V30= Cnil;
	goto T53;
T53:;
	V31= Cnil;
	goto T54;
T54:;
	V32= Cnil;
	goto T55;
T55:;
	V33= Cnil;
	goto T56;
T56:;
	base[2]= (V31);
	vs_top=(vs_base=base+2)+1;
	Llist_length();
	vs_top=sup;
	V34= vs_base[0];
	if(number_compare(V34,small_fixnum(1))==0){
	goto T57;}
	base[2]= VV[26];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T57;
T57:;
	base[2]= (V29);
	base[3]= (V30);
	base[4]= (V31);
	base[5]= (V32);
	base[6]= (V33);
	vs_top=(vs_base=base+2)+5;
	return;}
	}
}
/*	function definition for GET-SETF-METHOD-MULTIPLE-VALUE	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	{register object V35;
	register object V36;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V35=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T68;}
	V36=(base[1]);
	vs_top=sup;
	goto T69;
	goto T68;
T68:;
	V36= Cnil;
	goto T69;
T69:;
	{register object V37;
	V37= Cnil;
	if(!(type_of((V35))==t_symbol)){
	goto T73;}
	{object V38;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V38= vs_base[0];
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= make_cons((V38),Cnil);
	base[5]= list(3,VV[27],(V35),(V38));
	base[6]= (V35);
	vs_top=(vs_base=base+2)+5;
	return;}
	goto T73;
T73:;
	if(!(type_of((V35))==t_cons)){
	goto T81;}
	if(type_of(car((V35)))==t_symbol){
	goto T82;}
	goto T81;
T81:;
	base[2]= VV[28];
	base[3]= (V35);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	return;
	goto T82;
T82:;
	if(((V36))==Cnil){
	goto T89;}
	{register object x= car((V35)),V39= cadr((V36));
	while(!endp(V39))
	if(type_of(V39->c.c_car)==t_cons &&eql(x,V39->c.c_car->c.c_car)){
	V37= (V39->c.c_car);
	goto T93;
	}else V39=V39->c.c_cdr;
	V37= Cnil;}
	goto T93;
T93:;
	if(((V37))==Cnil){
	goto T89;}
	base[2]= (V35);
	base[3]= (V36);
	vs_top=(vs_base=base+2)+2;
	Lmacroexpand();
	vs_top=sup;
	V37= vs_base[0];
	if(!(((V35))==((V37)))){
	goto T98;}
	base[2]= VV[29];
	base[3]= (V35);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	vs_top=sup;
	goto T98;
T98:;
	base[2]= (V37);
	base[3]= (V36);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk99)();
	return;
	goto T89;
T89:;
	if((get(car((V35)),VV[30],Cnil))==Cnil){
	goto T106;}
	base[2]= get(car((V35)),VV[30],Cnil);
	base[3]= (V36);
	{object V40;
	V40= cdr((V35));
	 vs_top=base+4;
	 while(!endp(V40))
	 {vs_push(car(V40));V40=cdr(V40);}
	vs_base=base+3;}
	super_funcall_no_event(base[2]);
	return;
	goto T106;
T106:;
	if((get(car((V35)),VV[31],Cnil))!=Cnil){
	goto T111;}
	V37= get(car((V35)),VV[32],Cnil);
	if(((V37))==Cnil){
	goto T112;}
	goto T111;
T111:;
	{register object V41;
	object V42;
	{object V43;
	object V44= cdr((V35));
	if(endp(V44)){
	V41= Cnil;
	goto T117;}
	base[2]=V43=MMcons(Cnil,Cnil);
	goto T118;
T118:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	(V43->c.c_car)= vs_base[0];
	V44=MMcdr(V44);
	if(endp(V44)){
	V41= base[2];
	goto T117;}
	V43=MMcdr(V43)=MMcons(Cnil,Cnil);
	goto T118;}
	goto T117;
T117:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V42= vs_base[0];
	base[2]= (V41);
	base[3]= cdr((V35));
	base[4]= make_cons((V42),Cnil);
	if(((V37))==Cnil){
	goto T126;}
	base[5]= (*(LnkLI100))(car((V41)),car((V37)),cdr((V37)),(V42));
	goto T124;
	goto T126;
T126:;
	V46= get(car((V35)),VV[31],Cnil);
	V47= make_cons((V42),Cnil);
	V48= append((V41),/* INLINE-ARGS */V47);
	base[5]= make_cons(V46,/* INLINE-ARGS */V48);
	goto T124;
T124:;
	base[6]= make_cons(car((V35)),(V41));
	vs_top=(vs_base=base+2)+5;
	return;}
	goto T112;
T112:;
	if((get(car((V35)),VV[33],Cnil))==Cnil){
	goto T131;}
	{object V49;
	object V50;
	object V51;
	object V52;
	{object V53;
	object V54= cdr((V35));
	if(endp(V54)){
	V49= Cnil;
	goto T133;}
	base[6]=V53=MMcons(Cnil,Cnil);
	goto T134;
T134:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	(V53->c.c_car)= vs_base[0];
	V54=MMcdr(V54);
	if(endp(V54)){
	V49= base[6];
	goto T133;}
	V53=MMcdr(V53)=MMcons(Cnil,Cnil);
	goto T134;}
	goto T133;
T133:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V50= vs_base[0];
	V51= get(car((V35)),VV[33],Cnil);
	V56= car((V51));
	V52= list(3,VV[21],/* INLINE-ARGS */V56,list(2,VV[20],listA(3,VV[21],cadr((V51)),cddr((V51)))));
	base[6]= (V49);
	base[7]= cdr((V35));
	base[8]= make_cons((V50),Cnil);
	base[11]= (V52);
	{object V57;
	V57= (V49);
	 vs_top=base+12;
	 while(!endp(V57))
	 {vs_push(car(V57));V57=cdr(V57);}
	vs_base=base+12;}
	super_funcall_no_event(base[11]);
	vs_top=sup;
	base[10]= vs_base[0];
	base[11]= (V50);
	vs_top=(vs_base=base+11)+1;
	super_funcall_no_event(base[10]);
	vs_top=sup;
	base[9]= vs_base[0];
	base[10]= make_cons(car((V35)),(V49));
	vs_top=(vs_base=base+6)+5;
	return;}
	goto T131;
T131:;
	base[2]= car((V35));
	vs_top=(vs_base=base+2)+1;
	Lmacro_function();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T149;}
	base[3]= (V35);
	vs_top=(vs_base=base+3)+1;
	Lmacroexpand();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk99)();
	return;
	goto T149;
T149:;
	base[2]= VV[34];
	base[3]= (V35);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	return;}
	}
}
/*	macro definition for PUT-AUX	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	check_arg(2);
	vs_top=sup;
	{object V58=base[0]->c.c_cdr;
	if(endp(V58))invalid_macro_call();
	base[2]= (V58->c.c_car);
	V58=V58->c.c_cdr;
	if(endp(V58))invalid_macro_call();
	base[3]= (V58->c.c_car);
	V58=V58->c.c_cdr;
	base[4]= V58;}
	base[5]= base[4];
	vs_top=(vs_base=base+5)+1;
	Llast();
	vs_top=sup;
	V59= vs_base[0];
	base[5]= list(4,VV[35],base[2],base[3],car(V59));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	function definition for G1384	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	{object V60;
	object V61;
	object V62;
	object V63;
	if(vs_top-vs_base<3) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V60=(base[0]);
	V61=(base[1]);
	V62=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T158;}
	V63=(base[3]);
	vs_top=sup;
	goto T159;
	goto T158;
T158:;
	V63= Cnil;
	goto T159;
T159:;
	{object V64;
	object V65;
	object V66;
	object V67;
	object V68;
	base[4]= (V61);
	base[5]= (V60);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk101)();
	if(vs_base>=vs_top){vs_top=sup;goto T164;}
	V64= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T165;}
	V65= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T166;}
	V66= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T167;}
	V67= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T168;}
	V68= vs_base[0];
	vs_top=sup;
	goto T169;
	goto T164;
T164:;
	V64= Cnil;
	goto T165;
T165:;
	V65= Cnil;
	goto T166;
T166:;
	V66= Cnil;
	goto T167;
T167:;
	V67= Cnil;
	goto T168;
T168:;
	V68= Cnil;
	goto T169;
T169:;
	{object V69;
	object V70;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V69= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V70= vs_base[0];
	V71= make_cons((V69),Cnil);
	base[4]= append((V64),/* INLINE-ARGS */V71);
	V72= make_cons((V62),Cnil);
	base[5]= append((V65),/* INLINE-ARGS */V72);
	base[6]= make_cons((V70),Cnil);
	V73= car((V66));
	V74= list(2,/* INLINE-ARGS */V73,list(4,VV[37],(V68),(V70),(V69)));
	base[7]= list(4,VV[36],make_cons(/* INLINE-ARGS */V74,Cnil),(V67),(V70));
	base[8]= list(4,VV[38],(V68),(V69),(V63));
	vs_top=(vs_base=base+4)+5;
	return;}}
	}
}
/*	function definition for G1386	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	{object V75;
	object V76;
	object V77;
	check_arg(3);
	V75=(base[0]);
	V76=(base[1]);
	V77=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V78;
	object V79;
	object V80;
	object V81;
	object V82;
	base[3]= (V77);
	base[4]= (V75);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk101)();
	if(vs_base>=vs_top){vs_top=sup;goto T180;}
	V78= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T181;}
	V79= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T182;}
	V80= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T183;}
	V81= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T184;}
	V82= vs_base[0];
	vs_top=sup;
	goto T185;
	goto T180;
T180:;
	V78= Cnil;
	goto T181;
T181:;
	V79= Cnil;
	goto T182;
T182:;
	V80= Cnil;
	goto T183;
T183:;
	V81= Cnil;
	goto T184;
T184:;
	V82= Cnil;
	goto T185;
T185:;
	{object V83;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V83= vs_base[0];
	base[3]= (V78);
	base[4]= (V79);
	base[5]= make_cons((V83),Cnil);
	V84= car((V80));
	V85= list(2,/* INLINE-ARGS */V84,list(3,VV[39],(V76),(V83)));
	base[6]= list(3,VV[36],make_cons(/* INLINE-ARGS */V85,Cnil),(V81));
	base[7]= list(3,VV[39],(V76),(V82));
	vs_top=(vs_base=base+3)+5;
	return;}}
	}
}
/*	function definition for G1388	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	{object V86;
	register object V87;
	object V88;
	if(vs_top-vs_base<2) too_few_arguments();
	V86=(base[0]);
	V87=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V88=(base[2]);
	vs_top=sup;
	if(!(type_of((V87))==t_cons)){
	goto T193;}
	if((car((V87)))==(VV[20])){
	goto T196;}
	if(!((car((V87)))==(VV[3]))){
	goto T193;}
	goto T196;
T196:;
	if(!(type_of(cadr((V87)))==t_symbol)){
	goto T193;}
	if((cddr((V87)))==Cnil){
	goto T192;}
	goto T193;
T193:;
	base[3]= VV[40];
	base[4]= (V87);
	vs_top=(vs_base=base+3)+2;
	Lerror();
	vs_top=sup;
	goto T192;
T192:;
	{register object V89;
	object V90;
	object V91;
	register object V92;
	object V93;
	base[3]= make_cons(cadr((V87)),(V88));
	base[4]= (V86);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk101)();
	if(vs_base>=vs_top){vs_top=sup;goto T208;}
	V89= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T209;}
	V90= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T210;}
	V91= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T211;}
	V92= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T212;}
	V93= vs_base[0];
	vs_top=sup;
	goto T213;
	goto T208;
T208:;
	V89= Cnil;
	goto T209;
T209:;
	V90= Cnil;
	goto T210;
T210:;
	V91= Cnil;
	goto T211;
T211:;
	V92= Cnil;
	goto T212;
T212:;
	V93= Cnil;
	goto T213;
T213:;
	base[3]= (V92);
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V94= vs_base[0];
	V95= car(V94);
	base[3]= (V89);
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V96= vs_base[0];
	if(!((/* INLINE-ARGS */V95)==(car(V96)))){
	goto T215;}
	base[3]= (V89);
	base[4]= (V90);
	base[5]= (V91);
	base[6]= listA(3,VV[41],list(2,VV[20],car((V92))),cdr((V92)));
	base[7]= listA(3,VV[41],list(2,VV[20],cadr((V87))),cdr((V93)));
	vs_top=(vs_base=base+3)+5;
	return;
	goto T215;
T215:;
	base[4]= (V92);
	vs_top=(vs_base=base+4)+1;
	Lbutlast();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V97= vs_base[0];
	V98= car(V97);
	base[3]= (V89);
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V99= vs_base[0];
	if(!((/* INLINE-ARGS */V98)==(car(V99)))){
	goto T227;}
	base[3]= (V89);
	base[4]= (V90);
	base[5]= (V91);
	V100= list(2,VV[20],car((V92)));
	base[7]= (V92);
	base[8]= small_fixnum(2);
	vs_top=(vs_base=base+7)+2;
	Lbutlast();
	vs_top=sup;
	V101= vs_base[0];
	V102= cdr(V101);
	base[8]= (V92);
	vs_top=(vs_base=base+8)+1;
	Lbutlast();
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+7)+1;
	Llast();
	vs_top=sup;
	V103= vs_base[0];
	V104= car(V103);
	base[7]= (V92);
	vs_top=(vs_base=base+7)+1;
	Llast();
	vs_top=sup;
	V105= vs_base[0];
	V106= list(3,VV[42],/* INLINE-ARGS */V104,list(2,VV[43],car(V105)));
	V107= make_cons(/* INLINE-ARGS */V106,Cnil);
	base[6]= listA(3,VV[41],/* INLINE-ARGS */V100,append(/* INLINE-ARGS */V102,/* INLINE-ARGS */V107));
	base[7]= listA(3,VV[41],list(2,VV[20],cadr((V87))),cdr((V93)));
	vs_top=(vs_base=base+3)+5;
	return;
	goto T227;
T227:;
	base[3]= VV[44];
	base[4]= (V87);
	vs_top=(vs_base=base+3)+2;
	Lerror();
	return;}
	}
}
/*	function definition for G1389	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	{object V108;
	object V109;
	object V110;
	check_arg(3);
	V108=(base[0]);
	V109=(base[1]);
	V110=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V111;
	object V112;
	object V113;
	object V114;
	object V115;
	base[3]= (V109);
	base[4]= (V108);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk101)();
	if(vs_base>=vs_top){vs_top=sup;goto T252;}
	V111= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T253;}
	V112= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T254;}
	V113= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T255;}
	V114= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T256;}
	V115= vs_base[0];
	vs_top=sup;
	goto T257;
	goto T252;
T252:;
	V111= Cnil;
	goto T253;
T253:;
	V112= Cnil;
	goto T254;
T254:;
	V113= Cnil;
	goto T255;
T255:;
	V114= Cnil;
	goto T256;
T256:;
	V115= Cnil;
	goto T257;
T257:;
	{object V116;
	object V117;
	object V118;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V116= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V117= vs_base[0];
	V118= car((V113));
	base[3]= make_cons((V116),(V111));
	base[4]= make_cons((V110),(V112));
	base[5]= make_cons((V117),Cnil);
	V119= list(2,(V118),list(4,VV[45],(V115),(V116),(V117)));
	base[6]= list(4,VV[36],make_cons(/* INLINE-ARGS */V119,Cnil),(V114),(V117));
	base[7]= list(3,VV[46],(V115),(V116));
	vs_top=(vs_base=base+3)+5;
	return;}}
	}
}
/*	function definition for G1391	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	{object V120;
	object V121;
	object V122;
	check_arg(3);
	V120=(base[0]);
	V121=(base[1]);
	V122=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V123;
	object V124;
	object V125;
	object V126;
	object V127;
	base[3]= (V122);
	base[4]= (V120);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk101)();
	if(vs_base>=vs_top){vs_top=sup;goto T269;}
	V123= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T270;}
	V124= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T271;}
	V125= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T272;}
	V126= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T273;}
	V127= vs_base[0];
	vs_top=sup;
	goto T274;
	goto T269;
T269:;
	V123= Cnil;
	goto T270;
T270:;
	V124= Cnil;
	goto T271;
T271:;
	V125= Cnil;
	goto T272;
T272:;
	V126= Cnil;
	goto T273;
T273:;
	V127= Cnil;
	goto T274;
T274:;
	{object V128;
	object V129;
	object V130;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V128= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V129= vs_base[0];
	V130= car((V125));
	base[3]= make_cons((V128),(V123));
	base[4]= make_cons((V121),(V124));
	base[5]= make_cons((V129),Cnil);
	V131= list(2,(V130),list(4,VV[47],(V129),(V128),(V127)));
	base[6]= list(4,VV[36],make_cons(/* INLINE-ARGS */V131,Cnil),(V126),(V129));
	base[7]= list(3,VV[48],(V128),(V127));
	vs_top=(vs_base=base+3)+5;
	return;}}
	}
}
/*	function definition for G1393	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	{object V132;
	object V133;
	object V134;
	check_arg(3);
	V132=(base[0]);
	V133=(base[1]);
	V134=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V135;
	object V136;
	object V137;
	object V138;
	object V139;
	base[3]= (V134);
	base[4]= (V132);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk101)();
	if(vs_base>=vs_top){vs_top=sup;goto T286;}
	V135= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T287;}
	V136= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T288;}
	V137= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T289;}
	V138= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T290;}
	V139= vs_base[0];
	vs_top=sup;
	goto T291;
	goto T286;
T286:;
	V135= Cnil;
	goto T287;
T287:;
	V136= Cnil;
	goto T288;
T288:;
	V137= Cnil;
	goto T289;
T289:;
	V138= Cnil;
	goto T290;
T290:;
	V139= Cnil;
	goto T291;
T291:;
	{object V140;
	object V141;
	object V142;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V140= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V141= vs_base[0];
	V142= car((V137));
	base[3]= make_cons((V140),(V135));
	base[4]= make_cons((V133),(V136));
	base[5]= make_cons((V141),Cnil);
	V143= list(2,(V142),list(4,VV[49],(V141),(V140),(V139)));
	base[6]= list(4,VV[36],make_cons(/* INLINE-ARGS */V143,Cnil),(V138),(V141));
	base[7]= list(3,VV[50],(V140),(V139));
	vs_top=(vs_base=base+3)+5;
	return;}}
	}
}
/*	local entry for function SETF-EXPAND-1	*/

static object LI12(V147,V148,V149)

object V147;object V148;object V149;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V150;
	V150= Cnil;
	if(!(type_of((V147))==t_cons)){
	goto T301;}
	if(!((car((V147)))==(VV[39]))){
	goto T301;}
	{object V151;
	V151= caddr((V147));
	V148= list(3,VV[39],cadr((V147)),(V148));
	V147= (V151);}
	goto TTL;
	goto T301;
T301:;
	if(!(type_of((V147))==t_cons)){
	goto T310;}
	if(!((car((V147)))==(VV[51]))){
	goto T310;}
	{register object V152;
	register object V153;
	register object V154;
	register long V155;
	V152= cdr((V147));
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V153= vs_base[0];
	V155= 0;
	V154= Cnil;
	goto T319;
T319:;
	if(!(endp_prop((V152)))){
	goto T320;}
	V156= list(2,(V153),list(2,VV[52],(V148)));
	V157= make_cons(/* INLINE-ARGS */V156,Cnil);
	V158= nreverse((V154));
	{object V159 = list(3,VV[36],/* INLINE-ARGS */V157,make_cons(VV[51],/* INLINE-ARGS */V158));
	VMR12(V159)}
	goto T320;
T320:;
	{register object V160;
	if(!(type_of(car((V152)))==t_symbol)){
	goto T327;}
	V160= VV[27];
	goto T325;
	goto T327;
T327:;
	V160= VV[53];
	goto T325;
T325:;
	{register object V161;
	V162= car((V152));
	V163 = make_fixnum(V155);
	V161= list(3,(V160),/* INLINE-ARGS */V162,list(3,VV[54],V163,(V153)));
	V154= make_cons((V161),(V154));}}
	V152= cdr((V152));
	V155= (long)(V155)+1;
	goto T319;}
	goto T310;
T310:;
	if(!(type_of((V147))==t_symbol)){
	goto T335;}
	{object V164 = list(3,VV[27],(V147),(V148));
	VMR12(V164)}
	goto T335;
T335:;
	if(!(type_of((V147))==t_cons)){
	goto T338;}
	if((get(car((V147)),VV[33],Cnil))!=Cnil){
	goto T338;}
	if((get(car((V147)),VV[31],Cnil))!=Cnil){
	goto T338;}
	base[0]= (V147);
	base[1]= (V149);
	vs_top=(vs_base=base+0)+2;
	Lmacroexpand();
	if(vs_base<vs_top){
	V147= vs_base[0];
	vs_base++;
	}else{
	V147= Cnil;}
	if(vs_base<vs_top){
	V150= vs_base[0];
	}else{
	V150= Cnil;}
	vs_top=sup;
	if(((V150))==Cnil){
	goto T338;}
	goto TTL;
	goto T338;
T338:;
	if(!(type_of(car((V147)))==t_symbol)){
	goto T355;}
	V150= get(car((V147)),VV[31],Cnil);
	if(((V150))==Cnil){
	goto T355;}
	V165= cdr((V147));
	V166= make_cons((V148),Cnil);
	V167= append(/* INLINE-ARGS */V165,/* INLINE-ARGS */V166);
	{object V168 = make_cons((V150),/* INLINE-ARGS */V167);
	VMR12(V168)}
	goto T355;
T355:;
	if(!(type_of(car((V147)))==t_symbol)){
	goto T361;}
	V150= get(car((V147)),VV[32],Cnil);
	if(((V150))==Cnil){
	goto T361;}
	{object V169 = (*(LnkLI100))(cadr((V147)),car((V150)),cdr((V150)),(V148));
	VMR12(V169)}
	goto T361;
T361:;
	{object V170;
	object V171;
	object V172;
	object V173;
	object V174;
	base[0]= (V147);
	base[1]= (V149);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk101)();
	if(vs_base>=vs_top){vs_top=sup;goto T370;}
	V170= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T371;}
	V171= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T372;}
	V172= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T373;}
	V173= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T374;}
	V174= vs_base[0];
	vs_top=sup;
	goto T375;
	goto T370;
T370:;
	V170= Cnil;
	goto T371;
T371:;
	V171= Cnil;
	goto T372;
T372:;
	V172= Cnil;
	goto T373;
T373:;
	V173= Cnil;
	goto T374;
T374:;
	V174= Cnil;
	goto T375;
T375:;
	V179= append((V170),(V172));
	V180= make_cons((V148),Cnil);
	V181= append((V171),/* INLINE-ARGS */V180);
	{object V176;
	object V177= /* INLINE-ARGS */V179;
	object V178= /* INLINE-ARGS */V181;
	if(endp(V177)||endp(V178)){
	V175= Cnil;
	goto T376;}
	base[0]=V176=MMcons(Cnil,Cnil);
	goto T377;
T377:;
	(V176->c.c_car)= list(2,(V177->c.c_car),(V178->c.c_car));
	V177=MMcdr(V177);
	V178=MMcdr(V178);
	if(endp(V177)||endp(V178)){
	V175= base[0];
	goto T376;}
	V176=MMcdr(V176)=MMcons(Cnil,Cnil);
	goto T377;}
	goto T376;
T376:;
	{object V182 = list(3,VV[55],V175,(V173));
	VMR12(V182)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SETF-STRUCTURE-ACCESS	*/

static object LI13(V187,V188,V189,V190)

object V187;object V188;object V189;object V190;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{object V191= (V188);
	if((V191!= VV[43]))goto T379;
	{object V192 = list(4,VV[56],(V187),(V189),(V190));
	VMR13(V192)}
	goto T379;
T379:;
	if((V191!= VV[102]))goto T380;
	{object V193 = list(4,VV[57],(V187),(V189),(V190));
	VMR13(V193)}
	goto T380;
T380:;
	{object V194 = list(5,VV[58],(V187),list(2,VV[3],(V188)),(V189),(V190));
	VMR13(V194)}}
	return Cnil;
}
/*	local entry for function SETF-EXPAND	*/

static object LI14(V197,V198)

register object V197;object V198;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	if(!(endp_prop((V197)))){
	goto T382;}
	{object V199 = Cnil;
	VMR14(V199)}
	goto T382;
T382:;
	if(!(endp_prop(cdr((V197))))){
	goto T385;}
	base[0]= VV[59];
	base[1]= (V197);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V200 = vs_base[0];
	VMR14(V200)}
	goto T385;
T385:;
	V201= (*(LnkLI103))(car((V197)),cadr((V197)),(V198));
	V202= (*(LnkLI104))(cddr((V197)),(V198));
	{object V203 = make_cons(/* INLINE-ARGS */V201,/* INLINE-ARGS */V202);
	VMR14(V203)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SETF-HELPER	*/

static object LI15(V206,V207)

register object V206;object V207;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	V206= cdr((V206));
	if(!(endp_prop((V206)))){
	goto T392;}
	{object V208 = Cnil;
	VMR15(V208)}
	goto T392;
T392:;
	if(!(endp_prop(cdr((V206))))){
	goto T395;}
	base[0]= VV[60];
	base[1]= (V206);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V209 = vs_base[0];
	VMR15(V209)}
	goto T395;
T395:;
	if(!(endp_prop(cddr((V206))))){
	goto T400;}
	{object V210 = (*(LnkLI103))(car((V206)),cadr((V206)),(V207));
	VMR15(V210)}
	goto T400;
T400:;
	V211= (*(LnkLI104))((V206),(V207));
	{object V212 = make_cons(VV[61],/* INLINE-ARGS */V211);
	VMR15(V212)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for PSETF	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	check_arg(2);
	vs_top=sup;
	{object V213=base[0]->c.c_cdr;
	base[2]= V213;}
	if(!(endp_prop(base[2]))){
	goto T403;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T403;
T403:;
	if(!(endp_prop(cdr(base[2])))){
	goto T406;}
	base[3]= VV[62];
	base[4]= base[2];
	vs_top=(vs_base=base+3)+2;
	Lerror();
	return;
	goto T406;
T406:;
	if(!(endp_prop(cddr(base[2])))){
	goto T411;}
	V214= (*(LnkLI103))(car(base[2]),cadr(base[2]),base[1]);
	base[3]= list(3,VV[61],/* INLINE-ARGS */V214,Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T411;
T411:;
	{register object V215;
	register object V216;
	register object V217;
	V215= base[2];
	V216= Cnil;
	V217= Cnil;
	goto T414;
T414:;
	if(!(endp_prop((V215)))){
	goto T415;}
	V218= nreverse((V217));
	base[3]= listA(3,VV[55],(V216),append(/* INLINE-ARGS */V218,VV[63]));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T415;
T415:;
	if(!(endp_prop(cdr((V215))))){
	goto T419;}
	base[3]= VV[64];
	base[4]= base[2];
	vs_top=(vs_base=base+3)+2;
	Lerror();
	vs_top=sup;
	goto T419;
T419:;
	{register object V219;
	register object V220;
	register object V221;
	register object V222;
	register object V223;
	base[3]= car((V215));
	base[4]= base[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk101)();
	if(vs_base>=vs_top){vs_top=sup;goto T428;}
	V219= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T429;}
	V220= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T430;}
	V221= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T431;}
	V222= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T432;}
	V223= vs_base[0];
	vs_top=sup;
	goto T433;
	goto T428;
T428:;
	V219= Cnil;
	goto T429;
T429:;
	V220= Cnil;
	goto T430;
T430:;
	V221= Cnil;
	goto T431;
T431:;
	V222= Cnil;
	goto T432;
T432:;
	V223= Cnil;
	goto T433;
T433:;
	V217= make_cons((V222),(V217));
	V228= append((V219),(V221));
	V229= make_cons(cadr((V215)),Cnil);
	V230= append((V220),/* INLINE-ARGS */V229);
	{object V225;
	object V226= /* INLINE-ARGS */V228;
	object V227= /* INLINE-ARGS */V230;
	if(endp(V226)||endp(V227)){
	V224= Cnil;
	goto T437;}
	base[3]=V225=MMcons(Cnil,Cnil);
	goto T438;
T438:;
	(V225->c.c_car)= list(2,(V226->c.c_car),(V227->c.c_car));
	V226=MMcdr(V226);
	V227=MMcdr(V227);
	if(endp(V226)||endp(V227)){
	V224= base[3];
	goto T437;}
	V225=MMcdr(V225)=MMcons(Cnil,Cnil);
	goto T438;}
	goto T437;
T437:;
	V216= nconc((V216),V224);}
	V215= cddr((V215));
	goto T414;}
}
/*	macro definition for SHIFTF	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	check_arg(2);
	vs_top=sup;
	{object V231=base[0]->c.c_cdr;
	base[2]= V231;}
	{register object V232;
	register object V233;
	register object V234;
	register object V235;
	register object V236;
	register object V237;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V236= vs_base[0];
	V232= base[2];
	V233= Cnil;
	V234= Cnil;
	V235= Cnil;
	V237= Cnil;
	goto T445;
T445:;
	if(!(endp_prop(cdr((V232))))){
	goto T446;}
	V234= nreverse((V234));
	V235= nreverse((V235));
	V237= nreverse((V237));
	base[3]= (V233);
	V239= list(2,(V236),car((V237)));
	base[4]= make_cons(/* INLINE-ARGS */V239,Cnil);
	{object V240;
	object V241= (V234);
	object V242= cdr((V237));
	if(endp(V241)||endp(V242)){
	base[5]= Cnil;
	goto T458;}
	base[6]=V240=MMcons(Cnil,Cnil);
	goto T459;
T459:;
	(V240->c.c_car)= list(2,(V241->c.c_car),(V242->c.c_car));
	V241=MMcdr(V241);
	V242=MMcdr(V242);
	if(endp(V241)||endp(V242)){
	base[5]= base[6];
	goto T458;}
	V240=MMcdr(V240)=MMcons(Cnil,Cnil);
	goto T459;}
	goto T458;
T458:;
	base[7]= (V234);
	vs_top=(vs_base=base+7)+1;
	Llast();
	vs_top=sup;
	V243= vs_base[0];
	V244= list(2,car(V243),car((V232)));
	base[6]= make_cons(/* INLINE-ARGS */V244,Cnil);
	vs_top=(vs_base=base+3)+4;
	Lnconc();
	vs_top=sup;
	V238= vs_base[0];
	V245= make_cons((V236),Cnil);
	base[3]= listA(3,VV[55],V238,append((V235),/* INLINE-ARGS */V245));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T446;
T446:;
	{register object V246;
	register object V247;
	register object V248;
	register object V249;
	register object V250;
	base[3]= car((V232));
	base[4]= base[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk101)();
	if(vs_base>=vs_top){vs_top=sup;goto T469;}
	V246= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T470;}
	V247= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T471;}
	V248= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T472;}
	V249= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T473;}
	V250= vs_base[0];
	vs_top=sup;
	goto T474;
	goto T469;
T469:;
	V246= Cnil;
	goto T470;
T470:;
	V247= Cnil;
	goto T471;
T471:;
	V248= Cnil;
	goto T472;
T472:;
	V249= Cnil;
	goto T473;
T473:;
	V250= Cnil;
	goto T474;
T474:;
	{object V252;
	object V253= (V246);
	object V254= (V247);
	if(endp(V253)||endp(V254)){
	V251= Cnil;
	goto T477;}
	base[3]=V252=MMcons(Cnil,Cnil);
	goto T478;
T478:;
	(V252->c.c_car)= list(2,(V253->c.c_car),(V254->c.c_car));
	V253=MMcdr(V253);
	V254=MMcdr(V254);
	if(endp(V253)||endp(V254)){
	V251= base[3];
	goto T477;}
	V252=MMcdr(V252)=MMcons(Cnil,Cnil);
	goto T478;}
	goto T477;
T477:;
	V233= nconc((V233),V251);
	V234= make_cons(car((V248)),(V234));
	V235= make_cons((V249),(V235));
	V237= make_cons((V250),(V237));}
	V232= cdr((V232));
	goto T445;}
}
/*	macro definition for ROTATEF	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	check_arg(2);
	vs_top=sup;
	{object V255=base[0]->c.c_cdr;
	base[2]= V255;}
	{register object V256;
	register object V257;
	register object V258;
	register object V259;
	register object V260;
	V256= base[2];
	V257= Cnil;
	V258= Cnil;
	V259= Cnil;
	V260= Cnil;
	goto T489;
T489:;
	if(!(endp_prop((V256)))){
	goto T490;}
	V258= nreverse((V258));
	V259= nreverse((V259));
	V260= nreverse((V260));
	base[3]= (V257);
	{object V262;
	object V263= (V258);
	object V264= cdr((V260));
	if(endp(V263)||endp(V264)){
	base[4]= Cnil;
	goto T501;}
	base[5]=V262=MMcons(Cnil,Cnil);
	goto T502;
T502:;
	(V262->c.c_car)= list(2,(V263->c.c_car),(V264->c.c_car));
	V263=MMcdr(V263);
	V264=MMcdr(V264);
	if(endp(V263)||endp(V264)){
	base[4]= base[5];
	goto T501;}
	V262=MMcdr(V262)=MMcons(Cnil,Cnil);
	goto T502;}
	goto T501;
T501:;
	base[6]= (V258);
	vs_top=(vs_base=base+6)+1;
	Llast();
	vs_top=sup;
	V265= vs_base[0];
	V266= list(2,car(V265),car((V260)));
	base[5]= make_cons(/* INLINE-ARGS */V266,Cnil);
	vs_top=(vs_base=base+3)+3;
	Lnconc();
	vs_top=sup;
	V261= vs_base[0];
	base[3]= listA(3,VV[55],V261,append((V259),VV[65]));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T490;
T490:;
	{register object V267;
	register object V268;
	register object V269;
	register object V270;
	register object V271;
	base[3]= car((V256));
	base[4]= base[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk101)();
	if(vs_base>=vs_top){vs_top=sup;goto T512;}
	V267= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T513;}
	V268= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T514;}
	V269= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T515;}
	V270= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T516;}
	V271= vs_base[0];
	vs_top=sup;
	goto T517;
	goto T512;
T512:;
	V267= Cnil;
	goto T513;
T513:;
	V268= Cnil;
	goto T514;
T514:;
	V269= Cnil;
	goto T515;
T515:;
	V270= Cnil;
	goto T516;
T516:;
	V271= Cnil;
	goto T517;
T517:;
	{object V273;
	object V274= (V267);
	object V275= (V268);
	if(endp(V274)||endp(V275)){
	V272= Cnil;
	goto T520;}
	base[3]=V273=MMcons(Cnil,Cnil);
	goto T521;
T521:;
	(V273->c.c_car)= list(2,(V274->c.c_car),(V275->c.c_car));
	V274=MMcdr(V274);
	V275=MMcdr(V275);
	if(endp(V274)||endp(V275)){
	V272= base[3];
	goto T520;}
	V273=MMcdr(V273)=MMcons(Cnil,Cnil);
	goto T521;}
	goto T520;
T520:;
	V257= nconc((V257),V272);
	V258= make_cons(car((V269)),(V258));
	V259= make_cons((V270),(V259));
	V260= make_cons((V271),(V260));}
	V256= cdr((V256));
	goto T489;}
}
/*	macro definition for DEFINE-MODIFY-MACRO	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	check_arg(2);
	vs_top=sup;
	{object V276=base[0]->c.c_cdr;
	if(endp(V276))invalid_macro_call();
	base[2]= (V276->c.c_car);
	V276=V276->c.c_cdr;
	if(endp(V276))invalid_macro_call();
	base[3]= (V276->c.c_car);
	V276=V276->c.c_cdr;
	if(endp(V276))invalid_macro_call();
	base[4]= (V276->c.c_car);
	V276=V276->c.c_cdr;
	if(endp(V276)){
	base[5]= Cnil;
	} else {
	base[5]= (V276->c.c_car);
	V276=V276->c.c_cdr;}
	if(!endp(V276))invalid_macro_call();}
	{object V277;
	{register object V278;
	register object V279;
	V278= base[3];
	V279= Cnil;
	goto T534;
T534:;
	if(((V278))!=Cnil){
	goto T535;}
	V280= list(2,VV[3],base[4]);
	V277= listA(4,VV[43],/* INLINE-ARGS */V280,VV[66],nreverse((V279)));
	goto T532;
	goto T535;
T535:;
	if((car((V278)))==(VV[67])){
	goto T539;}
	if(!((car((V278)))==(VV[68]))){
	goto T542;}
	V281= list(2,VV[3],base[4]);
	V282= nreverse((V279));
	V283= make_cons(cadr((V278)),Cnil);
	V277= listA(4,VV[69],/* INLINE-ARGS */V281,VV[66],append(/* INLINE-ARGS */V282,/* INLINE-ARGS */V283));
	goto T532;
	goto T542;
T542:;
	if(!(type_of(car((V278)))==t_symbol)){
	goto T546;}
	V279= make_cons(car((V278)),(V279));
	goto T539;
	goto T546;
T546:;
	V279= make_cons(caar((V278)),(V279));
	goto T539;
T539:;
	V278= cdr((V278));
	goto T534;}
	goto T532;
T532:;
	V284= listA(4,VV[71],VV[72],VV[73],base[3]);
	if((base[5])==Cnil){
	goto T555;}
	V285= make_cons(base[5],Cnil);
	goto T553;
	goto T555;
T555:;
	V285= Cnil;
	goto T553;
T553:;
	V286= list(3,VV[74],VV[75],list(3,VV[76],base[2],list(3,VV[36],VV[77],list(4,VV[43],VV[78],VV[73],(V277)))));
	V287= list(2,/* INLINE-ARGS */V286,list(4,VV[79],VV[80],VV[81],list(4,VV[43],VV[82],list(4,VV[83],VV[84],VV[85],list(3,VV[42],VV[86],list(2,VV[43],(V277)))),VV[87])));
	base[6]= listA(4,VV[70],base[2],/* INLINE-ARGS */V284,append(V285,/* INLINE-ARGS */V287));
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	macro definition for REMF	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	check_arg(2);
	vs_top=sup;
	{object V288=base[0]->c.c_cdr;
	if(endp(V288))invalid_macro_call();
	base[2]= (V288->c.c_car);
	V288=V288->c.c_cdr;
	if(endp(V288))invalid_macro_call();
	base[3]= (V288->c.c_car);
	V288=V288->c.c_cdr;
	if(!endp(V288))invalid_macro_call();}
	{object V289;
	object V290;
	object V291;
	object V292;
	object V293;
	base[4]= base[2];
	base[5]= base[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk101)();
	if(vs_base>=vs_top){vs_top=sup;goto T560;}
	V289= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T561;}
	V290= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T562;}
	V291= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T563;}
	V292= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T564;}
	V293= vs_base[0];
	vs_top=sup;
	goto T565;
	goto T560;
T560:;
	V289= Cnil;
	goto T561;
T561:;
	V290= Cnil;
	goto T562;
T562:;
	V291= Cnil;
	goto T563;
T563:;
	V292= Cnil;
	goto T564;
T564:;
	V293= Cnil;
	goto T565;
T565:;
	{object V295;
	object V296= (V289);
	object V297= (V290);
	if(endp(V296)||endp(V297)){
	V294= Cnil;
	goto T566;}
	base[4]=V295=MMcons(Cnil,Cnil);
	goto T567;
T567:;
	(V295->c.c_car)= list(2,(V296->c.c_car),(V297->c.c_car));
	V296=MMcdr(V296);
	V297=MMcdr(V297);
	if(endp(V296)||endp(V297)){
	V294= base[4];
	goto T566;}
	V295=MMcdr(V295)=MMcons(Cnil,Cnil);
	goto T567;}
	goto T566;
T566:;
	V298= list(2,car((V291)),VV[88]);
	base[4]= list(3,VV[55],V294,list(5,VV[79],/* INLINE-ARGS */V298,list(3,VV[89],(V293),base[3]),(V292),VV[88]));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for INCF	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	check_arg(2);
	vs_top=sup;
	{object V299=base[0]->c.c_cdr;
	if(endp(V299))invalid_macro_call();
	base[2]= (V299->c.c_car);
	V299=V299->c.c_cdr;
	if(endp(V299)){
	base[3]= small_fixnum(1);
	} else {
	base[3]= (V299->c.c_car);
	V299=V299->c.c_cdr;}
	if(!endp(V299))invalid_macro_call();}
	if(!(type_of(base[2])==t_symbol)){
	goto T570;}
	base[4]= list(3,VV[27],base[2],list(3,VV[90],base[2],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T570;
T570:;
	{object V301;
	object V302;
	object V303;
	object V304;
	object V305;
	base[4]= base[2];
	base[5]= base[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk101)();
	if(vs_base>=vs_top){vs_top=sup;goto T576;}
	V301= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T577;}
	V302= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T578;}
	V303= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T579;}
	V304= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T580;}
	V305= vs_base[0];
	vs_top=sup;
	goto T581;
	goto T576;
T576:;
	V301= Cnil;
	goto T577;
T577:;
	V302= Cnil;
	goto T578;
T578:;
	V303= Cnil;
	goto T579;
T579:;
	V304= Cnil;
	goto T580;
T580:;
	V305= Cnil;
	goto T581;
T581:;
	V310= append((V301),(V303));
	V311= list(3,VV[90],(V305),base[3]);
	V312= make_cons(/* INLINE-ARGS */V311,Cnil);
	V313= append((V302),/* INLINE-ARGS */V312);
	{object V307;
	object V308= /* INLINE-ARGS */V310;
	object V309= /* INLINE-ARGS */V313;
	if(endp(V308)||endp(V309)){
	V306= Cnil;
	goto T582;}
	base[4]=V307=MMcons(Cnil,Cnil);
	goto T583;
T583:;
	(V307->c.c_car)= list(2,(V308->c.c_car),(V309->c.c_car));
	V308=MMcdr(V308);
	V309=MMcdr(V309);
	if(endp(V308)||endp(V309)){
	V306= base[4];
	goto T582;}
	V307=MMcdr(V307)=MMcons(Cnil,Cnil);
	goto T583;}
	goto T582;
T582:;
	base[4]= list(3,VV[55],V306,(V304));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for DECF	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	check_arg(2);
	vs_top=sup;
	{object V314=base[0]->c.c_cdr;
	if(endp(V314))invalid_macro_call();
	base[2]= (V314->c.c_car);
	V314=V314->c.c_cdr;
	if(endp(V314)){
	base[3]= small_fixnum(1);
	} else {
	base[3]= (V314->c.c_car);
	V314=V314->c.c_cdr;}
	if(!endp(V314))invalid_macro_call();}
	if(!(type_of(base[2])==t_symbol)){
	goto T586;}
	base[4]= list(3,VV[27],base[2],list(3,VV[91],base[2],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T586;
T586:;
	{object V316;
	object V317;
	object V318;
	object V319;
	object V320;
	base[4]= base[2];
	base[5]= base[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk101)();
	if(vs_base>=vs_top){vs_top=sup;goto T592;}
	V316= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T593;}
	V317= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T594;}
	V318= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T595;}
	V319= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T596;}
	V320= vs_base[0];
	vs_top=sup;
	goto T597;
	goto T592;
T592:;
	V316= Cnil;
	goto T593;
T593:;
	V317= Cnil;
	goto T594;
T594:;
	V318= Cnil;
	goto T595;
T595:;
	V319= Cnil;
	goto T596;
T596:;
	V320= Cnil;
	goto T597;
T597:;
	V325= append((V316),(V318));
	V326= list(3,VV[91],(V320),base[3]);
	V327= make_cons(/* INLINE-ARGS */V326,Cnil);
	V328= append((V317),/* INLINE-ARGS */V327);
	{object V322;
	object V323= /* INLINE-ARGS */V325;
	object V324= /* INLINE-ARGS */V328;
	if(endp(V323)||endp(V324)){
	V321= Cnil;
	goto T598;}
	base[4]=V322=MMcons(Cnil,Cnil);
	goto T599;
T599:;
	(V322->c.c_car)= list(2,(V323->c.c_car),(V324->c.c_car));
	V323=MMcdr(V323);
	V324=MMcdr(V324);
	if(endp(V323)||endp(V324)){
	V321= base[4];
	goto T598;}
	V322=MMcdr(V322)=MMcons(Cnil,Cnil);
	goto T599;}
	goto T598;
T598:;
	base[4]= list(3,VV[55],V321,(V319));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for PUSH	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	check_arg(2);
	vs_top=sup;
	{object V329=base[0]->c.c_cdr;
	if(endp(V329))invalid_macro_call();
	base[2]= (V329->c.c_car);
	V329=V329->c.c_cdr;
	if(endp(V329))invalid_macro_call();
	base[3]= (V329->c.c_car);
	V329=V329->c.c_cdr;
	if(!endp(V329))invalid_macro_call();}
	{register object V330;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V330= vs_base[0];
	if(!(type_of(base[3])==t_symbol)){
	goto T602;}
	V331= list(2,(V330),base[2]);
	V332= make_cons(/* INLINE-ARGS */V331,Cnil);
	base[4]= list(3,VV[55],/* INLINE-ARGS */V332,list(3,VV[27],base[3],list(3,VV[92],(V330),base[3])));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T602;
T602:;
	{object V333;
	object V334;
	object V335;
	object V336;
	object V337;
	base[4]= base[3];
	base[5]= base[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk101)();
	if(vs_base>=vs_top){vs_top=sup;goto T608;}
	V333= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T609;}
	V334= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T610;}
	V335= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T611;}
	V336= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T612;}
	V337= vs_base[0];
	vs_top=sup;
	goto T613;
	goto T608;
T608:;
	V333= Cnil;
	goto T609;
T609:;
	V334= Cnil;
	goto T610;
T610:;
	V335= Cnil;
	goto T611;
T611:;
	V336= Cnil;
	goto T612;
T612:;
	V337= Cnil;
	goto T613;
T613:;
	base[5]= make_cons((V330),Cnil);
	base[6]= (V333);
	base[7]= (V335);
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V342= vs_base[0];
	base[5]= make_cons(base[2],Cnil);
	base[6]= (V334);
	V344= list(3,VV[92],(V330),(V337));
	base[7]= make_cons(/* INLINE-ARGS */V344,Cnil);
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V343= vs_base[0];
	{object V339;
	object V340= V342;
	object V341= V343;
	if(endp(V340)||endp(V341)){
	V338= Cnil;
	goto T614;}
	base[4]=V339=MMcons(Cnil,Cnil);
	goto T615;
T615:;
	(V339->c.c_car)= list(2,(V340->c.c_car),(V341->c.c_car));
	V340=MMcdr(V340);
	V341=MMcdr(V341);
	if(endp(V340)||endp(V341)){
	V338= base[4];
	goto T614;}
	V339=MMcdr(V339)=MMcons(Cnil,Cnil);
	goto T615;}
	goto T614;
T614:;
	base[4]= list(3,VV[55],V338,(V336));
	vs_top=(vs_base=base+4)+1;
	return;}}
}
/*	macro definition for PUSHNEW	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	check_arg(2);
	vs_top=sup;
	{object V345=base[0]->c.c_cdr;
	if(endp(V345))invalid_macro_call();
	base[2]= (V345->c.c_car);
	V345=V345->c.c_cdr;
	if(endp(V345))invalid_macro_call();
	base[3]= (V345->c.c_car);
	V345=V345->c.c_cdr;
	base[4]= V345;}
	{register object V346;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V346= vs_base[0];
	if(!(type_of(base[3])==t_symbol)){
	goto T626;}
	V347= list(2,(V346),base[2]);
	V348= make_cons(/* INLINE-ARGS */V347,Cnil);
	base[5]= list(3,VV[55],/* INLINE-ARGS */V348,list(3,VV[27],base[3],listA(4,VV[93],(V346),base[3],base[4])));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T626;
T626:;
	{object V349;
	object V350;
	object V351;
	object V352;
	object V353;
	base[5]= base[3];
	base[6]= base[1];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk101)();
	if(vs_base>=vs_top){vs_top=sup;goto T632;}
	V349= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T633;}
	V350= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T634;}
	V351= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T635;}
	V352= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T636;}
	V353= vs_base[0];
	vs_top=sup;
	goto T637;
	goto T632;
T632:;
	V349= Cnil;
	goto T633;
T633:;
	V350= Cnil;
	goto T634;
T634:;
	V351= Cnil;
	goto T635;
T635:;
	V352= Cnil;
	goto T636;
T636:;
	V353= Cnil;
	goto T637;
T637:;
	base[6]= make_cons((V346),Cnil);
	base[7]= (V349);
	base[8]= (V351);
	vs_top=(vs_base=base+6)+3;
	Lappend();
	vs_top=sup;
	V358= vs_base[0];
	base[6]= make_cons(base[2],Cnil);
	base[7]= (V350);
	V360= listA(4,VV[93],(V346),(V353),base[4]);
	base[8]= make_cons(/* INLINE-ARGS */V360,Cnil);
	vs_top=(vs_base=base+6)+3;
	Lappend();
	vs_top=sup;
	V359= vs_base[0];
	{object V355;
	object V356= V358;
	object V357= V359;
	if(endp(V356)||endp(V357)){
	V354= Cnil;
	goto T638;}
	base[5]=V355=MMcons(Cnil,Cnil);
	goto T639;
T639:;
	(V355->c.c_car)= list(2,(V356->c.c_car),(V357->c.c_car));
	V356=MMcdr(V356);
	V357=MMcdr(V357);
	if(endp(V356)||endp(V357)){
	V354= base[5];
	goto T638;}
	V355=MMcdr(V355)=MMcons(Cnil,Cnil);
	goto T639;}
	goto T638;
T638:;
	base[5]= list(3,VV[55],V354,(V352));
	vs_top=(vs_base=base+5)+1;
	return;}}
}
/*	macro definition for POP	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_reserve(VM25);
	check_arg(2);
	vs_top=sup;
	{object V361=base[0]->c.c_cdr;
	if(endp(V361))invalid_macro_call();
	base[2]= (V361->c.c_car);
	V361=V361->c.c_cdr;
	if(!endp(V361))invalid_macro_call();}
	if(!(type_of(base[2])==t_symbol)){
	goto T649;}
	{object V362;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V362= vs_base[0];
	V363= list(2,(V362),list(2,VV[94],base[2]));
	V364= make_cons(/* INLINE-ARGS */V363,Cnil);
	base[3]= list(4,VV[36],/* INLINE-ARGS */V364,list(3,VV[27],base[2],list(2,VV[95],base[2])),(V362));
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T649;
T649:;
	{object V365;
	object V366;
	object V367;
	object V368;
	object V369;
	base[3]= base[2];
	base[4]= base[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk101)();
	if(vs_base>=vs_top){vs_top=sup;goto T656;}
	V365= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T657;}
	V366= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T658;}
	V367= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T659;}
	V368= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T660;}
	V369= vs_base[0];
	vs_top=sup;
	goto T661;
	goto T656;
T656:;
	V365= Cnil;
	goto T657;
T657:;
	V366= Cnil;
	goto T658;
T658:;
	V367= Cnil;
	goto T659;
T659:;
	V368= Cnil;
	goto T660;
T660:;
	V369= Cnil;
	goto T661;
T661:;
	V374= append((V365),(V367));
	V375= list(2,VV[95],(V369));
	V376= make_cons(/* INLINE-ARGS */V375,Cnil);
	V377= append((V366),/* INLINE-ARGS */V376);
	{object V371;
	object V372= /* INLINE-ARGS */V374;
	object V373= /* INLINE-ARGS */V377;
	if(endp(V372)||endp(V373)){
	V370= Cnil;
	goto T662;}
	base[3]=V371=MMcons(Cnil,Cnil);
	goto T663;
T663:;
	(V371->c.c_car)= list(2,(V372->c.c_car),(V373->c.c_car));
	V372=MMcdr(V372);
	V373=MMcdr(V373);
	if(endp(V372)||endp(V373)){
	V370= base[3];
	goto T662;}
	V371=MMcdr(V371)=MMcons(Cnil,Cnil);
	goto T663;}
	goto T662;
T662:;
	base[3]= list(3,VV[55],V370,list(3,VV[96],list(2,VV[94],(V369)),(V368)));
	vs_top=(vs_base=base+3)+1;
	return;}
}
static object  LnkTLI104(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[104],(void **)(void *)&LnkLI104,2,first,ap);va_end(ap);return V1;} /* SETF-EXPAND */
static object  LnkTLI103(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[103],(void **)(void *)&LnkLI103,3,first,ap);va_end(ap);return V1;} /* SETF-EXPAND-1 */
static void LnkT101(){ call_or_link(VV[101],(void **)(void *)&Lnk101);} /* GET-SETF-METHOD */
static object  LnkTLI100(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[100],(void **)(void *)&LnkLI100,4,first,ap);va_end(ap);return V1;} /* SETF-STRUCTURE-ACCESS */
static void LnkT99(){ call_or_link(VV[99],(void **)(void *)&Lnk99);} /* GET-SETF-METHOD-MULTIPLE-VALUE */
static void LnkT98(){ call_or_link(VV[98],(void **)(void *)&Lnk98);} /* GET-&ENVIRONMENT */
static object  LnkTLI97(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[97],(void **)(void *)&LnkLI97,1,first,ap);va_end(ap);return V1;} /* FIND-DOCUMENTATION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

