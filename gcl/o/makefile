# make .d more important by clearing suffixes.
.SUFFIXES:
.SUFFIXES: .d .o  .c .ini

HDIR	= ../h/
CDIR	= ./
MPDIR	= ../mp

OFLAG	= -O
DEFS	= -I../h -I../gcl-tk
ODIR	= .
GCLIB  = ${ODIR}/gcllib.a
RANLIB=ranlib
AR = ar qc
LIBFILES= bcmp.o bcopy.o bzero.o user_init.o
# compile main.c with -g, since signalling may not be ok on -O
MAIN_DEBUG=
DPP	= ../bin/dpp

# AUX_INFO=-aux-info $*.X
.c.o:
	$(CC) -c $(OFLAG) $(CFLAGS) $*.c $(AUX_INFO) 
.d.o:
	$(DPP) $*
	$(CC) -c $(OFLAG) $(CFLAGS) $*.c $(AUX_INFO)
	rm $*.c

CPP=
.c.ini:
	$(CC) -DNO_DEFUN $(CFLAGS) -E $*.c | sed -e 's:\"[ ]*):\"):g' | ./grab_defs > $*.ini

.d.ini:
	$(DPP) $*
	./grab_defs < $*.c > $*.ini
	rm $*.c



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

OFLAG	=  
LIBS	= -lm 

ODIR_DEBUG=  -g

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
X11_INCLUDE=${TK_XINCLUDES} ${HAVE_X11}
CFLAGS	=  -I../gcl-tk -I$(HDIR) $(ODIR_DEBUG) 


MP 	= $(HDIR)mp.h

CMPINCLUDE_FILES=${HDIR}compbas.h ${HDIR}enum.h ${HDIR}object.h ${HDIR}vs.h \
	${HDIR}bds.h ${HDIR}frame.h \
	${HDIR}lex.h ${HDIR}eval.h    ${HDIR}funlink.h \
	${HDIR}att_ext.h ${HDIR}compbas2.h ${HDIR}/compat.h ${HDIR}/cmponly.h

OTHERS=${HDIR}notcomp.h ${HDIR}rgbc.h ${HDIR}stacks.h 

HFILES	= $(HDIR)include.h $(CMPINCLUDE_FILES) $(OTHERS) 

# these are made elsewhere...
MPFILES=

OBJS	= $(OD)main.o $(OD)alloc.o $(OD)gbc.o \
	$(OD)bitop.o $(OD)typespec.o $(OD)eval.o \
	$(OD)macros.o $(OD)lex.o $(OD)bds.o \
	$(OD)frame.o $(OD)predicate.o $(OD)reference.o \
	$(OD)assignment.o $(OD)bind.o $(OD)let.o \
	$(OD)conditional.o $(OD)block.o $(OD)iteration.o \
	$(OD)mapfun.o $(OD)prog.o $(OD)multival.o \
	$(OD)catch.o $(OD)symbol.o $(OD)cfun.o \
	$(OD)cmpaux.o $(OD)package.o $(OD)big.o \
	$(OD)number.o $(OD)num_pred.o $(OD)num_comp.o \
	$(OD)num_arith.o $(OD)num_sfun.o $(OD)num_co.o \
	$(OD)num_log.o $(OD)num_rand.o $(OD)earith.o \
	$(OD)character.o  $(OD)sequence.o \
	$(OD)list.o $(OD)hash.o $(OD)array.o \
	$(OD)string.o $(OD)regexpr.o $(OD)structure.o $(OD)toplevel.o \
	$(OD)file.o $(OD)read.o $(OD)backq.o \
	$(OD)print.o $(OD)format.o $(OD)pathname.o \
	$(OD)unixfsys.o $(OD)unixfasl.o $(OD)error.o \
	$(OD)unixtime.o $(OD)unixsys.o $(OD)unixsave.o \
	$(OD)funlink.o  \
	$(OD)fat_string.o ${ODIR}/run_process.o \
	$(OD)nfunlink.o $(OD)usig.o $(OD)usig2.o $(OD)utils.o \
	$(OD)makefun.o $(OD)sockets.o $(OD)clxsocket.o  \
	$(OD)init_pari.o $(OD)nsocket.o $(NEW_INIT) $(MPFILES) $(SFASL) $(EXTRAS) 

all:  $(OBJS) new-init $(LIBFILES) new_init.o  $(GCLIB) $(LAST_FILE)  $(FIRST_FILE) 

go:
	make "CFLAGS=${CFLAGS} -pg"



