
static void L1();
static void L8();
static void L9();
static void L10();
static void L12();
static void L21();
static void L22();
static void L23();
static void L24();
static void L30();
static void L31();
static void L34();
static void L35();
static void L36();
static void L38();
static void L39();
static void L40();
static void L41();
static void L42();
static void L43();
static void L44();
static void L45();
static void L46();
static void L47();
static void L48();
static void L49();
static void L50();
static void L51();
static void L52();
static void L53();
static void L54();
static void L55();
static void L56();
static void L57();
static void L58();
static void L60();
static void L61();
static void L62();
static void L63();
static void L64();
static void L65();
static void L66();
static void L67();
static void L68();
static void L69();
static void L70();
static void L71();
static void L72();
static void L73();
static void L74();
static void L75();
static void L76();
static void L77();
static void L78();
#define VC1 object  V25 ,V24 ,V20 ,V19 ,V18 ,V17 ,V16 ,V15 ,V14 ,V13 ,V12;
static object LI2();
#define VMB2 register object *base=vs_top; object  V32 ,V31;
#define VMS2  register object *sup=vs_top+2;vs_top=sup;
#define VMV2 vs_check;
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top; object  V42 ,V41;
#define VMS3  register object *sup=vs_top+2;vs_top=sup;
#define VMV3 vs_check;
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top;
#define VMS4  register object *sup=vs_top+4;vs_top=sup;
#define VMV4 vs_check;
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5();
#define VMB5 register object *base=vs_top;
#define VMS5  register object *sup=vs_top+4;vs_top=sup;
#define VMV5 vs_check;
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6();
#define VMB6 register object *base=vs_top; object  V65;
#define VMS6  register object *sup=vs_top+4;vs_top=sup;
#define VMV6 vs_check;
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top; object  V75;
#define VMS7  register object *sup=vs_top+4;vs_top=sup;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
#define VC8
#define VC9
#define VC10
static object LI11();
#define VMB11 register object *base=vs_top;
#define VMS11  register object *sup=vs_top+1;vs_top=sup;
#define VMV11 vs_check;
#define VMR11(VMT11) vs_top=base ; return(VMT11);
#define VC12
static object LI13();
#define VMB13 object  V102;
#define VMS13
#define VMV13
#define VMR13(VMT13) return(VMT13);
static object LI14();
#define VMB14 register object *base=vs_top;
#define VMS14 vs_top += 1;
#define VMV14 vs_check;
#define VMR14(VMT14) vs_top=base ; return(VMT14);
static object LI16();
#define VMB15 register object *base=vs_top;
#define VMS15 vs_top += 1;
#define VMV15 vs_check;
#define VMR15(VMT15) vs_top=base ; return(VMT15);
static object LI18();
#define VMB16 register object *base=vs_top;
#define VMS16 vs_top += 1;
#define VMV16 vs_check;
#define VMR16(VMT16) vs_top=base ; return(VMT16);
static object LI20();
#define VMB17 register object *base=vs_top;
#define VMS17 vs_top += 1;
#define VMV17 vs_check;
#define VMR17(VMT17) vs_top=base ; return(VMT17);
#define VC18
#define VC19 object  V120 ,V119;
#define VC20 object  V128 ,V127;
#define VC21
static object LI25();
#define VMB22 register object *base=vs_top;
#define VMS22  register object *sup=vs_top+1;vs_top=sup;
#define VMV22 vs_check;
#define VMR22(VMT22) vs_top=base ; return(VMT22);
static object LI26(object,object,...);
#define VMB23 register object *base=vs_top;
#define VMS23  register object *sup=vs_top+7;vs_top=sup;
#define VMV23 vs_check;
#define VMR23(VMT23) vs_top=base ; return(VMT23);
static object LI27();
#define VMB24 register object *base=vs_top; object  V149;
#define VMS24  register object *sup=vs_top+4;vs_top=sup;
#define VMV24 vs_check;
#define VMR24(VMT24) vs_top=base ; return(VMT24);
static object LI28();
#define VMB25 register object *base=vs_top; object  V158;
#define VMS25  register object *sup=vs_top+4;vs_top=sup;
#define VMV25 vs_check;
#define VMR25(VMT25) vs_top=base ; return(VMT25);
static object LI29();
#define VMB26 object  V168;
#define VMS26
#define VMV26
#define VMR26(VMT26) return(VMT26);
#define VC27 object  V176 ,V172 ,V171;
#define VC28
static object LI32();
#define VMB29 register object *base=vs_top;
#define VMS29  register object *sup=vs_top+2;vs_top=sup;
#define VMV29 vs_check;
#define VMR29(VMT29) vs_top=base ; return(VMT29);
static object LI33();
#define VMB30 register object *base=vs_top;
#define VMS30  register object *sup=vs_top+3;vs_top=sup;
#define VMV30 vs_check;
#define VMR30(VMT30) vs_top=base ; return(VMT30);
#define VC31
#define VC32
#define VC33
static object LI37(object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[1];} LI37key={0,0,Cstd_key_defaults};
#define VMB34 register object *base=vs_top; object Vcs[1];
#define VMS34  register object *sup=vs_top+1;vs_top=sup;
#define VMV34 vs_check;
#define VMR34(VMT34) vs_top=base ; return(VMT34);
#define VC35
#define VC36
#define VC37 object  V201;
#define VC38 object  V203;
#define VC39 object  V204;
#define VC40
#define VC41
#define VC42 object  V211 ,V210 ,V209 ,V208 ,V207 ,V206;
#define VC43 object  V216 ,V215 ,V214 ,V213 ,V212;
#define VC44 object  V219 ,V218 ,V217;
#define VC45
#define VC46
#define VC47
#define VC48
#define VC49
#define VC50 object  V222 ,V221 ,V220;
#define VC51
#define VC52
#define VC53 object  V223;
#define VC54 object  V224;
#define VC55 object  V225;
static object LI59();
#define VMB56 register object *base=vs_top;
#define VMS56  register object *sup=vs_top+4;vs_top=sup;
#define VMV56 vs_check;
#define VMR56(VMT56) vs_top=base ; return(VMT56);
#define VC57 object  V243 ,V242 ,V241 ,V240 ,V239 ,V238 ,V237 ,V236 ,V235;
#define VC58 object  V245;
#define VC59 object  V248 ,V247 ,V246;
#define VC60
#define VC61 object  V252 ,V251 ,V250 ,V249;
#define VC62
#define VC63 object  V253;
#define VC64
#define VC65
#define VC66
#define VC67 object  V258 ,V257 ,V256 ,V255 ,V254;
#define VC68 object  V260 ,V259;
#define VC69
#define VC70
#define VC71
#define VC72
#define VC73 object  V271 ,V270 ,V269 ,V268 ,V267 ,V266 ,V265 ,V264;
#define VC74
#define VC75 object  V273 ,V272;
static void LC89();
#define VC76
static void LC88();
#define VC77
static void LC87();
#define VC78
static void LC86();
#define VC79
static void LC85();
#define VC80
static void LC84();
#define VC81
static void LC83();
#define VC82
static void LC82();
#define VC83
static void LC81();
#define VC84 object  V276;
static void LC80();
#define VC85 object  V279;
static void LC79();
#define VC86
static void LC89();
static void LC88();
static void LC87();
static void LC86();
static void LC85();
static void LC84();
static void LC83();
static void LC82();
static void LC81();
static void LC80();
static void LC79();
#define VM86 3
#define VM85 2
#define VM84 2
#define VM83 2
#define VM82 0
#define VM81 1
#define VM80 1
#define VM79 1
#define VM78 1
#define VM77 1
#define VM76 1
#define VM75 6
#define VM74 6
#define VM73 15
#define VM72 6
#define VM71 6
#define VM70 6
#define VM69 6
#define VM68 15
#define VM67 15
#define VM66 6
#define VM65 6
#define VM64 6
#define VM63 15
#define VM62 6
#define VM61 15
#define VM60 6
#define VM59 15
#define VM58 15
#define VM57 15
#define VM56 4
#define VM55 6
#define VM54 6
#define VM53 6
#define VM52 6
#define VM51 6
#define VM50 15
#define VM49 6
#define VM48 6
#define VM47 6
#define VM46 6
#define VM45 6
#define VM44 15
#define VM43 15
#define VM42 15
#define VM41 6
#define VM40 6
#define VM39 15
#define VM38 15
#define VM37 15
#define VM36 6
#define VM35 6
#define VM34 1
#define VM33 6
#define VM32 6
#define VM31 6
#define VM30 3
#define VM29 2
#define VM28 7
#define VM27 5
#define VM26 0
#define VM25 4
#define VM24 4
#define VM23 7
#define VM22 1
#define VM21 6
#define VM20 3
#define VM19 3
#define VM18 2
#define VM17 1
#define VM16 1
#define VM15 1
#define VM14 1
#define VM13 0
#define VM12 3
#define VM11 1
#define VM10 3
#define VM9 5
#define VM8 3
#define VM7 4
#define VM6 4
#define VM5 4
#define VM4 4
#define VM3 2
#define VM2 2
#define VM1 9
static char * VVi[405]={
#define Cdata VV[404]
(char *)(L1),
(char *)(LI2),
(char *)(LI3),
(char *)(LI4),
(char *)(LI5),
(char *)(LI6),
(char *)(LI7),
(char *)(L8),
(char *)(L9),
(char *)(L10),
(char *)(LI11),
(char *)(L12),
(char *)(LI13),
(char *)(LI14),
(char *)(LI16),
(char *)(LI18),
(char *)(LI20),
(char *)(L21),
(char *)(L22),
(char *)(L23),
(char *)(L24),
(char *)(LI25),
(char *)(LI26),
(char *)(LI27),
(char *)(LI28),
(char *)(LI29),
(char *)(L30),
(char *)(L31),
(char *)(LI32),
(char *)(LI33),
(char *)(L34),
(char *)(L35),
(char *)(L36),
(char *)(LI37),
(char *)(&LI37key),
(char *)(L38),
(char *)(L39),
(char *)(L40),
(char *)(L41),
(char *)(L42),
(char *)(L43),
(char *)(L44),
(char *)(L45),
(char *)(L46),
(char *)(L47),
(char *)(L48),
(char *)(L49),
(char *)(L50),
(char *)(L51),
(char *)(L52),
(char *)(L53),
(char *)(L54),
(char *)(L55),
(char *)(L56),
(char *)(L57),
(char *)(L58),
(char *)(LI59),
(char *)(L60),
(char *)(L61),
(char *)(L62),
(char *)(L63),
(char *)(L64),
(char *)(L65),
(char *)(L66),
(char *)(L67),
(char *)(L68),
(char *)(L69),
(char *)(L70),
(char *)(L71),
(char *)(L72),
(char *)(L73),
(char *)(L74),
(char *)(L75),
(char *)(L76),
(char *)(L77),
(char *)(L78),
(char *)(&LC83),
(char *)(&LC84),
(char *)(&LC85),
(char *)(&LC86),
(char *)(&LC87),
(char *)(&LC88),
(char *)(&LC89)
};
#define VV ((object *)VVi)
static object *Lclptr109;
static void LnkT109();
static void (*Lnk109)() = LnkT109;
static void LnkT403();
static void (*Lnk403)() = LnkT403;
static object  LnkTLI402();
static object  (*LnkLI402)() = LnkTLI402;
static object *Lclptr390;
static void LnkT390();
static void (*Lnk390)() = LnkT390;
static object *Lclptr389;
static void LnkT389();
static void (*Lnk389)() = LnkT389;
static object  LnkTLI388(object,...);
static object  (*LnkLI388)() = (object (*)()) LnkTLI388;
static void LnkT387();
static void (*Lnk387)() = LnkT387;
static void LnkT386();
static void (*Lnk386)() = LnkT386;
static object *Lclptr384;
static void LnkT384();
static void (*Lnk384)() = LnkT384;
static void LnkT383();
static void (*Lnk383)() = LnkT383;
static void LnkT380();
static void (*Lnk380)() = LnkT380;
static object  LnkTLI379(object,...);
static object  (*LnkLI379)() = (object (*)()) LnkTLI379;
static object  LnkTLI378(object,...);
static object  (*LnkLI378)() = (object (*)()) LnkTLI378;
static object  LnkTLI377(object,...);
static object  (*LnkLI377)() = (object (*)()) LnkTLI377;
static object  LnkTLI376(object,...);
static object  (*LnkLI376)() = (object (*)()) LnkTLI376;
static object  LnkTLI375(object,...);
static object  (*LnkLI375)() = (object (*)()) LnkTLI375;
static object  LnkTLI374(object,...);
static object  (*LnkLI374)() = (object (*)()) LnkTLI374;
static void LnkT373();
static void (*Lnk373)() = LnkT373;
static object *Lclptr372;
static void LnkT372();
static void (*Lnk372)() = LnkT372;
static object *Lclptr371;
static void LnkT371();
static void (*Lnk371)() = LnkT371;
static object  LnkTLI370(object,...);
static object  (*LnkLI370)() = (object (*)()) LnkTLI370;
static object *Lclptr92;
static void LnkT92();
static void (*Lnk92)() = LnkT92;
static object *Lclptr367;
static void LnkT367();
static void (*Lnk367)() = LnkT367;
static void LnkT366();
static void (*Lnk366)() = LnkT366;
static void LnkT365();
static void (*Lnk365)() = LnkT365;
static object  LnkTLI364(object,...);
static object  (*LnkLI364)() = (object (*)()) LnkTLI364;
static object  LnkTLI363(object,...);
static object  (*LnkLI363)() = (object (*)()) LnkTLI363;
static object  LnkTLI362(object,...);
static object  (*LnkLI362)() = (object (*)()) LnkTLI362;
static object  LnkTLI361(object,...);
static object  (*LnkLI361)() = (object (*)()) LnkTLI361;
