# make .d more important by clearing suffixes.
.SUFFIXES:
.SUFFIXES: .d .o  .c .ini

HDIR	= ../h/
CDIR	= ./
MPDIR	= ../mp

OFLAG	= -O
ODIR	= .
GCLIB  = gcllib.a
RANLIB=ranlib
AR = ar qc
LIBFILES= bcmp.o bcopy.o bzero.o
# compile main.c with -g, since signalling may not be ok on -O
MAIN_DEBUG=
DPP	= ../bin/dpp

AUX_INFO=-aux-info $*.X
.c.o:
	$(CC) -c $(OFLAG) $(CFLAGS) $*.c $(AUX_INFO)
.d.o:
	$(DPP) $*
	$(CC) -c $(OFLAG) $(CFLAGS) $*.c $(AUX_INFO)
	rm $*.c

.c.ini:
	$(CC) -DNO_DEFUN $(CFLAGS) -E $*.c | grab_defs > $*.ini

.d.ini:
	$(DPP) $*
	grab_defs < $*.c > $*.ini
	rm $*.c


-include ../makedefs

CFLAGS	=  -I../gcl-tk -I$(HDIR) $(ODIR_DEBUG)


MP 	= $(HDIR)/mp.h

CMPINCLUDE_FILES=${HDIR}compbas.h ${HDIR}enum.h ${HDIR}object.h ${HDIR}vs.h \
	${HDIR}bds.h ${HDIR}frame.h \
	${HDIR}lex.h ${HDIR}eval.h    ${HDIR}funlink.h \
	${HDIR}att_ext.h ${HDIR}compbas2.h ${HDIR}/compat.h ${HDIR}/cmponly.h

OTHERS=${HDIR}notcomp.h ${HDIR}rgbc.h ${HDIR}stacks.h 

HFILES	= $(HDIR)include.h $(CMPINCLUDE_FILES) $(OTHERS)

# these are made elsewhere...
MPFILES=

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
	$(OD)string.o $(OD)structure.o $(OD)toplevel.o \
	$(OD)file.o $(OD)read.o $(OD)backq.o \
	$(OD)print.o $(OD)format.o $(OD)pathname.o \
	$(OD)unixfsys.o $(OD)unixfasl.o $(OD)error.o \
	$(OD)unixtime.o $(OD)unixsys.o $(OD)unixsave.o \
	$(OD)funlink.o  \
	$(OD)fat_string.o ${ODIR}/run_process.o \
	$(OD)nfunlink.o $(OD)usig.o $(OD)usig2.o $(OD)utils.o \
	$(OD)makefun.o $(OD)sockets.o  \
	$(OD)init_pari.o $(NEW_INIT) $(MPFILES) $(SFASL) $(EXTRAS) \
	$(addprefix $(OD),$(RL_OBJS))

all:  $(OBJS) new-init $(LIBFILES) new_init.o  $(GCLIB)

go:
	$(MAKE) "CFLAGS=${CFLAGS} -pg"



new-init: grab_defs
	$(MAKE) new_init.c "INI_FILES=`echo ${OBJS} | sed -e 's:\.o:.ini:g' -e 's:new_init.o::g' `"
new_init.c: ${INI_FILES}
	echo '#include "make-init.h"' > new_init.c
	echo 'NewInit(){' >> new_init.c
	cat ${INI_FILES} >> new_init.c
	echo '}' >> new_init.c


grab_defs: grab_defs.c
	${CC} $(OFLAGS) -o grab_defs  grab_defs.c


ALIB=${LIBFILES} user_init.o

$(GCLIB): ${ALIB} 
	rm -f gcllib.a
	$(AR) gcllib.a ${ALIB}
	${RANLIB} gcllib.a
clean:
	rm -f $(OBJS) *.a

IBMAIX3_NEAR_LIB = fsavres.o

$(ODIR)/ibmaix3.a: /lib/libc.a
	mkdir tmpx
	(cd tmpx ; ar xv /lib/libc.a ${IBMAIX3_NEAR_LIB} ; ar qc ../ibmaix3.a ${IBMAIX3_NEAR_LIB})
	rm -rf tmpx


character.o: $(HFILES)
file.o:	$(HFILES)
hash.o: $(HFILES) ${MP}
list.o:	$(HFILES)
package.o: $(HFILES)
pathname.o: $(HFILES)
print.o: $(HFILES) ${MP}
read.o: $(HFILES) ${MP}
sequence.o: $(HFILES)
string.o: $(HFILES)
symbol.o: $(HFILES)

alloc.o: $(HFILES)
array.o: $(HFILES)
assignment.o: $(HFILES)
backq.o: $(HFILES)
bds.o: $(HFILES)
big.o: $(HFILES) ${MP}
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
unixsave.o: $(HFILES)
unixsys.o: $(HFILES)
unixtime.o: $(HFILES)
funlink.o: $(HFILES)
fat_string.o: $(HFILES)
fasdump.o: $(HFILES)
bitblit2.o: $(HFILES)


