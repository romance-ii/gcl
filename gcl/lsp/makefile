
.SUFFIXES:
.SUFFIXES: .fn .o .c .lsp

-include ../makedefs


PORTDIR	= ../unixport
CAT=cat
APPEND=../xbin/append

OBJS	= arraylib.o assert.o defmacro.o defstruct.o describe.o evalmacros.o \
	iolib.o listlib.o mislib.o module.o numlib.o packlib.o predlib.o \
	seq.o seqlib.o setf.o top.o trace.o sloop.o debug.o info.o serror.o \
	destructuring_bind.o defpackage.o make_defpackage.o loop.o 
	# export.o autoload.o auto_new.o


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
	"$(CC) $(OFLAG) $(CFLAGS) -c $*.c " \
	"${APPEND} ${NULLFILE} $*.data $*.o "


all:	$(OBJS) $(RL_OBJS)



.c.o:
	$(CC) $(OFLAG) $(CFLAGS) -c $*.c
	${APPEND} ${NULLFILE} $*.data  $*.o

.lsp.fn: ../cmpnew/collectfn.o
	../xbin/make-fn $*.lsp

all:	$(OBJS)

fns1:	$(FNS)

fns:	../cmpnew/collectfn.o
	$(MAKE) fns1 -e "FNS=`echo ${OBJS} | sed -e 's:\.o:\.fn:g'`"

../cmpnew/collectfn.o: ../cmpnew/collectfn.lsp
	(cd ../cmpnew ; $(PORTDIR)/saved_gcl $(PORTDIR)/ collectfn.lisp collectfn S1000)


clean:
	rm -f *.o core a.out
allclean:
	rm -f *.h *.data *.c

dummy3 $(NEWCFILES): sys-proclaim.lisp

sys-proclaim.lisp:
	echo '(in-package "SYSTEM")' \
	'(load "../cmpnew/collectfn")'\
	'(compiler::make-all-proclaims "*.fn")' | ../xbin/gcl


newc:	
	$(MAKE) $(OBJS) -e "NEWCFILES=`echo $(OBJS) | sed -e 's:\.o:.c:g'`"


