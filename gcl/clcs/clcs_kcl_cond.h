
static void L4();
static void L5();
static void L16();
static void L22();
static object LI1();
#define VMB1 register object *base=vs_top;
#define VMS1  register object *sup=vs_top+1;vs_top=sup;
#define VMV1 vs_check;
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top;
#define VMS2  register object *sup=vs_top+2;vs_top=sup;
#define VMV2 vs_check;
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3
#define VMS3
#define VMV3
#define VMR3(VMT3) return(VMT3);
#define VC4
#define VC5 object  V14 ,V13 ,V12 ,V11;
static object LI6(object,object,object,object,...);
#define VMB6 register object *base=vs_top; object  V33;
#define VMS6  register object *sup=vs_top+5;vs_top=sup;
#define VMV6 vs_check;
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top;
#define VMS7  register object *sup=vs_top+1;vs_top=sup;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8();
#define VMB8 register object *base=vs_top;
#define VMS8  register object *sup=vs_top+1;vs_top=sup;
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
static object LI11();
#define VMB11
#define VMS11
#define VMV11
#define VMR11(VMT11) return(VMT11);
static object LI12();
#define VMB12 register object *base=vs_top; object  V50 ,V48;
#define VMS12  register object *sup=vs_top+10;vs_top=sup;
#define VMV12 vs_check;
#define VMR12(VMT12) vs_top=base ; return(VMT12);
static object LI13();
#define VMB13 register object *base=vs_top;
#define VMS13  register object *sup=vs_top+1;vs_top=sup;
#define VMV13 vs_check;
#define VMR13(VMT13) vs_top=base ; return(VMT13);
static object LI14();
#define VMB14
#define VMS14
#define VMV14
#define VMR14(VMT14) return(VMT14);
static object LI15();
#define VMB15
#define VMS15
#define VMV15
#define VMR15(VMT15) return(VMT15);
#define VC16 object  V62 ,V61 ,V60 ,V59 ,V58 ,V57 ,V56 ,V55;
static object LI17();
#define VMB17 register object *base=vs_top;
#define VMS17  register object *sup=vs_top+3;vs_top=sup;
#define VMV17 vs_check;
#define VMR17(VMT17) vs_top=base ; return(VMT17);
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
static object LI20();
#define VMB20
#define VMS20
#define VMV20
#define VMR20(VMT20) return(VMT20);
static object LI21();
#define VMB21
#define VMS21
#define VMV21
#define VMR21(VMT21) return(VMT21);
#define VC22 object  V73 ,V72;
static void LC27();
#define VC23
static void LC26();
#define VC24
static void LC25();
#define VC25
static void LC24();
#define VC26
static void LC23();
#define VC27
static void LC27();
static void LC26();
static void LC25();
static void LC24();
static void LC23();
#define VM27 1
#define VM26 6
#define VM25 1
#define VM24 4
#define VM23 2
#define VM22 5
#define VM21 0
#define VM20 0
#define VM19 0
#define VM18 0
#define VM17 3
#define VM16 9
#define VM15 0
#define VM14 0
#define VM13 1
#define VM12 10
#define VM11 0
#define VM10 0
#define VM9 0
#define VM8 1
#define VM7 1
#define VM6 5
#define VM5 14
#define VM4 4
#define VM3 0
#define VM2 2
#define VM1 1
static char * VVi[53]={
#define Cdata VV[52]
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
(char *)(LI11),
(char *)(LI12),
(char *)(LI13),
(char *)(LI14),
(char *)(LI15),
(char *)(L16),
(char *)(LI17),
(char *)(LI18),
(char *)(LI19),
(char *)(LI20),
(char *)(LI21),
(char *)(L22)
};
#define VV ((object *)VVi)
static object  LnkTLI51(object,...);
static object  (*LnkLI51)() = (object (*)()) LnkTLI51;
static void LnkT28();
static void (*Lnk28)() = LnkT28;
static object  LnkTLI50(object,...);
static object  (*LnkLI50)() = (object (*)()) LnkTLI50;
static void LnkT48();
static void (*Lnk48)() = LnkT48;
static void LnkT47();
static void (*Lnk47)() = LnkT47;
static void LnkT46();
static void (*Lnk46)() = LnkT46;
static void LnkT45();
static void (*Lnk45)() = LnkT45;
static object  LnkTLI44();
static object  (*LnkLI44)() = LnkTLI44;
static void LnkT43();
static void (*Lnk43)() = LnkT43;
static void LnkT32();
static void (*Lnk32)() = LnkT32;
static object  LnkTLI42(object,...);
static object  (*LnkLI42)() = (object (*)()) LnkTLI42;
static object  LnkTLI41(object,...);
static object  (*LnkLI41)() = (object (*)()) LnkTLI41;
static void LnkT40();
static void (*Lnk40)() = LnkT40;
