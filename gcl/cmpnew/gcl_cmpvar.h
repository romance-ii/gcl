
static void L23();
static object LI1(object,...);
static object VK1defaults[7]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1,(void *)62};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[7];} LI1key={7,0,VK1defaults,{(void *)63,(void *)17,(void *)16,(void *)64,(void *)65,(void *)14,(void *)1}};
#define VMB1 register object *base=vs_top; object Vcs[14];
#define VMS1  register object *sup=vs_top+8;vs_top=sup;
#define VMV1 vs_reserve(8);
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top; object  V28 ,V27 ,V26 ,V25 ,V20;
#define VMS2  register object *sup=vs_top+1;vs_top=sup;
#define VMV2 vs_reserve(1);
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 object  V34 ,V33;
#define VMS3
#define VMV3
#define VMR3(VMT3) return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top; object  V45 ,V44;
#define VMS4 vs_top += 2;
#define VMV4 vs_reserve(2);
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5();
#define VMB5 register object *base=vs_top; object  V63 ,V61 ,V60 ,V59 ,V55 ,V54;
#define VMS5  register object *sup=vs_top+2;vs_top=sup;
#define VMV5 vs_reserve(2);
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6();
#define VMB6 register object *base=vs_top; object  V69 ,V68 ,V67;
#define VMS6  register object *sup=vs_top+1;vs_top=sup;
#define VMV6 vs_reserve(1);
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 object  V83;
#define VMS7
#define VMV7
#define VMR7(VMT7) return(VMT7);
static object LI8();
#define VMB8
#define VMS8
#define VMV8
#define VMR8(VMT8) return(VMT8);
static object LI9();
#define VMB9 register object *base=vs_top; object  V100;
#define VMS9 vs_top += 2;
#define VMV9 vs_reserve(2);
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10();
#define VMB10 register object *base=vs_top; object  V115 ,V114 ,V113 ,V112 ,V111;
#define VMS10 vs_top += 1;
#define VMV10 vs_reserve(1);
#define VMR10(VMT10) vs_top=base ; return(VMT10);
static object LI11();
#define VMB11 register object *base=vs_top;
#define VMS11  register object *sup=vs_top+1;vs_top=sup;
#define VMV11 vs_reserve(1);
#define VMR11(VMT11) vs_top=base ; return(VMT11);
static object LI12();
#define VMB12 object  V149 ,V148 ,V145 ,V143 ,V141 ,V139 ,V137 ,V135 ,V134 ,V133 ,V132 ,V130 ,V128 ,V127;
#define VMS12
#define VMV12
#define VMR12(VMT12) return(VMT12);
static object LI13();
#define VMB13 register object *base=vs_top; object  V183 ,V181 ,V178 ,V177 ,V176 ,V175 ,V169 ,V167 ,V165 ,V163 ,V161 ,V160 ,V159 ,V158;
#define VMS13  register object *sup=vs_top+4;vs_top=sup;
#define VMV13 vs_reserve(4);
#define VMR13(VMT13) vs_top=base ; return(VMT13);
static object LI14();
#define VMB14 register object *base=vs_top; object  V191;
#define VMS14 vs_top += 1;
#define VMV14 vs_reserve(1);
#define VMR14(VMT14) vs_top=base ; return(VMT14);
static object LI15();
#define VMB15 register object *base=vs_top; object  V200 ,V199;
#define VMS15 vs_top += 2;
#define VMV15 vs_reserve(2);
#define VMR15(VMT15) vs_top=base ; return(VMT15);
static object LI16();
#define VMB16 register object *base=vs_top; object  V210 ,V209;
#define VMS16 vs_top += 1;
#define VMV16 vs_reserve(1);
#define VMR16(VMT16) vs_top=base ; return(VMT16);
static object LI17();
#define VMB17 register object *base=vs_top; object  V227 ,V226 ,V225 ,V224;
#define VMS17  register object *sup=vs_top+3;vs_top=sup;
#define VMV17 vs_reserve(3);
#define VMR17(VMT17) vs_top=base ; return(VMT17);
static object LI18();
#define VMB18 register object *base=vs_top; object  V237 ,V234;
#define VMS18 vs_top += 1;
#define VMV18 vs_reserve(1);
#define VMR18(VMT18) vs_top=base ; return(VMT18);
static object LI19();
#define VMB19 register object *base=vs_top; object  V244;
#define VMS19 vs_top += 1;
#define VMV19 vs_reserve(1);
#define VMR19(VMT19) vs_top=base ; return(VMT19);
static object LI20();
#define VMB20 register object *base=vs_top;
#define VMS20  register object *sup=vs_top+4;vs_top=sup;
#define VMV20 vs_reserve(4);
#define VMR20(VMT20) vs_top=base ; return(VMT20);
static object LI21();
#define VMB21 register object *base=vs_top; object  V274 ,V273 ,V266 ,V265 ,V264;
#define VMS21  register object *sup=vs_top+6;vs_top=sup;
#define VMV21 vs_reserve(6);
#define VMR21(VMT21) vs_top=base ; return(VMT21);
static object LI22();
#define VMB22 register object *base=vs_top; object  V296 ,V293 ,V292 ,V291 ,V287;
#define VMS22 vs_top += 6;
#define VMV22 vs_reserve(6);
#define VMR22(VMT22) vs_top=base ; return(VMT22);
#define VC23 object  V309 ,V308 ,V307 ,V306 ,V305;
#define VM23 3
#define VM22 6
#define VM21 6
#define VM20 4
#define VM19 1
#define VM18 1
#define VM17 3
#define VM16 1
#define VM15 2
#define VM14 1
#define VM13 4
#define VM12 0
#define VM11 1
#define VM10 1
#define VM9 2
#define VM8 0
#define VM7 0
#define VM6 1
#define VM5 2
#define VM4 2
#define VM3 0
#define VM2 1
#define VM1 8
static char * VVi[116]={
#define Cdata VV[115]
(char *)(LI1),
(char *)(&LI1key),
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
(char *)(LI12),
(char *)(LI13),
(char *)(LI14),
(char *)(LI15),
(char *)(LI16),
(char *)(LI17),
(char *)(LI18),
(char *)(LI19),
(char *)(LI20),
(char *)(LI21),
(char *)(LI22),
(char *)(L23)
};
#define VV ((object *)VVi)
static object  LnkTLI69(object,...);
static object  (*LnkLI69)() = (object (*)()) LnkTLI69;
static void LnkT114();
static void (*Lnk114)() = LnkT114;
static object  LnkTLI42(object,...);
static object  (*LnkLI42)() = (object (*)()) LnkTLI42;
static object  LnkTLI113(object,...);
static object  (*LnkLI113)() = (object (*)()) LnkTLI113;
static object  LnkTLI112(object,...);
static object  (*LnkLI112)() = (object (*)()) LnkTLI112;
static object  LnkTLI111(object,...);
static object  (*LnkLI111)() = (object (*)()) LnkTLI111;
static void LnkT110();
static void (*Lnk110)() = LnkT110;
static object  LnkTLI109();
static object  (*LnkLI109)() = LnkTLI109;
static object  LnkTLI108(object,...);
static object  (*LnkLI108)() = (object (*)()) LnkTLI108;
static object  LnkTLI107(object,...);
static object  (*LnkLI107)() = (object (*)()) LnkTLI107;
static object  LnkTLI106(object,...);
static object  (*LnkLI106)() = (object (*)()) LnkTLI106;
static object  LnkTLI104(object,...);
static object  (*LnkLI104)() = (object (*)()) LnkTLI104;
static void LnkT103();
static void (*Lnk103)() = LnkT103;
static object  LnkTLI102(object,...);
static object  (*LnkLI102)() = (object (*)()) LnkTLI102;
static object  LnkTLI101(object,...);
static object  (*LnkLI101)() = (object (*)()) LnkTLI101;
static object  LnkTLI100(object,...);
static object  (*LnkLI100)() = (object (*)()) LnkTLI100;
static object  LnkTLI99(object,...);
static object  (*LnkLI99)() = (object (*)()) LnkTLI99;
static object  LnkTLI98(object,...);
static object  (*LnkLI98)() = (object (*)()) LnkTLI98;
static object  LnkTLI97();
static object  (*LnkLI97)() = LnkTLI97;
static void LnkT96();
static void (*Lnk96)() = LnkT96;
static void LnkT95();
static void (*Lnk95)() = LnkT95;
static void LnkT94();
static void (*Lnk94)() = LnkT94;
static void LnkT93();
static void (*Lnk93)() = LnkT93;
static void LnkT92();
static void (*Lnk92)() = LnkT92;
static object  LnkTLI91();
static object  (*LnkLI91)() = LnkTLI91;
static void LnkT90();
static void (*Lnk90)() = LnkT90;
static void LnkT89();
static void (*Lnk89)() = LnkT89;
static void LnkT87();
static void (*Lnk87)() = LnkT87;
static object  LnkTLI85();
static object  (*LnkLI85)() = LnkTLI85;
static object  LnkTLI84(object,...);
static object  (*LnkLI84)() = (object (*)()) LnkTLI84;
static object  LnkTLI82(object,...);
static object  (*LnkLI82)() = (object (*)()) LnkTLI82;
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
static object  LnkTLI73(object,...);
static object  (*LnkLI73)() = (object (*)()) LnkTLI73;
static object  LnkTLI72(object,...);
static object  (*LnkLI72)() = (object (*)()) LnkTLI72;
static object  LnkTLI71(object,...);
static object  (*LnkLI71)() = (object (*)()) LnkTLI71;
static object  LnkTLI70(object,...);
static object  (*LnkLI70)() = (object (*)()) LnkTLI70;
static object  LnkTLI68(object,...);
static object  (*LnkLI68)() = (object (*)()) LnkTLI68;
static object  LnkTLI67(object,...);
static object  (*LnkLI67)() = (object (*)()) LnkTLI67;
static object  LnkTLI66(object,...);
static object  (*LnkLI66)() = (object (*)()) LnkTLI66;
