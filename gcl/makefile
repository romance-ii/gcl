# Compiling gcl:
#   ./configure
#   make
# For more details see the file readme

prefix=/usr/local
# This would cause make install to create /usr/local/bin/gcl and
# /usr/local/lib/gcl-x.yy/* with some basic files.
# This prefix may be overridden e.g. with
# ./configure --prefix=/usr/share


-include makedefs


BINDIR	= bin
HDIR	= h/
CDIR	= c
ODIR	= o
LSPDIR	= lsp
CMPDIR	= cmpnew
PORTDIR	= unixport
MPDIR	= mp
GMP_DIR = gmp/

all:   ${HDIR}cmpinclude.h
	(cd $(BINDIR); make all)
	make mpfiles
	rm -f o/cmpinclude.h ; ln h/cmpinclude.h o
	(cd $(ODIR); make all)
	(cd $(LSPDIR); make all)
	(cd $(CMPDIR); make all)
	(cd $(PORTDIR); make saved_gcl)
	make command

# 	After making successfully send in a notification to
#	gcl@nicolas.ma.utexas.edu.   This is extremely helpful in
#	tracking on which machines and OS versions there are problems.
#	This will be done automatically by the  xbin/notify line.
	(cd  cmpnew ; make collectfn.o)
	(cd lsp ; make info.o)
	@- if  [ -f cmpnew/collectfn.o ]  ; \
	then echo "Make of GCL `cat majvers`.`cat minvers` completed." ; \
        if [ "${NOTIFY}" = "yes" ] ; then \
	./xbin/notify "CC=${CC}" ;  fi ;\
	else echo "The new image failed to compile collectfn.lsp" ;fi ; \
	if [ -d "${TK_CONFIG_PREFIX}" ] ; \
	then (cd gcl-tk ; make) ; \
	else echo "gcl-tk not made..missing include or lib" ; fi 
	(cd info ; make)

mpfiles: ${MPFILES}

$(MPDIR)/libmport.a:
	(cd mp ; make all)

