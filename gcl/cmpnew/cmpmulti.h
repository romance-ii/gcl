
static object LI1();
#define VMB1 register object *base=vs_top;
#define VMS1  register object *sup=vs_top+1;vs_top=sup;
#define VMV1 vs_reserve(1);
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top; object  V17 ,V13;
#define VMS2 vs_top += 3;
#define VMV2 vs_reserve(3);
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top;
#define VMS3 vs_top += 1;
#define VMV3 vs_reserve(1);
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top; object  V34 ,V33;
#define VMS4 vs_top += 4;
#define VMV4 vs_reserve(4);
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5();
#define VMB5 register object *base=vs_top;
#define VMS5 vs_top += 1;
#define VMV5 vs_reserve(1);
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6();
#define VMB6 register object *base=vs_top; object  V50 ,V49 ,V48 ,V47;
#define VMS6 vs_top += 3;
#define VMV6 vs_reserve(3);
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top; object  V64 ,V63 ,V56;
#define VMS7  register object *sup=vs_top+5;vs_top=sup;
#define VMV7 vs_reserve(5);
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8();
#define VMB8
#define VMS8
#define VMV8
#define VMR8(VMT8) return(VMT8);
static object LI9();
#define VMB9 register object *base=vs_top; object  V84;
#define VMS9 vs_top += 2;
#define VMV9 vs_reserve(2);
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10();
#define VMB10 register object *base=vs_top; object  V106 ,V97;
#define VMS10  register object *sup=vs_top+4;vs_top=sup;
#define VMV10 vs_reserve(4);
#define VMR10(VMT10) vs_top=base ; return(VMT10);
static object LI11();
#define VMB11 register object *base=vs_top; object  V123;
#define VMS11  register object *sup=vs_top+8;vs_top=sup;
#define VMV11 vs_reserve(8);
#define VMR11(VMT11) vs_top=base ; return(VMT11);
#define VM11 8
#define VM10 4
#define VM9 2
#define VM8 0
#define VM7 5
#define VM6 3
#define VM5 1
#define VM4 4
#define VM3 1
#define VM2 3
#define VM1 1
static char * VVi[74]={
#define Cdata VV[73]
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
(char *)(LI11)
};
#define VV ((object *)VVi)
static void LnkT72();
static void (*Lnk72)() = LnkT72;
static object  LnkTLI71(object,...);
static object  (*LnkLI71)() = (object (*)()) LnkTLI71;
static void LnkT70();
static void (*Lnk70)() = LnkT70;
static object  LnkTLI69(object,...);
static object  (*LnkLI69)() = (object (*)()) LnkTLI69;
static object  LnkTLI68(object,...);
static object  (*LnkLI68)() = (object (*)()) LnkTLI68;
static object  LnkTLI67(object,...);
static object  (*LnkLI67)() = (object (*)()) LnkTLI67;
static object  LnkTLI66(object,...);
static object  (*LnkLI66)() = (object (*)()) LnkTLI66;
static object  LnkTLI65(object,...);
static object  (*LnkLI65)() = (object (*)()) LnkTLI65;
static object  LnkTLI64(object,...);
static object  (*LnkLI64)() = (object (*)()) LnkTLI64;
static object  LnkTLI63(object,...);
static object  (*LnkLI63)() = (object (*)()) LnkTLI63;
static void LnkT62();
static void (*Lnk62)() = LnkT62;
static object  LnkTLI61();
static object  (*LnkLI61)() = LnkTLI61;
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
static object  LnkTLI55(object,...);
static object  (*LnkLI55)() = (object (*)()) LnkTLI55;
static object  LnkTLI54();
static object  (*LnkLI54)() = LnkTLI54;
static object  LnkTLI53(object,...);
static object  (*LnkLI53)() = (object (*)()) LnkTLI53;
static object  LnkTLI52(object,...);
static object  (*LnkLI52)() = (object (*)()) LnkTLI52;
static object  LnkTLI51(object,...);
static object  (*LnkLI51)() = (object (*)()) LnkTLI51;
static object  LnkTLI50(object,...);
static object  (*LnkLI50)() = (object (*)()) LnkTLI50;
static object  LnkTLI49(object,...);
static object  (*LnkLI49)() = (object (*)()) LnkTLI49;
static object  LnkTLI48(object,...);
static object  (*LnkLI48)() = (object (*)()) LnkTLI48;
static object  LnkTLI47(object,...);
static object  (*LnkLI47)() = (object (*)()) LnkTLI47;
static object  LnkTLI46(object,...);
static object  (*LnkLI46)() = (object (*)()) LnkTLI46;
static object  LnkTLI45(object,...);
static object  (*LnkLI45)() = (object (*)()) LnkTLI45;
static object  LnkTLI44(object,...);
static object  (*LnkLI44)() = (object (*)()) LnkTLI44;
static object  LnkTLI43(object,...);
static object  (*LnkLI43)() = (object (*)()) LnkTLI43;
static object  LnkTLI42(object,...);
static object  (*LnkLI42)() = (object (*)()) LnkTLI42;
static void LnkT41();
static void (*Lnk41)() = LnkT41;
static object  LnkTLI40(object,...);
static object  (*LnkLI40)() = (object (*)()) LnkTLI40;
static object  LnkTLI39(object,...);
static object  (*LnkLI39)() = (object (*)()) LnkTLI39;
static object  LnkTLI38(object,...);
static object  (*LnkLI38)() = (object (*)()) LnkTLI38;
