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

/*
	file.d
	IMPLEMENTATION-DEPENDENT

	The specification of printf may be dependent on the C library,
	especially for read-write access, append access, etc.
	The file also contains the code to reclaim the I/O buffer
	by accessing the FILE structure of C.
	It also contains read_fasl_data.
*/

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define IN_FILE
#include "include.h"

#ifdef HAVE_READLINE
#define kclgetc(FP)		rl_getc_em(FP)
#define kclungetc(C, FP)	rl_ungetc_em(C, FP)
#define kclputc(C, FP)		rl_putc_em(C, FP)
#else
#define	kclgetc(FP)		getc(FP)
#define	kclungetc(C, FP)	ungetc(C, FP)
#define	kclputc(C, FP)		putc(C, FP)
#endif /* HAVE_READLINE */

#define	xkclfeof(c,FP)		feof(FP)

#ifdef HAVE_AOUT
#undef ATT
#undef BSD
#ifndef HAVE_ELF
#ifndef HAVE_FILEHDR
#define BSD
#endif
#endif
#include HAVE_AOUT
#endif

#ifdef ATT
#include <filehdr.h>
#include <syms.h>
#define HAVE_FILEHDR
#endif

#ifdef E15
#include <a.out.h>
#define exec	bhdr
#define a_text	tsize
#define a_data	dsize
#define a_bss	bsize
#define a_syms	ssize
#define a_trsize	rtsize
#define a_drsize	rdsize
#endif

#if defined(HAVE_ELF_H)
#include <elf.h>
#elif defined(HAVE_ELF_ABI_H)
#include <elf_abi.h>
#endif

extern void tcpCloseSocket (int fd);

object terminal_io;

object Vverbose;
object LSP_string;


object sSAignore_eof_on_terminal_ioA;

static bool
feof1(fp)
FILE *fp;
{
	if (!feof(fp))
		return(FALSE);
	if (fp == terminal_io->sm.sm_object0->sm.sm_fp) {
		if (symbol_value(sSAignore_eof_on_terminal_ioA) == Cnil)
			return(TRUE);
#ifdef UNIX
		fp = freopen("/dev/tty", "r", fp);
#endif
#ifdef AOSVS

#endif
		if (fp == NULL)
			error("can't reopen the console");
		return(FALSE);
	}
	return(TRUE);
}

#undef	feof
#define	feof	feof1

void
end_of_stream(strm)
object strm;
{
	FEerror("Unexpected end of ~S.", 1, strm);
}

/*
	Input_stream_p(strm) answers
	if stream strm is an input stream or not.
	It does not check if it really is possible to read
	from the stream,
	but only checks the mode of the stream (sm_mode).
*/
static bool
input_stream_p(strm)
object strm;
{
BEGIN:
	switch (strm->sm.sm_mode) {
	case smm_input:
		return(TRUE);

	case smm_output:
		return(FALSE);

	case smm_io:
	case smm_socket:  
		return(TRUE);

	case smm_probe:
		return(FALSE);

	case smm_synonym:
		strm = symbol_value(strm->sm.sm_object0);
		if (type_of(strm) != t_stream)
			FEwrong_type_argument(sLstream, strm);
		goto BEGIN;

	case smm_broadcast:
		return(FALSE);

	case smm_concatenated:
		return(TRUE);

	case smm_two_way:
		return(TRUE);

	case smm_echo:
		return(TRUE);

	case smm_string_input:
		return(TRUE);

	case smm_string_output:
		return(FALSE);

	default:
		error("illegal stream mode");
		return(FALSE);
	}
}

/*
	Output_stream_p(strm) answers
	if stream strm is an output stream.
	It does not check if it really is possible to write
	to the stream,
	but only checks the mode of the stream (sm_mode).
*/
static bool
output_stream_p(strm)
object strm;
{
BEGIN:
	switch (strm->sm.sm_mode) {
	case smm_input:
		return(FALSE);

	case smm_output:
		return(TRUE);

	case smm_io:
	case smm_socket:  
		return(TRUE);

	case smm_probe:
		return(FALSE);

	case smm_synonym:
		strm = symbol_value(strm->sm.sm_object0);
		if (type_of(strm) != t_stream)
			FEwrong_type_argument(sLstream, strm);
		goto BEGIN;

	case smm_broadcast:
		return(TRUE);

	case smm_concatenated:
		return(FALSE);

	case smm_two_way:
		return(TRUE);

	case smm_echo:
		return(TRUE);

	case smm_string_input:
		return(FALSE);

	case smm_string_output:
		return(TRUE);

	default:
		error("illegal stream mode");
		return(FALSE);
	}
}

static object
stream_element_type(strm)
object strm;
{
	object x;

BEGIN:
	switch (strm->sm.sm_mode) {
	case smm_input:
	case smm_output:
	case smm_io: 
	case smm_probe:
		return(strm->sm.sm_object0);

	case smm_socket:
	    return (sLstring_char);
	    
	case smm_synonym:
		strm = symbol_value(strm->sm.sm_object0);
		if (type_of(strm) != t_stream)
			FEwrong_type_argument(sLstream, strm);
		goto BEGIN;

	case smm_broadcast:
		x = strm->sm.sm_object0;
		if (endp(x))
			return(Ct);
		return(stream_element_type(x->c.c_car));

	case smm_concatenated:
		x = strm->sm.sm_object0;
		if (endp(x))
			return(Ct);
		return(stream_element_type(x->c.c_car));

	case smm_two_way:
		return(stream_element_type(STREAM_INPUT_STREAM(strm)));

	case smm_echo:
		return(stream_element_type(STREAM_INPUT_STREAM(strm)));

	case smm_string_input:
		return(sLstring_char);

	case smm_string_output:
		return(sLstring_char);

	default:
		error("illegal stream mode");
		return(FALSE);
	}
}

#ifndef NO_SETBUF
void
setup_stream_buffer(x)
     object x;
{char *buf=alloc_contblock(BUFSIZ);
  	x->sm.sm_buffer = buf;
#ifdef SGC
	perm_writable(buf,BUFSIZ);
#endif
	setbuf(x->sm.sm_fp, buf);
}	

static void
deallocate_stream_buffer(strm)
object strm;
{

/* SGC contblock pages: Its possible this is on an old page CM 20030827 */
  if (strm->sm.sm_buffer) 
    {
#ifdef SGC
      insert_maybe_sgc_contblock(strm->sm.sm_buffer, BUFSIZ); 
#else
      insert_contblock(strm->sm.sm_buffer, BUFSIZ); 
#endif
    strm->sm.sm_buffer = 0;} 
  else 
    printf("no buffer? %p  \n",strm->sm.sm_fp); 

#ifndef FCLOSE_SETBUF_OK
  strm->sm.sm_fp->_base = NULL;
#endif
}
/* end ifndef NO_SETBUF */
#endif

DEFVAR("*ALLOW-GZIPPED-FILE*",sSAallow_gzipped_fileA,SI,sLnil,"");

static void
too_long_file_name(object);
static void
cannot_open(object);
static void
cannot_create(object);
/*
	Open_stream(fn, smm, if_exists, if_does_not_exist)
	opens file fn with mode smm.
	Fn is a namestring.
*/
object
open_stream(fn, smm, if_exists, if_does_not_exist)
object fn;
enum smmode smm;
object if_exists, if_does_not_exist;
{
	object x;
	FILE *fp=NULL;
	char fname[BUFSIZ];
	int i;
	object unzipped = 0;
	vs_mark;

/*
	if (type_of(fn) != t_string)
		FEwrong_type_argument(sLstring, fn);
*/
	if (fn->st.st_fillp > BUFSIZ - 1)
		too_long_file_name(fn);
	for (i = 0;  i < fn->st.st_fillp;  i++)
		fname[i] = fn->st.st_self[i];
	
