
static void L4();
static void L5();
static void L11();
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
#define VC4
#define VC5 object  V8 ,V6;
static object LI6(object,object,...);
#define VMB6 register object *VOL base=vs_top; object  V43 ,V36 ,V35 ,V34 ,V33 ,V32 ,V31 ,V28 ,V27 ,V26 ,V25 ,V24 ,V22 ,V15 ,V13 ,V12;
#define VMS6  register object *VOL sup=vs_top+38;vs_top=sup;
#define VMV6 vs_reserve(38);
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top;
#define VMS7  register object *sup=vs_top+2;vs_top=sup;
#define VMV7 vs_reserve(2);
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8(object,...);
#define VMB8 register object *base=vs_top; object  V51;
#define VMS8  register object *sup=vs_top+1;vs_top=sup;
#define VMV8 vs_reserve(1);
#define VMR8(VMT8) vs_top=base ; return(VMT8);
static object LI9();
#define VMB9
#define VMS9
#define VMV9
#define VMR9(VMT9) return(VMT9);
static object LI10();
#define VMB10
#define VMS10
#define VMV10
#define VMR10(VMT10) return(VMT10);
#define VC11
static object LI12();
#define VMB12
#define VMS12
#define VMV12
#define VMR12(VMT12) return(VMT12);
static object LI13();
#define VMB13
#define VMS13
#define VMV13
#define VMR13(VMT13) return(VMT13);
#define VC14
static void LC18();
#define VC15
static void LC17();
#define VC16
static void LC16();
#define VC17
static void LC15();
#define VC18
static void LC18();
static void LC17();
static void LC16();
static void LC15();
#define VM18 1
#define VM17 4
#define VM16 1
#define VM15 4
#define VM14 2
#define VM13 0
#define VM12 0
#define VM11 1
#define VM10 0
#define VM9 0
#define VM8 1
#define VM7 2
#define VM6 38
#define VM5 3
#define VM4 4
#define VM3 0
#define VM2 1
#define VM1 1
static char * VVi[93]={
#define Cdata VV[92]
(char *)(LI1),
(char *)(LI2),
(char *)(LI3),
(char *)(L4),
(char *)(L5),
(char *)(LI6),
(char *)(LI7),
(char *)(LI8),
(char *)(LI9),
(char *)(LI10),
(char *)(L11),
(char *)(LI12),
(char *)(LI13),
(char *)(L14)
};
#define VV ((object *)VVi)
static void LnkT91();
static void (*Lnk91)() = LnkT91;
static void LnkT90();
static void (*Lnk90)() = LnkT90;
static void LnkT89();
static void (*Lnk89)() = LnkT89;
static void LnkT88();
static void (*Lnk88)() = LnkT88;
static void LnkT85();
static void (*Lnk85)() = LnkT85;
static void LnkT83();
static void (*Lnk83)() = LnkT83;
static void LnkT82();
static void (*Lnk82)() = LnkT82;
static object  LnkTLI69(object,...);
static object  (*LnkLI69)() = (object (*)()) LnkTLI69;
static void LnkT81();
static void (*Lnk81)() = LnkT81;
static object  LnkTLI80(object,...);
static object  (*LnkLI80)() = (object (*)()) LnkTLI80;
static void LnkT79();
static void (*Lnk79)() = LnkT79;
static object  LnkTLI78(object,...);
static object  (*LnkLI78)() = (object (*)()) LnkTLI78;
static object  LnkTLI77(object,...);
static object  (*LnkLI77)() = (object (*)()) LnkTLI77;
static void LnkT76();
static void (*Lnk76)() = LnkT76;
static void LnkT75();
static void (*Lnk75)() = LnkT75;
static void LnkT74();
static void (*Lnk74)() = LnkT74;
static object  LnkTLI73(object,...);
static object  (*LnkLI73)() = (object (*)()) LnkTLI73;
static void LnkT72();
static void (*Lnk72)() = LnkT72;
static void LnkT71();
static void (*Lnk71)() = LnkT71;
