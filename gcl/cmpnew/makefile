
.SUFFIXES:
.SUFFIXES: .o .c .lsp .lisp .fn

-include ../makedefs

PORTDIR	= ../unixport
CAT=cat
APPEND=../xbin/append

OBJS	= cmpbind.o cmpblock.o cmpcall.o cmpcatch.o cmpenv.o cmpeval.o \
	cmpflet.o cmpfun.o cmpif.o cmpinline.o cmplabel.o cmplam.o cmplet.o \
	cmploc.o cmpmap.o cmpmulti.o cmpspecial.o cmptag.o cmptop.o \
	cmptype.o cmputil.o cmpvar.o cmpvs.o cmpwt.o

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
	make `echo $(OBJS) | sed -e 's:\.o:.fn:g'`



remake:
	for v in `"ls" *.lsp.V | sed -e "s:\.lsp\.V::g"` ; \
	do rm -f $$v.c $$v.h $$v.data $$v.lsp $$v.o ; \
	ln -s  $(MAINDIR)/cmpnew/$$v.c . ; ln -s $(MAINDIR)/cmpnew/$$v.h . ; \
	ln -s $(MAINDIR)/cmpnew/$$v.data . ; \
	done
	rm -f ../unixport/$(FLISP) 
	(cd .. ; make sources)
	(cd .. ; make)
	(cd .. ; make)

clean:
	rm -f *.o core a.out *.fn
allclean:
	rm -f *.h *.data *.c
