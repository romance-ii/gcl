
static void L5();
static void L13();
static object LI1();
#define VMB1 register object *base=vs_top; object  V8;
#define VMS1  register object *sup=vs_top+1;vs_top=sup;
#define VMV1 vs_check;
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2(object,...);
static object VK2defaults[4]={(void *)-2,(void *)-2,(void *)-2,(void *)33};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[4];} LI2key={4,0,VK2defaults,{(void *)34,(void *)35,(void *)36,(void *)37}};
#define VMB2 register object *base=vs_top; object Vcs[8];
#define VMS2  register object *sup=vs_top+5;vs_top=sup;
#define VMV2 vs_check;
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top;
#define VMS3  register object *sup=vs_top+5;vs_top=sup;
#define VMV3 vs_check;
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top; object  V27 ,V26 ,V25;
#define VMS4  register object *sup=vs_top+2;vs_top=sup;
#define VMV4 vs_check;
#define VMR4(VMT4) vs_top=base ; return(VMT4);
#define VC5
static object LI8();
#define VMB6 register object *base=vs_top; object  V52 ,V48 ,V43 ,V40 ,V39;
#define VMS6 vs_top += 5;
#define VMV6 vs_check;
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI9();
#define VMB7 register object *base=vs_top; object  V83 ,V80;
#define VMS7  register object *sup=vs_top+3;vs_top=sup;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI10(object,object,object,...);
#define VMB8 register object *base=vs_top; object  V90;
#define VMS8  register object *sup=vs_top+6;vs_top=sup;
#define VMV8 vs_check;
#define VMR8(VMT8) vs_top=base ; return(VMT8);
static object LI11();
#define VMB9 register object *base=vs_top; object  V104 ,V103 ,V102 ,V101 ,V100;
#define VMS9  register object *sup=vs_top+8;vs_top=sup;
#define VMV9 vs_check;
#define VMR9(VMT9) vs_top=base ; return(VMT9);
#define VC10
static object LI15();
#define VMB11 register object *base=vs_top; object  V116 ,V114 ,V113 ,V112;
#define VMS11  register object *sup=vs_top+0;vs_top=sup;
#define VMV11
#define VMR11(VMT11) return(VMT11);
static object LI16();
#define VMB12 register object *base=vs_top;
#define VMS12  register object *sup=vs_top+10;vs_top=sup;
#define VMV12 vs_check;
#define VMR12(VMT12) vs_top=base ; return(VMT12);
static object LI21();
#define VMB13 register object *base=vs_top;
#define VMS13  register object *sup=vs_top+5;vs_top=sup;
#define VMV13 vs_check;
#define VMR13(VMT13) vs_top=base ; return(VMT13);
static void L23();
#define VC14 object  V143;
static void L22();
#define VC15 object  V151 ,V150;
static void L17();
#define VC16
static void L14();
#define VC17
static void L12();
#define VC18
static void L6();
#define VC19
static void L7();
#define VC20 object  V176 ,V173 ,V171;
#define VM20 6
#define VM19 5
#define VM18 5
#define VM17 6
#define VM16 5
#define VM15 4
#define VM14 4
#define VM13 5
#define VM12 10
#define VM11 0
#define VM10 5
#define VM9 8
#define VM8 6
#define VM7 3
#define VM6 5
#define VM5 9
#define VM4 2
#define VM3 5
#define VM2 5
#define VM1 1
static char * VVi[53]={
#define Cdata VV[52]
(char *)(LI1),
(char *)(LI2),
(char *)(&LI2key),
(char *)(LI3),
(char *)(LI4),
(char *)(L5),
(char *)(LI8),
(char *)(LI9),
(char *)(LI10),
(char *)(LI11),
(char *)(L13),
(char *)(LI15),
(char *)(LI16),
(char *)(LI21)
};
#define VV ((object *)VVi)
static object  LnkTLI51(object,...);
static object  (*LnkLI51)() = (object (*)()) LnkTLI51;
static object *Lclptr50;
static void LnkT50();
static void (*Lnk50)() = LnkT50;
static object  LnkTLI49();
static object  (*LnkLI49)() = LnkTLI49;
static void LnkT48();
static void (*Lnk48)() = LnkT48;
static object  LnkTLI47(object,...);
static object  (*LnkLI47)() = (object (*)()) LnkTLI47;
static object  LnkTLI46(object,...);
static object  (*LnkLI46)() = (object (*)()) LnkTLI46;
static object  LnkTLI45(object,...);
static object  (*LnkLI45)() = (object (*)()) LnkTLI45;
static void LnkT44();
static void (*Lnk44)() = LnkT44;
static object *Lclptr43;
static void LnkT43();
static void (*Lnk43)() = LnkT43;
static object  LnkTLI42(object,...);
static object  (*LnkLI42)() = (object (*)()) LnkTLI42;
static object  LnkTLI40(object,...);
static object  (*LnkLI40)() = (object (*)()) LnkTLI40;
static object  LnkTLI39(object,...);
static object  (*LnkLI39)() = (object (*)()) LnkTLI39;
static void LnkT38();
static void (*Lnk38)() = LnkT38;
static object *Lclptr32;
static void LnkT32();
static void (*Lnk32)() = LnkT32;
static object  LnkTLI31(object,...);
static object  (*LnkLI31)() = (object (*)()) LnkTLI31;
