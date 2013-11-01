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
#include <errno.h>
#include <time.h>

#define IN_UNIXFSYS
#include "include.h"
#include <sys/types.h>
#include <sys/stat.h>
#ifndef NO_PWD_H
#include <pwd.h>
#endif

#ifdef __MINGW32__
#  include <windows.h>        
/* Windows has no symlink, therefore no lstat.  Without symlinks lstat
   is equivalent to stat anyway.  */
#  define S_ISLNK(a) 0
#  define lstat stat
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


void
coerce_to_filename1(object pathname, char *p,unsigned sz) {

  object namestring=coerce_to_namestring(pathname);;
  
#if !defined(NO_PWD_H) && !defined(STATIC_LINKING)
  
  if (namestring->st.st_self[0]=='~') {
    
    char *q=namestring->st.st_self,*b;
    int n,m=0;
    long r;
    struct passwd *pwent,pw;
#ifndef __STDC__
    extern struct passwd *getpwuid_r();
    extern struct passwd *getpwnam_r();
#endif

    ASSERT((r=sysconf(_SC_GETPW_R_SIZE_MAX))>=0);
    ASSERT(b=alloca(r));

    for (n=1;n<namestring->st.st_fillp && q[n]!='/'; n++);
    if (n==1)

      if ((pw.pw_dir=getenv("HOME")))
	pwent=&pw;
      else
	ASSERT(!getpwuid_r(getuid(),&pw,b,r,&pwent));

    else {

      char *name;

      ASSERT(name=alloca(n));
      memcpy(name,q+1,n-1);
      name[n-1]= 0;

      ASSERT(!getpwnam_r(name,&pw,b,r,&pwent));

    }

    if (pwent==0 || 
	((m=strlen(pwent->pw_dir)) && m+namestring->st.st_fillp-n+1>=sz))
      FEerror("Can't expand pathname ~a",1,namestring);

    memcpy(p,pwent->pw_dir,m);
    memcpy(p+m,namestring->st.st_self+n,namestring->st.st_fillp-n);
    p[m+namestring->st.st_fillp-n]=0;

  } else

#endif

    {
      if (namestring->st.st_fillp+1>=sz)
	FEerror("Too long filename: ~S.",1,namestring);
      memcpy(p,namestring->st.st_self,namestring->st.st_fillp);
      p[namestring->st.st_fillp]=0;
    }

#ifdef FIX_FILENAME
    FIX_FILENAME(pathname,p);
#endif

}

void
coerce_to_local_filename1(object pathname, char *p,unsigned sz)
{
    object namestring;

    vs_mark; /* gbc paranoia */
    vs_push(pathname); 
    namestring=coerce_to_local_namestring(pathname);
    vs_push(namestring);
    coerce_to_filename1(namestring,p,sz);
    vs_reset;
}

