
static void L5();
static void L6();
static void L12();
static void L14();
static void L19();
static void L20();
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
#define VMB3 register object *base=vs_top;
#define VMS3  register object *sup=vs_top+1;vs_top=sup;
#define VMV3 vs_reserve(1);
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4();
#define VMB4
#define VMS4
#define VMV4
#define VMR4(VMT4) return(VMT4);
#define VC5 object  V26 ,V25 ,V24 ,V23 ,V22 ,V21 ,V20 ,V19 ,V17 ,V12 ,V11;
#define VC6
static object LI7();
#define VMB7 register object *base=vs_top;
#define VMS7  register object *sup=vs_top+0;vs_top=sup;
#define VMV7
#define VMR7(VMT7) return(VMT7);
static object LI8();
#define VMB8 register object *base=vs_top;
#define VMS8  register object *sup=vs_top+2;vs_top=sup;
#define VMV8 vs_reserve(2);
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
static object LI11();
#define VMB11 register object *base=vs_top;
#define VMS11  register object *sup=vs_top+2;vs_top=sup;
#define VMV11 vs_reserve(2);
#define VMR11(VMT11) vs_top=base ; return(VMT11);
#define VC12
static object LI13();
#define VMB13 register object *base=vs_top;
#define VMS13  register object *sup=vs_top+2;vs_top=sup;
#define VMV13 vs_reserve(2);
#define VMR13(VMT13) vs_top=base ; return(VMT13);
#define VC14
static object LI15();
#define VMB15 register object *base=vs_top; object  V41;
#define VMS15  register object *sup=vs_top+7;vs_top=sup;
#define VMV15 vs_reserve(7);
#define VMR15(VMT15) vs_top=base ; return(VMT15);
static object LI16();
#define VMB16 register object *base=vs_top;
#define VMS16  register object *sup=vs_top+1;vs_top=sup;
#define VMV16 vs_reserve(1);
#define VMR16(VMT16) vs_top=base ; return(VMT16);
static object LI17();
#define VMB17 register object *base=vs_top;
#define VMS17  register object *sup=vs_top+1;vs_top=sup;
#define VMV17 vs_reserve(1);
#define VMR17(VMT17) vs_top=base ; return(VMT17);
static object LI18();
#define VMB18
#define VMS18
#define VMV18
#define VMR18(VMT18) return(VMT18);
#define VC19 object  V49;
#define VC20
#define VM20 11
#define VM19 3
#define VM18 0
#define VM17 1
#define VM16 1
#define VM15 7
#define VM14 9
#define VM13 2
#define VM12 3
#define VM11 2
#define VM10 0
#define VM9 0
#define VM8 2
#define VM7 0
#define VM6 6
#define VM5 10
#define VM4 0
#define VM3 1
#define VM2 1
#define VM1 1
static char * VVi[69]={
#define Cdata VV[68]
(char *)(LI1),
(char *)(LI2),
(char *)(LI3),
(char *)(LI4),
(char *)(L5),
(char *)(L6),
(char *)(LI7),
(char *)(LI8),
(char *)(LI9),
(char *)(LI10),
(char *)(LI11),
(char *)(L12),
(char *)(LI13),
(char *)(L14),
(char *)(LI15),
(char *)(LI16),
(char *)(LI17),
(char *)(LI18),
(char *)(L19),
(char *)(L20)
};
#define VV ((object *)VVi)
static object *Lclptr67;
static void LnkT67();
static void (*Lnk67)() = LnkT67;
static void LnkT66();
static void (*Lnk66)() = LnkT66;
static void LnkT65();
static void (*Lnk65)() = LnkT65;
static object *Lclptr64;
static void LnkT64();
static void (*Lnk64)() = LnkT64;
static void LnkT63();
static void (*Lnk63)() = LnkT63;
static void LnkT62();
static void (*Lnk62)() = LnkT62;
static void LnkT60();
static void (*Lnk60)() = LnkT60;
static object *Lclptr59;
static void LnkT59();
static void (*Lnk59)() = LnkT59;
static void LnkT58();
static void (*Lnk58)() = LnkT58;
static void LnkT57();
static void (*Lnk57)() = LnkT57;
static void LnkT56();
static void (*Lnk56)() = LnkT56;
static void LnkT32();
static void (*Lnk32)() = LnkT32;
static void LnkT55();
static void (*Lnk55)() = LnkT55;
static void LnkT53();
static void (*Lnk53)() = LnkT53;
static void LnkT50();
static void (*Lnk50)() = LnkT50;
static void LnkT0();
static void (*Lnk0)() = LnkT0;
