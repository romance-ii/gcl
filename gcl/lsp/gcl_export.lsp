;; Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

;; This file is part of GNU Common Lisp, herein referred to as GCL
;;
;; GCL is free software; you can redistribute it and/or modify it under
;;  the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
;; the Free Software Foundation; either version 2, or (at your option)
;; any later version.
;; 
;; GCL is distributed in the hope that it will be useful, but WITHOUT
;; ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
;; FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
;; License for more details.
;; 
;; You should have received a copy of the GNU Library General Public License 
;; along with GCL; see the file COPYING.  If not, write to the Free Software
;; Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.


;;;;    export.lsp
;;;;
;;;;                    Exporting external symbols of LISP package


(in-package 'lisp)


(export '(

&whole
&environment
&body
*
**
***
*break-enable*
*break-on-warnings*
*features*
*modules*
+
++
+++
-
/
//
///
COMMON
KYOTO
KCL
abs
acos
acosh
adjust-array
adjustable-array-p
apropos
apropos-list
array-dimension
array-dimensions
array-element-type
array-has-fill-pointer-p
array-in-bounds-p
array-rank
array-row-major-index
asin
asinh
assert
atanh
bit
bit-and
bit-andc1
bit-andc2
bit-eqv
bit-ior
bit-nand
bit-nor
bit-not
bit-orc1
bit-orc2
bit-xor
break
byte
byte-position
byte-size
ccase
cerror
check-type
cis
coerce
compile
compile-file
concatenate
cosh
count
count-if
count-if-not
ctypecase
decf
declaim
decode-universal-time
defconstant
define-modify-macro
define-setf-method
defparameter
defsetf
defstruct
deftype
defvar
delete
delete-duplicates
delete-if
delete-if-not
deposit-field
describe
disassemble
do*
do-all-symbols
do-external-symbols
do-symbols
documentation
dolist
dotimes
dpb
dribble
ecase
ed
eighth
encode-universal-time
error
etypecase
eval-when
every
fceiling
ffloor
fifth
fill
fill-pointer
find
find-all-symbols
find-if
find-if-not
first
format
fourth
fround
ftruncate
get-decoded-time
get-setf-method
get-setf-method-multiple-value
get-universal-time
getf
ignore
incf
inspect
intersection
isqrt
ldb
ldb-test
lisp-implementation-type
logandc1
logandc2
lognand
lognor
lognot
logorc1
logorc2
logtest
long-site-name
machine-instance
machine-type
machine-version
make-array
make-sequence
map
mask-field
merge
mismatch
mod
multiple-value-setq
nintersection
ninth
notany
notevery
nset-difference
nset-exclusive-or
nsubstitute
nsubstitute-if
nsubstitute-if-not
nunion
phase
pop
position
position-if
position-if-not
prin1-to-string
princ-to-string
prog*
provide
psetf
push
pushnew
rational
rationalize
real
read-from-string
reduce
rem
remf
remove
remove-duplicates
remove-if
remove-if-not
replace
require
rotatef
room
sbit
search
second
set-difference
set-exclusive-or
setf
seventh
shiftf
short-site-name
signum
sinh
sixth
software-type
software-version
some
sort
stable-sort
step
structure
subsetp
substitute
substitute-if
substitute-if-not
subtypep
tanh
tenth
third
time
trace
type
typecase
typep
union
untrace
variable
vector
vector-pop
vector-push
vector-push-extend
warn
with-input-from-string
with-open-file
with-open-stream
with-output-to-string
write-to-string
y-or-n-p
yes-or-no-p

proclaim
proclamation
special
type
ftype
function
inline
notinline
ignore
optimize
speed
space
safety
compilation-speed
declaration

*eval-when-compile*

clines
defcfun
defentry
defla

void
object
char
int
float
double

))
