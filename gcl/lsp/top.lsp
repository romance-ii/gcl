;; Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

;; This file is part of GNU Common Lisp, herein referred to as GCL
;;
;; GCL is free software; you can redistribute it and/or modify it under
;;  the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
;; the Free Software Foundation; either version 2, or (at your option)
;; any later version.
;; 
;; GCL is distributed in the hope that it will be useful, but WITHOUT
;; ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
;; FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
;; License for more details.
;; 
;; You should have received a copy of the GNU Library General Public License 
;; along with GCL; see the file COPYING.  If not, write to the Free Software
;; Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.


;;;;  top.lsp
;;;;
;;;;  Top-level loop, break loop, and error handlers
;;;;
;;;;  Revised on July 11, by Carl Hoffman.


(in-package "LISP")
;(export 'lisp)
(export '(+ ++ +++ - * ** *** / // ///))
(export '(break warn))
(export '*break-on-warnings*)
(export '*break-enable*)

(in-package 'system)

(export '*break-readtable*)
(export '(loc *debug-print-level*))

(export '(vs ihs-vs ihs-fun frs-vs frs-bds frs-ihs bds-var bds-val super-go))

(eval-when (compile) (proclaim '(optimize (safety 2) (space 3))
			       )
	   (defvar *command-args* nil)
	   )

(defvar +)
(defvar ++)
(defvar +++)
(defvar -)
(defvar *)
(defvar **)
(defvar ***)
(defvar /)
(defvar //)
(defvar ///)


;; setup file search and autoload

(defvar *fixed-load-path* nil)
(defvar *load-path* nil)
(defvar *load-types* '(".o" ".lsp" ".lisp"))

(defvar *lisp-initialized* nil)
(defvar *quit-tag* (cons nil nil))
(defvar *quit-tags* nil)
(defvar *break-level* '())
(defvar *break-env* nil)
(defvar *ihs-base* 1)
(defvar *ihs-top* 1)
(defvar *current-ihs* 1)
(defvar *frs-base* 0)
(defvar *frs-top* 0)
(defvar *break-enable* t)
(defvar *break-message* "")

(defvar *break-on-warnings* nil)

(defvar *break-readtable* nil)

(defvar *top-level-hook* nil)


(defvar *top-eof* (cons nil nil))
(defvar *no-prompt* nil)

(defun top-level ()
  (let ((+ nil) (++ nil) (+++ nil)
        (- nil) 
        (* nil) (** nil) (*** nil)
        (/ nil) (// nil) (/// nil)
	)
    (setq *lisp-initialized* t)
    (catch *quit-tag*
      (progn 
	(cond
	 (*multiply-stacks* (setq *multiply-stacks* nil))
	 ((probe-file "init.lsp") (load "init.lsp")))
	(let (*load-verbose*) (process-some-args *command-args*))
	)
      (and (functionp *top-level-hook*)(funcall   *top-level-hook*)))

    (loop
      (setq +++ ++ ++ + + -)
      (if *no-prompt* (setq *no-prompt* nil)
	(format t "~%~a>"
		(if (eq *package* (find-package 'user)) ""
                  (package-name *package*))))
      (reset-stack-limits)
      ;; have to exit and re-enter to multiply stacks
      (cond (*multiply-stacks* (Return-from top-level)))
      (when (catch *quit-tag*
              (setq - (locally (declare (notinline read))
                               (read *standard-input* nil *top-eof*)))
              (when (eq - *top-eof*) (bye))
              (let ((values (multiple-value-list
                             (locally (declare (notinline eval)) (eval -)))))
                (setq /// // // / / values *** ** ** * * (car /))
                (fresh-line)
                (dolist (val /)
                  (locally (declare (notinline prin1)) (prin1 val))
                  (terpri))
                nil))
        (setq *evalhook* nil *applyhook* nil)
        (terpri *error-output*)
        (break-current)))))

(defun process-some-args (args)
  (loop
   (let ((x (car args))
	 y)
     (cond ((equal x "-load")
	    (load (second args)))
	   ((equal x "-eval")
	    (eval (read-from-string (second args))))
	   (t (setq y t)))
     (or y (setq args (cdr args)))
     (setq args (cdr args)))
   (or args (return nil))))  
  




(defun dbl-read (&optional (stream *standard-input*) (eof-error-p t)
			   (eof-value nil)  &aux tem  ch)
  (tagbody
   top
   (setq ch (read-char stream eof-error-p eof-value))
   (cond ((eql ch #\newline) (go top))
	 ((eq ch eof-value) (return-from dbl-read eof-value)))
   (unread-char ch stream))

  (cond ((eql #\: ch)
	 (setq tem
	       (string-concatenate
		"("
		(read-line stream eof-error-p eof-value)")"))
	 (read  (make-string-input-stream tem)
					 eof-error-p eof-value))
	(t (read stream eof-error-p eof-value))))


(defun break-level (at &optional env)
  (let* ((*break-message* (if (stringp at) at *break-message*))
	 (*quit-tags* (cons (cons *break-level* *quit-tag*) *quit-tags*))
         (*quit-tag* (cons nil nil))
         (*break-level* (if (not at) *break-level* (cons t *break-level*)))
         (*ihs-base* (1+ *ihs-top*))
         (*ihs-top* (1- (ihs-top)))
         (*current-ihs* *ihs-top*)
         (*frs-base* (or (sch-frs-base *frs-top* *ihs-base*) (1+ (frs-top))))
         (*frs-top* (frs-top))
         (*break-env* nil)
	 (be *break-enable*)
	 (*break-enable*
	  (progn 
	    (if (stringp at) nil be)))
					;(*standard-input* *terminal-io*)
         (*readtable* (or *break-readtable* *readtable*))
         (*read-suppress* nil)
         (+ +) (++ ++) (+++ +++)
         (- -)
         (* *) (** **) (*** ***)
         (/ /) (// //) (/// ///)
         )
					; (terpri *error-output*)
    (unless (or be (not (stringp at)))
      (simple-backtrace)
      (break-quit (length (cdr *break-level*))))
    (catch-fatal 1)
    (setq *interrupt-enable* t)
    (cond ((stringp at) (set-current)(terpri *error-output*)
	   (setq *no-prompt* nil)
	   )
	  (t (set-back at env)))
      (loop 
       (setq +++ ++ ++ + + -)
       (cond (*no-prompt* (setq *no-prompt* nil))
	     (t
	      (format *debug-io* "~&~a~a>~{~*>~}"
		      (if (stringp at) "" "dbl:")
		      (if (eq *package* (find-package 'user)) ""
			(package-name *package*))
		      *break-level*)))
       (force-output *error-output*)
       (when
	(catch 'step-continue
        (catch *quit-tag*
          (setq - (locally (declare (notinline read))
			   (dbl-read *debug-io* nil *top-eof*)))
          (when (eq - *top-eof*) (bye))
          (let* ( break-command
		 (values
		  (multiple-value-list
		  (LOCALLY (declare (notinline break-call evalhook))
			   (if (keywordp -)(setq - (cons - nil)))
			   (cond ((and (consp -) (keywordp (car -)))
				  (setq break-command t)
				  (break-call (car -) (cdr -) 'si::break-command))
				 (t (evalhook - nil nil *break-env*)))))))
	    (and break-command (eq (car values) :resume )(return))
            (setq /// // // / / values *** ** ** * * (car /))
            (fresh-line *debug-io*)
            (dolist (val /)
		    (locally (declare (notinline prin1)) (prin1 val *debug-io*))
		    (terpri *debug-io*)))
          nil))
        (terpri *debug-io*)
        (break-current))))))

(defvar *debug-print-level* 3)

(defun warn (format-string &rest args)
  (let ((*print-level* 4)
        (*print-length* 4)
        (*print-case* :upcase))
    (cond (*break-on-warnings*
           (apply #'break format-string args))
          (t (format *error-output* "~&Warning: ")
             (let ((*indent-formatted-output* t))
               (apply #'format *error-output* format-string args))
             nil))))

(defun universal-error-handler
  (error-name correctable function-name
   continue-format-string error-format-string
   &rest args &aux message)
  (declare (ignore error-name))
  (let ((*print-pretty* nil)
        (*print-level* *debug-print-level*)
        (*print-length* *debug-print-level*)
        (*print-case* :upcase))
       (terpri *error-output*)
       (cond ((and correctable *break-enable*)
              (format *error-output* "~&Correctable error: ")
              (let ((*indent-formatted-output* t))
                (apply 'format *error-output* error-format-string args))
              (terpri *error-output*)
              (setq message (apply 'format nil error-format-string args))
              (if function-name
                  (format *error-output*
                          "Signalled by ~:@(~S~).~%" function-name)
                  (format *error-output*
                          "Signalled by an anonymous function.~%"))
              (format *error-output* "~&If continued: ")
              (let ((*indent-formatted-output* t))
                (format *error-output* "~?~&" continue-format-string args))
              )
             (t
              (format *error-output* "~&Error: ")
              (let ((*indent-formatted-output* t))
                (apply 'format *error-output* error-format-string args))
              (terpri *error-output*)
	      (if (> (length *link-array*) 0)
		  (format *error-output* "Fast links are on: do (si::use-fast-links nil) for debugging~%"))
              (setq message (apply 'format nil error-format-string args))
              (if function-name
                  (format *error-output*
                          "Error signalled by ~:@(~S~).~%" function-name)
                  (format *error-output*
                          "Error signalled by an anonymous function.~%")))))
  (force-output *error-output*)
  (break-level message)
  (unless correctable (throw *quit-tag* *quit-tag*)))

(defun break (&optional format-string &rest args &aux message)
  (let ((*print-pretty* nil)
        (*print-level* 4)
        (*print-length* 4)
        (*print-case* :upcase))
       (terpri *error-output*)
    (cond (format-string
           (format *error-output* "~&Break: ")
           (let ((*indent-formatted-output* t))
             (apply 'format *error-output* format-string args))
           (terpri *error-output*)
           (setq message (apply 'format nil format-string args)))
          (t (format *error-output* "~&Break.~%")
             (setq message ""))))
  (let ((*break-enable* t)) (break-level message))
  nil)

(defun terminal-interrupt (correctablep)
  (let ((*break-enable* t))
    (if correctablep
        (cerror "Type :r to resume execution, or :q to quit to top level."
		"Console interrupt.")
        (error "Console interrupt -- cannot continue."))))


(defun break-call (key args &optional (prop 'si::break-command) &aux fun)
  (setq fun (complete-prop key 'keyword prop))
  (or fun (return-from break-call nil))
  (setq fun (get fun prop))
  (cond (fun
	 (setq args (cons fun args))
	 (or (symbolp fun) (setq args (cons 'funcall args)))
	 (evalhook args nil nil *break-env*)
	 )
	(t (format *debug-io* "~&~S is undefined break command.~%" key))))

(defun break-quit (&optional (level 0)
                   &aux (current-level (length *break-level*)))
  (when (and (>= level 0) (< level current-level))
    (let ((x (nth (- current-level level 1) *quit-tags*)))
      (throw (cdr x) (cdr x))))
  (break-current))

(defun break-previous (&optional (offset 1))
  (do ((i (1- *current-ihs*) (1- i)))
      ((or (< i *ihs-base*) (<= offset 0))
       (set-env)
       (break-current))
    (when (ihs-visible i)
      (setq *current-ihs* i)
      (setq offset (1- offset)))))

(defun set-current ()
  (do ((i *current-ihs* (1- i)))
      ((or (ihs-visible i) (<= i *ihs-base*))
       (setq *current-ihs* i)
       (set-env)
       (format *debug-io* "Broken at ~:@(~S~).~:[  Type :H for Help.~;~]"
               (ihs-fname *current-ihs*)
               (cdr *break-level*)))))

(defun break-next (&optional (offset 1))
  (do ((i *current-ihs* (1+ i)))
      ((or (> i *ihs-top*) (< offset 0))
       (set-env)
       (break-current))
    (when (ihs-visible i)
      (setq *current-ihs* i)
      (setq offset (1- offset)))))

(defun break-go (ihs-index)
  (setq *current-ihs* (min (max ihs-index *ihs-base*) *ihs-top*))
  (if (ihs-visible *current-ihs*)
      (progn (set-env) (break-current))
      (break-previous)))

(defun break-message ()
  (princ *break-message* *debug-io*)
  (terpri *debug-io*)
  (values))

(defun describe-environment (&optional (env *break-env*) (str *debug-io*))
  (or (eql (length env) 3) (error "bad env"))
    (let ((fmt "~a~#[none~;~S~;~S and ~S~
         ~:;~@{~#[~;and ~]~S~^, ~}~].~%"))
      (apply 'format str fmt "Local variables: "
	     (mapcar #'car (car *break-env*)))
      (apply 'format str fmt "Local functions: "
	     (mapcar #'car (cadr *break-env*)))
      (apply 'format str fmt "Local blocks: "
	     (mapcan #'(lambda (x) (when (eq (cadr x) 'block) (list (car x))))
                 (caddr *break-env*)))
      (apply 'format str fmt "Local tags: "
	     (mapcan #'(lambda (x) (when (eq (cadr x) 'tag) (list (car x))))
                 (caddr *break-env*)))))

(defun break-vs (&optional (x (ihs-vs *ihs-base*)) (y (ihs-vs *ihs-top*)))
  (setq x (max x (ihs-vs *ihs-base*)))
  (setq y (min y (1- (ihs-vs (1+ *ihs-top*)))))
  (do ((ii *ihs-base* (1+ ii)))
      ((or (>= ii *ihs-top*) (>= (ihs-vs ii) x))
       (do ((vi x (1+ vi)))
           ((> vi y) (values))
         (do ()
             ((> (ihs-vs ii) vi))
           (when (ihs-visible ii) (print-ihs ii))
           (incf ii))
         (format *debug-io* "~&VS[~d]: ~s" vi (vs vi))))))

(defun break-local (&optional (n 0) &aux (x (+ (ihs-vs *current-ihs*) n)))
  (break-vs x x))

(defun break-bds (&rest vars &aux (fi *frs-base*))
  (do ((bi (1+ (frs-bds (1- *frs-base*))) (1+ bi))
       (last (frs-bds (1+ *frs-top*))))
      ((> bi last) (values))
    (when (or (null vars) (member (bds-var bi) vars))
      (do ()
          ((or (> fi *frs-top*) (> (frs-bds fi) bi)))
        (print-frs fi)
        (incf fi))
      (format *debug-io* "~&BDS[~d]: ~s = ~s"
              bi (bds-var bi) (bds-val bi)))))

(defun simple-backtrace ()
  (princ "Backtrace: " *debug-io*)
  (do* ((i *ihs-base* (1+ i))
        (b nil t))
       ((> i *ihs-top*) (terpri *debug-io*) (values))
    (when (ihs-visible i)
      (when b (princ " > " *debug-io*))
      (write (ihs-fname i) :stream *debug-io* :escape t
             :case (if (= i *current-ihs*) :upcase :downcase)))))

(defun ihs-backtrace (&optional (from *ihs-base*) (to *ihs-top*))
  (setq from (max from *ihs-base*))
  (setq to (min to *ihs-top*))
  (do* ((i from (1+ i))
        (j (or (sch-frs-base *frs-base* from) (1+ *frs-top*))))
       ((> i to) (values))
    (when (ihs-visible i) (print-ihs i))
    (do () ((or (> j *frs-top*) (> (frs-ihs j) i)))
      (print-frs j)
      (incf j))))

(defun print-ihs (i &aux (*print-level* 2) (*print-length* 4))
  (format t "~&~:[  ~;@ ~]IHS[~d]: ~s ---> VS[~d]"
          (= i *current-ihs*)
          i
          (let ((fun (ihs-fun i)))
            (cond ((or (symbolp fun) (compiled-function-p fun)) fun)
                  ((consp fun)
                   (case (car fun)
                     (lambda fun)
                     ((lambda-block lambda-block-expanded) (cdr fun))
                     (lambda-closure (cons 'lambda (cddddr fun)))
                     (lambda-block-closure (cddddr fun))
                     (t (cond
			 ((and (symbolp (car fun))
			       (or (special-form-p(car fun))
				   (fboundp (car fun))))
			  (car fun))
			 (t '(:zombi))))))
                  (t (print fun)
		   :zombi)))
          (ihs-vs i)))

(defun print-frs (i)
  (format *debug-io* "~&    FRS[~d]: ~s ---> IHS[~d],VS[~d],BDS[~d]"
          i (frs-kind i) (frs-ihs i) (frs-vs i) (frs-bds i)))

(defun frs-kind (i &aux x)
  (case (frs-class i)
    (:catch
     (if (spicep (frs-tag i))
         (or (and (setq x (member (frs-tag i) (vs (+ (frs-vs i) 2))
                                  :key #'caddr :test #'eq))
                  (if (eq (cadar x) 'block)
                      `(block ,(caar x) ***)
                      `(tagbody ,@(reverse (mapcar #'car
                                             (remove (frs-tag i) x
                                                     :test-not #'eq
                                                     :key #'caddr)))
                                ***)))
             `(block/tagbody ,(frs-tag i)))
         `(catch ',(frs-tag i) ***)))
    (:protect '(unwind-protect ***))
    (t `(system-internal-catcher ,(frs-tag i)))))

(defun break-current ()
  (if *break-level*
      (format *debug-io* "Broken at ~:@(~S~)." (ihs-fname *current-ihs*))
      (format *debug-io* "~&Top level."))
  (values))



(defvar *break-hidden-packages* nil)

(defun ihs-visible (i &aux (tem (ihs-fname i)))
  (and tem (not (member tem *break-hidden-packages*))))


(defun ihs-fname (ihs-index)
  (let ((fun (ihs-fun ihs-index)))
    (cond ((symbolp fun) fun)
          ((consp fun)
           (case (car fun)
             (lambda 'lambda)
             ((lambda-block lambda-block-expanded) (cadr fun))
             (lambda-block-closure (nth 4 fun))
             (lambda-closure 'lambda-closure)
             (t (if (and (symbolp (car fun))
			 (or (special-form-p (car fun))
			     (fboundp (car fun))))
		    (car fun) :zombi)
		    )))
          ((compiled-function-p fun)
           (compiled-function-name fun))
          (t :zombi))))

(defun ihs-not-interpreted-env (ihs-index)
  (let ((fun (ihs-fun ihs-index)))
    (cond ((and (consp fun)
		(> ihs-index 3)
		;(<= (ihs-vs ihs-index) (ihs-vs (- ihs-index 1)))
		)
	   nil)
	  (t t))))

(defun set-env ()
  (setq *break-env*
        (if (ihs-not-interpreted-env *current-ihs*)
            nil
            (let ((i (ihs-vs *current-ihs*)))
              (list (vs i) (vs (1+ i)) (vs (+ i 2)))))))

(defun list-delq (x l)
  (cond ((null l) nil)
        ((eq x (car l)) (cdr l))
        (t (rplacd l (list-delq x (cdr l))))))

(defun super-go (i tag &aux x)
  (when (and (>= i *frs-base*) (<= i *frs-top*) (spicep (frs-tag i)))
    (if (setq x (member (frs-tag i) (vs (+ (frs-vs i) 2))
                        :key #'caddr :test #'eq))
        ; Interpreted TAGBODY.
        (when (and (eq (cadar x) 'tag)
                   (member tag (mapcar #'car (remove (frs-tag i) x
                                                     :test-not #'eq
                                                     :key #'caddr))))
          (internal-super-go (frs-tag i) tag t))
        ; Maybe, compiled cross-closure TAGBODY.
        ; But, it may also be compiled cross-closure BLOCK, in which case
        ; SUPER-GO just RETURN-FROMs with zero values.
        (internal-super-go (frs-tag i) tag nil)))
  (format *debug-io* "~s is invalid tagbody identification for ~s." i tag))

(defun break-backward-search-stack (sym &aux string)
  (setq string (string sym))
  (do* ((ihs (1- *current-ihs*) (1- ihs))
        (fname (ihs-fname ihs) (ihs-fname ihs)))
      ((< ihs *ihs-base*)
       (format *debug-io* "Search for ~a failed.~%" string))
    (when (and (ihs-visible ihs)
               (search string (symbol-name fname) :test #'char-equal))
      (break-go ihs)
      (return))))

(defun break-forward-search-stack (sym &aux string)
  (setq string (string sym))
  (do* ((ihs (1+ *current-ihs*) (1+ ihs))
        (fname (ihs-fname ihs) (ihs-fname ihs)))
      ((> ihs *ihs-top*)
       (format *debug-io* "Search for ~a failed.~%" string))
    (when (and (ihs-visible ihs)
               (search string (symbol-name fname) :test #'char-equal))
      (break-go ihs)
      (return))))


(putprop :b 'simple-backtrace 'break-command)
(putprop :r '(lambda () :resume) 'break-command)
(putprop :resume (get :r 'break-command) 'break-command)
(putprop :bds 'break-bds 'break-command)
(putprop :blocks 'break-blocks 'break-command)
(putprop :bs 'break-backward-search-stack 'break-command)
(putprop :c 'break-current 'break-command)
(putprop :fs 'break-forward-search-stack 'break-command)
(putprop :functions 'break-functions 'break-command)
(putprop :go 'break-go 'break-command)
(putprop :h 'break-help 'break-command)
(putprop :help 'break-help 'break-command)
(putprop :ihs 'ihs-backtrace 'break-command)
(putprop :env '(lambda () (describe-environment *break-env*)) 'break-command)
(putprop :m 'break-message 'break-command)
(putprop :n 'break-next 'break-command)
(putprop :p 'break-previous 'break-command)
(putprop :q 'break-quit 'break-command)
(putprop :s 'break-backward-search-stack 'break-command)
(putprop :vs 'break-vs 'break-command)

(defun break-help ()
  (dolist (v '( "
Break-loop Command Summary ([] indicates optional arg)
--------------------------

:bl [j]     show local variables and their values, or segment of vs if compiled
              in j stack frames starting at the current one.
:bt [n]     BACKTRACE [n steps]
:down [i]   DOWN i frames (one if no i)
:env        describe ENVIRONMENT of this stack frame (for interpreted).
:fr [n]     show frame n
:loc [i]    return i'th local of this frame if its function is compiled (si::loc i)
"
":r          RESUME (return from the current break loop).
:up [i]     UP i frames (one if no i)

Example: print a bactrace of the last 4 frames

>>:bt 4

Note:  (use-fast-links nil) makes all non system function calls
be recorded in the stack.   (use-fast-links t) is the default

Low level commands:
------------------
:p [i]           make current the i'th PREVIOUS frame (in list show by :b)
:n [i]           make current the i'th NEXT frame (in list show by :b)
:go [ihs-index]  make current the frame corresponding ihs-index
"
":m               print the last break message.
:c               show function of the current ihs frame.
:q [i]           quit to top level
:r               resume from this break loop.
:b               full backtrace of all functions and special forms.
:bs [name]       backward search for frame named 'name'
:fs  [name]      search for frame named 'name'
:vs [from] [to]  Show value stack between FROM and TO
:ihs [from] [to] Show Invocation History Stack
"
"
:bds ['v1 'v2 ..]Show previous special bindings of v1, v2,.. or all if no v1

")) (format  *debug-io* v))
  (format *debug-io* "~%Here is a COMPLETE list of bindings.   Too
add a new one, add a 'si::break-command property:")
  (do-symbols (v (find-package "KEYWORD"))
	      (cond ((get v 'si::break-command)
		     (format  *debug-io*
			      "~%~(~a -- ~a~)" v (get v 'si::break-command)))))
	  (values)
	  )


;;make sure '/' terminated

(defun coerce-slash-terminated (v )
  (declare (string v))
  (or (stringp v) (error "not a string ~a" v))
  (let ((n (length v)))
    (declare (fixnum n))
    (unless (and (> n 0) (eql
			  (the character(aref v (the fixnum (- n 1)))) #\/))
	    (setf v (format nil "~a/" v))))
  v)
(defun fix-load-path (l)
  (when (not (equal l *fixed-load-path*))
      (do ((x l (cdr x)) )
	  ((atom x))
	  (setf (car x) (coerce-slash-terminated (car x))))
      (do ((v l (cdr v)))
	  ((atom v))
	  (do ((w v (cdr w)))
	      ((atom (cdr w)))
	      (cond ((equal (cadr w) (car v))
		     (setf (cdr w)(cddr w)))))))
  (setq *fixed-load-path* l))

(defun file-search (NAME &optional (dirs *load-path*)
			  (extensions *load-types*) (fail-p t) &aux  tem)
  "Search for NAMME in DIRS with EXTENSIONS.
First directory is checked for first name and all extensions etc."
  (fix-load-path dirs)
  (dolist (v dirs)
      (dolist (e extensions)
	  (if (probe-file (setq tem (si::string-concatenate v name e)))
	    (return-from file-search tem))))
  (if fail-p
      (let ((*path* nil))
	(declare (special *path*))
	(cerror
	 "Do (setq si::*path* \"pathname\") for path to use then :r to continue"
	 "Lookup failed in directories:~s for name ~s with extensions ~s"
	 dirs name extensions)
	*path*)))

(defun aload (path)
  (load (file-search path *load-path* *load-types*)))

(defun autoload (sym path &aux (si::*ALLOW-GZIPPED-FILE* t))
  (or (fboundp sym)
      (setf (symbol-function sym)
	    #'(lambda (&rest l)
		(aload path)
		(apply sym l)))))

(defun autoload-macro (sym path &aux (si::*ALLOW-GZIPPED-FILE* t))
  (or (fboundp sym)
      (setf (macro-function sym)
	    #'(lambda (form env)
		(aload path)
		(funcall sym form env)))))

(eval-when (compile) (proclaim '(optimize (safety 0))) )
(defvar si::*command-args* nil)
(defun si::get-command-arg (a &optional val-if-there &aux (v *command-args*))
  (declare (string a))
  ;; return non nil if annnnxu is in si::*command-args* and return
  ;; the string which is after it if there is one"
  (loop
    (setq v (cdr v))
    (or v (return nil))
    (let ((str (car v)))
      (declare (string str))
      (if (and (eql  (aref str 0) (aref a 0))
	       (eql  (aref str 1) (aref a 1))
	       (equal str a))
	  (return
	  (cond (val-if-there)
		((cadr v)(values (cadr v) (cdr v)))
		(t t)))))))

; (let ((tem (member a si::*command-args* :test 'equal)))
;    (if tem (or  val-if-there (cadr tem) t))))

(defun set-dir (sym flag)
   (let ((tem (or (si::get-command-arg flag) (and (boundp sym) (symbol-value sym)))))
      (if tem (set sym (si::coerce-slash-terminated tem)))))

(defun set-up-top-level ( &aux (i (si::argc)) tem)
  (declare (fixnum i))
  (loop (setq i (- i 1))
	(cond ((< i 0)(return nil))
	      (t (setq tem (cons (argv i) tem)))))
  (setq *command-args* tem)
  (setq tem *lib-directory*)
  (let ((dir (si::getenv "GCL_LIBDIR")))
    (or (set-dir  'si::*lib-directory* "-libdir")
	(if dir (setq *lib-directory* (coerce-slash-terminated dir))))
    (unless
     (and *load-path* (equal tem *lib-directory*))
     (setq *load-path* (cons (si::string-concatenate *lib-directory*
						     "lsp/") *load-path*))
     (setq *load-path* (cons (si::string-concatenate *lib-directory*
						     "gcl-tk/") *load-path*))
	    )
    (setq si::*system-directory* (namestring
        (truename (make-pathname :name nil :defaults (si::argv 0)))))
    (set-dir  'si::*system-directory* "-dir")
    (if (multiple-value-setq (tem tem) (get-command-arg "-f"))
	(let (*load-verbose*)
	  (si::process-some-args si::*command-args*)
	  (setq si::*command-args* tem)
	  (si::do-f (car si::*command-args*))))
    ))

(defun do-f (file )
  (let ((eof '(nil)) tem
	*break-enable*)
    (catch *quit-tag*
      (with-open-file (st file)
		      (READ-LINE ST)
		      (LOOP
		       (SETQ TEM (READ ST NIL EOF))
		       (COND ((EQ EOF TEM) (return nil)))
		       (EVAL TEM)))
      (bye))
      (bye 1)
      ))
