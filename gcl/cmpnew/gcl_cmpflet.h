
static void L3();
static void L5();
static object LI1(object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI1key={5,0,Cstd_key_defaults,{(void *)40,(void *)41,(void *)6,(void *)5,(void *)4}};
#define VMB1 register object *base=vs_top; object Vcs[10];
#define VMS1  register object *sup=vs_top+6;vs_top=sup;
#define VMV1 vs_check;
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top; object  V31 ,V30 ,V29;
#define VMS2  register object *sup=vs_top+7;vs_top=sup;
#define VMV2 vs_check;
#define VMR2(VMT2) vs_top=base ; return(VMT2);
#define VC3 object  V54 ,V53 ,V52 ,V51 ,V47 ,V40 ,V39;
static object LI4();
#define VMB4 register object *base=vs_top; object  V91 ,V90 ,V89;
#define VMS4  register object *sup=vs_top+7;vs_top=sup;
#define VMV4 vs_check;
#define VMR4(VMT4) vs_top=base ; return(VMT4);
#define VC5 object  V114 ,V107 ,V106 ,V103 ,V102 ,V101 ,V100;
static object LI6();
#define VMB6 register object *base=vs_top; object  V128 ,V127;
#define VMS6  register object *sup=vs_top+5;vs_top=sup;
#define VMV6 vs_check;
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top; object  V138 ,V137;
#define VMS7 vs_top += 1;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8();
#define VMB8 register object *base=vs_top;
#define VMS8 vs_top += 1;
#define VMV8 vs_check;
#define VMR8(VMT8) vs_top=base ; return(VMT8);
static object LI9();
#define VMB9 register object *base=vs_top; object  V153;
#define VMS9 vs_top += 1;
#define VMV9 vs_check;
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10();
#define VMB10 register object *base=vs_top; object  V165 ,V159;
#define VMS10 vs_top += 5;
#define VMV10 vs_check;
#define VMR10(VMT10) vs_top=base ; return(VMT10);
#define VM10 5
#define VM9 1
#define VM8 1
#define VM7 1
#define VM6 5
#define VM5 7
#define VM4 7
#define VM3 8
#define VM2 7
#define VM1 6
static char * VVi[69]={
#define Cdata VV[68]
(char *)(LI1),
(char *)(&LI1key),
(char *)(LI2),
(char *)(L3),
(char *)(LI4),
(char *)(L5),
(char *)(LI6),
(char *)(LI7),
(char *)(LI8),
(char *)(LI9),
(char *)(LI10)
};
#define VV ((object *)VVi)
static object  LnkTLI67(object,...);
static object  (*LnkLI67)() = (object (*)()) LnkTLI67;
static object  LnkTLI66(object,...);
static object  (*LnkLI66)() = (object (*)()) LnkTLI66;
static object  LnkTLI65(object,...);
static object  (*LnkLI65)() = (object (*)()) LnkTLI65;
static object  LnkTLI64(object,...);
static object  (*LnkLI64)() = (object (*)()) LnkTLI64;
static object  LnkTLI63();
static object  (*LnkLI63)() = LnkTLI63;
static object  LnkTLI62(object,...);
static object  (*LnkLI62)() = (object (*)()) LnkTLI62;
static object  LnkTLI61(object,...);
static object  (*LnkLI61)() = (object (*)()) LnkTLI61;
static object  LnkTLI60(object,...);
static object  (*LnkLI60)() = (object (*)()) LnkTLI60;
static object  LnkTLI59(object,...);
static object  (*LnkLI59)() = (object (*)()) LnkTLI59;
static void LnkT58();
static void (*Lnk58)() = LnkT58;
static object  LnkTLI57();
static object  (*LnkLI57)() = LnkTLI57;
static object  LnkTLI56(object,...);
static object  (*LnkLI56)() = (object (*)()) LnkTLI56;
static object  LnkTLI55(object,...);
static object  (*LnkLI55)() = (object (*)()) LnkTLI55;
static object  LnkTLI54(object,...);
static object  (*LnkLI54)() = (object (*)()) LnkTLI54;
static object  LnkTLI53(object,...);
static object  (*LnkLI53)() = (object (*)()) LnkTLI53;
static object  LnkTLI52();
static object  (*LnkLI52)() = LnkTLI52;
static object  LnkTLI51(object,...);
static object  (*LnkLI51)() = (object (*)()) LnkTLI51;
static object  LnkTLI50(object,...);
static object  (*LnkLI50)() = (object (*)()) LnkTLI50;
static void LnkT49();
static void (*Lnk49)() = LnkT49;
static object  LnkTLI48(object,...);
static object  (*LnkLI48)() = (object (*)()) LnkTLI48;
static object  LnkTLI47(object,...);
static object  (*LnkLI47)() = (object (*)()) LnkTLI47;
static object  LnkTLI46(object,...);
static object  (*LnkLI46)() = (object (*)()) LnkTLI46;
static void LnkT45();
static void (*Lnk45)() = LnkT45;
static object  LnkTLI44(object,...);
static object  (*LnkLI44)() = (object (*)()) LnkTLI44;
static object  LnkTLI43(object,...);
static object  (*LnkLI43)() = (object (*)()) LnkTLI43;
static object  LnkTLI42(object,...);
static object  (*LnkLI42)() = (object (*)()) LnkTLI42;
