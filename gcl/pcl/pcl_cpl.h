
static void L5();
static void L13();
static object LI1();
#define VMB1 register object *base=vs_top; object  V8;
#define VMS1  register object *sup=vs_top+1;vs_top=sup;
#define VMV1 vs_check;
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2(object,...);
static object VK2defaults[4]={(void *)-2,(void *)-2,(void *)-2,(void *)23};
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[4];} LI2key={4,0,VK2defaults,{(void *)24,(void *)25,(void *)26,(void *)27}};
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
#define VMS12  register object *sup=vs_top+7;vs_top=sup;
#define VMV12 vs_check;
#define VMR12(VMT12) vs_top=base ; return(VMT12);
static object LI21();
#define VMB13 register object *base=vs_top;
#define VMS13  register object *sup=vs_top+5;vs_top=sup;
#define VMV13 vs_check;
#define VMR13(VMT13) vs_top=base ; return(VMT13);
static void L23();
#define VC14 object  V142;
static void L22();
#define VC15 object  V150 ,V149;
static void L17();
#define VC16
static void L14();
#define VC17
static void L12();
#define VC18
static void L6();
#define VC19
static void L7();
#define VC20 object  V175 ,V172 ,V170;
#define VM20 6
#define VM19 5
#define VM18 5
#define VM17 6
#define VM16 5
#define VM15 4
#define VM14 4
#define VM13 5
#define VM12 7
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
static char * VVi[42]={
#define Cdata VV[41]
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
static object  LnkTLI40(object,...);
static object  (*LnkLI40)() = (object (*)()) LnkTLI40;
static object *Lclptr39;
static void LnkT39();
static void (*Lnk39)() = LnkT39;
static object  LnkTLI38();
static object  (*LnkLI38)() = LnkTLI38;
static object  LnkTLI37(object,...);
static object  (*LnkLI37)() = (object (*)()) LnkTLI37;
static object  LnkTLI36(object,...);
static object  (*LnkLI36)() = (object (*)()) LnkTLI36;
static object  LnkTLI35(object,...);
static object  (*LnkLI35)() = (object (*)()) LnkTLI35;
static void LnkT34();
static void (*Lnk34)() = LnkT34;
static object *Lclptr33;
static void LnkT33();
static void (*Lnk33)() = LnkT33;
static object  LnkTLI32(object,...);
static object  (*LnkLI32)() = (object (*)()) LnkTLI32;
static object  LnkTLI30(object,...);
static object  (*LnkLI30)() = (object (*)()) LnkTLI30;
static object  LnkTLI29(object,...);
static object  (*LnkLI29)() = (object (*)()) LnkTLI29;
static void LnkT28();
static void (*Lnk28)() = LnkT28;
static object *Lclptr22;
static void LnkT22();
static void (*Lnk22)() = LnkT22;
static object  LnkTLI21(object,...);
static object  (*LnkLI21)() = (object (*)()) LnkTLI21;
