# makefile for making pcl -- W. Schelter.

-include ../makedefs

FILES:=$(shell ls -1 pcl_*.lisp | sed 's,\.lisp,,1') pcl_gcl_low

GFILES1:= 0 1 2 3 4 5 6 7 8
GFILES:=$(addprefix pcl_gazonk,$(GFILES1))

AFILES:=$(FILES) $(GFILES)

SETUP='(load "../clcs/package.lisp")(load "../clcs/myload1.lisp")(load "sys-package.lisp")' \
	'(setq *features* (delete (quote kcl) *features*))'\
	'(load "defsys.lisp")(push (quote kcl) *features*)' \
	'(setq pcl::*default-pathname-extensions* (cons "lisp" "o"))' \
	'(setq pcl::*pathname-extensions* (cons "lisp" "o"))' \
	'(load "sys-proclaim.lisp")' \
	'(setq compiler::*default-h-file* t)'\
	'(setq compiler::*default-c-file* t)'\
	'(setq compiler::*default-data-file* t)'\
	'(setq compiler::*default-system-p* t)' \
	'(setq compiler::*keep-gaz* t)'

all: $(addsuffix .c,$(AFILES)) $(addsuffix .o,$(AFILES)) 

saved_gcl_pcl: ../unixport/saved_mod_gcl
	cp ../h/cmpinclude.h .
	echo $(SETUP) '(pcl::compile-pcl)' | $< 
	echo $(SETUP) '(pcl::load-pcl)(si::save-system "$@")' | $<

$(addsuffix .c,$(AFILES)) $(addsuffix .data,$(AFILES))\
	$(addsuffix .h,$(AFILES)) $(addsuffix .lsp,$(GFILES)): \
	$(addsuffix .lisp,$(subst pcl_gcl_low,impl/gcl/pcl_gcl_low,$(FILES)))
	rm -f *.o *gazonk*
	cp ../h/cmpinclude.h .
	echo ${SETUP} '(pcl::compile-pcl)' | ../unixport/saved_mod_gcl ../unixport/
# FIXME -- small compiler setjmp/volatile detection bug -- CM
# doesn't seem to be needed now, but investigate more later
#	patch -p0 <pcl_methods.patch
#	rm -f pcl_methods.o
	for i in gazonk* ; do j=$$(echo $$i | sed 's,\..*$$,,1');\
		cat $$i | sed "s,$$j,pcl_$$j,g" >pcl_$$i && rm $$i; done

%.o: %.c %.h %.data
	$(CC) $(CFLAGS) -c $< -o $@
	../xbin/append $*.data $@

clean:
	rm -f *.o *.fn *.exe *.dll saved_gcl_pcl cmpinclude.h *.c *.h *.data


# remake the sys-package.lisp and sys-proclaim.lisp files
# Those files may be empty on a first build.
remake-sys-files:
	rm -f *.o *gazonk*
	cp ../h/cmpinclude.h .
	echo ${SETUP} '(load "../cmpnew/gcl_collectfn.lsp")(compiler::emit-fn t)' \
		'(pcl::compile-pcl)' | ../unixport/saved_mod_gcl ../unixport/
	echo ${SETUP} '(load "../cmpnew/gcl_collectfn.lsp") '\
		'(pcl::load-pcl)(in-package "PCL")(renew-sys-files)' | \
		../unixport/saved_mod_gcl ../unixport/
	cp sys-proclaim.lisp xxx
	cat xxx | sed -e "s/COMPILER::CMP-ANON//g" > sys-proclaim.lisp
	rm xxx


tar:
	$(MAKE) -f makefile.gcl  tar1 DIR=`pwd`

tar1:
	(cd .. ; tar cvf - `basename ${DIR}` | gzip -c > `basename ${DIR}`.tgz) 
