# make .d more important by clearing suffixes.
.SUFFIXES:
.SUFFIXES: .d .o  .c .ini

-include ../makedefs

HDIR	= ../h/
CDIR	= ./
MPDIR	= ../mp

#OFLAG	= -O
DEFS	= -I../h -I../gcl-tk
ODIR	= .
GCLIB  = ${ODIR}/gcllib.a
RANLIB=ranlib
AR = ar qc
LIBFILES= bcmp.o bcopy.o bzero.o user_init.o user_match.o
# compile main.c with -g, since signalling may not be ok on -O
MAIN_DEBUG=
DPP	= ../bin/dpp$(EXE)

DECL := $(HDIR)new_decl.h

# AUX_INFO=-aux-info $*.X
%.o: %.c $(DECL)
	$(CC) -c $(CFLAGS) $(DEFS) $*.c $(AUX_INFO) 
%.o: %.d $(DECL)
	$(DPP) $*
	$(CC) -c $(CFLAGS) $(DEFS) $*.c $(AUX_INFO)
	rm $*.c

CPP=
%.ini: %.c grab_defs
	[ -e $(DECL) ] || touch $(DECL)
	$(CC) -DNO_DEFUN $(CFLAGS) $(DEFS) -E $*.c | sed -e 's:\"[ ]*):\"):g' | ./grab_defs > $*.ini

%.ini: %.d $(DPP) grab_defs
	[ -e $(DECL) ] || touch $(DECL)
	$(DPP) $*
	./grab_defs < $*.c > $*.ini
	rm $*.c

X11_INCLUDE=${TK_XINCLUDES} ${HAVE_X11}
#CFLAGS	=  -I../gcl-tk -I$(HDIR) $(ODIR_DEBUG) 


MP 	= $(HDIR)mp.h

CMPINCLUDE_FILES=${HDIR}compbas.h ${HDIR}enum.h ${HDIR}object.h ${HDIR}vs.h \
	${HDIR}bds.h ${HDIR}frame.h \
	${HDIR}lex.h ${HDIR}eval.h    ${HDIR}funlink.h \
	${HDIR}att_ext.h ${HDIR}compbas2.h ${HDIR}/compat.h ${HDIR}/cmponly.h

OTHERS=${HDIR}notcomp.h ${HDIR}rgbc.h ${HDIR}stacks.h 

HFILES	= $(HDIR)include.h $(CMPINCLUDE_FILES) $(OTHERS) 

# these are made elsewhere...
MPFILES= 

OBJS	= $(OD)main.o $(OD)alloc.o $(OD)gbc.o \
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
	$(OD)funlink.o  $(OD)plt.o \
	$(OD)fat_string.o ${ODIR}/run_process.o \
	$(OD)nfunlink.o $(OD)usig.o $(OD)usig2.o $(OD)utils.o \
	$(OD)makefun.o $(OD)sockets.o $(OD)clxsocket.o  \
	$(OD)init_pari.o $(OD)nsocket.o $(NEW_INIT) $(MPFILES) $(SFASL) $(EXTRAS) \
	$(RL_OBJS)

INI_FILES=$(patsubst %.o,%.ini,${OBJS})

OBJECTS:=$(OBJS) $(LIBFILES) new_init.o  $(GCLIB) $(LAST_FILE)  $(FIRST_FILE) 

all:  $(OBJECTS) #plt.o

go:
	$(MAKE) "CFLAGS=${CFLAGS} -pg"

$(DPP):	../bin/dpp.c
	${CC} ${DEFS} -o $@ $<


new-init: 
	$(MAKE) new_init.c decls1

new_init.c: ${INI_FILES}
	echo '#include "make-init.h"' > new_init.c
	echo 'void NewInit(void){' >> new_init.c
	cat ${INI_FILES} >> new_init.c
	echo '}' >> new_init.c

ifneq ($(NIFLAGS),)
new_init.o: new_init.c $(DECL)
	$(CC) -c $(NIFLAGS) $(DEFS) $< -o $@
endif

decls1: $(INI_FILES)
	echo '#include "make-decl.h"' > foo.c
	cat ${INI_FILES} >> foo.c
	${CC} -E -I${HDIR} foo.c | sed -n -e '/#/d' -e '/DO_/d' -e '/[a-zA-Z;]/p' > tmpx
	../xbin/move-if-changed mv tmpx ${HDIR}new_decl.h

$(DECL): $(HDIR)/make-decl.h $(INI_FILES)
	echo '#include "make-decl.h"' > foo.c
	cat ${INI_FILES} >> foo.c
	${CC} -E -I${HDIR} foo.c | sed -n -e '/#/d' -e '/DO_/d' -e '/[a-zA-Z;]/p' > $@
	rm foo.c

grab_defs: grab_defs.c
	${CC} $(OFLAGS) -o grab_defs  grab_defs.c

#
# This section added to ensure that ld generates symbol values for undefined
# symbols in external dynamic libraries with binutils >=2.14.90.0.8
# CM 20040227
#

#def: $(OBJECTS)
#	nm $^ | awk '/ [TBCD] / {print $$3}' | sort |uniq >def

#undef: $(OBJECTS)
#	nm $^ | awk '/ [U] / {print $$2}' | sort |uniq >undef

