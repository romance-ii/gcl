
HDIR	= ../h
ODIR	= ../o
LSPDIR	= ../lsp
CMPDIR	= ../cmpnew
PORTDIR	= ../unixport
MPDIR	= ../mp
GMP_DIR	= ../gmp/

CFLAGS	= -c $(DEFS) -I$(HDIR)
LDCC    = $(CC) -g
LIBC	= -lc
LIBS	= -lm # -lpixrect -lc
OLDDATE = "DATE"
GCLIB	= $(ODIR)/gcllib.a
MPFILES= $(MPDIR)/mpi.o $(MPDIR)/mp2.o  $(MPDIR)/libmport.a
MPFILES= $(MPDIR)/mpi.o $(MPDIR)/mp2.o  $(MPDIR)/libmport.a
INIT_SYSTEM_LSP=init_$(SYSTEM).lsp
SPECIAL_RSYM = rsym.c

-include ../makedefs

LIBS1= $(LIBS) $(LIBSYSTEM) $(GCLIB)

OD=$(ODIR)/
NEW_INIT=$(OD)new_init.o


OBJS	=  $(OD)main.o $(OD)alloc.o $(OD)gbc.o \
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
	$(OD)makefun.o $(OD)sockets.o  $(OD)clxsocket.o  \
	$(OD)init_pari.o $(OD)nsocket.o $(NEW_INIT) $(MPFILES) $(SFASL) $(EXTRAS) \
	$(addprefix $(OD),$(RL_OBJS))

LSPOBJS	= $(LSPDIR)/defmacro.o $(LSPDIR)/evalmacros.o $(LSPDIR)/top.o \
	$(LSPDIR)/module.o $(LSPDIR)/predlib.o $(LSPDIR)/setf.o \
	$(LSPDIR)/arraylib.o $(LSPDIR)/assert.o $(LSPDIR)/defstruct.o \
	$(LSPDIR)/describe.o $(LSPDIR)/iolib.o $(LSPDIR)/listlib.o \
	$(LSPDIR)/mislib.o $(LSPDIR)/numlib.o $(LSPDIR)/packlib.o \
	$(LSPDIR)/seq.o $(LSPDIR)/seqlib.o $(LSPDIR)/trace.o \
	$(LSPDIR)/sloop.o  $(LSPDIR)/debug.o \
	$(LSPDIR)/serror.o $(LSPDIR)/info.o $(LSPDIR)/destructuring_bind.o \
        $(LSPDIR)/defpackage.o $(LSPDIR)/make_defpackage.o \
	$(LSPDIR)/loop.o\
	$(addprefix $(LSPDIR)/,$(RL_OBJS))

CMPOBJS	= $(CMPDIR)/cmpinline.o $(CMPDIR)/cmputil.o $(CMPDIR)/cmptype.o \
	$(CMPDIR)/cmpbind.o $(CMPDIR)/cmpblock.o $(CMPDIR)/cmpcall.o \
	$(CMPDIR)/cmpcatch.o $(CMPDIR)/cmpenv.o $(CMPDIR)/cmpeval.o \
	$(CMPDIR)/cmpflet.o $(CMPDIR)/cmpfun.o $(CMPDIR)/cmpif.o \
	$(CMPDIR)/cmplabel.o $(CMPDIR)/cmplam.o $(CMPDIR)/cmplet.o \
	$(CMPDIR)/cmploc.o $(CMPDIR)/cmpmap.o $(CMPDIR)/cmpmulti.o \
	$(CMPDIR)/cmpspecial.o $(CMPDIR)/cmptag.o $(CMPDIR)/cmptop.o \
	$(CMPDIR)/cmpvar.o $(CMPDIR)/cmpvs.o $(CMPDIR)/cmpwt.o

SYSTEM=gcl

$(LSPDIR)/auto_new.lsp: $(LSPDIR)/auto.lsp
	cp $< $@
	[ "$(RL_OBJS)" = "" ] || \
		echo "(AUTOLOAD 'init-readline '|readline|)" >>$@

saved_$(SYSTEM):raw_$(SYSTEM) $(RSYM) $(INIT_SYSTEM_LSP) \
		$(CMPDIR)/cmpmain.lsp \
		$(CMPDIR)/lfun_list.lsp \
		$(CMPDIR)/cmpopt.lsp ${HDIR}/cmpinclude.h \
		$(LSPDIR)/auto_new.lsp
