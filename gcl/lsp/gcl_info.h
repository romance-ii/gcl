
static void L12();
static void L17();
static void L19();
static void L20();
static void L21();
static void L23();
static void L27();
static object LI1();
#define VMB1 register object *base=vs_top; object  V23 ,V17;
#define VMS1  register object *sup=vs_top+1;vs_top=sup;
#define VMV1 vs_check;
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2(object,object,...);
#define VMB2 register object *VOL base=vs_top; object  V29;
#define VMS2  register object *VOL sup=vs_top+10;vs_top=sup;
#define VMV2 vs_check;
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 object  V40 ,V39 ,V38;
#define VMS3
#define VMV3
#define VMR3(VMT3) return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top; object  V62 ,V60 ,V58 ,V57 ,V56 ,V55 ,V52 ,V51 ,V50;
#define VMS4  register object *sup=vs_top+5;vs_top=sup;
#define VMV4 vs_check;
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5();
#define VMB5 object  V82 ,V80 ,V75;
#define VMS5
#define VMV5
#define VMR5(VMT5) return(VMT5);
static object LI6();
#define VMB6 register object *base=vs_top;
#define VMS6  register object *sup=vs_top+3;vs_top=sup;
#define VMV6 vs_check;
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top; object  V97 ,V95;
#define VMS7  register object *sup=vs_top+5;vs_top=sup;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8();
#define VMB8 register object *base=vs_top; object  V105;
#define VMS8  register object *sup=vs_top+5;vs_top=sup;
#define VMV8 vs_check;
#define VMR8(VMT8) vs_top=base ; return(VMT8);
static object LI9();
#define VMB9 register object *base=vs_top; object  V118 ,V117 ,V116;
#define VMS9  register object *sup=vs_top+5;vs_top=sup;
#define VMV9 vs_check;
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10();
#define VMB10 register object *base=vs_top;
#define VMS10  register object *sup=vs_top+4;vs_top=sup;
#define VMV10 vs_check;
#define VMR10(VMT10) vs_top=base ; return(VMT10);
static object LI11();
#define VMB11 register object *base=vs_top; object  V141 ,V139;
#define VMS11 vs_top += 2;
#define VMV11 vs_check;
#define VMR11(VMT11) vs_top=base ; return(VMT11);
#define VC12 object  V148;
static object LI13();
#define VMB13
#define VMS13
#define VMV13
#define VMR13(VMT13) return(VMT13);
static object LI14();
#define VMB14 register object *base=vs_top; object  V163 ,V159;
#define VMS14  register object *sup=vs_top+5;vs_top=sup;
#define VMV14 vs_check;
#define VMR14(VMT14) vs_top=base ; return(VMT14);
static object LI15();
#define VMB15
#define VMS15
#define VMV15
#define VMR15(VMT15) return(VMT15);
static object LI16();
#define VMB16 register object *base=vs_top;
#define VMS16 vs_top += 1;
#define VMV16 vs_check;
#define VMR16(VMT16) vs_top=base ; return(VMT16);
#define VC17
static object LI18();
#define VMB18 register object *base=vs_top; object  V185 ,V184;
#define VMS18  register object *sup=vs_top+2;vs_top=sup;
#define VMV18 vs_check;
#define VMR18(VMT18) vs_top=base ; return(VMT18);
#define VC19
#define VC20
#define VC21
static object LI22();
#define VMB22 register object *base=vs_top;
#define VMS22  register object *sup=vs_top+8;vs_top=sup;
#define VMV22 vs_check;
#define VMR22(VMT22) vs_top=base ; return(VMT22);
#define VC23 object  V236 ,V234 ,V231 ,V229 ,V222;
static object LI24();
#define VMB24 register object *base=vs_top; object  V251 ,V248;
#define VMS24  register object *sup=vs_top+1;vs_top=sup;
#define VMV24 vs_check;
#define VMR24(VMT24) vs_top=base ; return(VMT24);
static object LI25(object,object,...);
#define VMB25 register object *base=vs_top; object  V270 ,V268;
#define VMS25  register object *sup=vs_top+4;vs_top=sup;
#define VMV25 vs_check;
#define VMR25(VMT25) vs_top=base ; return(VMT25);
static object LI26();
#define VMB26 register object *base=vs_top; object  V279;
#define VMS26  register object *sup=vs_top+5;vs_top=sup;
#define VMV26 vs_check;
#define VMR26(VMT26) vs_top=base ; return(VMT26);
#define VC27 object  V310 ,V306 ,V305 ,V304 ,V295;
static object LI28();
#define VMB28 register object *base=vs_top;
#define VMS28  register object *sup=vs_top+3;vs_top=sup;
#define VMV28 vs_check;
#define VMR28(VMT28) vs_top=base ; return(VMT28);
static object LI30();
#define VMB29 register object *VOL base=vs_top; object  V315;
#define VMS29  register object *VOL sup=vs_top+9;vs_top=sup;
#define VMV29 vs_check;
#define VMR29(VMT29) vs_top=base ; return(VMT29);
static object LI31(object,object,...);
#define VMB30 register object *base=vs_top; object  V321;
#define VMS30 vs_top += 1;
#define VMV30 vs_check;
#define VMR30(VMT30) vs_top=base ; return(VMT30);
static void LC32();
#define VC31
static void LC32();
#define VM31 2
#define VM30 1
#define VM29 9
#define VM28 3
#define VM27 10
#define VM26 5
#define VM25 4
#define VM24 1
#define VM23 14
#define VM22 8
#define VM21 3
#define VM20 4
#define VM19 5
#define VM18 2
#define VM17 3
#define VM16 1
#define VM15 0
#define VM14 5
#define VM13 0
#define VM12 5
#define VM11 2
#define VM10 4
#define VM9 5
#define VM8 5
#define VM7 5
#define VM6 3
#define VM5 0
#define VM4 5
#define VM3 0
#define VM2 10
#define VM1 1
static char * VVi[130]={
#define Cdata VV[129]
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
(char *)(LI11),
(char *)(L12),
(char *)(LI13),
(char *)(LI14),
(char *)(LI15),
(char *)(LI16),
(char *)(L17),
(char *)(LI18),
(char *)(L19),
(char *)(L20),
(char *)(L21),
(char *)(LI22),
(char *)(L23),
(char *)(LI24),
(char *)(LI25),
(char *)(LI26),
(char *)(L27),
(char *)(LI28),
(char *)(LI30),
(char *)(LI31)
};
#define VV ((object *)VVi)
static object  LnkTLI128();
static object  (*LnkLI128)() = LnkTLI128;
static void LnkT127();
static void (*Lnk127)() = LnkT127;
static object  LnkTLI126(object,...);
static object  (*LnkLI126)() = (object (*)()) LnkTLI126;
static void LnkT125();
static void (*Lnk125)() = LnkT125;
static object  LnkTLI124();
static object  (*LnkLI124)() = LnkTLI124;
static void LnkT123();
static void (*Lnk123)() = LnkT123;
static object  LnkTLI122(object,...);
static object  (*LnkLI122)() = (object (*)()) LnkTLI122;
static object  LnkTLI121(object,...);
static object  (*LnkLI121)() = (object (*)()) LnkTLI121;
static object  LnkTLI120(object,...);
static object  (*LnkLI120)() = (object (*)()) LnkTLI120;
static void LnkT119();
static void (*Lnk119)() = LnkT119;
static void LnkT118();
static void (*Lnk118)() = LnkT118;
static object  LnkTLI117(object,...);
static object  (*LnkLI117)() = (object (*)()) LnkTLI117;
static object  LnkTLI116(object,...);
static object  (*LnkLI116)() = (object (*)()) LnkTLI116;
static void LnkT115();
static void (*Lnk115)() = LnkT115;
static object  LnkTLI114(object,...);
static object  (*LnkLI114)() = (object (*)()) LnkTLI114;
static void LnkT113();
static void (*Lnk113)() = LnkT113;
static void LnkT112();
static void (*Lnk112)() = LnkT112;
static void LnkT111();
static void (*Lnk111)() = LnkT111;
static object  LnkTLI110(object,...);
static object  (*LnkLI110)() = (object (*)()) LnkTLI110;
static object  LnkTLI109(object,...);
static object  (*LnkLI109)() = (object (*)()) LnkTLI109;
static object  LnkTLI108(object,...);
static object  (*LnkLI108)() = (object (*)()) LnkTLI108;
static object  LnkTLI107(object,...);
static object  (*LnkLI107)() = (object (*)()) LnkTLI107;
static object  LnkTLI106(object,...);
static object  (*LnkLI106)() = (object (*)()) LnkTLI106;
static object  LnkTLI105();
static object  (*LnkLI105)() = LnkTLI105;
static void LnkT104();
static void (*Lnk104)() = LnkT104;
static object  LnkTLI103(object,...);
static object  (*LnkLI103)() = (object (*)()) LnkTLI103;
static void LnkT102();
static void (*Lnk102)() = LnkT102;
static object  LnkTLI101(object,...);
static object  (*LnkLI101)() = (object (*)()) LnkTLI101;
static object  LnkTLI100(object,...);
static object  (*LnkLI100)() = (object (*)()) LnkTLI100;
static void LnkT99();
static void (*Lnk99)() = LnkT99;
static object  LnkTLI98(object,...);
static object  (*LnkLI98)() = (object (*)()) LnkTLI98;
static object  LnkTLI97(object,...);
static object  (*LnkLI97)() = (object (*)()) LnkTLI97;
static object  LnkTLI96(object,...);
static object  (*LnkLI96)() = (object (*)()) LnkTLI96;
static object  LnkTLI95(object,...);
static object  (*LnkLI95)() = (object (*)()) LnkTLI95;
static object  LnkTLI94(object,...);
static object  (*LnkLI94)() = (object (*)()) LnkTLI94;
static object  LnkTLI93(object,...);
static object  (*LnkLI93)() = (object (*)()) LnkTLI93;
static void LnkT92();
static void (*Lnk92)() = LnkT92;
static void LnkT91();
static void (*Lnk91)() = LnkT91;
static object  LnkTLI90(object,...);
static object  (*LnkLI90)() = (object (*)()) LnkTLI90;
static object  LnkTLI89(object,...);
static object  (*LnkLI89)() = (object (*)()) LnkTLI89;
