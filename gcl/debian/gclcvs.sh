#!/bin/sh
 
progname=$(basename $0)
clc_src=/usr/share/common-lisp/source

if test ! -f $clc_src/common-lisp-controller/common-lisp-controller.lisp
then
	echo "Cannot find common-lisp-controller." 1>&2
	echo "Please report this as a bug." 1>&2
	exit 1
fi

export GCL_ANSI=true
gcl_bin=/usr/bin/gclcvs # is better than $(which gcl)

if [ -f $gcl_bin ] 
then
    gcl_system_dir=$($gcl_bin -batch -eval '(princ si:*system-directory*)')
    gcl_lib_dir=$(dirname $gcl_system_dir)
    gcl_sys_dir=$gcl_lib_dir/$(basename $gcl_system_dir)
    gcl_clc=/usr/lib/common-lisp/gcl
    gcl_old=$gcl_lib_dir/bin/gcl-pre-clc

    image=$gcl_sys_dir/saved_clc_gcl
    ansi_image=$gcl_sys_dir/saved_ansi_gcl
    new_image=$gcl_sys_dir/saved_clc_gcl_new
else
    echo "Cannot find gcl." 1>&2
    exit 1
fi

build_error()
{
	echo "Error building $1" 1>&2
	exit 1
}

command=$1
shift

case $command in
rebuild)
	while test -x $gcl_bin -a -n "$1"
	do
		echo $progname Rebuilding $1 ...
		echo '
		(setq *compile-print* t)
		(setq *compile-verbose* t)
		(setq *load-verbose* t)
		(setq *require-verbose* t)
		(ignore-errors (c-l-c:compile-library (quote '"$1"'))
		    (lisp:quit 0))
		(lisp:quit 1)
		' |
		    gcl || build_error $1
		shift
	done 
	;;

remove)
	while test -n "$1"
	do
		echo $progname Removing $1
		rm -rf "$gcl_clc/$1"
		shift
	done
	;;

install-clc)
	echo $progname Uninstalling clc image and purging object cache ...
	test -x $gcl_bin || {
		echo "Cannot install as there is no GCL"
		exit -1
	}
	if test -f $image; then
	    mv -f $image $image.moved || {
		echo "Cannot move image file $image to $image.moved." 1>&2
		exit -1
	    }
	fi
	rm -rf $gcl_clc/*
	mkdir -p $gcl_clc
	chown cl-builder.cl-builder $gcl_clc

	fgrep saved_clc_gcl $gcl_bin >/dev/null || {
	echo $progname Installing new gcl loader shell script at $gcl_bin ...
	mkdir -p $gcl_lib_dir/bin
	cp $gcl_bin $gcl_old
	cat > $gcl_bin << !BIN_GCL!
#!/bin/sh

if [ "\$GCL_ANSI" = "" ] ; then
exec $gcl_sys_dir/saved_gcl \\
   -dir $gcl_sys_dir/ \\
   -libdir $gcl_lib_dir/ \\
   -eval '(setq si::*allow-gzipped-file* t)' \\
   -eval '(setq si::*tk-library* "/usr/lib/tk8.4/../tk8.4")' \\
     "\$@"
else

[ -f  $image ] &&
exec $image \\
   -dir $gcl_sys_dir/ \\
   -libdir $gcl_lib_dir/ \\
   -eval '(setq si::*allow-gzipped-file* t)' \\
   -eval '(setq si::*tk-library* "/usr/lib/tk8.4/../tk8.4")' \\
     "\$@"

[ -f  $ansi_image ] &&
exec $ansi_image \\
   -dir $gcl_sys_dir/ \\
   -libdir $gcl_lib_dir/ \\
   -eval '(setq si::*allow-gzipped-file* t)' \\
   -eval '(setq si::*tk-library* "/usr/lib/tk8.4/../tk8.4")' \\
     "\$@"

echo "Cannot find GCL ansi_image or clc_image." 2>&1

fi

# other options: -load /tmp/foo.o -load jo.lsp -eval "(joe 3)"
!BIN_GCL!
	}
	echo $progname Installing clc as $image ...
	if test -x $gcl_bin; then
	    $gcl_bin <<!INSTALL_CLC!
(in-package :common-lisp)
(unless (fboundp 'load-time-value)
	(defun load-time-value (obj) obj)
	(export (find-symbol "LOAD-TIME-VALUE")))

(in-package :common-lisp-user)
(load "$clc_src/common-lisp-controller/common-lisp-controller.lisp")

(in-package :common-lisp-controller)
(init-common-lisp-controller "$gcl_clc/" :version 3)

(defun send-clc-command (command package)
  "Overrides global definition."
  (multiple-value-bind (exit-code signal-code)
	    (si::system (c-l-c:make-clc-send-command-string
			  command package "gclcvs"))
    (if (and (zerop exit-code) (zerop signal-code))
	(values)
	(error "Error during ~A of ~A for ~A~%Please see /usr/share/doc/common-lisp-controller/REPORTING-BUGS.gz"
	       (ecase command
		      (:recompile "recompilation")
		      (:remove "removal"))
	       package
	       "gclcvs"))))

(in-package :asdf)

(defun run-shell-command (control-string &rest args)
  "Interpolate ARGS into CONTROL-STRING as if by FORMAT, and
synchronously execute the result using a Bourne-compatible shell,
with output to *verbose-out*.  Returns the shell's exit code."
  (let ((command (apply #'format nil control-string args)))
    (format *verbose-out* "; $ ~A~%" command)
      (si::system command) ; even less *verbose-out*
  ))

(si:save-system "$new_image")
!INSTALL_CLC!
	test $? = 0 || build_error send-clc-command
	mv -f $new_image $image ||
	    echo "Error moving new lisp image $new_image" 1>&2
	fi
	;;

remove-clc)
	echo $progname Uninstalling clc and restoring pristine orig image ...
	if test -f $image; then
	    mv -f $image $image.removed ||
		echo "Cannot move image file $image to $image.removed." 1>&2
	fi
	;;

purge-clc)
	echo $progname Uninstalling clc image and purging object cache ...
	if test -f $image; then
	    mv -f $image $image.removed ||
		echo "Cannot move image file $image to $image.removed." 1>&2
	fi
	rm -rf $gcl_clc/*
	[ -f $gcl_old ] && mv $gcl_old $gcl_bin
	;;

make-user-image)
	echo $progname Building image with $1 ...
	if test ! -r $1; then 
		echo "Trying to make user image: Cannot access file $1" 1>&2
		exit 1
	fi 

	$gcl_bin <<!MAKE_USER_IMAGE!
(progn    
  (load \"$1\") 
  (si:save-system
    (make-pathname :name \"gclcvs_$1_image\"  :defaults (user-homedir-pathname)))
  (quit 1))" || build_error $1
!MAKE_USER_IMAGE!
	;;

*)
	expr $command : '.*\(help\).*' > /dev/null 2>&1 || \
		echo "$progname: Unknown command '$command'" 1>&2
	echo "Usage: $progname <command>" 1>&2 
	echo "Where <command> is one of:" 1>&2
	echo "  install-clc, remove-clc," 1>&2
	echo "  rebuild <package>*, remove <package>*," 1>&2
	echo "  or make-user-image <load-file>" 1>&2
	echo "And <package> is a cl-debpkg (e.g. cl-rt)" 1>&2
	echo "  with a defsystem/asdf definition." 1>&2
	exit 1
	;;
esac

exit 0
