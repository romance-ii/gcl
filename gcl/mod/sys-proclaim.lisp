
(IN-PACKAGE "SYSTEM") 
(PROCLAIM '(FTYPE (FUNCTION (T) (VALUES T T)) LISP::MAKE-KEYWORD)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T) FIXNUM) ANSI-LOOP::DUPLICATABLE-CODE-P)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T) *) LISP::VERIFY-KEYWORDS
            LISP::DEFMACRO-ERROR ANSI-LOOP::LOOP-GET-COLLECTION-INFO)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T T T *) *) LISP::PARSE-DEFMACRO-LAMBDA-LIST
            LISP::PARSE-DEFMACRO)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T T T T T T) *) LISP::PUSH-OPTIONAL-BINDING)) 
(PROCLAIM '(FTYPE (FUNCTION (T T *) *) LISP::PARSE-BODY)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T) T) ANSI-LOOP::LOOP-SUM-COLLECTION
            ANSI-LOOP::LOOP-TRANSLATE
            ANSI-LOOP::LOOP-STANDARD-EXPANSION
            ANSI-LOOP::PRINT-LOOP-UNIVERSE
            ANSI-LOOP::LOOP-ANSI-FOR-EQUALS ANSI-LOOP::LOOP-FOR-ACROSS
            ANSI-LOOP::LOOP-FOR-IN ANSI-LOOP::LOOP-FOR-ON
            ANSI-LOOP::LOOP-FOR-BEING
            ANSI-LOOP::HIDE-VARIABLE-REFERENCE
            ANSI-LOOP::LOOP-MAKE-ITERATION-VARIABLE)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T *) T) ANSI-LOOP::LOOP-CHECK-DATA-TYPE)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T *) T) ANSI-LOOP::ADD-LOOP-PATH
            ANSI-LOOP::LOOP-SEQUENCE-ELEMENTS-PATH
            LISP::PUSH-LET-BINDING
            ANSI-LOOP::LOOP-HASH-TABLE-ITERATION-PATH
            ANSI-LOOP::LOOP-PACKAGE-SYMBOLS-ITERATION-PATH
            ANSI-LOOP::LOOP-MAKE-VARIABLE)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T T T T) T) LISP::DO-ARG-COUNT-ERROR
            LISP::PUSH-SUB-LIST-BINDING)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T T) T) ANSI-LOOP::LOOP-FOR-ARITHMETIC)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T T T T T T T T) T)
            ANSI-LOOP::LOOP-SEQUENCER)) 
(PROCLAIM
    '(FTYPE (FUNCTION NIL *) ANSI-LOOP::LOOP-DO-FOR
            ANSI-LOOP::LOOP-POP-SOURCE ANSI-LOOP::LOOP-GET-FORM
            ANSI-LOOP::LOOP-DISALLOW-AGGREGATE-BOOLEANS
            ANSI-LOOP::LOOP-DISALLOW-ANONYMOUS-COLLECTORS)) 
(PROCLAIM
    '(FTYPE (FUNCTION NIL T) ANSI-LOOP::LOOP-DO-FINALLY
            ANSI-LOOP::LOOP-DO-DO ANSI-LOOP::LOOP-DO-RETURN
            ANSI-LOOP::LOOP-DO-WITH ANSI-LOOP::LOOP-DO-REPEAT
            ANSI-LOOP::LOOP-CONTEXT ANSI-LOOP::LOOP-ITERATION-DRIVER
            ANSI-LOOP::LOOP-BIND-BLOCK
            ANSI-LOOP::LOOP-GET-COMPOUND-FORM ANSI-LOOP::LOOP-GET-PROGN
            ANSI-LOOP::LOOP-WHEN-IT-VARIABLE ANSI-LOOP::LOOP-DO-NAMED
            ANSI-LOOP::LOOP-DO-INITIALLY)) 
(PROCLAIM
    '(FTYPE (FUNCTION (*) *) ANSI-LOOP::LOOP-DISALLOW-CONDITIONAL
            ANSI-LOOP::LOOP-OPTIONAL-TYPE)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T) *) ANSI-LOOP::NAMED-VARIABLE
            ANSI-LOOP::LOOP-OPTIMIZATION-QUANTITIES
            ANSI-LOOP::LOOP-LIST-STEP)) 
