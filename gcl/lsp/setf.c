
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
	V15= (*(LnkLI93))(cddr(base[3]));
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
	(void) (*Lnk94)();
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
	V25= (*(LnkLI93))(cdr(base[3]));
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
	(void) (*Lnk95)();
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
	(void) (*Lnk95)();
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
	base[5]= (*(LnkLI96))(car((V41)),car((V37)),cdr((V37)),(V42));
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
	(void) (*Lnk95)();
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
/*	function definition for G1368	*/

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
	(void) (*Lnk97)();
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
/*	function definition for G1370	*/

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
	(void) (*Lnk97)();
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
/*	function definition for G1372	*/

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
	(void) (*Lnk97)();
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
/*	function definition for G1373	*/

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
	(void) (*Lnk97)();
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
/*	function definition for G1375	*/

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
	(void) (*Lnk97)();
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
/*	function definition for G1377	*/

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
	(void) (*Lnk97)();
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

register object V147;register object V148;register object V149;
{	 VMB12 VMS12 VMV12
goto TTL;
TTL:;
	{register object V150;
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
	if(!(type_of((V147))==t_symbol)){
	goto T310;}
	{object V152 = list(3,VV[27],(V147),(V148));
	VMR12(V152)}
goto T310;
T310:;
	if(!(type_of((V147))==t_cons)){
	goto T313;}
	if((get(car((V147)),VV[33],Cnil))!=Cnil){
	goto T313;}
	if((get(car((V147)),VV[31],Cnil))!=Cnil){
	goto T313;}
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
	goto T313;}
	goto TTL;
goto T313;
T313:;
	if(!(type_of(car((V147)))==t_symbol)){
	goto T330;}
	V150= get(car((V147)),VV[31],Cnil);
	if(((V150))==Cnil){
	goto T330;}
	V153= cdr((V147));
	V154= make_cons((V148),Cnil);
	V155= append(/* INLINE-ARGS */V153,/* INLINE-ARGS */V154);
	{object V156 = make_cons((V150),/* INLINE-ARGS */V155);
	VMR12(V156)}
goto T330;
T330:;
	if(!(type_of(car((V147)))==t_symbol)){
	goto T336;}
	V150= get(car((V147)),VV[32],Cnil);
	if(((V150))==Cnil){
	goto T336;}
	{object V157 = (*(LnkLI96))(cadr((V147)),car((V150)),cdr((V150)),(V148));
	VMR12(V157)}
goto T336;
T336:;
	{object V158;
	object V159;
	object V160;
	object V161;
	object V162;
	base[0]= (V147);
	base[1]= (V149);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk97)();
	if(vs_base>=vs_top){vs_top=sup;goto T345;}
	V158= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T346;}
	V159= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T347;}
	V160= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T348;}
	V161= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T349;}
	V162= vs_base[0];
	vs_top=sup;
	goto T350;
goto T345;
T345:;
	V158= Cnil;
goto T346;
T346:;
	V159= Cnil;
goto T347;
T347:;
	V160= Cnil;
goto T348;
T348:;
	V161= Cnil;
goto T349;
T349:;
	V162= Cnil;
goto T350;
T350:;
	V167= append((V158),(V160));
	V168= make_cons((V148),Cnil);
	V169= append((V159),/* INLINE-ARGS */V168);
	{object V164;
	object V165= /* INLINE-ARGS */V167;
	object V166= /* INLINE-ARGS */V169;
	if(endp(V165)||endp(V166)){
	V163= Cnil;
	goto T351;}
	base[0]=V164=MMcons(Cnil,Cnil);
goto T352;
T352:;
	(V164->c.c_car)= list(2,(V165->c.c_car),(V166->c.c_car));
	V165=MMcdr(V165);
	V166=MMcdr(V166);
	if(endp(V165)||endp(V166)){
	V163= base[0];
	goto T351;}
	V164=MMcdr(V164)=MMcons(Cnil,Cnil);
	goto T352;}
