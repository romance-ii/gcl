SPECIAL_RSYM = rsym.c

LIBC	= -lc

-include ../makedefs

HDIR	= ../h
ODIR	= ../o
LSPDIR	= ../lsp
CMPDIR	= ../cmpnew
CLCSDIR = ../clcs
PCLDIR  = ../pcl
PORTDIR = .

LD_LIBS_PRE=$(addprefix -u ,$(PATCHED_SYMBOLS))
LD_LIBS_POST=$(LIBS) $(LIBC) -lgclp

libgclp.a: $(ODIR)/gcllib.a
	cp $< $@

gmpfiles: $(shell find ../$(GMPDIR) -name "*.o" |grep -v '\.lib')
	rm -rf gmp
	mkdir gmp
	a="$^" ; \
	for i in $^ ; do \
		cp $$i gmp/$$(echo $$i | sed -e 's,\.\./,,1' -e 's,/,_,g') ; \
	done
	touch $@

bfdfiles: $(shell find ../binutils -name "*.o")
	rm -rf bfd
	mkdir bfd
	a="$^" ; \
	for i in $$a ; do \
		cp $$i bfd/$$(echo $$i | sed -e 's,\.\./,,1' -e 's,/,_,g') ; \
	done 
	touch $@

OBJS:=$(shell j=$$(ar t $(ODIR)/gcllib.a) ; for i in $$(ls -1 $(ODIR)/*.o) ; do if ! echo $$j |grep -q $$(basename $$i) ; then echo $$i ; fi ; done)
OBJS:=$(OBJS) $(shell ls -1 $(LSPDIR)/*.o)
OBJS:=$(OBJS) $(shell ls -1 $(CMPDIR)/*.o | grep -v collectfn.o)

PCLOBJS:=$(shell ls -1 $(PCLDIR)/*.o)
ANSIOBJS:=$(PCLOBJS) $(shell ls -1 $(CLCSDIR)/*.o)

$(LSPDIR)/auto_new.lsp: $(LSPDIR)/auto.lsp
	cp $< $@
	[ "$(RL_OBJS)" = "" ] || \
		echo "(AUTOLOAD 'init-readline '|readline|)" >>$@

init_gcl.lsp.tmp: init_gcl.lsp.in
	cp $< $@

init_xgcl.lsp.tmp: init_gcl.lsp.tmp
	ln -snf $< $@

init_pcl_gcl.lsp.tmp: init_pcl_gcl.lsp.in ../cmpnew/cmpmain.lsp \
		../pcl/sys-package.lisp ../clcs/package.lisp \
		$(shell ls -1 ../clcs/clcs_*.lisp)

	awk '/^ *@LI-PCL-PACKAGE@/{i=1;next} {if (i==0) print}' $< >$@
	cat ../cmpnew/cmpmain.lsp >>$@
	cat ../pcl/sys-package.lisp >>$@
	awk '/^ *@LI-PCL-PACKAGE@/{i=1;next} {if (i==1) print}' $< >>$@

init_ansi_gcl.lsp.tmp: init_ansi_gcl.lsp.in ../cmpnew/cmpmain.lsp \
		../pcl/sys-package.lisp ../clcs/package.lisp

	awk '/^ *@LI-PCL-PACKAGE@/{i=1;next} \
		/^ *@LI-CLCS-PACKAGE@/{i=2;next} {if (i==0) print}' $< >$@
	cat ../cmpnew/cmpmain.lsp >>$@
	cat ../pcl/sys-package.lisp >>$@
	awk '/^ *@LI-PCL-PACKAGE@/{i=1;next} \
		/^ *@LI-CLCS-PACKAGE@/{i=2;next} {if (i==1) print}' $< >>$@
	cat ../clcs/package.lisp >>$@
	awk '/^ *@LI-PCL-PACKAGE@/{i=1;next} \
		/^ *@LI-CLCS-PACKAGE@/{i=2;next} {if (i==2) print}' $< >>$@


init_%.lsp: init_%.lsp.tmp

	cat $< | sed \
		-e "s,@LI-VERS@,(`cat ../majvers`.`cat ../minvers`) `date`,1" \
		-e "s,@LI-MINVERS@,`cat ../minvers`,1" \
		-e "s,@LI-MAJVERS@,`cat ../majvers`,1" \
		-e "s,@LI-CC@,\"$(CC) -c $(FINAL_CFLAGS)\",1" \
		-e "s,@LI-LD@,\"$(CC) -o \",1" \
		-e "s,@LI-LD-LIBS@,\"$(LD_LIBS_PRE) -l$* $(LD_LIBS_POST)\",1" \
		-e "s,@LI-OPT-THREE@,\"$(O3FLAGS)\",1" \
		-e "s,@LI-OPT-TWO@,\"$(O2FLAGS)\",1" \
		-e "s,@LI-INIT-LSP@,\"$@\",1" >$@

saved_%:raw_% $(RSYM) init_%.lsp \
		$(CMPDIR)/cmpmain.lsp \
		$(CMPDIR)/lfun_list.lsp \
		$(CMPDIR)/cmpopt.lsp $(HDIR)/cmpinclude.h \
		$(LSPDIR)/auto_new.lsp

	cp init_$*.lsp foo
	echo " (in-package \"USER\")(system:save-system \"$@\")" >>foo
	$(PORTDIR)/raw_$*$(EXE) $(PORTDIR)/ -libdir $(GCLDIR)/ < foo

$(RSYM): $(SPECIAL_RSYM) $(HDIR)/mdefs.h
	$(CC) $(CFLAGS) -I$(HDIR) -I$(ODIR) -o $(RSYM) $(SPECIAL_RSYM)

$(HDIR)/mdefs.h: $(HDIR)/include.h
	cat $(HDIR)/include.h | sed -e "/include/d" > $(HDIR)/mdefs.h

libgcl.a: $(FIRST_FILE) $(OBJS) sys_gcl.o $(LAST_FILE) gmpfiles bfdfiles
	rm -rf $@
	ar rs $@ $(filter %.o,$^) $(shell find gmp bfd -name "*.o")

libxgcl.a: libgcl.a
	ln -snf $< $@

libansi_gcl.a: $(FIRST_FILE) $(OBJS) $(ANSIOBJS) sys_ansi_gcl.o $(LAST_FILE) gmpfiles bfdfiles
	rm -rf $@
	ar rs $@ $(filter %.o,$^) $(shell find gmp bfd -name "*.o")

libpcl_gcl.a: $(FIRST_FILE) $(OBJS) $(PCLOBJS) sys_pcl_gcl.o $(LAST_FILE) gmpfiles bfdfiles
	rm -rf $@
	ar rs $@ $(filter %.o,$^) $(shell find gmp bfd -name "*.o")

raw_%: lib%.a libgclp.a $(SYSTEM_OBJS) $(EXTRAS)
	$(CC) -o raw_$*$(EXE) $(filter %.o,$^) \
		-L. $(EXTRA_LD_LIBS) $(LD_LIBS_PRE) -l$* $(LD_LIBS_POST)

clean:
	rm -rf  saved_*$(EXE) raw_*$(EXE) *.o core a.out $(RSYM) \
		$(LSPDIR)/auto_new.lsp foo *maxima* init_*.lsp lib*.a gmp* bfd* *.lsp.tmp \
		gazonk*.lsp

.INTERMEDIATE: init_ansi_gcl.lsp.tmp init_gcl.lsp.tmp raw_gcl raw_ansi_gcl
.PRECIOUS: init_gcl.lsp init_ansi_gcl.lsp