# Makefile for running gabriel bench marks
# Do 
# make "LISP= lisp name "
# except for CMULISP which requires
# make "LISP=cmulisp" "QUIT=(quit)"



FILES=  boyer browse  ctak dderiv deriv destru-mod destru  div2 fft-mod \
	fft fprint fread frpoly  puzzle-mod puzzle stak \
	tak-mod tak takl takr tprint traverse triang-mod triang

REPEAT=100

LISP?=../bin/gcl
RESULTS= times
QUIT=(quit)
EXTRAS?=:c-file t

all: times
	make -e "LISP=${LISP}" "FILES=${FILES}" "QUIT=${QUIT}" compile
	@ echo >> $(RESULTS)
	@ echo "--------------   SESSION   ------------------" >> $(RESULTS)
	@ echo >> $(RESULTS)
	@ echo "      " For $(LISP) Common Lisp  >> $(RESULTS)
	@ date >> $(RESULTS)
	make -i -e "LISP=${LISP}" "FILES=${FILES}" "QUIT=${QUIT}" test

compile:
	for v in $(FILES) ; do \
	echo "(load \"make-declare.lsp\")(si::proclaim-file \"$$v.cl\")" \
	"(compile-file \"$$v.cl\" $(EXTRAS))" "$(QUIT)" | $(LISP) ; done


test: times
	for v in $(FILES) ; do \
	echo "(progn (load \"test-help.lsp\")(do-test \"$$v\" \"$(RESULTS)\"))${QUIT}" \
	| $(LISP); \
	done

clean:
	rm -f core *.o *.lbin *.bin *.*fasl *~ *#

times:
	touch times

tar:
	tar cvf - *.cl *.lsp makefile  | gzip  -c >  gabriel.tgz
