
static void L1();
static void L2();
static void L7();
static void L11();
static void L14();
static void L18();
static void L22();
static void L23();
#define VC1 object  V5;
#define VC2
static object LI3();
#define VMB3
#define VMS3
#define VMV3
#define VMR3(VMT3) return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top;
#define VMS4  register object *sup=vs_top+5;vs_top=sup;
#define VMV4 vs_check;
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5(object,object,object,...);
#define VMB5 register object *base=vs_top; object Vcs[3];
#define VMS5  register object *sup=vs_top+5;vs_top=sup;
#define VMV5 vs_check;
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6(object,object,object,...);
#define VMB6 register object *base=vs_top;
#define VMS6  register object *sup=vs_top+9;vs_top=sup;
#define VMV6 vs_check;
#define VMR6(VMT6) vs_top=base ; return(VMT6);
#define VC7
static object LI8();
#define VMB8 register object *base=vs_top; object  V82;
#define VMS8  register object *sup=vs_top+4;vs_top=sup;
#define VMV8 vs_check;
#define VMR8(VMT8) vs_top=base ; return(VMT8);
static object LI9(object,object,object,...);
#define VMB9 register object *base=vs_top;
#define VMS9  register object *sup=vs_top+1;vs_top=sup;
#define VMV9 vs_check;
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10();
#define VMB10
#define VMS10
#define VMV10
#define VMR10(VMT10) return(VMT10);
#define VC11
static object LI13();
#define VMB12 register object *base=vs_top; object  V121 ,V117;
#define VMS12  register object *sup=vs_top+5;vs_top=sup;
#define VMV12 vs_check;
#define VMR12(VMT12) vs_top=base ; return(VMT12);
#define VC13 object  V132 ,V129;
static object LI15();
#define VMB14 register object *base=vs_top; object  V144 ,V140 ,V138 ,V137;
#define VMS14 vs_top += 1;
#define VMV14 vs_check;
#define VMR14(VMT14) vs_top=base ; return(VMT14);
static object LI17();
#define VMB15 register object *base=vs_top;
#define VMS15  register object *sup=vs_top+15;vs_top=sup;
#define VMV15 vs_check;
#define VMR15(VMT15) vs_top=base ; return(VMT15);
#define VC16
static object LI19();
#define VMB17 register object *base=vs_top; object  V163;
#define VMS17 vs_top += 1;
#define VMV17 vs_check;
#define VMR17(VMT17) vs_top=base ; return(VMT17);
static object LI20();
#define VMB18 register object *base=vs_top; object  V197 ,V196 ,V195 ,V194 ,V193 ,V192 ,V191;
#define VMS18  register object *sup=vs_top+2;vs_top=sup;
#define VMV18 vs_check;
#define VMR18(VMT18) vs_top=base ; return(VMT18);
static object LI21();
#define VMB19
#define VMS19
#define VMV19
#define VMR19(VMT19) return(VMT19);
#define VC20
#define VC21
static void LC30();
#define VC22
static void LC29();
#define VC23
static void LC28();
#define VC24
static void LC27();
#define VC25
static void LC26();
#define VC26 object  V227;
static void LC25();
#define VC27 object  V229;
static void LC24();
#define VC28
static void LC30();
static void LC29();
static void LC28();
static void LC27();
static void LC26();
static void LC25();
static void LC24();
#define VM28 8
#define VM27 2
#define VM26 2
#define VM25 2
#define VM24 7
#define VM23 2
#define VM22 8
#define VM21 2
#define VM20 2
#define VM19 0
#define VM18 2
#define VM17 1
#define VM16 4
#define VM15 15
#define VM14 1
#define VM13 8
#define VM12 5
#define VM11 4
#define VM10 0
#define VM9 1
#define VM8 4
#define VM7 10
#define VM6 9
#define VM5 5
#define VM4 5
#define VM3 0
#define VM2 7
#define VM1 10
static char * VVi[81]={
#define Cdata VV[80]
(char *)(L1),
(char *)(L2),
(char *)(LI3),
(char *)(LI4),
(char *)(LI5),
(char *)(LI6),
(char *)(L7),
(char *)(LI8),
(char *)(LI9),
(char *)(LI10),
(char *)(L11),
(char *)(LI13),
(char *)(L14),
(char *)(LI15),
(char *)(LI17),
(char *)(L18),
(char *)(LI19),
(char *)(LI20),
(char *)(LI21),
(char *)(L22),
(char *)(L23)
};
#define VV ((object *)VVi)
static object  LnkTLI79(object,...);
static object  (*LnkLI79)() = (object (*)()) LnkTLI79;
static void LnkT78();
static void (*Lnk78)() = LnkT78;
static object  LnkTLI77(object,...);
static object  (*LnkLI77)() = (object (*)()) LnkTLI77;
static void LnkT76();
static void (*Lnk76)() = LnkT76;
static object  LnkTLI75(object,...);
static object  (*LnkLI75)() = (object (*)()) LnkTLI75;
static object  LnkTLI74(object,...);
static object  (*LnkLI74)() = (object (*)()) LnkTLI74;
static object *Lclptr73;
static void LnkT73();
static void (*Lnk73)() = LnkT73;
static object  LnkTLI72(object,...);
static object  (*LnkLI72)() = (object (*)()) LnkTLI72;
static void LnkT71();
static void (*Lnk71)() = LnkT71;
static object  LnkTLI70(object,...);
static object  (*LnkLI70)() = (object (*)()) LnkTLI70;
static object *Lclptr69;
static void LnkT69();
static void (*Lnk69)() = LnkT69;
static object  LnkTLI68(object,...);
static object  (*LnkLI68)() = (object (*)()) LnkTLI68;
static object  LnkTLI67(object,...);
static object  (*LnkLI67)() = (object (*)()) LnkTLI67;
static object  LnkTLI66(object,...);
static object  (*LnkLI66)() = (object (*)()) LnkTLI66;
static void LnkT65();
static void (*Lnk65)() = LnkT65;
static object  LnkTLI64(object,...);
static object  (*LnkLI64)() = (object (*)()) LnkTLI64;
static object  LnkTLI63();
static object  (*LnkLI63)() = LnkTLI63;
static object  LnkTLI62(object,...);
static object  (*LnkLI62)() = (object (*)()) LnkTLI62;
static void LnkT61();
static void (*Lnk61)() = LnkT61;
static object  LnkTLI60(object,...);
static object  (*LnkLI60)() = (object (*)()) LnkTLI60;
static object  LnkTLI59(object,...);
static object  (*LnkLI59)() = (object (*)()) LnkTLI59;
static void LnkT58();
static void (*Lnk58)() = LnkT58;
static void LnkT57();
static void (*Lnk57)() = LnkT57;
static object  LnkTLI56(object,...);
static object  (*LnkLI56)() = (object (*)()) LnkTLI56;
static object  LnkTLI55(object,...);
static object  (*LnkLI55)() = (object (*)()) LnkTLI55;
static object  LnkTLI54(object,...);
static object  (*LnkLI54)() = (object (*)()) LnkTLI54;
static object  LnkTLI53(object,...);
static object  (*LnkLI53)() = (object (*)()) LnkTLI53;
static void LnkT52();
static void (*Lnk52)() = LnkT52;
static void LnkT51();
static void (*Lnk51)() = LnkT51;
static object *Lclptr50;
static void LnkT50();
static void (*Lnk50)() = LnkT50;
static object *Lclptr49;
static void LnkT49();
static void (*Lnk49)() = LnkT49;
static object  LnkTLI48(object,...);
static object  (*LnkLI48)() = (object (*)()) LnkTLI48;
static object  LnkTLI47(object,...);
static object  (*LnkLI47)() = (object (*)()) LnkTLI47;
static object  LnkTLI46(object,...);
static object  (*LnkLI46)() = (object (*)()) LnkTLI46;
static object *Lclptr45;
static void LnkT45();
static void (*Lnk45)() = LnkT45;
static object  LnkTLI44(object,...);
static object  (*LnkLI44)() = (object (*)()) LnkTLI44;
static object  LnkTLI43(object,...);
static object  (*LnkLI43)() = (object (*)()) LnkTLI43;
static object  LnkTLI42(object,...);
static object  (*LnkLI42)() = (object (*)()) LnkTLI42;
static object  LnkTLI41(object,...);
static object  (*LnkLI41)() = (object (*)()) LnkTLI41;
static object *Lclptr40;
static void LnkT40();
static void (*Lnk40)() = LnkT40;
static void LnkT39();
static void (*Lnk39)() = LnkT39;
