DEFS	= -DUNIX
CFLAGS  = $(DEFS) -I../h
CC=cc
APPEND=../bin/append

# begin makedefs

# use=mingw

# for main link of raw_gcl
LIBS= -lm  /libbfd.a /libiberty.a

#The multi precision library stuff
MPFILES=$(MPDIR)/@MPI_FILE@ $(MPDIR)/libmport.a


# root for the installation, eg /usr/local
# This would cause make install to create /usr/local/bin/gcl and
# /usr/local/lib/gcl-2-??/* with some basic files.
prefix=c:/lang/gclcvs

# where to place the info files
INFO_DIR=/usr/info/

# where to put emacs lisp files.
EMACS_SITE_LISP=

# the default.el file
EMACS_DEFAULT_EL=

# numerous TCL/TK variables culled from the tkConfig.sh and tclConfig.sh
# if these are found.
TK_CONFIG_PREFIX=c:/lang/mingw32/lib
TK_LIBRARY=c:/lang/mingw32/lib/tk8.3
TCL_LIBRARY=
TK_XINCLUDES=
TK_INCLUDE=-Ic:/lang/mingw32/lib/../include
TCL_INCLUDE=
TK_LIB_SPEC=
TK_BUILD_LIB_SPEC=
TK_XLIBSW=
TK_XINCLUDES=
TCL_LIB_SPEC=
TCL_DL_LIBS=
TCL_LIBS=

NOTIFY=yes
GCC=gcc

RL_OBJS=

RL_LIB=

GCLDIR=c:/cvs/gcl
SHELL=/bin/sh
MACHINE=mingw


# Machine dependent makefile definitions for intel 386,486 running MSWINDOWS,
# and compilation using mingw compiler and includes.

# note using /bin/sh (ie a copy of ash.exe) will fail if a very LONG command
# line is given, eg when linking maxima.  bash has more stack.

SHELL        = bash

OFLAG	     = -O 
LIBS	     = -lm 
LIBC 	     =

ODIR_DEBUG   = -g

CROSS_PREFIX =

CC           = ${CROSS_PREFIX}gcc -fwritable-strings -DVOL=volatile -I$(GCLDIR)/o -fsigned-char
AS           = ${CROSS_PREFIX}as
AR           = ${CROSS_PREFIX}ar q
RANLIB       = ${CROSS_PREFIX}ranlib


LDCC         = ${CC}

# Enable the fastloading mechanism which does not use ld -A
# requires c/rel_.. machine dependent code.

RSYM	     = rsym.exe
SPECIAL_RSYM = rsym_nt.c
SFASL	     = $(ODIR)/sfasl.o

FIRST_FILE   = $(ODIR)/firstfile.o
LAST_FILE    = $(ODIR)/lastfile.o

# When using SFASL it is good to have (si::build-symbol-table)
INITFORM     = (si::build-symbol-table)

# Use symbolic links
SYMB         = -s
APPEND       = ../bin/append

# suffix for executables
EXE          = .exe
LIBFILES     = bsearch.o bcmp.o bzero.o bcopy.o
EXTRAS       = ${OD}mingwin.o ${OD}mingfile.o

# the  make to use for saved_kcp the profiler.
KCP          = kcp-bsd

# using gcc so dont need
GNULIB1      =

WINKILL      = winkill.exe tclwinkill.dll

MPFILES=${GMP_DIR}libgmp.a


# end makedefs

all:	dpp${EXE} ${APPEND}${EXE} file-sub${EXE} ${WINKILL}

dpp${EXE}:	dpp.c
	${CC} ${DEFS} -o dpp${EXE} dpp.c

file-sub${EXE}:	file-sub.c
	${CC} ${DEFS} -o file-sub${EXE} file-sub.c

${APPEND}${EXE}: append.c
	${CC}  ${DEFS} -o append${EXE}  append.c

winkill.exe: winkill.c
	${CC} ${CFLAGS} winkill.c -o winkill.exe

tclwinkill.dll: ../o/tclwinkill.c
	-(cd ../o; $(CC) -I../h -shared tclwinkill.c -ltclstub83 -o ../bin/tclwinkill.dll)

clean:
	rm -f dpp dpp${EXE} append append${EXE} file-sub${EXE} core a.out *.o gcl
