
static void L1();
static void L2();
static void L3();
static void L19();
static void L20();
static void L22();
#define VC1
#define VC2
#define VC3
static object LI4();
#define VMB4 register object *base=vs_top; object  V11 ,V8;
#define VMS4 vs_top += 4;
#define VMV4 vs_reserve(4);
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5();
#define VMB5
#define VMS5
#define VMV5
#define VMR5(VMT5) return(VMT5);
static object LI6();
#define VMB6 register object *base=vs_top;
#define VMS6  register object *sup=vs_top+1;vs_top=sup;
#define VMV6 vs_reserve(1);
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7
#define VMS7
#define VMV7
#define VMR7(VMT7) return(VMT7);
static object LI8();
#define VMB8 register object *base=vs_top; object  V35 ,V32;
#define VMS8 vs_top += 1;
#define VMV8 vs_reserve(1);
#define VMR8(VMT8) vs_top=base ; return(VMT8);
static object LI9(object,object,...);
#define VMB9 register object *base=vs_top; object  V156 ,V150 ,V143 ,V136 ,V135 ,V134 ,V126 ,V125 ,V124 ,V118 ,V117 ,V116 ,V112 ,V102 ,V98 ,V97 ,V89 ,V88 ,V82 ,V81 ,V76 ,V75 ,V63 ,V62;
#define VMS9  register object *sup=vs_top+4;vs_top=sup;
#define VMV9 vs_reserve(4);
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10();
#define VMB10 register object *base=vs_top; object  V195 ,V188 ,V187 ,V184 ,V183;
#define VMS10 vs_top += 3;
#define VMV10 vs_reserve(3);
#define VMR10(VMT10) vs_top=base ; return(VMT10);
static object LI11();
#define VMB11 register object *base=vs_top;
#define VMS11  register object *sup=vs_top+1;vs_top=sup;
#define VMV11 vs_reserve(1);
#define VMR11(VMT11) vs_top=base ; return(VMT11);
static object LI12(object,object,object,...);
#define VMB12 register object *base=vs_top; object  V210;
#define VMS12 vs_top += 3;
#define VMV12 vs_reserve(3);
#define VMR12(VMT12) vs_top=base ; return(VMT12);
static object LI13();
#define VMB13 register object *base=vs_top; object  V253 ,V248 ,V245 ,V244 ,V241 ,V240 ,V237 ,V236 ,V235 ,V232 ,V229 ,V228 ,V227 ,V226 ,V225;
#define VMS13  register object *sup=vs_top+12;vs_top=sup;
#define VMV13 vs_reserve(12);
#define VMR13(VMT13) vs_top=base ; return(VMT13);
static object LI15();
#define VMB14 register object *base=vs_top; object  V314 ,V313 ,V312 ,V303 ,V300 ,V297 ,V296 ,V295 ,V294 ,V293 ,V292 ,V289 ,V288 ,V285 ,V284 ,V281 ,V280 ,V279 ,V276 ,V273;
#define VMS14  register object *sup=vs_top+14;vs_top=sup;
#define VMV14 vs_reserve(14);
#define VMR14(VMT14) vs_top=base ; return(VMT14);
static object LI17();
#define VMB15
#define VMS15
#define VMV15
#define VMR15(VMT15) return(VMT15);
static object LI18();
#define VMB16 register object *base=vs_top; object  V350 ,V341;
#define VMS16  register object *sup=vs_top+8;vs_top=sup;
#define VMV16 vs_reserve(8);
#define VMR16(VMT16) vs_top=base ; return(VMT16);
#define VC17 object  V400 ,V399 ,V393 ,V392 ,V385 ,V376 ,V375 ,V374;
#define VC18
static object LI21();
#define VMB19
#define VMS19
#define VMV19
#define VMR19(VMT19) return(VMT19);
#define VC20 object  V420 ,V419;
static object LI23();
#define VMB21 register object *base=vs_top;
#define VMS21 vs_top += 2;
#define VMV21 vs_reserve(2);
#define VMR21(VMT21) vs_top=base ; return(VMT21);
static object LI24();
#define VMB22 object  V435;
#define VMS22
#define VMV22
#define VMR22(VMT22) return(VMT22);
static object LI25();
#define VMB23 register object *base=vs_top; object  V466 ,V463 ,V462 ,V461 ,V460 ,V456 ,V455 ,V454 ,V453 ,V450 ,V449;
#define VMS23 vs_top += 11;
#define VMV23 vs_reserve(11);
#define VMR23(VMT23) vs_top=base ; return(VMT23);
static object LI26();
#define VMB24
#define VMS24
#define VMV24
#define VMR24(VMT24) return(VMT24);
static object LI27();
#define VMB25 register object *base=vs_top; object  V484 ,V483;
#define VMS25 vs_top += 4;
#define VMV25 vs_reserve(4);
#define VMR25(VMT25) vs_top=base ; return(VMT25);
static void L16();
#define VC26
static void L14();
#define VC27
#define VM27 2
#define VM26 2
#define VM25 4
#define VM24 0
#define VM23 11
#define VM22 0
#define VM21 2
#define VM20 6
#define VM19 0
#define VM18 8
#define VM17 9
#define VM16 8
#define VM15 0
#define VM14 14
#define VM13 12
#define VM12 3
#define VM11 1
#define VM10 3
#define VM9 4
#define VM8 1
#define VM7 0
#define VM6 1
#define VM5 0
#define VM4 4
#define VM3 4
#define VM2 4
#define VM1 4
static char * VVi[124]={
#define Cdata VV[123]
(char *)(L1),
(char *)(L2),
(char *)(L3),
(char *)(LI4),
(char *)(LI5),
(char *)(LI6),
(char *)(LI7),
(char *)(LI8),
(char *)(LI9),
(char *)(LI10),
(char *)(LI11),
(char *)(LI12),
(char *)(LI13),
(char *)(LI15),
(char *)(LI17),
(char *)(LI18),
(char *)(L19),
(char *)(L20),
(char *)(LI21),
(char *)(L22),
(char *)(LI23),
(char *)(LI24),
(char *)(LI25),
(char *)(LI26),
(char *)(LI27)
};
#define VV ((object *)VVi)
static void LnkT122();
static void (*Lnk122)() = LnkT122;
static object  LnkTLI121(object,...);
static object  (*LnkLI121)() = (object (*)()) LnkTLI121;
static object  LnkTLI120();
static object  (*LnkLI120)() = LnkTLI120;
static object  LnkTLI119(object,...);
static object  (*LnkLI119)() = (object (*)()) LnkTLI119;
static object  LnkTLI118(object,...);
static object  (*LnkLI118)() = (object (*)()) LnkTLI118;
static object  LnkTLI117(object,...);
static object  (*LnkLI117)() = (object (*)()) LnkTLI117;
static object  LnkTLI116(object,...);
static object  (*LnkLI116)() = (object (*)()) LnkTLI116;
static object  LnkTLI115(object,...);
static object  (*LnkLI115)() = (object (*)()) LnkTLI115;
static object  LnkTLI114(object,...);
static object  (*LnkLI114)() = (object (*)()) LnkTLI114;
static object  LnkTLI113();
static object  (*LnkLI113)() = LnkTLI113;
static void LnkT112();
static void (*Lnk112)() = LnkT112;
static void LnkT111();
static void (*Lnk111)() = LnkT111;
static void LnkT110();
static void (*Lnk110)() = LnkT110;
static object  LnkTLI109(object,...);
static object  (*LnkLI109)() = (object (*)()) LnkTLI109;
static object  LnkTLI108(object,...);
static object  (*LnkLI108)() = (object (*)()) LnkTLI108;
static void LnkT107();
static void (*Lnk107)() = LnkT107;
static object  LnkTLI106(object,...);
static object  (*LnkLI106)() = (object (*)()) LnkTLI106;
static object  LnkTLI105(object,...);
static object  (*LnkLI105)() = (object (*)()) LnkTLI105;
static object  LnkTLI104();
static object  (*LnkLI104)() = LnkTLI104;
static object  LnkTLI103(object,...);
static object  (*LnkLI103)() = (object (*)()) LnkTLI103;
static object  LnkTLI102();
static object  (*LnkLI102)() = LnkTLI102;
static object  LnkTLI101(object,...);
static object  (*LnkLI101)() = (object (*)()) LnkTLI101;
static object  LnkTLI100(object,...);
static object  (*LnkLI100)() = (object (*)()) LnkTLI100;
static object  LnkTLI99(object,...);
static object  (*LnkLI99)() = (object (*)()) LnkTLI99;
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
static object  LnkTLI92(object,...);
static object  (*LnkLI92)() = (object (*)()) LnkTLI92;
static object  LnkTLI91(object,...);
static object  (*LnkLI91)() = (object (*)()) LnkTLI91;
static object  LnkTLI90(object,...);
static object  (*LnkLI90)() = (object (*)()) LnkTLI90;
static object  LnkTLI89(object,...);
static object  (*LnkLI89)() = (object (*)()) LnkTLI89;
static object  LnkTLI88(object,...);
static object  (*LnkLI88)() = (object (*)()) LnkTLI88;
static void LnkT87();
static void (*Lnk87)() = LnkT87;
static object  LnkTLI86(object,...);
static object  (*LnkLI86)() = (object (*)()) LnkTLI86;
static object  LnkTLI85(object,...);
static object  (*LnkLI85)() = (object (*)()) LnkTLI85;
static object  LnkTLI84(object,...);
static object  (*LnkLI84)() = (object (*)()) LnkTLI84;
static object  LnkTLI83(object,...);
static object  (*LnkLI83)() = (object (*)()) LnkTLI83;
static object  LnkTLI82(object,...);
static object  (*LnkLI82)() = (object (*)()) LnkTLI82;
static object  LnkTLI81(object,...);
static object  (*LnkLI81)() = (object (*)()) LnkTLI81;
static object  LnkTLI80(object,...);
static object  (*LnkLI80)() = (object (*)()) LnkTLI80;
static object  LnkTLI79(object,...);
static object  (*LnkLI79)() = (object (*)()) LnkTLI79;
