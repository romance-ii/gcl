.SUFFIXES:
.SUFFIXES: .info .dvi  .texi

INFO_DIR=/usr/local/lib/info

include ../makedefs

all: gcl-tk.info gcl-si.info gcl-tk.dvi gcl-si.dvi gcl-si_toc.html gcl-tk_toc.html

.texi.info:
	rm -f $*.*gz
	-$(MAKEINFO) $*.texi
	- gzip $*.info-*

GCL_SI= number.texi sequence.texi character.texi list.texi io.texi \
	form.texi compile.texi symbol.texi system.texi structure.texi \
	iteration.texi user-interface.texi doc.texi type.texi internal.texi \
	c-interface.texi si-defs.texi debug.texi misc.texi compiler-defs.texi \
	gcl-si-index.texi
GCL_TK= general.texi widgets.texi control.texi

gcl-si.dvi: ${GCL_SI} gcl-si.texi
	TEXINPUTS=.:$$TEXINPUTS tex --interaction nonstopmode gcl-si.texi || true

gcl-si.info:
	-$(MAKEINFO) gcl-si.texi	

gcl-tk.dvi: ${GCL_TK} gcl-tk.texi
	TEXINPUTS=.:$$TEXINPUTS tex --interaction nonstopmode gcl-tk.texi || true

gcl-tk.info: ${GCL_TK} gcl-tk.texi
	-$(MAKEINFO) gcl-tk.texi

gcl-si_toc.html:
	texi2html -split_chapter gcl-si.texi

gcl-tk_toc.html:
	texi2html -split_chapter gcl-tk.texi

install-html: gcl-tk_toc.html gcl-si_toc.html
	cp *.html /d/www/gcl

install:
	mkdir -p $(DESTDIR)${INFO_DIR}
	[ -f $(DESTDIR)$(INFO_DIR)dir ] || touch $(DESTDIR)$(INFO_DIR)dir
	! grep -q gcl-si $(DESTDIR)${INFO_DIR}dir || \
	echo "* GCL Doc: (gcl-si.info).	GNU Common Lisp specific Documentation." >> $(DESTDIR)${INFO_DIR}dir
	! grep -q gcl-tk $(DESTDIR)${INFO_DIR}dir || \
	echo "* GCL TK Doc: (gcl-tk.info).	TK window GCL interface." >> $(DESTDIR)${INFO_DIR}dir
	! grep -q gcl.info $(DESTDIR)${INFO_DIR}dir || \
	echo "* GCL Ansi Doc: (gcl.info).  Ansi Common Lisp Specification." >> $(DESTDIR)${INFO_DIR}dir
	cp *.info* $(DESTDIR)${INFO_DIR}


FILE=gcl-si.texi
srcs:
	fgrep '.texi' ${FILE} | sed -e "/@c/d" | \
	awk '{ i++; printf("%s ",$$2); if ((i%5) == 0) printf("\\\n")}'

tex:
	TEXINPUTS=.:$$TEXINPUTS tex gcl-si.texi
	TEXINPUTS=.:$$TEXINPUTS tex gcl-tk.texi
	@echo must do twice to get indices correct...
	@echo so do 'make tex' again

clean:
	rm -f *.info* *.html *.dvi *.cp *.ky *.vr *.tp *.pg *.toc *.aux *.log *.fn
