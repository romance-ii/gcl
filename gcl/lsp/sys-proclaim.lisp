
(IN-PACKAGE "SYSTEM") 
(PROCLAIM
    '(FTYPE (FUNCTION (FIXNUM T T *) T) check-type-symbol))
(PROCLAIM
    '(FTYPE (FUNCTION () T) lexical-binding-environment))
(PROCLAIM
    '(FTYPE (FUNCTION (T T SEQIND T) T) prune-type))
(PROCLAIM
    '(FTYPE (FUNCTION (SEQIND T) T) SMALLNTHCDR))
(PROCLAIM
    '(FTYPE (FUNCTION (T SEQIND T T) T) BIGNTHCDR))
(PROCLAIM
    '(FTYPE (FUNCTION (T) FIXNUM) INSTREAM-LINE S-DATA-SIZE
            S-DATA-LENGTH THE-START)) 
(PROCLAIM '(FTYPE (FUNCTION (T FIXNUM FIXNUM T T) T) QUICK-SORT)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T) FIXNUM) GET-NODE-INDEX RELATIVE-LINE
            THE-END)) 
(PROCLAIM
    '(FTYPE (FUNCTION ((VECTOR CHARACTER)) T) COERCE-SLASH-TERMINATED
            RESET-SYS-PATHS)) 
(PROCLAIM
    '(FTYPE (FUNCTION ((VECTOR CHARACTER) *) *) GET-COMMAND-ARG)) 
(PROCLAIM '(FTYPE (FUNCTION (FIXNUM) FIXNUM) DBL-WHAT-FRAME)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T *) *) SLOOP::FIND-IN-ORDERED-LIST SUBTYPEP)) 
(PROCLAIM '(FTYPE (FUNCTION (FIXNUM FIXNUM) FIXNUM) ROUND-UP)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T *) T) SLOOP::LOOP-ADD-BINDING SORT
            POSITION-IF-NOT POSITION-IF POSITION COUNT-IF-NOT COUNT-IF
            COUNT SOME NOTEVERY NOTANY NSET-EXCLUSIVE-OR
            NSET-DIFFERENCE-REV NSET-DIFFERENCE BREAK-CALL
            SLOOP::IN-ARRAY-SLOOP-FOR SLOOP::PARSE-LOOP-MACRO
            INTERNAL-COUNT-IF-NOT INTERNAL-COUNT-IF INTERNAL-COUNT
            EVERY UNION INTERSECTION SEARCH REMOVE-IF-NOT REMOVE-IF
            REMOVE REPLACE REDUCE MAP-INTO MISMATCH FIND-IF-NOT FIND-IF
            FIND DELETE-IF-NOT FILL DELETE-IF DELETE MAKE-SEQUENCE
            RANGE-OR RANGE-AND TYPEP SUBSETP SET-EXCLUSIVE-OR
            SET-DIFFERENCE-REV SET-DIFFERENCE NINTERSECTION NUNION
            SET-PPRINT-DISPATCH VECTOR-PUSH-EXTEND BIT-ORC2 BIT-ORC1
            BIT-ANDC2 BIT-ANDC1 BIT-NOR BIT-NAND BIT-EQV BIT-XOR
            BIT-IOR BIT-AND STABLE-SORT ADJUST-ARRAY)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T) *) READ-INSPECT-COMMAND SHARP-S-READER)) 
