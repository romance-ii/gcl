# Compiling gcl:
#   ./configure
#   make
# For more details see the file readme

prefix=/usr/local
# This would cause make install to create /usr/local/bin/gcl and
# /usr/local/lib/gcl-x.yy/* with some basic files.
# This prefix may be overridden e.g. with
# ./configure --prefix=/usr/share

# Allow platform defs file to override this.
TK_LISP_LIB=gcl-tk/tkl.o gcl-tk/tinfo.o gcl-tk/decode.tcl gcl-tk/demos/*.lsp gcl-tk/demos/*.lisp gcl-tk/demos/*.o
TCL_EXES=gcl-tk/gcl.tcl gcl-tk/gcltkaux$(EXE)

GCL_DVI=gcl-tk.dvi gcl-si.dvi gcl.dvi
GCL_HTML=gcl-si_toc.html gcl-tk_toc.html gcl_toc.html

-include makedefs


BINDIR	= bin
HDIR	= h/
CDIR	= c
ODIR	= o
LSPDIR	= lsp
CMPDIR	= cmpnew
PORTDIR	= unixport
CLCSDIR = clcs
PCLDIR = pcl
MPDIR	= mp
TESTDIR = ansi-tests
#GMP_DIR = gmp3/

all: $(BUILD_BFD) $(PORTDIR)/$(FLISP) command cmpnew/gcl_collectfn.o lsp/gcl_info.o do-gcl-tk do-info

xgcl: $(PORTDIR)/saved_xgcl

$(PORTDIR)/saved_xgcl: $(PORTDIR)/saved_gcl
	cd xgcl-2 && $(MAKE)

binutils/bfd/libbfd.a binutils/libiberty/libiberty.a:
	cd $(@D) && $(MAKE)

h/bfd.h: binutils/bfd/libbfd.a binutils/libiberty/libiberty.a
	cp $(<D)/$(@F) $@

h/bfdlink.h h/ansidecl.h h/symcat.h: binutils/bfd/libbfd.a binutils/libiberty/libiberty.a
	cp $(<D)/../include/$(@F) $@

$(PORTDIR)/saved_gcl: $(HDIR)cmpinclude.h
	(cd $(BINDIR); $(MAKE) all)
	$(MAKE) mpfiles
	rm -f o/cmpinclude.h ; cp h/cmpinclude.h o
	(cd $(ODIR); $(MAKE) all)
	$(MAKE) $<
	rm -f o/cmpinclude.h ; cp h/cmpinclude.h o
	(cd $(ODIR); $(MAKE) all)
	(cd $(LSPDIR); $(MAKE) all)
	(cd $(CMPDIR); $(MAKE) all)
	cd $(@D) && $(MAKE) $(@F)

$(PORTDIR)/saved_pcl_gcl: $(PORTDIR)/saved_gcl
	(cd $(PCLDIR); rm -f *.c; $(MAKE) all)
	cd $(@D) && $(MAKE) $(@F)

$(PORTDIR)/saved_ansi_gcl: $(PORTDIR)/saved_pcl_gcl
	(cd $(CLCSDIR); rm -f *.c; $(MAKE) all)
	cd $(@D) && $(MAKE) $(@F)

ansi-tests/test_results: $(PORTDIR)/saved_ansi_gcl
	cd $(@D) && rm -f *.o rt/*.o && echo '(load "gclload.lsp")' | ../$< >$(@F) 2>&1 & j=$$! ; \
		tail -f --pid=$$j --retry $@ & wait $$j

#$(PCLDIR)/saved_gcl_pcl: $(PORTDIR)/saved_gcl
#	cd $(@D) &&  $(MAKE) compile LISP="../$<" &&  $(MAKE) $(@F) LISP="../$<"

#$(CLCSDIR)/saved_full_gcl: $(PCLDIR)/saved_gcl_pcl
#	cd $(@D) &&  $(MAKE) compile LISP="../$<" &&  $(MAKE) $(@F) LISP="../$<"

#$(PORTDIR)/saved_ansi_gcl: $(CLCSDIR)/saved_full_gcl
#	cd $(@D) &&  $(MAKE) $(@F)

cmpnew/gcl_collectfn.o lsp/gcl_info.o:
	cd $(@D) && $(MAKE) $(@F)

do-gcl-tk:
	if [ -d "$(TK_CONFIG_PREFIX)" ] ; then \
		cd gcl-tk && $(MAKE) ; \
	else \
		echo "gcl-tk not made..missing include or lib" ; \
	fi 

do-info:
	cd info && $(MAKE)

mpfiles: $(MPFILES)

$(MPDIR)/libmport.a:
	(cd mp ; $(MAKE) all)

$(GMPDIR)/libgmp.a: $(GMPDIR)/Makefile
	cd $(GMPDIR) && $(MAKE) && rm -f libgmp.a &&  ar qc libgmp.a *.o */*.o

