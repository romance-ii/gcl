
.SUFFIXES:
.SUFFIXES: .o .c .lsp .lisp .fn


PORTDIR	= ../unixport
CAT=cat
APPEND=../xbin/append

OBJS	= cmpbind.o cmpblock.o cmpcall.o cmpcatch.o cmpenv.o cmpeval.o \
	cmpflet.o cmpfun.o cmpif.o cmpinline.o cmplabel.o cmplam.o cmplet.o \
	cmploc.o cmpmap.o cmpmulti.o cmpspecial.o cmptag.o cmptop.o \
	cmptype.o cmputil.o cmpvar.o cmpvs.o cmpwt.o

COMPILE_FILE=$(PORTDIR)/saved_gcl $(PORTDIR) -system-p -c-file -data-file \
	-o-file nil -h-file -compile
CFLAGS	= -c -O -I../h 

.lsp.c:
	@ ../xbin/if-exists $(PORTDIR)/saved_gcl \
	"rm -f $*.c $*.h $*.data $*.o" \
	"$(COMPILE_FILE) $* "

.lsp.o:
	@ ../xbin/if-exists $(PORTDIR)/saved_gcl \
	"rm -f $*.c $*.h $*.data $*.o" \
	"$(COMPILE_FILE) $* " \
	"$(CC) $(OFLAG) $(CFLAGS) $*.c" \
	"${APPEND} ${NULLFILE} $*.data $*.o"


# begin makedefs

# use=386-linux

# for main link of raw_gcl
LIBS= -lm

#The multi precision library stuff
MPFILES=$(MPDIR)/mpi-386_no_under.o $(MPDIR)/libmport.a


# root for the installation, eg /usr/local
# This would cause make install to create /usr/local/bin/gcl and
# /usr/local/lib/gcl-2-??/* with some basic files.
prefix=/usr/local

# where to place the info files
INFO_DIR=/usr/info/

# where to put emacs lisp files.
EMACS_SITE_LISP=/usr/share/emacs/20.7/site-lisp

# the default.el file
EMACS_DEFAULT_EL=/usr/share/emacs/20.7/site-lisp/default.el

# numerous TCL/TK variables culled from the tkConfig.sh and tclConfig.sh
# if these are found.
TK_CONFIG_PREFIX=/usr/lib
TK_LIBRARY=/usr/lib/tk8.3
TCL_LIBRARY=/usr/lib/tcl8.3
TK_XINCLUDES=-I/usr/X11R6/include
TK_INCLUDE=-I/usr/lib/../include
TCL_INCLUDE=-I/usr/lib/../include
TK_LIB_SPEC=-L/usr/lib -ltk8.3
TK_BUILD_LIB_SPEC=-L/tmp/tk8.3.2/unix -ltk8.3
TK_XLIBSW=-L/usr/X11R6/lib -lX11
TK_XINCLUDES=-I/usr/X11R6/include
TCL_LIB_SPEC=-L/usr/lib -ltcl8.3
TCL_DL_LIBS=-ldl
TCL_LIBS=-ldl  -lm

NOTIFY=yes
GCC=gcc





GCLDIR=/home/wfs/cvs/gcl
SHELL=/bin/sh
MACHINE=386-linux

# notes for redhat 6.0
#  the configure should select the compiler GCC=/usr/bin/i386-glibc20-linux-gcc
#  However for the gcl-tk directory, you must use plain 'gcc' since
#  that must link with the tcl tk libs which have been compiled with it.
#  so after configure change to GCC=gcc in the gcl-tk/makefile


# Machine dependent makefile definitions for intel 386,486 running linux

LBINDIR=/usr/local/bin

OFLAG	=  -O 
LIBS	= -lm 

ODIR_DEBUG= -O4 

# This CC string will be used for compilation of the system,
# and also in the compiler::*cc* variable for later compilation of
# lisp files.
# (the -pipe is just since our file system is slow..)
CC = ${GCC} -pipe -fwritable-strings  -DVOL=volatile -I$(GCLDIR)/o -fsigned-char

# under redhat 6.1 and slackware 7.0 we needed to have this
# link be static, but should be ok with the fix to unixport/rsym_elf.c
LDCC=${CC} -static
LDCC=${CC}

# note for linuxaout on an elf machine add -b i486-linuxaout 
# CC = gcc -pipe -fwritable-strings  -DVOL=volatile -I$(GCLDIR)/o -fsigned-char -b i486-linuxaout 

# Enable the fastloading mechanism which does not use ld -A
# requires c/rel_.. machine dependent code.

RSYM	= rsym
SFASL	= $(ODIR)/sfasl.o


#MPFILES= $(MPDIR)/mpi-386d.o   $(MPDIR)/libmport.a


# When using SFASL it is good to have (si::build-symbol-table)
INITFORM=(si::build-symbol-table)

# Use symbolic links
SYMB=-s

LIBFILES=bsearch.o

# the  make to use for saved_kcp the profiler.
KCP=kcp-bsd

MPFILES=${GMP_DIR}libgmp.a


# end makedefs

all:	$(OBJS)

.lsp.fn: ../cmpnew/collectfn.o
	../xbin/make-fn $*.lsp


.c.o:  
	$(CC) $(OFLAG) $(CFLAGS) $*.c
	${APPEND} ${NULLFILE} $*.data  $*.o

collectfn.o:
	$(PORTDIR)/saved_gcl $(PORTDIR)/ -compile $*.lsp

.lisp.o:
	@ ../xbin/if-exists $(PORTDIR)/saved_gcl \
	"$(PORTDIR)/saved_gcl $(PORTDIR)/ -compile $*.lisp " 
sys-proclaim.lisp:
	echo '(in-package "COMPILER")' \
	'(load "../cmpnew/collectfn")(load "../lsp/sys-proclaim.lisp")'\
	'(compiler::make-all-proclaims "*.fn")' | ../xbin/gcl


newfn:	
	make `echo $(OBJS) | sed -e 's:\.o:.fn:g'`



remake:
	for v in `"ls" *.lsp.V | sed -e "s:\.lsp\.V::g"` ; \
	do rm -f $$v.c $$v.h $$v.data $$v.lsp $$v.o ; \
	ln -s  $(MAINDIR)/cmpnew/$$v.c . ; ln -s $(MAINDIR)/cmpnew/$$v.h . ; \
	ln -s $(MAINDIR)/cmpnew/$$v.data . ; \
	done
	rm -f ../unixport/saved_gcl 
	(cd .. ; make sources)
	(cd .. ; make)
	(cd .. ; make)

clean:
	rm -f *.o core a.out
allclean:
	rm -f *.h *.data *.c
