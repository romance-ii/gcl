DEFS	= -DUNIX
CFLAGS  = $(DEFS) -I../h
CC=cc
APPEND=../bin/append

-include ../makedefs

all:	dpp${EXE} ${APPEND}${EXE} file-sub${EXE} ${WINKILL}

dpp${EXE}:	dpp.c
	${CC} ${DEFS} -o dpp${EXE} dpp.c

file-sub${EXE}:	file-sub.c
	${CC} ${DEFS} -o file-sub${EXE} file-sub.c

${APPEND}${EXE}: append.c
	${CC}  ${DEFS} -o append${EXE}  append.c

winkill.exe: winkill.c
	${CC} ${CFLAGS} winkill.c -o winkill.exe

tclwinkill.dll: ../o/tclwinkill.c
	-(cd ../o; $(CC) -I../h -shared tclwinkill.c -ltclstub83 -o ../bin/tclwinkill.dll)

clean:
	rm -f dpp dpp${EXE} append append${EXE} file-sub${EXE} core a.out *.o gcl
