
static object LI1();
static object LI2();
static object LI3();
static object LI4();
static object LI5();
static object LI6();
static object LI7();
static object LI8();
static object LI9();
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
static object LI6();
#define VMB6 register object *base=vs_top; object  V62; object Vcs[3];
#define VMS6  register object *sup=vs_top+3;vs_top=sup;
#define VMV6 vs_check;
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[3];} LI7key={3,0,Cstd_key_defaults,{(void *)9,(void *)10,(void *)11}};
#define VMB7 register object *base=vs_top; object  V79 ,V77 ,V76; object Vcs[9];
#define VMS7  register object *sup=vs_top+2;vs_top=sup;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8();
#define VMB8 register object *base=vs_top; object  V93 ,V87; object Vcs[3];
#define VMS8  register object *sup=vs_top+3;vs_top=sup;
#define VMV8 vs_check;
#define VMR8(VMT8) vs_top=base ; return(VMT8);
static object LI9();
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[3];} LI9key={3,0,Cstd_key_defaults,{(void *)9,(void *)10,(void *)11}};
#define VMB9 register object *base=vs_top; object  V107; object Vcs[9];
#define VMS9  register object *sup=vs_top+3;vs_top=sup;
#define VMV9 vs_check;
#define VMR9(VMT9) vs_top=base ; return(VMT9);
#define VM9 3
#define VM8 3
#define VM7 2
#define VM6 3
#define VM5 3
#define VM4 3
#define VM3 3
#define VM2 3
#define VM1 3
static char * VVi[15]={
#define Cdata VV[14]
(char *)(LI1),
(char *)(LI2),
(char *)(LI3),
(char *)(LI4),
(char *)(LI5),
(char *)(LI6),
(char *)(LI7),
(char *)(&LI7key),
(char *)(LI8),
(char *)(LI9),
(char *)(&LI9key)
};
#define VV ((object *)VVi)
static  LnkT13() ;
static  (*Lnk13)() = LnkT13;
static  LnkT12() ;
static  (*Lnk12)() = LnkT12;
static  LnkT8() ;
static  (*Lnk8)() = LnkT8;
