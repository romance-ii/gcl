
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
	V15= (*(LnkLI96))(cddr(base[3]));
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
	(void) (*Lnk97)();
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
	V25= (*(LnkLI96))(cdr(base[3]));
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
	(void) (*Lnk98)();
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
	(void) (*Lnk98)();
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
	base[5]= (*(LnkLI99))(car((V41)),car((V37)),cdr((V37)),(V42));
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
	(void) (*Lnk98)();
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
	(void) (*Lnk100)();
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
	(void) (*Lnk100)();
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
	(void) (*Lnk100)();
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
	(void) (*Lnk100)();
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
	(void) (*Lnk100)();
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
	(void) (*Lnk100)();
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

object V147;register object V148;object V149;
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
	V161= car((V152));
	V162 = make_fixnum(V155);
	V160= list(3,VV[27],/* INLINE-ARGS */V161,list(3,VV[53],V162,(V153)));
	V154= make_cons((V160),(V154));}
	V152= cdr((V152));
	V155= (long)(V155)+1;
	goto T319;}
goto T310;
T310:;
	if(!(type_of((V147))==t_symbol)){
	goto T331;}
	{object V163 = list(3,VV[27],(V147),(V148));
	VMR12(V163)}
goto T331;
T331:;
	if(!(type_of((V147))==t_cons)){
	goto T334;}
	if((get(car((V147)),VV[33],Cnil))!=Cnil){
	goto T334;}
	if((get(car((V147)),VV[31],Cnil))!=Cnil){
	goto T334;}
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
	goto T334;}
	goto TTL;
goto T334;
T334:;
	if(!(type_of(car((V147)))==t_symbol)){
	goto T351;}
	V150= get(car((V147)),VV[31],Cnil);
	if(((V150))==Cnil){
	goto T351;}
	V164= cdr((V147));
	V165= make_cons((V148),Cnil);
	V166= append(/* INLINE-ARGS */V164,/* INLINE-ARGS */V165);
	{object V167 = make_cons((V150),/* INLINE-ARGS */V166);
	VMR12(V167)}
goto T351;
T351:;
	if(!(type_of(car((V147)))==t_symbol)){
	goto T357;}
	V150= get(car((V147)),VV[32],Cnil);
	if(((V150))==Cnil){
	goto T357;}
	{object V168 = (*(LnkLI99))(cadr((V147)),car((V150)),cdr((V150)),(V148));
	VMR12(V168)}
goto T357;
T357:;
	{object V169;
	object V170;
	object V171;
	object V172;
	object V173;
	base[0]= (V147);
	base[1]= (V149);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk100)();
	if(vs_base>=vs_top){vs_top=sup;goto T366;}
	V169= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T367;}
	V170= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T368;}
	V171= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T369;}
	V172= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T370;}
	V173= vs_base[0];
	vs_top=sup;
	goto T371;
goto T366;
T366:;
	V169= Cnil;
goto T367;
T367:;
	V170= Cnil;
goto T368;
T368:;
	V171= Cnil;
goto T369;
T369:;
	V172= Cnil;
goto T370;
T370:;
	V173= Cnil;
goto T371;
T371:;
	V178= append((V169),(V171));
	V179= make_cons((V148),Cnil);
	V180= append((V170),/* INLINE-ARGS */V179);
	{object V175;
	object V176= /* INLINE-ARGS */V178;
	object V177= /* INLINE-ARGS */V180;
	if(endp(V176)||endp(V177)){
	V174= Cnil;
	goto T372;}
	base[0]=V175=MMcons(Cnil,Cnil);
goto T373;
T373:;
	(V175->c.c_car)= list(2,(V176->c.c_car),(V177->c.c_car));
	V176=MMcdr(V176);
	V177=MMcdr(V177);
	if(endp(V176)||endp(V177)){
	V174= base[0];
	goto T372;}
	V175=MMcdr(V175)=MMcons(Cnil,Cnil);
	goto T373;}
