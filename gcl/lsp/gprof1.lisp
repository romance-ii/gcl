(in-package 'si)

;;  (load "gprof.o")
;;  On a sun in sun0S 3 or 4.0
;;  make a modified copy of /lib/gcrt0.o called gcrt0-mod.o
;;  then (cd unixport ; make "EXTRAS=../lsp/gcrt0-mod.o")
;;  after compiling some .o files with
;;  (cd o ; make  "CFLAGS = -I../h -pg -g -c")
;;   (invoke gprof-setup)
;;  and (monitor #x800 3000000)
;;  (monitor 0 0) to start and stop respectively
;; on suns the buffersize = (highpc- lowpc)/2   +6


(clines "#include \"gprof.hc\"")

(defun gprof-setup (&optional (n 800000) (m 1000000))
   (mymonstartup #x800 n)
   (set-up-monitor-array m)
(format t"   ;;  and (monitor #x800 3000000)
   ;;  (monitor 0 0) to start and stop respectively
	")
   nil)

(defentry mymonstartup (int int) (int "mymonstartup"))
;(defentry monitor1 (int int object) (int "mymonitor"))
(defentry monitor2 (int int int int) (int "mymonitor"))

(defentry write_outsyms () (int "write_outsyms"))

(defvar *monitor-array* nil)

(defun set-up-monitor-array (&optional (n 1000000))
  (unless *monitor-array* (setf *monitor-array*
				(make-array n :element-type 'string-char
					    :static t))
	  ;(mymonstartup 0 2000000)
	  nil
	  ))

(defun monitor (low high)
  (monitor1 low high *monitor-array*))

(defun write-syms.out ()
  (set-up-combined)
  (write_outsyms))







