/*
 Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

This file is part of GNU Common Lisp, herein referred to as GCL

GCL is free software; you can redistribute it and/or modify it under
the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
License for more details.

You should have received a copy of the GNU Library General Public License 
along with GCL; see the file COPYING.  If not, write to the Free Software
Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

*/

#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define IN_UNIXFSYS
#include "include.h"
#include <sys/types.h>
#include <sys/stat.h>
#ifndef NO_PWD_H
#include <pwd.h>
#endif

#ifdef BSD
#define HAVE_RENAME
#endif

void Ldirectory(void);



#ifdef NEED_GETWD
#include <sys/dir.h>


#ifndef HAVE_GETCWD
char dotdot[3*16+2] = "../../../../../../../../../../../../../../../../.";
#include <mnttab.h>
static char *getwd_buf;
static int getwd_bufp;

static char *
getwd(buffer)
char *buffer;
{
	getwd_buf = buffer;
	getwd1(0);
	if (getwd_bufp == 0)
		getwd_buf[getwd_bufp++] = '/';
	getwd_buf[getwd_bufp] = '\0';
	return(getwd_buf);
}

getwd1(n)
int n;
{
	struct stat st, dev_st;
	struct direct dir;
	ino_t ino;
	struct mnttab mnt;
	FILE *fp;
	register int i;
	char buf[BUFSIZ];
	static char dev_name[64];

	if (stat(dotdot+(16-n)*3, &st) < 0)
		FEerror("Can't get the current working directory.", 0);
	ino = st.st_ino;
	if (ino == 2)
		goto ROOT;
	getwd1(n+1);
	fp = fopen(dotdot+(16-n-1)*3, "r");
	if (fp == NULL)
		FEerror("Can't get the current working directory.", 0);
	setbuf(fp, buf);
	fread(&dir, sizeof(struct direct), 1, fp);
	fread(&dir, sizeof(struct direct), 1, fp);
	for (;;) {
		if (fread(&dir, sizeof(struct direct), 1, fp) <= 0)
			break;
		if (dir.d_ino == ino)
			goto FOUND;
	}
	fclose(fp);
	FEerror("Can't get the current working directory.", 0);

FOUND:
	fclose(fp);
	getwd_buf[getwd_bufp++] = '/';
	for (i = 0;  i < DIRSIZ && dir.d_name[i] != '\0';  i++)
		getwd_buf[getwd_bufp++] = dir.d_name[i];
	return;

ROOT:
	fp = fopen("/etc/mnttab", "r");
	if (fp == NULL)
		FEerror("Can't get the current working directory.", 0);
	setbuf(fp, buf);
	for (;;) {
		if (fread(&mnt, sizeof(struct mnttab), 1, fp) <= 0)
			break;
		if (mnt.mt_dev[0] != '/') {
			strcpy(dev_name, "/dev/dsk/");
			strcat(dev_name, mnt.mt_dev);
			stat(dev_name, &dev_st);
		} else
			stat(mnt.mt_dev, &dev_st);
		if (dev_st.st_rdev == st.st_dev)
			goto DEV_FOUND;
	}
	fclose(fp);
	getwd_bufp = 0;
	return;

DEV_FOUND:
	fclose(fp);
	getwd_bufp = 0;
	for (i = 0;  mnt.mt_filsys[i] != '\0';  i++)
		getwd_buf[i] = mnt.mt_filsys[i];
	/* BUG FIX by Grant J. Munsey */
	if (i == 1 && *getwd_buf == '/')
		i = 0;	/* don't add an empty directory name */
	/* END OF BUG FIX */
	getwd_bufp = i;
}
#endif   /* not HAVE_GETCWD */
#endif

#ifndef MAXPATHLEN
#define MAXPATHLEN 512
#endif


#ifdef HAVE_GETCWD
char *
getwd(char *buffer)
{
#ifndef _WIN32    
	char *getcwd(char *, size_t);
#endif
	return(getcwd(buffer, MAXPATHLEN));
}
#endif

#ifdef DGUX



















































#endif

