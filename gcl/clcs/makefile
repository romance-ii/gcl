-include ../makedefs

COMPILE_FILE=./saved_clcs_gcl ./ $(LISPFLAGS) -system-p -c-file -data-file \
	-o-file nil -h-file -compile

FILES:=$(shell ls -1 gcl_clcs_*.lisp | sed 's,\.lisp,,1')

all: $(addsuffix .c,$(FILES)) $(addsuffix .o,$(FILES))
#all: $(addsuffix .o,$(FILES))

saved_clcs_gcl: ../unixport/saved_pcl_gcl
	echo '(load "myload.lisp")(setq si::*disable-recompile* t)(si::save-system "$@")' | $< $(<D)/ $(LISPFLAGS)

%.h %.data %.c : %.lisp saved_clcs_gcl
	cp ../h/cmpinclude.h .
	$(COMPILE_FILE) $<
	rm -f $*.o

%.o: %.c %.h %.data
	$(CC) $(CFLAGS) -c $< -o $@
	../xbin/append $*.data $@

%.fn: ../cmpnew/gcl_collectfn.o %.lisp ./saved_clcs_gcl
	echo '(load "$<")(compiler::emit-fn t)(compile-file "$*.lisp")' |./saved_clcs_gcl

sys-proclaim.lisp: $(addsuffix .fn,$(FILES)) saved_clcs_gcl
	echo '(in-package "CONDITIONS")' \
	'(load "../cmpnew/gcl_collectfn")'\
	'(compiler::make-all-proclaims "*.fn")' | ./saved_clcs_gcl $(LISPFLAGS)

compile: ${LISP}
	echo '(load "package.lisp")(load "loading.lisp")(jamie-load-clcs :compile)' | ${LISP} $(LISPFLAGS)

saved_full_gcl: ${LISP}
	echo '(load "package.lisp")(load "loading.lisp")(jamie-load-clcs :compiled)(system::save-system "saved_full_gcl")' | ${LISP} $(LISPFLAGS)

clean:
	rm -f *.o *.fn saved_full_gcl$(EXE) cmpinclude.h *.c *.h *.data saved_clcs_gcl$(EXE)
#.INTERMEDIATE: saved_clcs_gcl
#.PRECIOUS: $(addsuffix .c,$(FILES))