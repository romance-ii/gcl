
static void L1();
static void L3();
static void L8();
static void L9();
static void L10();
static void L11();
static void L12();
static void L13();
#define VC1
static object LI2(object,...);
#define VMB2 register object *base=vs_top; object  V4;
#define VMS2  register object *sup=vs_top+1;vs_top=sup;
#define VMV2 vs_check;
#define VMR2(VMT2) vs_top=base ; return(VMT2);
#define VC3
static object LI4();
#define VMB4 register object *base=vs_top;
#define VMS4  register object *sup=vs_top+3;vs_top=sup;
#define VMV4 vs_check;
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5();
#define VMB5 register object *base=vs_top;
#define VMS5 vs_top += 1;
#define VMV5 vs_check;
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6();
#define VMB6 register object *base=vs_top; object  V16;
#define VMS6  register object *sup=vs_top+2;vs_top=sup;
#define VMV6 vs_check;
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top; object  V22;
#define VMS7  register object *sup=vs_top+3;vs_top=sup;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
#define VC8
#define VC9
#define VC10
#define VC11
#define VC12
static void LC14();
#define VC13
static void LC14();
#define VM13 2
#define VM12 4
#define VM11 4
#define VM10 4
#define VM9 4
#define VM8 9
#define VM7 3
#define VM6 2
#define VM5 1
#define VM4 3
#define VM3 4
#define VM2 1
#define VM1 7
static char * VVi[39]={
#define Cdata VV[38]
(char *)(L1),
(char *)(LI2),
(char *)(L3),
(char *)(LI4),
(char *)(LI5),
(char *)(LI6),
(char *)(LI7),
(char *)(L8),
(char *)(L9),
(char *)(L10),
(char *)(L11),
(char *)(L12),
(char *)(L13)
};
#define VV ((object *)VVi)
static void LnkT37();
static void (*Lnk37)() = LnkT37;
static void LnkT35();
static void (*Lnk35)() = LnkT35;
static object  LnkTLI34(object,...);
static object  (*LnkLI34)() = (object (*)()) LnkTLI34;
static void LnkT33();
static void (*Lnk33)() = LnkT33;
static object  LnkTLI32(object,...);
static object  (*LnkLI32)() = (object (*)()) LnkTLI32;
static object  LnkTLI31(object,...);
static object  (*LnkLI31)() = (object (*)()) LnkTLI31;
static object  LnkTLI20(object,...);
static object  (*LnkLI20)() = (object (*)()) LnkTLI20;
static void LnkT10();
static void (*Lnk10)() = LnkT10;
static void LnkT30();
static void (*Lnk30)() = LnkT30;
static object  LnkTLI29(object,...);
static object  (*LnkLI29)() = (object (*)()) LnkTLI29;
static object  LnkTLI28();
static object  (*LnkLI28)() = LnkTLI28;
static void LnkT27();
static void (*Lnk27)() = LnkT27;
static void LnkT6();
static void (*Lnk6)() = LnkT6;
