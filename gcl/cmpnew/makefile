
.SUFFIXES:
.SUFFIXES: .o .c .lsp .lisp .fn

-include ../makedefs

PORTDIR	= ../unixport
CAT=cat
APPEND=../xbin/append

OBJS	= gcl_cmpbind.o gcl_cmpblock.o gcl_cmpcall.o gcl_cmpcatch.o gcl_cmpenv.o gcl_cmpeval.o \
	gcl_cmpflet.o gcl_cmpfun.o gcl_cmpif.o gcl_cmpinline.o gcl_cmplabel.o gcl_cmplam.o gcl_cmplet.o \
	gcl_cmploc.o gcl_cmpmap.o gcl_cmpmulti.o gcl_cmpspecial.o gcl_cmptag.o gcl_cmptop.o \
	gcl_cmptype.o gcl_cmputil.o gcl_cmpvar.o gcl_cmpvs.o gcl_cmpwt.o # gcl_cmpmain.o gcl_cmpopt.o gcl_lfun_list.o

COMPILE_FILE=$(PORTDIR)/saved_gcl $(PORTDIR) -system-p -c-file -data-file \
	-o-file nil -h-file -compile
#CFLAGS	= -c -O -I../h 

.lsp.c:
	@ ../xbin/if-exists $(PORTDIR)/saved_gcl \
	"rm -f $*.c $*.h $*.data $*.o" \
	"$(COMPILE_FILE) $* "

.lsp.o:
	@ ../xbin/if-exists $(PORTDIR)/saved_gcl \
	"rm -f $*.c $*.h $*.data $*.o" \
	"$(COMPILE_FILE) $* " \
	"$(CC) $(OFLAG) $(CFLAGS) -c $*.c" \
	"${APPEND} ${NULLFILE} $*.data $*.o"

all:	$(OBJS)

.lsp.fn: ../cmpnew/collectfn.o
	../xbin/make-fn $*.lsp


.c.o:  
	$(CC) $(OFLAG) $(CFLAGS) -c $*.c
	${APPEND} ${NULLFILE} $*.data  $*.o

collectfn.o:
	$(PORTDIR)/saved_gcl $(PORTDIR)/ -compile $*.lsp

.lisp.o:
	@ ../xbin/if-exists $(PORTDIR)/saved_gcl \
	"$(PORTDIR)/saved_gcl $(PORTDIR)/ -compile $*.lisp " 
sys-proclaim.lisp:
	echo '(in-package "COMPILER")' \
	'(load "../cmpnew/collectfn")(load "../lsp/sys-proclaim.lisp")'\
	'(compiler::make-all-proclaims "*.fn")' | ../xbin/gcl


newfn:	
	$(MAKE) `echo $(OBJS) | sed -e 's:\.o:.fn:g'`



remake:
	for v in `"ls" *.lsp.V | sed -e "s:\.lsp\.V::g"` ; \
	do rm -f $$v.c $$v.h $$v.data $$v.lsp $$v.o ; \
	ln -s  $(MAINDIR)/cmpnew/$$v.c . ; ln -s $(MAINDIR)/cmpnew/$$v.h . ; \
	ln -s $(MAINDIR)/cmpnew/$$v.data . ; \
	done
	rm -f ../unixport/$(FLISP) 
	(cd .. ; $(MAKE) sources)
	(cd .. ; $(MAKE))
	(cd .. ; $(MAKE))

clean:
	rm -f *.o core a.out *.fn
allclean:
	rm -f *.h *.data *.c
