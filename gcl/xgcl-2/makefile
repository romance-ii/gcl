-include ../makedefs

saved_%: $(LISP)
	echo '(load "sysdef.lisp")(xlib::compile-xgcl)(xlib::save-xgcl "$@")' | $(LISP)

clean:
	rm -f *.o *.data saved_*  cmpinclude.h gcl*.c gmon.out

