
static void L4();
static void L5();
static void L9();
static void L10();
static void L11();
static void L12();
static void L13();
static void L14();
static object LI1();
#define VMB1 register object *base=vs_top;
#define VMS1  register object *sup=vs_top+1;vs_top=sup;
#define VMV1 vs_reserve(1);
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top;
#define VMS2  register object *sup=vs_top+1;vs_top=sup;
#define VMV2 vs_reserve(1);
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3
#define VMS3
#define VMV3
#define VMR3(VMT3) return(VMT3);
#define VC4 object  V8 ,V7 ,V6;
#define VC5 object  V11 ,V10;
static object LI6();
#define VMB6 register object *base=vs_top;
#define VMS6  register object *sup=vs_top+1;vs_top=sup;
#define VMV6 vs_reserve(1);
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top; object  V17 ,V13;
#define VMS7  register object *sup=vs_top+4;vs_top=sup;
#define VMV7 vs_reserve(4);
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8();
#define VMB8
#define VMS8
#define VMV8
#define VMR8(VMT8) return(VMT8);
#define VC9
#define VC10
#define VC11 object  V26 ,V25;
#define VC12 object  V32 ,V31;
#define VC13 object  V39 ,V38;
#define VC14 object  V45 ,V44;
static object LI15();
#define VMB15 register object *base=vs_top;
#define VMS15  register object *sup=vs_top+0;vs_top=sup;
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
#define VM14 11
#define VM13 11
#define VM12 10
#define VM11 11
#define VM10 3
#define VM9 3
#define VM8 0
#define VM7 4
#define VM6 1
#define VM5 3
#define VM4 5
#define VM3 0
#define VM2 1
#define VM1 1
static char * VVi[33]={
#define Cdata VV[32]
(char *)(LI1),
(char *)(LI2),
(char *)(LI3),
(char *)(L4),
(char *)(L5),
(char *)(LI6),
(char *)(LI7),
(char *)(LI8),
(char *)(L9),
(char *)(L10),
(char *)(L11),
(char *)(L12),
(char *)(L13),
(char *)(L14),
(char *)(LI15)
};
#define VV ((object *)VVi)
static void LnkT31();
static void (*Lnk31)() = LnkT31;
static void LnkT30();
static void (*Lnk30)() = LnkT30;
static void LnkT29();
static void (*Lnk29)() = LnkT29;
static void LnkT28();
static void (*Lnk28)() = LnkT28;
static void LnkT27();
static void (*Lnk27)() = LnkT27;
static void LnkT26();
static void (*Lnk26)() = LnkT26;
