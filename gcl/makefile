# Compiling gcl:
#   ./configure
#   make
# For more details see the file readme

prefix=/usr/local
# This would cause make install to create /usr/local/bin/gcl and
# /usr/local/lib/gcl-x.yy/* with some basic files.
# This prefix may be overridden e.g. with
# ./configure --prefix=/usr/share

##########################

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
INFO_DIR=/usr/local/info/

# where to put emacs lisp files.
EMACS_SITE_LISP=/usr/share/emacs/20.7/site-lisp

# the default.el file
EMACS_DEFAULT_EL=/usr/share/emacs/20.7/site-lisp/default.el

# numerous TCL/TK variables culled from the tkConfig.sh and tclConfig.sh
# if these are found.
TK_CONFIG_PREFIX=/usr/local/lib
TK_LIBRARY=/usr/local/lib/tk8.3
TCL_LIBRARY=/usr/local/lib/tcl8.3
TK_XINCLUDES=-I/usr/X11R6/include
TK_INCLUDE=-I/usr/local/lib/../include
TCL_INCLUDE=-I/usr/local/lib/../include
TK_LIB_SPEC=-L/usr/local/lib -ltk8.3
TK_BUILD_LIB_SPEC=-L/home/wfs/src/tk8.3.2/unix -ltk8.3
TK_XLIBSW=-L/usr/X11R6/lib -lX11
TK_XINCLUDES=-I/usr/X11R6/include
TCL_LIB_SPEC=-L/usr/local/lib -ltcl8.3${TCL_DBGX}
TCL_DL_LIBS=-ldl
TCL_LIBS=-ldl -lm

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
	if [ "${TK_CONFIG_PREFIX}" != "unknown" ] ; \
	then (cd gcl-tk ; make) ; \
	else echo "gcl-tk not made..missing include or lib" ; fi 
	(cd info ; make)

mpfiles: ${MPFILES}

$(MPDIR)/libmport.a:
	(cd mp ; make all)

gmp/libgmp.a: gmp/Makefile
	(cd gmp/mpn ; make)
	(cd gmp/mpz ; make)
	(cd gmp ; make `echo *.c | sed -e "s:\.c:.o :g"` )
	(cd gmp ; rm -f libgmp.a ;  ar qc libgmp.a *.o */*.o)



command:
	rm -f bin/gcl xbin/gcl
	GCLDIR=`echo ${GCLDIR} | sed -e 'sX^/cygdrive/\([a-z]\)X\1:Xg' -e 'sX^//\([a-z]\)X\1:Xg'` ; \
	make install-command "INSTALL_LIB_DIR=$${GCLDIR}" "prefix=$${GCLDIR}" 
	(cd xbin ; ln -s ../bin/gcl .)

merge:
	${CC} -o merge merge.c

LISP_LIB=cmpnew/collectfn.o lsp/gprof.lsp lsp/info.o lsp/profile.lsp gcl-tk/tkl.o  gcl-tk/tinfo.o gcl-tk/decode.tcl gcl-tk/demos/*.lsp gcl-tk/demos/*.lisp gcl-tk/demos/*.o

install-command:
	rm -f ${prefix}/bin/gcl
	(echo "#!/bin/sh" ; \
	echo exec ${INSTALL_LIB_DIR}/unixport/saved_gcl \\ ; \
	echo '   -dir' ${INSTALL_LIB_DIR}/unixport/ \\ ; \
	echo '   -libdir' ${INSTALL_LIB_DIR}/ \\ ; \
	echo '   -eval '\''(setq si::*allow-gzipped-file* t)'\' \\ ;\
	echo '   -eval '\''(setq si::*tk-library* '\"${TK_LIBRARY}\"')'\' \\;\
	echo '     '\"\$$@\" ) > ${prefix}/bin/gcl;
	echo '#' other options: -load "/tmp/foo.o" -load "jo.lsp" -eval '"(joe 3)"' >> ${prefix}/bin/gcl
	chmod a+x ${prefix}/bin/gcl

install: 
	make install1 "INSTALL_LIB_DIR=${prefix}/lib/gcl-`cat majvers`.`cat minvers`" "prefix=${prefix}"
INSTALL_LIB_DIR=
install1:
	-if [ -d "${prefix}/lib" ] ;then true; else mkdir ${prefix}/lib ; fi
	-if [ -d "${prefix}/bin" ] ;then true; else mkdir ${prefix}/bin ; fi
	-if [ -d "${INSTALL_LIB_DIR}" ] ; then true; else mkdir ${INSTALL_LIB_DIR} ;fi
	make install-command "INSTALL_LIB_DIR=${INSTALL_LIB_DIR}" "prefix=${prefix}"
	rm -f ${prefix}/bin/gcl.exe
	tar cvf - unixport/saved_gcl info/*info* doc/*.el ${LISP_LIB} \
	gcl-tk/gcl.tcl gcl-tk/gcltkaux  |  (cd ${INSTALL_LIB_DIR} ;tar xvf -)
	ln ${SYMB} ${INSTALL_LIB_DIR}/unixport/saved_gcl \
	 ${prefix}/bin/gcl.exe
	-cat gcl-tk/gcltksrv | \
	sed -e "s:GCL_TK_DIR=.*:GCL_TK_DIR=${INSTALL_LIB_DIR}/gcl-tk:g"  \
	-e "s:TK_LIBRARY=.*:TK_LIBRARY=${TK_LIBRARY}:g" > \
	${INSTALL_LIB_DIR}/gcl-tk/gcltksrv
	-if [ "${TK_CONFIG_PREFIX}" != "unknown" ] ; then  \
	chmod a+x ${INSTALL_LIB_DIR}/gcl-tk/gcltksrv ; fi
	-if [ "${TK_CONFIG_PREFIX}" != "unknown" ] ; then  \
	(cd ${INSTALL_LIB_DIR}/gcl-tk/demos ; \
	echo '(load "../tkl.o")(TK::GET-AUTOLOADS (directory "*.lisp"))' | ${prefix}/bin/gcl) ; fi
	(cd elisp ; make install)
	(cd info ; make ; make install)

clean:
	(cd $(BINDIR); make clean)
	(cd mp ; make clean)
	(cd $(ODIR); make clean)
	(cd $(LSPDIR); make clean)
	(cd $(CMPDIR); make clean)
	(cd $(PORTDIR); make clean)
	(cd gcl-tk ; make clean)


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

kcp:
	(cd go ; make  "CFLAGS = -I../h -pg  -c -g ")
	(cd unixport ; make gcp)