goto T351;
T351:;
	{object V170 = list(3,VV[51],V163,(V161));
	VMR12(V170)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SETF-STRUCTURE-ACCESS	*/

static object LI13(V175,V176,V177,V178)

object V175;object V176;object V177;object V178;
{	 VMB13 VMS13 VMV13
goto TTL;
TTL:;
	{object V179= (V176);
	if((V179!= VV[43]))goto T354;
	{object V180 = list(4,VV[52],(V175),(V177),(V178));
	VMR13(V180)}
goto T354;
T354:;
	if((V179!= VV[98]))goto T355;
	{object V181 = list(4,VV[53],(V175),(V177),(V178));
	VMR13(V181)}
goto T355;
T355:;
	{object V182 = list(5,VV[54],(V175),list(2,VV[3],(V176)),(V177),(V178));
	VMR13(V182)}}
	return Cnil;
}
/*	local entry for function SETF-EXPAND	*/

static object LI14(V185,V186)

register object V185;object V186;
{	 VMB14 VMS14 VMV14
goto TTL;
TTL:;
	if(!(endp_prop((V185)))){
	goto T357;}
	{object V187 = Cnil;
	VMR14(V187)}
goto T357;
T357:;
	if(!(endp_prop(cdr((V185))))){
	goto T360;}
	base[0]= VV[55];
	base[1]= (V185);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V188 = vs_base[0];
	VMR14(V188)}
goto T360;
T360:;
	V189= (*(LnkLI99))(car((V185)),cadr((V185)),(V186));
	V190= (*(LnkLI100))(cddr((V185)),(V186));
	{object V191 = make_cons(/* INLINE-ARGS */V189,/* INLINE-ARGS */V190);
	VMR14(V191)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SETF-HELPER	*/

static object LI15(V194,V195)

register object V194;object V195;
{	 VMB15 VMS15 VMV15
goto TTL;
TTL:;
	V194= cdr((V194));
	if(!(endp_prop((V194)))){
	goto T367;}
	{object V196 = Cnil;
	VMR15(V196)}
goto T367;
T367:;
	if(!(endp_prop(cdr((V194))))){
	goto T370;}
	base[0]= VV[56];
	base[1]= (V194);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V197 = vs_base[0];
	VMR15(V197)}
goto T370;
T370:;
	if(!(endp_prop(cddr((V194))))){
	goto T375;}
	{object V198 = (*(LnkLI99))(car((V194)),cadr((V194)),(V195));
	VMR15(V198)}
goto T375;
T375:;
	V199= (*(LnkLI100))((V194),(V195));
	{object V200 = make_cons(VV[57],/* INLINE-ARGS */V199);
	VMR15(V200)}
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
	{object V201=base[0]->c.c_cdr;
	base[2]= V201;}
	if(!(endp_prop(base[2]))){
	goto T378;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
goto T378;
T378:;
	if(!(endp_prop(cdr(base[2])))){
	goto T381;}
	base[3]= VV[58];
	base[4]= base[2];
	vs_top=(vs_base=base+3)+2;
	Lerror();
	return;
goto T381;
T381:;
	if(!(endp_prop(cddr(base[2])))){
	goto T386;}
	V202= (*(LnkLI99))(car(base[2]),cadr(base[2]),base[1]);
	base[3]= list(3,VV[57],/* INLINE-ARGS */V202,Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
goto T386;
T386:;
	{register object V203;
	register object V204;
	register object V205;
	V203= base[2];
	V204= Cnil;
	V205= Cnil;
goto T389;
T389:;
	if(!(endp_prop((V203)))){
	goto T390;}
	V206= nreverse((V205));
	base[3]= listA(3,VV[51],(V204),append(/* INLINE-ARGS */V206,VV[59]));
	vs_top=(vs_base=base+3)+1;
	return;
goto T390;
T390:;
	if(!(endp_prop(cdr((V203))))){
	goto T394;}
	base[3]= VV[60];
	base[4]= base[2];
	vs_top=(vs_base=base+3)+2;
	Lerror();
	vs_top=sup;
goto T394;
T394:;
	{register object V207;
	register object V208;
	register object V209;
	register object V210;
	register object V211;
	base[3]= car((V203));
	base[4]= base[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk97)();
	if(vs_base>=vs_top){vs_top=sup;goto T403;}
	V207= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T404;}
	V208= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T405;}
	V209= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T406;}
	V210= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T407;}
	V211= vs_base[0];
	vs_top=sup;
	goto T408;
goto T403;
T403:;
	V207= Cnil;
goto T404;
T404:;
	V208= Cnil;
goto T405;
T405:;
	V209= Cnil;
goto T406;
T406:;
	V210= Cnil;
goto T407;
T407:;
	V211= Cnil;
goto T408;
T408:;
	V205= make_cons((V210),(V205));
	V216= append((V207),(V209));
	V217= make_cons(cadr((V203)),Cnil);
	V218= append((V208),/* INLINE-ARGS */V217);
	{object V213;
	object V214= /* INLINE-ARGS */V216;
	object V215= /* INLINE-ARGS */V218;
	if(endp(V214)||endp(V215)){
	V212= Cnil;
	goto T412;}
	base[3]=V213=MMcons(Cnil,Cnil);
goto T413;
T413:;
	(V213->c.c_car)= list(2,(V214->c.c_car),(V215->c.c_car));
	V214=MMcdr(V214);
	V215=MMcdr(V215);
	if(endp(V214)||endp(V215)){
	V212= base[3];
	goto T412;}
	V213=MMcdr(V213)=MMcons(Cnil,Cnil);
	goto T413;}
goto T412;
T412:;
	V204= nconc((V204),V212);}
	V203= cddr((V203));
	goto T389;}
}
/*	macro definition for SHIFTF	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	check_arg(2);
	vs_top=sup;
	{object V219=base[0]->c.c_cdr;
	base[2]= V219;}
	{register object V220;
	register object V221;
	register object V222;
	register object V223;
	register object V224;
	register object V225;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V224= vs_base[0];
	V220= base[2];
	V221= Cnil;
	V222= Cnil;
	V223= Cnil;
	V225= Cnil;
goto T420;
T420:;
	if(!(endp_prop(cdr((V220))))){
	goto T421;}
	V222= nreverse((V222));
	V223= nreverse((V223));
	V225= nreverse((V225));
	base[3]= (V221);
	V227= list(2,(V224),car((V225)));
	base[4]= make_cons(/* INLINE-ARGS */V227,Cnil);
	{object V228;
	object V229= (V222);
	object V230= cdr((V225));
	if(endp(V229)||endp(V230)){
	base[5]= Cnil;
	goto T433;}
	base[6]=V228=MMcons(Cnil,Cnil);
goto T434;
T434:;
	(V228->c.c_car)= list(2,(V229->c.c_car),(V230->c.c_car));
	V229=MMcdr(V229);
	V230=MMcdr(V230);
	if(endp(V229)||endp(V230)){
	base[5]= base[6];
	goto T433;}
	V228=MMcdr(V228)=MMcons(Cnil,Cnil);
	goto T434;}
