
#LISP=../pcl/saved_gcl_pcl

compile: ${LISP}
	echo '(load "package.lisp")(load "loading.lisp")(jamie-load-clcs :compile)' | ${LISP}

saved_full_gcl: ${LISP}
	echo '(load "package.lisp")(load "loading.lisp")(jamie-load-clcs :compiled)(system::save-system "saved_full_gcl")' | ${LISP}

clean:
	rm -f *.o *.fn saved_full_gcl

-include ../makedefs
