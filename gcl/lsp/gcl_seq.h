
static object LI1(object,object,object,...);
static object VK1defaults[1]={(void *)-1};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[1];} LI1key={1,0,VK1defaults,{(void *)1}};
#define VMB1 register object *base=vs_top; object Vcs[4];
#define VMS1  register object *sup=vs_top+8;vs_top=sup;
#define VMV1 vs_reserve(8);
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2(object,object,...);
#define VMB2 register object *base=vs_top; object  V32 ,V25 ,V21;
#define VMS2  register object *sup=vs_top+2;vs_top=sup;
#define VMV2 vs_reserve(2);
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3(object,object,object,object,...);
#define VMB3 register object *base=vs_top; object  V56 ,V40;
#define VMS3  register object *sup=vs_top+2;vs_top=sup;
#define VMV3 vs_reserve(2);
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4(object,object,object,...);
#define VMB4 register object *base=vs_top; object  V66;
#define VMS4  register object *sup=vs_top+2;vs_top=sup;
#define VMV4 vs_reserve(2);
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5(object,object,object,...);
#define VMB5 register object *base=vs_top; object  V84;
#define VMS5  register object *sup=vs_top+2;vs_top=sup;
#define VMV5 vs_reserve(2);
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6(object,object,object,...);
#define VMB6 register object *base=vs_top; object  V102 ,V101;
#define VMS6  register object *sup=vs_top+2;vs_top=sup;
#define VMV6 vs_reserve(2);
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7(object,object,object,...);
#define VMB7 register object *base=vs_top; object  V111 ,V110;
#define VMS7  register object *sup=vs_top+2;vs_top=sup;
#define VMV7 vs_reserve(2);
#define VMR7(VMT7) vs_top=base ; return(VMT7);
#define VM7 2
#define VM6 2
#define VM5 2
#define VM4 2
#define VM3 2
#define VM2 2
#define VM1 8
static char * VVi[29]={
#define Cdata VV[28]
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
static void LnkT27();
static void (*Lnk27)() = LnkT27;
static void LnkT26();
static void (*Lnk26)() = LnkT26;
static object  LnkTLI25(object,...);
static object  (*LnkLI25)() = (object (*)()) LnkTLI25;
static object  LnkTLI24(object,...);
static object  (*LnkLI24)() = (object (*)()) LnkTLI24;
static void LnkT23();
static void (*Lnk23)() = LnkT23;
static void LnkT22();
static void (*Lnk22)() = LnkT22;
static object  LnkTLI21(object,...);
static object  (*LnkLI21)() = (object (*)()) LnkTLI21;
