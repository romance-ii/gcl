
static void L4();
static void L9();
static void L10();
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
static object LI8(object,object,...);
#define VMB8 register object *base=vs_top; object  V22 ,V16;
#define VMS8  register object *sup=vs_top+5;vs_top=sup;
#define VMV8 vs_reserve(5);
#define VMR8(VMT8) vs_top=base ; return(VMT8);
#define VC9 object  V28;
#define VC10
static object LI11(object,object,object,...);
#define VMB11 register object *VOL base=vs_top; object  V40 ,V39 ,V38 ,V37 ,V36; object Vcs[3];
#define VMS11  register object *VOL sup=vs_top+4;vs_top=sup;
#define VMV11 vs_reserve(4);
#define VMR11(VMT11) vs_top=base ; return(VMT11);
static object LI12(object,...);
#define VMB12 register object *VOL base=vs_top; object  V50 ,V49 ,V48 ,V47 ,V46;
#define VMS12  register object *VOL sup=vs_top+9;vs_top=sup;
#define VMV12 vs_reserve(9);
#define VMR12(VMT12) vs_top=base ; return(VMT12);
static object LI13(object,object,...);
#define VMB13 register object *VOL base=vs_top; object  V68 ,V67 ,V66 ,V65 ,V64 ,V62 ,V61 ,V60 ,V59 ,V58 ,V56;
#define VMS13  register object *VOL sup=vs_top+7;vs_top=sup;
#define VMV13 vs_reserve(7);
#define VMR13(VMT13) vs_top=base ; return(VMT13);
#define VC14 object  V107 ,V106 ,V104 ,V103 ,V99 ,V98 ,V97 ,V96 ,V95 ,V94 ,V93 ,V89 ,V88 ,V87 ,V86 ,V79 ,V78 ,V77;
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
#define VM13 7
#define VM12 9
#define VM11 4
#define VM10 6
#define VM9 13
#define VM8 5
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
(char *)(LI8),
(char *)(L9),
(char *)(L10),
(char *)(LI11),
(char *)(LI12),
(char *)(LI13),
(char *)(L14),
(char *)(L15),
(char *)(&LC16)
};
#define VV ((object *)VVi)
static void LnkT79();
static void (*Lnk79)() = LnkT79;
static object  LnkTLI77(object,...);
static object  (*LnkLI77)() = (object (*)()) LnkTLI77;
static void LnkT76();
static void (*Lnk76)() = LnkT76;
static object  LnkTLI8(object,...);
static object  (*LnkLI8)() = (object (*)()) LnkTLI8;
static void LnkT75();
static void (*Lnk75)() = LnkT75;
static object  LnkTLI74(object,...);
static object  (*LnkLI74)() = (object (*)()) LnkTLI74;
static object  LnkTLI73(object,...);
static object  (*LnkLI73)() = (object (*)()) LnkTLI73;
static object  LnkTLI72(object,...);
static object  (*LnkLI72)() = (object (*)()) LnkTLI72;
static object  LnkTLI71(object,...);
static object  (*LnkLI71)() = (object (*)()) LnkTLI71;
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
