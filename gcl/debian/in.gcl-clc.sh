#!/bin/sh
 
progname=$(basename $0)
clc_src=/usr/share/common-lisp/source

if test ! -f $clc_src/common-lisp-controller/common-lisp-controller.lisp ; then
    echo "Cannot find common-lisp-controller." 1>&2
    echo "Please report this as a bug." 1>&2
    exit 1
fi

export GCL_ANSI=true
gcl_bin=/usr/bin/gcl@EXT@ # is better than $(which gcl)

command=$1
shift

build_error()
{
	echo "Error building $1" 1>&2
	exit 1
}

if [ "$command" = "make-user-image" ] ; then
    echo $progname Building image with $1 ...
    if test ! -r $1; then 
	echo "Trying to make user image: Cannot access file $1" 1>&2
	exit 1
    fi 
    
    $gcl_bin <<!MAKE_USER_IMAGE!
(progn    
  (load \"$1\") 
  (si:save-system
    (make-pathname :name \"gcl@EXT@_$1_image\"  :defaults (user-homedir-pathname)))
  (quit 1))" || build_error $1
!MAKE_USER_IMAGE!
    test $? = 0 || build_error make-user-image
    exit 0
fi

for PROF in n y; do
    
    if [ "$PROF" = "y" ] ; then
	export GCL_PROF=t
    else
	export GCL_PROF=
    fi

    if [ -f $gcl_bin ] ; then
	image=$($gcl_bin -batch -eval '(princ (namestring (merge-pathnames (make-pathname :name "saved_clc_gcl") (pathname si:*system-directory*))))')
	gcl_clc=$($gcl_bin -batch -eval '(princ (namestring (merge-pathnames (make-pathname :directory (pathname-directory (pathname si::*lib-directory*))) (pathname "/usr/lib/common-lisp/"))))')
    else
	echo "Cannot find gcl." 1>&2
	exit 1
    fi

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
		' | $gcl_bin || build_error $1
	      shift
	    done 
	    ;;

	remove)
	    while test -n "$1"
	      do
	      echo $progname Removing $1
	      rm -rf "${gcl_clc}$1"
	      shift
	    done
	    ;;
	
	install-clc)
	    echo $progname Uninstalling clc image and purging object cache ...
	    test -x $gcl_bin || {
		echo "Cannot install as there is no GCL"
		exit -1
	    }
	    rm -rf $gcl_clc
	    mkdir -p $gcl_clc
	    chown cl-builder.cl-builder $gcl_clc
	    
	    rm -f $image

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
(init-common-lisp-controller "$gcl_clc" :version 3)

(defun send-clc-command (command package)
  "Overrides global definition."
  (multiple-value-bind (exit-code signal-code)
	(si::system (c-l-c:make-clc-send-command-string
		     command package "gcl@EXT@"))
    (if (and (zerop exit-code) (zerop signal-code))
	  (values)
	(error "Error during ~A of ~A for ~A~%Please see /usr/share/doc/common-lisp-controller/REPORTING-BUGS.gz"
	       (ecase command
		 (:recompile "recompilation")
		 (:remove "removal"))
	       package
	       "gcl@EXT@"))))

(in-package :asdf)

(defun run-shell-command (control-string &rest args)
"Interpolate ARGS into CONTROL-STRING as if by FORMAT, and
synchronously execute the result using a Bourne-compatible shell,
with output to *verbose-out*.  Returns the shell's exit code."
  (let ((command (apply #'format nil control-string args)))
    (format *verbose-out* "; $ ~A~%" command)
    (si::system command) ; even less *verbose-out*
    ))

(si:save-system "$image"))
!INSTALL_CLC!
		test $? = 0 || build_error send-clc-command
	    fi
	    ;;

	remove-clc)
	    echo $progname Uninstalling clc and restoring pristine orig image ...
	    rm -f $image
	    ;;
	
	purge-clc)
	    echo $progname Uninstalling clc image and purging object cache ...
	    rm -f $image
	    rm -rf $gcl_clc
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
    
done

exit 0
