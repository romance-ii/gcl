/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*                                                                 */
/*                        Fichier Include PARI                     */
/*                                                                 */
/*                 declarations specifiques portables              */
/*                                                                 */
/*                        copyright  Babecool                      */
/*                                                                 */
/*                                                                 */
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

extern unsigned plong overflow,hiremainder;

/* mp.c */

#ifndef signe
#define lg(x)             (((GEN)(x))[0]&0xffff)
#define setlg(x,s)        (((GEN)(x))[0]=(((GEN)(x))[0]&0xffff0000)+s)
#define lgef(x)           (((GEN)(x))[1]&0xffff)
#define setlgef(x,s)      (((GEN)(x))[1]=(((GEN)(x))[1]&0xffff0000)+s)
#define signe(x)          (((GEN)(x))[1]>>24)
#endif
#define setsigne(x,s)     (((GEN)(x))[1]=(((GEN)(x))[1]&0xffffff)+((s)<<24))
#define typ(x)            (((unsigned plong)((GEN)(x))[0])>>24)
#define settyp(x,s)       (((GEN)(x))[0]=(((GEN)(x))[0]&0xffffff)+((s)<<24))
#define pere(x)           ((unsigned plong)(((GEN)(x))[0]&0xffffff)>>16)
#define setpere(x,s)      (((GEN)(x))[0]=(((GEN)(x))[0]&0xff00ffff)+((s)<<16))
#define expo(x)           ((((GEN)(x))[1]&0xffffff)-0x800000)
#define setexpo(x,s)      (((GEN)(x))[1]=(((GEN)(x))[1]&0xff000000)+(0x800000+s))
#define valp(x)           ((((GEN)(x))[1]&0xffff)-0x8000)
#define setvalp(x,s)      (((GEN)(x))[1]=(((GEN)(x))[1]&0xffff0000)+(0x8000+s))
#define precp(x)          (((unsigned plong)((GEN)(x))[1])>>16)
#define setprecp(x,s)     (((GEN)(x))[1]=(((GEN)(x))[1]&0xffff)+((s)<<16))
#define varn(x)           ((((GEN)(x))[1]&0xff0000)>>16)
#define setvarn(x,s)      (((GEN)(x))[1]=(((GEN)(x))[1]&0xff00ffff)+((s)<<16))
#define mant(x,i)         ((((GEN)(x))[1]&0xff000000)?((GEN)(x))[i+1]:0)
#define setmant(x,i,s)    (((GEN)(x))[i+1]=s)
#define affrs(x,s)        (err(affer4))
#define affri(x,y)        (err(affer5))
#define mpshift(x,s)      ((typ(x)==1)?shifti(x,s):shiftr(x,s))
#define cmpis(x,y)        (-cmpsi(y,x))
#define cmprs(x,y)        (-cmpsr(y,x))
#define cmpri(x,y)        (-cmpir(y,x))
#define subis(x,y)        (addsi(-y,x))
#define subrs(x,y)        (addsr(-y,x))

#define divii(a,b)        (dvmdii(a,b,0))
#define resii(a,b)        (dvmdii(a,b,-1))

#define affsz(s,x)        ((typ(x)==1)?affsi(s,x):affsr(s,x))
#define mpneg(x)          ((typ(x)==1)?negi(x):negr(x))
#define mpabs(x)          ((typ(x)==1)?absi(x):absr(x))
#define mpinvz(x,y)       ((typ(x)==1)?divsiz(1,x,y):divsrz(1,x,y))

