
static void L3();
static void L4();
static void L13();
static void L17();
static void L20();
static void L23();
static object LI1();
#define VMB1
#define VMS1
#define VMV1
#define VMR1(VMT1) return(VMT1);
static object LI2();
#define VMB2
#define VMS2
#define VMV2
#define VMR2(VMT2) return(VMT2);
#define VC3
#define VC4
static object LI5();
#define VMB5
#define VMS5
#define VMV5
#define VMR5(VMT5) return(VMT5);
static object LI6();
#define VMB6 register object *base=vs_top; object  V24 ,V23;
#define VMS6 vs_top += 1;
#define VMV6 vs_check;
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7
#define VMS7
#define VMV7
#define VMR7(VMT7) return(VMT7);
static object LI8();
#define VMB8
#define VMS8
#define VMV8
#define VMR8(VMT8) return(VMT8);
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
static object LI11(object,object,...);
#define VMB11 object  V41;
#define VMS11
#define VMV11
#define VMR11(VMT11) return(VMT11);
static object LI12();
#define VMB12
#define VMS12
#define VMV12
#define VMR12(VMT12) return(VMT12);
#define VC13
static object LI14(object,object,...);
#define VMB14 register object *base=vs_top;
#define VMS14  register object *sup=vs_top+3;vs_top=sup;
#define VMV14 vs_check;
#define VMR14(VMT14) vs_top=base ; return(VMT14);
static object LI15();
#define VMB15
#define VMS15
#define VMV15
#define VMR15(VMT15) return(VMT15);
static object LI16();
#define VMB16
#define VMS16
#define VMV16
#define VMR16(VMT16) return(VMT16);
#define VC17
static object LI18();
#define VMB18
#define VMS18
#define VMV18
#define VMR18(VMT18) return(VMT18);
static object LI19();
#define VMB19
#define VMS19
#define VMV19
#define VMR19(VMT19) return(VMT19);
#define VC20
static object LI21();
#define VMB21
#define VMS21
#define VMV21
#define VMR21(VMT21) return(VMT21);
static object LI22();
#define VMB22
#define VMS22
#define VMV22
#define VMR22(VMT22) return(VMT22);
#define VC23
static object LI24();
#define VMB24
#define VMS24
#define VMV24
#define VMR24(VMT24) return(VMT24);
static object LI25();
#define VMB25
#define VMS25
#define VMV25
#define VMR25(VMT25) return(VMT25);
#define VM25 0
#define VM24 0
#define VM23 3
#define VM22 0
#define VM21 0
#define VM20 3
#define VM19 0
#define VM18 0
#define VM17 3
#define VM16 0
#define VM15 0
#define VM14 3
#define VM13 3
#define VM12 0
#define VM11 0
#define VM10 0
#define VM9 0
#define VM8 0
#define VM7 0
#define VM6 1
#define VM5 0
#define VM4 2
#define VM3 4
#define VM2 0
#define VM1 0
static char * VVi[50]={
#define Cdata VV[49]
(char *)(LI1),
(char *)(LI2),
(char *)(L3),
(char *)(L4),
(char *)(LI5),
(char *)(LI6),
(char *)(LI7),
(char *)(LI8),
(char *)(LI9),
(char *)(LI10),
(char *)(LI11),
(char *)(LI12),
(char *)(L13),
(char *)(LI14),
(char *)(LI15),
(char *)(LI16),
(char *)(L17),
(char *)(LI18),
(char *)(LI19),
(char *)(L20),
(char *)(LI21),
(char *)(LI22),
(char *)(L23),
(char *)(LI24),
(char *)(LI25)
};
#define VV ((object *)VVi)
static object  LnkTLI48();
static object  (*LnkLI48)() = LnkTLI48;
static void LnkT45();
static void (*Lnk45)() = LnkT45;
static object  LnkTLI44();
static object  (*LnkLI44)() = LnkTLI44;
static object  LnkTLI43(object,...);
static object  (*LnkLI43)() = (object (*)()) LnkTLI43;
static object  LnkTLI42();
static object  (*LnkLI42)() = LnkTLI42;
static void LnkT41();
static void (*Lnk41)() = LnkT41;
static void LnkT40();
static void (*Lnk40)() = LnkT40;
static void LnkT39();
static void (*Lnk39)() = LnkT39;
static void LnkT38();
static void (*Lnk38)() = LnkT38;
static object  LnkTLI37(object,...);
static object  (*LnkLI37)() = (object (*)()) LnkTLI37;
static object  LnkTLI36(object,...);
static object  (*LnkLI36)() = (object (*)()) LnkTLI36;
static void LnkT35();
static void (*Lnk35)() = LnkT35;
static object  LnkTLI34(object,...);
static object  (*LnkLI34)() = (object (*)()) LnkTLI34;
