
.SUFFIXES:
.SUFFIXES: .o  .lsp .lisp .c

CC=cc
LD_ORDINARY_CC=${CC}
GCLTKCC=${CC}
# Need libX11.a and libtcl.a, machine.defs may say where..

CC = gcc 
HDIR	= ../h
ODIR	= ../o

GCLIB  = ../o/gcllib.a


CFLAGS1=$(CFLAGS) -I../o -I../h ${TK_INCLUDE} ${TCL_INCLUDE} ${TK_XINCLUDES} 

all: gcltksrv   tkl.o tinfo.o  demos/gc-monitor.o gcltkaux
	(cd demos ; \
	echo '(load "../tkl.o")(TK::GET-AUTOLOADS (directory "*.lisp"))' | ../../unixport/saved_gcl) 
	

.lisp.o:
	echo "(compile-file \"$*.lisp\" :c-file nil :c-debug nil)" | ../unixport/saved_gcl

.lsp.o:
	echo "(compile-file \"$*.lsp\" :c-file t :c-debug t)" | ../unixport/saved_gcl



GUIOS = guis.o tkAppInit.o tkMain.o

clean::
	rm -f ${GUIOS} $(OFILES) gcltkaux gcltksrv *.o */*.o

.c.o:
	$(GCLTKCC) -c $(CFLAGS1) ${ODIR_DEBUG}  $*.c


# for some reason -lieee is on various linux systems in the list of requireds..

gcltkaux:  $(GUIOS)
	$(LD_ORDINARY_CC) $(GUIOS) -o gcltkaux  ${TK_LIB_SPEC} ${TK_BUILD_LIB_SPEC} ${TK_XLIBSW} ${TK_XINCLUDES} ${TCL_LIB_SPEC}  `echo ${TCL_LIBS} | sed -e s:-lieee::g`  ${LIBS} ${GCLIB}

gcltksrv: makefile
	cat gcltksrv.in | sed -e "s:TK_LIBRARY=.*:TK_LIBRARY=${TK_LIBRARY}:g" \
	-e "s:TCL_LIBRARY=.*:TCL_LIBRARY=${TCL_LIBRARY}:g" \
	-e "s:TK_XLIB_DIR=.*:TK_XLIB_DIR=${TK_XLIB_DIR}:g" \
	-e "s:GCL_TK_DIR=.*:GCL_TK_DIR=${GCLDIR}/gcl-tk:g" > gcltksrv
	chmod a+x gcltksrv

gcltksrv.interp: makefile
	cat gcltksrv.in.interp | sed -e "s:TK_LIBRARY=.*:TK_LIBRARY=${TK_LIBRARY}:g" \
	-e "s:TK_XLIB_DIR=.*:TK_XLIB_DIR=${TK_XLIB_DIR}:g" \
	-e "s:TCL_LIBRARY=.*:TCL_LIBRARY=${TCL_LIBRARY}:g" \
	-e "s:GCL_TK_DIR=.*:GCL_TK_DIR=${GCLDIR}/gcl-tk:g" > gcltksrv.interp
	chmod a+x gcltksrv.interp

INTERESTING=*.lsp *.lisp tk*.c guis.c sockets.c  comm.c Makefile  demos/*.lisp  *.h

tar:
	tar cvf - ${INTERESTING} | gzip -c > /u/wfs/sock-`date +%y%m%d`.tgz
tags:
	etags *.lsp *.lisp tk*.c guis.c sockets.c   guis.h our_io.c

tkAppInit.o : tkAppInit.c
tkMain.o : tkMain.c
tkXAppInit.o : tkXAppInit.c
tkXshell.o : tkXshell.c
guis.o : guis.c guis.h comm.c sheader.h
sockets.c: our_io.c sheader.h
socketsl.o: socketsl.lisp sockets.c

# begin makedefs

# use=solaris

# for main link of raw_gcl
LIBS= -lm -lsocket -lnsl

#The multi precision library stuff
MPFILES=$(MPDIR)/ $(MPDIR)/libmport.a


# root for the installation, eg /usr/local
# This would cause make install to create /usr/local/bin/gcl and
# /usr/local/lib/gcl-2-??/* with some basic files.
prefix=/usr/local

# where to place the info files
INFO_DIR=/local/sol/2.6/depot/emacs-20.3/info/

# where to put emacs lisp files.
EMACS_SITE_LISP=/local/sol/2.6/depot/emacs-20.3/share/emacs/20.3/site-lisp

# the default.el file
EMACS_DEFAULT_EL=/local/sol/2.6/depot/emacs-20.3/share/emacs/20.3/site-lisp/default.el

# numerous TCL/TK variables culled from the tkConfig.sh and tclConfig.sh
# if these are found.
TK_CONFIG_PREFIX=/local/sol/2.6/depot/tk8.0/lib
TK_LIBRARY=/local/sol/2.6/depot/tk8.0/lib/tk8.0
TCL_LIBRARY=
TK_XINCLUDES=-I/usr/openwin/include
TK_INCLUDE=-I/local/sol/2.6/depot/tk8.0/lib/../include
TCL_INCLUDE=-I/local/sol/2.6/depot/tcl8.0/lib/../include
TK_LIB_SPEC=-L/local/sol/2.6/depot/tk8.0/lib -ltk8.0
TK_BUILD_LIB_SPEC=-L/local/sol/2.6/src/tk8.0/unix -ltk8.0
TK_XLIBSW=-L/usr/openwin/lib -lX11
TK_XINCLUDES=-I/usr/openwin/include
TCL_LIB_SPEC=-L/local/sol/2.6/depot/tcl8.0/lib -ltcl8.0
TCL_DL_LIBS=-ldl
TCL_LIBS=-ldl  -lsocket -lnsl -lm

NOTIFY=yes
GCC=yes





GCLDIR=/local/sol/2.6/depot/build/GCL/gcl-2.3
SHELL=/bin/sh
MACHINE=solaris

OFLAG	=  -O
LIBS	= -lm -lsocket -lnsl

# tell linker to remember where it got the shared object...
# should have the same for TCL/TK if you used shared libs..
X11_LIBS=-Xlinker -R${X11_LIBS_DIR} -L${X11_LIBS_DIR} -lX11

ODIR_DEBUG=-O4

#gcc 2.1 and 2.2 compile akcl correctly as far as I have been able to determine.
#gcc 2.3.3 does not compile akcl correctly
#gcc 2.4.5 does compile akcl, but does fail on some subsequent tests.
#gcc 2.5.3 does compile gcl correctly however it has a known bug.
#gcc 2.6.3 appears to compile gcl ok
# gcc 2.7.2 and 2.7.2.1 cause the gcl to core dump on start up of saved
#    image.  something to do with 'ctor'..   Add -B flag as in:
#    get gcc -B /lusr/gnu/lib/gcc-lib/sparc-sun-solaris2.5/2.6.3/
#    to use previous gcc.   Note final '/'
# gcc  2.8.1 compiles gcl ok (running on solaris 2.6).
# used sun's make from /usr/ccs/bin

CC = gcc -I${GCLDIR}/o  -DVOL=volatile -fsigned-char
# LDCC= ${CC} -static
# we can use non static linking now
LDCC= ${CC}
ODIR_DEBUG= -O

#The new optional for money compiler has not been tested recently.
# it used to fail to compile o/format.o correctly.
#CC =  /usr/local/lang/cc  -DVOL=  -I$(GCLDIR)/o -Bstatic -temp=. -pipe
ODIR_DEBUG= -O4

AS=/usr/ccs/bin/as -P -D__svr4__

CFLAGS	= -c $(DEFS)  -I../h

MAIN    = ../o/main.o

MPFILES=$(MPDIR)/mpi-sol-sparc.o $(MPDIR)/sparcdivul3.o $(MPDIR)/libmport.a
#MPFILES=${MPDIR}/mpi.o ${MPDIR}/libmport.a

RSYM	= rsym
SFASL	= $(ODIR)/sfasl.o

# This function will be run before dumping.
# When using SFASL it is good to have (si::build-symbol-table)
INITFORM=(si::build-symbol-table)

GNULIB1=

# Use symbolic links
SYMB=-s
# the  make to use for saved_kcp the profiler.
KCP=kcp-sun

NULLFILE = ../h/secondary_sun_magic
# no ranlib so use dummy
RANLIB=true
# use the sun ar
AR=/usr/ccs/bin/ar qc

# end makedefs
