(in-package "BCOMP")

(defopt NTH-MV
  ((fixnum) t #.(flags safe constantp)
   "(fcall.nvalues > $0 ? fcall.values[$0] : sLnil)"))

(defopt LIST-MV
  (() t #.(flags proclaim safe ans ) "ListVector(fcall.nvalues,&fcall.values[0])")
  ;(() dynamic-extent #.(flags safe ans )
  ;  "ON_STACK_LIST_VECTOR(fcall.nvalues,&fcall.values[0])")
  )

;(defopt pop-control-stack
;  (() t #.(flags safe set) "CtlPop"))

(defopt progv-bind
  ((t t) fixnum #.(flags set safe) "IprogvBind(#0,#1)"))

(defopt do-throw
  ((t)t #.(flags proclaim set  safe) "Ido_throw(#0)"))

(defopt unique-id
  (() t #.(flags ans safe) "alloc_object(t_spice)"))

(defopt pass-values
  (() * #.(flags proclaim mv safe) "fcall.values[0]"))

(defopt nlj-active-off
  (()t #.(flags safe set) "nlj_active=0;VsTop = SaveVs "))

;(defopt nlj-active-off
;  (()t #.(flags safe set) "nlj_active=0; "))


(defopt assign-args
  (( *) t #.(flags safe set) do-assign-args))

(defopt funcall
  ((t *) t #.(flags set )
   "@0;(VFUN_NARGS=($#-1),fcall.fun=$0,(type_of($0)==t_afun||type_of($0)==t_closure)
	&& F_PLAIN($0->sfn.Argd) ? *($0->sfn.Body) : fcalln)($@1)"))
(proclaim1 '(ftype (function (*) t) si::make-structure))
(defopt si::make-structure ((t *) t #.(flags ans  safe) "ImakeStructure($#,$*0)"))