	fname[i] = '\0';
	if (smm == smm_input || smm == smm_probe) {
                if(fname[0]=='|')
		  fp = popen(fname+1,"r");
		else 
		  fp = fopen(fname, "r");
		
	      AGAIN:
		if (fp == NULL) {
		        if (sSAallow_gzipped_fileA->s.s_dbind != sLnil)
			  { 
			    struct stat ss;
			    char buf[256];
			    if (snprintf(buf,sizeof(buf),"%s.gz",fname)<=0)
			      FEerror("Cannot write .gz filename",0);
			    if (!stat(buf,&ss)) {
			      FILE *pp;
			      int n;
			      if (!(fp=tmpfile()))
				FEerror("Cannot create temporary file",0);
			      if (snprintf(buf,sizeof(buf),"zcat %s.gz",fname)<=0)
				FEerror("Cannot write zcat pipe name",0);
			      if (!(pp=popen(buf,"r")))
				FEerror("Cannot open zcat pipe",0);
			      while((n=fread(buf,1,sizeof(buf),pp)))
				if (!fwrite(buf,1,n,fp))
				  FEerror("Cannot write pipe output to temporary file",0);
			      if (pclose(pp)<0)
				FEerror("Cannot close zcat pipe",0);
			      if (fseek(fp,0,SEEK_SET))
				FEerror("Cannot rewind temporary file\n",0); 
			      goto AGAIN;
			    }
			  }
			      
/* 			    fp = fopen(buf,"r"); */
/* 			    if (fp) */
/* 			      {  */
/* #ifdef NO_MKSTEMP */
/* 	                        char *tmp; */
/* #else */
/* 	                        char tmp[200]; */
/* #endif */
/* 				char command [500]; */
/* 				fclose(fp); */
/* #ifdef NO_MKSTEMP */
/* 				tmp = tmpnam(0); */
/* #else */
/* 				snprintf(tmp,sizeof(tmp),"uzipXXXXXX"); */
				/* mkstemp(tmp); */ /* fixme: catch errors */
/* #endif */
/* 				unzipped = make_simple_string(tmp); */
/* 				sprintf(command,"gzip -dc %s > %s",buf,tmp); */
/* 				fp = 0; */
/* 				if (0 == system(command)) */
/* 				  { */
/* 				    fp = fopen(tmp,"r"); */
/* 				    if (fp)  */
/* 				      goto AGAIN; */
/* 				    /\* should not get here *\/ */
/* 				    else { unlink(tmp);}} */
/* 			      }} */
			if (if_does_not_exist == sKerror)
				cannot_open(fn);
			else if (if_does_not_exist == sKcreate) {
				fp = fopen(fname, "w");
				if (fp == NULL)
					cannot_create(fn);
				fclose(fp);
				fp = fopen(fname, "r");
				if (fp == NULL)
					cannot_open(fn);
			} else if (if_does_not_exist == Cnil)
				return(Cnil);
			else
			 FEerror("~S is an illegal IF-DOES-NOT-EXIST option.",
				 1, if_does_not_exist);
		}
	} else if (smm == smm_output || smm == smm_io) {
		if (if_exists == sKnew_version && if_does_not_exist == sKcreate)
			goto CREATE;
		fp = fopen(fname, "r");
		if (fp != NULL) {
			fclose(fp);
			if (if_exists == sKerror)
				FEerror("The file ~A already exists.", 1, fn);
			else if (if_exists == sKrename) {
				if (smm == smm_output)
					fp = backup_fopen(fname, "w");
				else
					fp = backup_fopen(fname, "w+");
				if (fp == NULL)
					cannot_create(fn);
			} else if (if_exists == sKrename_and_delete ||
				   if_exists == sKnew_version ||
				   if_exists == sKsupersede) {
				if (smm == smm_output)
					fp = fopen(fname, "w");
				else
					fp = fopen(fname, "w+");
				if (fp == NULL)
					cannot_create(fn);
			} else if (if_exists == sKoverwrite) {
				fp = fopen(fname, "r+");
				if (fp == NULL)
					cannot_open(fn);
			} else if (if_exists == sKappend) {
				if (smm == smm_output)
					fp = fopen(fname, "a");
				else
					fp = fopen(fname, "a+");
				if (fp == NULL)
				FEerror("Cannot append to the file ~A.",1,fn);
			} else if (if_exists == Cnil)
				return(Cnil);
			else
				FEerror("~S is an illegal IF-EXISTS option.",
					1, if_exists);
		} else {
			if (if_does_not_exist == sKerror)
				FEerror("The file ~A does not exist.", 1, fn);
			else if (if_does_not_exist == sKcreate) {
			CREATE:
				if (smm == smm_output)
				  {
				    if(fname[0]=='|')
				      fp = popen(fname+1,"w");
				    else 
		                       fp = fopen(fname, "w");
				  }
				else
					fp = fopen(fname, "w+");
				if (fp == NULL)
					cannot_create(fn);
			} else if (if_does_not_exist == Cnil)
				return(Cnil);
			else
			 FEerror("~S is an illegal IF-DOES-NOT-EXIST option.",
				 1, if_does_not_exist);
		}
	} else
		error("illegal stream mode");
	x = alloc_object(t_stream);
	x->sm.sm_mode = (short)smm;
	x->sm.sm_fp = fp;

	x->sm.sm_buffer = 0;
	x->sm.sm_object0 = (unzipped ? make_cons(sSAallow_gzipped_fileA,unzipped) : sLstring_char);
	x->sm.sm_object1 = fn;
	x->sm.sm_int0 = x->sm.sm_int1 = 0;
	vs_push(x);
	setup_stream_buffer(x);
	vs_reset;
	return(x);
}

static void
gclFlushSocket(object);
/*
	Close_stream(strm) closes stream strm.
	The abort_flag is not used now.
*/
void
close_stream(strm)
object strm;
/*bool abort_flag; */	/*  Not used now!  */
{
	object x;

BEGIN:
	switch (strm->sm.sm_mode) {
	case smm_output:
		if (strm->sm.sm_fp == stdout)
			FEerror("Cannot close the standard output.", 0);
		if (strm->sm.sm_fp == NULL) break;
		fflush(strm->sm.sm_fp);
		deallocate_stream_buffer(strm);
		fclose(strm->sm.sm_fp);
		strm->sm.sm_fp = NULL;
		break;


	case smm_socket:
	  if (SOCKET_STREAM_FD(strm) < 2) {
	    fprintf(stderr,"tried Clsing %d ! as scoket \n",SOCKET_STREAM_FD(strm));
	    fflush(stderr);
	  }
	  else {
#ifdef HAVE_NSOCKET
          if (GET_STREAM_FLAG(strm,gcl_sm_output))
              {	 
		gclFlushSocket(strm);
                 /* there are two for one fd so close only one */
            	  tcpCloseSocket(SOCKET_STREAM_FD(strm));
               } 
#endif
	  SOCKET_STREAM_FD(strm)=-1;
	  }

	case smm_input:
		if (strm->sm.sm_fp == stdin)
			FEerror("Cannot close the standard input.", 0);
	  
	case smm_io:
	case smm_probe:
		if (strm->sm.sm_fp == NULL) break;
		deallocate_stream_buffer(strm);
		if (strm->sm.sm_object1 &&
		    type_of(strm->sm.sm_object1)==t_string &&
		    strm->sm.sm_object1->st.st_self[0] =='|')
		  pclose(strm->sm.sm_fp);
		else 
		  fclose(strm->sm.sm_fp);
		strm->sm.sm_fp = NULL;
		if (type_of(strm->sm.sm_object0 ) == t_cons &&
		    Mcar(strm->sm.sm_object0 ) == sSAallow_gzipped_fileA)
		  fLdelete_file(Mcdr(strm->sm.sm_object0));
		break;

	case smm_synonym:
		strm = symbol_value(strm->sm.sm_object0);
		if (type_of(strm) != t_stream)
			FEwrong_type_argument(sLstream, strm);
		goto BEGIN;

	case smm_broadcast:
		for (x = strm->sm.sm_object0; !endp(x); x = x->c.c_cdr)
			close_stream(x->c.c_car);
		break;

	case smm_concatenated:
		for (x = strm->sm.sm_object0; !endp(x); x = x->c.c_cdr)
			close_stream(x->c.c_car);
		break;

	case smm_two_way:
	case smm_echo:
		close_stream(STREAM_INPUT_STREAM(strm));
		close_stream(STREAM_OUTPUT_STREAM(strm));
		break;

	case smm_string_input:
		break;		/*  There is nothing to do.  */

	case smm_string_output:
		break;		/*  There is nothing to do.  */

	default:
		error("illegal stream mode");
	}
}

object
make_two_way_stream(istrm, ostrm)
object istrm, ostrm;
{
	object strm;

	strm = alloc_object(t_stream);
	strm->sm.sm_mode = (short)smm_two_way;
	strm->sm.sm_fp = NULL;
	STREAM_INPUT_STREAM(strm) = istrm;
	STREAM_OUTPUT_STREAM(strm) = ostrm;
	strm->sm.sm_int0 = strm->sm.sm_int1 = 0;
	return(strm);
}

static object
make_echo_stream(istrm, ostrm)
object istrm, ostrm;
{
	object strm;

	strm = make_two_way_stream(istrm, ostrm);
	strm->sm.sm_mode = (short)smm_echo;
	return(strm);
}

object
make_string_input_stream(strng, istart, iend)
object strng;
int istart, iend;
{
	object strm;

	strm = alloc_object(t_stream);
	strm->sm.sm_mode = (short)smm_string_input;
	strm->sm.sm_fp = NULL;
	STRING_STREAM_STRING(strm) = strng;
	strm->sm.sm_object1 = OBJNULL;
	STRING_INPUT_STREAM_NEXT(strm)= istart;
	STRING_INPUT_STREAM_END(strm)= iend;
	return(strm);
}

object
make_string_output_stream(line_length)
int line_length;
{
	object strng, strm;
	vs_mark;

	strng = alloc_object(t_string);
	strng->st.st_hasfillp = TRUE;
	strng->st.st_adjustable = TRUE;
	strng->st.st_displaced = Cnil;
	strng->st.st_dim = line_length;
	strng->st.st_fillp = 0;
	strng->st.st_self = NULL;
		/*  For GBC not to go mad.  */
	vs_push(strng);
		/*  Saving for GBC.  */
	strng->st.st_self = alloc_relblock(line_length);
	strm = alloc_object(t_stream);
	strm->sm.sm_mode = (short)smm_string_output;
	strm->sm.sm_fp = NULL;
	STRING_STREAM_STRING(strm) = strng;
	strm->sm.sm_object1 = OBJNULL;
	strm->sm.sm_int0 = STREAM_FILE_COLUMN(strm) = 0;
	vs_reset;
	return(strm);
}

static object
get_output_stream_string(strm)
object strm;
{
	object strng;

	strng = copy_simple_string(STRING_STREAM_STRING(strm));
	STRING_STREAM_STRING(strm)->st.st_fillp = 0;
	return(strng);
}

static void
cannot_read(object);

static void
closed_stream(object);
int
readc_stream(strm)
object strm;
{
	int c;

BEGIN:
	switch (strm->sm.sm_mode) {
#ifdef HAVE_NSOCKET
	case smm_socket:
	  return (getCharGclSocket(strm,Ct));
#endif
	case smm_input:
	case smm_io:

		if (strm->sm.sm_fp == NULL)
			closed_stream(strm);
		#if (1)
		c = kclgetc(strm->sm.sm_fp);
		#else
		c = getOneChar(strm->sm.sm_fp);
		#endif
		if (c == EOF) {
        	  if (xkclfeof(c,strm->sm.sm_fp))
			end_of_stream(strm);
		  else c = getOneChar(strm->sm.sm_fp);
		  if (c == EOF) end_of_stream(strm);
		}
		
		c &= 0377;
		/* strm->sm.sm_int0++; */
		return(c);

	case smm_synonym:
		strm = symbol_value(strm->sm.sm_object0);
		if (type_of(strm) != t_stream)
			FEwrong_type_argument(sLstream, strm);
		goto BEGIN;

	case smm_concatenated:
	CONCATENATED:
		if (endp(strm->sm.sm_object0)) {
			end_of_stream(strm);
		}
		if (stream_at_end(strm->sm.sm_object0->c.c_car)) {
			strm->sm.sm_object0
			= strm->sm.sm_object0->c.c_cdr;
			goto CONCATENATED;
		}
		c = readc_stream(strm->sm.sm_object0->c.c_car);
		return(c);

	case smm_two_way:
#ifdef UNIX
		if (strm == terminal_io)			
			flush_stream(STREAM_OUTPUT_STREAM(terminal_io));
#endif
		/* strm->sm.sm_int1 = 0; */
		strm = STREAM_INPUT_STREAM(strm);
		goto BEGIN;

	case smm_echo:
		c = readc_stream(STREAM_INPUT_STREAM(strm));
		if (ECHO_STREAM_N_UNREAD(strm) == 0)
			writec_stream(c, STREAM_OUTPUT_STREAM(strm));
		else
			--(ECHO_STREAM_N_UNREAD(strm));
		return(c);

	case smm_string_input:
		if (STRING_INPUT_STREAM_NEXT(strm)>= STRING_INPUT_STREAM_END(strm))
			end_of_stream(strm);
		return(STRING_STREAM_STRING(strm)->st.st_self
		       [STRING_INPUT_STREAM_NEXT(strm)++]);

	case smm_output:
	case smm_probe:
	case smm_broadcast:
	case smm_string_output:
		cannot_read(strm);
#ifdef USER_DEFINED_STREAMS
	case smm_user_defined:
#define STM_DATA_STRUCT 0
#define STM_READ_CHAR 1
#define STM_WRITE_CHAR 2
#define STM_UNREAD_CHAR 7
#define STM_FORCE_OUTPUT 4
#define STM_PEEK_CHAR 3
#define STM_CLOSE 5
#define STM_TYPE 6
#define STM_NAME 8
{object val;
		object *old_vs_base = vs_base;
		object *old_vs_top = vs_top;
		vs_base = vs_top;
		vs_push(strm);
		super_funcall(strm->sm.sm_object1->str.str_self[STM_READ_CHAR]);
		val = vs_base[0];
		vs_base = old_vs_base;
		vs_top = old_vs_top;
		if (type_of(val) == t_fixnum)
		  return (fix(val));
		if (type_of(val) == t_character)
		  return (char_code(val));
	      }

#endif

	default:	
		error("illegal stream mode");
		return(0);
	}
}

int
rl_ungetc_em(int, FILE *);

void
unreadc_stream(int c, object strm) {
BEGIN:
	switch (strm->sm.sm_mode) {
	case smm_socket:
#ifdef HAVE_NSOCKET
	  ungetCharGclSocket(c,strm);
	  return;
#endif
	case smm_input:
	case smm_io:

		if (strm->sm.sm_fp == NULL)
			closed_stream(strm);
		kclungetc(c, strm->sm.sm_fp);
		/* --strm->sm.sm_int0; */  /* use ftell now for position */
		break;

	case smm_synonym:
		strm = symbol_value(strm->sm.sm_object0);
		if (type_of(strm) != t_stream)
			FEwrong_type_argument(sLstream, strm);
		goto BEGIN;

	case smm_concatenated:
		if (endp(strm->sm.sm_object0))
			goto UNREAD_ERROR;
		strm = strm->sm.sm_object0->c.c_car;
		goto BEGIN;

	case smm_two_way:
		strm = STREAM_INPUT_STREAM(strm);
		goto BEGIN;

	case smm_echo:
		unreadc_stream(c, STREAM_INPUT_STREAM(strm));
		ECHO_STREAM_N_UNREAD(strm)++;
		break;

	case smm_string_input:
		if (STRING_INPUT_STREAM_NEXT(strm)<= 0)
			goto UNREAD_ERROR;
		--STRING_INPUT_STREAM_NEXT(strm);
		break;

	case smm_output:
	case smm_probe:
	case smm_broadcast:
	case smm_string_output:
		goto UNREAD_ERROR;

#ifdef USER_DEFINED_STREAMS
        case smm_user_defined:
		{object *old_vs_base = vs_base;
		 object *old_vs_top = vs_top;
		 vs_base = vs_top;
		 vs_push(strm);
		 /* if there is a file pointer and no define unget function,
                  * then call ungetc */
		 if ((strm->sm.sm_fp != NULL ) &&
		     strm->sm.sm_object1->str.str_self[STM_UNREAD_CHAR] == Cnil)
		   kclungetc(c, strm->sm.sm_fp);
		 else
		   super_funcall(strm->sm.sm_object1->str.str_self[STM_UNREAD_CHAR]);
		 vs_top = old_vs_top;
		 vs_base = old_vs_base;
	       }
		break;
#endif
	default:
		error("illegal stream mode");
	}
	return;

UNREAD_ERROR:
	FEerror("Cannot unread the stream ~S.", 1, strm);
}

static void
putCharGclSocket(object,int);
int
rl_putc_em(int, FILE *);
static void
cannot_write(object);

int
writec_stream(int c, object strm) {
	object x;
	char *p;
	int i;

BEGIN:
	switch (strm->sm.sm_mode) {
	case smm_output:
	case smm_io:
	case smm_socket:  
		/* strm->sm.sm_int0++; */
		if (c == '\n')
			STREAM_FILE_COLUMN(strm) = 0;
		else if (c == '\t')
			STREAM_FILE_COLUMN(strm) = (STREAM_FILE_COLUMN(strm)&~07) + 8;
		else
			STREAM_FILE_COLUMN(strm)++;
		if (strm->sm.sm_fp == NULL)
		  {
#ifdef HAVE_NSOCKET
		    if (strm->sm.sm_mode == smm_socket && strm->sm.sm_fd>=0)
		      putCharGclSocket(strm,c);
		    else
#endif
		      if (!GET_STREAM_FLAG(strm,gcl_sm_had_error))
			closed_stream(strm);
		  } else {
			
		    kclputc(c, strm->sm.sm_fp);
		  }

		break;

	case smm_synonym:
		strm = symbol_value(strm->sm.sm_object0);
		if (type_of(strm) != t_stream)
			FEwrong_type_argument(sLstream, strm);
		goto BEGIN;

	case smm_broadcast:
		for (x = strm->sm.sm_object0; !endp(x); x = x->c.c_cdr)
			writec_stream(c, x->c.c_car);
		break;

	case smm_two_way:
		/*  this should be on the actual streams 
                strm->sm.sm_int0++;
		if (c == '\n')
			strm->sm.sm_int1 = 0;
		else if (c == '\t')
			strm->sm.sm_int1 = (strm->sm.sm_int1&~07) + 8;
		else
			strm->sm.sm_int1++;
               */
		strm = STREAM_OUTPUT_STREAM(strm);
		goto BEGIN;

	case smm_echo:
		strm = STREAM_OUTPUT_STREAM(strm);
		goto BEGIN;

	case smm_string_output:
		/* strm->sm.sm_int0++; */
		if (c == '\n')
			STREAM_FILE_COLUMN(strm) = 0;
		else if (c == '\t')
			STREAM_FILE_COLUMN(strm) = (STREAM_FILE_COLUMN(strm)&~07) + 8;
		else
			STREAM_FILE_COLUMN(strm)++;
		x = STRING_STREAM_STRING(strm);
		if (x->st.st_fillp >= x->st.st_dim) {
			if (!x->st.st_adjustable)
				FEerror("The string ~S is not adjustable.",
					1, x);
                        p = (inheap((long)x->st.st_self) ? alloc_contblock : alloc_relblock)
                             (x->st.st_dim * 2 + 16); 
			for (i = 0;  i < x->st.st_dim;  i++)
				p[i] = x->st.st_self[i];
			i = x->st.st_dim * 2 + 16;
#define	ADIMLIM		16*1024*1024
			if (i >= ADIMLIM)
				FEerror("Can't extend the string.", 0);
			x->st.st_dim = i;
			adjust_displaced(x, p - x->st.st_self);
		}
		x->st.st_self[x->st.st_fillp++] = c;
		break;

	case smm_input:
	case smm_probe:
	case smm_concatenated:
	case smm_string_input:
		cannot_write(strm);

#ifdef USER_DEFINED_STREAMS
	case smm_user_defined:
		{object *old_vs_base = vs_base;
		 object *old_vs_top = vs_top;
		 vs_base = vs_top;
		 vs_push(strm);
		 vs_push(code_char(c));
		 super_funcall(strm->sm.sm_object1->str.str_self[2]);
		 vs_base = old_vs_base;
		 vs_top = old_vs_top;
		 break;
	       }

#endif
	default:
		error("illegal stream mode");
	}
	return(c);
}

