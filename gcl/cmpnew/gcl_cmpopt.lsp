;; -*-Lisp-*-
(in-package 'compiler)

;; The optimizers have been redone to allow more flags
;; The old style optimizations  correspond to the first 2
;; flags.  
;; ( arglist result-type flags {string | function})

;; meaning of the flags slot.
;;       '((allocates-new-storage ans)          ;; might invoke gbc
;;	 (side-effect-p set)                    ;; no effect on arguments
;;	 (constantp)                            ;; always returns same result,
;;	                                        ;; double eval ok.
;;	 (result-type-from-args rfa)            ;; if passed args of matching
;;					        ;; type result is of result type
;;       (is)                                   ;; extends the `integer stack'.
;;	 (inline-types-function itf)))          ;; car of ii is a function returning match info
;    (cond ((member flag v :test 'eq)
;
;;;   valid properties are 'inline-always 'inline-safe 'inline-unsafe

;; Note:   The order of the properties is important, since the first
;; one whose arg types and result type can be matched will be chosen.


(or (fboundp 'flags) (load "../cmpnew/cmpeval.lsp"))

(defmacro pushn (a b)
  (let ((tmp (gensym)))
    `(let ((,tmp `(,',(if (listp (caadr a)) (mapcar 'cmp-norm-tp (caadr a)) (caadr a)) 
		   ,',(cmp-norm-tp (cadadr a)) 
		   ,,@(mapcar (lambda (x) `',x) (cddadr a)))))
       (push ,tmp ,b))))

;;BOOLE3
 (pushn '((fixnum fixnum fixnum) fixnum #.(flags rfa)INLINE-BOOLE3)
   (get 'boole3 'inline-always))

;;FP-OKP
 (pushn '((t) boolean #.(flags set rfa)
  "@0;(type_of(#0)==t_stream? ((#0)->sm.sm_fp)!=0: 0 )")
   (get 'fp-okp 'inline-unsafe))
(pushn '((stream) boolean #.(flags set rfa)"((#0)->sm.sm_fp)!=0")
   (get 'fp-okp 'inline-unsafe))

;;LDB1
 (pushn '((fixnum fixnum fixnum) fixnum #.(flags)
  "((((~(-1 << (#0))) << (#1)) & (#2)) >> (#1))")
   (get 'si::ldb1 'inline-always))

;;LONG-FLOAT-P
 (pushn '((t) boolean #.(flags rfa)"type_of(#0)==t_longfloat")
   (get 'long-float-p 'inline-always))

;;SFEOF
 (pushn '((t) boolean #.(flags set rfa)"(feof((#0)->sm.sm_fp))")
   (get 'sfeof 'inline-unsafe))


;;SGETC1
 (pushn '((t) fixnum #.(flags set rfa) "getc((#0)->sm.sm_fp)")
   (get 'sgetc1 'inline-unsafe))

;;SPUTC
 (pushn '((fixnum t) fixnum #.(flags set rfa)"(putc(#0,(#1)->sm.sm_fp))")
   (get 'sputc 'inline-unsafe))
(pushn '((character t) fixnum #.(flags set rfa)"(putc(#0,(#1)->sm.sm_fp))")
   (get 'sputc 'inline-unsafe))

;;FORK
 (pushn '(() t #.(flags)"myfork()")
   (get 'si::fork 'inline-unsafe))

;;READ-POINTER-OBJECT
 (pushn '((t) t #.(flags ans set)"read_pointer_object(#0)")
   (get 'si::read-pointer-object 'inline-unsafe))

;;WRITE-POINTER-OBJECT
 (pushn '((t t) t #.(flags ans set)"write_pointer_object(#0,#1)")
   (get 'si::write-pointer-object 'inline-unsafe))

;;READ-BYTE1
 (pushn '((t t) t #.(flags rfa ans set)"read_byte1(#0,#1)")
   (get 'read-byte1 'inline-unsafe))

;;READ-CHAR1
 (pushn '((t t) t #.(flags rfa ans set)"read_char1(#0,#1)")
   (get 'read-char1 'inline-unsafe))

;;SHIFT<<
 (pushn '((fixnum fixnum) fixnum #.(flags)"((#0) << (#1))")
   (get 'shift<< 'inline-always))

;;SHIFT>>
 (pushn '((fixnum fixnum) fixnum #.(flags set rfa)"((#0) >> (- (#1)))")
   (get 'shift>> 'inline-always))

;;SHORT-FLOAT-P
 (pushn '((t) boolean #.(flags rfa)"type_of(#0)==t_shortfloat")
   (get 'short-float-p 'inline-always))

;;SIDE-EFFECTS
 (pushn '(nil t #.(flags ans set)"Ct")
   (get 'side-effects 'inline-always))

;;STACK-CONS  ;;FIXME update this
; (pushn '((fixnum t t) t #.(flags)
;  "(STcons#0.t=t_cons,STcons#0.m=0,STcons#0.c_car=(#1),
;              STcons#0.c_cdr=(#2),(object)&STcons#0)")
;   (get 'stack-cons 'inline-always))

;;SUBLIS1
 (pushn '((t t t) t #.(flags rfa ans set)SUBLIS1-INLINE)
   (get 'sublis1 'inline-always))

;;FIXME the MAX and MIN optimized  arg evaluations aren't logically related to side effects
;;      but we need to save the intermediate results in any case to avoid exponential
;;      growth in nested expressions.  set added to flags for now here and in analogous
;;      constructs involving ?.  CM 20041129

;;ABS
; (si::putprop 'abs 'abs-propagator 'type-propagator)
 (pushn '(((integer #.(1+ most-negative-fixnum) #.most-positive-fixnum)) (integer 0 #.most-positive-fixnum) #.(flags rfa)"abs(#0)")
   (get 'abs 'inline-always))
 (pushn '((short-float) (short-float 0.0) #.(flags rfa)"fabs(#0)") ;;FIXME ranged floating point types
   (get 'abs 'inline-always))
 (pushn '((long-float) (long-float 0.0) #.(flags rfa)"fabs(#0)")
   (get 'abs 'inline-always))
 (pushn '(((real 0.0)) t #.(flags)"#0")
   (get 'abs 'inline-always))

;;SYMBOL-LENGTH
 (pushn '((t) fixnum #.(flags rfa set)
  "@0;(type_of(#0)==t_symbol ? (#0)->s.st_fillp :not_a_variable((#0)))")
   (get 'symbol-length 'inline-always))

;;VECTOR-TYPE
 (pushn '((t fixnum) boolean #.(flags rfa)
  "@0;(type_of(#0) == t_vector && (#0)->v.v_elttype == (#1))")
   (get 'vector-type 'inline-always))

;;SYSTEM:ASET
 (pushn '((t t t) t #.(flags set)"aset1(#0,fixint(#1),#2)")
   (get 'system:aset 'inline-always))
(pushn '((t fixnum t) t #.(flags set)"aset1(#0,#1,#2)")
   (get 'system:aset 'inline-always))
(pushn '((t t t) t #.(flags set)"aset1(#0,fix(#1),#2)")
   (get 'system:aset 'inline-unsafe))
(pushn '(((array t) fixnum t) t #.(flags set)"(#0)->v.v_self[#1]= (#2)")
   (get 'system:aset 'inline-unsafe))
(pushn '(((array character) fixnum character) character #.(flags rfa set)"(#0)->ust.ust_self[#1]= (#2)")
   (get 'system:aset 'inline-unsafe))
(pushn '(((array fixnum) fixnum fixnum) fixnum #.(flags set rfa)"(#0)->fixa.fixa_self[#1]= (#2)")
   (get 'system:aset 'inline-unsafe))
(pushn '(((array signed-short) fixnum fixnum) fixnum #.(flags rfa set)"((short *)(#0)->ust.ust_self)[#1]=(#2)")
   (get 'system:aset 'inline-unsafe))
(pushn '(((array signed-char) fixnum fixnum) fixnum #.(flags rfa set)"((#0)->ust.ust_self)[#1]=(#2)")
   (get 'system:aset 'inline-unsafe))
(pushn '(((array unsigned-short) fixnum fixnum) fixnum #.(flags rfa set)
  "((unsigned short *)(#0)->ust.ust_self)[#1]=(#2)")
   (get 'system:aset 'inline-unsafe))
(pushn '(((array unsigned-char) fixnum fixnum) fixnum #.(flags rfa set)"((#0)->ust.ust_self)[#1]=(#2)")
   (get 'system:aset 'inline-unsafe))