goto T433;
T433:;
	base[7]= (V222);
	vs_top=(vs_base=base+7)+1;
	Llast();
	vs_top=sup;
	V231= vs_base[0];
	V232= list(2,car(V231),car((V220)));
	base[6]= make_cons(/* INLINE-ARGS */V232,Cnil);
	vs_top=(vs_base=base+3)+4;
	Lnconc();
	vs_top=sup;
	V226= vs_base[0];
	V233= make_cons((V224),Cnil);
	base[3]= listA(3,VV[51],V226,append((V223),/* INLINE-ARGS */V233));
	vs_top=(vs_base=base+3)+1;
	return;
goto T421;
T421:;
	{register object V234;
	register object V235;
	register object V236;
	register object V237;
	register object V238;
	base[3]= car((V220));
	base[4]= base[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk97)();
	if(vs_base>=vs_top){vs_top=sup;goto T444;}
	V234= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T445;}
	V235= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T446;}
	V236= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T447;}
	V237= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T448;}
	V238= vs_base[0];
	vs_top=sup;
	goto T449;
goto T444;
T444:;
	V234= Cnil;
goto T445;
T445:;
	V235= Cnil;
goto T446;
T446:;
	V236= Cnil;
goto T447;
T447:;
	V237= Cnil;
goto T448;
T448:;
	V238= Cnil;
goto T449;
T449:;
	{object V240;
	object V241= (V234);
	object V242= (V235);
	if(endp(V241)||endp(V242)){
	V239= Cnil;
	goto T452;}
	base[3]=V240=MMcons(Cnil,Cnil);
goto T453;
T453:;
	(V240->c.c_car)= list(2,(V241->c.c_car),(V242->c.c_car));
	V241=MMcdr(V241);
	V242=MMcdr(V242);
	if(endp(V241)||endp(V242)){
	V239= base[3];
	goto T452;}
	V240=MMcdr(V240)=MMcons(Cnil,Cnil);
	goto T453;}
