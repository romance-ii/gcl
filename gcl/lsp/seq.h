
static object LI1();
static object LI2();
static object LI3();
static object LI4();
static object LI5();
static object LI6();
static object LI7();
static object LI1();
static object VK1defaults[1]={(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[1];} LI1key={1,0,VK1defaults,{(void *)1}};
#define VMB1 register object *base=vs_top; object Vcs[4];
#define VMS1  register object *sup=vs_top+7;vs_top=sup;
#define VMV1 vs_reserve(7);
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top; object  V31 ,V24 ,V20; object Vcs[2];
#define VMS2  register object *sup=vs_top+2;vs_top=sup;
#define VMV2 vs_reserve(2);
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top; object  V55 ,V39; object Vcs[4];
#define VMS3  register object *sup=vs_top+2;vs_top=sup;
#define VMV3 vs_reserve(2);
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top; object  V65; object Vcs[3];
#define VMS4  register object *sup=vs_top+2;vs_top=sup;
#define VMV4 vs_reserve(2);
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5();
#define VMB5 register object *base=vs_top; object  V83; object Vcs[3];
#define VMS5  register object *sup=vs_top+2;vs_top=sup;
#define VMV5 vs_reserve(2);
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6();
#define VMB6 register object *base=vs_top; object  V101 ,V100; object Vcs[3];
#define VMS6  register object *sup=vs_top+2;vs_top=sup;
#define VMV6 vs_reserve(2);
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top; object  V110 ,V109; object Vcs[3];
#define VMS7  register object *sup=vs_top+2;vs_top=sup;
#define VMV7 vs_reserve(2);
#define VMR7(VMT7) vs_top=base ; return(VMT7);
#define VM7 2
#define VM6 2
#define VM5 2
#define VM4 2
#define VM3 2
#define VM2 2
#define VM1 7
static char * VVi[21]={
#define Cdata VV[20]
(char *)(LI1),
(char *)(&LI1key),
(char *)(LI2),
(char *)(LI3),
(char *)(LI4),
(char *)(LI5),
(char *)(LI6),
(char *)(LI7)
};
#define VV ((object *)VVi)
static void LnkT19() ;
static void (*Lnk19)() = LnkT19;
static void LnkT18() ;
static void (*Lnk18)() = LnkT18;
static object  LnkTLI17() ;
static object  (*LnkLI17)() = LnkTLI17;
static object  LnkTLI16() ;
static object  (*LnkLI16)() = LnkTLI16;
static void LnkT15() ;
static void (*Lnk15)() = LnkT15;
static object  LnkTLI14() ;
static object  (*LnkLI14)() = LnkTLI14;