goto T372;
T372:;
	{object V181 = list(3,VV[54],V174,(V172));
	VMR12(V181)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SETF-STRUCTURE-ACCESS	*/

static object LI13(V186,V187,V188,V189)

object V186;object V187;object V188;object V189;
{	 VMB13 VMS13 VMV13
goto TTL;
TTL:;
	{object V190= (V187);
	if((V190!= VV[43]))goto T375;
	{object V191 = list(4,VV[55],(V186),(V188),(V189));
	VMR13(V191)}
goto T375;
T375:;
	if((V190!= VV[101]))goto T376;
	{object V192 = list(4,VV[56],(V186),(V188),(V189));
	VMR13(V192)}
goto T376;
T376:;
	{object V193 = list(5,VV[57],(V186),list(2,VV[3],(V187)),(V188),(V189));
	VMR13(V193)}}
	return Cnil;
}
/*	local entry for function SETF-EXPAND	*/

static object LI14(V196,V197)

register object V196;object V197;
{	 VMB14 VMS14 VMV14
goto TTL;
TTL:;
	if(!(endp_prop((V196)))){
	goto T378;}
	{object V198 = Cnil;
	VMR14(V198)}
goto T378;
T378:;
	if(!(endp_prop(cdr((V196))))){
	goto T381;}
	base[0]= VV[58];
	base[1]= (V196);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V199 = vs_base[0];
	VMR14(V199)}
goto T381;
T381:;
	V200= (*(LnkLI102))(car((V196)),cadr((V196)),(V197));
	V201= (*(LnkLI103))(cddr((V196)),(V197));
	{object V202 = make_cons(/* INLINE-ARGS */V200,/* INLINE-ARGS */V201);
	VMR14(V202)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SETF-HELPER	*/

static object LI15(V205,V206)

register object V205;object V206;
{	 VMB15 VMS15 VMV15
goto TTL;
TTL:;
	V205= cdr((V205));
	if(!(endp_prop((V205)))){
	goto T388;}
	{object V207 = Cnil;
	VMR15(V207)}
goto T388;
T388:;
	if(!(endp_prop(cdr((V205))))){
	goto T391;}
	base[0]= VV[59];
	base[1]= (V205);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V208 = vs_base[0];
	VMR15(V208)}
goto T391;
T391:;
	if(!(endp_prop(cddr((V205))))){
	goto T396;}
	{object V209 = (*(LnkLI102))(car((V205)),cadr((V205)),(V206));
	VMR15(V209)}
goto T396;
T396:;
	V210= (*(LnkLI103))((V205),(V206));
	{object V211 = make_cons(VV[60],/* INLINE-ARGS */V210);
	VMR15(V211)}
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
	{object V212=base[0]->c.c_cdr;
	base[2]= V212;}
	if(!(endp_prop(base[2]))){
	goto T399;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
goto T399;
T399:;
	if(!(endp_prop(cdr(base[2])))){
	goto T402;}
	base[3]= VV[61];
	base[4]= base[2];
	vs_top=(vs_base=base+3)+2;
	Lerror();
	return;
goto T402;
T402:;
	if(!(endp_prop(cddr(base[2])))){
	goto T407;}
	V213= (*(LnkLI102))(car(base[2]),cadr(base[2]),base[1]);
	base[3]= list(3,VV[60],/* INLINE-ARGS */V213,Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
goto T407;
T407:;
	{register object V214;
	register object V215;
	register object V216;
	V214= base[2];
	V215= Cnil;
	V216= Cnil;
goto T410;
T410:;
	if(!(endp_prop((V214)))){
	goto T411;}
	V217= nreverse((V216));
	base[3]= listA(3,VV[54],(V215),append(/* INLINE-ARGS */V217,VV[62]));
	vs_top=(vs_base=base+3)+1;
	return;
goto T411;
T411:;
	if(!(endp_prop(cdr((V214))))){
	goto T415;}
	base[3]= VV[63];
	base[4]= base[2];
	vs_top=(vs_base=base+3)+2;
	Lerror();
	vs_top=sup;
goto T415;
T415:;
	{register object V218;
	register object V219;
	register object V220;
	register object V221;
	register object V222;
	base[3]= car((V214));
	base[4]= base[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk100)();
	if(vs_base>=vs_top){vs_top=sup;goto T424;}
	V218= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T425;}
	V219= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T426;}
	V220= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T427;}
	V221= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T428;}
	V222= vs_base[0];
	vs_top=sup;
	goto T429;
goto T424;
T424:;
	V218= Cnil;
goto T425;
T425:;
	V219= Cnil;
goto T426;
T426:;
	V220= Cnil;
goto T427;
T427:;
	V221= Cnil;
goto T428;
T428:;
	V222= Cnil;
goto T429;
T429:;
	V216= make_cons((V221),(V216));
	V227= append((V218),(V220));
	V228= make_cons(cadr((V214)),Cnil);
	V229= append((V219),/* INLINE-ARGS */V228);
	{object V224;
	object V225= /* INLINE-ARGS */V227;
	object V226= /* INLINE-ARGS */V229;
	if(endp(V225)||endp(V226)){
	V223= Cnil;
	goto T433;}
	base[3]=V224=MMcons(Cnil,Cnil);
goto T434;
T434:;
	(V224->c.c_car)= list(2,(V225->c.c_car),(V226->c.c_car));
	V225=MMcdr(V225);
	V226=MMcdr(V226);
	if(endp(V225)||endp(V226)){
	V223= base[3];
	goto T433;}
	V224=MMcdr(V224)=MMcons(Cnil,Cnil);
	goto T434;}
goto T433;
T433:;
	V215= nconc((V215),V223);}
	V214= cddr((V214));
	goto T410;}
}
/*	macro definition for SHIFTF	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	check_arg(2);
	vs_top=sup;
	{object V230=base[0]->c.c_cdr;
	base[2]= V230;}
	{register object V231;
	register object V232;
	register object V233;
	register object V234;
	register object V235;
	register object V236;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V235= vs_base[0];
	V231= base[2];
	V232= Cnil;
	V233= Cnil;
	V234= Cnil;
	V236= Cnil;
goto T441;
T441:;
	if(!(endp_prop(cdr((V231))))){
	goto T442;}
	V233= nreverse((V233));
	V234= nreverse((V234));
	V236= nreverse((V236));
	base[3]= (V232);
	V238= list(2,(V235),car((V236)));
	base[4]= make_cons(/* INLINE-ARGS */V238,Cnil);
	{object V239;
	object V240= (V233);
	object V241= cdr((V236));
	if(endp(V240)||endp(V241)){
	base[5]= Cnil;
	goto T454;}
	base[6]=V239=MMcons(Cnil,Cnil);
goto T455;
T455:;
	(V239->c.c_car)= list(2,(V240->c.c_car),(V241->c.c_car));
	V240=MMcdr(V240);
	V241=MMcdr(V241);
	if(endp(V240)||endp(V241)){
	base[5]= base[6];
	goto T454;}
	V239=MMcdr(V239)=MMcons(Cnil,Cnil);
	goto T455;}
