
static object LI1();
#define VMB1 register object *base=vs_top;
#define VMS1  register object *sup=vs_top+2;vs_top=sup;
#define VMV1 vs_check;
#define VMR1(VMT1) vs_top=base ; return(VMT1);
#define VM1 2
static char * VVi[2]={
#define Cdata VV[1]
(char *)(LI1)
};
#define VV ((object *)VVi)
static object *Lclptr0;
static void LnkT0();
static void (*Lnk0)() = LnkT0;
