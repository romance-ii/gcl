

-include ../makedefs

install:
	mkdir -p $(DESTDIR)$(EMACS_SITE_LISP)
	cp *.el $(DESTDIR)$(EMACS_SITE_LISP)
	if [ "$(EMACS_DEFAULT_EL)" != "" ] ; then \
	if test -f "$(DESTDIR)${EMACS_DEFAULT_EL}" ; then \
	cat $(DESTDIR)${EMACS_DEFAULT_EL} | sed -e '/BEGIN gcl/,/END gcl/d' > xxx ; \
	mv $(DESTDIR)${EMACS_DEFAULT_EL} $(DESTDIR)${EMACS_DEFAULT_EL}.prev ; \
	  rm -f  $(DESTDIR)${EMACS_DEFAULT_EL}c ; \
          cat add-default.el >> xxx ; cp  xxx $(DESTDIR)${EMACS_DEFAULT_EL} ; \
	  rm -f xxx ; else \
	cp  add-default.el $(DESTDIR)${EMACS_DEFAULT_EL} ; fi ; \
	chmod a+r $(DESTDIR)${EMACS_DEFAULT_EL} ; fi


