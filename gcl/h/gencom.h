
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*                                                                 */
/*                        Fichier Include PARI                     */
/*                                                                 */
/*                    commun a toutes les versions                 */
/*                                                                 */
/*                        copyright  Babecool                      */
/*                                                                 */
/*                                                                 */
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

typedef plong    *GEN;
typedef unsigned plong ulong; 

typedef struct entree {
  char *name;
  plong valence;
  void *value;
  struct entree *next;
} entree;

typedef unsigned char *byteptr;

/*      Variables statiques communes :
        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  */
extern  plong    prec,precdl;
extern  GEN     bernzone,gpi,geuler;
extern  plong    tglobal;
extern  plong    *ordvar,varchanged;
extern  GEN     polvar;
extern  GEN     RAVYZARC;

extern  plong    NUMFUNC;
extern  entree  fonctions[],*hashtable[];
extern  plong    lontyp[],lontyp2[];

extern  jmp_buf environnement;

#ifndef IN_INIT_PARI
extern  unsigned plong    avma,bot,top;
#endif

extern  GEN     gzero,gnil,gun,gdeux,ghalf,gi;

extern  GEN     *polun,*polx;
extern  byteptr diffptr;

extern  GEN     *g;
extern  entree  **varentries; /* noms des inconnues actives */
extern  GEN     *blocliste;   /* tableau des pointeur de blocs */
extern  plong    nvar;         /* numero de la prochaine inconnue */
extern  plong    glbfmt[];

extern  char    *helpmessage[]; /* un message pour chaque fonction predefinei */
extern  char    *errmessage[];  /* un par numero d'erreur */

#define STACKSIZE       500  /* nombre de gn possibles */
#define MAXVAR          150  /* nombre maximum de variables */
#define TBLSZ           135  /* taille de la table de hashcodes */
#define MAXBLOC        5000  /* nombre de blocs autorises dans le tas */

#define K       9.632959862             /* 32*log(2)/log(10)    */
#define K1      0.103810253             /* log(10)/(32*log(2))  */
#define K2      1.1239968               /* 1/(1-(log(2)/(2*pi)))*/
#define K3      0.900643041             /* 1/(1+(log(2)/(2*pi)))*/
#define LOG2    0.693147180559945       /* log(2)               */
#define L2SL10  0.301029995663981       /* log(2)/log(10)       */
#undef  PI
#define PI      3.141592653589          /* pi                   */
#define rac5    2.23606797749           /* racine de 5          */
#define C1      0.9189385332            /* log(2*pi)/2          */
#define C2      22.18070978             /* 32*log(2)            */
#define C3      0.0216950598            /* log((1+sqrt(5))/2)/(32*log(2)) */
#define C4      4294967296.0            /* 2^32                 */
#define C31     2147483648.0            /* 2^31                 */
#define CN31    -2147483648.0           /* -2^31                */
#define BIGINT  32767                   /* 2^15-1               */

#ifndef exp2
#define exp2(x) exp((double)(x)*log(2.))
#define log2(x) log((double)(x))/log(2.)
#endif

#define separe(c)     ((c==';')||(c==':')||(c=='\n'))

#define output(x)     {brute(x,'g',-1);printf("\n");fflush(stdout);}
#define outbeaut(x)   {sor(x,'g',-1,0);printf("\n");fflush(stdout);}

#define addis(x,s)  addsi(s,x)
#define addrs(x,s)  addsr(s,x)
#define mulis(x,s)  mulsi(s,x)
#define mulrs(x,s)  mulsr(s,x)

#define gval(x,v) ggval(x,polx[v])