goto T452;
T452:;
	V221= nconc((V221),V239);
	V222= make_cons(car((V236)),(V222));
	V223= make_cons((V237),(V223));
	V225= make_cons((V238),(V225));}
	V220= cdr((V220));
	goto T420;}
}
/*	macro definition for ROTATEF	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	check_arg(2);
	vs_top=sup;
	{object V243=base[0]->c.c_cdr;
	base[2]= V243;}
	{register object V244;
	register object V245;
	register object V246;
	register object V247;
	register object V248;
	V244= base[2];
	V245= Cnil;
	V246= Cnil;
	V247= Cnil;
	V248= Cnil;
goto T464;
T464:;
	if(!(endp_prop((V244)))){
	goto T465;}
	V246= nreverse((V246));
	V247= nreverse((V247));
	V248= nreverse((V248));
	base[3]= (V245);
	{object V250;
	object V251= (V246);
	object V252= cdr((V248));
	if(endp(V251)||endp(V252)){
	base[4]= Cnil;
	goto T476;}
	base[5]=V250=MMcons(Cnil,Cnil);
goto T477;
T477:;
	(V250->c.c_car)= list(2,(V251->c.c_car),(V252->c.c_car));
	V251=MMcdr(V251);
	V252=MMcdr(V252);
	if(endp(V251)||endp(V252)){
	base[4]= base[5];
	goto T476;}
	V250=MMcdr(V250)=MMcons(Cnil,Cnil);
	goto T477;}
goto T476;
T476:;
	base[6]= (V246);
	vs_top=(vs_base=base+6)+1;
	Llast();
	vs_top=sup;
	V253= vs_base[0];
	V254= list(2,car(V253),car((V248)));
	base[5]= make_cons(/* INLINE-ARGS */V254,Cnil);
	vs_top=(vs_base=base+3)+3;
	Lnconc();
	vs_top=sup;
	V249= vs_base[0];
	base[3]= listA(3,VV[51],V249,append((V247),VV[61]));
	vs_top=(vs_base=base+3)+1;
	return;
goto T465;
T465:;
	{register object V255;
	register object V256;
	register object V257;
	register object V258;
	register object V259;
	base[3]= car((V244));
	base[4]= base[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk97)();
	if(vs_base>=vs_top){vs_top=sup;goto T487;}
	V255= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T488;}
	V256= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T489;}
	V257= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T490;}
	V258= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T491;}
	V259= vs_base[0];
	vs_top=sup;
	goto T492;
goto T487;
T487:;
	V255= Cnil;
goto T488;
T488:;
	V256= Cnil;
goto T489;
T489:;
	V257= Cnil;
goto T490;
T490:;
	V258= Cnil;
goto T491;
T491:;
	V259= Cnil;
goto T492;
T492:;
	{object V261;
	object V262= (V255);
	object V263= (V256);
	if(endp(V262)||endp(V263)){
	V260= Cnil;
	goto T495;}
	base[3]=V261=MMcons(Cnil,Cnil);
goto T496;
T496:;
	(V261->c.c_car)= list(2,(V262->c.c_car),(V263->c.c_car));
	V262=MMcdr(V262);
	V263=MMcdr(V263);
	if(endp(V262)||endp(V263)){
	V260= base[3];
	goto T495;}
	V261=MMcdr(V261)=MMcons(Cnil,Cnil);
	goto T496;}
goto T495;
T495:;
	V245= nconc((V245),V260);
	V246= make_cons(car((V257)),(V246));
	V247= make_cons((V258),(V247));
	V248= make_cons((V259),(V248));}
	V244= cdr((V244));
	goto T464;}
}
/*	macro definition for DEFINE-MODIFY-MACRO	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	check_arg(2);
	vs_top=sup;
	{object V264=base[0]->c.c_cdr;
	if(endp(V264))invalid_macro_call();
	base[2]= (V264->c.c_car);
	V264=V264->c.c_cdr;
	if(endp(V264))invalid_macro_call();
	base[3]= (V264->c.c_car);
	V264=V264->c.c_cdr;
	if(endp(V264))invalid_macro_call();
	base[4]= (V264->c.c_car);
	V264=V264->c.c_cdr;
	if(endp(V264)){
	base[5]= Cnil;
	} else {
	base[5]= (V264->c.c_car);
	V264=V264->c.c_cdr;}
	if(!endp(V264))invalid_macro_call();}
	{object V265;
	{register object V266;
	register object V267;
	V266= base[3];
	V267= Cnil;
goto T509;
T509:;
	if(((V266))!=Cnil){
	goto T510;}
	V268= list(2,VV[3],base[4]);
	V265= listA(4,VV[43],/* INLINE-ARGS */V268,VV[62],nreverse((V267)));
	goto T507;
