(in-package 'compiler)

;; The optimizers have been redone to allow more flags
;; The old style optimizations  correspond to the first 2
;; flags.  
;; ( arglist result-type flags {string | function})

;; meaning of the flags slot.
;       '((allocates-new-storage ans); might invoke gbc
;	 (side-effect-p set)        ; no effect on arguments
;	 (constantp)                ; always returns same result,
;	                            ;double eval ok.
;	 (result-type-from-args rfa); if passed args of matching
;					;type result is of result type
;         (is)))                     ;; extends the `integer stack'.
;    (cond ((member flag v :test 'eq)
;
;;;   valid properties are 'inline-always 'inline-safe 'inline-unsafe

;; Note:   The order of the properties is important, since the first
;; one whose arg types and result type can be matched will be chosen.


(or (fboundp 'flags) (load "../cmpnew/cmpeval.lsp"))


;;BOOLE3
 (push '((fixnum fixnum fixnum) fixnum #.(flags rfa)INLINE-BOOLE3)
   (get 'boole3 'inline-always))

;;FP-OKP
 (push '((t) boolean #.(flags set)
  "@0;(type_of(#0)==t_stream? ((#0)->sm.sm_fp)!=0: 0 )")
   (get 'fp-okp 'inline-unsafe))
(push '((stream) boolean #.(flags set)"((#0)->sm.sm_fp)!=0")
   (get 'fp-okp 'inline-unsafe))

;;LDB1
 (push '((fixnum fixnum fixnum) fixnum #.(flags)
  "((((~(-1 << (#0))) << (#1)) & (#2)) >> (#1))")
   (get 'si::ldb1 'inline-always))

;;LONG-FLOAT-P
 (push '((t) boolean #.(flags)"type_of(#0)==t_longfloat")
   (get 'long-float-p 'inline-always))

;;SFEOF
 (push '((object) boolean #.(flags set)"(feof((#0)->sm.sm_fp))")
   (get 'sfeof 'inline-unsafe))


;;SGETC1
 (push '((object) fixnum #.(flags set rfa) "getc((#0)->sm.sm_fp)")
   (get 'sgetc1 'inline-unsafe))

;;SPUTC
 (push '((fixnum object) fixnum #.(flags set rfa)"(putc(#0,(#1)->sm.sm_fp))")
   (get 'sputc 'inline-unsafe))
(push '((character object) fixnum #.(flags set rfa)"(putc(#0,(#1)->sm.sm_fp))")
   (get 'sputc 'inline-unsafe))

;;READ-BYTE1
 (push '((t t) t #.(flags ans set)"read_byte1(#0,#1)")
   (get 'read-byte1 'inline-unsafe))

;;READ-CHAR1
 (push '((t t) t #.(flags ans set)"read_char1(#0,#1)")
   (get 'read-char1 'inline-unsafe))

;;SHIFT<<
 (push '((fixnum fixnum) fixnum #.(flags)"((#0) << (#1))")
   (get 'shift<< 'inline-always))

;;SHIFT>>
 (push '((fixnum fixnum) fixnum #.(flags set rfa)"((#0) >> (- (#1)))")
   (get 'shift>> 'inline-always))

;;SHORT-FLOAT-P
 (push '((t) boolean #.(flags)"type_of(#0)==t_shortfloat")
   (get 'short-float-p 'inline-always))

;;SIDE-EFFECTS
 (push '(nil t #.(flags ans set)"Ct")
   (get 'side-effects 'inline-always))

;;STACK-CONS
 (push '((fixnum t t) t #.(flags)
  "(STcons#0.t=t_cons,STcons#0.m=0,STcons#0.c_car=(#1),
              STcons#0.c_cdr=(#2),(object)&STcons#0)")
   (get 'stack-cons 'inline-always))

;;SUBLIS1
 (push '((t t t) t #.(flags ans set)SUBLIS1-INLINE)
   (get 'sublis1 'inline-always))

;;SYMBOL-LENGTH
 (push '((t) fixnum #.(flags rfa)
  "@0;(type_of(#0)==t_symbol ? (#0)->s.st_fillp :not_a_variable((#0)))")
   (get 'symbol-length 'inline-always))

;;VECTOR-TYPE
 (push '((t fixnum) boolean #.(flags)
  "@0;(type_of(#0) == t_vector && (#0)->v.v_elttype == (#1))")
   (get 'vector-type 'inline-always))

;;SYSTEM:ASET
 (push '((t t t) t #.(flags set)"aset1(#0,fixint(#1),#2)")
   (get 'system:aset 'inline-always))
(push '((t fixnum t) t #.(flags set)"aset1(#0,#1,#2)")
   (get 'system:aset 'inline-always))
(push '((t t t) t #.(flags set)"aset1(#0,fix(#1),#2)")
   (get 'system:aset 'inline-unsafe))
(push '(((array t) fixnum t) t #.(flags set)"(#0)->v.v_self[#1]= (#2)")
   (get 'system:aset 'inline-unsafe))
(push '(((array string-char) fixnum character) character #.(flags rfa set)"(#0)->ust.ust_self[#1]= (#2)")
   (get 'system:aset 'inline-unsafe))
(push '(((array fixnum) fixnum fixnum) fixnum #.(flags set rfa)"(#0)->fixa.fixa_self[#1]= (#2)")
   (get 'system:aset 'inline-unsafe))
(push '(((array signed-short) fixnum fixnum) fixnum #.(flags rfa set)"((short *)(#0)->ust.ust_self)[#1]=(#2)")
   (get 'system:aset 'inline-unsafe))
(push '(((array signed-char) fixnum fixnum) fixnum #.(flags rfa set)"((#0)->ust.ust_self)[#1]=(#2)")
   (get 'system:aset 'inline-unsafe))
(push '(((array unsigned-short) fixnum fixnum) fixnum #.(flags rfa set)
  "((unsigned short *)(#0)->ust.ust_self)[#1]=(#2)")
   (get 'system:aset 'inline-unsafe))
(push '(((array unsigned-char) fixnum fixnum) fixnum #.(flags rfa set)"((#0)->ust.ust_self)[#1]=(#2)")
   (get 'system:aset 'inline-unsafe))
(push '(((array short-float) fixnum short-float) short-float #.(flags rfa set)"(#0)->sfa.sfa_self[#1]= (#2)")
   (get 'system:aset 'inline-unsafe))
(push '(((array long-float) fixnum long-float) long-float #.(flags rfa set)"(#0)->lfa.lfa_self[#1]= (#2)")
   (get 'system:aset 'inline-unsafe))
(push '((t t t t) t #.(flags set)
  "@0;aset(#0,fix(#1)*(#0)->a.a_dims[1]+fix(#2),#3)")
   (get 'system:aset 'inline-unsafe))
(push '(((array t) fixnum fixnum t) t #.(flags set)
  "@0;(#0)->a.a_self[(#1)*(#0)->a.a_dims[1]+#2]= (#3)")
   (get 'system:aset 'inline-unsafe))
(push '(((array string-char) fixnum fixnum character) character
	#.(flags rfa set)
  "@0;(#0)->ust.ust_self[(#1)*(#0)->a.a_dims[1]+#2]= (#3)")
   (get 'system:aset 'inline-unsafe))
(push '(((array fixnum) fixnum fixnum fixnum) fixnum #.(flags set rfa)
  "@0;(#0)->fixa.fixa_self[(#1)*(#0)->a.a_dims[1]+#2]= (#3)")
   (get 'system:aset 'inline-unsafe))
(push '(((array short-float) fixnum fixnum short-float) short-float #.(flags rfa set)
  "@0;(#0)->sfa.sfa_self[(#1)*(#0)->a.a_dims[1]+#2]= (#3)")
   (get 'system:aset 'inline-unsafe))
(push '(((array long-float) fixnum fixnum long-float) long-float #.(flags rfa set)
  "@0;(#0)->lfa.lfa_self[(#1)*(#0)->a.a_dims[1]+#2]= (#3)")
   (get 'system:aset 'inline-unsafe))

;;SYSTEM:CHAR-SET
 (push '((t t t) t #.(flags set)"elt_set(#0,fixint(#1),#2)")
   (get 'system:char-set 'inline-always))
(push '((t fixnum t) t #.(flags set)"elt_set(#0,#1,#2)")
   (get 'system:char-set 'inline-always))
(push '((t t t) t #.(flags set)
  "@2;((#0)->ust.ust_self[fix(#1)]=char_code(#2),(#2))")
   (get 'system:char-set 'inline-unsafe))
(push '((t fixnum character) character #.(flags rfa set)"(#0)->ust.ust_self[#1]= (#2)")
   (get 'system:char-set 'inline-unsafe))

;;SYSTEM:ELT-SET
 (push '((t t t) t #.(flags set)"elt_set(#0,fixint(#1),#2)")
   (get 'system:elt-set 'inline-always))
(push '((t fixnum t) t #.(flags set)"elt_set(#0,#1,#2)")
   (get 'system:elt-set 'inline-always))
(push '((t t t) t #.(flags set)"elt_set(#0,fix(#1),#2)")
   (get 'system:elt-set 'inline-unsafe))

;;SYSTEM:FILL-POINTER-SET
 (push '((t fixnum) fixnum #.(flags rfa set)"((#0)->st.st_fillp)=(#1)")
   (get 'system:fill-pointer-set 'inline-unsafe))

;;SYSTEM:FIXNUMP
 (push '((t) boolean #.(flags)"type_of(#0)==t_fixnum")
   (get 'system:fixnump 'inline-always))
(push '((fixnum) boolean #.(flags)"1")
   (get 'system:fixnump 'inline-always))

;;SYSTEM:MV-REF
 (push '((fixnum) t #.(flags ans set)"(MVloc[(#0)])")
   (get 'system:mv-ref 'inline-always))

;;SYSTEM:PUTPROP
 (push '((t t t) t #.(flags set)"putprop(#0,#1,#2)")
   (get 'system:putprop 'inline-always))

;;SYSTEM:SCHAR-SET
 (push '((t t t) t #.(flags set)"elt_set(#0,fixint(#1),#2)")
   (get 'system:schar-set 'inline-always))
(push '((t fixnum t) t #.(flags set)"elt_set(#0,#1,#2)")
   (get 'system:schar-set 'inline-always))
(push '((t t t) t #.(flags set)
  "@2;((#0)->ust.ust_self[fix(#1)]=char_code(#2),(#2))")
   (get 'system:schar-set 'inline-unsafe))
(push '((t fixnum character) character #.(flags set rfa)"(#0)->ust.ust_self[#1]= (#2)")
   (get 'system:schar-set 'inline-unsafe))

;;SYSTEM:SET-MV
 (push '((fixnum t) t #.(flags ans set)"(MVloc[(#0)]=(#1))")
   (get 'system:set-mv 'inline-always))

;;SYSTEM:SPUTPROP
 (push '((t t t) t #.(flags set)"sputprop(#0,#1,#2)")
   (get 'system:sputprop 'inline-always))

;;SYSTEM:STRUCTURE-DEF
 (push '((t) t #.(flags)"(#0)->str.str_def")
   (get 'system:structure-def 'inline-unsafe))

;;SYSTEM:STRUCTURE-REF
 (push '((t t fixnum) t #.(flags ans)"structure_ref(#0,#1,#2)")
   (get 'system:structure-ref 'inline-always))

;;SYSTEM:STRUCTURE-SET
 (push '((t t fixnum t) t #.(flags set)"structure_set(#0,#1,#2,#3)")
   (get 'system:structure-set 'inline-always))

;;SYSTEM:STRUCTUREP
 (push '((t) boolean #.(flags)"type_of(#0)==t_structure")
   (get 'system:structurep 'inline-always))

;;SYSTEM:SVSET
 (push '((t t t) t #.(flags set)"aset1(#0,fixint(#1),#2)")
   (get 'system:svset 'inline-always))
(push '((t fixnum t) t #.(flags set)"aset1(#0,#1,#2)")
   (get 'system:svset 'inline-always))
(push '((t t t) t #.(flags set)"((#0)->v.v_self[fix(#1)]=(#2))")
   (get 'system:svset 'inline-unsafe))
(push '((t fixnum t) t #.(flags set)"(#0)->v.v_self[#1]= (#2)")
   (get 'system:svset 'inline-unsafe))

;;*
(push '((t t) t #.(flags ans)"number_times(#0,#1)")
   (get '* 'inline-always))
(push '((fixnum-float fixnum-float) short-float #.(flags)"(double)(#0)*(double)(#1)")
   (get '* 'inline-always))
(push '((fixnum-float fixnum-float) long-float #.(flags)"(double)(#0)*(double)(#1)")
   (get '* 'inline-always))
(push '((long-float long-float) long-float #.(flags rfa)"(double)(#0)*(double)(#1)")
   (get '* 'inline-always))
(push '((short-float short-float) short-float #.(flags rfa)"(#0)*(#1)")
   (get '* 'inline-always))


(push '((fixnum fixnum) fixnum #.(flags)"(#0)*(#1)")
   (get '* 'inline-always))


;;+
(push '((t t) t #.(flags ans)"number_plus(#0,#1)")
   (get '+ 'inline-always))
(push '((fixnum-float fixnum-float) short-float #.(flags)"(double)(#0)+(double)(#1)")
   (get '+ 'inline-always))
(push '((fixnum-float fixnum-float) long-float #.(flags)"(double)(#0)+(double)(#1)")
   (get '+ 'inline-always))
(push '((long-float long-float) long-float #.(flags rfa)"(double)(#0)+(double)(#1)")
   (get '+ 'inline-always))
(push '((short-float short-float) short-float #.(flags rfa)"(#0)+(#1)")
   (get '+ 'inline-always))


(push '((fixnum fixnum) fixnum #.(flags)"(#0)+(#1)")
   (get '+ 'inline-always))


;;-
 (push '((t) t #.(flags ans)"number_negate(#0)")
   (get '- 'inline-always))
(push '((t t) t #.(flags ans)"number_minus(#0,#1)")
   (get '- 'inline-always))
(push '((fixnum-float fixnum-float) short-float #.(flags)"(double)(#0)-(double)(#1)")
   (get '- 'inline-always))
(push '((fixnum-float) short-float #.(flags)"-(double)(#0)")
   (get '- 'inline-always))
(push '((fixnum-float) long-float #.(flags)"-(double)(#0)")
   (get '- 'inline-always))
(push '((fixnum-float fixnum-float) long-float #.(flags)"(double)(#0)-(double)(#1)")
   (get '- 'inline-always))
(push '((long-float long-float) long-float #.(flags rfa)"(double)(#0)-(double)(#1)")
   (get '- 'inline-always))
(push '((short-float short-float) short-float #.(flags rfa)"(#0)-(#1)")
   (get '- 'inline-always))


(push '((fixnum fixnum) fixnum #.(flags)"(#0)-(#1)")
   (get '- 'inline-always))
(push '((fixnum) fixnum #.(flags)"-(#0)")
   (get '- 'inline-always))


;;/
(push '((fixnum fixnum) fixnum #.(flags)"(#0)/(#1)")
   (get '/ 'inline-always))
 (push '((fixnum-float fixnum-float) short-float #.(flags)"(double)(#0)/(double)(#1)")
   (get '/ 'inline-always))
(push '((fixnum-float fixnum-float) long-float #.(flags)"(double)(#0)/(double)(#1)")
   (get '/ 'inline-always))
(push '((long-float long-float) long-float #.(flags rfa)"(double)(#0)/(double)(#1)")
   (get '/ 'inline-always))
(push '((short-float short-float) short-float #.(flags rfa)"(#0)/(#1)")
   (get '/ 'inline-always))

;;/=
 (push '((t t) boolean #.(flags)"number_compare(#0,#1)!=0")
   (get '/= 'inline-always))
(push '((fixnum-float fixnum-float) boolean #.(flags)"(#0)!=(#1)")
   (get '/= 'inline-always))

;;1+
 (push '((t) t #.(flags ans)"one_plus(#0)")
   (get '1+ 'inline-always))
(push '((fixnum-float) short-float #.(flags)"(double)(#0)+1")
   (get '1+ 'inline-always))
(push '((fixnum-float) long-float #.(flags)"(double)(#0)+1")
   (get '1+ 'inline-always))
(push '((fixnum) fixnum #.(flags)"(#0)+1")
   (get '1+ 'inline-always))


;;1-
 (push '((t) t #.(flags ans)"one_minus(#0)")
   (get '1- 'inline-always))
(push '((fixnum) fixnum #.(flags)"(#0)-1")
   (get '1- 'inline-always))
(push '((fixnum-float) short-float #.(flags)"(double)(#0)-1")
   (get '1- 'inline-always))
(push '((fixnum-float) long-float #.(flags)"(double)(#0)-1")
   (get '1- 'inline-always))

;;<
 (push '((t t) boolean #.(flags)"number_compare(#0,#1)<0")
   (get '< 'inline-always))

(push '((fixnum-float fixnum-float) boolean #.(flags)"(#0)<(#1)")
   (get '< 'inline-always))


;;<=
 (push '((t t) boolean #.(flags)"number_compare(#0,#1)<=0")
   (get '<= 'inline-always))

(push '((fixnum-float fixnum-float) boolean #.(flags)"(#0)<=(#1)")
   (get '<= 'inline-always))

;;=
 (push '((t t) boolean #.(flags)"number_compare(#0,#1)==0")
   (get '= 'inline-always))

(push '((fixnum-float fixnum-float) boolean #.(flags)"(#0)==(#1)")
   (get '= 'inline-always))

;;>
 (push '((t t) boolean #.(flags)"number_compare(#0,#1)>0")
   (get '> 'inline-always))

(push '((fixnum-float fixnum-float) boolean #.(flags)"(#0)>(#1)")
   (get '> 'inline-always))

;;>=
 (push '((t t) boolean #.(flags)"number_compare(#0,#1)>=0")
   (get '>= 'inline-always))

(push '((fixnum-float fixnum-float) boolean #.(flags)"(#0)>=(#1)")
   (get '>= 'inline-always))

;;APPEND
 (push '((t t) t #.(flags ans)"append(#0,#1)")
   (get 'append 'inline-always))

;;AREF
 (push '((t t) t #.(flags ans)"aref1(#0,fixint(#1))")
   (get 'aref 'inline-always))
(push '((t fixnum) t #.(flags ans)"aref1(#0,#1)")
   (get 'aref 'inline-always))
(push '((t t) t #.(flags ans)"aref1(#0,fix(#1))")
   (get 'aref 'inline-unsafe))
(push '(((array t) fixnum) t #.(flags)"(#0)->v.v_self[#1]")
   (get 'aref 'inline-unsafe))
(push '(((array string-char) fixnum) character #.(flags rfa)"(#0)->ust.ust_self[#1]")
   (get 'aref 'inline-unsafe))
(push '(((array fixnum) fixnum) fixnum #.(flags rfa)"(#0)->fixa.fixa_self[#1]")
   (get 'aref 'inline-unsafe))
(push '(((array unsigned-char) fixnum) fixnum #.(flags rfa)"(#0)->ust.ust_self[#1]")
   (get 'aref 'inline-unsafe))
(push '(((array signed-char) fixnum) fixnum #.(flags rfa)"SIGNED_CHAR((#0)->ust.ust_self[#1])")
   (get 'aref 'inline-unsafe))
(push '(((array unsigned-short) fixnum) fixnum #.(flags rfa)
  "((unsigned short *)(#0)->ust.ust_self)[#1]")
   (get 'aref 'inline-unsafe))
(push '(((array signed-short) fixnum) fixnum #.(flags rfa)"((short *)(#0)->ust.ust_self)[#1]")
   (get 'aref 'inline-unsafe))
(push '(((array short-float) fixnum) short-float #.(flags rfa)"(#0)->sfa.sfa_self[#1]")
   (get 'aref 'inline-unsafe))
(push '(((array long-float) fixnum) long-float #.(flags rfa)"(#0)->lfa.lfa_self[#1]")
   (get 'aref 'inline-unsafe))
(push '((t t t) t #.(flags ans)
  "@0;aref(#0,fix(#1)*(#0)->a.a_dims[1]+fix(#2))")
   (get 'aref 'inline-unsafe))
(push '(((array t) fixnum fixnum) t #.(flags )
  "@0;(#0)->a.a_self[(#1)*(#0)->a.a_dims[1]+#2]")
   (get 'aref 'inline-unsafe))
(push '(((array string-char) fixnum fixnum) character #.(flags rfa)
  "@0;(#0)->ust.ust_self[(#1)*(#0)->a.a_dims[1]+#2]")
   (get 'aref 'inline-unsafe))
(push '(((array fixnum) fixnum fixnum) fixnum #.(flags rfa)
  "@0;(#0)->fixa.fixa_self[(#1)*(#0)->a.a_dims[1]+#2]")
   (get 'aref 'inline-unsafe))
(push '(((array short-float) fixnum fixnum) short-float #.(flags rfa)
  "@0;(#0)->sfa.sfa_self[(#1)*(#0)->a.a_dims[1]+#2]")
   (get 'aref 'inline-unsafe))
(push '(((array long-float) fixnum fixnum) long-float #.(flags rfa)
  "@0;(#0)->lfa.lfa_self[(#1)*(#0)->a.a_dims[1]+#2]")
   (get 'aref 'inline-unsafe))

;;ARRAY-TOTAL-SIZE
 (push '((t) fixnum #.(flags rfa)"((#0)->st.st_dim)")
   (get 'array-total-size 'inline-unsafe))

;;ARRAYP
 (push '((t) boolean #.(flags)
  "@0;type_of(#0)==t_array||
type_of(#0)==t_vector||
type_of(#0)==t_string||
type_of(#0)==t_bitvector")
   (get 'arrayp 'inline-always))

;;ATOM
 (push '((t) boolean #.(flags)"type_of(#0)!=t_cons")
   (get 'atom 'inline-always))

;;BIT-VECTOR-P
 (push '((t) boolean #.(flags)"(type_of(#0)==t_bitvector)")
   (get 'bit-vector-p 'inline-always))

;;BOUNDP
 (push '((t) boolean #.(flags)"(#0)->s.s_dbind!=OBJNULL")
   (get 'boundp 'inline-unsafe))

;;CAAAAR
 (push '((t) t #.(flags)"caaaar(#0)")
   (get 'caaaar 'inline-safe))
(push '((t) t #.(flags)"CMPcaaaar(#0)")
   (get 'caaaar 'inline-unsafe))

;;CAAADR
 (push '((t) t #.(flags)"caaadr(#0)")
   (get 'caaadr 'inline-safe))
(push '((t) t #.(flags)"CMPcaaadr(#0)")
   (get 'caaadr 'inline-unsafe))

;;CAAAR
 (push '((t) t #.(flags)"caaar(#0)")
   (get 'caaar 'inline-safe))
(push '((t) t #.(flags)"CMPcaaar(#0)")
   (get 'caaar 'inline-unsafe))

;;CAADAR
 (push '((t) t #.(flags)"caadar(#0)")
   (get 'caadar 'inline-safe))
(push '((t) t #.(flags)"CMPcaadar(#0)")
   (get 'caadar 'inline-unsafe))

;;CAADDR
 (push '((t) t #.(flags)"caaddr(#0)")
   (get 'caaddr 'inline-safe))
(push '((t) t #.(flags)"CMPcaaddr(#0)")
   (get 'caaddr 'inline-unsafe))

;;CAADR
 (push '((t) t #.(flags)"caadr(#0)")
   (get 'caadr 'inline-safe))
(push '((t) t #.(flags)"CMPcaadr(#0)")
   (get 'caadr 'inline-unsafe))

;;CAAR
 (push '((t) t #.(flags)"caar(#0)")
   (get 'caar 'inline-safe))
(push '((t) t #.(flags)"CMPcaar(#0)")
   (get 'caar 'inline-unsafe))

;;CADAAR
 (push '((t) t #.(flags)"cadaar(#0)")
   (get 'cadaar 'inline-safe))
(push '((t) t #.(flags)"CMPcadaar(#0)")
   (get 'cadaar 'inline-unsafe))

;;CADADR
 (push '((t) t #.(flags)"cadadr(#0)")
   (get 'cadadr 'inline-safe))
(push '((t) t #.(flags)"CMPcadadr(#0)")
   (get 'cadadr 'inline-unsafe))

;;CADAR
 (push '((t) t #.(flags)"cadar(#0)")
   (get 'cadar 'inline-safe))
(push '((t) t #.(flags)"CMPcadar(#0)")
   (get 'cadar 'inline-unsafe))

;;CADDAR
 (push '((t) t #.(flags)"caddar(#0)")
   (get 'caddar 'inline-safe))
(push '((t) t #.(flags)"CMPcaddar(#0)")
   (get 'caddar 'inline-unsafe))

;;CADDDR
 (push '((t) t #.(flags)"cadddr(#0)")
   (get 'cadddr 'inline-safe))
(push '((t) t #.(flags)"CMPcadddr(#0)")
   (get 'cadddr 'inline-unsafe))

;;CADDR
 (push '((t) t #.(flags)"caddr(#0)")
   (get 'caddr 'inline-safe))
(push '((t) t #.(flags)"CMPcaddr(#0)")
   (get 'caddr 'inline-unsafe))

;;CADR
 (push '((t) t #.(flags)"cadr(#0)")
   (get 'cadr 'inline-safe))
(push '((t) t #.(flags)"CMPcadr(#0)")
   (get 'cadr 'inline-unsafe))

;;CAR
 (push '((t) t #.(flags)"car(#0)")
   (get 'car 'inline-safe))
(push '((t) t #.(flags)"CMPcar(#0)")
   (get 'car 'inline-unsafe))

;;CDAAAR
 (push '((t) t #.(flags)"cdaaar(#0)")
   (get 'cdaaar 'inline-safe))
(push '((t) t #.(flags)"CMPcdaaar(#0)")
   (get 'cdaaar 'inline-unsafe))

;;CDAADR
 (push '((t) t #.(flags)"cdaadr(#0)")
   (get 'cdaadr 'inline-safe))
(push '((t) t #.(flags)"CMPcdaadr(#0)")
   (get 'cdaadr 'inline-unsafe))

;;CDAAR
 (push '((t) t #.(flags)"cdaar(#0)")
   (get 'cdaar 'inline-safe))
(push '((t) t #.(flags)"CMPcdaar(#0)")
   (get 'cdaar 'inline-unsafe))

;;CDADAR
 (push '((t) t #.(flags)"cdadar(#0)")
   (get 'cdadar 'inline-safe))
(push '((t) t #.(flags)"CMPcdadar(#0)")
   (get 'cdadar 'inline-unsafe))

;;CDADDR
 (push '((t) t #.(flags)"cdaddr(#0)")
   (get 'cdaddr 'inline-safe))
(push '((t) t #.(flags)"CMPcdaddr(#0)")
   (get 'cdaddr 'inline-unsafe))

;;CDADR
 (push '((t) t #.(flags)"cdadr(#0)")
   (get 'cdadr 'inline-safe))
(push '((t) t #.(flags)"CMPcdadr(#0)")
   (get 'cdadr 'inline-unsafe))

;;CDAR
 (push '((t) t #.(flags)"cdar(#0)")
   (get 'cdar 'inline-safe))
(push '((t) t #.(flags)"CMPcdar(#0)")
   (get 'cdar 'inline-unsafe))

;;CDDAAR
 (push '((t) t #.(flags)"cddaar(#0)")
   (get 'cddaar 'inline-safe))
(push '((t) t #.(flags)"CMPcddaar(#0)")
   (get 'cddaar 'inline-unsafe))

;;CDDADR
 (push '((t) t #.(flags)"cddadr(#0)")
   (get 'cddadr 'inline-safe))
(push '((t) t #.(flags)"CMPcddadr(#0)")
   (get 'cddadr 'inline-unsafe))

;;CDDAR
 (push '((t) t #.(flags)"cddar(#0)")
   (get 'cddar 'inline-safe))
(push '((t) t #.(flags)"CMPcddar(#0)")
   (get 'cddar 'inline-unsafe))

;;CDDDAR
 (push '((t) t #.(flags)"cdddar(#0)")
   (get 'cdddar 'inline-safe))
(push '((t) t #.(flags)"CMPcdddar(#0)")
   (get 'cdddar 'inline-unsafe))

;;CDDDDR
 (push '((t) t #.(flags)"cddddr(#0)")
   (get 'cddddr 'inline-safe))
(push '((t) t #.(flags)"CMPcddddr(#0)")
   (get 'cddddr 'inline-unsafe))

;;CDDDR
 (push '((t) t #.(flags)"cdddr(#0)")
   (get 'cdddr 'inline-safe))
(push '((t) t #.(flags)"CMPcdddr(#0)")
   (get 'cdddr 'inline-unsafe))

;;CDDR
 (push '((t) t #.(flags)"cddr(#0)")
   (get 'cddr 'inline-safe))
(push '((t) t #.(flags)"CMPcddr(#0)")
   (get 'cddr 'inline-unsafe))

;;CDR
 (push '((t) t #.(flags)"cdr(#0)")
   (get 'cdr 'inline-safe))
(push '((t) t #.(flags)"CMPcdr(#0)")
   (get 'cdr 'inline-unsafe))

;;CHAR
 (push '((t t) t #.(flags ans)"elt(#0,fixint(#1))")
   (get 'char 'inline-always))
(push '((t fixnum) t #.(flags ans)"elt(#0,#1)")
   (get 'char 'inline-always))
(push '((t t) t #.(flags)"code_char((#0)->ust.ust_self[fix(#1)])")
   (get 'char 'inline-unsafe))
(push '((t fixnum) character #.(flags rfa)"(#0)->ust.ust_self[#1]")
   (get 'char 'inline-unsafe))

;;CHAR-CODE
 (push '((character) fixnum #.(flags rfa)"(#0)")
   (get 'char-code 'inline-always))

;;CHAR/=
 (push '((character character) boolean #.(flags)"(#0)!=(#1)")
   (get 'char/= 'inline-always))
(push '((t t) boolean #.(flags)"!eql(#0,#1)")
   (get 'char/= 'inline-unsafe))
(push '((t t) boolean #.(flags)"char_code(#0)!=char_code(#1)")
   (get 'char/= 'inline-unsafe))

;;CHAR<
 (push '((character character) boolean #.(flags)"(#0)<(#1)")
   (get 'char< 'inline-always))

;;CHAR<=
 (push '((character character) boolean #.(flags)"(#0)<=(#1)")
   (get 'char<= 'inline-always))

;;CHAR=
 (push '((t t) boolean #.(flags)"eql(#0,#1)")
   (get 'char= 'inline-unsafe))
(push '((t t) boolean #.(flags)"char_code(#0)==char_code(#1)")
   (get 'char= 'inline-unsafe))
(push '((character character) boolean #.(flags)"(#0)==(#1)")
   (get 'char= 'inline-unsafe))

;;CHAR>
 (push '((character character) boolean #.(flags)"(#0)>(#1)")
   (get 'char> 'inline-always))

;;CHAR>=
 (push '((character character) boolean #.(flags)"(#0)>=(#1)")
   (get 'char>= 'inline-always))

;;CHARACTERP
 (push '((t) boolean #.(flags)"type_of(#0)==t_character")
   (get 'characterp 'inline-always))

;;CODE-CHAR
 (push '((fixnum) character #.(flags)"(#0)")
   (get 'code-char 'inline-always))

;;CONS
 (push '((t t) t #.(flags ans)"make_cons(#0,#1)")
   (get 'cons 'inline-always))
(push '((t t) :dynamic-extent #.(flags ans)"ON_STACK_CONS(#0,#1)")
   (get 'cons 'inline-always))

;;CONSP
 (push '((t) boolean #.(flags)"type_of(#0)==t_cons")
   (get 'consp 'inline-always))

;;COS
 (push '((long-float) long-float #.(flags rfa)"cos(#0)")
   (get 'cos 'inline-always))

;;DIGIT-CHAR-P
 (push '((character) boolean #.(flags)"@0; ((#0) <= '9' && (#0) >= '0')")
   (get 'digit-char-p 'inline-always))

;;ELT
 (push '((t t) t #.(flags ans)"elt(#0,fixint(#1))")
   (get 'elt 'inline-always))
(push '((t fixnum) t #.(flags ans)"elt(#0,#1)")
   (get 'elt 'inline-always))
(push '((t t) t #.(flags ans)"elt(#0,fix(#1))")
   (get 'elt 'inline-unsafe))

;;ENDP
;;Must use endp_prop here as generic lisp code containing (endp 
;;can be compiled to take function output as its argument, which
;;cannot be redirected via a macro, e.g. endp(cdr(V20)).  CM
 (push '((t) boolean #.(flags)"endp_prop(#0)")
   (get 'endp 'inline-safe))
(push '((t) boolean #.(flags)"(#0)==Cnil")
   (get 'endp 'inline-unsafe))

;;EQ
 (push '((t t) boolean #.(flags)"(#0)==(#1)")
   (get 'eq 'inline-always))
(push '((fixnum fixnum) boolean #.(flags)"0")
   (get 'eq 'inline-always))

;;EQL
 (push '((t t) boolean #.(flags)"eql(#0,#1)")
   (get 'eql 'inline-always))
(push '((fixnum fixnum) boolean #.(flags)"(#0)==(#1)")
   (get 'eql 'inline-always))
(push '((character character) boolean #.(flags)"(#0)==(#1)")
   (get 'eql 'inline-always))


;;EQUAL
 (push '((t t) boolean #.(flags)"equal(#0,#1)")
   (get 'equal 'inline-always))
(push '((fixnum fixnum) boolean #.(flags)"(#0)==(#1)")
   (get 'equal 'inline-always))

;;EQUALP
 (push '((t t) boolean #.(flags)"equalp(#0,#1)")
   (get 'equalp 'inline-always))
(push '((fixnum fixnum) boolean #.(flags)"(#0)==(#1)")
   (get 'equalp 'inline-always))

;;EXPT
 (push '((t t) t #.(flags ans)"number_expt(#0,#1)")
   (get 'expt 'inline-always))

(push '((fixnum fixnum) fixnum #.(flags)(LAMBDA (LOC1 LOC2)
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
 (push '((t) fixnum #.(flags rfa)"((#0)->st.st_fillp)")
   (get 'fill-pointer 'inline-unsafe))

;;FIRST
 (push '((t) t #.(flags)"car(#0)")
   (get 'first 'inline-safe))
(push '((t) t #.(flags)"CMPcar(#0)")
   (get 'first 'inline-unsafe))

;;FLOAT
 (push '((fixnum-float) long-float #.(flags)"((longfloat)(#0))")
   (get 'float 'inline-always))
(push '((fixnum-float) short-float #.(flags)"((shortfloat)(#0))")
   (get 'float 'inline-always))

;;FLOATP
 (push '((t) boolean #.(flags)
  "@0;type_of(#0)==t_shortfloat||type_of(#0)==t_longfloat")
   (get 'floatp 'inline-always))

;;FLOOR
; (push '((fixnum fixnum) fixnum #.(flags rfa)
;  "@01;(#0>=0&&(#1)>0?(#0)/(#1):ifloor(#0,#1))")
;   (get 'floor 'inline-always))
 (push '((fixnum fixnum) fixnum #.(flags rfa)
  "@01;({fixnum _t=(#0)/(#1);((#1)<0  && (#0)<=0) || ((#1)>0 && (#0)>=0) || ((#1)*_t == (#0)) ? _t : _t - 1;})")
   (get 'floor 'inline-always))

;;FOURTH
 (push '((t) t #.(flags)"cadddr(#0)")
   (get 'fourth 'inline-safe))
(push '((t) t #.(flags)"CMPcadddr(#0)")
   (get 'fourth 'inline-unsafe))

;;GET
 (push '((t t t) t #.(flags)"get(#0,#1,#2)")
   (get 'get 'inline-always))
(push '((t t) t #.(flags)"get(#0,#1,Cnil)")
   (get 'get 'inline-always))

;;INTEGERP
 (push '((t) boolean #.(flags)
  "@0;type_of(#0)==t_fixnum||type_of(#0)==t_bignum")
   (get 'integerp 'inline-always))
(push '((fixnum) boolean #.(flags)
  "1")
   (get 'integerp 'inline-always))


;;KEYWORDP
 (push '((t) boolean #.(flags)
  "@0;(type_of(#0)==t_symbol&&(#0)->s.s_hpack==keyword_package)")
   (get 'keywordp 'inline-always))

;;LENGTH
 (push '((t) fixnum #.(flags rfa)"length(#0)")
   (get 'length 'inline-always))
(push '(((array t)) fixnum #.(flags rfa)"(#0)->v.v_fillp")
   (get 'length 'inline-unsafe))
(push '((string) fixnum #.(flags rfa)"(#0)->v.v_fillp")
   (get 'length 'inline-unsafe))

;;LIST
 (push '(nil t #.(flags)"Cnil")
   (get 'list 'inline-always))
(push '((t) t #.(flags ans)"make_cons(#0,Cnil)")
   (get 'list 'inline-always))
(push '((t t) t #.(flags ans)LIST-INLINE)
   (get 'list 'inline-always))
(push '((t t t) t #.(flags ans)LIST-INLINE)
   (get 'list 'inline-always))
(push '((t t t t) t #.(flags ans)LIST-INLINE)
   (get 'list 'inline-always))
(push '((t t t t t) t #.(flags ans)LIST-INLINE)
   (get 'list 'inline-always))
(push '((t t t t t t) t #.(flags ans)LIST-INLINE)
   (get 'list 'inline-always))
(push '((t t t t t t t) t #.(flags ans)LIST-INLINE)
   (get 'list 'inline-always))
(push '((t t t t t t t t) t #.(flags ans)LIST-INLINE)
   (get 'list 'inline-always))
(push '((t t t t t t t t t) t #.(flags ans)LIST-INLINE)
   (get 'list 'inline-always))
(push '((t t t t t t t t t t) t #.(flags ans)LIST-INLINE)
   (get 'list 'inline-always))

;;LIST*
 (push '((t) t #.(flags)"(#0)")
   (get 'list* 'inline-always))
(push '((t t) t #.(flags ans)"make_cons(#0,#1)")
   (get 'list* 'inline-always))
(push '((t t t) t #.(flags ans)LIST*-INLINE)
   (get 'list* 'inline-always))
(push '((t t t t) t #.(flags ans)LIST*-INLINE)
   (get 'list* 'inline-always))
(push '((t t t t t) t #.(flags ans)LIST*-INLINE)
   (get 'list* 'inline-always))
(push '((t t t t t t) t #.(flags ans)LIST*-INLINE)
   (get 'list* 'inline-always))
(push '((t t t t t t t) t #.(flags ans)LIST*-INLINE)
   (get 'list* 'inline-always))
(push '((t t t t t t t t) t #.(flags ans)LIST*-INLINE)
   (get 'list* 'inline-always))
(push '((t t t t t t t t t) t #.(flags ans)LIST*-INLINE)
   (get 'list* 'inline-always))
(push '((t t t t t t t t t t) t #.(flags ans)LIST*-INLINE)
   (get 'list* 'inline-always))

;;LISTP
 (push '((t) boolean #.(flags)"@0;type_of(#0)==t_cons||(#0)==Cnil")
   (get 'listp 'inline-always))

;;LOGAND
 (push '((fixnum fixnum) fixnum #.(flags rfa)"((#0) & (#1))")
   (get 'logand 'inline-always))

;;LOGIOR
 (push '((fixnum fixnum) fixnum #.(flags rfa)"((#0) | (#1))")
   (get 'logior 'inline-always))

;;LOGXOR
 (push '((fixnum fixnum) fixnum #.(flags rfa)"((#0) ^ (#1))")
   (get 'logxor 'inline-always))

;;LOGNOT
 (push '((fixnum) fixnum #.(flags rfa)"(~(#0))")
   (get 'lognot 'inline-always))

;;MAKE-LIST
 (push '((fixnum) :dynamic-extent #.(flags ans)
  "@0;(ALLOCA_CONS(#0),ON_STACK_MAKE_LIST(#0))")
   (get 'make-list 'inline-always))

;;MAX
 (push '((t t) t #.(flags)"@01;(number_compare(#0,#1)>=0?(#0):#1)")
   (get 'max 'inline-always))
(push '((fixnum fixnum) fixnum #.(flags rfa)"@01;((#0)>=(#1)?(#0):#1)")
   (get 'max 'inline-always))

;;MIN
 (push '((t t) t #.(flags)"@01;(number_compare(#0,#1)<=0?(#0):#1)")
   (get 'min 'inline-always))
(push '((fixnum fixnum) fixnum #.(flags rfa)"@01;((#0)<=(#1)?(#0):#1)")
   (get 'min 'inline-always))

;;MINUSP
 (push '((t) boolean #.(flags)"number_compare(small_fixnum(0),#0)>0")
   (get 'minusp 'inline-always))
(push '((fixnum-float) boolean #.(flags)"(#0)<0")
   (get 'minusp 'inline-always))

;;MOD
; (push '((fixnum fixnum) fixnum #.(flags rfa)"@01;(#0>=0&&(#1)>0?(#0)%(#1):imod(#0,#1))")
;   (get 'mod 'inline-always))
 (push '((fixnum fixnum) fixnum #.(flags rfa)"@01;({fixnum _t=(#0)%(#1);((#1)<0 && _t<=0) || ((#1)>0 && _t>=0) ? _t : _t + (#1);})")
   (get 'mod 'inline-always))

;;NCONC
 (push '((t t) t #.(flags set)"nconc(#0,#1)")
   (get 'nconc 'inline-always))

;;NOT
 (push '((t) boolean #.(flags)"(#0)==Cnil")
   (get 'not 'inline-always))

;;NREVERSE
 (push '((t) t #.(flags ans set)"nreverse(#0)")
   (get 'nreverse 'inline-always))

;;NTH
 (push '((t t) t #.(flags)"nth(fixint(#0),#1)")
   (get 'nth 'inline-always))
(push '((fixnum t) t #.(flags)"nth(#0,#1)")
   (get 'nth 'inline-always))
(push '((t t) t #.(flags)"nth(fix(#0),#1)")
   (get 'nth 'inline-unsafe))

;;NTHCDR
 (push '((t t) t #.(flags)"nthcdr(fixint(#0),#1)")
   (get 'nthcdr 'inline-always))
(push '((fixnum t) t #.(flags)"nthcdr(#0,#1)")
   (get 'nthcdr 'inline-always))
(push '((t t) t #.(flags)"nthcdr(fix(#0),#1)")
   (get 'nthcdr 'inline-unsafe))

;;NULL
 (push '((t) boolean #.(flags)"(#0)==Cnil")
   (get 'null 'inline-always))

;;NUMBERP
 (push '((t) boolean #.(flags)
  "@0;type_of(#0)==t_fixnum||
type_of(#0)==t_bignum||
type_of(#0)==t_ratio||
type_of(#0)==t_shortfloat||
type_of(#0)==t_longfloat||
type_of(#0)==t_complex")
   (get 'numberp 'inline-always))

;;PLUSP
 (push '((t) boolean #.(flags)"number_compare(small_fixnum(0),#0)<0")
   (get 'plusp 'inline-always))
(push '((fixnum-float) boolean #.(flags)"(#0)>0")
   (get 'plusp 'inline-always))

;;PRIN1
 (push '((t t) t #.(flags set)"prin1(#0,#1)")
   (get 'prin1 'inline-always))
(push '((t) t #.(flags set)"prin1(#0,Cnil)")
   (get 'prin1 'inline-always))

;;PRINC
 (push '((t t) t #.(flags set)"princ(#0,#1)")
   (get 'princ 'inline-always))
(push '((t) t #.(flags set)"princ(#0,Cnil)")
   (get 'princ 'inline-always))

;;PRINT
 (push '((t t) t #.(flags set)"print(#0,#1)")
   (get 'print 'inline-always))
(push '((t) t #.(flags set)"print(#0,Cnil)")
   (get 'print 'inline-always))

;;PROBE-FILE
 (push '((t) boolean #.(flags)"(file_exists(#0))")
   (get 'probe-file 'inline-always))

;;RATIOP
(push '((t) boolean #.(flags) "type_of(#0)==t_ratio")
      (get 'ratiop 'inline-always))

;;REM


#+
TRUNCATE_USE_C
(push '((fixnum fixnum) fixnum #.(flags rfa)"(#0)%(#1)")
   (get 'rem 'inline-always))




;;REMPROP
 (push '((t t) t #.(flags set)"remprop(#0,#1)")
   (get 'remprop 'inline-always))

;;REST
 (push '((t) t #.(flags)"cdr(#0)")
   (get 'rest 'inline-safe))
(push '((t) t #.(flags)"CMPcdr(#0)")
   (get 'rest 'inline-unsafe))

;;REVERSE
 (push '((t) t #.(flags ans)"reverse(#0)")
   (get 'reverse 'inline-always))

;;SCHAR
 (push '((t t) t #.(flags ans)"elt(#0,fixint(#1))")
   (get 'schar 'inline-always))
(push '((t fixnum) t #.(flags ans)"elt(#0,#1)")
   (get 'schar 'inline-always))
(push '((t t) t #.(flags rfa)"code_char((#0)->ust.ust_self[fix(#1)])")
   (get 'schar 'inline-unsafe))
(push '((t fixnum) character #.(flags rfa)"(#0)->ust.ust_self[#1]")
   (get 'schar 'inline-unsafe))

;;SECOND
 (push '((t) t #.(flags)"cadr(#0)")
   (get 'second 'inline-safe))
(push '((t) t #.(flags)"CMPcadr(#0)")
   (get 'second 'inline-unsafe))

;;SIN
 (push '((long-float) long-float #.(flags rfa)"sin(#0)")
   (get 'sin 'inline-always))

;;STRING
 (push '((t) t #.(flags ans)"coerce_to_string(#0)")
   (get 'string 'inline-always))

;;STRINGP
 (push '((t) boolean #.(flags)"type_of(#0)==t_string")
   (get 'stringp 'inline-always))

;;SVREF
 (push '((t t) t #.(flags ans)"aref1(#0,fixint(#1))")
   (get 'svref 'inline-always))
(push '((t fixnum) t #.(flags ans)"aref1(#0,#1)")
   (get 'svref 'inline-always))
(push '((t t) t #.(flags)"(#0)->v.v_self[fix(#1)]")
   (get 'svref 'inline-unsafe))
(push '((t fixnum) t #.(flags)"(#0)->v.v_self[#1]")
   (get 'svref 'inline-unsafe))

;;SYMBOL-NAME
 (push '((t) t #.(flags ans)"symbol_name(#0)")
   (get 'symbol-name 'inline-always))

;;SYMBOL-PLIST
(push (list '(t) t #.(flags) "((#0)->s.s_plist)")
    (get 'symbol-plist 'inline-unsafe))

;;SYMBOLP
 (push '((t) boolean #.(flags)"type_of(#0)==t_symbol")
   (get 'symbolp 'inline-always))

;;TAN
 (push '((long-float) long-float #.(flags rfa)"tan(#0)")
   (get 'tan 'inline-always))

;;SQRT
 (push '((long-float) long-float #.(flags rfa)"sqrt((double)#0)")
   (get 'sqrt 'inline-always))

;;TERPRI
 (push '((t) t #.(flags set)"terpri(#0)")
   (get 'terpri 'inline-always))
(push '(nil t #.(flags set)"terpri(Cnil)")
   (get 'terpri 'inline-always))

;;THIRD
 (push '((t) t #.(flags)"caddr(#0)")
   (get 'third 'inline-safe))
(push '((t) t #.(flags)"CMPcaddr(#0)")
   (get 'third 'inline-unsafe))

;;TRUNCATE

#+
TRUNCATE_USE_C
(push '((fixnum fixnum) fixnum #.(flags rfa)"(#0)/(#1)")
   (get 'truncate 'inline-always))
(push '((fixnum-float) fixnum #.(flags)"(fixnum)(#0)")
   (get 'truncate 'inline-always))



;;VECTORP
 (push '((t) boolean #.(flags)
  "@0;type_of(#0)==t_vector||
type_of(#0)==t_string||
type_of(#0)==t_bitvector")
   (get 'vectorp 'inline-always))

;;WRITE-CHAR
 (push '((t) t #.(flags set)
  "@0;(writec_stream(char_code(#0),Vstandard_output->s.s_dbind),(#0))")
   (get 'write-char 'inline-unsafe))

;;ZEROP
 (push '((t) boolean #.(flags)"number_compare(small_fixnum(0),#0)==0")
   (get 'zerop 'inline-always))

(push '((fixnum-float) boolean #.(flags)"(#0)==0")
   (get 'zerop 'inline-always))

;;CMOD
 (push '((t) t #.(flags) "cmod(#0)")
   (get 'system:cmod 'inline-always))

;;CTIMES
 (push '((t t) t #.(flags) "ctimes(#0,#1)")
   (get 'system:ctimes 'inline-always))

;;CPLUS
 (push '((t t) t #.(flags) "cplus(#0,#1)")
   (get 'system:cplus 'inline-always))

;;CDIFFERENCE
 (push '((t t) t #.(flags) "cdifference(#0,#1)")
   (get 'system:cdifference 'inline-always))

