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
BINSCPT:=gcl

-include makedefs

BINDIR	= bin
HDIR	= h/
CDIR	= c
ODIR	= o
LSPDIR	= lsp
CMPDIR	= cmpnew
PORTDIR	= unixport
CLCSDIR = clcs
MODDIR = mod
PCLDIR = pcl
MPDIR	= mp
TESTDIR = ansi-tests
#GMP_DIR = gmp3/

VERSION=`cat majvers`.`cat minvers`

all: $(BUILD_BFD) system command cmpnew/gcl_collectfn.o lsp/gcl_info.o do-gcl-tk do-info pargcl_all

system: $(PORTDIR)/$(FLISP)
	$(MAKE) -C $(PORTDIR) final
	touch $@

ASRC:=$(shell ls -1 o/*.c lsp/*.lsp cmpnew/*.lsp mod/*.lsp pcl/*sp clcs/*sp xgcl-2/*p) #o/*.d o/*.h h/*.h
TAGS: $(ASRC)
	etags --regex='/\#.`(defun[ \n\t]+\([^ \n\t]+\)/' $^

xgcl: $(PORTDIR)/saved_xgcl

$(PORTDIR)/saved_xgcl: $(PORTDIR)/saved_gcl
	cd xgcl-2 && $(MAKE)

binutils/intl/libintl.a:
	cd $(@D) && $(MAKE)

binutils/bfd/libbfd.a binutils/libiberty/libiberty.a: binutils/intl/libintl.a
	cd $(@D) && $(MAKE)

copy_iberty: $(LIBIBERTY)
	cd binutils/libiberty && ar x $<

copy_bfd: $(LIBBFD) copy_iberty
	cd binutils/bfd && ar x $<

h/bfd.h: binutils/bfd/libbfd.a binutils/libiberty/libiberty.a
	cp $(<D)/$(@F) $@

h/bfdlink.h h/ansidecl.h h/symcat.h: binutils/bfd/libbfd.a binutils/libiberty/libiberty.a
	cp $(<D)/../include/$(@F) $@

$(PORTDIR)/saved_pre_gcl: $(HDIR)cmpinclude.h
	(cd $(BINDIR); $(MAKE) all)
	$(MAKE) mpfiles
	rm -f o/cmpinclude.h ; cp h/cmpinclude.h o
	(cd $(ODIR); $(MAKE) all)
	$(MAKE) $<
	rm -f o/cmpinclude.h ; cp h/cmpinclude.h o
#	(cd $(ODIR); $(MAKE) all)
	cd $(@D) && $(MAKE) $(@F)
	cd $(@D) && echo '(time (let ((*features* (cons :pre-gcl *features*)))(load "boot.lisp")))' | ./$(@F)
#	cd $(ODIR) && rm -f boot.h && echo "#define LISP_BOOT" > boot.h && $(MAKE) all
	cd $(@D) && $(MAKE) saved_gcl && mv saved_gcl $(@F)
	touch $< $@

$(PORTDIR)/saved_gcl: $(PORTDIR)/saved_pre_gcl $(HDIR)cmpinclude.h 
#	(cd $(LSPDIR); touch *.lsp ; $(MAKE) all)
#	(cd $(CMPDIR); touch *.lsp ; $(MAKE) all)
	cd $(@D) && echo '(time (load "boot.lisp"))' | ./$(<F) && $(MAKE) $(@F)

$(PORTDIR)/saved_mod_gcl: $(PORTDIR)/saved_gcl
	(cd $(MODDIR); $(MAKE) clean; $(MAKE) all)
	[ "$(X_LIBS)" == "" ] || (cd xgcl-2 && $(MAKE) LISP=../$<)
	cd $(@D) && $(MAKE) $(@F)

$(PORTDIR)/saved_pcl_gcl: $(PORTDIR)/saved_mod_gcl
	(cd $(PCLDIR); $(MAKE) clean; $(MAKE) all)
	cd $(@D) && $(MAKE) $(@F)

$(PORTDIR)/saved_ansi_gcl: $(PORTDIR)/saved_pcl_gcl
	(cd $(CLCSDIR); $(MAKE) clean; $(MAKE) all)
	cd $(@D) && $(MAKE) $(@F)

ansi-tests/test_results: $(PORTDIR)/saved_ansi_gcl
	cd $(@D) && rm -f *.o rt/*.o && echo '(load "gclload.lsp")' | ../$<  2>&1 |tee $(@F) & j=$$! ; \
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

# This target can only be made once gcl exists.
# So, the dependencies here should match those of "all", except for pargcl_all.
# By setting make variables, pargcl_all should work for build, and for install
pargcl_all: $(BUILD_BFD) $(PORTDIR)/$(FLISP) command cmpnew/gcl_collectfn.o \
		lsp/gcl_info.o do-gcl-tk do-info
	# MINSTALL_LIB_DIR=`echo $(INSTALL_LIB_DIR) | sed -e 'sX^\([a-z]\):X/\1Xg'`
	# $(MAKE) install_command "INSTALL_LIB_DIR=$(INSTALL_LIB_DIR)" "prefix=$(prefix)" "DESTDIR=$(DESTDIR)" "BINDIR=$$MINSTALL_LIB_DIR/unixport"
	# Logic copied from `command' target, but with FLISP modified:
	if test "$(PARGCLDIR)" != ""; then \
	  MGCLDIR=`echo $(GCLDIR) | sed -e 'sX^\([a-z]\):X/\1Xg'` ; \
	  GCLDIR=`echo $(GCLDIR)` ; \
	  $(MAKE) install_command FLISP=saved_pargcl BINSCPT=pargcl \
	    "INSTALL_LIB_DIR=$$GCLDIR" "prefix=$$GCLDIR" \
	    "BINDIR=$$MGCLDIR/$(PORTDIR)" \
	  && cat bin/pargcl \
	  	| sed -f $(PARGCLDIR)/src/pargcl.sed > bin/pargcl_temp \
	  && mv -f bin/pargcl_temp bin/pargcl \
	  && chmod a+x bin/pargcl \
	  && cat $(PARGCLDIR)/bin/procgroup \
	  	| sed -e s^pargcl/bin/par^bin/par^ \
		| sed -e s^bin/par${SYSTEM}^bin/pargcl^ > bin/procgroup ; \
	  (cd $(PARGCLDIR) && $(MAKE)) \
	  && cp ${PARGCLDIR}/src/saved_pargcl unixport/ \
	  && cd unixport \
	  && mv saved_pargcl temp$(EXE) \
	  && echo '(si::reset-sys-paths "$(GCLDIR)/")(si::save-system "saved_pargcl")' | ./temp$(EXE) \
	  && echo '#' \
	  && echo '#' \
	  && echo '# ParGCL built.  To test it:  cd bin; ./pargcl ' \
	  && echo '#' \
	  && echo '#' ; \
	  rm -f temp$(EXE); \
	fi

command:
	rm -f bin/gcl xbin/gcl
	MGCLDIR=`echo $(GCLDIR) | sed -e 'sX^\([a-z]\):X/\1Xg'` ; \
	GCLDIR=`echo $(GCLDIR)` ; \
	$(MAKE) install_command "INSTALL_LIB_DIR=$$GCLDIR" "prefix=$$GCLDIR" "BINDIR=$$MGCLDIR/$(PORTDIR)"
	(cd xbin ; cp ../bin/gcl .)

#	GCLDIR=`echo $(GCLDIR) | sed -e 'sX^/cygdrive/\([a-z]\)X\1!Xg' -e 'sX^//\([a-z]\)X\1!Xg'` ; \

merge:
	$(CC) -o merge merge.c

LISP_LIB=clcs/package.lisp clcs/myload1.lisp clcs/gcl_clcs_macros.lisp cmpnew/gcl_collectfn.o cmpnew/gcl_collectfn.lsp xgcl-2/sysdef.lisp xgcl-2/gcl_dwtest.lsp xgcl-2/gcl_dwtestcases.lsp lsp/gcl_gprof.lsp lsp/gcl_info.o lsp/gcl_profile.lsp lsp/gcl_export.lsp lsp/gcl_autoload.lsp cmpnew/gcl_cmpmain.lsp cmpnew/gcl_cmpopt.lsp cmpnew/gcl_lfun_list.lsp lsp/gcl_auto_new.lsp h/cmpinclude.h unixport/init_$(SYSTEM).lsp unixport/lib$(SYSTEM).a unixport/libgclp.a gcl-tk/tk-package.lsp $(TK_LISP_LIB) $(RL_LIB) $(FIRST_FILE) $(LAST_FILE) $(addsuffix /sys-proclaim.lisp,lsp cmpnew pcl clcs) unixport/gcl.script

install_command:
	rm -f bin/$(BINSCPT)
	(echo '#!/bin/sh' ; \
	echo exec $(BINDIR)/$(FLISP)$(EXE) \\ ; \
	echo '   -dir' $(INSTALL_LIB_DIR)/unixport/ \\ ; \
	echo '   -libdir' $(INSTALL_LIB_DIR)/ \\ ; \
	echo '   -eval '\''(setq si::*allow-gzipped-file* t)'\' \\ ;\
	! [ -d "$(TK_CONFIG_PREFIX)" ] || echo '   -eval '\''(setq si::*tk-library* '\"$(TK_LIBRARY)\"')'\' \\;\
	echo '     '\"\$$@\" ) > bin/$(BINSCPT);
	echo '#' other options: -load "/tmp/foo.o" -load "jo.lsp" -eval '"(joe 3)"' >> bin/$(BINSCPT)
	chmod a+x bin/$(BINSCPT)

install_windows_command:
	rm -f $(prefix)/bin/gcl
	(echo '#!/bin/sh' ; \
	echo exec $(BINDIR)/$(FLISP)$(EXE) \\ ; \
	echo '   -dir' $(INSTALL_LIB_DIR)/unixport/ \\ ; \
	echo '   -libdir' $(INSTALL_LIB_DIR)/ \\ ; \
	echo '   -eval '\''(setq si::*allow-gzipped-file* t)'\' \\ ;\
	! [ -d "$(TK_CONFIG_PREFIX)" ] || echo '   -eval '\''(setq si::*tk-library* '\"$(TK_LIBRARY)\"')'\' \\;\
	echo '     '\"\$$@\" ) > $(prefix)/bin/gcl;
	chmod a+x $(prefix)/bin/gcl
	rm -f $(prefix)/bin/gclm.bat
	(echo '@SET cd='; \
	 echo '@SET promp$=%prompt%'; \
	 echo '@PROMPT SET cd$Q$P'; \
	 echo '@CALL>%temp%.\setdir.bat'; \
	 echo '@'; \
	 echo '% do not delete this line %'; \
	 echo '@ECHO off'; \
	 echo 'PROMPT %promp$%'; \
	 echo 'FOR %%c IN (CALL DEL) DO %%c %temp%.\setdir.bat'; \
	 echo 'set cwd=%cd%'; \
	 echo 'set libdir=%cd%\..\lib\gcl-'$(VERSION); \
	 echo 'set unixportdir=%libdir%\unixport'; \
	 echo 'path %cd%\..\mingw\bin;%PATH%'; \
	 echo "start %unixportdir%\$(FLISP).exe -dir %unixportdir% -libdir %libdir% -eval \"(setq si::*allow-gzipped-file* t)\" %1 %2 %3 %4 %5 %6 %7 %8 %9" ) > $(prefix)/bin/gclm.bat

install: all
	$(MAKE) install1 "INSTALL_LIB_DIR=$(prefix)/lib/gcl-`cat majvers`.`cat minvers`" "prefix=$(prefix)" "DESTDIR=$(DESTDIR)"

INSTALL_LIB_DIR=
install1:
# When the make variables for `${MAKE} install_unix', below, are added
#  in, please also add them for`${MAKE} pargcl_all
# Only the FLISP and BINSCPT variables need to be added, to convert to pargcl
	if gcc --version | grep -i mingw >/dev/null 2>&1 ; then \
		${MAKE} install_windows; \
	else \
		${MAKE} install_unix; \
		[ "$(PARGCLDIR)" = "" ] || ${MAKE} pargcl_all FLISP=saved_pargcl BINSCPT=pargcl \
			 INSTALL_LIB_DIR=$(INSTALL_LIB_DIR) prefix=$(prefix) \
			 DESTDIR=$(DESTDIR) GCLDIR=$(INSTALL_LIB_DIR); \
	fi

install_unix:
	mkdir -p $(DESTDIR)$(prefix)/lib 
	mkdir -p $(DESTDIR)$(prefix)/bin
	mkdir -p $(DESTDIR)$(INSTALL_LIB_DIR)
	MINSTALL_LIB_DIR=`echo $(INSTALL_LIB_DIR) | sed -e 'sX^\([a-z]\):X/\1Xg'` ; \
	$(MAKE) install_command "INSTALL_LIB_DIR=$(INSTALL_LIB_DIR)" "prefix=$(prefix)" "DESTDIR=$(DESTDIR)" "BINDIR=$$MINSTALL_LIB_DIR/unixport"
	cp bin/$(BINSCPT) $(DESTDIR)$(prefix)/bin/
	rm -f $(DESTDIR)$(prefix)/bin/gcl.exe
	tar cf - $(PORTDIR)/$(FLISP)$(EXE) info/*.info* $(LISP_LIB) \
	$(TCL_EXES)  |  (cd $(DESTDIR)$(INSTALL_LIB_DIR) ;tar xf -)
	cd $(DESTDIR)$(INSTALL_LIB_DIR)/$(PORTDIR) && \
		mv $(FLISP)$(EXE) temp$(EXE) && \
		echo '(reset-sys-paths "$(INSTALL_LIB_DIR)/")(si::save-system "$(FLISP)$(EXE)")' | ./temp$(EXE) && \
		rm -f temp$(EXE)
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
	[ "$(X_LIBS)" == "" ] || if test "$(INFO_DIR)" != "unknown"; then (cd xgcl-2 ; $(MAKE) install LISP=../unixport/saved_pre_gcl DESTDIR=$(DESTDIR)) ; fi

install_windows:
	mkdir -p $(DESTDIR)$(prefix)/lib 
	mkdir -p $(DESTDIR)$(prefix)/bin
	mkdir -p $(DESTDIR)$(INSTALL_LIB_DIR)
	MINSTALL_LIB_DIR=`echo $(INSTALL_LIB_DIR) | sed -e 'sX^\([a-z]\):X/\1Xg'` ; \
	$(MAKE) install_windows_command "INSTALL_LIB_DIR=$(INSTALL_LIB_DIR)" "prefix=$(prefix)" "DESTDIR=$(DESTDIR)" "BINDIR=$$MINSTALL_LIB_DIR/unixport"
	rm -f $(DESTDIR)$(prefix)/bin/gcl.exe
	tar cf - $(PORTDIR)/$(FLISP)$(EXE) info/*.info* $(LISP_LIB) \
	$(TCL_EXES)  |  (cd $(DESTDIR)$(INSTALL_LIB_DIR) ;tar xf -)
	if grep -i oncrpc makedefs >/dev/null 2>&1 ; then cp /mingw/bin/oncrpc.dll $(DESTDIR)$(INSTALL_LIB_DIR)/$(PORTDIR); fi
	if test -f /mingw/bin/libgmp.dll ; then cp /mingw/bin/libgmp.dll $(DESTDIR)$(INSTALL_LIB_DIR)/$(PORTDIR); fi
	cd $(DESTDIR)$(INSTALL_LIB_DIR)/$(PORTDIR) && \
		mv $(FLISP)$(EXE) temp$(EXE) && \
		echo '(reset-sys-paths "$(INSTALL_LIB_DIR)/")(si::save-system "$(FLISP)$(EXE)")' | ./temp$(EXE) $(LISPFLAGS) && \
		rm -f temp$(EXE)
	if [ -e "unixport/rsym$(EXE)" ] ; then cp unixport/rsym$(EXE) $(DESTDIR)$(INSTALL_LIB_DIR)/unixport/ ; fi
	if [ -d "$(TK_CONFIG_PREFIX)" ] ; then  \
	cat gcl-tk/gcltksrv$(BAT) | \
	sed -e "s!GCL_TK_DIR=.*!GCL_TK_DIR=$(INSTALL_LIB_DIR)/gcl-tk!g"  \
	-e "s!TK_LIBRARY=.*!TK_LIBRARY=$(TK_LIBRARY)!g" > \
	$(DESTDIR)$(INSTALL_LIB_DIR)/gcl-tk/gcltksrv$(BAT) ; \
	chmod a+x $(DESTDIR)$(INSTALL_LIB_DIR)/gcl-tk/gcltksrv$(BAT) ; fi
	if test "$(EMACS_SITE_LISP)" != "" ; then (cd elisp ; $(MAKE) install DESTDIR=$(DESTDIR)) ; fi
	if test "$(INFO_DIR)" != "unknown"; then (cd info ; $(MAKE) ; $(MAKE) install DESTDIR=$(DESTDIR)) ; fi
	cp COPYING.LIB-2.0 readme-bin.mingw $(prefix)
	cp gcl.ico $(prefix)/bin
	rm -rf $(prefix)/install; mkdir $(prefix)/install ; cp windows/install.lsp $(prefix)/install ; cp windows/sysdir.bat $(prefix)/bin

gclclean:
	(cd $(BINDIR); $(MAKE) clean)
	(cd mp ; $(MAKE) clean)
	(cd $(ODIR); $(MAKE) clean)
	(cd $(LSPDIR); $(MAKE) clean)
	(cd $(MODDIR); $(MAKE) clean)
	(cd $(CMPDIR); $(MAKE) clean)
	(cd $(PORTDIR); $(MAKE) clean)
	(cd gcl-tk ; $(MAKE) clean)
	cd $(CLCSDIR) && $(MAKE) clean
	cd $(PCLDIR) && $(MAKE) clean
	cd xgcl-2 && $(MAKE) clean
	(cd $(TESTDIR); $(MAKE) clean)
	(cd info ; $(MAKE) clean)
	find binutils -name "*.o" -exec rm {} \;
	rm -f foo.tcl config.log makedefs makedefsafter config.cache config.status makedefc
	rm -f h/config.h h/gclincl.h h/cmpinclude.h
	rm -f xbin/gcl foo foo.c bin/gclm.bat gmp_all
	rm -f h/*-linux.defs h/bfd.h h/bfdlink.h h/ansidecl.h h/symcat.h
	rm -f windows/gcl.iss bin/gcl.bat windows/gcl.ansi.iss windows/install.ansi.lsp \
		windows/install.lsp windows/sysdir.bat
	rm -rf windows/Output
	rm -f ansi-tests/test_results ansi-tests/gazonk* \
		ansi-tests/generated-eval-when-test-file.lisp
	rm -f config.log config.cache config.status $(PORTDIR)/gmon.out gcl.script machine system


clean: gclclean
	-cd $(GMPDIR) && $(MAKE) distclean
	rm -rf $(GMPDIR)/.deps $(GMPDIR)/libgmp.a
	-cd $(PARGCLDIR) && $(MAKE) distclean
	rm -f unixport/saved_pargcl unixport/saved_prepargcl \
		bin/pargcl bin/procgroup unixport/_rsym1
	-cd binutils/intl && $(MAKE) distclean
	-cd binutils/bfd && $(MAKE) distclean
	-cd binutils/libiberty && $(MAKE) distclean

CMPINCLUDE_FILES=$(HDIR)cmpincl1.h $(HDIR)gclincl.h $(HDIR)compbas.h $(HDIR)enum.h $(HDIR)mgmp.h \
	$(HDIR)bits.h $(HDIR)object.h $(HDIR)vs.h \
	$(HDIR)bds.h $(HDIR)frame.h \
	$(HDIR)lex.h $(HDIR)eval.h    $(HDIR)funlink.h \
	$(HDIR)att_ext.h $(HDIR)new_decl.h $(HDIR)compbas2.h \
	$(HDIR)compat.h $(HDIR)cmponly.h $(ODIR)/regexp.h $(HDIR)/protoize.h $(HDIR)/immnum.h $(HDIR)cmponly_last.h

OTHERS=$(HDIR)notcomp.h $(HDIR)rgbc.h $(HDIR)stacks.h 

$(HDIR)new_decl.h:
	(cd o && $(MAKE) ../$@)

$(HDIR)cmpinclude.h: $(CMPINCLUDE_FILES) $(HDIR)config.h
	cat $(HDIR)config.h | sed -e "1,/Begin for cmpincl/d" \
		-e "/End for cmpinclude/,50000d" > tmpx.c
	echo '#include "h/config.h"\n#ifdef SGC\n"#define SGC"\n#else\n"#undef SGC"\n#endif' | $(CPP) 2>/dev/null| grep -v '^ *$$' | tail -1l | tr -d '"' >>tmpx.c
	cat $(CMPINCLUDE_FILES) >> tmpx.c
	$(CPP) -Ih -P -dD tmpx.c | grep -v "#define *__STDC_" | grep -v "#define  *__GNUC_PATCHLEVEL__ " | grep -v "#define  *__VERSION__ ">tmpx1 && mv tmpx1 tmpx.c
	./xbin/move-if-changed mv tmpx.c h/cmpinclude.h
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

#.INTERMEDIATE: unixport/saved_pcl_gcl