(PROCLAIM '(FTYPE (FUNCTION (T T T T T T T) *) TRACE-CALL)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T) T) copy-tree-int copy-list-int
            SLOOP::LOOP-PARSE-ADDITIONAL-COLLECTIONS CONS-OP COMPLEX-OP
            ARRAY-OP SETF-EXPAND-1 LIST-MERGE-SORT WARN-VERSION
            SINGLE-OP RANGE-OP DEPOSIT-FIELD KEY-LIST MAKE-T-TYPE
            GET-SLOT-POS DM-VL DEFMACRO* MAKE-BREAK-POINT
            TYPECASE-ERROR-STRING CHECK-TRACE-ARGS STANDARD-OP
            STRUCTURE-OP ELOUT ELIN DPB SHARP-A-READER SHARP-U-READER
            CHECK-S-DATA APPLY-DISPLAY-FUN)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T *) T) SLOOP::LOOP-DECLARE-BINDING
            NSUBSTITUTE-IF-NOT NSUBSTITUTE-IF NSUBSTITUTE COMPLETE-PROP
            SUBSTITUTE-IF-NOT SUBSTITUTE-IF SUBSTITUTE MAP CLEAN-TP)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T T) T) make-sequence-vector SLOOP::FIRST-SLOOP-FOR
            SLOOP::FIRST-USE-SLOOP-FOR SETF-STRUCTURE-ACCESS
            MAKE-UPDATE-FORM CALL-TEST MAYBE-BREAK FIND-LINE-IN-FUN)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T T T T T T T T T T T *) T)
            DEFINE-STRUCTURE)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T T T T T T T T T T *) T)
            MAKE-ACCESS-FUNCTION)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T T T) T) PRINT-UNREADABLE-OBJECT-FUNCTION
            SIGALG-ATOM-OP SIGALG-OP MAKE-PREDICATE MAKE-CONSTRUCTOR)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T T *) T) PRINT-STACK-FRAME
            SLOOP::DEF-LOOP-INTERNAL MERGE)) 
(PROCLAIM '(FTYPE (FUNCTION (T T T T T T *) T) ENCODE-UNIVERSAL-TIME)) 
(PROCLAIM '(FTYPE (FUNCTION (T T T T T *) T) UNIVERSAL-ERROR-HANDLER)) 
(PROCLAIM
    '(FTYPE (FUNCTION NIL *) BREAK-CURRENT BREAK-MESSAGE
            SIMPLE-BACKTRACE)) 
(PROCLAIM
    '(FTYPE (FUNCTION ((VECTOR CHARACTER) FIXNUM) FIXNUM) ATOI)) 
(PROCLAIM
    '(FTYPE (FUNCTION NIL T) TOP-LEVEL SLOOP::LOOP-PEEK
            SLOOP::LOOP-UN-POP SLOOP::LOOP-POP BREAK-HELP
            SET-UP-TOP-LEVEL SET-ENV SET-CURRENT SLOOP::PARSE-LOOP-FOR
            SLOOP::PARSE-LOOP-COLLECT SLOOP::PARSE-LOOP-WHEN
            SLOOP::PARSE-ONE-WHEN-CLAUSE SLOOP::PARSE-LOOP-DO
            SLOOP::PARSE-LOOP1 INSPECT-INDENT-1 INSPECT-INDENT
            INSPECT-READ-LINE INIT-BREAK-POINTS DBL TEST-ERROR
            LISP-IMPLEMENTATION-VERSION DEFAULT-SYSTEM-BANNER
            GET-INDEX-NODE DEFAULT-INFO-HOTLIST DM-TOO-MANY-ARGUMENTS
            DM-TOO-FEW-ARGUMENTS SETUP-LINEINFO STEP-READ-LINE
            ALL-TRACE-DECLARATIONS SLOOP::SLOOP-TYPE-ERROR CLEANUP)) 
(PROCLAIM
    '(FTYPE (FUNCTION (*) *) LOC BREAK-BDS BREAK-LOCAL BREAK-VS
            BREAK-NEXT BREAK-PREVIOUS BREAK-QUIT SERROR::INF-SIGNAL
            INFO-ERROR DBL-BACKTRACE IHS-BACKTRACE
            SHOW-BREAK-VARIABLES)) 
