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


;;;;    DEFSTRUCT.LSP
;;;;
;;;;        The structure routines.


(in-package 'lisp)
(export 'defstruct)


(in-package 'system)


(proclaim '(optimize (safety 2) (space 3)))



;(in-package 'system)



(defvar *accessors* (make-array 10 :adjustable t))
(defvar *list-accessors* (make-array 2 :adjustable t))
(defvar *vector-accessors* (make-array 2 :adjustable t))

(or (fboundp 'record-fn) (setf (symbol-function 'record-fn)
			       #'(lambda (&rest l) l nil)))

(defun make-access-function (name conc-name no-conc type named include no-fun
				  ;; from apply
				  slot-name default-init slot-type read-only
				  offset &optional predicate ) 
  (declare (ignore named default-init predicate ))
  
  (let ((access-function
	 (if no-conc
	     slot-name
	   (intern (si:string-concatenate (string conc-name)
					  (string slot-name)))))
	accsrs dont-overwrite)
    (ecase type
      ((nil)
       (setf accsrs *accessors*))
      (list
	(setf accsrs *list-accessors*))
      (vector
	(setf accsrs *vector-accessors*)))
    (or (> (length  accsrs) offset)
	(adjust-array accsrs (+ offset 10)))
    (unless
     dont-overwrite
     (record-fn access-function 'defun '(t) slot-type)
     (or no-fun
	 (and (fboundp access-function)
	      (eq (aref accsrs offset) (symbol-function access-function)))
	 (setf (symbol-function access-function)
	   (or (aref accsrs offset)
	       (setf (aref accsrs offset)
		     (cond  ((eq accsrs *accessors*)
				#'(lambda (x)
				    (or (structurep x)
					(error "~a is not a structure" x))
				    (structure-ref1 x offset)))
			       ((eq accsrs *list-accessors*)
				#'(lambda(x)
				    (si:list-nth offset x)))
			       ((eq accsrs *vector-accessors*)
				#'(lambda(x)
				    (aref x offset)))))))))
    (cond (read-only
	    (remprop access-function 'structure-access)
	    (setf (get access-function 'struct-read-only) t))
	  (t (remprop access-function 'setf-update-fn)
	     (remprop access-function 'setf-lambda)
	     (remprop access-function 'setf-documentation)
	     (let ((tem (get access-function 'structure-access)))
	       (cond ((and (consp tem) include
			   (subtypep include (car tem))
			   (eql (cdr tem) offset))
		      ;; don't change overwrite accessor of subtype.
		      (setq dont-overwrite t)
		      )
		     (t  (setf (get access-function 'structure-access)
			       (cons (if type type name) offset)))))))
    nil))


(defun make-constructor (name constructor type named
                         slot-descriptions)
  (declare (ignore named))
  (let ((slot-names
         ;; Collect the slot-names.
         (mapcar #'(lambda (x)
                     (cond ((null x)
                            ;; If the slot-description is NIL,
                            ;;  it is in the padding of initial-offset.
                            nil)
                           ((null (car x))
                            ;; If the slot name is NIL,
                            ;;  it is the structure name.
                            ;;  This is for typed structures with names.
                            (list 'quote (cadr x)))
                           (t (car x))))
                 slot-descriptions))
        (keys
         ;; Make the keyword parameters.
         (mapcan #'(lambda (x)
                     (cond ((null x) nil)
                           ((null (car x)) nil)
                           ((null (cadr x)) (list (car x)))
                           (t (list (list  (car x) (cadr x))))))
                 slot-descriptions)))
    (cond ((consp constructor)
           ;; The case for a BOA constructor.
           ;; Dirty code!!
           ;; We must add an initial value for an optional parameter,
           ;;  if the default value is not specified
           ;;  in the given parameter list and yet the initial value
           ;;  is supplied in the slot description.
           (do ((a (cadr constructor) (cdr a)) (l nil) (vs nil))
               ((endp a)
                ;; Add those options that do not appear in the parameter list
                ;;  as auxiliary paramters.
                ;; The parameters are accumulated in the variable VS.
                (setq keys
                      (nreconc (cons '&aux l)
                               (mapcan #'(lambda (k)
                                           (if (member (if (atom k) k (car k))
                                                       vs)
                                               nil
                                               (list k)))
                                       keys))))
             ;; Skip until &OPTIONAL appears.
	     (when (member (car a) lambda-list-keywords)
	       (or (eq (car a) '&optional) (push '&optional a)))
             (cond ((eq (car a) '&optional)
                    (setq l (cons '&optional l))
                    (do ((aa (cdr a) (cdr aa)) (ov) (y))
                        ((endp aa)
                         ;; Add those options that do not appear in the
                         ;;  parameter list.
                         (setq keys
                               (nreconc (cons '&aux l)
                                        (mapcan #'(lambda (k)
                                                    (if (member (if (atom k)
                                                                    k
                                                                    (car k))
                                                                vs)
                                                        nil
                                                        (list k)))
                                                keys)))
                         (return nil))
                      (when (member (car aa) lambda-list-keywords)
                            (when (eq (car aa) '&rest)
                                  ;; &REST is found.
                                  (setq l (cons '&rest l))
                                  (setq aa (cdr aa))
                                  (unless (and (not (endp aa))
                                               (symbolp (car aa)))
                                          (illegal-boa))
                                  (setq vs (cons (car aa) vs))
                                  (setq l (cons (car aa) l))
                                  (setq aa (cdr aa))
                                  (when (endp aa)
                                        (setq keys
                                              (nreconc
                                               (cons '&aux l)
                                               (mapcan
                                                #'(lambda (k)
                                                    (if (member (if (atom k)
                                                                    k
                                                                    (car k))
                                                                vs)
                                                        nil
                                                        (list k)))
                                                keys)))
                                        (return nil)))
                            ;; &AUX should follow.
                            (unless (eq (car aa) '&aux)
                                    (illegal-boa))
                            (setq l (cons '&aux l))
                            (do ((aaa (cdr aa) (cdr aaa)))
                                ((endp aaa))
                              (setq l (cons (car aaa) l))
                              (cond ((and (atom (car aaa))
                                          (symbolp (car aaa)))
                                     (setq vs (cons (car aaa) vs)))
                                    ((and (symbolp (caar aaa))
                                          (or (endp (cdar aaa))
                                              (endp (cddar aaa))))
                                     (setq vs (cons (caar aaa) vs)))
                                    (t (illegal-boa))))
                            ;; End of the parameter list.
                            (setq keys
                                  (nreconc l
                                           (mapcan
                                            #'(lambda (k)
                                                (if (member (if (atom k)
                                                                k
                                                                (car k))
                                                            vs)
                                                    nil
                                                    (list k)))
                                            keys)))
                            (return nil))
                      ;; Checks if the optional paramter without a default
                      ;;  value has a default value in the slot-description.
                      (if (and (cond ((atom (car aa)) (setq ov (car aa)) t)
                                     ((endp (cdar aa)) (setq ov (caar aa)) t)
                                     (t nil))
                               (setq y (member ov
                                               keys
                                               :key
                                               #'(lambda (x)
                                                   (if (consp x)
                                                       ;; With default value.
                                                       (car x))))))
                          ;; If no default value is supplied for
                          ;;  the optional parameter and yet appears
                          ;;  in KEYS with a default value,
                          ;;  then cons the pair to L,
                          (setq l (cons (car y) l))
                          ;;  otherwise cons just the parameter to L.
                          (setq l (cons (car aa) l)))
                      ;; Checks the form of the optional parameter.
                      (cond ((atom (car aa))
                             (unless (symbolp (car aa))
                                     (illegal-boa))
                             (setq vs (cons (car aa) vs)))
                            ((not (symbolp (caar aa)))
                             (illegal-boa))
                            ((or (endp (cdar aa)) (endp (cddar aa)))
                             (setq vs (cons (caar aa) vs)))
                            ((not (symbolp (caddar aa)))
                             (illegal-boa))
                            ((not (endp (cdddar aa)))
                             (illegal-boa))
                            (t
                             (setq vs (cons (caar aa) vs))
                             (setq vs (cons (caddar aa) vs)))))
                    ;; RETURN from the outside DO.
                    (return nil))
                   (t
                    (unless (symbolp (car a))
                            (illegal-boa))
                    (setq l (cons (car a) l))
                    (setq vs (cons (car a) vs)))))
           (setq constructor (car constructor)))
          (t
           ;; If not a BOA constructor, just cons &KEY.
           (setq keys (cons '&key keys))))
    (cond ((null type)
           `(defun ,constructor ,keys
              (si:make-structure ',name ,@slot-names)))
          ((or (eq type 'vector)
               (and (consp type) (eq (car type) 'vector)))
           `(defun ,constructor ,keys
              (vector ,@slot-names)))
          ((eq type 'list)
           `(defun ,constructor ,keys
              (list ,@slot-names)))
          ((error "~S is an illegal structure type" type)))))

(defun illegal-boa ()
  (error "An illegal BOA constructor."))

(defun make-predicate (name predicate type named name-offset)
  (cond ((null type))
	 ; done in define-structure
        ((or (eq type 'vector)
             (and (consp type) (eq (car type) 'vector)))
         ;; The name is at the NAME-OFFSET in the vector.
         (unless named (error "The structure should be named."))
         `(defun ,predicate (x)
            (and (vectorp x)
                 (> (the fixnum (length x)) ,name-offset)
                 (eq (aref (the (vector t) x) ,name-offset) ',name))))
        ((eq type 'list)
         ;; The name is at the NAME-OFFSET in the list.
         (unless named (error "The structure should be named."))
         (if (= name-offset 0)
             `(defun ,predicate (x)
                     (and (consp x)
                          (eq (car x) ',name)))
             `(defun ,predicate (x)
                     (do ((i ,name-offset (1- i))
                          (z x (cdr z)))
                         ((= i 0) (and (consp z) (eq (car z) ',name)))
			 (declare (fixnum i))
                       (unless (consp z) (return nil))))))
        ((error "~S is an illegal structure type."))))


;;; PARSE-SLOT-DESCRIPTION parses the given slot-description
;;;  and returns a list of the form:
;;;        (slot-name default-init slot-type read-only offset)

(defun parse-slot-description (slot-description offset)
  (let (slot-name default-init slot-type read-only)
    (cond ((atom slot-description)
           (setq slot-name slot-description))
          ((endp (cdr slot-description))
           (setq slot-name (car slot-description)))
          (t
           (setq slot-name (car slot-description))
           (setq default-init (cadr slot-description))
           (do ((os (cddr slot-description) (cddr os)) (o) (v))
               ((endp os))
             (setq o (car os))
             (when (endp (cdr os))
                   (error "~S is an illegal structure slot option."
                          os))
             (setq v (cadr os))
             (case o
               (:type (setq slot-type v))
               (:read-only (setq read-only v))
               (t
                (error "~S is an illegal structure slot option."
                         os))))))
    (list slot-name default-init slot-type read-only offset)))


;;; OVERWRITE-SLOT-DESCRIPTIONS overwrites the old slot-descriptions
;;;  with the new descriptions which are specified in the
;;;  :include defstruct option.

(defun overwrite-slot-descriptions (news olds)
  (if (null olds)
      nil
      (let ((sds (member (caar olds) news :key #'car)))
        (cond (sds
               (when (and (null (cadddr (car sds)))
                          (cadddr (car olds)))
                     ;; If read-only is true in the old
                     ;;  and false in the new, signal an error.
                     (error "~S is an illegal include slot-description."
                            sds))
	       ;; If
	       (setf (caddr (car sds))
		     (best-array-element-type (caddr (car sds))))
	       (when (not  (equal (normalize-type (or (caddr (car sds)) t))
				 (normalize-type (or (caddr (car olds)) t))))
		     (error "Type mismmatch for included slot ~a" (car sds)))
		     (cons (list (caar sds)
                           (cadar sds)
                           (caddar sds)
                           (cadddr (car sds))
                           ;; The offset if from the old.
                           (car (cddddr (car olds))))
                     (overwrite-slot-descriptions news (cdr olds))))
              (t
               (cons (car olds)
                     (overwrite-slot-descriptions news (cdr olds))))))))

(defvar *all-t-s-type* (make-array 50 :element-type 'unsigned-char :static t))
(defvar *alignment-t* (alignment t))

(defun make-t-type (n include slot-descriptions &aux i)
  (let ((res  (make-array n :element-type 'unsigned-char :static t)))
    (when include
	  (let ((tem (get include 's-data))raw)
	    (or tem (error "Included structure undefined ~a" include))
	    (setq raw (s-data-raw tem))
	  (dotimes (i (min n (length raw)))
		   (setf (aref res i) (aref raw i)))))
    (dolist (v slot-descriptions)
	    (setq i (nth 4 v))
	    (let ((type (third v)))
	      (cond ((<= (the fixnum (alignment type)) *alignment-t*)
		     (setf (aref res i) (aet-type type))))))
    (cond ((< n (length *all-t-s-type*))
	   (dotimes (i n)
		  (cond ((not (eql (the fixnum (aref res i)) 0))
			 (return-from make-t-type res))))
	   *all-t-s-type*)
	  (t res))))

(defvar *standard-slot-positions*
  (let ((ar (make-array 50 :element-type 'unsigned-short
			:static t))) 
    (dotimes (i 50)
	     (declare (fixnum i))
	     (setf (aref ar i)(*  (size-of t) i)))
    ar))

(eval-when (compile )
(proclaim '(function round-up (fixnum fixnum ) fixnum))
)

(defun round-up (a b)
  (declare (fixnum a b))
  (setq a (ceiling a b))
  (the fixnum (* a b)))


(defun get-slot-pos (leng include slot-descriptions &aux type small-types
			  has-holes) 
  (declare (special *standard-slot-positions*)) include
  (dolist (v slot-descriptions)
	  (when (and v (car v))
		(setf type 
		      (best-array-element-type (caddr v))
		      (caddr v) type)
		(let ((val (second v)))
		  (unless (typep val type)
			  (if (and (symbolp val)
				   (constantp val))
			      (setf val (symbol-value val)))
			  (and (constantp val)
			       (setf (cadr v) (coerce val type)))))
		(cond ((memq type '(signed-char unsigned-char
						short unsigned-short
					 long-float
					 bit))
		       (setq small-types t)))))
  (cond ((and (null small-types)
	      (< leng (length *standard-slot-positions*))
	      (list  *standard-slot-positions* (* leng  (size-of t)) nil)))
	(t (let ((ar (make-array leng :element-type 'unsigned-short
				 :static t))
		 (pos 0)(i 0)(align 0)type (next-pos 0))
	     (declare (fixnum pos i align next-pos))
	     ;; A default array.
		   
	     (dolist
	       (v slot-descriptions)
	       (setq type (caddr v))
	       (setq align (alignment type))
	       (unless (<= align *alignment-t*)
		       (setq type t)
		       (setf (caddr v) t)
		       (setq align *alignment-t*)
		       (setq v (nconc v '(t))))
	       (setq next-pos (round-up pos align))	
	       (or (eql pos next-pos) (setq has-holes t))
	       (setq pos next-pos)
	       (setf (aref ar i) pos)
	       (incf pos (size-of type))
	       (incf i))
	     (list ar (round-up pos (size-of t)) has-holes)
	     ))))




	       
		       
		       
		       
		       
		       
		       
		     
	     
	 
	 


		      		      
				
			      
	       
	 

(defun define-structure (name conc-name no-conc type named slot-descriptions copier
			      static include print-function constructors
			      offset predicate &optional documentation no-funs
			      &aux def leng)
  (and (consp type) (eq (car type) 'vector)(setq type 'vector))
  (setq leng(length slot-descriptions))
  (dolist (x slot-descriptions)
	   (and x (car x)
		(apply #'make-access-function
                                     name conc-name no-conc type named include no-funs
                                     x )))
  (when (and copier (not no-funs))
	(setf (symbol-function copier)
	      (ecase type
		((nil) #'si::copy-structure)
		(list #'copy-list)
		(vector #'copy-seq))))
		

  (cond ((and (null type)
	      (eq name 's-data))
	 ;bootstrapping code!
	 (setq def (make-s-data-structure
		     (make-array (* leng (size-of t))
				 :element-type 'string-char :static t)
		     (make-t-type leng nil slot-descriptions)
		     *standard-slot-positions*
		     slot-descriptions
		     t
		     ))
	 )
	(t
	  (let (slot-position
		 (size 0) has-holes
		 (include-str (and include
				   (get include 's-data))))
	    (when include-str
		  (cond ((and (s-data-frozen include-str)
			      (or (not (s-data-included include-str))
				  (not (let ((te (get name 's-data)))
					 (and te
					      (eq (s-data-includes 
						    te)
						  include-str))))))
			 (warn " ~a was frozen but now included"
			       include)))
		  (pushnew name (s-data-included include-str)))
	    (when (null type)
		 (setf slot-position
		       (get-slot-pos leng include slot-descriptions))
		 (setf size (cadr slot-position)
		       has-holes (caddr slot-position)
		       slot-position (car slot-position)
		       ))
	  (setf def (make-s-data
		       :name name
		       :length leng
		       :raw
		       (and (null type)
			    (make-t-type leng include slot-descriptions))
		       :slot-position slot-position
		       :size size
		       :has-holes has-holes
		       :staticp static
		       :includes include-str
		       :print-function print-function
		       :slot-descriptions slot-descriptions
		       :constructors constructors
		       :offset offset
		       :type type
		       :named named
		       :documentation documentation
		       :conc-name conc-name)))))
  (let ((tem (get name 's-data)))
    (cond ((eq name 's-data)
	   (if tem (warn "not replacing s-data property"))
	   (or tem (setf (get name 's-data) def)))
	  (tem 
	   (check-s-data tem def name))
	  (t  (setf (get name 's-data) def)))
    (when documentation
	  (setf (get name 'structure-documentation)
		documentation))
    (when (and  (null type)  predicate)
	  (record-fn predicate 'defun '(t) t)
	  (or no-funs
	      (setf (symbol-function predicate)
		    #'(lambda (x)
			(si::structure-subtype-p x name))))
	  (setf (get predicate 'compiler::co1)
		'compiler::co1structure-predicate)
	  (setf (get predicate 'struct-predicate) name)
	  )
  ) nil)

		  
(defmacro defstruct (name &rest slots)
  (let ((slot-descriptions slots)
        options
        conc-name
        constructors default-constructor no-constructor
        copier
        predicate predicate-specified
        include
        print-function type named initial-offset
        offset name-offset
        documentation
	static
	(no-conc nil))

    (when (consp name)
	  ;; The defstruct options are supplied.
          (setq options (cdr name))
          (setq name (car name)))

    ;; The default conc-name.
    (setq conc-name (si:string-concatenate (string name) "-"))

    ;; The default constructor.
    (setq default-constructor
          (intern (si:string-concatenate "MAKE-" (string name))))

    ;; The default copier and predicate.
    (setq copier
          (intern (si:string-concatenate "COPY-" (string name)))
          predicate
          (intern (si:string-concatenate (string name) "-P")))

    ;; Parse the defstruct options.
    (do ((os options (cdr os)) (o) (v))
        ((endp os))
	(cond ((and (consp (car os)) (not (endp (cdar os))))
	       (setq o (caar os) v (cadar os))
	       (case o
		 (:conc-name
		   (if (null v) 
		       (progn
			 (setq conc-name "")
			 (setq no-conc t))
		     (setq conc-name v)))
		 (:constructor
		   (if (null v)
		       (setq no-constructor t)
		     (if (endp (cddar os))
			 (setq constructors (cons v constructors))
		       (setq constructors (cons (cdar os) constructors)))))
		 (:copier (setq copier v))
		 (:static (setq static v))
		 (:predicate
		   (setq predicate v)
		   (setq predicate-specified t))
		 (:include
		   (setq include (cdar os))
		   (unless (get v 's-data)
			   (error "~S is an illegal included structure." v)))
		 (:print-function
		  (and (consp v) (eq (car v) 'function)
		       (setq v (second v)))
		  (setq print-function v))
		 (:type (setq type v))
		 (:initial-offset (setq initial-offset v))
		 (t (error "~S is an illegal defstruct option." o))))
	      (t
		(if (consp (car os))
		    (setq o (caar os))
		  (setq o (car os)))
		(case o
		  (:constructor
		    (setq constructors
			  (cons default-constructor constructors)))
		  ((:copier :predicate :print-function))
		  (:conc-name
		   (progn
		     (setq conc-name "")
		     (setq no-conc t)))
		  (:named (setq named t))
		  (t (error "~S is an illegal defstruct option." o))))))

    (setq conc-name (intern (string conc-name)))

    (and include (not print-function)
	 (setq print-function (s-data-print-function (get (car include)  's-data))))

    ;; Skip the documentation string.
    (when (and (not (endp slot-descriptions))
               (stringp (car slot-descriptions)))
          (setq documentation (car slot-descriptions))
          (setq slot-descriptions (cdr slot-descriptions)))
    
    ;; Check the include option.
    (when include
          (unless (equal type
			 (s-data-type (get  (car include) 's-data)))
                  (error "~S is an illegal structure include."
                         (car include))))

    ;; Set OFFSET.
    (cond ((null include)
           (setq offset 0))
          (t 
	    (setq offset (s-data-offset (get (car include) 's-data)))))

    ;; Increment OFFSET.
    (when (and type initial-offset)
          (setq offset (+ offset initial-offset)))
    (when (and type named)
          (setq name-offset offset)
          (setq offset (1+ offset)))

    ;; Parse slot-descriptions, incrementing OFFSET for each one.
    (do ((ds slot-descriptions (cdr ds))
         (sds nil))
        ((endp ds)
         (setq slot-descriptions (nreverse sds)))
	(setq sds (cons (parse-slot-description (car ds) offset) sds))
	(setq offset (1+ offset)))

    ;; If TYPE is non-NIL and structure is named,
    ;;  add the slot for the structure-name to the slot-descriptions.
    (when (and type named)
          (setq slot-descriptions
                (cons (list nil name) slot-descriptions)))

    ;; Pad the slot-descriptions with the initial-offset number of NILs.
    (when (and type initial-offset)
          (setq slot-descriptions
                (append (make-list initial-offset) slot-descriptions)))

    ;; Append the slot-descriptions of the included structure.
    ;; The slot-descriptions in the include option are also counted.
    (cond ((null include))
          ((endp (cdr include))
           (setq slot-descriptions
                 (append (s-data-slot-descriptions
			   (get (car include) 's-data))
                         slot-descriptions)))
          (t
	    (setq slot-descriptions
		  (append (overwrite-slot-descriptions
			    (mapcar #'(lambda (sd)
					(parse-slot-description sd 0))
				    (cdr include))
			    (s-data-slot-descriptions
			      (get (car include) 's-data)
                              ))
			  slot-descriptions))))

    (cond (no-constructor
	    ;; If a constructor option is NIL,
	    ;;  no constructor should have been specified.
	    (when constructors
		  (error "Contradictory constructor options.")))
          ((null constructors)
	   ;; If no constructor is specified,
	   ;;  the default-constructor is made.
           (setq constructors (list default-constructor))))

    ;; We need a default constructor for the sharp-s-reader
    (or (member t (mapcar 'symbolp  constructors))
	(push (intern (string-concatenate "__si::" default-constructor))
		      constructors))

    ;; Check the named option and set the predicate.
    (when (and type (not named))
          (when predicate-specified
                (error "~S is an illegal structure predicate."
                       predicate))
          (setq predicate nil))

    (when include (setq include (car include)))

    ;; Check the print-function.
    (when (and print-function type)
          (error "A print function is supplied to a typed structure."))
    
    `(progn
       (define-structure ',name  ',conc-name ',no-conc ',type
	 ',named ',slot-descriptions ',copier ',static ',include ',print-function ',constructors 
	 ',offset ',predicate ',documentation 
	 )

       ,@(mapcar #'(lambda (constructor)
		     (make-constructor name constructor type named
				       slot-descriptions))
		 constructors)
       ,@(if (and type predicate)
	     (list (make-predicate name predicate type named
				   name-offset)))
       ',name
       )))

;; First several fields of this must coincide with the C structure
;; s_data (see object.h).


(defstruct s-data name
		 (length 0 :type fixnum)
		 raw
		 included
		 includes
		 staticp
		 print-function
		 slot-descriptions
		 slot-position 
		 (size 0 :type fixnum)
		 has-holes
		 frozen
		 documentation
		 constructors
		 offset
		 named
		 type
		 conc-name
		 )


(defun check-s-data (tem def name)
  (cond ((s-data-included tem)
	 (setf (s-data-included def)(s-data-included tem))))
  (cond ((s-data-frozen tem)
	 (setf (s-data-frozen def) t)))
  (unless (equalp def tem)
	  (warn "structure ~a is changing" name)
	  (setf (get name 's-data) def)))
(defun freeze-defstruct (name)
  (let ((tem (and (symbolp name) (get name 's-data))))
    (if tem (setf (s-data-frozen tem) t))))


;;; The #S reader.

(defun sharp-s-reader (stream subchar arg)
  (declare (ignore subchar))
  (when (and arg (null *read-suppress*))
        (error "An extra argument was supplied for the #S readmacro."))
  (let* ((l (prog1 (read stream t nil t)
	      (if *read-suppress*
		  (return-from sharp-s-reader nil))))
	 (sd
	   (or (get (car l) 's-data)
	       
	       (error "~S is not a structure." (car l)))))
    
    ;; Intern keywords in the keyword package.
    (do ((ll (cdr l) (cddr ll)))
        ((endp ll)
         ;; Find an appropriate construtor.
         (do ((cs (s-data-constructors sd) (cdr cs)))
             ((endp cs)
              (error "The structure ~S has no structure constructor."
                     (car l)))
           (when (symbolp (car cs))
                 (return (apply (car cs) (cdr l))))))
      (rplaca ll (intern (string (car ll)) 'keyword)))))


;; Set the dispatch macro.
(set-dispatch-macro-character #\# #\s 'sharp-s-reader)
(set-dispatch-macro-character #\# #\S 'sharp-s-reader)

;; Examples from Common Lisp Reference Manual.

#|
(defstruct ship
  x-position
  y-position
  x-velocity
  y-velocity
  mass)

(defstruct person name (age 20 :type signed-char) (eyes 2 :type signed-char)
							sex)
(defstruct person name (age 20 :type signed-char) (eyes 2 :type signed-char)
							sex)
(defstruct person1 name (age 20 :type fixnum)
							sex)

(defstruct joe a (a1 0 :type (mod  30)) (a2 0 :type (mod  30))
  (a3 0 :type (mod  30)) (a4 0 :type (mod 30)) )

;(defstruct person name age sex)

(defstruct (astronaut (:include person (age 45 :type fixnum))
                      (:conc-name astro-))
  helmet-size
  (favorite-beverage 'tang))

(defstruct (foo (:constructor create-foo (a
                                          &optional b (c 'sea)
                                          &rest d
                                          &aux e (f 'eff))))
  a (b 'bee) c d e f)

(defstruct (binop (:type list) :named (:initial-offset 2))
  (operator '?)
  operand-1
  operand-2)

(defstruct (annotated-binop (:type list)
                            (:initial-offset 3)
                            (:include binop))
  commutative
  associative
  identity)

|#
