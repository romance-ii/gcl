
static void L2();
static void L6();
static void L8();
static void L22();
static void L23();
static void L26();
static void L27();
static void L28();
static void L29();
static void L38();
static void L52();
static object LI1(object,...);
#define VMB1 register object *base=vs_top; object  V2;
#define VMS1  register object *sup=vs_top+1;vs_top=sup;
#define VMV1 vs_check;
#define VMR1(VMT1) vs_top=base ; return(VMT1);
#define VC2 object  V8;
static object LI3();
#define VMB3 register object *base=vs_top; object  V22 ,V21;
#define VMS3 vs_top += 2;
#define VMV3 vs_check;
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4();
#define VMB4
#define VMS4
#define VMV4
#define VMR4(VMT4) return(VMT4);
static object LI5();
#define VMB5
#define VMS5
#define VMV5
#define VMR5(VMT5) return(VMT5);
#define VC6 object  V57 ,V56 ,V55 ,V54 ,V53 ,V52 ,V51;
static object LI7(object,object,object,...);
#define VMB7 register object *base=vs_top;
#define VMS7  register object *sup=vs_top+1;vs_top=sup;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
#define VC8
static object LI9();
#define VMB9
#define VMS9
#define VMV9
#define VMR9(VMT9) return(VMT9);
static object LI10(object,object,...);
static object VK10defaults[4]={(void *)-1,(void *)-1,(void *)-1,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[4];} LI10key={4,0,VK10defaults,{(void *)66,(void *)71,(void *)45,(void *)43}};
#define VMB10 object  V86 ,V85 ,V84 ,V83 ,V82; object Vcs[9];
#define VMS10
#define VMV10
#define VMR10(VMT10) return(VMT10);
static object LI11();
#define VMB11 object  V90;
#define VMS11
#define VMV11
#define VMR11(VMT11) return(VMT11);
static object LI12();
#define VMB12 object  V94;
#define VMS12
#define VMV12
#define VMR12(VMT12) return(VMT12);
static object LI13();
#define VMB13 object  V98;
#define VMS13
#define VMV13
#define VMR13(VMT13) return(VMT13);
static object LI14();
#define VMB14 object  V102;
#define VMS14
#define VMV14
#define VMR14(VMT14) return(VMT14);
static object LI15();
#define VMB15 register object *base=vs_top;
#define VMS15 vs_top += 2;
#define VMV15 vs_check;
#define VMR15(VMT15) vs_top=base ; return(VMT15);
static object LI16();
#define VMB16 register object *base=vs_top;
#define VMS16 vs_top += 3;
#define VMV16 vs_check;
#define VMR16(VMT16) vs_top=base ; return(VMT16);
static object LI17();
#define VMB17 register object *base=vs_top;
#define VMS17  register object *sup=vs_top+4;vs_top=sup;
#define VMV17 vs_check;
#define VMR17(VMT17) vs_top=base ; return(VMT17);
static object LI18();
#define VMB18 register object *base=vs_top;
#define VMS18  register object *sup=vs_top+4;vs_top=sup;
#define VMV18 vs_check;
#define VMR18(VMT18) vs_top=base ; return(VMT18);
static object LI19();
#define VMB19 register object *base=vs_top;
#define VMS19  register object *sup=vs_top+2;vs_top=sup;
#define VMV19 vs_check;
#define VMR19(VMT19) vs_top=base ; return(VMT19);
static object LI20();
#define VMB20 object  V152;
#define VMS20
#define VMV20
#define VMR20(VMT20) return(VMT20);
static object LI21();
#define VMB21 register object *base=vs_top;
#define VMS21  register object *sup=vs_top+1;vs_top=sup;
#define VMV21 vs_check;
#define VMR21(VMT21) vs_top=base ; return(VMT21);
#define VC22
#define VC23 object  V160;
static object LI24();
#define VMB24 register object *base=vs_top;
#define VMS24  register object *sup=vs_top+2;vs_top=sup;
#define VMV24 vs_check;
#define VMR24(VMT24) vs_top=base ; return(VMT24);
static object LI25();
#define VMB25
#define VMS25
#define VMV25
#define VMR25(VMT25) return(VMT25);
#define VC26
#define VC27 object  V178;
#define VC28 object  V182;
#define VC29 object  V199 ,V197 ,V193 ,V189;
static object LI30();
#define VMB30 register object *base=vs_top; object  V226 ,V225 ,V220 ,V219 ,V218 ,V217 ,V216;
#define VMS30  register object *sup=vs_top+3;vs_top=sup;
#define VMV30 vs_check;
#define VMR30(VMT30) vs_top=base ; return(VMT30);
static object LI31();
#define VMB31
#define VMS31
#define VMV31
#define VMR31(VMT31) return(VMT31);
static object LI32();
#define VMB32 register object *base=vs_top; object  V257 ,V256;
#define VMS32  register object *sup=vs_top+1;vs_top=sup;
#define VMV32 vs_check;
#define VMR32(VMT32) vs_top=base ; return(VMT32);
static object LI33();
#define VMB33 register object *base=vs_top; object  V265 ,V264;
#define VMS33  register object *sup=vs_top+3;vs_top=sup;
#define VMV33 vs_check;
#define VMR33(VMT33) vs_top=base ; return(VMT33);
static object LI34();
#define VMB34
#define VMS34
#define VMV34
#define VMR34(VMT34) return(VMT34);
static object LI35(object,object,...);
#define VMB35 object  V278;
#define VMS35
#define VMV35
#define VMR35(VMT35) return(VMT35);
static object LI36(object,object,...);
#define VMB36 object  V284;
#define VMS36
#define VMV36
#define VMR36(VMT36) return(VMT36);
static object LI37();
#define VMB37 object  V295 ,V294;
#define VMS37
#define VMV37
#define VMR37(VMT37) return(VMT37);
#define VC38 object  V317 ,V315 ,V313 ,V306;
static object LI39();
#define VMB39 register object *base=vs_top;
#define VMS39  register object *sup=vs_top+2;vs_top=sup;
#define VMV39 vs_check;
#define VMR39(VMT39) vs_top=base ; return(VMT39);
static object LI40(object,object,object,object,...);
#define VMB40 register object *base=vs_top; object  V346 ,V345 ,V344 ,V343 ,V340 ,V338 ,V337 ,V336;
#define VMS40  register object *sup=vs_top+3;vs_top=sup;
#define VMV40 vs_check;
#define VMR40(VMT40) vs_top=base ; return(VMT40);
static object LI41();
#define VMB41
#define VMS41
#define VMV41
#define VMR41(VMT41) return(VMT41);
static object LI42();
#define VMB42
#define VMS42
#define VMV42
#define VMR42(VMT42) return(VMT42);
static object LI43();
#define VMB43
#define VMS43
#define VMV43
#define VMR43(VMT43) return(VMT43);
static object LI44();
#define VMB44
#define VMS44
#define VMV44
#define VMR44(VMT44) return(VMT44);
static object LI45();
#define VMB45
#define VMS45
#define VMV45
#define VMR45(VMT45) return(VMT45);
static object LI46();
#define VMB46
#define VMS46
#define VMV46
#define VMR46(VMT46) return(VMT46);
static object LI47();
#define VMB47 register object *base=vs_top; object  V400;
#define VMS47  register object *sup=vs_top+8;vs_top=sup;
#define VMV47 vs_check;
#define VMR47(VMT47) vs_top=base ; return(VMT47);
static object LI48();
#define VMB48 register object *base=vs_top;
#define VMS48  register object *sup=vs_top+6;vs_top=sup;
#define VMV48 vs_check;
#define VMR48(VMT48) vs_top=base ; return(VMT48);
static object LI50();
#define VMB49 register object *base=vs_top; object  V426;
#define VMS49  register object *sup=vs_top+8;vs_top=sup;
#define VMV49 vs_check;
#define VMR49(VMT49) vs_top=base ; return(VMT49);
static object LI51();
#define VMB50 register object *base=vs_top; object  V454 ,V453 ,V446;
#define VMS50  register object *sup=vs_top+9;vs_top=sup;
#define VMV50 vs_check;
#define VMR50(VMT50) vs_top=base ; return(VMT50);
#define VC51 object  V468 ,V467 ,V466 ,V462;
static object LI54();
#define VMB52 register object *base=vs_top;
#define VMS52  register object *sup=vs_top+8;vs_top=sup;
#define VMV52 vs_check;
#define VMR52(VMT52) vs_top=base ; return(VMT52);
static object LI56();
#define VMB53 register object *base=vs_top; object  V497;
#define VMS53  register object *sup=vs_top+12;vs_top=sup;
#define VMV53 vs_check;
#define VMR53(VMT53) vs_top=base ; return(VMT53);
static object LI57();
#define VMB54 register object *base=vs_top; object  V520 ,V519 ,V518 ,V515;
#define VMS54  register object *sup=vs_top+3;vs_top=sup;
#define VMV54 vs_check;
#define VMR54(VMT54) vs_top=base ; return(VMT54);
static object LI58();
#define VMB55 object  V537 ,V536 ,V535 ,V534 ,V533;
#define VMS55
#define VMV55
#define VMR55(VMT55) return(VMT55);
static object LI59();
#define VMB56 register object *base=vs_top; object  V546;
#define VMS56  register object *sup=vs_top+7;vs_top=sup;
#define VMV56 vs_check;
#define VMR56(VMT56) vs_top=base ; return(VMT56);
static object LI60();
#define VMB57 register object *base=vs_top; object  V559;
#define VMS57  register object *sup=vs_top+8;vs_top=sup;
#define VMV57 vs_check;
#define VMR57(VMT57) vs_top=base ; return(VMT57);
static object LI61();
#define VMB58 register object *base=vs_top; object  V592 ,V591 ,V586;
#define VMS58  register object *sup=vs_top+8;vs_top=sup;
#define VMV58 vs_check;
#define VMR58(VMT58) vs_top=base ; return(VMT58);
static object LI62();
#define VMB59 register object *base=vs_top; object  V609 ,V608 ,V607 ,V606 ,V602;
#define VMS59 vs_top += 2;
#define VMV59 vs_check;
#define VMR59(VMT59) vs_top=base ; return(VMT59);
static object LI63();
#define VMB60 object  V618 ,V617;
#define VMS60
#define VMV60
#define VMR60(VMT60) return(VMT60);
static object LI64();
#define VMB61 register object *base=vs_top; object  V628 ,V627;
#define VMS61  register object *sup=vs_top+3;vs_top=sup;
#define VMV61 vs_check;
#define VMR61(VMT61) vs_top=base ; return(VMT61);
static object LI65();
#define VMB62 register object *base=vs_top; object  V648 ,V646 ,V645 ,V644;
#define VMS62  register object *sup=vs_top+4;vs_top=sup;
#define VMV62 vs_check;
#define VMR62(VMT62) vs_top=base ; return(VMT62);
static object LI68();
#define VMB63 register object *base=vs_top; object  V674 ,V673 ,V672 ,V670 ,V669 ,V668 ,V667 ,V657 ,V656;
#define VMS63  register object *sup=vs_top+5;vs_top=sup;
#define VMV63 vs_check;
#define VMR63(VMT63) vs_top=base ; return(VMT63);
static object LI72();
#define VMB64 register object *base=vs_top; object  V700 ,V698 ,V697 ,V696 ,V695 ,V685 ,V684 ,V683 ,V682;
#define VMS64  register object *sup=vs_top+5;vs_top=sup;
#define VMV64 vs_check;
#define VMR64(VMT64) vs_top=base ; return(VMT64);
static object LI76();
#define VMB65 register object *base=vs_top; object  V725 ,V724 ,V723 ,V722 ,V721 ,V720 ,V719 ,V718 ,V717;
#define VMS65  register object *sup=vs_top+5;vs_top=sup;
#define VMV65 vs_check;
#define VMR65(VMT65) vs_top=base ; return(VMT65);
static object LI78();
#define VMB66 register object *base=vs_top; object  V738 ,V737 ,V736;
#define VMS66  register object *sup=vs_top+3;vs_top=sup;
#define VMV66 vs_check;
#define VMR66(VMT66) vs_top=base ; return(VMT66);
static void L77();
#define VC67 object  V742 ,V741;
static void L73();
#define VC68 object  V745 ,V744;
static void L69();
#define VC69 object  V752 ,V751 ,V750 ,V749 ,V748;
static void LC84();
#define VC70
static void LC83();
#define VC71
static void LC82();
#define VC72
static void LC81();
#define VC73 object  V769;
static void LC80();
#define VC74
static void LC79();
#define VC75
static void LC84();
static void LC83();
static void LC82();
static void LC81();
static void LC80();
static void LC79();
#define VM75 4
#define VM74 4
#define VM73 6
#define VM72 3
#define VM71 2
#define VM70 3
#define VM69 4
#define VM68 2
#define VM67 2
#define VM66 3
#define VM65 5
#define VM64 5
#define VM63 5
#define VM62 4
#define VM61 3
#define VM60 0
#define VM59 2
#define VM58 8
#define VM57 8
#define VM56 7
#define VM55 0
#define VM54 3
#define VM53 12
#define VM52 8
#define VM51 6
#define VM50 9
#define VM49 8
#define VM48 6
#define VM47 8
#define VM46 0
#define VM45 0
#define VM44 0
#define VM43 0
#define VM42 0
#define VM41 0
#define VM40 3
#define VM39 2
#define VM38 13
#define VM37 0
#define VM36 0
#define VM35 0
#define VM34 0
#define VM33 3
#define VM32 1
#define VM31 0
#define VM30 3
#define VM29 8
#define VM28 8
#define VM27 6
#define VM26 5
#define VM25 0
#define VM24 2
#define VM23 5
#define VM22 4
#define VM21 1
#define VM20 0
#define VM19 2
#define VM18 4
#define VM17 4
#define VM16 3
#define VM15 2
#define VM14 0
#define VM13 0
#define VM12 0
#define VM11 0
#define VM10 0
#define VM9 0
#define VM8 7
#define VM7 1
#define VM6 7
#define VM5 0
#define VM4 0
#define VM3 2
#define VM2 8
#define VM1 1
static char * VVi[119]={
#define Cdata VV[118]
(char *)(LI1),
(char *)(L2),
(char *)(LI3),
(char *)(LI4),
(char *)(LI5),
(char *)(L6),
(char *)(LI7),
(char *)(L8),
(char *)(LI9),
(char *)(LI10),
(char *)(&LI10key),
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
(char *)(L22),
(char *)(L23),
(char *)(LI24),
(char *)(LI25),
(char *)(L26),
(char *)(L27),
(char *)(L28),
(char *)(L29),
(char *)(LI30),
(char *)(LI31),
(char *)(LI32),
(char *)(LI33),
(char *)(LI34),
(char *)(LI35),
(char *)(LI36),
(char *)(LI37),
(char *)(L38),
(char *)(LI39),
(char *)(LI40),
(char *)(LI41),
(char *)(LI42),
(char *)(LI43),
(char *)(LI44),
(char *)(LI45),
(char *)(LI46),
(char *)(LI47),
(char *)(LI48),
(char *)(LI50),
(char *)(LI51),
(char *)(L52),
(char *)(LI54),
(char *)(LI56),
(char *)(LI57),
(char *)(LI58),
(char *)(LI59),
(char *)(LI60),
(char *)(LI61),
(char *)(LI62),
(char *)(LI63),
(char *)(LI64),
(char *)(LI65),
(char *)(LI68),
(char *)(LI72),
(char *)(LI76),
(char *)(LI78),
(char *)(&LC79),
(char *)(&LC80)
};
#define VV ((object *)VVi)
static object  LnkTLI117(object,...);
static object  (*LnkLI117)() = (object (*)()) LnkTLI117;
static object  LnkTLI116(object,...);
static object  (*LnkLI116)() = (object (*)()) LnkTLI116;
static object  LnkTLI113(object,...);
static object  (*LnkLI113)() = (object (*)()) LnkTLI113;
static object  LnkTLI112(object,...);
static object  (*LnkLI112)() = (object (*)()) LnkTLI112;
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
static object  LnkTLI105(object,...);
static object  (*LnkLI105)() = (object (*)()) LnkTLI105;
static object  LnkTLI104(object,...);
static object  (*LnkLI104)() = (object (*)()) LnkTLI104;
static object  LnkTLI103(object,...);
static object  (*LnkLI103)() = (object (*)()) LnkTLI103;
static void LnkT102();
static void (*Lnk102)() = LnkT102;
static object  LnkTLI101(object,...);
static object  (*LnkLI101)() = (object (*)()) LnkTLI101;
static void LnkT100();
static void (*Lnk100)() = LnkT100;
static object  LnkTLI99(object,...);
static object  (*LnkLI99)() = (object (*)()) LnkTLI99;
static object  LnkTLI98(object,...);
static object  (*LnkLI98)() = (object (*)()) LnkTLI98;
static object  LnkTLI97(object,...);
static object  (*LnkLI97)() = (object (*)()) LnkTLI97;
static object  LnkTLI96(object,...);
static object  (*LnkLI96)() = (object (*)()) LnkTLI96;
static object  LnkTLI94(object,...);
static object  (*LnkLI94)() = (object (*)()) LnkTLI94;
static object  LnkTLI87(object,...);
static object  (*LnkLI87)() = (object (*)()) LnkTLI87;
static object  LnkTLI86(object,...);
static object  (*LnkLI86)() = (object (*)()) LnkTLI86;
static object  LnkTLI85(object,...);
static object  (*LnkLI85)() = (object (*)()) LnkTLI85;
static object  LnkTLI84(object,...);
static object  (*LnkLI84)() = (object (*)()) LnkTLI84;
static object  LnkTLI83(object,...);
static object  (*LnkLI83)() = (object (*)()) LnkTLI83;
static void LnkT81();
static void (*Lnk81)() = LnkT81;
static object  LnkTLI22(object,...);
static object  (*LnkLI22)() = (object (*)()) LnkTLI22;
static object  LnkTLI2(object,...);
static object  (*LnkLI2)() = (object (*)()) LnkTLI2;
static void LnkT79();
static void (*Lnk79)() = LnkT79;
static object  LnkTLI78(object,...);
static object  (*LnkLI78)() = (object (*)()) LnkTLI78;
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
static object  LnkTLI70(object,...);
static object  (*LnkLI70)() = (object (*)()) LnkTLI70;
