
static object LI5();
static void L8();
static object LI9();
static object LI10();
static object LI11();
static object LI12();
static object LI13();
static object LI14();
static object LI15();
static object LI16();
static object LI17();
static object LI18();
static object LI19();
static object LI20();
static object LI21();
static object LI22();
static object LI23();
static object LI24();
static object LI25();
static object LI26();
static object LI27();
static object LI28();
static object LI29();
static object LI30();
static object LI31();
static object LI32();
static object LI33();
static object LI34();
static object LI35();
static object LI36();
static object LI37();
static object LI38();
static void L39();
static void L40();
static void L43();
static object LI44();
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
static object LI5();
#define VMB5 register object *base=vs_top; object Vcs[2];
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
static object LI9();
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[2];} LI9key={2,0,Cstd_key_defaults,{(void *)15,(void *)14}};
#define VMB9 object  V72 ,V71; object Vcs[6];
#define VMS9
#define VMV9
#define VMR9(VMT9) return(VMT9);
static object LI10();
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[4];} LI10key={4,0,Cstd_key_defaults,{(void *)38,(void *)39,(void *)40,(void *)41}};
#define VMB10 object  V102 ,V96 ,V90 ,V89 ,V86 ,V85; object Vcs[10];
#define VMS10
#define VMV10
#define VMR10(VMT10) return(VMT10);
static object LI11();
static object VK11defaults[7]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[7];} LI11key={7,0,VK11defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)13,(void *)12,(void *)11}};
#define VMB11 register object *base=vs_top; object  V137 ,V136 ,V135 ,V133 ,V132 ,V131 ,V127 ,V117 ,V116; object Vcs[16];
#define VMS11  register object *sup=vs_top+2;vs_top=sup;
#define VMV11 vs_reserve(2);
#define VMR11(VMT11) vs_top=base ; return(VMT11);
static object LI12();
static object VK12defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI12key={5,0,VK12defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)11}};
#define VMB12 object  V148; object Vcs[12];
#define VMS12
#define VMV12
#define VMR12(VMT12) return(VMT12);
static object LI13();
static object VK13defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI13key={5,0,VK13defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)11}};
#define VMB13 object  V159; object Vcs[12];
#define VMS13
#define VMV13
#define VMR13(VMT13) return(VMT13);
static object LI14();
static object VK14defaults[7]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[7];} LI14key={7,0,VK14defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)13,(void *)12,(void *)11}};
#define VMB14 register object *base=vs_top; object  V211 ,V210 ,V208 ,V207 ,V202 ,V201 ,V200 ,V198 ,V197 ,V195 ,V194 ,V189 ,V188 ,V187 ,V185 ,V176 ,V175; object Vcs[16];
#define VMS14  register object *sup=vs_top+2;vs_top=sup;
#define VMV14 vs_reserve(2);
#define VMR14(VMT14) vs_top=base ; return(VMT14);
static object LI15();
static object VK15defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI15key={5,0,VK15defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)11}};
#define VMB15 object  V221; object Vcs[12];
#define VMS15
#define VMV15
#define VMR15(VMT15) return(VMT15);
static object LI16();
static object VK16defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI16key={5,0,VK16defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)11}};
#define VMB16 object  V232; object Vcs[12];
#define VMS16
#define VMV16
#define VMR16(VMT16) return(VMT16);
static object LI17();
static object VK17defaults[6]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[6];} LI17key={6,0,VK17defaults,{(void *)17,(void *)15,(void *)14,(void *)13,(void *)12,(void *)11}};
#define VMB17 register object *base=vs_top; object  V255 ,V251 ,V247 ,V246; object Vcs[14];
#define VMS17  register object *sup=vs_top+1;vs_top=sup;
#define VMV17 vs_reserve(1);
#define VMR17(VMT17) vs_top=base ; return(VMT17);
static object LI18();
static object VK18defaults[4]={(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[4];} LI18key={4,0,VK18defaults,{(void *)17,(void *)15,(void *)14,(void *)11}};
#define VMB18 object  V264; object Vcs[10];
#define VMS18
#define VMV18
#define VMR18(VMT18) return(VMT18);
static object LI19();
static object VK19defaults[4]={(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[4];} LI19key={4,0,VK19defaults,{(void *)17,(void *)15,(void *)14,(void *)11}};
#define VMB19 object  V274; object Vcs[10];
#define VMS19
#define VMV19
#define VMR19(VMT19) return(VMT19);
static object LI20();
static object VK20defaults[7]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[7];} LI20key={7,0,VK20defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)13,(void *)12,(void *)11}};
#define VMB20 register object *base=vs_top; object  V299 ,V295 ,V290 ,V289; object Vcs[16];
#define VMS20  register object *sup=vs_top+1;vs_top=sup;
#define VMV20 vs_reserve(1);
#define VMR20(VMT20) vs_top=base ; return(VMT20);
static object LI21();
static object VK21defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI21key={5,0,VK21defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)11}};
#define VMB21 object  V309; object Vcs[12];
#define VMS21
#define VMV21
#define VMR21(VMT21) return(VMT21);
static object LI22();
static object VK22defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI22key={5,0,VK22defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)11}};
#define VMB22 object  V320; object Vcs[12];
#define VMS22
#define VMV22
#define VMR22(VMT22) return(VMT22);
static object LI23();
static object VK23defaults[7]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[7];} LI23key={7,0,VK23defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)13,(void *)12,(void *)11}};
#define VMB23 register object *base=vs_top; object  V356 ,V355 ,V353 ,V352 ,V348 ,V347 ,V345 ,V344 ,V339 ,V338; object Vcs[17];
#define VMS23  register object *sup=vs_top+1;vs_top=sup;
#define VMV23 vs_reserve(1);
#define VMR23(VMT23) vs_top=base ; return(VMT23);
static object LI24();
static object VK24defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI24key={5,0,VK24defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)11}};
#define VMB24 object  V368; object Vcs[13];
#define VMS24
#define VMV24
#define VMR24(VMT24) return(VMT24);
static object LI25();
static object VK25defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI25key={5,0,VK25defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)11}};
#define VMB25 object  V381; object Vcs[13];
#define VMS25
#define VMV25
#define VMR25(VMT25) return(VMT25);
static object LI26();
static object VK26defaults[7]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[7];} LI26key={7,0,VK26defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)13,(void *)12,(void *)11}};
#define VMB26 register object *base=vs_top; object  V408 ,V404 ,V399 ,V398; object Vcs[17];
#define VMS26  register object *sup=vs_top+1;vs_top=sup;
#define VMV26 vs_reserve(1);
#define VMR26(VMT26) vs_top=base ; return(VMT26);
static object LI27();
static object VK27defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI27key={5,0,VK27defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)11}};
#define VMB27 object  V420; object Vcs[13];
#define VMS27
#define VMV27
#define VMR27(VMT27) return(VMT27);
static object LI28();
static object VK28defaults[5]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI28key={5,0,VK28defaults,{(void *)17,(void *)16,(void *)15,(void *)14,(void *)11}};
#define VMB28 object  V433; object Vcs[13];
#define VMS28
#define VMV28
#define VMR28(VMT28) return(VMT28);
static object LI29();
static object VK29defaults[6]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[6];} LI29key={6,0,VK29defaults,{(void *)17,(void *)15,(void *)14,(void *)13,(void *)12,(void *)11}};
#define VMB29 register object *base=vs_top; object  V455 ,V451 ,V448 ,V447; object Vcs[14];
#define VMS29  register object *sup=vs_top+1;vs_top=sup;
#define VMV29 vs_reserve(1);
#define VMR29(VMT29) vs_top=base ; return(VMT29);
static object LI30();
static object VK30defaults[4]={(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[4];} LI30key={4,0,VK30defaults,{(void *)17,(void *)15,(void *)14,(void *)11}};
#define VMB30 object  V465; object Vcs[10];
#define VMS30
#define VMV30
#define VMR30(VMT30) return(VMT30);
static object LI31();
static object VK31defaults[4]={(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[4];} LI31key={4,0,VK31defaults,{(void *)17,(void *)15,(void *)14,(void *)11}};
#define VMB31 object  V475; object Vcs[10];
#define VMS31
#define VMV31
#define VMR31(VMT31) return(VMT31);
static object LI32();
static object VK32defaults[6]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[6];} LI32key={6,0,VK32defaults,{(void *)17,(void *)15,(void *)14,(void *)13,(void *)12,(void *)11}};
#define VMB32 register object *base=vs_top; object  V497 ,V493 ,V490 ,V489; object Vcs[14];
#define VMS32  register object *sup=vs_top+1;vs_top=sup;
#define VMV32 vs_reserve(1);
#define VMR32(VMT32) vs_top=base ; return(VMT32);
static object LI33();
static object VK33defaults[4]={(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[4];} LI33key={4,0,VK33defaults,{(void *)17,(void *)15,(void *)14,(void *)11}};
#define VMB33 object  V507; object Vcs[10];
#define VMS33
#define VMV33
#define VMR33(VMT33) return(VMT33);
static object LI34();
static object VK34defaults[4]={(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[4];} LI34key={4,0,VK34defaults,{(void *)17,(void *)15,(void *)14,(void *)11}};
#define VMB34 object  V517; object Vcs[10];
#define VMS34
#define VMV34
#define VMR34(VMT34) return(VMT34);
static object LI35();
static object VK35defaults[6]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[6];} LI35key={6,0,VK35defaults,{(void *)17,(void *)15,(void *)14,(void *)13,(void *)12,(void *)11}};
#define VMB35 register object *base=vs_top; object Vcs[13];
#define VMS35  register object *sup=vs_top+8;vs_top=sup;
#define VMV35 vs_reserve(8);
#define VMR35(VMT35) vs_top=base ; return(VMT35);
static object LI36();
static object VK36defaults[6]={(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[6];} LI36key={6,0,VK36defaults,{(void *)17,(void *)15,(void *)14,(void *)13,(void *)12,(void *)11}};
#define VMB36 register object *base=vs_top; object  V579 ,V578 ,V577 ,V576 ,V575 ,V574 ,V573 ,V570 ,V569 ,V563 ,V562 ,V561 ,V560 ,V559 ,V558 ,V557 ,V554 ,V553 ,V547 ,V546; object Vcs[13];
#define VMS36  register object *sup=vs_top+8;vs_top=sup;
#define VMV36 vs_reserve(8);
#define VMR36(VMT36) vs_top=base ; return(VMT36);
static object LI37();
static object VK37defaults[8]={(void *)-2,(void *)-2,(void *)-2,(void *)-1,(void *)-2,(void *)-2,(void *)-2,(void *)-2};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[8];} LI37key={8,0,VK37defaults,{(void *)38,(void *)40,(void *)39,(void *)41,(void *)17,(void *)13,(void *)12,(void *)11}};
#define VMB37 register object *base=vs_top; object  V612 ,V611 ,V605 ,V604 ,V599 ,V598 ,V595 ,V594; object Vcs[18];
#define VMS37  register object *sup=vs_top+1;vs_top=sup;
#define VMV37 vs_reserve(1);
#define VMR37(VMT37) vs_top=base ; return(VMT37);
static object LI38();
static object VK38defaults[8]={(void *)-2,(void *)-2,(void *)-2,(void *)-1,(void *)-2,(void *)-2,(void *)-2,(void *)-2};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[8];} LI38key={8,0,VK38defaults,{(void *)38,(void *)40,(void *)39,(void *)41,(void *)17,(void *)13,(void *)12,(void *)11}};
#define VMB38 register object *base=vs_top; object  V645 ,V644 ,V639 ,V638 ,V633 ,V632 ,V629 ,V628; object Vcs[18];
#define VMS38  register object *sup=vs_top+1;vs_top=sup;
#define VMV38 vs_reserve(1);
#define VMR38(VMT38) vs_top=base ; return(VMT38);
#define VC39
#define VC40
static object LI42();
#define VMB41 register object *base=vs_top; object  V667 ,V666;
#define VMS41  register object *sup=vs_top+4;vs_top=sup;
#define VMV41 vs_reserve(4);
#define VMR41(VMT41) vs_top=base ; return(VMT41);
#define VC42 object  V672 ,V671;
static object LI44();
static object VK44defaults[1]={(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[1];} LI44key={1,0,VK44defaults,{(void *)17}};
#define VMB43 register object *base=vs_top; object  V694 ,V693 ,V692 ,V691 ,V690 ,V688; object Vcs[6];
#define VMS43  register object *sup=vs_top+3;vs_top=sup;
#define VMV43 vs_reserve(3);
#define VMR43(VMT43) vs_top=base ; return(VMT43);
#define VC44 object  V706 ,V703 ,V700;
#define VC45 object  V719 ,V718 ,V717 ,V716 ,V715;
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
static void LnkT61() ;
static void (*Lnk61)() = LnkT61;
static object  LnkTLI60() ;
static object  (*LnkLI60)() = LnkTLI60;
static void LnkT59() ;
static void (*Lnk59)() = LnkT59;
static object  LnkTLI58() ;
static object  (*LnkLI58)() = LnkTLI58;
static void LnkT57() ;
static void (*Lnk57)() = LnkT57;
static object  LnkTLI56() ;
static object  (*LnkLI56)() = LnkTLI56;
static void LnkT55() ;
static void (*Lnk55)() = LnkT55;
static object  LnkTLI54() ;
static object  (*LnkLI54)() = LnkTLI54;
static object  LnkTLI53() ;
static object  (*LnkLI53)() = LnkTLI53;
static object  LnkTLI52() ;
static object  (*LnkLI52)() = LnkTLI52;
static object  LnkTLI51() ;
static object  (*LnkLI51)() = LnkTLI51;
static object  LnkTLI50() ;
static object  (*LnkLI50)() = LnkTLI50;
static object  LnkTLI49() ;
static object  (*LnkLI49)() = LnkTLI49;
static object  LnkTLI48() ;
static object  (*LnkLI48)() = LnkTLI48;
static object  LnkTLI47() ;
static object  (*LnkLI47)() = LnkTLI47;
static object  LnkTLI45() ;
static object  (*LnkLI45)() = LnkTLI45;
static object  LnkTLI44() ;
static object  (*LnkLI44)() = LnkTLI44;
static object  LnkTLI43() ;
static object  (*LnkLI43)() = LnkTLI43;
static object  LnkTLI42() ;
static object  (*LnkLI42)() = LnkTLI42;
static object  LnkTLI37() ;
static object  (*LnkLI37)() = LnkTLI37;
static object  LnkTLI36() ;
static object  (*LnkLI36)() = LnkTLI36;
static object  LnkTLI33() ;
static object  (*LnkLI33)() = LnkTLI33;
static void LnkT32() ;
static void (*Lnk32)() = LnkT32;
