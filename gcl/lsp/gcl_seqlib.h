
static void L8();
static void L39();
static void L40();
static void L43();
static void L45();
static void L46();
static object LI1();
#define VMB1 register object *base=vs_top; object  V6;
#define VMS1  register object *sup=vs_top+2;vs_top=sup;
#define VMV1 vs_reserve(2);
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top; object  V18;
#define VMS2  register object *sup=vs_top+2;vs_top=sup;
#define VMV2 vs_reserve(2);
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top;
#define VMS3  register object *sup=vs_top+1;vs_top=sup;
#define VMV3 vs_reserve(1);
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top;
#define VMS4  register object *sup=vs_top+1;vs_top=sup;
#define VMV4 vs_reserve(1);
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5(object,object,...);
#define VMB5 register object *base=vs_top;
#define VMS5  register object *sup=vs_top+3;vs_top=sup;
#define VMV5 vs_reserve(3);
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6();
#define VMB6
#define VMS6
#define VMV6
#define VMR6(VMT6) return(VMT6);
static object LI7();
#define VMB7
#define VMS7
#define VMV7
#define VMR7(VMT7) return(VMT7);
#define VC8 object  V62 ,V60 ,V58 ,V56 ,V55 ,V54;
static object LI9(object,object,object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[2];} LI9key={2,0,Cstd_key_defaults,{(void *)15,(void *)14}};
#define VMB9 object  V72 ,V71; object Vcs[6];
#define VMS9
#define VMV9
#define VMR9(VMT9) return(VMT9);
static object LI10(object,object,object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[4];} LI10key={4,0,Cstd_key_defaults,{(void *)38,(void *)39,(void *)40,(void *)41}};
#define VMB10 object  V102 ,V96 ,V90 ,V89 ,V86 ,V85; object Vcs[10];
#define VMS10
#define VMV10
#define VMR10(VMT10) return(VMT10);
static object LI11(object,object,object,...);
static object VK11defaults[7]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[7];} LI11key={7,0,VK11defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)13,(void *)12,(void *)11}};
#define VMB11 register object *base=vs_top; object  V139 ,V138 ,V137 ,V135 ,V134 ,V133 ,V129 ,V127 ,V126 ,V117 ,V116; object Vcs[16];
#define VMS11  register object *sup=vs_top+2;vs_top=sup;
#define VMV11 vs_reserve(2);
#define VMR11(VMT11) vs_top=base ; return(VMT11);
static object LI12(object,object,object,...);
static object VK12defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI12key={5,0,VK12defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)11}};
#define VMB12 object  V150; object Vcs[12];
#define VMS12
#define VMV12
#define VMR12(VMT12) return(VMT12);
static object LI13(object,object,object,...);
static object VK13defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI13key={5,0,VK13defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)11}};
#define VMB13 object  V161; object Vcs[12];
#define VMS13
#define VMV13
#define VMR13(VMT13) return(VMT13);
static object LI14(object,object,object,...);
static object VK14defaults[7]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[7];} LI14key={7,0,VK14defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)13,(void *)12,(void *)11}};
#define VMB14 register object *base=vs_top; object  V228 ,V227 ,V226 ,V225; long  V223; object  V222; long  V221; object  V220 ,V215 ,V214 ,V213 ,V212 ,V211 ,V210 ,V208 ,V207 ,V206 ,V205 ,V203; long  V202; object  V201 ,V196 ,V195 ,V194 ,V193 ,V192 ,V191 ,V189 ,V187 ,V186 ,V178 ,V177; object Vcs[16];
#define VMS14  register object *sup=vs_top+2;vs_top=sup;
#define VMV14 vs_reserve(2);
#define VMR14(VMT14) vs_top=base ; return(VMT14);
static object LI15(object,object,object,...);
static object VK15defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI15key={5,0,VK15defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)11}};
#define VMB15 object  V238; object Vcs[12];
#define VMS15
#define VMV15
#define VMR15(VMT15) return(VMT15);
static object LI16(object,object,object,...);
static object VK16defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI16key={5,0,VK16defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)11}};
#define VMB16 object  V249; object Vcs[12];
#define VMS16
#define VMV16
#define VMR16(VMT16) return(VMT16);
static object LI17(object,object,object,...);
static object VK17defaults[6]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[6];} LI17key={6,0,VK17defaults,{(void *)17,(void *)15,(void *)14,(void *)13,(void *)12,(void *)11}};
#define VMB17 register object *base=vs_top; object  V272 ,V268 ,V264 ,V263; object Vcs[14];
#define VMS17  register object *sup=vs_top+1;vs_top=sup;
#define VMV17 vs_reserve(1);
#define VMR17(VMT17) vs_top=base ; return(VMT17);
static object LI18(object,object,object,...);
static object VK18defaults[4]={(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[4];} LI18key={4,0,VK18defaults,{(void *)17,(void *)15,(void *)14,(void *)11}};
#define VMB18 object  V281; object Vcs[10];
#define VMS18
#define VMV18
#define VMR18(VMT18) return(VMT18);
static object LI19(object,object,object,...);
static object VK19defaults[4]={(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[4];} LI19key={4,0,VK19defaults,{(void *)17,(void *)15,(void *)14,(void *)11}};
#define VMB19 object  V291; object Vcs[10];
#define VMS19
#define VMV19
#define VMR19(VMT19) return(VMT19);
static object LI20(object,object,object,...);
static object VK20defaults[7]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[7];} LI20key={7,0,VK20defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)13,(void *)12,(void *)11}};
#define VMB20 register object *base=vs_top; object  V320 ,V319 ,V318 ,V314 ,V313 ,V312 ,V307 ,V306; object Vcs[16];
#define VMS20  register object *sup=vs_top+1;vs_top=sup;
#define VMV20 vs_reserve(1);
#define VMR20(VMT20) vs_top=base ; return(VMT20);
static object LI21(object,object,object,...);
static object VK21defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI21key={5,0,VK21defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)11}};
#define VMB21 object  V330; object Vcs[12];
#define VMS21
#define VMV21
#define VMR21(VMT21) return(VMT21);
static object LI22(object,object,object,...);
static object VK22defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI22key={5,0,VK22defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)11}};
#define VMB22 object  V341; object Vcs[12];
#define VMS22
#define VMV22
#define VMR22(VMT22) return(VMT22);
static object LI23(object,object,object,object,...);
static object VK23defaults[7]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[7];} LI23key={7,0,VK23defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)13,(void *)12,(void *)11}};
#define VMB23 register object *base=vs_top; object  V381 ,V380 ,V379 ,V378 ,V376 ,V375 ,V371 ,V370 ,V369 ,V368 ,V366 ,V365 ,V360 ,V359; object Vcs[17];
#define VMS23  register object *sup=vs_top+1;vs_top=sup;
#define VMV23 vs_reserve(1);
#define VMR23(VMT23) vs_top=base ; return(VMT23);
static object LI24(object,object,object,object,...);
static object VK24defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI24key={5,0,VK24defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)11}};
#define VMB24 object  V393; object Vcs[13];
#define VMS24
#define VMV24
#define VMR24(VMT24) return(VMT24);
static object LI25(object,object,object,object,...);
static object VK25defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI25key={5,0,VK25defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)11}};
#define VMB25 object  V406; object Vcs[13];
#define VMS25
#define VMV25
#define VMR25(VMT25) return(VMT25);
static object LI26(object,object,object,object,...);
static object VK26defaults[7]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[7];} LI26key={7,0,VK26defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)13,(void *)12,(void *)11}};
#define VMB26 register object *base=vs_top; object  V437 ,V436 ,V435 ,V431 ,V430 ,V429 ,V424 ,V423; object Vcs[17];
#define VMS26  register object *sup=vs_top+1;vs_top=sup;
#define VMV26 vs_reserve(1);
#define VMR26(VMT26) vs_top=base ; return(VMT26);
static object LI27(object,object,object,object,...);
static object VK27defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI27key={5,0,VK27defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)11}};
#define VMB27 object  V449; object Vcs[13];
#define VMS27
#define VMV27
#define VMR27(VMT27) return(VMT27);
static object LI28(object,object,object,object,...);
static object VK28defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI28key={5,0,VK28defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)11}};
#define VMB28 object  V462; object Vcs[13];
#define VMS28
#define VMV28
#define VMR28(VMT28) return(VMT28);
static object LI29(object,object,object,...);
static object VK29defaults[6]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[6];} LI29key={6,0,VK29defaults,{(void *)17,(void *)15,(void *)14,(void *)13,(void *)12,(void *)11}};
#define VMB29 register object *base=vs_top; object  V484 ,V480 ,V477 ,V476; object Vcs[14];
#define VMS29  register object *sup=vs_top+1;vs_top=sup;
#define VMV29 vs_reserve(1);
#define VMR29(VMT29) vs_top=base ; return(VMT29);
static object LI30(object,object,object,...);
static object VK30defaults[4]={(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[4];} LI30key={4,0,VK30defaults,{(void *)17,(void *)15,(void *)14,(void *)11}};
#define VMB30 object  V494; object Vcs[10];
#define VMS30
#define VMV30
#define VMR30(VMT30) return(VMT30);
static object LI31(object,object,object,...);
static object VK31defaults[4]={(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[4];} LI31key={4,0,VK31defaults,{(void *)17,(void *)15,(void *)14,(void *)11}};
#define VMB31 object  V504; object Vcs[10];
#define VMS31
#define VMV31
#define VMR31(VMT31) return(VMT31);
static object LI32(object,object,object,...);
static object VK32defaults[6]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[6];} LI32key={6,0,VK32defaults,{(void *)17,(void *)15,(void *)14,(void *)13,(void *)12,(void *)11}};
#define VMB32 register object *base=vs_top; object  V526 ,V522 ,V519 ,V518; object Vcs[14];
#define VMS32  register object *sup=vs_top+1;vs_top=sup;
#define VMV32 vs_reserve(1);
#define VMR32(VMT32) vs_top=base ; return(VMT32);
static object LI33(object,object,object,...);
static object VK33defaults[4]={(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[4];} LI33key={4,0,VK33defaults,{(void *)17,(void *)15,(void *)14,(void *)11}};
#define VMB33 object  V536; object Vcs[10];
#define VMS33
#define VMV33
#define VMR33(VMT33) return(VMT33);
static object LI34(object,object,object,...);
static object VK34defaults[4]={(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[4];} LI34key={4,0,VK34defaults,{(void *)17,(void *)15,(void *)14,(void *)11}};
#define VMB34 object  V546; object Vcs[10];
#define VMS34
#define VMV34
#define VMR34(VMT34) return(VMT34);
static object LI35(object,object,...);
static object VK35defaults[6]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[6];} LI35key={6,0,VK35defaults,{(void *)17,(void *)15,(void *)14,(void *)13,(void *)12,(void *)11}};
#define VMB35 register object *base=vs_top; object Vcs[13];
#define VMS35  register object *sup=vs_top+8;vs_top=sup;
#define VMV35 vs_reserve(8);
#define VMR35(VMT35) vs_top=base ; return(VMT35);
static object LI36(object,object,...);
static object VK36defaults[6]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[6];} LI36key={6,0,VK36defaults,{(void *)17,(void *)15,(void *)14,(void *)13,(void *)12,(void *)11}};
#define VMB36 register object *base=vs_top; object  V608 ,V607 ,V606 ,V605 ,V604 ,V603 ,V602 ,V599 ,V598 ,V592 ,V591 ,V590 ,V589 ,V588 ,V587 ,V586 ,V583 ,V582 ,V576 ,V575; object Vcs[13];
#define VMS36  register object *sup=vs_top+8;vs_top=sup;
#define VMV36 vs_reserve(8);
#define VMR36(VMT36) vs_top=base ; return(VMT36);
static object LI37(object,object,object,...);
static object VK37defaults[8]={(void *)-2,(void *)-2,(void *)-2,(void *)-1,(void *)-2,(void *)-2,(void *)-2,(void *)-2};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[8];} LI37key={8,0,VK37defaults,{(void *)38,(void *)40,(void *)39,(void *)41,(void *)17,(void *)13,(void *)12,(void *)11}};
#define VMB37 register object *base=vs_top; object  V641 ,V640 ,V634 ,V633 ,V628 ,V627 ,V624 ,V623; object Vcs[18];
#define VMS37  register object *sup=vs_top+1;vs_top=sup;
#define VMV37 vs_reserve(1);
#define VMR37(VMT37) vs_top=base ; return(VMT37);
static object LI38(object,object,object,...);
static object VK38defaults[8]={(void *)-2,(void *)-2,(void *)-2,(void *)-1,(void *)-2,(void *)-2,(void *)-2,(void *)-2};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[8];} LI38key={8,0,VK38defaults,{(void *)38,(void *)40,(void *)39,(void *)41,(void *)17,(void *)13,(void *)12,(void *)11}};
#define VMB38 register object *base=vs_top; object  V674 ,V673 ,V668 ,V667 ,V662 ,V661 ,V658 ,V657; object Vcs[18];
#define VMS38  register object *sup=vs_top+1;vs_top=sup;
#define VMV38 vs_reserve(1);
#define VMR38(VMT38) vs_top=base ; return(VMT38);
#define VC39
#define VC40
static object LI42();
#define VMB41 register object *base=vs_top; object  V696 ,V695;
#define VMS41  register object *sup=vs_top+4;vs_top=sup;
#define VMV41 vs_reserve(4);
#define VMR41(VMT41) vs_top=base ; return(VMT41);
#define VC42 object  V701 ,V700;
static object LI44(object,object,object,object,object,...);
static object VK44defaults[1]={(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[1];} LI44key={1,0,VK44defaults,{(void *)17}};
#define VMB43 register object *base=vs_top; object  V723 ,V722 ,V721 ,V720 ,V719 ,V717; object Vcs[6];
#define VMS43  register object *sup=vs_top+3;vs_top=sup;
#define VMV43 vs_reserve(3);
#define VMR43(VMT43) vs_top=base ; return(VMT43);
#define VC44 object  V733;
#define VC45 object  V746 ,V745 ,V744 ,V743 ,V742;
static void L41();
#define VC46
#define VM46 3
#define VM45 6
#define VM44 6
#define VM43 3
#define VM42 8
#define VM41 4
#define VM40 4
#define VM39 7
#define VM38 1
#define VM37 1
#define VM36 8
#define VM35 8
#define VM34 0
#define VM33 0
#define VM32 1
#define VM31 0
#define VM30 0
#define VM29 1
#define VM28 0
#define VM27 0
#define VM26 1
#define VM25 0
#define VM24 0
#define VM23 1
#define VM22 0
#define VM21 0
#define VM20 1
#define VM19 0
#define VM18 0
#define VM17 1
#define VM16 0
#define VM15 0
#define VM14 2
#define VM13 0
#define VM12 0
#define VM11 2
#define VM10 0
#define VM9 0
#define VM8 13
#define VM7 0
#define VM6 0
#define VM5 3
#define VM4 1
#define VM3 1
#define VM2 2
#define VM1 2
static char * VVi[76]={
#define Cdata VV[75]
(char *)(LI1),
(char *)(LI2),
(char *)(LI3),
(char *)(LI4),
(char *)(LI5),
(char *)(LI6),
(char *)(LI7),
(char *)(L8),
(char *)(LI9),
(char *)(&LI9key),
(char *)(LI10),
(char *)(&LI10key),
(char *)(LI11),
(char *)(&LI11key),
(char *)(LI12),
(char *)(&LI12key),
(char *)(LI13),
(char *)(&LI13key),
(char *)(LI14),
(char *)(&LI14key),
(char *)(LI15),
(char *)(&LI15key),
(char *)(LI16),
(char *)(&LI16key),
(char *)(LI17),
(char *)(&LI17key),
(char *)(LI18),
(char *)(&LI18key),
(char *)(LI19),
(char *)(&LI19key),
(char *)(LI20),
(char *)(&LI20key),
(char *)(LI21),
(char *)(&LI21key),
(char *)(LI22),
(char *)(&LI22key),
(char *)(LI23),
(char *)(&LI23key),
(char *)(LI24),
(char *)(&LI24key),
(char *)(LI25),
(char *)(&LI25key),
(char *)(LI26),
(char *)(&LI26key),
(char *)(LI27),
(char *)(&LI27key),
(char *)(LI28),
(char *)(&LI28key),
(char *)(LI29),
(char *)(&LI29key),
(char *)(LI30),
(char *)(&LI30key),
(char *)(LI31),
(char *)(&LI31key),
(char *)(LI32),
(char *)(&LI32key),
(char *)(LI33),
(char *)(&LI33key),
(char *)(LI34),
(char *)(&LI34key),
(char *)(LI35),
(char *)(&LI35key),
(char *)(LI36),
(char *)(&LI36key),
(char *)(LI37),
(char *)(&LI37key),
(char *)(LI38),
(char *)(&LI38key),
(char *)(L39),
(char *)(L40),
(char *)(LI42),
(char *)(L43),
(char *)(LI44),
(char *)(&LI44key),
(char *)(L45),
(char *)(L46)
};
#define VV ((object *)VVi)
static void LnkT62();
static void (*Lnk62)() = LnkT62;
static void LnkT61();
static void (*Lnk61)() = LnkT61;
static object  LnkTLI60(object,...);
static object  (*LnkLI60)() = (object (*)()) LnkTLI60;
static void LnkT59();
static void (*Lnk59)() = LnkT59;
static object  LnkTLI58(object,...);
static object  (*LnkLI58)() = (object (*)()) LnkTLI58;
static void LnkT57();
static void (*Lnk57)() = LnkT57;
static object  LnkTLI56(object,...);
static object  (*LnkLI56)() = (object (*)()) LnkTLI56;
static void LnkT55();
static void (*Lnk55)() = LnkT55;
static object  LnkTLI54(object,...);
static object  (*LnkLI54)() = (object (*)()) LnkTLI54;
static object  LnkTLI53(object,...);
static object  (*LnkLI53)() = (object (*)()) LnkTLI53;
static object  LnkTLI52(object,...);
static object  (*LnkLI52)() = (object (*)()) LnkTLI52;
static object  LnkTLI51(object,...);
static object  (*LnkLI51)() = (object (*)()) LnkTLI51;
static object  LnkTLI50(object,...);
static object  (*LnkLI50)() = (object (*)()) LnkTLI50;
static object  LnkTLI49(object,...);
static object  (*LnkLI49)() = (object (*)()) LnkTLI49;
static object  LnkTLI48(object,...);
static object  (*LnkLI48)() = (object (*)()) LnkTLI48;
static object  LnkTLI47(object,...);
static object  (*LnkLI47)() = (object (*)()) LnkTLI47;
static object  LnkTLI45(object,...);
static object  (*LnkLI45)() = (object (*)()) LnkTLI45;
static object  LnkTLI44(object,...);
static object  (*LnkLI44)() = (object (*)()) LnkTLI44;
static object  LnkTLI43(object,...);
static object  (*LnkLI43)() = (object (*)()) LnkTLI43;
static object  LnkTLI42();
static object  (*LnkLI42)() = LnkTLI42;
static object  LnkTLI37(object,...);
static object  (*LnkLI37)() = (object (*)()) LnkTLI37;
static object  LnkTLI36(object,...);
static object  (*LnkLI36)() = (object (*)()) LnkTLI36;
static object  LnkTLI33(object,...);
static object  (*LnkLI33)() = (object (*)()) LnkTLI33;
static void LnkT32();
static void (*Lnk32)() = LnkT32;