gmp_all: $(GMPDIR)/Makefile
	cd $(GMPDIR) && $(MAKE) 
	touch $@

$(GMPDIR)/mpn/mul_n.o $(GMPDIR)/mpn/lshift.o $(GMPDIR)/mpn/rshift.o: $(GMPDIR)/Makefile
	cd $(@D) && $(MAKE) $(@F)

command:
	rm -f bin/gcl xbin/gcl
	MGCLDIR=`echo $(GCLDIR) | sed -e 'sX^\([a-z]\):X/\1Xg'` ; \
	GCLDIR=`echo $(GCLDIR)` ; \
	$(MAKE) install-command "INSTALL_LIB_DIR=$$GCLDIR" "prefix=$$GCLDIR" "BINDIR=$$MGCLDIR/$(PORTDIR)"
	(cd xbin ; cp ../bin/gcl .)

#	GCLDIR=`echo $(GCLDIR) | sed -e 'sX^/cygdrive/\([a-z]\)X\1!Xg' -e 'sX^//\([a-z]\)X\1!Xg'` ; \

merge:
	$(CC) -o merge merge.c

LISP_LIB=cmpnew/gcl_collectfn.o cmpnew/gcl_collectfn.lsp lsp/gcl_gprof.lsp lsp/gcl_info.o lsp/gcl_profile.lsp lsp/gcl_export.lsp lsp/gcl_autoload.lsp cmpnew/gcl_cmpmain.lsp cmpnew/gcl_cmpopt.lsp cmpnew/gcl_lfun_list.lsp lsp/gcl_auto_new.lsp h/cmpinclude.h unixport/init_$(SYSTEM).lsp unixport/lib$(SYSTEM).a unixport/libgclp.a gcl-tk/tk-package.lsp $(TK_LISP_LIB) $(RL_LIB)

