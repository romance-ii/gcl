
static void L3();
static void L4();
static void L8();
static void L9();
static object LI1(object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[7];} LI1key={7,0,Cstd_key_defaults,{(void *)23,(void *)24,(void *)25,(void *)5,(void *)6,(void *)4,(void *)3}};
#define VMB1 register object *base=vs_top; object Vcs[14];
#define VMS1  register object *sup=vs_top+8;vs_top=sup;
#define VMV1 vs_check;
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top; object  V13;
#define VMS2 vs_top += 3;
#define VMV2 vs_check;
#define VMR2(VMT2) vs_top=base ; return(VMT2);
#define VC3
#define VC4 object  V21 ,V20;
static object LI5();
#define VMB5 register object *base=vs_top; object  V29 ,V28 ,V27 ,V26;
#define VMS5  register object *sup=vs_top+3;vs_top=sup;
#define VMV5 vs_check;
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6();
#define VMB6 register object *base=vs_top; object  V42 ,V41 ,V40 ,V39 ,V38 ,V37 ,V36 ,V35;
#define VMS6  register object *sup=vs_top+5;vs_top=sup;
#define VMV6 vs_check;
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7();
#define VMB7 object  V58 ,V57 ,V56 ,V55 ,V46;
#define VMS7
#define VMV7
#define VMR7(VMT7) return(VMT7);
#define VC8
#define VC9
static object LI10();
#define VMB10 register object *base=vs_top; object  V70;
#define VMS10 vs_top += 1;
#define VMV10 vs_check;
#define VMR10(VMT10) vs_top=base ; return(VMT10);
static object LI11();
#define VMB11 register object *base=vs_top; object  V76;
#define VMS11 vs_top += 1;
#define VMV11 vs_check;
#define VMR11(VMT11) vs_top=base ; return(VMT11);
#define VM11 1
#define VM10 1
#define VM9 5
#define VM8 6
#define VM7 0
#define VM6 5
#define VM5 3
#define VM4 3
#define VM3 4
#define VM2 3
#define VM1 8
static char * VVi[54]={
#define Cdata VV[53]
(char *)(LI1),
(char *)(&LI1key),
(char *)(LI2),
(char *)(L3),
(char *)(L4),
(char *)(LI5),
(char *)(LI6),
(char *)(LI7),
(char *)(L8),
(char *)(L9),
(char *)(LI10),
(char *)(LI11)
};
#define VV ((object *)VVi)
static object  LnkTLI52(object,...);
static object  (*LnkLI52)() = (object (*)()) LnkTLI52;
static object  LnkTLI51(object,...);
static object  (*LnkLI51)() = (object (*)()) LnkTLI51;
static object  LnkTLI50(object,...);
static object  (*LnkLI50)() = (object (*)()) LnkTLI50;
static void LnkT49();
static void (*Lnk49)() = LnkT49;
static object  LnkTLI48(object,...);
static object  (*LnkLI48)() = (object (*)()) LnkTLI48;
static object  LnkTLI47(object,...);
static object  (*LnkLI47)() = (object (*)()) LnkTLI47;
static object  LnkTLI46(object,...);
static object  (*LnkLI46)() = (object (*)()) LnkTLI46;
static object  LnkTLI43(object,...);
static object  (*LnkLI43)() = (object (*)()) LnkTLI43;
static object  LnkTLI42(object,...);
static object  (*LnkLI42)() = (object (*)()) LnkTLI42;
static object  LnkTLI41();
static object  (*LnkLI41)() = LnkTLI41;
static object  LnkTLI40(object,...);
static object  (*LnkLI40)() = (object (*)()) LnkTLI40;
static object  LnkTLI39(object,...);
static object  (*LnkLI39)() = (object (*)()) LnkTLI39;
static object  LnkTLI38(object,...);
static object  (*LnkLI38)() = (object (*)()) LnkTLI38;
static object  LnkTLI37(object,...);
static object  (*LnkLI37)() = (object (*)()) LnkTLI37;
static object  LnkTLI36(object,...);
static object  (*LnkLI36)() = (object (*)()) LnkTLI36;
static object  LnkTLI35();
static object  (*LnkLI35)() = LnkTLI35;
static void LnkT34();
static void (*Lnk34)() = LnkT34;
static void LnkT33();
static void (*Lnk33)() = LnkT33;
static object  LnkTLI32(object,...);
static object  (*LnkLI32)() = (object (*)()) LnkTLI32;
static object  LnkTLI31(object,...);
static object  (*LnkLI31)() = (object (*)()) LnkTLI31;
static object  LnkTLI30(object,...);
static object  (*LnkLI30)() = (object (*)()) LnkTLI30;
static object  LnkTLI29(object,...);
static object  (*LnkLI29)() = (object (*)()) LnkTLI29;
static object  LnkTLI28(object,...);
static object  (*LnkLI28)() = (object (*)()) LnkTLI28;
static object  LnkTLI27(object,...);
static object  (*LnkLI27)() = (object (*)()) LnkTLI27;
static object  LnkTLI26(object,...);
static object  (*LnkLI26)() = (object (*)()) LnkTLI26;
