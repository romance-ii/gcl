
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


-include ../makedefs


CFLAGS1=$(CFLAGS) -I../o -I../h ${TK_INCLUDE} ${TCL_INCLUDE} ${TK_XINCLUDES}


all: gcltksrv   tkl.o tinfo.o  demos/gc-monitor.o gcltkaux
	(cd demos ; \
	echo '(load "../tkl.o")(TK::GET-AUTOLOADS (directory "*.lisp"))' | ../../unixport/$(FLISP)) 

.lisp.o:
	echo "(compile-file \"$*.lisp\" :c-file nil :c-debug nil)" | ../unixport/$(FLISP)

.lsp.o:
	echo "(compile-file \"$*.lsp\" :c-file nil :c-debug nil)" | ../unixport/$(FLISP)



GUIOS = guis.o tkAppInit.o tkMain.o

clean::
	rm -f ${GUIOS} $(OFILES) gcltkaux gcltksrv *.o */*.o demos/index.lsp *.fn demos/*.fn

.c.o:
	$(GCLTKCC) -c $(CFLAGS1) ${ODIR_DEBUG}  $*.c


# for some reason -lieee is on various linux systems in the list of requireds..

gcltkaux:  $(GUIOS)
	$(LD_ORDINARY_CC) $(GUIOS) -o gcltkaux  ${TK_LIB_SPEC} ${TK_BUILD_LIB_SPEC} ${TK_XLIBSW} ${TK_XINCLUDES} ${TCL_LIB_SPEC}  `echo ${TCL_LIBS} | sed -e s:-lieee::g`  ${LIBS} ${GCLIB}

gcltksrv: makefile
	cat gcltksrv.in | sed -e "s!TK_LIBRARY=.*!TK_LIBRARY=${TK_LIBRARY}!g" \
	-e "s!TCL_LIBRARY=.*!TCL_LIBRARY=${TCL_LIBRARY}!g" \
	-e "s!TK_XLIB_DIR=.*!TK_XLIB_DIR=${TK_XLIB_DIR}!g" \
	-e "s!GCL_TK_DIR=.*!GCL_TK_DIR=${GCLDIR}/gcl-tk!g" > gcltksrv
	chmod a+x gcltksrv

gcltksrv.interp: makefile
	cat gcltksrv.in.interp | sed -e "s!TK_LIBRARY=.*!TK_LIBRARY=${TK_LIBRARY}!g" \
	-e "s!TK_XLIB_DIR=.*!TK_XLIB_DIR=${TK_XLIB_DIR}!g" \
	-e "s!TCL_LIBRARY=.*!TCL_LIBRARY=${TCL_LIBRARY}!g" \
	-e "s!GCL_TK_DIR=.*!GCL_TK_DIR=${GCLDIR}/gcl-tk!g" > gcltksrv.interp
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
