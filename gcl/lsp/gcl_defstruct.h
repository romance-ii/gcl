
static void L11();
static void L15();
static object LI1(object,object,object,object,object,object,object,object,object,object,object,object,object,...);
#define VMB1 register object *base=vs_top; object  V38 ,V37 ,V35 ,V33 ,V32 ,V30 ,V29; object Vcs[13];
#define VMS1  register object *sup=vs_top+4;vs_top=sup;
#define VMV1 vs_reserve(4);
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top; object  V88 ,V82 ,V76 ,V66 ,V58;
#define VMS2  register object *sup=vs_top+4;vs_top=sup;
#define VMV2 vs_reserve(4);
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top;
#define VMS3  register object *sup=vs_top+1;vs_top=sup;
#define VMV3 vs_reserve(1);
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top; object  V112 ,V109 ,V108;
#define VMS4  register object *sup=vs_top+1;vs_top=sup;
#define VMV4 vs_reserve(1);
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5();
#define VMB5 register object *base=vs_top;
#define VMS5  register object *sup=vs_top+2;vs_top=sup;
#define VMV5 vs_reserve(2);
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6();
#define VMB6 register object *base=vs_top; object  V148 ,V147 ,V145 ,V144 ,V143 ,V141 ,V140 ,V138;
#define VMS6  register object *sup=vs_top+4;vs_top=sup;
#define VMV6 vs_reserve(4);
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top; object  V169 ,V168 ,V167 ,V163 ,V162;
#define VMS7  register object *sup=vs_top+2;vs_top=sup;
#define VMV7 vs_reserve(2);
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8();
#define VMB8 register object *base=vs_top;
#define VMS8  register object *sup=vs_top+2;vs_top=sup;
#define VMV8 vs_reserve(2);
#define VMR8(VMT8) vs_top=base ; return(VMT8);
static object LI9();
#define VMB9 register object *base=vs_top; object  V218 ,V217 ,V216 ,V215 ,V214 ,V211 ,V201 ,V199;
#define VMS9  register object *sup=vs_top+3;vs_top=sup;
#define VMV9 vs_reserve(3);
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10(object,object,object,object,object,object,object,object,object,object,object,object,object,object,...);
#define VMB10 register object *base=vs_top; object  V264 ,V260 ,V254 ,V253; object Vcs[15];
#define VMS10  register object *sup=vs_top+8;vs_top=sup;
#define VMV10 vs_reserve(8);
#define VMR10(VMT10) vs_top=base ; return(VMT10);
#define VC11 object  V323 ,V322 ,V318 ,V317 ,V313 ,V310 ,V309 ,V308 ,V304 ,V303 ,V302 ,V300 ,V299 ,V298 ,V295 ,V294 ,V293 ,V292;
static object LI12(object,...);
static object VK12defaults[18]={(void *)-2,(void *)144,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)144,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[18];} LI12key={18,0,VK12defaults,{(void *)78,(void *)75,(void *)76,(void *)74,(void *)73,(void *)77,(void *)145,(void *)68,(void *)67,(void *)66,(void *)72,(void *)71,(void *)69,(void *)70,(void *)146,(void *)65,(void *)64,(void *)63}};
#define VMB12 register object *base=vs_top; object Vcs[36];
#define VMS12  register object *sup=vs_top+19;vs_top=sup;
#define VMV12 vs_reserve(19);
#define VMR12(VMT12) vs_top=base ; return(VMT12);
static object LI13();
#define VMB13 object  V349;
#define VMS13
#define VMV13
#define VMR13(VMT13) return(VMT13);
static object LI14();
#define VMB14
#define VMS14
#define VMV14
#define VMR14(VMT14) return(VMT14);
#define VC15 object  V367;
static void LC20();
#define VC16
static void LC19();
#define VC17
static void LC18();
#define VC18
static void LC17();
#define VC19
static void LC16();
#define VC20
static void LC20();
static void LC19();
static void LC18();
static void LC17();
static void LC16();
#define VM20 3
#define VM19 3
#define VM18 2
#define VM17 2
#define VM16 3
#define VM15 9
#define VM14 0
#define VM13 0
#define VM12 19
#define VM11 19
#define VM10 8
#define VM9 3
#define VM8 2
#define VM7 2
#define VM6 4
#define VM5 2
#define VM4 1
#define VM3 1
#define VM2 4
#define VM1 4
static char * VVi[150]={
#define Cdata VV[149]
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
(char *)(L11),
(char *)(LI12),
(char *)(&LI12key),
(char *)(LI13),
(char *)(LI14),
(char *)(L15),
(char *)(&LC19)
};
#define VV ((object *)VVi)
static void LnkT148();
static void (*Lnk148)() = LnkT148;
static void LnkT147();
static void (*Lnk147)() = LnkT147;
static object  LnkTLI143(object,...);
static object  (*LnkLI143)() = (object (*)()) LnkTLI143;
static object  LnkTLI142(object,...);
static object  (*LnkLI142)() = (object (*)()) LnkTLI142;
static object  LnkTLI141(object,...);
static object  (*LnkLI141)() = (object (*)()) LnkTLI141;
static object  LnkTLI135(object,...);
static object  (*LnkLI135)() = (object (*)()) LnkTLI135;
static object  LnkTLI134(object,...);
static object  (*LnkLI134)() = (object (*)()) LnkTLI134;
static object  LnkTLI133(object,...);
static object  (*LnkLI133)() = (object (*)()) LnkTLI133;
static object  LnkTLI132(object,...);
static object  (*LnkLI132)() = (object (*)()) LnkTLI132;
static void LnkT131();
static void (*Lnk131)() = LnkT131;
static object  LnkTLI130(object,...);
static object  (*LnkLI130)() = (object (*)()) LnkTLI130;
static void LnkT126();
static void (*Lnk126)() = LnkT126;
static object  LnkTLI125(object,...);
static object  (*LnkLI125)() = (object (*)()) LnkTLI125;
static void LnkT124();
static void (*Lnk124)() = LnkT124;
static object  LnkTLI123(object,...);
static object  (*LnkLI123)() = (object (*)()) LnkTLI123;
static void LnkT122();
static void (*Lnk122)() = LnkT122;
static void LnkT121();
static void (*Lnk121)() = LnkT121;
static void LnkT120();
static void (*Lnk120)() = LnkT120;
static object  LnkTLI119(object,...);
static object  (*LnkLI119)() = (object (*)()) LnkTLI119;
static object  LnkTLI118(object,...);
static object  (*LnkLI118)() = (object (*)()) LnkTLI118;
static object  LnkTLI117(object,...);
static object  (*LnkLI117)() = (object (*)()) LnkTLI117;
static object  LnkTLI116(object,...);
static object  (*LnkLI116)() = (object (*)()) LnkTLI116;
static object  LnkTLI112();
static object  (*LnkLI112)() = LnkTLI112;
static void LnkT111();
static void (*Lnk111)() = LnkT111;
static void LnkT110();
static void (*Lnk110)() = LnkT110;
static object  LnkTLI109(object,...);
static object  (*LnkLI109)() = (object (*)()) LnkTLI109;
static void LnkT108();
static void (*Lnk108)() = LnkT108;
