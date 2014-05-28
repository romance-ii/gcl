# make .d more important by clearing suffixes.
.SUFFIXES:
.SUFFIXES: .d .o .c .ini

-include ../makedefs

HDIR	 := ../h
DEFS	 := -I../h -I../gcl-tk
GCLIB    := gcllib.a
RANLIB   := ranlib
AR       := ar qc
LIBFILES :=$(addsuffix .o,bcmp bcopy bzero user_init user_match)
DPP	 := ../bin/dpp$(EXE)
DECL     := $(HDIR)/new_decl.h
ALIB     := ${LIBFILES} ${EXTRA_LIB}


OBJS:=$(addsuffix .o,typespec alloc gbc bitop boot main eval macros lex bds frame\
	 predicate reference assignment bind let conditional block iteration mapfun\
	 prog multival catch symbol cfun cmpaux package big number num_pred num_comp\
	 num_arith num_sfun num_co num_log num_rand earith character  sequence list\
	 hash array string regexpr structure toplevel file read backq print format\
	 pathname unixfsys unixfasl error unixtime unixsys unixsave funlink  fat_string\
	 run_process nfunlink usig usig2 utils makefun sockets gmp_wrappers clxsocket\
	init_pari nsocket new_init sfasl $(RL_OBJS))
OBJS:=$(OBJS) $(EXTRAS)

INI_FILES=$(patsubst %.o,%.ini,${OBJS})
INI_FILES:=$(filter-out new_init.ini,$(filter-out boot.ini,$(INI_FILES)))

OBJECTS:=$(OBJS) $(LIBFILES) new_init.o  $(GCLIB) $(LAST_FILE)  $(FIRST_FILE) 

all:  $(OBJECTS)

boot.o: boot.c $(DECL) boot.h
	$(CC) -c $(CFLAGS) $(DEFS) -fPIC $*.c $(AUX_INFO) 

%.o: %.c $(DECL)
	$(CC) -c $(CFLAGS) $(DEFS) $*.c $(AUX_INFO) 

%.c: %.d $(DPP)
	$(DPP) $*

%.o: %.d $(DECL)
	$(DPP) $*
	$(CC) -c $(CFLAGS) $(DEFS) $*.c $(AUX_INFO)
	rm $*.c

boot.ini: boot.c grab_defs
	$(CC) -DINICOMP -DNO_DEFUN -DNO_BOOT_H $(CFLAGS) $(DEFS) -E $*.c |\
		 sed -e 's,DEFUN,\nDEFUN,g' -e 's,^.* DEFUNB,DEFUNB,g' -e 's/DEF,//g' -e 's:\"[ ]*):\"):g' | ./grab_defs > $@

boot.h: boot.ini
	echo '#include "make-init.h"' > $@
	echo 'void gcl_init_boot(void){' >> $@
	cat $< >> $@
	echo '}' >> $@

%.ini: %.c grab_defs
	$(CC) -DINICOMP -DNO_DEFUN $(CFLAGS) $(DEFS) -E $*.c |\
		 sed -e 's,^.* DEFUNB,DEFUNB,g' -e 's/DEF,//g' -e 's:\"[ ]*):\"):g' | ./grab_defs > $*.ini

%.ini: %.d $(DPP) grab_defs
	$(DPP) $*
	$(CC) -DINICOMP -DNO_DEFUN $(CFLAGS) $(DEFS) -E $*.c |\
		 sed -e 's,^.* DEFUNB,DEFUNB,g' -e 's/DEF,//g' | sed -e 's:\"[ ]*):\"):g' | ./grab_defs > $*.ini
	rm $*.c

$(DPP):	../bin/dpp.c
	${CC} ${DEFS} -o $@ $<

new_init.c: ${INI_FILES}
	echo '#include "make-init.h"' > new_init.c
	echo 'void NewInit(void){' >> new_init.c
	cat ${INI_FILES} >> new_init.c
	echo '}' >> new_init.c

ifneq ($(NIFLAGS),)
new_init.o: new_init.c $(DECL)
	$(CC) -c $(NIFLAGS) $(DEFS) $< -o $@
endif

$(DECL): $(HDIR)/make-decl.h $(INI_FILES)
	echo '#include "make-decl.h"' > foo.c
	cat ${INI_FILES} |sed 's,DEFBFUN,DEFUN,g' >> foo.c
	${CC} -E -I${HDIR} foo.c | sed -n -e '/#/d' -e '/DO_/d' -e '/[a-zA-Z;]/p' > tmpini
	../xbin/move-if-changed mv tmpini $@
	rm -f foo.c tmpini

grab_defs: grab_defs.c
	${CC} $(OFLAGS) -o grab_defs  grab_defs.c

$(GCLIB): ${ALIB} 
	rm -f gcllib.a
	$(AR) gcllib.a ${ALIB}
	${RANLIB} gcllib.a

clean:
	rm -f $(OBJS) ${ALIB} new_init.o  $(LAST_FILE) $(FIRST_FILE) *.a grab_defs$(EXE) *.ini tmpx foo.c
	rm -f  cmpinclude.h new_init.c $(DECL) def undef udef.h void.h TAGS boot.h

.INTERMEDIATE: $(patsubst %.d,%.c,$(shell ls -1 *.d))
