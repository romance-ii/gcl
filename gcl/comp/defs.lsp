
(in-package "BCOMP")

#|
after pass 1 only the following forms are allowed

forms1 == (form1 form1 ... form1)
form1  == output of (w1-walk form)
N == 0,1,2,3..
desk  == desk structure
var1 == var structure
       | (var N)
binds == ((var1  form1) (var1 form1) ..)
arglist  == (form1 form1 ... form1)
(LET desk binds  forms1)
;(LET* desk binds  forms1)  ; not needed since the variable assign done.
(CALL desk call-data )
(FUNCTION desk function-data)

----------------------
|#

;;Globals for Second pass
;; push on to this when special is bound, so that it can be unbound.
(defvar *sp-bind* nil)
;; set when a setjmp is laid down, so variables can be declared volatile
(defvar *volatile* nil)

;; tells unwind-set that number of values already set.
(defvar *MV-N-VALUES-SET* nil)

(defvar *top-form*
;; Passes of the compiler may bind this to a form name which they are compiling
;; to make the errors more meaninful.
  nil)

(defstruct var name
  ;; count of cross lambda block closure references
  clb
  type ;; rep type
  changed ;; var was altered
  ref    ;; var referred to
  special-p  ;; var declared special
  ;;for special var, something to which wr applies to write it 
  ;;for a closure var, if the the var is NOT in the *closure-vars*
  ;;   (ie those passed in to this function), then it is an (next-cvars) index
  ;;   if the var was passed in then this field is ignored, and the index is
  ;;   the position in the *closure-vars* list.
  ;;for a normal variable the (next-cvar), eg ind = 3 , var written V3   
  ind
  ;; vars which are maybe referred to after return from a setjmp
  volatile
  ) 

(defstruct (desk (:constructor make-desk1 (result-type )))
     result-type  ;result of first value
     ;CHANGED-VARS are the plain-var-p vars which are altered  in the
     ;scope of the form of which this desk appears as the second member.
     ;used when setting up args for a c call, to know if we need to save a var
     changed-vars
     single-value
     )

(defun make-desk (x)
  (or x (setq x t))
  (make-desk1 x))

(defstruct fdata
  name
  ll ; list : (ll &required (fdata-ll fd))   == the list of required args.
  closure-vars
  ind
  address-index
  doc
  form
  function-declaration  ;; at the time of definition
  argd
  local-template   ;; local function call template.
  closure-self   ;; if this is a closure and non nil then it points to a funobj = self
  tail-label
)
  
(defstruct (call-data (:constructor make-call-data
				    (fname arglist local-fun
					   function-declaration)))
  fname   ;  may be a name or else fdata for a local function.
  arglist
  local-fun 
  ;;declaration at the point of call.
  ;;If nil, and if not local then
  ;; it may be retrieved later.
  function-declaration  
  )

(defstruct label
  identifier
  ;; If this label is referred to across functions, a unique-id
  ;; is assigned and put in the clb-reference field.   Otherwise this is nil
  clb-reference
  ;; On pass1 this is set to 'clb by clb references.   If it is null it is
  ;; set to t by ordinary references.
  referred
  ind
  )

(defstruct (block (:constructor make-block (label)))
  label
  value
  exit)

(defstruct top-form
  lisp
  walked
  funp    ;T if contains a function
  )

(defstruct (link (:constructor make-link (fname proclaimed)))
  (argd  0 :type fixnum)
  ind
  proclaimed
  fname
  )



  