static ul gpd,ggot,ggote; static Rel *hr;

static int
write_stub(ul s,ul *got,ul *gote) {

  *gote=(ul)(gote+2);
  *++gote=s;
  s=((void *)gote-(void *)got);
  *++gote=(0x23<<26)|(0x1c<<21)|(0x19<<16)|s;
  *++gote=(0x23<<26)|(0x19<<21)|(0x19<<16)|0;
  *++gote=0x03200008;
  *++gote=0x00200825;

  return 0;
  
}

static int
make_got_room_for_stub(Shdr *sec1,Shdr *sece,Sym *sym,const char *st1,ul *gs) {

  Shdr *ssec=sec1+sym->st_shndx;
  struct node *a;
  if ((ssec>=sece || !ALLOC_SEC(ssec)) && 
      (a=find_sym_ptable(st1+sym->st_name)) &&
      a->address>=ggot && a->address<ggote)
    (*gs)+=5;

  return 0;

}

static int
find_special_params(void *v,Shdr *sec1,Shdr *sece,const char *sn,
		    const char *st1,Sym *ds1,Sym *dse,Sym *sym,Sym *syme) {
  
  Shdr *sec;
  ul *q,gotsym=0,locgotno=0,stub,stube;
  void *p,*pe;

  massert(sec=get_section(".dynamic",sec1,sece,sn));
  for (p=(void *)sec->sh_addr,pe=p+sec->sh_size;p<pe;p+=sec->sh_entsize) {
    q=p;
    if (q[0]==DT_MIPS_GOTSYM)
      gotsym=q[1];
    if (q[0]==DT_MIPS_LOCAL_GOTNO)
      locgotno=q[1];
    
  }
  massert(gotsym && locgotno);

  massert(sec=get_section(".MIPS.stubs",sec1,sece,sn));
  stub=sec->sh_addr;
  stube=sec->sh_addr+sec->sh_size;
      
  massert(sec=get_section(".got",sec1,sece,sn));
  ggot=sec->sh_addr+locgotno*sec->sh_entsize;
  ggote=sec->sh_addr+sec->sh_size;

  for (ds1+=gotsym,sym=ds1;sym<dse;sym++)
    if (!sym->st_value || (sym->st_value>=stub && sym->st_value<stube))
      sym->st_value=ggot+(sym-ds1)*sec->sh_entsize;

  return 0;

}

static int
label_got_symbols(void *v1,Shdr *sec1,Shdr *sece,Sym *sym1,Sym *syme,const char *st1,ul *gs) {

  Rel *r;
  Sym *sym;
  Shdr *sec;
  void *v,*ve;
  ul q;

  for (q=0,sym=sym1;sym<syme;sym++)
    if (!strcmp(st1+sym->st_name,"_gp_disp")) {
      sym->st_other=1;
      q++;
    } else if (!strcmp(st1+sym->st_name,"__gnu_local_gp")) {
      sym->st_other=2;
      q++;
    }
  massert(q<=1);
  
  for (sym=sym1;sym<syme;sym++)
    sym->st_size=0;

  for (*gs=0,sec=sec1;sec<sece;sec++)
    if (sec->sh_type==SHT_REL)
      for (v=v1+sec->sh_offset,ve=v+sec->sh_size,r=v;v<ve;v+=sec->sh_entsize,r=v)

	if (ELF_R_TYPE(r->r_info)==R_MIPS_CALL16||
	    ELF_R_TYPE(r->r_info)==R_MIPS_GOT16) {

	  sym=sym1+ELF_R_SYM(r->r_info);

	  if (!sym->st_size) { 
	    sym->st_size=++*gs; 
	    massert(!make_got_room_for_stub(sec1,sece,sym,st1,gs));
	  }

	}
  
  return 0;
  
}

#define FIX_HIDDEN_SYMBOLS(st1_,a_,sym1_,sym_,syme_)				\
  ({Sym *p;const char *n=(st1_)+(sym_)->st_name,*s=".pic.",*q;ul z=strlen(s);	\
    if (ELF_ST_VISIBILITY((sym_)->st_other)==STV_HIDDEN) {		\
      for (p=(sym1_);p<(syme_);p++)					\
	if (!strncmp(s,(q=(st1_)+p->st_name),z) && !strcmp(n,q+z)) {	\
	  (*(a_))->address=p->st_value;					\
	  break;							\
	}}})
