
static object LI1();
#define VMB1 register object *base=vs_top;
#define VMS1  register object *sup=vs_top+4;vs_top=sup;
#define VMV1 vs_reserve(4);
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2(object,object,...);
#define VMB2 register object *base=vs_top;
#define VMS2  register object *sup=vs_top+5;vs_top=sup;
#define VMV2 vs_reserve(5);
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3 register object *base=vs_top; object  V21;
#define VMS3  register object *sup=vs_top+2;vs_top=sup;
#define VMV3 vs_reserve(2);
#define VMR3(VMT3) vs_top=base ; return(VMT3);
static object LI4();
#define VMB4 register object *base=vs_top;
#define VMS4  register object *sup=vs_top+1;vs_top=sup;
#define VMV4 vs_reserve(1);
#define VMR4(VMT4) vs_top=base ; return(VMT4);
#define VM4 1
#define VM3 2
#define VM2 5
#define VM1 4
static char * VVi[21]={
#define Cdata VV[20]
(char *)(LI1),
(char *)(LI2),
(char *)(LI3),
(char *)(LI4)
};
#define VV ((object *)VVi)
static void LnkT14();
static void (*Lnk14)() = LnkT14;
