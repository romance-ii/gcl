
static void L4();
static void L5();
static void L6();
static void L7();
static void L12();
static void L16();
static void L17();
static void L22();
static object LI1();
#define VMB1 register object *base=vs_top;
#define VMS1  register object *sup=vs_top+1;vs_top=sup;
#define VMV1 vs_reserve(1);
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top;
#define VMS2  register object *sup=vs_top+2;vs_top=sup;
#define VMV2 vs_reserve(2);
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3
#define VMS3
#define VMV3
#define VMR3(VMT3) return(VMT3);
#define VC4
#define VC5 object  V12 ,V11;
#define VC6
#define VC7
static object LI8();
#define VMB8 register object *base=vs_top;
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
static object LI11();
#define VMB11 register object *base=vs_top;
#define VMS11  register object *sup=vs_top+0;vs_top=sup;
#define VMV11
#define VMR11(VMT11) return(VMT11);
#define VC12 object  V41 ,V39;
static object LI13();
#define VMB13 register object *base=vs_top;
#define VMS13  register object *sup=vs_top+1;vs_top=sup;
#define VMV13 vs_reserve(1);
#define VMR13(VMT13) vs_top=base ; return(VMT13);
static object LI14();
#define VMB14 register object *base=vs_top;
#define VMS14  register object *sup=vs_top+1;vs_top=sup;
#define VMV14 vs_reserve(1);
#define VMR14(VMT14) vs_top=base ; return(VMT14);
static object LI15();
#define VMB15
#define VMS15
#define VMV15
#define VMR15(VMT15) return(VMT15);
#define VC16 object  V50 ,V49 ,V48 ,V47 ,V46 ,V45;
#define VC17
static object LI18();
#define VMB18 register object *base=vs_top;
#define VMS18  register object *sup=vs_top+1;vs_top=sup;
#define VMV18 vs_reserve(1);
#define VMR18(VMT18) vs_top=base ; return(VMT18);
static object LI19();
#define VMB19 register object *base=vs_top;
#define VMS19  register object *sup=vs_top+1;vs_top=sup;
#define VMV19 vs_reserve(1);
#define VMR19(VMT19) vs_top=base ; return(VMT19);
static object LI20();
#define VMB20 register object *base=vs_top;
#define VMS20  register object *sup=vs_top+1;vs_top=sup;
#define VMV20 vs_reserve(1);
#define VMR20(VMT20) vs_top=base ; return(VMT20);
static object LI21();
#define VMB21
#define VMS21
#define VMV21
#define VMR21(VMT21) return(VMT21);
#define VC22 object  V59 ,V58;
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
#define VM20 1
#define VM19 1
#define VM18 1
#define VM17 4
#define VM16 12
#define VM15 0
#define VM14 1
#define VM13 1
#define VM12 11
#define VM11 0
#define VM10 0
#define VM9 0
#define VM8 1
#define VM7 2
#define VM6 9
#define VM5 15
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
(char *)(L6),
(char *)(L7),
(char *)(LI8),
(char *)(LI9),
(char *)(LI10),
(char *)(LI11),
(char *)(L12),
(char *)(LI13),
(char *)(LI14),
(char *)(LI15),
(char *)(L16),
(char *)(L17),
(char *)(LI18),
(char *)(LI19),
(char *)(LI20),
(char *)(LI21),
(char *)(L22)
};
#define VV ((object *)VVi)
static void LnkT51();
static void (*Lnk51)() = LnkT51;
static void LnkT28();
static void (*Lnk28)() = LnkT28;
static void LnkT50();
static void (*Lnk50)() = LnkT50;
static void LnkT48();
static void (*Lnk48)() = LnkT48;
static void LnkT47();
static void (*Lnk47)() = LnkT47;
static void LnkT46();
static void (*Lnk46)() = LnkT46;
static void LnkT45();
static void (*Lnk45)() = LnkT45;
static void LnkT44();
static void (*Lnk44)() = LnkT44;
static void LnkT43();
static void (*Lnk43)() = LnkT43;
static void LnkT32();
static void (*Lnk32)() = LnkT32;
static void LnkT42();
static void (*Lnk42)() = LnkT42;
static void LnkT41();
static void (*Lnk41)() = LnkT41;
static void LnkT40();
static void (*Lnk40)() = LnkT40;