gmp/libgmp.a: gmp/Makefile
	(cd gmp/mpn ; make)
	(cd gmp/mpz ; make)
	(cd gmp ; make `echo *.c | sed -e "s!\.c!.o !g"` )
	(cd gmp ; rm -f libgmp.a ;  ar qc libgmp.a *.o */*.o)



command:
	rm -f bin/gcl xbin/gcl
	GCLDIR=`echo ${GCLDIR} | sed -e 'sX^/cygdrive/\([a-z]\)X\1!Xg' -e 'sX^//\([a-z]\)X\1!Xg'` ; \
	make install-command "INSTALL_LIB_DIR=$${GCLDIR}" "prefix=$${GCLDIR}" 
	(cd xbin ; ln -s ../bin/gcl .)

merge:
	${CC} -o merge merge.c

LISP_LIB=cmpnew/collectfn.o lsp/gprof.lsp lsp/info.o lsp/profile.lsp gcl-tk/tkl.o  gcl-tk/tinfo.o gcl-tk/decode.tcl gcl-tk/demos/*.lsp gcl-tk/demos/*.lisp gcl-tk/demos/*.o $(RL_LIB)

install-command:
	rm -f $(DESTDIR)${prefix}/bin/gcl
	(echo '#!/bin/sh' ; \
	echo exec ${INSTALL_LIB_DIR}/unixport/saved_gcl$(EXE) \\ ; \
	echo '   -dir' ${INSTALL_LIB_DIR}/unixport/ \\ ; \
	echo '   -libdir' ${INSTALL_LIB_DIR}/ \\ ; \
	echo '   -eval '\''(setq si::*allow-gzipped-file* t)'\' \\ ;\
	! [ -d "${TK_CONFIG_PREFIX}" ] || echo '   -eval '\''(setq si::*tk-library* '\"${TK_LIBRARY}\"')'\' \\;\
	[ "$(RL_OBJS)" = "" ] || echo '   -eval '\''(si::init-readline)'\' \\;\
	echo '     '\"\$$@\" ) > $(DESTDIR)${prefix}/bin/gcl;
	echo '#' other options: -load "/tmp/foo.o" -load "jo.lsp" -eval '"(joe 3)"' >> $(DESTDIR)${prefix}/bin/gcl
	chmod a+x $(DESTDIR)${prefix}/bin/gcl

install: 
	make install1 "INSTALL_LIB_DIR=${prefix}/lib/gcl-`cat majvers`.`cat minvers`" "prefix=${prefix}" DESTDIR=$(DESTDIR)
INSTALL_LIB_DIR=
install1:
	mkdir -p $(DESTDIR)${prefix}/lib 
	mkdir -p $(DESTDIR)${prefix}/bin
	mkdir -p $(DESTDIR)${INSTALL_LIB_DIR}
	make install-command "INSTALL_LIB_DIR=${INSTALL_LIB_DIR}" "prefix=${prefix}" DESTDIR=$(DESTDIR)
	rm -f $(DESTDIR)${prefix}/bin/gcl.exe
	tar cf - unixport/saved_gcl$(EXE) info/*.info* ${LISP_LIB} \
	gcl-tk/gcl.tcl gcl-tk/gcltkaux$(EXE)  |  (cd $(DESTDIR)${INSTALL_LIB_DIR} ;tar xf -)
	ln ${SYMB} ${INSTALL_LIB_DIR}/unixport/saved_gcl$(EXE) \
	 $(DESTDIR)${prefix}/bin/gcl.exe
	if [ -d "${TK_CONFIG_PREFIX}" ] ; then  \
	cat gcl-tk/gcltksrv$(BAT) | \
	sed -e "s!GCL_TK_DIR=.*!GCL_TK_DIR=${INSTALL_LIB_DIR}/gcl-tk!g"  \
	-e "s!TK_LIBRARY=.*!TK_LIBRARY=${TK_LIBRARY}!g" > \
	$(DESTDIR)${INSTALL_LIB_DIR}/gcl-tk/gcltksrv$(BAT) ; \
	chmod a+x $(DESTDIR)${INSTALL_LIB_DIR}/gcl-tk/gcltksrv$(BAT) ; fi
	if [ -d "${TK_CONFIG_PREFIX}" ] ; then  \
	(cd $(DESTDIR)${INSTALL_LIB_DIR}/gcl-tk/demos ; \
	echo '(load "../tkl.o")(TK::GET-AUTOLOADS (directory "*.lisp"))' | ../../unixport/saved_gcl$(EXE)) ; fi
	(cd elisp ; make install DESTDIR=$(DESTDIR))
	(cd info ; make ; make install DESTDIR=$(DESTDIR))

clean:
	(cd $(BINDIR); make clean)
	(cd mp ; make clean)
	(cd $(ODIR); make clean)
	(cd $(LSPDIR); make clean)
	(cd $(CMPDIR); make clean)
	(cd $(PORTDIR); make clean)
	(cd gcl-tk ; make clean)
	-(cd gmp ; make distclean)
	(cd info ; make clean)
	rm -f foo.tcl config.log makedefs makedefsafter config.cache config.status makedefc
	rm -f h/config.h h/gclincl.h h/cmpinclude.h
	rm -rf gmp/.deps gmp/libgmp.a
	rm -f xbin/gcl foo foo.c

CMPINCLUDE_FILES=${HDIR}cmpincl1.h ${HDIR}gclincl.h ${HDIR}compbas.h ${HDIR}enum.h ${HDIR}object.h ${HDIR}vs.h \
	${HDIR}bds.h ${HDIR}frame.h \
	${HDIR}lex.h ${HDIR}eval.h    ${HDIR}funlink.h \
	${HDIR}att_ext.h ${HDIR}new_decl.h ${HDIR}compbas2.h ${HDIR}/compat.h ${HDIR}/cmponly.h

OTHERS=${HDIR}notcomp.h ${HDIR}rgbc.h ${HDIR}stacks.h 

${HDIR}cmpinclude.h: ${CMPINCLUDE_FILES} ${HDIR}config.h
	cat ${HDIR}config.h | sed -e "1,/Begin for cmpincl/d" \
		-e "/End for cmpinclude/,50000d" > tmpx
	cat ${CMPINCLUDE_FILES} >> tmpx
	./xbin/move-if-changed mv tmpx h/cmpinclude.h
	./xbin/move-if-changed ln h/cmpinclude.h o/cmpinclude.h

go:
	mkdir go
	(cd go ; ln -s ../o/makefile ../o/*.o ../o/*.c ../o/*.d ../o/*.ini  .)
	(cd go ; make  go)

tar:
	rm -f gcl-`cat majvers`.`cat minvers`
	xbin/distribute ../ngcl-`cat majvers`.`cat minvers`-beta.tgz

configure: configure.in
	autoconf configure.in > configure
	chmod a+rx configure

kcp:
	(cd go ; make  "CFLAGS = -I../h -pg  -c -g ")
	(cd unixport ; make gcp)
