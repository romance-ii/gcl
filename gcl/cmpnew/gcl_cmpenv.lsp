;;; CMPENV  Environments of the Compiler.
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


(in-package 'compiler)

(defvar *safe-compile* nil)
(defvar *compiler-check-args* nil)
(defvar *compiler-push-events* nil)
(defvar *speed* 3)
(defvar *space* 0)

;;; Only these flags are set by the user.
;;; If *safe-compile* is ON, some kind of run-time checks are not
;;; included in the compiled code.  The default value is OFF.



(defun init-env ()
  (setq *next-cvar* 0)
  (setq *next-cmacro* 0)
  (setq *next-vv* -1)
  (setq *next-cfun* 0)
  (setq *last-label* 0)
  (setq *objects* nil)
  (setq *constants* nil)
  (setq *local-funs* nil)
  (setq *global-funs* nil)
  (setq *global-entries* nil)
  (setq *undefined-vars* nil)
  (setq *reservations* nil)
  (setq *closures* nil)
  (setq *top-level-forms* nil)
  (setq *non-package-operation* nil)
  (setq *function-declarations* nil)
  (setq *inline-functions* nil)
  (setq *inline-blocks* 0)
  (setq *notinline* nil)
  )

(defvar *next-cvar* 0)
(defvar *next-cmacro* 0)
(defvar *next-vv* -1)
(defvar *next-cfun* 0)

;;; *next-cvar* holds the last cvar number used.
;;; *next-cmacro* holds the last cmacro number used.
;;; *next-vv* holds the last VV index used.
;;; *next-cfun* holds the last cfun used.

(defmacro next-cfun () '(incf *next-cfun*))

(defun add-symbol (symbol)
  (let ((x (assoc symbol *objects*)))
       (cond (x (cadr x))
             (t (push-data-incf symbol)
                (push (list symbol *next-vv*) *objects*)
		*next-vv*))))

;; Write to a string with all the *print-.. levels bound appropriately.
(defun wt-to-string (x &aux
		       (*compiler-output-data* (make-string-output-stream))
		       *fasd-data*)
  (wt-data1 x)
  (get-output-stream-string *compiler-output-data*))

(defun add-object (object &aux x)
  ;;; Used only during Pass 1.
  (cond ((si:contains-sharp-comma object)
         ;;; SI:CONTAINS-SHARP-COMMA returns T iff OBJECT
         ;;; contains a sharp comma OR a structure.
	 ;; there will be an eval and we want the eval to happen
	 (cond ((and
		 (consp object)
		 (eq (car object) 'si::|#,|)
		 (not (si:contains-sharp-comma (cdr object))))
		(setq object (cdr object)))
	       (t (setq object `(si::string-to-object
				 ,(wt-to-string object)))))
	 (push-data-incf nil)
         (push (list *next-vv* object) *sharp-commas*)
         *next-vv*)
        ((setq x (assoc object *objects*))
         (cadr x))
	((typep object 'compiled-function)
	 (push-data-incf nil)
         (push (list *next-vv* `(function 
				 ,(or (si::compiled-function-name
				       object)
				      (cmperr "Can't dump un named compiled funs")
				      )))
				 *sharp-commas*)
         *next-vv*
	 )
        (t 
	   (push-data-incf object)
           (push (list object *next-vv*) *objects*)
           *next-vv*)))

(defun add-constant (symbol &aux x)
  ;;; Used only during Pass 1.
  (cond ((setq x (assoc symbol *constants*))
         (cadr x))
        (t (push-data-incf nil)
           (push (list *next-vv* symbol) *sharp-commas*)
           (push (list symbol *next-vv*) *constants*)
           *next-vv*)))

(defmacro next-cvar () '(incf *next-cvar*))
(defmacro next-cmacro () '(incf *next-cmacro*))

;;; Tail recursion information.
(defvar *do-tail-recursion* t)
(defvar *tail-recursion-info* nil)
;;; Tail recursion optimization never occurs if *do-tail-recursion* is NIL.
;;; *tail-recursion-info* holds NIL, if tail recursion is impossible.
;;; If possible, *tail-recursion-info* holds
;;;	( fname  required-arg .... required-arg ),
;;; where each required-arg is a var-object.


(defvar *function-declarations* nil)
;;; *function-declarations* holds :
;;;	(... ( { function-name | fun-object } arg-types return-type ) ...)
;;; Function declarations for global functions are ASSOCed by function names,
;;; whereas those for local functions are ASSOCed by function objects.
;;;
;;; The valid argment type declaration is:
;;;	( {type}* [ &optional {type}* ] [ &rest type ] [ &key {type}* ] )
;;; though &optional, &rest, and &key return types are simply ignored.

(defun function-arg-types (arg-types &aux vararg (types nil) result)
  (setq result
	(do ((al arg-types (cdr al))
	     (i 0 (the fixnum (+ 1 i))))
	    ((endp al)
	     (reverse types))
	    (declare (fixnum i))
	    (cond ((or (member (car al) '(&optional &rest &key))
		       (equal (car al) '* ))
		   (setq vararg t)
		   (return (reverse (cons '* types)))))
	    ;; only the first 9 args may have proclaimed type different from T
	    (push       (cond 
			       ((< i 9)
				(let ((tem
				       (type-filter (car al))))
				  (if (eq 'integer tem) t tem)))
			      (t (if (eq (car al) '*) '* t)))
			types)))
  ;;only type t args for var arg so far.
  (cond (vararg (do ((v result (cdr v)))
		    ((null v))
		    (setf (car v) (if (eq (car v) '*) '* t)))))
		    
  result)


;;; The valid return type declaration is:
;;;	(( VALUES {type}* )) or ( {type}* ).

(defun function-return-type (return-types)
  (and (eq (car return-types) 'values)
       (setq return-types (cdr return-types)))
  (cond ((endp return-types) nil)
        ((and (consp (car return-types))
              (eq (caar return-types) 'values))
	 (function-return-type (cdr (car return-types))))
	(t (do ((v return-types (cdr v))
		(result))
	       ((endp v)(or (null v)
			    (warn "The function return type ~s is illegal."
				  return-types))
		(nreverse result))
	     (let ((tem  (if (eq (car v) '*) '* (type-filter (car v)))))
	       (if (eq tem 'integer) (setq tem t))
	       (push  tem result))))))
		
(defun add-function-proclamation (fname decl list &aux (procl t)
					arg-types return-types)
  (cond
    ((and (symbolp fname)
	  (listp decl) (listp (cdr decl)))
     (cond ((or (null decl)(eq (car decl) '*)) (setq arg-types '(*)))
	   (t (setq arg-types (function-arg-types (car decl)))

	      ))
     (setq return-types (function-return-type (cdr decl)))
     (cond ((and (consp return-types)  ; ie not nil
		 (endp (cdr return-types))
		 (not (eq (car return-types) '*)))
	    (setq return-types
		  ;; varargs must return type t currently.
		  (if (member '* (and (consp arg-types) arg-types)) t
		      (car return-types))))
	   (t (setq procl nil)))
     (cond ((and (listp arg-types)
		 (< (length arg-types) call-arguments-limit)))
	   (t (setq procl nil)))
     (do ((fname fname (car list)))
	 (())
	 (or (symbolp fname)
	     (return (add-function-proclamation fname decl nil)))
	 (if (eq arg-types '*)
	     (remprop fname  'proclaimed-arg-types)
	   (si:putprop fname  arg-types  'proclaimed-arg-types))
	 (si:putprop fname return-types  'proclaimed-return-type)
     
	 ;;; A non-local function may have local entry only if it returns
	 ;;; a single value.

	 (if procl  (si:putprop fname t 'proclaimed-function)
	   (remprop fname 'proclaimed-function))
	 (setq list (cdr list))
	 (or (consp list) (return 'done))
	 ))
    (t (warn "The function procl ~s ~s is not valid." fname decl))))

(defun add-function-declaration (fname arg-types return-types)
  (cond ((symbolp fname)
         (push (list (sch-local-fun fname)
                     (function-arg-types arg-types)
                     (function-return-type return-types))
               *function-declarations*))
        (t (warn "The function name ~s is not a symbol." fname))))

(defun get-arg-types (fname &aux x)
  (if (setq x (assoc fname *function-declarations*))
      (cadr x)
      (get fname 'proclaimed-arg-types)))

(defun get-return-type (fname)
  (let* ((x (assoc fname *function-declarations*))
         (type1 (if x (caddr x) (get fname 'proclaimed-return-type)))
	 (type (if (get fname 'predicate) 'boolean
		 (get fname 'return-type))))
        (cond (type1
	       (cond (type
		      (cond ((setq type (type-and type type1)) type)
			    (t
			     (cmpwarn
			      "The return type of ~s was badly declared."
			      fname))))
		     (t type1)))
              (t type))))

(defun get-local-arg-types (fun &aux x)
  (if (setq x (assoc fun *function-declarations*))
      (cadr x)
      nil))

(defun get-local-return-type (fun &aux x)
  (if (setq x (assoc fun *function-declarations*))
      (caddr x)
      nil))

(defvar *sup-used* nil)
(defvar *base-used* nil)

(defun reset-top ()
       (wt "vs_top=sup;")
       (setq *sup-used* t))

(defmacro base-used () '(setq *base-used* t))

;;; Proclamation and declaration handling.

(defvar *alien-declarations* nil)
(defvar *notinline* nil)

(defun inline-possible (fname)
       (not (or *compiler-push-events*
                (member fname *notinline*)
                (get fname 'cmp-notinline))))

(defun proclaim (decl)
  (case (car decl)
    (special
     (dolist** (var (cdr decl))
       (if (symbolp var)
           (si:*make-special var)
           (warn "The variable name ~s is not a symbol." var))))
    (optimize
     (dolist (x (cdr decl))
       (when (symbolp x) (setq x (list x 3)))
       (if (or (not (consp x))
               (not (consp (cdr x)))
               (not (numberp (cadr x)))
               (not (<= 0 (cadr x) 3)))
           (warn "The OPTIMIZE proclamation ~s is illegal." x)
           (case (car x)
                 (safety (setq *compiler-check-args* (>= (cadr x) 1))
                         (setq *safe-compile* (>= (cadr x) 2))
                         (setq *compiler-push-events* (>= (cadr x) 3)))
                 (space (setq *space* (cadr x)))
                 (speed (setq *speed* (cadr x)))
                 (compilation-speed (setq *speed* (- 3 (cadr x))))
                 (t (warn "The OPTIMIZE quality ~s is unknown." (car x)))))))
    (type
     (if (consp (cdr decl))
         (proclaim-var (cadr decl) (cddr decl))
         (warn "The type declaration ~s is illegal." decl)))
    ((fixnum character short-float long-float)
     (proclaim-var (car decl) (cdr decl)))
    (ftype
      (cond ((and (consp (cdr decl))
		  (consp (cadr decl))
		  (eq (caadr decl) 'function))
	     (add-function-proclamation (caddr decl) (cdr (cadr decl))
					(cddr decl)))
	  (t (cmpwarn "Bad function proclamation ~a" decl))))
   (function
    (cond ((and (consp (cdr decl)))
		(add-function-proclamation (cadr decl) (cddr decl) nil))
	  (t (cmpwarn "Bad function proclamation ~a" decl))))
    (inline
     (dolist** (fun (cdr decl))
               (if (symbolp fun)
                   (remprop fun 'cmp-notinline)
                   (warn "The function name ~s is not a symbol." fun))))
    (notinline
     (dolist** (fun (cdr decl))
               (if (symbolp fun)
                   (si:putprop fun t 'cmp-notinline)
                   (warn "The function name ~s is not a symbol." fun))))
    ((object ignore)
     (dolist** (var (cdr decl))
       (unless (symbolp var)
               (warn "The variable name ~s is not a symbol." var))))
    (declaration
     (dolist** (x (cdr decl))
       (if (symbolp x)
           (unless (member x *alien-declarations*)
                   (push x *alien-declarations*))
           (warn "The declaration specifier ~s is not a symbol." x))))
    ((array atom bignum bit bit-vector character common compiled-function
      complex cons double-float fixnum float hash-table integer keyword list
      long-float nil null number package pathname random-state ratio rational
      readtable sequence short-float simple-array simple-bit-vector
      simple-string simple-vector single-float standard-char stream string
      string-char symbol t vector signed-byte unsigned-byte)
     (proclaim-var (car decl) (cdr decl)))
    (otherwise
     (unless (member (car decl) *alien-declarations*)
             (warn "The declaration specifier ~s is unknown." (car decl)))
   (and (functionp (get (car decl) :proclaim))
        (dolist** (v (cdr decl))
          (funcall (get (car decl) :proclaim) v)))
)
    )
  nil
  )

(defun proclaim-var (type vl)
  (setq type (type-filter type))
  (dolist** (var vl)
    (cond ((symbolp var)
           (let ((type1 (get var 'cmp-type))
                 (v (sch-global var)))
                (setq type1 (if type1 (type-and type1 type) type))
                (when v (setq type1 (type-and type1 (var-type v))))
                (when (null type1) (warn
      "Inconsistent type declaration was found for the variable ~s."
                                    var))
                (si:putprop var type1 'cmp-type)
                (when v (setf (var-type v) type1))))
          (t
           (warn "The variable name ~s is not a symbol." var)))))

(defun c1body (body doc-p &aux (ss nil) (is nil) (ts nil) (others nil)
                    doc form)
  (loop
    (when (endp body) (return))
    (setq form (cmp-macroexpand (car body)))
    (cond
     ((stringp form)
      (when (or (null doc-p) (endp (cdr body)) doc) (return))
      (setq doc form))
     ((and (consp form) (eq (car form) 'declare))
      (dolist** (decl (cdr form))
        (cmpck (or (not (consp decl)) (not (symbolp (car decl))))
               "The declaration ~s is illegal." decl)
        (case (car decl)
          (special
           (dolist** (var (cdr decl))
             (cmpck (not (symbolp var))
                    "The special declaration ~s contains a non-symbol ~s."
                    decl var)
             (push var ss)))
          (ignore
           (dolist** (var (cdr decl))
             (cmpck (not (symbolp var))
                    "The ignore declaration ~s contains a non-symbol ~s."
                    decl var)
             (push var is)))
          (type
           (cmpck (endp (cdr decl))
                  "The type declaration ~s is illegal." decl)
           (let ((type (type-filter (cadr decl))))
                (when type
                      (dolist** (var (cddr decl))
                        (cmpck (not (symbolp var))
                          "The type declaration ~s contains a non-symbol ~s."
                          decl var)
                        (push (cons var type) ts)))))
          (object
           (dolist** (var (cdr decl))
             (cmpck (not (symbolp var))
                    "The object declaration ~s contains a non-symbol ~s."
                    decl var)
             (push (cons var 'object) ts)))
	  (:register
           (dolist** (var (cdr decl))
             (cmpck (not (symbolp var))
                    "The register declaration ~s contains a non-symbol ~s."
                    decl var)
	     (push (cons var  'register) ts)
	     ))
          ((fixnum character double-float short-float array atom bignum bit
            bit-vector common compiled-function complex cons float hash-table
            integer keyword list long-float nil null number package pathname
            random-state ratio rational readtable sequence simple-array
            simple-bit-vector simple-string simple-vector single-float
            standard-char stream string string-char symbol t vector
            signed-byte unsigned-byte :dynamic-extent)
           (let ((type (if (eq (car decl) ':dynamic-extent) (car decl)
			 (type-filter (car decl)))))
                (when type
                      (dolist** (var (cdr decl))
                        (cmpck (not (symbolp var))
                          "The type declaration ~s contains a non-symbol ~s."
                          decl var)
                        (push (cons var type) ts)))))
          (otherwise (push decl others))
          )))
     (t (return)))
    (pop body)
    )
  (values body ss ts is others doc)
  )

(defun c1decl-body (decls body &aux (dl nil))
  (if (null decls)
      (c1progn body)
      (let ((*function-declarations* *function-declarations*)
            (*alien-declarations* *alien-declarations*)
            (*notinline* *notinline*)
            (*space* *space*)
	    (*safe-compile* *safe-compile*))
           (dolist** (decl decls dl)
             (case (car decl)
              (optimize
               (dolist (x (cdr decl))
                 (when (symbolp x) (setq x (list x 3)))
                 (if (or (not (consp x))
                         (not (consp (cdr x)))
                         (not (numberp (cadr x)))
                         (not (<= 0 (cadr x) 3)))
                     (warn "The OPTIMIZE proclamation ~s is illegal." x)
                     (case (car x)
                           (safety
			     (setq *safe-compile*
				   (>= (the fixnum (cadr x)) 2))
			     (push (list 'safety (cadr x)) dl))
                           (space (setq *space* (cadr x))
                                  (push (list 'space (cadr x)) dl))
                           ((speed compilation-speed))
                           (t (warn "The OPTIMIZE quality ~s is unknown."
                                    (car x)))))))
              (ftype
               (if (or (endp (cdr decl))
                       (not (consp (cadr decl)))
                       (not (eq (caadr decl) 'function))
                       (endp (cdadr decl)))
                   (warn "The function declaration ~s is illegal." decl)
                   (dolist** (fname (cddr decl))
                     (add-function-declaration
                      fname (cadadr decl) (cddadr decl)))))
              (function
               (if (or (endp (cdr decl))
                       (endp (cddr decl))
                       (not (symbolp (cadr decl))))
                   (warn "The function declaration ~s is illegal." decl)
                   (add-function-declaration
                    (cadr decl) (caddr decl) (cdddr decl))))
              (inline
               (dolist** (fun (cdr decl))
                 (if (symbolp fun)
                     (progn (push (list 'inline fun) dl)
                            (setq *notinline* (remove fun *notinline*)))
                     (warn "The function name ~s is not a symbol." fun))))
              (notinline
               (dolist** (fun (cdr decl))
                 (if (symbolp fun)
                     (progn (push (list 'notinline fun) dl)
                            (push fun *notinline*))
                     (warn "The function name ~s is not a symbol." fun))))
              (declaration
               (dolist** (x (cdr decl))
                 (if (symbolp x)
                     (unless (member x *alien-declarations*)
                             (push x *alien-declarations*))
                     (warn "The declaration specifier ~s is not a symbol."
                           x))))
              (otherwise
               (unless (member (car decl) *alien-declarations*)
                 (warn "The declaration specifier ~s is unknown."
                       (car decl))))
              ))
           (setq body (c1progn body))
           (list 'decl-body (cadr body) dl body)
           )
      )
  )

(si:putprop 'decl-body 'c2decl-body 'c2)

(defun c2decl-body (decls body)
  (let ((*compiler-check-args* *compiler-check-args*)
        (*safe-compile* *safe-compile*)
        (*compiler-push-events* *compiler-push-events*)
        (*notinline* *notinline*)
        (*space* *space*)
	)
       (dolist** (decl decls)
         (case (car decl)
               (safety
                (let ((level (cadr decl)))
                     (declare (fixnum level))
                     (setq *compiler-check-args* (>= level 1)
                           *safe-compile* (>= level 2)
                           *compiler-push-events* (>= level 3))))
               (space (setq *space* (cadr decl)))
               (notinline (push (cadr decl) *notinline*))
               (inline
                (setq *notinline* (remove (cadr decl) *notinline*)))
               (otherwise (baboon))))
       (c2expr body))
  )

(defun check-vdecl (vnames ts is)
  (dolist** (x ts)
    (unless (member (car x) vnames)
      (cmpwarn "Type declaration was found for not bound variable ~s."
               (car x))))
  (dolist** (x is)
    (unless (member x vnames)
      (cmpwarn "Ignore declaration was found for not bound variable ~s." x)))
  )

(defun proclamation (decl)
  (case (car decl)
    (special
     (dolist** (var (cdr decl) t)
       (if (symbolp var)
           (unless (si:specialp var) (return nil))
           (warn "The variable name ~s is not a symbol." var))))
    (optimize
     (dolist (x (cdr decl) t)
       (when (symbolp x) (setq x (list x 3)))
       (if (or (not (consp x))
               (not (consp (cdr x)))
               (not (numberp (cadr x)))
               (not (<= 0 (cadr x) 3)))
           (warn "The OPTIMIZE proclamation ~s is illegal." x)
           (case (car x)
                 (safety
                  (unless (= (cadr x)
                             (cond ((null *compiler-check-args*) 0)
                                   ((null *safe-compile*) 1)
                                   ((null *compiler-push-events*) 2)
                                   (t 3)))
                          (return nil)))
                 (space (unless (= (cadr x) *space*) (return nil)))
                 (speed (unless (= (cadr x) *speed*) (return nil)))
                 (compilation-speed
                  (unless (= (- 3 (cadr x)) *speed*) (return nil)))
                 (t (warn "The OPTIMIZE quality ~s is unknown."
                          (car x)))))))
    (type
     (if (consp (cdr decl))
         (let ((type (type-filter (cadr decl)))
               x)
              (dolist** (var (cddr decl) t)
                (if (symbolp var)
                    (unless (and (setq x (get var 'cmp-type))
                                 (equal x type))
                            (return nil))
                    (warn "The variable name ~s is not a symbol." var))))
         (warn "The type declaration ~s is illegal." decl)))
    ((fixnum character short-float long-float)
     (let ((type (type-filter (car decl)))
           x)
          (dolist** (var (cdr decl) t)
            (if (symbolp var)
                (unless (and (setq x (get var 'cmp-type)) (equal x type))
                        (return nil))
                (warn "The variable name ~s is not a symbol." var)))))
    (ftype
     (if (or (endp (cdr decl))
             (not (consp (cadr decl)))
             (not (eq (caadr decl) 'function))
             (endp (cdadr decl)))
         (warn "The function declaration ~s is illegal." decl)
         (dolist** (fname (cddr decl) t)
           (unless (and (get fname 'proclaimed-function)
                        (equal (function-arg-types (cadadr decl))
                               (get fname 'proclaimed-arg-types))
                        (equal (function-return-type (cddadr decl))
                               (get fname 'proclaimed-return-type)))
                   (return nil)))))
    (function
     (if (or (endp (cdr decl)) (endp (cddr decl)))
         (warn "The function declaration ~s is illegal." decl)
         (and (get (cadr decl) 'proclaimed-function)
              (equal (function-arg-types (caddr decl))
                     (get (cadr decl) 'proclaimed-arg-types))
              (equal (function-return-type (cdddr decl))
                     (get (cadr decl) 'proclaimed-return-type)))))
    (inline (dolist** (fun (cdr decl) t)
              (if (symbolp fun)
                  (when (get fun 'cmp-notinline) (return nil))
                  (warn "The function name ~s is not a symbol." fun))))
    (notinline (dolist** (fun (cdr decl) t)
                 (if (symbolp fun)
                     (unless (get fun 'cmp-notinline) (return nil))
                     (warn "The function name ~s is not a symbol." fun))))
    ((object ignore)
     (dolist** (var (cdr decl) t)
               (unless (symbolp var)
                       (warn "The variable name ~s is not a symbol." var))))
    (declaration (dolist** (x (cdr decl) t)
                   (if (symbolp x)
                       (unless (member x *alien-declarations*) (return nil))
                       (warn "The declaration specifier ~s is not a symbol."
                             x))))
    ((array atom bignum bit bit-vector character common compiled-function
      complex cons double-float fixnum float hash-table integer keyword list
      long-float nil null number package pathname random-state ratio rational
      readtable sequence short-float simple-array simple-bit-vector
      simple-string simple-vector single-float standard-char stream string
      string-char symbol t vector signed-byte unsigned-byte)
     (let ((type (type-filter (car decl))))
          (dolist** (var (cdr decl) t)
            (if (symbolp var)
                (unless (equal (get var 'cmp-type) type) (return nil))
                (warn "The variable name ~s is not a symbol." var)))))
    (otherwise
     (unless (member (car decl) *alien-declarations*)
             (warn "The declaration specifier ~s is unknown." (car decl))))
    )
  )