void
coerce_to_filename(object pathname, char *p)
{
  object namestring;
  namestring = coerce_to_namestring(pathname);
#ifndef NO_PWD_H  
  if(namestring->st.st_self[0]=='~')
    {char name[20];
     int n;
     char *q = namestring->st.st_self;
#ifndef __STDC__
     extern struct passwd *getpwuid();
     extern struct passwd *getpwnam();
#endif

     struct passwd *pwent;
     int m=0;
     q=namestring->st.st_self;
     for (n=0; n< namestring->st.st_fillp; n++)
       if (q[n]=='/') break;
     bcopy(q+1,name,n-1);
     name[n-1]= 0;
     pwent = (n==1 ? getpwuid(getuid()) : getpwnam(name));
     if (pwent==0 || ((m = strlen(pwent->pw_dir))
		     && (m + namestring->st.st_fillp -n) >= MAXPATHLEN -16))
       {FEerror("Can't expand pathname ~a", 1,namestring);}
     bcopy(pwent->pw_dir,p,m);
     bcopy(namestring->st.st_self+n,p+m,namestring->st.st_fillp-n);
     p[m+namestring->st.st_fillp-n]=0;}
  else
#endif
    {if (namestring->st.st_fillp >= MAXPATHLEN - 16) {
      vs_push(namestring);
      FEerror("Too long filename: ~S.", 1, namestring);}
     bcopy(namestring->st.st_self,p,namestring->st.st_fillp);
     p[namestring->st.st_fillp]=0;}
#ifdef FIX_FILENAME
    FIX_FILENAME(pathname,p);
#endif
    
}



object
truename(object pathname)
{
	register char *p, *q;
	char filename[MAXPATHLEN];
	char truefilename[MAXPATHLEN];
	char current_directory[MAXPATHLEN];
	char directory[MAXPATHLEN];
	static char *getwd(char *buffer);
	coerce_to_filename(pathname, filename);


	
	for (p = filename, q = 0;  *p != '\0';  p++)
		if (*p == '/')
			q = p;
	if (q == filename) {
		q++;
		getwd(current_directory);
		p = "/";
	} else if (q == 0) {
		q = filename;
		p = getwd(current_directory);
	} else
#ifdef __MINGW32__
	  if (q[-1]==':') {
	    int current = (q++, q[0]);
	    q[0]=0;
	    getwd(current_directory);
	    if (chdir(filename) < 0)
	      FEerror("Cannot get the truename of ~S.", 1, pathname);
	    p = getwd(directory);
	    if (p[1]==':' && p[2]=='\\' && p[3]==0) p[2]=0;
	    q[0]=current;
          }
	  else
#endif	
	  {
		*q++ = '\0';
		getwd(current_directory);
		if (chdir(filename) < 0)
		    FEerror("Cannot get the truename of ~S.", 1, pathname);
		p = getwd(directory);
	}
	if (p[0] == '/' && p[1] == '\0') {
		if (strcmp(q, "..") == 0)
			strcpy(truefilename, "/.");
		else
			sprintf(truefilename, "/%s", q);
	} else if (strcmp(q, ".") == 0)
		strcpy(truefilename, p);
	else if (strcmp(q, "..") == 0) {
		for (q = p + strlen(p);  *--q != '/';) ;
		if (p == q)
			strcpy(truefilename, "/.");
		else {
			*q = '\0';
			strcpy(truefilename, p);
			*q = '/';
		}
	} else
		sprintf(truefilename, "%s/%s", p, q);
	chdir(current_directory);
	vs_push(make_simple_string(truefilename));
	pathname = coerce_to_pathname(vs_head);
	vs_popp;
	return(pathname);
}
object sSAallow_gzipped_fileA;

