
static void L8();
static object LI1();
#define VMB1 register object *base=vs_top; object  V31 ,V30 ,V27 ,V23;
#define VMS1  register object *sup=vs_top+5;vs_top=sup;
#define VMV1 vs_check;
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top; object  V79 ,V74 ,V71 ,V69 ,V68 ,V64 ,V58 ,V57 ,V56 ,V52 ,V51 ,V49 ,V48;
#define VMS2  register object *sup=vs_top+9;vs_top=sup;
#define VMV2 vs_check;
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top; object  V113 ,V112 ,V109 ,V106;
#define VMS3  register object *sup=vs_top+5;vs_top=sup;
#define VMV3 vs_check;
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top; object  V157 ,V155 ,V149 ,V148 ,V147 ,V146 ,V144 ,V142 ,V141 ,V137 ,V136 ,V133 ,V132 ,V131 ,V128 ,V127;
#define VMS4  register object *sup=vs_top+8;vs_top=sup;
#define VMV4 vs_check;
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5();
#define VMB5 object  V167;
#define VMS5
#define VMV5
#define VMR5(VMT5) return(VMT5);
static object LI6();
#define VMB6 register object *base=vs_top;
#define VMS6 vs_top += 1;
#define VMV6 vs_check;
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top;
#define VMS7 vs_top += 1;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
#define VC8
static object LI9();
#define VMB9 register object *base=vs_top; object  V205 ,V204;
#define VMS9 vs_top += 3;
#define VMV9 vs_check;
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10();
#define VMB10 register object *base=vs_top; object  V212;
#define VMS10  register object *sup=vs_top+3;vs_top=sup;
#define VMV10 vs_check;
#define VMR10(VMT10) vs_top=base ; return(VMT10);
#define VM10 3
#define VM9 3
#define VM8 4
#define VM7 1
#define VM6 1
#define VM5 0
#define VM4 8
#define VM3 5
#define VM2 9
#define VM1 5
static char * VVi[78]={
#define Cdata VV[77]
(char *)(LI1),
(char *)(LI2),
(char *)(LI3),
(char *)(LI4),
(char *)(LI5),
(char *)(LI6),
(char *)(LI7),
(char *)(L8),
(char *)(LI9),
(char *)(LI10)
};
#define VV ((object *)VVi)
static object  LnkTLI76(object,...);
static object  (*LnkLI76)() = (object (*)()) LnkTLI76;
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
static void LnkT68();
static void (*Lnk68)() = LnkT68;
static object  LnkTLI67(object,...);
static object  (*LnkLI67)() = (object (*)()) LnkTLI67;
static object  LnkTLI66(object,...);
static object  (*LnkLI66)() = (object (*)()) LnkTLI66;
static object  LnkTLI12(object,...);
static object  (*LnkLI12)() = (object (*)()) LnkTLI12;
static object  LnkTLI65(object,...);
static object  (*LnkLI65)() = (object (*)()) LnkTLI65;
static object  LnkTLI64();
static object  (*LnkLI64)() = LnkTLI64;
static object  LnkTLI63(object,...);
static object  (*LnkLI63)() = (object (*)()) LnkTLI63;
static object  LnkTLI62(object,...);
static object  (*LnkLI62)() = (object (*)()) LnkTLI62;
static object  LnkTLI55();
static object  (*LnkLI55)() = LnkTLI55;
static object  LnkTLI54();
static object  (*LnkLI54)() = LnkTLI54;
static void LnkT53();
static void (*Lnk53)() = LnkT53;
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