(pushn '(((array short-float) fixnum short-float) short-float #.(flags rfa set)"(#0)->sfa.sfa_self[#1]= (#2)")
   (get 'system:aset 'inline-unsafe))
(pushn '(((array long-float) fixnum long-float) long-float #.(flags rfa set)"(#0)->lfa.lfa_self[#1]= (#2)")
   (get 'system:aset 'inline-unsafe))
(pushn '((t t t t) t #.(flags set)
  "@0;aset(#0,fix(#1)*(#0)->a.a_dims[1]+fix(#2),#3)")
   (get 'system:aset 'inline-unsafe))
(pushn '(((array t) fixnum fixnum t) t #.(flags set)
  "@0;(#0)->a.a_self[(#1)*(#0)->a.a_dims[1]+#2]= (#3)")
   (get 'system:aset 'inline-unsafe))
(pushn '(((array character) fixnum fixnum character) character
	#.(flags rfa set)
  "@0;(#0)->ust.ust_self[(#1)*(#0)->a.a_dims[1]+#2]= (#3)")
   (get 'system:aset 'inline-unsafe))
(pushn '(((array fixnum) fixnum fixnum fixnum) fixnum #.(flags set rfa)
  "@0;(#0)->fixa.fixa_self[(#1)*(#0)->a.a_dims[1]+#2]= (#3)")
   (get 'system:aset 'inline-unsafe))
(pushn '(((array short-float) fixnum fixnum short-float) short-float #.(flags rfa set)
  "@0;(#0)->sfa.sfa_self[(#1)*(#0)->a.a_dims[1]+#2]= (#3)")
   (get 'system:aset 'inline-unsafe))
(pushn '(((array long-float) fixnum fixnum long-float) long-float #.(flags rfa set)
  "@0;(#0)->lfa.lfa_self[(#1)*(#0)->a.a_dims[1]+#2]= (#3)")
   (get 'system:aset 'inline-unsafe))

;;SYSTEM:CHAR-SET
 (pushn '((t t t) t #.(flags set)"elt_set(#0,fixint(#1),#2)")
   (get 'system:char-set 'inline-always))
(pushn '((t fixnum t) t #.(flags set)"elt_set(#0,#1,#2)")
   (get 'system:char-set 'inline-always))
(pushn '((t t t) t #.(flags set)
  "@2;((#0)->ust.ust_self[fix(#1)]=char_code(#2),(#2))")
   (get 'system:char-set 'inline-unsafe))
(pushn '((t fixnum character) character #.(flags rfa set)"(#0)->ust.ust_self[#1]= (#2)")
   (get 'system:char-set 'inline-unsafe))

;;SYSTEM:ELT-SET
 (pushn '((t t t) t #.(flags set)"elt_set(#0,fixint(#1),#2)")
   (get 'system:elt-set 'inline-always))
(pushn '((t fixnum t) t #.(flags set)"elt_set(#0,#1,#2)")
   (get 'system:elt-set 'inline-always))
(pushn '((t t t) t #.(flags set)"elt_set(#0,fix(#1),#2)")
   (get 'system:elt-set 'inline-unsafe))

;;SYSTEM:FILL-POINTER-SET
 (pushn '((t fixnum) seqind #.(flags rfa set)"(((#0)->st.st_fillp)=(((#0)->st.st_hasfillp) ? (#1) : ((#0)->st.st_fillp)))")
   (get 'system:fill-pointer-set 'inline-unsafe))
 (pushn '(((vector) seqind) seqind #.(flags rfa set)"(((#0)->st.st_fillp)=(((#0)->st.st_hasfillp) ? (#1) : ((#0)->st.st_fillp)))")
   (get 'system:fill-pointer-set 'inline-always))

;;SYSTEM:FIXNUMP
 (pushn '((t) boolean #.(flags rfa)"type_of(#0)==t_fixnum")
   (get 'system:fixnump 'inline-always))
(pushn '((fixnum) boolean #.(flags rfa)"1")
   (get 'system:fixnump 'inline-always))

;;SYSTEM:SEQINDP
 (pushn '((t) boolean #.(flags rfa) #.(format nil "(type_of(#0)==t_fixnum && ({fixnum _t=fix(#0);_t>=0 && _t<=~s;}))" array-dimension-limit))
   (get 'system::seqindp 'inline-always))
(pushn '((fixnum) boolean #.(flags rfa)#.(format nil "(#0>=0 && #0<=~s)" array-dimension-limit))
   (get 'system::seqindp 'inline-always))
(pushn '((seqind) boolean #.(flags rfa)"1")
   (get 'system::seqindp 'inline-always))

;;SYSTEM:MV-REF
 (pushn '((fixnum) t #.(flags ans set)"(MVloc[(#0)])")
   (get 'system:mv-ref 'inline-always))

;;SYSTEM:PUTPROP
 (pushn '((t t t) t #.(flags set)"putprop(#0,#1,#2)")
   (get 'system:putprop 'inline-always))

;;SYSTEM:SCHAR-SET
 (pushn '((t t t) t #.(flags set)"elt_set(#0,fixint(#1),#2)")
   (get 'system:schar-set 'inline-always))
(pushn '((t fixnum t) t #.(flags set)"elt_set(#0,#1,#2)")
   (get 'system:schar-set 'inline-always))
(pushn '((t t t) t #.(flags set)
  "@2;((#0)->ust.ust_self[fix(#1)]=char_code(#2),(#2))")
   (get 'system:schar-set 'inline-unsafe))
(pushn '((t fixnum character) character #.(flags set rfa)"(#0)->ust.ust_self[#1]= (#2)")
   (get 'system:schar-set 'inline-unsafe))

;;SYSTEM:SET-MV
 (pushn '((fixnum t) t #.(flags ans set)"(MVloc[(#0)]=(#1))")
   (get 'system:set-mv 'inline-always))

;;SYSTEM:SPUTPROP
 (pushn '((t t t) t #.(flags set)"sputprop(#0,#1,#2)")
   (get 'system:sputprop 'inline-always))

;;SYSTEM:STRUCTURE-DEF
 (pushn '((t) t #.(flags)"(#0)->str.str_def")
   (get 'system:structure-def 'inline-unsafe))

;;SYSTEM:STRUCTURE-REF
 (pushn '((t t fixnum) t #.(flags ans)"structure_ref(#0,#1,#2)")
   (get 'system:structure-ref 'inline-always))

;;SYSTEM:STRUCTURE-SET
 (pushn '((t t fixnum t) t #.(flags set)"structure_set(#0,#1,#2,#3)")
   (get 'system:structure-set 'inline-always))

;;SYSTEM:STRUCTUREP
 (pushn '((t) boolean #.(flags rfa)"type_of(#0)==t_structure")
   (get 'system:structurep 'inline-always))

;;SYSTEM:SVSET
 (pushn '((t t t) t #.(flags set)"aset1(#0,fixint(#1),#2)")
   (get 'system:svset 'inline-always))
(pushn '((t fixnum t) t #.(flags set)"aset1(#0,#1,#2)")
   (get 'system:svset 'inline-always))
(pushn '((t t t) t #.(flags set)"((#0)->v.v_self[fix(#1)]=(#2))")
   (get 'system:svset 'inline-unsafe))
(pushn '((t fixnum t) t #.(flags set)"(#0)->v.v_self[#1]= (#2)")
   (get 'system:svset 'inline-unsafe))

;;*
;(si::putprop '* 'super-range 'type-propagator)
(pushn '((t t) t #.(flags ans)"number_times(#0,#1)")
   (get '* 'inline-always))
(pushn '((fixnum-float fixnum-float) short-float #.(flags)"(double)(#0)*(double)(#1)")
   (get '* 'inline-always))
(pushn '((fixnum-float fixnum-float) long-float #.(flags)"(double)(#0)*(double)(#1)")
   (get '* 'inline-always))
(pushn '((long-float long-float) long-float #.(flags rfa)"(double)(#0)*(double)(#1)")
   (get '* 'inline-always))
(pushn '((short-float short-float) short-float #.(flags rfa)"(#0)*(#1)")
   (get '* 'inline-always))

(pushn '((fixnum fixnum) fixnum #.(flags)"(#0)*(#1)")
   (get '* 'inline-always))

;;ASH
;(si::putprop 'ash 'ash-propagator 'type-propagator)
(pushn '(((integer 0 0) t) fixnum #.(flags rfa)"0")
   (get 'ash 'inline-always))
(pushn '((fixnum (integer 0 #.(integer-length most-positive-fixnum))) fixnum #.(flags)"((#0)<<(#1))")
   (get 'ash 'inline-always))
(pushn '((fixnum (integer #.most-negative-fixnum -1)) fixnum #.(flags set)
	#.(concatenate 'string "@1;(-(#1)&"
		       (write-to-string (lognot (integer-length most-positive-fixnum)))
		       "? ((#0)>=0 ? 0 : -1) : (#0)>>-(#1))"))
   (get 'ash 'inline-always))


