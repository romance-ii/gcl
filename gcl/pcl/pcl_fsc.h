
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
#define VMB5 register object *base=vs_top; object  V45;
#define VMS5  register object *sup=vs_top+1;vs_top=sup;
#define VMV5 vs_check;
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6();
#define VMB6 register object *base=vs_top; object  V57 ,V56;
#define VMS6  register object *sup=vs_top+1;vs_top=sup;
#define VMV6 vs_check;
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top; object  V69 ,V68;
#define VMS7  register object *sup=vs_top+1;vs_top=sup;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
#define VM7 1
#define VM6 1
#define VM5 1
#define VM4 0
#define VM3 0
#define VM2 0
#define VM1 0
static char * VVi[10]={
#define Cdata VV[9]
(char *)(LI1),
(char *)(LI2),
(char *)(LI3),
(char *)(LI4),
(char *)(LI5),
(char *)(LI6),
(char *)(LI7)
};
#define VV ((object *)VVi)
static object  LnkTLI8(object,...);
static object  (*LnkLI8)() = (object (*)()) LnkTLI8;
static object *Lclptr7;
static void LnkT7();
static void (*Lnk7)() = LnkT7;
static object  LnkTLI6(object,...);
static object  (*LnkLI6)() = (object (*)()) LnkTLI6;
static object *Lclptr5;
static void LnkT5();
static void (*Lnk5)() = LnkT5;
static object  LnkTLI2(object,...);
static object  (*LnkLI2)() = (object (*)()) LnkTLI2;
static object *Lclptr4;
static void LnkT4();
static void (*Lnk4)() = LnkT4;
static object *Lclptr3;
static void LnkT3();
static void (*Lnk3)() = LnkT3;
