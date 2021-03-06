SPECIAL_RSYM = rsym.c

LIBC	= -lc

-include ../makedefs

RSYM=

HDIR	= ../h
ODIR	= ../o
MDIR	= ../mod
LSPDIR	= ../lsp
CMPDIR	= ../cmpnew
XDIR	= ../xgcl-2
CLCSDIR = ../clcs
PCLDIR  = ../pcl
PORTDIR = $(shell pwd)

LD_LIBS_PRE=$(FIRST_FILE) $(addprefix -u ,$(PATCHED_SYMBOLS))
LD_LIBS_POST=$(LIBS) $(LIBC) -lgclp $(LAST_FILE)

ifeq ($(ARRS),)
ARRS:=ar rs
endif

libgclp.a: $(ODIR)/gcllib.a
	cp $< $@
	ranlib $@

gmpfiles: $(shell find ../$(GMPDIR) -name "*.o" |grep -v '\.lib')
	rm -rf gmp
	mkdir gmp
	a="$^" ; \
	for i in $$a ; do \
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

OOBJS:=$(shell j=$$(ar t $(ODIR)/gcllib.a) ; for i in $$(ls -1 $(ODIR)/*.o) ; do if ! echo $$j |grep $$(basename $$i) >/dev/null 2>&1 ; then echo $$i ; fi ; done)
OOBJS:=$(filter-out $(FIRST_FILE),$(OOBJS))
OOBJS:=$(filter-out $(LAST_FILE),$(OOBJS))
OOBJS:=$(filter-out $(ODIR)/plttest.o,$(OOBJS))
OOBJS:=$(filter-out $(ODIR)/boot.o,$(OOBJS))
OBJS:=$(OOBJS) $(shell ls -1 $(LSPDIR)/*.o | grep -v recompile.o)
OBJS:=$(OBJS) $(shell ls -1 $(XDIR)/*.o)
OBJS:=$(OBJS) $(shell ls -1 $(CMPDIR)/*.o | grep -v collectfn.o)
ROBJS:=$(shell ls -1 gcl_recompile?*.o)
ifeq ($(ROBS),"")
ROBJS:=$(shell ls -1 gcl_recompile.o)
endif
OBJS:=$(OBJS) $(ROBJS)

MODOBJS:=$(shell ls -1 $(MDIR)/*.o)
PCLOBJS:=$(MODOBJS) $(shell ls -1 $(PCLDIR)/*.o)
ANSIOBJS:=$(PCLOBJS) $(shell ls -1 $(CLCSDIR)/*.o)

$(LSPDIR)/auto_new.lsp: $(LSPDIR)/auto.lsp
	cp $< $@
	[ "$(RL_OBJS)" = "" ] || \
		echo "(AUTOLOAD 'init-readline '|readline|)" >>$@

init_gcl.lsp.tmp: init_gcl.lsp.in
	cp $< $@

init_pre_gcl.lsp.tmp: init_pre_gcl.lsp.in
	cp $< $@

init_mod_gcl.lsp.tmp: init_mod_gcl.lsp.in
	cp $< $@

init_xgcl.lsp.tmp: init_gcl.lsp.tmp
	ln -snf $< $@

init_pcl_gcl.lsp.tmp: init_pcl_gcl.lsp.in \
		../pcl/sys-package.lisp ../clcs/package.lisp \
		$(shell ls -1 ../clcs/clcs_*.lisp)

	awk '/^ *@LI-PCL-PACKAGE@/{i=1;next} \
		/^ *@LI-CLCS-PACKAGE@/{i=2;next} {if (i==0) print}' $< >$@
	cat ../pcl/sys-package.lisp >>$@
	awk '/^ *@LI-PCL-PACKAGE@/{i=1;next} \
		/^ *@LI-CLCS-PACKAGE@/{i=2;next} {if (i==1) print}' $< >>$@
	cat ../clcs/package.lisp >>$@
	awk '/^ *@LI-PCL-PACKAGE@/{i=1;next} \
		/^ *@LI-CLCS-PACKAGE@/{i=2;next} {if (i==2) print}' $< >>$@

#	awk '/^ *@LI-PCL-PACKAGE@/{i=1;next} {if (i==0) print}' $< >$@
#	cat ../pcl/sys-package.lisp >>$@
#	awk '/^ *@LI-PCL-PACKAGE@/{i=1;next} {if (i==1) print}' $< >>$@

init_ansi_gcl.lsp.tmp: init_ansi_gcl.lsp.in \
		../pcl/sys-package.lisp ../clcs/package.lisp

	awk '/^ *@LI-PCL-PACKAGE@/{i=1;next} \
		/^ *@LI-CLCS-PACKAGE@/{i=2;next} {if (i==0) print}' $< >$@
	cat ../pcl/sys-package.lisp >>$@
	awk '/^ *@LI-PCL-PACKAGE@/{i=1;next} \
		/^ *@LI-CLCS-PACKAGE@/{i=2;next} {if (i==1) print}' $< >>$@
	cat ../clcs/package.lisp >>$@
	awk '/^ *@LI-PCL-PACKAGE@/{i=1;next} \
		/^ *@LI-CLCS-PACKAGE@/{i=2;next} {if (i==2) print}' $< >>$@


init_%.lsp: init_%.lsp.tmp

	cat $< | sed \
		-e "s#@LI-VERS@#(`cat ../majvers`.`cat ../minvers`) `date`#1" \
		-e "s#@LI-EXTVERS@#`cat ../minvers | cut -f2 -d.`#1" \
		-e "s#@LI-MINVERS@#`cat ../minvers | cut -f1 -d.`#1" \
		-e "s#@LI-MAJVERS@#`cat ../majvers`#1" \
		-e "s#@LI-CC@#\"$(CC) -c $(FINAL_CFLAGS)\"#1" \
		-e "s#@LI-LD@#\"$(CC) $(LD_STACK_FLAGS) -o \"#1" \
		-e "s#@LI-LD-LIBS@#\" $(LD_LIBS_PRE) -l$* $(LD_LIBS_POST)\"#1" \
		-e "s#@LI-OPT-THREE@#\"$(O3FLAGS)\"#1" \
		-e "s#@LI-OPT-TWO@#\"$(O2FLAGS)\"#1" \
		-e "s#@LI-INIT-LSP@#\"$@\"#1" >$@

final: $(FLISP)
#	echo "(let ((si::*disable-recompile* nil)(compiler::*default-c-file* t)(compiler::*default-h-file* t)(compiler::*default-system-p* t)(compiler::*default-data-file* t))(si::compiler-state-fns)(si::do-recompile nil))" | ./$<
	echo "(setq si::*optimize-maximum-pages* nil)" >pre_init.lsp;
	echo "(setq si::*optimize-maximum-pages* t si::*disable-recompile* t)" >post_init.lsp;
#	echo "(when (> (length si::*needs-recompile*) 0) (format t \"Warning, eliminating recompiles ~s~%\" si::*needs-recompile*)(setf (fill-pointer si::*needs-recompile*) 0))" >>post_init.lsp;
	$(MAKE) $(FLISP)
	rm -f pre_init.lsp post_init.lsp #recompile.h #gcl_recompile*
	touch $@

FORCE:

# recompile.h: FORCE $(ROBJS)
# 	echo -n $(ROBJS) | sed 's,gcl_recompile.o,gcl_recompileq.o,g' |\
# 		sed -e 's,gcl_recompile,,g' -e 's,\.o,,g' | \
# 		tr ' ' '\012' | sort -n | \
# 		awk '{a=$$1;if (a=="q") a="";printf("  ar_check_init(gcl_recompile%s,no_init);\n",a)}'  >$@;

#sys_ansi_gcl.o sys_gcl.o: recompile.h

pre_init.lsp post_init.lsp:
	touch $@

libboot.so: ../o/boot.o
	$(CC) -shared $< -o $@

saved_%:raw_% $(RSYM) init_%.lsp pre_init.lsp post_init.lsp raw_%_map \
		$(CMPDIR)/gcl_lfun_list.lsp \
		$(CMPDIR)/gcl_cmpopt.lsp $(HDIR)/cmpinclude.h \
		$(LSPDIR)/gcl_auto_new.lsp libboot.so

#	echo " (in-package #+ansi-cl \"CL-USER\" #-ansi-cl\"USER\")(system:save-system \"tmp_image\")" >foo
#	echo " (system:save-system \"tmp_image\")" >foo
#	./$< $(PORTDIR)/ $(LISPFLAGS) -libdir $(GCLDIR)/ < foo
	cp pre_init.lsp foo
	cat init_$*.lsp >>foo
	cat post_init.lsp >>foo
#	echo " (in-package  #+ansi-cl \"CL-USER\" #-ansi-cl\"USER\")(system:save-system \"$@\")" >>foo
	echo " (system:save-system \"$@\")" >>foo
	./$< $(PORTDIR)/ $(LISPFLAGS) -libdir $(GCLDIR)/ < foo #tmp_image
	rm -f tmp_image

$(RSYM): $(SPECIAL_RSYM) $(HDIR)/mdefs.h
	$(CC) $(CFLAGS) -I$(HDIR) -I$(ODIR) -o $(RSYM) $(SPECIAL_RSYM)

$(HDIR)/mdefs.h: $(HDIR)/include.h
	cat $(HDIR)/include.h | sed -e "/include/d" > $(HDIR)/mdefs.h

libgcl.a: $(OBJS) sys_gcl.o gmpfiles bfdfiles # plt_gcl.o
	rm -rf $@
	$(ARRS) $@ $(filter %.o,$^) $(shell find gmp bfd -name "*.o")

libpre_gcl.a: $(OOBJS) sys_pre_gcl.o gmpfiles bfdfiles # plt_pre_gcl.o
	rm -rf $@
	$(ARRS) $@ $(filter %.o,$^) $(shell find gmp bfd -name "*.o")

libmod_gcl.a: $(OBJS) $(MODOBJS) sys_mod_gcl.o gmpfiles bfdfiles # plt_mod_gcl.o
	rm -rf $@
	$(ARRS) $@ $(filter %.o,$^) $(shell find gmp bfd -name "*.o")

libxgcl.a: libgcl.a
	ln -snf $< $@

libansi_gcl.a: $(OBJS) $(ANSIOBJS) sys_ansi_gcl.o gmpfiles bfdfiles # plt_ansi_gcl.o
	rm -rf $@
	$(ARRS) $@ $(filter %.o,$^) $(shell find gmp bfd -name "*.o")

libpcl_gcl.a: $(OBJS) $(PCLOBJS) sys_pcl_gcl.o gmpfiles bfdfiles # plt_pcl_gcl.o
	rm -rf $@
	$(ARRS) $@ $(filter %.o,$^) $(shell find gmp bfd -name "*.o")

raw_%_map raw_%: lib%.a libgclp.a $(SYSTEM_OBJS) $(EXTRAS)
	touch raw_$*_map
ifeq ($(GNU_LD),1)
	$(CC) -o raw_$*$(EXE) $(filter %.o,$^) -rdynamic -L. $(EXTRA_LD_LIBS) $(LD_STACK_FLAGS) -Wl,-Map raw_$*_map $(LD_LIBS_PRE) -l$* $(LD_LIBS_POST)
else
	$(CC) -o raw_$*$(EXE) $(filter %.o,$^) -L. $(EXTRA_LD_LIBS) $(LD_LIBS_PRE) -l$* $(LD_LIBS_POST)
endif
#	cp raw_$*_map raw_$*_map.bak
#	diff map_$* map_$*.old >/dev/null || (cp map_$* map_$*.old && rm -f $@ && $(MAKE) $@)
#	cp map_$*.old map_$*

map_%:
	touch $@

plt_%.h: map_%
	cat $< | awk '/^ .plt/ {if (NF==4) i=1;next;} \
		{if (!NF) i=0; if (!i) next; } \
		{b=$$2; sub("@.*$$","",b);print "{\"" b "\"," $$1 "}"}' | \
		sort | awk '{A[++k]=$$0} END {for (i=1;i<=k;i++) \
			printf("%s%s\n",A[i],i==k ? "" : ",")}' >$@

plt_%.o: plt_%.h plt.c
	ln -snf $< plt.h
	$(CC) -c -o $@ plt.c $(CFLAGS) -I$(HDIR) -I$(ODIR)

clean:
	rm -rf  saved_*$(EXE) raw_*$(EXE) *.o core a.out $(RSYM) \
		$(LSPDIR)/auto_new.lsp foo *maxima* init_*.lsp lib*.a gmp* bfd* *.lsp.tmp \
		gazonk*.lsp plt*h *_map saved_* lib* raw_* gcl.script gcl_recompile* \
		pre_init.lsp post_init.lsp final recompile.h

.INTERMEDIATE: init_ansi_gcl.lsp.tmp init_gcl.lsp.tmp raw_gcl raw_ansi_gcl recompile.h pre_init.lsp post_init.lsp
.PRECIOUS: init_pre_gcl.lsp init_gcl.lsp init_ansi_gcl.lsp libboot.so