;;+
;(si::putprop '+ 'super-range 'type-propagator)
(pushn '((t t) t #.(flags ans)"number_plus(#0,#1)")
   (get '+ 'inline-always))
(pushn '((fixnum-float fixnum-float) short-float #.(flags)"(double)(#0)+(double)(#1)")
   (get '+ 'inline-always))
(pushn '((fixnum-float fixnum-float) long-float #.(flags)"(double)(#0)+(double)(#1)")
   (get '+ 'inline-always))
(pushn '((long-float long-float) long-float #.(flags rfa)"(double)(#0)+(double)(#1)")
   (get '+ 'inline-always))
(pushn '((short-float short-float) short-float #.(flags rfa)"(#0)+(#1)")
   (get '+ 'inline-always))

(pushn '((fixnum fixnum) fixnum #.(flags)"(#0)+(#1)")
   (get '+ 'inline-always))

;;-
;(si::putprop '- 'super-range 'type-propagator)
(pushn '((t) t #.(flags ans)"number_negate(#0)")
   (get '- 'inline-always))
(pushn '(((integer #.(1+ most-negative-fixnum) #.most-positive-fixnum)) fixnum #.(flags)"-(#0)")
   (get '- 'inline-always))

(pushn '((t t) t #.(flags ans)"number_minus(#0,#1)")
   (get '- 'inline-always))
(pushn '((fixnum-float fixnum-float) short-float #.(flags)"(double)(#0)-(double)(#1)")
   (get '- 'inline-always))
(pushn '((fixnum-float) short-float #.(flags)"-(double)(#0)")
   (get '- 'inline-always))
(pushn '((fixnum-float) long-float #.(flags)"-(double)(#0)")
   (get '- 'inline-always))
(pushn '((fixnum-float fixnum-float) long-float #.(flags)"(double)(#0)-(double)(#1)")
   (get '- 'inline-always))
(pushn '((long-float long-float) long-float #.(flags rfa)"(double)(#0)-(double)(#1)")
   (get '- 'inline-always))
(pushn '((short-float short-float) short-float #.(flags rfa)"(#0)-(#1)")
   (get '- 'inline-always))


(pushn '((fixnum fixnum) fixnum #.(flags)"(#0)-(#1)")
   (get '- 'inline-always))
(pushn '((fixnum) fixnum #.(flags)"-(#0)")
   (get '- 'inline-always))

;;/
(pushn '((fixnum fixnum) fixnum #.(flags)"(#0)/(#1)")
   (get '/ 'inline-always))
 (pushn '((fixnum-float fixnum-float) short-float #.(flags)"(double)(#0)/(double)(#1)")
   (get '/ 'inline-always))
(pushn '((fixnum-float fixnum-float) long-float #.(flags)"(double)(#0)/(double)(#1)")
   (get '/ 'inline-always))
(pushn '((long-float long-float) long-float #.(flags rfa)"(double)(#0)/(double)(#1)")
   (get '/ 'inline-always))
(pushn '((short-float short-float) short-float #.(flags rfa)"(#0)/(#1)")
   (get '/ 'inline-always))

;;/=
 (pushn '((t t) boolean #.(flags rfa)"number_compare(#0,#1)!=0")
   (get '/= 'inline-always))
(pushn '((fixnum-float fixnum-float) boolean #.(flags rfa)"(#0)!=(#1)")
   (get '/= 'inline-always))

;;1+
 (pushn '((t) t #.(flags ans)"one_plus(#0)")
   (get '1+ 'inline-always))
(pushn '((fixnum-float) short-float #.(flags)"(double)(#0)+1")
   (get '1+ 'inline-always))
(pushn '((fixnum-float) long-float #.(flags)"(double)(#0)+1")
   (get '1+ 'inline-always))
(pushn '((fixnum) fixnum #.(flags)"(#0)+1")
   (get '1+ 'inline-always))


;;1-
 (pushn '((t) t #.(flags ans)"one_minus(#0)")
   (get '1- 'inline-always))
(pushn '((fixnum) fixnum #.(flags)"(#0)-1")
   (get '1- 'inline-always))
(pushn '((fixnum-float) short-float #.(flags)"(double)(#0)-1")
   (get '1- 'inline-always))
(pushn '((fixnum-float) long-float #.(flags)"(double)(#0)-1")
   (get '1- 'inline-always))

;;<
 (pushn '((t t) boolean #.(flags rfa)"number_compare(#0,#1)<0")
   (get '< 'inline-always))
(pushn '((fixnum-float fixnum-float) boolean #.(flags rfa)"(#0)<(#1)")
   (get '< 'inline-always))

;;compiler::objlt
 (pushn '((t t) boolean #.(flags rfa)"((object)(#0))<((object)(#1))")
   (get 'si::objlt 'inline-always))

;;<=
(pushn '((t t) boolean #.(flags rfa)"number_compare(#0,#1)<=0")
      (get '<= 'inline-always))
(pushn '((fixnum-float fixnum-float) boolean #.(flags rfa)"(#0)<=(#1)")
      (get '<= 'inline-always))

;;=
(pushn '((t t) boolean #.(flags rfa)"number_compare(#0,#1)==0")
      (get '= 'inline-always))
(pushn '((fixnum-float fixnum-float) boolean #.(flags rfa)"(#0)==(#1)")
      (get '= 'inline-always))

;;>
(pushn '((t t) boolean #.(flags rfa)"number_compare(#0,#1)>0")
      (get '> 'inline-always))
(pushn '((fixnum-float fixnum-float) boolean #.(flags rfa)"(#0)>(#1)")
      (get '> 'inline-always))

;;>=
 (pushn '((t t) boolean #.(flags rfa)"number_compare(#0,#1)>=0")
   (get '>= 'inline-always))
(pushn '((fixnum-float fixnum-float) boolean #.(flags rfa)"(#0)>=(#1)")
   (get '>= 'inline-always))

;;APPEND
 (pushn '((t t) t #.(flags ans)"append(#0,#1)")
   (get 'append 'inline-always))

;;AREF
;(pushn '((t t) t #.(flags ans)"aref1(#0,fixint(#1))")
;   (get 'aref 'inline-always))
;(pushn '((t fixnum) t #.(flags ans)"aref1(#0,#1)")
;   (get 'aref 'inline-always))
;(pushn '((t t) t #.(flags ans)"aref1(#0,fix(#1))")
;   (get 'aref 'inline-unsafe))
;(pushn '(((array t) fixnum) t #.(flags)"(#0)->v.v_self[#1]")
;   (get 'aref 'inline-unsafe))
;(pushn '(((array character) fixnum) character #.(flags rfa)"(#0)->ust.ust_self[#1]")
;   (get 'aref 'inline-unsafe))
;(pushn '(((array fixnum) fixnum) fixnum #.(flags rfa)"(#0)->fixa.fixa_self[#1]")
;   (get 'aref 'inline-unsafe))
;(pushn '(((array unsigned-char) fixnum) fixnum #.(flags rfa)"(#0)->ust.ust_self[#1]")
;   (get 'aref 'inline-unsafe))
;(pushn '(((array signed-char) fixnum) fixnum #.(flags rfa)"SIGNED_CHAR((#0)->ust.ust_self[#1])")
;   (get 'aref 'inline-unsafe))
;(pushn '(((array unsigned-short) fixnum) fixnum #.(flags rfa)
;  "((unsigned short *)(#0)->ust.ust_self)[#1]")
;   (get 'aref 'inline-unsafe))
;(pushn '(((array signed-short) fixnum) fixnum #.(flags rfa)"((short *)(#0)->ust.ust_self)[#1]")
;   (get 'aref 'inline-unsafe))
;(pushn '(((array short-float) fixnum) short-float #.(flags rfa)"(#0)->sfa.sfa_self[#1]")
;   (get 'aref 'inline-unsafe))
;(pushn '(((array long-float) fixnum) long-float #.(flags rfa)"(#0)->lfa.lfa_self[#1]")
;   (get 'aref 'inline-unsafe))
;(pushn '((t t t) t #.(flags ans)
;  "@0;aref(#0,fix(#1)*(#0)->a.a_dims[1]+fix(#2))")
;   (get 'aref 'inline-unsafe))
;(pushn '(((array t) fixnum fixnum) t #.(flags )
;  "@0;(#0)->a.a_self[(#1)*(#0)->a.a_dims[1]+#2]")
;   (get 'aref 'inline-unsafe))
;(pushn '(((array character) fixnum fixnum) character #.(flags rfa)
;  "@0;(#0)->ust.ust_self[(#1)*(#0)->a.a_dims[1]+#2]")
;   (get 'aref 'inline-unsafe))
;(pushn '(((array fixnum) fixnum fixnum) fixnum #.(flags rfa)
;  "@0;(#0)->fixa.fixa_self[(#1)*(#0)->a.a_dims[1]+#2]")
;   (get 'aref 'inline-unsafe))
;(pushn '(((array short-float) fixnum fixnum) short-float #.(flags rfa)
;  "@0;(#0)->sfa.sfa_self[(#1)*(#0)->a.a_dims[1]+#2]")
;   (get 'aref 'inline-unsafe))
;(pushn '(((array long-float) fixnum fixnum) long-float #.(flags rfa)
;  "@0;(#0)->lfa.lfa_self[(#1)*(#0)->a.a_dims[1]+#2]")
;   (get 'aref 'inline-unsafe))


