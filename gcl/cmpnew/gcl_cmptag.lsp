;;; CMPTAG  Tagbody and Go.
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
(import 'si::switch)
(import 'si::switch-finish)


(si:putprop 'tagbody 'c1tagbody 'c1special)
(si:putprop 'tagbody 'c2tagbody 'c2)

(si:putprop 'go 'c1go 'c1special)
(si:putprop 'go 'c2go 'c2)

(defstruct tag
           name			;;; Tag name.
           ref			;;; Referenced or not.  T or NIL.
           ref-clb		;;; Cross local function reference.
           			;;; During Pass1, T or NIL.
           			;;; During Pass2, the vs-address for the
           			;;; tagbody id, or NIL.
           ref-ccb		;;; Cross closure reference.
           			;;; During Pass1, T or NIL.
           			;;; During Pass2, the vs-address for the
           			;;; block id, or NIL.
           label		;;; Where to jump.  A label.
           unwind-exit		;;; Where to unwind-no-exit.
           var			;;; The tag-name holder.  A VV index.
	   switch               ;;; tag for switch.  A fixnum or 'default
           )

(defvar *tags* nil)

;;; During Pass 1, *tags* holds a list of tag objects and the symbols 'CB'
;;; (Closure Boundary) and 'LB' (Level Boundary).  'CB' will be pushed on
;;; *tags* when the compiler begins to process a closure.  'LB' will be pushed
;;; on *tags* when *level* is incremented.



(defun jumps-to-p (clause tag-name &aux tem)
;;Does CLAUSE have a go TAG-NAME in it?
  (cond ((atom clause)nil)
	((and (eq (car clause) 'go)
	      (tag-p (setq tem (cadddr (cdr clause))))
	      (eq (tag-name tem) tag-name)))
	(t (or (jumps-to-p (car clause) tag-name)
	       (jumps-to-p (cdr clause) tag-name)))))

(defvar *reg-amount* 60)
;;amount to increase var-register for each variable reference in side a loop

(defun add-reg1 (form)
;;increase the var-register in FORM for all vars
  (cond ((atom form)
	 (cond ((typep form 'var)
		 (setf (var-register form)
		      (the fixnum (+ (the fixnum (var-register form))
				      (the fixnum *reg-amount*))))
		)))
	(t (add-reg1 (car form))
	   (add-reg1 (cdr form)))))
	 

(defun add-loop-registers (tagbody)
;;Find a maximal iteration interval in TAGBODY from first to end
;;then increment the var-register slot.
  (do ((v tagbody (cdr v))
       (end nil)
       (first nil))
      ((null v)
       (do ((ww first (cdr ww)))
	   ((eq ww end)(add-reg1 (car ww)))
	   (add-reg1 (car ww))))
   (cond ((typep (car v) 'tag)
	  (or first (setq first v))
	  (do ((w (cdr v) (cdr w))
	       (name (tag-name (car v))))
	      ((null w) )
	      (cond ((jumps-to-p (car w) name)
		     (setq end w))))))))

(defun c1tagbody (body &aux (*tags* *tags*) (info (make-info)))
  ;;; Establish tags.
  (setq body
        (mapcar
         #'(lambda (x)
             (cond ((or (symbolp x) (integerp x))
                    (let ((tag (make-tag :name x :ref nil
                                         :ref-ccb nil :ref-clb nil)))
                      (push tag *tags*)
                      tag))
                   (t x)))
         body))

  ;;; Process non-tag forms.
  (setq body (mapcar #'(lambda (x) (if (typep x 'tag) x (c1expr* x info)))
                     body))

  ;;; Delete redundant tags.
  (do ((l body (cdr l))
       (body1 nil) (ref nil) (ref-clb nil) (ref-ccb nil))
      ((endp l)
       (if (or ref-ccb ref-clb ref)
           (progn (setq body1 (reverse body1))
		  ;; If ref-ccb is set, we will cons up the environment, hence
		  ;; all tags which had level boundary references must be changed
		  ;; to ccb references.  FIXME -- review this logic carefully
		  ;; CM 20040228
		  (when ref-ccb
		    (dolist (l body1)
		      (when (and (typep l 'tag) (tag-ref-clb l))
			(setf (tag-ref-ccb l) t))))
	          (cond ((or  ref-clb ref-ccb)
                         (incf *setjmps*))
			(t
	                 (add-loop-registers body1 )))
	           (list 'tagbody info ref-clb ref-ccb body1))
           (list 'progn info (reverse (cons (c1nil) body1)))))
    (declare (object l ref ref-clb ref-ccb))
    (if (typep (car l) 'tag)
        (cond ((tag-ref-ccb (car l))
               (push (car l) body1)
               (setf (tag-var (car l)) (add-object (tag-name (car l))))
               (setq ref-ccb t))
              ((tag-ref-clb (car l))
               (push (car l) body1)
               (setf (tag-var (car l)) (add-object (tag-name (car l))))
               (setq ref-clb t))
              ((tag-ref (car l)) (push (car l) body1) (setq ref t)))
        (push (car l) body1))))

(defun c2tagbody (ref-clb ref-ccb body)
  (cond (ref-ccb (c2tagbody-ccb body))
        (ref-clb (c2tagbody-clb body))
        (t (c2tagbody-local body))))

(defun c2tagbody-local (body &aux (label (next-label)))
  ;;; Allocate labels.
  (dolist** (x body)
    (when (typep x 'tag)
          (setf (tag-label x) (next-label*))
          (setf (tag-unwind-exit x) label)))
  (let ((*unwind-exit* (cons label *unwind-exit*)))
    (c2tagbody-body body))

  )

(defun c2tagbody-body (body)
  (do ((l body (cdr l)) (written nil))
      ((endp (cdr l))
       (cond (written (unwind-exit nil))
             ((typep (car l) 'tag)
	      (wt-switch-case (tag-switch (car l)))
              (wt-label (tag-label (car l)))
              (unwind-exit nil))
             (t (let* ((*exit* (next-label))
                       (*unwind-exit* (cons *exit* *unwind-exit*))
                       (*value-to-go* 'trash))
                  (c2expr (car l))
                  (wt-label *exit*))
                (unless (eq (caar l) 'go) (unwind-exit nil)))))
      (declare (object l written))
    (cond (written (setq written nil))
          ((typep (car l) 'tag)
	   (wt-switch-case (tag-switch (car l)))
	   (wt-label (tag-label (car l))))
          (t (let* ((*exit* (if (typep (cadr l) 'tag)
                                (progn (setq written t) (tag-label (cadr l)))
                                (next-label)))
                    (*unwind-exit* (cons *exit* *unwind-exit*))
                    (*value-to-go* 'trash))
               (c2expr (car l))
	       (and (typep (cadr l) 'tag)
		    (wt-switch-case (tag-switch (cadr l))))
               (wt-label *exit*))))))
  
(defun c2tagbody-clb (body &aux (label (next-label)) (*vs* *vs*))
  (let ((*unwind-exit* (cons 'frame *unwind-exit*))
        (ref-clb (vs-push)))
    (wt-nl) (wt-vs ref-clb) (wt "=alloc_frame_id();")
    (wt-nl "frs_push(FRS_CATCH,") (wt-vs ref-clb) (wt ");")
    (wt-nl "if(nlj_active){")
    (wt-nl "nlj_active=FALSE;")
    ;;; Allocate labels.
    (dolist** (tag body)
      (when (typep tag 'tag)
        (setf (tag-label tag) (next-label*))
        (setf (tag-unwind-exit tag) label)
        (when (tag-ref-clb tag)
          (setf (tag-ref-clb tag) ref-clb)
          (wt-nl "if(eql(nlj_tag,VV[" (tag-var tag) "])) {")
  	  (wt-nl "   ")
	  (reset-top)
	  (wt-nl "   ")
          (wt-go (tag-label tag))
	  (wt-nl "}"))))
    (wt-nl "FEerror(\"The GO tag ~s is not established.\",1,nlj_tag);")
    (wt-nl "}")
    (let ((*unwind-exit* (cons label *unwind-exit*)))
      (c2tagbody-body body))))

(defun c2tagbody-ccb (body &aux (label (next-label))
                           (*vs* *vs*) (*clink* *clink*) (*ccb-vs* *ccb-vs*))
  (let ((*unwind-exit* (cons 'frame *unwind-exit*))
        (ref-clb (vs-push)) ref-ccb)
    (wt-nl) (wt-vs ref-clb) (wt "=alloc_frame_id();")
    (wt-nl) (wt-vs ref-clb) (wt "=MMcons(") (wt-vs ref-clb) (wt ",")
    (wt-clink) (wt ");")
    (clink ref-clb)
    (setq ref-ccb (ccb-vs-push))
    (wt-nl "frs_push(FRS_CATCH,") (wt-vs* ref-clb) (wt ");")
    (wt-nl "if(nlj_active){")
    (wt-nl "nlj_active=FALSE;")
    ;;; Allocate labels.
    (dolist** (tag body)
      (when (typep tag 'tag)
        (setf (tag-label tag) (next-label*))
        (setf (tag-unwind-exit tag) label)
        (when (or (tag-ref-clb tag) (tag-ref-ccb tag))
          (setf (tag-ref-clb tag) ref-clb)
          (when (tag-ref-ccb tag) (setf (tag-ref-ccb tag) ref-ccb))
          (wt-nl "if(eql(nlj_tag,VV[" (tag-var tag) "])) {")
	  (wt-nl "   ")
	  (reset-top)
	  (wt-nl "   ")
          (wt-go (tag-label tag))
	  (wt-nl "}"))))
    (wt-nl "FEerror(\"The GO tag ~s is not established.\",1,nlj_tag);")
    (wt-nl "}")
    (let ((*unwind-exit* (cons label *unwind-exit*)))
      (c2tagbody-body body))))

(defun c1go (args)
  (cond ((endp args) (too-few-args 'go 1 0))
        ((not (endp (cdr args))) (too-many-args 'go 1 (length args)))
        ((not (or (symbolp (car args)) (integerp (car args))))
         "The tag name ~s is not a symbol nor an integer." (car args)))
  (do ((tags *tags* (cdr tags))
       (name (car args))
       (ccb nil) (clb nil))
      ((endp tags) (cmperr "The tag ~s is undefined." name))
      (declare (object name ccb clb))
    (case (car tags)
      (cb (setq ccb t))
      (lb (setq clb t))
      (t (when (eq (tag-name (car tags)) name)
           (let ((tag (car tags)))
             (cond (ccb (setf (tag-ref-ccb tag) t))
                   (clb (setf (tag-ref-clb tag) t))
                   (t (setf (tag-ref tag) t)))
             (return (list 'go *info* clb ccb tag))))))))

(defun c2go (clb ccb tag)
  (cond (ccb (c2go-ccb tag))
        (clb (c2go-clb tag))
        (t (c2go-local tag))))

(defun c2go-local (tag)
  (unwind-no-exit (tag-unwind-exit tag))
  (wt-nl) (wt-go (tag-label tag)))

(defun c2go-clb (tag)
  (wt-nl "vs_base=vs_top;")
  (wt-nl "unwind(frs_sch(")
  (if (tag-ref-ccb tag)
      (wt-vs* (tag-ref-clb tag))
      (wt-vs (tag-ref-clb tag)))
  (wt "),VV[" (tag-var tag) "]);"))

(defun c2go-ccb (tag)
  (wt-nl "{frame_ptr fr;")
  (wt-nl "fr=frs_sch(") (wt-ccb-vs (tag-ref-ccb tag)) (wt ");")
  (wt-nl "if(fr==NULL)FEerror(\"The GO tag ~s is missing.\",1,VV["
         (tag-var tag) "]);")
  (wt-nl "vs_base=vs_top;")
  (wt-nl "unwind(fr,VV[" (tag-var tag) "]);}"))


(defun wt-switch-case (x)
  (cond (x (wt-nl (if (typep x 'fixnum) "case " "") x ":"))))

(defun c1switch(form  &aux (*tags* *tags*))
  (let* ((switch-op  (car form))
	 (body (cdr form))
	 (switch-op-1 (c1expr switch-op)))
    (cond ((and (typep (second switch-op-1 ) 'info)
		(subtypep (info-type (second switch-op-1)) 'fixnum))
	   ;;optimize into a C switch:
	   ;;If we ever get GCC to do switch's with an enum arg,
	   ;;which don't do bounds checking, then we will
	   ;;need to carry over the restricted range.
	   ;;more generally the compiler should carry along the original type
	   ;;decl, not just the coerced one.  This needs another slot in
	   ;;info.
	   (or (member t body) (setq body (append body (list t))))
	   ;; Remove duplicate tags in C switch statement -- CM 20031112
	   (setq body
		 (let (tags new-body)
		   (dolist (b body)
		     (cond ((or (symbolp b) (integerp b))
			    (unless (member b tags)
			      (push b tags)
			      (push b new-body)))
			   (t
			    (push b new-body))))
		   (nreverse new-body)))
	   (setq body
		 (mapcar
		  #'(lambda (x)
		      (cond ((or (symbolp x) (integerp x))
			     (let ((tag (make-tag :name x :ref
						  nil
						  :ref-ccb nil
						  :ref-clb nil)))
			       (cond((typep x 'fixnum)
				     (setf (tag-ref tag) t)
				     (setf (tag-switch tag) x))
				    ((eq t x)
				     (setf (tag-ref tag) t)
				     (setf (tag-switch tag) "default")))
			       tag))
			    (t x)))
		  body))
	   (let ((tem (c1tagbody
			`(,@ body
			  switch-finish-label))))
	     (nconc (list 'switch (cadr tem) switch-op-1)
		    (cddr tem))
	     ))
	  (t (c1expr (cmp-macroexpand-1 (cons 'switch form)))))))

(defun c2switch (op ref-clb ref-ccb body &aux  (*inline-blocks* 0)(*vs* *vs*))
  (let ((args (inline-args (list op ) '(fixnum ))))
    (wt-inline-loc "switch(#0){" args)
    (cond (ref-ccb (c2tagbody-ccb body))
	  (ref-clb (c2tagbody-clb body))
	  (t (c2tagbody-local body)))
    (wt "}")
    (unwind-exit nil)
    (close-inline-blocks)))
	


;; SWITCH construct for Common Lisp. (TEST &body BODY) (in package SI)

;; TEST must evaluate to something of INTEGER TYPE.  If test matches one
;; of the labels (ie integers) in the body of switch, control will jump
;; to that point.  It is an error to have two or more constants which are
;; eql in the the same switch.  If none of the constants match the value,
;; then control moves to a label T.  If there is no label T, control
;; flows as if the last term in the switch were a T.  It is an error
;; however if TEST were declared to be in a given integer range, and at
;; runtime a value outside that range were provided.  The value of a
;; switch construct is undefined.  If you wish to return a value use a
;; block construct outside the switch and a return-from.  `GO' may also
;; be used to jump to labels in the SWITCH.

;; Control falls through from case to case, just as if the cases were
;; labels in a tagbody.  To jump to the end of the switch, use
;; (switch-finish).

;; The reason for using a new construct rather than building on CASE, is
;; that CASE does not allow the user to use invoke a `GO' if necessary.
;; to switch from one case to another.  Also CASE does not allow sharing
;; of parts of code between different cases.  They have to be either the
;; same or disjoint.

;; The SWITCH may be implemented very efficiently using a jump table, if
;; the range of cases is not too much larger than the number of cases.
;; If the range is much larger than the number of cases, a binary
;; splitting of cases might be used.

;; Sample usage:
;; (defun goo (x)
;;  (switch x
;;    1 (princ "x is one, ")
;;    2 (princ "x is one or two, ")
;;    (switch-finish)
;;    3 (princ "x is three, ")
;;    (switch-finish)	 
;;    t (princ "none")))

;; We provide a Common Lisp macro for implementing the above construct:


(defmacro switch (test &body body &aux cases)
  (dolist  (v body)
    (cond ((integerp v) (push `(if (eql ,v ,test) (go ,v) nil) cases))))
  `(tagbody
     ,@  (nreverse cases)
     (go t)
     ,@ body
     ,@ (if (member t body) nil '(t))
     switch-finish-label ))

(defmacro switch-finish nil '(go switch-finish-label))

  
(si::putprop 'switch 'c1switch 'c1special)
(si::putprop 'switch 'c2switch 'c2)