goto T454;
T454:;
	base[7]= (V233);
	vs_top=(vs_base=base+7)+1;
	Llast();
	vs_top=sup;
	V242= vs_base[0];
	V243= list(2,car(V242),car((V231)));
	base[6]= make_cons(/* INLINE-ARGS */V243,Cnil);
	vs_top=(vs_base=base+3)+4;
	Lnconc();
	vs_top=sup;
	V237= vs_base[0];
	V244= make_cons((V235),Cnil);
	base[3]= listA(3,VV[54],V237,append((V234),/* INLINE-ARGS */V244));
	vs_top=(vs_base=base+3)+1;
	return;
goto T442;
T442:;
	{register object V245;
	register object V246;
	register object V247;
	register object V248;
	register object V249;
	base[3]= car((V231));
	base[4]= base[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk100)();
	if(vs_base>=vs_top){vs_top=sup;goto T465;}
	V245= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T466;}
	V246= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T467;}
	V247= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T468;}
	V248= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T469;}
	V249= vs_base[0];
	vs_top=sup;
	goto T470;
goto T465;
T465:;
	V245= Cnil;
goto T466;
T466:;
	V246= Cnil;
goto T467;
T467:;
	V247= Cnil;
goto T468;
T468:;
	V248= Cnil;
goto T469;
T469:;
	V249= Cnil;
goto T470;
T470:;
	{object V251;
	object V252= (V245);
	object V253= (V246);
	if(endp(V252)||endp(V253)){
	V250= Cnil;
	goto T473;}
	base[3]=V251=MMcons(Cnil,Cnil);
goto T474;
T474:;
	(V251->c.c_car)= list(2,(V252->c.c_car),(V253->c.c_car));
	V252=MMcdr(V252);
	V253=MMcdr(V253);
	if(endp(V252)||endp(V253)){
	V250= base[3];
	goto T473;}
	V251=MMcdr(V251)=MMcons(Cnil,Cnil);
	goto T474;}