;(si::putprop 'aref 'aref-propagator 'type-propagator)
;(pushn '((t *) t #.(flags rfba)aref-inline)
;   (get 'aref 'inline-unsafe))
;(pushn '(((array) *) t #.(flags rfba)aref-inline)
;   (get 'aref 'inline-always))

;;ROW-MAJOR-AREF
;(si::putprop 'row-major-aref 'aref-propagator 'type-propagator)
;(pushn '(nil nil #.(flags rfba)row-major-aref-inline)
;   (get 'row-major-aref 'inline-unsafe))

;;CMP-AREF
(setf (symbol-function 'cmp-aref) (symbol-function 'row-major-aref))
(si::putprop 'cmp-aref 'aref-propagator 'type-propagator)
(pushn '(cmp-aref-inline-types nil #.(flags itf) cmp-aref-inline)
   (get 'cmp-aref 'inline-always))

;;CMP-ASET
(setf (symbol-function 'cmp-aset) (symbol-function 'si::aset1))
(si::putprop 'cmp-aset 'aref-propagator 'type-propagator)
(pushn '(cmp-aset-inline-types nil #.(flags itf) cmp-aset-inline)
   (get 'cmp-aset 'inline-always))


;;ARRAY-DIMENSION
;(pushn '((t fixnum) fixnum #.(flags rfa)"@01;(type_of(#0)==t_array ? (#0)->a.a_dims[(#1)] : (#0)->v.v_dim)")
;   (get 'array-dimension 'inline-unsafe))

;;CMP-ARRAY-DIMENSION
(setf (symbol-function 'cmp-array-dimension) (symbol-function 'array-dimension))
(pushn '(cmp-array-dimension-inline-types nil #.(flags itf) cmp-array-dimension-inline)
   (get 'cmp-array-dimension 'inline-always))

;;ARRAY-TOTAL-SIZE
 (pushn '((t) fixnum #.(flags rfa)"((#0)->st.st_dim)")
   (get 'array-total-size 'inline-unsafe))

;;ARRAYP
 (pushn '((t) boolean #.(flags rfa)
  "@0;({enum type _tp=type_of(#0);_tp>=t_string && _tp<=t_array;})")
   (get 'arrayp 'inline-always))

;;ATOM
 (pushn '((t) boolean #.(flags rfa)"atom(#0)")
   (get 'atom 'inline-always))

;;BIT-VECTOR-P
 (pushn '((t) boolean #.(flags rfa)"(type_of(#0)==t_bitvector)")
   (get 'bit-vector-p 'inline-always))

;;BOUNDP
 (pushn '((t) boolean #.(flags rfa)"(#0)->s.s_dbind!=OBJNULL")
   (get 'boundp 'inline-unsafe))

;;CAAAAR
 (pushn '((t) t #.(flags)"caaaar(#0)")
   (get 'caaaar 'inline-safe))
(pushn '((t) t #.(flags)"CMPcaaaar(#0)")
   (get 'caaaar 'inline-unsafe))

;;CAAADR
 (pushn '((t) t #.(flags)"caaadr(#0)")
   (get 'caaadr 'inline-safe))
(pushn '((t) t #.(flags)"CMPcaaadr(#0)")
   (get 'caaadr 'inline-unsafe))

;;CAAAR
 (pushn '((t) t #.(flags)"caaar(#0)")
   (get 'caaar 'inline-safe))
(pushn '((t) t #.(flags)"CMPcaaar(#0)")
   (get 'caaar 'inline-unsafe))

;;CAADAR
 (pushn '((t) t #.(flags)"caadar(#0)")
   (get 'caadar 'inline-safe))
(pushn '((t) t #.(flags)"CMPcaadar(#0)")
   (get 'caadar 'inline-unsafe))

;;CAADDR
 (pushn '((t) t #.(flags)"caaddr(#0)")
   (get 'caaddr 'inline-safe))
(pushn '((t) t #.(flags)"CMPcaaddr(#0)")
   (get 'caaddr 'inline-unsafe))

;;CAADR
 (pushn '((t) t #.(flags)"caadr(#0)")
   (get 'caadr 'inline-safe))
(pushn '((t) t #.(flags)"CMPcaadr(#0)")
   (get 'caadr 'inline-unsafe))

;;CAAR
 (pushn '((t) t #.(flags)"caar(#0)")
   (get 'caar 'inline-safe))
(pushn '((t) t #.(flags)"CMPcaar(#0)")
   (get 'caar 'inline-unsafe))

;;CADAAR
 (pushn '((t) t #.(flags)"cadaar(#0)")
   (get 'cadaar 'inline-safe))
(pushn '((t) t #.(flags)"CMPcadaar(#0)")
   (get 'cadaar 'inline-unsafe))

;;CADADR
 (pushn '((t) t #.(flags)"cadadr(#0)")
   (get 'cadadr 'inline-safe))
(pushn '((t) t #.(flags)"CMPcadadr(#0)")
   (get 'cadadr 'inline-unsafe))

;;CADAR
 (pushn '((t) t #.(flags)"cadar(#0)")
   (get 'cadar 'inline-safe))
(pushn '((t) t #.(flags)"CMPcadar(#0)")
   (get 'cadar 'inline-unsafe))

;;CADDAR
 (pushn '((t) t #.(flags)"caddar(#0)")
   (get 'caddar 'inline-safe))
(pushn '((t) t #.(flags)"CMPcaddar(#0)")
   (get 'caddar 'inline-unsafe))

;;CADDDR
 (pushn '((t) t #.(flags)"cadddr(#0)")
   (get 'cadddr 'inline-safe))
(pushn '((t) t #.(flags)"CMPcadddr(#0)")
   (get 'cadddr 'inline-unsafe))

;;CADDR
 (pushn '((t) t #.(flags)"caddr(#0)")
   (get 'caddr 'inline-safe))
(pushn '((t) t #.(flags)"CMPcaddr(#0)")
   (get 'caddr 'inline-unsafe))

;;CADR
 (pushn '((t) t #.(flags)"cadr(#0)")
   (get 'cadr 'inline-safe))
(pushn '((t) t #.(flags)"CMPcadr(#0)")
   (get 'cadr 'inline-unsafe))

;;CAR
 (pushn '((t) t #.(flags)"car(#0)")
   (get 'car 'inline-safe))
(pushn '((t) t #.(flags)"CMPcar(#0)")
   (get 'car 'inline-unsafe))

;;CDAAAR
 (pushn '((t) t #.(flags)"cdaaar(#0)")
   (get 'cdaaar 'inline-safe))
(pushn '((t) t #.(flags)"CMPcdaaar(#0)")
   (get 'cdaaar 'inline-unsafe))

;;CDAADR
 (pushn '((t) t #.(flags)"cdaadr(#0)")
   (get 'cdaadr 'inline-safe))
(pushn '((t) t #.(flags)"CMPcdaadr(#0)")
   (get 'cdaadr 'inline-unsafe))

;;CDAAR
 (pushn '((t) t #.(flags)"cdaar(#0)")
   (get 'cdaar 'inline-safe))
(pushn '((t) t #.(flags)"CMPcdaar(#0)")
   (get 'cdaar 'inline-unsafe))

;;CDADAR
 (pushn '((t) t #.(flags)"cdadar(#0)")
   (get 'cdadar 'inline-safe))
(pushn '((t) t #.(flags)"CMPcdadar(#0)")
   (get 'cdadar 'inline-unsafe))

;;CDADDR
 (pushn '((t) t #.(flags)"cdaddr(#0)")
   (get 'cdaddr 'inline-safe))
(pushn '((t) t #.(flags)"CMPcdaddr(#0)")
   (get 'cdaddr 'inline-unsafe))

;;CDADR
 (pushn '((t) t #.(flags)"cdadr(#0)")
   (get 'cdadr 'inline-safe))
(pushn '((t) t #.(flags)"CMPcdadr(#0)")
   (get 'cdadr 'inline-unsafe))

;;CDAR
 (pushn '((t) t #.(flags)"cdar(#0)")
   (get 'cdar 'inline-safe))
(pushn '((t) t #.(flags)"CMPcdar(#0)")
   (get 'cdar 'inline-unsafe))

;;CDDAAR
 (pushn '((t) t #.(flags)"cddaar(#0)")
   (get 'cddaar 'inline-safe))
(pushn '((t) t #.(flags)"CMPcddaar(#0)")
   (get 'cddaar 'inline-unsafe))

;;CDDADR
 (pushn '((t) t #.(flags)"cddadr(#0)")
   (get 'cddadr 'inline-safe))
(pushn '((t) t #.(flags)"CMPcddadr(#0)")
   (get 'cddadr 'inline-unsafe))

;;CDDAR
 (pushn '((t) t #.(flags)"cddar(#0)")
   (get 'cddar 'inline-safe))
(pushn '((t) t #.(flags)"CMPcddar(#0)")
   (get 'cddar 'inline-unsafe))

;;CDDDAR
 (pushn '((t) t #.(flags)"cdddar(#0)")
   (get 'cdddar 'inline-safe))
(pushn '((t) t #.(flags)"CMPcdddar(#0)")
   (get 'cdddar 'inline-unsafe))

;;CDDDDR
 (pushn '((t) t #.(flags)"cddddr(#0)")
   (get 'cddddr 'inline-safe))
(pushn '((t) t #.(flags)"CMPcddddr(#0)")
   (get 'cddddr 'inline-unsafe))

;;CDDDR
 (pushn '((t) t #.(flags)"cdddr(#0)")
   (get 'cdddr 'inline-safe))
(pushn '((t) t #.(flags)"CMPcdddr(#0)")
   (get 'cdddr 'inline-unsafe))

;;CDDR
 (pushn '((t) t #.(flags)"cddr(#0)")
   (get 'cddr 'inline-safe))
(pushn '((t) t #.(flags)"CMPcddr(#0)")
   (get 'cddr 'inline-unsafe))

;;CDR
 (pushn '((t) t #.(flags)"cdr(#0)")
   (get 'cdr 'inline-safe))
(pushn '((t) t #.(flags)"CMPcdr(#0)")
   (get 'cdr 'inline-unsafe))

;;CHAR
 (pushn '((t t) t #.(flags ans)"elt(#0,fixint(#1))")
   (get 'char 'inline-always))
(pushn '((t fixnum) t #.(flags ans)"elt(#0,#1)")
   (get 'char 'inline-always))
(pushn '((t t) t #.(flags)"code_char((#0)->ust.ust_self[fix(#1)])")
   (get 'char 'inline-unsafe))
(pushn '((t fixnum) character #.(flags rfa)"(#0)->ust.ust_self[#1]")
   (get 'char 'inline-unsafe))

;;CHAR-CODE
 (pushn '((character) fixnum #.(flags rfa)"(#0)")
   (get 'char-code 'inline-always))

;;CHAR/=
(pushn '((t t) boolean #.(flags rfa)"!eql(#0,#1)")
   (get 'char/= 'inline-unsafe))
(pushn '((t t) boolean #.(flags rfa)"char_code(#0)!=char_code(#1)")
   (get 'char/= 'inline-unsafe))
(pushn '((character character) boolean #.(flags rfa)"(#0)!=(#1)")
   (get 'char/= 'inline-unsafe))

;;CHAR<
 (pushn '((character character) boolean #.(flags rfa)"(#0)<(#1)")
   (get 'char< 'inline-always))

;;CHAR<=
 (pushn '((character character) boolean #.(flags rfa)"(#0)<=(#1)")
   (get 'char<= 'inline-always))

;;CHAR=
 (pushn '((t t) boolean #.(flags rfa)"eql(#0,#1)")
   (get 'char= 'inline-unsafe))
(pushn '((t t) boolean #.(flags rfa)"char_code(#0)==char_code(#1)")
   (get 'char= 'inline-unsafe))
(pushn '((character character) boolean #.(flags rfa)"(#0)==(#1)")
   (get 'char= 'inline-unsafe))

;;CHAR>
 (pushn '((character character) boolean #.(flags rfa)"(#0)>(#1)")
   (get 'char> 'inline-always))

;;CHAR>=
 (pushn '((character character) boolean #.(flags rfa)"(#0)>=(#1)")
   (get 'char>= 'inline-always))

;;CHARACTERP
 (pushn '((t) boolean #.(flags rfa)"type_of(#0)==t_character")
   (get 'characterp 'inline-always))

;;CODE-CHAR
 (pushn '((fixnum) character #.(flags)"(#0)")
   (get 'code-char 'inline-always))

;;CONS
 (pushn '((t t) t #.(flags ans) CONS-INLINE)
   (get 'cons 'inline-always))
;(pushn '((t t) :dynamic-extent #.(flags ans)"ON_STACK_CONS(#0,#1)")
;   (get 'cons 'inline-always))

;;CONSP
 (pushn '((t) boolean #.(flags rfa)"consp(#0)")
   (get 'consp 'inline-always))

;;COS
 (pushn '((long-float) long-float #.(flags rfa)"cos(#0)")
   (get 'cos 'inline-always))

;;DIGIT-CHAR-P
 (pushn '((character) boolean #.(flags rfa)"@0; ((#0) <= '9' && (#0) >= '0')")
   (get 'digit-char-p 'inline-always))

;;ELT
 (pushn '((t t) t #.(flags ans)"elt(#0,fixint(#1))")
   (get 'elt 'inline-always))
(pushn '((t fixnum) t #.(flags ans)"elt(#0,#1)")
   (get 'elt 'inline-always))
(pushn '((t t) t #.(flags ans)"elt(#0,fix(#1))")
   (get 'elt 'inline-unsafe))

;;ENDP
 (pushn '((t) boolean #.(flags rfa)"endp(#0)")
       (get 'endp 'inline-safe))
(pushn '((t) boolean #.(flags rfa)"(#0)==Cnil")
      (get 'endp 'inline-unsafe))

;;EQ
 (pushn '((t t) boolean #.(flags rfa)"(#0)==(#1)")
   (get 'eq 'inline-always))
;(pushn '((fixnum fixnum) boolean #.(flags rfa)"0")
;   (get 'eq 'inline-always))

;;EQL
 (pushn '((t t) boolean #.(flags rfa)"eql(#0,#1)")
       (get 'eql 'inline-always))
(pushn '((fixnum-float fixnum-float) boolean #.(flags rfa)"(#0)==(#1)")
      (get 'eql 'inline-always))
(pushn '((character character) boolean #.(flags rfa)"(#0)==(#1)")
      (get 'eql 'inline-always))
;;FIXME -- floats?

;;EQUAL
 (pushn '((t t) boolean #.(flags rfa)"equal(#0,#1)")
       (get 'equal 'inline-always))
(pushn '((fixnum-float fixnum-float) boolean #.(flags rfa)"(#0)==(#1)")
      (get 'equal 'inline-always))
(pushn '((character character) boolean #.(flags rfa)"(#0)==(#1)")
      (get 'equal 'inline-always))

;;EQUALP
 (pushn '((t t) boolean #.(flags rfa)"equalp(#0,#1)")
      (get 'equalp 'inline-always))
 (pushn '((fixnum fixnum) boolean #.(flags rfa)"(#0)==(#1)")
      (get 'equalp 'inline-always))
 (pushn '((short-float short-float) boolean #.(flags rfa)"(#0)==(#1)")
      (get 'equalp 'inline-always))
 (pushn '((long-float long-float) boolean #.(flags rfa)"(#0)==(#1)")
      (get 'equalp 'inline-always))
 (pushn '((character character) boolean #.(flags rfa)"(#0)==(#1)")
      (get 'equalp 'inline-always))

;;EXPT
 (pushn '((t t) t #.(flags ans)"number_expt(#0,#1)")
   (get 'expt 'inline-always))

(pushn '((fixnum fixnum) fixnum #.(flags)(LAMBDA (LOC1 LOC2)
                                          (IF
                                           (AND (CONSP LOC1)
                                            (EQ (CAR LOC1) 'FIXNUM-LOC)
                                            (CONSP (CADR LOC1))
                                            (EQ (CAADR LOC1)
                                             'FIXNUM-VALUE)
                                            (EQUAL (CADDR (CADR LOC1))
                                             2))
                                           (WT "(1<<(" LOC2 "))")
                                           (WT "fixnum_expt(" LOC1 #\,
                                            LOC2 #\)))))
   (get 'expt 'inline-always))


;;FILL-POINTER
 (pushn '((t) seqind #.(flags rfa)"((#0)->v.v_fillp)")
   (get 'fill-pointer 'inline-unsafe))
 (pushn '((vector) seqind #.(flags rfa)"((#0)->v.v_fillp)")
   (get 'fill-pointer 'inline-always))

;;ARRAY-HAS-FILL-POINTER-P
 (pushn '((t) boolean #.(flags rfa)"((#0)->v.v_hasfillp)")
   (get 'array-has-fill-pointer-p 'inline-unsafe))
 (pushn '((vector) boolean #.(flags rfa)"((#0)->v.v_hasfillp)")
   (get 'array-has-fill-pointer-p 'inline-always))

;;FIRST
 (pushn '((t) t #.(flags)"car(#0)")
   (get 'first 'inline-safe))
(pushn '((t) t #.(flags)"CMPcar(#0)")
   (get 'first 'inline-unsafe))

;;FLOAT
 (pushn '((fixnum-float) long-float #.(flags)"((longfloat)(#0))")
   (get 'float 'inline-always))
(pushn '((fixnum-float) short-float #.(flags)"((shortfloat)(#0))")
   (get 'float 'inline-always))

;;FLOATP
 (pushn '((t) boolean #.(flags rfa)
  "@0;type_of(#0)==t_shortfloat||type_of(#0)==t_longfloat")
   (get 'floatp 'inline-always))

;;FLOOR
; (pushn '((fixnum fixnum) fixnum #.(flags rfa)
;  "@01;(#0>=0&&(#1)>0?(#0)/(#1):ifloor(#0,#1))")
;   (get 'floor 'inline-always))
;(si::putprop 'floor 'floor-propagator 'type-propagator)
(pushn '((fixnum fixnum) (values fixnum fixnum) #.(flags rfa set)
	 "@01;({fixnum _t=(#0)/(#1);_t=((#0)<=0 && (#1)<=0) || ((#0)>=0 && (#1)>=0) || ((#1)*_t==(#0)) ? _t : _t-1;@1((#0)-_t*(#1))@ _t;})")
   (get 'floor 'inline-always))

;;CEILING
;(si::putprop 'ceiling 'floor-propagator 'type-propagator)
(pushn '((fixnum fixnum) (values fixnum fixnum) #.(flags rfa set)
	 "@01;({fixnum _t=(#0)/(#1);_t=((#0)<=0 && (#1)>=0) || ((#0)>=0 && (#1)<=0) || ((#1)*_t==(#0)) ? _t : _t+1;@1((#0)-_t*(#1))@ _t;})")
   (get 'ceiling 'inline-always))


;;FOURTH
 (pushn '((t) t #.(flags)"cadddr(#0)")
   (get 'fourth 'inline-safe))
(pushn '((t) t #.(flags)"CMPcadddr(#0)")
   (get 'fourth 'inline-unsafe))

;;GET
 (pushn '((t t t) t #.(flags)"get(#0,#1,#2)")
   (get 'get 'inline-always))
(pushn '((t t) t #.(flags)"get(#0,#1,Cnil)")
   (get 'get 'inline-always))

;;INTEGERP
 (pushn '((t) boolean #.(flags rfa)
  "@0;({enum type _tp=type_of(#0);_tp==t_fixnum||_tp==t_bignum;})")
   (get 'integerp 'inline-always))
(pushn '((fixnum) boolean #.(flags rfa)"1")
   (get 'integerp 'inline-always))


;;KEYWORDP
 (pushn '((t) boolean #.(flags rfa)
  "@0;(type_of(#0)==t_symbol&&(#0)->s.s_hpack==keyword_package)")
   (get 'keywordp 'inline-always))

;;ADDRESS
 (pushn '((t) fixnum #.(flags rfa)"((fixnum)(#0))")
   (get 'si::address 'inline-always))

;;NANI
 (pushn '((fixnum) t #.(flags rfa)"((object)(#0))")
   (get 'si::nani 'inline-always))


;;LENGTH
 (pushn '((t) seqind #.(flags rfa set)"length(#0)")
   (get 'length 'inline-always))
(pushn '((vector) seqind #.(flags rfa)"(#0)->v.v_fillp")
   (get 'length 'inline-unsafe))

;;CMP-VEC-LENGTH
(pushn '((t) seqind #.(flags rfa)"(#0)->v.v_fillp")
   (get 'cmp-vec-length 'inline-always))
;(pushn '(((array t)) seqind #.(flags rfa)"(#0)->v.v_fillp")
;   (get 'length 'inline-unsafe))
;(pushn '(((array fixnum)) seqind #.(flags rfa)"(#0)->v.v_fillp")
;   (get 'length 'inline-unsafe))
;(pushn '((string) seqind #.(flags rfa)"(#0)->v.v_fillp")
;   (get 'length 'inline-unsafe))

;;LIST
 (pushn '(nil t #.(flags)"Cnil")
   (get 'list 'inline-always))
(pushn '((t) t #.(flags ans)"make_cons(#0,Cnil)")
   (get 'list 'inline-always))
(pushn '((t t) t #.(flags ans)LIST-INLINE)
   (get 'list 'inline-always))
(pushn '((t t t) t #.(flags ans)LIST-INLINE)
   (get 'list 'inline-always))
(pushn '((t t t t) t #.(flags ans)LIST-INLINE)
   (get 'list 'inline-always))
(pushn '((t t t t t) t #.(flags ans)LIST-INLINE)
   (get 'list 'inline-always))
(pushn '((t t t t t t) t #.(flags ans)LIST-INLINE)
   (get 'list 'inline-always))
(pushn '((t t t t t t t) t #.(flags ans)LIST-INLINE)
   (get 'list 'inline-always))
(pushn '((t t t t t t t t) t #.(flags ans)LIST-INLINE)
   (get 'list 'inline-always))
(pushn '((t t t t t t t t t) t #.(flags ans)LIST-INLINE)
   (get 'list 'inline-always))
(pushn '((t t t t t t t t t t) t #.(flags ans)LIST-INLINE)
   (get 'list 'inline-always))

;;LIST*
 (pushn '((t) t #.(flags)"(#0)")
   (get 'list* 'inline-always))
(pushn '((t t) t #.(flags ans)"make_cons(#0,#1)")
   (get 'list* 'inline-always))
(pushn '((t t t) t #.(flags ans)LIST*-INLINE)
   (get 'list* 'inline-always))
(pushn '((t t t t) t #.(flags ans)LIST*-INLINE)
   (get 'list* 'inline-always))
(pushn '((t t t t t) t #.(flags ans)LIST*-INLINE)
   (get 'list* 'inline-always))
(pushn '((t t t t t t) t #.(flags ans)LIST*-INLINE)
   (get 'list* 'inline-always))
(pushn '((t t t t t t t) t #.(flags ans)LIST*-INLINE)
   (get 'list* 'inline-always))
(pushn '((t t t t t t t t) t #.(flags ans)LIST*-INLINE)
   (get 'list* 'inline-always))
(pushn '((t t t t t t t t t) t #.(flags ans)LIST*-INLINE)
   (get 'list* 'inline-always))
(pushn '((t t t t t t t t t t) t #.(flags ans)LIST*-INLINE)
   (get 'list* 'inline-always))

;;LISTP
 (pushn '((t) boolean #.(flags rfa)"listp(#0)")
   (get 'listp 'inline-always))

;;LOGAND
 (pushn '((fixnum fixnum) fixnum #.(flags rfa)"((#0) & (#1))")
   (get 'logand 'inline-always))

;;LOGANDC1
 (pushn '((fixnum fixnum) fixnum #.(flags rfa)"(~(#0) & (#1))")
   (get 'logandc1 'inline-always))

;;LOGANDC2
 (pushn '((fixnum fixnum) fixnum #.(flags rfa)"((#0) & ~(#1))")
   (get 'logandc2 'inline-always))

;;LOGIOR
 (pushn '((fixnum fixnum) fixnum #.(flags rfa)"((#0) | (#1))")
   (get 'logior 'inline-always))

;;LOGXOR
 (pushn '((fixnum fixnum) fixnum #.(flags rfa)"((#0) ^ (#1))")
   (get 'logxor 'inline-always))

;;LOGNOT
 (pushn '((fixnum) fixnum #.(flags rfa)"(~(#0))")
   (get 'lognot 'inline-always))

;;MAKE-LIST
 (pushn '((fixnum) t #.(flags ans) MAKE-LIST-INLINE)
   (get 'make-list 'inline-always))

;;INTEGER-LENGTH
(pushn '((fixnum) fixnum #.(flags rfa set) 
	#.(format nil "({register fixnum _x=#0,_t=~s;for (;_t>=0 && !((_x>>_t)&1);_t--);_t+1;})" (integer-length most-positive-fixnum)))
   (get 'integer-length 'inline-always))


;;MAX
(pushn '((t t) t #.(flags set)"@01;({register int _r=number_compare(#0,#1); fixnum_float_contagion(_r>=0 ? #0 : #1,_r>=0 ? #1 : #0);})")
   (get 'max 'inline-always))
(pushn '((fixnum-float fixnum-float) long-float #.(flags set)"@01;((double)((#0)>=(#1)?(#0):#1))")
   (get 'max 'inline-always))
(pushn '((fixnum-float fixnum-float) short-float #.(flags set)"@01;((float)((#0)>=(#1)?(#0):#1))")
   (get 'max 'inline-always))
(pushn '((fixnum-float fixnum-float) fixnum #.(flags set)"@01;((fixnum)((#0)>=(#1)?(#0):#1))")
   (get 'max 'inline-always))

;;MIN
(pushn '((t t) t #.(flags set)"@01;({register int _r=number_compare(#0,#1); fixnum_float_contagion(_r<=0 ? #0 : #1,_r<=0 ? #1 : #0);})")
   (get 'min 'inline-always))
(pushn '((fixnum-float fixnum-float) long-float #.(flags set)"@01;((double)((#0)<=(#1)?(#0):#1))")
   (get 'min 'inline-always))
(pushn '((fixnum-float fixnum-float) short-float #.(flags set)"@01;((float)((#0)<=(#1)?(#0):#1))")
   (get 'min 'inline-always))
(pushn '((fixnum-float fixnum-float) fixnum #.(flags set)"@01;((fixnum)((#0)<=(#1)?(#0):#1))")
   (get 'min 'inline-always))

;;MINUSP
 (pushn '((t) boolean #.(flags rfa)"number_compare(small_fixnum(0),#0)>0")
   (get 'minusp 'inline-always))
 (pushn '((fixnum-float) boolean #.(flags rfa)"(#0)<0")
   (get 'minusp 'inline-always))

;;MOD
; (pushn '((fixnum fixnum) fixnum #.(flags rfa)"@01;(#0>=0&&(#1)>0?(#0)%(#1):imod(#0,#1))")
;   (get 'mod 'inline-always))
 (pushn '((fixnum fixnum) fixnum #.(flags rfa set)"@01;({register fixnum _t=(#0)%(#1);((#1)<0 && _t<=0) || ((#1)>0 && _t>=0) ? _t : _t + (#1);})")
   (get 'mod 'inline-always))

;;NCONC
 (pushn '((t t) t #.(flags set)"nconc(#0,#1)")
   (get 'nconc 'inline-always))

;;NOT
 (pushn '((t) boolean #.(flags rfa)"(#0)==Cnil")
   (get 'not 'inline-always))

;;NREVERSE
 (pushn '((t) t #.(flags ans set)"nreverse(#0)")
   (get 'nreverse 'inline-always))

;;CMP-NTHCDR
(pushn '((seqind proper-list) proper-list #.(flags rfa)"({register fixnum _i=#0;register object _x=#1;for (;_i--;_x=_x->c.c_cdr);_x;})")
   (get 'cmp-nthcdr 'inline-always))
(pushn '(((and (integer 0) (not seqind)) proper-list) null #.(flags rfa)"Cnil")
   (get 'cmp-nthcdr 'inline-always))
(pushn '((seqind t) proper-list #.(flags rfa)"({register fixnum _i=#0;register object _x=#1;for (;_i--;_x=_x->c.c_cdr);_x;})")
   (get 'cmp-nthcdr 'inline-unsafe))
(pushn '(((not seqind) proper-list) null #.(flags rfa)"Cnil")
   (get 'cmp-nthcdr 'inline-unsafe))


;;NULL
 (pushn '((t) boolean #.(flags rfa)"(#0)==Cnil")
   (get 'null 'inline-always))

;;NUMBERP
 (pushn '((t) boolean #.(flags rfa)"@0;numberp(#0)")
   (get 'numberp 'inline-always))

;;EQL-IS-EQ
 (pushn '((t) boolean #.(flags rfa)"@0;eql_is_eq(#0)")
   (get 'eql-is-eq 'inline-always))
 (pushn '((fixnum) boolean #.(flags rfa)"@0;(is_imm_fix(#0))")
   (get 'eql-is-eq 'inline-always))

;;EQUAL-IS-EQ
 (pushn '((t) boolean #.(flags rfa)"@0;equal_is_eq(#0)")
   (get 'equal-is-eq 'inline-always))
 (pushn '((fixnum) boolean #.(flags rfa)"@0;(is_imm_fix(#0))")
   (get 'equal-is-eq 'inline-always))

;;EQUALP-IS-EQ
 (pushn '((t) boolean #.(flags rfa)"@0;equalp_is_eq(#0)")
   (get 'equalp-is-eq 'inline-always))

;;PLUSP
 (pushn '((t) boolean #.(flags rfa)"number_compare(small_fixnum(0),#0)<0")
   (get 'plusp 'inline-always))
(pushn '((fixnum-float) boolean #.(flags rfa)"(#0)>0")
   (get 'plusp 'inline-always))

;;PRIN1
 (pushn '((t t) t #.(flags set)"prin1(#0,#1)")
   (get 'prin1 'inline-always))
(pushn '((t) t #.(flags set)"prin1(#0,Cnil)")
   (get 'prin1 'inline-always))

;;PRINC
 (pushn '((t t) t #.(flags set)"princ(#0,#1)")
   (get 'princ 'inline-always))
(pushn '((t) t #.(flags set)"princ(#0,Cnil)")
   (get 'princ 'inline-always))

;;PRINT
 (pushn '((t t) t #.(flags set)"print(#0,#1)")
   (get 'print 'inline-always))
(pushn '((t) t #.(flags set)"print(#0,Cnil)")
   (get 'print 'inline-always))

;;PROBE-FILE
 (pushn '((t) boolean #.(flags)"(file_exists(#0))")
   (get 'probe-file 'inline-always))

;;RATIOP
(pushn '((t) boolean #.(flags rfa) "type_of(#0)==t_ratio")
      (get 'ratiop 'inline-always))

;;REM


#+
TRUNCATE_USE_C
(pushn '((fixnum fixnum) fixnum #.(flags rfa)"(#0)%(#1)")
   (get 'rem 'inline-always))




;;REMPROP
 (pushn '((t t) t #.(flags set)"remprop(#0,#1)")
   (get 'remprop 'inline-always))

;;REST
 (pushn '((t) t #.(flags)"cdr(#0)")
   (get 'rest 'inline-safe))
(pushn '((t) t #.(flags)"CMPcdr(#0)")
   (get 'rest 'inline-unsafe))

;;REVERSE
 (pushn '((t) t #.(flags ans)"reverse(#0)")
   (get 'reverse 'inline-always))

;;SCHAR
 (pushn '((t t) t #.(flags ans)"elt(#0,fixint(#1))")
   (get 'schar 'inline-always))
(pushn '((t fixnum) t #.(flags ans)"elt(#0,#1)")
   (get 'schar 'inline-always))
(pushn '((t t) t #.(flags rfa)"code_char((#0)->ust.ust_self[fix(#1)])")
   (get 'schar 'inline-unsafe))
(pushn '((t fixnum) character #.(flags rfa)"(#0)->ust.ust_self[#1]")
   (get 'schar 'inline-unsafe))

;;SECOND
 (pushn '((t) t #.(flags)"cadr(#0)")
   (get 'second 'inline-safe))
(pushn '((t) t #.(flags)"CMPcadr(#0)")
   (get 'second 'inline-unsafe))

;;SIN
 (pushn '((long-float) long-float #.(flags rfa)"sin(#0)")
   (get 'sin 'inline-always))

;;STRING
 (pushn '((t) t #.(flags ans)"coerce_to_string(#0)")
   (get 'string 'inline-always))

;;STRINGP
 (pushn '((t) boolean #.(flags rfa)"type_of(#0)==t_string")
   (get 'stringp 'inline-always))

;;SVREF
 (pushn '((t t) t #.(flags ans)"aref1(#0,fixint(#1))")
   (get 'svref 'inline-always))
(pushn '((t fixnum) t #.(flags ans)"aref1(#0,#1)")
   (get 'svref 'inline-always))
(pushn '((t t) t #.(flags)"(#0)->v.v_self[fix(#1)]")
   (get 'svref 'inline-unsafe))
(pushn '((t fixnum) t #.(flags)"(#0)->v.v_self[#1]")
   (get 'svref 'inline-unsafe))

;;SYMBOL-NAME
 (pushn '((t) t #.(flags ans)"symbol_name(#0)")
   (get 'symbol-name 'inline-always))

;;SYMBOL-PLIST
(pushn '((t) t #.(flags) "((#0)->s.s_plist)")
    (get 'symbol-plist 'inline-unsafe))

;;SYMBOLP
 (pushn '((t) boolean #.(flags rfa)"type_of(#0)==t_symbol")
   (get 'symbolp 'inline-always))

;;TAN
 (pushn '((long-float) long-float #.(flags rfa)"tan(#0)")
   (get 'tan 'inline-always))

;;SQRT
 (pushn '((long-float) long-float #.(flags)"sqrt((double)#0)")
   (get 'sqrt 'inline-always))
 (pushn '((short-float) short-float #.(flags)"sqrt((double)#0)")
   (get 'sqrt 'inline-always))
 (pushn '(((long-float 0.0)) (long-float 0.0) #.(flags rfa)"sqrt((double)#0)")
   (get 'sqrt 'inline-always))
 (pushn '(((short-float 0.0)) (short-float 0.0) #.(flags rfa)"sqrt((double)#0)")
   (get 'sqrt 'inline-always))
; (pushn '(((or (integer 0) (float 0.0))) long-float #.(flags rfa)"sqrt((double)#0)")
;   (get 'sqrt 'inline-always))
; (pushn '(((integer 0 10)) long-float #.(flags rfa)"sqrt((double)#0)")
;   (get 'sqrt 'inline-always))

;;TERPRI
 (pushn '((t) t #.(flags set)"terpri(#0)")
   (get 'terpri 'inline-always))
(pushn '(nil t #.(flags set)"terpri(Cnil)")
   (get 'terpri 'inline-always))

;;THIRD
 (pushn '((t) t #.(flags)"caddr(#0)")
   (get 'third 'inline-safe))
(pushn '((t) t #.(flags)"CMPcaddr(#0)")
   (get 'third 'inline-unsafe))

;;TRUNCATE

#+
TRUNCATE_USE_C
;(si::putprop 'truncate 'floor-propagator 'type-propagator)
(pushn '((fixnum fixnum) (values fixnum fixnum) #.(flags rfa)"({fixnum _t=(#0)/(#1);@1(#0)-_t*(#1)@ _t;})")
   (get 'truncate 'inline-always))
(pushn '((fixnum-float) fixnum #.(flags)"(fixnum)(#0)")
   (get 'truncate 'inline-always))


;;FIXME boolean -> t opts
;;VECTORP
 (pushn '((t) boolean #.(flags rfa)
  "@0;({enum type _tp=type_of(#0);_tp>=t_string && _tp<=t_vector;})")
   (get 'vectorp 'inline-always))

;;SEQUENCEP
 (pushn '((t) boolean #.(flags rfa)
  "@0;(listp(#0) || ({enum type _tp=type_of(#0);_tp>=t_string && _tp<=t_vector;}))")
   (get 'sequencep 'inline-always))

;;FUNCTIONP
 (pushn '((t) boolean #.(flags rfa)
  "@0;({enum type _tp=type_of(#0);_tp>=t_ifun && _tp<=t_closure;})")
   (get 'functionp 'inline-always))

;;COMPILED-FUNCTION-P
 (pushn '((t) boolean #.(flags rfa)
  "@0;({enum type _tp=type_of(#0);_tp>=t_cfun && _tp<=t_closure;})")
   (get 'compiled-function-p 'inline-always))

