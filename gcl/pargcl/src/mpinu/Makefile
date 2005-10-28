# src/mpinu/Makefile.  Generated from Makefile.in by configure.

CC=gcc
# CFLAGS=-g
# CFLAGS=-DDEBUG -O0 -g
CFLAGS=-g -O2
# LIBS= -lsocket -lnsl -lrt   needed for Solaris
# SHOULD USE CONFIGURE VARIABLE FOR -lpthread

RANLIB=ranlib

LIBOBJS=mpi.o master.o parse.o cmd.o slave.o utils.o sendrecv.o spawn2.o
LIBOBJS=mpi.o master.o parse.o cmd.o slave.o utils.o sendrecv.o \
	send_nonblock.o recv_cache.o

execute: hello_mpi hello_mpi2
	./hello_mpi
	./hello_mpi2 -p4pg procgroup2

# Under solaris, end-user application will need:  libmpi.a -lsocket -lnsl -lrt
libmpi.a: ${LIBOBJS}
	rm -f libmpi.a
	ar qc libmpi.a ${LIBOBJS} ${ARLIBS}
	- ${RANLIB} libmpi.a

hello_mpi: hello_mpi.o libmpi.a
	if ( uname -sr | grep "SunOS 5" > /dev/null ) && \
	    [ "x${LIBS}" = "x" ] ; then \
	      make LIBS="-lsocket -lnsl -lrt -lpthread" hello_mpi; \
	elif \
	    [ "x${LIBS}" = "x" ] ; then \
	      make LIBS="-lpthread" hello_mpi; \
	else \
	  ${CC} -o hello_mpi -O0 -g hello_mpi.o libmpi.a ${LIBS}; \
	fi

hello_mpi2: hello_mpi2.o libmpi.a
	if ( uname -sr | grep "SunOS 5" > /dev/null ) && \
	    [ "x${LIBS}" = "x" ] ; then \
	      make LIBS="-lsocket -lnsl -lrt -lpthread" hello_mpi2; \
	elif \
	    [ "x${LIBS}" = "x" ] ; then \
	      make LIBS="-lpthread" hello_mpi2; \
	else \
	  ${CC} -o hello_mpi2 -g hello_mpi2.o libmpi.a ${LIBS}; \
	fi

check: hello_mpi hello_mpi2
	./hello_mpi
	echo ""
	./hello_mpi2 -p4pg procgroup2

dist: clean
	dir=`basename $$PWD`; cd ..; tar cvf mpinu.tar ./$$dir
	gzip ../mpinu.tar
	ls -l ../mpinu.tar.gz

clean:
	rm -f *.o *~ libmpi.a core hello_mpi hello_mpi2 checkpoint
