;;; CMPEVAL  The Expression Dispatcher.
;;;
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




(export '(si::define-compiler-macro
	  si::undef-compiler-macro
          si::define-inline-function) 'system)

(in-package 'compiler)

(si:putprop 'progn 'c1progn 'c1special)
(si:putprop 'progn 'c2progn 'c2)

(si:putprop 'si:structure-ref 'c1structure-ref 'c1)
(si:putprop 'structure-ref 'c2structure-ref 'c2)
(si:putprop 'structure-ref 'wt-structure-ref 'wt-loc)
(si:putprop 'si:structure-set 'c1structure-set 'c1)
(si:putprop 'structure-set 'c2structure-set 'c2)

(defun c1expr* (form info)
  (setq form (c1expr form))
  (add-info info (cadr form))
  form)

(defun c1expr (form)
  (setq form (catch *cmperr-tag*
    (cond ((symbolp form)
           (cond ((eq form nil) (c1nil))
                 ((eq form t) (c1t))
                 ((keywordp form)
                  (list 'LOCATION (make-info :type (object-type form))
                        (list 'VV (add-object form))))
                 ((constantp form)
                  (let ((val (symbol-value form)))
                    (or (c1constant-value val nil)
                        (list 'LOCATION (make-info :type (object-type val))
                              (list 'VV (add-constant form))))))
                 (t (c1var form))))
          ((consp form)
           (let ((fun (car form)))
             (cond ((symbolp fun)
                    (c1symbol-fun fun (cdr form)))
                   ((and (consp fun) (eq (car fun) 'lambda))
                    (c1lambda-fun (cdr fun) (cdr form)))
                   ((and (consp fun) (eq (car fun) 'si:|#,|))
                    (cmperr "Sharp-comma-macro was found in a bad place."))
                   (t (cmperr "The function ~s is illegal." fun)))))
          (t (c1constant-value form t)))))
  (if (eq form '*cmperr-tag*) (c1nil) form))

(si::putprop 'si:|#,| 'c1sharp-comma 'c1special)

(defun c1sharp-comma (arg)
  (c1constant-value (cons 'si:|#,| arg) t))

(si::putprop 'si::define-structure 'c1define-structure 't1)

(defun c1define-structure (arg &aux *sharp-commas*)
  (declare (special *sharp-commas*))
  (eval (cons 'si::define-structure arg))
  (c1constant-value (cons 'si:|#,| (cons 'si::define-structure arg)) t)
  (add-load-time-sharp-comma)
  nil)

(defvar *c1nil* (list 'LOCATION (make-info :type (object-type nil)) nil))
(defun c1nil () *c1nil*)
(defvar *c1t* (list 'LOCATION (make-info :type (object-type t)) t))
(defun c1t () *c1t*)


(defun flags-pos (flag &aux (i 0))
  (declare (fixnum i))
  (dolist
      (v
       '((allocates-new-storage ans); might invoke gbc
	 (side-effect-p set)        ; no effect on arguments
	 (constantp)                ; always returns same result,
	                            ;double eval ok.
	 (result-type-from-args rfa); if passed args of matching
					;type result is of result type
         (is)))                     ;; extends the `integer stack'.
    (cond ((member flag v :test 'eq)
	   (return-from flags-pos i)))
    (setq i (+ i 1)))
  (error "unknown opt flag"))

(defmacro flag-p (n flag)
  `(logbitp ,(flags-pos  flag)  ,n))

;; old style opts had '(args ret new-storage side-effect string)
;; these new-storage and side-effect have been combined into
;; one integer, along with several other flags.

(defun fix-opt (opt)
  (let ((a (cddr opt)))
    (unless (typep (car a ) 'fixnum)
    (if *compiler-in-use*
	(cmpwarn "Obsolete optimization: use fix-opt ~s"  opt))
		     
    (setf (cddr opt)
	  (cons (logior (if (car a) 2 0)
			(if (cadr a) 1 0))
		(cddr a))))
    opt))

;; some hacks for revising a list of optimizers.
#+revise
(progn
(defun output-opt (opt sym flag)
  (fix-opt opt)
  (format t "(push '(~(~s ~s #.(flags~)" (car opt) (second opt))
  (let ((o (third opt)))
    (if (flag-p o set) (princ " set"))
    (if (flag-p o ans) (princ " ans"))
    (if (flag-p o rfa) (princ " rfa"))
    (if (flag-p o constantp) (princ "constantp ")))
  (format t ")")
  (if (and (stringp (nth 3 opt))
	   (> (length (nth 3 opt)) 40))
      (format t "~%  "))
  (prin1 (nth 3 opt))
  (format t ")~%   ~((get '~s '~s)~))~%"  sym flag))

(defun output-all-opts (&aux  lis did)
  (sloop::sloop
   for v in ;(list (find-package "LISP"))
					(list-all-packages)
   do
   (setq lis
	 (sloop::sloop
	  for sym in-package (package-name v)
	  when (or (get sym 'inline-always)
		   (get sym 'inline-safe)
		   (get sym 'inline-unsafe))
	  collect sym))
   (setq lis (sort lis #'(lambda (x y) (string-lessp (symbol-name x)
						      (symbol-name y)))))
   do
   (sloop::sloop for sym in lis do
		 (format t "~%;;~s~% " sym)
       (sloop::sloop for u in '(inline-always inline-safe inline-unsafe)
		     do (sloop::sloop
			 for w in (reverse (remove-duplicates
					    (copy-list (get sym u))
					    :test 'equal))
			 do (output-opt w  sym u))))))

)				      
				

(defun result-type-from-args(f args &aux tem)
  (when (and (setq tem (get f 'return-type))
             (not (eq tem '*))
	     (not (consp tem)))
    (dolist (v '(inline-always inline-unsafe))
      (dolist (w (get f v))
	(fix-opt w)
	(when (and
	       (flag-p (third w) result-type-from-args)
	       (eql (length args) (length (car w)))
	       (do ((a args (cdr a))
		    (b (car w) (cdr b)))
		   ((null a) t)
		 (unless (or  (eq (car a) (car b))
			      (type>= (car b)(car a) ))
			 (return nil))))
	  (return-from result-type-from-args (second w)))))))
		      

;; omitting a flag means it is set to nil.
(defmacro flags (&rest lis &aux (i 0))
  (dolist (v lis)
    (setq i (logior  i (ash 1 (flags-pos v)))))
  i)

;; Usage:
; (flagp-p (caddr ii) side-effect-p)
; (push '((integer integer) integer #.(flags const raf) "addii(#0,#1)")
;         (get '+ 'inline-always))



(defun c1symbol-fun (fname args &aux fd)
  (cond ((setq fd (get fname 'c1special)) (funcall fd args))
	((and (setq fd (get fname 'co1special))
	      (funcall fd fname args)))
        ((setq fd (c1local-fun fname))
         (if (eq (car fd) 'call-local)
             (let* ((info (make-info :sp-change t))
                    (forms (c1args args info)))
                  (let ((return-type (get-local-return-type (caddr fd))))
                       (when return-type (setf (info-type info) return-type)))
                  (let ((arg-types (get-local-arg-types (caddr fd))))
                       ;;; Add type information to the arguments.
                       (when arg-types
                             (let ((fl nil))
                                  (dolist** (form forms)
                                    (cond ((endp arg-types) (push form fl))
                                          (t (push (and-form-type
                                                    (car arg-types) form
                                                    (car args))
                                                   fl)
                                             (pop arg-types)
                                             (pop args))))
                                  (setq forms (reverse fl)))))
                  (list 'call-local info (cddr fd) forms))
             (c1expr (cmp-expand-macro fd fname args))))
	((and (setq fd (get fname 'co1))
	      (inline-possible fname)
	      (funcall fd fname args)))
        ((and (setq fd (get fname 'c1)) (inline-possible fname))
         (funcall fd args))
        ((and (setq fd (get fname 'c1conditional))
              (inline-possible fname)
              (funcall (car fd) args))
         (funcall (cdr fd) args))
	;; record the call info if we get to here
	((progn
	   (and (eq (symbol-package fname) (symbol-package 'and))
		(not (fboundp fname))
		(cmpwarn "~A (in lisp package) is called as a function--not yet defined"
			 fname))
	   (and *record-call-info* (record-call-info 'record-call-info
						   fname))
	   nil))
	;;continue
        ((setq fd (macro-function fname))
         (c1expr (cmp-expand-macro fd fname args)))
        ((setq fd (get fname 'compiler-macro))
         (c1expr (cmp-eval `(funcall ',fd ',(cons fname args) nil))))
        ((and (setq fd (get fname 'si::structure-access))
              (inline-possible fname)
              ;;; Structure hack.
              (consp fd)
              (si:fixnump (cdr fd))
              (not (endp args))
              (endp (cdr args)))
         (case (car fd)
               (vector (c1expr `(elt ,(car args) ,(cdr fd))))
               (list (c1expr `(si:list-nth ,(cdr fd) ,(car args))))
               (t (c1structure-ref1 (car args) (car fd) (cdr fd)))
               )
         )
        ((eq fname 'si:|#,|)
         (cmperr "Sharp-comma-macro was found in a bad place."))
        (t (let* ((info (make-info
                        :sp-change (null (get fname 'no-sp-change))))
                  (forms (c1args args info)))
                (let ((return-type (get-return-type fname)))
		  (when return-type
			(if (equal return-type '(*))
			    (setf return-type nil)
			(setf (info-type info) return-type))))
                (let ((arg-types (get-arg-types fname)))
                     ;;; Add type information to the arguments.
                     (when arg-types
                       (do ((fl forms (cdr fl))
                            (fl1 nil)
                            (al args (cdr al)))
                           ((endp fl)
                            (setq forms (reverse fl1)))
                           (cond ((endp arg-types) (push (car fl) fl1))
                                 (t (push (and-form-type (car arg-types)
                                                         (car fl)
                                                         (car al))
                                          fl1)
                                    (pop arg-types))))))
                (let ((arg-types (get fname 'arg-types)))
                     ;;; Check argument types.
                     (when arg-types
                           (do ((fl forms (cdr fl))
                                (al args (cdr al)))
                               ((or (endp arg-types) (endp fl)))
                               (check-form-type (car arg-types)
                                                (car fl) (car al))
                               (pop arg-types))))
                (case fname
                      (aref
                       (let ((etype (info-type (cadar forms))))
                            (when (or (and (eq etype 'string)
                                           (setq etype 'character))
                                      (and (consp etype)
                                           (or (eq (car etype) 'array)
                                               (eq (car etype) 'vector))
                                           (setq etype (cadr etype))))
                                  (setq etype
                                        (type-and (info-type info) etype))
                                  (when (null etype)
                                        (cmpwarn
                                         "Type mismatch was found in ~s."
                                         (cons fname args)))
                                  (setf (info-type info) etype))))
                      (si:aset
                       (let ((etype (info-type (cadar forms))))
                            (when (or (and (eq etype 'string)
                                           (setq etype 'character))
                                      (and (consp etype)
                                           (or (eq (car etype) 'array)
                                               (eq (car etype) 'vector))
                                           (setq etype (cadr etype))))
                                  (setq etype
                                        (type-and (info-type info)
                                          (type-and (info-type
                                                     (cadar (last forms)))
                                                    etype)))
                                  (when (null etype)
                                        (cmpwarn
                                         "Type mismatch was found in ~s."
                                         (cons fname args)))
                                  (setf (info-type info) etype)
                                  (setf (info-type (cadar (last forms)))
                                        etype)
                                  ))))
		;; some functions can have result type deduced from
		;; arg types.
		
		(let ((tem (result-type-from-args fname
						  (mapcar #'(lambda (x) (info-type (cadr x)))
							  forms))))
			  (when tem
			    (setq tem (type-and tem (info-type info)))
			    (setf (info-type info) tem)))
		(list 'call-global info fname forms)))
        )
  )

;;numbers and character constants may be sometimes used, instead
;;of the variable, eg inside eql

(defun replace-constant (lis &aux found tem)
  (do ((v lis (cdr v)))
      ((null v)  found)
      (cond ((and (constantp (car v))
		  (or (numberp (setq tem(eval (car v))))
		      (characterp tem)))
	     (setq found t) (setf (car v) tem)))))



(defun c1lambda-fun (lambda-expr args &aux (info (make-info :sp-change t)))
  (setq args (c1args args info))
  (setq lambda-expr (c1lambda-expr lambda-expr))
  (add-info info (cadr lambda-expr))
  (list 'call-lambda info lambda-expr args)
  )

(defun c2expr (form)
  (if (eq (car form) 'call-global)
      (c2call-global (caddr form) (cadddr form) nil  (info-type (cadr form)))
      (if (or (eq (car form) 'let)
                 (eq (car form) 'let*))
             (let ((*volatile* (volatile (cadr form))))
                   (declare (special *volatile*))
                   (apply (get (car form) 'c2) (cddr form)))
	(let ((tem (get (car form) 'c2)))
	  (cond (tem (apply tem (cddr form)))
		((setq tem (get (car form) 'wholec2))
		 (funcall tem form))
		(t (baboon)))))))

(defun c2funcall-sfun (fn args info &aux  locs (all (cons fn args))) info
  (let ((*inline-blocks* 0))
    (setq locs (get-inline-loc
		(list (make-list (length all) :initial-element t)
		      t #.(flags ans set) 'fcalln-inline) all))
    (unwind-exit locs)
    (close-inline-blocks)))

(defun c2expr* (form)
  (let* ((*exit* (next-label))
         (*unwind-exit* (cons *exit* *unwind-exit*)))
        (c2expr form)
        (wt-label *exit*))
  )

(defun c2expr-top (form top &aux (*vs* 0) (*max-vs* 0) (*level* (1+ *level*))
                                 (*reservation-cmacro* (next-cmacro)))
  (wt-nl "{register object *base" (1- *level*) "=base;")
  (base-used)
  (wt-nl "{register object *base=V" top ";")
  (wt-nl "register object *sup=vs_base+VM" *reservation-cmacro* ";")
  ;;; Dummy assignments for lint
  (wt-nl "base" (1- *level*) "[0]=base" (1- *level*) "[0];")
  (wt-nl "base[0]=base[0];")
  (if *safe-compile*
      (wt-nl "vs_reserve(VM" *reservation-cmacro* ");")
      (wt-nl "vs_check;"))
  (wt-nl) (reset-top)
  (c2expr form)
  (push (cons *reservation-cmacro* *max-vs*) *reservations*)
  (wt-nl "}}")
  )

(defun c2expr-top* (form top)
  (let* ((*exit* (next-label))
         (*unwind-exit* (cons *exit* *unwind-exit*)))
        (c2expr-top form top)
        (wt-label *exit*)))

(defun c1progn (forms &aux (fl nil))
  (cond ((endp forms) (c1nil))
        ((endp (cdr forms)) (c1expr (car forms)))
        (t (let ((info (make-info)))
                (dolist (form forms)
                        (setq form (c1expr form))
                        (push form fl)
                        (add-info info (cadr form)))
                (setf (info-type info) (info-type (cadar fl)))
                (list 'progn info (reverse fl))
                )))
  )

;;; Should be deleted.
(defun c1progn* (forms info)
  (setq forms (c1progn forms))
  (add-info info (cadr forms))
  forms)

(defun c2progn (forms)
  ;;; The length of forms may not be less than 1.
  (do ((l forms (cdr l)))
      ((endp (cdr l))
       (c2expr (car l)))
      (declare (object l))
      (let* ((*value-to-go* 'trash)
             (*exit* (next-label))
             (*unwind-exit* (cons *exit* *unwind-exit*)))
            (c2expr (car l))
            (wt-label *exit*)
            ))
  )

(defun c1args (forms info)
  (mapcar #'(lambda (form) (c1expr* form info)) forms))

;;; Structures

(defun c1structure-ref (args)
  (if (and (not *safe-compile*)
	   (not (endp args))
           (not (endp (cdr args)))
           (consp (cadr args))
           (eq (caadr args) 'quote)
           (not (endp (cdadr args)))
           (symbolp (cadadr args))
           (endp (cddadr args))
           (not (endp (cddr args)))
           (si:fixnump (caddr args))
           (endp (cdddr args)))
      (c1structure-ref1 (car args)  (cadadr args) (caddr args))
      (let ((info (make-info)))
        (list 'call-global info 'si:structure-ref (c1args args info)))))

(defun c1structure-ref1 (form name index &aux (info (make-info)))
  ;;; Explicitly called from c1expr and c1structure-ref.
  (declare (special  *aet-types*))
  (cond (*safe-compile* (c1expr `(si::structure-ref ,form ',name ,index)))
	(t
  (let* ((sd (get name 'si::s-data))
	 (aet-type (aref (si::s-data-raw sd) index))
	 )
    (setf (info-type info) (type-filter (aref *aet-types* aet-type)))
    (list 'structure-ref info
	  (c1expr* form info)
	  (add-symbol name)
	  index sd)
    
    ))))

(defun coerce-loc-structure-ref (arg type-wanted &aux (form (cdr arg)))
  (let* ((sd (fourth form))
	 (index (caddr form)))
    (cond (sd
	    (let* ((aet-type (aref (si::s-data-raw sd) index))
		   (type (aref *aet-types* aet-type)))
	      (cond ((eq (inline-type (type-filter type)) 'inline)
		     (or (eql aet-type 0) (error "bad type ~a" type))))
	      (setf (info-type (car arg)) (type-filter type))
	      (coerce-loc
		      (list (inline-type
			     (type-filter type))
		           (flags)
			    'my-call
			    (list
			     (car
			      (inline-args (list (car form))
					   '(t)))
			     'joe index sd))
		      (type-filter type-wanted)))
		)
	  (t (wfs-error)))))


(defun c2structure-ref (form name-vv index sd
                             &aux (*vs* *vs*) (*inline-blocks* 0))
  (let ((loc (car (inline-args (list form) '(t))))
	(type (aref *aet-types* (aref (si::s-data-raw sd) index))))
       (unwind-exit
	 (list (inline-type (type-filter type))
			  (flags) 'my-call
			  (list  loc  name-vv
				 index sd))))
  (close-inline-blocks)
  )


(defun my-call (loc name-vv ind sd) name-vv
  (let* ((raw (si::s-data-raw sd))
	 (spos (si::s-data-slot-position sd)))
    (if *safe-compile* (wfs-error)
      (wt "STREF("  (aet-c-type (aref *aet-types* (aref raw ind)) )
	  "," loc "," (aref spos ind) ")"))))


(defun c1structure-set (args &aux (info (make-info)))
  (if (and (not (endp args)) (not *safe-compile*)
           (not (endp (cdr args)))
           (consp (cadr args))
           (eq (caadr args) 'quote)
           (not (endp (cdadr args)))
           (symbolp (cadadr args))
           (endp (cddadr args))
           (not (endp (cddr args)))
           (si:fixnump (caddr args))
           (not (endp (cdddr args)))
           (endp (cddddr args)))
      (let ((x (c1expr (car args)))
            (y (c1expr (cadddr args))))
        (add-info info (cadr x))
        (add-info info (cadr y))
        (setf (info-type info) (info-type (cadr y)))
        (list 'structure-set info x
              (add-symbol (cadadr args)) ;;; remove QUOTE.
              (caddr args) y (get (cadadr args) 'si::s-data)))
      (list 'call-global info 'si:structure-set (c1args args info))))


;; The following (side-effects) exists for putting at the end of an
;; argument list to force all previous arguments to be stored in
;; variables, when computing inline-args.


(push '(() t #.(flags ans set) "Ct")  (get 'side-effects  'inline-always))

(defun c2structure-set (x name-vv ind y sd 
                          &aux locs (*vs* *vs*) (*inline-blocks* 0))
  name-vv
  (let* ((raw (si::s-data-raw sd))
  (type (aref *aet-types* (aref raw ind)))
  (spos (si::s-data-slot-position sd))
  (tftype (type-filter type))
  ix iy)

   (setq locs (inline-args
        (list x y (list 'call-global (make-info) 'side-effects nil))
        (if (eq type t) '(t t t)
   `(t ,tftype t))))
  
  (setq ix (car locs))
  (setq iy (cadr locs))
  (if *safe-compile* (wfs-error))
  (wt-nl "STSET(" (aet-c-type type )","
    ix "," (aref spos ind) ", " iy ");")
  (unwind-exit (list (inline-type tftype) (flags) 'wt-loc (list iy)))
  (close-inline-blocks)
  ))

(defun c1constant-value (val always-p)
  (cond
   ((eq val nil) (c1nil))
   ((eq val t) (c1t))
   ((si:fixnump val)
    (list 'LOCATION (make-info :type 'fixnum)
          (list 'FIXNUM-VALUE (and (>= (abs val) 1024)(add-object val))
		val)))
   ((characterp val)
    (list 'LOCATION (make-info :type 'character)
          (list 'CHARACTER-VALUE (add-object val) (char-code val))))
   ((typep val 'long-float)
    ;; We can't read in long-floats which are too big:
    (let (tem x)
      (unless (setq tem (cadr (assoc val *objects*)))
         (cond((or
		 (and
		   (> (setq x (abs val)) (/ most-positive-long-float 2))
		   (c1expr `(si::|#,| * ,(/ val most-positive-long-float)
				 most-positive-long-float)))
		 (and
		   (< x (* least-positive-long-float 1.0d20))
		   (c1expr `(si::|#,| * ,(/ val least-positive-long-float)
				 least-positive-long-float))))
	       (push (list val (setq tem *next-vv*)) *objects*))))
      (list 'LOCATION (make-info :type 'long-float)
	    (list 'LONG-FLOAT-VALUE (or tem (add-object val)) val))))
   ((typep val 'short-float)
    (list 'LOCATION (make-info :type 'short-float)
          (list 'SHORT-FLOAT-VALUE (add-object val) val)))
   (always-p
    (list 'LOCATION (make-info :type (object-type val))
          (list 'VV (add-object val))))
   (t nil)))

(defmacro si::define-compiler-macro (name vl &rest body)
  `(progn (si:putprop ',name
                      (caddr (si:defmacro* ',name ',vl ',body))
                      'compiler-macro)
          ',name))  

(defun si::undef-compiler-macro (name)
  (remprop name 'compiler-macro))

(defvar *compiler-temps*
        '(tmp0 tmp1 tmp2 tmp3 tmp4 tmp5 tmp6 tmp7 tmp8 tmp9))

(defmacro si:define-inline-function (name vars &body body)
  (let ((temps nil)
        (*compiler-temps* *compiler-temps*))
    (dolist (var vars)
      (if (and (symbolp var)
               (not (si:memq var '(&optional &rest &key &aux))))
          (push (or (pop *compiler-temps*)
                    (gentemp "TMP" (find-package 'compiler)))
                temps)
          (error "The parameter ~s for the inline function ~s is illegal."
                 var name)))
    (let ((binding (cons 'list (mapcar
                                #'(lambda (var temp) `(list ',var ,temp))
                                vars temps))))
      `(progn
         (defun ,name ,vars ,@body)
         (si:define-compiler-macro ,name ,temps
           (list* 'let ,binding ',body))))))

(defun name-to-sd (x &aux sd)
  (or (and (symbolp x) (setq sd (get x 'si::s-data)))
      (error "The structure ~a is undefined." x))
  sd)

;; lay down code for a load time eval constant.
(defun name-sd1 (x)
  (or  (get x 'name-to-sd)
      (setf (get x 'name-sd)
	    `(si::|#,| name-to-sd ',x))))

(defun co1structure-predicate (f args &aux tem)
  (cond ((and (symbolp f)
	      (setq tem (get f 'si::struct-predicate)))
	 (c1expr `(typep ,(car args) ',tem)))))