;;WRITE-CHAR
 (pushn '((t) t #.(flags set)
  "@0;(writec_stream(char_code(#0),Vstandard_output->s.s_dbind),(#0))")
   (get 'write-char 'inline-unsafe))

;;ZEROP
 (pushn '((t) boolean #.(flags rfa)"number_compare(small_fixnum(0),#0)==0")
   (get 'zerop 'inline-always))
(pushn '((fixnum-float) boolean #.(flags rfa)"(#0)==0")
   (get 'zerop 'inline-always))

;;CMOD
 (pushn '((t) t #.(flags) "cmod(#0)")
   (get 'system:cmod 'inline-always))

;;CTIMES
 (pushn '((t t) t #.(flags) "ctimes(#0,#1)")
   (get 'system:ctimes 'inline-always))

;;CPLUS
 (pushn '((t t) t #.(flags) "cplus(#0,#1)")
   (get 'system:cplus 'inline-always))

;;CDIFFERENCE
 (pushn '((t t) t #.(flags) "cdifference(#0,#1)")
   (get 'system:cdifference 'inline-always))

;;IDENTITY
 (pushn '((t) t #.(flags) "(#0)")
   (get 'identity 'inline-always))

;;SI::NEXT-HASH-TABLE-INDEX
 (pushn '((t t) fixnum #.(flags rfa) 
	 "({fixnum _i;for (_i=fix(#1);_i<(#0)->ht.ht_size && (#0)->ht.ht_self[_i].hte_key==OBJNULL;_i++);_i==(#0)->ht.ht_size ? -1 : _i;})")
   (get 'si::next-hash-table-index 'inline-unsafe))
 (pushn '((t fixnum) fixnum #.(flags rfa) 
	 "({fixnum _i;for (_i=(#1);_i<(#0)->ht.ht_size && (#0)->ht.ht_self[_i].hte_key==OBJNULL;_i++);_i==(#0)->ht.ht_size ? -1 : _i;})")
   (get 'si::next-hash-table-index 'inline-unsafe))