goto T510;
T510:;
	if((car((V266)))==(VV[63])){
	goto T514;}
	if(!((car((V266)))==(VV[64]))){
	goto T517;}
	V269= list(2,VV[3],base[4]);
	V270= nreverse((V267));
	V271= make_cons(cadr((V266)),Cnil);
	V265= listA(4,VV[65],/* INLINE-ARGS */V269,VV[62],append(/* INLINE-ARGS */V270,/* INLINE-ARGS */V271));
	goto T507;
goto T517;
T517:;
	if(!(type_of(car((V266)))==t_symbol)){
	goto T521;}
	V267= make_cons(car((V266)),(V267));
	goto T514;
goto T521;
T521:;
	V267= make_cons(caar((V266)),(V267));
goto T514;
T514:;
	V266= cdr((V266));
	goto T509;}
goto T507;
T507:;
	V272= listA(4,VV[67],VV[68],VV[69],base[3]);
	if((base[5])==Cnil){
	goto T530;}
	V273= make_cons(base[5],Cnil);
	goto T528;
goto T530;
T530:;
	V273= Cnil;
goto T528;
T528:;
	V274= list(3,VV[70],VV[71],list(3,VV[72],base[2],list(3,VV[36],VV[73],list(4,VV[43],VV[74],VV[69],(V265)))));
	V275= list(2,/* INLINE-ARGS */V274,list(4,VV[75],VV[76],VV[77],list(4,VV[43],VV[78],list(4,VV[79],VV[80],VV[81],list(3,VV[42],VV[82],list(2,VV[43],(V265)))),VV[83])));
	base[6]= listA(4,VV[66],base[2],/* INLINE-ARGS */V272,append(V273,/* INLINE-ARGS */V275));
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
	{object V276=base[0]->c.c_cdr;
	if(endp(V276))invalid_macro_call();
	base[2]= (V276->c.c_car);
	V276=V276->c.c_cdr;
	if(endp(V276))invalid_macro_call();
	base[3]= (V276->c.c_car);
	V276=V276->c.c_cdr;
	if(!endp(V276))invalid_macro_call();}
	{object V277;
	object V278;
	object V279;
	object V280;
	object V281;
	base[4]= base[2];
	base[5]= base[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk97)();
	if(vs_base>=vs_top){vs_top=sup;goto T535;}
	V277= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T536;}
	V278= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T537;}
	V279= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T538;}
	V280= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T539;}
	V281= vs_base[0];
	vs_top=sup;
	goto T540;
goto T535;
T535:;
	V277= Cnil;
goto T536;
T536:;
	V278= Cnil;
goto T537;
T537:;
	V279= Cnil;
goto T538;
T538:;
	V280= Cnil;
goto T539;
T539:;
	V281= Cnil;
goto T540;
T540:;
	{object V283;
	object V284= (V277);
	object V285= (V278);
	if(endp(V284)||endp(V285)){
	V282= Cnil;
	goto T541;}
	base[4]=V283=MMcons(Cnil,Cnil);
goto T542;
T542:;
	(V283->c.c_car)= list(2,(V284->c.c_car),(V285->c.c_car));
	V284=MMcdr(V284);
	V285=MMcdr(V285);
	if(endp(V284)||endp(V285)){
	V282= base[4];
	goto T541;}
	V283=MMcdr(V283)=MMcons(Cnil,Cnil);
	goto T542;}
