
static object LI1();
#define VMB1 object  V26 ,V25 ,V23 ,V21 ,V20 ,V19 ,V16 ,V15 ,V14 ,V12 ,V11 ,V8 ,V7 ,V6 ,V5 ,V4;
#define VMS1
#define VMV1
#define VMR1(VMT1) return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top; object  V48 ,V46 ,V44 ,V42 ,V40 ,V38 ,V36 ,V35 ,V34 ,V33;
#define VMS2  register object *sup=vs_top+4;vs_top=sup;
#define VMV2 vs_reserve(4);
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top; object  V62 ,V59 ,V58 ,V57 ,V55;
#define VMS3 vs_top += 1;
#define VMV3 vs_reserve(1);
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4();
#define VMB4
#define VMS4
#define VMV4
#define VMR4(VMT4) return(VMT4);
#define VM4 0
#define VM3 1
#define VM2 4
#define VM1 0
static char * VVi[36]={
#define Cdata VV[35]
(char *)(LI1),
(char *)(LI2),
(char *)(LI3),
(char *)(LI4)
};
#define VV ((object *)VVi)
static object  LnkTLI34() ;
static object  (*LnkLI34)() = LnkTLI34;
static  LnkT33() ;
static  (*Lnk33)() = LnkT33;
static  LnkT32() ;
static  (*Lnk32)() = LnkT32;
static  LnkT31() ;
static  (*Lnk31)() = LnkT31;
static  LnkT30() ;
static  (*Lnk30)() = LnkT30;
static  LnkT29() ;
static  (*Lnk29)() = LnkT29;
static object  LnkTLI28() ;
static object  (*LnkLI28)() = LnkTLI28;
static  LnkT27() ;
static  (*Lnk27)() = LnkT27;
static  LnkT26() ;
static  (*Lnk26)() = LnkT26;
static object  LnkTLI25() ;
static object  (*LnkLI25)() = LnkTLI25;
static object  LnkTLI18() ;
static object  (*LnkLI18)() = LnkTLI18;
static object  LnkTLI17() ;
static object  (*LnkLI17)() = LnkTLI17;
static object  LnkTLI15() ;
static object  (*LnkLI15)() = LnkTLI15;
static object  LnkTLI14() ;
static object  (*LnkLI14)() = LnkTLI14;
static object  LnkTLI13() ;
static object  (*LnkLI13)() = LnkTLI13;
static object  LnkTLI12() ;
static object  (*LnkLI12)() = LnkTLI12;
