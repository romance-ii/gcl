
static void L8();
static void L9();
static void L17();
static void L18();
static void L29();
static void L30();
static void L32();
static void L33();
static void L34();
static void L36();
static void L37();
static void L39();
static void L40();
static void L41();
static void L42();
static void L43();
static void L44();
static object LI1();
#define VMB1 register object *base=vs_top;
#define VMS1  register object *sup=vs_top+1;vs_top=sup;
#define VMV1 vs_check;
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top;
#define VMS2  register object *sup=vs_top+0;vs_top=sup;
#define VMV2
#define VMR2(VMT2) return(VMT2);
static object LI3();
#define VMB3
#define VMS3
#define VMV3
#define VMR3(VMT3) return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top;
#define VMS4  register object *sup=vs_top+1;vs_top=sup;
#define VMV4 vs_check;
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5();
#define VMB5
#define VMS5
#define VMV5
#define VMR5(VMT5) return(VMT5);
static object LI6();
#define VMB6
#define VMS6
#define VMV6
#define VMR6(VMT6) return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top;
#define VMS7  register object *sup=vs_top+4;vs_top=sup;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
#define VC8
#define VC9 object  V34 ,V33 ,V32;
static object LI10();
#define VMB10 register object *base=vs_top;
#define VMS10  register object *sup=vs_top+1;vs_top=sup;
#define VMV10 vs_check;
#define VMR10(VMT10) vs_top=base ; return(VMT10);
static object LI11();
#define VMB11
#define VMS11
#define VMV11
#define VMR11(VMT11) return(VMT11);
static object LI12();
#define VMB12
#define VMS12
#define VMV12
#define VMR12(VMT12) return(VMT12);
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
static object LI16(object,...);
#define VMB16 register object *base=vs_top; object  V60 ,V59;
#define VMS16  register object *sup=vs_top+4;vs_top=sup;
#define VMV16 vs_check;
#define VMR16(VMT16) vs_top=base ; return(VMT16);
#define VC17 object  V66 ,V65 ,V64;
#define VC18
static object LI19();
#define VMB19 register object *base=vs_top;
#define VMS19  register object *sup=vs_top+14;vs_top=sup;
#define VMV19 vs_check;
#define VMR19(VMT19) vs_top=base ; return(VMT19);
static object LI20(object,...);
static object VK20defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI20key={5,0,VK20defaults,{(void *)78,(void *)39,(void *)29,(void *)28,(void *)26}};
#define VMB20 register object *base=vs_top; object Vcs[10];
#define VMS20  register object *sup=vs_top+6;vs_top=sup;
#define VMV20 vs_check;
#define VMR20(VMT20) vs_top=base ; return(VMT20);
static object LI21();
#define VMB21
#define VMS21
#define VMV21
#define VMR21(VMT21) return(VMT21);
static object LI22();
#define VMB22 register object *base=vs_top;
#define VMS22  register object *sup=vs_top+1;vs_top=sup;
#define VMV22 vs_check;
#define VMR22(VMT22) vs_top=base ; return(VMT22);
static object LI23();
#define VMB23
#define VMS23
#define VMV23
#define VMR23(VMT23) return(VMT23);
static object LI24();
#define VMB24
#define VMS24
#define VMV24
#define VMR24(VMT24) return(VMT24);
static object LI26();
#define VMB25 register object *base=vs_top; object  V84 ,V83;
#define VMS25 vs_top += 1;
#define VMV25 vs_check;
#define VMR25(VMT25) vs_top=base ; return(VMT25);
static object LI27();
#define VMB26 register object *base=vs_top; object  V93 ,V91 ,V88;
#define VMS26 vs_top += 1;
#define VMV26 vs_check;
#define VMR26(VMT26) vs_top=base ; return(VMT26);
static object LI28();
#define VMB27 register object *base=vs_top;
#define VMS27 vs_top += 5;
#define VMV27 vs_check;
#define VMR27(VMT27) vs_top=base ; return(VMT27);
#define VC28
#define VC29 object  V114 ,V110;
static object LI31(object,object,...);
#define VMB30 register object *base=vs_top;
#define VMS30 vs_top += 1;
#define VMV30 vs_check;
#define VMR30(VMT30) vs_top=base ; return(VMT30);
#define VC31
#define VC32
#define VC33
#define VC34 object  V154 ,V153 ,V149 ,V148 ,V147 ,V146 ,V144 ,V143 ,V142;
#define VC35 object  V182 ,V181 ,V180 ,V179 ,V172 ,V171 ,V170 ,V169 ,V168 ,V167;
#define VC36 object  V191;
#define VC37
#define VC38
#define VC39
#define VC40
#define VC41
static void L38();
#define VC42 object  V199;
static void L35();
#define VC43 object  V208 ,V207 ,V206 ,V205;
static void LC48();
#define VC44
static void LC47();
#define VC45 object  V212;
static void LC46();
#define VC46 object  V214;
static void LC45();
#define VC47
static void LC48();
static void LC47();
static void LC46();
static void LC45();
#define VM47 2
#define VM46 2
#define VM45 5
#define VM44 4
#define VM43 4
#define VM42 7
#define VM41 3
#define VM40 3
#define VM39 1
#define VM38 1
#define VM37 2
#define VM36 7
#define VM35 11
#define VM34 5
#define VM33 6
#define VM32 3
#define VM31 5
#define VM30 1
#define VM29 5
#define VM28 4
#define VM27 5
#define VM26 1
#define VM25 1
#define VM24 0
#define VM23 0
#define VM22 1
#define VM21 0
#define VM20 6
#define VM19 14
#define VM18 7
#define VM17 6
#define VM16 4
#define VM15 0
#define VM14 0
#define VM13 1
#define VM12 0
#define VM11 0
#define VM10 1
#define VM9 10
#define VM8 4
#define VM7 4
#define VM6 0
#define VM5 0
#define VM4 1
#define VM3 0
#define VM2 0
#define VM1 1
static char * VVi[107]={
#define Cdata VV[106]
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
(char *)(LI13),
(char *)(LI14),
(char *)(LI15),
(char *)(LI16),
(char *)(L17),
(char *)(L18),
(char *)(LI19),
(char *)(LI20),
(char *)(&LI20key),
(char *)(LI21),
(char *)(LI22),
(char *)(LI23),
(char *)(LI24),
(char *)(LI26),
(char *)(LI27),
(char *)(LI28),
(char *)(L29),
(char *)(L30),
(char *)(LI31),
(char *)(L32),
(char *)(L33),
(char *)(L34),
(char *)(L36),
(char *)(L37),
(char *)(L39),
(char *)(L40),
(char *)(L41),
(char *)(L42),
(char *)(L43),
(char *)(L44),
(char *)(&LC45)
};
#define VV ((object *)VVi)
static void LnkT105();
static void (*Lnk105)() = LnkT105;
static void LnkT104();
static void (*Lnk104)() = LnkT104;
static void LnkT103();
static void (*Lnk103)() = LnkT103;
static void LnkT6();
static void (*Lnk6)() = LnkT6;
static void LnkT100();
static void (*Lnk100)() = LnkT100;
static object  LnkTLI59(object,...);
static object  (*LnkLI59)() = (object (*)()) LnkTLI59;
static object  LnkTLI99(object,...);
static object  (*LnkLI99)() = (object (*)()) LnkTLI99;
static object  LnkTLI98(object,...);
static object  (*LnkLI98)() = (object (*)()) LnkTLI98;
static object  LnkTLI97(object,...);
static object  (*LnkLI97)() = (object (*)()) LnkTLI97;
static object  LnkTLI43(object,...);
static object  (*LnkLI43)() = (object (*)()) LnkTLI43;
static void LnkT95();
static void (*Lnk95)() = LnkT95;
static void LnkT94();
static void (*Lnk94)() = LnkT94;
static object  LnkTLI93(object,...);
static object  (*LnkLI93)() = (object (*)()) LnkTLI93;
static object  LnkTLI92();
static object  (*LnkLI92)() = LnkTLI92;
static void LnkT91();
static void (*Lnk91)() = LnkT91;
static void LnkT90();
static void (*Lnk90)() = LnkT90;
