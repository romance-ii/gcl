
static object LI1();
#define VMB1
#define VMS1
#define VMV1
#define VMR1(VMT1) return(VMT1);
static object LI2(object,object,object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[3];} LI2key={3,0,Cstd_key_defaults,{(void *)0,(void *)2,(void *)1}};
#define VMB2 register object *base=vs_top; object  V28; object Vcs[8];
#define VMS2  register object *sup=vs_top+3;vs_top=sup;
#define VMV2 vs_check;
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3(object,object,object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[3];} LI3key={3,0,Cstd_key_defaults,{(void *)0,(void *)2,(void *)1}};
#define VMB3 register object *base=vs_top; object Vcs[8];
#define VMS3  register object *sup=vs_top+3;vs_top=sup;
#define VMV3 vs_check;
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4(object,object,object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[3];} LI4key={3,0,Cstd_key_defaults,{(void *)0,(void *)2,(void *)1}};
#define VMB4 register object *base=vs_top; object Vcs[8];
#define VMS4  register object *sup=vs_top+3;vs_top=sup;
#define VMV4 vs_check;
#define VMR4(VMT4) vs_top=base ; return(VMT4);
static object LI5(object,object,object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[3];} LI5key={3,0,Cstd_key_defaults,{(void *)0,(void *)2,(void *)1}};
#define VMB5 register object *base=vs_top; object Vcs[8];
#define VMS5  register object *sup=vs_top+3;vs_top=sup;
#define VMV5 vs_check;
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6(object,object,object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[3];} LI6key={3,0,Cstd_key_defaults,{(void *)0,(void *)2,(void *)1}};
#define VMB6 register object *base=vs_top; object Vcs[8];
#define VMS6  register object *sup=vs_top+3;vs_top=sup;
#define VMV6 vs_check;
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7(object,object,object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[3];} LI7key={3,0,Cstd_key_defaults,{(void *)0,(void *)2,(void *)1}};
#define VMB7 register object *base=vs_top; object Vcs[8];
#define VMS7  register object *sup=vs_top+5;vs_top=sup;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8(object,object,object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[3];} LI8key={3,0,Cstd_key_defaults,{(void *)0,(void *)2,(void *)1}};
#define VMB8 register object *base=vs_top; object Vcs[8];
#define VMS8  register object *sup=vs_top+3;vs_top=sup;
#define VMV8 vs_check;
#define VMR8(VMT8) vs_top=base ; return(VMT8);
static object LI9(object,object,object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[3];} LI9key={3,0,Cstd_key_defaults,{(void *)0,(void *)2,(void *)1}};
#define VMB9 register object *base=vs_top; object Vcs[8];
#define VMS9  register object *sup=vs_top+5;vs_top=sup;
#define VMV9 vs_check;
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10(object,object,object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[3];} LI10key={3,0,Cstd_key_defaults,{(void *)0,(void *)2,(void *)1}};
#define VMB10 register object *base=vs_top; object  V120 ,V118; object Vcs[8];
#define VMS10  register object *sup=vs_top+2;vs_top=sup;
#define VMV10 vs_check;
#define VMR10(VMT10) vs_top=base ; return(VMT10);
static object LI11(object,object,object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[3];} LI11key={3,0,Cstd_key_defaults,{(void *)0,(void *)2,(void *)1}};
#define VMB11 register object *base=vs_top; object  V135; object Vcs[8];
#define VMS11  register object *sup=vs_top+3;vs_top=sup;
#define VMV11 vs_check;
#define VMR11(VMT11) vs_top=base ; return(VMT11);
static object LI12(object,object,object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[3];} LI12key={3,0,Cstd_key_defaults,{(void *)0,(void *)2,(void *)1}};
#define VMB12 register object *base=vs_top; object Vcs[8];
#define VMS12  register object *sup=vs_top+3;vs_top=sup;
#define VMV12 vs_check;
#define VMR12(VMT12) vs_top=base ; return(VMT12);
#define VM12 3
#define VM11 3
#define VM10 2
#define VM9 5
#define VM8 3
#define VM7 5
#define VM6 3
#define VM5 3
#define VM4 3
#define VM3 3
#define VM2 3
#define VM1 0
static char * VVi[23]={
#define Cdata VV[22]
(char *)(LI1),
(char *)(LI2),
(char *)(&LI2key),
(char *)(LI3),
(char *)(&LI3key),
(char *)(LI4),
(char *)(&LI4key),
(char *)(LI5),
(char *)(&LI5key),
(char *)(LI6),
(char *)(&LI6key),
(char *)(LI7),
(char *)(&LI7key),
(char *)(LI8),
(char *)(&LI8key),
(char *)(LI9),
(char *)(&LI9key),
(char *)(LI10),
(char *)(&LI10key),
(char *)(LI11),
(char *)(&LI11key),
(char *)(LI12),
(char *)(&LI12key)
};
#define VV ((object *)VVi)
static void LnkT18();
static void (*Lnk18)() = LnkT18;
static void LnkT17();
static void (*Lnk17)() = LnkT17;
static void LnkT16();
static void (*Lnk16)() = LnkT16;
static void LnkT14();
static void (*Lnk14)() = LnkT14;
static object  LnkTLI15(object,...);
static object  (*LnkLI15)() = (object (*)()) LnkTLI15;
