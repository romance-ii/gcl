AR = ar qc
MPDIR=.
RANLIB=ranlib
# if you are using gcc for the main link you probably dont need this:
GNULIB1= ${MPDIR}/gnulib1.o
NATIVE_CC=cc

# default mp files (overridden by machine.defs)
MPFILES= $(MPDIR)/mpi.o $(MPDIR)/mp2.o  $(MPDIR)/libmport.a

-include ../makedefs

OBJS= mp_divul3.o  mp_bfffo.o mp_mulul3.o mp2.o mp_dblrsl3.o mp_dblrul3.o ${GNULIB1}

all:
	$(MAKE) all1 "MPFILES=$(MPFILES)"

all1: ${MPFILES}

$(MPDIR)/libmport.a: $(OBJS)
	rm -f libmport.a
	$(AR) libmport.a ${OBJS}
	${RANLIB} libmport.a

.s.o:
	$(AS) $*.s -o $*.o

.c.o:
	$(CC)  -c $(OFLAG) -I../h -I. $(CFLAGS) $(ODIR_DEBUG) $*.c

mpi-386_no_under.o: mpi-386_no_under.s
	gcc -traditional -c $*.s -o $*.o

mpi-386d.o: mpi-386d.S
	gcc -traditional -c $*.S -o $*.o

mpi-bsd68k.s: mpi.c
	gcc -S  -I../h -O mpi.c -o mpi-bsd68k.s

mpi-sparc.s: mpi.c
	gcc -S -I../h -O mpi.c -o mpi-sparc.s

mpi-sol-sparc.s: mpi.c
	gcc -S -I../h -O mpi.c -o mpi-sol-sparc.s

${MPDIR}/mpi-386.o: ${MPDIR}/mpi-386.s
	$(AS) $*.s -o $*.o

${MPDIR}/mpi-386.s: mpi.c
	gcc -S -I../h -O mpi.c -o mpi-386.s

${MPDIR}/mpi-gcc.o: mpi.c
	gcc -c -O -I../h mpi.c -o mpi-gcc.o

${MPDIR}/gnulib1.o:
	${NATIVE_CC} -c -O gnulib1.c

$(MPDIR)/mpi-386-winnt.o: $(MPDIR)/mpi-386-winnt.s
	$(AS) $*.s -o $*.o

clean:
	rm -f *.o *.a

make.defs:
	(cd .. ; for v in h/*.defs; do echo $$v: ; fgrep MPFILES $$v ; done ; true) > make.defs


tar:
	(cd .. ; ls mp/*.c mp/*.s h/*.h h/*.defs mp/makefile mp/make.defs)  | sed -e '/foo/d' > tmpx
	(cd .. ; tar cvf - `cat mp/tmpx`) | compress -c > ${HOME}/tmp/mp.tar.Z
	rm -f tmpx





