
static object LI1();
static object LI2();
static object LI3();
static object LI4();
static object LI5();
static void L6();
static object LI7();
static void L8();
static object LI9();
static object LI10();
static object LI11();
static object LI1();
#define VMB1 register object *base=vs_top; object  V13 ,V6; object Vcs[3];
#define VMS1  register object *sup=vs_top+3;vs_top=sup;
#define VMV1 vs_check;
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top; object  V19; object Vcs[3];
#define VMS2  register object *sup=vs_top+3;vs_top=sup;
#define VMV2 vs_check;
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top; object  V31; object Vcs[3];
#define VMS3  register object *sup=vs_top+3;vs_top=sup;
#define VMV3 vs_check;
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top; object  V41; object Vcs[3];
#define VMS4  register object *sup=vs_top+3;vs_top=sup;
#define VMV4 vs_check;
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5();
#define VMB5 register object *base=vs_top; object  V52; object Vcs[3];
#define VMS5  register object *sup=vs_top+3;vs_top=sup;
#define VMV5 vs_check;
#define VMR5(VMT5) vs_top=base ; return(VMT5);
#define VC6
static object LI7();
#define VMB7 register object *base=vs_top; object  V68; object Vcs[3];
#define VMS7  register object *sup=vs_top+3;vs_top=sup;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
#define VC8
static object LI9();
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[3];} LI9key={3,0,Cstd_key_defaults,{(void *)12,(void *)13,(void *)14}};
#define VMB9 register object *base=vs_top; object  V92 ,V90 ,V89; object Vcs[9];
#define VMS9  register object *sup=vs_top+2;vs_top=sup;
#define VMV9 vs_check;
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10();
#define VMB10 register object *base=vs_top; object  V106 ,V100; object Vcs[3];
#define VMS10  register object *sup=vs_top+3;vs_top=sup;
#define VMV10 vs_check;
#define VMR10(VMT10) vs_top=base ; return(VMT10);
static object LI11();
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[3];} LI11key={3,0,Cstd_key_defaults,{(void *)12,(void *)13,(void *)14}};
#define VMB11 register object *base=vs_top; object  V120; object Vcs[9];
#define VMS11  register object *sup=vs_top+3;vs_top=sup;
#define VMV11 vs_check;
#define VMR11(VMT11) vs_top=base ; return(VMT11);
#define VM11 3
#define VM10 3
#define VM9 2
#define VM8 8
#define VM7 3
#define VM6 8
#define VM5 3
#define VM4 3
#define VM3 3
#define VM2 3
#define VM1 3
static char * VVi[19]={
#define Cdata VV[18]
(char *)(LI1),
(char *)(LI2),
(char *)(LI3),
(char *)(LI4),
(char *)(LI5),
(char *)(L6),
(char *)(LI7),
(char *)(L8),
(char *)(LI9),
(char *)(&LI9key),
(char *)(LI10),
(char *)(LI11),
(char *)(&LI11key)
};
#define VV ((object *)VVi)
static void LnkT17() ;
static void (*Lnk17)() = LnkT17;
static void LnkT16() ;
static void (*Lnk16)() = LnkT16;
static void LnkT15() ;
static void (*Lnk15)() = LnkT15;
static void LnkT11() ;
static void (*Lnk11)() = LnkT11;
