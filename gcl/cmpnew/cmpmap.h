
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
#define VMB4
#define VMS4
#define VMV4
#define VMR4(VMT4) return(VMT4);
static object LI5();
#define VMB5
#define VMS5
#define VMV5
#define VMR5(VMT5) return(VMT5);
static object LI6();
#define VMB6
#define VMS6
#define VMV6
#define VMR6(VMT6) return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top; object  V27;
#define VMS7  register object *sup=vs_top+1;vs_top=sup;
#define VMV7 vs_reserve(1);
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8();
#define VMB8 register object *base=vs_top; object  V52 ,V44 ,V43;
#define VMS8  register object *sup=vs_top+6;vs_top=sup;
#define VMV8 vs_reserve(6);
#define VMR8(VMT8) vs_top=base ; return(VMT8);
static object LI9();
#define VMB9 register object *base=vs_top; object  V87 ,V79 ,V78;
#define VMS9  register object *sup=vs_top+6;vs_top=sup;
#define VMV9 vs_reserve(6);
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10();
#define VMB10 register object *base=vs_top; object  V123 ,V115 ,V114;
#define VMS10  register object *sup=vs_top+6;vs_top=sup;
#define VMV10 vs_reserve(6);
#define VMR10(VMT10) vs_top=base ; return(VMT10);
static object LI11();
#define VMB11 register object *base=vs_top;
#define VMS11 vs_top += 2;
#define VMV11 vs_reserve(2);
#define VMR11(VMT11) vs_top=base ; return(VMT11);
#define VM11 2
#define VM10 6
#define VM9 6
#define VM8 6
#define VM7 1
#define VM6 0
#define VM5 0
#define VM4 0
#define VM3 0
#define VM2 0
#define VM1 0
static char * VVi[38]={
#define Cdata VV[37]
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
static object  LnkTLI36() ;
static object  (*LnkLI36)() = LnkTLI36;
static object  LnkTLI35() ;
static object  (*LnkLI35)() = LnkTLI35;
static object  LnkTLI34() ;
static object  (*LnkLI34)() = LnkTLI34;
static object  LnkTLI33() ;
static object  (*LnkLI33)() = LnkTLI33;
static object  LnkTLI32() ;
static object  (*LnkLI32)() = LnkTLI32;
static object  LnkTLI31() ;
static object  (*LnkLI31)() = LnkTLI31;
static object  LnkTLI30() ;
static object  (*LnkLI30)() = LnkTLI30;
static object  LnkTLI29() ;
static object  (*LnkLI29)() = LnkTLI29;
static object  LnkTLI28() ;
static object  (*LnkLI28)() = LnkTLI28;
static object  LnkTLI27() ;
static object  (*LnkLI27)() = LnkTLI27;
static  LnkT26() ;
static  (*Lnk26)() = LnkT26;
static object  LnkTLI25() ;
static object  (*LnkLI25)() = LnkTLI25;
static object  LnkTLI24() ;
static object  (*LnkLI24)() = LnkTLI24;
static object  LnkTLI23() ;
static object  (*LnkLI23)() = LnkTLI23;
