
static object LI1();
#define VMB1 register object *base=vs_top;
#define VMS1  register object *sup=vs_top+3;vs_top=sup;
#define VMV1 vs_reserve(3);
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2(object,object,...);
#define VMB2
#define VMS2
#define VMV2
#define VMR2(VMT2) return(VMT2);
static object LI3(object,object,...);
static object VK3defaults[8]={(void *)-1,(void *)-2,(void *)-1,(void *)-2,(void *)-2,(void *)-2,(void *)20,(void *)-2};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[8];} LI3key={8,0,VK3defaults,{(void *)14,(void *)21,(void *)22,(void *)11,(void *)15,(void *)9,(void *)7,(void *)8}};
#define VMB3 register object *base=vs_top; object  V34; object Vcs[17];
#define VMS3  register object *sup=vs_top+8;vs_top=sup;
#define VMV3 vs_reserve(8);
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4();
#define VMB4 object  V47;
#define VMS4
#define VMV4
#define VMR4(VMT4) return(VMT4);
static object LI5();
#define VMB5
#define VMS5
#define VMV5
#define VMR5(VMT5) return(VMT5);
static object LI6(object,...);
#define VMB6 register object *base=vs_top; object  V58 ,V56;
#define VMS6 vs_top += 1;
#define VMV6 vs_reserve(1);
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top; object  V65;
#define VMS7  register object *sup=vs_top+2;vs_top=sup;
#define VMV7 vs_reserve(2);
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8(object,object,...);
#define VMB8 register object *base=vs_top; object  V76 ,V75 ,V71 ,V69;
#define VMS8  register object *sup=vs_top+4;vs_top=sup;
#define VMV8 vs_reserve(4);
#define VMR8(VMT8) vs_top=base ; return(VMT8);
static object LI9(object,object,...);
#define VMB9 register object *base=vs_top; object  V88 ,V87 ,V81;
#define VMS9  register object *sup=vs_top+2;vs_top=sup;
#define VMV9 vs_reserve(2);
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10(object,object,...);
#define VMB10 register object *base=vs_top; object  V92;
#define VMS10  register object *sup=vs_top+1;vs_top=sup;
#define VMV10 vs_reserve(1);
#define VMR10(VMT10) vs_top=base ; return(VMT10);
static object LI11(object,object,...);
#define VMB11 register object *base=vs_top; object  V98;
#define VMS11  register object *sup=vs_top+1;vs_top=sup;
#define VMV11 vs_reserve(1);
#define VMR11(VMT11) vs_top=base ; return(VMT11);
static object LI12(object,object,object,...);
#define VMB12 register object *base=vs_top;
#define VMS12  register object *sup=vs_top+4;vs_top=sup;
#define VMV12 vs_reserve(4);
#define VMR12(VMT12) vs_top=base ; return(VMT12);
static object LI13(object,object,object,...);
#define VMB13 register object *base=vs_top;
#define VMS13  register object *sup=vs_top+4;vs_top=sup;
#define VMV13 vs_reserve(4);
#define VMR13(VMT13) vs_top=base ; return(VMT13);
static object LI14(object,object,object,...);
#define VMB14 register object *base=vs_top;
#define VMS14  register object *sup=vs_top+4;vs_top=sup;
#define VMV14 vs_reserve(4);
#define VMR14(VMT14) vs_top=base ; return(VMT14);
static object LI15(object,object,object,...);
#define VMB15 register object *base=vs_top;
#define VMS15  register object *sup=vs_top+4;vs_top=sup;
#define VMV15 vs_reserve(4);
#define VMR15(VMT15) vs_top=base ; return(VMT15);
static object LI16(object,object,object,...);
#define VMB16 register object *base=vs_top;
#define VMS16  register object *sup=vs_top+4;vs_top=sup;
#define VMV16 vs_reserve(4);
#define VMR16(VMT16) vs_top=base ; return(VMT16);
static object LI17(object,object,object,...);
#define VMB17 register object *base=vs_top;
#define VMS17  register object *sup=vs_top+4;vs_top=sup;
#define VMV17 vs_reserve(4);
#define VMR17(VMT17) vs_top=base ; return(VMT17);
static object LI18(object,object,object,...);
#define VMB18 register object *base=vs_top;
#define VMS18  register object *sup=vs_top+4;vs_top=sup;
#define VMV18 vs_reserve(4);
#define VMR18(VMT18) vs_top=base ; return(VMT18);
static object LI19(object,object,object,...);
#define VMB19 register object *base=vs_top;
#define VMS19  register object *sup=vs_top+4;vs_top=sup;
#define VMV19 vs_reserve(4);
#define VMR19(VMT19) vs_top=base ; return(VMT19);
static object LI20(object,object,object,...);
#define VMB20 register object *base=vs_top;
#define VMS20  register object *sup=vs_top+4;vs_top=sup;
#define VMV20 vs_reserve(4);
#define VMR20(VMT20) vs_top=base ; return(VMT20);
static object LI21(object,object,object,...);
#define VMB21 register object *base=vs_top;
#define VMS21  register object *sup=vs_top+4;vs_top=sup;
#define VMV21 vs_reserve(4);
#define VMR21(VMT21) vs_top=base ; return(VMT21);
static object LI22(object,object,...);
#define VMB22 register object *base=vs_top;
#define VMS22  register object *sup=vs_top+4;vs_top=sup;
#define VMV22 vs_reserve(4);
#define VMR22(VMT22) vs_top=base ; return(VMT22);
static object LI23();
#define VMB23 register object *base=vs_top; object  V170;
#define VMS23  register object *sup=vs_top+2;vs_top=sup;
#define VMV23 vs_reserve(2);
#define VMR23(VMT23) vs_top=base ; return(VMT23);
static object LI24(object,object,object,...);
#define VMB24 register object *base=vs_top; object  V187 ,V186 ,V185 ,V184 ,V183 ,V182 ,V181 ,V179;
#define VMS24  register object *sup=vs_top+2;vs_top=sup;
#define VMV24 vs_reserve(2);
#define VMR24(VMT24) vs_top=base ; return(VMT24);
static object LI25();
#define VMB25 register object *base=vs_top;
#define VMS25  register object *sup=vs_top+2;vs_top=sup;
#define VMV25 vs_reserve(2);
#define VMR25(VMT25) vs_top=base ; return(VMT25);
static object LI26(object,object,object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[7];} LI26key={7,0,Cstd_key_defaults,{(void *)14,(void *)21,(void *)22,(void *)11,(void *)9,(void *)7,(void *)8}};
#define VMB26 register object *base=vs_top; object  V222 ,V221 ,V219 ,V218 ,V217 ,V205; object Vcs[17];
#define VMS26  register object *sup=vs_top+6;vs_top=sup;
#define VMV26 vs_reserve(6);
#define VMR26(VMT26) vs_top=base ; return(VMT26);
#define VM26 6
#define VM25 2
#define VM24 2
#define VM23 2
#define VM22 4
#define VM21 4
#define VM20 4
#define VM19 4
#define VM18 4
#define VM17 4
#define VM16 4
#define VM15 4
#define VM14 4
#define VM13 4
#define VM12 4
#define VM11 1
#define VM10 1
#define VM9 2
#define VM8 4
#define VM7 2
#define VM6 1
#define VM5 0
#define VM4 0
#define VM3 8
#define VM2 0
#define VM1 3
static char * VVi[37]={
#define Cdata VV[36]
(char *)(LI1),
(char *)(LI2),
(char *)(LI3),
(char *)(&LI3key),
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
(char *)(LI23),
(char *)(LI24),
(char *)(LI25),
(char *)(LI26),
(char *)(&LI26key)
};
#define VV ((object *)VVi)
static void LnkT35();
static void (*Lnk35)() = LnkT35;
static void LnkT34();
static void (*Lnk34)() = LnkT34;
static void LnkT33();
static void (*Lnk33)() = LnkT33;
static object  LnkTLI32(object,...);
static object  (*LnkLI32)() = (object (*)()) LnkTLI32;
static void LnkT28();
static void (*Lnk28)() = LnkT28;
static void LnkT31();
static void (*Lnk31)() = LnkT31;
static void LnkT30();
static void (*Lnk30)() = LnkT30;
static object  LnkTLI29(object,...);
static object  (*LnkLI29)() = (object (*)()) LnkTLI29;
static object  LnkTLI28(object,...);
static object  (*LnkLI28)() = (object (*)()) LnkTLI28;
static object  LnkTLI27(object,...);
static object  (*LnkLI27)() = (object (*)()) LnkTLI27;
static void LnkT26();
static void (*Lnk26)() = LnkT26;
static object  LnkTLI25(object,...);
static object  (*LnkLI25)() = (object (*)()) LnkTLI25;
static void LnkT24();
static void (*Lnk24)() = LnkT24;
static void LnkT23();
static void (*Lnk23)() = LnkT23;
static object  LnkTLI19(object,...);
static object  (*LnkLI19)() = (object (*)()) LnkTLI19;
static void LnkT18();
static void (*Lnk18)() = LnkT18;
