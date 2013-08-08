(in-package :si)

(defstruct
  context
  (vec (make-array 0 :adjustable t :fill-pointer t) :type (vector t))
  (hash nil :type (or null hash-table))
  (spice (make-hash-table :test 'eq :rehash-size 2.0) :type hash-table))

(defun get-context (i)
  (declare (fixnum i))
  (when *sharp-eq-context*
    (let ((v (context-vec *sharp-eq-context*)))
      (if (< i (length v)) (aref v i)
	(let ((h (context-hash *sharp-eq-context*)))
	  (when h (gethash1 i h)))))))

(defun push-context (i)
  (declare (fixnum i))
  (unless *sharp-eq-context* (setq *sharp-eq-context* (make-context)))
  (let* ((v (context-vec *sharp-eq-context*))(l (length v))(x (cons nil nil)))
    (cond ((< i l) (error "#~s= multiply defined" i))
	  ((= i l) (vector-push-extend x v (1+ l)) x)
	  ((let ((h (context-hash *sharp-eq-context*)))
	     (if h (when (gethash1 i h) (error "#~s= multiply defined" i)) 
	       (setf (context-hash *sharp-eq-context*) (setq h (make-hash-table :test 'eql :rehash-size 2.0))))
	     (setf (gethash i h) x))))))

(defconstant +nil-proxy+ (cons nil nil))

(defun sharp-eq-reader (stream subchar i &aux (x (push-context i)))
  (declare (ignore subchar)(fixnum i))
  (let ((y (read stream t 'eof t)))
    (when (when y (eq y (cdr x))) (error "#= circularly defined"))
    (setf (car x) (or y +nil-proxy+))
    y))

(defun sharp-sharp-reader (stream subchar i &aux (x (get-context i)))
  (declare (ignore stream subchar)(fixnum i))
  (unless x (error "#~s# without preceding #~s=" i i))
  (or (cdr x) (let ((s (alloc-spice))) (setf (gethash s (context-spice *sharp-eq-context*)) x (cdr x) s))))

(defun patch-sharp (x) 
  (typecase
   x
   (cons (setf (car x) (patch-sharp (car x)) (cdr x) (patch-sharp (cdr x))) x)
   ((vector t)
    (dotimes (i (length x) x)
      (setf (aref x i) (patch-sharp (aref x i)))))
   ((array t)
    (dotimes (i (array-total-size x) x)
      (aset1 x i (patch-sharp (row-major-aref x i)))))
   (structure
    (let ((d (structure-def x))) 
      (dotimes (i (structure-length x) x)
	(declare (fixnum i))
	(structure-set x d i (patch-sharp (structure-ref x d i))))))
   (spice (let* ((y (gethash1 x (context-spice *sharp-eq-context*)))
		 (z (car y)))
	    (unless y (error "Spice ~s not defined" x))
	    (unless (eq z +nil-proxy+) z)))
   (otherwise x)))

(set-dispatch-macro-character #\# #\= #'sharp-eq-reader)
(set-dispatch-macro-character #\# #\# #'sharp-sharp-reader)
