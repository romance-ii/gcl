
static void L2();
static void L3();
static void L4();
static void L5();
static void L8();
static void L11();
static void L12();
static void L13();
static object LI1();
#define VMB1 register object *base=vs_top;
#define VMS1  register object *sup=vs_top+7;vs_top=sup;
#define VMV1 vs_check;
#define VMR1(VMT1) vs_top=base ; return(VMT1);
#define VC2 object  V34 ,V33 ,V32 ,V31 ,V30 ,V29;
#define VC3
#define VC4
#define VC5
static object LI6();
#define VMB6
#define VMS6
#define VMV6
#define VMR6(VMT6) return(VMT6);
static object LI7();
#define VMB7
#define VMS7
#define VMV7
#define VMR7(VMT7) return(VMT7);
#define VC8 object  V130 ,V129 ,V128 ,V127 ,V126 ,V125 ,V121 ,V120 ,V119 ,V118 ,V117 ,V116 ,V115 ,V114 ,V113 ,V111 ,V110 ,V109 ,V108 ,V107 ,V104 ,V102 ,V101 ,V100 ,V93 ,V89 ,V88 ,V87 ,V86;
static object LI9();
#define VMB9 register object *base=vs_top; object  V150 ,V149 ,V148 ,V147 ,V146 ,V145;
#define VMS9  register object *sup=vs_top+1;vs_top=sup;
#define VMV9 vs_check;
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10(object,object,object,object,...);
#define VMB10
#define VMS10
#define VMV10
#define VMR10(VMT10) return(VMT10);
#define VC11 object  V174;
#define VC12
#define VC13 object  V189 ,V188 ,V187;
#define VM13 15
#define VM12 6
#define VM11 13
#define VM10 0
#define VM9 1
#define VM8 20
#define VM7 0
#define VM6 0
#define VM5 5
#define VM4 7
#define VM3 4
#define VM2 27
#define VM1 7
static char * VVi[97]={
#define Cdata VV[96]
(char *)(LI1),
(char *)(L2),
(char *)(L3),
(char *)(L4),
(char *)(L5),
(char *)(LI6),
(char *)(LI7),
(char *)(L8),
(char *)(LI9),
(char *)(LI10),
(char *)(L11),
(char *)(L12),
(char *)(L13)
};
#define VV ((object *)VVi)
static void LnkT95();
static void (*Lnk95)() = LnkT95;
static void LnkT94();
static void (*Lnk94)() = LnkT94;
static void LnkT93();
static void (*Lnk93)() = LnkT93;
static object  LnkTLI92(object,...);
static object  (*LnkLI92)() = (object (*)()) LnkTLI92;
static void LnkT91();
static void (*Lnk91)() = LnkT91;
static object  LnkTLI90(object,...);
static object  (*LnkLI90)() = (object (*)()) LnkTLI90;
static object  LnkTLI49(object,...);
static object  (*LnkLI49)() = (object (*)()) LnkTLI49;
static void LnkT89();
static void (*Lnk89)() = LnkT89;
static void LnkT88();
static void (*Lnk88)() = LnkT88;
static void LnkT30();
static void (*Lnk30)() = LnkT30;