goto T541;
T541:;
	V286= list(2,car((V279)),VV[84]);
	base[4]= list(3,VV[51],V282,list(5,VV[75],/* INLINE-ARGS */V286,list(3,VV[85],(V281),base[3]),(V280),VV[84]));
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
	{object V287=base[0]->c.c_cdr;
	if(endp(V287))invalid_macro_call();
	base[2]= (V287->c.c_car);
	V287=V287->c.c_cdr;
	if(endp(V287)){
	base[3]= small_fixnum(1);
	} else {
	base[3]= (V287->c.c_car);
	V287=V287->c.c_cdr;}
	if(!endp(V287))invalid_macro_call();}
	if(!(type_of(base[2])==t_symbol)){
	goto T545;}
	base[4]= list(3,VV[27],base[2],list(3,VV[86],base[2],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
goto T545;
T545:;
	{object V289;
	object V290;
	object V291;
	object V292;
	object V293;
	base[4]= base[2];
	base[5]= base[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk97)();
	if(vs_base>=vs_top){vs_top=sup;goto T551;}
	V289= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T552;}
	V290= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T553;}
	V291= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T554;}
	V292= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T555;}
	V293= vs_base[0];
	vs_top=sup;
	goto T556;
goto T551;
T551:;
	V289= Cnil;
goto T552;
T552:;
	V290= Cnil;
goto T553;
T553:;
	V291= Cnil;
goto T554;
T554:;
	V292= Cnil;
goto T555;
T555:;
	V293= Cnil;
goto T556;
T556:;
	V298= append((V289),(V291));
	V299= list(3,VV[86],(V293),base[3]);
	V300= make_cons(/* INLINE-ARGS */V299,Cnil);
	V301= append((V290),/* INLINE-ARGS */V300);
	{object V295;
	object V296= /* INLINE-ARGS */V298;
	object V297= /* INLINE-ARGS */V301;
	if(endp(V296)||endp(V297)){
	V294= Cnil;
	goto T557;}
	base[4]=V295=MMcons(Cnil,Cnil);
goto T558;
T558:;
	(V295->c.c_car)= list(2,(V296->c.c_car),(V297->c.c_car));
	V296=MMcdr(V296);
	V297=MMcdr(V297);
	if(endp(V296)||endp(V297)){
	V294= base[4];
	goto T557;}
	V295=MMcdr(V295)=MMcons(Cnil,Cnil);
	goto T558;}
goto T557;
T557:;
	base[4]= list(3,VV[51],V294,(V292));
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
	{object V302=base[0]->c.c_cdr;
	if(endp(V302))invalid_macro_call();
	base[2]= (V302->c.c_car);
	V302=V302->c.c_cdr;
	if(endp(V302)){
	base[3]= small_fixnum(1);
	} else {
	base[3]= (V302->c.c_car);
	V302=V302->c.c_cdr;}
	if(!endp(V302))invalid_macro_call();}
	if(!(type_of(base[2])==t_symbol)){
	goto T561;}
	base[4]= list(3,VV[27],base[2],list(3,VV[87],base[2],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
goto T561;
T561:;
	{object V304;
	object V305;
	object V306;
	object V307;
	object V308;
	base[4]= base[2];
	base[5]= base[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk97)();
	if(vs_base>=vs_top){vs_top=sup;goto T567;}
	V304= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T568;}
	V305= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T569;}
	V306= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T570;}
	V307= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T571;}
	V308= vs_base[0];
	vs_top=sup;
	goto T572;
goto T567;
T567:;
	V304= Cnil;
goto T568;
T568:;
	V305= Cnil;
goto T569;
T569:;
	V306= Cnil;
goto T570;
T570:;
	V307= Cnil;
goto T571;
T571:;
	V308= Cnil;
goto T572;
T572:;
	V313= append((V304),(V306));
	V314= list(3,VV[87],(V308),base[3]);
	V315= make_cons(/* INLINE-ARGS */V314,Cnil);
	V316= append((V305),/* INLINE-ARGS */V315);
	{object V310;
	object V311= /* INLINE-ARGS */V313;
	object V312= /* INLINE-ARGS */V316;
	if(endp(V311)||endp(V312)){
	V309= Cnil;
	goto T573;}
	base[4]=V310=MMcons(Cnil,Cnil);
goto T574;
T574:;
	(V310->c.c_car)= list(2,(V311->c.c_car),(V312->c.c_car));
	V311=MMcdr(V311);
	V312=MMcdr(V312);
	if(endp(V311)||endp(V312)){
	V309= base[4];
	goto T573;}
	V310=MMcdr(V310)=MMcons(Cnil,Cnil);
	goto T574;}