goto T473;
T473:;
	V232= nconc((V232),V250);
	V233= make_cons(car((V247)),(V233));
	V234= make_cons((V248),(V234));
	V236= make_cons((V249),(V236));}
	V231= cdr((V231));
	goto T441;}
}
/*	macro definition for ROTATEF	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	check_arg(2);
	vs_top=sup;
	{object V254=base[0]->c.c_cdr;
	base[2]= V254;}
	{register object V255;
	register object V256;
	register object V257;
	register object V258;
	register object V259;
	V255= base[2];
	V256= Cnil;
	V257= Cnil;
	V258= Cnil;
	V259= Cnil;
goto T485;
T485:;
	if(!(endp_prop((V255)))){
	goto T486;}
	V257= nreverse((V257));
	V258= nreverse((V258));
	V259= nreverse((V259));
	base[3]= (V256);
	{object V261;
	object V262= (V257);
	object V263= cdr((V259));
	if(endp(V262)||endp(V263)){
	base[4]= Cnil;
	goto T497;}
	base[5]=V261=MMcons(Cnil,Cnil);
goto T498;
T498:;
	(V261->c.c_car)= list(2,(V262->c.c_car),(V263->c.c_car));
	V262=MMcdr(V262);
	V263=MMcdr(V263);
	if(endp(V262)||endp(V263)){
	base[4]= base[5];
	goto T497;}
	V261=MMcdr(V261)=MMcons(Cnil,Cnil);
	goto T498;}
goto T497;
T497:;
	base[6]= (V257);
	vs_top=(vs_base=base+6)+1;
	Llast();
	vs_top=sup;
	V264= vs_base[0];
	V265= list(2,car(V264),car((V259)));
	base[5]= make_cons(/* INLINE-ARGS */V265,Cnil);
	vs_top=(vs_base=base+3)+3;
	Lnconc();
	vs_top=sup;
	V260= vs_base[0];
	base[3]= listA(3,VV[54],V260,append((V258),VV[64]));
	vs_top=(vs_base=base+3)+1;
	return;
goto T486;
T486:;
	{register object V266;
	register object V267;
	register object V268;
	register object V269;
	register object V270;
	base[3]= car((V255));
	base[4]= base[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk100)();
	if(vs_base>=vs_top){vs_top=sup;goto T508;}
	V266= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T509;}
	V267= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T510;}
	V268= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T511;}
	V269= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T512;}
	V270= vs_base[0];
	vs_top=sup;
	goto T513;
goto T508;
T508:;
	V266= Cnil;
goto T509;
T509:;
	V267= Cnil;
goto T510;
T510:;
	V268= Cnil;
goto T511;
T511:;
	V269= Cnil;
goto T512;
T512:;
	V270= Cnil;
goto T513;
T513:;
	{object V272;
	object V273= (V266);
	object V274= (V267);
	if(endp(V273)||endp(V274)){
	V271= Cnil;
	goto T516;}
	base[3]=V272=MMcons(Cnil,Cnil);
goto T517;
T517:;
	(V272->c.c_car)= list(2,(V273->c.c_car),(V274->c.c_car));
	V273=MMcdr(V273);
	V274=MMcdr(V274);
	if(endp(V273)||endp(V274)){
	V271= base[3];
	goto T516;}
	V272=MMcdr(V272)=MMcons(Cnil,Cnil);
	goto T517;}
goto T516;
T516:;
	V256= nconc((V256),V271);
	V257= make_cons(car((V268)),(V257));
	V258= make_cons((V269),(V258));
	V259= make_cons((V270),(V259));}
	V255= cdr((V255));
	goto T485;}
}
/*	macro definition for DEFINE-MODIFY-MACRO	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	check_arg(2);
	vs_top=sup;
	{object V275=base[0]->c.c_cdr;
	if(endp(V275))invalid_macro_call();
	base[2]= (V275->c.c_car);
	V275=V275->c.c_cdr;
	if(endp(V275))invalid_macro_call();
	base[3]= (V275->c.c_car);
	V275=V275->c.c_cdr;
	if(endp(V275))invalid_macro_call();
	base[4]= (V275->c.c_car);
	V275=V275->c.c_cdr;
	if(endp(V275)){
	base[5]= Cnil;
	} else {
	base[5]= (V275->c.c_car);
	V275=V275->c.c_cdr;}
	if(!endp(V275))invalid_macro_call();}
	{object V276;
	{register object V277;
	register object V278;
	V277= base[3];
	V278= Cnil;
goto T530;
T530:;
	if(((V277))!=Cnil){
	goto T531;}
	V279= list(2,VV[3],base[4]);
	V276= listA(4,VV[43],/* INLINE-ARGS */V279,VV[65],nreverse((V278)));
	goto T528;
