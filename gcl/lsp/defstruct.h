
static object LI1();
static object LI10();
static void L11();
static object LI12();
static void L15();
static object LI1();
#define VMB1 register object *base=vs_top; object  V36 ,V35 ,V33 ,V31 ,V30 ,V28 ,V27; object Vcs[12];
#define VMS1  register object *sup=vs_top+4;vs_top=sup;
#define VMV1 vs_reserve(4);
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top; object  V85 ,V79 ,V73 ,V64 ,V56;
#define VMS2  register object *sup=vs_top+4;vs_top=sup;
#define VMV2 vs_reserve(4);
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top;
#define VMS3  register object *sup=vs_top+1;vs_top=sup;
#define VMV3 vs_reserve(1);
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top; object  V109 ,V106 ,V105;
#define VMS4  register object *sup=vs_top+1;vs_top=sup;
#define VMV4 vs_reserve(1);
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5();
#define VMB5 register object *base=vs_top;
#define VMS5  register object *sup=vs_top+2;vs_top=sup;
#define VMV5 vs_reserve(2);
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6();
#define VMB6 register object *base=vs_top; object  V145 ,V144 ,V142 ,V141 ,V140 ,V138 ,V137 ,V135;
#define VMS6  register object *sup=vs_top+4;vs_top=sup;
#define VMV6 vs_reserve(4);
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 register object *base=vs_top; object  V166 ,V165 ,V164 ,V160 ,V159;
#define VMS7  register object *sup=vs_top+2;vs_top=sup;
#define VMV7 vs_reserve(2);
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8();
#define VMB8 register object *base=vs_top;
#define VMS8  register object *sup=vs_top+2;vs_top=sup;
#define VMV8 vs_reserve(2);
#define VMR8(VMT8) vs_top=base ; return(VMT8);
static object LI9();
#define VMB9 register object *base=vs_top; object  V215 ,V214 ,V213 ,V212 ,V211 ,V208 ,V198 ,V196;
#define VMS9  register object *sup=vs_top+3;vs_top=sup;
#define VMV9 vs_reserve(3);
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10();
#define VMB10 register object *base=vs_top; object  V258 ,V255 ,V249 ,V248; object Vcs[14];
#define VMS10  register object *sup=vs_top+7;vs_top=sup;
#define VMV10 vs_reserve(7);
#define VMR10(VMT10) vs_top=base ; return(VMT10);
#define VC11 object  V316 ,V315 ,V311 ,V310 ,V309 ,V306 ,V303 ,V302 ,V301 ,V297 ,V296 ,V295 ,V293 ,V292 ,V291 ,V288 ,V287 ,V286 ,V285;
static object LI12();
static object VK12defaults[18]={(void *)-2,(void *)143,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)143,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2,(void *)-2};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[18];} LI12key={18,0,VK12defaults,{(void *)78,(void *)75,(void *)76,(void *)74,(void *)73,(void *)77,(void *)144,(void *)68,(void *)67,(void *)66,(void *)72,(void *)71,(void *)69,(void *)70,(void *)145,(void *)65,(void *)64,(void *)63}};
#define VMB12 register object *base=vs_top; object Vcs[36];
#define VMS12  register object *sup=vs_top+19;vs_top=sup;
#define VMV12 vs_reserve(19);
#define VMR12(VMT12) vs_top=base ; return(VMT12);
static object LI13();
#define VMB13 object  V342;
#define VMS13
#define VMV13
#define VMR13(VMT13) return(VMT13);
static object LI14();
#define VMB14
#define VMS14
#define VMV14
#define VMR14(VMT14) return(VMT14);
#define VC15 object  V360;
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
#define VM11 18
#define VM10 7
#define VM9 3
#define VM8 2
#define VM7 2
#define VM6 4
#define VM5 2
#define VM4 1
#define VM3 1
#define VM2 4
#define VM1 4
static char * VVi[149]={
#define Cdata VV[148]
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
static void LnkT147() ;
static void (*Lnk147)() = LnkT147;
static void LnkT146() ;
static void (*Lnk146)() = LnkT146;
static object  LnkTLI142() ;
static object  (*LnkLI142)() = LnkTLI142;
static object  LnkTLI141() ;
static object  (*LnkLI141)() = LnkTLI141;
static object  LnkTLI140() ;
static object  (*LnkLI140)() = LnkTLI140;
static object  LnkTLI134() ;
static object  (*LnkLI134)() = LnkTLI134;
static object  LnkTLI133() ;
static object  (*LnkLI133)() = LnkTLI133;
static object  LnkTLI132() ;
static object  (*LnkLI132)() = LnkTLI132;
static object  LnkTLI131() ;
static object  (*LnkLI131)() = LnkTLI131;
static void LnkT130() ;
static void (*Lnk130)() = LnkT130;
static object  LnkTLI129() ;
static object  (*LnkLI129)() = LnkTLI129;
static void LnkT125() ;
static void (*Lnk125)() = LnkT125;
static object  LnkTLI124() ;
static object  (*LnkLI124)() = LnkTLI124;
static void LnkT123() ;
static void (*Lnk123)() = LnkT123;
static object  LnkTLI122() ;
static object  (*LnkLI122)() = LnkTLI122;
static void LnkT121() ;
static void (*Lnk121)() = LnkT121;
static void LnkT120() ;
static void (*Lnk120)() = LnkT120;
static void LnkT119() ;
static void (*Lnk119)() = LnkT119;
static object  LnkTLI118() ;
static object  (*LnkLI118)() = LnkTLI118;
static object  LnkTLI117() ;
static object  (*LnkLI117)() = LnkTLI117;
static object  LnkTLI116() ;
static object  (*LnkLI116)() = LnkTLI116;
static object  LnkTLI115() ;
static object  (*LnkLI115)() = LnkTLI115;
static object  LnkTLI111() ;
static object  (*LnkLI111)() = LnkTLI111;
static void LnkT110() ;
static void (*Lnk110)() = LnkT110;
static void LnkT109() ;
static void (*Lnk109)() = LnkT109;
static object  LnkTLI108() ;
static object  (*LnkLI108)() = LnkTLI108;
static void LnkT107() ;
static void (*Lnk107)() = LnkT107;
