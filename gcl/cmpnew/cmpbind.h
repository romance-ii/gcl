
static object LI1();
#define VMB1 object  V27 ,V26 ,V24 ,V22 ,V21 ,V20 ,V17 ,V16 ,V15 ,V12 ,V11 ,V8 ,V7 ,V6 ,V5 ,V4;
#define VMS1
#define VMV1
#define VMR1(VMT1) return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top; object  V50 ,V48 ,V46 ,V44 ,V41 ,V39 ,V37 ,V36 ,V35 ,V34;
#define VMS2  register object *sup=vs_top+4;vs_top=sup;
#define VMV2 vs_reserve(4);
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top; object  V64 ,V61 ,V60 ,V59 ,V57;
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
static object  LnkTLI34(object,...);
static object  (*LnkLI34)() = (object (*)()) LnkTLI34;
static void LnkT33();
static void (*Lnk33)() = LnkT33;
static void LnkT32();
static void (*Lnk32)() = LnkT32;
static void LnkT31();
static void (*Lnk31)() = LnkT31;
static void LnkT30();
static void (*Lnk30)() = LnkT30;
static void LnkT29();
static void (*Lnk29)() = LnkT29;
static object  LnkTLI28();
static object  (*LnkLI28)() = LnkTLI28;
static void LnkT27();
static void (*Lnk27)() = LnkT27;
static void LnkT26();
static void (*Lnk26)() = LnkT26;
static object  LnkTLI25();
static object  (*LnkLI25)() = LnkTLI25;
static object  LnkTLI18();
static object  (*LnkLI18)() = LnkTLI18;
static object  LnkTLI17(object,...);
static object  (*LnkLI17)() = (object (*)()) LnkTLI17;
static object  LnkTLI15();
static object  (*LnkLI15)() = LnkTLI15;
static object  LnkTLI14(object,...);
static object  (*LnkLI14)() = (object (*)()) LnkTLI14;
static object  LnkTLI13(object,...);
static object  (*LnkLI13)() = (object (*)()) LnkTLI13;
static object  LnkTLI12(object,...);
static object  (*LnkLI12)() = (object (*)()) LnkTLI12;