goto T531;
T531:;
	if((car((V277)))==(VV[66])){
	goto T535;}
	if(!((car((V277)))==(VV[67]))){
	goto T538;}
	V280= list(2,VV[3],base[4]);
	V281= nreverse((V278));
	V282= make_cons(cadr((V277)),Cnil);
	V276= listA(4,VV[68],/* INLINE-ARGS */V280,VV[65],append(/* INLINE-ARGS */V281,/* INLINE-ARGS */V282));
	goto T528;
goto T538;
T538:;
	if(!(type_of(car((V277)))==t_symbol)){
	goto T542;}
	V278= make_cons(car((V277)),(V278));
	goto T535;
goto T542;
T542:;
	V278= make_cons(caar((V277)),(V278));
goto T535;
T535:;
	V277= cdr((V277));
	goto T530;}
goto T528;
T528:;
	V283= listA(4,VV[70],VV[71],VV[72],base[3]);
	if((base[5])==Cnil){
	goto T551;}
	V284= make_cons(base[5],Cnil);
	goto T549;
goto T551;
T551:;
	V284= Cnil;
goto T549;
T549:;
	V285= list(3,VV[73],VV[74],list(3,VV[75],base[2],list(3,VV[36],VV[76],list(4,VV[43],VV[77],VV[72],(V276)))));
	V286= list(2,/* INLINE-ARGS */V285,list(4,VV[78],VV[79],VV[80],list(4,VV[43],VV[81],list(4,VV[82],VV[83],VV[84],list(3,VV[42],VV[85],list(2,VV[43],(V276)))),VV[86])));
	base[6]= listA(4,VV[69],base[2],/* INLINE-ARGS */V283,append(V284,/* INLINE-ARGS */V286));
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
	{object V287=base[0]->c.c_cdr;
	if(endp(V287))invalid_macro_call();
	base[2]= (V287->c.c_car);
	V287=V287->c.c_cdr;
	if(endp(V287))invalid_macro_call();
	base[3]= (V287->c.c_car);
	V287=V287->c.c_cdr;
	if(!endp(V287))invalid_macro_call();}
	{object V288;
	object V289;
	object V290;
	object V291;
	object V292;
	base[4]= base[2];
	base[5]= base[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk100)();
	if(vs_base>=vs_top){vs_top=sup;goto T556;}
	V288= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T557;}
	V289= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T558;}
	V290= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T559;}
	V291= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T560;}
	V292= vs_base[0];
	vs_top=sup;
	goto T561;
goto T556;
T556:;
	V288= Cnil;
goto T557;
T557:;
	V289= Cnil;
goto T558;
T558:;
	V290= Cnil;
goto T559;
T559:;
	V291= Cnil;
goto T560;
T560:;
	V292= Cnil;
goto T561;
T561:;
	{object V294;
	object V295= (V288);
	object V296= (V289);
	if(endp(V295)||endp(V296)){
	V293= Cnil;
	goto T562;}
	base[4]=V294=MMcons(Cnil,Cnil);
goto T563;
T563:;
	(V294->c.c_car)= list(2,(V295->c.c_car),(V296->c.c_car));
	V295=MMcdr(V295);
	V296=MMcdr(V296);
	if(endp(V295)||endp(V296)){
	V293= base[4];
	goto T562;}
	V294=MMcdr(V294)=MMcons(Cnil,Cnil);
	goto T563;}
