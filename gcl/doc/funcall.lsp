
I have been trying to improve funcall so that functions of a fixed
number of args can be funcalled with almost the same speed as
they can be called if the name is laid down in the file.   Basically
I have made functions with a fixed number of args, first class
compiled-function objects, and removed the si::cdefn property stuff.
It is no longer necessary to have a global version of the function,
since one can now use the C stack version anywhere.   I have made
compiled function objects slightly smaller, but with more information.
So the number of args and there types is encoded in these C functions.
It will soon be possible to do fast cross file calling of functions
with mixed fixnum and general args and one return value.

After these changes:

A comparison of calling a fixed arg function of 1 argument:
(the second time for KCL is for when the function is in a separate file).

               LUCID     AKCL   KCL
funcall        8.3       3.54   18.8           (funcall x nil) where x = #'foo
Direct call    7.44      2.78   3.16(23.4)     (foo nil)

(proclaim '(function foo (t) t)) 
(defun line1 (x n) (sloop for i below n with y do (setq y (funcall x nil))))
(defun line2 (n) (sloop for i below n with y do (setq y (foo nil))))
(defun foo (x) x nil)

It is able to detect that only one value from the funcall is desired,
because of the setq.   In general the following macro can be used to inform
the compiler of this.

(defmacro vfuncall (x &rest args)
 `(the (values t) (funcall ,x ,@ args)))

We can not lay down the new funcall code if multiple values might be desired:
(defun joe (x) (funcall x nil))
will have its number of values returned depend on x.

(defun joe (x) (the (values t) (funcall x nil)))
or
(defun joe (x) (setq x (funcall x nil)))

would allow it however.

Unfortunately GCL is much slower if the function to be funcalled does
not happen to be a compiled function which was compiled while
proclaimed with a fixed number of args and one value.  Still there are
a number of critical applications where it is useful to have a very
fast funcall.  I have no useful heuristic at the moment for 'guessing'
which kind of funcall I should lay down: One optimized for C stack or
one optimized for Lisp stack.  I can only detect when it is safe to
lay down a C stack one.  However if the function in question uses the
lisp stack, and is called via the C stack, the call will be twice as
slow as it used to be.  This is very unfortunate!  At the cost of
space I could avoid this, but the new funcall takes up less space than
the old one and I hate to lay down two types in the code just in
case....   The check as to type is being laid down, but a trick is
used to keep space different minimal.

SPACE:

I have also noted some size differences (as reported by size *.o)
where the amounts are the 'dec' = decimal representation of
text+data+bss in the object file.   This is what gets loaded.
There is still room for improvement here.   Most of the difference
is due to the fact that functions of fixed args only need one
entry now.


Before:	              After:
31340	basis.o       28348
76584	code-1-a.o    63212
94136	code-b-d.o    79136
93372	code-e-m.o    75384
125172	code-n-r.o    10524
77148	code-s-z.o    61840
15620	events.o      14504
4036	genfact.o     3464 
27908	io.o	      24544
9132	ppr.o	      8340 
42668	sloop.o	      40484
