
static object LI1(object,...);
#define VMB1 register object *base=vs_top;
#define VMS1  register object *sup=vs_top+4;vs_top=sup;
#define VMV1 vs_check;
#define VMR1(VMT1) vs_top=base ; return(VMT1);
#define VM1 4
static char * VVi[3]={
#define Cdata VV[2]
(char *)(LI1)
};
#define VV ((object *)VVi)
