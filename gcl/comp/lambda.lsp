(in-package "BCOMP")

#|
(let ((a 3))
  (defun f0 (x) (+ x 2))
  (defun f1 (x) (setq a x) (+ x 2))
  (defun f2 (x &aux u) #'(lambda (y) (+ x y a u)))
  (list  #'f0 #'f1 #'f2 (f2 1) (f2 1)))

f1 alters the a which the function f2 outputs.
each call to f2 makes a different closure variable x however.
There is only one closure variable a.

  (function (lambda ....))
  is a closure if in (lambda ....) there are references to the cross boundary
  You get the list of such vars 


A compiled closure will be

  struct closure
  { object name;
    ..
    object *cldata;
    short cldata_dim;
 }

MakeClosure(3,fn,argd,V1,V2,V3)

 would construct it, and the V1,V2,V4 would be the cons's whose cars
 represent the closure variables.
 inside the closure we will have  this_cldata variable, and can reference
 the variables by position for this closure.
 Each time we enter a let or &aux or lambda variable which freshly binds 
 a closure variable, a new cons must be created.   This cons is immediately
 put in the accessor array for this closure.
 
|#