bool
file_exists(object file)
{
	char filename[MAXPATHLEN];
	struct stat filestatus;

	coerce_to_filename(file, filename);
	if (stat(filename, &filestatus) >= 0)
	  {
#ifdef AIX
	    /* if /tmp/foo is not a directory /tmp/foo/ should not exist */
	    if (filename[strlen(filename)-1] == '/' &&
		!( filestatus.st_mode & S_IFDIR))
		return(FALSE);
#endif	    

	    return TRUE;
	  }
	else
	  if (sSAallow_gzipped_fileA->s.s_dbind != sLnil
	      && (strcat(filename,".gz"),
		  stat(filename, &filestatus) >= 0))
	      
	      return TRUE;

	else
		return(FALSE);
}

FILE *
backup_fopen(char *filename, char *option)
{
	char backupfilename[MAXPATHLEN];
	char command[MAXPATHLEN * 2];

	strcat(strcpy(backupfilename, filename), ".BAK");
	sprintf(command, "mv %s %s", filename, backupfilename);
	system(command);
	return(fopen(filename, option));
}

int
file_len(FILE *fp)
{
	struct stat filestatus;

	if (fstat(fileno(fp), &filestatus)==0) 
	return(filestatus.st_size);
	else return 0;
}

void
Ltruename(void)
{
	check_arg(1);
	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	vs_base[0] = truename(vs_base[0]);
}

void
Lrename_file(void)
{
	char filename[MAXPATHLEN];
	char newfilename[MAXPATHLEN];

	check_arg(2);
	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	check_type_or_Pathname_string_symbol(&vs_base[1]);
	coerce_to_filename(vs_base[0], filename);
	vs_base[0] = coerce_to_pathname(vs_base[0]);
	vs_base[1] = coerce_to_pathname(vs_base[1]);
	vs_base[1] = merge_pathnames(vs_base[1], vs_base[0], Cnil);
	coerce_to_filename(vs_base[1], newfilename);
#ifdef HAVE_RENAME
	if (rename(filename, newfilename) < 0)
		FEerror("Cannot rename the file ~S to ~S.",
			2, vs_base[0], vs_base[1]);
#else
	sprintf(command, "mv %s %s", filename, newfilename);
	system(command);
#endif
	vs_push(vs_base[1]);
	vs_push(truename(vs_base[0]));
	vs_push(truename(vs_base[1]));
	vs_base += 2;
}


DEFUN_NEW("SETENV",object,fSsetenv,SI,2,2,NONE,OO,OO,OO,OO,(object variable,object value),"Set environment VARIABLE to VALUE")

{

  int res = -1;
#ifdef HAVE_SETENV 
  res = setenv(object_to_string(variable),object_to_string(value),1);
#else
#ifdef HAVE_PUTENV
  {char *buf;
  char *sym=object_to_string(variable);
  char *val=object_to_string(value);
  buf = malloc(strlen(sym)+strlen(val)+5);
  sprintf(buf,"%s=%s",sym,val);
  res=putenv(buf);
  free(buf);
  }
#endif
#endif  
  RETURN1((res == 0 ? Ct : Cnil ));
}

DEFUNO_NEW("DELETE-FILE",object,fLdelete_file,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Ldelete_file,(object path),"")

{
	char filename[MAXPATHLEN];

	/* 1 args */
	check_type_or_pathname_string_symbol_stream(&path);
	coerce_to_filename(path, filename);
	if (unlink(filename) < 0)
		FEerror("Cannot delete the file ~S.", 1, path);
	path = Ct;
	RETURN1(path);
}

void
Lprobe_file(void)
{
	check_arg(1);

	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	if (file_exists(vs_base[0]))
		vs_base[0] = truename(vs_base[0]);
	else
		vs_base[0] = Cnil;
}

void
Lfile_write_date(void)
{
	char filename[MAXPATHLEN];
	struct stat filestatus;

	check_arg(1);
	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	coerce_to_filename(vs_base[0], filename);
	if (stat(filename, &filestatus) < 0) { vs_base[0] = Cnil; return;}
	vs_base[0] = unix_time_to_universal_time(filestatus.st_mtime);
}

