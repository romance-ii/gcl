.SUFFIXES:
.SUFFIXES: .info .dvi  .texi

INFO_DIR=${prefix}/lib/info

GCL_DVI=gcl-tk.dvi gcl-si.dvi gcl.dvi
#GCL_HTML=gcl-si_toc.html gcl-tk_toc.html gcl_toc.html
GCL_HTML=gcl-si/index.html gcl-tk/index.html gcl/index.html
#HTML_CMD=texi2html -split_chapter
HTML_CMD=makeinfo --html 

-include ../makedefs

all: gcl-tk.info gcl-si.info gcl.info $(GCL_DVI) $(GCL_HTML)

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
GCL_MAN= chap-1.texi chap-2.texi chap-3.texi chap-4.texi chap-5.texi \
	 chap-6.texi chap-7.texi chap-8.texi chap-9.texi chap-10.texi chap-11.texi \
	 chap-12.texi chap-13.texi chap-14.texi chap-15.texi chap-16.texi chap-17.texi \
	 chap-18.texi chap-19.texi chap-20.texi chap-21.texi chap-22.texi chap-23.texi \
	 chap-24.texi chap-25.texi chap-26.texi chap-a.texi

gcl-si.dvi: ${GCL_SI} gcl-si.texi
	TEXINPUTS=.:$$TEXINPUTS tex --interaction nonstopmode gcl-si.texi || true

gcl-si.info: ${GCL_SI} gcl-si.texi
	-$(MAKEINFO) gcl-si.texi	

gcl-tk.dvi: ${GCL_TK} gcl-tk.texi
	TEXINPUTS=.:$$TEXINPUTS tex --interaction nonstopmode gcl-tk.texi || true

gcl-tk.info: ${GCL_TK} gcl-tk.texi
	-$(MAKEINFO) gcl-tk.texi

gcl.dvi: ${GCL_MAN} gcl.texi
	TEXINPUTS=.:$$TEXINPUTS tex --interaction nonstopmode gcl.texi || true

gcl.info: ${GCL_MAN} gcl.texi
	-$(MAKEINFO) gcl.texi

#gcl-si_toc.html: ${GCL_SI} gcl-si.texi
#	$(HTML_CMD) gcl-si.texi

#gcl-tk_toc.html: ${GCL_TK} gcl-tk.texi
#	$(HTML_CMD) gcl-tk.texi

#gcl_toc.html:
#	$(HTML_CMD) gcl.texi

gcl-si/index.html: ${GCL_SI} gcl-si.texi
	$(HTML_CMD) gcl-si.texi

gcl-tk/index.html: ${GCL_TK} gcl-tk.texi
	$(HTML_CMD) gcl-tk.texi

gcl/index.html: gcl.texi
	$(HTML_CMD) gcl.texi

install-html: gcl-tk_toc.html gcl-si_toc.html gcl_toc.html
	cp *.html /d/www/gcl

install: $(GCL_DVI) $(GCL_HTML)
	mkdir -p $(DESTDIR)${INFO_DIR}
	[ -f $(DESTDIR)$(INFO_DIR)/dir ] || touch $(DESTDIR)$(INFO_DIR)/dir
	grep gcl-si $(DESTDIR)${INFO_DIR}/dir >/dev/null 2>&1 || \
	echo "* GCL Doc: (gcl-si.info).	GNU Common Lisp specific Documentation." >> $(DESTDIR)${INFO_DIR}/dir
	grep gcl-tk $(DESTDIR)${INFO_DIR}/dir >/dev/null 2>&1 || \
	echo "* GCL TK Doc: (gcl-tk.info).	TK window GCL interface." >> $(DESTDIR)${INFO_DIR}/dir
	grep gcl.info $(DESTDIR)${INFO_DIR}/dir >/dev/null 2>&1 || \
	echo "* GCL Ansi Doc: (gcl.info).  Ansi Common Lisp Specification." >> $(DESTDIR)${INFO_DIR}/dir
	-cp *.info* $(DESTDIR)${INFO_DIR}/
#	-mkdir -p $(DESTDIR)$(INFO_DIR)/../doc/gcl-doc/gcl.html
#	-mkdir -p $(DESTDIR)$(INFO_DIR)/../doc/gcl-doc/gcl-si.html
#	-mkdir -p $(DESTDIR)$(INFO_DIR)/../doc/gcl-doc/gcl-tk.html
#	-cp gcl_*html gcl.html $(DESTDIR)$(INFO_DIR)/../doc/gcl-doc/gcl.html
#	-cp gcl-si*html $(DESTDIR)$(INFO_DIR)/../doc/gcl-doc/gcl-si.html
#	-cp gcl-tk*html $(DESTDIR)$(INFO_DIR)/../doc/gcl-doc/gcl-tk.html
#	-cp gcl/* $(DESTDIR)$(INFO_DIR)/../doc/gcl-doc/gcl.html
#	-cp gcl-si/* $(DESTDIR)$(INFO_DIR)/../doc/gcl-doc/gcl-si.html
#	-cp gcl-tk/* $(DESTDIR)$(INFO_DIR)/../doc/gcl-doc/gcl-tk.html
	-mkdir -p $(DESTDIR)$(INFO_DIR)/../doc
	-cp -r gcl-si gcl gcl-tk $(DESTDIR)$(INFO_DIR)/../doc
	-cp *dvi $(DESTDIR)$(INFO_DIR)/../doc

FILE=gcl-si.texi
srcs:
	fgrep '.texi' ${FILE} | sed -e "/@c/d" | \
	awk '{ i++; printf("%s ",$$2); if ((i%5) == 0) printf("\\\n")}'

tex:
	TEXINPUTS=.:$$TEXINPUTS tex gcl-si.texi
	TEXINPUTS=.:$$TEXINPUTS tex gcl-tk.texi
	TEXINPUTS=.:$$TEXINPUTS tex gcl.texi
	@echo must do twice to get indices correct...
	@echo so do '$(MAKE) tex' again

clean:
	rm -f *.info* *.html *.dvi *.cp *.ky *.vr *.tp *.pg *.toc *.aux *.log *.fn
	rm -rf gcl.IC gcl.IE gcl.IG gcl.IP gcl.IR gcl.IT gcl.fu gcl gcl-si gcl-tk