#define mpnegz(x,y)       ((typ(x)==1)?gop1z(negi,x,y):gop1z(negr,x,y))
#define mpabsz(x,y)       ((typ(x)==1)?gop1z(absi,x,y):gop1z(absr,x,y))
#define mpshiftz(x,s,y)   ((typ(x)==1)?gops2gsz(shifti,x,s,y):gops2gsz(shiftr,x,s,y))
#define mptruncz(x,y)     (gop1z(mptrunc,x,y))
#define mpentz(x,y)       (gop1z(mpent,x,y))
#define mpaddz(x,y,z)     (gop2z(mpadd,x,y,z))
#define addsiz(s,y,z)     (gops2sgz(addsi,s,y,z))
#define addsrz(s,y,z)     (gops2sgz(addsr,s,y,z))
#define addiiz(x,y,z)     (gop2z(addii,x,y,z))
#define addirz(x,y,z)     (gop2z(addir,x,y,z))
#define addriz(x,y,z)     (gop2z(addir,y,x,z))
#define addrrz(x,y,z)     (gop2z(addrr,x,y,z))
#define mpsubz(x,y,z)     (gop2z(mpsub,x,y,z))
#define subsiz(s,y,z)     (gops2sgz(subsi,s,y,z))
#define subsrz(s,y,z)     (gops2sgz(subsr,s,y,z))
#define subisz(y,s,z)     (gops2sgz(addsi,-s,y,z))
#define subrsz(y,s,z)     (gops2sgz(addsr,-s,y,z))
#define subiiz(x,y,z)     (gop2z(subii,x,y,z))
#define subirz(x,y,z)     (gop2z(subir,x,y,z))
#define subriz(x,y,z)     (gop2z(subri,x,y,z))
#define subrrz(x,y,z)     (gop2z(subrr,x,y,z))
#define mpmulz(x,y,z)     (gop2z(mpmul,x,y,z))
#define mulsiz(s,y,z)     (gops2sgz(mulsi,s,y,z))
#define mulsrz(s,y,z)     (gops2sgz(mulsr,s,y,z))
#define muliiz(x,y,z)     (gop2z(mulii,x,y,z))
#define mulirz(x,y,z)     (gop2z(mulir,x,y,z))
#define mulriz(x,y,z)     (gop2z(mulir,y,x,z))
#define mulrrz(x,y,z)     (gop2z(mulrr,x,y,z))
#define mpinvsr(s,y)      (divssz(1,s,y))
#define mpinvir(x,y)      (divsiz(1,x,y))
#define mpinvrr(x,y)      (divsrz(1,x,y))
#define mpdvmdz(x,y,z,t)  (dvmdiiz(x,y,z,t))
#define modssz(s,y,z)     (gops2ssz(modss,s,y,z))
#define modsiz(s,y,z)     (gops2sgz(modsi,s,y,z))
#define modisz(y,s,z)     (gops2gsz(modis,y,s,z))
#define ressiz(s,y,z)     (gops2sgz(ressi,s,y,z))
#define resisz(y,s,z)     (gops2gsz(resis,y,s,z))
#define resssz(s,y,z)     (gops2ssz(resss,s,y,z))
#define mpmodz(x,y,z)     (modiiz(x,y,z))
#define mpresz(x,y,z)     (resiiz(x,y,z))
#define divirz(x,y,z)     (gop2z(divir,x,y,z))
#define divriz(x,y,z)     (gop2z(divri,x,y,z))
#define divsrz(s,y,z)     (gops2sgz(divsr,s,y,z))
#define divrsz(y,s,z)     (gops2gsz(divrs,y,s,z))

GEN     cgetr(),cgeti(),gerepile(),stoi();
GEN     negi(),negr(),absi(),absr();
GEN     mptrunc(),mpent(),shifts(),shifti(),shiftr();
GEN     addsi(),addsr(),addii(),addir(),addrr(),mpadd();
GEN     subsi(),subsr(),subii(),subir();
GEN     subri(),subrr(),mpsub();
GEN     mulss(),mulsi(),mulsr(),mulii(),mulir(),mulrr(),mpmul();
GEN     divsi(),divis(),divsr(),divrs(),divir();
GEN     divri(),divrr(),mpdiv(),convi(),confrac();
GEN     modss(),resss(),modsi(),ressi(),modis(),resis(),modii();
GEN     dvmdii(),dvmdsi(),dvmdis();
plong     itos(),vals(),vali(),divisii();
int     expi();
void    affii(),affir(),affrr(),mulsii(),addsii(),divsiz(),divisz(),divssz();
void    dvmdssz(),dvmdsiz(),dvmdisz(),dvmdiiz(),mpdivz(),modiiz();
void    diviiz(),divrrz(),cgiv();