goto T573;
T573:;
	base[4]= list(3,VV[51],V309,(V307));
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
	{object V317=base[0]->c.c_cdr;
	if(endp(V317))invalid_macro_call();
	base[2]= (V317->c.c_car);
	V317=V317->c.c_cdr;
	if(endp(V317))invalid_macro_call();
	base[3]= (V317->c.c_car);
	V317=V317->c.c_cdr;
	if(!endp(V317))invalid_macro_call();}
	{register object V318;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V318= vs_base[0];
	if(!(type_of(base[3])==t_symbol)){
	goto T577;}
	V319= list(2,(V318),base[2]);
	V320= make_cons(/* INLINE-ARGS */V319,Cnil);
	base[4]= list(3,VV[51],/* INLINE-ARGS */V320,list(3,VV[27],base[3],list(3,VV[88],(V318),base[3])));
	vs_top=(vs_base=base+4)+1;
	return;
goto T577;
T577:;
	{object V321;
	object V322;
	object V323;
	object V324;
	object V325;
	base[4]= base[3];
	base[5]= base[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk97)();
	if(vs_base>=vs_top){vs_top=sup;goto T583;}
	V321= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T584;}
	V322= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T585;}
	V323= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T586;}
	V324= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T587;}
	V325= vs_base[0];
	vs_top=sup;
	goto T588;
goto T583;
T583:;
	V321= Cnil;
goto T584;
T584:;
	V322= Cnil;
goto T585;
T585:;
	V323= Cnil;
goto T586;
T586:;
	V324= Cnil;
goto T587;
T587:;
	V325= Cnil;
goto T588;
T588:;
	base[5]= make_cons((V318),Cnil);
	base[6]= (V321);
	base[7]= (V323);
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V330= vs_base[0];
	base[5]= make_cons(base[2],Cnil);
	base[6]= (V322);
	V332= list(3,VV[88],(V318),(V325));
	base[7]= make_cons(/* INLINE-ARGS */V332,Cnil);
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V331= vs_base[0];
	{object V327;
	object V328= V330;
	object V329= V331;
	if(endp(V328)||endp(V329)){
	V326= Cnil;
	goto T589;}
	base[4]=V327=MMcons(Cnil,Cnil);
goto T590;
T590:;
	(V327->c.c_car)= list(2,(V328->c.c_car),(V329->c.c_car));
	V328=MMcdr(V328);
	V329=MMcdr(V329);
	if(endp(V328)||endp(V329)){
	V326= base[4];
	goto T589;}
	V327=MMcdr(V327)=MMcons(Cnil,Cnil);
	goto T590;}
goto T589;
T589:;
	base[4]= list(3,VV[51],V326,(V324));
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
	{object V333=base[0]->c.c_cdr;
	if(endp(V333))invalid_macro_call();
	base[2]= (V333->c.c_car);
	V333=V333->c.c_cdr;
	if(endp(V333))invalid_macro_call();
	base[3]= (V333->c.c_car);
	V333=V333->c.c_cdr;
	base[4]= V333;}
	{register object V334;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V334= vs_base[0];
	if(!(type_of(base[3])==t_symbol)){
	goto T601;}
	V335= list(2,(V334),base[2]);
	V336= make_cons(/* INLINE-ARGS */V335,Cnil);
	base[5]= list(3,VV[51],/* INLINE-ARGS */V336,list(3,VV[27],base[3],listA(4,VV[89],(V334),base[3],base[4])));
	vs_top=(vs_base=base+5)+1;
	return;
goto T601;
T601:;
	{object V337;
	object V338;
	object V339;
	object V340;
	object V341;
	base[5]= base[3];
	base[6]= base[1];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk97)();
	if(vs_base>=vs_top){vs_top=sup;goto T607;}
	V337= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T608;}
	V338= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T609;}
	V339= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T610;}
	V340= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T611;}
	V341= vs_base[0];
	vs_top=sup;
	goto T612;
goto T607;
T607:;
	V337= Cnil;
goto T608;
T608:;
	V338= Cnil;
goto T609;
T609:;
	V339= Cnil;
goto T610;
T610:;
	V340= Cnil;
goto T611;
T611:;
	V341= Cnil;
