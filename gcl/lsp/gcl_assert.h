
static void L1();
static void L2();
static void L4();
static void L5();
static void L6();
static void L7();
static void L8();
#define VC1 object  V6 ,V5 ,V4 ,V3 ,V2;
#define VC2 object  V10 ,V9 ,V8;
static object LI3();
#define VMB3 object  V15;
#define VMS3
#define VMV3
#define VMR3(VMT3) return(VMT3);
#define VC4 object  V31 ,V30 ,V29 ,V21 ,V20;
#define VC5 object  V55 ,V54 ,V53 ,V52 ,V51 ,V43 ,V42 ,V40 ,V36 ,V35 ,V34;
#define VC6 object  V61 ,V60;
#define VC7 object  V71 ,V70 ,V66 ,V65;
#define VC8 object  V88 ,V87 ,V86 ,V85 ,V81 ,V80 ,V79 ,V75 ,V74 ,V73;
static object LI9();
#define VMB9 register object *base=vs_top; object  V119 ,V116 ,V115;
#define VMS9  register object *sup=vs_top+9;vs_top=sup;
#define VMV9 vs_reserve(9);
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10();
#define VMB10 object  V135 ,V133;
#define VMS10
#define VMV10
#define VMR10(VMT10) return(VMT10);
static object LI11();
#define VMB11 object  V141 ,V140;
#define VMS11
#define VMV11
#define VMR11(VMT11) return(VMT11);
#define VM11 0
#define VM10 0
#define VM9 9
#define VM8 6
#define VM7 6
#define VM6 5
#define VM5 7
#define VM4 7
#define VM3 0
#define VM2 7
#define VM1 7
static char * VVi[60]={
#define Cdata VV[59]
(char *)(L1),
(char *)(L2),
(char *)(LI3),
(char *)(L4),
(char *)(L5),
(char *)(L6),
(char *)(L7),
(char *)(L8),
(char *)(LI9),
(char *)(LI10),
(char *)(LI11)
};
#define VV ((object *)VVi)
static object  LnkTLI58(object,...);
static object  (*LnkLI58)() = (object (*)()) LnkTLI58;
static object  LnkTLI57(object,...);
static object  (*LnkLI57)() = (object (*)()) LnkTLI57;
static object  LnkTLI56(object,...);
static object  (*LnkLI56)() = (object (*)()) LnkTLI56;
static object  LnkTLI53(object,...);
static object  (*LnkLI53)() = (object (*)()) LnkTLI53;
