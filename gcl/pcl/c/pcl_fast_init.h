
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
#define VMB8 register object *base=vs_top; object  V63;
#define VMS8  register object *sup=vs_top+17;vs_top=sup;
#define VMV8 vs_check;
#define VMR8(VMT8) vs_top=base ; return(VMT8);
#define VC9
#define VC10 object  V75 ,V74 ,V73;
#define VC11 object  V99 ,V98 ,V97 ,V91 ,V90 ,V89 ,V85;
static object LI12(object,...);
static object VK12defaults[14]={(void *)-2,(void *)-2,(void *)43,(void *)43,(void *)43,(void *)43,(void *)43,(void *)43,(void *)43,(void *)43,(void *)43,(void *)43,(void *)43,(void *)43};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[14];} LI12key={14,0,VK12defaults,{(void *)256,(void *)257,(void *)258,(void *)259,(void *)260,(void *)261,(void *)262,(void *)263,(void *)264,(void *)265,(void *)266,(void *)267,(void *)268,(void *)171}};
#define VMB12 register object *base=vs_top; object Vcs[28];
#define VMS12  register object *sup=vs_top+15;vs_top=sup;
#define VMV12 vs_check;
#define VMR12(VMT12) vs_top=base ; return(VMT12);
#define VC13 object  V119;
static object LI14();
#define VMB14
#define VMS14
#define VMV14
#define VMR14(VMT14) return(VMT14);
#define VC15 object  V142 ,V141 ,V140;
#define VC16 object  V146 ,V145 ,V144;
#define VC17 object  V150 ,V149 ,V148;
#define VC18 object  V154 ,V153 ,V152;
#define VC19 object  V158 ,V157 ,V156;
#define VC20 object  V162 ,V161 ,V160;
#define VC21 object  V166 ,V165 ,V164;
#define VC22 object  V170 ,V169 ,V168;
#define VC23 object  V174 ,V173 ,V172;
#define VC24 object  V178 ,V177 ,V176;
#define VC25 object  V182 ,V181 ,V180;
#define VC26 object  V186 ,V185 ,V184;
static object LI27();
#define VMB27 register object *base=vs_top; object  V203 ,V202 ,V201 ,V200 ,V199 ,V198 ,V197 ,V196 ,V195 ,V194 ,V193 ,V192 ,V190 ,V189;
#define VMS27  register object *sup=vs_top+1;vs_top=sup;
#define VMV27 vs_check;
#define VMR27(VMT27) vs_top=base ; return(VMT27);
static object LI28();
#define VMB28 register object *base=vs_top; object  V209;
#define VMS28  register object *sup=vs_top+1;vs_top=sup;
#define VMV28 vs_check;
#define VMR28(VMT28) vs_top=base ; return(VMT28);
static object LI29();
#define VMB29 register object *base=vs_top;
#define VMS29 vs_top += 1;
#define VMV29 vs_check;
#define VMR29(VMT29) vs_top=base ; return(VMT29);
static object LI30(object,object,object,...);
#define VMB30 register object *base=vs_top; object  V256 ,V255 ,V246 ,V241 ,V232 ,V231;
#define VMS30  register object *sup=vs_top+2;vs_top=sup;
#define VMV30 vs_check;
#define VMR30(VMT30) vs_top=base ; return(VMT30);
static object LI31();
#define VMB31 register object *base=vs_top; object  V311 ,V310 ,V307 ,V303 ,V302 ,V301 ,V300 ,V299 ,V292 ,V291 ,V288 ,V287 ,V284 ,V283 ,V282 ,V281 ,V280 ,V279 ,V278 ,V276 ,V275 ,V272 ,V271 ,V268 ,V267;
#define VMS31  register object *sup=vs_top+13;vs_top=sup;
#define VMV31 vs_check;
#define VMR31(VMT31) vs_top=base ; return(VMT31);
static object LI33();
#define VMB32 register object *base=vs_top; object  V334 ,V332;
#define VMS32  register object *sup=vs_top+16;vs_top=sup;
#define VMV32 vs_check;
#define VMR32(VMT32) vs_top=base ; return(VMT32);
static object LI35();
#define VMB33 register object *base=vs_top; object  V349;
#define VMS33  register object *sup=vs_top+6;vs_top=sup;
#define VMV33 vs_check;
#define VMR33(VMT33) vs_top=base ; return(VMT33);
static object LI36();
#define VMB34 register object *base=vs_top; object  V362 ,V360 ,V359 ,V356;
#define VMS34  register object *sup=vs_top+1;vs_top=sup;
#define VMV34 vs_check;
#define VMR34(VMT34) vs_top=base ; return(VMT34);
static object LI37();
#define VMB35 register object *base=vs_top; object  V375 ,V374 ,V372;
#define VMS35  register object *sup=vs_top+2;vs_top=sup;
#define VMV35 vs_check;
#define VMR35(VMT35) vs_top=base ; return(VMT35);
#define VC36 object  V380 ,V379 ,V378;
#define VC37
#define VC38 object  V383;
#define VC39 object  V385;
#define VC40
static object LI43();
#define VMB41 register object *base=vs_top; object  V413 ,V410 ,V408 ,V405;
#define VMS41  register object *sup=vs_top+15;vs_top=sup;
#define VMV41 vs_check;
#define VMR41(VMT41) vs_top=base ; return(VMT41);
static object LI45();
#define VMB42 register object *base=vs_top; object  V433 ,V432 ,V431 ,V430 ,V429 ,V428 ,V427;
#define VMS42  register object *sup=vs_top+13;vs_top=sup;
#define VMV42 vs_check;
#define VMR42(VMT42) vs_top=base ; return(VMT42);
#define VC43
#define VC44 object  V458 ,V456 ,V455 ,V453 ,V452 ,V450;
static object LI48();
#define VMB45 register object *base=vs_top;
#define VMS45  register object *sup=vs_top+2;vs_top=sup;
#define VMV45 vs_check;
#define VMR45(VMT45) vs_top=base ; return(VMT45);
#define VC46 object  V504 ,V503 ,V500 ,V499 ,V496 ,V489 ,V484 ,V480;
#define VC47 object  V561 ,V560 ,V559 ,V558 ,V557 ,V556 ,V555 ,V553 ,V542 ,V541 ,V540 ,V539 ,V538 ,V537 ,V536 ,V534 ,V533 ,V532;
static object LI51();
#define VMB48 register object *base=vs_top; object  V574 ,V570 ,V569;
#define VMS48  register object *sup=vs_top+6;vs_top=sup;
#define VMV48 vs_check;
#define VMR48(VMT48) vs_top=base ; return(VMT48);
#define VC49 object  V594 ,V583;
static object LI53();
#define VMB50 register object *base=vs_top; object  V609;
#define VMS50  register object *sup=vs_top+5;vs_top=sup;
#define VMV50 vs_check;
#define VMR50(VMT50) vs_top=base ; return(VMT50);
#define VC51 object  V638 ,V637 ,V636 ,V635 ,V634 ,V633 ,V632 ,V624;
#define VC52
static object LI56();
#define VMB53 register object *base=vs_top; object  V674 ,V673 ,V663 ,V662 ,V655;
#define VMS53  register object *sup=vs_top+9;vs_top=sup;
#define VMV53 vs_check;
#define VMR53(VMT53) vs_top=base ; return(VMT53);
static object LI57();
#define VMB54 register object *base=vs_top; object  V692;
#define VMS54  register object *sup=vs_top+2;vs_top=sup;
#define VMV54 vs_check;
#define VMR54(VMT54) vs_top=base ; return(VMT54);
static object LI60();
#define VMB55 register object *base=vs_top; object  V757 ,V756 ,V755 ,V753 ,V752 ,V748 ,V746 ,V745 ,V744 ,V743 ,V742 ,V741 ,V739 ,V738 ,V733 ,V731 ,V730 ,V727 ,V726 ,V724 ,V723 ,V721 ,V714 ,V712 ,V711 ,V709 ,V708 ,V706;
#define VMS55  register object *sup=vs_top+10;vs_top=sup;
#define VMV55 vs_check;
#define VMR55(VMT55) vs_top=base ; return(VMT55);
#define VC56 object  V763;
#define VC57 object  V775 ,V774 ,V773 ,V772;
static object LI64();
#define VMB58 object  V778;
#define VMS58
#define VMV58
#define VMR58(VMT58) return(VMT58);
static void L61();
#define VC59
static void LC71();
#define VC60 object  V788;
static void LC70();
#define VC61
static void LC69();
#define VC62
static void LC68();
#define VC63 object  V827 ,V817;
static void LC67();
#define VC64 object  V856 ,V846 ,V842 ,V841 ,V840;
static void LC34();
#define VC65 object  V866;
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
#define VM64 12
#define VM63 14
#define VM62 4
#define VM61 11
#define VM60 13
#define VM59 2
#define VM58 0
#define VM57 12
#define VM56 4
#define VM55 10
#define VM54 2
#define VM53 9
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
#define VM31 13
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
static char * VVi[341]={
#define Cdata VV[340]
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
static object  LnkTLI339(object,...);
static object  (*LnkLI339)() = (object (*)()) LnkTLI339;
static void LnkT338();
static void (*Lnk338)() = LnkT338;
static object *Lclptr337;
static void LnkT337();
static void (*Lnk337)() = LnkT337;
static object  LnkTLI336();
static object  (*LnkLI336)() = LnkTLI336;
static void LnkT335();
static void (*Lnk335)() = LnkT335;
static object *Lclptr96;
static void LnkT96();
static void (*Lnk96)() = LnkT96;
static object  LnkTLI119(object,...);
static object  (*LnkLI119)() = (object (*)()) LnkTLI119;
static void LnkT132();
static void (*Lnk132)() = LnkT132;
static object  LnkTLI334(object,...);
static object  (*LnkLI334)() = (object (*)()) LnkTLI334;
static object  LnkTLI333(object,...);
static object  (*LnkLI333)() = (object (*)()) LnkTLI333;
static object  LnkTLI7(object,...);
static object  (*LnkLI7)() = (object (*)()) LnkTLI7;
static void LnkT332();
static void (*Lnk332)() = LnkT332;
static object  LnkTLI331(object,...);
static object  (*LnkLI331)() = (object (*)()) LnkTLI331;
static void LnkT330();
static void (*Lnk330)() = LnkT330;
static object *Lclptr213;
static void LnkT213();
static void (*Lnk213)() = LnkT213;
static object  LnkTLI328(object,...);
static object  (*LnkLI328)() = (object (*)()) LnkTLI328;
static object  LnkTLI327(object,...);
static object  (*LnkLI327)() = (object (*)()) LnkTLI327;
static void LnkT326();
static void (*Lnk326)() = LnkT326;
static void LnkT325();
static void (*Lnk325)() = LnkT325;
static object  LnkTLI324(object,...);
static object  (*LnkLI324)() = (object (*)()) LnkTLI324;
static void LnkT323();
static void (*Lnk323)() = LnkT323;
static void LnkT322();
static void (*Lnk322)() = LnkT322;
static void LnkT321();
static void (*Lnk321)() = LnkT321;
static object  LnkTLI320(object,...);
static object  (*LnkLI320)() = (object (*)()) LnkTLI320;
static object  LnkTLI319(object,...);
static object  (*LnkLI319)() = (object (*)()) LnkTLI319;
static object  LnkTLI318(object,...);
static object  (*LnkLI318)() = (object (*)()) LnkTLI318;
static object *Lclptr317;
static void LnkT317();
static void (*Lnk317)() = LnkT317;
static object *Lclptr316;
static void LnkT316();
static void (*Lnk316)() = LnkT316;
static object *Lclptr315;
static void LnkT315();
static void (*Lnk315)() = LnkT315;
static void LnkT314();
static void (*Lnk314)() = LnkT314;
static void LnkT312();
static void (*Lnk312)() = LnkT312;
static object *Lclptr311;
static void LnkT311();
static void (*Lnk311)() = LnkT311;
static void LnkT310();
static void (*Lnk310)() = LnkT310;
static object  LnkTLI309(object,...);
static object  (*LnkLI309)() = (object (*)()) LnkTLI309;
static object *Lclptr308;
static void LnkT308();
static void (*Lnk308)() = LnkT308;
static object *Lclptr307;
static void LnkT307();
static void (*Lnk307)() = LnkT307;
static object *Lclptr306;
static void LnkT306();
static void (*Lnk306)() = LnkT306;
static void LnkT305();
static void (*Lnk305)() = LnkT305;
static void LnkT304();
static void (*Lnk304)() = LnkT304;
static void LnkT303();
static void (*Lnk303)() = LnkT303;
static void LnkT302();
static void (*Lnk302)() = LnkT302;
static void LnkT301();
static void (*Lnk301)() = LnkT301;
static object *Lclptr299;
static void LnkT299();
static void (*Lnk299)() = LnkT299;
static object *Lclptr297;
static void LnkT297();
static void (*Lnk297)() = LnkT297;
static object *Lclptr295;
static void LnkT295();
static void (*Lnk295)() = LnkT295;
static object *Lclptr294;
static void LnkT294();
static void (*Lnk294)() = LnkT294;
static object  LnkTLI293(object,...);
static object  (*LnkLI293)() = (object (*)()) LnkTLI293;
static object  LnkTLI292(object,...);
static object  (*LnkLI292)() = (object (*)()) LnkTLI292;
static void LnkT291();
static void (*Lnk291)() = LnkT291;
static object  LnkTLI289(object,...);
static object  (*LnkLI289)() = (object (*)()) LnkTLI289;
static object *Lclptr112;
static void LnkT112();
static void (*Lnk112)() = LnkT112;
static object  LnkTLI288(object,...);
static object  (*LnkLI288)() = (object (*)()) LnkTLI288;
static void LnkT287();
static void (*Lnk287)() = LnkT287;
static object *Lclptr286;
static void LnkT286();
static void (*Lnk286)() = LnkT286;
static object  LnkTLI285(object,...);
static object  (*LnkLI285)() = (object (*)()) LnkTLI285;
static object *Lclptr284;
static void LnkT284();
static void (*Lnk284)() = LnkT284;
static object  LnkTLI280(object,...);
static object  (*LnkLI280)() = (object (*)()) LnkTLI280;
static object *Lclptr283;
static void LnkT283();
static void (*Lnk283)() = LnkT283;
static object *Lclptr282;
static void LnkT282();
static void (*Lnk282)() = LnkT282;
static void LnkT281();
static void (*Lnk281)() = LnkT281;
static object  LnkTLI278(object,...);
static object  (*LnkLI278)() = (object (*)()) LnkTLI278;
static void LnkT277();
static void (*Lnk277)() = LnkT277;
static object *Lclptr276;
static void LnkT276();
static void (*Lnk276)() = LnkT276;
static void LnkT275();
static void (*Lnk275)() = LnkT275;
static void LnkT274();
static void (*Lnk274)() = LnkT274;
static object  LnkTLI273(object,...);
static object  (*LnkLI273)() = (object (*)()) LnkTLI273;
static object  LnkTLI272(object,...);
static object  (*LnkLI272)() = (object (*)()) LnkTLI272;
static object *Lclptr271;
static void LnkT271();
static void (*Lnk271)() = LnkT271;
static object  LnkTLI270(object,...);
static object  (*LnkLI270)() = (object (*)()) LnkTLI270;
static object  LnkTLI50(object,...);
static object  (*LnkLI50)() = (object (*)()) LnkTLI50;
static object *Lclptr269;
static void LnkT269();
static void (*Lnk269)() = LnkT269;
static object *Lclptr9;
static void LnkT9();
static void (*Lnk9)() = LnkT9;
static object *Lclptr255;
static void LnkT255();
static void (*Lnk255)() = LnkT255;
static object *Lclptr254;
static void LnkT254();
static void (*Lnk254)() = LnkT254;
static object  LnkTLI39(object,...);
static object  (*LnkLI39)() = (object (*)()) LnkTLI39;
static object  LnkTLI61(object,...);
static object  (*LnkLI61)() = (object (*)()) LnkTLI61;
static object *Lclptr253;
static void LnkT253();
static void (*Lnk253)() = LnkT253;
static void LnkT252();
static void (*Lnk252)() = LnkT252;
static object  LnkTLI250(object,...);
static object  (*LnkLI250)() = (object (*)()) LnkTLI250;
static void LnkT249();
static void (*Lnk249)() = LnkT249;
static object  LnkTLI75(object,...);
static object  (*LnkLI75)() = (object (*)()) LnkTLI75;
static object  LnkTLI247(object,...);
static object  (*LnkLI247)() = (object (*)()) LnkTLI247;
static void LnkT246();
static void (*Lnk246)() = LnkT246;
static object *Lclptr244;
static void LnkT244();
static void (*Lnk244)() = LnkT244;
static object  LnkTLI243(object,...);
static object  (*LnkLI243)() = (object (*)()) LnkTLI243;
