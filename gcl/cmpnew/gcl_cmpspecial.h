
static void L6();
static object LI1();
#define VMB1 object  V3;
#define VMS1
#define VMV1
#define VMR1(VMT1) return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top;
#define VMS2 vs_top += 2;
#define VMV2 vs_check;
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 object  V14;
#define VMS3
#define VMV3
#define VMR3(VMT3) return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top; object  V25 ,V24 ,V23 ,V22 ,V21;
#define VMS4  register object *sup=vs_top+1;vs_top=sup;
#define VMV4 vs_check;
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5();
#define VMB5 register object *base=vs_top; object  V38;
#define VMS5  register object *sup=vs_top+4;vs_top=sup;
#define VMV5 vs_check;
#define VMR5(VMT5) vs_top=base ; return(VMT5);
#define VC6
static object LI7();
#define VMB7 register object *base=vs_top; object  V51 ,V47;
#define VMS7 vs_top += 4;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8();
#define VMB8 register object *base=vs_top; object  V73 ,V72 ,V69 ,V67 ,V63 ,V61 ,V59;
#define VMS8 vs_top += 1;
#define VMV8 vs_check;
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
#define VM10 0
#define VM9 0
#define VM8 1
#define VM7 4
#define VM6 5
#define VM5 4
#define VM4 1
#define VM3 0
#define VM2 2
#define VM1 0
static char * VVi[72]={
#define Cdata VV[71]
(char *)(LI1),
(char *)(LI2),
(char *)(LI3),
(char *)(LI4),
(char *)(LI5),
(char *)(L6),
(char *)(LI7),
(char *)(LI8),
(char *)(LI9),
(char *)(LI10)
};
#define VV ((object *)VVi)
static object  LnkTLI70(object,...);
static object  (*LnkLI70)() = (object (*)()) LnkTLI70;
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
static object  LnkTLI62(object,...);
static object  (*LnkLI62)() = (object (*)()) LnkTLI62;
static object  LnkTLI61(object,...);
static object  (*LnkLI61)() = (object (*)()) LnkTLI61;
static object  LnkTLI60(object,...);
static object  (*LnkLI60)() = (object (*)()) LnkTLI60;
static void LnkT59();
static void (*Lnk59)() = LnkT59;
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
static object  LnkTLI50(object,...);
static object  (*LnkLI50)() = (object (*)()) LnkTLI50;
static object  LnkTLI48();
static object  (*LnkLI48)() = LnkTLI48;
static object  LnkTLI47(object,...);
static object  (*LnkLI47)() = (object (*)()) LnkTLI47;
static object  LnkTLI46(object,...);
static object  (*LnkLI46)() = (object (*)()) LnkTLI46;
static object  LnkTLI45(object,...);
static object  (*LnkLI45)() = (object (*)()) LnkTLI45;