new-init: grab_defs
	make new_init.c	decls1 "INI_FILES=`echo ${OBJS} | sed -e 's:\.o:.ini:g'  -e 's:new_init.o::g' `"

new_init.c: ${INI_FILES}
	echo '#include "make-init.h"' > new_init.c
	echo 'NewInit(){' >> new_init.c
	cat ${INI_FILES} >> new_init.c
	echo '}' >> new_init.c

decls1:
	echo '#include "make-decl.h"' > foo.c
	cat ${INI_FILES} >> foo.c
	${CC} -E -I${HDIR} foo.c | sed -n -e '/#/d' -e '/DO_/d' -e '/[a-zA-Z;]/p' > tmpx
	../xbin/move-if-changed mv tmpx ${HDIR}new_decl.h


grab_defs: grab_defs.c
	${CC} $(OFLAGS) -o grab_defs  grab_defs.c


ALIB=${LIBFILES} user_init.o ${EXTRA_LIB}

$(GCLIB): ${ALIB} 
	rm -f gcllib.a
	$(AR) gcllib.a ${ALIB}
	${RANLIB} gcllib.a
clean:
	rm -f $(OBJS) ${ALIB} new_init.o *.a grab_defs

fsavres.o: /lib/libc.a
	ar xv /lib/libc.a fsavres.o

sockets.o:
	${CC} ${CFLAGS} ${X11_INCLUDE} -c  sockets.c

clxsocket.o:
	${CC} ${CFLAGS}  ${X11_INCLUDE} -c  clxsocket.c
littleXwin.o:
	${CC} ${CFLAGS} ${X11_INCLUDE} -c  littleXwin.o

character.o: $(HFILES)
file.o:	$(HFILES)
hash.o: $(HFILES) ${MP}
list.o:	$(HFILES)
package.o: $(HFILES)
pathname.o: $(HFILES)
print.o: $(HFILES) ${MP}
read.o: $(HFILES) ${MP}
sequence.o: $(HFILES)
string.o: $(HFILES)
symbol.o: $(HFILES)

utils.o: $(HFILES)
alloc.o: $(HFILES)
array.o: $(HFILES)
assignment.o: $(HFILES)
backq.o: $(HFILES)
bds.o: $(HFILES)
big.o: $(HFILES) ${MP}
bind.o: $(HFILES) 
bitop.o: $(HFILES)
block.o: $(HFILES)
catch.o: $(HFILES)
cfun.o: $(HFILES)
cmpaux.o: $(HFILES) ${MP}
conditional.o: $(HFILES)
earith.o: $(HFILES)
error.o: $(HFILES)
eval.o: $(HFILES)
format.o: $(HFILES)
frame.o: $(HFILES)
gbc.o: $(HFILES) ${MP}
interrupt.o: $(HFILES)
iteration.o: $(HFILES)
let.o: $(HFILES)
lex.o: $(HFILES)
macros.o: $(HFILES)
main.o: $(HFILES)
mapfun.o: $(HFILES)
multival.o: $(HFILES)
mpi.o: $(MP)
num_arith.o: $(HFILES) $(HDIR)/num_include.h ${MP}
num_co.o: $(HFILES) $(HDIR)/num_include.h ${MP}
num_comp.o: $(HFILES) $(HDIR)/num_include.h ${MP}
num_log.o: $(HFILES) $(HDIR)/num_include.h ${MP}
num_pred.o: $(HFILES) $(HDIR)/num_include.h ${MP}
num_rand.o: $(HFILES) $(HDIR)/num_include.h ${MP}
num_sfun.o: $(HFILES) $(HDIR)/num_include.h ${MP}
number.o: $(HFILES) $(HDIR)/num_include.h ${MP}
predicate.o: $(HFILES)
prog.o: $(HFILES)
reference.o: $(HFILES)
structure.o: $(HFILES)
toplevel.o: $(HFILES)
typespec.o: $(HFILES) ${MP}
unixfasl.o: $(HFILES)
unixfsys.o: $(HFILES)
unixint.o: $(HFILES)
unixsave.o: $(HFILES)
unixsys.o: $(HFILES)
unixtime.o: $(HFILES)
funlink.o: $(HFILES)
fat_string.o: $(HFILES)
fasdump.o: $(HFILES)
bitblit2.o: $(HFILES)
regexpr.o:$(HFILES) regexp.c
sockets.o:$(HFILES) ../gcl-tk/comm.c ../gcl-tk/sheader.h
nsocket.ini:nsocket.c $(HFILES)

