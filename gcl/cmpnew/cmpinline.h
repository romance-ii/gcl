
static void L5();
static void L15();
static void L16();
static void L19();
static object LI1(object,...);
static object VK1defaults[5]={(void *)-2,(void *)-2,(void *)-1,(void *)-2,(void *)-2};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI1key={5,0,VK1defaults,{(void *)67,(void *)68,(void *)16,(void *)69,(void *)70}};
#define VMB1 register object *base=vs_top; object Vcs[10];
#define VMS1  register object *sup=vs_top+6;vs_top=sup;
#define VMV1 vs_reserve(6);
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 object  V16 ,V15 ,V14 ,V13 ,V12 ,V11;
#define VMS2
#define VMV2
#define VMR2(VMT2) return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top; object  V36 ,V29 ,V24;
#define VMS3 vs_top += 1;
#define VMV3 vs_reserve(1);
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top; object  V54 ,V48 ,V43;
#define VMS4 vs_top += 1;
#define VMV4 vs_reserve(1);
#define VMR4(VMT4) vs_top=base ; return(VMT4);
#define VC5
static object LI6(object,object,object,...);
#define VMB6 register object *base=vs_top; object  V116 ,V114 ,V110 ,V105 ,V100 ,V96 ,V92 ,V91 ,V89 ,V86 ,V85 ,V83 ,V82 ,V77 ,V76 ,V74 ,V73; object Vcs[3];
#define VMS6  register object *sup=vs_top+2;vs_top=sup;
#define VMV6 vs_reserve(2);
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7
#define VMS7
#define VMV7
#define VMR7(VMT7) return(VMT7);
static object LI8();
#define VMB8 register object *base=vs_top; object  V155 ,V143;
#define VMS8  register object *sup=vs_top+4;vs_top=sup;
#define VMV8 vs_reserve(4);
#define VMR8(VMT8) vs_top=base ; return(VMT8);
static object LI9();
#define VMB9 object  V160;
#define VMS9
#define VMV9
#define VMR9(VMT9) return(VMT9);
static object LI10();
#define VMB10 register object *base=vs_top; object  V186 ,V185 ,V184;
#define VMS10  register object *sup=vs_top+4;vs_top=sup;
#define VMV10 vs_reserve(4);
#define VMR10(VMT10) vs_top=base ; return(VMT10);
static object LI11();
#define VMB11 register object *base=vs_top; object  V206;
#define VMS11  register object *sup=vs_top+2;vs_top=sup;
#define VMV11 vs_reserve(2);
#define VMR11(VMT11) vs_top=base ; return(VMT11);
static object LI12();
#define VMB12 register object *base=vs_top; object  V229 ,V226 ,V225 ,V222 ,V221 ,V220;
#define VMS12  register object *sup=vs_top+2;vs_top=sup;
#define VMV12 vs_reserve(2);
#define VMR12(VMT12) vs_top=base ; return(VMT12);
static object LI13();
#define VMB13 register object *base=vs_top;
#define VMS13  register object *sup=vs_top+0;vs_top=sup;
#define VMV13
#define VMR13(VMT13) return(VMT13);
static object LI14();
#define VMB14
#define VMS14
#define VMV14
#define VMR14(VMT14) return(VMT14);
#define VC15 object  V264 ,V263 ,V262 ,V261 ,V260 ,V259 ,V258 ,V257 ,V256 ,V255 ,V254 ,V253 ,V252 ,V251 ,V249 ,V248 ,V247;
#define VC16
static object LI17();
#define VMB17 register object *base=vs_top;
#define VMS17  register object *sup=vs_top+2;vs_top=sup;
#define VMV17 vs_reserve(2);
#define VMR17(VMT17) vs_top=base ; return(VMT17);
static object LI18();
#define VMB18 register object *base=vs_top;
#define VMS18  register object *sup=vs_top+2;vs_top=sup;
#define VMV18 vs_reserve(2);
#define VMR18(VMT18) vs_top=base ; return(VMT18);
#define VC19
static object LI20();
#define VMB20 register object *base=vs_top;
#define VMS20  register object *sup=vs_top+2;vs_top=sup;
#define VMV20 vs_reserve(2);
#define VMR20(VMT20) vs_top=base ; return(VMT20);
static object LI21();
#define VMB21 register object *base=vs_top;
#define VMS21  register object *sup=vs_top+2;vs_top=sup;
#define VMV21 vs_reserve(2);
#define VMR21(VMT21) vs_top=base ; return(VMT21);
static object LI22();
#define VMB22 register object *base=vs_top;
#define VMS22  register object *sup=vs_top+2;vs_top=sup;
#define VMV22 vs_reserve(2);
#define VMR22(VMT22) vs_top=base ; return(VMT22);
static object LI23();
#define VMB23 register object *base=vs_top; object  V317 ,V316 ,V315;
#define VMS23  register object *sup=vs_top+3;vs_top=sup;
#define VMV23 vs_reserve(3);
#define VMR23(VMT23) vs_top=base ; return(VMT23);
static object LI24(object,...);
#define VMB24 register object *base=vs_top; object  V325 ,V324 ,V321; object Vcs[1];
#define VMS24 vs_top += 2;
#define VMV24 vs_reserve(2);
#define VMR24(VMT24) vs_top=base ; return(VMT24);
static object LI25(object,...);
#define VMB25 register object *base=vs_top; object  V334 ,V331; object Vcs[1];
#define VMS25 vs_top += 1;
#define VMV25 vs_reserve(1);
#define VMR25(VMT25) vs_top=base ; return(VMT25);
static object LI26();
#define VMB26 register object *base=vs_top; object  V358 ,V357 ,V352;
#define VMS26 vs_top += 1;
#define VMV26 vs_reserve(1);
#define VMR26(VMT26) vs_top=base ; return(VMT26);
static void LC27();
#define VC27 object  V362;
static void LC27();
#define VM27 3
#define VM26 1
#define VM25 1
#define VM24 2
#define VM23 3
#define VM22 2
#define VM21 2
#define VM20 2
#define VM19 5
#define VM18 2
#define VM17 2
#define VM16 5
#define VM15 4
#define VM14 0
#define VM13 0
#define VM12 2
#define VM11 2
#define VM10 4
#define VM9 0
#define VM8 4
#define VM7 0
#define VM6 2
#define VM5 2
#define VM4 1
#define VM3 1
#define VM2 0
#define VM1 6
static char * VVi[111]={
#define Cdata VV[110]
(char *)(LI1),
(char *)(&LI1key),
(char *)(LI2),
(char *)(LI3),
(char *)(LI4),
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
(char *)(L15),
(char *)(L16),
(char *)(LI17),
(char *)(LI18),
(char *)(L19),
(char *)(LI20),
(char *)(LI21),
(char *)(LI22),
(char *)(LI23),
(char *)(LI24),
(char *)(LI25),
(char *)(LI26)
};
#define VV ((object *)VVi)
static object  LnkTLI109(object,...);
static object  (*LnkLI109)() = (object (*)()) LnkTLI109;
static object  LnkTLI108(object,...);
static object  (*LnkLI108)() = (object (*)()) LnkTLI108;
static void LnkT107();
static void (*Lnk107)() = LnkT107;
static object  LnkTLI106(object,...);
static object  (*LnkLI106)() = (object (*)()) LnkTLI106;
static void LnkT105();
static void (*Lnk105)() = LnkT105;
static object  LnkTLI104(object,...);
static object  (*LnkLI104)() = (object (*)()) LnkTLI104;
static object  LnkTLI103(object,...);
static object  (*LnkLI103)() = (object (*)()) LnkTLI103;
static object  LnkTLI102(object,...);
static object  (*LnkLI102)() = (object (*)()) LnkTLI102;
static object  LnkTLI101(object,...);
static object  (*LnkLI101)() = (object (*)()) LnkTLI101;
static object  LnkTLI100();
static object  (*LnkLI100)() = LnkTLI100;
static object  LnkTLI7(object,...);
static object  (*LnkLI7)() = (object (*)()) LnkTLI7;
static object  LnkTLI99(object,...);
static object  (*LnkLI99)() = (object (*)()) LnkTLI99;
static object  LnkTLI97(object,...);
static object  (*LnkLI97)() = (object (*)()) LnkTLI97;
static object  LnkTLI95(object,...);
static object  (*LnkLI95)() = (object (*)()) LnkTLI95;
static object  LnkTLI94();
static object  (*LnkLI94)() = LnkTLI94;
static void LnkT93();
static void (*Lnk93)() = LnkT93;
static void LnkT92();
static void (*Lnk92)() = LnkT92;
static void LnkT91();
static void (*Lnk91)() = LnkT91;
static void LnkT90();
static void (*Lnk90)() = LnkT90;
static void LnkT89();
static void (*Lnk89)() = LnkT89;
static void LnkT88();
static void (*Lnk88)() = LnkT88;
static object  LnkTLI87(object,...);
static object  (*LnkLI87)() = (object (*)()) LnkTLI87;
static object  LnkTLI86(object,...);
static object  (*LnkLI86)() = (object (*)()) LnkTLI86;
static void LnkT85();
static void (*Lnk85)() = LnkT85;
static object  LnkTLI84(object,...);
static object  (*LnkLI84)() = (object (*)()) LnkTLI84;
static object  LnkTLI83(object,...);
static object  (*LnkLI83)() = (object (*)()) LnkTLI83;
static object  LnkTLI81(object,...);
static object  (*LnkLI81)() = (object (*)()) LnkTLI81;
static object  LnkTLI80(object,...);
static object  (*LnkLI80)() = (object (*)()) LnkTLI80;
static object  LnkTLI79();
static object  (*LnkLI79)() = LnkTLI79;
static void LnkT78();
static void (*Lnk78)() = LnkT78;
static object  LnkTLI77(object,...);
static object  (*LnkLI77)() = (object (*)()) LnkTLI77;
static object  LnkTLI76(object,...);
static object  (*LnkLI76)() = (object (*)()) LnkTLI76;
static object  LnkTLI75(object,...);
static object  (*LnkLI75)() = (object (*)()) LnkTLI75;
static object  LnkTLI74(object,...);
static object  (*LnkLI74)() = (object (*)()) LnkTLI74;