goto T562;
T562:;
	V297= list(2,car((V290)),VV[87]);
	base[4]= list(3,VV[54],V293,list(5,VV[78],/* INLINE-ARGS */V297,list(3,VV[88],(V292),base[3]),(V291),VV[87]));
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
	{object V298=base[0]->c.c_cdr;
	if(endp(V298))invalid_macro_call();
	base[2]= (V298->c.c_car);
	V298=V298->c.c_cdr;
	if(endp(V298)){
	base[3]= small_fixnum(1);
	} else {
	base[3]= (V298->c.c_car);
	V298=V298->c.c_cdr;}
	if(!endp(V298))invalid_macro_call();}
	if(!(type_of(base[2])==t_symbol)){
	goto T566;}
	base[4]= list(3,VV[27],base[2],list(3,VV[89],base[2],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
goto T566;
T566:;
	{object V300;
	object V301;
	object V302;
	object V303;
	object V304;
	base[4]= base[2];
	base[5]= base[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk100)();
	if(vs_base>=vs_top){vs_top=sup;goto T572;}
	V300= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T573;}
	V301= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T574;}
	V302= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T575;}
	V303= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T576;}
	V304= vs_base[0];
	vs_top=sup;
	goto T577;
goto T572;
T572:;
	V300= Cnil;
goto T573;
T573:;
	V301= Cnil;
goto T574;
T574:;
	V302= Cnil;
goto T575;
T575:;
	V303= Cnil;
goto T576;
T576:;
	V304= Cnil;
goto T577;
T577:;
	V309= append((V300),(V302));
	V310= list(3,VV[89],(V304),base[3]);
	V311= make_cons(/* INLINE-ARGS */V310,Cnil);
	V312= append((V301),/* INLINE-ARGS */V311);
	{object V306;
	object V307= /* INLINE-ARGS */V309;
	object V308= /* INLINE-ARGS */V312;
	if(endp(V307)||endp(V308)){
	V305= Cnil;
	goto T578;}
	base[4]=V306=MMcons(Cnil,Cnil);
goto T579;
T579:;
	(V306->c.c_car)= list(2,(V307->c.c_car),(V308->c.c_car));
	V307=MMcdr(V307);
	V308=MMcdr(V308);
	if(endp(V307)||endp(V308)){
	V305= base[4];
	goto T578;}
	V306=MMcdr(V306)=MMcons(Cnil,Cnil);
	goto T579;}
goto T578;
T578:;
	base[4]= list(3,VV[54],V305,(V303));
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
	{object V313=base[0]->c.c_cdr;
	if(endp(V313))invalid_macro_call();
	base[2]= (V313->c.c_car);
	V313=V313->c.c_cdr;
	if(endp(V313)){
	base[3]= small_fixnum(1);
	} else {
	base[3]= (V313->c.c_car);
	V313=V313->c.c_cdr;}
	if(!endp(V313))invalid_macro_call();}
	if(!(type_of(base[2])==t_symbol)){
	goto T582;}
	base[4]= list(3,VV[27],base[2],list(3,VV[90],base[2],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
goto T582;
T582:;
	{object V315;
	object V316;
	object V317;
	object V318;
	object V319;
	base[4]= base[2];
	base[5]= base[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk100)();
	if(vs_base>=vs_top){vs_top=sup;goto T588;}
	V315= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T589;}
	V316= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T590;}
	V317= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T591;}
	V318= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T592;}
	V319= vs_base[0];
	vs_top=sup;
	goto T593;
goto T588;
T588:;
	V315= Cnil;
goto T589;
T589:;
	V316= Cnil;
goto T590;
T590:;
	V317= Cnil;
goto T591;
T591:;
	V318= Cnil;
goto T592;
T592:;
	V319= Cnil;
goto T593;
T593:;
	V324= append((V315),(V317));
	V325= list(3,VV[90],(V319),base[3]);
	V326= make_cons(/* INLINE-ARGS */V325,Cnil);
	V327= append((V316),/* INLINE-ARGS */V326);
	{object V321;
	object V322= /* INLINE-ARGS */V324;
	object V323= /* INLINE-ARGS */V327;
	if(endp(V322)||endp(V323)){
	V320= Cnil;
	goto T594;}
	base[4]=V321=MMcons(Cnil,Cnil);
goto T595;
T595:;
	(V321->c.c_car)= list(2,(V322->c.c_car),(V323->c.c_car));
	V322=MMcdr(V322);
	V323=MMcdr(V323);
	if(endp(V322)||endp(V323)){
	V320= base[4];
	goto T594;}
	V321=MMcdr(V321)=MMcons(Cnil,Cnil);
	goto T595;}
