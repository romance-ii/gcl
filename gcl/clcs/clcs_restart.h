
static void L8();
static void L9();
static void L14();
static void L25();
static void L26();
static void L28();
static void L29();
static void L30();
static void L32();
static void L33();
static void L34();
static void L35();
static void L36();
static void L37();
static object LI1();
#define VMB1 register object *base=vs_top;
#define VMS1  register object *sup=vs_top+1;vs_top=sup;
#define VMV1 vs_reserve(1);
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top;
#define VMS2  register object *sup=vs_top+1;vs_top=sup;
#define VMV2 vs_reserve(1);
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3
#define VMS3
#define VMV3
#define VMR3(VMT3) return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top;
#define VMS4  register object *sup=vs_top+1;vs_top=sup;
#define VMV4 vs_reserve(1);
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5();
#define VMB5 register object *base=vs_top;
#define VMS5  register object *sup=vs_top+1;vs_top=sup;
#define VMV5 vs_reserve(1);
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6();
#define VMB6
#define VMS6
#define VMV6
#define VMR6(VMT6) return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top;
#define VMS7  register object *sup=vs_top+4;vs_top=sup;
#define VMV7 vs_reserve(4);
#define VMR7(VMT7) vs_top=base ; return(VMT7);
#define VC8
#define VC9 object  V34 ,V33 ,V32;
static object LI10();
#define VMB10 register object *base=vs_top;
#define VMS10  register object *sup=vs_top+1;vs_top=sup;
#define VMV10 vs_reserve(1);
#define VMR10(VMT10) vs_top=base ; return(VMT10);
static object LI11();
#define VMB11 register object *base=vs_top;
#define VMS11  register object *sup=vs_top+1;vs_top=sup;
#define VMV11 vs_reserve(1);
#define VMR11(VMT11) vs_top=base ; return(VMT11);
static object LI12();
#define VMB12
#define VMS12
#define VMV12
#define VMR12(VMT12) return(VMT12);
static object LI13(object,...);
#define VMB13 register object *base=vs_top; object  V47 ,V44;
#define VMS13  register object *sup=vs_top+3;vs_top=sup;
#define VMV13 vs_reserve(3);
#define VMR13(VMT13) vs_top=base ; return(VMT13);
#define VC14
static object LI15();
#define VMB15 register object *base=vs_top;
#define VMS15  register object *sup=vs_top+14;vs_top=sup;
#define VMV15 vs_reserve(14);
#define VMR15(VMT15) vs_top=base ; return(VMT15);
static object LI16(object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[4];} LI16key={4,0,Cstd_key_defaults,{(void *)34,(void *)24,(void *)23,(void *)21}};
#define VMB16 register object *base=vs_top; object Vcs[8];
#define VMS16  register object *sup=vs_top+5;vs_top=sup;
#define VMV16 vs_reserve(5);
#define VMR16(VMT16) vs_top=base ; return(VMT16);
static object LI17();
#define VMB17
#define VMS17
#define VMV17
#define VMR17(VMT17) return(VMT17);
static object LI18();
#define VMB18 register object *base=vs_top;
#define VMS18  register object *sup=vs_top+1;vs_top=sup;
#define VMV18 vs_reserve(1);
#define VMR18(VMT18) vs_top=base ; return(VMT18);
static object LI19();
#define VMB19 register object *base=vs_top;
#define VMS19  register object *sup=vs_top+1;vs_top=sup;
#define VMV19 vs_reserve(1);
#define VMR19(VMT19) vs_top=base ; return(VMT19);
static object LI20();
#define VMB20
#define VMS20
#define VMV20
#define VMR20(VMT20) return(VMT20);
static object LI22();
#define VMB21 register object *base=vs_top; object  V65 ,V64;
#define VMS21 vs_top += 1;
#define VMV21 vs_reserve(1);
#define VMR21(VMT21) vs_top=base ; return(VMT21);
static object LI23();
#define VMB22 register object *base=vs_top; object  V74 ,V72 ,V69;
#define VMS22 vs_top += 1;
#define VMV22 vs_reserve(1);
#define VMR22(VMT22) vs_top=base ; return(VMT22);
static object LI24();
#define VMB23 register object *base=vs_top;
#define VMS23 vs_top += 5;
#define VMV23 vs_reserve(5);
#define VMR23(VMT23) vs_top=base ; return(VMT23);
#define VC24
#define VC25 object  V95 ,V91;
static object LI27(object,object,...);
#define VMB26 register object *base=vs_top; object  V109 ,V103;
#define VMS26 vs_top += 2;
#define VMV26 vs_reserve(2);
#define VMR26(VMT26) vs_top=base ; return(VMT26);
#define VC27
#define VC28
#define VC29 object  V146 ,V145 ,V144 ,V137 ,V136 ,V135 ,V134 ,V133 ,V132;
#define VC30 object  V155;
#define VC31
#define VC32
#define VC33
#define VC34
#define VC35
static void L31();
#define VC36 object  V161;
static void LC40();
#define VC37
static void LC39();
#define VC38 object  V165;
static void LC38();
#define VC39 object  V167;
static void LC40();
static void LC39();
static void LC38();
#define VM39 2
#define VM38 5
#define VM37 4
#define VM36 5
#define VM35 3
#define VM34 3
#define VM33 1
#define VM32 1
#define VM31 1
#define VM30 7
#define VM29 9
#define VM28 3
#define VM27 4
#define VM26 2
#define VM25 5
#define VM24 4
#define VM23 5
#define VM22 1
#define VM21 1
#define VM20 0
#define VM19 1
#define VM18 1
#define VM17 0
#define VM16 5
#define VM15 14
#define VM14 7
#define VM13 3
#define VM12 0
#define VM11 1
#define VM10 1
#define VM9 10
#define VM8 4
#define VM7 4
#define VM6 0
#define VM5 1
#define VM4 1
#define VM3 0
#define VM2 1
#define VM1 1
static char * VVi[82]={
#define Cdata VV[81]
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
(char *)(L14),
(char *)(LI15),
(char *)(LI16),
(char *)(&LI16key),
(char *)(LI17),
(char *)(LI18),
(char *)(LI19),
(char *)(LI20),
(char *)(LI22),
(char *)(LI23),
(char *)(LI24),
(char *)(L25),
(char *)(L26),
(char *)(LI27),
(char *)(L28),
(char *)(L29),
(char *)(L30),
(char *)(L32),
(char *)(L33),
(char *)(L34),
(char *)(L35),
(char *)(L36),
(char *)(L37)
};
#define VV ((object *)VVi)
static void LnkT80();
static void (*Lnk80)() = LnkT80;
static void LnkT78();
static void (*Lnk78)() = LnkT78;
static void LnkT6();
static void (*Lnk6)() = LnkT6;
static object  LnkTLI77(object,...);
static object  (*LnkLI77)() = (object (*)()) LnkTLI77;
static object  LnkTLI76(object,...);
static object  (*LnkLI76)() = (object (*)()) LnkTLI76;
static object  LnkTLI75(object,...);
static object  (*LnkLI75)() = (object (*)()) LnkTLI75;
static object  LnkTLI39(object,...);
static object  (*LnkLI39)() = (object (*)()) LnkTLI39;
static void LnkT74();
static void (*Lnk74)() = LnkT74;
static void LnkT73();
static void (*Lnk73)() = LnkT73;
static object  LnkTLI72(object,...);
static object  (*LnkLI72)() = (object (*)()) LnkTLI72;
static object  LnkTLI71();
static object  (*LnkLI71)() = LnkTLI71;
static void LnkT70();
static void (*Lnk70)() = LnkT70;
static void LnkT69();
static void (*Lnk69)() = LnkT69;
