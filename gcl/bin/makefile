DEFS	= -DUNIX
CFLAGS  = $(DEFS) 
CC=cc
APPEND=../bin/append

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

all:	dpp${EXE} ${APPEND}${EXE}

dpp${EXE}:	dpp.c
	${CC} ${DEFS} -o dpp${EXE} dpp.c

${APPEND}${EXE}: append.c
	gcc  ${DEFS} -o append${EXE}  append.c

clean:
	rm -f dpp dpp${EXE} append append${EXE} core a.out *.o