void
writestr_stream(s, strm)
char *s;
object strm;
{
	while (*s != '\0')
		writec_stream(*s++, strm);
}

void
flush_stream(object strm) {
	object x;

BEGIN:
	switch (strm->sm.sm_mode) {
	case smm_output:
	case smm_io:
	  if (strm->sm.sm_fp == NULL)
	    closed_stream(strm);
	  fflush(strm->sm.sm_fp);
	  break;
	case smm_socket:
#ifdef HAVE_NSOCKET
		if (SOCKET_STREAM_FD(strm) >0)
		  gclFlushSocket(strm);
		else
#endif
		  closed_stream(strm);
		break;
	case smm_synonym:
		strm = symbol_value(strm->sm.sm_object0);
		if (type_of(strm) != t_stream)
			FEwrong_type_argument(sLstream, strm);
		goto BEGIN;

	case smm_broadcast:
		for (x = strm->sm.sm_object0; !endp(x); x = x->c.c_cdr)
			flush_stream(x->c.c_car);
		break;

	case smm_echo:
	case smm_two_way:
		strm = STREAM_OUTPUT_STREAM(strm);
		goto BEGIN;


	case smm_string_output:
		break;

	case smm_input:
	case smm_probe:
	case smm_concatenated:
	case smm_string_input:
		FEerror("Cannot flush the stream ~S.", 1, strm);
#ifdef USER_DEFINED_STREAMS
        case smm_user_defined:
		{object *old_vs_base = vs_base;
		 object *old_vs_top = vs_top;
		 vs_base = vs_top;
		 vs_push(strm);
		 super_funcall(strm->sm.sm_object1->str.str_self[4]);
		 vs_base = old_vs_base;
		 vs_top = old_vs_top;
		break;
	       }

#endif

	default:
		error("illegal stream mode");
	}
}


bool
stream_at_end(object strm) {
#define NON_CHAR -1000
	VOL int c = NON_CHAR;

BEGIN:
	switch (strm->sm.sm_mode) {
	case smm_socket:  
	  if (SOCKET_STREAM_FD(strm)>=0)
	    return(FALSE);
	  else return(TRUE);	  
	case smm_io:
	case smm_input:
		if (strm->sm.sm_fp == NULL)
			closed_stream(strm);
		{int prev_signals_allowed = signals_allowed;
	       AGAIN:
		signals_allowed= sig_at_read;
		c = kclgetc(strm->sm.sm_fp);
                   /* blocking getchar for sockets */
           /*    if (c==EOF && (strm)->sm.sm_mode ==smm_socket)
                   c = getOneChar(strm->sm.sm_fp); */
            
             
                if (c == NON_CHAR) goto AGAIN; 
		signals_allowed=prev_signals_allowed;}
	       
		if (xkclfeof(c,strm->sm.sm_fp))
			return(TRUE);
		else {
			if (c>=0) kclungetc(c, strm->sm.sm_fp);
			return(FALSE);
		}

	case smm_output:
		return(FALSE);

	case smm_probe:
		return(FALSE);

	case smm_synonym:
		strm = symbol_value(strm->sm.sm_object0);
		check_stream(strm);
		goto BEGIN;

	case smm_broadcast:
		return(FALSE);

	case smm_concatenated:
	CONCATENATED:
		if (endp(strm->sm.sm_object0))
			return(TRUE);
		if (stream_at_end(strm->sm.sm_object0->c.c_car)) {
			strm->sm.sm_object0
			= strm->sm.sm_object0->c.c_cdr;
			goto CONCATENATED;
		} else
			return(FALSE);

	case smm_two_way:
#ifdef UNIX
		if (strm == terminal_io)				/**/
			flush_stream(terminal_io->sm.sm_object1);	/**/
#endif
		strm = STREAM_INPUT_STREAM(strm);
		goto BEGIN;

	case smm_echo:
		strm = STREAM_INPUT_STREAM(strm);
		goto BEGIN;

	case smm_string_input:
		if (STRING_INPUT_STREAM_NEXT(strm)>= STRING_INPUT_STREAM_END(strm))
			return(TRUE);
		else
			return(FALSE);

	case smm_string_output:
		return(FALSE);

#ifdef USER_DEFINED_STREAMS
        case smm_user_defined:
		  return(FALSE);
#endif
	default:
		error("illegal stream mode");
		return(FALSE);
	}
}


#ifdef HAVE_SYS_IOCTL_H
#include <sys/ioctl.h>
#endif


#ifdef LISTEN_USE_FCNTL
#include <fcntl.h>
#endif

bool
listen_stream(object strm) {

BEGIN:

	switch (strm->sm.sm_mode) {
#ifdef HAVE_NSOCKET
	case smm_socket:
	  { int ch  = getCharGclSocket(strm,Cnil);
	   if (ch == EOF) return FALSE;
	   else unreadc_stream(ch,strm);
	   return TRUE;
	  }
#endif	   

	case smm_input:
	case smm_io:


		if (strm->sm.sm_fp == NULL)
			closed_stream(strm);
		if (feof(strm->sm.sm_fp))
				return(FALSE);
#ifdef LISTEN_FOR_INPUT
		LISTEN_FOR_INPUT(strm->sm.sm_fp);
#else
#ifdef LISTEN_USE_FCNTL
  do { int c = 0;
  FILE *fp = strm->sm.sm_fp;
  int orig;
  int res;
  if (feof(fp)) return TRUE;
  orig = fcntl(fileno(fp), F_GETFL);
  if (! (orig & O_NONBLOCK ) ) {
    res=fcntl(fileno(fp),F_SETFL,orig | O_NONBLOCK);
  }
  c = getc(fp);
  if (! (orig & O_NONBLOCK ) ){
    fcntl(fileno(fp),F_SETFL,orig );
  }
  if (c != EOF)
    { 
      ungetc(c,fp);
      return TRUE;
    }
  return FALSE;
  } while (0);
#endif
#endif
		return TRUE;

	case smm_synonym:
		strm = symbol_value(strm->sm.sm_object0);
		if (type_of(strm) != t_stream)
			FEwrong_type_argument(sLstream, strm);
		goto BEGIN;

	case smm_concatenated:
		if (endp(strm->sm.sm_object0))
			return(FALSE);
		strm = strm->sm.sm_object0->c.c_car;	/* Incomplete! */
		goto BEGIN;

	case smm_two_way:
	case smm_echo:
		strm = STREAM_INPUT_STREAM(strm);
		goto BEGIN;

	case smm_string_input:
		if (STRING_INPUT_STREAM_NEXT(strm)< STRING_INPUT_STREAM_END(strm))
			return(TRUE);
		else
			return(FALSE);

	case smm_output:
	case smm_probe:
	case smm_broadcast:
	case smm_string_output:
		FEerror("Can't listen to ~S.", 1, strm);
		return(FALSE);
	default:
		error("illegal stream mode");
		return(FALSE);
	}
}

int
file_position(strm)
object strm;
{
BEGIN:
	switch (strm->sm.sm_mode) {
	case smm_input:
	case smm_output:
	case smm_io:
		/*  return(strm->sm.sm_int0);  */
		if (strm->sm.sm_fp == NULL)
			closed_stream(strm);
		return(ftell(strm->sm.sm_fp));
	case smm_socket:
	   return -1;
	  

	case smm_string_output:
		return(STRING_STREAM_STRING(strm)->st.st_fillp);

	case smm_synonym:
		strm = symbol_value(strm->sm.sm_object0);
		if (type_of(strm) != t_stream)
			FEwrong_type_argument(sLstream, strm);
		goto BEGIN;

	case smm_probe:
	case smm_broadcast:
	case smm_concatenated:
	case smm_two_way:
	case smm_echo:
	case smm_string_input:
		return(-1);

	default:
		error("illegal stream mode");
		return(-1);
	}
}

int
file_position_set(strm, disp)
object strm;
int disp;
{
BEGIN:
	switch (strm->sm.sm_mode) {
	case smm_socket:
	  return -1;
	case smm_input:
	case smm_output:
	case smm_io:

		if (fseek(strm->sm.sm_fp, disp, 0) < 0)
			return(-1);
		/* strm->sm.sm_int0 = disp; */
		return(0);

	case smm_string_output:
		if (disp < STRING_STREAM_STRING(strm)->st.st_fillp) {
			STRING_STREAM_STRING(strm)->st.st_fillp = disp;
			/* strm->sm.sm_int0 = disp; */
		} else {
			disp -= STRING_STREAM_STRING(strm)->st.st_fillp;
			while (disp-- > 0)
				writec_stream(' ', strm);
		}
		return(0);

	case smm_synonym:
		strm = symbol_value(strm->sm.sm_object0);
		if (type_of(strm) != t_stream)
			FEwrong_type_argument(sLstream, strm);
		goto BEGIN;

	case smm_probe:
	case smm_broadcast:
	case smm_concatenated:
	case smm_two_way:
	case smm_echo:
	case smm_string_input:
		return(-1);

	default:
		error("illegal stream mode");
		return(-1);
	}
}

