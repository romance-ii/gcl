DEFS	= -I../h 
CC      = cc
APPEND  = ../bin/append

-include ../makedefs

all:	dpp${EXE} ${APPEND}${EXE} file-sub${EXE}

dpp${EXE}:	dpp.c
	${CC} ${DEFS}  -o dpp${EXE} dpp.c

file-sub${EXE}:	file-sub.c
	${CC} ${DEFS} -o file-sub${EXE} file-sub.c

${APPEND}${EXE}: append.c
	${CC}  ${DEFS} -o append${EXE}  append.c

clean:
	rm -f dpp${EXE} append${EXE} file-sub${EXE} core a.out *.o gcl gclm.bat
