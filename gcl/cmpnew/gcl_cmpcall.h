
static object LI1(object,object,...);
#define VMB1 register object *base=vs_top; object  V22 ,V13;
#define VMS1 vs_top += 2;
#define VMV1 vs_check;
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top;
#define VMS2  register object *sup=vs_top+1;vs_top=sup;
#define VMV2 vs_check;
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top; object  V48 ,V46 ,V42 ,V40 ,V38;
#define VMS3 vs_top += 4;
#define VMV3 vs_check;
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top;
#define VMS4 vs_top += 4;
#define VMV4 vs_check;
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5(object,object,object,...);
#define VMB5 register object *base=vs_top; object  V72;
#define VMS5 vs_top += 2;
#define VMV5 vs_check;
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6(object,...);
#define VMB6 register object *base=vs_top; object  V80 ,V79 ,V76;
#define VMS6 vs_top += 3;
#define VMV6 vs_check;
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top; object  V90;
#define VMS7 vs_top += 2;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8();
#define VMB8 object  V105 ,V104;
#define VMS8
#define VMV8
#define VMR8(VMT8) return(VMT8);
static object LI9();
#define VMB9 register object *base=vs_top;
#define VMS9  register object *sup=vs_top+2;vs_top=sup;
#define VMV9 vs_check;
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10();
#define VMB10 register object *base=vs_top; object  V138 ,V137 ,V130 ,V125;
#define VMS10  register object *sup=vs_top+5;vs_top=sup;
#define VMV10 vs_check;
#define VMR10(VMT10) vs_top=base ; return(VMT10);
static object LI11();
#define VMB11 register object *base=vs_top; object  V178 ,V175 ,V174 ,V173 ,V170 ,V163 ,V160;
#define VMS11  register object *sup=vs_top+5;vs_top=sup;
#define VMV11 vs_check;
#define VMR11(VMT11) vs_top=base ; return(VMT11);
static object LI12();
#define VMB12
#define VMS12
#define VMV12
#define VMR12(VMT12) return(VMT12);
static object LI13();
#define VMB13 object  V202 ,V201 ,V200 ,V199 ,V198 ,V197 ,V194 ,V193;
#define VMS13
#define VMV13
#define VMR13(VMT13) return(VMT13);
static object LI14();
#define VMB14 register object *base=vs_top;
#define VMS14  register object *sup=vs_top+1;vs_top=sup;
#define VMV14 vs_check;
#define VMR14(VMT14) vs_top=base ; return(VMT14);
static object LI15();
#define VMB15 register object *base=vs_top; object  V223 ,V222 ,V221 ,V220;
#define VMS15  register object *sup=vs_top+7;vs_top=sup;
#define VMV15 vs_check;
#define VMR15(VMT15) vs_top=base ; return(VMT15);
static object LI16(object,object,object,object,...);
#define VMB16
#define VMS16
#define VMV16
#define VMR16(VMT16) return(VMT16);
static object LI17();
#define VMB17 register object *base=vs_top; object  V246 ,V245;
#define VMS17 vs_top += 2;
#define VMV17 vs_check;
#define VMR17(VMT17) vs_top=base ; return(VMT17);
static object LI18();
#define VMB18 register object *base=vs_top; object  V259 ,V258;
#define VMS18 vs_top += 3;
#define VMV18 vs_check;
#define VMR18(VMT18) vs_top=base ; return(VMT18);
static object LI19();
#define VMB19 register object *base=vs_top; object  V267;
#define VMS19 vs_top += 2;
#define VMV19 vs_check;
#define VMR19(VMT19) vs_top=base ; return(VMT19);
static object LI20();
#define VMB20 object  V295 ,V294 ,V293 ,V291 ,V290 ,V287 ,V286 ,V285 ,V283 ,V282 ,V281 ,V277 ,V276;
#define VMS20
#define VMV20
#define VMR20(VMT20) return(VMT20);
static void LC21();
#define VC21 object  V298;
static void LC21();
#define VM21 3
#define VM20 0
#define VM19 2
#define VM18 3
#define VM17 2
#define VM16 0
#define VM15 7
#define VM14 1
#define VM13 0
#define VM12 0
#define VM11 5
#define VM10 5
#define VM9 2
#define VM8 0
#define VM7 2
#define VM6 3
#define VM5 2
#define VM4 4
#define VM3 4
#define VM2 1
#define VM1 2
static char * VVi[154]={
#define Cdata VV[153]
(char *)(LI1),
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
(char *)(LI19),
(char *)(LI20)
};
#define VV ((object *)VVi)
static void LnkT152();
static void (*Lnk152)() = LnkT152;
static object  LnkTLI151(object,...);
static object  (*LnkLI151)() = (object (*)()) LnkTLI151;
static void LnkT149();
static void (*Lnk149)() = LnkT149;
static object  LnkTLI148(object,...);
static object  (*LnkLI148)() = (object (*)()) LnkTLI148;
static object  LnkTLI147(object,...);
static object  (*LnkLI147)() = (object (*)()) LnkTLI147;
static object  LnkTLI146(object,...);
static object  (*LnkLI146)() = (object (*)()) LnkTLI146;
static object  LnkTLI145(object,...);
static object  (*LnkLI145)() = (object (*)()) LnkTLI145;
static object  LnkTLI144(object,...);
static object  (*LnkLI144)() = (object (*)()) LnkTLI144;
static object  LnkTLI143(object,...);
static object  (*LnkLI143)() = (object (*)()) LnkTLI143;
static void LnkT142();
static void (*Lnk142)() = LnkT142;
static void LnkT141();
static void (*Lnk141)() = LnkT141;
static object  LnkTLI140(object,...);
static object  (*LnkLI140)() = (object (*)()) LnkTLI140;
static object  LnkTLI139(object,...);
static object  (*LnkLI139)() = (object (*)()) LnkTLI139;
static object  LnkTLI138(object,...);
static object  (*LnkLI138)() = (object (*)()) LnkTLI138;
static object  LnkTLI137(object,...);
static object  (*LnkLI137)() = (object (*)()) LnkTLI137;
static object  LnkTLI136(object,...);
static object  (*LnkLI136)() = (object (*)()) LnkTLI136;
static object  LnkTLI135();
static object  (*LnkLI135)() = LnkTLI135;
static object  LnkTLI134(object,...);
static object  (*LnkLI134)() = (object (*)()) LnkTLI134;
static object  LnkTLI133(object,...);
static object  (*LnkLI133)() = (object (*)()) LnkTLI133;
static object  LnkTLI132(object,...);
static object  (*LnkLI132)() = (object (*)()) LnkTLI132;
static object  LnkTLI131(object,...);
static object  (*LnkLI131)() = (object (*)()) LnkTLI131;
static object  LnkTLI130(object,...);
static object  (*LnkLI130)() = (object (*)()) LnkTLI130;
static object  LnkTLI129(object,...);
static object  (*LnkLI129)() = (object (*)()) LnkTLI129;
static object  LnkTLI128();
static object  (*LnkLI128)() = LnkTLI128;
static object  LnkTLI127(object,...);
static object  (*LnkLI127)() = (object (*)()) LnkTLI127;
static object  LnkTLI126();
static object  (*LnkLI126)() = LnkTLI126;
static object  LnkTLI125(object,...);
static object  (*LnkLI125)() = (object (*)()) LnkTLI125;
static object  LnkTLI124(object,...);
static object  (*LnkLI124)() = (object (*)()) LnkTLI124;
static object  LnkTLI123(object,...);
static object  (*LnkLI123)() = (object (*)()) LnkTLI123;
static object  LnkTLI122(object,...);
static object  (*LnkLI122)() = (object (*)()) LnkTLI122;
static object  LnkTLI121(object,...);
static object  (*LnkLI121)() = (object (*)()) LnkTLI121;
static object  LnkTLI120(object,...);
static object  (*LnkLI120)() = (object (*)()) LnkTLI120;
static object  LnkTLI119(object,...);
static object  (*LnkLI119)() = (object (*)()) LnkTLI119;
static object  LnkTLI118(object,...);
static object  (*LnkLI118)() = (object (*)()) LnkTLI118;
static object  LnkTLI117(object,...);
static object  (*LnkLI117)() = (object (*)()) LnkTLI117;
static object  LnkTLI116(object,...);
static object  (*LnkLI116)() = (object (*)()) LnkTLI116;
static object  LnkTLI115(object,...);
static object  (*LnkLI115)() = (object (*)()) LnkTLI115;
static object  LnkTLI114();
static object  (*LnkLI114)() = LnkTLI114;
static object  LnkTLI113(object,...);
static object  (*LnkLI113)() = (object (*)()) LnkTLI113;
static object  LnkTLI112();
static object  (*LnkLI112)() = LnkTLI112;
static object  LnkTLI111(object,...);
static object  (*LnkLI111)() = (object (*)()) LnkTLI111;
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
static object  LnkTLI102(object,...);
static object  (*LnkLI102)() = (object (*)()) LnkTLI102;
static object  LnkTLI101(object,...);
static object  (*LnkLI101)() = (object (*)()) LnkTLI101;
static object  LnkTLI100(object,...);
static object  (*LnkLI100)() = (object (*)()) LnkTLI100;