;;SI::HASH-ENTRY-BY-INDEX
 (pushn '((t t) t #.(flags) "(#0)->ht.ht_self[fix(#1)].hte_value")
   (get 'si::hash-entry-by-index 'inline-unsafe))
 (pushn '((t fixnum) t #.(flags) "(#0)->ht.ht_self[(#1)].hte_value")
   (get 'si::hash-entry-by-index 'inline-unsafe))

;;SI::HASH-KEY-BY-INDEX
 (pushn '((t t) t #.(flags) "(#0)->ht.ht_self[fix(#1)].hte_key")
   (get 'si::hash-key-by-index 'inline-unsafe))
 (pushn '((t fixnum) t #.(flags) "(#0)->ht.ht_self[(#1)].hte_key")
   (get 'si::hash-key-by-index 'inline-unsafe))

;;GETHASH
(pushn '((t t *) (values t t) #.(flags)(lambda (key hash &optional default)
				(let ((*value-to-go* (or
						      (pop *values-to-go*)
						      (and (member *value-to-go* '(top return) :test (function eq))
							   (list 'vs (vs-push)))
						      'trash)))
				    (wt "({struct htent *_t=gethash(" key "," hash "); _t->hte_key==OBJNULL ? ({")
				    (set-loc nil)
				    (wt default ";}) : ({")
				    (set-loc t)
				    (wt "_t->hte_value;});})"))))
      (get 'gethash 'inline-unsafe))


;;si::HASH-SET
(pushn '((t t t) t #.(flags set) "(sethash(#0,#1,#2),#2)") (get 'si::hash-set 'inline-unsafe))