(PROCLAIM
    '(FTYPE (FUNCTION (*) T) ANSI-LOOP::MAKE-LOOP-PATH
            ANSI-LOOP::MAKE-STANDARD-LOOP-UNIVERSE
            ANSI-LOOP::MAKE-LOOP-MINIMAX-INTERNAL
            ANSI-LOOP::LOOP-GENTEMP ANSI-LOOP::MAKE-LOOP-UNIVERSE
            ANSI-LOOP::MAKE-LOOP-COLLECTOR
            ANSI-LOOP::LOOP-EMIT-FINAL-VALUE)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T) T) ANSI-LOOP::LOOP-COLLECTOR-CLASS
            ANSI-LOOP::LOOP-COLLECTOR-HISTORY
            ANSI-LOOP::LOOP-COLLECTOR-TEMPVARS
            ANSI-LOOP::LOOP-COLLECTOR-DTYPE
            ANSI-LOOP::LOOP-COLLECTOR-DATA ANSI-LOOP::LOOP-PATH-NAMES
            ANSI-LOOP::LOOP-LIST-COLLECTION
            ANSI-LOOP::LOOP-PATH-PREPOSITION-GROUPS
            ANSI-LOOP::LOOP-PATH-INCLUSIVE-PERMITTED
            ANSI-LOOP::LOOP-PATH-FUNCTION
            ANSI-LOOP::LOOP-PATH-USER-DATA
            ANSI-LOOP::LOOP-MAXMIN-COLLECTION
            ANSI-LOOP::LOOP-DO-THEREIS USER::MAKE-DEFPACKAGE-FORM
            ANSI-LOOP::LOOP-COLLECTOR-NAME
            ANSI-LOOP::MAKE-ANSI-LOOP-UNIVERSE
            ANSI-LOOP::LOOP-TYPED-INIT ANSI-LOOP::LOOP-MAKE-DESETQ
            ANSI-LOOP::LOOP-MAKE-PSETQ
            ANSI-LOOP::LOOP-CODE-DUPLICATION-THRESHOLD
            ANSI-LOOP::DESTRUCTURING-SIZE
            ANSI-LOOP::SUBST-GENSYMS-FOR-NIL
            ANSI-LOOP::LOOP-HACK-ITERATION ANSI-LOOP::LOOP-PSEUDO-BODY
            ANSI-LOOP::LOOP-CONSTRUCT-RETURN ANSI-LOOP::LOOP-CONSTANTP
            ANSI-LOOP::LOOP-EMIT-BODY
            ANSI-LOOP::LOOP-MINIMAX-ANSWER-VARIABLE
            ANSI-LOOP::LOOP-MINIMAX-TYPE
            ANSI-LOOP::LOOP-MINIMAX-TEMP-VARIABLE
            ANSI-LOOP::LOOP-VARIABLE-P
            ANSI-LOOP::LOOP-MINIMAX-FLAG-VARIABLE
            ANSI-LOOP::LOOP-MINIMAX-OPERATIONS
            ANSI-LOOP::LOOP-MINIMAX-INFINITY-DATA
            ANSI-LOOP::LOOP-UNIVERSE-KEYWORDS
            ANSI-LOOP::LOOP-UNIVERSE-ITERATION-KEYWORDS
            ANSI-LOOP::LOOP-UNIVERSE-FOR-KEYWORDS
            ANSI-LOOP::LOOP-UNIVERSE-PATH-KEYWORDS
            ANSI-LOOP::LOOP-UNIVERSE-TYPE-SYMBOLS
            ANSI-LOOP::LOOP-UNIVERSE-TYPE-KEYWORDS
            ANSI-LOOP::LOOP-UNIVERSE-ANSI
            ANSI-LOOP::LOOP-UNIVERSE-IMPLICIT-FOR-REQUIRED)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T *) *) ANSI-LOOP::LOOP-ERROR
            ANSI-LOOP::LOOP-CONSTANT-FOLD-IF-POSSIBLE)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T) *) ANSI-LOOP::ESTIMATE-CODE-SIZE-1
            ANSI-LOOP::ESTIMATE-CODE-SIZE)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T *) T)
            ANSI-LOOP::LOOP-COLLECT-PREPOSITIONAL-PHRASES
            ANSI-LOOP::LOOP-WARN)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T) T) ANSI-LOOP::LOOP-TASSOC
            ANSI-LOOP::HIDE-VARIABLE-REFERENCES
            ANSI-LOOP::LOOP-DO-ALWAYS ANSI-LOOP::LOOP-DO-WHILE
            ANSI-LOOP::LOOP-DO-IF LISP::KEYWORD-SUPPLIED-P
            LISP::LOOKUP-KEYWORD ANSI-LOOP::LOOP-MAYBE-BIND-FORM
            ANSI-LOOP::LOOP-BUILD-DESTRUCTURING-BINDINGS
            ANSI-LOOP::LOOP-LOOKUP-KEYWORD ANSI-LOOP::LOOP-TMEMBER
            ANSI-LOOP::LOOP-TEQUAL ANSI-LOOP::LOOP-DECLARE-VARIABLE
            ANSI-LOOP::MAKE-LOOP-MINIMAX
            ANSI-LOOP::LOOP-NOTE-MINIMAX-OPERATION)) 