#define lgeti   (plong)cgeti
#define lgetr   (plong)cgetr
#define lpile   (plong)gerepile
#define lstoi   (plong)stoi
#define lnegi   (plong)negi
#define lnegr   (plong)negr
#define lmpneg  (plong)mpneg
#define labsi   (plong)absi
#define labsr   (plong)absr
#define lmpabs  (plong)mpabs
#define lmptrunc (plong)mptrunc
#define lmpent  (plong)mpent
#define lshifts (plong)shifts
#define lshifti (plong)shifti
#define lshiftr (plong)shiftr
#define lmpshift (plong)mpshift
#define laddsi  (plong)addsi
#define laddsr  (plong)addsr
#define laddis  (plong)addis
#define laddrs  (plong)addrs
#define laddii  (plong)addii
#define laddir  (plong)addir
#define laddrr  (plong)addrr
#define lmpadd  (plong)mpadd
#define lsubsi  (plong)subsi
#define lsubis  (plong)subis
#define lsubsr  (plong)subsr
#define lsubrs  (plong)subrs
#define lsubii  (plong)subii
#define lsubir  (plong)subir
#define lsubri  (plong)subri
#define lsubrr  (plong)subrr
#define lmpsub  (plong)mpsub
#define lmulss  (plong)mulss
#define lmulsi  (plong)mulsi
#define lmulsr  (plong)mulsr
#define lmulis  (plong)mulis
#define lmulrs  (plong)mulrs
#define lmulii  (plong)mulii
#define lmulir  (plong)mulir
#define lmulrr  (plong)mulrr
#define lmpmul  (plong)mpmul
#define ldivsi  (plong)divsi
#define ldivis  (plong)divis
#define ldivsr  (plong)divsr
#define ldivrs  (plong)divrs
#define ldivii  (plong)divii
#define ldivir  (plong)divir
#define ldivri  (plong)divri
#define ldivrr  (plong)divrr
#define lmpdiv  (plong)mpdiv
#define lmodii  (plong)modii
#define lresii  (plong)resii
#define ldvmdii (plong)dvmdii
#define ldvmdsi (plong)dvmdsi
#define ldvmdis (plong)dvmdis
  
#define ltree   (plong)gettree
#define lgen    (plong)getgen
#define lcopy   (plong)gcopy
#define lclone  (plong)gclone
#define lgetg   (plong)cgetg
#define lgetp   (plong)cgetp
#define laddpex (plong)gaddpex
#define lgreffe (plong)greffe
#define lopsg2  (plong)gopsg2
#define lopgs2  (plong)gopgs2
#define lco8    (plong)co8
#define lneg    (plong)gneg
#define labs    (plong)gabs
#define lmax    (plong)gmax
#define lmin    (plong)gmin
#define ladd    (plong)gadd
#define lsub    (plong)gsub
#define lmul    (plong)gmul
#define ldiv    (plong)gdiv
#define linv    (plong)ginv
#define lmod    (plong)gmod
#define ldivmod (plong)gdivmod
#define lshift  (plong)gshift
#define lmul2n  (plong)gmul2n
#define lpuigs  (plong)gpuigs
#define lpui    (plong)gpui
#define lsubst  (plong)gsubst
#define lderiv  (plong)deriv
#define linteg  (plong)integ
#define lrecip  (plong)recip
#define lceil   (plong)gceil
#define lfloor  (plong)gfloor
#define lround  (plong)ground
#define lcvtoi  (plong)gcvtoi
#define lrndtoi (plong)grndtoi
#define lfrac   (plong)gfrac
#define ltrunc  (plong)gtrunc
  
#define lconcat (plong)concat
#define lnorm   (plong)gnorm
#define lnorml2 (plong)gnorml2
#define lconj   (plong)gconj
#define lreal   (plong)greal
#define limag   (plong)gimag
#define lmppi   (plong)mppi
#define lmpeuler (plong)mpeuler
#define lmpsqrt (plong)mpsqrt
#define lsqrt   (plong)gsqrt
#define lmpexp1 (plong)mpexp1
#define lmpexp  (plong)mpexp
#define lexp    (plong)gexp
#define lmplog  (plong)mplog
#define llog    (plong)glog
#define lmpsc1  (plong)mpsc1
#define lmpcos  (plong)mpcos
#define lcos    (plong)gcos
#define lmpsin  (plong)mpsin
#define lsin    (plong)gsin
#define lmpaut  (plong)mpaut
#define lmptan  (plong)mptan
#define ltan    (plong)gtan
#define lmpatan (plong)mpatan
#define latan   (plong)gatan
#define lmpasin (plong)mpasin
#define lasin   (plong)gasin
#define lmpacos (plong)mpacos
#define lacos   (plong)gacos
#define lmpch   (plong)mpch
#define lch     (plong)gch
#define lmpsh   (plong)mpsh
#define lsh     (plong)gsh
#define lmpth   (plong)mpth
#define lth     (plong)gth
#define lmpath  (plong)mpath
#define lath    (plong)gath
#define lmpash  (plong)mpash
#define lash    (plong)gash
#define lmpach  (plong)mpach
#define lach    (plong)gach
#define lmpgamma (plong)mpgamma
#define lgamma  (plong)ggamma
#define lgamd   (plong)ggamd
#define lmppsi  (plong)mppsi
#define lpsi    (plong)gpsi
#define lmpgamd (plong)mpgamd
#define larg    (plong)garg
#define lsqr    (plong)gsqr
  
