
static object LI1();
#define VMB1 register object *base=vs_top;
#define VMS1  register object *sup=vs_top+1;vs_top=sup;
#define VMV1 vs_reserve(1);
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top; object  V17 ,V13;
#define VMS2 vs_top += 3;
#define VMV2 vs_reserve(3);
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top;
#define VMS3 vs_top += 1;
#define VMV3 vs_reserve(1);
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top; object  V34 ,V33;
#define VMS4 vs_top += 4;
#define VMV4 vs_reserve(4);
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5();
#define VMB5 register object *base=vs_top;
#define VMS5 vs_top += 1;
#define VMV5 vs_reserve(1);
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6();
#define VMB6 register object *base=vs_top; object  V50 ,V49 ,V48 ,V47;
#define VMS6 vs_top += 3;
#define VMV6 vs_reserve(3);
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top; object  V63 ,V62 ,V61 ,V56;
#define VMS7  register object *sup=vs_top+4;vs_top=sup;
#define VMV7 vs_reserve(4);
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8();
#define VMB8
#define VMS8
#define VMV8
#define VMR8(VMT8) return(VMT8);
static object LI9();
#define VMB9 register object *base=vs_top; object  V83;
#define VMS9 vs_top += 2;
#define VMV9 vs_reserve(2);
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10();
#define VMB10 register object *base=vs_top; object  V102 ,V96;
#define VMS10  register object *sup=vs_top+4;vs_top=sup;
#define VMV10 vs_reserve(4);
#define VMR10(VMT10) vs_top=base ; return(VMT10);
static object LI11();
#define VMB11 register object *base=vs_top; object  V121 ,V119;
#define VMS11  register object *sup=vs_top+7;vs_top=sup;
#define VMV11 vs_reserve(7);
#define VMR11(VMT11) vs_top=base ; return(VMT11);
#define VM11 7
#define VM10 4
#define VM9 2
#define VM8 0
#define VM7 4
#define VM6 3
#define VM5 1
#define VM4 4
#define VM3 1
#define VM2 3
#define VM1 1
static char * VVi[74]={
#define Cdata VV[73]
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
(char *)(LI11)
};
#define VV ((object *)VVi)
static  LnkT72() ;
static  (*Lnk72)() = LnkT72;
static object  LnkTLI71() ;
static object  (*LnkLI71)() = LnkTLI71;
static  LnkT70() ;
static  (*Lnk70)() = LnkT70;
static object  LnkTLI69() ;
static object  (*LnkLI69)() = LnkTLI69;
static object  LnkTLI68() ;
static object  (*LnkLI68)() = LnkTLI68;
static object  LnkTLI67() ;
static object  (*LnkLI67)() = LnkTLI67;
static object  LnkTLI66() ;
static object  (*LnkLI66)() = LnkTLI66;
static object  LnkTLI65() ;
static object  (*LnkLI65)() = LnkTLI65;
static object  LnkTLI64() ;
static object  (*LnkLI64)() = LnkTLI64;
static object  LnkTLI63() ;
static object  (*LnkLI63)() = LnkTLI63;
static  LnkT62() ;
static  (*Lnk62)() = LnkT62;
static object  LnkTLI61() ;
static object  (*LnkLI61)() = LnkTLI61;
static object  LnkTLI60() ;
static object  (*LnkLI60)() = LnkTLI60;
static object  LnkTLI59() ;
static object  (*LnkLI59)() = LnkTLI59;
static object  LnkTLI58() ;
static object  (*LnkLI58)() = LnkTLI58;
static object  LnkTLI57() ;
static object  (*LnkLI57)() = LnkTLI57;
static object  LnkTLI56() ;
static object  (*LnkLI56)() = LnkTLI56;
static object  LnkTLI55() ;
static object  (*LnkLI55)() = LnkTLI55;
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
static object  LnkTLI46() ;
static object  (*LnkLI46)() = LnkTLI46;
static object  LnkTLI45() ;
static object  (*LnkLI45)() = LnkTLI45;
static object  LnkTLI44() ;
static object  (*LnkLI44)() = LnkTLI44;
static object  LnkTLI43() ;
static object  (*LnkLI43)() = LnkTLI43;
static object  LnkTLI42() ;
static object  (*LnkLI42)() = LnkTLI42;
static  LnkT41() ;
static  (*Lnk41)() = LnkT41;
static object  LnkTLI40() ;
static object  (*LnkLI40)() = LnkTLI40;
static object  LnkTLI39() ;
static object  (*LnkLI39)() = LnkTLI39;
static object  LnkTLI38() ;
static object  (*LnkLI38)() = LnkTLI38;
