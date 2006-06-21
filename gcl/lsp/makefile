
.SUFFIXES:
.SUFFIXES: .fn .o .c .lsp

-include ../makedefs


PORTDIR	= ../unixport
CAT=cat
APPEND=../xbin/append

PREFS:= recompile callhash arraylib assert defmacro defstruct \
	  describe evalmacros \
	  iolib listlib mislib module numlib \
	  packlib predlib \
	  seq seqlib setf top trace sloop \
          debug info serror 
NPREFS:= export autoload auto_new
SRC:= $(addprefix gcl_,$(addsuffix .lsp,$(PREFS) $(NCPREFS)))
OBJS:=$(addprefix gcl_,$(addsuffix .o,$(PREFS)))

COMPILE_FILE=$(PORTDIR)/saved_pre_gcl $(PORTDIR) $(LISPFLAGS) -system-p -c-file -data-file \
	-o-file nil -h-file -compile
#CFLAGS	= -c -O -I../h 

.lsp.c: 
	@ ../xbin/if-exists $(PORTDIR)/saved_pre_gcl \
	"rm -f $*.c $*.h $*.data $*.o" \
	"$(COMPILE_FILE) $* "

.lsp.o: 
	 @ ../xbin/if-exists $(PORTDIR)/saved_pre_gcl \
	"rm -f $*.c $*.h $*.data $*.o" \
	"$(COMPILE_FILE) $* " \
	"$(CC) $(OFLAG) $(CFLAGS) -c $*.c " \
	"${APPEND} ${NULLFILE} $*.data $*.o "


all:	$(OBJS)

.c.o:
	$(CC) $(OFLAG) $(CFLAGS) -c $*.c
	${APPEND} ${NULLFILE} $*.data  $*.o

.lsp.fn: ../cmpnew/gcl_collectfn.o
	../xbin/make-fn $*.lsp ../unixport/saved_pre_gcl $(LISPFLAGS) 

all:	$(OBJS)

fns1:	$(FNS)

fns:	../cmpnew/gcl_collectfn.o
	$(MAKE) fns1 -e "FNS=`echo ${OBJS} | sed -e 's:\.o:\.fn:g'`"

#../cmpnew/collectfn.o: ../cmpnew/collectfn.lsp
#	(cd ../cmpnew ; $(PORTDIR)/saved_gcl $(PORTDIR)/ collectfn.lisp collectfn S1000)


clean:
	rm -f *.o core a.out *.fn *.c *.h *.data gcl_recompile.lsp
allclean:
	rm -f *.h *.data *.c

dummy3 $(NEWCFILES): sys-proclaim.lisp

sys-proclaim.lisp: fns
	echo '(in-package "SYSTEM")' \
	'(load "../cmpnew/gcl_collectfn")'\
	'(compiler::make-all-proclaims "*.fn")' | ../unixport/saved_pre_gcl $(LISPFLAGS) 


newc:	
	$(MAKE) $(OBJS) -e "NEWCFILES=`echo $(OBJS) | sed -e 's:\.o:.c:g'`"


gcl_recompile.lsp:
	touch $@

