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


(in-package 'lisp)


(export '(reduce fill replace
          remove remove-if remove-if-not
          delete delete-if delete-if-not
          count count-if count-if-not
          substitute substitute-if substitute-if-not
          nsubstitute nsubstitute-if nsubstitute-if-not
          find find-if find-if-not
          position position-if position-if-not
          remove-duplicates delete-duplicates
          mismatch search
	  with-hash-table-iterator
          sort stable-sort merge map-into))


(in-package 'system)


(proclaim '(optimize (safety 2) (space 3)))


(proclaim '(function seqtype (t) t))
(defun seqtype (sequence)
  (cond ((listp sequence) 'list)
        ((stringp sequence) 'string)
        ((bit-vector-p sequence) 'bit-vector)
        ((vectorp sequence) (list 'array (array-element-type sequence)))
        (t (error "~S is not a sequence." sequence))))

(proclaim '(function call-test (t t t t) t))
(defun call-test (test test-not item keyx)
  (cond (test (funcall test item keyx))
        (test-not (not (funcall test-not item keyx)))
        (t (eql item keyx))))


(proclaim '(function check-seq-start-end (t t) t))
(defun check-seq-start-end (start end)
  (unless (and (si:fixnump start) (si:fixnump end))
          (error "Fixnum expected."))
  (when (> (the fixnum start) (the fixnum end))
        (error "START is greater than END.")))

(proclaim '(function test-error() t))
(defun test-error()
  (error "both test and test not supplied"))

(defun bad-seq-limit (x &optional y)
  (specific-error :wrong-type-argument "bad sequence limit ~a" (if y (list x y) x)))


(eval-when (compile eval)
(proclaim '(function the-start (t) fixnum))
(proclaim '(function the-end (t t) fixnum))
(defmacro f+ (x y) `(the fixnum (+ (the fixnum ,x) (the fixnum ,y))))
(defmacro f- (x y) `(the fixnum (- (the fixnum ,x) (the fixnum ,y))))

(defmacro with-start-end ( start end seq &body body)
  `(let ((,start (if ,start (the-start ,start) 0)))
     (declare (fixnum ,start))
     (let ((,end (the-end ,end ,seq))) 
       (declare (fixnum ,end))
       (or (<= ,start ,end) (bad-seq-limit  ,start ,end))
       ,@ body)))
)

(defun the-end (x y)
  (cond ((fixnump x)
	 (or (<= (the fixnum x) (the fixnum (length y)))
	     (bad-seq-limit x))
	 x)
	((null x)
	 (length y))
	(t (bad-seq-limit x))))
	
(defun the-start (x)
  (cond ((fixnump x)
	 (or (>= (the fixnum x) 0)
	     (bad-seq-limit x))
	 (the fixnum x))
	((null x) 0)
	(t (bad-seq-limit x))))
  


(defun reduce (function sequence
               &key from-end
                    start 
                    end
		    (initial-value nil ivsp)
		    (key #'identity))
  (with-start-end  start end sequence
     (cond ((not from-end)
           (when (null ivsp)
                 (when (>= start end)
                       (return-from reduce (funcall function)))
		 (setq initial-value (funcall key (elt sequence start)))
                 (setf start (f+ 1 start))
		 )
           (do ((x initial-value
		   (funcall function x (funcall key (prog1 (elt sequence start)
					      (setf start (f+ 1 start))
						       )))))
               ((>= start end) x)))
          (t
           (when (null ivsp)
                 (when (>= start end)
                       (return-from reduce (funcall function)))
                 (setf end (f+ end -1))
		  (setq initial-value (funcall key (elt sequence end)))
		  )
	    (do ((x initial-value (funcall function (funcall key (elt sequence end)) x)))
               ((>= start end) x)
	       (setf end (f+ -1 end)))))))


(defun fill (sequence item
		      &key start end )
  (with-start-end start end sequence
		  (do ((i start (f+ 1 i)))
		      ((>= i end) sequence)
		     (declare (fixnum i))
		     (setf (elt sequence i) item))))


(defun replace (sequence1 sequence2
	        &key start1  end1
		     start2 end2 )
  (with-start-end start1 end1 sequence1
     (with-start-end start2 end2 sequence2		  
    (if (and (eq sequence1 sequence2)
             (> start1 start2))
        (do* ((i 0 (f+ 1 i))
              (l (if (<  (f- end1 start1)
                         (f- end2 start2))
                      (f- end1 start1)
                      (f- end2 start2)))
              (s1 (f+ start1  (f+ -1 l)) (f+ -1 s1))
              (s2 (f+ start2  (f+ -1 l)) (f+ -1 s2)))
            ((>= i l) sequence1)
          (declare (fixnum i l s1 s2))
          (setf (elt sequence1 s1) (elt sequence2 s2)))
        (do ((i 0 (f+ 1 i))
             (l (if (<  (f- end1 start1)
                        (f- end2 start2))
                    (f- end1 start1)
                    (f- end2 start2)))
             (s1 start1 (f+ 1 s1))
             (s2 start2 (f+ 1 s2)))
            ((>= i l) sequence1)
          (declare (fixnum i l s1 s2))
          (setf (elt sequence1 s1) (elt sequence2 s2)))))))


;;; DEFSEQ macro.
;;; Usage:
;;;
;;;    (DEFSEQ function-name argument-list countp everywherep body)
;;;
;;; The arguments ITEM and SEQUENCE (PREDICATE and SEQUENCE)
;;;  and the keyword arguments are automatically supplied.
;;; If the function has the :COUNT argument, set COUNTP T.

(eval-when (eval compile)
(defmacro defseq
          (f args countp everywherep body
           &aux (*macroexpand-hook* 'funcall))
  (setq *body* body)
  (list 'progn
        (let* ((from-end nil)
               (iterate-i '(i start (f+ 1 i)))
               (iterate-i-from-end '(i (f+ -1  end) (f+ -1 i)))
               (endp-i '(>= i end))
               (endp-i-from-end '(< i start))
               (iterate-i-everywhere '(i 0 (f+ 1 i)))
               (iterate-i-everywhere-from-end '(i (f+ -1  l) (f+ -1  i)))
               (endp-i-everywhere '(>= i l))
               (endp-i-everywhere-from-end '(< i 0))
               (i-in-range '(and (<= start i) (< i end)))
               (x '(elt sequence i))
               (keyx `(funcall key ,x))
               (satisfies-the-test `(call-test test test-not item ,keyx))
               (number-satisfied
                `(n (internal-count item sequence
                                    :from-end from-end
                                    :test test :test-not test-not
                                    :start start :end end
                                    ,@(if countp '(:count count))
                                    :key key)))
               (within-count '(< k count))
               (kount-0 '(k 0))
               (kount-up '(setq k (f+ 1  k))))
           `(defun ,f (,@args item sequence
                       &key from-end test test-not
                            start end
                            ,@(if countp '(count))
                            (key #'identity)
                       ,@(if everywherep
                             (list '&aux '(l (length sequence)))
                             nil))
	      ,@(if everywherep '((declare (fixnum l))))
	      (if (eq key nil) (setq key #'identity))
       (with-start-end start end sequence
	  (let ,@(if countp
		     '(((count (if (null count)
				   most-positive-fixnum count)))))	       
              ,@(if countp '((declare (integer count))))
              nil
	      (and test test-not (test-error))
                (if (not from-end)
                    ,(eval-body)
                    ,(progn (setq from-end t
                                  iterate-i iterate-i-from-end
                                  endp-i endp-i-from-end
                                  iterate-i-everywhere
                                  iterate-i-everywhere-from-end
                                  endp-i-everywhere
                                  endp-i-everywhere-from-end)
                            (eval-body)))))))
        `(defun ,(intern (si:string-concatenate (string f) "-IF")
                         (symbol-package f))
                (,@args predicate sequence
                 &key from-end
                      start end
                      ,@(if countp '(count))
                      (key #'identity))
		(if (eq key nil) (setq key #'identity))
           (,f ,@args predicate sequence
               :from-end from-end
               :test #'funcall
               :start start :end end
               ,@(if countp '(:count count))
               :key key))
        `(defun ,(intern (si:string-concatenate (string f) "-IF-NOT")
                         (symbol-package f))
                (,@args predicate sequence
                 &key from-end start end
                      ,@(if countp '(count))
                      (key #'identity))
		(if (eq key nil) (setq key #'identity))
           (,f ,@args predicate sequence
               :from-end from-end
               :test-not #'funcall
               :start start :end end
               ,@(if countp '(:count count))
               :key key))
        (list 'quote f)))

(defmacro eval-body () *body*)
)


(defseq remove () t nil
  (if (not from-end)
      `(if (listp sequence)
           (let ((l sequence) (l1 nil))
             (do ((i 0 (f+ 1  i)))
                 ((>= i start))
               (declare (fixnum i))
               (push (car l) l1)
               (pop l))
             (do ((i start (f+ 1  i)) (j 0))
                 ((or (>= i end) (>= j count) (endp l))
                  (nreconc l1 l))
               (declare (fixnum i j))
               (cond ((call-test test test-not item (funcall key (car l)))
                      (setf  j (f+ 1  j))
                      (pop l))
                     (t
                      (push (car l) l1)
                      (pop l)))))
           (delete item sequence
                   :from-end from-end
                   :test test :test-not test-not
                   :start start :end end
                   :count count
                   :key key))
      `(delete item sequence
               :from-end from-end
               :test test :test-not test-not
               :start start :end end
               :count count
               :key key)))


(defseq delete () t t
  (if (not from-end)
      `(if (listp sequence)
           (let* ((l0 (cons nil sequence)) (l l0))
             (do ((i 0 (f+ 1  i)))
                 ((>= i start))
               (declare (fixnum i))
               (pop l))
             (do ((i start (f+ 1  i)) (j 0))
                 ((or (>= i end) (>= j count) (endp (cdr l))) (cdr l0))
               (declare (fixnum i j))
               (cond ((call-test test test-not item (funcall key (cadr l)))
                      (setf  j (f+ 1  j))
                      (rplacd l (cddr l)))
                     (t (setq l (cdr l))))))
           (let (,number-satisfied)
             (declare (fixnum n))
             (when (< n count) (setq count n))
	     (when (< count 0) (setq count 0))
             (do ((newseq
                   (make-sequence (seqtype sequence)
                                  (the fixnum (f- l count))))
                  ,iterate-i-everywhere
                  (j 0)
                  ,kount-0)
                 (,endp-i-everywhere newseq)
               (declare (fixnum i j k))
               (cond ((and ,i-in-range ,within-count ,satisfies-the-test)
                      ,kount-up)
                     (t (setf (elt newseq j) ,x)
                        (setf  j (f+ 1  j)))))))
      `(let (,number-satisfied)
         (declare (fixnum n))
         (when (< n count) (setq count n))
	 (when (< count 0) (setq count 0))
         (do ((newseq
               (make-sequence (seqtype sequence) (the fixnum (f- l count))))
              ,iterate-i-everywhere
              (j (f+ -1 (the fixnum (f- l count))))
;              (j (f- (the fixnum (f+ -1  end)) n))
              ,kount-0)
             (,endp-i-everywhere newseq)
           (declare (fixnum i j k))
           (cond ((and ,i-in-range ,within-count ,satisfies-the-test)
                  ,kount-up)
                 (t (setf (elt newseq j) ,x)
                    (setq  j (f+ -1  j))))))))


(defseq count () nil nil
  `(do (,iterate-i ,kount-0)
       (,endp-i k)
     (declare (fixnum i k))
     (when (and ,satisfies-the-test)
           ,kount-up)))


(defseq internal-count () t nil
  `(do (,iterate-i ,kount-0)
       (,endp-i k)
     (declare (fixnum i k))
     (when (and ,within-count ,satisfies-the-test)
           ,kount-up)))


(defseq substitute (newitem) t t
  `(do ((newseq (make-sequence (seqtype sequence) l))
        ,iterate-i-everywhere
        ,kount-0)
       (,endp-i-everywhere newseq)
     (declare (fixnum i k))
     (cond ((and ,i-in-range ,within-count ,satisfies-the-test)
            (setf (elt newseq i) newitem)
            ,kount-up)
           (t (setf (elt newseq i) ,x))))))


(defseq nsubstitute (newitem) t nil
  `(do (,iterate-i ,kount-0)
       (,endp-i sequence)
     (declare (fixnum i k))
     (when (and ,within-count ,satisfies-the-test)
           (setf ,x newitem)
           ,kount-up)))


(defseq find () nil nil
  `(do (,iterate-i)
       (,endp-i nil)
     (declare (fixnum i))
     (when ,satisfies-the-test (return ,x))))


(defseq position () nil nil
  `(do (,iterate-i)
       (,endp-i nil)
     (declare (fixnum i))
     (when ,satisfies-the-test (return i))))


(defun remove-duplicates (sequence
                          &key from-end
                               test test-not
			       start end
                               (key #'identity))
  (and test test-not (test-error))
  (when (and (listp sequence) (not from-end) (null start)
	     (null end))
        (when (endp sequence) (return-from remove-duplicates nil))
        (do ((l sequence (cdr l)) (l1 nil))
            ((endp (cdr l))
             (return-from remove-duplicates (nreconc l1 l)))
          (unless (member1 (car l) (cdr l)
                           :test test :test-not test-not
                           :key key)
                  (setq l1 (cons (car l) l1)))))
  (delete-duplicates sequence
                     :from-end from-end
                     :test test :test-not test-not
                     :start start :end end
                     :key key))
       

(defun delete-duplicates (sequence
                          &key from-end
                               test test-not
                               start
                               end 
                               (key #'identity)
                          &aux (l (length sequence)))
  (declare (fixnum l))
  (and test test-not (test-error))
  (when (and (listp sequence) (not from-end) (null start)
	     (null end))
        (when (endp sequence) (return-from delete-duplicates nil))
        (do ((l sequence))
            ((endp (cdr l))
             (return-from delete-duplicates sequence))
            (cond ((member1 (car l) (cdr l)
                            :test test :test-not test-not
                            :key key)
                   (rplaca l (cadr l))
                   (rplacd l (cddr l)))
                  (t (setq l (cdr l))))))
  (with-start-end start end sequence
    (if (not from-end)
        (do ((n 0)
             (i start (f+ 1  i)))
            ((>= i end)
             (do ((newseq (make-sequence (seqtype sequence)
                                         (the fixnum (f- l n))))
                  (i 0 (f+ 1  i))
                  (j 0))
                 ((>= i l) newseq)
               (declare (fixnum i j))
               (cond ((and (<= start i)
                           (< i end)
                           (position (funcall key (elt sequence i))
                                     sequence
                                     :test test
                                     :test-not test-not
                                     :start (the fixnum (f+ 1  i))
                                     :end end
                                     :key key)))
                     (t
                      (setf (elt newseq j) (elt sequence i))
                      (setf  j (f+ 1  j))))))
          (declare (fixnum n i))
          (when (position (funcall key (elt sequence i))
                          sequence
                          :test test
                          :test-not test-not
                          :start (the fixnum (f+ 1  i))
                          :end end
                          :key key)
                (setf  n (f+ 1  n))))
        (do ((n 0)
             (i (f+ -1  end) (f+ -1  i)))
            ((< i start)
             (do ((newseq (make-sequence (seqtype sequence)
                                         (the fixnum (f- l n))))
                  (i (f+ -1  l) (f+ -1  i))
                  (j (f- (the fixnum (f+ -1  l)) n)))
                 ((< i 0) newseq)
               (declare (fixnum i j))
               (cond ((and (<= start i)
                           (< i end)
                           (position (funcall key (elt sequence i))
                                     sequence
                                     :from-end t
                                     :test test
                                     :test-not test-not
                                     :start start
                                     :end i
                                     :key key)))
                     (t
                      (setf (elt newseq j) (elt sequence i))
                      (setq  j (f+ -1  j))))))
          (declare (fixnum n i))
          (when (position (funcall key (elt sequence i))
                          sequence
                          :from-end t
                          :test test
                          :test-not test-not
                          :start start
                          :end i
                          :key key)
                (setf  n (f+ 1  n)))))))
       

(defun mismatch (sequence1 sequence2
		 &key from-end test test-not
		      (key #'identity)
		      start1 start2
		      end1 end2)
  (and test test-not (test-error))
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
                    (key #'identity)
		    start1 start2
		    end1 end2)
  (and test test-not (test-error))
  (with-start-end start1 end1 sequence1
   (with-start-end start2 end2 sequence2  
    (if (not from-end)
        (loop
         (do ((i1 start1 (f+ 1  i1))
              (i2 start2 (f+ 1  i2)))
             ((>= i1 end1) (return-from search start2))
           (declare (fixnum i1 i2))
           (when (>= i2 end2) (return-from search nil))
           (unless (call-test test test-not
                              (funcall key (elt sequence1 i1))
                              (funcall key (elt sequence2 i2)))
                   (return nil)))
         (setf  start2 (f+ 1  start2)))
        (loop
         (do ((i1 (f+ -1  end1) (f+ -1  i1))
              (i2 (f+ -1  end2) (f+ -1  i2)))
             ((< i1 start1) (return-from search (the fixnum (f+ 1  i2))))
           (declare (fixnum i1 i2))
           (when (< i2 start2) (return-from search nil))
           (unless (call-test test test-not
                              (funcall key (elt sequence1 i1))
                              (funcall key (elt sequence2 i2)))
                   (return nil)))
         (setq  end2 (f+ -1  end2)))))))


(defun sort (sequence predicate &key (key #'identity))
  (if (listp sequence)
      (list-merge-sort sequence predicate key)
      (quick-sort sequence 0 (the fixnum (length sequence)) predicate key)))


(defun list-merge-sort (l predicate key)
  (labels
   ((sort (l)
      (prog ((i 0) left right l0 l1 key-left key-right)
        (declare (fixnum i))
        (setq i (length l))
        (cond ((< i 2) (return l))
              ((= i 2)
               (setq key-left (funcall key (car l)))
               (setq key-right (funcall key (cadr l)))
               (cond ((funcall predicate key-left key-right) (return l))
                     ((funcall predicate key-right key-left)
                      (return (nreverse l)))
                     (t (return l)))))
        (setq i (floor i 2))
        (do ((j 1 (f+ 1  j)) (l1 l (cdr l1)))
            ((>= j i)
             (setq left l)
             (setq right (cdr l1))
             (rplacd l1 nil))
          (declare (fixnum j)))
        (setq left (sort left))
        (setq right (sort right))
        (cond ((endp left) (return right))
              ((endp right) (return left)))
        (setq l0 (cons nil nil))
        (setq l1 l0)
        (setq key-left (funcall key (car left)))
        (setq key-right (funcall key (car right)))
      loop
        (cond ((funcall predicate key-left key-right) (go left))
              ((funcall predicate key-right key-left) (go right))
              (t (go left)))
      left
        (rplacd l1 left)
        (setq l1 (cdr l1))
        (setq left (cdr left))
        (when (endp left)
              (rplacd l1 right)
              (return (cdr l0)))
        (setq key-left (funcall key (car left)))
        (go loop)
      right
        (rplacd l1 right)
        (setq l1 (cdr l1))
        (setq right (cdr right))
        (when (endp right)
              (rplacd l1 left)
              (return (cdr l0)))
        (setq key-right (funcall key (car right)))
        (go loop))))
   (sort l)))


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


(proclaim '(function quick-sort (t fixnum fixnum t t) t))

(defun quick-sort (seq start end pred key)
       (declare (fixnum start end))
  (if (<= end (the fixnum (f+ 1  start)))
      seq
      (let* ((j start) (k end) (d (elt seq start)) (kd (funcall key d)))
            (declare (fixnum j k))
        (block outer-loop
          (loop (loop (setq  k (f+ -1  k))
                      (unless (< j k) (return-from outer-loop))
                      (when (funcall pred (funcall key (elt seq k)) kd)
                            (return)))
                (loop (setf  j (f+ 1  j))
                      (unless (< j k) (return-from outer-loop))
                      (unless (funcall pred (funcall key (elt seq j)) kd)
                              (return)))
                (let ((temp (elt seq j)))
                  (setf (elt seq j) (elt seq k)
                        (elt seq k) temp))))
        (setf (elt seq start) (elt seq j)
              (elt seq j) d)
        (quick-sort seq start j pred key)
        (quick-sort seq (f+ 1  j) end pred key))))

(defun stable-sort (sequence predicate &key (key #'identity))
  (if (listp sequence)
      (list-merge-sort sequence predicate key)
      (if (or (stringp sequence) (bit-vector-p sequence))
          (sort sequence predicate :key key)
          (coerce (list-merge-sort (coerce sequence 'list)
                                   predicate
                                   key)
                  (seqtype sequence)))))


(defun merge (result-type sequence1 sequence2 predicate
	      &key (key #'identity)
	      &aux (l1 (length sequence1)) (l2 (length sequence2)))
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

(defun map-into (result-sequence function &rest sequences)
;  "map-into:  (result-sequence function &rest sequences)"
  (let ((nel (apply #'min (if (subtypep (type-of result-sequence) 'vector)
			      (array-dimension result-sequence 0)
			    (length result-sequence))
		    (mapcar #'length sequences))))
    ;; Set the fill pointer to the number of iterations
    (when (and (subtypep  (type-of result-sequence) 'vector)
		(array-has-fill-pointer-p result-sequence))
      (setf (fill-pointer result-sequence) nel))
    ;; Perform mapping
    (dotimes (k nel result-sequence)
      (setf (elt result-sequence k)
	    (apply function (mapcar #'(lambda (v) (elt v k)) sequences))))))


(defmacro with-hash-table-iterator ((name hash-table) &body body)
  (let ((table (gensym ))
	(ind (gensym "ind")))
    `(let ((,table ,hash-table)
	   (,ind 0))
       (macrolet ((,name ()
			 `(multiple-value-bind
			   (more key val)
			   (si::next-hash-table-entry ,',table ,',ind)
			   (cond ((>= (the fixnum more) 0)
				  (setq ,',ind more)
				  (values t key val))
				 (t  (values nil nil nil))))))
		 ,@body))))
		 