#define ltrans  (plong)gtrans
#define lscalmat (plong)gscalmat
#define lscalsmat (plong)gscalsmat
#define laddmat (plong)gaddmat
#define laddsmat (plong)gaddsmat
#define lgauss  (plong)gauss
#define linvmat (plong)invmat
#define linvmulmat (plong)invmulmat
#define ldet    (plong)det
#define ldet2   (plong)det2
#define lcaract (plong)caract
#define lcaradj (plong)caradj
#define ladj    (plong)adj
#define ltrace  (plong)trace
#define lassmat (plong)assmat
#define lscal   (plong)gscal
  
#define linvmod (plong)ginvmod
#define lred    (plong)gred
#define ldeuc   (plong)gdeuc
#define lres    (plong)gres
#define ldivres (plong)poldivres
#define lpoleval (plong)poleval
#define lroots  (plong)roots
#define lgcd    (plong)ggcd
#define lpolgcd (plong)polgcd
#define lcontent (plong)content
#define lprimpart (plong)primpart
#define lpsres  (plong)psres
#define lsubres (plong)subres
#define ldiscsr (plong)discsr
#define lquadpoly (plong)quadpoly
#define lquadgen (plong)quadgen
  
#define llegendre (plong)legendre
#define ltchebi (plong)tchebi
#define lhilb   (plong)hilb
#define lpasc   (plong)pasc
#define lprec   (plong)gprec
#define lbinome (plong)binome
  
#define lracine (plong)racine
#define lmppgcd (plong)mppgcd
#define lmpfact (plong)mpfact
#define lsfcont (plong)sfcont
#define lbezout (plong)bezout
#define lmpinvmod (plong)mpinvmod
#define lpuissmodulo (plong)puissmodulo
#define lfibo   (plong)fibo
#define lchangevar (plong)changevar
  
#define zero    (plong)gzero
#define un      (plong)gun
#define deux    (plong)gdeux
#define lhalf   (plong)ghalf
  
#define lpolx   (plong)polx
#define lpolun   (plong)polun

#define laddsg(s,y)         (lopsg2(gadd,s,y))
#define laddgs(y,s)         (lopsg2(gadd,s,y))
#define lsubsg(s,y)         (lopsg2(gsub,s,y))
#define lsubgs(y,s)         (lopgs2(gsub,y,s))
#define lmulsg(s,y)         ((plong)gmulsg(s,y))
#define lmulgs(y,s)         ((plong)gmulsg(s,y))
#define ldivsg(s,y)         (lopsg2(gdiv,s,y))
#define ldivgs(x,s)         ((plong)gdivgs(x,s))
#define lmodsg(s,y)         (lopsg2(gmod,s,y))
#define lmodgs(y,s)         (lopgs2(gmod,y,s))
#define ldiventsg(s,y)      (lopsg2(gdivent,s,y))
#define ldiventgs(y,s)      (lopgs2(gdivent,y,s))
#define lminsg(s,y)         (lopsg2(gmin,s,y))
#define lmings(y,s)         (lopgs2(gmin,y,s))
#define lmaxsg(s,y)         (lopsg2(gmax,s,y))
#define lmaxgs(y,s)         (lopgs2(gmax,y,s))