static int
file_length(strm)
object strm;
{
BEGIN:
	switch (strm->sm.sm_mode) {
	case smm_input:
	case smm_output:
	case smm_io:

		if (strm->sm.sm_fp == NULL)
			closed_stream(strm);
		return(file_len(strm->sm.sm_fp));
		

	  
	case smm_synonym:
		strm = symbol_value(strm->sm.sm_object0);
		if (type_of(strm) != t_stream)
			FEwrong_type_argument(sLstream, strm);
		goto BEGIN;

	case smm_socket:
	case smm_probe:
	case smm_broadcast:
	case smm_concatenated:
	case smm_two_way:
	case smm_echo:
	case smm_string_input:
	case smm_string_output:
		return(-1);

	default:
		error("illegal stream mode");
		return(-1);
	}
}

int
file_column(object strm) {
	int i;
	object x;

BEGIN:
	switch (strm->sm.sm_mode) {
	case smm_output:
	case smm_io:
	case smm_socket:  
	case smm_string_output:
		return(STREAM_FILE_COLUMN(strm));

	case smm_echo:
	case smm_two_way:
           strm=STREAM_OUTPUT_STREAM(strm);
           goto BEGIN;
	case smm_synonym:
		strm = symbol_value(strm->sm.sm_object0);
		if (type_of(strm) != t_stream)
			FEwrong_type_argument(sLstream, strm);
		goto BEGIN;


	case smm_input:
	case smm_probe:
	case smm_string_input:
		return(-1);

	case smm_concatenated:
		if (endp(strm->sm.sm_object0))
			return(-1);
		strm = strm->sm.sm_object0->c.c_car;
		goto BEGIN;

	case smm_broadcast:
		for (x = strm->sm.sm_object0; !endp(x); x = x->c.c_cdr) {
			i = file_column(x->c.c_car);
			if (i >= 0)
				return(i);
		}
		return(-1);

#ifdef USER_DEFINED_STREAMS
	case smm_user_defined: /* not right but what is? */
		return(-1);
	
#endif
	default:
		error("illegal stream mode");
		return(-1);
	}
}

void
load(s)
char *s;
{
	object filename, strm, x;
	vs_mark;

	if (user_match(s,strlen(s)))
		return;
	filename = make_simple_string(s);
	vs_push(filename);
	strm = open_stream(filename, smm_input, Cnil, sKerror);
	vs_push(strm);
	for (;;) {
		preserving_whitespace_flag = FALSE;
		detect_eos_flag = TRUE;
		x = read_object_non_recursive(strm);
		if (x == OBJNULL)
			break;
		vs_push(x);
		ieval(x);
		vs_popp;
	}
	close_stream(strm);
	vs_reset;
}



LFD(Lmake_synonym_stream)()
{
	object x;

	check_arg(1);
	check_type_symbol(&vs_base[0]);
	x = alloc_object(t_stream);
	x->sm.sm_mode = (short)smm_synonym;
	x->sm.sm_fp = NULL;
	x->sm.sm_object0 = vs_base[0];
	x->sm.sm_object1 = OBJNULL;
	x->sm.sm_int0 = x->sm.sm_int1 = 0;
	vs_base[0] = x;
}

LFD(Lmake_broadcast_stream)()
{
	object x;
	int narg, i;

	narg = vs_top - vs_base;
	for (i = 0;  i < narg;  i++)
		if (type_of(vs_base[i]) != t_stream ||
		    !output_stream_p(vs_base[i]))
			cannot_write(vs_base[i]);
	vs_push(Cnil);
	for (i = narg;  i > 0;  --i)
		stack_cons();
	x = alloc_object(t_stream);
	x->sm.sm_mode = (short)smm_broadcast;
	x->sm.sm_fp = NULL;
	x->sm.sm_object0 = vs_base[0];
	x->sm.sm_object1 = OBJNULL;
	x->sm.sm_int0 = x->sm.sm_int1 = 0;
	vs_base[0] = x;
}

LFD(Lmake_concatenated_stream)()
{
	object x;
	int narg, i;

	narg = vs_top - vs_base;
	for (i = 0;  i < narg;  i++)
		if (type_of(vs_base[i]) != t_stream ||
		    !input_stream_p(vs_base[i]))
			cannot_read(vs_base[i]);
	vs_push(Cnil);
	for (i = narg;  i > 0;  --i)
		stack_cons();
	x = alloc_object(t_stream);
	x->sm.sm_mode = (short)smm_concatenated;
	x->sm.sm_fp = NULL;
	x->sm.sm_object0 = vs_base[0];
	x->sm.sm_object1 = OBJNULL;
	x->sm.sm_int0 = x->sm.sm_int1 = 0;
	vs_base[0] = x;
}

LFD(Lmake_two_way_stream)()
{
	check_arg(2);

	if (type_of(vs_base[0]) != t_stream ||
	    !input_stream_p(vs_base[0]))
		cannot_read(vs_base[0]);
	if (type_of(vs_base[1]) != t_stream ||
	    !output_stream_p(vs_base[1]))
		cannot_write(vs_base[1]);
	vs_base[0] = make_two_way_stream(vs_base[0], vs_base[1]);
	vs_popp;
}

LFD(Lmake_echo_stream)()
{
	check_arg(2);

	if (type_of(vs_base[0]) != t_stream ||
	    !input_stream_p(vs_base[0]))
		cannot_read(vs_base[0]);
	if (type_of(vs_base[1]) != t_stream ||
	    !output_stream_p(vs_base[1]))
		cannot_write(vs_base[1]);
	vs_base[0] = make_echo_stream(vs_base[0], vs_base[1]);
	vs_popp;
}

@(static defun make_string_input_stream (strng &o istart iend)
	int s, e;
@
	check_type_string(&strng);
	if (istart == Cnil)
		s = 0;
	else if (type_of(istart) != t_fixnum)
		goto E;
	else
		s = fix(istart);
	if (iend == Cnil)
		e = strng->st.st_fillp;
	else if (type_of(iend) != t_fixnum)
		goto E;
	else
		e = fix(iend);
	if (s < 0 || e > strng->st.st_fillp || s > e)
		goto E;
	@(return `make_string_input_stream(strng, s, e)`)

E:
	FEerror("~S and ~S are illegal as :START and :END~%\
for the string ~S.",
		3, istart, iend, strng);
@)

static void
FFN(Lmake_string_output_stream)()
{
	check_arg(0);
	vs_push(make_string_output_stream(64));
}

LFD(Lget_output_stream_string)()
{
	check_arg(1);

	if (type_of(vs_base[0]) != t_stream ||
	    (enum smmode)vs_base[0]->sm.sm_mode != smm_string_output)
		FEerror("~S is not a string-output stream.", 1, vs_base[0]);
	vs_base[0] = get_output_stream_string(vs_base[0]);
}

/*
	(SI:OUTPUT-STREAM-STRING string-output-stream)

		extracts the string associated with the given
		string-output-stream.
*/
LFD(siLoutput_stream_string)()
{
	check_arg(1);
	if (type_of(vs_base[0]) != t_stream ||
	    (enum smmode)vs_base[0]->sm.sm_mode != smm_string_output)
		FEerror("~S is not a string-output stream.", 1, vs_base[0]);
	vs_base[0] = vs_base[0]->sm.sm_object0;
}

LFD(Lstreamp)()
{
	check_arg(1);

	if (type_of(vs_base[0]) == t_stream)
		vs_base[0] = Ct;
	else
		vs_base[0] = Cnil;
}

LFD(Linput_stream_p)()
{
	check_arg(1);

	check_type_stream(&vs_base[0]);
	if (input_stream_p(vs_base[0]))
		vs_base[0] = Ct;
	else
		vs_base[0] = Cnil;
}

LFD(Loutput_stream_p)()
{
	check_arg(1);

	check_type_stream(&vs_base[0]);
	if (output_stream_p(vs_base[0]))
		vs_base[0] = Ct;
	else
		vs_base[0] = Cnil;
}

LFD(Lstream_element_type)()
{
	check_arg(1);

	check_type_stream(&vs_base[0]);
	vs_base[0] = stream_element_type(vs_base[0]);
}

@(defun close (strm &key abort)
@
	check_type_stream(&strm);
	close_stream(strm);
	@(return Ct)
@)

@(static defun open (filename
	      &key (direction sKinput)
		   (element_type sLstring_char)
		   (if_exists Cnil iesp)
		   (if_does_not_exist Cnil idnesp)
	      &aux strm)
	enum smmode smm=0;
@
	check_type_or_pathname_string_symbol_stream(&filename);
	filename = coerce_to_namestring(filename);
	if (direction == sKinput) {
		smm = smm_input;
		if (!idnesp)
			if_does_not_exist = sKerror;
	} else if (direction == sKoutput) {
		smm = smm_output;
		if (!iesp)
			if_exists = sKnew_version;
		if (!idnesp) {
			if (if_exists == sKoverwrite ||
			    if_exists == sKappend)
				if_does_not_exist = sKerror;
			else
				if_does_not_exist = sKcreate;
		}
	} else if (direction == sKio) {
		smm = smm_io;
		if (!iesp)
			if_exists = sKnew_version;
		if (!idnesp) {
			if (if_exists == sKoverwrite ||
			    if_exists == sKappend)
				if_does_not_exist = sKerror;
			else
				if_does_not_exist = sKcreate;
		}
	} else if (direction == sKprobe) {
		smm = smm_probe;
		if (!idnesp)
			if_does_not_exist = Cnil;
	} else
		FEerror("~S is an illegal DIRECTION for OPEN.",
			1, direction);
	strm = open_stream(filename, smm, if_exists, if_does_not_exist);
	@(return strm)
@)

