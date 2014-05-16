
.SUFFIXES:
.SUFFIXES: .o .c .lsp .lisp .fn

-include ../makedefs

PORTDIR	= ../unixport
CAT=cat
APPEND=../xbin/append

PREFS:= cmpbind cmpblock cmpcall cmpcatch cmpenv cmpeval \
	cmpflet cmpfun cmpif cmpinline cmplabel cmplam cmplet \
	cmploc cmpmap cmpmulti cmpspecial cmptag cmptop \
	cmptype cmputil cmpvar cmpvs cmpwt cmpmain

NCPREFS:= cmpmain cmpopt lfun_list

SRC:= $(addprefix gcl_,$(addsuffix .lsp,$(PREFS) $(NCPREFS)))
OBJS:=$(addprefix gcl_,$(addsuffix .o,$(PREFS)))
FNS:= $(OBJS:.o=.fn)

LISP:=$(shell ls -1rt ../unixport/saved_pre_gcl ../unixport/saved_gcl|tail -n 1)

COMPILE_FILE=$(LISP) $(PORTDIR) $(LISPFLAGS) -system-p -c-file -data-file -h-file -compile
#CFLAGS	= -c -O -I../h 

%.o: %.lsp $(LISP) 
	$(COMPILE_FILE) $<

all:	$(OBJS)

.lsp.fn: ../cmpnew/gcl_collectfn.o
	../xbin/make-fn $*.lsp ../unixport/saved_pre_gcl


.c.o:  
	$(CC) $(OFLAG) $(CFLAGS) -c $*.c
	${APPEND} ${NULLFILE} $*.data  $*.o

gcl_collectfn.o:
	$(PORTDIR)/saved_pre_gcl $(PORTDIR)/ $(LISPFLAGS) -compile $*

.lisp.o:
	@ ../xbin/if-exists $(PORTDIR)/saved_pre_gcl \
	"$(PORTDIR)/saved_pre_gcl $(PORTDIR)/ $(LISPFLAGS) -compile $*.lisp " 
sys-proclaim.lisp: $(FNS)
	echo '(in-package "COMPILER")' \
	'(load "../cmpnew/gcl_collectfn")(load "../lsp/sys-proclaim.lisp")'\
	'(compiler::make-all-proclaims "*.fn")' | ../unixport/saved_pre_gcl $(LISPFLAGS)


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
	rm -f *.o core a.out *.fn *.c *.h *.data
allclean:
	rm -f *.h *.data *.c
