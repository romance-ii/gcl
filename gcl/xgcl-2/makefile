############  BEGIN Things you may have to change ########## 

-include ../makedefs

# The main gcl source directory.   Expects to find $(GCLDIR)/o/*.o etc.
# and it will put saved_xgcl in $(GCLDIR)/unixport/saved_xgcl
#GCLDIR	= /fix/t2/camm/b/gcl

# The current directory:
SYSDIR	= $(GCLDIR)/xgcl-2
# way to get xlibraries:
#X_LIBS	= -L/usr/X11R6/lib -lXaw -lXmu -lXt -lXext -lX11
# for RS6000 at UT:
#X_LIBS	= -L/usr/local/X11R5/lib -lXaw -lXmu -lXt -lXext -lX11

# for Sun's at UT use -I/usr/local/X11R5/include
IFLAGS		= -I../h -I../o $(X_CFLAGS)

############  END Things you may have to change ############### 

SYSTEM=xgcl

# How to invoke gcl
LISP	= $(PORTDIR)/saved_gcl $(PORTDIR)/

SRC	= .
PORTDIR	=$(GCLDIR)/unixport

CFLAGS	+= $(IFLAGS) 

C_OBJS=$(SYSDIR)/Xutil-2.o $(SYSDIR)/Events.o $(SYSDIR)/XStruct-2.o \
	$(SYSDIR)/XStruct-4.o $(SYSDIR)/general-c.o 

all:  $(PORTDIR)/saved_$(SYSTEM) Xgcl

maxobjs: $(shell echo *.lsp) $(PORTDIR)/saved_gcl
	echo '(load "sysdef.lisp")(setq si::*multiply-stacks* 2)'\
	'(xlib::compile-xgcl)' | $(LISP)

$(PORTDIR)/saved_$(SYSTEM): $(C_OBJS) maxobjs
	(cd $(PORTDIR) ; $(MAKE) saved_xgcl "INIT_SYSTEM_LSP=init_gcl.lsp" "SYSTEM=$(SYSTEM)" "SYSTEM_OBJS=`cat $(SYSDIR)/maxobjs` $(C_OBJS) " "EXTRA_LD_LIBS= $(X_LIBS) " "PORTDIR=$(PORTDIR)")
	rm -f $(PORTDIR)/raw_$(SYSTEM)

Xgcl:
	echo $(PORTDIR)/saved_$(SYSTEM) $(PORTDIR)/ > Xgcl
	chmod a+x Xgcl

############   the C code ###############

cmpinclude.h: ../h/cmpinclude.h
	ln -snf $< $@

$(SYSDIR)/Xutil-2.o: cmpinclude.h $(SYSDIR)/Xutil-2.c
	$(CC) -c Xutil-2.c $(CFLAGS)

$(SYSDIR)/Events.o: cmpinclude.h $(SYSDIR)/Events.c
	$(CC) -c Events.c  $(CFLAGS)

$(SYSDIR)/XStruct-2.o: cmpinclude.h $(SYSDIR)/XStruct-2.c
	$(CC) -c XStruct-2.c  $(CFLAGS)

$(SYSDIR)/XStruct-4.o: cmpinclude.h $(SYSDIR)/XStruct-4.c
	$(CC) -c XStruct-4.c  $(CFLAGS)

general-c.o: cmpinclude.h general-c.c
	$(CC) -c general-c.c  $(CFLAGS)

tar:
	$(MAKE) tar1 TARD=xgcl-`cat version`

tar1:
	(cd .. ; tar cvf - $(TARD)/*.lsp $(TARD)/*.lisp $(TARD)/*.c $(TARD)/*.paper $(TARD)/README $(TARD)/makefile $(TARD)/version | gzip -c > $(TARD).tgz)

clean:
	rm -f *.o *.data Xgcl maxobjs $(PORTDIR)/saved_$(SYSTEM) cmpinclude.h

