
static void L11();
static void L12();
static void L13();
static void L14();
static object LI1();
#define VMB1 register object *base=vs_top;
#define VMS1  register object *sup=vs_top+1;vs_top=sup;
#define VMV1 vs_check;
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2
#define VMS2
#define VMV2
#define VMR2(VMT2) return(VMT2);
static object LI3();
#define VMB3
#define VMS3
#define VMV3
#define VMR3(VMT3) return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top; object  V11 ,V10 ,V9;
#define VMS4  register object *sup=vs_top+3;vs_top=sup;
#define VMV4 vs_check;
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5();
#define VMB5 register object *base=vs_top; object  V18 ,V17;
#define VMS5  register object *sup=vs_top+2;vs_top=sup;
#define VMV5 vs_check;
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6();
#define VMB6 register object *base=vs_top;
#define VMS6  register object *sup=vs_top+1;vs_top=sup;
#define VMV6 vs_check;
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top; object  V28 ,V24;
#define VMS7  register object *sup=vs_top+4;vs_top=sup;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8();
#define VMB8
#define VMS8
#define VMV8
#define VMR8(VMT8) return(VMT8);
static object LI9();
#define VMB9 register object *base=vs_top;
#define VMS9 vs_top += 1;
#define VMV9 vs_check;
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10();
#define VMB10 register object *base=vs_top;
#define VMS10 vs_top += 2;
#define VMV10 vs_check;
#define VMR10(VMT10) vs_top=base ; return(VMT10);
#define VC11 object  V41 ,V40 ,V39 ,V38;
#define VC12 object  V50 ,V49 ,V48 ,V47;
#define VC13 object  V60 ,V59 ,V58 ,V57;
#define VC14 object  V69 ,V68 ,V67 ,V66;
static object LI15();
#define VMB15
#define VMS15
#define VMV15
#define VMR15(VMT15) return(VMT15);
static void LC23();
#define VC16
static void LC22();
#define VC17
static void LC21();
#define VC18
static void LC20();
#define VC19
static void LC19();
#define VC20
static void LC18();
#define VC21
static void LC17();
#define VC22
static void LC16();
#define VC23
static void LC23();
static void LC22();
static void LC21();
static void LC20();
static void LC19();
static void LC18();
static void LC17();
static void LC16();
#define VM23 1
#define VM22 4
#define VM21 1
#define VM20 4
#define VM19 1
#define VM18 4
#define VM17 1
#define VM16 4
#define VM15 0
#define VM14 7
#define VM13 7
#define VM12 6
#define VM11 7
#define VM10 2
#define VM9 1
#define VM8 0
#define VM7 4
#define VM6 1
#define VM5 2
#define VM4 3
#define VM3 0
#define VM2 0
#define VM1 1
static char * VVi[33]={
#define Cdata VV[32]
(char *)(LI1),
(char *)(LI2),
(char *)(LI3),
(char *)(LI4),
(char *)(LI5),
(char *)(LI6),
(char *)(LI7),
(char *)(LI8),
(char *)(LI9),
(char *)(LI10),
(char *)(L11),
(char *)(L12),
(char *)(L13),
(char *)(L14),
(char *)(LI15)
};
#define VV ((object *)VVi)
static object  LnkTLI31();
static object  (*LnkLI31)() = LnkTLI31;
static void LnkT30();
static void (*Lnk30)() = LnkT30;
static object  LnkTLI29(object,...);
static object  (*LnkLI29)() = (object (*)()) LnkTLI29;
static object  LnkTLI28(object,...);
static object  (*LnkLI28)() = (object (*)()) LnkTLI28;
static object  LnkTLI27(object,...);
static object  (*LnkLI27)() = (object (*)()) LnkTLI27;
static void LnkT26();
static void (*Lnk26)() = LnkT26;