install-command:
	rm -f $(DESTDIR)$(prefix)/bin/gcl
	(echo '#!/bin/sh' ; \
	if gcc --version | grep -q -i mingw ; then echo "export C_INCLUDE_PATH=`echo $$INSTALL_LIB_DIR`/h"; else echo "export C_INCLUDE_PATH=$(INSTALL_LIB_DIR)/h:\$$C_INCLUDE_PATH"; fi ;\
	echo exec $(BINDIR)/$(FLISP)$(EXE) \\ ; \
	echo '   -dir' $(INSTALL_LIB_DIR)/unixport/ \\ ; \
	echo '   -libdir' $(INSTALL_LIB_DIR)/ \\ ; \
	echo '   -eval '\''(setq si::*allow-gzipped-file* t)'\' \\ ;\
	! [ -d "$(TK_CONFIG_PREFIX)" ] || echo '   -eval '\''(setq si::*tk-library* '\"$(TK_LIBRARY)\"')'\' \\;\
	[ "$(RL_OBJS)" = "" ] || echo '   -eval '\''(si::init-readline)'\' \\;\
	echo '     '\"\$$@\" ) > $(DESTDIR)$(prefix)/bin/gcl;
	echo '#' other options: -load "/tmp/foo.o" -load "jo.lsp" -eval '"(joe 3)"' >> $(DESTDIR)$(prefix)/bin/gcl
	chmod a+x $(DESTDIR)$(prefix)/bin/gcl
	rm -f $(DESTDIR)$(prefix)/bin/gclm.bat
	if gcc --version | grep -q mingw ; then (echo '@SET cd='; \
	 echo '@SET promp$=%prompt%'; \
	 echo '@PROMPT SET cd$Q$P'; \
	 echo '@CALL>%temp%.\setdir.bat'; \
	 echo '@'; \
	 echo '% do not delete this line %'; \
	 echo '@ECHO off'; \
	 echo 'PROMPT %promp$%'; \
	 echo 'FOR %%c IN (CALL DEL) DO %%c %temp%.\setdir.bat'; \
	 echo 'set cwd=%cd%'; \
	 echo 'set libdir=%cd%\..\lib\gcl-2.5.0'; \
	 echo 'set unixportdir=%libdir%\unixport'; \
	 echo 'path %cd%\..\mingw\bin;%PATH%'; \
	 echo "start %unixportdir%\saved_gcl.exe -dir %unixportdir% -libdir %libdir% -eval \"(setq si::*allow-gzipped-file* t)\" %1 %2 %3 %4 %5 %6 %7 %8 %9" ) > $(DESTDIR)$(prefix)/bin/gclm.bat ; fi
	rm -f $(DESTDIR)$(prefix)/bin/gclfinal.bat
	if gcc --version | grep -q -i mingw ; then (echo 'ECHO path %1\mingw\bin;%PATH% > gcli.bat'; \
	 echo "ECHO start %1\lib\gcl-2.5.0\unixport\saved_gcl.exe -dir %1\lib\gcl-2.5.0\unixport -libdir %1\lib\gcl-2.5.0 -eval \"(setq si::*allow-gzipped-file* t)\" %1 %2 %3 %4 %5 %6 %7 %8 %9 >> gcli.bat" ) > $(DESTDIR)$(prefix)/bin/gclfinal.bat ; fi

install: 
	$(MAKE) install1 "INSTALL_LIB_DIR=$(prefix)/lib/gcl-`cat majvers`.`cat minvers`" "prefix=$(prefix)" "DESTDIR=$(DESTDIR)"
INSTALL_LIB_DIR=
install1:
	mkdir -p $(DESTDIR)$(prefix)/lib 
	mkdir -p $(DESTDIR)$(prefix)/bin
	mkdir -p $(DESTDIR)$(INSTALL_LIB_DIR)
	MINSTALL_LIB_DIR=`echo $(INSTALL_LIB_DIR) | sed -e 'sX^\([a-z]\):X/\1Xg'` ; \
	$(MAKE) install-command "INSTALL_LIB_DIR=$(INSTALL_LIB_DIR)" "prefix=$(prefix)" "DESTDIR=$(DESTDIR)" "BINDIR=$$MINSTALL_LIB_DIR/unixport"
	rm -f $(DESTDIR)$(prefix)/bin/gcl.exe
	tar cf - $(PORTDIR)/$(FLISP)$(EXE) info/*.info* $(LISP_LIB) \
	$(TCL_EXES)  |  (cd $(DESTDIR)$(INSTALL_LIB_DIR) ;tar xf -)
	cd $(DESTDIR)$(INSTALL_LIB_DIR)/$(PORTDIR) && \
		mv $(FLISP)$(EXE) temp && \
		echo "(setq si::*system-directory* \"$(INSTALL_LIB_DIR)/$(PORTDIR)\")(si::save-system \"$(FLISP)$(EXE)\")" | ./temp && \
		rm -f temp
	if [ -e "unixport/rsym$(EXE)" ] ; then cp unixport/rsym$(EXE) $(DESTDIR)$(INSTALL_LIB_DIR)/unixport/ ; fi
#	ln $(SYMB) $(INSTALL_LIB_DIR)/$(PORTDIR)/$(FLISP)$(EXE) \
#	 $(DESTDIR)$(prefix)/bin/gcl.exe
	if [ -d "$(TK_CONFIG_PREFIX)" ] ; then  \
	cat gcl-tk/gcltksrv$(BAT) | \
	sed -e "s!GCL_TK_DIR=.*!GCL_TK_DIR=$(INSTALL_LIB_DIR)/gcl-tk!g"  \
	-e "s!TK_LIBRARY=.*!TK_LIBRARY=$(TK_LIBRARY)!g" > \
	$(DESTDIR)$(INSTALL_LIB_DIR)/gcl-tk/gcltksrv$(BAT) ; \
	chmod a+x $(DESTDIR)$(INSTALL_LIB_DIR)/gcl-tk/gcltksrv$(BAT) ; fi
#	if [ -d "$(TK_CONFIG_PREFIX)" ] ; then  \
#	(cd $(DESTDIR)$(INSTALL_LIB_DIR)/gcl-tk/demos ; \
#	echo '(load "../tkl.o")(TK::GET-AUTOLOADS (directory "*.lisp"))' | ../../$(PORTDIR)/$(FLISP)$(EXE)) ; fi
	if test "$(EMACS_SITE_LISP)" != "" ; then (cd elisp ; $(MAKE) install DESTDIR=$(DESTDIR)) ; fi
	if test "$(INFO_DIR)" != "unknown"; then (cd info ; $(MAKE) ; $(MAKE) install DESTDIR=$(DESTDIR)) ; fi
	if gcc --version | grep -q -i mingw ; then cp COPYING.LIB-2.0 readme-bin.mingw $(prefix) ; fi
	if gcc --version | grep -q -i mingw ; then cp gcl.ico $(prefix)/bin ; fi
	if gcc --version | grep -q -i mingw ; then rm -rf $(prefix)/install; mkdir $(prefix)/install ; cp windows/install.lsp $(prefix)/install ;fi
	if gcc --version | grep -q -i mingw ; then rm -rf $(prefix)/doc; mkdir $(prefix)/doc; cp info/*.html $(prefix)/doc ; fi

clean:
	(cd $(BINDIR); $(MAKE) clean)
	(cd mp ; $(MAKE) clean)
	(cd $(ODIR); $(MAKE) clean)
	(cd $(LSPDIR); $(MAKE) clean)
	(cd $(CMPDIR); $(MAKE) clean)
	(cd $(PORTDIR); $(MAKE) clean)
	(cd gcl-tk ; $(MAKE) clean)
	-(cd $(GMPDIR) ; $(MAKE) distclean)
	cd $(CLCSDIR) && $(MAKE) clean
	cd $(PCLDIR) && $(MAKE) clean
	cd xgcl-2 && $(MAKE) clean
	(cd $(TESTDIR); $(MAKE) clean)
	(cd info ; $(MAKE) clean)
	rm -f foo.tcl config.log makedefs makedefsafter config.cache config.status makedefc
	rm -f h/config.h h/gclincl.h h/cmpinclude.h h/gmp.h
	rm -rf $(GMPDIR)/.deps $(GMPDIR)/libgmp.a
	rm -f xbin/gcl foo foo.c bin/gclm.bat gmp_all
	rm -f h/*-linux.defs h/bfd.h h/bfdlink.h h/ansidecl.h h/symcat.h
	rm -f windows/gcl.iss bin/gcl.bat windows/gcl.ansi.iss windows/install.ansi.lsp \
		windows/install.lsp
	rm -f ansi-tests/test_results ansi-tests/gazonk*lsp
	rm -f config.log config.cache config.status
	-cd binutils/bfd && $(MAKE) distclean
	-cd binutils/libiberty && $(MAKE) distclean

CMPINCLUDE_FILES=$(HDIR)cmpincl1.h $(HDIR)gclincl.h $(HDIR)compbas.h $(HDIR)enum.h $(HDIR)mgmp.h $(HDIR)object.h $(HDIR)vs.h \
	$(HDIR)bds.h $(HDIR)frame.h \
	$(HDIR)lex.h $(HDIR)eval.h    $(HDIR)funlink.h \
	$(HDIR)att_ext.h $(HDIR)new_decl.h $(HDIR)compbas2.h \
	$(HDIR)compat.h $(HDIR)cmponly.h $(ODIR)/regexp.h $(HDIR)/protoize.h

OTHERS=$(HDIR)notcomp.h $(HDIR)rgbc.h $(HDIR)stacks.h 

$(HDIR)cmpinclude.h: $(CMPINCLUDE_FILES) $(HDIR)config.h
	cat $(HDIR)config.h | sed -e "1,/Begin for cmpincl/d" \
		-e "/End for cmpinclude/,50000d" > tmpx
	cat $(CMPINCLUDE_FILES) >> tmpx
	./xbin/move-if-changed mv tmpx h/cmpinclude.h
	./xbin/move-if-changed cp h/cmpinclude.h o/cmpinclude.h

go:
	mkdir go
	(cd go ; cp -s ../o/makefile ../o/*.o ../o/*.c ../o/*.d ../o/*.ini  .)
	(cd go ; $(MAKE)  go)

tar:
	rm -f gcl-`cat majvers`.`cat minvers`
	xbin/distribute ../ngcl-`cat majvers`.`cat minvers`-beta.tgz

configure: configure.in
	autoconf configure.in > configure
	chmod a+rx configure

kcp:
	(cd go ; $(MAKE)  "CFLAGS = -I../h -pg  -c -g ")
	(cd unixport ; $(MAKE) gcp)

.INTERMEDIATE: unixport/saved_pcl_gcl