#define mppiz(x)              (gop0z(mppi,x))
#define mpeulerz(x)           (gop0z(mpeuler,x))
#define mpsqrtz(x,y)        (gop1z(mpsqrt,x,y))
#define mpexpz(x,y)         (gop1z(mpexp,x,y))
#define mpexp1z(x,y)        (gop1z(mpexp1,x,y))
#define mplogz(x,y)         (gop1z(mplog,x,y))
#define mpcosz(x,y)         (gop1z(mpcos,x,y))
#define mpsinz(x,y)         (gop1z(mpsin,x,y))
#define autz(x,y)           (gop1z(mpaut,x,y))
#define mptanz(x,y)         (gop1z(mptan,x,y))
#define mpatanz(x,y)        (gop1z(mpatan,x,y))
#define mpasinz(x,y)        (gop1z(mpasin,x,y))
#define mpacosz(x,y)        (gop1z(mpacos,x,y))
#define mpchz(x,y)          (gop1z(mpch,x,y))
#define mpshz(x,y)          (gop1z(mpsh,x,y))
#define mpthz(x,y)          (gop1z(mpth,x,y))
#define mpathz(x,y)         (gop1z(mpath,x,y))
#define mpashz(x,y)         (gop1z(mpash,x,y))
#define mpachz(x,y)         (gop1z(mpach,x,y))
#define mpgammaz(x,y)       (gop1z(mpgamma,x,y))
#define mpargz(x,y,z)      (gop2z(mparg,x,y,z))
#define mpfactz(s,y)        (gops1z(mpfact,s,y))

#define gredz(x,y)          (gop1z(gred,x,y))
#define gnegz(x,y)          (gop1z(gneg,x,y))
#define gabsz(x,y)          (gop1z(gabs,x,y))
#define gmaxz(x,y,z)       (gop2z(gmax,x,y,z))
#define gminz(x,y,z)       (gop2z(gmin,x,y,z))
#define gaddz(x,y,z)       (gop2z(gadd,x,y,z))
#define gsubz(x,y,z)       (gop2z(gsub,x,y,z))
#define gmulz(x,y,z)       (gop2z(gmul,x,y,z))
#define gdivz(x,y,z)       (gop2z(gdiv,x,y,z))
#define gdeucz(x,y,z)      (gop2z(gdeuc,x,y,z))
#define gmodz(x,y,z)       (gop2z(gmod,x,y,z))
#define gshiftz(x,s,z)      (gops2gsz(gshift,x,s,z))
#define gmul2nz(x,s,z)      (gops2gsz(gmul2n,x,s,z))
#define gaddsg(s,y)         (gopsg2(gadd,s,y))
#define gaddgs(y,s)         (gopsg2(gadd,s,y))
#define gsubsg(s,y)         (gopsg2(gsub,s,y))
#define gsubgs(y,s)         (gopgs2(gsub,y,s))
#define gcmpsg(s,y)         (-opgs2(gcmp,y,s))
#define gcmpgs(y,s)         (opgs2(gcmp,y,s))
#define gegalsg(s,y)        (opgs2(gegal,y,s))
#define gegalgs(y,s)        (opgs2(gegal,y,s))
#define gmulgs(y,s)         (gmulsg(s,y))
#define gdivsg(s,y)         (gopsg2(gdiv,s,y))
#define gdiventsg(s,y)      (gopsg2(gdivent,s,y))
#define gdiventgs(y,s)      (gopgs2(gdivent,y,s))
#define gmodsg(s,y)         (gopsg2(gmod,s,y))
#define gmodgs(y,s)         (gopgs2(gmod,y,s))
#define gminsg(s,y)         (gopsg2(gmin,s,y))
#define gmings(y,s)         (gopgs2(gmin,y,s))
#define gmaxsg(s,y)         (gopsg2(gmax,s,y))
#define gmaxgs(y,s)         (gopgs2(gmax,y,s))


