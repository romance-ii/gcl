
static void L1();
static void L4();
static void L5();
static void L6();
static void L9();
static void L10();
static void L11();
static void L13();
static void L15();
static void L16();
static void L17();
static void L18();
static void L19();
static void L20();
static void L21();
static void L22();
static void L23();
static void L24();
static void L25();
static void L26();
static void L38();
static void L39();
static void L40();
static void L41();
static void L42();
static void L46();
static void L47();
static void L49();
static void L50();
static void L52();
static void L54();
static void L55();
static void L62();
static void L63();
#define VC1 object  V4;
static object LI2();
#define VMB2 register object *base=vs_top;
#define VMS2  register object *sup=vs_top+1;vs_top=sup;
#define VMV2 vs_check;
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top;
#define VMS3  register object *sup=vs_top+5;vs_top=sup;
#define VMV3 vs_check;
#define VMR3(VMT3) vs_top=base ; return(VMT3);
#define VC4 object  V36 ,V35 ,V34 ,V33;
#define VC5 object  V38;
#define VC6
static object LI7();
#define VMB7 register object *base=vs_top; object  V55;
#define VMS7  register object *sup=vs_top+8;vs_top=sup;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8();
#define VMB8 register object *base=vs_top; object  V64 ,V63;
#define VMS8  register object *sup=vs_top+17;vs_top=sup;
#define VMV8 vs_check;
#define VMR8(VMT8) vs_top=base ; return(VMT8);
#define VC9
#define VC10 object  V76 ,V75 ,V74;
#define VC11 object  V100 ,V99 ,V98 ,V92 ,V91 ,V90 ,V86;
static object LI12(object,...);
static object VK12defaults[14]={(void *)-2,(void *)-2,(void *)43,(void *)43,(void *)43,(void *)43,(void *)43,(void *)43,(void *)43,(void *)43,(void *)43,(void *)43,(void *)43,(void *)43};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[14];} LI12key={14,0,VK12defaults,{(void *)230,(void *)231,(void *)232,(void *)233,(void *)234,(void *)235,(void *)236,(void *)237,(void *)238,(void *)239,(void *)240,(void *)241,(void *)242,(void *)155}};
#define VMB12 register object *base=vs_top; object Vcs[28];
#define VMS12  register object *sup=vs_top+15;vs_top=sup;
#define VMV12 vs_check;
#define VMR12(VMT12) vs_top=base ; return(VMT12);
#define VC13 object  V120;
static object LI14();
#define VMB14
#define VMS14
#define VMV14
#define VMR14(VMT14) return(VMT14);
#define VC15 object  V143 ,V142 ,V141;
#define VC16 object  V147 ,V146 ,V145;
#define VC17 object  V151 ,V150 ,V149;
#define VC18 object  V155 ,V154 ,V153;
#define VC19 object  V159 ,V158 ,V157;
#define VC20 object  V163 ,V162 ,V161;
#define VC21 object  V167 ,V166 ,V165;
#define VC22 object  V171 ,V170 ,V169;
#define VC23 object  V175 ,V174 ,V173;
#define VC24 object  V179 ,V178 ,V177;
#define VC25 object  V183 ,V182 ,V181;
#define VC26 object  V187 ,V186 ,V185;
static object LI27();
#define VMB27 register object *base=vs_top; object  V217 ,V216 ,V215 ,V214 ,V213 ,V212 ,V211 ,V210 ,V209 ,V208 ,V207 ,V206 ,V205 ,V204 ,V203 ,V202 ,V201 ,V200 ,V199 ,V198 ,V197 ,V196 ,V195 ,V194 ,V192 ,V191 ,V190;
#define VMS27  register object *sup=vs_top+1;vs_top=sup;
#define VMV27 vs_check;
#define VMR27(VMT27) vs_top=base ; return(VMT27);
static object LI28();
#define VMB28 register object *base=vs_top; object  V223;
#define VMS28  register object *sup=vs_top+1;vs_top=sup;
#define VMV28 vs_check;
#define VMR28(VMT28) vs_top=base ; return(VMT28);
static object LI29();
#define VMB29 register object *base=vs_top;
#define VMS29 vs_top += 1;
#define VMV29 vs_check;
#define VMR29(VMT29) vs_top=base ; return(VMT29);
static object LI30(object,object,object,...);
#define VMB30 register object *base=vs_top; object  V268 ,V267 ,V266 ,V257 ,V256 ,V251;
#define VMS30  register object *sup=vs_top+2;vs_top=sup;
#define VMV30 vs_check;
#define VMR30(VMT30) vs_top=base ; return(VMT30);
static object LI31();
#define VMB31 register object *base=vs_top; object  V340 ,V339 ,V337 ,V336 ,V335 ,V331 ,V330 ,V329 ,V328 ,V327 ,V326 ,V325 ,V324 ,V323 ,V316 ,V315 ,V314 ,V311 ,V310 ,V309 ,V306 ,V305 ,V304 ,V303 ,V302 ,V301 ,V300 ,V299 ,V298 ,V296 ,V295 ,V294 ,V291 ,V290 ,V289 ,V288 ,V287 ,V286 ,V283 ,V282 ,V281 ,V280 ,V279 ,V278;
#define VMS31  register object *sup=vs_top+8;vs_top=sup;
#define VMV31 vs_check;
#define VMR31(VMT31) vs_top=base ; return(VMT31);
static object LI33();
#define VMB32 register object *base=vs_top; object  V367 ,V366 ,V365 ,V364 ,V363 ,V361;
#define VMS32  register object *sup=vs_top+16;vs_top=sup;
#define VMV32 vs_check;
#define VMR32(VMT32) vs_top=base ; return(VMT32);
static object LI35();
#define VMB33 register object *base=vs_top; object  V384 ,V383 ,V382;
#define VMS33  register object *sup=vs_top+6;vs_top=sup;
#define VMV33 vs_check;
#define VMR33(VMT33) vs_top=base ; return(VMT33);
static object LI36();
#define VMB34 register object *base=vs_top; object  V397 ,V395 ,V394 ,V391;
#define VMS34  register object *sup=vs_top+1;vs_top=sup;
#define VMV34 vs_check;
#define VMR34(VMT34) vs_top=base ; return(VMT34);
static object LI37();
#define VMB35 register object *base=vs_top; object  V412 ,V411 ,V410 ,V409 ,V407;
#define VMS35  register object *sup=vs_top+2;vs_top=sup;
#define VMV35 vs_check;
#define VMR35(VMT35) vs_top=base ; return(VMT35);
#define VC36 object  V417 ,V416 ,V415;
#define VC37
#define VC38 object  V420;
#define VC39 object  V422;
#define VC40
static object LI43();
#define VMB41 register object *base=vs_top; object  V450 ,V447 ,V445 ,V442;
#define VMS41  register object *sup=vs_top+15;vs_top=sup;
#define VMV41 vs_check;
#define VMR41(VMT41) vs_top=base ; return(VMT41);
static object LI45();
#define VMB42 register object *base=vs_top; object  V470 ,V469 ,V468 ,V467 ,V466 ,V465 ,V464;
#define VMS42  register object *sup=vs_top+13;vs_top=sup;
#define VMV42 vs_check;
#define VMR42(VMT42) vs_top=base ; return(VMT42);
#define VC43
#define VC44 object  V501 ,V500 ,V498 ,V497 ,V496 ,V495 ,V493 ,V492 ,V491 ,V490 ,V488 ,V487;
static object LI48();
#define VMB45 register object *base=vs_top;
#define VMS45  register object *sup=vs_top+2;vs_top=sup;
#define VMV45 vs_check;
#define VMR45(VMT45) vs_top=base ; return(VMT45);
#define VC46 object  V548 ,V547 ,V546 ,V543 ,V542 ,V539 ,V532 ,V527 ,V523;
#define VC47 object  V606 ,V605 ,V604 ,V603 ,V602 ,V601 ,V600 ,V599 ,V597 ,V586 ,V585 ,V584 ,V583 ,V582 ,V581 ,V580 ,V578 ,V577 ,V576;
static object LI51();
#define VMB48 register object *base=vs_top; object  V620 ,V619 ,V615 ,V614;
#define VMS48  register object *sup=vs_top+6;vs_top=sup;
#define VMV48 vs_check;
#define VMR48(VMT48) vs_top=base ; return(VMT48);
#define VC49 object  V641 ,V630 ,V629;
static object LI53();
#define VMB50 register object *base=vs_top; object  V656;
#define VMS50  register object *sup=vs_top+5;vs_top=sup;
#define VMV50 vs_check;
#define VMR50(VMT50) vs_top=base ; return(VMT50);
#define VC51 object  V687 ,V686 ,V685 ,V684 ,V683 ,V682 ,V681 ,V680 ,V679 ,V671;
#define VC52
static object LI56();
#define VMB53 register object *base=vs_top; object  V711 ,V710 ,V704;
#define VMS53  register object *sup=vs_top+4;vs_top=sup;
#define VMV53 vs_check;
#define VMR53(VMT53) vs_top=base ; return(VMT53);
static object LI57();
#define VMB54 register object *base=vs_top; object  V737;
#define VMS54  register object *sup=vs_top+2;vs_top=sup;
#define VMV54 vs_check;
#define VMR54(VMT54) vs_top=base ; return(VMT54);
static object LI60();
#define VMB55 register object *base=vs_top; object  V804 ,V803 ,V802 ,V800 ,V799 ,V798 ,V794 ,V792 ,V791 ,V790 ,V789 ,V788 ,V787 ,V786 ,V784 ,V783 ,V778 ,V776 ,V775 ,V774 ,V771 ,V770 ,V768 ,V767 ,V765 ,V758 ,V756 ,V755 ,V753 ,V752 ,V750;
#define VMS55  register object *sup=vs_top+5;vs_top=sup;
#define VMV55 vs_check;
#define VMR55(VMT55) vs_top=base ; return(VMT55);
#define VC56 object  V810;
#define VC57 object  V824 ,V823 ,V822 ,V821 ,V820 ,V819;
static object LI64();
#define VMB58 object  V827;
#define VMS58
#define VMV58
#define VMR58(VMT58) return(VMT58);
static void L61();
#define VC59
static void LC71();
#define VC60 object  V837;
static void LC70();
#define VC61
static void LC69();
#define VC62
static void LC68();
#define VC63 object  V873 ,V864;
static void LC67();
#define VC64 object  V903 ,V894 ,V890 ,V889 ,V888 ,V887 ,V886 ,V885;
static void LC34();
#define VC65 object  V912;
static void LC66();
#define VC66
static void L32();
#define VC67
static void LC65();
#define VC68
static void LC71();
static void LC70();
static void LC69();
static void LC68();
static void LC67();
static void LC34();
static void LC66();
static void LC65();
#define VM68 4
#define VM67 3
#define VM66 5
#define VM65 2
#define VM64 7
#define VM63 9
#define VM62 4
#define VM61 8
#define VM60 8
#define VM59 2
#define VM58 0
#define VM57 12
#define VM56 4
#define VM55 5
#define VM54 2
#define VM53 4
#define VM52 5
#define VM51 4
#define VM50 5
#define VM49 12
#define VM48 6
#define VM47 22
#define VM46 7
#define VM45 2
#define VM44 8
#define VM43 5
#define VM42 13
#define VM41 15
#define VM40 6
#define VM39 5
#define VM38 5
#define VM37 4
#define VM36 6
#define VM35 2
#define VM34 1
#define VM33 6
#define VM32 16
#define VM31 8
#define VM30 2
#define VM29 1
#define VM28 1
#define VM27 1
#define VM26 4
#define VM25 4
#define VM24 4
#define VM23 4
#define VM22 4
#define VM21 4
#define VM20 4
#define VM19 4
#define VM18 4
#define VM17 4
#define VM16 4
#define VM15 4
#define VM14 0
#define VM13 4
#define VM12 15
#define VM11 9
#define VM10 10
#define VM9 4
#define VM8 17
#define VM7 8
#define VM6 7
#define VM5 7
#define VM4 7
#define VM3 5
#define VM2 1
#define VM1 3
static char * VVi[318]={
#define Cdata VV[317]
(char *)(L1),
(char *)(LI2),
(char *)(LI3),
(char *)(L4),
(char *)(L5),
(char *)(L6),
(char *)(LI7),
(char *)(LI8),
(char *)(L9),
(char *)(L10),
(char *)(L11),
(char *)(LI12),
(char *)(&LI12key),
(char *)(L13),
(char *)(LI14),
(char *)(L15),
(char *)(L16),
(char *)(L17),
(char *)(L18),
(char *)(L19),
(char *)(L20),
(char *)(L21),
(char *)(L22),
(char *)(L23),
(char *)(L24),
(char *)(L25),
(char *)(L26),
(char *)(LI27),
(char *)(LI28),
(char *)(LI29),
(char *)(LI30),
(char *)(LI31),
(char *)(LI33),
(char *)(LI35),
(char *)(LI36),
(char *)(LI37),
(char *)(L38),
(char *)(L39),
(char *)(L40),
(char *)(L41),
(char *)(L42),
(char *)(LI43),
(char *)(LI45),
(char *)(L46),
(char *)(L47),
(char *)(LI48),
(char *)(L49),
(char *)(L50),
(char *)(LI51),
(char *)(L52),
(char *)(LI53),
(char *)(L54),
(char *)(L55),
(char *)(LI56),
(char *)(LI57),
(char *)(LI60),
(char *)(L62),
(char *)(L63),
(char *)(LI64),
(char *)(&LC65)
};
#define VV ((object *)VVi)
static object  LnkTLI316(object,...);
static object  (*LnkLI316)() = (object (*)()) LnkTLI316;
static void LnkT315();
static void (*Lnk315)() = LnkT315;
static object *Lclptr314;
static void LnkT314();
static void (*Lnk314)() = LnkT314;
static object  LnkTLI313();
static object  (*LnkLI313)() = LnkTLI313;
static void LnkT312();
static void (*Lnk312)() = LnkT312;
static void LnkT311();
static void (*Lnk311)() = LnkT311;
static object *Lclptr96;
static void LnkT96();
static void (*Lnk96)() = LnkT96;
static object  LnkTLI111(object,...);
static object  (*LnkLI111)() = (object (*)()) LnkTLI111;
static void LnkT124();
static void (*Lnk124)() = LnkT124;
static object  LnkTLI310(object,...);
static object  (*LnkLI310)() = (object (*)()) LnkTLI310;
static object  LnkTLI309(object,...);
static object  (*LnkLI309)() = (object (*)()) LnkTLI309;
static object  LnkTLI7(object,...);
static object  (*LnkLI7)() = (object (*)()) LnkTLI7;
static void LnkT308();
static void (*Lnk308)() = LnkT308;
static object  LnkTLI307(object,...);
static object  (*LnkLI307)() = (object (*)()) LnkTLI307;
static void LnkT306();
static void (*Lnk306)() = LnkT306;
static object *Lclptr195;
static void LnkT195();
static void (*Lnk195)() = LnkT195;
static object *Lclptr304;
static void LnkT304();
static void (*Lnk304)() = LnkT304;
static object  LnkTLI303(object,...);
static object  (*LnkLI303)() = (object (*)()) LnkTLI303;
static object  LnkTLI302(object,...);
static object  (*LnkLI302)() = (object (*)()) LnkTLI302;
static void LnkT301();
static void (*Lnk301)() = LnkT301;
static void LnkT300();
static void (*Lnk300)() = LnkT300;
static object  LnkTLI299(object,...);
static object  (*LnkLI299)() = (object (*)()) LnkTLI299;
static void LnkT298();
static void (*Lnk298)() = LnkT298;
static void LnkT297();
static void (*Lnk297)() = LnkT297;
static void LnkT296();
static void (*Lnk296)() = LnkT296;
static object  LnkTLI295(object,...);
static object  (*LnkLI295)() = (object (*)()) LnkTLI295;
static object  LnkTLI294(object,...);
static object  (*LnkLI294)() = (object (*)()) LnkTLI294;
static object  LnkTLI293(object,...);
static object  (*LnkLI293)() = (object (*)()) LnkTLI293;
static object *Lclptr292;
static void LnkT292();
static void (*Lnk292)() = LnkT292;
static object *Lclptr291;
static void LnkT291();
static void (*Lnk291)() = LnkT291;
static object *Lclptr290;
static void LnkT290();
static void (*Lnk290)() = LnkT290;
static void LnkT289();
static void (*Lnk289)() = LnkT289;
static void LnkT287();
static void (*Lnk287)() = LnkT287;
static object *Lclptr286;
static void LnkT286();
static void (*Lnk286)() = LnkT286;
static void LnkT285();
static void (*Lnk285)() = LnkT285;
static object  LnkTLI284(object,...);
static object  (*LnkLI284)() = (object (*)()) LnkTLI284;
static object *Lclptr283;
static void LnkT283();
static void (*Lnk283)() = LnkT283;
static object *Lclptr282;
static void LnkT282();
static void (*Lnk282)() = LnkT282;
static object *Lclptr281;
static void LnkT281();
static void (*Lnk281)() = LnkT281;
static void LnkT280();
static void (*Lnk280)() = LnkT280;
static void LnkT279();
static void (*Lnk279)() = LnkT279;
static void LnkT278();
static void (*Lnk278)() = LnkT278;
static void LnkT277();
static void (*Lnk277)() = LnkT277;
static void LnkT276();
static void (*Lnk276)() = LnkT276;
static object *Lclptr274;
static void LnkT274();
static void (*Lnk274)() = LnkT274;
static object *Lclptr272;
static void LnkT272();
static void (*Lnk272)() = LnkT272;
static object *Lclptr270;
static void LnkT270();
static void (*Lnk270)() = LnkT270;
static object *Lclptr269;
static void LnkT269();
static void (*Lnk269)() = LnkT269;
static object  LnkTLI268(object,...);
static object  (*LnkLI268)() = (object (*)()) LnkTLI268;
static object  LnkTLI267(object,...);
static object  (*LnkLI267)() = (object (*)()) LnkTLI267;
static void LnkT266();
static void (*Lnk266)() = LnkT266;
static object  LnkTLI264(object,...);
static object  (*LnkLI264)() = (object (*)()) LnkTLI264;
static object *Lclptr104;
static void LnkT104();
static void (*Lnk104)() = LnkT104;
static object  LnkTLI263(object,...);
static object  (*LnkLI263)() = (object (*)()) LnkTLI263;
static void LnkT262();
static void (*Lnk262)() = LnkT262;
static object *Lclptr261;
static void LnkT261();
static void (*Lnk261)() = LnkT261;
static object  LnkTLI260(object,...);
static object  (*LnkLI260)() = (object (*)()) LnkTLI260;
static object *Lclptr259;
static void LnkT259();
static void (*Lnk259)() = LnkT259;
static object  LnkTLI258(object,...);
static object  (*LnkLI258)() = (object (*)()) LnkTLI258;
static object *Lclptr257;
static void LnkT257();
static void (*Lnk257)() = LnkT257;
static object *Lclptr256;
static void LnkT256();
static void (*Lnk256)() = LnkT256;
static object  LnkTLI254(object,...);
static object  (*LnkLI254)() = (object (*)()) LnkTLI254;
static object  LnkTLI253(object,...);
static object  (*LnkLI253)() = (object (*)()) LnkTLI253;
static void LnkT252();
static void (*Lnk252)() = LnkT252;
static object *Lclptr251;
static void LnkT251();
static void (*Lnk251)() = LnkT251;
static void LnkT250();
static void (*Lnk250)() = LnkT250;
static void LnkT249();
static void (*Lnk249)() = LnkT249;
static object  LnkTLI248(object,...);
static object  (*LnkLI248)() = (object (*)()) LnkTLI248;
static object *Lclptr247;
static void LnkT247();
static void (*Lnk247)() = LnkT247;
static object  LnkTLI246(object,...);
static object  (*LnkLI246)() = (object (*)()) LnkTLI246;
static object *Lclptr245;
static void LnkT245();
static void (*Lnk245)() = LnkT245;
static object  LnkTLI244(object,...);
static object  (*LnkLI244)() = (object (*)()) LnkTLI244;
static object  LnkTLI50(object,...);
static object  (*LnkLI50)() = (object (*)()) LnkTLI50;
static object *Lclptr243;
static void LnkT243();
static void (*Lnk243)() = LnkT243;
static object *Lclptr9;
static void LnkT9();
static void (*Lnk9)() = LnkT9;
static object *Lclptr229;
static void LnkT229();
static void (*Lnk229)() = LnkT229;
static object *Lclptr228;
static void LnkT228();
static void (*Lnk228)() = LnkT228;
static object  LnkTLI39(object,...);
static object  (*LnkLI39)() = (object (*)()) LnkTLI39;
static object  LnkTLI61(object,...);
static object  (*LnkLI61)() = (object (*)()) LnkTLI61;
static object *Lclptr227;
static void LnkT227();
static void (*Lnk227)() = LnkT227;
static void LnkT226();
static void (*Lnk226)() = LnkT226;
static object  LnkTLI224(object,...);
static object  (*LnkLI224)() = (object (*)()) LnkTLI224;
static void LnkT223();
static void (*Lnk223)() = LnkT223;
static object  LnkTLI75(object,...);
static object  (*LnkLI75)() = (object (*)()) LnkTLI75;
static object  LnkTLI221(object,...);
static object  (*LnkLI221)() = (object (*)()) LnkTLI221;
static void LnkT220();
static void (*Lnk220)() = LnkT220;
static object *Lclptr218;
static void LnkT218();
static void (*Lnk218)() = LnkT218;
static object  LnkTLI217(object,...);
static object  (*LnkLI217)() = (object (*)()) LnkTLI217;
