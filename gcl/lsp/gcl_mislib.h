
static void L1();
static void L4();
static void L6();
#define VC1
static object LI2();
#define VMB2 register object *base=vs_top; object  V8 ,V6 ,V4;
#define VMS2  register object *sup=vs_top+2;vs_top=sup;
#define VMV2 vs_reserve(2);
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top; object  V14 ,V13;
#define VMS3  register object *sup=vs_top+6;vs_top=sup;
#define VMV3 vs_reserve(6);
#define VMR3(VMT3) vs_top=base ; return(VMT3);
#define VC4 object  V31 ,V29 ,V28 ,V26 ,V25;
static object LI5(object,object,object,object,object,object,object,...);
#define VMB5 register object *base=vs_top; object  V58 ,V57 ,V56 ,V55 ,V54;
#define VMS5  register object *sup=vs_top+5;vs_top=sup;
#define VMV5 vs_reserve(5);
#define VMR5(VMT5) vs_top=base ; return(VMT5);
#define VC6
static object LI7();
#define VMB7 register object *base=vs_top;
#define VMS7  register object *sup=vs_top+4;vs_top=sup;
#define VMV7 vs_reserve(4);
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI9();
#define VMB8 register object *base=vs_top;
#define VMS8 vs_top += 1;
#define VMV8 vs_reserve(1);
#define VMR8(VMT8) vs_top=base ; return(VMT8);
static object LI11();
#define VMB9 register object *base=vs_top;
#define VMS9 vs_top += 1;
#define VMV9 vs_reserve(1);
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static void LC13();
#define VC10 object  V72;
static void LC12();
#define VC11
static void LC13();
static void LC12();
#define VM11 2
#define VM10 2
#define VM9 1
#define VM8 1
#define VM7 4
#define VM6 5
#define VM5 5
#define VM4 11
#define VM3 6
#define VM2 2
#define VM1 4
static char * VVi[21]={
#define Cdata VV[20]
(char *)(L1),
(char *)(LI2),
(char *)(LI3),
(char *)(L4),
(char *)(LI5),
(char *)(L6),
(char *)(LI7),
(char *)(LI9),
(char *)(LI11)
};
#define VV ((object *)VVi)
static void LnkT19();
static void (*Lnk19)() = LnkT19;
static object  LnkTLI18(object,...);
static object  (*LnkLI18)() = (object (*)()) LnkTLI18;
static object  LnkTLI17(object,...);
static object  (*LnkLI17)() = (object (*)()) LnkTLI17;