object
truename(object pathname)
{
	register char *p, *q;
	char filename[MAXPATHLEN];
	char truefilename[MAXPATHLEN];
	char current_directory[MAXPATHLEN];
	char directory[MAXPATHLEN];
	int islinkcount=8;
	struct stat filestatus;

	vs_mark;
	vs_push(pathname);

	if (ifuncall2(sLwild_pathname_p,pathname,Cnil) == Ct)
	    return(WILD_PATH(pathname));

	coerce_to_local_filename(pathname, filename);

#ifdef S_IFLNK
	if (lstat(filename, &filestatus) >= 0)
	while (((filestatus.st_mode&S_IFMT) == S_IFLNK) && (--islinkcount>0)) {
	    char newname[MAXPATHLEN];
	    int newlen;
	    newlen=readlink(filename,newname,MAXPATHLEN-1);
	    if (newlen < 0)
		return(FILE_ERROR(pathname,"Broken symlink"));
	    for (p = filename, q = 0;  *p != '\0';  p++)
		    if (*p == '/') q = p;
	    if (q == 0 || *newname == '/')
		q = filename;
	    else
		q++;
            memcpy(q,newname,newlen);
	    q[newlen]=0;
	    if (lstat(filename, &filestatus) < 0) 
		islinkcount=0; /* It would be ANSI to do the following :
		return(file_error("Symlink broken at ~S.",pathname));
		but this would break DIRECTORY if a file points to nowhere */
	}
#endif

#ifdef __MINGW32__
        DWORD current_directory_length = GetCurrentDirectory ( MAXPATHLEN, current_directory );
        if ( MAXPATHLEN < current_directory_length ) {
            FEerror ( "truename got a current directory name larger than MAXPATHLEN", 1, "" );
        }
        if ( 0 == current_directory_length ) {
            FEerror ( "truename could not determine the current directory.", 1, "" );
        }
        {
            object x;
            fix_filename(x, current_directory);
        }
#elif HAVE_GETCWD
	getcwd(current_directory,sizeof(current_directory));
#else
        getwd(current_directory);
#endif        

	for (p = filename, q = 0;  *p != '\0';  p++)
		if (*p == '/')
			q = p;

	if (q == filename) {
		q++;
		p = "/";
	} else if (q == 0) {
		q = filename;
		p = current_directory;
	} else
#ifdef __MINGW32__
	if ( ( q > filename ) && ( q[-1] == ':' ) ) {
	    int current = (q++, q[0]);
	    q[0]=0;
	    if (chdir(filename) < 0)
	      FEerror("Cannot get the truename of ~S.", 1, pathname);
            current_directory_length = GetCurrentDirectory ( MAXPATHLEN, directory );
            if ( MAXPATHLEN < current_directory_length ) {
                FEerror ( "truename got a current directory name larger than MAXPATHLEN", 1, "" );
            }
            if ( 0 == current_directory_length ) {
                FEerror ( "truename could not determine the current directory.", 1, "" );
            }
	    p = directory;
	    if ( p[1]==':' && ( p[2]=='\\' || p[2]=='/' ) && p[3]==0 ) p[2]=0;
	    q[0]=current;
        } else
#endif	
	{
		*q++ = '\0';
#if HAVE_GETCWD
		getcwd(current_directory,sizeof(current_directory));
#else
		getwd(current_directory);
#endif
		if (chdir(filename) < 0)
		    FEerror("Cannot get the truename of ~S.", 1, pathname);
#ifdef __MINGW32__
                current_directory_length = GetCurrentDirectory ( MAXPATHLEN, directory );
                if ( MAXPATHLEN < current_directory_length ) {
                    FEerror ( "truename got a current directory name larger than MAXPATHLEN", 1, "" );
                }
                if ( 0 == current_directory_length ) {
                    FEerror ( "truename could not determine the current directory.", 1, "" );
                }
                p = directory;
                {
                    object x;
                    fix_filename(x, directory);
                }
#elif HAVE_GETCWD
		p = getcwd(directory,sizeof(directory));
#else
		p = getwd(directory);
#endif                
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
	massert(!chdir(current_directory));
	vs_push(make_simple_string(truefilename));
	pathname = coerce_to_pathname(vs_head);
	vs_reset;
	return(pathname);
}
extern object sSAallow_gzipped_fileA;

bool
file_exists(object file)
{
	char filename[MAXPATHLEN];
	struct stat filestatus;

	coerce_to_local_filename(file, filename);

#ifdef __MINGW32__
        {
            char *p;
            for (p = filename;  *p != '\0';  p++);
            if ( (p > filename) &&
                 ( ( *(p-1) == '/' ) || ( *(p-1) == '\\' ) ) ) {
               *(p-1) = '\0'; 
            }
        }
#endif        

	if (stat(filename, &filestatus) >= 0  && !S_ISDIR(filestatus.st_mode)) {
#ifdef AIX
	    /* if /tmp/foo is not a directory /tmp/foo/ should not exist */
	    if (filename[strlen(filename)-1] == '/' &&
		!( filestatus.st_mode & S_IFDIR))
		return(FALSE);
#endif	    
	    return TRUE;
	} else
	if (sSAallow_gzipped_fileA->s.s_dbind != sLnil
	      && (strcat(filename,".gz"),
		  stat(filename, &filestatus) >= 0 && !S_ISDIR(filestatus.st_mode)))
	    return TRUE;
	else
	    return(FALSE);
}

FILE *
fopen_not_dir(char *filename,char * option) {

  struct stat ss;

  if (!stat(filename,&ss) && S_ISDIR(ss.st_mode))
    return NULL;
  else
    return fopen(filename,option);

}

FILE *
backup_fopen(char *filename, char *option)
{
	char backupfilename[MAXPATHLEN];
#ifndef HAVE_RENAME
	char command[MAXPATHLEN * 2];
#endif

	strcat(strcpy(backupfilename, filename), ".BAK");
#ifdef HAVE_RENAME
	ASSERT(!rename(filename,backupfilename));
#else
	sprintf(command, "mv %s %s", filename, backupfilename);
	system(command);
#endif
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

LFD(Ltruename)(void)
{
	check_arg(1);

	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	vs_base[0]=coerce_to_pathname(vs_base[0]);

	if (ifuncall2(sLwild_pathname_p,vs_base[0],Cnil) == Ct) {
	    WILD_PATH(vs_base[0]);
	    vs_base[0] = Cnil;
	    return;
	}

	if ((((vs_base[0]->pn.pn_name != Cnil) &&
		(vs_base[0]->pn.pn_name != sKunspecific)) || 
             ((vs_base[0]->pn.pn_type != Cnil) &&
		(vs_base[0]->pn.pn_type != sKunspecific))) &&
	    !file_exists(vs_base[0])) {
	    FILE_ERROR(vs_base[0],"File does not exist");
	    vs_base[0] = Cnil;
	} else 
	    vs_base[0] = truename(vs_base[0]);
}

LFD(Lrename_file)(void)
{
	char filename[MAXPATHLEN];
	char newfilename[MAXPATHLEN];
#ifndef HAVE_RENAME
	char command[MAXPATHLEN * 2];
#endif

	check_arg(2);
	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	check_type_or_Pathname_string_symbol(&vs_base[1]);

	if (ifuncall2(sLwild_pathname_p,vs_base[0],Cnil) == Ct) {
	    WILD_PATH(vs_base[0]);
	    vs_base[0] = Cnil;
	    return;
	}

	coerce_to_local_filename(vs_base[0], filename);
	vs_base[0] = coerce_to_pathname(vs_base[0]);
	vs_base[1] = coerce_to_pathname(vs_base[1]);
	vs_base[1] = merge_pathnames(vs_base[1], vs_base[0], Cnil);

	if (ifuncall2(sLwild_pathname_p,vs_base[1],Cnil) == Ct) {
	    WILD_PATH(vs_base[1]);
	    vs_base[0] = Cnil;
	    return;
	}

	coerce_to_local_filename(vs_base[1], newfilename);
#ifdef HAVE_RENAME
	ASSERT(!rename(filename, newfilename));
#else
	sprintf(command, "mv %s %s", filename, newfilename);
	system(command);
#endif
	vs_push(vs_base[1]);
	vs_push(truename(vs_base[0]));
	vs_push(truename(vs_base[1]));
	vs_base += 2;
}


DEF_ORDINARY("DIRECTORY",sKdirectory,KEYWORD,"");
DEF_ORDINARY("LINK",sKlink,KEYWORD,"");
DEF_ORDINARY("FILE",sKfile,KEYWORD,"");

/* extern char *ctime_r(const time_t *,char *); */

DEFUN("STAT",object,fSstat,SI,1,1,NONE,OO,OO,OO,OO,(object path),"") {

  char filename[MAXPATHLEN];
  struct stat ss;
  

  bzero(filename,sizeof(filename));
  coerce_to_filename(path,filename);
#ifdef __MINGW32__
  {
    char *p=filename+strlen(filename)-1;
    for (;p>filename && *p=='/';p--)
      *p=0;
  }
#endif
  if (lstat(filename,&ss))
    RETURN1(Cnil);
  else {/* ctime_r insufficiently portable */
    /* int j;
       ctime_r(&ss.st_ctime,filename);
       j=strlen(filename);
       if (isspace(filename[j-1]))
       filename[j-1]=0;*/
    RETURN1(list(3,S_ISDIR(ss.st_mode) ? sKdirectory : 
		 (S_ISLNK(ss.st_mode) ? sKlink : sKfile),
		 make_fixnum(ss.st_size),make_fixnum(ss.st_ctime)));
  }
}

DEFUN("SETENV",object,fSsetenv,SI,2,2,NONE,OO,OO,OO,OO,(object variable,object value),"Set environment VARIABLE to VALUE")

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

DEFUN("DELETE-FILE",object,fLdelete_file,LISP,1,1,NONE,OO,OO,OO,OO,(object path),"") {

  char filename[MAXPATHLEN];
  
  check_type_or_pathname_string_symbol_stream(&path);
  
  if (ifuncall2(sLwild_pathname_p,path,Cnil) == Ct)
    RETURN1(WILD_PATH(path));
  
  coerce_to_local_filename(path, filename);
  if (unlink(filename) < 0 && rmdir(filename) < 0)
    FEerror("Cannot delete the file ~S: ~s.", 2, path, make_simple_string(strerror(errno)));
  path = Ct;
  RETURN1(path);

}
#ifdef STATIC_FUNCTION_POINTERS
object
fLdelete_file(object path) {
  return FFN(fLdelete_file)(path);
}
#endif

LFD(Lprobe_file)(void)
{
	check_arg(1);

	check_type_or_pathname_string_symbol_stream(&vs_base[0]);

	if (ifuncall2(sLwild_pathname_p,vs_base[0],Cnil) == Ct) {
	    WILD_PATH(vs_base[0]);
	    vs_base[0] = Cnil;
	    return;
	}

	if (file_exists(vs_base[0]))
		vs_base[0] = truename(vs_base[0]);
	else
		vs_base[0] = Cnil;
}

LFD(Lfile_write_date)(void)
{
	char filename[MAXPATHLEN];
	struct stat filestatus;

	check_arg(1);
	check_type_or_pathname_string_symbol_stream(&vs_base[0]);

	if (ifuncall2(sLwild_pathname_p,vs_base[0],Cnil) == Ct) {
	    WILD_PATH(vs_base[0]);
	    vs_base[0] = Cnil;
	    return;
	}


	coerce_to_local_filename(vs_base[0], filename);
	if (stat(filename, &filestatus) < 0 || S_ISDIR(filestatus.st_mode)) 
	  { vs_base[0] = Cnil; return;}
	vs_base[0] = unix_time_to_universal_time(filestatus.st_mtime);
}

LFD(Lfile_author)(void)
{
#if !defined(NO_PWD_H) && !defined(STATIC_LINKING)
	char filename[MAXPATHLEN];
	struct stat filestatus;
	struct passwd *pwent;
#ifndef __STDC__
	extern struct passwd *getpwuid();
#endif

	check_arg(1);
	check_type_or_pathname_string_symbol_stream(&vs_base[0]);

	if (ifuncall2(sLwild_pathname_p,vs_base[0],Cnil) == Ct) {
	    WILD_PATH(vs_base[0]);
	    vs_base[0] = Cnil;
	    return;
	}

	coerce_to_local_filename(vs_base[0], filename);
	if (stat(filename, &filestatus) < 0 || S_ISDIR(filestatus.st_mode)) 
	  { vs_base[0] = Cnil; return;}
	pwent = getpwuid(filestatus.st_uid);
	vs_base[0] = pwent ? make_simple_string(pwent->pw_name) : Cnil;
#else
	vs_base[0] = Cnil; return;
#endif	
	
}

static void
FFN(Luser_homedir_pathname)(void)
{
  char filename[MAXPATHLEN];

  coerce_to_filename(make_simple_string("~/"),filename);
  vs_base[0]=coerce_to_pathname(make_simple_string(filename));
  vs_top = vs_base+1; 

}

#ifdef BSD
LFD(Ldirectory)(void)
{
	char filename[MAXPATHLEN];
 	char command[MAXPATHLEN * 2];
	FILE *fp;
	register int i, c;
	object *top;
	char iobuffer[BUFSIZ],ch;
	extern FILE *popen(const char *, const char *);

	if (vs_top - vs_base < 1)
	    too_few_arguments();
	while (vs_top - vs_base > 1)
	    vs_popp;

	top = vs_top;

	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	vs_base[0] = coerce_to_pathname(vs_base[0]);

	ch=(vs_base[0]->pn.pn_name==Cnil && vs_base[0]->pn.pn_type==Cnil) ? '!' : ' ';
	coerce_to_local_filename(vs_base[0], filename);
	sprintf(command, 
		"bash -c 'shopt -s dotglob;"
		"IFS=\"\" j=\"%s\"; for i in $j; do "
		"! [ -e \"$i\" ] || %c [ -d \"$i\" ] || echo \"$i\" ; done'", filename, ch);
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
LFD(Ldirectory)()
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
	coerce_to_local_filename(vs_base[0], filename);
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

LFD(Ldirectory)()
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
	coerce_to_local_filename(vs_base[0], filename);
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

static void
FFN(siLchdir)(void)
{
	char filename[MAXPATHLEN];

	check_arg(1);
	check_type_or_pathname_string_symbol_stream(&vs_base[0]);

	if (ifuncall2(sLwild_pathname_p,vs_base[0],Cnil) == Ct) {
	    WILD_PATH(vs_base[0]);
	    vs_base[0] = Cnil;
	    return;
	}
	coerce_to_local_filename(vs_base[0], filename);

	if (chdir(filename) < 0)
		FEerror("Cannot change the current directory to ~S.",
			1, vs_base[0]);
}

static void
FFN(siLmkdir)(void)
{
	char filename[MAXPATHLEN];

	check_arg(1);
	check_type_or_pathname_string_symbol_stream(&vs_base[0]);

	if (ifuncall2(sLwild_pathname_p,vs_base[0],Cnil) == Ct) {
	    WILD_PATH(vs_base[0]);
	    vs_base[0] = Cnil;
	    return;
	}
	coerce_to_local_filename(vs_base[0], filename);

#ifdef __MINGW32__
	if (mkdir(filename) < 0)
	    FEerror("Cannot make the directory ~S.", 1, vs_base[0]);
#else        
	if (mkdir(filename,01777) < 0)
	    FEerror("Cannot make the directory ~S.", 1, vs_base[0]);
#endif        
}

static void
FFN(siLrmdir)(void)
{
	char filename[MAXPATHLEN];

	check_arg(1);
	check_type_or_pathname_string_symbol_stream(&vs_base[0]);

	if (ifuncall2(sLwild_pathname_p,vs_base[0],Cnil) == Ct) {
	    WILD_PATH(vs_base[0]);
	    vs_base[0] = Cnil;
	    return;
	}
	coerce_to_local_filename(vs_base[0], filename);

	if (rmdir(filename) < 0)
		FEerror("Cannot remove the directory ~S.",
			1, vs_base[0]);
}

DEFVAR("*LOAD-WITH-FREAD*",sSAload_with_freadA,SI,Cnil,"");

#ifdef _WIN32

void *
get_mmap(FILE *fp,void **ve) {
  
  int n;
  void *st;
  size_t sz;
  HANDLE handle;

  massert((sz=file_len(fp))>0);
  if (sSAload_with_freadA->s.s_dbind==Cnil) {
    n=fileno(fp);
    massert((n=fileno(fp))>2);
    massert(handle = CreateFileMapping((HANDLE)_get_osfhandle(n), NULL, PAGE_WRITECOPY, 0, 0, NULL));
    massert(st=MapViewOfFile(handle,FILE_MAP_COPY,0,0,sz));
    CloseHandle(handle);
  } else {
    massert(st=malloc(sz));
    massert(fread(st,sz,1,fp)==1);
  }

  *ve=st+sz;

  return st;

}

int
un_mmap(void *v1,void *ve) {

  if (sSAload_with_freadA->s.s_dbind==Cnil)
    return UnmapViewOfFile(v1) ? 0 : -1;
  else {
    free(v1);
    return 0;
  }

}


#else

#include <sys/mman.h>

void *
get_mmap(FILE *fp,void **ve) {
  
  int n;
  void *v1;
  struct stat ss;

  massert((n=fileno(fp))>2);
  massert(!fstat(n,&ss));
  if (sSAload_with_freadA->s.s_dbind==Cnil) {
    massert((v1=mmap(0,ss.st_size,PROT_READ|PROT_WRITE,MAP_PRIVATE,n,0))!=(void *)-1);
  } else {
    massert(v1=malloc(ss.st_size));
    massert(fread(v1,ss.st_size,1,fp)==1);
  }

  *ve=v1+ss.st_size;
  return v1;

}
 

int
un_mmap(void *v1,void *ve) {

  if (sSAload_with_freadA->s.s_dbind==Cnil)
    return munmap(v1,ve-v1);
  else {
    free(v1);
    return 0;
  }

}

#endif


void
gcl_init_unixfsys(void)
{
	make_function("TRUENAME", Ltruename);
	make_function("RENAME-FILE", Lrename_file);
/* 	make_function("DELETE-FILE", Ldelete_file); */
	make_function("PROBE-FILE", Lprobe_file);
	make_function("FILE-WRITE-DATE", Lfile_write_date);
	make_function("FILE-AUTHOR", Lfile_author);
	make_function("USER-HOMEDIR-PATHNAME", Luser_homedir_pathname);
	make_function("DIRECTORY", Ldirectory);

	make_si_function("CHDIR", siLchdir);
	make_si_function("MKDIR", siLmkdir);
	make_si_function("RMDIR", siLrmdir);
}
