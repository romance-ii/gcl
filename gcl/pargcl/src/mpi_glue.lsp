;;;; Copyright (c) Gene Cooperman, 1994-2005

;; This file is part of ParGCL.
;;
;; ParGCL is free software; you can redistribute it and/or modify it under
;;  the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
;; the Free Software Foundation; either version 2, or (at your option)
;; any later version.
;;
;; ParGCL is distributed in the hope that it will be useful, but WITHOUT
;; ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
;; FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
;; License for more details.
;;
;; You should have received a copy of the GNU Library General Public License
;; along with ParGCL; see the file COPYING.  If not, write to the Free Software
;; Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

(in-package "MPI")

(eval-when (compile eval)  ; macro to expand glue code
  ;; merge w/ *default-pathname-defaults*
  (require "mpi_defglue" (merge-pathnames "mpi_defglue"
                           (if (boundp 'si::pargcl-src) si::pargcl-src
			     *default-pathname-defaults*)))
)
;;;  We concatenate to compiler::*CC* "-Ipargcl-include"
(defconstant mpi-include "mpi.h")

;;;This implements the point-to-point layer of MPI, plus some of the
;;; MPI environmental inquiries.  Try (apropos "MPI-") for a list
;;; of implemented commands.
;;;The LISP commands have the same name as the MPI commands
;;; (with "_" converted to "-"), but have different arguments and return
;;;  values in order to provide a simplified interface in the spirit of LISP.
;;;A LISP Documentation string is provided for all LISP fnc's & symbols for
;;; for this interface.
;;;This version is not thread safe, since global variables are used.
;;;All commands use the MPI_COMM_WORLD communicator, and communicator
;;; arguments are omitted.
;;;This file MUST be compiled, and loaded compiled, or C fnc's not found
;;;Unfortunately, AKCL already has integrated another MPI package:
;;;  Multiple Precision Integers, while here, MPI = Message Passing Interface
;;;  In GCL 2.7.0, this seems to be replaced by gmp (GNU Multiple Prec), anyway.
;;;  Hopefully this presents no conflict or confusion, since at the
;;;  the user level, MPI is always Message Passing Interface
;;;BUG:  MPI and LISP compete for same signals (interrupt, etc.)
;;;      In particular, error handlers may have problems

;; (use-fast-links nil)
;; (setq si:*ignore-eof-on-terminal-io* t)

(defvar *autologout* 60 "units = minutes; if no message received after this
                     many minutes, process terminates")
(defun string-lisp-to-c (string)
  (let ((str (format nil "~a " string)))
    ;; nec. because (format nil "~c" (int-char 0)) puts 94 there
    (setf (aref str (1- (length str))) (int-char 0))
    str))
(defun MPI-p4-slave-p ()
  "Returns nil (if master),
   or (if slave) index of first argv param. belonging to MPI slave protocol"
  (dotimes (i (si:argc) nil)
    (when (string-equal (si:argv i) "-p4amslave")
      ;;Protocol is "hostname" "PID" "-p4amslave"
      (return (- i 2)))))
(eval-when (compile)
(defmacro make-fill-string (len)
  `(make-array ,len :element-type 'character :fill-pointer t :static t))
)

;;;character macro:  $ ...  ==>  "..."
(eval-when (compile eval)
	   (setq %old-readtable% (copy-readtable *readtable*))
	   (set-macro-character #\$
				#'(lambda (stream char)
				    (declare (ignore char))
				    (values (read-line stream))))
	   )

(Clines
#.(concatenate 'string "#include \"" mpi-include "\"")
"#include <stdlib.h> /* hack for MPI_Init forgetting curr. dir. */"
"#include <stdio.h> /* For printf, sprintf */"
"#include <signal.h> /* For restoring AKCL signal handler */"
"#include <sys/time.h> /* For setitimer */"
"#include <string.h> /* For mygetcwd() */"
"#include <sys/resource.h> /* For getpriority(), setpriority(), setrlimit() */"
"#include <unistd.h> /* For getpid() inside nice() */"
$ static int logout_time = 60; /* default of 60 minutes */
$ extern void sigint();
$ 
$   /* logout_time (minutes) guaranteed >= 0; 0 means disable timer */
$   /* Also, see autologout() */
$ static void settimer ()
$ { struct itimerval value;
$ 
$   value.it_interval.tv_sec = value.it_interval.tv_usec = 0;
$   value.it_value.tv_usec = 0;
$   value.it_value.tv_sec = logout_time * 60;
$   setitimer(ITIMER_REAL, &value, NULL);
$ }
$ 
$ static char hostname_string[75];
$ static char *hostname_id()
$ { char host[75];
$   int res, rank;
$    res = gethostname(host, sizeof(host)/sizeof(char));
$    MPI_Initialized(&rank);
$    if ( rank == 1)
$      MPI_Comm_rank(MPI_COMM_WORLD, &rank);
$    else rank = -1;
$    if (res == -1) {
$      perror("ParGCL: gethostname");
$      sprintf(host, "<unknown name>"); }
$    sprintf(hostname_string, "Processor %s (MPI rank/ID: %d)", host, rank);
$    return hostname_string;
$ }
$
$ /* CCS modems dysfunctional again; check later if these have
$   further includes inside */
;#.(concatenate 'string "#include " "\"" system::*lib-directory* "h/config.h\"")
;#.(concatenate 'string "#include " "\"" system::*lib-directory* "h/page.h\"")
;#."#include \"page.h\""
$
$/* Copied from ../h/notcomp.h in gcl package */
$#define	inheap(pp)	((char *)(pp) < heap_end)
$
$ static object staticp(array)
$   object array;
${  /* if ((enum type)type_map[page(array->st.st_self)] == t_contiguous) */
$   if (inheap(array->st.st_self))
$ /* wfs recommends:      if inheap(x->st.st_dim) */
$ /*"since it might be that the string is in a saved image [where contig */
$ /* and relblock get converted to t_other and not gc'd], and so to be safe */
$ /* in those cases make this be contiguous.." */
$     return Ct;
$   else return Cnil;
$ }
$
$ static object copy_mpi_buffer(message, buf, count)
$   object message, buf;
$   int count;
$ { char *msg_body = message->st.st_self, *buf_body = buf->st.st_self;
$   if ((sizeof(char) == 1) && (sizeof(int) == 4) && (sizeof(float) == 4))
$     /* okay */ ;
$   else printf("copy_mpi_buffer: sizeof(char,int,float) assumption failed\n");
$   for (; --count >= 0; ) buf_body[count] = msg_body[count];
$   return buf;}
$
$ static void debug_test() {
$   printf("ParGCL/MPI: Serious internal memory error: "); fflush(stdout);
$   printf("%s\n", hostname_id()); fflush(stdout);
$   sigint();
$ }
$
$ static void timeout()
$ {
$   printf("%s: Time since last receive (%d minutes) exceeded.\n",
$           hostname_id(), logout_time);
$   MPI_Finalize(); exit(5);
$ }
$
$ static int autologout(x)
$   int x;
$ { int y = logout_time;
$   if (x < 0) x = 0;
$   logout_time = x;
$   settimer();
$   return(y);
$ }
$ 
$ static MPI_Status last_status;
$ static int MPI_Status_Source () { return last_status.MPI_SOURCE; }
$ static int MPI_Status_Tag () { return last_status.MPI_TAG; }
)
(proclaim '(ftype (function () fixnum) MPI-Status-Source MPI-Status-Tag))
(defentry MPI-Status-source () (int "MPI_Status_Source"))
(defentry MPI-Status-tag () (int "MPI_Status_Tag"))
(setf (documentation 'MPI-Status-Source 'function)
      "Returns source field of status variable for last message.")
(setf (documentation 'MPI-Status-Tag 'function)
      "Returns tag field of status variable for last message.")
(defentry autologout-glue (int) (int "autologout"))
(defun autologout (&optional (x nil))
  "Returns old value of autologout;
   If param included, autologout is reset to that new value;
   After autologout minutes without receiving a message, process dies.
   If autologout = 0, process never times out."
  (cond ((null x) (let ((x (autologout-glue 0))) (autologout-glue x) x))
	((typep x 'fixnum) (autologout-glue x))
	(t (error "Param. must be fixnum, or else omitted (for info, only)"))))
(defentry staticp (object) (object "staticp"))
(defentry copy-mpi-buffer (object object int) (object "copy_mpi_buffer"))

(Clines
$ static MPI_Datatype MPI_type[3];
$ static void MPI_Init_Datatype()
$ { /* must be set only after running MPI_Init; MPI_CHAR is var, not const */
$  MPI_type[0] = MPI_CHAR /* CHARACTER */;
$  MPI_type[1] = MPI_INT /* FIXNUM */;
$/* printf("debugging: %d %d %d\n", MPI_type[0], MPI_CHAR, MPI_INT); */
$  MPI_type[2] = MPI_FLOAT /*  */;}
)
(defconstant CHARACTER 0)
(defconstant FIXNUM 1)
(defconstant FLOAT 2)
;;; Was called string-char in GCL 2.6.0, but character in GCL 2.7.0
(defconstant *type-lisp-to-mpi*
	   `((character . ,CHARACTER) (string-char . ,CHARACTER)
	     (fixnum . ,FIXNUM) (float . ,FLOAT)))
(Clines
$ static int MPI_Any_Source () { return MPI_ANY_SOURCE; }
$ static int MPI_Any_Tag () { return MPI_ANY_TAG; }
)
(defentry MPI-Any-source () (int "MPI_Any_Source"))
(defentry MPI-Any-tag () (int "MPI_Any_Tag"))
#|  ;; The two functions are only defined after .o file is loaded.
(eval-when (compile load)
(defconstant MPI-ANY-SOURCE (MPI-Any-source) "Valid for any source arg")
(defconstant MPI-ANY-TAG (MPI-Any-tag) "Valid for any tag arg")
)
|#

(defglue MPI-Init
  (MPI-Init (&aux (lisp-argv nil) mpi-argv)
    ;;Pass only MPI/p4 command-line args to MPI_Init()
    (if (MPI-p4-slave-p)
      (do ((i (1- (si:argc)) (1- i))
	   (first-p4-slave-arg (MPI-p4-slave-p)))
	  ((< i first-p4-slave-arg))
        (push (si:argv i) lisp-argv))
      (do ((i 0 (1+ i)))
	  ((>= i (si:argc)))
        (when (and (string= "-p4pg" (si:argv i)) (> (si:argc) (1+ i)))
	  (setq lisp-argv (list (si:argv i) (si:argv (+ i 1))))
	  (return)))
      )
    ;;If user specified relative pathname for procgroup, user wants it relative
    ;; to his or her current directory, not relative to dir. of saved_kcl
    (when (stringp lisp-argv) (setq lisp-argv `("-p4pg" ,lisp-argv)))
    (let ((x (member "-p4pg" lisp-argv :test #'string-equal)))
      (when (rest x)
	(setf (second x) (namestring (truename (second x))))))
    ;;Create full command-line expected by MPI/p4
    ;; (si::argv 0) must be path recognized by master and ALL slaves
    (setq lisp-argv (cons (si::argv 0) lisp-argv))
    (setq mpi-argv (coerce (mapcar #'string-lisp-to-c lisp-argv)
			   'simple-vector)))
  (MPI-Init-glue (length mpi-argv) mpi-argv)
  ((int "MPI_Init_glue") (int "argc") (object "argv_obj"))
  ("int i"
   "char **argv"
   "MPI_Initialized(&i)"
   "if (i) {printf(\"MPI already initialized\\n\"); return -1;}"
   "argv = (char **)argv_obj->v.v_self"
   "for (i=0; i<argc; i++) argv[i] = (char *)((object)argv[i])->ust.ust_self"
   "/* master will remove p4 flags from argv & decrement argc */"
   "MPI_Init(&argc, &argv)"
 ;;  "chdir(getenv(\"PWD\"))"
   "/* next three for MPI-Attr-get */"
 ;;gdc:  This was make_constant, but then when procgroup file changed,
 ;;  compiled file stopped working
   "make_special(\"MPI-HOST\", CMPmake_fixnum(MPI_HOST))"
   "make_special(\"MPI-TAG-UB\", CMPmake_fixnum(MPI_TAG_UB))"
   "make_special(\"MPI-IO\", CMPmake_fixnum(MPI_IO))"
   "MPI_Init_Datatype()"
   "MPI_Comm_rank(MPI_COMM_WORLD, &i)"
   "if (i == 0) signal(SIGINT, sigint) /* if master */"
   "else signal(SIGINT, SIG_IGN) /* else slave */"
   "signal( SIGALRM, &timeout ) /* assumes SIGALRM not used by GCL/GAP */"
   "signal( SIGBUS, &debug_test ); signal( SIGSEGV, &debug_test )"
   "settimer()"
   "return 0")
  "int returned;  Single arg is a list of p4-style flags:
   ex.: '(\"-p4pg\" \"procgroup\" \"-p4dbg\" 99 \"-p4rdbg\" 99))"
  )

(defglue
  (MPI-Get-count (datatype)
    (if (symbolp datatype)
      (setq datatype
	    (case datatype
	      (character 0)
	      (fixnum 1)
	      (float 2)
	      (otherwise (error "unsupported datatype for MPI-Get-count"))))))
  (MPI-Get-count-glue datatype)
  ((int "MPI_Get_count_glue") (int datatype))
  ("int count"
   "MPI_Get_count(&last_status, MPI_type[datatype], &count)"
   "return(count)")
  "args: datatype; returns count (length) of last received/probed msg
   datatype is datatype of last received msg, or MPI_CHAR, if no last msg")

(defglue
  (MPI-Initialized)
  ((object "MPI_Initialized_glue"))
  ("int param = 0;"
   "MPI_Initialized(&param)"
   "return( (param ? Ct : Cnil) )")
  "No args; returns 1 if MPI-Init already called, else 0;
   (maybe T and NIL more natural??)")

(defglue (MPI-Finalize) ((int "MPI_Finalize"))
  "No args; int returned, used for cleanup (balances (MPI-Init) )")

(defglue (MPI-Comm-rank)
  ((int "MPI_Comm_rank_glue"))
  ("int rank = 0"
   "MPI_Comm_rank(MPI_COMM_WORLD, &rank)"
   "return(rank)")
  "No args; returns rank in MPI_COMM_WORLD communicator")

(defglue (MPI-World-size)
  ((int "MPI_World_size"))
  ("int size"
   "MPI_Comm_size(MPI_COMM_WORLD, &size)"
   "return(size)")
  "No args; Number of processes in MPI_COMM_WORLD returned.
   (This command uses MPI_Comm_size.  MPI_World_size does not exist.)")
(defun MPI-Comm-size ()
  "This just calls MPI-World size.  Available only for MPI compatibility."
  (MPI-World-size))

(defglue
  (MPI-Error-string (errorcode &optional (string (make-fill-string 256))))
  (MPI-Error-string-glue errorcode string)
  ((object "MPI_Error_string_glue") (int errorcode) (object string))
  ("int resultlen"
   "MPI_Error_string(errorcode, string->st.st_self, &resultlen)"
   "if (string->v.v_hasfillp) (string->st.st_fillp)=resultlen"
   "return(string)")
  "args:  int errorcode and string; returns English message in string.
   If has fill-pointer, will set it.")

(defglue
  (MPI-Get-processor-name (&optional (string (make-fill-string 256))))
  (MPI-Get-processor-name-glue string)
  ((object "MPI_Get_processor_name_glue") (object string))
  ("int resultlen"
   "MPI_Get_processor_name((char *)string->st.st_self, &resultlen)"
   "if (string->v.v_hasfillp) (string->st.st_fillp)=resultlen"
   "return(string)")
  "args:  string; returns name in string.
   If has fill-pointer, will set it.")

(defglue
  (MPI-Attr-get keyval)
  ((object "MPI_Attr_get_glue") (int keyval))
  ("void *attribute_val"
   "int flag"
   "/* keyval = MPI_IO -> can also return MPI_ANY_SOURCE / MPI_PROC_NULL */"
   "MPI_Attr_get(MPI_COMM_WORLD, keyval, &attribute_val, &flag)"
   "if (!flag) return Cnil"
   "return(CMPmake_fixnum((int)attribute_val))")
  "args:  int keyval in {MPI_TAG_UB, MPI_HOST, MPI_IO};
   returns attribute value.")

(defglue (MPI-Abort errorcode)
  ((int "MPI_Abort_glue") (int errorcode))
  ("return MPI_Abort(MPI_COMM_WORLD, errorcode)")
  "errorcode arg;  causes all processes to abort and return errorcode")

(defglue
  (MPI-Send (msg dest &optional (tag 99)
		 &aux (datatype (array-element-type msg)) (len (length msg)))
      (setq datatype (or (cdr (assoc datatype *type-lisp-to-mpi*))
			(error "msg is array of bad elt. type: ~a" datatype)))
      (if (>= dest (MPI-World-size))
	(error "destination ~a is larger than maximum rank of processes" dest))
      (if (< dest 0)
	(error "destination ~a is negative" dest))
      (if (not (staticp msg))
	  (error "MPI-Send:  msg buffer not static array")))
  (MPI-Send-glue msg len datatype dest tag)
  ((int "MPI_Send_glue")
       (object buf) (int count) (int datatype) (int dest) (int tag))
  ("/* printf(\"debugging:  datatype:  %x %x\\n\", MPI_CHAR, MPI_type[0]) */"
   "return MPI_Send(buf->st.st_self, count, MPI_type[datatype], dest, tag, MPI_COMM_WORLD)")
  "args: msg (string or (array fixnum) or (array float)), dest (fixnum rank), 
       tag (fixnum);  [ tag argument is optional ]
       msg MUST be static array.  See (make-array ... :static t);
       side-effects status variable; (apropos \"MPI-Status\") for more info;
       data in all of array is sent to receiver, but if it has
       a fill-pointer, only the data up to the fill-pointer is sent.")

(defglue
  (MPI-Recv (&optional (buf nil)
		       (source (MPI-Any-source)) (tag (MPI-Any-tag))
		       &aux (datatype nil)
		       (count -1))
 	    (when (null buf)
 	      (setq buf (make-fill-string 256)))
	    (when (typep buf 'fixnum) ; interpret first optional arg as source
	      (psetq source buf buf (make-fill-string 256)))
            (if (not (staticp buf))
              (error "MPI-Recv:  msg buffer not static array~%  ~
                        See examples/example-mpi.lsp"))
 	    (setq datatype (array-element-type buf))
 	    (setq count (array-dimension buf 0))
            (if (>= source (MPI-World-size))
	      (error "source ~a is larger than maximum rank of processes"
		     source))
            (if (and (< source 0) (/= source (MPI-Any-source)))
	      (error "source ~a is negative" source))
	    (setq datatype (or (cdr (assoc datatype *type-lisp-to-mpi*))
			(error "buf is array of bad elt. type: ~a~%  ~
              See *type-lisp-to-mpi* for list of acceptable types" datatype))))
  (MPI-Recv-glue buf count datatype source tag)
  ((object "MPI_Recv_glue")
       (object buf) (int count) (int datatype) (int source) (int tag))
  ("int err"
   "MPI_Datatype MPIdatatype = MPI_type[datatype]"
   "/* printf(\"debugging:  datatype:  %x %x\\n\", MPI_CHAR, MPI_type[0]) */"
   "err = MPI_Recv(buf->v.v_self, count, MPIdatatype,
             source, tag, MPI_COMM_WORLD, &last_status)"
   "if (err == 8) {printf(\"Recv buffer too small for msg.\\n\"); return(buf);}"
   "if (buf->v.v_hasfillp) {MPI_Get_count(&last_status, MPIdatatype, &count)"
   "                        (buf->v.v_fillp)=count;}"
   "settimer()"
   "return(buf)")
  "args: buf (array character/fixnum/float), source (fixnum rank),
         <opt: tag(fixnum)>;
   all arguments optional;
   side-effects status variable; (apropos \"MPI-Status\") for more info;
   msg is placed in array up to length of msg;  if array has
   a fill-pointer, the fill-pointer is set to actual msg length.")

;; Can't check source since used in startup before (MPI-World-size) defined
(defglue
  (MPI-Probe (&optional (source (MPI-Any-source)) (tag (MPI-Any-tag))))
  (MPI-Probe-glue source tag)
  ((object "MPI_Probe_glue") (int source) (int tag))
  ("MPI_Probe(source, tag, MPI_COMM_WORLD, &last_status)"
   "return Ct")
  "args: source (fixnum rank), tag (fixnum); blocks until msg available;
   all arguments optional;
   side-effects status variable; (apropos \"MPI-Status\") for more info.")

(defglue
  (MPI-Iprobe (&optional (source (MPI-Any-source)) (tag (MPI-Any-tag)))
      (if (>= source (MPI-World-size))
	(error "source ~a is larger than maximum rank of processes" source))
      (if (and (< source 0) (/= source (MPI-Any-source)))
	(error "source ~a is negative" source)))
  (MPI-Iprobe-glue source tag)
  ((object "MPI_Iprobe_glue") (int source) (int tag))
  ("int flag"
   "MPI_Iprobe(source, tag, MPI_COMM_WORLD, &flag, &last_status)"
   "return (flag ? Ct : Cnil)")
  "args: source (fixnum rank), tag (fixnum); result T if msg available;
   all arguments optional;
   side-effects status variable; (apropos \"MPI-Status\") for more info.")

;;;;; UTILITIES
;;;chdir, getcwd not used??
(defglue
  (getcwd (&optional (string (make-fill-string 256))))
  (getcwd-glue string)
  ((object "mygetcwd") (object string))
  ("char *cwd, *getcwd()"
;;char *buf;
;;if (type_of(vs_base[0]) == t_array) {
;;  vs_base[0]->a.a_dims[0]
;; } else {
;;  vs_base[0]->v.v_dim }
 ;;   "printf(\"string length (dim): %d\\n\", string->st.st_dim)"
 ;;  "if (string->st.st_dim < 3) {printf(\"getcwd:  needs string arg at least len 3\\n\"); return Cnil; }"
 ;;  "printf(\"getcwd:  %s\\n\", string->st.st_self)"
 ;;  "fflush(stdout)"
 ;;  "string->st.st_self[string->st.st_dim-3] = 0"
 ;;  "buf = \"                                                                                                     \""
   "if ((cwd = getcwd(string->st.st_self, string->st.st_dim-2)) == NULL) { perror (\"pwd\"); return Cnil; }"
   "if (string->v.v_hasfillp) (string->st.st_fillp)=strlen(string->st.st_self)"
   "printf(\"getcwd:  %s\\n\", string->st.st_self)"
   "return string")
  "getcwd (&optional string); returns string with pathname")

(defglue
  (chdir (object path))
  ((object "mychdir") (object path))
  ("if (chdir((char *)path->st.st_self) == -1) {perror (\"chdir\"); return Cnil;}"
   "return Ct")
  "returns t if chdir was successful, else nil")

(defentry getcwd (object) (object mygetcwd))
(defentry chdir (object) (object mychdir))

(defglue
  (nice (int prio))
  ((int "nice_internal") (int prio))
  ("int oldprio, success"
   "oldprio = getpriority(PRIO_PROCESS,getpid())"
   "success = setpriority(PRIO_PROCESS,getpid(),prio)"
   "if (success == -1) {perror(\"nice\"); return -1000;}"
   "return oldprio")
  "Changes priority to value of -20 to 20.  higher means lower priority.
   initial default is priority 0.  Result is previous value of priority.")

(defglue
  (limit-rss (int size))
  ((int "limit_ram") (int size))
  ("int oldsize, success"
   "struct rlimit rlp"
   "success = getrlimit(RLIMIT_RSS, &rlp)"
   "if (success == -1) {perror(\"limit-rss\"); return -1000;}"
   "oldsize = rlp.rlim_cur"
   "rlp.rlim_cur = size"
   "success = setrlimit(RLIMIT_RSS, &rlp)"
   "if (success == -1) {perror(\"limit-rss\"); return -1000;}"
   "return oldsize")
  "Changes RSS (Resident Set Size) limit (in bytes) and returns last setting.
   Try \"ps aux\" or \"man ps\" for description of RSS.")

;;;;; THIS MUST BE LAST
(do-symbols (var "MPI") (if (fboundp var) (export var "MPI")))
(dolist (x '(LISP::mpi-tag-ub LISP::mpi-host LISP::mpi-io)) (export x "LISP"))
(pushnew :MPI *features*)
;;These shouldn't be in LISP package.  But make_special was putting them there.
(eval-when (compile eval) (setq *readtable* %old-readtable%))