void
Lfile_author(void)
{
#ifndef NO_PWD_H
	char filename[MAXPATHLEN];
	struct stat filestatus;
	struct passwd *pwent;
#ifndef __STDC__
	extern struct passwd *getpwuid();
#endif

	check_arg(1);
	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	coerce_to_filename(vs_base[0], filename);
	if (stat(filename, &filestatus) < 0) { vs_base[0] = Cnil; return;}
	pwent = getpwuid(filestatus.st_uid);
	vs_base[0] = make_simple_string(pwent->pw_name);
#else
	vs_base[0] = Cnil; return;
#endif	
	
}

static void
Luser_homedir_pathname(void)
{
#ifndef NO_PWD_H  
	struct passwd *pwent;
	char filename[MAXPATHLEN];
	register int i;
#ifndef __STDC__
	extern struct passwd *getpwuid();
#endif

	if (vs_top - vs_base > 1)
		too_many_arguments();
	pwent = getpwuid(getuid());
	strcpy(filename, pwent->pw_dir);
	i = strlen(filename);
	if (filename[i-1] != '/') {
		filename[i++] = '/';
		filename[i] = '\0';
	}
#else
	 char *filename= "~/" ;
#endif	
	vs_base[0] = make_simple_string(filename);
	vs_top = vs_base+1;
	vs_base[0] = coerce_to_pathname(vs_base[0]);
	
}


#ifdef BSD
void
Ldirectory(void)
{
	char filename[MAXPATHLEN];
	char command[MAXPATHLEN * 2];
	FILE *fp;
	register int i, c;
	object *top = vs_top;
	char iobuffer[BUFSIZ];
	extern FILE *popen(const char *, const char *);

	check_arg(1);

	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	vs_base[0] = coerce_to_pathname(vs_base[0]);
	if (vs_base[0]->pn.pn_name==Cnil && vs_base[0]->pn.pn_type==Cnil) {
		coerce_to_filename(vs_base[0], filename);
		strcat(filename, "*");
	} else if (vs_base[0]->pn.pn_name==Cnil) {
		vs_base[0]->pn.pn_name = sKwild;
		coerce_to_filename(vs_base[0], filename);
		vs_base[0]->pn.pn_name = Cnil;
	} else if (vs_base[0]->pn.pn_type==Cnil) {
		coerce_to_filename(vs_base[0], filename);
		strcat(filename, "*");
	} else
		coerce_to_filename(vs_base[0], filename);
	sprintf(command, "ls -d %s 2> /dev/null", filename);
	fp = popen(command, "r");
	setbuf(fp, iobuffer);
	for (;;) {
		for (i = 0;  (c = getc(fp));  i++)
			if (c <= 0)
				goto L;
			else if (c == '\n')
				break;
			else
				filename[i] = c;
		filename[i] = '\0';
		vs_push(make_simple_string(filename));
		vs_head = truename(vs_head);
	}
L:
	pclose(fp);
	vs_push(Cnil);
	while (vs_top > top + 1)
		stack_cons();
	vs_base = top;
}
#endif


#ifdef ATT
void
Ldirectory()
{
	object name, type;
	char filename[MAXPATHLEN];
	FILE *fp;
	object *top = vs_top;
	char iobuffer[BUFSIZ];
	struct direct dir;
	int i;

	check_arg(1);

	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	vs_base[0] = coerce_to_pathname(vs_base[0]);
	vs_push(vs_base[0]->pn.pn_name);
	vs_push(vs_base[0]->pn.pn_type);
	vs_base[0]->pn.pn_name = Cnil;
	vs_base[0]->pn.pn_type = Cnil;
	coerce_to_filename(vs_base[0], filename);
	type = vs_base[0]->pn.pn_type = vs_pop;
	name = vs_base[0]->pn.pn_name = vs_pop;
	i = strlen(filename);
	if (i > 1 && filename[i-1] == '/')
		filename[i-1] = '\0';
	if (i == 0)
		strcpy(filename, ".");
	fp = fopen(filename, "r");
	if (fp == NULL) {
		vs_push(make_simple_string(filename));
		FEerror("Can't open the directory ~S.", 1, vs_head);
	}
	setbuf(fp, iobuffer);
	fread(&dir, sizeof(struct direct), 1, fp);
	fread(&dir, sizeof(struct direct), 1, fp);
	filename[DIRSIZ] = '\0';
	for (;;) {
		if (fread(&dir, sizeof(struct direct), 1, fp) <=0)
			break;
		if (dir.d_ino == 0)
			continue;
		strncpy(filename, dir.d_name, DIRSIZ);
		vs_push(make_simple_string(filename));
		vs_head = coerce_to_pathname(vs_head);
		if ((name == Cnil || name == sKwild ||
		     equal(name, vs_head->pn.pn_name)) &&
		    (type == Cnil || type == sKwild ||
		     equal(type, vs_head->pn.pn_type))) {
			vs_head->pn.pn_directory
			= vs_base[0]->pn.pn_directory;
			vs_head = truename(vs_head);
		} else
			vs_pop;
	}
	fclose(fp);
	vs_push(Cnil);
	while (vs_top > top + 1)
		stack_cons();
	vs_base = top;
}
#endif