@(defun file_position (file_stream &o position)
	int i=0;
@
	check_type_stream(&file_stream);
	if (position == Cnil) {
		i = file_position(file_stream);
		if (i < 0)
			@(return Cnil)
		@(return `make_fixnum(i)`)
	} else {
		if (position == sKstart)
			i = 0;
		else if (position == sKend)
			i = file_length(file_stream);
		else if (type_of(position) != t_fixnum ||
		    (i = fix((position))) < 0)
			FEerror("~S is an illegal file position~%\
for the file-stream ~S.",
				2, position, file_stream);
		if (file_position_set(file_stream, i) < 0)
			@(return Cnil)
		@(return Ct)
	}	
@)

LFD(Lfile_length)()
{
	int i;

	check_arg(1);
	check_type_stream(&vs_base[0]);
	i = file_length(vs_base[0]);
	if (i < 0)
		vs_base[0] = Cnil;
	else
		vs_base[0] = make_fixnum(i);
}

object sSAload_pathnameA;
DEFVAR("*COLLECT-BINARY-MODULES*",sSAcollect_binary_modulesA,SI,sLnil,"");
DEFVAR("*BINARY-MODULES*",sSAbinary_modulesA,SI,Cnil,"");

@(static defun load (pathname
	      &key (verbose `symbol_value(sLAload_verboseA)`)
		    print
		    (if_does_not_exist sKerror)
	      &aux pntype fasl_filename lsp_filename filename
		   defaults strm stdoutput x
		   package)
	bds_ptr old_bds_top;
	int i;
	object strm1;
@
	check_type_or_pathname_string_symbol_stream(&pathname);
	pathname = coerce_to_pathname(pathname);
	defaults = symbol_value(Vdefault_pathname_defaults);
	defaults = coerce_to_pathname(defaults);
	pathname = merge_pathnames(pathname, defaults, sKnewest);
	pntype = pathname->pn.pn_type;
	filename = coerce_to_namestring(pathname);
	if (user_match(filename->st.st_self,filename->st.st_fillp))
		@(return Cnil)
        old_bds_top=bds_top;
  	if (pntype == Cnil || pntype == sKwild ||
	    (type_of(pntype) == t_string &&
#ifdef UNIX
	    string_eq(pntype, FASL_string))) {
#endif
#ifdef AOSVS

#endif
		pathname->pn.pn_type = FASL_string;
		fasl_filename = coerce_to_namestring(pathname);
	}
	if (pntype == Cnil || pntype == sKwild ||
	    (type_of(pntype) == t_string &&
#ifdef UNIX
	    string_eq(pntype, LSP_string))) {
#endif
#ifdef AOSVS

#endif
		pathname->pn.pn_type = LSP_string;
		lsp_filename = coerce_to_namestring(pathname);
	}
	if (fasl_filename != Cnil && file_exists(fasl_filename)) {
		if (verbose != Cnil) {
			SETUP_PRINT_DEFAULT(fasl_filename);
			if (file_column(PRINTstream) != 0)
				write_str("\n");
			write_str("Loading ");
			PRINTescape = FALSE;
			write_object(fasl_filename, 0);
			write_str("\n");
			CLEANUP_PRINT_DEFAULT;
			flush_stream(PRINTstream);
		}
		package = symbol_value(sLApackageA);
		bds_bind(sLApackageA, package);
		bds_bind(sSAload_pathnameA,fasl_filename);
		if (sSAcollect_binary_modulesA->s.s_dbind==Ct) {
		  object _x=sSAbinary_modulesA->s.s_dbind;
		  object _y=Cnil;
		  while (_x!=Cnil) {
		    _y=_x;
		    _x=_x->c.c_cdr;
		  }
		  if (_y==Cnil)
		    sSAbinary_modulesA->s.s_dbind=make_cons(fasl_filename,Cnil);
		  else 
		    _y->c.c_cdr=make_cons(fasl_filename,Cnil);
		}
		i = fasload(fasl_filename);
		if (print != Cnil) {
			SETUP_PRINT_DEFAULT(Cnil);
			vs_top = PRINTvs_top;
			if (file_column(PRINTstream) != 0)
				write_str("\n");
			write_str("Fasload successfully ended.");
			write_str("\n");
			CLEANUP_PRINT_DEFAULT;
			flush_stream(PRINTstream);
		}
		bds_unwind(old_bds_top);
		if (verbose != Cnil) {
			SETUP_PRINT_DEFAULT(fasl_filename);
			if (file_column(PRINTstream) != 0)
				write_str("\n");
			write_str("Finished loading ");
			PRINTescape = FALSE;
			write_object(fasl_filename, 0);
			write_str("\n");
			CLEANUP_PRINT_DEFAULT;
			flush_stream(PRINTstream);
		}
		@(return `make_fixnum(i)`)
	}
	if (lsp_filename != Cnil && file_exists(lsp_filename)) {
		filename = lsp_filename;
	}
	if (if_does_not_exist != Cnil)
		if_does_not_exist = sKerror;
	strm1 = strm
	= open_stream(filename, smm_input, Cnil, if_does_not_exist);
	if (strm == Cnil)
		@(return Cnil)
	if (verbose != Cnil) {
		SETUP_PRINT_DEFAULT(filename);
		if (file_column(PRINTstream) != 0)
			write_str("\n");
		write_str("Loading ");
		PRINTescape = FALSE;
		write_object(filename, 0);
		write_str("\n");
		CLEANUP_PRINT_DEFAULT;
		flush_stream(PRINTstream);
	}
	package = symbol_value(sLApackageA);
	bds_bind(sSAload_pathnameA,pathname);
	bds_bind(sLApackageA, package);
	bds_bind(sLAstandard_inputA, strm);
	frs_push(FRS_PROTECT, Cnil);
	if (nlj_active) {
		close_stream(strm1);
		nlj_active = FALSE;
		frs_pop();
		bds_unwind(old_bds_top);
		unwind(nlj_fr, nlj_tag);
	}
	for (;;) {
		preserving_whitespace_flag = FALSE;
		detect_eos_flag = TRUE;
		x = read_object_non_recursive(strm);
		if (x == OBJNULL)
			break;
		{
			object *base = vs_base, *top = vs_top, *lex = lex_env;
			object xx;

			lex_new();
			eval(x);
			xx = vs_base[0];
			lex_env = lex;
			vs_top = top;
			vs_base = base;
			x = xx;
		}
		if (print != Cnil) {
			SETUP_PRINT_DEFAULT(x);
			write_object(x, 0);
			write_str("\n");
			CLEANUP_PRINT_DEFAULT;
			flush_stream(PRINTstream);
		}
	}
	close_stream(strm);
	frs_pop();
	bds_unwind(old_bds_top);
	if (verbose != Cnil) {
		SETUP_PRINT_DEFAULT(filename);
		if (file_column(PRINTstream) != 0)
			write_str("\n");
		write_str("Finished loading ");
		PRINTescape = FALSE;
		write_object(filename, 0);
		write_str("\n");
		CLEANUP_PRINT_DEFAULT;
		flush_stream(PRINTstream);
	}
	@(return Ct)
@)

static void
FFN(siLget_string_input_stream_index)()
{
	check_arg(1);
	check_type_stream(&vs_base[0]);
	if ((enum smmode)vs_base[0]->sm.sm_mode != smm_string_input)
		FEerror("~S is not a string-input stream.", 1, vs_base[0]);
	vs_base[0] = make_fixnum(STRING_INPUT_STREAM_NEXT(vs_base[0]));
}

LFD(siLmake_string_output_stream_from_string)()
{
	object strng, strm;

	check_arg(1);
	strng = vs_base[0];
	if (type_of(strng) != t_string || !strng->st.st_hasfillp)
		FEerror("~S is not a string with a fill-pointer.", 1, strng);
	strm = alloc_object(t_stream);
	strm->sm.sm_mode = (short)smm_string_output;
	strm->sm.sm_fp = NULL;
	STRING_STREAM_STRING(strm) = strng;
	strm->sm.sm_object1 = OBJNULL;
	/* strm->sm.sm_int0 = strng->st.st_fillp; */
	STREAM_FILE_COLUMN(strm) = 0;
	vs_base[0] = strm;
}

LFD(siLcopy_stream)()
{
	object in, out;

	check_arg(2);
	check_type_stream(&vs_base[0]);
	check_type_stream(&vs_base[1]);
	in = vs_base[0];
	out = vs_base[1];
	while (!stream_at_end(in))
		writec_stream(readc_stream(in), out);
	flush_stream(out);
	vs_base[0] = Ct;
	vs_popp;
#ifdef AOSVS

#endif
}

static void
too_long_file_name(fn)
object fn;
{
	FEerror("~S is a too long file name.", 1, fn);
}

static void
cannot_open(fn)
object fn;
{
	FEerror("Cannot open the file ~A.", 1, fn);
}