# if you are wfs on rascal increment the minor version number.
	../xbin/if-exists /usr/u9/wfs/schelter "../xbin/inc-version"
	../xbin/if-exists saved_$(SYSTEM) "rm -f saved_$(SYSTEM)"
	cat $(INIT_SYSTEM_LSP) | \
	sed -e "s$(OLDDATE)Version(`cat ../majvers`.`cat ../minvers`) `date`g" \
	-e 'ssaved_gclsaved_$(SYSTEM)g' \
	-e 'slinks t)links t)(setq compiler::*cc* "$(CC)")$(INITFORM)g' \
	-e "sGCLDIR${GCLDIR}g" \
	-e "s(defun lisp-imp(setq si::*gcl-version* `cat ../minvers` si::*gcl-major-version* `cat ../majvers`)(defun lisp-impg" \
	-e "s:GCL-1:GCL-"`cat ../majvers`":g" 	> foo 
	$(PORTDIR)/raw_$(SYSTEM)$(EXE) $(PORTDIR)/ -libdir ${GCLDIR}/ < foo

${RSYM}:	${SPECIAL_RSYM} $(HDIR)/mdefs.h
	$(LDCC) $(DEFS) -g -I../h -o ${RSYM} ${SPECIAL_RSYM}

$(HDIR)/mdefs.h: $(HDIR)/include.h
	cat $(HDIR)/include.h | sed -e "/include/d" > $(HDIR)/mdefs.h

saved_kcn:	
	make -f make_kcn "MPFILES=$(MPFILES)"

FOR_RAW= $(FIRST_FILE) $(OBJS) $(LSPOBJS) $(CMPOBJS) $(SYSTEM_OBJS) sys_gcl.o $(LAST_FILE)

raw_$(SYSTEM):  $(FOR_RAW)
	$(LDCC)  -o raw_$(SYSTEM)$(EXE) $(FOR_RAW) ${LIBC} $(LIBS1)

sys_gcl.o:	sys_gcl.c ${HDIR}/object.h ${HDIR}/config.h
	$(CC) $(CFLAGS) sys_gcl.c

init_gcp.lsp:
	ln init_gcl.lsp init_gcp.lsp
sys_gcp.o: sys_gcl.o
	ln sys_gcl.o sys_gcp.o

gcp-sun:	gcrt0-mod.o
	(cd ../go ; make  "CFLAGS = -I../h -pg -g -c")
	make -e "SYSTEM=gcp" "ODIR=../go"  "EXTRAS= gcrt0-mod.o" "LDCC=${LDCC}" "CC = cc -DVOL= -pg"

gcp-bsd: ncrt0.o
	(cd ../go ; make  "CFLAGS = -I../h -pg -g -c")
	make "SYSTEM=gcp" "ODIR=../go" "EXTRAS = gcrt0-mod.o ${EXTRAS} " "CC = ${CC} -pg" "LDCC = gcc -nostdlib  ncrt0.o "

aix_crt0.o:
	emacs -batch -l aix-crt0.el

gcp-aix: aix_crt0.o
	(cd ../go ; make  "CFLAGS = -I../h -pg -g -c")
	make "SYSTEM=gcp" "ODIR=../go" "EXTRAS = /lib/gcrt0.o ${EXTRAS} " "CC = ${CC} -pg" "LDCC = ld  -H4096 -D0 -T512 -bhalt:4  -bnso -bI:/lib/syscalls.exp -L/lib/profiled aix_crt0.o     "	

gcp: ${GCP}

ncrt0.o: /lib/crt0.o
	emacs -batch -l ncrt0.el

gcrt0-mod.o:
	../xbin/if-exists /lib/gcrt0.o  "cp /lib/gcrt0.o ."
	../xbin/if-exists /usr/lib/gcrt0.o  "cp /usr/lib/gcrt0.o ."
	emacs -batch -l gcrt0.el


hpbsd-crt0-mod.o:
	cp /lib/crt0.o .
	emacs -batch -l hpbsd-crt0.el

GCL:=gcl
clean:
	rm -f saved_$(GCL) raw_$(GCL) *.o core a.out rsym $(LSPDIR)/auto_new.lsp foo *maxima*
