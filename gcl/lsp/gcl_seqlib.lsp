;; -*-Lisp-*-
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


;;;;   seqlib.lsp
;;;;
;;;;                           sequence routines


;; (in-package 'lisp)


;; (export '(copy-seq reduce fill replace length elt every some notevery notany
;;           remove remove-if remove-if-not
;;           delete delete-if delete-if-not
;;           count count-if count-if-not
;;           substitute substitute-if substitute-if-not
;;           nsubstitute nsubstitute-if nsubstitute-if-not
;;           find find-if find-if-not
;;           position position-if position-if-not
;;           remove-duplicates delete-duplicates
;;           mismatch search
;; 	  with-hash-table-iterator
;;           sort stable-sort merge))


(in-package :system)


(eval-when (compile eval)

	   (defmacro comp-key (key) 
	     `(if (eq ,key #'identity) 0 1))
	   
	   (defmacro do-key (key n x) 
	     (let ((xx (sgen)))
	       `(let ((,xx ,x)) (case ,n (0 ,xx) (otherwise (funcall ,key ,xx))))))
	   
	   (defmacro comp-red (f) 
	     `(let ((,f ,f))
		(if (eq ,f #'+) 0
		  (if (eq ,f #'*) 1 
		    (if (eq ,f #'min) 2
		      (if (eq ,f #'max) 3
			(if (eq ,f #'logior) 4 
			  (if (eq ,f #'logxor) 5
			    (if (eq ,f #'logand) 6
			      (if (eq ,f #'cons) 7
				(if (eq ,f #'list) 8 9)))))))))))

	   (defmacro comp-test (test test-not) 
	     `(+ (if ,test-not 1 0)
		 (let ((,test ,test))
		   (if (eq ,test #'eq) 0
		     (if (eq ,test #'eql) 2
		       (if (eq ,test #'equal) 4
			 (if (eq ,test #'equalp) 6 
			   (if (eq ,test #'funcall) 8 10))))))))
	   
	   (defmacro do-test (test nn x y) 
	     (let ((r (sgen))(n (sgen))(nx (sgen))(ny (sgen)))
	       `(let* ((,n ,nn)(,nx ,x)(,ny ,y)
		       (,r (case ,n 
				 ((0 1) (eq ,nx ,ny))
				 ((2 3) (eql ,nx ,ny))
				 ((4 5) (equal ,nx ,ny))
				 ((6 7) (equalp ,nx ,ny))
				 ((8 9) (funcall ,nx ,ny))
				 (otherwise (funcall ,test ,nx ,ny)))))
		  (if (= (logand ,n 1) 1) (not ,r) ,r))))

	   (defmacro do-red (f nn x y) 
	     (let ((n (sgen))(nx (sgen))(ny (sgen)))
	       `(let* ((,n ,nn)(,nx ,x)(,ny ,y))
		  (case ,n 
			(0 (+ ,nx ,ny))
			(1 (* ,nx ,ny))
			(2 (min ,nx ,ny))
			(3 (max ,nx ,ny))
			(4 (logior ,nx ,ny))
			(5 (logxor ,nx ,ny))
			(6 (logand ,nx ,ny))
			(7 (cons ,nx ,ny))
			(8 (list ,nx ,ny))
			(otherwise (funcall f ,nx ,ny))))))

	   (defmacro bump-test (nn i) 
	     (let ((n (sgen)))
	       `(let ((,n ,nn))
		  (case ,n 
			((0 1) ,n) 
			((2 3) (- ,n (if (eql-is-eq ,i) 2 0)))
			((4 5) (- ,n (if (equal-is-eq ,i) 4 0)))
			((6 7) (- ,n (if (equalp-is-eq ,i) 6 0)))
			(otherwise ,n)))))
	   
;; 	   (defmacro bump-test-seq (n s) 
;; 	     `(case ,n 
;; 		    ((0 1) ,n) 
;; 		    ((2 3) (- ,n (if (every 'eql-is-eq ,s) 2 0))
;; 		     ((4 5) (- ,n (if (evrey 'equal-is-eq ,s) 4 0)))
;; 		     ((6 7) (- ,n (if (every 'equalp-is-eq ,s) 6 0)) 
;; 		      (otherwise ,n)))))
	   
	   (defun array-type-size (tp)
	     (ecase tp
		    (bit 1)
		    ((character non-negative-char signed-char unsigned-char) char-length)
		    ((non-negative-short signed-short unsigned-short) short-length)
		    ((non-negative-int signed-int unsigned-int) int-length)
		    ((non-negative-fixnum fixnum t) fixnum-length)
		    (short-float (* 4 char-length));fixme!
		    (long-float (* 8 char-length));FIXME!
		    ))

	   (defun group-array-types (x)
	     (when x
	       (let* ((y (group-array-types (cdr x)))(z (rassoc (cdar x) y)))
		 (cond (z (push (caar x) (car z)) y) ((cons (cons (list (caar x)) (cdar x)) y))))))
	   
	   (defconstant +grouped-array-types+ (mapcar 'car 
						      (group-array-types 
						       (mapcar (lambda (x) (cons x (array-type-size x))) +array-types+))))
	   
	   (defmacro comp-array (aet);FIXME position can't run in compiler on constant types
	     (let ((r (sgen)))
	       `(let ((,r ,aet))
		  (ecase ,r
			 ,@(let ((k -1)) (mapcar (lambda (x) `(,x ,(incf k))) +grouped-array-types+))))))
	   
	   ;; (defmacro set-same-array (n a i b j)
	   ;;   `(case ,n
	   ;; 	    ,@(let ((k -1)) 
	   ;; 		(mapcar (lambda (x) 
	   ;; 			  `(,(incf k) (let ((,a ,a),@(unless (eq a b) `((,b ,b))))
	   ;; 					(declare ((array ,(car x)) ,a ,@(unless (eq a b) `(,b))))
	   ;; 					(setf (aref ,a ,i)(aref ,b ,j))))) +grouped-array-types+))))
	   
	   (defmacro set-same-array (n a i b j)
	     `(typecase
	       ,a
	       ,@(mapcar (lambda (x) `((vector ,x) (setf (aref ,a ,i) (aref ,b ,j)))) +array-types+)))

	   (defmacro mrotatef (a b &aux (s (sgen "MRF-S"))) `(let ((,s ,a)) (setf ,a ,b ,b ,s)))

	   ;; (defmacro rotate-same-array (n a i b j)
	   ;;   `(case ,n
	   ;; 	    ,@(let ((k -1)) 
	   ;; 		(mapcar (lambda (x) 
	   ;; 			  `(,(incf k) (let ((,a ,a),@(unless (eq a b) `((,b ,b))))
	   ;; 					(declare ((array ,(car x)) ,a ,@(unless (eq a b) `(,b))))
	   ;; 					(mrotatef (aref ,a ,i)(aref ,b ,j))))) +grouped-array-types+))))
	   
	   (defmacro rotate-same-array (n a i b j)
	     `(typecase
	       ,a
	       ,@(mapcar (lambda (x) `((vector ,x) (mrotatef (aref ,a ,i) (aref ,b ,j)))) +array-types+)))


	   (defmacro raref (a seq n i j l) 
	     `(if ,l 
		  (mrotatef (car (aref ,a ,i)) (car (aref ,a ,j)))
		(rotate-same-array ,n ,seq ,i ,seq ,j)))

	   (defmacro garef (a seq i l) `(if ,l (car (aref ,a ,i)) (aref ,seq ,i)))

	   (defconstant +seq-ll+ '(from-end key start end))

	   (defmacro defnseq (n (il seq countp testp ifp &optional ivp) &body body)
	     `(progn
		(defun ,n ,(append `(,@il ,seq &key) 
				   (when ivp (list (list 'initial-value nil 'ivsp)))
				   (when testp (list 'test 'test-not))
				   (when countp (list 'count)) +seq-ll+)
		  (declare (optimize (safety 2)))
		  (check-type ,seq proper-sequence)
		  (check-type start (or null seqind))
		  (check-type end (or null seqind))
		  ,@(when countp `((check-type count (or null integer))))
		  ,@(when testp `((and test test-not (error "both test and test not supplied"))))
		  
		  (let* ,(when countp `((count (if count count array-dimension-limit))
					(count (min array-dimension-limit (max 0 count)))))
		    (let* ((startp (when start t))(start (if start start 0))
			   (endp (when end t))(end (if end end array-dimension-limit))
			   ,@(when countp `((count count)))
			   ,@(when testp `((test (or test test-not #'eql))
					   (test (if (functionp test) test (funcallable-symbol-function test)))
					   (test-comp (comp-test test test-not))))
			   (key (or key #'identity))(key (if (functionp key) key (funcallable-symbol-function key)))
			   (key-comp  (comp-key key)))
		      (let* ((l (listp s))
			     (hls (or (and from-end (or endp startp)) (not l)))
			     (ls  (if hls (length s) array-dimension-limit))
			     (end (if (< ls end) ls end)))
			,@body))))
		,@(when ifp
		    `((defun ,(intern (string-concatenate (string n) "-IF")) 
			,(append `(,@il ,seq &key) (when countp (list 'count)) +seq-ll+)
			(declare (optimize (safety 2)))
			(,n ,@il ,seq :test 'funcall :key key :start start :end end :from-end from-end 
			    ,@(when countp `(:count count))))
		      (defun ,(intern (string-concatenate (string n) "-IF-NOT")) 
			,(append `(,@il ,seq &key) (when countp (list 'count)) +seq-ll+)
			(declare (optimize (safety 2)))
			(,n ,@il ,seq :test-not 'funcall :key key :start start :end end :from-end from-end 
			    ,@(when countp `(:count count)))))))))


(defun vec-length (x)
  (declare (vector x))
  (if (array-has-fill-pointer-p x) (fill-pointer x) (array-dimension x 0)))

(defun length (x)
  (declare (optimize (safety 2)))
  (check-type x proper-sequence)
  (labels ((ll (x &optional (i 0)) 
	       (declare (seqind i))
	       (if (endp x) i (ll (cdr x) (1+ i)))))
	  (if (listp x)
	      (ll x 0)
	      (if (array-has-fill-pointer-p x) (fill-pointer x) (array-dimension x 0)))))

;; (defun length (x)
;;   (declare (optimize (safety 2)))
;;   (check-type x proper-sequence)
;;   (if (listp x)
;;       (cond ((endp x) 0) 
;; 	    ((endp (setq x (cdr x))) 1)
;; 	    ((endp (setq x (cdr x))) 2)
;; 	    ((endp (setq x (cdr x))) 3)
;; 	    ((endp (setq x (cdr x))) 4)
;; 	    ((do ((i 5 (1+ i))(x (cdr x) (cdr x))) ((endp x) i) (declare (seqind i)))))
;;     (vec-length x)))
  
;  (if (listp x) (do ((i 0 (1+ i))(x x (cdr x))) ((endp x) i) (declare (seqind i))) (vec-length x)))

(defun elt (seq n)
  (declare (optimize (safety 2)))
  (check-type seq proper-sequence)
  (check-type n seqind)
  (let ((q 0) r)
    (cond ((when (listp seq) 
	     (do ((l seq (cdr l))
		  (i 0 (1+ i))) 
		 ((or (endp l) (>= i n))
		  (setq q i r l)))) (car r))
	  ((when (< n (setq q (length seq))) (setq r seq))
	   (aref r n))
	  ((error 'type-error :datum n :expected-type `(integer 0 (,q)))))))

(defun nreverse (s &aux (n 0))
  (declare (optimize (safety 1)))
  (check-type s proper-sequence)
  (labels ((lr (tl &optional hd) (if tl (lr (cdr tl) (rplacd tl hd)) hd))
	   (la (i j) (cond ((< i j) (rotate-same-array n s i s j) (la (1+ i) (1- j))) (s))))
	  (cond ((listp s) (lr s)) ((setq n (comp-array (array-element-type s))) (la 0 (1- (length s)))))))


(defun reverse (s &aux (n 0) aet (ls 0) r)
  (declare (optimize (safety 2)))
  (check-type s sequence);FIXME
  (labels ((lr (tl &optional hd) (if tl (lr (cdr tl) (cons (car tl) hd)) hd))
	   (la (i j) (cond ((< i ls) (set-same-array n r i s j) (la (1+ i) (1- j))) (r))))
	  (cond ((listp s) (lr s))
		((setq aet (array-element-type s) n (comp-array aet) ls (length s) r (make-array ls :element-type aet))
		 (la 0 (1- ls))))))

;; (defun nreverse (s)
;;   (declare (optimize (safety 1)))
;;   (check-type s proper-sequence)
;;   (cond ((listp s) (do ((p)(cdp)(pp s)) ((endp pp) p)
;;   		       (setq cdp (cdr pp) p (rplacd pp p) pp cdp)))
;;   	((let ((ls (length s))(n (comp-array (array-element-type s))))
;;   	   (do ((i 0 (1+ i))(j (1- ls) (1- j))) ((>= i j) s)
;;   	       (rotate-same-array n s i s j))))))

;; (defun reverse (s)
;;   (declare (optimize (safety 2)))
;;   (check-type s sequence)
;;   (cond ((listp s) (do ((r)(p s (cdr p))) ((endp p) r)
;; 		       (setq r (cons (car p) r))))
;; 	((let* ((ls (length s))
;; 		(aet (array-element-type s))
;; 		(r (make-array ls :element-type aet))
;; 		(n (comp-array aet)))
;; 	   (do ((i 0 (1+ i))(j (1- ls) (1- j))) ((or (>= i ls) (< j 0)) r)
;; 	       (set-same-array n r i s j))))))

(defun subseq (s start &optional end)
  (declare (optimize (safety 1)))
  (check-type s sequence)
  (check-type start seqind)
  (unless end (setq end array-dimension-limit))
  (check-type end seqind)

  (let ((s s)(start start)(end end))
    (declare (sequence s) (seqind start end))
    (cond ((listp s)
	   (do ((i start (1+ i))(r)(rp)(p (nthcdr start s) (cdr p))) ((or (>= i end) (endp p)) r)
	       (let ((tmp (cons (car p) nil))) (setq rp (if rp (cdr (rplacd rp tmp)) (setq r tmp))))))
	  ((let* ((ls (length s))
		  (end (if (> end ls) ls end))
		  (aet (array-element-type s))
		  (r (make-array (- end start) :element-type aet))
		  (ac (comp-array aet))
		  (lr (length r)))
	     (do ((j 0 (1+ j))(i start (1+ i))) ((or (>= i end) (>= j lr)) r)
		  (set-same-array ac r j s i)))))))

(defnseq delete-duplicates (nil s nil t nil)

  (when from-end 
    (setq s (nreverse s))
    (let ((tmp start))
      (setq start (if endp (- ls end) 0) end (if hls (- ls tmp) array-dimension-limit))))
  (let* ((r (unless (and l (= start 0)) s))(rp (when (and l (> start 0)) (nthcdr (1- start) r))))
  (do ((i start (1+ i))
       (p (when l (if rp (cdr rp) s)) (cdr p))
       (ri start))
      ((or (>= i end) (when l (endp p)))
       (let ((r (cond (l (when rp (rplacd rp p)) (or r p))
		      ((do ((m i (1+ m))) ((>= m ls) 
					   (cond ((array-has-fill-pointer-p r) 
						  (setf (fill-pointer r) ri) r)
						 ((subseq r 0 ri))))
			       (setf (aref r ri) (aref r m) ri (1+ ri)))))))
	 (if from-end (nreverse r) r)))
    (declare (seqind ri))
    (let ((el1 (do-key key key-comp (if l (car p) (aref s i)))))
      (unless
	  (do ((j (1+ i) (1+ j))
	       (q (cdr p) (cdr q))
	       (test-comp (bump-test test-comp el1)))
	      ((or (>= j end) (when l (endp q))))
	    (let ((el2 (do-key key key-comp (if l (car q) (aref s j)))))
	      (when (do-test test test-comp el1 el2)
		(return t))))
	(cond (l (setq rp (if rp (cdr (rplacd rp p)) p) r (or r p)))
	      ((setf (aref r ri) (aref r i) ri (1+ ri)))))))))

(defnseq remove-duplicates (nil s nil t nil)

  (let* ((aet (unless l (array-element-type s)))
	 (ac  (if l 0 (comp-array aet))))
    (when from-end 
      (setq s (reverse s))
      (let ((tmp start))
	(setq start (if endp (- ls end) 0) end (if hls (- ls tmp) array-dimension-limit))))
    (do ((i start (1+ i))
	 (k 0)
	 (h s)
	 (p (when l (nthcdr start s)) (cdr p))
	 (r)(rp)(ri 0))
	((or (>= i end) (when l (endp p)))
	 (let ((r (cond (l (nconc r h))
			((not r) s)
			((do ((m k (1+ m))) ((>= m ls) (setf (fill-pointer r) ri) r) 
			   (set-same-array ac r ri s m)(setf ri (1+ ri)))))))
	   (if from-end (nreverse r) r)))
      (declare (seqind ri))
      (let* ((el1 (if l (car p) (aref s i)))
	     (el1 (do-key key key-comp el1)))
	(when
	    (do ((j (1+ i) (1+ j))
		 (q (cdr p) (cdr q))
		 (test-comp (bump-test test-comp el1)))
		((or (>= j end) (when l (endp q))))
	      (let* ((el2 (if l (car q) (aref s j)))
		     (el2 (do-key key key-comp el2)))
		(when (do-test test test-comp el1 el2)
		  (return t))))
	  (unless (or l r) (setq r (make-array ls :element-type (array-element-type s) :fill-pointer 0) ri 0))
	  (do ((m k (1+ m))(hp (when l h) (cdr hp))) ((>= m i) (setq k (1+ i) h (cdr hp)))
	    (if l 
		(let ((tmp (cons (car hp) nil))) (setq rp (if rp (cdr (rplacd rp tmp)) (setq r tmp))))
	      (progn (set-same-array ac r ri s m)(setf ri (1+ ri))))))))))


(defnseq substitute ((newitem item) s t t t)
  (let* ((test-comp (bump-test test-comp item))
	 (aet (unless l (array-element-type s)))
	 (ac  (if l 0 (comp-array aet))))
    (when from-end 
      (setq s (reverse s))
      (let ((tmp start))
	(setq start (if endp (- ls end) 0) end (if hls (- ls tmp) array-dimension-limit))))
    (do ((i start (1+ i))(k 0)(j 0)(h s)(r)(rp)
	 (p (when l (nthcdr start s)) (cdr p)))
	((or (>= i end) (>= j count) (when l (endp p)))
	 (let ((r (cond (l (nconc r h))
			((not r) s)
			((do ((m k (1+ m))) ((>= m ls) (setf (fill-pointer r) m) r) 
			     (setf (aref r m) (aref s m)))))))
	   (if from-end (nreverse r) r)))
	(let* ((el2 (do-key key key-comp (if l (car p) (aref s i)))))
	  (when (do-test test test-comp item el2)
	    (unless (or l r) (setq r (make-array ls :element-type aet :fill-pointer t)))
	    (do ((m k (1+ m))(hp (when l h) (cdr hp))) ((> m i) (setq k (1+ i) j (1+ j) h hp))
		(cond (l (let ((tmp (cons (if (eq p hp) newitem (car hp)) nil))) (setq rp (if rp (cdr (rplacd rp tmp)) (setq r tmp)))))
		      ((if (= i m) (setf (aref r m) newitem) (set-same-array ac r m s m))))))))))

(defnseq nsubstitute ((newitem item) s t t t)
  (let* ((test-comp (bump-test test-comp item)))
    (when from-end 
      (setq s (nreverse s))
      (let ((tmp start))
	(setq start (if endp (- ls end) 0) end (if hls (- ls tmp) array-dimension-limit))))
    (let* ()
      (do ((i start (1+ i))(j 0)
	   (p (when l (nthcdr start s)) (cdr p)))
	  ((or (>= i end) (>= j count) (when l (endp p))) (if from-end (nreverse s) s))
	  (let ((el2 (do-key key key-comp (if l (car p) (aref s i)))))
	    (when (do-test test test-comp item el2)
	      (incf j) 
	      (cond (l (rplaca p newitem))
		    ((setf (aref s i) newitem)))))))))

(defnseq count ((item) s nil t t)
  (let* ((test-comp (bump-test test-comp item)))
    (when from-end 
      (setq s (reverse s))
      (let ((tmp start))
	(setq start (if endp (- ls end) 0) end (if hls (- ls tmp) array-dimension-limit))))
    (do ((i start (1+ i))(j 0)
	 (p (when l (nthcdr start s)) (cdr p)))
	((or (>= i end) (when l (endp p))) j)
	(declare (seqind j));FIXME iteration counting
	(let ((el2 (do-key key key-comp (if l (car p) (aref s i)))))
	  (when (do-test test test-comp item el2)
	    (incf j))))))

(defnseq position ((item) s nil t t)
  (let* ((test-comp (bump-test test-comp item))
	 (ls (if (and (not hls) from-end) (length s) ls))
	 (hls (or from-end hls)))
    (when from-end 
      (setq s (reverse s))
      (let ((tmp start))
	(setq start (if endp (- ls end) 0) end (if hls (- ls tmp) array-dimension-limit))))
    (do ((i start (1+ i))
	 (p (when l (nthcdr start s)) (cdr p)))
	((or (>= i end) (when l (endp p))))
	(let ((el2 (do-key key key-comp (if l (car p) (aref s i)))))
	  (when (do-test test test-comp item el2)
	    (return-from position (if from-end (the seqind (- ls (1+ i))) i)))))));FIXME

(defnseq find ((item) s nil t t)
  (let* ((test-comp (bump-test test-comp item))
	 (ls (if (and (not hls) from-end) (length s) ls))
	 (hls (or from-end hls)))
    (when from-end 
      (setq s (reverse s))
      (let ((tmp start))
	(setq start (if endp (- ls end) 0) end (if hls (- ls tmp) array-dimension-limit))))
    (do ((i start (1+ i))
	 (p (when l (nthcdr start s)) (cdr p)))
	((or (>= i end) (when l (endp p))))
	(let* ((el (if l (car p) (aref s i)))
	       (el2 (do-key key key-comp el)))
	  (when (do-test test test-comp item el2)
	    (return-from find el))))))


(defnseq remove ((item) s t t t)
  (let* ((test-comp (bump-test test-comp item))
	 (aet (unless l (array-element-type s)))
	 (ac  (if l 0 (comp-array aet))))
    (when from-end 
      (setq s (reverse s))
      (let ((tmp start))
	(setq start (if endp (- ls end) 0) end (if hls (- ls tmp) array-dimension-limit))))
    (let ((end1   (if l end (min (1+ end) array-dimension-limit)))
	  (count1 (if l count (min (1+ count) array-dimension-limit))))
      (do ((i start (1+ i))(k 0)(j 0)(h s)(r)(rp)(ri 0)
	   (p (when l (nthcdr start s)) (cdr p)))
	  ((or (>= i end1) (>= j count1) (when l (endp p)))
	   (let ((r (cond (l (when rp (rplacd rp h)) (or r h))
			  ((not r) s)
			  (t (setf (fill-pointer r) ri) r))))
	     (if from-end (nreverse r) r)))
	  (declare (seqind ri k));FIXME
	  (let* ((e (or (= i end) (= j count)))
		 (i (if e (if r ls k) i)))
	    (when (or e (do-test test test-comp item (do-key key key-comp (if l (car p) (aref s i)))))
	      (unless (or l e r) (setq r (make-array ls :element-type aet :fill-pointer 0)))
	      (do ((m k (1+ m))(hp (when l h) (cdr hp))) ((>= m i) (setq k (1+ i) j (1+ j) h (cdr hp)))
		  (cond (l (let ((tmp (cons (car hp) nil))) (setq rp (if rp (cdr (rplacd rp tmp)) (setq r tmp)))))
			(t (set-same-array ac r ri s m)(setf ri (1+ ri)))))))))))

(defnseq delete ((item) s t t t)
  (let* ((test-comp (bump-test test-comp item))
	 (aet (unless l (array-element-type s)))
	 (ac  (if l 0 (comp-array aet))))
    (when from-end 
      (setq s (nreverse s))
      (let ((tmp start))
	(setq start (if endp (- ls end) 0) end (if hls (- ls tmp) array-dimension-limit))))
    (let* ((r (unless (and (listp s) (= start 0)) s))(rp (when (and l (> start 0)) (nthcdr (1- start) r))));FIXME compiler aid
      (do ((i start (1+ i))(j 0)(ri start)
	   (p (when (listp s) (if rp (cdr rp) s)) (cdr p)));FIXME compiler aid
	  ((or (>= i end) (>= j count) (when l (endp p)))
	   (let ((r (cond (l (when rp (rplacd rp p)) (or r p))
			  ((do ((m i (1+ m))) 
			       ((>= m ls) 
				(cond ((array-has-fill-pointer-p r) (setf (fill-pointer r) ri) r) 
				      ((subseq r 0 ri))))
			       (set-same-array ac r ri r m)(setf ri (1+ ri)))))))
	     (if from-end (nreverse r) r)))
	  (cond ((do-test test test-comp item (do-key key key-comp (if l (car p) (aref s i)))) (incf j))
		((cond (l (setq rp (if rp (cdr (rplacd rp p)) p) r (or r p)))
		       (t (set-same-array ac r ri r i)(setf ri (1+ ri))))))))))


(defnseq reduce ((f) s nil nil nil t)
  (when from-end 
    (setq s (reverse s))
    (let ((tmp start))
      (setq start (if endp (- ls end) 0) end (if hls (- ls tmp) array-dimension-limit))))
  (do ((p (when l (nthcdr start s)) (cdr p))
       (i start (1+ i))
       (f (if (functionp f) f (funcallable-symbol-function f)))
       (red-comp (comp-red f))
       (rx initial-value (let* ((el (do-key key key-comp (if l (car p) (aref s i))))
				(ry (if from-end rx el))
				(rx (if from-end el rx)))
			  (cond (ivsp (do-red f red-comp rx ry))
				((setq ivsp t) el)))))
      ((or (>= i end) (when l (endp p))) (if ivsp rx (values (funcall f))))))


(defun every (pred seq &rest seqs)
  (declare (optimize (safety 2))
	   (:dynamic-extent seqs))
  (check-type seq proper-sequence)
  (let* ((l (listp seq)) (ls (length seqs)) (vals (make-list ls))
	 (end (reduce (lambda (y x) (min (if (listp x) array-dimension-limit (length x)) y)) seqs
		      :initial-value (if l array-dimension-limit (length seq)))))
    (declare (:dynamic-extent vals))
    (do ((i 0 (1+ i))
	 (seq seq)
	 (seqs seqs))
	((or (when l (endp seq)) (>= i end) 
	     (reduce (lambda (y x) (or y (when (listp x) (endp x)))) seqs :initial-value nil)) t)
	(do ((v vals (cdr v))(l seqs (cdr l))) ((endp l)) (setf (car v) (if (listp (car l)) (pop (car l)) (aref (car l) i))))
	(unless (apply pred (if l (pop seq) (aref seq i)) vals)
	  (return nil)))))

(defun some (pred seq &rest seqs)
  (declare (optimize (safety 2))
	   (:dynamic-extent seqs))
  (check-type seq proper-sequence)
  (let* ((l (listp seq)) (ls (length seqs)) (vals (make-list ls))
	 (end (reduce (lambda (y x) (min (if (listp x) array-dimension-limit (length x)) y)) seqs
		      :initial-value (if l array-dimension-limit (length seq)))))
    (declare (:dynamic-extent vals))
    (do ((i 0 (1+ i))
	 (seq seq)
	 (seqs seqs))
	((or (when l (endp seq)) (>= i end) 
	     (reduce (lambda (y x) (or y (when (listp x) (endp x)))) seqs :initial-value nil)))
	(do ((v vals (cdr v))(l seqs (cdr l))) ((endp l)) (setf (car v) (if (listp (car l)) (pop (car l)) (aref (car l) i))))
	(let ((r (apply pred (if l (pop seq) (aref seq i)) vals)))
	  (when r (return r))))))

(defun notevery (pred seq &rest seqs)
  (declare (optimize (safety 2))
	   (:dynamic-extent seqs))
  (not (apply 'every pred seq seqs)))

(defun notany (pred seq &rest seqs)
  (declare (optimize (safety 2))
	   (:dynamic-extent seqs))
  (not (apply 'some pred seq seqs)))


(defun seqtype (sequence)
  (cond ((listp sequence) 'list)
        ((stringp sequence) 'string)
        ((bit-vector-p sequence) 'bit-vector)
        ((vectorp sequence) (list 'array (array-element-type sequence)))
        (t (error "~S is not a sequence." sequence))))

(defmacro call-test (test test-not item keyx)
  (let ((j1 (sgen)) (j2 (sgen))(tst (sgen))(tstn (sgen)))
    `(let ((,j1 ,item)(,j2 ,keyx)(,tst ,test)(,tstn ,test-not))
       (cond (,tst (funcall ,tst ,j1 ,j2))
	     (,tstn (not (funcall ,tstn ,j1 ,j2)))
	     ((eql ,j1 ,j2))))))

;; (defmacro call-test-key (test test-not key i1 i2)
;;   (let ((j1 (sgen)) (j2 (sgen))(tst (sgen))(tstn (sgen))(ky (sgen)))
;;     `(let ((,ky ,key)(,j1 ,i1)(,j2 ,i2)(,tst ,test)(,tstn ,test-not))
;;        (if ,ky 
;; 	   (call-test ,tst ,tstn (funcall ,ky ,j1) (funcall ,ky ,j2))
;; 	 (call-test ,tst ,tstn ,i1 ,i2)))))


;; (defun check-seq-start-end (start end)
;;   (unless (and (si:fixnump start) (si:fixnump end))
;;           (error "Fixnum expected."))
;;   (when (> (the fixnum start) (the fixnum end))
;;         (error "START is greater than END.")))

(defun bad-seq-limit (x y)
  (declare (seqind x y))
  (error 'type-error :datum x  :expected-type (if (= y 0) '(integer 0) '(integer 0 y))))


(eval-when (compile eval)
(defmacro f+ (x y) `(the fixnum (+ (the fixnum ,x) (the fixnum ,y))))
(defmacro f- (x y) `(the fixnum (- (the fixnum ,x) (the fixnum ,y))))

(defmacro with-start-end (start end seq &body body)
  `(let ((,start (the-start ,start)))
     (check-type ,seq sequence)
     (let ((,seq ,seq));;FIXME
       (declare (sequence ,seq))
       (let ((,end (the-end ,end (length ,seq))))
	 (or (<= ,start ,end) (bad-seq-limit  ,start ,end))
	 ,@body))))

(defmacro with-start-end-length (start end length seq &body body)
  `(let ((,start (the-start ,start)))
     (check-type ,seq sequence)
     (let ((,seq ,seq));;FIXME
       (declare (sequence ,seq))
       (let* ((,length (length ,seq))(,end (the-end ,end ,length)))
	 (or (<= ,start ,end) (bad-seq-limit  ,start ,end))
	 ,@body)))))

(defun the-end (x y)
  (declare (seqind y))
  (cond ((seqindp x)
	 (unless (<= x y)
	   (bad-seq-limit x y))
	 x)
	((null x) y)
	(t (error 'type-error :datum x :expected-type '(or null seqind)) y)))
	
(defun the-start (x)
  (cond ((seqindp x)
	 (unless (>= x 0)
	     (bad-seq-limit x 0))
	 x)
	((null x) 0)
	(t (error 'type-error :datum x :expected-type '(or null seqind)))))
  

(defun fill (sequence item &key start end );FIXME
  (declare (optimize (safety 2)))
  (with-start-end start end sequence
		  (do ((i start (f+ 1 i)))
		      ((>= i end) sequence)
		     (declare (fixnum i))
		     (setf (elt sequence i) item))))


(defun replace (s1 s2 &key (start1 0) end1 (start2 0) end2 &aux (os1 s1) s3)
  (declare (optimize (safety 1))(notinline make-list)(dynamic-extent s3))
  (check-type s1 sequence)
  (check-type s2 sequence)
  (check-type start1 seqind)
  (check-type start2 seqind)
  (check-type end1 (or null seqind))
  (check-type end2 (or null seqind))
  (when (and (eq s1 s2) (> start1 start2))
    (setq s3 (make-list (length s2)) s2 (replace s3 s2)))
  (let* ((lp1 (listp s1)) (lp2 (listp s2))
	 (e1 (or end1 (if lp1 array-dimension-limit (length s1))))
	 (e2 (or end2 (if lp2 array-dimension-limit (length s2)))))
    (do ((i1 start1 (1+ i1))(i2 start2 (1+ i2))
	 (s1 (if lp1 (nthcdr start1 s1) s1) (if lp1 (cdr s1) s1))
	 (s2 (if lp2 (nthcdr start2 s2) s2) (if lp2 (cdr s2) s2)))
	((or (not s1) (>= i1 e1) (not s2) (>= i2 e2)) os1)
	(let ((e2 (if lp2 (car s2) (aref s2 i2))))
	  (if lp1 (setf (car s1) e2) (setf (aref s1 i1) e2))))))

;; (defun replace (sequence1 sequence2
;; 	        &key start1 end1 start2 end2)
;;   (declare (optimize (safety 2)))
;;   (with-start-end start1 end1 sequence1
;;      (with-start-end start2 end2 sequence2		  
;;     (if (and (eq sequence1 sequence2)
;;              (> start1 start2))
;;         (do* ((i 0 (f+ 1 i))
;;               (l (if (<  (f- end1 start1)
;;                          (f- end2 start2))
;;                       (f- end1 start1)
;;                       (f- end2 start2)))
;;               (s1 (f+ start1  (f+ -1 l)) (f+ -1 s1))
;;               (s2 (f+ start2  (f+ -1 l)) (f+ -1 s2)))
;;             ((>= i l) sequence1)
;;           (declare (fixnum i l s1 s2))
;;           (setf (elt sequence1 s1) (elt sequence2 s2)))
;;         (do ((i 0 (f+ 1 i))
;;              (l (if (<  (f- end1 start1)
;;                         (f- end2 start2))
;;                     (f- end1 start1)
;;                     (f- end2 start2)))
;;              (s1 start1 (f+ 1 s1))
;;              (s2 start2 (f+ 1 s2)))
;;             ((>= i l) sequence1)
;;           (declare (fixnum i l s1 s2))
;;           (setf (elt sequence1 s1) (elt sequence2 s2)))))))


;;; DEFSEQ macro.
;;; Usage:
;;;
;;;    (DEFSEQ function-name argument-list countp everywherep body)
;;;
;;; The arguments ITEM and SEQUENCE (PREDICATE and SEQUENCE)
;;;  and the keyword arguments are automatically supplied.
;;; If the function has the :COUNT argument, set COUNTP T.

;; (eval-when (eval compile)
;; (defmacro defseq
;;           (f args countp everywherep body
;;            &aux (*macroexpand-hook* 'funcall))
;;   (setq *body* body)
;;   (list 'progn
;;         (let* ((from-end nil)
;;                (iterate-i '(i start (f+ 1 i)))
;;                (iterate-i-from-end '(i (f+ -1  end) (f+ -1 i)))
;;                (endp-i '(>= i end))
;;                (endp-i-from-end '(< i start))
;;                (iterate-i-everywhere '(i 0 (f+ 1 i)))
;;                (iterate-i-everywhere-from-end '(i (f+ -1  l) (f+ -1  i)))
;;                (endp-i-everywhere '(>= i l))
;;                (endp-i-everywhere-from-end '(< i 0))
;;                (i-in-range '(and (<= start i) (< i end)))
;;                (x '(elt sequence i))
;;                (keyx `(funcall key ,x))
;;                (satisfies-the-test `(call-test test test-not item ,keyx))
;;                (number-satisfied
;;                 `(n (internal-count item sequence
;;                                     :from-end from-end
;;                                     :test test :test-not test-not
;;                                     :start start :end end
;;                                     ,@(if countp '(:count count))
;;                                     :key key)))
;;                (within-count '(< k count))
;;                (kount-0 '(k 0))
;;                (kount-up '(setq k (f+ 1  k))))
;;            `(defun ,f (,@args item sequence
;;                        &key from-end test test-not
;;                             start end
;;                             ,@(if countp '(count))
;;                             (key #'identity))
;;        (declare (optimize (safety 2)))
;;        (if (eq key nil) (setq key #'identity))
;;        (with-start-end start end sequence
;; 	 (let (,@(when everywherep `((l (length sequence)))))	       
;; 	   ,@(when everywherep '((declare (fixnum l))))
;; 	  (let ,@(if countp
;; 		     '(((count
;; 			 (cond ((null count) most-positive-fixnum)
;; 			       ((< count 0) 0)
;; 			       ((> count most-positive-fixnum) most-positive-fixnum)
;; 			       (t count))))))
;;               ,@(if countp '((declare (fixnum count))))
;;               nil
;; 	      (and test test-not (error "both test and test not supplied"))
;;                 (if (not from-end)
;;                     ,(eval-body)
;;                     ,(progn (setq from-end t
;;                                   iterate-i iterate-i-from-end
;;                                   endp-i endp-i-from-end
;;                                   iterate-i-everywhere
;;                                   iterate-i-everywhere-from-end
;;                                   endp-i-everywhere
;;                                   endp-i-everywhere-from-end)
;;                             (eval-body))))))))
;;         `(defun ,(intern (si:string-concatenate (string f) "-IF")
;;                          (symbol-package f))
;;                 (,@args predicate sequence
;;                  &key from-end
;;                       start end
;;                       ,@(if countp '(count))
;;                       (key #'identity))
;;            (declare (optimize (safety 2)))
;;            (if (eq key nil) (setq key #'identity))
;;            (,f ,@args predicate sequence
;;                :from-end from-end
;;                :test #'funcall
;;                :start start :end end
;;                ,@(if countp '(:count count))
;;                :key key))
;;         `(defun ,(intern (si:string-concatenate (string f) "-IF-NOT")
;;                          (symbol-package f))
;;                 (,@args predicate sequence
;;                  &key from-end start end
;;                       ,@(if countp '(count))
;;                       (key #'identity))
;;            (declare (optimize (safety 2)))
;; 	   (if (eq key nil) (setq key #'identity))
;;            (,f ,@args predicate sequence
;;                :from-end from-end
;;                :test-not #'funcall
;;                :start start :end end
;;                ,@(if countp '(:count count))
;;                :key key))
;;         (list 'quote f)))

;; (defmacro eval-body () *body*)

;; (defseq internal-count () t nil
;;   `(do (,iterate-i ,kount-0)
;;        (,endp-i k)
;;      (declare (seqind i k))
;;      (when (and ,within-count ,satisfies-the-test)
;;            ,kount-up)))

;; )







       

(defun mismatch (sequence1 sequence2
		 &key from-end test test-not
		      (key #'identity)
		      start1 start2
		      end1 end2)
  (declare (optimize (safety 2)))
  (and test test-not (error "both test and test not supplied"))
  (with-start-end start1 end1 sequence1
   (with-start-end start2 end2 sequence2
    (if (not from-end)
        (do ((i1 start1 (f+ 1  i1))
             (i2 start2  (f+ 1  i2)))
            ((or (>= i1 end1) (>= i2 end2))
             (if (and (>= i1 end1) (>= i2 end2)) nil i1))
          (declare (fixnum i1 i2))
          (unless (call-test test test-not
                             (funcall key (elt sequence1 i1))
                             (funcall key (elt sequence2 i2)))
                  (return i1)))
        (do ((i1 (f+ -1  end1) (f+ -1  i1))
             (i2 (f+ -1  end2)  (f+ -1  i2)))
            ((or (< i1 start1) (< i2 start2))
             (if (and (< i1 start1) (< i2 start2)) nil (f+ 1 i1)))
          (declare (fixnum i1 i2))
          (unless (call-test test test-not
                             (funcall key (elt sequence1 i1))
                             (funcall key (elt sequence2 i2)))
                  (return (f+ 1 i1))))))))


(defun search (sequence1 sequence2
               &key from-end test test-not
                    key
		    (start1 0) (start2 0)
		    end1 end2)
  (declare (optimize (safety 2)))
  (and test test-not (error "both test and test not supplied"))
  (check-type sequence1 sequence)
  (check-type sequence2 sequence)
  (check-type start1 seqind)
  (check-type start2 seqind)
  (when end1 (check-type end1 seqind))
  (when end2 (check-type end2 seqind))

  (let ((s1 sequence1)(s2 sequence2)(i1 start1)(i2 start2)(e1 end1)(e2 end2)(st (or test test-not)))
    (declare (sequence s1 s2)(seqind i1 i2)((or null seqind) e1 e2))
    (let* ((eq (unless st (every (lambda (x) (eql-is-eq (if key (funcall key x) x))) s1))) m (mv 0) x1
	   (l1 (listp s1))(l2 (listp s2))
	   (e1 (or e1 (unless l1 (length s1))))(e2 (or e2 (unless l2 (length s2)))))
      (do ((is2 i2 (1+ is2))
	   (ps2 s2 p2)
	   (p2 (when l2 (nthcdr i2 s2)) (cdr p2))
	   (p1 (when l1 (nthcdr i1 s1))))
	  ((if e2 (> is2 e2) (endp ps2)) (when m mv))
	  (declare (seqind is2))
	  (do ((p1 p1 (cdr p1))
	       (p2 p2 (cdr p2))
	       (i1 i1  (1+ i1))
	       (i2 is2 (1+ i2)))
	      ((or (setq x1 (if e1 (>= i1 e1) (endp p1)))
		   (if e2 (>= i2 e2) (endp p2)))
	       (when x1 (if from-end (setq m t mv is2) (return-from search is2))))
	      (declare (seqind i1 i2))
	      (let ((el1 (if l1 (car p1) (aref s1 i1)))
		    (el2 (if l2 (car p2) (aref s2 i2))))
		(when key (setq el1 (funcall key el1) el2 (funcall key el2)))
		(unless
		    (cond (eq (eq el1 el2))
			  ((not st) (eql el1 el2))
			  (test (funcall test el1 el2))
			  ((not (funcall test-not el1 el2))))
		  (return nil))))))))

(defun sort (seq pred &key (key 'identity))
  (declare (optimize (safety 2)))
  (check-type seq sequence)
  (let* ((k (comp-key key))
	 (ll (length seq))
	 (list (listp seq))
	 (n (if list 0 (comp-array (array-element-type seq))))
	 (a (when list (make-array ll))))
    (when list
      (do ((fi 0 (1+ fi)) (l seq (cdr l))) ((>= fi ll)) (setf (aref a fi) l)))
    (do ((ii (list ll 0))) ((not ii) seq)
	(declare (:dynamic-extent ii))
	(let* ((ls (pop ii)) (fi (pop ii)))
	  (declare (seqind ls fi))
	  (do nil ((>= fi (1- ls)))
	    (let* ((spi (+ fi (random (- ls fi))))
		   (sp (do-key key k (garef a seq spi list))))
	      (raref a seq n fi spi list)
	      (do ((lf fi) (rt ls)) ((>= lf rt))
		(declare (seqind lf rt));FIXME
		(do ((q t)) 
		    ((or (>= (if q (incf lf) lf) (if q rt (decf rt)))
			 (let ((f (do-key key k (garef a seq (if q lf rt) list))))
			   (and (not (funcall pred (if q f sp) (if q sp f)))
				(setq q (not q)))))))
		(let* ((r (< lf rt))
		       (f (if r lf fi))
		       (s (if r rt (setq spi (1- lf)))))
		  (raref a seq n f s list)))
	      (let* ((ospi (1+ spi))
		     (b   (< (- ls ospi) (- spi fi)))
		     (lf  (if b ospi 0))
		     (rt  (if b 0 spi))
		     (b1  (if b (> (- ls lf) 1) (> (- rt fi) 1)))
		     (ns  (if b lf fi))
		     (ns1 (if b ls rt))
		     (nls (if b spi ls))
		     (nfi (if b fi ospi)))
		(when b1
		  (push ns ii) (push ns1 ii))
		(setq ls nls fi nfi))))))))

(defun list-merge-sort (l pred key k)

  (let* ((ll (length l)))
    (if (< ll 2) l
      (let* ((i (ash ll -1))
	     (lf l)
	     (l1 (nthcdr (1- i) l))
	     (rt (prog1 (cdr l1) (rplacd l1 nil)))
	     (lf (list-merge-sort lf pred key k))
	     (rt (list-merge-sort rt pred key k)))
	(do (l0 l1) ((not (and lf rt)) l0)
	  (cond ((funcall pred (do-key key k (car rt)) (do-key key k (car lf)))
		 (setq l1 (if l1 (cdr (rplacd l1 rt)) (setq l0 rt)) rt (cdr rt))
		 (unless rt (rplacd l1 lf)))
		(t (setq l1 (if l1 (cdr (rplacd l1 lf)) (setq l0 lf)) lf (cdr lf))
		   (unless lf (rplacd l1 rt)))))))))

;; (defun list-merge-sort (l predicate key)
;;   (labels
;;    ((sort (l)
;;       (prog ((i 0) left right l0 l1 key-left key-right)
;;         (declare (fixnum i))
;;         (setq i (length l))
;;         (cond ((< i 2) (return l))
;;               ((= i 2)
;;                (setq key-left (funcall key (car l)))
;;                (setq key-right (funcall key (cadr l)))
;;                (cond ;((funcall predicate key-left key-right) (return l))
;;                      ((funcall predicate key-right key-left)
;;                       (return (nreverse l)))
;;                      (t (return l)))))
;;         (setq i (floor i 2))
;;         (do ((j 1 (f+ 1  j)) (l1 l (cdr l1)))
;;             ((>= j i)
;;              (setq left l)
;;              (setq right (cdr l1))
;;              (rplacd l1 nil))
;;           (declare (fixnum j)))
;;         (setq left (sort left))
;;         (setq right (sort right))
;;         (cond ((endp left) (return right))
;;               ((endp right) (return left)))
;;         (setq l0 (cons nil nil))
;;         (setq l1 l0)
;;         (setq key-left (funcall key (car left)))
;;         (setq key-right (funcall key (car right)))
;;       loop
;;         (cond ;((funcall predicate key-left key-right) (go left))
;;               ((funcall predicate key-right key-left) (go right))
;;               (t (go left)))
;;       left
;;         (rplacd l1 left)
;;         (setq l1 (cdr l1))
;;         (setq left (cdr left))
;;         (when (endp left)
;;               (rplacd l1 right)
;;               (return (cdr l0)))
;;         (setq key-left (funcall key (car left)))
;;         (go loop)
;;       right
;;         (rplacd l1 right)
;;         (setq l1 (cdr l1))
;;         (setq right (cdr right))
;;         (when (endp right)
;;               (rplacd l1 left)
;;               (return (cdr l0)))
;;         (setq key-right (funcall key (car right)))
;;         (go loop))))
;;    (let ((z (sort l)))
;;      z)))

#|
(defun list-quick-sort (l predicate key)
  (if (or (endp l) (endp (cdr l)))
      l
      (multiple-value-bind (x y)
          (list-quick-sort-partition (car l) (cdr l) predicate key)
        (nconc (list-quick-sort x predicate key)
               (list (car l))
               (list-quick-sort y predicate key)))))

(defun list-quick-sort-partition (k l predicate key)
  (do ((l l (cdr l)) (x nil) (y nil))
      ((endp l) (values (nreverse x) (nreverse y)))
    (if (funcall predicate (funcall key (car l)) (funcall key k))
        (setq x (cons (car l) x))
        (setq y (cons (car l) y)))))
|#


;; (proclaim '(function quick-sort (t fixnum fixnum t t) t))

;; (defun quick-sort (seq start end pred key)
;;        (declare (fixnum start end))
;;   (if (<= end (the fixnum (f+ 1  start)))
;;       seq
;;       (let* ((j start) (k end) (d (elt seq start)) (kd (funcall key d)))
;;             (declare (fixnum j k))
;;         (block outer-loop
;;           (loop (loop (setq  k (f+ -1  k))
;;                       (unless (< j k) (return-from outer-loop))
;;                       (when (funcall pred (funcall key (elt seq k)) kd)
;;                             (return)))
;;                 (loop (setf  j (f+ 1  j))
;;                       (unless (< j k) (return-from outer-loop))
;;                       (unless (funcall pred (funcall key (elt seq j)) kd)
;;                               (return)))
;;                 (let ((temp (elt seq j)))
;;                   (setf (elt seq j) (elt seq k)
;;                         (elt seq k) temp))))
;;         (setf (elt seq start) (elt seq j)
;;               (elt seq j) d)
;;         (quick-sort seq start j pred key)
;;         (quick-sort seq (f+ 1  j) end pred key))))

;; (defun sort (sequence predicate &key (key #'identity))
;;   (declare (optimize (safety 2)))
;;   (check-type sequence sequence)
;;   (if (listp sequence)
;;       (list-merge-sort sequence predicate key)
;;       (quick-sort sequence 0 (the fixnum (length sequence)) predicate key)))


(defun stable-sort (sequence predicate &key (key #'identity))
  (declare (optimize (safety 2)))
  (check-type sequence sequence)
  (typecase 
   sequence
   (list (list-merge-sort sequence predicate key (comp-key key)))
   (string (sort sequence predicate :key key))
   (bit-vector (sort sequence predicate :key key))
   (otherwise 
    (coerce (list-merge-sort (coerce sequence 'list) predicate key (comp-key key))
	    (seqtype sequence)))))
;  (if (listp sequence)
;      (list-merge-sort sequence predicate key (comp-key key))
;      (if (or (stringp sequence) (bit-vector-p sequence))
;          (sort sequence predicate :key key)
;          (coerce (list-merge-sort (coerce sequence 'list)
;                                   predicate
;                                   key (comp-key key))
;                  (seqtype sequence)))))


(defun merge (result-type sequence1 sequence2 predicate
	      &key (key #'identity)
	      &aux (l1 (length sequence1)) (l2 (length sequence2)))
  (declare (optimize (safety 2)))
  (declare (fixnum l1 l2))
  (when (equal key 'nil) (setq key #'identity))
  (do ((newseq (make-sequence result-type (the fixnum (f+ l1 l2))))
       (j 0 (f+ 1  j))
       (i1 0)
       (i2 0))
      ((and (= i1 l1) (= i2 l2)) newseq)
    (declare (fixnum j i1 i2))
    (cond ((and (< i1 l1) (< i2 l2))
	   (cond ((funcall predicate
			   (funcall key (elt sequence1 i1))
			   (funcall key (elt sequence2 i2)))
		  (setf (elt newseq j) (elt sequence1 i1))
		  (setf  i1 (f+ 1  i1)))
		 ((funcall predicate
			   (funcall key (elt sequence2 i2))
			   (funcall key (elt sequence1 i1)))
		  (setf (elt newseq j) (elt sequence2 i2))
		  (setf  i2 (f+ 1  i2)))
		 (t
		  (setf (elt newseq j) (elt sequence1 i1))
		  (setf  i1 (f+ 1  i1)))))
          ((< i1 l1)
	   (setf (elt newseq j) (elt sequence1 i1))
	   (setf  i1 (f+ 1  i1)))
	  (t
	   (setf (elt newseq j) (elt sequence2 i2))
	   (setf  i2 (f+ 1  i2))))))

(defmacro with-hash-table-iterator ((name hash-table) &body body)
  (declare (optimize (safety 2)))
  (let ((table (sgen))
	(ind (sgen)))
    `(let ((,table ,hash-table)
	   (,ind 0))
       (macrolet ((,name ()
			 `(multiple-value-bind
			   (more key val)
			   (si::next-hash-table-entry ,',table ,',ind)
			   (cond ((>= (the fixnum more) 0)
				  (setq ,',ind more)
				  (values t key val))))))
		 ,@body))))
		 

(defun copy-seq (s) 
  (declare (optimize (safety 1)))
  (check-type s sequence)
  (if (listp s)
      (copy-list s)
    (let* ((n (length s))
	   (aet (array-element-type s))
	   (o (make-array n :element-type aet))
	   (ac (comp-array aet)))
      (do ((i 0 (1+ i))) ((>= i n) o) 
	  (set-same-array ac o i s i)))))
