
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
EMACS_SITE_LISP=/usr/share/emacs/20.7/site-lisp

# the default.el file
EMACS_DEFAULT_EL=/usr/share/emacs/20.7/site-lisp/default.el

# numerous TCL/TK variables culled from the tkConfig.sh and tclConfig.sh
# if these are found.
TK_CONFIG_PREFIX=/usr/lib
TK_LIBRARY=/usr/lib/tk8.3
TCL_LIBRARY=/usr/lib/tcl8.3
TK_XINCLUDES=-I/usr/X11R6/include
TK_INCLUDE=-I/usr/lib/../include
TCL_INCLUDE=-I/usr/lib/../include
TK_LIB_SPEC=-L/usr/lib -ltk8.3
TK_BUILD_LIB_SPEC=-L/tmp/tk8.3.2/unix -ltk8.3
TK_XLIBSW=-L/usr/X11R6/lib -lX11
TK_XINCLUDES=-I/usr/X11R6/include
TCL_LIB_SPEC=-L/usr/lib -ltcl8.3
TCL_DL_LIBS=-ldl
TCL_LIBS=-ldl  -lm

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
	$(OD)init_pari.o $(OD)nsocket.o $(NEW_INIT) $(MPFILES) $(SFASL) $(EXTRAS) 

LSPOBJS	= $(LSPDIR)/defmacro.o $(LSPDIR)/evalmacros.o $(LSPDIR)/top.o \
	$(LSPDIR)/module.o $(LSPDIR)/predlib.o $(LSPDIR)/setf.o \
	$(LSPDIR)/arraylib.o $(LSPDIR)/assert.o $(LSPDIR)/defstruct.o \
	$(LSPDIR)/describe.o $(LSPDIR)/iolib.o $(LSPDIR)/listlib.o \
	$(LSPDIR)/mislib.o $(LSPDIR)/numlib.o $(LSPDIR)/packlib.o \
	$(LSPDIR)/seq.o $(LSPDIR)/seqlib.o $(LSPDIR)/trace.o \
	$(LSPDIR)/sloop.o  $(LSPDIR)/debug.o $(LSPDIR)/info.o \
	$(LSPDIR)/serror.o

CMPOBJS	= $(CMPDIR)/cmpinline.o $(CMPDIR)/cmputil.o $(CMPDIR)/cmptype.o \
	$(CMPDIR)/cmpbind.o $(CMPDIR)/cmpblock.o $(CMPDIR)/cmpcall.o \
	$(CMPDIR)/cmpcatch.o $(CMPDIR)/cmpenv.o $(CMPDIR)/cmpeval.o \
	$(CMPDIR)/cmpflet.o $(CMPDIR)/cmpfun.o $(CMPDIR)/cmpif.o \
	$(CMPDIR)/cmplabel.o $(CMPDIR)/cmplam.o $(CMPDIR)/cmplet.o \
	$(CMPDIR)/cmploc.o $(CMPDIR)/cmpmap.o $(CMPDIR)/cmpmulti.o \
	$(CMPDIR)/cmpspecial.o $(CMPDIR)/cmptag.o $(CMPDIR)/cmptop.o \
	$(CMPDIR)/cmpvar.o $(CMPDIR)/cmpvs.o $(CMPDIR)/cmpwt.o

SYSTEM=gcl

saved_$(SYSTEM):raw_$(SYSTEM) $(RSYM) $(INIT_SYSTEM_LSP) \
		$(CMPDIR)/cmpmain.lsp \
		$(CMPDIR)/lfun_list.lsp \
		$(CMPDIR)/cmpopt.lsp ${HDIR}/cmpinclude.h
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


clean:
	rm -f saved_$(GCL) raw_$(GCL) *.o core a.out rsym
