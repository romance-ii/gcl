(in-package "BCOMP")

(setf (get 'let-control-stack 'b2) 'b2-let-control-stack)
(defun b2-let-control-stack (x)
  (let ((*control-stack* *control-stack*)(*blocks* 0))
    (open-block)
    (wr "object *VOL SaveVs = VsTop;")
    (expr-b2 (cadr x))
    (close-blocks)
    ))

(defopt control-jumped-back
  ((t) boolean #.(flags set safe) control-jumped-back-aux))

(defun control-jumped-back-aux(x)
    (push 'ctl-push *control-stack*)
  (wr-inline-call1 x "@0;CtlJumpedBack(ctl_TAGGED_CATCH,$0)"))

(defopt push-unwind-protect
  ;; The second argument is a function to call to do unwinding	 
  ((t) t #.(flags  safe set) push-unwind-protect-aux))

(defun push-unwind-protect-aux (x)
;; we use this function call to push something on control stack  
  (push (list 'unwind-protect (car x)) *control-stack*)
  (or (and (eq (car *exit*) 'next)
	   (or (and  (eq (cadr *control-stack*) 'avma-bind)
		     (eq (cdr *exit*) (cddr *control-stack*)))
	       (eq (cdr *exit*) (cdr *control-stack*))))
      (wfs-error))
  (setq *exit* (cons 'next *control-stack*))
  (wr-inline-call1 x "CtlUnwindPush($0)"))












