
/* 
Copyright William Schelter. All rights reserved. */



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
       

build_symbol_table()
{ char tmpfile1[50];
  char command [250];
  printf("Building symbol table for %s ..\n",kcl_self);fflush(stdout);
  sprintf(tmpfile1,"rsym%d",getpid());
#ifndef STAND
  coerce_to_filename(symbol_value(sSAsystem_directoryA),
		     system_directory);
#endif
#ifndef RSYM_COMMAND
  sprintf(command,"%srsym %s %s",system_directory,kcl_self,tmpfile1);
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

