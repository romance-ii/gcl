
static void L3();
static void L4();
static void L5();
static void L6();
static void L8();
static void L10();
static void L11();
static void L13();
static object LI1();
#define VMB1 register object *base=vs_top;
#define VMS1  register object *sup=vs_top+2;vs_top=sup;
#define VMV1 vs_check;
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 object  V27 ,V26;
#define VMS2
#define VMV2
#define VMR2(VMT2) return(VMT2);
#define VC3 object  V36 ,V35 ,V34 ,V33 ,V32;
#define VC4 object  V47 ,V46 ,V45 ,V44 ,V43 ,V42;
#define VC5 object  V55 ,V54 ,V53 ,V52 ,V51;
#define VC6 object  V65 ,V64 ,V63 ,V62 ,V61 ,V60;
static object LI7();
#define VMB7 register object *base=vs_top;
#define VMS7  register object *sup=vs_top+4;vs_top=sup;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
#define VC8
#define VC9
#define VC10 object  V85 ,V84 ,V80 ,V79 ,V78;
static object LI12();
#define VMB11 register object *base=vs_top; object  V86;
#define VMS11  register object *sup=vs_top+2;vs_top=sup;
#define VMV11 vs_check;
#define VMR11(VMT11) vs_top=base ; return(VMT11);
#define VC12 object  V96 ,V95 ,V94 ,V93 ,V92 ,V91;
static void L9();
#define VC13
#define VM13 2
#define VM12 6
#define VM11 2
#define VM10 7
#define VM9 10
#define VM8 5
#define VM7 4
#define VM6 5
#define VM5 5
#define VM4 5
#define VM3 5
#define VM2 0
#define VM1 2
static char * VVi[76]={
#define Cdata VV[75]
(char *)(LI1),
(char *)(LI2),
(char *)(L3),
(char *)(L4),
(char *)(L5),
(char *)(L6),
(char *)(LI7),
(char *)(L8),
(char *)(L10),
(char *)(L11),
(char *)(LI12),
(char *)(L13)
};
#define VV ((object *)VVi)
static void LnkT74();
static void (*Lnk74)() = LnkT74;
static object  LnkTLI73(object,...);
static object  (*LnkLI73)() = (object (*)()) LnkTLI73;
static object  LnkTLI72(object,...);
static object  (*LnkLI72)() = (object (*)()) LnkTLI72;
static void LnkT8();
static void (*Lnk8)() = LnkT8;
