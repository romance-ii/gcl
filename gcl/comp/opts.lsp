(in-package "BCOMP")

(defopt *
 ((t t) t #.(flags ans safe) "number_times($0,$1)")
 ((fix-or-sf-or-df fix-or-sf-or-df) short-float #.(flags safe) "(double)($0)*(double)($1)")
 ((fix-or-sf-or-df fix-or-sf-or-df) double-float #.(flags safe) "(double)($0)*(double)($1)")
 ((integer integer) integer #.(flags rfa is safe) "mulii($0,$1)")
 ((integer integer integer) integer #.(flags rfa is safe) "mulii($0,mulii($1,$2))")
 ((fixnum integer) integer #.(flags rfa is safe) "mulsi($0,$1)")
 ((fixnum fixnum) fixnum #.(flags safe) "($0)*($1)"))
(defopt +
 ((t t) t #.(flags ans safe) "number_plus($0,$1)")
 ((fix-or-sf-or-df fix-or-sf-or-df) short-float #.(flags safe) "(double)($0)+(double)($1)")
 ((fix-or-sf-or-df fix-or-sf-or-df) double-float #.(flags safe) "(double)($0)+(double)($1)")
 ((integer integer) integer #.(flags rfa is safe) "addii($0,$1)")
 ((integer integer integer) integer #.(flags rfa is safe) "addii($0,addii($1,$2))")
 ((fixnum fixnum) fixnum #.(flags safe) "($0)+($1)"))
(defopt -
 ((t) t #.(flags ans safe) "number_negate($0)")
 ((t t) t #.(flags ans safe) "number_minus($0,$1)")
 ((fix-or-sf-or-df fix-or-sf-or-df) short-float #.(flags safe) "(double)($0)-(double)($1)")
 ((fix-or-sf-or-df) short-float #.(flags safe) "-(double)($0)")
 ((fix-or-sf-or-df) double-float #.(flags safe) "-(double)($0)")
 ((fix-or-sf-or-df fix-or-sf-or-df) double-float #.(flags safe) "(double)($0)-(double)($1)")
 ((integer integer) integer #.(flags rfa is safe) "subii($0,$1)")
 ((integer) integer #.(flags rfa is safe) "subii(gzero,$0)")
 ((fixnum fixnum) fixnum #.(flags safe) "($0)-($1)")
 ((fixnum) fixnum #.(flags safe) "-($0)"))
(defopt /
 ((fix-or-sf-or-df fix-or-sf-or-df) short-float #.(flags rfa safe) "(double)($0)/(double)($1)")
 ((fix-or-sf-or-df fix-or-sf-or-df) double-float #.(flags rfa safe) "(double)($0)/(double)($1)")
 ((fixnum fixnum) fixnum #.(flags ) "($0)/($1)")
 )
(defopt /=
 ((t t) boolean #.(flags safe) "number_compare($0,$1)!=0")
 ((fix-or-sf-or-df fix-or-sf-or-df) boolean #.(flags safe) "($0)!=($1)"))
(defopt 1+
 ((t) t #.(flags ans safe) "one_plus($0)")
 ((fix-or-sf-or-df) short-float #.(flags safe) "(double)($0)+1")
 ((fix-or-sf-or-df) double-float #.(flags safe) "(double)($0)+1")
 ((fixnum) fixnum #.(flags safe) "($0)+1"))
(defopt 1-
 ((t) t #.(flags ans safe) "one_minus($0)")
 ((fixnum) fixnum #.(flags safe) "($0)-1")
 ((fix-or-sf-or-df) short-float #.(flags safe) "(double)($0)-1")
 ((fix-or-sf-or-df) double-float #.(flags safe) "(double)($0)-1"))
(defopt <
 ((t t) boolean #.(flags safe) "number_compare($0,$1)<0")
 ((integer integer) boolean #.(flags safe) "cmpii($0,$1)<0")
 ((fix-or-sf-or-df fix-or-sf-or-df) boolean #.(flags safe) "($0)<($1)"))
(defopt <=
 ((t t) boolean #.(flags safe) "number_compare($0,$1)<=0")
 ((integer integer) boolean #.(flags safe) "cmpii($0,$1)<=0")
 ((fix-or-sf-or-df fix-or-sf-or-df) boolean #.(flags safe) "($0)<=($1)"))
(defopt =
 ((t t) boolean #.(flags safe) "number_compare($0,$1)==0")
 ((integer integer) boolean #.(flags safe) "cmpii($0,$1)==0")
 ((fix-or-sf-or-df fix-or-sf-or-df) boolean #.(flags safe) "($0)==($1)"))
(defopt >
 ((t t) boolean #.(flags safe) "number_compare($0,$1)>0")
 ((integer integer) boolean #.(flags safe) "cmpii($0,$1)>0")
 ((fix-or-sf-or-df fix-or-sf-or-df) boolean #.(flags safe) "($0)>($1)"))
(defopt >=
 ((t t) boolean #.(flags safe) "number_compare($0,$1)>=0")
 ((integer integer) boolean #.(flags safe) "cmpii($0,$1)>=0")
 ((fix-or-sf-or-df fix-or-sf-or-df) boolean #.(flags safe) "($0)>=($1)"))
(defopt APPEND
 ((t t) t #.(flags ans safe) "append($0,$1)"))
(defopt aref-2d
  (((array t) fixnum fixnum fixnum) t #.(flags) "@0;($0)->a.Body[($1)*($3)+$2]"))
(defopt AREF
 ((t t) t #.(flags ans safe) "aref1($0,fixint($1))")
 ((t fixnum) t #.(flags ans safe) "aref1($0,$1)")
 ((t t) t #.(flags ans) "aref1($0,fix($1))")
 (((array t) fixnum) t #.(flags) "($0)->v.Body[$1]")
 (((array character) fixnum) character #.(flags rfa) "($0)->ust.Body[$1]")
 (((array fixnum) fixnum) fixnum #.(flags rfa) "($0)->fixa.Body[$1]")
 (((array unsigned-char) fixnum) fixnum #.(flags rfa) "($0)->ust.Body[$1]")
 (((array signed-char) fixnum) fixnum #.(flags rfa) "SIGNED_CHAR(($0)->ust.Body[$1])")
 (((array unsigned-short) fixnum) fixnum #.(flags rfa) "((unsigned short *)($0)->ust.Body)[$1]")
 (((array signed-short) fixnum) fixnum #.(flags rfa) "((short *)($0)->ust.Body)[$1]")
 (((array short-float) fixnum) short-float #.(flags rfa) "($0)->sfa.Body[$1]")
 (((array long-float) fixnum) double-float #.(flags rfa) "($0)->lfa.Body[$1]")
 ((t t t) t #.(flags ans) "@0;aref($0,fix($1)*($0)->a.Dims[1]+fix($2))")
 (((array t) fixnum fixnum) t #.(flags) "@0;($0)->a.Body[($1)*($0)->a.Dims[1]+$2]")
 (((array character) fixnum fixnum) character #.(flags rfa) "@0;($0)->ust.Body[($1)*($0)->a.Dims[1]+$2]")
 (((array fixnum) fixnum fixnum) fixnum #.(flags rfa) "@0;($0)->fixa.Body[($1)*($0)->a.Dims[1]+$2]")
 (((array short-float) fixnum fixnum) short-float #.(flags rfa) "@0;($0)->sfa.Body[($1)*($0)->a.Dims[1]+$2]")
 (((array long-float) fixnum fixnum) double-float #.(flags rfa) "@0;($0)->lfa.Body[($1)*($0)->a.Dims[1]+$2]"))
(defopt ARRAY-TOTAL-SIZE
 ((t) fixnum #.(flags rfa) "(($0)->st.Dim)"))
(defopt ARRAYP
 ((t) boolean #.(flags safe) "@0;type_of($0)==t_array||
type_of($0)==t_vector||
type_of($0)==t_string||
type_of($0)==t_bitvector"))
(defopt SYSTEM:ASET
 ((t t t) t #.(flags set safe) "aset1($0,fixint($1),$2)")
 ((t fixnum t) t #.(flags set safe) "aset1($0,$1,$2)")
 ((t t t) t #.(flags set) "aset1($0,fix($1),$2)")
 (((array t) fixnum t) t #.(flags set) "($0)->v.Body[$1]= ($2)")
 (((array character) fixnum character) character #.(flags set rfa) "($0)->ust.Body[$1]= ($2)")
 (((array fixnum) fixnum fixnum) fixnum #.(flags set rfa) "($0)->fixa.Body[$1]= ($2)")
 (((array signed-short) fixnum fixnum) fixnum #.(flags set rfa) "((short *)($0)->ust.Body)[$1]=($2)")
 (((array signed-char) fixnum fixnum) fixnum #.(flags set rfa) "(($0)->ust.Body)[$1]=($2)")
 (((array unsigned-short) fixnum fixnum) fixnum #.(flags set rfa) "((unsigned short *)($0)->ust.Body)[$1]=($2)")
 (((array unsigned-char) fixnum fixnum) fixnum #.(flags set rfa) "(($0)->ust.Body)[$1]=($2)")
 (((array short-float) fixnum short-float) short-float #.(flags set rfa) "($0)->sfa.Body[$1]= ($2)")
 (((array long-float) fixnum double-float) double-float #.(flags set rfa) "($0)->lfa.Body[$1]= ($2)")
 ((t t t t) t #.(flags set) "@0;aset($0,fix($1)*($0)->a.Dims[1]+fix($2),$3)")
 (((array t) fixnum fixnum t) t #.(flags set) "@0;($0)->a.Body[($1)*($0)->a.Dims[1]+$2]= ($3)")
 (((array character) fixnum fixnum character) character #.(flags set rfa) "@0;($0)->ust.Body[($1)*($0)->a.Dims[1]+$2]= ($3)")
 (((array fixnum) fixnum fixnum fixnum) fixnum #.(flags set rfa) "@0;($0)->fixa.Body[($1)*($0)->a.Dims[1]+$2]= ($3)")
 (((array short-float) fixnum fixnum short-float) short-float #.(flags set rfa) "@0;($0)->sfa.Body[($1)*($0)->a.Dims[1]+$2]= ($3)")
 (((array long-float) fixnum fixnum double-float) double-float #.(flags set rfa) "@0;($0)->lfa.Body[($1)*($0)->a.Dims[1]+$2]= ($3)"))
(defopt ash
 ((fixnum fixnum) fixnum #.(flags ) "@1;($1 > 0 ? ($0) <<( $1 ): ($0) >> (-($1)))")) 
(defopt ATOM
 ((t) boolean #.(flags safe) "type_of($0)!=t_cons"))
(defopt BIT-VECTOR-P
 ((t) boolean #.(flags safe) "(type_of($0)==t_bitvector)"))
(defopt BOOLE3
 ((fixnum fixnum fixnum) fixnum #.(flags rfa safe) wr-inline-boole3))
(defopt BOUNDP
 ((t) boolean #.(flags) "($0)->s.Bind!=OBJNULL"))
(defopt CAAAAR
 ((t) t #.(flags) "Mcaaaar($0)"))
(defopt CAAADR
 ((t) t #.(flags) "Mcaaadr($0)"))
(defopt CAAAR
 ((t) t #.(flags) "Mcaaar($0)"))
(defopt CAADAR
 ((t) t #.(flags) "Mcaadar($0)"))
(defopt CAADDR
 ((t) t #.(flags) "Mcaaddr($0)"))
(defopt CAADR
 ((t) t #.(flags) "Mcaadr($0)"))
(defopt CAAR
 ((t) t #.(flags) "Mcaar($0)"))
(defopt CADAAR
 ((t) t #.(flags) "Mcadaar($0)"))
(defopt CADADR
 ((t) t #.(flags) "Mcadadr($0)"))
(defopt CADAR
 ((t) t #.(flags) "Mcadar($0)"))
(defopt CADDAR
 ((t) t #.(flags) "Mcaddar($0)"))
(defopt CADDDR
 ((t) t #.(flags) "Mcadddr($0)"))
(defopt CADDR
 ((t) t #.(flags) "Mcaddr($0)"))
(defopt CADR
 ((t) t #.(flags) "Mcadr($0)"))
(defopt CAR
 ((t) t #.(flags) "Mcar($0)"))
(defopt CDAAAR
 ((t) t #.(flags) "Mcdaaar($0)"))
(defopt CDAADR
 ((t) t #.(flags) "Mcdaadr($0)"))
(defopt CDAAR
 ((t) t #.(flags) "Mcdaar($0)"))
(defopt CDADAR
 ((t) t #.(flags) "Mcdadar($0)"	))
(defopt CDADDR
 ((t) t #.(flags) "Mcdaddr($0)"))
(defopt CDADR
 ((t) t #.(flags) "Mcdadr($0)"))
(defopt CDAR
 ((t) t #.(flags) "Mcdar($0)"))
(defopt CDDAAR
 ((t) t #.(flags) "Mcddaar($0)"))
(defopt CDDADR
 ((t) t #.(flags) "Mcddadr($0)"))
(defopt CDDAR
 ((t) t #.(flags) "Mcddar($0)"))
(defopt CDDDAR
 ((t) t #.(flags) "Mcdddar($0)"))
(defopt CDDDDR
 ((t) t #.(flags) "Mcddddr($0)"))
(defopt CDDDR
 ((t) t #.(flags) "Mcdddr($0)"))
(defopt CDDR
 ((t) t #.(flags) "Mcddr($0)"))
(defopt CDR
 ((t) t #.(flags) "Mcdr($0)"))
(defopt CHAR
 ((t t) t #.(flags ans safe) "elt($0,fixint($1))")
 ((t fixnum) t #.(flags ans safe) "elt($0,$1)")
 ((t t) t #.(flags) "code_char(($0)->ust.Body[fix($1)])")
 ((t fixnum) character #.(flags rfa) "($0)->ust.Body[$1]"))
(defopt CHAR-CODE
 ((character) fixnum #.(flags rfa safe) "($0)"))
(defopt SYSTEM:CHAR-SET
 ((t t t) t #.(flags set safe) "elt_set($0,fixint($1),$2)")
 ((t fixnum t) t #.(flags set safe) "elt_set($0,$1,$2)")
 ((t t t) t #.(flags set) "@2;(($0)->ust.Body[fix($1)]=char_code($2),($2))")
 ((t fixnum character) character #.(flags set rfa) "($0)->ust.Body[$1]= ($2)"))
(defopt CHAR/=
 ((character character) boolean #.(flags safe) "($0)!=($1)")
 ((t t) boolean #.(flags) "!eql($0,$1)")
 ((t t) boolean #.(flags) "char_code($0)!=char_code($1)"))
(defopt CHAR<
 ((character character) boolean #.(flags safe) "($0)<($1)"))
(defopt CHAR<=
 ((character character) boolean #.(flags safe) "($0)<=($1)"))
(defopt CHAR=
 ((t t) boolean #.(flags) "eql($0,$1)")
 ((t t) boolean #.(flags) "char_code($0)==char_code($1)")
 ((character character) boolean #.(flags) "($0)==($1)"))
(defopt CHAR>
 ((character character) boolean #.(flags safe) "($0)>($1)"))
(defopt CHAR>=
 ((character character) boolean #.(flags safe) "($0)>=($1)"))
(defopt CHARACTERP
 ((t) boolean #.(flags safe) "type_of($0)==t_character"))
(defopt CODE-CHAR
 ((fixnum) character #.(flags safe rfa) "($0)")
 ((t) character #.(flags rfa) "fix($0)"))
(defopt CONS
 ((t t) t #.(flags ans constantp safe) "make_cons($0,$1)")
 ((t t) dynamic-extent #.(flags ans safe) "ON_STACK_CONS($0,$1)"))
(defopt CONSP
 ((t) boolean #.(flags safe) "type_of($0)==t_cons"))
(defopt COS
 ((double-float) double-float #.(flags rfa safe) "cos($0)"))
(defopt DIGIT-CHAR-P
 ((character) boolean #.(flags safe) "@0; (($0) <= '9' && ($0) >= '0')"))
(defopt ELT
 ((t t) t #.(flags ans safe) "elt($0,fixint($1))")
 ((t fixnum) t #.(flags ans safe) "elt($0,$1)")
 ((t t) t #.(flags ans) "elt($0,fix($1))"))
(defopt SYSTEM:ELT-SET
 ((t t t) t #.(flags set safe) "elt_set($0,fixint($1),$2)")
 ((t fixnum t) t #.(flags set safe) "elt_set($0,$1,$2)")
 ((t t t) t #.(flags set) "elt_set($0,fix($1),$2)"))
(defopt ENDP
 ((t) boolean #.(flags) "($0)==sLnil"))
(defopt EQ
 ((t t) boolean #.(flags safe) "($0)==($1)")
 ((fixnum fixnum) boolean #.(flags safe) "0"))
(defopt EQL
 ((t t) boolean #.(flags safe) "eql($0,$1)")
 ((fixnum fixnum) boolean #.(flags safe) "($0)==($1)"))
(defopt EQUAL
 ((t t) boolean #.(flags safe) "equal($0,$1)")
 ((fixnum fixnum) boolean #.(flags safe) "($0)==($1)"))
(defopt EQUALP
 ((t t) boolean #.(flags safe) "equalp($0,$1)")
 ((fixnum fixnum) boolean #.(flags safe) "($0)==($1)"))
(defopt EXPT
 ((t t) t #.(flags ans safe) "number_expt($0,$1)")
 ((integer integer) integer #.(flags is safe) "powerii($0,$1)")
 ((fixnum fixnum) fixnum #.(flags safe)
  (lambda (l &aux (x1 (car l))tem)
    (if (and (consp x1) (eq (car x1) 'inline-loc)
	     (consp (setq tem (third x1)))(eq 'dv (car tem))
	     (eql (third tem) 2))
	(wr-inline-call1 l "(1 << ($1))")
      (wr-inline-call1 l "fixnum_expt($@0)")))))
(defopt FILL-POINTER
 ((t) fixnum #.(flags rfa) "(($0)->st.Fillp)"))
(defopt SYSTEM:FILL-POINTER-SET
 ((t fixnum) fixnum #.(flags set rfa) "(($0)->st.Fillp)=($1)"))
(defopt FIRST
 ((t) t #.(flags) "Mcar($0)"))
(defopt SYSTEM:FIXNUMP
 ((t) boolean #.(flags safe) "type_of($0)==t_fixnum")
 ((fixnum) boolean #.(flags safe) "1"))
(defopt FLOAT
 ((fix-or-sf-or-df) double-float #.(flags safe) "((doublefloat)($0))")
 ((fix-or-sf-or-df) short-float #.(flags safe) "((shortfloat)($0))"))
(defopt FLOATP
 ((t) boolean #.(flags safe) "@0;type_of($0)==t_shortfloat||type_of($0)==t_doublefloat"))
(defopt FLOOR
 ((fixnum fixnum) fixnum #.(flags rfa safe) "@01;($0>=0&&($1)>0?($0)/($1):ifloor($0,$1))"))
(defopt FOURTH
 ((t) t #.(flags) "Mcadddr($0)"))
(defopt COMPILER::FP-OK
 ((t) fixnum #.(flags set) "@0;(type_of($0)==t_stream? (int)(($0)->sm.Fp): 0 )")
 ((stream) fixnum #.(flags set) "(($0)->sm.Fp)"))
(defopt GET
 ((t t t) t #.(flags safe) "get($0,$1,$2)")
 ((t t) t #.(flags safe) "get($0,$1,sLnil)"))
(defopt INTEGERP
 ((t) boolean #.(flags safe) "@0;type_of($0)==t_fixnum||type_of($0)==t_bignum"))
(defopt KEYWORDP
 ((t) boolean #.(flags safe) "@0;(type_of($0)==t_symbol&&($0)->s.Hpack==keyword_package)"))
(defopt COMPILER::LDB1
 ((fixnum fixnum fixnum) fixnum #.(flags safe) "((((~(-1 << ($0))) << ($1)) & ($2)) >> ($1))"))
(defopt LENGTH
 ((t) fixnum #.(flags rfa safe) "length($0)")
 (((array t)) fixnum #.(flags rfa) "($0)->v.Fillp")
 (((vector character)) fixnum #.(flags rfa) "($0)->v.Fillp"))
(defopt LIST
 ((t *) t #.(flags ans safe constantp) "list($#,$@0)")
 (() t #.(flags ans safe constantp) "sLnil")
 )
(defopt LIST*
 ((t *) t #.(flags ans safe constantp) "listA($#,$@0)"))
(defopt LISTP
 ((t) boolean #.(flags constantp safe) "@0;type_of($0)==t_cons||($0)==sLnil"))
(defopt LOGAND
 ((fixnum fixnum) fixnum #.(flags rfa safe) "(($0) & ($1))"))
(defopt LOGIOR
 ((fixnum fixnum) fixnum #.(flags rfa safe) "(($0) | ($1))"))
(defopt LOGNOT
 ((fixnum) fixnum #.(flags rfa safe) "(~($0))"))
(defopt COMPILER::LONG-FLOAT-P
 ((t) boolean #.(flags safe) "type_of($0)==t_doublefloat"))
(defopt MAKE-LIST
 ((fixnum) dynamic-extent #.(flags ans safe) "@0;(ALLOCA_CONS($0),ON_STACK_MAKE_LIST($0))"))
(defopt MAX
 ((t t) t #.(flags safe) "@01;(number_compare($0,$1)>=0?($0):$1)")
 ((fixnum fixnum) fixnum #.(flags rfa safe) "@01;($0)>=($1)?($0):$1"))
(defopt MIN
 ((t t) t #.(flags safe) "@01;(number_compare($0,$1)<=0?($0):$1)")
 ((fixnum fixnum) fixnum #.(flags rfa safe) "@01;($0)<=($1)?($0):$1"))
(defopt MINUSP
 ((t) boolean #.(flags safe) "number_compare(small_fixnum(0),$0)>0")
 ((fix-or-sf-or-df) boolean #.(flags safe) "($0)<0"))
(defopt MOD
 ((fixnum fixnum) fixnum #.(flags rfa safe) "@01;($0>=0&&($1)>0?($0)%($1):imod($0,$1))"))
(defopt SYSTEM:MV-REF
 ((fixnum) t #.(flags ans set safe) "(MVloc[($0)])"))
(defopt NCONC
 ((t t) t #.(flags set safe) "nconc($0,$1)"))
(defopt NOT
 ((t) boolean #.(flags safe) "($0)==sLnil")
 ((boolean) boolean #.(flags safe) "!($0)"))
(defopt NREVERSE
 ((t) t #.(flags ans set safe) "nreverse($0)"))
(defopt NTH
 ((t t) t #.(flags safe) "nth(fixint($0),$1)")
 ((fixnum t) t #.(flags safe) "nth($0,$1)")
 ((t t) t #.(flags) "nth(fix($0),$1)"))
(defopt NTHCDR
 ((t t) t #.(flags safe) "nthcdr(fixint($0),$1)")
 ((fixnum t) t #.(flags safe) "nthcdr($0,$1)")
 ((t t) t #.(flags) "nthcdr(fix($0),$1)"))
(defopt NULL
 ((t) boolean #.(flags safe) "($0)==sLnil"))
(defopt NUMBERP
 ((t) boolean #.(flags safe) "@0;type_of($0)==t_fixnum||
type_of($0)==t_bignum||
type_of($0)==t_ratio||
type_of($0)==t_shortfloat||
type_of($0)==t_doublefloat||
type_of($0)==t_complex"))
(defopt PLUSP
 ((t) boolean #.(flags safe) "number_compare(small_fixnum(0),$0)<0")
 ((fix-or-sf-or-df) boolean #.(flags safe) "($0)>0"))
(defopt PRIN1
 ((t t) t #.(flags set safe) "prin1($0,$1)")
 ((t) t #.(flags set safe) "prin1($0,sLnil)"))
(defopt PRINC
 ((t t) t #.(flags set safe) "princ($0,$1)")
 ((t) t #.(flags set safe) "princ($0,sLnil)"))
(defopt PRINT
 ((t t) t #.(flags set safe) "print($0,$1)")
 ((t) t #.(flags set safe) "print($0,sLnil)"))
(defopt PROBE-FILE
 ((t) boolean #.(flags safe) "(file_exists($0))"))
(defopt SYSTEM:PUTPROP
 ((t t t) t #.(flags set safe) "putprop($0,$1,$2)"))
(defopt COMPILER::QFEOF
 ((fixnum) boolean #.(flags set) "(feof((FILE *)($0)))"))
(defopt COMPILER::QGETC
 ((fixnum) fixnum #.(flags set rfa) "($0=getc((FILE *)($0)))"))
(defopt COMPILER::QPUTC
 ((fixnum fixnum) fixnum #.(flags set rfa) "(putc($0,((FILE *)($1))))")
 ((character fixnum) fixnum #.(flags set rfa) "(putc($0,((FILE *)($1))))"))
(defopt COMPILER::READ-BYTE1
 ((t t) t #.(flags ans set) "read_byte1($0,$1)"))
(defopt COMPILER::READ-CHAR1
 ((t t) t #.(flags ans set) "read_char1($0,$1)"))
(defopt REM
 ((integer integer) integer #.(flags rfa is safe) "dvmdii($0,$1,-1)")
 ((integer fixnum) fixnum #.(flags rfa is safe) "(FIXtemp=(int)dvmdii($0,stoi($1),-1), (signe(FIXtemp)> 0 ? (int)
   ((GEN)FIXtemp)[2] : (signe(FIXtemp)< 0 ? -(int)((GEN)FIXtemp)[2] : 0)))")
  #+truncate_use_c ((fixnum fixnum) fixnum #.(flags rfa safe) "($0)%($1)"))
(defopt REMPROP
 ((t t) t #.(flags set safe) "remprop($0,$1)"))
(defopt REST
 ((t) t #.(flags) "Mcdr($0)"))
(defopt REVERSE
 ((t) t #.(flags ans safe) "reverse($0)"))
(defopt RPLACD
 ((t t) t #.(flags set) "@0;($0->c.Cdr=$1,$0)"))
(defopt RPLACA
 ((t t) t #.(flags set) "@0;($0->c.Car=$1,$0)"))
(defopt SCHAR
 ((t t) t #.(flags ans safe) "elt($0,fixint($1))")
 ((t fixnum) t #.(flags ans safe) "elt($0,$1)")
 ((t t) t #.(flags rfa) "code_char(($0)->ust.Body[fix($1)])")
 ((t fixnum) character #.(flags rfa) "($0)->ust.Body[$1]"))
(defopt SYSTEM:SCHAR-SET
 ((t t t) t #.(flags set safe) "elt_set($0,fixint($1),$2)")
 ((t fixnum t) t #.(flags set safe) "elt_set($0,$1,$2)")
 ((t t t) t #.(flags set) "@2;(($0)->ust.Body[fix($1)]=char_code($2),($2))")
 ((t fixnum character) character #.(flags set rfa) "($0)->ust.Body[$1]= ($2)"))
(defopt SECOND
 ((t) t #.(flags) "Mcadr($0)"))
(defopt SYSTEM:SET-MV
 ((fixnum t) t #.(flags ans set safe) "(MVloc[($0)]=($1))"))
(defopt COMPILER::SHIFT<<
 ((fixnum fixnum) fixnum #.(flags safe) "(($0) << ($1))"))
(defopt COMPILER::SHIFT>>
 ((fixnum fixnum) fixnum #.(flags safe) "(($0) >> (- ($1)))"))
(defopt COMPILER::SHORT-FLOAT-P
 ((t) boolean #.(flags safe) "type_of($0)==t_shortfloat"))
(defopt COMPILER::SIDE-EFFECTS
 (nil t #.(flags ans set safe) "Ct"))
(defopt SIN
 ((double-float) double-float #.(flags rfa safe) "sin($0)"))
(defopt SYSTEM:SPUTPROP
 ((t t t) t #.(flags set safe) "sputprop($0,$1,$2)"))
(defopt COMPILER::STACK-CONS
 ((fixnum t t) t #.(flags safe) "(STcons$0.t=t_cons,STcons$0.m=0,STcons$0.Car=($1),
              STcons$0.Cdr=($2),(object)&STcons$0)")
 ((fixnum t t) t #.(flags safe) "(STcons$0.t=t_cons,STcons$0.m=0,STcons$0.Car=($1),
              STcons$0.Cdr=($2),(object)&STcons$0)"))
(defopt STRING
 ((t) t #.(flags ans safe) "coerce_to_string($0)"))
(defopt STRINGP
 ((t) boolean #.(flags safe) "type_of($0)==t_string"))
(defopt SYSTEM:STRUCTURE-DEF
 ((t) t #.(flags) "($0)->str.Def"))

(defopt SYSTEM:STRUCTURE-REF
  ((t t fixnum) t #.(flags ans safe) "structure_ref($0,$1,$2)")
  ((t t fixnum) t #.(flags ) do-structure-ref)
  (((struct fixnum) t fixnum) fixnum #.(flags ) do-structure-ref)
  (((struct character) t fixnum) character #.(flags ) do-structure-ref)
  (((struct double-float) t fixnum) double-float #.(flags ) do-structure-ref)
  (((struct short-float) t fixnum) short-float #.(flags ) do-structure-ref)
  )

(defopt SYSTEM:STRUCTURE-SET
 ((t t fixnum t) t #.(flags set safe) "structure_set($0,$1,$2,$3)")
 ((t t fixnum t) t #.(flags set ) do-structure-set)
 (((struct fixnum) t fixnum fixnum) fixnum #.(flags set ) do-structure-set)
 (((struct character) t fixnum  character) character #.(flags set ) do-structure-set)
 (((struct double-float) t fixnum double-float) double-float #.(flags set ) do-structure-set)
 (((struct short-float) t fixnum short-float) short-float #.(flags set ) do-structure-set)
 )
(defopt SYSTEM:STRUCTUREP
 ((t) boolean #.(flags safe) "type_of($0)==t_structure"))
(defopt COMPILER::SUBLIS1
 ((t t t) t #.(flags ans set safe) compiler::sublis1-inline))
(defopt SVREF
 ((t t) t #.(flags ans safe) "aref1($0,fixint($1))")
 ((t fixnum) t #.(flags ans safe) "aref1($0,$1)")
 ((t t) t #.(flags) "($0)->v.Body[fix($1)]")
 ((t fixnum) t #.(flags) "($0)->v.Body[$1]"))
(defopt SYSTEM:SVSET
 ((t t t) t #.(flags set safe) "aset1($0,fixint($1),$2)")
 ((t fixnum t) t #.(flags set safe) "aset1($0,$1,$2)")
 ((t t t) t #.(flags set) "(($0)->v.Body[fix($1)]=($2))")
 ((t fixnum t) t #.(flags set) "($0)->v.Body[$1]= ($2)"))
(defopt COMPILER::SYMBOL-LENGTH
 ((t) fixnum #.(flags rfa safe) "@0;(type_of($0)==t_symbol ? ($0)->s.Fillp :not_a_variable(($0)))"))
(defopt SYMBOL-NAME
 ((t) t #.(flags ans safe) "symbol_name($0)"))
(defopt SYMBOL-PLIST
 ((t) t #.(flags) "(($0)->s.Plist)"))
(defopt SYMBOLP
 ((t) boolean #.(flags safe) "type_of($0)==t_symbol"))
(defopt TAN
 ((double-float) double-float #.(flags rfa safe) "tan($0)"))
(defopt TERPRI
 ((t) t #.(flags set safe) "terpri($0)")
 (nil t #.(flags set safe) "terpri(sLnil)"))
(defopt THIRD
 ((t) t #.(flags) "Mcaddr($0)"))
(defopt TRUNCATE
 ((integer integer) integer #.(flags rfa is safe) "dvmdii($0,$1,0)")
#+truncate_use_c ((fixnum fixnum) fixnum #.(flags rfa safe) "($1)/($2)")
 ((fix-or-sf-or-df) fixnum #.(flags safe) "(fixnum)($0)"))
(defopt COMPILER::VECTOR-TYPE
 ((t fixnum) boolean #.(flags safe) "@0;(type_of($0) == t_vector && ($0)->v.Elttype == ($1))"))
(defopt VECTORP
 ((t) boolean #.(flags safe) "@0;type_of($0)==t_vector||
type_of($0)==t_string||
type_of($0)==t_bitvector"))
(defopt WRITE-CHAR
 ((t) t #.(flags set) "@0;(writec_stream(char_code($0),Vstandard_output->s.Bind),($0))"))
(defopt ZEROP
 ((t) boolean #.(flags safe) "number_compare(small_fixnum(0),$0)==0")
 ((integer) boolean #.(flags rfa safe) "lgef($0)==2")
 ((fix-or-sf-or-df) boolean #.(flags safe) "($0)==0"))