#ifdef E15
#include <sys/dir.h>
void
Ldirectory()
{
	object name, type;
	char filename[MAXPATHLEN];
	FILE *fp;
	object *top = vs_top;
	char iobuffer[BUFSIZ];
	struct direct dir;
	int i;

	check_arg(1);

	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	vs_base[0] = coerce_to_pathname(vs_base[0]);
	vs_push(vs_base[0]->pn.pn_name);
	vs_push(vs_base[0]->pn.pn_type);
	vs_base[0]->pn.pn_name = Cnil;
	vs_base[0]->pn.pn_type = Cnil;
	coerce_to_filename(vs_base[0], filename);
	type = vs_base[0]->pn.pn_type = vs_pop;
	name = vs_base[0]->pn.pn_name = vs_pop;
	i = strlen(filename);
	if (i > 1 && filename[i-1] == '/')
		filename[i-1] = '\0';
	if (i == 0)
		strcpy(filename, ".");
	fp = fopen(filename, "r");
	if (fp == NULL) {
		vs_push(make_simple_string(filename));
		FEerror("Can't open the directory ~S.", 1, vs_head);
	}
	setbuf(fp, iobuffer);
	fread(&dir, sizeof(struct direct), 1, fp);
	fread(&dir, sizeof(struct direct), 1, fp);
	filename[DIRSIZ] = '\0';
	for (;;) {
		if (fread(&dir, sizeof(struct direct), 1, fp) <=0)
			break;
		if (dir.d_ino == 0)
			continue;
		strncpy(filename, dir.d_name, DIRSIZ);
		vs_push(make_simple_string(filename));
		vs_head = coerce_to_pathname(vs_head);
		if ((name == Cnil || name == sKwild ||
		     equal(name, vs_head->pn.pn_name)) &&
		    (type == Cnil || type == sKwild ||
		     equal(type, vs_head->pn.pn_type))) {
			vs_head->pn.pn_directory
			= vs_base[0]->pn.pn_directory;
			vs_head = truename(vs_head);
		} else
			vs_pop;
	}
	fclose(fp);
	vs_push(Cnil);
	while (vs_top > top + 1)
		stack_cons();
	vs_base = top;
}
#endif


#ifdef DGUX
















































#endif

static void
siLchdir(void)
{
	char filename[MAXPATHLEN];

	check_arg(1);
	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	coerce_to_filename(vs_base[0], filename);

	if (chdir(filename) < 0)
		FEerror("Can't change the current directory to ~S.",
			1, vs_base[0]);
}

void
gcl_init_unixfsys(void)
{
	make_function("TRUENAME", Ltruename);
	make_function("RENAME-FILE", Lrename_file);
	make_function("DELETE-FILE", Ldelete_file);
	make_function("PROBE-FILE", Lprobe_file);
	make_function("FILE-WRITE-DATE", Lfile_write_date);
	make_function("FILE-AUTHOR", Lfile_author);
	make_function("USER-HOMEDIR-PATHNAME", Luser_homedir_pathname);
	make_function("DIRECTORY", Ldirectory);

	make_si_function("CHDIR", siLchdir);
}
