
static void L4();
static void L8();
static void L9();
static void L10();
static void L11();
static void L12();
static void L13();
static void L14();
static void L15();
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
#define VC4 object  V9 ,V5;
static object LI5();
#define VMB5 register object *base=vs_top;
#define VMS5  register object *sup=vs_top+1;vs_top=sup;
#define VMV5 vs_reserve(1);
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6();
#define VMB6 register object *base=vs_top;
#define VMS6  register object *sup=vs_top+1;vs_top=sup;
#define VMV6 vs_reserve(1);
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7
#define VMS7
#define VMV7
#define VMR7(VMT7) return(VMT7);
#define VC8 object  V20;
#define VC9
#define VC10
#define VC11 object  V31 ,V30;
#define VC12 object  V37 ,V36;
#define VC13 object  V46 ,V45 ,V43 ,V42;
#define VC14 object  V83 ,V82 ,V80 ,V79 ,V75 ,V74 ,V73 ,V72 ,V71 ,V70 ,V69 ,V65 ,V64 ,V63 ,V62 ,V55 ,V54 ,V53;
#define VC15
static void LC24();
#define VC16
static void LC23();
#define VC17
static void LC22();
#define VC18
static void LC21();
#define VC19
static void LC20();
#define VC20
static void LC19();
#define VC21
static void LC18();
#define VC22
static void LC17();
#define VC23
static void LC16();
#define VC24
static void LC24();
static void LC23();
static void LC22();
static void LC21();
static void LC20();
static void LC19();
static void LC18();
static void LC17();
static void LC16();
#define VM24 2
#define VM23 1
#define VM22 6
#define VM21 1
#define VM20 3
#define VM19 1
#define VM18 4
#define VM17 1
#define VM16 3
#define VM15 4
#define VM14 6
#define VM13 13
#define VM12 11
#define VM11 12
#define VM10 6
#define VM9 14
#define VM8 7
#define VM7 0
#define VM6 1
#define VM5 1
#define VM4 6
#define VM3 0
#define VM2 1
#define VM1 1
static char * VVi[81]={
#define Cdata VV[80]
(char *)(LI1),
(char *)(LI2),
(char *)(LI3),
(char *)(L4),
(char *)(LI5),
(char *)(LI6),
(char *)(LI7),
(char *)(L8),
(char *)(L9),
(char *)(L10),
(char *)(L11),
(char *)(L12),
(char *)(L13),
(char *)(L14),
(char *)(L15),
(char *)(&LC16)
};
#define VV ((object *)VVi)
static void LnkT79();
static void (*Lnk79)() = LnkT79;
static void LnkT77();
static void (*Lnk77)() = LnkT77;
static void LnkT76();
static void (*Lnk76)() = LnkT76;
static void LnkT8();
static void (*Lnk8)() = LnkT8;
static void LnkT75();
static void (*Lnk75)() = LnkT75;
static void LnkT74();
static void (*Lnk74)() = LnkT74;
static void LnkT73();
static void (*Lnk73)() = LnkT73;
static void LnkT72();
static void (*Lnk72)() = LnkT72;
static void LnkT71();
static void (*Lnk71)() = LnkT71;
static void LnkT70();
static void (*Lnk70)() = LnkT70;
static void LnkT69();
static void (*Lnk69)() = LnkT69;
static void LnkT21();
static void (*Lnk21)() = LnkT21;
static void LnkT68();
static void (*Lnk68)() = LnkT68;
static void LnkT66();
static void (*Lnk66)() = LnkT66;
