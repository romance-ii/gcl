-include ../makedefs

COMPILE_FILE=../unixport/saved_ansi_gcl ./unixport/ -system-p -c-file -data-file \
	-o-file nil -h-file -compile

FILES:=$(shell ls -1 clcs_*.lisp | sed 's,\.lisp,,1')

all: $(addsuffix .c,$(FILES)) $(addsuffix .o,$(FILES))

%.h %.data %.c : %.lisp
	cp ../h/cmpinclude.h .
	$(COMPILE_FILE) $<

%.o: %.c %.h %.data
	$(CC) $(CFLAGS) -c $< -o $@
	../xbin/append $*.data $@

sys-proclaim.lisp:
	echo '(in-package "CONDITIONS")' \
	'(load "../cmpnew/collectfn")'\
	'(compiler::make-all-proclaims "*.fn")' | ../xbin/gcl

compile: ${LISP}
	echo '(load "package.lisp")(load "loading.lisp")(jamie-load-clcs :compile)' | ${LISP}

saved_full_gcl: ${LISP}
	echo '(load "package.lisp")(load "loading.lisp")(jamie-load-clcs :compiled)(system::save-system "saved_full_gcl")' | ${LISP}

clean:
	rm -f *.o *.fn saved_full_gcl$(EXE) saved_full_gcl cmpinclude.h
