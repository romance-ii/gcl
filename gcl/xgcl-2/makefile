-include ../makedefs

all: dwdoc.pdf #dwdoc/index.html 

dwdoc.pdf: dwdoc.tex
	pdflatex $<

#dwdoc/index.html: dwdoc.tex
#	latex2html $<

saved_%: $(LISP)
	echo '(load "sysdef.lisp")(xlib::compile-xgcl)(xlib::save-xgcl "$@")' | $(LISP)

clean:
	rm -f *.o *.data saved_*  cmpinclude.h dwdoc.pdf dwdoc.aux dwdoc.log gmon.out
	rm -rf dwdoc

install: all
	-mkdir -p $(DESTDIR)$(INFO_DIR)../doc
#	-cp -r dwdoc $(DESTDIR)$(INFO_DIR)../doc
	-cp *tex *.pdf $(DESTDIR)$(INFO_DIR)../doc
