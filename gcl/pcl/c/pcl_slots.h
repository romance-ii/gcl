
static void L6();
static void L7();
static void L8();
static void L9();
static void L11();
static void L12();
static void L13();
static void L14();
static void L16();
static void L19();
static void L23();
static void L24();
static void L29();
static void L31();
static object LI1();
#define VMB1
#define VMS1
#define VMV1
#define VMR1(VMT1) return(VMT1);
static object LI2();
#define VMB2
#define VMS2
#define VMV2
#define VMR2(VMT2) return(VMT2);
static object LI3();
#define VMB3
#define VMS3
#define VMV3
#define VMR3(VMT3) return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top; object  V33 ,V30;
#define VMS4  register object *sup=vs_top+2;vs_top=sup;
#define VMV4 vs_check;
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5();
#define VMB5 register object *base=vs_top; object  V51 ,V48 ,V47 ,V46 ,V45;
#define VMS5  register object *sup=vs_top+2;vs_top=sup;
#define VMV5 vs_check;
#define VMR5(VMT5) vs_top=base ; return(VMT5);
#define VC6
#define VC7
#define VC8
#define VC9
static object LI10();
#define VMB10 register object *base=vs_top; object  V99;
#define VMS10  register object *sup=vs_top+3;vs_top=sup;
#define VMV10 vs_check;
#define VMR10(VMT10) vs_top=base ; return(VMT10);
#define VC11
#define VC12
#define VC13
#define VC14
static object LI15();
#define VMB15 object  V127;
#define VMS15
#define VMV15
#define VMR15(VMT15) return(VMT15);
#define VC16
static object LI17();
#define VMB17
#define VMS17
#define VMV17
#define VMR17(VMT17) return(VMT17);
static object LI18();
#define VMB18
#define VMS18
#define VMV18
#define VMR18(VMT18) return(VMT18);
#define VC19 object  V153;
static object LI20();
#define VMB20 register object *base=vs_top; object  V172;
#define VMS20  register object *sup=vs_top+3;vs_top=sup;
#define VMV20 vs_check;
#define VMR20(VMT20) vs_top=base ; return(VMT20);
static object LI21();
#define VMB21 register object *base=vs_top; object  V195;
#define VMS21  register object *sup=vs_top+5;vs_top=sup;
#define VMV21 vs_check;
#define VMR21(VMT21) vs_top=base ; return(VMT21);
static object LI22();
#define VMB22 register object *base=vs_top; object  V212;
#define VMS22  register object *sup=vs_top+3;vs_top=sup;
#define VMV22 vs_check;
#define VMR22(VMT22) vs_top=base ; return(VMT22);
#define VC23
#define VC24
static object LI25();
#define VMB25
#define VMS25
#define VMV25
#define VMR25(VMT25) return(VMT25);
static object LI26();
#define VMB26 register object *base=vs_top;
#define VMS26  register object *sup=vs_top+1;vs_top=sup;
#define VMV26 vs_check;
#define VMR26(VMT26) vs_top=base ; return(VMT26);
static object LI27();
#define VMB27 register object *base=vs_top;
#define VMS27  register object *sup=vs_top+12;vs_top=sup;
#define VMV27 vs_check;
#define VMR27(VMT27) vs_top=base ; return(VMT27);
static object LI28();
#define VMB28 register object *base=vs_top;
#define VMS28  register object *sup=vs_top+3;vs_top=sup;
#define VMV28 vs_check;
#define VMR28(VMT28) vs_top=base ; return(VMT28);
#define VC29 object  V292;
static object LI30();
#define VMB30 register object *base=vs_top; object  V303;
#define VMS30  register object *sup=vs_top+1;vs_top=sup;
#define VMV30 vs_check;
#define VMR30(VMT30) vs_top=base ; return(VMT30);
#define VC31
#define VM31 7
#define VM30 1
#define VM29 14
#define VM28 3
#define VM27 12
#define VM26 1
#define VM25 0
#define VM24 8
#define VM23 11
#define VM22 3
#define VM21 5
#define VM20 3
#define VM19 11
#define VM18 0
#define VM17 0
#define VM16 5
#define VM15 0
#define VM14 8
#define VM13 8
#define VM12 10
#define VM11 8
#define VM10 3
#define VM9 9
#define VM8 7
#define VM7 9
#define VM6 7
#define VM5 2
#define VM4 2
#define VM3 0
#define VM2 0
#define VM1 0
static char * VVi[79]={
#define Cdata VV[78]
(char *)(LI1),
(char *)(LI2),
(char *)(LI3),
(char *)(LI4),
(char *)(LI5),
(char *)(L6),
(char *)(L7),
(char *)(L8),
(char *)(L9),
(char *)(LI10),
(char *)(L11),
(char *)(L12),
(char *)(L13),
(char *)(L14),
(char *)(LI15),
(char *)(L16),
(char *)(LI17),
(char *)(LI18),
(char *)(L19),
(char *)(LI20),
(char *)(LI21),
(char *)(LI22),
(char *)(L23),
(char *)(L24),
(char *)(LI25),
(char *)(LI26),
(char *)(LI27),
(char *)(LI28),
(char *)(L29),
(char *)(LI30),
(char *)(L31)
};
#define VV ((object *)VVi)
static object *Lclptr77;
static void LnkT77();
static void (*Lnk77)() = LnkT77;
static object *Lclptr76;
static void LnkT76();
static void (*Lnk76)() = LnkT76;
static object  LnkTLI2(object,...);
static object  (*LnkLI2)() = (object (*)()) LnkTLI2;
static object *Lclptr75;
static void LnkT75();
static void (*Lnk75)() = LnkT75;
static object *Lclptr74;
static void LnkT74();
static void (*Lnk74)() = LnkT74;
static object  LnkTLI73(object,...);
static object  (*LnkLI73)() = (object (*)()) LnkTLI73;
static void LnkT72();
static void (*Lnk72)() = LnkT72;
static object *Lclptr71;
static void LnkT71();
static void (*Lnk71)() = LnkT71;
static object *Lclptr70;
static void LnkT70();
static void (*Lnk70)() = LnkT70;
static object  LnkTLI69(object,...);
static object  (*LnkLI69)() = (object (*)()) LnkTLI69;
static object *Lclptr68;
static void LnkT68();
static void (*Lnk68)() = LnkT68;
static void LnkT9();
static void (*Lnk9)() = LnkT9;
static void LnkT12();
static void (*Lnk12)() = LnkT12;
static object *Lclptr33;
static void LnkT33();
static void (*Lnk33)() = LnkT33;
static object *Lclptr28;
static void LnkT28();
static void (*Lnk28)() = LnkT28;
static object *Lclptr18;
static void LnkT18();
static void (*Lnk18)() = LnkT18;
static object  LnkTLI67(object,...);
static object  (*LnkLI67)() = (object (*)()) LnkTLI67;
static object  LnkTLI66(object,...);
static object  (*LnkLI66)() = (object (*)()) LnkTLI66;
static object *Lclptr65;
static void LnkT65();
static void (*Lnk65)() = LnkT65;
static object *Lclptr64;
static void LnkT64();
static void (*Lnk64)() = LnkT64;
static void LnkT63();
static void (*Lnk63)() = LnkT63;
static void LnkT62();
static void (*Lnk62)() = LnkT62;
static object *Lclptr61;
static void LnkT61();
static void (*Lnk61)() = LnkT61;
static object *Lclptr60;
static void LnkT60();
static void (*Lnk60)() = LnkT60;
static object *Lclptr59;
static void LnkT59();
static void (*Lnk59)() = LnkT59;
static object *Lclptr58;
static void LnkT58();
static void (*Lnk58)() = LnkT58;
static object  LnkTLI57(object,...);
static object  (*LnkLI57)() = (object (*)()) LnkTLI57;
static void LnkT56();
static void (*Lnk56)() = LnkT56;