(PROCLAIM
    '(FTYPE (FUNCTION (*) T) MAYBE-CLEAR-INPUT COPY-PPRINT-DISPATCH DBL-READ BREAK
            DESCRIBE-ENVIRONMENT SLOOP::PARSE-LOOP-DECLARE
            SLOOP::PARSE-LOOP-WITH DRIBBLE BREAK-LOCALS
            SERROR::MAKE-ERROR-CONDITION YES-OR-NO-P Y-OR-N-P
            MAKE-S-DATA MAKE-INSTREAM VECTOR CURRENT-STEP-FUN NTP-OR
            NTP-AND STEP-NEXT STEP-INTO)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T) *) BREAK-GO PRINC-TO-STRING PRIN1-TO-STRING
            INFO-SUBFILE END-WAITING INSPECT INSPECT-OBJECT
            INSTREAM-NAME WAITING DESCRIBE FIND-DECLARATIONS
            GET-&ENVIRONMENT IHS-FNAME ALOAD)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T *) *) FCEILING FROUND FFLOOR WRITE-TO-STRING
            ENSURE-DIRECTORIES-EXIST INFO PRINT-DOC BREAK-FUNCTION
            GET-SETF-METHOD-MULTIPLE-VALUE GET-SETF-METHOD
            DECODE-UNIVERSAL-TIME READ-FROM-STRING STEPPER 
            FTRUNCATE PPRINT-DISPATCH SHOW-INFO NLOAD APROPOS-DOC)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T) T) copy-list copy-tree seqindp proper-listp sequencep short-float-p long-float-p ratiop
	    first second third fourth fifth sixth seventh eighth ninth tenth
	    improper-consp TYPE-OF CLASS-OF NON-LOGICAL-PATHNAME-P DO-F SLOOP::POINTER-FOR-COLLECT
	    sequence-type-element-type  sequence-type-element-type-int
	    sequence-type-length-type sequence-type-length-type-int
            SLOOP::LOOP-LET-BINDINGS SLOOP::LOOP-COLLECT-KEYWORD-P
            SERROR::|TOO-MANY-ARGUMENTS-tester|
            SERROR::|TOO-FEW-ARGUMENTS-tester| COERCE-TO-STANDARD-CLASS
            NON-STANDARD-BASE-CHAR-P NON-KEYWORD-SYMBOL-P
            IS-STANDARD-CLASS-SYMBOL CONS-RECON CONS-TO-NIL CONS-ATM
            COMPLEX-RECON LOGNOT ISQRT ACOSH ASINH COSH ACOS ASIN
            COMPLEMENT CONSTANTLY COMPILE-FILE-PATHNAME
            LOAD-LOGICAL-PATHNAME-TRANSLATIONS
            LOGICAL-PATHNAME-TRANSLATIONS NODE-OFFSET NODES-FROM-INDEX
            COMPUTING-ARGS-P DWIM BKPT-FUNCTION BKPT-FILE-LINE
            BKPT-FILE BKPT-FORM BOIN-P ASK-FOR-FORM UNTRACE-ONE
            TRACE-ONE TRACE-ONE-PREPROCESS RESET-TRACE-DECLARATIONS
            BREAK-FORWARD-SEARCH-STACK BREAK-BACKWARD-SEARCH-STACK
            PRINT-FRS PRINT-IHS PROCESS-SOME-ARGS FRS-KIND
            TERMINAL-INTERRUPT FIX-LOAD-PATH SLOOP::TRANSLATE-NAME
            SLOOP::AVERAGING-SLOOP-MACRO SLOOP::RETURN-SLOOP-MACRO
            SLOOP::REPEAT-SLOOP-MACRO SLOOP::SUBSTITUTE-SLOOP-BODY
            SLOOP::PARSE-LOOP-INITIALLY SLOOP::PARSE-NO-BODY
            SLOOP::PARSE-LOOP SERROR::|UNDEFINED-FUNCTION-tester|
            SERROR::|UNBOUND-VARIABLE-tester|
            SERROR::|WRONG-TYPE-ARGUMENT-tester|
            SERROR::|UNEXPECTED-KEYWORD-tester|
            SERROR::|INVALID-FUNCTION-tester|
            SERROR::|INVALID-VARIABLE-tester|
            SERROR::|INVALID-FORM-tester| SERROR::|ERROR-tester|
            SERROR::ERROR-CONDITION-P SERROR::ERROR-ERROR-HANDLER-ARGS
            SERROR:ERROR-FORMAT-ARGS SERROR:ERROR-CONTINUE-STRING
            SERROR::ERROR-FUNCTION SERROR:ERROR-STRING
            SERROR:ERROR-NAME NRECONSTRUCT-TYPE NRECONSTRUCT-TYPE-INT INTERPRETED-FUNCTION-P
            ARRAY-RECON ARRAY-ATM PRINT-SYMBOL-APROPOS ABS PROVIDE
            INFO-NODE-FROM-POSITION INFO-GET-FILE INFO-GET-TAGS
            INSPECT-STRUCTURE INSPECT-ARRAY INSPECT-VECTOR
            INSPECT-STRING INSPECT-CONS INSPECT-NUMBER
            INSPECT-CHARACTER INSPECT-PACKAGE INSPECT-SYMBOL
            FREEZE-DEFSTRUCT INSERT-BREAK-POINT INSTREAM-P
            INSTREAM-STREAM-NAME INSTREAM-STREAM ARRAY-DIMENSIONS
            SERROR::|SUBSCRIPT-OUT-OF-BOUNDS-tester| SEQTYPE
            SINGLE-RECON SINGLE-ATM RANGE-RECON SIMPLE-ARRAY-P
            RESOLVE-TYPE FIND-STANDARD-CLASS FUNCTION-IDENTIFIERP
            DISTRIBUTE-COMPLEX BASE-CHAR-P FIND-ALL-SYMBOLS TANH SINH
            SIGNUM RATIONAL BYTE-POSITION BYTE-SIZE CIS
            FIND-DOCUMENTATION NUMBER-OF-DAYS-FROM-1900 LEAP-YEAR-P
            SEARCH-LIST-DEFINED-P SEARCH-LIST
            VIRTUAL-PATHNAME-SEARCHLIST DEVICE-PATHNAME-SEARCHLIST
            SETUP-INFO RE-QUOTE-STRING S-DATA-P S-DATA-CONC-NAME
            S-DATA-TYPE S-DATA-NAMED S-DATA-OFFSET S-DATA-CONSTRUCTORS
            S-DATA-DOCUMENTATION S-DATA-FROZEN S-DATA-HAS-HOLES
            S-DATA-SLOT-POSITION S-DATA-SLOT-DESCRIPTIONS
            S-DATA-PRINT-FUNCTION S-DATA-STATICP S-DATA-INCLUDES
            S-DATA-INCLUDED S-DATA-RAW S-DATA-NAME DM-KEY-NOT-ALLOWED
            DM-BAD-KEY WALK-THROUGH SEARCH-STACK NEXT-STACK-FRAME
            GET-NEXT-VISIBLE-FUN GET-INSTREAM TYPECASE-ERROR-STRINGS
            VECTOR-POP BEST-ARRAY-ELEMENT-TYPE CHECK-DECLARATIONS
            CHECK-TRACE-SPEC IHS-NOT-INTERPRETED-ENV IHS-VISIBLE
            SLOOP::SLOOP-SLOOP-MACRO SERROR::|WTA-tester| CLASS-NAME
            NTP-TO-NIL STANDARD-RECON STANDARD-ATM STRUCTURE-RECON
            STRUCTURE-ATM NTP-LOAD NTP-CLEAN NTP-NOT NPROCESS-TYPE
            CLASS-PRECEDENCE-LIST CLASSP EXTENDED-CHAR-P PHASE ATANH
            CLEAR-SEARCH-LIST IDESCRIBE SHOW-BREAK-POINT SHORT-NAME
            SHOW-ENVIRONMENT ADD-TO-HOTLIST)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T *) T) SLOOP::LOOP-ADD-TEMPS CONCATENATE
            NORMALIZE-TYPE BREAK-LEVEL WARN FILE-SEARCH
            INTEGER-RANGE-FIXUP INFO-SEARCH SBIT ARRAY-ROW-MAJOR-INDEX
            ARRAY-IN-BOUNDS-P REMOVE-DUPLICATES DELETE-DUPLICATES
            BAD-SEQ-LIMIT RANGE-NOT FIND-CLASS REQUIRE LIST-MATCHES
            FILE-TO-STRING MAYBE-CONS-KEYNAME BIT-NOT MAKE-ARRAY BIT
            SLOOP::ADD-FROM-DATA UPGRADED-ARRAY-ELEMENT-TYPE
            UPGRADED-COMPLEX-PART-TYPE APROPOS-LIST NTH-STACK-FRAME)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T) *) FIND-DOC NEW-SEMI-COLON-READER NEWLINE)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T) T) tp-error nthcdr nth tp-mod improper-consp-int ordered-intersection 
	    ordered-intersection-eq subtypep1 copy-type SLOOP::LOGXOR-SLOOP-COLLECT
            SLOOP::COLLATE-SLOOP-COLLECT SLOOP::COUNT-SLOOP-COLLECT
            NORMALIZE-TYPE-INT CONS^ CONS-LOAD COMPLEX-LOAD COERCE
            LOGTEST LOGORC2 LOGORC1 LOGANDC2 LOGANDC1 LOGNOR LOGNAND
            DOCUMENTATION COMPILER::COMPILER-DEF-HOOK
            (SETF FDEFINITION) SET-DIR SUPER-GO LIST-DELQ
            AUTOLOAD-MACRO SLOOP::IN-FRINGE-SLOOP-MAP
            SLOOP::IN-CAREFULLY-SLOOP-FOR SLOOP::IN-PACKAGE-SLOOP-MAP
            SLOOP::IN-TABLE-SLOOP-MAP SLOOP::NEVER-SLOOP-COLLECT
            SLOOP::SUM-SLOOP-COLLECT SLOOP::PARSE-LOOP-MAP
            SLOOP::MINIMIZE-SLOOP-COLLECT SLOOP::MAXIMIZE-SLOOP-COLLECT
            SLOOP::MAKE-VALUE IN-INTERVAL-P ARRAY^ ARRAY-LOAD OBJLT
            INFO-AUX OVERWRITE-SLOT-DESCRIPTIONS DBL-UP
            INCREMENT-CURSOR BREAK-STEP-NEXT BREAK-STEP-INTO
            SLOOP::L-EQUAL SLOOP::DESETQ1 SETF-HELPER SETF-EXPAND
            *BREAK-POINTS* SINGLE^ SINGLE-LOAD RANGE-LOAD TYPEP-INT
            MEMBER- MEMBERV NUMBER-RANGE-FIXUP MAYBE-OR-PUSH
            MATCH-DIMENSIONS IMOD SUBSTRINGP MASK-FIELD BYTE
            SET-SEARCH-LIST SET-DEVICE-PATHNAME-SEARCHLIST
            SET-VIRTUAL-PATHNAME-SEARCHLIST
            SET-LOGICAL-PATHNAME-TRANSLATIONS MAP-SEARCH-LIST
            MAP-PATHNAME-SEARCHLIST MAP-PATHNAME-TRANSLATIONS
            FILE-STRING-LENGTH GET-INFO-CHOICES GET-NODES GET-MATCH
            PARSE-SLOT-DESCRIPTION PARSE-BOA-LAMBDA-LIST DM-NTH-CDR
            DM-NTH DM-V SET-BACK SAFE-EVAL QUOTATION-READER
            LEFT-PARENTHESIS-READER GET-LINE-OF-FORM VECTOR-PUSH
            SEQUENCE-CURSOR DISPLAY-COMPILED-ENV DISPLAY-ENV AUTOLOAD
            SLOOP::=-SLOOP-FOR SLOOP::THEREIS-SLOOP-COLLECT
            SLOOP::THE-TYPE SLOOP::ALWAYS-SLOOP-COLLECT
            CHECK-SEQ-START-END STANDARD^ STANDARD-LOAD STRUCTURE^
            STRUCTURE-LOAD ELGT CLEAN-AND CLEAN-OR LDB-TEST LDB
            ADD-FILE ALL-MATCHES ITERATE-OVER-BKPTS)) 