#undef.h: undef def
#	join -v1 $^ | \
#	awk '{if (i++) printf("MY_PLT(%s),\n",a);a=$$1} END {printf("MY_PLT(%s)\n",a)}'>$@

#void.h: undef def
#	join -v1 $^ | \
#	awk '/my_plt/ {next} {printf("extern void *%s;\n",$$1);}'>$@

plt.h: plttest.o
	nm $< | awk '/ U / {a=$$2;if (k) sub("^_","",a);\
                            b=a;gsub("_","",b);\
                            if (match(j,b)) printf("MY_PLT(%s)\n",a)}' \
			j="$$(awk '/main/ {i=1;next} {if (!i) next} \
				/^ *[a-zA-Z_]*\(/ {sub("\\(.*$$","",$$1);print $$1}' plttest.c)" \
			k=$(LEADING_UNDERSCORE) |\
			sort | \
			awk '{A[++k]=$$0} END {for (i=1;i<=k;i++) \
				printf("%s%s\n",A[i],i==k ? "" : ",");}' >$@

plt.o: plt.c plt.h
	$(CC) -c $(CFLAGS) $(DEFS) $*.c $(AUX_INFO) 


ALIB=${LIBFILES} #user_init.o ${EXTRA_LIB}

$(GCLIB): ${ALIB} 
	rm -f gcllib.a
	$(AR) gcllib.a ${ALIB}
	${RANLIB} gcllib.a
clean:
	rm -f $(OBJS) ${ALIB} new_init.o  $(LAST_FILE) $(FIRST_FILE) *.a grab_defs$(EXE) *.ini tmpx foo.c cmpinclude.h new_init.c $(DECL) def undef udef.h void.h plt.h plttest.o

fsavres.o: /lib/libc.a
	ar xv /lib/libc.a fsavres.o

sockets.o: sockets.c
	${CC} ${CFLAGS} $(DEFS) ${X11_INCLUDE} -c  sockets.c

clxsocket.o:
	${CC} ${CFLAGS} $(DEFS) ${X11_INCLUDE} -c  clxsocket.c
littleXwin.o:
	${CC} ${CFLAGS} $(DEFS) ${X11_INCLUDE} -c  littleXwin.o

character.o: $(HFILES)
file.o:	$(HFILES) file.d
hash.o: $(HFILES) ${MP}
list.o:	$(HFILES)
package.o: $(HFILES)
pathname.o: $(HFILES)
print.o: $(HFILES) ${MP}
read.o: $(HFILES) ${MP}
sequence.o: $(HFILES)
string.o: $(HFILES)
symbol.o: $(HFILES)

utils.o: $(HFILES)
alloc.o: $(HFILES)
array.o: $(HFILES)
assignment.o: $(HFILES)
backq.o: $(HFILES)
bds.o: $(HFILES)
big.o: $(HFILES) ${MP} gmp_big.c pari_big.c
bind.o: $(HFILES) 
bitop.o: $(HFILES)
block.o: $(HFILES)
catch.o: $(HFILES)
cfun.o: $(HFILES)
cmpaux.o: $(HFILES) ${MP}
conditional.o: $(HFILES)
earith.o: $(HFILES)
error.o: $(HFILES)
eval.o: $(HFILES)
format.o: $(HFILES)
frame.o: $(HFILES)
gbc.o: $(HFILES) ${MP}
interrupt.o: $(HFILES)
iteration.o: $(HFILES)
let.o: $(HFILES)
lex.o: $(HFILES)
macros.o: $(HFILES)
main.o: $(HFILES)
mapfun.o: $(HFILES)
multival.o: $(HFILES)
mpi.o: $(MP)
num_arith.o: $(HFILES) $(HDIR)/num_include.h ${MP}
num_co.o: $(HFILES) $(HDIR)/num_include.h ${MP}
num_comp.o: $(HFILES) $(HDIR)/num_include.h ${MP}
num_log.o: $(HFILES) $(HDIR)/num_include.h ${MP}
num_pred.o: $(HFILES) $(HDIR)/num_include.h ${MP}
num_rand.o: $(HFILES) $(HDIR)/num_include.h ${MP}
num_sfun.o: $(HFILES) $(HDIR)/num_include.h ${MP}
number.o: $(HFILES) $(HDIR)/num_include.h ${MP}
predicate.o: $(HFILES)
prog.o: $(HFILES)
reference.o: $(HFILES)
structure.o: $(HFILES)
toplevel.o: $(HFILES)
typespec.o: $(HFILES) ${MP}
unixfasl.o: $(HFILES)
unixfsys.o: $(HFILES)
unixint.o: $(HFILES)
unixsave.o: $(HFILES) $(UNIX_SAVE_DEP)
unixsys.o: $(HFILES)
unixtime.o: $(HFILES) unixtime.c
funlink.o: $(HFILES)
fat_string.o: $(HFILES)
fasdump.o: $(HFILES)
bitblit2.o: $(HFILES)
regexpr.o:$(HFILES) regexp.c
sockets.o:$(HFILES) ../gcl-tk/comm.c ../gcl-tk/sheader.h
nsocket.ini:nsocket.c $(HFILES)
mingwin.o:mingwin.c $(HFILES)


