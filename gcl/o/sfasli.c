/* 
Copyright William Schelter. All rights reserved. */

#if !defined(HAVE_LIBBFD) && !defined(SPECIAL_RSYM)
#error Need either BFD or SPECIAL_RSYM
#endif

#ifdef SPECIAL_RSYM

int node_compare();


struct node *
find_sym_ptable(name)
  char *name;
  {struct node joe,*answ;
   joe.string=name;
   answ =  (struct node *)  bsearch((char *)(&joe),(char*) (c_table.ptable),
			 c_table.length,
			 sizeof(struct node), node_compare);

   return answ;
 }
       

#else

static MY_BFD_BOOLEAN
bfd_hash_transfer(struct bfd_link_hash_entry *h,void *v) {
  
  if (h->type==bfd_link_hash_defined)
    sethash(make_simple_string(h->root.string),
	    sSAlink_hash_tableA->s.s_dbind,
	    make_fixnum(h->u.def.value+h->u.def.section->vma));

  return MY_BFD_TRUE;
  
}  

#ifdef GCL_GPROF
extern void _mcount();
/* int */
/* mcount_wrapper(unsigned long u1,unsigned long u2) { */
/*   return _mcount(u1,u2); */
/* } */
#endif

/* Replace this with gcl's own hash structure at some point */
static int
build_symbol_table_bfd(void) {

  int u,v;
  asymbol **q;
  
  bfd_init();
  if (!(bself=bfd_openr(kcl_self,0)))
    FEerror("Cannot open self\n",0);
  if (!bfd_check_format(bself,bfd_object))
    FEerror("I'm not an object",0);
  if (!(link_info.hash = bfd_link_hash_table_create (bself)))
    FEerror("Cannot make hash table",0);
  if (!bfd_link_add_symbols(bself,&link_info))
    FEerror("Cannot add self symbols\n",0);
  if ((u=bfd_get_symtab_upper_bound(bself))<0)
    FEerror("Cannot get self's symtab upper bound",0);

#ifdef HAVE_ALLOCA
  q=(asymbol **)ZALLOCA(u);
#else
  q=(asymbol **)malloc(u);
#endif
  if ((v=bfd_canonicalize_symtab(bself,q))<0)
    FEerror("Cannot canonicalize self's symtab",0);

  for (u=0;u<v;u++) {
    char *c=NULL;
    struct bfd_link_hash_entry *h;

    if (!*q[u]->name || !q[u]->section)
      continue;

    if (strncmp(q[u]->section->name,"*UND*",5) && !(q[u]->flags & BSF_WEAK))
      continue;

    if ((c=(char *)strstr(q[u]->name,"@@"))) {
      *c=0;
      if (!(h=bfd_link_hash_lookup(link_info.hash,q[u]->name,MY_BFD_TRUE,MY_BFD_TRUE,MY_BFD_TRUE)))
	FEerror("Cannot make new hash entry",0);
      h->type=bfd_link_hash_new;
    } else if 
      (!(h=bfd_link_hash_lookup(link_info.hash,q[u]->name,MY_BFD_FALSE,MY_BFD_FALSE,MY_BFD_TRUE)) &&
       !(h=bfd_link_hash_lookup(link_info.hash,q[u]->name,MY_BFD_TRUE,MY_BFD_TRUE,MY_BFD_TRUE)))
	FEerror("Cannot make new hash entry",0);

    if (h->type!=bfd_link_hash_defined) {
      if (!q[u]->section)
	FEerror("Symbol ~S is missing section",1,make_simple_string(q[u]->name));
      if (q[u]->value) {
	h->type=bfd_link_hash_defined;
	h->u.def.value=q[u]->value+((q[u]->flags & BSF_WEAK) ? -q[u]->section->vma : q[u]->section->vma);
	h->u.def.section=q[u]->section;
      }
    }

    if (c) {
      *c='@';
      c=NULL;
    }
  }

  {
    
    extern object sLequal;
    object *ovsb=vs_base,*ovst=vs_top;
    
    vs_base=vs_top;
    vs_push(sKtest);
    vs_push(sLequal);
    Lmake_hash_table();
    sSAlink_hash_tableA->s.s_dbind=vs_base[0];
    vs_top=ovst;
    vs_base=ovsb;

    bfd_link_hash_traverse(link_info.hash,bfd_hash_transfer,NULL);

#ifdef GCL_GPROF
    sethash(make_simple_string("_mcount"),
	    sSAlink_hash_tableA->s.s_dbind,
	    make_fixnum((fixnum)_mcount));
    sethash(make_simple_string("mcount"),
	    sSAlink_hash_tableA->s.s_dbind,
	    make_fixnum((fixnum)_mcount));

    if ((fixnum)_mcount<DBEGIN || (fixnum)_mcount>=(DBEGIN+MAXPAGE*PAGESIZE))
      fprintf(stderr,"Warning, symbol address for mcount off core\n");
#endif

    bfd_close(bself);
    bself=NULL;
    link_info.hash=NULL;

  }





#ifndef HAVE_ALLOCA
  free(q);
#endif

  return 0;
  
}

#endif /* special_rsym */

LFD(build_symbol_table)(void) { 


  printf("Building symbol table for %s ..\n",kcl_self);fflush(stdout);

#ifdef SPECIAL_RSYM
  {

    char tmpfile1[80],command[300];

    snprintf(tmpfile1,sizeof(tmpfile1),"rsym%d",(int)getpid());
#ifndef STAND
    coerce_to_filename(symbol_value(sSAsystem_directoryA),
		       system_directory);
#endif
#ifndef RSYM_COMMAND
    snprintf(command,sizeof(command),"%s/rsym %s %s",system_directory,kcl_self,tmpfile1);
#else
    RSYM_COMMAND(command,system_directory,kcl_self,tmpfile1);
#endif
    if (system(command) != 0)
#ifdef STAND
      FEerror("The rsym command %s failed.",1,command);
#else
    FEerror("The rsym command ~a failed.",1,
	    make_simple_string(command));
#endif
    read_special_symbols(tmpfile1);
    unlink(tmpfile1);
    qsort((char*)(c_table.ptable),(int)(c_table.length),sizeof(struct node),node_compare);

/*     { */
/*       struct node *p,*pe; */
/*       for (p=*c_table.ptable,pe=p+c_table.length;p<pe;p++) { */
/* 	unsigned long pa; */
/* 	if (!my_plt(p->string,&pa)) { */
/* /\* 	  printf("my_plt %s %p %p\n",p->string,(void *)pa,(void *)p->address); *\/ */
/* 	  if (p->address && p->address!=pa) */
/* 	    FEerror("plt address mismatch",0); */
/* 	  else */
/* 	    p->address=pa; */
/* 	} */
/*       } */
/*     } */

  }
#else /* special_rsym */

  build_symbol_table_bfd();

#endif

}

void
gcl_init_sfasl() {

#ifdef SFASL
 make_si_function("BUILD-SYMBOL-TABLE",build_symbol_table);
#endif

}
