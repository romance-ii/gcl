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
/*    if (link_info.hash) */
/*      bfd_link_hash_table_free(bself,link_info.hash); */
  if (!(link_info.hash = bfd_link_hash_table_create (bself)))
    FEerror("Cannot make hash table",0);
  if (!bfd_link_add_symbols(bself,&link_info))
    FEerror("Cannot add self symbols\n",0);
  if ((u=bfd_get_symtab_upper_bound(bself))<0)
    FEerror("Cannot get self's symtab upper bound",0);
#ifdef HAVE_ALLOCA
  q=(asymbol **)alloca(u);
#else
  q=(asymbol **)malloc(u);
#endif
  if ((v=bfd_canonicalize_symtab(bself,q))<0)
    FEerror("Cannot canonicalize self's symtab",0);
  for (u=0;u<v;u++) {
    char *c=NULL;
    struct bfd_link_hash_entry *h;

    if (!*q[u]->name)
      continue;

    if (strncmp(q[u]->section->name,"*UND*",5))
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
      h->type=bfd_link_hash_defined;
      if (!q[u]->section)
	FEerror("Symbol ~S is missing section",1,make_simple_string(q[u]->name));
      h->u.def.value=q[u]->value+q[u]->section->vma;
      h->u.def.section=q[u]->section;
    }

    if (c) {
      *c='@';
      c=NULL;
    }
  }

#ifndef HAVE_ALLOCA
  free(q);
#endif

  return 0;
  
}

#endif /* special_rsym */

void
build_symbol_table(void) { 


  printf("Building symbol table for %s ..\n",kcl_self);fflush(stdout);

#ifdef SPECIAL_RSYM
  {

    char tmpfile1[80],command[300];
    snprintf(tmpfile1,sizeof(tmpfile1),"rsym%d",getpid());
#ifndef STAND
    coerce_to_filename(symbol_value(sSAsystem_directoryA),
		       system_directory);
#endif
#ifndef RSYM_COMMAND
    snprintf(command,sizeof(command),"%srsym %s %s",system_directory,kcl_self,tmpfile1);
#else
    RSYM_COMMAND(command,system_directory,kcl_self,tmpfile1);
#endif   
    if (system(command) != 0)
#ifdef STAND
      FEerror("The rsym command %s failed .",1,command);
#else
    FEerror("The rsym command ~a failed .",1,
	    make_simple_string(command));
#endif
    read_special_symbols(tmpfile1);
    unlink(tmpfile1);
    qsort((char*)(c_table.ptable),(int)(c_table.length),sizeof(struct node),node_compare);
  }
#else /* special_rsym */

  build_symbol_table_bfd();

#endif

}