goto T612;
T612:;
	base[6]= make_cons((V334),Cnil);
	base[7]= (V337);
	base[8]= (V339);
	vs_top=(vs_base=base+6)+3;
	Lappend();
	vs_top=sup;
	V346= vs_base[0];
	base[6]= make_cons(base[2],Cnil);
	base[7]= (V338);
	V348= listA(4,VV[89],(V334),(V341),base[4]);
	base[8]= make_cons(/* INLINE-ARGS */V348,Cnil);
	vs_top=(vs_base=base+6)+3;
	Lappend();
	vs_top=sup;
	V347= vs_base[0];
	{object V343;
	object V344= V346;
	object V345= V347;
	if(endp(V344)||endp(V345)){
	V342= Cnil;
	goto T613;}
	base[5]=V343=MMcons(Cnil,Cnil);
goto T614;
T614:;
	(V343->c.c_car)= list(2,(V344->c.c_car),(V345->c.c_car));
	V344=MMcdr(V344);
	V345=MMcdr(V345);
	if(endp(V344)||endp(V345)){
	V342= base[5];
	goto T613;}
	V343=MMcdr(V343)=MMcons(Cnil,Cnil);
	goto T614;}
goto T613;
T613:;
	base[5]= list(3,VV[51],V342,(V340));
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
	{object V349=base[0]->c.c_cdr;
	if(endp(V349))invalid_macro_call();
	base[2]= (V349->c.c_car);
	V349=V349->c.c_cdr;
	if(!endp(V349))invalid_macro_call();}
	if(!(type_of(base[2])==t_symbol)){
	goto T624;}
	{object V350;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V350= vs_base[0];
	V351= list(2,(V350),list(2,VV[90],base[2]));
	V352= make_cons(/* INLINE-ARGS */V351,Cnil);
	base[3]= list(4,VV[36],/* INLINE-ARGS */V352,list(3,VV[27],base[2],list(2,VV[91],base[2])),(V350));
	vs_top=(vs_base=base+3)+1;
	return;}
goto T624;
T624:;
	{object V353;
	object V354;
	object V355;
	object V356;
	object V357;
	base[3]= base[2];
	base[4]= base[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk97)();
	if(vs_base>=vs_top){vs_top=sup;goto T631;}
	V353= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T632;}
	V354= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T633;}
	V355= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T634;}
	V356= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T635;}
	V357= vs_base[0];
	vs_top=sup;
	goto T636;
goto T631;
T631:;
	V353= Cnil;
goto T632;
T632:;
	V354= Cnil;
goto T633;
T633:;
	V355= Cnil;
goto T634;
T634:;
	V356= Cnil;
goto T635;
T635:;
	V357= Cnil;
goto T636;
T636:;
	V362= append((V353),(V355));
	V363= list(2,VV[91],(V357));
	V364= make_cons(/* INLINE-ARGS */V363,Cnil);
	V365= append((V354),/* INLINE-ARGS */V364);
	{object V359;
	object V360= /* INLINE-ARGS */V362;
	object V361= /* INLINE-ARGS */V365;
	if(endp(V360)||endp(V361)){
	V358= Cnil;
	goto T637;}
	base[3]=V359=MMcons(Cnil,Cnil);
goto T638;
T638:;
	(V359->c.c_car)= list(2,(V360->c.c_car),(V361->c.c_car));
	V360=MMcdr(V360);
	V361=MMcdr(V361);
	if(endp(V360)||endp(V361)){
	V358= base[3];
	goto T637;}
	V359=MMcdr(V359)=MMcons(Cnil,Cnil);
	goto T638;}
goto T637;
T637:;
	base[3]= list(3,VV[51],V358,list(3,VV[92],list(2,VV[90],(V357)),(V356)));
	vs_top=(vs_base=base+3)+1;
	return;}
}
static object  LnkTLI100(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[100],(void **)&LnkLI100,2,ap);va_end(ap);return V1;} /* SETF-EXPAND */
static object  LnkTLI99(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[99],(void **)&LnkLI99,3,ap);va_end(ap);return V1;} /* SETF-EXPAND-1 */
static void LnkT97(){ call_or_link(VV[97],(void **)&Lnk97);} /* GET-SETF-METHOD */
static object  LnkTLI96(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[96],(void **)&LnkLI96,4,ap);va_end(ap);return V1;} /* SETF-STRUCTURE-ACCESS */
static void LnkT95(){ call_or_link(VV[95],(void **)&Lnk95);} /* GET-SETF-METHOD-MULTIPLE-VALUE */
static void LnkT94(){ call_or_link(VV[94],(void **)&Lnk94);} /* GET-&ENVIRONMENT */
static object  LnkTLI93(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[93],(void **)&LnkLI93,1,ap);va_end(ap);return V1;} /* FIND-DOCUMENTATION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