goto T594;
T594:;
	base[4]= list(3,VV[54],V320,(V318));
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
	{object V328=base[0]->c.c_cdr;
	if(endp(V328))invalid_macro_call();
	base[2]= (V328->c.c_car);
	V328=V328->c.c_cdr;
	if(endp(V328))invalid_macro_call();
	base[3]= (V328->c.c_car);
	V328=V328->c.c_cdr;
	if(!endp(V328))invalid_macro_call();}
	{register object V329;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V329= vs_base[0];
	if(!(type_of(base[3])==t_symbol)){
	goto T598;}
	V330= list(2,(V329),base[2]);
	V331= make_cons(/* INLINE-ARGS */V330,Cnil);
	base[4]= list(3,VV[54],/* INLINE-ARGS */V331,list(3,VV[27],base[3],list(3,VV[91],(V329),base[3])));
	vs_top=(vs_base=base+4)+1;
	return;
goto T598;
T598:;
	{object V332;
	object V333;
	object V334;
	object V335;
	object V336;
	base[4]= base[3];
	base[5]= base[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk100)();
	if(vs_base>=vs_top){vs_top=sup;goto T604;}
	V332= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T605;}
	V333= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T606;}
	V334= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T607;}
	V335= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T608;}
	V336= vs_base[0];
	vs_top=sup;
	goto T609;
goto T604;
T604:;
	V332= Cnil;
goto T605;
T605:;
	V333= Cnil;
goto T606;
T606:;
	V334= Cnil;
goto T607;
T607:;
	V335= Cnil;
goto T608;
T608:;
	V336= Cnil;
goto T609;
T609:;
	base[5]= make_cons((V329),Cnil);
	base[6]= (V332);
	base[7]= (V334);
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V341= vs_base[0];
	base[5]= make_cons(base[2],Cnil);
	base[6]= (V333);
	V343= list(3,VV[91],(V329),(V336));
	base[7]= make_cons(/* INLINE-ARGS */V343,Cnil);
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V342= vs_base[0];
	{object V338;
	object V339= V341;
	object V340= V342;
	if(endp(V339)||endp(V340)){
	V337= Cnil;
	goto T610;}
	base[4]=V338=MMcons(Cnil,Cnil);
goto T611;
T611:;
	(V338->c.c_car)= list(2,(V339->c.c_car),(V340->c.c_car));
	V339=MMcdr(V339);
	V340=MMcdr(V340);
	if(endp(V339)||endp(V340)){
	V337= base[4];
	goto T610;}
	V338=MMcdr(V338)=MMcons(Cnil,Cnil);
	goto T611;}
goto T610;
T610:;
	base[4]= list(3,VV[54],V337,(V335));
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
	{object V344=base[0]->c.c_cdr;
	if(endp(V344))invalid_macro_call();
	base[2]= (V344->c.c_car);
	V344=V344->c.c_cdr;
	if(endp(V344))invalid_macro_call();
	base[3]= (V344->c.c_car);
	V344=V344->c.c_cdr;
	base[4]= V344;}
	{register object V345;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V345= vs_base[0];
	if(!(type_of(base[3])==t_symbol)){
	goto T622;}
	V346= list(2,(V345),base[2]);
	V347= make_cons(/* INLINE-ARGS */V346,Cnil);
	base[5]= list(3,VV[54],/* INLINE-ARGS */V347,list(3,VV[27],base[3],listA(4,VV[92],(V345),base[3],base[4])));
	vs_top=(vs_base=base+5)+1;
	return;
goto T622;
T622:;
	{object V348;
	object V349;
	object V350;
	object V351;
	object V352;
	base[5]= base[3];
	base[6]= base[1];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk100)();
	if(vs_base>=vs_top){vs_top=sup;goto T628;}
	V348= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T629;}
	V349= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T630;}
	V350= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T631;}
	V351= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T632;}
	V352= vs_base[0];
	vs_top=sup;
	goto T633;
goto T628;
T628:;
	V348= Cnil;
goto T629;
T629:;
	V349= Cnil;
goto T630;
T630:;
	V350= Cnil;
goto T631;
T631:;
	V351= Cnil;
goto T632;
T632:;
	V352= Cnil;
