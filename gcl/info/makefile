.SUFFIXES:
.SUFFIXES: .info .dvi  .texi

INFO_DIR=/usr/local/lib/info
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
EMACS_SITE_LISP=

# the default.el file
EMACS_DEFAULT_EL=/default.el

# numerous TCL/TK variables culled from the tkConfig.sh and tclConfig.sh
# if these are found.
TK_CONFIG_PREFIX=/usr/local/lib
TK_LIBRARY=/usr/local/lib/tk8.2
TCL_LIBRARY=/usr/local/lib/tcl8.2
TK_XINCLUDES=-I/usr/X11R6/include
TK_INCLUDE=-I/usr/local/lib/../include
TK_LIB_SPEC=-L/usr/local/lib -ltk8.2
TK_BUILD_LIB_SPEC=-L/home/wfs/src/tk8.2.1/unix -ltk8.2
TK_XLIBSW=-L/usr/X11R6/lib -lX11
TK_XINCLUDES=-I/usr/X11R6/include
TCL_LIB_SPEC=-L/usr/local/lib -ltcl8.2${TCL_DBGX}
TCL_DL_LIBS=-ldl
TCL_LIBS=-ldl  -lm

NOTIFY=yes
GCC=gcc





GCLDIR=/home/wfs/gcl-2.3
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

# under redhat 6.1 and slackware 7.0 we need to have this
# link be static for now ...
LDCC=${CC} -static

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
# end makedefs


all: gcl-tk.info gcl-si.info

.texi.info:
	rm -f $*.*gz
	makeinfo $*.texi
	- gzip $*.info-*

GCL_SI= number.texi sequence.texi character.texi list.texi io.texi \
	form.texi compile.texi symbol.texi system.texi structure.texi \
	iteration.texi user-interface.texi doc.texi type.texi internal.texi \
	c-interface.texi si-defs.texi debug.texi misc.texi compiler-defs.texi \
	gcl-si-index.texi
GCL_TK= general.texi widgets.texi control.texi

gcl-si.dvi: ${GCL_SI} gcl-si.texi
	tex gcl-si.texi

gcl-si.info:
	makeinfo gcl-si.texi	

gcl-tk.dvi gcl-tk.info: ${GCL_TK} gcl-tk.texi
	tex gcl-tk.texi
	makeinfo gcl-tk.texi

gcl-si_toc.html:
	texi2html -split_chapter gcl-si.texi

gcl-tk_toc.html:
	texi2html -split_chapter gcl-tk.texi

install-html: gcl-tk_toc.html gcl-si_toc.html
	cp *.html /d/www/gcl

install:
	if [  -d "${INFO_DIR}" ] ; then true ; else exit 0; fi
	-if fgrep gcl-si ${INFO_DIR}/dir > /dev/null ; then true ; else \
	echo "* GCL Doc: (gcl-si.info).	GNU Common Lisp specific Documentation." >> ${INFO_DIR}/dir ; fi
	-if fgrep gcl-tk ${INFO_DIR}/dir > /dev/null ; then true ; else \
	echo "* GCL TK Doc: (gcl-tk.info).	TK window GCL interface." >> ${INFO_DIR}/dir ; fi
	-if fgrep gcl.info ${INFO_DIR}/dir > /dev/null ; then true ; else \
	echo "* GCL Ansi Doc: (gcl.info).  Ansi Common Lisp Specification." >> ${INFO_DIR}/dir ; fi
	-if [  -d "${INFO_DIR}" ] ; then 	cp *.info* ${INFO_DIR} ; fi



FILE=gcl-si.texi
srcs:
	fgrep '.texi' ${FILE} | sed -e "/@c/d" | \
	awk '{ i++; printf("%s ",$$2); if ((i%5) == 0) printf("\\\n")}'

tex:
	tex gcl-si.texi
	tex gcl-tk.texi
	@echo must do twice to get indices correct...
	@echo so do 'make tex' again

clean:
