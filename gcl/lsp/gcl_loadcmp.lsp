(in-package 'compiler)


(format t "~%Loading the whole compiler...")
(let ((sysd (concatenate 'string si::*system-directory* "../cmpnew/")))
  (load (merge-pathnames (concatenate 'string si::*system-directory*
				      "../lsp/defstruct")))
  (dolist (v     '(
		  
		   "cmpinline" 
		   "cmputil" 
		   "cmptype" 
		   "cmpbind" 
		   "cmpblock" 
		   "cmpcall" 
		   "cmpcatch" 
		   "cmpenv" 
		   "cmpeval" 
		   "cmpflet" 
		   "cmpfun" 
		   "cmpif" 
		   "cmplabel" 
		   "cmplam" 
		   "cmplet" 
		   "cmploc" 
					; "cmpmain" 
		   "cmpmap" 
		   "cmpmulti" 
		   "cmpspecial" 
		   "cmptag" 
		   "cmptop" 
		   "cmpvar" 
		   "cmpvs" 
		   "cmpwt" 
	))
	 (load (merge-pathnames v sysd)))
  (load (merge-pathnames "cmpmain.lsp" sysd)))

(defun compile-file
    (&rest system::args &aux (*print-pretty* nil) (*package* *package*))
    (compiler::init-env) (apply 'compiler::compile-file1 system::args))
(defun compile (&rest system::args &aux (*print-pretty* nil))
    (apply 'compiler::compile1 system::args))
(defun disassemble (&rest system::args &aux (*print-pretty* nil))
    (apply 'compiler::disassemble1 system::args))
(setf (symbol-function 'si:clear-compiler-properties)
       (symbol-function 'compiler::compiler-clear-compiler-properties))
