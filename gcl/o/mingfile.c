#include "include.h"
#include "windows.h"

extern object truename(object);
extern object make_pathname();
void Ldirectory ( void )
{
	char filename[MAXPATHLEN];
	object *top=vs_top;
	object path;
	check_arg(1);
	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	path = vs_base[0] = coerce_to_pathname(vs_base[0]);
	
	if (vs_base[0]->pn.pn_name==Cnil && vs_base[0]->pn.pn_type==Cnil) {
		coerce_to_filename(vs_base[0], filename);
		strcat(filename, "*.*");
	} else if (vs_base[0]->pn.pn_name==Cnil) {
		vs_base[0]->pn.pn_name = sKwild;
		coerce_to_filename(vs_base[0], filename);
		vs_base[0]->pn.pn_name = Cnil;
	} else if (vs_base[0]->pn.pn_type==Cnil) {
		coerce_to_filename(vs_base[0], filename);
		strcat(filename, ".*");
	} else
		coerce_to_filename(vs_base[0], filename);
	{ WIN32_FIND_DATA data;
	  HANDLE dirHandle = FindFirstFile(filename,&data);

	if (dirHandle== INVALID_HANDLE_VALUE) {
	  vs_base[0]=Cnil; return;
	} else {
	  do {
	    if (strcmp(data.cFileName,"..") != 0 && strcmp(data.cFileName,".") != 0 ) {
	      object name = make_simple_string(data.cFileName);
	      object new =  coerce_to_pathname(name);
	      vs_push(make_pathname(path->pn.pn_host,
				    path->pn.pn_device,
				    path->pn.pn_directory,
				    new->pn.pn_name,
				    new->pn.pn_type,
				    new->pn.pn_version));
	    }
	  } while (FindNextFile(dirHandle,&data));
	  FindClose(dirHandle);
	}
	vs_push(Cnil);
	while (vs_top > top + 1)
		stack_cons();
	vs_base = top;

	}
}