static void
cannot_create(fn)
object fn;
{
	FEerror("Cannot create the file ~A.", 1, fn);
}

static void
cannot_read(strm)
object strm;
{
	FEerror("Cannot read the stream ~S.", 1, strm);
}

static void
cannot_write(strm)
object strm;
{
	FEerror("Cannot write to the stream ~S.", 1, strm);
}

#ifdef USER_DEFINED_STREAMS
/* more support for user defined streams */
static void
FFN(siLuser_stream_state)()
{     
  check_arg(1);

  if(vs_base[0]->sm.sm_object1)
      vs_base[0] = vs_base[0]->sm.sm_object1->str.str_self[0]; 
  else
	FEerror("sLtream data NULL ~S", 1, vs_base[0]);
}
#endif

static void
closed_stream(strm)
object strm;
{
  if (!GET_STREAM_FLAG(strm,gcl_sm_had_error))
    {
        SET_STREAM_FLAG(strm,gcl_sm_had_error,1);
	FEerror("The stream ~S is already closed.", 1, strm);
    }

}



/* returns a stream with which one can safely do fwrite to the x->sm.sm_fp
   or nil.
   */


/* coerce stream to one so that x->sm.sm_fp is suitable for fread and fwrite,
   Return nil if this is not possible.
   */

object
coerce_stream(strm,out)
object strm;
int out;
{
 BEGIN:
 if (type_of(strm) != t_stream)
   FEwrong_type_argument(sLstream, strm);
 switch (strm->sm.sm_mode){
 case smm_synonym:
  strm = symbol_value(strm->sm.sm_object0);
  if (type_of(strm) != t_stream)
			FEwrong_type_argument(sLstream, strm);
		goto BEGIN;

 case smm_two_way:
 case smm_echo:
  if (out)strm = STREAM_OUTPUT_STREAM(strm);
    else strm = STREAM_INPUT_STREAM(strm);
  goto BEGIN;
 case smm_output:
  if (!out) cannot_read(strm);
  break;
 case smm_input:
    if (out) cannot_write(strm);
  break;
 case smm_io:
   /* case smm_socket: */
 break;
 
 default:
  strm=Cnil;
  }
 if (strm!=Cnil
     && (strm->sm.sm_fp == NULL))
   closed_stream(strm);
 return(strm);
}

static void
FFN(siLfp_output_stream)()
{check_arg(1);
 vs_base[0]=coerce_stream(vs_base[0],1);
}

static void
FFN(siLfp_input_stream)()
{check_arg(1);
 vs_base[0]=coerce_stream(vs_base[0],0);
}
 

@(static defun fwrite (vector start count stream)
  unsigned char *p;
  int n,beg;
@  
  stream=coerce_stream(stream,1);
  if (stream==Cnil) @(return Cnil);
  p = vector->ust.ust_self;
  beg = ((type_of(start)==t_fixnum) ? fix(start) : 0);
  n = ((type_of(count)==t_fixnum) ? fix(count) : (vector->st.st_fillp - beg));
  if (fwrite(p+beg,1,n,stream->sm.sm_fp)) @(return Ct);
  @(return Cnil);
@)

@(static defun fread (vector start count stream)
  unsigned char *p;
  int n,beg;
@  
  stream=coerce_stream(stream,0);
  if (stream==Cnil) @(return Cnil);
  p = vector->ust.ust_self;
  beg = ((type_of(start)==t_fixnum) ? fix(start) : 0);
  n = ((type_of(count)==t_fixnum) ? fix(count) : (vector->st.st_fillp - beg));
  if ((n=SAFE_FREAD(p+beg,1,n,stream->sm.sm_fp)))
      @(return `make_fixnum(n)`);
  @(return Cnil);
@)

#ifdef HAVE_NSOCKET

#ifdef DODEBUG
#define dprintf(s,arg) \
  do {fprintf(stderr,s,arg); \
    fflush(stderr); }\
    while(0)
#else 
#define dprintf(s,arg)
#endif     



/*
  putCharGclSocket(strm,ch) -- put one character to a socket
  stream.
  Results:
  Side Effects:  The buffer may be filled, and the fill pointer
  of the buffer may be changed.
 */
static void
putCharGclSocket(strm,ch)
  object strm;
  int ch;
{
  object bufp = SOCKET_STREAM_BUFFER(strm);

 AGAIN:
  if (bufp->ust.ust_fillp < bufp->ust.ust_dim) {
    dprintf("getchar returns (%c)\n",bufp->ust.ust_self[-1+(bufp->ust.ust_fillp)]);
    bufp->ust.ust_self[(bufp->ust.ust_fillp)++]=ch;
    return;
  }
  else {
    gclFlushSocket(strm);
    goto AGAIN;
  }
}

static void
gclFlushSocket(strm)
     object strm;

{
    int fd = SOCKET_STREAM_FD(strm);
    object bufp = SOCKET_STREAM_BUFFER(strm);
    int i=0;
    int err;
    int wrote;
    if (!GET_STREAM_FLAG(strm,gcl_sm_output)
	||   GET_STREAM_FLAG(strm,gcl_sm_had_error))
	 return;
#define AMT_TO_WRITE 500
    while(i< bufp->ust.ust_fillp) {
      wrote =TcpOutputProc ( fd, 
	                     &(bufp->ust.ust_self[i]),
		             bufp->ust.ust_fillp-i > AMT_TO_WRITE ? AMT_TO_WRITE : bufp->ust.ust_fillp-i,
			     &err
#ifdef __MINGW32__
				, TRUE /* Wild guess as to whether it should block or not */
#endif
);
      if (wrote < 0) {
	SET_STREAM_FLAG(strm,gcl_sm_had_error,1);
	close_stream(strm);
	FEerror("error writing to socket: errno= ~a",1,make_fixnum(err));
	
      }
      i+= wrote;
    }
    bufp->ust.ust_fillp=0;
}

static
object
make_socket_stream(fd,mode,server,host,port,async)
int fd;
enum gcl_sm_flags mode;
object server;
object host;
object port;
object async;
{
  object x;
  if (fd < 0 )
   {
     FEerror("Could not connect",0);
   }
  x = alloc_object(t_stream);
  x->sm.sm_mode = smm_socket;
  x->sm.sm_buffer = 0;
  x->sm.sm_object0 = list(3,server,host,port);
  x->sm.sm_object1 = 0;
  x->sm.sm_int0 = x->sm.sm_int1 = 0;
  x->sm.sm_flags=0;
  SOCKET_STREAM_FD(x)= fd;
  SET_STREAM_FLAG(x,mode,1);
  SET_STREAM_FLAG(x,gcl_sm_tcp_async,(async!=Cnil));
  /*
  if (mode == gcl_sm_output)
     { fp=fdopen(fd,(mode==gcl_sm_input ? "r" : "w"));
       if (fp==NULL)      FEerror("Could not connect",0);
       x->sm.sm_fp = fp;
       setup_stream_buffer(x);
     } else
   */
     {
         object buffer;
         x->sm.sm_fp = NULL;
	  buffer=alloc_simple_string((BUFSIZ < 4096 ? 4096 : BUFSIZ));
	 SOCKET_STREAM_BUFFER(x) =buffer;
	 buffer->ust.ust_self = alloc_contblock(buffer->st.st_dim);
	 buffer->ust.ust_fillp = 0;
     }
  return x;
}
     
@(static defun socket (port &key host server async myaddr myport)
             /*
	     HOST is a string then connection is made to that
                          ip or domain address.
	    SERVER  A function to call if this is to be a server 
                            
            ASYNC  socket returned immideiately.  read or flush
                           will block till open if in non blocking mode 
            MYADDR  client's ip address. Useful if have several
                                    net interfaces
            MYPORT  port to use on client side
                        */
int fd;
int isServer = 0;
int inPort;
char buf1[500];
char buf2[500];
char *myaddrPtr=buf1,*hostPtr=buf2;
@
  if (type_of(host) == t_string) {
    hostPtr=lisp_copy_to_null_terminated(host,hostPtr,sizeof(buf1));
  } else { hostPtr = NULL; }
  
   if (fLfunctionp(server) == Ct) {
      isServer=1;
   }
   
   if (myaddr != Cnil) {
     myaddrPtr=lisp_copy_to_null_terminated(myaddr,myaddrPtr,sizeof(buf2));
   } else   { myaddrPtr = NULL; }
   if (isServer == 0 && hostPtr == NULL) {
     FEerror("You must supply at least one of :host hostname or :server function",0);
   }
   Iis_fixnum(port);
   inPort = (myport == Cnil ? 0 : fix(Iis_fixnum(myport)));
   
   fd = CreateSocket(fix(port),hostPtr,isServer,myaddrPtr,inPort,(async!=Cnil));
   
   
   { object x;
     x = make_two_way_stream
       (make_socket_stream(fd,gcl_sm_input,server,host,port,async),
	make_socket_stream(fd,gcl_sm_output,server,host,port,async));
	@(return `x`);
   }
   
@)

DEF_ORDINARY("MYADDR",sKmyaddr,KEYWORD,"");
DEF_ORDINARY("MYPORT",sKmyport,KEYWORD,"");
DEF_ORDINARY("ASYNC",sKasync,KEYWORD,"");
DEF_ORDINARY("HOST",sKhost,KEYWORD,"");
DEF_ORDINARY("SERVER",sKserver,KEYWORD,"");
DEF_ORDINARY("SOCKET",sSsocket,SI,"");




     
#endif /* HAVE_NSOCKET */

