
static void L4();
static void L8();
static void L10();
static object LI1();
#define VMB1 object  V13 ,V12 ,V11 ,V6 ,V5;
#define VMS1
#define VMV1
#define VMR1(VMT1) return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top; object  V31;
#define VMS2  register object *sup=vs_top+1;vs_top=sup;
#define VMV2 vs_check;
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top; object  V64 ,V62 ,V55 ,V47;
#define VMS3 vs_top += 1;
#define VMV3 vs_check;
#define VMR3(VMT3) vs_top=base ; return(VMT3);
#define VC4 object  V74 ,V73;
static object LI5();
#define VMB5 register object *base=vs_top;
#define VMS5 vs_top += 2;
#define VMV5 vs_check;
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6();
#define VMB6 register object *base=vs_top;
#define VMS6 vs_top += 2;
#define VMV6 vs_check;
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7
#define VMS7
#define VMV7
#define VMR7(VMT7) return(VMT7);
#define VC8 object  V119;
static object LI9();
#define VMB9
#define VMS9
#define VMV9
#define VMR9(VMT9) return(VMT9);
#define VC10 object  V136 ,V135 ,V133 ,V130;
static object LI11();
#define VMB11 register object *base=vs_top;
#define VMS11  register object *sup=vs_top+2;vs_top=sup;
#define VMV11 vs_check;
#define VMR11(VMT11) vs_top=base ; return(VMT11);
static object LI12();
#define VMB12 register object *base=vs_top;
#define VMS12  register object *sup=vs_top+2;vs_top=sup;
#define VMV12 vs_check;
#define VMR12(VMT12) vs_top=base ; return(VMT12);
static object LI13();
#define VMB13
#define VMS13
#define VMV13
#define VMR13(VMT13) return(VMT13);
static object LI14();
#define VMB14 register object *base=vs_top; object  V178 ,V177;
#define VMS14  register object *sup=vs_top+4;vs_top=sup;
#define VMV14 vs_check;
#define VMR14(VMT14) vs_top=base ; return(VMT14);
static object LI15(object,object,...);
#define VMB15 register object *base=vs_top; object  V200 ,V199 ,V197 ,V191 ,V186;
#define VMS15  register object *sup=vs_top+7;vs_top=sup;
#define VMV15 vs_check;
#define VMR15(VMT15) vs_top=base ; return(VMT15);
static object LI16();
#define VMB16 register object *base=vs_top; object  V222 ,V219 ,V210 ,V209;
#define VMS16  register object *sup=vs_top+8;vs_top=sup;
#define VMV16 vs_check;
#define VMR16(VMT16) vs_top=base ; return(VMT16);
#define VM16 8
#define VM15 7
#define VM14 4
#define VM13 0
#define VM12 2
#define VM11 2
#define VM10 6
#define VM9 0
#define VM8 4
#define VM7 0
#define VM6 2
#define VM5 2
#define VM4 6
#define VM3 1
#define VM2 1
#define VM1 0
static char * VVi[77]={
#define Cdata VV[76]
(char *)(LI1),
(char *)(LI2),
(char *)(LI3),
(char *)(L4),
(char *)(LI5),
(char *)(LI6),
(char *)(LI7),
(char *)(L8),
(char *)(LI9),
(char *)(L10),
(char *)(LI11),
(char *)(LI12),
(char *)(LI13),
(char *)(LI14),
(char *)(LI15),
(char *)(LI16)
};
#define VV ((object *)VVi)
static object  LnkTLI75(object,...);
static object  (*LnkLI75)() = (object (*)()) LnkTLI75;
static object  LnkTLI74(object,...);
static object  (*LnkLI74)() = (object (*)()) LnkTLI74;
static object  LnkTLI73(object,...);
static object  (*LnkLI73)() = (object (*)()) LnkTLI73;
static object  LnkTLI72(object,...);
static object  (*LnkLI72)() = (object (*)()) LnkTLI72;
static object  LnkTLI71(object,...);
static object  (*LnkLI71)() = (object (*)()) LnkTLI71;
static object  LnkTLI69(object,...);
static object  (*LnkLI69)() = (object (*)()) LnkTLI69;
static object  LnkTLI68(object,...);
static object  (*LnkLI68)() = (object (*)()) LnkTLI68;
static void LnkT67();
static void (*Lnk67)() = LnkT67;
static void LnkT66();
static void (*Lnk66)() = LnkT66;
static object  LnkTLI65(object,...);
static object  (*LnkLI65)() = (object (*)()) LnkTLI65;
static void LnkT64();
static void (*Lnk64)() = LnkT64;
static object  LnkTLI63();
static object  (*LnkLI63)() = LnkTLI63;
static object  LnkTLI62();
static object  (*LnkLI62)() = LnkTLI62;
static object  LnkTLI61(object,...);
static object  (*LnkLI61)() = (object (*)()) LnkTLI61;
static object  LnkTLI60(object,...);
static object  (*LnkLI60)() = (object (*)()) LnkTLI60;
static object  LnkTLI59(object,...);
static object  (*LnkLI59)() = (object (*)()) LnkTLI59;
static object  LnkTLI58(object,...);
static object  (*LnkLI58)() = (object (*)()) LnkTLI58;
static object  LnkTLI57(object,...);
static object  (*LnkLI57)() = (object (*)()) LnkTLI57;
static object  LnkTLI56(object,...);
static object  (*LnkLI56)() = (object (*)()) LnkTLI56;
static void LnkT55();
static void (*Lnk55)() = LnkT55;
static object  LnkTLI54(object,...);
static object  (*LnkLI54)() = (object (*)()) LnkTLI54;
static object  LnkTLI53(object,...);
static object  (*LnkLI53)() = (object (*)()) LnkTLI53;
static object  LnkTLI52();
static object  (*LnkLI52)() = LnkTLI52;
static object  LnkTLI50(object,...);
static object  (*LnkLI50)() = (object (*)()) LnkTLI50;
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
static object  LnkTLI44(object,...);
static object  (*LnkLI44)() = (object (*)()) LnkTLI44;
static object  LnkTLI43(object,...);
static object  (*LnkLI43)() = (object (*)()) LnkTLI43;
