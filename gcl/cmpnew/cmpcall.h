
static void L9();
static void L12();
static object LI1(object,object,...);
#define VMB1 register object *base=vs_top; object  V18 ,V10;
#define VMS1 vs_top += 2;
#define VMV1 vs_reserve(2);
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top;
#define VMS2  register object *sup=vs_top+1;vs_top=sup;
#define VMV2 vs_reserve(1);
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top; object  V42 ,V41 ,V37 ,V36 ,V34;
#define VMS3 vs_top += 4;
#define VMV3 vs_reserve(4);
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top;
#define VMS4 vs_top += 4;
#define VMV4 vs_reserve(4);
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5(object,object,object,...);
#define VMB5 register object *base=vs_top; object  V67 ,V65;
#define VMS5 vs_top += 2;
#define VMV5 vs_reserve(2);
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6(object,...);
#define VMB6 register object *base=vs_top; object  V75 ,V74 ,V71;
#define VMS6 vs_top += 3;
#define VMV6 vs_reserve(3);
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top; object  V85;
#define VMS7 vs_top += 2;
#define VMV7 vs_reserve(2);
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8();
#define VMB8 object  V98 ,V97;
#define VMS8
#define VMV8
#define VMR8(VMT8) return(VMT8);
#define VC9
static object LI10();
#define VMB10 register object *base=vs_top; object  V124 ,V123 ,V119 ,V114;
#define VMS10  register object *sup=vs_top+5;vs_top=sup;
#define VMV10 vs_reserve(5);
#define VMR10(VMT10) vs_top=base ; return(VMT10);
static object LI11();
#define VMB11 register object *base=vs_top; object  V158 ,V156 ,V155 ,V154 ,V152 ,V145 ,V142;
#define VMS11  register object *sup=vs_top+5;vs_top=sup;
#define VMV11 vs_reserve(5);
#define VMR11(VMT11) vs_top=base ; return(VMT11);
#define VC12
static object LI13();
#define VMB13 register object *base=vs_top; object  V175 ,V174 ,V173 ,V172 ,V171 ,V168;
#define VMS13  register object *sup=vs_top+1;vs_top=sup;
#define VMV13 vs_reserve(1);
#define VMR13(VMT13) vs_top=base ; return(VMT13);
static object LI14();
#define VMB14 register object *base=vs_top;
#define VMS14  register object *sup=vs_top+1;vs_top=sup;
#define VMV14 vs_reserve(1);
#define VMR14(VMT14) vs_top=base ; return(VMT14);
static object LI15();
#define VMB15 register object *base=vs_top; object  V196 ,V195 ,V194 ,V193;
#define VMS15  register object *sup=vs_top+7;vs_top=sup;
#define VMV15 vs_reserve(7);
#define VMR15(VMT15) vs_top=base ; return(VMT15);
static object LI16(object,object,object,object,...);
#define VMB16
#define VMS16
#define VMV16
#define VMR16(VMT16) return(VMT16);
static object LI17();
#define VMB17 register object *base=vs_top; object  V217 ,V216;
#define VMS17 vs_top += 2;
#define VMV17 vs_reserve(2);
#define VMR17(VMT17) vs_top=base ; return(VMT17);
static object LI18();
#define VMB18 register object *base=vs_top; object  V230 ,V229;
#define VMS18 vs_top += 3;
#define VMV18 vs_reserve(3);
#define VMR18(VMT18) vs_top=base ; return(VMT18);
static object LI19();
#define VMB19 register object *base=vs_top; object  V238;
#define VMS19 vs_top += 2;
#define VMV19 vs_reserve(2);
#define VMR19(VMT19) vs_top=base ; return(VMT19);
static object LI20();
#define VMB20 object  V266 ,V265 ,V264 ,V262 ,V261 ,V258 ,V257 ,V256 ,V254 ,V253 ,V252 ,V248 ,V247;
#define VMS20
#define VMV20
#define VMR20(VMT20) return(VMT20);
static void LC21();
#define VC21 object  V269;
static void LC21();
#define VM21 3
#define VM20 0
#define VM19 2
#define VM18 3
#define VM17 2
#define VM16 0
#define VM15 7
#define VM14 1
#define VM13 1
#define VM12 2
#define VM11 5
#define VM10 5
#define VM9 3
#define VM8 0
#define VM7 2
#define VM6 3
#define VM5 2
#define VM4 4
#define VM3 4
#define VM2 1
#define VM1 2
static char * VVi[154]={
#define Cdata VV[153]
(char *)(LI1),
(char *)(LI2),
(char *)(LI3),
(char *)(LI4),
(char *)(LI5),
(char *)(LI6),
(char *)(LI7),
(char *)(LI8),
(char *)(L9),
(char *)(LI10),
(char *)(LI11),
(char *)(L12),
(char *)(LI13),
(char *)(LI14),
(char *)(LI15),
(char *)(LI16),
(char *)(LI17),
(char *)(LI18),
(char *)(LI19),
(char *)(LI20)
};
#define VV ((object *)VVi)
static void LnkT152();
static void (*Lnk152)() = LnkT152;
static object  LnkTLI151(object,...);
static object  (*LnkLI151)() = (object (*)()) LnkTLI151;
static void LnkT149();
static void (*Lnk149)() = LnkT149;
static object  LnkTLI148(object,...);
static object  (*LnkLI148)() = (object (*)()) LnkTLI148;
static object  LnkTLI147(object,...);
static object  (*LnkLI147)() = (object (*)()) LnkTLI147;
static object  LnkTLI146(object,...);
static object  (*LnkLI146)() = (object (*)()) LnkTLI146;
static object  LnkTLI145(object,...);
static object  (*LnkLI145)() = (object (*)()) LnkTLI145;
static void LnkT144();
static void (*Lnk144)() = LnkT144;
static object  LnkTLI143(object,...);
static object  (*LnkLI143)() = (object (*)()) LnkTLI143;
static void LnkT142();
static void (*Lnk142)() = LnkT142;
static void LnkT141();
static void (*Lnk141)() = LnkT141;
static object  LnkTLI140(object,...);
static object  (*LnkLI140)() = (object (*)()) LnkTLI140;
static object  LnkTLI139(object,...);
static object  (*LnkLI139)() = (object (*)()) LnkTLI139;
static object  LnkTLI138(object,...);
static object  (*LnkLI138)() = (object (*)()) LnkTLI138;
static object  LnkTLI137(object,...);
static object  (*LnkLI137)() = (object (*)()) LnkTLI137;
static object  LnkTLI136(object,...);
static object  (*LnkLI136)() = (object (*)()) LnkTLI136;
static object  LnkTLI135();
static object  (*LnkLI135)() = LnkTLI135;
static object  LnkTLI134(object,...);
static object  (*LnkLI134)() = (object (*)()) LnkTLI134;
static void LnkT133();
static void (*Lnk133)() = LnkT133;
static object  LnkTLI132(object,...);
static object  (*LnkLI132)() = (object (*)()) LnkTLI132;
static object  LnkTLI131(object,...);
static object  (*LnkLI131)() = (object (*)()) LnkTLI131;
static object  LnkTLI130(object,...);
static object  (*LnkLI130)() = (object (*)()) LnkTLI130;
static object  LnkTLI129(object,...);
static object  (*LnkLI129)() = (object (*)()) LnkTLI129;
static object  LnkTLI128();
static object  (*LnkLI128)() = LnkTLI128;
static object  LnkTLI127(object,...);
static object  (*LnkLI127)() = (object (*)()) LnkTLI127;
static void LnkT126();
static void (*Lnk126)() = LnkT126;
static object  LnkTLI125(object,...);
static object  (*LnkLI125)() = (object (*)()) LnkTLI125;
static object  LnkTLI124(object,...);
static object  (*LnkLI124)() = (object (*)()) LnkTLI124;
static object  LnkTLI123(object,...);
static object  (*LnkLI123)() = (object (*)()) LnkTLI123;
static object  LnkTLI122(object,...);
static object  (*LnkLI122)() = (object (*)()) LnkTLI122;
static object  LnkTLI121(object,...);
static object  (*LnkLI121)() = (object (*)()) LnkTLI121;
static object  LnkTLI120(object,...);
static object  (*LnkLI120)() = (object (*)()) LnkTLI120;
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
static object  LnkTLI114();
static object  (*LnkLI114)() = LnkTLI114;
static object  LnkTLI113(object,...);
static object  (*LnkLI113)() = (object (*)()) LnkTLI113;
static object  LnkTLI112();
static object  (*LnkLI112)() = LnkTLI112;
static object  LnkTLI111(object,...);
static object  (*LnkLI111)() = (object (*)()) LnkTLI111;
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
static object  LnkTLI105(object,...);
static object  (*LnkLI105)() = (object (*)()) LnkTLI105;
static object  LnkTLI104(object,...);
static object  (*LnkLI104)() = (object (*)()) LnkTLI104;
static object  LnkTLI103(object,...);
static object  (*LnkLI103)() = (object (*)()) LnkTLI103;
static object  LnkTLI102(object,...);
static object  (*LnkLI102)() = (object (*)()) LnkTLI102;
static object  LnkTLI101(object,...);
static object  (*LnkLI101)() = (object (*)()) LnkTLI101;
static object  LnkTLI100(object,...);
static object  (*LnkLI100)() = (object (*)()) LnkTLI100;