object standard_io;
DEFVAR("*STANDARD-INPUT*",sLAstandard_inputA,LISP,(gcl_init_file(),standard_io),""); 
DEFVAR("*STANDARD-OUTPUT*",sLAstandard_outputA,LISP,standard_io,"");
DEFVAR("*ERROR-OUTPUT*",sLAerror_outputA,LISP,standard_io,"");
DEFVAR("*TERMINAL-IO*",sLAterminal_ioA,LISP,terminal_io,"");
DEFVAR("*QUERY-IO*",sLAquery_ioA,LISP,
    (standard_io->sm.sm_object0 = sLAterminal_ioA,
        standard_io),"");
DEFVAR("*DEBUG-IO*",sLAdebug_ioA,LISP,standard_io,"");
DEFVAR("*TRACE-OUTPUT*",sLAtrace_outputA,LISP,standard_io,"");


void
gcl_init_file(void)
{
	object standard_input;
	object standard_output;
	object standard;
	object x;
	standard_input = alloc_object(t_stream);
	standard_input->sm.sm_mode = (short)smm_input;
	standard_input->sm.sm_fp = stdin;
	standard_input->sm.sm_object0 = sLstring_char;
	standard_input->sm.sm_object1
#ifdef UNIX
	= make_simple_string("stdin");
#endif
	standard_input->sm.sm_int0 = 0; /* unused */
	standard_input->sm.sm_int1 = 0; /* unused */

	standard_output = alloc_object(t_stream);
	standard_output->sm.sm_mode = (short)smm_output;
	standard_output->sm.sm_fp = stdout;
	standard_output->sm.sm_object0 = sLstring_char;
	standard_output->sm.sm_object1
#ifdef UNIX
	= make_simple_string("stdout");
#endif
	standard_output->sm.sm_int0 = 0; /* unused */
	STREAM_FILE_COLUMN(standard_output) = 0;

	terminal_io = standard
	= make_two_way_stream(standard_input, standard_output);
	enter_mark_origin(&terminal_io);

	x = alloc_object(t_stream);
	x->sm.sm_mode = (short)smm_synonym;
	x->sm.sm_fp = NULL;
	x->sm.sm_object0 = sLAterminal_ioA;
	x->sm.sm_object1 = OBJNULL;
	x->sm.sm_int0 = x->sm.sm_int1 = 0; /* unused */
	standard_io = x;
	enter_mark_origin(&standard_io);	

}

DEFVAR("*IGNORE-EOF-ON-TERMINAL-IO*",sSAignore_eof_on_terminal_ioA,SI,Cnil,"");
DEFVAR("*LOAD-PATHNAME*",sSAload_pathnameA,SI,Cnil,"");
DEFVAR("*LOAD-VERBOSE*",sLAload_verboseA,LISP,Ct,"");

DEF_ORDINARY("ABORT",sKabort,KEYWORD,"");
DEF_ORDINARY("APPEND",sKappend,KEYWORD,"");
DEF_ORDINARY("CREATE",sKcreate,KEYWORD,"");
DEF_ORDINARY("DEFAULT",sKdefault,KEYWORD,"");
DEF_ORDINARY("DIRECTION",sKdirection,KEYWORD,"");
DEF_ORDINARY("ELEMENT-TYPE",sKelement_type,KEYWORD,"");
DEF_ORDINARY("ERROR",sKerror,KEYWORD,"");
DEF_ORDINARY("IF-DOES-NOT-EXIST",sKif_does_not_exist,KEYWORD,"");
DEF_ORDINARY("IF-EXISTS",sKif_exists,KEYWORD,"");
DEF_ORDINARY("INPUT",sKinput,KEYWORD,"");
DEF_ORDINARY("IO",sKio,KEYWORD,"");
DEF_ORDINARY("NEW-VERSION",sKnew_version,KEYWORD,"");
DEF_ORDINARY("OUTPUT",sKoutput,KEYWORD,"");
DEF_ORDINARY("OVERWRITE",sKoverwrite,KEYWORD,"");
DEF_ORDINARY("PRINT",sKprint,KEYWORD,"");
DEF_ORDINARY("PROBE",sKprobe,KEYWORD,"");
DEF_ORDINARY("RENAME",sKrename,KEYWORD,"");
DEF_ORDINARY("RENAME-AND-DELETE",sKrename_and_delete,KEYWORD,"");
DEF_ORDINARY("SET-DEFAULT-PATHNAME",sKset_default_pathname,KEYWORD,"");
DEF_ORDINARY("SUPERSEDE",sKsupersede,KEYWORD,"");
DEF_ORDINARY("VERBOSE",sKverbose,KEYWORD,"");




void
gcl_init_file_function()
{


#ifdef UNIX
	FASL_string = make_simple_string("o");
	make_si_constant("*EOF*",make_fixnum(EOF));
#endif
#ifdef AOSVS

#endif
	enter_mark_origin(&FASL_string);
#ifdef UNIX
	LSP_string = make_simple_string("lsp");
#endif
#ifdef AOSVS

#endif
	enter_mark_origin(&LSP_string);
	make_si_function("FP-INPUT-STREAM",	siLfp_input_stream);
	make_si_function("FP-OUTPUT-STREAM",	siLfp_output_stream);

	make_function("MAKE-SYNONYM-STREAM", Lmake_synonym_stream);
	make_function("MAKE-BROADCAST-STREAM", Lmake_broadcast_stream);
	make_function("MAKE-CONCATENATED-STREAM",
		      Lmake_concatenated_stream);
	make_function("MAKE-TWO-WAY-STREAM", Lmake_two_way_stream);
	make_function("MAKE-ECHO-STREAM", Lmake_echo_stream);
	make_function("MAKE-STRING-INPUT-STREAM",
		      Lmake_string_input_stream);
	make_function("MAKE-STRING-OUTPUT-STREAM",
		      Lmake_string_output_stream);
	make_function("GET-OUTPUT-STREAM-STRING",
		      Lget_output_stream_string);

	make_si_function("OUTPUT-STREAM-STRING", siLoutput_stream_string);
	make_si_function("FWRITE",Lfwrite);
	make_si_function("FREAD",Lfread);
#ifdef HAVE_NSOCKET
	make_si_function("SOCKET",Lsocket);
#endif
	make_function("STREAMP", Lstreamp);
	make_function("INPUT-STREAM-P", Linput_stream_p);
	make_function("OUTPUT-STREAM-P", Loutput_stream_p);
	make_function("STREAM-ELEMENT-TYPE", Lstream_element_type);
	make_function("CLOSE", Lclose);

	make_function("OPEN", Lopen);

	make_function("FILE-POSITION", Lfile_position);
	make_function("FILE-LENGTH", Lfile_length);

	make_function("LOAD", Lload);

	make_si_function("GET-STRING-INPUT-STREAM-INDEX",
			 siLget_string_input_stream_index);
	make_si_function("MAKE-STRING-OUTPUT-STREAM-FROM-STRING",
			 siLmake_string_output_stream_from_string);
	make_si_function("COPY-STREAM", siLcopy_stream);

#ifdef USER_DEFINED_STREAMS
	make_si_function("USER-STREAM-STATE", siLuser_stream_state);
#endif

#ifdef HAVE_READLINE
	gcl_init_readline_function();
#endif
}


object
read_fasl_data(str)
char *str;
{
	object faslfile, data;
#ifdef UNIX
#ifdef BSD
	FILE *fp;
	int i;
#ifdef HAVE_AOUT
 	struct exec header;
#endif
#endif
#ifdef HAVE_FILEHDR
	struct filehdr fileheader;
#endif
#ifdef E15
	struct exec header;
#endif
#endif
        vs_mark;

	faslfile = make_simple_string(str);
	vs_push(faslfile);
	faslfile = open_stream(faslfile, smm_input, Cnil, sKerror);
	vs_push(faslfile);

#ifdef SEEK_TO_END_OFILE
 	SEEK_TO_END_OFILE(faslfile->sm.sm_fp);
#else

#ifdef BSD
	fp = faslfile->sm.sm_fp;
	fread(&header, sizeof(header), 1, fp);
	fseek(fp,
	      header.a_text+header.a_data+
	      header.a_syms+header.a_trsize+header.a_drsize,
	      1);
	fread(&i, sizeof(i), 1, fp);
	fseek(fp, i - sizeof(i), 1);
#endif

#ifdef HAVE_FILEHDR
	fp = faslfile->sm.sm_fp;
	fread(&fileheader, sizeof(fileheader), 1, fp);
	fseek(fp,
	      fileheader.f_symptr+fileheader.f_nsyms*SYMESZ,
	      0);
	fread(&i, sizeof(i), 1, fp);
	fseek(fp, i - sizeof(i), 1);
	while ((i = getc(fp)) == 0)
		;
	ungetc(i, fp);
#endif

#ifdef E15
	fp = faslfile->sm.sm_fp;
	fread(&header, sizeof(header), 1, fp);
	fseek(fp,
	      header.a_text+header.a_data+
	      header.a_syms+header.a_trsize+header.a_drsize,
	      1);
#endif
#endif
	data = read_fasl_vector(faslfile);

	vs_push(data);
	close_stream(faslfile);
	vs_reset;
	return(data);
}