#define gaddsgz(s,y,z)    (gopsg2z(gadd,s,y,z))
#define gaddgsz(y,s,z)    (gopsg2z(gadd,s,y,z))
#define gsubsgz(s,y,z)    (gopsg2z(gsub,s,y,z))
#define gsubgsz(y,s,z)    (gopgs2z(gsub,y,s,z))
#define gmulsgz(s,y,z)    (gops2sgz(gmulsg,s,y,z))
#define gmulgsz(y,s,z)    (gops2sgz(gmulsg,s,y,z))
#define gdivsgz(s,y,z)    (gopsg2z(gdiv,s,y,z))
#define gdivgsz(y,s,z)    (gops2gsz(gdivgs,y,s,z))
#define gdiventsgz(s,y,z) (gopsg2z(gdivent,s,y,z))
#define gdiventgsz(y,s,z) (gopgs2z(gdivent,y,s,z))
#define gmodsgz(s,y,z)    (gopsg2z(gmod,s,y,z))
#define gmodgsz(y,s,z)    (gopgs2z(gmod,y,s,z))
#define gminsgz(s,y,z)    (gopsg2z(gmin,s,y,z))
#define gmingsz(y,s,z)    (gopgs2z(gmin,y,s,z))
#define gmaxsgz(s,y,z)    (gopsg2z(gmax,s,y,z))
#define gmaxgsz(y,s,z)    (gopgs2z(gmax,y,s,z))

#define coeff(a,i,j)      (*((plong*)(*(a+(j)))+(i)))
#define coef1(a,i,j)      (*((plong*)(*(a+(j)+1))+(i)+1))
#define bern(i)         (bernzone + (i)*(*(bernzone + 2)) + 3)

#define isonstack(x)   (RAVYZARC=(GEN)(x),((RAVYZARC>=(GEN)bot)&&(RAVYZARC<(GEN)top)))
#define copyifstack(x) (RAVYZARC=(GEN)(x),((RAVYZARC>=(GEN)bot)&&(RAVYZARC<(GEN)top))?lcopy(RAVYZARC):(plong)RAVYZARC)


#define odd(x)                (x & 1)
#define mpodd(x) (signe(x) && odd(mant(x,lgef(x) - 2)))
     
/* alglin.c */
     
GEN     gtrans(),gscalmat(),gscalsmat(),gaddmat(),gaddsmat();
GEN     ker(),keri(),kerreel(),eigen(),hess(),carhess();
GEN     gauss(),invmat(),det(),detreel(),det2(),caract(),caradj(),adj(),trace();
GEN     assmat(),gnorm(),gnorml2(),gconj(),concat(),idmat();
GEN     extract(),matextract(),gtomat(),invmulmat(),invmulmatreel(),invmatreel();
GEN     sqred(),sqred1(),signat(),jacobi();
plong    rank();

/* anal.c */
     
GEN     lisexpr(),readexpr(),lisseq(),readseq();
     
/* arith.c */
     
GEN     racine(),mppgcd(),mpfact(),sfcont(),fc(),bezout(),chinois();
GEN     mpinvmod(),puissmodulo(),fibo(),bigprem(),prime(),primes();
GEN     phi(),decomp(),auxdecomp(),smallfact(),boundfact(),sumdiv(),sumdivk(),numbdiv();
GEN     ellfacteur(),classno(),classno2(),classno3(),fundunit(),regula();
GEN     compose(),sqcomp(),qf(),compose2(),sqcomp2(),qfred1(),primeform();
GEN     binaire(),order(),gener(),divisors();
     
plong    kronecker(),krosg(),krogs(),kross(),kro8();
plong    mu(),omega(),bigomega(),hil(),carreparfait();
plong    isprime(),ispsp(),issquarefree(),isfundamental();
byteptr initprimes();

/* base.c */

GEN     base(),discf(),hnf(),smith();

/* bibli1.c */
     
GEN     tayl(),legendre(),tchebi(),hilb(),pasc(),laplace();
GEN     gprec(),convol(),ggrando(),gconvsp(),gaminc();
GEN     lll(),lllrat(),lllgram(),binome(),gscal();
GEN     lindep(),lindep2(),algdep(),changevar(),ordred();
GEN     polrecip(),reorder(),sort(),indexsort(),polred(),polsym();

     
/* bibli2.c */