goto T633;
T633:;
	base[6]= make_cons((V345),Cnil);
	base[7]= (V348);
	base[8]= (V350);
	vs_top=(vs_base=base+6)+3;
	Lappend();
	vs_top=sup;
	V357= vs_base[0];
	base[6]= make_cons(base[2],Cnil);
	base[7]= (V349);
	V359= listA(4,VV[92],(V345),(V352),base[4]);
	base[8]= make_cons(/* INLINE-ARGS */V359,Cnil);
	vs_top=(vs_base=base+6)+3;
	Lappend();
	vs_top=sup;
	V358= vs_base[0];
	{object V354;
	object V355= V357;
	object V356= V358;
	if(endp(V355)||endp(V356)){
	V353= Cnil;
	goto T634;}
	base[5]=V354=MMcons(Cnil,Cnil);
goto T635;
T635:;
	(V354->c.c_car)= list(2,(V355->c.c_car),(V356->c.c_car));
	V355=MMcdr(V355);
	V356=MMcdr(V356);
	if(endp(V355)||endp(V356)){
	V353= base[5];
	goto T634;}
	V354=MMcdr(V354)=MMcons(Cnil,Cnil);
	goto T635;}
goto T634;
T634:;
	base[5]= list(3,VV[54],V353,(V351));
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
	{object V360=base[0]->c.c_cdr;
	if(endp(V360))invalid_macro_call();
	base[2]= (V360->c.c_car);
	V360=V360->c.c_cdr;
	if(!endp(V360))invalid_macro_call();}
	if(!(type_of(base[2])==t_symbol)){
	goto T645;}
	{object V361;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V361= vs_base[0];
	V362= list(2,(V361),list(2,VV[93],base[2]));
	V363= make_cons(/* INLINE-ARGS */V362,Cnil);
	base[3]= list(4,VV[36],/* INLINE-ARGS */V363,list(3,VV[27],base[2],list(2,VV[94],base[2])),(V361));
	vs_top=(vs_base=base+3)+1;
	return;}
goto T645;
T645:;
	{object V364;
	object V365;
	object V366;
	object V367;
	object V368;
	base[3]= base[2];
	base[4]= base[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk100)();
	if(vs_base>=vs_top){vs_top=sup;goto T652;}
	V364= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T653;}
	V365= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T654;}
	V366= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T655;}
	V367= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T656;}
	V368= vs_base[0];
	vs_top=sup;
	goto T657;
goto T652;
T652:;
	V364= Cnil;
goto T653;
T653:;
	V365= Cnil;
goto T654;
T654:;
	V366= Cnil;
goto T655;
T655:;
	V367= Cnil;
goto T656;
T656:;
	V368= Cnil;
goto T657;
T657:;
	V373= append((V364),(V366));
	V374= list(2,VV[94],(V368));
	V375= make_cons(/* INLINE-ARGS */V374,Cnil);
	V376= append((V365),/* INLINE-ARGS */V375);
	{object V370;
	object V371= /* INLINE-ARGS */V373;
	object V372= /* INLINE-ARGS */V376;
	if(endp(V371)||endp(V372)){
	V369= Cnil;
	goto T658;}
	base[3]=V370=MMcons(Cnil,Cnil);
goto T659;
T659:;
	(V370->c.c_car)= list(2,(V371->c.c_car),(V372->c.c_car));
	V371=MMcdr(V371);
	V372=MMcdr(V372);
	if(endp(V371)||endp(V372)){
	V369= base[3];
	goto T658;}
	V370=MMcdr(V370)=MMcons(Cnil,Cnil);
	goto T659;}
goto T658;
T658:;
	base[3]= list(3,VV[54],V369,list(3,VV[95],list(2,VV[93],(V368)),(V367)));
	vs_top=(vs_base=base+3)+1;
	return;}
}
static object  LnkTLI103(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[103],(void **)&LnkLI103,2,ap);va_end(ap);return V1;} /* SETF-EXPAND */
static object  LnkTLI102(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[102],(void **)&LnkLI102,3,ap);va_end(ap);return V1;} /* SETF-EXPAND-1 */
static void LnkT100(){ call_or_link(VV[100],(void **)&Lnk100);} /* GET-SETF-METHOD */
static object  LnkTLI99(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[99],(void **)&LnkLI99,4,ap);va_end(ap);return V1;} /* SETF-STRUCTURE-ACCESS */
static void LnkT98(){ call_or_link(VV[98],(void **)&Lnk98);} /* GET-SETF-METHOD-MULTIPLE-VALUE */
static void LnkT97(){ call_or_link(VV[97],(void **)&Lnk97);} /* GET-&ENVIRONMENT */
static object  LnkTLI96(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[96],(void **)&LnkLI96,1,ap);va_end(ap);return V1;} /* FIND-DOCUMENTATION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

