-include ../makedefs

all: objects docs

objects: $(LISP)
	echo '(load "sysdef.lisp")(xlib::compile-xgcl)' | $(LISP)

#saved_%: $(LISP)
#	echo '(load "sysdef.lisp")(xlib::compile-xgcl)(xlib::save-xgcl "$@")' | $(LISP)

docs: dwdoc/dwdoccontents.html dwdoc.pdf

dwdoc/dwdoccontents.html: $(LISP)
	mkdir -p $(@D) && \
	cd $(@D) && \
	echo '(load "../sysdef.lisp")(in-package :xlib)(defmacro while (test &rest forms) `(loop (unless ,test (return)) ,@forms))(load "../gcl_tohtml.lsp")(load "../gcl_index.lsp")(tohtml "../dwdoc.tex" "dwdoc")(with-open-file (s "dwdoccontents.html" :direction :output) (let ((*standard-output* s)) (xlib::makecont "dwdoc.tex" 1 "dwdoc")))(with-open-file (s "dwdocindex.html" :direction :output) (let ((*standard-output* s)) (xlib::printindex indexdata "dwdoc")))' | ../$<

dwdoc.pdf: dwdoc.tex
	pdflatex $<

#dwdoc/index.html: dwdoc.tex
#	latex2html $<

clean:
	rm -f *.o *.data saved_*  cmpinclude.h dwdoc.pdf dwdoc.aux dwdoc.log gmon.out dwdoc.dvi dwdoc.html dwdoc.ps
	rm -f gcl_xrecompile* user-init* gcl*c gcl*h gcl*data
	rm -rf dwdoc

install: docs
	-mkdir -p $(DESTDIR)$(INFO_DIR)../doc
	-cp -r dwdoc $(DESTDIR)$(INFO_DIR)../doc
	-cp *tex *.pdf $(DESTDIR)$(INFO_DIR)../doc
