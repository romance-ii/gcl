;; CMPFUN  Library functions.
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

(si:putprop 'princ 'c1princ 'c1)
(si:putprop 'princ 'c2princ 'c2)
(si:putprop 'terpri 'c1terpri 'c1)

(si:putprop 'apply 'c1apply 'c1)
(si:putprop 'apply 'c2apply 'c2)
(si:putprop 'apply-optimize 'c2apply-optimize 'c2)
(si:putprop 'funcall 'c1funcall 'c1)

(si:putprop 'rplaca 'c1rplaca 'c1)
(si:putprop 'rplaca 'c2rplaca 'c2)
(si:putprop 'rplacd 'c1rplacd 'c1)
(si:putprop 'rplacd 'c2rplacd 'c2)

(si:putprop 'si::memq 'c1memq 'c1)
(si:putprop 'member 'c1member 'c1)
(si:putprop 'member!2 'c2member!2 'c2)
(si:putprop 'assoc 'c1assoc 'c1)
(si:putprop 'assoc!2 'c2assoc!2 'c2)
(si:putprop 'get 'c1get 'c1)
(si:putprop 'get 'c2get 'c2)

(si:putprop 'nth '(c1nth-condition . c1nth) 'c1conditional)
(si:putprop 'nthcdr '(c1nthcdr-condition . c1nthcdr) 'c1conditional)
(si:putprop 'si:rplaca-nthcdr 'c1rplaca-nthcdr 'c1)
(si:putprop 'si:list-nth 'c1list-nth 'c1)
(si:putprop 'list-nth-immediate 'c2list-nth-immediate 'c2)

(defvar *princ-string-limit* 80)

(defun c1princ (args &aux stream (info (make-info)))
  (when (endp args) (too-few-args 'princ 1 0))
  (unless (or (endp (cdr args)) (endp (cddr args)))
          (too-many-args 'princ 2 (length args)))
  (setq stream (if (endp (cdr args))
                   (c1nil)
                   (c1expr* (cadr args) info)))
  (if (and (or (and (stringp (car args))
                    (<= (length (car args)) *princ-string-limit*))
               (characterp (car args)))
           (or (endp (cdr args))
               (and (eq (car stream) 'var)
                    (member (var-kind (caaddr stream)) '(GLOBAL SPECIAL)))))
      (list 'princ info (car args)
            (if (endp (cdr args)) nil (var-loc (caaddr stream)))
            stream)
      (list 'call-global info 'princ
            (list (c1expr* (car args) info) stream))))

(defun c2princ (string vv-index stream)
  (cond ((eq *value-to-go* 'trash)
         (cond ((characterp string)
                (wt-nl "princ_char(" (char-code string))
                (if (null vv-index) (wt ",Cnil") (wt ",VV[" vv-index "]"))
                (wt ");"))
               ((= (length string) 1)
                (wt-nl "princ_char(" (char-code (aref string 0)))
                (if (null vv-index) (wt ",Cnil") (wt ",VV[" vv-index "]"))
                (wt ");"))
               (t
                (wt-nl "princ_str(\"")
                (dotimes** (n (length string))
                  (let ((char (schar string n)))
                       (cond ((char= char #\\) (wt "\\\\"))
                             ((char= char #\") (wt "\\\""))
                             ((char= char #\Newline) (wt "\\n"))
                             (t (wt char)))))
                (wt "\",")
                (if (null vv-index) (wt "Cnil") (wt "VV[" vv-index "]"))
                (wt ");")))
         (unwind-exit nil))
        ((eql string #\Newline) (c2call-global 'terpri (list stream) nil t))
        (t (c2call-global
            'princ
            (list (list 'LOCATION
                        (make-info :type
                          (if (characterp string) 'character 'string))
                        (list 'VV (add-object string)))
                  stream) nil t))))

(defun c1terpri (args &aux stream (info (make-info)))
  (unless (or (endp args) (endp (cdr args)))
          (too-many-args 'terpri 1 (length args)))
  (setq stream (if (endp args)
                   (c1nil)
                   (c1expr* (car args) info)))
  (if (or (endp args)
          (and (eq (car stream) 'var)
               (member (var-kind (caaddr stream)) '(GLOBAL SPECIAL))))
      (list 'princ info #\Newline
            (if (endp args) nil (var-loc (caaddr stream)))
            stream)
      (list 'call-global info 'terpri (list stream))))

(defun c1apply (args &aux info)
  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'apply 2 (length args)))
  (let ((funob (c1funob (car args))))
       (setq info (copy-info (cadr funob)))
       (setq args (c1args (cdr args) info))
       (cond ((eq (car funob) 'call-lambda)
              (let* ((lambda-expr (caddr funob))
                     (lambda-list (caddr lambda-expr)))
                    (declare (object lambda-expr lambda-list))
                    (if (and (null (cadr lambda-list))		; No optional
                             (null (cadddr lambda-list)))	; No keyword
                        (c1apply-optimize info
                                          (car lambda-list)
                                          (caddr lambda-list)
                                          (car (cddddr lambda-expr))
                                          args)
                       (list 'apply info funob args))))
             (t (list 'apply info funob args))))
  )

(defun c2apply (funob args &aux (*vs* *vs*) loc)
  (setq loc (save-funob funob))
  (let ((*vs* *vs*) (base *vs*) (last-arg (list 'CVAR (next-cvar))))
       (do ((l args (cdr l)))
           ((endp (cdr l))
            (wt-nl "{object " last-arg ";")
            (let ((*value-to-go* last-arg)) (c2expr* (car l))))
           (declare (object l))
           (let ((*value-to-go* (list 'vs (vs-push)))) (c2expr* (car l))))
       (wt-nl " vs_top=base+" *vs* ";")
       (base-used)
       (cond (*safe-compile*
              (wt-nl " while(!endp(" last-arg "))")
              (wt-nl " {vs_push(car(" last-arg "));")
              (wt last-arg "=cdr(" last-arg ");}"))
             (t
              (wt-nl " while(" last-arg "!=Cnil)")
              (wt-nl " {vs_push((" last-arg ")->c.c_car);")
              (wt last-arg "=(" last-arg ")->c.c_cdr;}")))
       (wt-nl "vs_base=base+" base ";}")
       (base-used))
  (c2funcall funob 'args-pushed loc)
  )

(defun c1apply-optimize (info requireds rest body args
                              &aux (vl nil) (fl nil))
  (do ()
      ((or (endp (cdr args)) (endp requireds)))
      (push (pop requireds) vl)
      (push (pop args) fl))

  (cond ((cdr args)	;;; REQUIREDS is NIL.
         (cmpck (null rest)
                "APPLY passes too many arguments to LAMBDA expression.")
         (push rest vl)
         (push (list 'call-global info 'list* args) fl)
         (list 'let info (reverse vl) (reverse fl) body))
        (requireds	;;; ARGS is singleton.
         (let ((temp (make-var :kind 'LEXICAL :ref t)))
              (push temp vl)
              (push (car args) fl)
              (list 'let info (reverse vl) (reverse fl)
                    (list 'apply-optimize
                          (cadr body) temp requireds rest body))))
        (rest (push rest vl)
              (push (car args) fl)
              (list 'let info (reverse vl) (reverse fl) body))
        (t
         (let ((temp (make-var :kind 'LEXICAL :ref t)))
              (push temp vl)
              (push (car args) fl)
              (list 'let info (reverse vl) (reverse fl)
                    (list 'apply-optimize
                          (cadr body) temp requireds rest body))))
        )
  )

(defun c2apply-optimize (temp requireds rest body
                              &aux (*unwind-exit* *unwind-exit*) (*vs* *vs*)
                                   (*clink* *clink*) (*ccb-vs* *ccb-vs*))
  (when (or *safe-compile* *compiler-check-args*)
        (wt-nl (if rest "ck_larg_at_least" "ck_larg_exactly")
                "(" (length requireds) ",")
        (wt-var temp nil)
        (wt ");"))

  (dolist** (v requireds) (setf (var-ref v) (vs-push)))
  (when rest (setf (var-ref rest) (vs-push)))

  (do ((n 0 (1+ n))
       (vl requireds (cdr vl)))
      ((endp vl)
       (when rest
             (wt-nl) (wt-vs (var-ref rest)) (wt "= ")
             (dotimes** (i n) (wt "("))
             (wt-var temp nil)
             (dotimes** (i n) (wt-nl ")->c.c_cdr"))
             (wt ";")))
      (declare (fixnum n) (object vl))
      (wt-nl) (wt-vs (var-ref (car vl))) (wt "=(")
      (dotimes** (i n) (wt "("))
      (wt-var temp nil)
      (dotimes** (i n) (wt-nl ")->c.c_cdr"))
      (wt ")->c.c_car;"))

  (dolist** (var requireds) (c2bind var))
  (when rest (c2bind rest))

  (c2expr body)
  )

(defun c1funcall (args &aux funob (info (make-info)))
  (when (endp args) (too-few-args 'funcall 1 0))
  (setq funob (c1funob (car args)))
  (add-info info (cadr funob))
  (list 'funcall info funob (c1args (cdr args) info))
  )


(defun c1rplaca (args &aux (info (make-info)))
  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'rplaca 2 (length args)))
  (unless (endp (cddr args))
          (too-many-args 'rplaca 2 (length args)))
  (setq args (c1args args info))
  (list 'rplaca info args))

(defun c2rplaca (args &aux (*vs* *vs*) (*inline-blocks* 0))
  (setq args (inline-args args '(t t)))
  (safe-compile
   (wt-nl "if(type_of(" (car args) ")!=t_cons)"
          "FEwrong_type_argument(Scons," (car args) ");"))
  (wt-nl "(" (car args) ")->c.c_car = " (cadr args) ";")
  (unwind-exit (car args))
  (close-inline-blocks)
  )

(defun c1rplacd (args &aux (info (make-info)))
  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'rplacd 2 (length args)))
  (when (not (endp (cddr args)))
        (too-many-args 'rplacd 2 (length args)))
  (setq args (c1args args info))
  (list 'rplacd info args))

(defun c2rplacd (args &aux (*vs* *vs*) (*inline-blocks* 0))
  (setq args (inline-args args '(t t)))
  (safe-compile
   (wt-nl "if(type_of(" (car args) ")!=t_cons)"
          "FEwrong_type_argument(Scons," (car args) ");"))
  (wt-nl "(" (car args) ")->c.c_cdr = " (cadr args) ";")
  (unwind-exit (car args))
  (close-inline-blocks)
  )

(defun c1memq (args &aux (info (make-info)))
  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'si::memq 2 (length args)))
  (unless (endp (cddr args))
          (too-many-args 'si::memq 2 (length args)))
  (list 'member!2 info 'eq (c1args (list (car args) (cadr args)) info)))
        
(defun c1member (args &aux (info (make-info)))
  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'member 2 (length args)))
  (cond ((endp (cddr args))
         (list 'member!2 info 'eql (c1args args info)))
        ((and (eq (caddr args) :test)
              (eql (length args) 4)	
       (member  (cadddr args) '('eq #'eq 'equal #'equal
				'equalp #'equalp 'eql #'eql)
		:test 'equal))
         (list 'member!2 info (cadr (cadddr args))
               (c1args (list (car args) (cadr args)) info)))
        (t
         (list 'call-global info 'member (c1args args info)))))

(defun c2member!2 (fun args
                       &aux (*vs* *vs*) (*inline-blocks* 0) (l (next-cvar)))
  (setq args (inline-args args '(t t)))
  (wt-nl "{register object x= " (car args) ",V" l "= " (cadr args) ";")
  (if *safe-compile*
      (wt-nl "while(!endp(V" l "))")
      (wt-nl "while(V" l "!=Cnil)"))
  (if (eq fun 'eq)
      (wt-nl "if(x==(V" l "->c.c_car)){")
      (wt-nl "if(" (string-downcase (symbol-name fun))
		"(x,V" l "->c.c_car)){"))
  (if (and (consp *value-to-go*)
           (or (eq (car *value-to-go*) 'JUMP-TRUE)
               (eq (car *value-to-go*) 'JUMP-FALSE)))
      (unwind-exit t 'JUMP)
      (unwind-exit (list 'CVAR l) 'JUMP))
  (wt-nl "}else V" l "=V" l "->c.c_cdr;")
  (unwind-exit nil)
  (wt "}")
  (close-inline-blocks)
  )

(defun c1assoc (args &aux (info (make-info)))
  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'assoc 2 (length args)))
  (cond ((endp (cddr args))
         (list 'assoc!2 info 'eql (c1args args info)))
        ((and (eq (caddr args) ':test)
              (eql (length args) 4)	
       (member  (cadddr args) '('eq #'eq 'equal #'equal
				'equalp #'equalp 'eql #'eql)
		:test 'equal))
         (list 'assoc!2 info (cadr (cadddr args)) (c1args (list (car args) (cadr args)) info)))
        (t
         (list 'call-global info 'assoc (c1args args info)))))

(defun c2assoc!2 (fun args
                      &aux (*vs* *vs*) (*inline-blocks* 0) (al (next-cvar))name)
  (setq args (inline-args args '(t t)))
  (setq name (symbol-name fun))
  (or (eq fun 'eq) (setq name (string-downcase name)))
  (wt-nl "{register object x= " (car args) ",V" al "= " (cadr args) ";")
  (cond (*safe-compile*
         (wt-nl "while(!endp(V" al "))")
             (wt-nl "if(type_of(V"al"->c.c_car)==t_cons &&"
		    name "(x,V" al "->c.c_car->c.c_car)){"))
        (t
         (wt-nl "while(V" al "!=Cnil)")
             (wt-nl "if(" name "(x,V" al "->c.c_car->c.c_car) &&"
			"V"al"->c.c_car != Cnil){"))) 
  (if (and (consp *value-to-go*)
           (or (eq (car *value-to-go*) 'jump-true)
               (eq (car *value-to-go*) 'jump-false)))
      (unwind-exit t 'jump)
      (unwind-exit (list 'CAR al) 'jump))
  (wt-nl "}else V" al "=V" al "->c.c_cdr;")
  (unwind-exit nil)
  (wt "}")
  (close-inline-blocks)
  )




(defun boole3 (a b c)  (boole a b c))
(si:putprop 'boole '(c1boole-condition . c1boole3) 'c1conditional)

(defun c1boole-condition (args)
   (and (not (endp (cddr args)))
	(endp (cdddr args))
        (inline-boole3-string (car args))))

(defun c1boole3 (args)
  (c1expr (cons 'boole3 args)))

(defun inline-boole3 (&rest args)
  (let ((boole-op-arg (second (car args))))
    (or (eq (car boole-op-arg) 'fixnum-value) (error "must be constant"))
    (let ((string (inline-boole3-string  (third boole-op-arg))))
      (or string (error "should not get here boole opt"))
      (wt-inline-loc string (cdr args)))))

(defun inline-boole3-string (op-code)
  (and (constantp op-code) (setq op-code (eval op-code)))
  (case op-code
	(#. boole-andc1 "((~(#0))&(#1))")
	(#. boole-andc2 "(((#0))&(~(#1)))")
	(#. boole-nor   "(~((#0)|(#1)))")
	(#. boole-orc1  "(~(#0)) | (#1)))")
	(#. boole-orc2  "((#0) | (~(#1)))")
	(#. boole-nand "(~((#0) & (#1)))")
	(#. boole-eqv	"(~((#0) ^ (#1)))")
	(#. boole-and "((#0) & (#1))")
	(#. boole-xor "((#0) ^ (#1))")
	(#. boole-ior "((#0) | (#1))")))
 
(si:putprop 'ash '(c1ash-condition . c1ash) 'c1conditional)

(defun c1ash-condition (args)
  (let ((shamt (second args)))
    (or (typep shamt '(integer -31 31))
	(and (consp shamt)
	     (eq (car  shamt) 'the)
	     (let ((type (cadr  shamt)))
	        (subtypep type '(integer -31 31)))))))

(defun c1ash (args)
  (let  ((shamt (second args))fun)
    (cond ((constantp shamt) (setq shamt (eval shamt))
	   (or (si:fixnump shamt) (error "integer shift only"))
	   (cond ((< shamt 0) (setq fun 'shift>> ))
		 ((>= shamt 0) (setq fun 'shift<<))))
	  (t (let ((type (second shamt)))
	       ;;it had to be a (the type..)
	       (cond ((subtypep type '(integer 0 31))
		      (setq fun 'shift<< ))
		     ((subtypep type '(integer -31 0))
		      (setq fun 'shift>> ))
		     (t (error "should not get here")))
	       )))
    (c1expr (cons fun args))))
(defun shift>> (a b) (ash a  b))
(defun shift<< (a b) (ash a  b))
(si:putprop 'ash '(c1ash-condition . c1ash)  'c1conditional)
(si:putprop 'shift>> "Lash" 'lfun)
(si:putprop 'shift<< "Lash" 'lfun)

(si::putprop 'ldb 'co1ldb 'co1)		    

(defun co1ldb (f args &aux tem (len (integer-length most-positive-fixnum))) f
  (let ((specs
	 (cond ((and (consp (setq tem (first args)))
		     (eq 'byte (car tem))
		     (cons (second tem) (third tem)))))))
    (cond ((and (integerp (cdr specs))
		(integerp (car specs))
		(< (+ (car specs)(cdr specs))
		   len)
		(subtypep (result-type (second args)) 'fixnum))
	   (c1expr `(the fixnum (ldb1 ,(car specs) ,(cdr specs) ,(second args))))))))

	  
(si:putprop 'length 'c1length 'c1)

(defun c1length (args &aux (info (make-info)))
  (setf (info-type info) 'fixnum)
  (cond ((and (consp (car args))
	      (eq (caar args) 'symbol-name)
	      (let ((args1 (cdr (car args))))
		(and args1 (not (cddr args1))
		     (list 'call-global info 'symbol-length
			   (c1args args1 info))))))
	(t  (setq args (c1args args info))
	    (list 'call-global info 'length args ))))


(defun c1get (args &aux (info (make-info)))

  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'get 2 (length args)))
  (when (and (not (endp (cddr args))) (not (endp (cdddr args))))
        (too-many-args 'get 3 (length args)))
  (list 'get info (c1args args info)))

(defun c2get (args)
  (if *safe-compile*
      (c2call-global 'get args nil t)
      (let ((*vs* *vs*) (*inline-blocks* 0) (pl (next-cvar)))
           (setq args (inline-args args (if (cddr args) '(t t t) '(t t))))
           (wt-nl "{object V" pl" =(" (car args) ")->s.s_plist;")
           (wt-nl " object ind= " (cadr args) ";")
           (wt-nl "while(V" pl "!=Cnil){")
           (wt-nl "if(V" pl "->c.c_car==ind){")
           (unwind-exit (list 'CADR pl) 'jump)
           (wt-nl "}else V" pl "=V" pl "->c.c_cdr->c.c_cdr;}")
           (unwind-exit (if (cddr args) (caddr args) nil))
           (wt "}")
           (close-inline-blocks)))
  )

(defun co1eql (f args) f
  (or (and (cdr args) (not *safe-compile*))
      (return-from co1eql nil))
  (cond ((replace-constant args)
	 (cond ((characterp (second args))
		(setq args (reverse args))))
	 (cond ((characterp (car args))
		(let ((c (gensym)))
		  (c1expr
		   `(let ((,c ,(second args)))
		      (declare (type ,(result-type (second args))
				     ,c))
		      (and (typep ,c 'character)
			   (= (char-code ,(car args))
			      (the fixnum
				   (char-code
				    (the character
					 ,c)))
			      ))))))))))


	 
(si::putprop 'eql 'co1eql 'co1)		    

(defvar *frozen-defstructs* nil)

;; Return the most particular type we can EASILY obtain
;; from x.  
(defun result-type (x)
  (cond ((symbolp x)
	 (let ((tem (c1expr x)))
	   (info-type (second tem))))
	((constantp x)
	 (type-filter (type-of x)))
	((and (consp x) (eq (car x) 'the))
	 (type-filter (second x)))
	(t t)))



(defvar *type-alist*
  '((fixnum . si::fixnump)
    (float . floatp)
    (short-float . short-float-p)
    (long-float . long-float-p)
    (integer . integerp)
    (character . characterp)
    (symbol . symbolp)
    (cons . consp)
    (null . null)
    (array . arrayp)
    (vector . vectorp)
    (bit-vector . bit-vector-p)
    (string . stringp)
    (list . (lambda (y) (or (consp y) (null y))))
    (number . numberp)
    (rational . rationalp)
    (complex . complexp)
    (ratio . ratiop)
    (sequence . (lambda (y) (or (listp y) (vectorp y))))
    (function . functionp)
    ))


(defun co1typep (f args &aux tem) f
  (let*
      ((x (car args))  new
       (type (and (consp (second args))
		  (eq (car (second args)) 'quote)
		  (second (second args)))))
    (cond ((subtypep (result-type (car args)) type)
	   (setq new t)
	   (return-from co1typep (c1expr new))))
    (setq new
	  (cond
	   ((null type) nil)
	   ((setq f (assoc type *type-alist* :test 'equal))
	    (list (cdr f) x))
	   ((and (consp type)
		 (or (and (eq (car type) 'vector)
			  (null (cddr type)))
		     (and 
		      (member (car type)
			      '(array vector simple-array))
		      (equal (third type) '(*)))))
	    (setq tem (si::best-array-element-type
		       (second type)))
	    (cond ((eq tem 'string-char) `(stringp ,x))
		  ((eq tem 'bit) `(bit-vector-p ,x))
		  ((setq tem (position tem *aet-types*))
		   `(the boolean (vector-type ,x ,tem)))))
	   ((and (consp type)
		 (eq (car type) 'satisfies)
		 (consp (cdr type))
		 (cadr type)
		 (symbolp (cadr type))
		 (symbol-package (cadr type))
		 (null (cddr type))
		 `(,(cadr type) ,x)))
	   ((subtypep type 'fixnum)
	    (setq tem (si::normalize-type type))
	    (and (consp tem)
		 (si::fixnump (second tem))
		 (si::fixnump (third  tem))
		 `(let ((.tem ,x))
		    (declare (type ,(result-type x) .tem))
		    (and (typep .tem 'fixnum)
			 (>=  (the fixnum .tem) ,(second tem))
			 (<=  (the fixnum .tem) ,(third tem))))))
	   ((and (symbolp type)
		 (setq tem (get type 'si::s-data)))
	    (cond ((or (si::s-data-frozen tem)
		       *frozen-defstructs*)
		   (struct-type-opt x tem))
		  (t
		   `(si::structure-subtype-p
		     ,x ',type))))
;	   ((and (print (list 'slow 'typep type)) nil))
	   (t nil)))
    (and new (c1expr `(the boolean , new)))))

;; this is going the wrong way.  want to go up..
(defun struct-type-opt (x sd)
  (let ((s (gensym))
	(included (get-included (si::s-data-name sd))))
    `(let ((,s ,x))
       (and
	 (si::structurep ,s)
	 ,(cond ((< (length included) 3)
		 `(or ,@
		      (mapcar #'(lambda (x)
				  `(eq (si::structure-def ,s)
				       ,(name-sd1 x)))
			      included)))
		(t `(si::structure-subtype-p ,s
					    ,(name-sd1
					       (si::s-data-name sd)))))))))

(defun get-included (name)
  (let ((sd (get name 'si::s-data)))
    (cons (si::s-data-name sd)
	  (mapcan 'get-included
		  (si::s-data-included sd)))))
  


(si::putprop 'typep 'co1typep 'co1)		    

(defun co1schar (f args) f
   (and (listp (car args)) (not *safe-compile*)
	(cdr args)
	(eq (caar args) 'symbol-name)
	(c1expr `(aref (the string ,(second (car args)))
			,(second args)))))

(si::putprop 'schar 'co1schar 'co1)

(si::putprop 'cons 'co1cons 'co1)
;; turn repetitious cons's into a list*

(defun cons-to-lista (x)
  (let ((tem  (last x)))
    (cond 
	((and (consp tem)
	     (consp (car tem))
	     (eq (caar tem) 'cons)
	     (eql (length (cdar tem)) 2)
	     (cons-to-lista (append (butlast x)
				    (cdar tem)))))
	(t x))))
    	 

(defun co1cons (f args) f
  (let ((tem (and (eql (length args) 2) (cons-to-lista args))))
    (and (not (eq tem args))
	 (c1expr  (if (equal '(nil) (last tem))
		     (cons 'list (butlast tem))
		     (cons 'list* tem))))))

;; I don't feel it is good to replace the list call, but rather
;; usually better the other way around.  We removed c1list
;; because of possible feedback.

(defun c1nth-condition (args)
       (and (not (endp args))
            (not (endp (cdr args)))
            (endp (cddr args))
            (numberp (car args))
            (<= 0 (car args) 7)))

(defun c1nth (args)
       (c1expr (case (car args)
                     (0 (cons 'car (cdr args)))
                     (1 (cons 'cadr (cdr args)))
                     (2 (cons 'caddr (cdr args)))
                     (3 (cons 'cadddr (cdr args)))
                     (4 (list 'car (cons 'cddddr (cdr args))))
                     (5 (list 'cadr (cons 'cddddr (cdr args))))
                     (6 (list 'caddr (cons 'cddddr (cdr args))))
                     (7 (list 'cadddr (cons 'cddddr (cdr args))))
                     )))

(defun c1nthcdr-condition (args)
       (and (not (endp args))
            (not (endp (cdr args)))
            (endp (cddr args))
            (numberp (car args))
            (<= 0 (car args) 7)))

(defun c1nthcdr (args)
       (c1expr (case (car args)
                     (0 (cadr args))
                     (1 (cons 'cdr (cdr args)))
                     (2 (cons 'cddr (cdr args)))
                     (3 (cons 'cdddr (cdr args)))
                     (4 (cons 'cddddr (cdr args)))
                     (5 (list 'cdr (cons 'cddddr (cdr args))))
                     (6 (list 'cddr (cons 'cddddr (cdr args))))
                     (7 (list 'cdddr (cons 'cddddr (cdr args))))
                     )))

(defun c1rplaca-nthcdr (args &aux (info (make-info)))
  (when (or (endp args) (endp (cdr args)) (endp (cddr args)))
        (too-few-args 'si:rplaca-nthcdr 3 (length args)))
  (unless (endp (cdddr args))
          (too-few-args 'si:rplaca-nthcdr 3 (length args)))
  (if (and (numberp (cadr args)) (<= 0 (cadr args) 10))
      (let  ((x (gensym))(y (gensym)))
	(c1expr
	 `(let ((,x ,(car args))
		(,y ,(third args)))
	    (setf ,x (nthcdr ,(cadr args) ,x))
	    (setf (car ,x) ,y)
	    ,y)))
      (list 'call-global info 'si:rplaca-nthcdr (c1args args info))))


;; Facilities for faster reading and writing from file streams.
;; You must declare the stream to be :in-file
;; or :out-file

(si::putprop 'read-byte 'co1read-byte 'co1)
(si::putprop 'read-char 'co1read-char 'co1)
(si::putprop 'write-byte 'co1write-byte 'co1)
(si::putprop 'write-char 'co1write-char 'co1)



(defun fast-read (args read-fun)
  (cond
    ((and (not *safe-compile*)
	  (< *space* 2)
	  (null (second args))
	  (boundp 'si::*eof*))
     (cond
       ((atom (car args))
	(or (car args) (setq args (cons '*standard-input* (cdr args))))
	(let ((stream (car args))
	      (eof (third args)))
	  `(let ((ans 0))
	     (declare (fixnum  ans))
	     (cond ((fp-okp ,stream)
		    (setq ans  (sgetc1 ,stream))
		    (cond ((and (eql ans ,si::*eof*)
				(sfeof  ,stream))
			   ,eof)
			  (t ,(if (eq read-fun 'read-char1)
				       '(code-char ans) 'ans))
			  ))
		   (t
		    (,read-fun ,stream  ,eof)
		     )
		   ))))
       (t
	`(let ((.strm. ,(car args)))
	   (declare (type ,(result-type (car args)) .strm.))
	     ,(fast-read (cons '.strm. (cdr args)) read-fun)))))))

(defun co1read-byte (f args &aux tem) f
  (cond ((setq tem (fast-read args 'read-byte1))
	 (let ((*space* 10))		;prevent recursion!
	   (c1expr tem)))))

(defun co1read-char (f args &aux tem) f
  (cond ((setq tem (fast-read args 'read-char1))
	 (let ((*space* 10))		;prevent recursion!
	   (c1expr tem)))))    

(defun cfast-write (args write-fun)
  (cond
    ((and (not *safe-compile*)
	  (< *space* 2)
	  (boundp 'si::*eof*))
     (let ((stream (second args)))
       (or stream (setq stream '*standard-output*))
     (cond
       ((atom stream)
	`(cond ((fp-okp ,stream)
		(the fixnum (sputc .ch ,stream)))
	       (t    (,write-fun  .ch ,stream))))
       (t `(let ((.str ,stream))
	     (declare (type ,(result-type stream) .str))
	     ,(cfast-write (list '.ch '.str) write-fun))))))))

(defun co1write-byte (f args) f
  (let ((tem (cfast-write args 'write-byte)))
    (if tem (let ((*space* 10))
	      (c1expr
		`(let ((.ch ,(car args)))
		   (declare (fixnum .ch))
		   ,tem
		   ,(if (atom (car args)) (car args) '.ch)))))))

(defun co1write-char (f args) f
  (let ((tem (cfast-write args 'write-char)))
    (if tem (let ((*space* 10))
	      (c1expr
		`(let ((.ch ,(car args)))
		   (declare (character .ch))
		   ,tem
		   ,(if (atom (car args)) (car args) '.ch)))))))



(defvar *aet-types*
  #(T STRING-CHAR SIGNED-CHAR FIXNUM SHORT-FLOAT LONG-FLOAT
			SIGNED-CHAR
			UNSIGNED-CHAR SIGNED-SHORT UNSIGNED-SHORT))


(defun aet-c-type (type)
  (ecase type
    ((t) "object")
    ((string-char signed-char) "char")
    (fixnum "fixnum")
    (unsigned-char "unsigned char")
    (unsigned-short "unsigned short")
    (signed-short "short")
    (unsigned-short "unsigned short")
    (long-float "longfloat")
    (short-float "shortfloat")))


(si:putprop 'vector-push 'co1vector-push 'co1)
(si:putprop 'vector-push-extend 'co1vector-push 'co1)
(defun co1vector-push (f args) f
  (unless
   (or *safe-compile*
       (> *space* 3)
       (null (cdr args))
       )
   (let ((*space* 10))
     (c1expr
      `(let* ((.val ,(car args))
	      (.v ,(second args))
	      (.i (fill-pointer .v))
	      (.dim (array-total-size .v)))
	 (declare (fixnum .i .dim))
	 (declare (type ,(result-type (second args)) .v))
	 (declare (type ,(result-type (car args)) .val))
	 (cond ((< .i .dim)
		(the fixnum (si::fill-pointer-set .v (the fixnum (+ 1 .i))))
		(si::aset .v .i .val)
		.i)
	       (t ,(cond ((eq f 'vector-push-extend)
			  `(vector-push-extend .val
					       .v ,@(cddr args)))))))))))

(defun constant-fold-p (x)
  (cond ((constantp x) t)
	((atom  x) nil)
	((eq (car x) 'the)
	 (constant-fold-p (third x)))
	((and 
	      (symbolp (car x))
	      (eq (get (car x) 'co1)
		  'co1constant-fold))
	 (dolist (w (cdr x))
		 (or (constant-fold-p w)
		     (return-from constant-fold-p nil)))
	 t)
	(t nil)))

(defun co1constant-fold (f args )
  (cond ((and (fboundp f)
	      (dolist (v args t)
		      (or (constant-fold-p v)
			  (return-from co1constant-fold nil))))
	 (c1expr (cmp-eval (cons f args))))))


(si::putprop 'do 'co1special-fix-decl 'co1special)
(si::putprop 'do* 'co1special-fix-decl 'co1special)
(si::putprop 'prog 'co1special-fix-decl 'co1special)
(si::putprop 'prog* 'co1special-fix-decl 'co1special)

(defun co1special-fix-decl (f args)
  (flet ((fixup (forms &aux decls )
	  (block nil
		 (tagbody
		  top
		  (or (consp forms) (go end))
		  (let ((tem (car forms)))
		    (if (and (consp tem)
			     (setq tem  (cmp-macroexpand tem))
			     (eq (car tem) 'declare))
			(progn (push tem decls) (pop forms))
		      (go end)))
		      (go top)
	      		; all decls made explicit.
		      end
		     (return  (nconc (nreverse decls) forms))))))
	(c1expr
	  (cmp-macroexpand
	    (case f
	      ((do do*) `(,f ,(car args)
			     ,(second args)
			     ,@ (fixup (cddr args))))
	      ((prog prog*)
	       `(,f ,(car args)
		    ,@ (fixup (cdr args)))))))))
(si::putprop 'sublis 'co1sublis 'co1)
(defun co1sublis (f args &aux test) f
 (and (case (length args)
	(2 (setq test 'eql))
	(4 (and (eq (third args) :test)
		(cond ((member (fourth args) '(equal (function equal))) (setq test 'equal))
		      ((member (fourth args) '(eql (function eql))) (setq test 'eql))
     		      ((member (fourth args) '(eq (function eq))) (setq test 'eq))
		      ))))
      (let ((s (gensym)))
	(c1expr `(let ((,s ,(car args)))
		   (sublis1 ,s ,(second args) ',test))))))


(defun sublis1-inline (a b c)
  (let ((tst (car (find (cadr c) *objects* :key 'cadr))))
    (or (member tst '(eq equal eql)) (error "bad test"))
  (wt "(check_alist("
      a
     "),sublis1("a "," b "," (format nil "~(&~a~)))" tst))))

  
;; end new		  
      
(defun c1list-nth (args &aux (info (make-info)))
  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'si:rplaca-nthcdr 2 (length args)))
  (unless (endp (cddr args))
          (too-few-args 'si:rplaca-nthcdr 2 (length args)))
  (if (and (numberp (car args)) (<= 0 (car args) 10))
      (list 'list-nth-immediate info
            (car args)
            (c1args (list (cadr args)) info))
      (list 'call-global info 'si:list-nth (c1args args info))))

(defun c2list-nth-immediate (index args &aux (l (next-cvar))
                                             (*vs* *vs*) (*inline-blocks* 0))
  (setq args (inline-args args '(t t)))
  (wt-nl "{object V" l "= ")
  (if *safe-compile*
      (progn
       (dotimes** (i index) (wt "cdr("))
       (wt (car args))
       (dotimes** (i index) (wt ")"))
       (wt ";")
       (wt-nl "if((type_of(V" l ")!=t_cons) && (" (car args) "!= Cnil))")
       (wt-nl " FEwrong_type_argument(Scons,V" l ");")
       )
      (progn
       (wt-nl (car args))
       (dotimes** (i index) (wt-nl "->c.c_cdr"))
       (wt ";")))
  (unwind-exit (list 'CAR l))
  (wt "}")
  (close-inline-blocks)
  )


