
LISP=../unixport/saved_kcl

LOAD='(load "sysdef.lsp")(make::make :bcomp :compile t)'

all:
	echo ${LOAD} | ${LISP}


tests:
	echo ${LOAD}'(load "try1")(load "../tests/all-tests.lsp")(in-package "BCOMP")(do-some-tests)' \
	'(test-sloop)' | ${LISP}


test1:
	echo '(load "../tests/try-comp")' | ${LISP}


TFILES=src/makefile comp/makefile unixport/makefile o/makefile \
	h/enum.h src/kclobjs src/sobjs src/NewInit src/make-init

tar:
	(cd .. ; tar cvf - ${TFILES} src/sobjs src/*.c src/*.el newh/*.el src/makefile comp/*.lsp comp/*.doc newh/*.h newh/makefile  | gzip -c > ${HOME}/`date '+acl-%y%m%d'`.tar.z)

all-tests:
	make
	- make tests test1
	- (cd /u11/wfs/nqthm1 ; rm *.o ; make "LISP=nacl")
	- (cd /u11/wfs/gabriel ; make "LISP=nacl")

tests2:
	make
	- make tests test1
	- (cd /u11/wfs/nqthm1 ; rm *.o ; make "LISP=nacl")


-include ../makedefs
