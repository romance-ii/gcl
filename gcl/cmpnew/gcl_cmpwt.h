
static void L8();
static void L9();
static void L13();
static void L14();
static void L15();
static void L16();
static object LI1(object,object,...);
#define VMB1
#define VMS1
#define VMV1
#define VMR1(VMT1) return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top;
#define VMS2  register object *sup=vs_top+3;vs_top=sup;
#define VMV2 vs_check;
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top;
#define VMS3  register object *sup=vs_top+2;vs_top=sup;
#define VMV3 vs_check;
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top; object  V25 ,V24;
#define VMS4  register object *sup=vs_top+4;vs_top=sup;
#define VMV4 vs_check;
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5();
#define VMB5 register object *base=vs_top;
#define VMS5 vs_top += 12;
#define VMV5 vs_check;
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6();
#define VMB6 register object *base=vs_top;
#define VMS6  register object *sup=vs_top+3;vs_top=sup;
#define VMV6 vs_check;
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7(object,object,...);
#define VMB7 register object *base=vs_top; object  V45 ,V44 ,V41;
#define VMS7  register object *sup=vs_top+2;vs_top=sup;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
#define VC8 object  V52 ,V51 ,V50 ,V49 ,V48;
#define VC9
static object LI10();
#define VMB10
#define VMS10
#define VMV10
#define VMR10(VMT10) return(VMT10);
static object LI11();
#define VMB11
#define VMS11
#define VMV11
#define VMR11(VMT11) return(VMT11);
static object LI12();
#define VMB12 register object *base=vs_top;
#define VMS12 vs_top += 1;
#define VMV12 vs_check;
#define VMR12(VMT12) vs_top=base ; return(VMT12);
#define VC13 object  V74 ,V73;
#define VC14 object  V87 ,V82 ,V81 ,V80;
#define VC15 object  V100 ,V95 ,V94 ,V93;
#define VC16 object  V113 ,V108 ,V107 ,V106;
#define VM16 7
#define VM15 7
#define VM14 7
#define VM13 6
#define VM12 1
#define VM11 0
#define VM10 0
#define VM9 4
#define VM8 5
#define VM7 2
#define VM6 3
#define VM5 12
#define VM4 4
#define VM3 2
#define VM2 3
#define VM1 0
static char * VVi[57]={
#define Cdata VV[56]
(char *)(LI1),
(char *)(LI2),
(char *)(LI3),
(char *)(LI4),
(char *)(LI5),
(char *)(LI6),
(char *)(LI7),
(char *)(L8),
(char *)(L9),
(char *)(LI10),
(char *)(LI11),
(char *)(LI12),
(char *)(L13),
(char *)(L14),
(char *)(L15),
(char *)(L16)
};
#define VV ((object *)VVi)
static object  LnkTLI55(object,...);
static object  (*LnkLI55)() = (object (*)()) LnkTLI55;
static void LnkT54();
static void (*Lnk54)() = LnkT54;
static void LnkT53();
static void (*Lnk53)() = LnkT53;
static void LnkT52();
static void (*Lnk52)() = LnkT52;
static object  LnkTLI51(object,...);
static object  (*LnkLI51)() = (object (*)()) LnkTLI51;
static void LnkT50();
static void (*Lnk50)() = LnkT50;
static object  LnkTLI49(object,...);
static object  (*LnkLI49)() = (object (*)()) LnkTLI49;
static object  LnkTLI48(object,...);
static object  (*LnkLI48)() = (object (*)()) LnkTLI48;
static object  LnkTLI47(object,...);
static object  (*LnkLI47)() = (object (*)()) LnkTLI47;
static object  LnkTLI46(object,...);
static object  (*LnkLI46)() = (object (*)()) LnkTLI46;
static void LnkT45();
static void (*Lnk45)() = LnkT45;
static void LnkT44();
static void (*Lnk44)() = LnkT44;
static void LnkT43();
static void (*Lnk43)() = LnkT43;
