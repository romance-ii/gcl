;to-do fast link defentry, sig propagation

(in-package 'lisp)
(export '(string char schar string= string/= string> string>= 
		 string< string<= string-equal string-not-equal
		 string-greaterp string-not-lessp string-lessp
		 string-not-greaterp  char-code  code-char  char-upcase
		 char-downcase  char=  char/=  char>  char>=  char<
		 char<=  char-equal  char-not-equal  char-greaterp
		 char-lessp  char-not-greaterp  char-not-lessp
		 upper-case-p  lower-case-p  both-case-p
		 string-upcase string-downcase nstring-upcase nstring-downcase
		 string-trim string-left-trim string-right-trim))

(in-package 'si)
(defCfun "object char_to_string(char c)" 0 "{ object x;char s[2];s[0]=1;s[1]=0;x=make_simple_string(s);x->st.st_self[0]=c;return(x);}")
(defentry char-to-string (char) (object char_to_string))
(declaim (ftype (function (t) string) char-to-string))
(add-hash 'char-to-string '((t) string) nil nil nil)

(defun string (x)
  (declare (optimize (safety 1)))
  (etypecase 
   x
   (string x)
   (symbol (symbol-name x))
   (character (char-to-string x))
   ((integer 0 255) (char-to-string x))))


(defun char (x i)
  (declare (optimize (safety 1)))
  (check-type x string)
  (check-type i seqind)
  (aref x i))

;FIXME one function
(defun schar (x i)
  (declare (optimize (safety 1)))
  (check-type x simple-string)
  (check-type i seqind)
  (aref x i))

(defmacro defstr1 (n case copy)
  `(defun ,n (s &key (start 0) end)
     (declare (optimize (safety 1)))
     (check-type start seqind)
     (check-type end (or null seqind))
     (let* ((s (string s))
	    (end (or end (length s)))
	    (n (,copy s)))
       (do ((i start (1+ i))) ((>= i end) n)
	   (setf (aref n i) (,case (aref s i)))))))

(defstr1  string-upcase   char-upcase   copy-seq)
(defstr1  string-downcase char-downcase copy-seq)
(defstr1 nstring-upcase   char-upcase   identity)
(defstr1 nstring-downcase char-downcase identity)


(defmacro defstr (name (s1 s2) = &body body)
  `(defun ,name (,s1 ,s2  &key (start1 0) end1 (start2 0) end2)
     (declare (optimize (safety 1)))
     (check-type start1 seqind)
     (check-type end1 (or null seqind))
     (check-type start2 seqind)
     (check-type end2 (or null seqind))
     (let* ((s1 (string s1));fixme symbol direct
	    (s2 (string s2))
	    (end1 (or end1 (length s1)))
	    (end2 (or end2 (length s2))))
       (do ((i1 start1 (1+ i1))
	    (i2 start2 (1+ i2)))
	   ((or (>= i1 end1) (>= i2 end2) (not (,= (aref ,s1 i1) (aref ,s2 i2))))
	    ,@body)))))



(defstr string= (s1 s2) char=
  (and (>= i1 end1) (>= i2 end2)))

(defstr string/= (s1 s2) char=
  (unless (and (>= i1 end1) (>= i2 end2)) i1))

(defstr string> (s1 s2) char=
  (cond ((>= i1 end1) nil)
	((>= i2 end2) i1)
	((char> (aref s1 i1) (aref s2 i2)) i1)))

(defstr string>= (s1 s2) char=
  (cond ((>= i2 end2) i1)
	((>= i1 end1) nil)
	((char> (aref s1 i1) (aref s2 i2)) i1)))
  

(defstr string< (s1 s2) char=
  (cond ((>= i2 end2) nil)
	((>= i1 end1) i1)
	((char< (aref s1 i1) (aref s2 i2)) i1)))

(defstr string<= (s1 s2) char=
  (cond ((>= i1 end1) i1)
	((>= i2 end2) nil)
	((char< (aref s1 i1) (aref s2 i2)) i1)))


(defstr string-equal (s1 s2) char-equal
  (and (>= i1 end1) (>= i2 end2)))

(defstr string-not-equal (s1 s2) char-equal
  (unless (and (>= i1 end1) (>= i2 end2)) i1))

(defstr string-greaterp (s1 s2) char-equal
  (cond ((>= i1 end1) nil)
	((>= i2 end2) i1)
	((char-greaterp (aref s1 i1) (aref s2 i2)) i1)))

(defstr string-not-lessp (s1 s2) char-equal
  (cond ((>= i2 end2) i1)
	((>= i1 end1) nil)
	((char-greaterp (aref s1 i1) (aref s2 i2)) i1)))
  

(defstr string-lessp (s1 s2) char-equal
  (cond ((>= i2 end2) nil)
	((>= i1 end1) i1)
	((char-lessp (aref s1 i1) (aref s2 i2)) i1)))

(defstr string-not-greaterp (s1 s2) char-equal
  (cond ((>= i1 end1) i1)
	((>= i2 end2) nil)
	((char-lessp (aref s1 i1) (aref s2 i2)) i1)))


(push '((character) unsigned-char #.(compiler::flags compiler::rfa) "(#0)") 
      (get 'char-code-int 'compiler::inline-always));FIXME
(defun char-code-int (c)
 (let ((b #.(- (1- (integer-length (- (address #\^A) (address #\^@)))))))
  (the unsigned-char (ash (the seqind (- (address c) (load-time-value (address #\^@)))) b))))

(defun char-code (c)
  (declare (optimize (safety 1)))
  (check-type c character)
  (char-code-int c))

;; (defun char-code (c)
;;   (declare (optimize (safety 1)))
;;   (check-type c character)
;;   (ash (the unsigned-char (- (si::address c) #.(si::address #\^@))) -3))

(defun code-char (d)
  (declare (optimize (safety 1)))
  (check-type d unsigned-char)
  (let ((b #.(1- (integer-length (- (address #\^A) (address #\^@))))))
   (the character (nani (+ (load-time-value (address #\^@)) (ash d b))))))




(defun upper-case-p (c)
  (declare (optimize (safety 1)))
  (check-type c character)
  (let ((c (char-code c)))
    (>= #.(char-code #\Z) c #.(char-code #\A))))

(defun lower-case-p (c)
  (declare (optimize (safety 1)))
  (check-type c character)
  (let ((c (char-code c)))
    (>= #.(char-code #\z) c #.(char-code #\a))))

(defun both-case-p (c)
  (declare (optimize (safety 1)))
  (check-type c character)
  (let ((c (char-code c)))
    (or (>= #.(char-code #\Z) c #.(char-code #\A))
	(>= #.(char-code #\z) c #.(char-code #\a)))))

(defun char-upcase (c)
  (declare (optimize (safety 1)))
  (check-type c character)
  (if (lower-case-p c)
      (code-char (+ (char-code c) #.(- (char-code #\A) (char-code #\a))))
    c))


(defun char-downcase (c)
  (declare (optimize (safety 1)))
  (check-type c character)
  (if (upper-case-p c)
      (code-char (+ (char-code c) #.(- (char-code #\a) (char-code #\A))))
    c))

(defmacro defchr (n (comp key))
  `(defun ,n (c1 &optional (c2 c1 c2p) &rest r) 
     (declare (optimize (safety 1)) (list r) (:dynamic-extent r));fixme
     (check-type c1 character)
     (or (not c2p)
	 (when (,comp (,key c1) (,key c2))
	   (or (null r) (apply ',n c2 r))))))

(defchr char= (= char-code))
(defchr char> (> char-code))
(defchr char>= (>= char-code))
(defchr char< (< char-code))
(defchr char<= (<= char-code))

(defchr char-equal (char= char-upcase))
(defchr char-greaterp (char> char-upcase))
(defchr char-lessp (char< char-upcase))
(defchr char-not-greaterp (char<= char-upcase))
(defchr char-not-lessp (char>= char-upcase))


(defmacro defnchr (n (test key))
  `(defun ,n (c1 &rest r) 
     (declare (optimize (safety 1)) (list r) (:dynamic-extent r));fixme
     (check-type c1 character)
     (cond ((null r))
	   ((member (,key c1) r :test ',test :key ',key) nil)
	   ((apply ',n r)))))

(defnchr char/= (= char-code))
(defnchr char-not-equal (char-equal identity))

(defun string-left-trim (b s)
  (declare (optimize (safety 1)))
  (check-type b sequence)
  (let ((s (string s)))
    (do ((l (length s))
	 (i 0 (1+ i)))
	((or (>= i l) (not (find (aref s i) b)))
	 (if (= i 0) s (subseq s i))))))
      

(defun string-right-trim (b s)
  (declare (optimize (safety 1)))
  (check-type b sequence)
  (let* ((s (string s))
	 (l (length s)))
    (do ((i (1- l) (1- i)))
	((or (< i 0) (not (find (aref s i) b)))
	 (if (= i l) s (subseq s 0 (1+ i)))))))

(defun string-trim (b s)
  (declare (optimize (safety 1)))
  (check-type b sequence)
  (let* ((s (string s))
	 (l (length s)))
    (do ((i 0 (1+ i)))
	((or (>= i l) (not (find (aref s i) b)))
	 (do ((j (1- l) (1- j)))
	     ((or (< j i) (not (find (aref s j) b)))
	      (if (and (= i 0) (= j l)) s (subseq s i (1+ j)))))))))

