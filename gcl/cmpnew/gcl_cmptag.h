
static void L19();
static void L20();
static object LI1(object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[8];} LI1key={8,0,Cstd_key_defaults,{(void *)41,(void *)42,(void *)43,(void *)44,(void *)7,(void *)8,(void *)6,(void *)5}};
#define VMB1 register object *base=vs_top; object Vcs[16];
#define VMS1  register object *sup=vs_top+9;vs_top=sup;
#define VMV1 vs_check;
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top;
#define VMS2  register object *sup=vs_top+2;vs_top=sup;
#define VMV2 vs_check;
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top; object  V23 ,V22;
#define VMS3  register object *sup=vs_top+2;vs_top=sup;
#define VMV3 vs_check;
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top;
#define VMS4  register object *sup=vs_top+2;vs_top=sup;
#define VMV4 vs_check;
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5();
#define VMB5 register object *base=vs_top; object  V62 ,V61 ,V60 ,V58 ,V57 ,V56 ,V53 ,V52;
#define VMS5  register object *sup=vs_top+5;vs_top=sup;
#define VMV5 vs_check;
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6();
#define VMB6
#define VMS6
#define VMV6
#define VMR6(VMT6) return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top; object  V81 ,V80 ,V79;
#define VMS7  register object *sup=vs_top+4;vs_top=sup;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8();
#define VMB8 register object *base=vs_top;
#define VMS8  register object *sup=vs_top+5;vs_top=sup;
#define VMV8 vs_check;
#define VMR8(VMT8) vs_top=base ; return(VMT8);
static object LI9();
#define VMB9 register object *base=vs_top; object  V100 ,V99 ,V98 ,V97;
#define VMS9  register object *sup=vs_top+6;vs_top=sup;
#define VMV9 vs_check;
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10();
#define VMB10 register object *base=vs_top; object  V113 ,V112 ,V111 ,V110 ,V109;
#define VMS10  register object *sup=vs_top+8;vs_top=sup;
#define VMV10 vs_check;
#define VMR10(VMT10) vs_top=base ; return(VMT10);
static object LI11();
#define VMB11 object  V128 ,V127 ,V126 ,V117;
#define VMS11
#define VMV11
#define VMR11(VMT11) return(VMT11);
static object LI12();
#define VMB12
#define VMS12
#define VMV12
#define VMR12(VMT12) return(VMT12);
static object LI13();
#define VMB13
#define VMS13
#define VMV13
#define VMR13(VMT13) return(VMT13);
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
static object LI16();
#define VMB16 object  V150;
#define VMS16
#define VMV16
#define VMR16(VMT16) return(VMT16);
static object LI17();
#define VMB17 register object *base=vs_top; object  V174 ,V173 ,V171 ,V170 ,V168 ,V167 ,V166 ,V165 ,V160;
#define VMS17  register object *sup=vs_top+6;vs_top=sup;
#define VMV17 vs_check;
#define VMR17(VMT17) vs_top=base ; return(VMT17);
static object LI18();
#define VMB18 register object *base=vs_top; object  V185;
#define VMS18  register object *sup=vs_top+4;vs_top=sup;
#define VMV18 vs_check;
#define VMR18(VMT18) vs_top=base ; return(VMT18);
#define VC19 object  V196 ,V195 ,V193 ,V192 ,V191;
#define VC20
#define VM20 3
#define VM19 8
#define VM18 4
#define VM17 6
#define VM16 0
#define VM15 0
#define VM14 0
#define VM13 0
#define VM12 0
#define VM11 0
#define VM10 8
#define VM9 6
#define VM8 5
#define VM7 4
#define VM6 0
#define VM5 5
#define VM4 2
#define VM3 2
#define VM2 2
#define VM1 9
static char * VVi[86]={
#define Cdata VV[85]
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
(char *)(L19),
(char *)(L20)
};
#define VV ((object *)VVi)
static object  LnkTLI84();
static object  (*LnkLI84)() = LnkTLI84;
static void LnkT83();
static void (*Lnk83)() = LnkT83;
static object  LnkTLI82(object,...);
static object  (*LnkLI82)() = (object (*)()) LnkTLI82;
static object  LnkTLI81(object,...);
static object  (*LnkLI81)() = (object (*)()) LnkTLI81;
static object  LnkTLI80(object,...);
static object  (*LnkLI80)() = (object (*)()) LnkTLI80;
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
static object  LnkTLI70(object,...);
static object  (*LnkLI70)() = (object (*)()) LnkTLI70;
static object  LnkTLI69(object,...);
static object  (*LnkLI69)() = (object (*)()) LnkTLI69;
static object  LnkTLI68(object,...);
static object  (*LnkLI68)() = (object (*)()) LnkTLI68;
static object  LnkTLI67(object,...);
static object  (*LnkLI67)() = (object (*)()) LnkTLI67;
static object  LnkTLI66();
static object  (*LnkLI66)() = LnkTLI66;
static object  LnkTLI65(object,...);
static object  (*LnkLI65)() = (object (*)()) LnkTLI65;
static object  LnkTLI64(object,...);
static object  (*LnkLI64)() = (object (*)()) LnkTLI64;
static object  LnkTLI63(object,...);
static object  (*LnkLI63)() = (object (*)()) LnkTLI63;
static object  LnkTLI62();
static object  (*LnkLI62)() = LnkTLI62;
static void LnkT61();
static void (*Lnk61)() = LnkT61;
static object  LnkTLI60(object,...);
static object  (*LnkLI60)() = (object (*)()) LnkTLI60;
static object  LnkTLI59(object,...);
static object  (*LnkLI59)() = (object (*)()) LnkTLI59;
static object  LnkTLI58(object,...);
static object  (*LnkLI58)() = (object (*)()) LnkTLI58;
static object  LnkTLI57(object,...);
static object  (*LnkLI57)() = (object (*)()) LnkTLI57;
static object  LnkTLI56(object,...);
static object  (*LnkLI56)() = (object (*)()) LnkTLI56;
static object  LnkTLI55(object,...);
static object  (*LnkLI55)() = (object (*)()) LnkTLI55;
static object  LnkTLI54(object,...);
static object  (*LnkLI54)() = (object (*)()) LnkTLI54;
static object  LnkTLI53(object,...);
static object  (*LnkLI53)() = (object (*)()) LnkTLI53;
static object  LnkTLI52();
static object  (*LnkLI52)() = LnkTLI52;
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
static object  LnkTLI46(object,...);
static object  (*LnkLI46)() = (object (*)()) LnkTLI46;
static void LnkT45();
static void (*Lnk45)() = LnkT45;
