
static void L1();
static void L2();
static void L3();
static void L4();
#define VC1
#define VC2
#define VC3 object  V5 ,V4;
#define VC4 object  V7;
static object LI5();
#define VMB5 object  V14;
#define VMS5
#define VMV5
#define VMR5(VMT5) return(VMT5);
static object LI6(object,object,...);
#define VMB6 register object *base=vs_top; object  V48 ,V47 ,V46 ,V45 ,V44 ,V37 ,V35 ,V34 ,V32 ,V30 ,V28; object Vcs[3];
#define VMS6  register object *sup=vs_top+4;vs_top=sup;
#define VMV6 vs_reserve(4);
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top; object  V62 ,V60 ,V57;
#define VMS7 vs_top += 1;
#define VMV7 vs_reserve(1);
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8();
#define VMB8 register object *base=vs_top;
#define VMS8 vs_top += 1;
#define VMV8 vs_reserve(1);
#define VMR8(VMT8) vs_top=base ; return(VMT8);
#define VM8 1
#define VM7 1
#define VM6 4
#define VM5 0
#define VM4 4
#define VM3 4
#define VM2 3
#define VM1 3
static char * VVi[58]={
#define Cdata VV[57]
(char *)(L1),
(char *)(L2),
(char *)(L3),
(char *)(L4),
(char *)(LI5),
(char *)(LI6),
(char *)(LI7),
(char *)(LI8)
};
#define VV ((object *)VVi)
static object  LnkTLI56(object,...);
static object  (*LnkLI56)() = (object (*)()) LnkTLI56;
static object  LnkTLI55();
static object  (*LnkLI55)() = LnkTLI55;
static object  LnkTLI54();
static object  (*LnkLI54)() = LnkTLI54;
static object  LnkTLI53(object,...);
static object  (*LnkLI53)() = (object (*)()) LnkTLI53;
static void LnkT52();
static void (*Lnk52)() = LnkT52;
static object  LnkTLI51(object,...);
static object  (*LnkLI51)() = (object (*)()) LnkTLI51;
static object  LnkTLI50();
static object  (*LnkLI50)() = LnkTLI50;
static object  LnkTLI49(object,...);
static object  (*LnkLI49)() = (object (*)()) LnkTLI49;
static object  LnkTLI48(object,...);
static object  (*LnkLI48)() = (object (*)()) LnkTLI48;
static object  LnkTLI47();
static object  (*LnkLI47)() = LnkTLI47;
static object  LnkTLI46(object,...);
static object  (*LnkLI46)() = (object (*)()) LnkTLI46;
static object  LnkTLI45(object,...);
static object  (*LnkLI45)() = (object (*)()) LnkTLI45;