GEN     somme(),produit(),suminf(),prodinf(),prodinf1(),prodeuler();
GEN     vecteur(),vvecteur(),matrice(),divsomme();
GEN     qromb(),qromo(),qromi(),rombint();
GEN     polint(),plot(),ploth(),ploth2(),zbrent(),sumalt(),sumpos();
GEN     forpari(),forstep(),fordiv(),forprime(),ghell(),ghell2(),ghell3();
GEN     initell(),zell(),coordch(),pointch();
GEN     addell(),subell(),powell(),matell(),ordell(),apell(),apell1(),apell2();
int     oncurve();
void    eulsum();

/* es.c */

void    sor(),brute(),texe();

/* gen1.c */

GEN     gadd(),gsub(),gmul(),gdiv();

/* gen2.c gen3.c */

GEN     gcopy(),gclone(),cgetg(),cgetp(),gaddpex();
GEN     greffe(),gopsg2(),gopgs2(),co8(),cvtop(),compo(),gsqr();
GEN     gneg(),gabs(),gmax(),gmin(),ginv(),denom(),numer(),lift();
GEN     gmulsg(),gdivgs(),gmodulo(),gmodulcp();
GEN     gmod(),gshift(),gmul2n(),gpuigs(),gpui();
GEN     gsubst(),deriv(),integ(),recip(),ground(),gcvtoi(),grndtoi();
GEN     gceil(),gfloor(),gfrac(),gtrunc(),gdivent(),gdiventres();
GEN     gdivmod(),geval(),glt(),gle(),ggt(),gge(),geq(),gne();
GEN     gand(),gor(),glength(),truecoeff();
GEN     gtopoly(),gtoser(),gtovec(),dbltor();

void    gop0z(),gop1z(),gop2z(),gops2gsz(),gops2sgz(),gops2ssz();
void    gop3z(),gops1z(),gopsg2z(),gopgs2z();
plong    taille(),gexpo(),gsigne(),gcmp(),gtolong(),gegal();
plong    polegal(),tdeg(),ismonome(),iscomplex(),gvar(),ggval();
double  rtodbl(),gtodouble();

/* init.c */

GEN     newbloc(),geni();
plong    marklist();
void    init(),killbloc(),newvalue(),killvalue();
void    err(),recover(),changevalue();

/* polarit.c */
     
GEN     ginvmod(),gred(),gdeuc(),gres(),poldivres();
GEN     poleval(),roots(),ggcd(),gbezout(),vecbezout(),glcm();
GEN     polgcd(),srgcd(),polgcdnun(),content(),primpart(),psres();
GEN     factmod(),rootmod(),decpol(),factor(),factpol(),factpol2();
GEN     subres(),discsr(),quadpoly(),quadgen(),bezoutpol(),polinvmod();
plong    sturm();
void    gredsp();
     
/* trans.c */
     
GEN     greal(),gimag(),teich(),agm(),palog();
GEN     mpsqrt(),gsqrt(),mpexp1(),mpexp(),gexp(),logagm(),glogagm();
GEN     mplog(),glog(),mpsc1(),mpcos(),gcos(),mpsin(),gsin();
GEN     mpaut(),mptan(),gtan(),mpatan(),gatan(),mpasin(),gasin();
GEN     mpacos(),gacos(),mparg(),mpch(),gch(),mpsh(),gsh();
GEN     mpth(),gth(),mpath(),gath(),mpash(),gash();
GEN     garg(),sarg(),mppsi(),gpsi(),transc(),kbessel(),hyperu();
GEN     cxpsi(),jbesselh(),gzeta();
GEN     kbessel2(),eint1(),gerfc(),eta(),jell(),wf2(),wf();
GEN     incgam(),incgam1(),incgam2(),incgam3(),bernreal(),bernvec();
GEN     mpach(),gach(),mpgamma(),cxgamma(),ggamma(),mpgamd(),ggamd(),mppi();
GEN     mpeuler(),polylog(),dilog(),polylogd(),polylogp();
GEN     theta(),thetanullk();

void    constpi(),consteuler(),gsincos();

/* version.c */

GEN     gerepilc();
void    printversion();
