SPECIAL_RSYM = rsym.c

LIBC	= -lc
LIBGCLP = libgclp.a
-include ../makedefs

HDIR	= ../h
ODIR	= ../o
LSPDIR	= ../lsp
CMPDIR	= ../cmpnew
CLCSDIR = ../clcs
PCLDIR  = ../pcl
PORTDIR = .

OLDDATE = "DATE"

LD_LIBS=$(addprefix -u ,$(PATCHED_SYMBOLS)) -lgcl $(LIBS) $(LIBC) -lgclp

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

OOBJS= 	main.o alloc.o gbc.o bitop.o typespec.o eval.o macros.o lex.o bds.o \
	frame.o predicate.o reference.o assignment.o bind.o let.o conditional.o \
	block.o iteration.o mapfun.o prog.o multival.o catch.o symbol.o cfun.o \
	cmpaux.o package.o big.o number.o num_pred.o num_comp.o num_arith.o \
	num_sfun.o num_co.o num_log.o num_rand.o earith.o character.o  sequence.o \
	list.o hash.o array.o string.o regexpr.o structure.o toplevel.o \
	file.o read.o backq.o print.o format.o pathname.o unixfsys.o unixfasl.o \
	 error.o unixtime.o unixsys.o unixsave.o funlink.o fat_string.o run_process.o \
	nfunlink.o usig.o usig2.o utils.o makefun.o sockets.o  clxsocket.o init_pari.o \
	nsocket.o $(RL_OBJS) new_init.o

OBJS=  $(addprefix $(ODIR)/,$(OOBJS)) $(SFASL) $(EXTRAS) 

LLSPOBJS=defmacro.o evalmacros.o top.o module.o predlib.o setf.o \
	 arraylib.o assert.o defstruct.o describe.o iolib.o listlib.o \
	 mislib.o numlib.o packlib.o seq.o seqlib.o trace.o sloop.o  debug.o \
	 serror.o info.o destructuring_bind.o defpackage.o make_defpackage.o \
	 loop.o $(RL_OBJS)

LSPOBJS	= $(addprefix $(LSPDIR)/,$(LLSPOBJS))

CCMPOBJS=cmpinline.o cmputil.o cmptype.o cmpbind.o cmpblock.o cmpcall.o \
	cmpcatch.o cmpenv.o cmpeval.o cmpflet.o cmpfun.o cmpif.o \
	cmplabel.o cmplam.o cmplet.o cmploc.o cmpmap.o cmpmulti.o \
	cmpspecial.o cmptag.o cmptop.o cmpvar.o cmpvs.o cmpwt.o

CMPOBJS	= $(addprefix $(CMPDIR)/,$(CCMPOBJS))

SYSTEM=gcl

saved_ansi_gcl: ansi_cl.lisp $(CLCSDIR)/saved_full_gcl
	$(CLCSDIR)/saved_full_gcl < ansi_cl.lisp

$(LSPDIR)/auto_new.lsp: $(LSPDIR)/auto.lsp
	cp $< $@
	[ "$(RL_OBJS)" = "" ] || \
		echo "(AUTOLOAD 'init-readline '|readline|)" >>$@

init_gcl.lsp: init_gcl.lsp.in

	cat $< |\
	sed -e "s$(OLDDATE)Version(`cat ../majvers`.`cat ../minvers`) `date`g" > $@
	echo "(setq si::*gcl-version* `cat ../minvers` si::*gcl-major-version* `cat ../majvers`)" >>$@
	echo "(setq compiler::*cc* \"$(CC) -c $(FINAL_CFLAGS)\")" >>$@
	echo "(setq compiler::*ld* \"$(CC) -o \")" >>$@
	echo "(setq compiler::*ld-libs* \"$(LD_LIBS)\")" >>$@
	echo "(setq compiler::*init-lsp* \"$@\")" >>$@


saved_$(SYSTEM):raw_$(SYSTEM) $(RSYM) init_$(SYSTEM).lsp \
		$(CMPDIR)/cmpmain.lsp \
		$(CMPDIR)/lfun_list.lsp \
		$(CMPDIR)/cmpopt.lsp $(HDIR)/cmpinclude.h \
		$(LSPDIR)/auto_new.lsp

	cp init_$(SYSTEM).lsp foo
	echo " (in-package \"USER\")(system:save-system \"saved_$(SYSTEM)\")" >>foo
	$(PORTDIR)/raw_$(SYSTEM)$(EXE) $(PORTDIR)/ -libdir $(GCLDIR)/ < foo

$(RSYM): $(SPECIAL_RSYM) $(HDIR)/mdefs.h
	$(CC) $(CFLAGS) -I$(HDIR) -I$(ODIR) -o $(RSYM) $(SPECIAL_RSYM)

$(HDIR)/mdefs.h: $(HDIR)/include.h
	cat $(HDIR)/include.h | sed -e "/include/d" > $(HDIR)/mdefs.h

libgcl.a: $(FIRST_FILE) $(OBJS) $(LSPOBJS) $(CMPOBJS) sys_gcl.o $(LAST_FILE) gmpfiles bfdfiles
	rm -rf $@
	ar rs $@ $(filter %.o,$^) $(shell find gmp bfd -name "*.o")

raw_$(SYSTEM): libgcl.a $(LIBGCLP) $(SYSTEM_OBJS)
	$(CC) -o raw_$(SYSTEM)$(EXE) $(filter %.o,$^) -L. $(LD_LIBS)

sys_gcl.o: sys_gcl.c $(HDIR)/object.h $(HDIR)/config.h
	$(CC) $(CFLAGS) -c -I$(HDIR) sys_gcl.c

clean:
	rm -rf  saved_$(SYSTEM)$(EXE) raw_$(SYSTEM)$(EXE) saved_gcl$(EXE) \
		saved_ansi_gcl$(EXE) raw_gcl$(EXE) *.o core a.out $(RSYM) \
		$(LSPDIR)/auto_new.lsp foo *maxima* init_gcl.lsp libgcl.a libgclp.a \
		gmp* bfd*
