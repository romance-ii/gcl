; 29 Oct 1994 14:39:13
; drawtrans.lsp  -- translation of draw.lsp       Gordon S. Novak Jr.

; Copyright (c) 1994 Gordon S. Novak Jr. and The University of Texas at Austin.

; See the file gnu.license .

; This program is free software; you can redistribute it and/or modify
; it under the terms of the GNU General Public License as published by
; the Free Software Foundation; either version 1, or (at your option)
; any later version.

; This program is distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
; GNU General Public License for more details.

; You should have received a copy of the GNU General Public License
; along with this program; if not, write to the Free Software
; Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

; Written by: Gordon S. Novak Jr., Department of Computer Sciences,
; University of Texas at Austin  78712.    novak@cs.utexas.edu


(IN-PACKAGE :USER)

(defmacro while (test &rest forms) `(loop (unless ,test (return)) ,@forms) )

(defmacro nconc1 (lst x) `(nconc ,lst (cons ,x nil)))

(defmacro glmethod (class selector)
  `(cadr (assoc ,selector (getf (cdr (get ,class 'glstructure)) 'msg))) )

(IN-PACKAGE :USER)

(SETF (GET 'MENU-SET 'GLSTRUCTURE)
      '((LISTOBJECT (WINDOW WINDOW) (MENU-ITEMS (LISTOF MENU-SET-ITEM))
            (COMMANDFN ANYTHING))
        MSG
        ((DRAW MENU-SET-DRAW) (SELECT MENU-SET-SELECT)
         (NAMED-MENU MENU-SET-NAMED-MENU)
         (NAMED-ITEM MENU-SET-NAMED-ITEM) (ADD-MENU MENU-SET-ADD-MENU)
         (ADD-PICMENU MENU-SET-ADD-PICMENU)
         (ADD-COMPONENT MENU-SET-ADD-COMPONENT)
         (ADD-BARMENU MENU-SET-ADD-BARMENU)
         (ADD-ITEM MENU-SET-ADD-ITEM) (FIND-ITEM MENU-SET-FIND-ITEM)
         (DELETE-ITEM MENU-SET-DELETE-ITEM)
         (REMOVE-ITEMS MENU-SET-REMOVE-ITEMS)
         (ITEM-POSITION MENU-SET-ITEM-POSITION)
         (ADJUST MENU-SET-ADJUST) (MOVE MENU-SET-MOVE)
         (DRAW-CONN MENU-SET-DRAW-CONN))))
(SETF (GET 'MENU-SET-ITEM 'GLSTRUCTURE)
      '((LIST (MENU-NAME SYMBOL) (SYM ANYTHING) (MENU MENU-SET-MENU))
        PROP
        ((LEFT ((PARENT-OFFSET-X MENU)))
         (BOTTOM ((PARENT-OFFSET-Y MENU)))
         (WIDTH ((PICTURE-WIDTH MENU)))
         (HEIGHT ((PICTURE-HEIGHT MENU))))
        SUPERS (REGION)))
(SETF (GET 'MENU-SET-MENU 'GLSTRUCTURE)
      '((TRANSPARENT MENU) MSG ((DRAW MENU-MDRAW))))
(SETF (GET 'MENU-PORT 'GLSTRUCTURE)
      '((LIST (PORT SYMBOL) (MENU-NAME SYMBOL))))
(SETF (GET 'MENU-SET-CONN 'GLSTRUCTURE)
      '((LIST (FROM MENU-PORT) (TO MENU-PORT))))
(SETF (GET 'MENU-CONNS 'GLSTRUCTURE)
      '((LISTOBJECT (MENU-SET MENU-SET)
            (CONNECTIONS (LISTOF MENU-SET-CONN)))
        PROP ((WINDOW ((WINDOW (MENU-SET SELF))))) MSG
        ((DRAW MENU-CONNS-DRAW) (REDRAW MENU-CONNS-REDRAW)
         (MOVE MENU-CONNS-MOVE) (ADD-CONN MENU-CONNS-ADD-CONN)
         (ADD-ITEM MENU-CONNS-ADD-ITEM OPEN T)
         (FIND-CONN MENU-CONNS-FIND-CONN)
         (FIND-ITEM MENU-CONNS-FIND-ITEM)
         (DELETE-ITEM MENU-CONNS-DELETE-ITEM)
         (DELETE-CONN MENU-CONNS-DELETE-CONN)
         (REMOVE-ITEMS MENU-CONNS-REMOVE-ITEMS)
         (FIND-CONNS MENU-CONNS-FIND-CONNS)
         (CONNECTED-PORTS MENU-CONNS-CONNECTED-PORTS)
         (NAMED-MENU MENU-CONNS-NAMED-MENU))))


(DEFUN MENU-SET-CREATE (W &OPTIONAL FN) (LIST 'MENU-SET W NIL FN))
(SETF (GET 'MENU-SET-CREATE 'GLFNRESULTTYPE) 'MENU-SET)


(DEFUN MENU-SET-SELECT (MS &OPTIONAL REDRAW ENABLED)
  (LET (RES RESB ITM SEL LASTX LASTY)
    (IF REDRAW (MENU-SET-DRAW MS))
    (TAGBODY
      GLLABEL4237
      (UNLESS (OR RES RESB)
        (SETQ ITM
              (WINDOW-TRACK-MOUSE (CADR MS)
                  #'(LAMBDA (X Y CODE)
                      (OR (AND (PLUSP CODE) (SETQ LASTX X)
                               (SETQ LASTY Y) CODE)
                          (FIND-IF #'(LAMBDA (GLVAR4236)
                                       (AND
                                        (>= X
                                         (FIFTH (CADDR GLVAR4236)))
                                        (<= X
                                         (+ (FIFTH (CADDR GLVAR4236))
                                          (SEVENTH (CADDR GLVAR4236))))
                                        (>= Y
                                         (SIXTH (CADDR GLVAR4236)))
                                        (<= Y
                                         (+ (SIXTH (CADDR GLVAR4236))
                                          (EIGHTH (CADDR GLVAR4236))))))
                                   (CADDR MS))))))
        (IF (NUMBERP ITM)
            (SETQ RESB (LIST 'BACKGROUND (LIST LASTX LASTY) ITM))
            (WHEN (OR (ATOM ENABLED) (MEMBER (CAR ITM) ENABLED))
              (SETQ SEL (MENU-MSELECT (CADDR ITM) (EQ ENABLED T)))
              (IF SEL (SETQ RES (LIST SEL (CAR ITM)))
                  (UNLESS (ZEROP *WINDOW-MENU-CODE*)
                    (SETQ RES (LIST NIL (CAR ITM)))))))
        (GO GLLABEL4237)))
    (XFLUSH *WINDOW-DISPLAY*)
    (OR RES RESB)))
(SETF (GET 'MENU-SET-SELECT 'GLFNRESULTTYPE) 'MENU-PORT)


(DEFUN MENU-SET-ADD-MENU (MS NAME SYM TITLE ITEMS &OPTIONAL OFFSET)
  (LET (MENU)
    (SETQ MENU
          (MENU-CREATE ITEMS TITLE (CADR MS) (CAR OFFSET) (CADR OFFSET)
              T T))
    (MENU-INIT MENU)
    (UNLESS OFFSET
      (SETQ OFFSET
            (WINDOW-GET-BOX-POSITION (CADR MS) (SEVENTH MENU)
                (EIGHTH MENU))))
    (SETF (FIFTH MENU) (CAR OFFSET))
    (SETF (SIXTH MENU) (CADR OFFSET))
    (MENU-SET-ADD-ITEM MS NAME SYM MENU)))
(SETF (GET 'MENU-SET-ADD-MENU 'GLFNRESULTTYPE) '(LISTOF MENU-SET-ITEM))


(DEFUN MENU-SET-ADD-ITEM (MS NAME SYM MENU)
  (SETF (CADDR MS) (NCONC (CADDR MS) (CONS (LIST NAME SYM MENU) NIL))))
(SETF (GET 'MENU-SET-ADD-ITEM 'GLFNRESULTTYPE) '(LISTOF MENU-SET-ITEM))


(DEFUN MENU-SET-REMOVE-ITEMS (MS) (SETF (CADDR MS) NIL))
(SETF (GET 'MENU-SET-REMOVE-ITEMS 'GLFNRESULTTYPE)
      '(LISTOF MENU-SET-ITEM))


(DEFUN MENU-SET-ADD-PICMENU
       (MS NAME SYM TITLE SPEC &OPTIONAL OFFSET NOBOX)
  (LET (MENU MAXWIDTH MAXHEIGHT)
    (IF (SYMBOLP SPEC) (SETQ SPEC (GET SPEC 'PICMENU-SPEC)))
    (SETQ MENU
          (PICMENU-CREATE-FROM-SPEC SPEC TITLE (CADR MS) (CAR OFFSET)
              (CADR OFFSET) T T (NOT NOBOX)))
    (SETQ MAXWIDTH
          (MAX (IF TITLE (+ 6 (* 9 (LENGTH TITLE))) 0) (CADR SPEC)))
    (SETQ MAXHEIGHT (+ (IF TITLE 15 0) (CADDR SPEC)))
    (UNLESS OFFSET
      (SETQ OFFSET
            (WINDOW-GET-BOX-POSITION (CADR MS) MAXWIDTH MAXHEIGHT)))
    (SETF (FIFTH MENU) (CAR OFFSET))
    (SETF (SIXTH MENU) (CADR OFFSET))
    (MENU-SET-ADD-ITEM MS NAME SYM MENU)))
(SETF (GET 'MENU-SET-ADD-PICMENU 'GLFNRESULTTYPE)
      '(LISTOF MENU-SET-ITEM))


(DEFUN MENU-SET-ADD-COMPONENT (MS NAME &OPTIONAL OFFSET)
  (MENU-SET-ADD-PICMENU MS (MENU-SET-NAME NAME) NAME NIL NAME OFFSET T))
(SETF (GET 'MENU-SET-ADD-COMPONENT 'GLFNRESULTTYPE)
      '(LISTOF MENU-SET-ITEM))


(DEFUN MENU-SET-ADD-BARMENU (MS NAME SYM MENU TITLE &OPTIONAL OFFSET)
  (BARMENU-INIT MENU)
  (UNLESS OFFSET
    (SETQ OFFSET
          (WINDOW-GET-BOX-POSITION (CADR MS) (SEVENTH MENU)
              (EIGHTH MENU))))
  (SETF (FIFTH MENU) (CAR OFFSET))
  (SETF (SIXTH MENU) (CADR OFFSET))
  (MENU-SET-ADD-ITEM MS NAME SYM MENU))
(SETF (GET 'MENU-SET-ADD-BARMENU 'GLFNRESULTTYPE)
      '(LISTOF MENU-SET-ITEM))


(DEFUN MENU-SET-NAME (NM)
  (INTERN (SYMBOL-NAME (GENSYM (SYMBOL-NAME NM)))))
(SETF (GET 'MENU-SET-NAME 'GLFNRESULTTYPE) 'SYMBOL)


(DEFUN MENU-SET-NAMED-ITEM (MS NAME) (ASSOC NAME (CADDR MS)))
(SETF (GET 'MENU-SET-NAMED-ITEM 'GLFNRESULTTYPE) 'MENU-SET-ITEM)


(DEFUN MENU-SET-NAMED-MENU (MS NAME)
  (CADDR (MENU-SET-NAMED-ITEM MS NAME)))
(SETF (GET 'MENU-SET-NAMED-MENU 'GLFNRESULTTYPE) 'MENU-SET-MENU)


(DEFUN MENU-CONNS-NAMED-MENU (MC NAME)
  (MENU-SET-NAMED-MENU (CADR MC) NAME))
(SETF (GET 'MENU-CONNS-NAMED-MENU 'GLFNRESULTTYPE) 'MENU-SET-MENU)


(DEFUN MENU-SET-FIND-ITEM (MS POS)
  (LET (MITEM)
    (DOLIST (MI (CADDR MS))
      (IF (LET ((GLVAR4241 (CADDR MI)))
            (AND (>= (CAR POS)
                     (IF (CADDR GLVAR4241) (FIFTH GLVAR4241) 0))
                 (<= (CAR POS)
                     (+ (IF (CADDR GLVAR4241) (FIFTH GLVAR4241) 0)
                        (SEVENTH GLVAR4241)))
                 (>= (CADR POS)
                     (IF (CADDR GLVAR4241) (SIXTH GLVAR4241) 0))
                 (<= (CADR POS)
                     (+ (IF (CADDR GLVAR4241) (SIXTH GLVAR4241) 0)
                        (EIGHTH GLVAR4241)))))
          (SETQ MITEM MI)))
    MITEM))
(SETF (GET 'MENU-SET-FIND-ITEM 'GLFNRESULTTYPE) 'MENU-SET-ITEM)


(DEFUN MENU-SET-DELETE-ITEM (MS MI)
  (SETF (CADDR MS) (REMOVE MI (CADDR MS))))
(SETF (GET 'MENU-SET-DELETE-ITEM 'GLFNRESULTTYPE)
      '(LISTOF MENU-SET-ITEM))


(DEFUN MENU-SET-MOVE (MS)
  (LET (SEL M)
    (SETQ SEL (MENU-SET-SELECT MS NIL T))
    (SETQ M (MENU-SET-NAMED-MENU MS (CADR SEL)))
    (MENU-REPOSITION M)))
(SETF (GET 'MENU-SET-MOVE 'GLFNRESULTTYPE) 'INTEGER)


(DEFUN MENU-MDRAW (M)
  (CASE (FIRST M)
    (MENU (MENU-DRAW M))
    (PICMENU (PICMENU-DRAW M))
    (BARMENU (BARMENU-DRAW M))
    (T (GLSEND M DRAW))))

(DEFUN MENU-MSELECT (M &OPTIONAL ANYCLICK)
  (CASE (FIRST M)
    (MENU (MENU-SELECT M T))
    (PICMENU (PICMENU-SELECT M T ANYCLICK))
    (BARMENU (BARMENU-SELECT M))
    (T (GLSEND M SELECT))))

(DEFUN MENU-MITEM-POSITION (M NAME LOC)
  (CASE (FIRST M)
    (MENU (MENU-ITEM-POSITION M NAME LOC))
    (PICMENU (PICMENU-ITEM-POSITION M NAME LOC))
    (T (GLSEND M ITEM-POSITION NAME LOC))))

(DEFUN MENU-SET-DRAW (MS)
  (LET ((GLVAR4242 (CADR MS)))
    (XMAPWINDOW *WINDOW-DISPLAY* (CADR GLVAR4242))
    (XFLUSH *WINDOW-DISPLAY*)
    (WINDOW-WAIT-EXPOSURE GLVAR4242))
  (DOLIST (ITEM (CADDR MS)) (MENU-MDRAW (CADDR ITEM))))

(DEFUN MENU-SET-ITEM-POSITION (MS DESC &OPTIONAL LOC)
  (LET (M)
    (SETQ M (MENU-SET-NAMED-MENU MS (CADR DESC)))
    (OR (MENU-MITEM-POSITION M (CAR DESC) LOC)
        (MENU-MITEM-POSITION M NIL LOC))))
(SETF (GET 'MENU-SET-ITEM-POSITION 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN MENU-SET-DRAW-CONN (MS CONN)
  (LET (PA PB TMP (DESCA (CAR CONN)) (DESCB (CADR CONN)))
    (SETQ PA (MENU-SET-ITEM-POSITION MS DESCA 'CENTER))
    (SETQ PB (MENU-SET-ITEM-POSITION MS DESCB 'CENTER))
    (WHEN (> (CAR PA) (CAR PB))
      (SETQ TMP DESCA)
      (SETQ DESCA DESCB)
      (SETQ DESCB TMP))
    (SETQ PA (MENU-SET-ITEM-POSITION MS DESCA 'RIGHT))
    (SETQ PB (MENU-SET-ITEM-POSITION MS DESCB 'LEFT))
    (WINDOW-DRAW-CIRCLE-XY (CADR MS) (CAR PA) (CADR PA) 3 NIL)
    (WINDOW-DRAW-LINE-XY (CADR MS) (CAR PA) (CADR PA) (CAR PB)
        (CADR PB) NIL)
    (WINDOW-DRAW-CIRCLE-XY (CADR MS) (CAR PB) (CADR PB) 3 NIL)
    (XFLUSH *WINDOW-DISPLAY*)))

(DEFUN MENU-SET-ADJUST (MS NAME EDGE FROM OFFSET)
  (LET (M FROMM PLACE)
    (WHEN (SETQ M (MENU-SET-NAMED-ITEM MS NAME))
      (IF FROM
          (PROGN
            (SETQ FROMM (MENU-SET-NAMED-ITEM MS FROM))
            (SETQ PLACE
                  (CASE EDGE
                    (TOP (SIXTH (CADDR FROMM)))
                    (BOTTOM (+ (SIXTH (CADDR FROMM))
                               (EIGHTH (CADDR FROMM))))
                    (LEFT (+ (FIFTH (CADDR FROMM))
                             (SEVENTH (CADDR FROMM))))
                    (RIGHT (FIFTH (CADDR FROMM))))))
          (SETQ PLACE
                (CASE EDGE
                  (TOP (CADDDR (CADR MS)))
                  ((BOTTOM LEFT) 0)
                  (RIGHT (FIFTH (CADR MS))))))
      (CASE EDGE
        (TOP (SETF (SIXTH (CADDR M))
                   (- (- PLACE (EIGHTH (CADDR M))) OFFSET)))
        (BOTTOM (SETF (SIXTH (CADDR M)) (+ PLACE OFFSET)))
        (LEFT (SETF (FIFTH (CADDR M)) (+ PLACE OFFSET)))
        (RIGHT (SETF (FIFTH (CADDR M))
                     (- (- PLACE (SEVENTH (CADDR M))) OFFSET)))))))
(SETF (GET 'MENU-SET-ADJUST 'GLFNRESULTTYPE) 'INTEGER)


(DEFUN MENU-CONNS-CREATE (MS) (LIST 'MENU-CONNS MS NIL))
(SETF (GET 'MENU-CONNS-CREATE 'GLFNRESULTTYPE) 'MENU-CONNS)


(DEFUN MENU-CONNS-DRAW (MC)
  (MENU-SET-DRAW (CADR MC))
  (DOLIST (C (CADDR MC)) (MENU-SET-DRAW-CONN (CADR MC) C)))

(DEFUN MENU-CONNS-MOVE (MC)
  (MENU-SET-MOVE (CADR MC))
  (XCLEARWINDOW *WINDOW-DISPLAY* (CADR (CADADR MC)))
  (XFLUSH *WINDOW-DISPLAY*)
  (MENU-CONNS-DRAW MC))

(DEFUN MENU-CONNS-REDRAW (MC)
  (XCLEARWINDOW *WINDOW-DISPLAY* (CADR (CADADR MC)))
  (XFLUSH *WINDOW-DISPLAY*)
  (MENU-CONNS-DRAW MC))

(DEFUN MENU-CONNS-ADD-CONN (MC)
  (LET (SEL SELB CONN)
    (SETQ SEL (MENU-SET-SELECT (CADR MC)))
    (IF (EQ (CADR SEL) 'BACKGROUND) SEL
        (PROGN
          (SETQ SELB (MENU-SET-SELECT (CADR MC)))
          (UNLESS (EQ (CAR SELB) 'BACKGROUND)
            (SETQ CONN (LIST SEL SELB))
            (MENU-SET-DRAW-CONN (CADR MC) CONN)
            (SETF (CADDR MC) (NCONC (CADDR MC) (CONS CONN NIL))))
          NIL))))

(DEFUN MENU-CONNS-ADD-ITEM (MC NAME SYM MENU)
  (MENU-SET-ADD-ITEM (CADR MC) NAME SYM MENU))
(SETF (GET 'MENU-CONNS-ADD-ITEM 'GLFNRESULTTYPE)
      '(LISTOF MENU-SET-ITEM))


(DEFUN MENU-CONNS-FIND-CONN (MC PT)
  (LET (MS LS FOUND RES PA PB TMP DESCA DESCB)
    (SETQ LS (LIST (COPY-LIST '(0 0)) (COPY-LIST '(0 0))))
    (SETQ MS (CADR MC))
    (DOLIST (CONN (CADDR MC))
      (UNLESS FOUND
        (SETQ DESCA (CAR CONN))
        (SETQ DESCB (CADR CONN))
        (SETQ PA (MENU-SET-ITEM-POSITION MS DESCA 'CENTER))
        (SETQ PB (MENU-SET-ITEM-POSITION MS DESCB 'CENTER))
        (WHEN (> (CAR PA) (CAR PB))
          (SETQ TMP DESCA)
          (SETQ DESCA DESCB)
          (SETQ DESCB TMP))
        (SETF (CAR LS) (MENU-SET-ITEM-POSITION MS DESCA 'RIGHT))
        (SETF (CADR LS) (MENU-SET-ITEM-POSITION MS DESCB 'LEFT))
        (WHEN (< (ABS (LET ((DX (- (CAADR LS) (CAAR LS)))
                            (DY (- (CADADR LS) (CADAR LS))))
                        (/ (- (* DX (- (CADR PT) (CADAR LS)))
                              (* DY (- (CAR PT) (CAAR LS))))
                           (SQRT (+ (EXPT DX 2) (EXPT DY 2))))))
                 5)
          (SETQ FOUND T)
          (SETQ RES CONN))))
    RES))
(SETF (GET 'MENU-CONNS-FIND-CONN 'GLFNRESULTTYPE) 'MENU-SET-CONN)


(DEFUN MENU-CONNS-FIND-ITEM (MC PT) (MENU-SET-FIND-ITEM (CADR MC) PT))
(SETF (GET 'MENU-CONNS-FIND-ITEM 'GLFNRESULTTYPE) 'MENU-SET-ITEM)


(DEFUN MENU-CONNS-DELETE-CONN (MC CONN)
  (SETF (CADDR MC) (REMOVE CONN (CADDR MC))))
(SETF (GET 'MENU-CONNS-DELETE-CONN 'GLFNRESULTTYPE)
      '(LISTOF MENU-SET-CONN))


(DEFUN MENU-CONNS-DELETE-ITEM (MC MI)
  (LET (MS)
    (SETQ MS (CADR MC))
    (MENU-SET-DELETE-ITEM MS MI)
    (DOLIST (CONN (CADDR MC))
      (IF (OR (EQ (CADAR CONN) (CAR MI)) (EQ (CADADR CONN) (CAR MI)))
          (MENU-CONNS-DELETE-CONN MC CONN)))))

(DEFUN MENU-CONNS-REMOVE-ITEMS (MC)
  (MENU-SET-REMOVE-ITEMS (CADR MC))
  (SETF (CADDR MC) NIL))
(SETF (GET 'MENU-CONNS-REMOVE-ITEMS 'GLFNRESULTTYPE)
      '(LISTOF MENU-SET-CONN))


(DEFUN MENU-CONNS-CONNECTED-PORTS (MC BOXNAME)
  (LET (PORTS)
    (DOLIST (CONN (CADDR MC))
      (IF (EQ BOXNAME (CADADR CONN)) (PUSHNEW (CAADR CONN) PORTS)
          (IF (EQ BOXNAME (CADAR CONN)) (PUSHNEW (CAAR CONN) PORTS))))
    PORTS))

(DEFUN MENU-CONNS-FIND-CONNS (MC BOXNAME PORT)
  (LET (RES)
    (DOLIST (CONN (CADDR MC))
      (IF (AND (EQ BOXNAME (CADADR CONN)) (EQ PORT (CAADR CONN)))
          (SETQ RES (NCONC RES (CONS (CAR CONN) NIL))))
      (IF (AND (EQ BOXNAME (CADAR CONN)) (EQ PORT (CAAR CONN)))
          (SETQ RES (NCONC RES (CONS (CADR CONN) NIL)))))
    RES))
(SETF (GET 'MENU-CONNS-FIND-CONNS 'GLFNRESULTTYPE) '(LISTOF MENU-PORT))


(DEFUN COMPILE-MENU-SET ()
  (GLCOMPFILES *DIRECTORY* '("glisp/vector.lsp" "X/dwindow.lsp")
      '("glisp/menu-set.lsp") "glisp/menu-settrans.lsp"
      "glisp/menu-set-header.lsp")
  (COMPILE-FILE "glisp/menu-settrans.lsp"))

(IN-PACKAGE :USER)

(DEFVAR *DRAW-WINDOW* NIL)

(DEFVAR *DRAW-WINDOW-WIDTH* 600)

(DEFVAR *DRAW-WINDOW-HEIGHT* 600)

(DEFVAR *DRAW-LEAVE-WINDOW* NIL)

(DEFVAR *DRAW-MENU-SET* NIL)

(DEFVAR *DRAW-ZERO-VECTOR* '(0 0))

(DEFVAR *DRAW-LATEX-FACTOR* 1)

(DEFVAR *DRAW-SNAP-FLAG* T)

(DEFVAR *DRAW-OBJECTS* NIL)

(DEFVAR *DRAW-LATEX-MODE* NIL)

(DEFVAR *DRAW-WINDOW*)
(SETF (GET '*DRAW-WINDOW* 'GLISPGLOBALVAR) T)
(SETF (GET '*DRAW-WINDOW* 'GLISPGLOBALVARTYPE) 'WINDOW)


(DEFMACRO DRAW-DESCR (NAME) (LIST 'GET NAME ''DRAW-DESCR))

(SETF (GET 'DRAW-DESC 'GLSTRUCTURE)
      '((LISTOBJECT (NAME SYMBOL) (OBJECTS (LISTOF DRAW-OBJECT))
            (OFFSET VECTOR) (SIZE VECTOR))
        PROP ((FNNAME DRAW-DESC-FNNAME) (REFPT DRAW-DESC-REFPT)) MSG
        ((DRAW DRAW-DESC-DRAW) (SNAP DRAW-DESC-SNAP)
         (FIND DRAW-DESC-FIND) (DELETE DRAW-DESC-DELETE))))
(SETF (GET 'DRAW-OBJECT 'GLSTRUCTURE)
      '((LISTOBJECT (OFFSET VECTOR) (SIZE VECTOR) (CONTENTS ANYTHING)
            (LINEWIDTH INTEGER))
        DEFAULT ((LINEWIDTH 1)) PROP
        ((REGION ((VIRTUAL REGION WITH START = OFFSET SIZE = SIZE)))
         (VREGION ((VIRTUAL REGION WITH START = VSTART SIZE = VSIZE)))
         (VSTART ((VIRTUAL VECTOR WITH X =
                           (MIN (X OFFSET) ((X OFFSET) + (X SIZE))) - 2
                           Y = (MIN (Y OFFSET) ((Y OFFSET) + (Y SIZE)))
                           - 2)))
         (VSIZE ((VIRTUAL VECTOR WITH X = (ABS (X SIZE)) + 4 Y =
                          (ABS (Y SIZE)) + 4))))
        MSG
        ((ERASE DRAW-OBJECT-ERASE) (DRAW DRAW-OBJECT-DRAW)
         (SNAP DRAW-OBJECT-SNAP) (SELECTEDP DRAW-OBJECT-SELECTEDP)
         (MOVE DRAW-OBJECT-MOVE))))
(SETF (GET 'DRAW-LINE 'GLSTRUCTURE)
      '((LISTOBJECT (OFFSET VECTOR) (SIZE VECTOR) (CONTENTS ANYTHING)
            (LINEWIDTH INTEGER))
        PROP
        ((LINE ((VIRTUAL LINE-SEGMENT WITH P1 = OFFSET P2 =
                         (OFFSET + SIZE)))))
        MSG
        ((DRAW DRAW-LINE-DRAW) (SNAP DRAW-LINE-SNAP)
         (SELECTEDP DRAW-LINE-SELECTEDP))
        SUPERS (DRAW-OBJECT)))
(SETF (GET 'DRAW-ARROW 'GLSTRUCTURE)
      '((LISTOBJECT (OFFSET VECTOR) (SIZE VECTOR) (CONTENTS ANYTHING)
            (LINEWIDTH INTEGER))
        PROP
        ((LINE ((VIRTUAL LINE-SEGMENT WITH P1 = OFFSET P2 =
                         (OFFSET + SIZE)))))
        MSG
        ((DRAW DRAW-ARROW-DRAW) (SNAP DRAW-LINE-SNAP)
         (SELECTEDP DRAW-LINE-SELECTEDP))
        SUPERS (DRAW-OBJECT)))
(SETF (GET 'DRAW-BOX 'GLSTRUCTURE)
      '((LISTOBJECT (OFFSET VECTOR) (SIZE VECTOR) (CONTENTS ANYTHING)
            (LINEWIDTH INTEGER))
        MSG
        ((DRAW DRAW-BOX-DRAW) (SNAP DRAW-BOX-SNAP)
         (SELECTEDP DRAW-BOX-SELECTEDP))
        SUPERS (DRAW-OBJECT)))
(SETF (GET 'DRAW-RCBOX 'GLSTRUCTURE)
      '((LISTOBJECT (OFFSET VECTOR) (SIZE VECTOR) (CONTENTS ANYTHING)
            (LINEWIDTH INTEGER))
        MSG
        ((DRAW DRAW-RCBOX-DRAW) (SNAP DRAW-RCBOX-SNAP)
         (SELECTEDP DRAW-RCBOX-SELECTEDP))
        SUPERS (DRAW-OBJECT)))
(SETF (GET 'DRAW-ERASE 'GLSTRUCTURE)
      '((LISTOBJECT (OFFSET VECTOR) (SIZE VECTOR) (CONTENTS ANYTHING)
            (LINEWIDTH INTEGER))
        MSG
        ((DRAW DRAW-ERASE-DRAW) (SNAP DRAW-NO-SNAP)
         (SELECTEDP DRAW-ERASE-SELECTEDP))
        SUPERS (DRAW-OBJECT)))
(SETF (GET 'DRAW-CIRCLE 'GLSTRUCTURE)
      '((LISTOBJECT (OFFSET VECTOR) (SIZE VECTOR) (CONTENTS ANYTHING)
            (LINEWIDTH INTEGER))
        PROP ((RADIUS ((X SIZE) / 2)) (CENTER (OFFSET + SIZE / 2))) MSG
        ((DRAW DRAW-CIRCLE-DRAW) (SNAP DRAW-CIRCLE-SNAP)
         (SELECTEDP DRAW-CIRCLE-SELECTEDP))
        SUPERS (DRAW-OBJECT)))
(SETF (GET 'DRAW-ELLIPSE 'GLSTRUCTURE)
      '((LISTOBJECT (OFFSET VECTOR) (SIZE VECTOR) (CONTENTS ANYTHING)
            (LINEWIDTH INTEGER))
        PROP
        ((RADIUSX ((X SIZE) / 2)) (RADIUSY ((Y SIZE) / 2))
         (RADIUS ((MAX RADIUSX RADIUSY))) (CENTER (OFFSET + SIZE / 2))
         (DELTA ((SQRT (ABS (RADIUSX ^ 2 - RADIUSY ^ 2)))))
         (P1 ((IF (RADIUSX > RADIUSY) THEN
                  (A VECTOR X = (X CENTER) - DELTA Y = (Y CENTER)) ELSE
                  (A VECTOR X = (X CENTER) Y = (Y CENTER) - DELTA))))
         (P2 ((IF (RADIUSX > RADIUSY) THEN
                  (A VECTOR X = (X CENTER) + DELTA Y = (Y CENTER)) ELSE
                  (A VECTOR X = (X CENTER) Y = (Y CENTER) + DELTA)))))
        MSG
        ((DRAW DRAW-ELLIPSE-DRAW) (SNAP DRAW-ELLIPSE-SNAP)
         (SELECTEDP DRAW-ELLIPSE-SELECTEDP))
        SUPERS (DRAW-OBJECT)))
(SETF (GET 'DRAW-DOT 'GLSTRUCTURE)
      '((LISTOBJECT (OFFSET VECTOR) (SIZE VECTOR) (CONTENTS ANYTHING)
            (LINEWIDTH INTEGER))
        MSG
        ((DRAW DRAW-DOT-DRAW) (SNAP DRAW-DOT-SNAP)
         (SELECTEDP DRAW-BUTTON-SELECTEDP))
        SUPERS (DRAW-OBJECT)))
(SETF (GET 'DRAW-BUTTON 'GLSTRUCTURE)
      '((LISTOBJECT (OFFSET VECTOR) (SIZE VECTOR) (CONTENTS ANYTHING)
            (LINEWIDTH INTEGER))
        MSG
        ((DRAW DRAW-BUTTON-DRAW) (SNAP DRAW-DOT-SNAP)
         (SELECTEDP DRAW-BUTTON-SELECTEDP))
        SUPERS (DRAW-OBJECT)))
(SETF (GET 'DRAW-TEXT 'GLSTRUCTURE)
      '((LISTOBJECT (OFFSET VECTOR) (SIZE VECTOR) (CONTENTS ANYTHING)
            (LINEWIDTH INTEGER))
        MSG
        ((DRAW DRAW-TEXT-DRAW) (SNAP DRAW-NO-SNAP)
         (SELECTEDP DRAW-TEXT-SELECTEDP))
        SUPERS (DRAW-OBJECT)))
(SETF (GET 'DRAW-NULL 'GLSTRUCTURE)
      '((LISTOBJECT (OFFSET VECTOR) (SIZE VECTOR) (CONTENTS ANYTHING)
            (LINEWIDTH INTEGER))
        MSG
        ((DRAW DRAW-NULL-DRAW) (SNAP DRAW-NO-SNAP)
         (SELECTEDP DRAW-NULL-SELECTEDP))
        SUPERS (DRAW-OBJECT)))
(SETF (GET 'DRAW-REFPT 'GLSTRUCTURE)
      '((LISTOBJECT (OFFSET VECTOR) (SIZE VECTOR) (CONTENTS ANYTHING)
            (LINEWIDTH INTEGER))
        MSG
        ((DRAW DRAW-REFPT-DRAW) (SNAP DRAW-REFPT-SNAP)
         (SELECTEDP DRAW-REFPT-SELECTEDP))
        SUPERS (DRAW-OBJECT)))
(SETF (GET 'DRAW-MULTI 'GLSTRUCTURE)
      '((LISTOBJECT (OFFSET VECTOR) (SIZE VECTOR)
            (CONTENTS (LISTOF DRAW-OBJECT)) (LINEWIDTH INTEGER))
        MSG
        ((DRAW DRAW-MULTI-DRAW) (SNAP DRAW-NO-SNAP)
         (SELECTEDP DRAW-MULTI-SELECTEDP))
        SUPERS (DRAW-OBJECT)))


(DEFUN DRAW-DESC (NAME)
  (LET (DD)
    (SETQ DD (DRAW-DESCR NAME))
    (UNLESS DD
      (SETQ DD
            (LIST 'DRAW-DESC NAME NIL (COPY-LIST '(0 0))
                  (COPY-LIST '(0 0))))
      (SETF (DRAW-DESCR NAME) DD))
    DD))
(SETF (GET 'DRAW-DESC 'GLFNRESULTTYPE) 'DRAW-DESC)


(SETF (GET 'DRAW-WINDOW 'GLFNRESULTTYPE) 'WINDOW)

(DEFUN DRAW-WINDOW ()
  (OR *DRAW-WINDOW*
      (SETQ *DRAW-WINDOW*
            (WINDOW-CREATE *DRAW-WINDOW-WIDTH* *DRAW-WINDOW-HEIGHT*
                "Draw window"))))

(DEFUN DRAW (NAME)
  (LET (W DD DONE SEL (REDRAW T) NEW)
    (SETQ W (DRAW-WINDOW))
    (XMAPWINDOW *WINDOW-DISPLAY* (CADR W))
    (XFLUSH *WINDOW-DISPLAY*)
    (WINDOW-WAIT-EXPOSURE W)
    (OR *DRAW-MENU-SET* (DRAW-INIT-MENUS))
    (SETQ DD (DRAW-DESC NAME))
    (UNLESS (MEMBER NAME *DRAW-OBJECTS*)
      (SETQ *DRAW-OBJECTS* (NCONC *DRAW-OBJECTS* (LIST NAME))))
    (DRAW-DESC-DRAW DD W)
    (TAGBODY
      GLLABEL4253
      (UNLESS DONE
        (SETQ SEL (MENU-SET-SELECT *DRAW-MENU-SET* REDRAW))
        (SETQ REDRAW NIL)
        (CASE (CADR SEL)
          (COMMAND (CASE (CAR SEL)
                     (DONE (SETQ DONE T))
                     (MOVE (DRAW-DESC-MOVE DD W))
                     (DELETE (DRAW-DESC-DELETE DD W))
                     (COPY (DRAW-DESC-COPY DD W))
                     (REDRAW (XCLEARWINDOW *WINDOW-DISPLAY* (CADR W))
                             (XFLUSH *WINDOW-DISPLAY*) (SETQ REDRAW T)
                             (DRAW-DESC-DRAW DD W))
                     (ORIGIN (DRAW-DESC-ORIGIN DD W)
                             (XCLEARWINDOW *WINDOW-DISPLAY* (CADR W))
                             (XFLUSH *WINDOW-DISPLAY*) (SETQ REDRAW T)
                             (DRAW-DESC-DRAW DD W))
                     (PROGRAM (DRAW-DESC-PROGRAM DD))
                     (LATEX (DRAW-DESC-LATEX DD))
                     (LATEXMODE
                         (SETQ *DRAW-LATEX-MODE*
                               (NOT *DRAW-LATEX-MODE*))
                         (FORMAT T "Latex Mode is now ~A~%"
                                 *DRAW-LATEX-MODE*))))
          (DRAW (SETQ NEW NIL)
                (CASE (CAR SEL)
                  (RECTANGLE (SETQ NEW (DRAW-BOX-GET DD W)))
                  (RCBOX (SETQ NEW (DRAW-RCBOX-GET DD W)))
                  (CIRCLE (SETQ NEW (DRAW-CIRCLE-GET DD W)))
                  (ELLIPSE (SETQ NEW (DRAW-ELLIPSE-GET DD W)))
                  (LINE (SETQ NEW (DRAW-LINE-GET DD W)))
                  (ARROW (SETQ NEW (DRAW-ARROW-GET DD W)))
                  (DOT (SETQ NEW (DRAW-DOT-GET DD W)))
                  (ERASE (SETQ NEW (DRAW-ERASE-GET DD W)))
                  (BUTTON (SETQ NEW (DRAW-BUTTON-GET DD W)))
                  (TEXT (SETQ NEW (DRAW-TEXT-GET DD W)))
                  (REFPT (SETQ NEW (DRAW-REFPT-GET DD W))))
                (WHEN NEW
                  (SETF (CADR NEW)
                        (LET ((GLVAR4251 (CADR NEW))
                              (GLVAR4252 (CADDDR DD)))
                          (LIST (- (CAR GLVAR4251) (CAR GLVAR4252))
                                (- (CADR GLVAR4251) (CADR GLVAR4252)))))
                  (SETF (CADDR DD) (NCONC (CADDR DD) (CONS NEW NIL)))
                  (DRAW-OBJECT-DRAW NEW W (CADDDR DD))))
          (BACKGROUND))
        (GO GLLABEL4253)))
    (SETF (DRAW-DESCR NAME) DD)
    (UNLESS *DRAW-LEAVE-WINDOW*
      (PROGN
        (XUNMAPWINDOW *WINDOW-DISPLAY* (CADR W))
        (XFLUSH *WINDOW-DISPLAY*)
        (WINDOW-WAIT-UNMAP W)))
    NAME))
(SETF (GET 'DRAW 'GLFNRESULTTYPE) 'SYMBOL)


(DEFUN DRAW-DESC-DRAW (DD W)
  (XCLEARWINDOW *WINDOW-DISPLAY* (CADR W))
  (XFLUSH *WINDOW-DISPLAY*)
  (DOLIST (OBJ (CADDR DD)) (DRAW-OBJECT-DRAW OBJ W (CADDDR DD)))
  (XFLUSH *WINDOW-DISPLAY*))

(DEFUN DRAW-DESC-SELECTED (DD P)
  (LET (OBJS OBJSB OBJ)
    (SETQ OBJS
          (MAPCAN #'(LAMBDA (OBJ)
                      (AND (DRAW-OBJECT-SELECTEDP OBJ P (CADDDR DD))
                           (CONS OBJ NIL)))
                  (CADDR DD)))
    (IF OBJS
        (IF (REST OBJS)
            (PROGN
              (SETQ OBJSB
                    (MAPCAN #'(LAMBDA (Z)
                                (AND (MEMBER (FIRST Z)
                                      '(DRAW-BUTTON DRAW-DOT))
                                     (CONS Z NIL)))
                            OBJS))
              (IF (AND OBJSB (NULL (REST OBJSB)))
                  (SETQ OBJ (FIRST OBJSB))))
            (SETQ OBJ (FIRST OBJS))))
    OBJ))
(SETF (GET 'DRAW-DESC-SELECTED 'GLFNRESULTTYPE) 'DRAW-OBJECT)


(DEFUN DRAW-DESC-FIND (DD W &OPTIONAL CROSSFLG)
  (LET (P OBJ)
    (TAGBODY
      GLLABEL4254
      (UNLESS OBJ
        (SETQ P
              (IF CROSSFLG (DRAW-GET-CROSS DD W)
                  (DRAW-GET-CROSSHAIRS DD W)))
        (SETQ OBJ (DRAW-DESC-SELECTED DD P))
        (GO GLLABEL4254)))
    OBJ))
(SETF (GET 'DRAW-DESC-FIND 'GLFNRESULTTYPE) 'DRAW-OBJECT)


(DEFUN DRAW-GET-CROSS (DD W) (DRAW-DESC-SNAP DD (WINDOW-GET-CROSS W)))
(SETF (GET 'DRAW-GET-CROSS 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-GET-CROSSHAIRS (DD W)
  (DRAW-DESC-SNAP DD (WINDOW-GET-CROSSHAIRS W)))
(SETF (GET 'DRAW-GET-CROSSHAIRS 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-DESC-DELETE (DD W)
  (LET (OBJ)
    (SETQ OBJ (DRAW-DESC-FIND DD W T))
    (DRAW-OBJECT-ERASE OBJ W (CADDDR DD))
    (SETF (CADDR DD) (REMOVE OBJ (CADDR DD)))))
(SETF (GET 'DRAW-DESC-DELETE 'GLFNRESULTTYPE) '(LISTOF DRAW-OBJECT))


(DEFUN DRAW-DESC-COPY (DD W)
  (LET (OBJ OBJB)
    (SETQ OBJ (DRAW-DESC-FIND DD W))
    (SETQ OBJB (COPY-TREE OBJ))
    (DRAW-GET-OBJECT-POS OBJB W)
    (SETF (CADR OBJB)
          (LET ((GLVAR4255 (CADR OBJB)) (GLVAR4256 (CADDDR DD)))
            (LIST (- (CAR GLVAR4255) (CAR GLVAR4256))
                  (- (CADR GLVAR4255) (CADR GLVAR4256)))))
    (DRAW-OBJECT-DRAW OBJB W (CADDDR DD))
    (XFLUSH *WINDOW-DISPLAY*)
    (SETF (CADDR DD) (NCONC (CADDR DD) (CONS OBJB NIL)))))
(SETF (GET 'DRAW-DESC-COPY 'GLFNRESULTTYPE) '(LISTOF DRAW-OBJECT))


(DEFUN DRAW-DESC-MOVE (DD W)
  (LET (OBJ)
    (IF (SETQ OBJ (DRAW-DESC-FIND DD W))
        (DRAW-OBJECT-MOVE OBJ W (CADDDR DD)))))

(DEFUN DRAW-DESC-ORIGIN (DD W)
  (LET (SEL)
    (DRAW-DESC-BOUNDS DD)
    (SETQ SEL (MENU '(("To zero" . ZERO) ("Select" . SELECT))))
    (COND
      ((EQ SEL 'SELECT)
       (SETF (CADDDR DD)
             (WINDOW-GET-BOX-POSITION W (CAR (FIFTH DD))
                 (CADR (FIFTH DD)))))
      ((EQ SEL 'ZERO) (SETF (CADDDR DD) (COPY-LIST '(0 0)))))))
(SETF (GET 'DRAW-DESC-ORIGIN 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-DESC-BOUNDS (DD)
  (LET ((XMIN 9999) (YMIN 9999) (XMAX 0) (YMAX 0) BASEV)
    (DOLIST (OBJ (CADDR DD))
      (SETQ XMIN (MIN XMIN (CAADR OBJ) (+ (CAADR OBJ) (CAADDR OBJ))))
      (SETQ YMIN
            (MIN YMIN (CADADR OBJ) (+ (CADADR OBJ) (CADR (CADDR OBJ)))))
      (SETQ XMAX (MAX XMAX (CAADR OBJ) (+ (CAADR OBJ) (CAADDR OBJ))))
      (SETQ YMAX
            (MAX YMAX (CADADR OBJ) (+ (CADADR OBJ) (CADR (CADDR OBJ))))))
    (SETF (CAR (FIFTH DD)) (- XMAX XMIN))
    (SETF (CADR (FIFTH DD)) (- YMAX YMIN))
    (SETQ BASEV (LIST XMIN YMIN))
    (SETF (CADDDR DD) BASEV)
    (DOLIST (OBJ (CADDR DD))
      (SETF (CADR OBJ)
            (LET ((GLVAR4257 (CADR OBJ)))
              (LIST (- (CAR GLVAR4257) (CAR BASEV))
                    (- (CADR GLVAR4257) (CADR BASEV))))))))

(DEFUN DRAW-DESC-LATEX (DD)
  (LET (BASE BX BY SX SY)
    (FORMAT T "   \\begin{picture}(~5,2F,~5,2F)(0,0)~%"
            (* (CAR (FIFTH DD)) *DRAW-LATEX-FACTOR*)
            (* (CADR (FIFTH DD)) *DRAW-LATEX-FACTOR*))
    (DOLIST (OBJ (CADDR DD))
      (SETQ BASE
            (LET ((GLVAR4260 (CADDDR DD)) (GLVAR4261 (CADR OBJ)))
              (LIST (+ (CAR GLVAR4260) (CAR GLVAR4261))
                    (+ (CADR GLVAR4260) (CADR GLVAR4261)))))
      (SETQ BX (* (CAR BASE) *DRAW-LATEX-FACTOR*))
      (SETQ BY (* (CADR BASE) *DRAW-LATEX-FACTOR*))
      (SETQ SX (* (CAADDR OBJ) *DRAW-LATEX-FACTOR*))
      (SETQ SY (* (CADR (CADDR OBJ)) *DRAW-LATEX-FACTOR*))
      (CASE (FIRST OBJ)
        (DRAW-LINE
            (LATEX-LINE (CAR BASE) (CADR BASE) (+ (CAR BASE) SX)
                (+ (CADR BASE) SY)))
        (DRAW-ARROW
            (LATEX-LINE (CAR BASE) (CADR BASE) (+ (CAR BASE) SX)
                (+ (CADR BASE) SY) T))
        (DRAW-BOX
            (FORMAT T
                    "   \\put(~5,2F,~5,2F) {\\framebox(~5,2F,~5,2F)}~%"
                    BX BY SX SY))
        (DRAW-RCBOX
            (FORMAT T "   \\put(~5,2F,~5,2F) {\\oval(~5,2F,~5,2F)}~%"
                    (+ BX (/ SX 2)) (+ BY (/ SY 2)) SX SY))
        (DRAW-CIRCLE
            (FORMAT T "   \\put(~5,2F,~5,2F) {\\circle{~5,2F}}~%"
                    (+ BX (/ SX 2)) (+ BY (/ SY 2)) SX))
        (DRAW-ELLIPSE
            (FORMAT T "   \\put(~5,2F,~5,2F) {\\oval(~5,2F,~5,2F)}~%"
                    (+ BX (/ SX 2)) (+ BY (/ SY 2)) SX SY))
        (DRAW-BUTTON
            (FORMAT T
                    "   \\put(~5,2F,~5,2F) {\\framebox(~5,2F,~5,2F)}~%"
                    BX BY SX SY))
        (DRAW-ERASE)
        (DRAW-DOT
            (FORMAT T "   \\put(~5,2F,~5,2F) {\\circle*{~5,2F}}~%"
                    (+ BX (/ SX 2)) (+ BY (/ SY 2)) SX))
        (DRAW-TEXT
            (FORMAT T "   \\put(~5,2F,~5,2F) {~A}~%" BX
                    (+ BY (* 4 *DRAW-LATEX-FACTOR*)) (CADDDR OBJ)))))
    (FORMAT T "   \\end{picture}~%")))

(DEFUN DRAW-DESC-PROGRAM (DD)
  (LET (BASE BX BY SX SY TOX TOY R RX RY S CODE FNCODE FNNAME CD)
    (SETQ CODE
          (MAPCAN #'(LAMBDA (OBJ)
                      (AND (SETQ CD
                                 (PROGN
                                   (SETQ BASE
                                    (LET
                                     ((GLVAR4264
                                       (LET
                                        ((GLVAR4262 (CADDDR DD))
                                         (GLVAR4263 (CADR OBJ)))
                                         (LIST
                                          (+ (CAR GLVAR4262)
                                           (CAR GLVAR4263))
                                          (+ (CADR GLVAR4262)
                                           (CADR GLVAR4263)))))
                                      (GLVAR4265 (DRAW-DESC-REFPT DD)))
                                      (LIST
                                       (- (CAR GLVAR4264)
                                        (CAR GLVAR4265))
                                       (- (CADR GLVAR4264)
                                        (CADR GLVAR4265)))))
                                   (SETQ BX (CAR BASE))
                                   (SETQ BY (CADR BASE))
                                   (SETQ SX (CAADDR OBJ))
                                   (SETQ SY (CADR (CADDR OBJ)))
                                   (SETQ TOX (+ BX SX))
                                   (SETQ TOY (+ BY SY))
                                   (IF (EQ (CAR OBJ) 'DRAW-CIRCLE)
                                    (SETQ R (TRUNCATE (CAADDR OBJ) 2)))
                                   (WHEN (EQ (CAR OBJ) 'DRAW-ELLIPSE)
                                     (SETQ RX
                                      (TRUNCATE (CAADDR OBJ) 2))
                                     (SETQ RY
                                      (TRUNCATE (CADR (CADDR OBJ)) 2)))
                                   (DRAW-OPTIMIZE
                                    (CASE (FIRST OBJ)
                                      (DRAW-LINE
                                       (LIST 'WINDOW-DRAW-LINE-XY 'W
                                        (LIST '+ 'X BX) (LIST '+ 'Y BY)
                                        (LIST '+ 'X TOX)
                                        (LIST '+ 'Y TOY)))
                                      (DRAW-ARROW
                                       (LIST 'WINDOW-DRAW-ARROW-XY 'W
                                        (LIST '+ 'X BX) (LIST '+ 'Y BY)
                                        (LIST '+ 'X TOX)
                                        (LIST '+ 'Y TOY)))
                                      (DRAW-BOX
                                       (LIST 'WINDOW-DRAW-BOX-XY 'W
                                        (LIST '+ 'X BX) (LIST '+ 'Y BY)
                                        SX SY))
                                      (DRAW-RCBOX
                                       (LIST 'WINDOW-DRAW-RCBOX-XY 'W
                                        (LIST '+ 'X BX) (LIST '+ 'Y BY)
                                        SX SY 8))
                                      (DRAW-CIRCLE
                                       (LIST 'WINDOW-DRAW-CIRCLE-XY 'W
                                        (LIST '+ 'X (+ R BX))
                                        (LIST '+ 'Y (+ R BY)) R))
                                      (DRAW-ELLIPSE
                                       (LIST 'WINDOW-DRAW-ELLIPSE-XY 'W
                                        (LIST '+ 'X (+ RX BX))
                                        (LIST '+ 'Y (+ RY BY)) RX RY))
                                      ((DRAW-BUTTON DRAW-REFPT) NIL)
                                      (DRAW-ERASE
                                       (LIST 'WINDOW-ERASE-AREA-XY 'W
                                        (LIST '+ 'X BX) (LIST '+ 'Y BY)
                                        SX SY))
                                      (DRAW-DOT
                                       (LIST 'WINDOW-DRAW-DOT-XY 'W
                                        (LIST '+ 'X (+ 2 BX))
                                        (LIST '+ 'Y (+ 2 BY))))
                                      (DRAW-TEXT
                                       (SETQ S
                                        (STRINGIFY (CADDDR OBJ)))
                                       (LIST 'WINDOW-PRINTAT-XY 'W S
                                        (LIST '+ 'X BX)
                                        (LIST '+ 'Y BY)))))))
                           (CONS CD NIL)))
                  (CADDR DD)))
    (SETQ FNCODE
          (CONS 'LAMBDA
                (CONS (LIST 'W 'X 'Y)
                      (NCONC CODE
                             (LIST (LIST 'WINDOW-FORCE-OUTPUT 'W))))))
    (SETQ FNNAME (DRAW-DESC-FNNAME DD))
    (SETF (SYMBOL-FUNCTION FNNAME) FNCODE)
    (FORMAT T "Constructed program (~A w x y)~%" FNNAME)
    (DRAW-DESC-PICMENU DD)))
(SETF (GET 'DRAW-DESC-PROGRAM 'GLFNRESULTTYPE)
      '(LIST GLTYPE INTEGER INTEGER (LISTOF (LIST ANYTHING VECTOR))
             BOOLEAN SYMBOL SYMBOL))


(DEFUN DRAW-OPTIMIZE (X) (IF (FBOUNDP 'GLUNWRAP) (GLUNWRAP X NIL) X))

(DEFUN DRAW-DESC-FNNAME (DD)
  (INTERN (CONCATENATE 'STRING "DRAW-" (SYMBOL-NAME (CADR DD)))))
(SETF (GET 'DRAW-DESC-FNNAME 'GLFNRESULTTYPE) 'SYMBOL)


(DEFUN DRAW-DESC-PICMENU (DD)
  (LET (BUTTONS)
    (SETQ BUTTONS
          (MAPCAN #'(LAMBDA (OBJ)
                      (AND (EQ (FIRST OBJ) 'DRAW-BUTTON)
                           (CONS (LIST (CADDDR OBJ)
                                       (LET
                                        ((GLVAR4268
                                          (LET
                                           ((GLVAR4266
                                             (COPY-LIST '(2 2)))
                                            (GLVAR4267 (CADR OBJ)))
                                            (LIST
                                             (+ (CAR GLVAR4266)
                                              (CAR GLVAR4267))
                                             (+ (CADR GLVAR4266)
                                              (CADR GLVAR4267)))))
                                         (GLVAR4269 (CADDDR DD)))
                                         (LIST
                                          (+ (CAR GLVAR4268)
                                           (CAR GLVAR4269))
                                          (+ (CADR GLVAR4268)
                                           (CADR GLVAR4269)))))
                                 NIL)))
                  (CADDR DD)))
    (IF BUTTONS
        (SETF (GET (CADR DD) 'PICMENU-SPEC)
              (LIST 'PICMENU-SPEC (CAR (FIFTH DD)) (CADR (FIFTH DD))
                    BUTTONS T (DRAW-DESC-FNNAME DD) '9X15)))))
(SETF (GET 'DRAW-DESC-PICMENU 'GLFNRESULTTYPE)
      '(LIST GLTYPE INTEGER INTEGER (LISTOF (LIST ANYTHING VECTOR))
             BOOLEAN SYMBOL SYMBOL))


(DEFUN DRAW-DESC-SNAP (DD P)
  (LET (PSNAP OBJ (OBJS (CADDR DD)))
    (IF *DRAW-SNAP-FLAG*
        (TAGBODY
          GLLABEL4270
          (WHEN (AND OBJS (NOT PSNAP))
            (SETQ OBJ (POP OBJS))
            (SETQ PSNAP (DRAW-OBJECT-SNAP OBJ P (CADDDR DD)))
            (GO GLLABEL4270))))
    (OR PSNAP P)))
(SETF (GET 'DRAW-DESC-SNAP 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-OBJECT-MOVE (D W OFF)
  (DRAW-OBJECT-ERASE D W OFF)
  (DRAW-GET-OBJECT-POS D W)
  (SETF (CADR D)
        (LET ((GLVAR4271 (CADR D)))
          (LIST (- (CAR GLVAR4271) (CAR OFF))
                (- (CADR GLVAR4271) (CADR OFF)))))
  (DRAW-OBJECT-DRAW D W OFF)
  (XFLUSH *WINDOW-DISPLAY*))

(DEFUN DRAW-OBJECT-DRAW-AT (W X Y D)
  (SETF (SECOND D) (LIST X Y))
  (DRAW-OBJECT-DRAW D W *DRAW-ZERO-VECTOR*))

(DEFUN DRAW-OBJECT-DRAW (D W OFF)
  (FUNCALL (GLMETHOD (CAR D) 'DRAW) D W OFF))

(DEFUN DRAW-OBJECT-SNAP (D P OFF)
  (FUNCALL (GLMETHOD (CAR D) 'SNAP) D P OFF))

(DEFUN DRAW-OBJECT-SELECTEDP (D W OFF)
  (FUNCALL (GLMETHOD (CAR D) 'SELECTEDP) D W OFF))

(DEFUN DRAW-GET-OBJECT-POS (D W)
  (WINDOW-GET-ICON-POSITION W
      (IF (EQ (FIRST D) 'DRAW-TEXT) #'DRAW-TEXT-DRAW-OUTLINE
          #'DRAW-OBJECT-DRAW-AT)
      (LIST D)))
(SETF (GET 'DRAW-GET-OBJECT-POS 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-OBJECT-ERASE (D W OFF)
  (UNLESS (EQ (FIRST D) 'DRAW-ERASE)
    (LET ((GC (CADDR W)))
      (SETQ *WINDOW-SAVE-FUNCTION*
            (PROGN
              (XGETGCVALUES *WINDOW-DISPLAY* (CADDR W) GCFUNCTION
                  *GC-VALUES*)
              (XGCVALUES-FUNCTION *GC-VALUES*)))
      (XSETFUNCTION *WINDOW-DISPLAY* GC GXXOR)
      (SETQ *WINDOW-SAVE-FOREGROUND*
            (PROGN
              (XGETGCVALUES *WINDOW-DISPLAY* (CADDR W) GCFOREGROUND
                  *GC-VALUES*)
              (XGCVALUES-FOREGROUND *GC-VALUES*)))
      (XSETFOREGROUND *WINDOW-DISPLAY* GC
          (LOGXOR *WINDOW-SAVE-FOREGROUND*
                  (PROGN
                    (XGETGCVALUES *WINDOW-DISPLAY* (CADDR W)
                        GCBACKGROUND *GC-VALUES*)
                    (XGCVALUES-BACKGROUND *GC-VALUES*)))))
    (DRAW-OBJECT-DRAW D W OFF)
    (LET ((GC (CADDR W)))
      (XSETFUNCTION *WINDOW-DISPLAY* GC *WINDOW-SAVE-FUNCTION*)
      (XSETFOREGROUND *WINDOW-DISPLAY* GC *WINDOW-SAVE-FOREGROUND*))))

(DEFUN DRAW-LINE-DRAW (D W OFF)
  (LET ((FROM (LET ((GLVAR4272 (CADR D)))
                (LIST (+ (CAR OFF) (CAR GLVAR4272))
                      (+ (CADR OFF) (CADR GLVAR4272)))))
        (TO (LET ((GLVAR4274
                      (LET ((GLVAR4273 (CADR D)))
                        (LIST (+ (CAR OFF) (CAR GLVAR4273))
                              (+ (CADR OFF) (CADR GLVAR4273)))))
                  (GLVAR4275 (CADDR D)))
              (LIST (+ (CAR GLVAR4274) (CAR GLVAR4275))
                    (+ (CADR GLVAR4274) (CADR GLVAR4275))))))
    (LET ((QQWHEIGHT (CADDDR W)))
      (XDRAWLINE *WINDOW-DISPLAY* (CADR W) (CADDR W) (CAR FROM)
          (- QQWHEIGHT (CADR FROM)) (CAR TO) (- QQWHEIGHT (CADR TO)))
      NIL)))

(DEFUN DRAW-ARROW-DRAW (D W OFF)
  (LET ((FROM (LET ((GLVAR4280 (CADR D)))
                (LIST (+ (CAR OFF) (CAR GLVAR4280))
                      (+ (CADR OFF) (CADR GLVAR4280)))))
        (TO (LET ((GLVAR4282
                      (LET ((GLVAR4281 (CADR D)))
                        (LIST (+ (CAR OFF) (CAR GLVAR4281))
                              (+ (CADR OFF) (CADR GLVAR4281)))))
                  (GLVAR4283 (CADDR D)))
              (LIST (+ (CAR GLVAR4282) (CAR GLVAR4283))
                    (+ (CADR GLVAR4282) (CADR GLVAR4283))))))
    (WINDOW-DRAW-ARROW-XY W (CAR FROM) (CADR FROM) (CAR TO) (CADR TO))))

(DEFUN DRAW-LINE-SELECTEDP (D PT OFF)
  (LET ((PTP (LIST (- (CAR PT) (CAR OFF)) (- (CADR PT) (CADR OFF)))))
    (AND (>= (CAR PTP) (+ -2 (+ (CAADR D) (MIN 0 (CAADDR D)))))
         (<= (CAR PTP)
             (+ 2
                (+ (+ (CAADR D) (MIN 0 (CAADDR D))) (ABS (CAADDR D)))))
         (>= (CADR PTP) (+ -2 (+ (CADADR D) (MIN 0 (CADR (CADDR D))))))
         (<= (CADR PTP)
             (+ 2
                (+ (+ (CADADR D) (MIN 0 (CADR (CADDR D))))
                   (ABS (CADR (CADDR D))))))
         (< (ABS (LET ((DX (CAADDR D)) (DY (CADR (CADDR D))))
                   (/ (- (* DX (- (CADR PTP) (CADADR D)))
                         (* DY (- (CAR PTP) (CAADR D))))
                      (SQRT (+ (EXPT DX 2) (EXPT DY 2))))))
            5))))
(SETF (GET 'DRAW-LINE-SELECTEDP 'GLFNRESULTTYPE) 'BOOLEAN)


(DEFUN DRAW-LINE-GET (DD W)
  (LET (FROM TO)
    (SETQ FROM (DRAW-GET-CROSSHAIRS DD W))
    (SETQ TO
          (IF *DRAW-LATEX-MODE*
              (WINDOW-GET-LATEX-POSITION W (CAR FROM) (CADR FROM) NIL)
              (DRAW-DESC-SNAP DD
                  (WINDOW-GET-LINE-POSITION W (CAR FROM) (CADR FROM)))))
    (LIST 'DRAW-LINE FROM
          (LIST (- (CAR TO) (CAR FROM)) (- (CADR TO) (CADR FROM))) NIL
          0)))
(SETF (GET 'DRAW-LINE-GET 'GLFNRESULTTYPE) 'DRAW-LINE)


(DEFUN DRAW-ARROW-GET (DD W)
  (LET (FROM TO)
    (SETQ FROM (DRAW-GET-CROSSHAIRS DD W))
    (SETQ TO
          (IF *DRAW-LATEX-MODE*
              (WINDOW-GET-LATEX-POSITION W (CAR FROM) (CADR FROM) NIL)
              (DRAW-DESC-SNAP DD
                  (WINDOW-GET-LINE-POSITION W (CAR FROM) (CADR FROM)))))
    (LIST 'DRAW-ARROW FROM
          (LIST (- (CAR TO) (CAR FROM)) (- (CADR TO) (CADR FROM))) NIL
          0)))
(SETF (GET 'DRAW-ARROW-GET 'GLFNRESULTTYPE) 'DRAW-ARROW)


(DEFUN DRAW-BOX-DRAW (D W OFF)
  (LET ((GLVAR4289
            (LET ((GLVAR4288 (CADR D)))
              (LIST (+ (CAR OFF) (CAR GLVAR4288))
                    (+ (CADR OFF) (CADR GLVAR4288)))))
        (GLVAR4290 (CADDR D)))
    (WINDOW-DRAW-BOX-XY W (CAR GLVAR4289) (CADR GLVAR4289)
        (CAR GLVAR4290) (CADR GLVAR4290) NIL)))

(DEFUN DRAW-BOX-SELECTEDP (D P OFF)
  (LET ((PT (LIST (- (CAR P) (CAR OFF)) (- (CADR P) (CADR OFF)))))
    (OR (AND (< (CADR PT)
                (+ 7
                   (+ (+ (CADADR D) (MIN 0 (CADR (CADDR D))))
                      (ABS (CADR (CADDR D))))))
             (> (CADR PT)
                (+ -7 (+ (CADADR D) (MIN 0 (CADR (CADDR D))))))
             (OR (< (ABS (+ 2
                            (- (CAR PT)
                               (+ (CAADR D) (MIN 0 (CAADDR D))))))
                    5)
                 (< (ABS (+ -2
                            (- (CAR PT)
                               (+ (+ (CAADR D) (MIN 0 (CAADDR D)))
                                  (ABS (CAADDR D))))))
                    5)))
        (AND (< (CAR PT)
                (+ 7
                   (+ (+ (CAADR D) (MIN 0 (CAADDR D)))
                      (ABS (CAADDR D)))))
             (> (CAR PT) (+ -7 (+ (CAADR D) (MIN 0 (CAADDR D)))))
             (OR (< (ABS (+ -2
                            (- (CADR PT)
                               (+ (+ (CADADR D)
                                     (MIN 0 (CADR (CADDR D))))
                                  (ABS (CADR (CADDR D)))))))
                    5)
                 (< (ABS (+ 2
                            (- (CADR PT)
                               (+ (CADADR D) (MIN 0 (CADR (CADDR D)))))))
                    5))))))
(SETF (GET 'DRAW-BOX-SELECTEDP 'GLFNRESULTTYPE) 'BOOLEAN)


(DEFUN DRAW-BOX-GET (DD W)
  (LET (BOX)
    (SETQ BOX (WINDOW-GET-REGION W))
    (LIST 'DRAW-BOX (CAR BOX) (CADR BOX) NIL 0)))
(SETF (GET 'DRAW-BOX-GET 'GLFNRESULTTYPE) 'DRAW-BOX)


(DEFUN DRAW-RCBOX-DRAW (D W OFF)
  (WINDOW-DRAW-RCBOX-XY W (+ (CAR OFF) (CAADR D))
      (+ (CADR OFF) (CADADR D)) (CAADDR D) (CADR (CADDR D)) 8))

(DEFUN DRAW-RCBOX-SELECTEDP (D P OFF)
  (LET ((PT (LIST (- (CAR P) (CAR OFF)) (- (CADR P) (CADR OFF)))))
    (OR (AND (< (CADR PT)
                (1- (+ (+ (CADADR D) (MIN 0 (CADR (CADDR D))))
                       (ABS (CADR (CADDR D))))))
             (> (CADR PT) (1+ (+ (CADADR D) (MIN 0 (CADR (CADDR D))))))
             (OR (< (ABS (+ 2
                            (- (CAR PT)
                               (+ (CAADR D) (MIN 0 (CAADDR D))))))
                    5)
                 (< (ABS (+ -2
                            (- (CAR PT)
                               (+ (+ (CAADR D) (MIN 0 (CAADDR D)))
                                  (ABS (CAADDR D))))))
                    5)))
        (AND (< (CAR PT)
                (1- (+ (+ (CAADR D) (MIN 0 (CAADDR D)))
                       (ABS (CAADDR D)))))
             (> (CAR PT) (1+ (+ (CAADR D) (MIN 0 (CAADDR D)))))
             (OR (< (ABS (+ -2
                            (- (CADR PT)
                               (+ (+ (CADADR D)
                                     (MIN 0 (CADR (CADDR D))))
                                  (ABS (CADR (CADDR D)))))))
                    5)
                 (< (ABS (+ 2
                            (- (CADR PT)
                               (+ (CADADR D) (MIN 0 (CADR (CADDR D)))))))
                    5))))))
(SETF (GET 'DRAW-RCBOX-SELECTEDP 'GLFNRESULTTYPE) 'BOOLEAN)


(DEFUN DRAW-RCBOX-GET (DD W)
  (LET (BOX)
    (SETQ BOX (WINDOW-GET-REGION W))
    (LIST 'DRAW-RCBOX (CAR BOX) (CADR BOX) NIL 0)))
(SETF (GET 'DRAW-RCBOX-GET 'GLFNRESULTTYPE) 'DRAW-RCBOX)


(DEFUN DRAW-CIRCLE-DRAW (D W OFF)
  (LET ((GLVAR4295
            (LET ((GLVAR4294
                      (LET ((GLVAR4292 (CADR D))
                            (GLVAR4293
                                (LET ((GLVAR4291 (CADDR D)))
                                  (LIST (TRUNCATE (CAR GLVAR4291) 2)
                                        (TRUNCATE (CADR GLVAR4291) 2)))))
                        (LIST (+ (CAR GLVAR4292) (CAR GLVAR4293))
                              (+ (CADR GLVAR4292) (CADR GLVAR4293))))))
              (LIST (+ (CAR OFF) (CAR GLVAR4294))
                    (+ (CADR OFF) (CADR GLVAR4294))))))
    (WINDOW-DRAW-CIRCLE-XY W (CAR GLVAR4295) (CADR GLVAR4295)
        (TRUNCATE (CAADDR D) 2) NIL)))

(DEFUN DRAW-CIRCLE-SELECTEDP (D P OFF)
  (< (ABS (- (TRUNCATE (CAADDR D) 2)
             (LET ((SELF (LET ((GLVAR4301
                                   (LET
                                    ((GLVAR4300
                                      (LET
                                       ((GLVAR4298 (CADR D))
                                        (GLVAR4299
                                         (LET ((GLVAR4297 (CADDR D)))
                                           (LIST
                                            (TRUNCATE (CAR GLVAR4297)
                                             2)
                                            (TRUNCATE (CADR GLVAR4297)
                                             2)))))
                                        (LIST
                                         (+ (CAR GLVAR4298)
                                          (CAR GLVAR4299))
                                         (+ (CADR GLVAR4298)
                                          (CADR GLVAR4299))))))
                                     (LIST
                                      (+ (CAR GLVAR4300) (CAR OFF))
                                      (+ (CADR GLVAR4300) (CADR OFF))))))
                           (LIST (- (CAR GLVAR4301) (CAR P))
                                 (- (CADR GLVAR4301) (CADR P))))))
               (SQRT (+ (EXPT (CAR SELF) 2) (EXPT (CADR SELF) 2))))))
     5))
(SETF (GET 'DRAW-CIRCLE-SELECTEDP 'GLFNRESULTTYPE) 'BOOLEAN)


(DEFUN DRAW-CIRCLE-GET (DD W)
  (LET (CIR CENT)
    (SETQ CENT (DRAW-GET-CROSSHAIRS DD W))
    (SETQ CIR (WINDOW-GET-CIRCLE W CENT))
    (LIST 'DRAW-CIRCLE
          (LIST (- (CAAR CIR) (CADR CIR)) (- (CADAR CIR) (CADR CIR)))
          (LIST (* 2 (CADR CIR)) (* 2 (CADR CIR))) NIL 0)))
(SETF (GET 'DRAW-CIRCLE-GET 'GLFNRESULTTYPE) 'DRAW-CIRCLE)


(DEFUN DRAW-ELLIPSE-DRAW (D W OFF)
  (LET ((C (LET ((GLVAR4305
                     (LET ((GLVAR4303 (CADR D))
                           (GLVAR4304
                               (LET ((GLVAR4302 (CADDR D)))
                                 (LIST (TRUNCATE (CAR GLVAR4302) 2)
                                       (TRUNCATE (CADR GLVAR4302) 2)))))
                       (LIST (+ (CAR GLVAR4303) (CAR GLVAR4304))
                             (+ (CADR GLVAR4303) (CADR GLVAR4304))))))
             (LIST (+ (CAR OFF) (CAR GLVAR4305))
                   (+ (CADR OFF) (CADR GLVAR4305))))))
    (LET ((GLVAR4308 (TRUNCATE (CAADDR D) 2))
          (GLVAR4309 (TRUNCATE (CADR (CADDR D)) 2)))
      (XDRAWARC *WINDOW-DISPLAY* (CADR W) (CADDR W)
          (- (CAR C) GLVAR4308) (- (CADDDR W) (+ (CADR C) GLVAR4309))
          (* 2 GLVAR4308) (* 2 GLVAR4309) 0 23040)
      NIL)))

(DEFUN DRAW-ELLIPSE-SELECTEDP (D P OFF)
  (LET ((PT (LIST (- (CAR P) (CAR OFF)) (- (CADR P) (CADR OFF)))))
    (< (ABS (- (+ (LET ((SELF (LET ((GLVAR4323
                                     (IF
                                      (> (TRUNCATE (CAADDR D) 2)
                                       (TRUNCATE (CADR (CADDR D)) 2))
                                      (LIST
                                       (ROUND
                                        (-
                                         (+ (CAADR D)
                                          (TRUNCATE (CAADDR D) 2))
                                         (SQRT
                                          (ABS
                                           (-
                                            (EXPT
                                             (TRUNCATE (CAADDR D) 2) 2)
                                            (EXPT
                                             (TRUNCATE (CADR (CADDR D))
                                              2)
                                             2))))))
                                       (+ (CADADR D)
                                        (TRUNCATE (CADR (CADDR D)) 2)))
                                      (LIST
                                       (+ (CAADR D)
                                        (TRUNCATE (CAADDR D) 2))
                                       (ROUND
                                        (-
                                         (+ (CADADR D)
                                          (TRUNCATE (CADR (CADDR D)) 2))
                                         (SQRT
                                          (ABS
                                           (-
                                            (EXPT
                                             (TRUNCATE (CAADDR D) 2) 2)
                                            (EXPT
                                             (TRUNCATE (CADR (CADDR D))
                                              2)
                                             2))))))))))
                                (LIST (- (CAR GLVAR4323) (CAR PT))
                                      (- (CADR GLVAR4323) (CADR PT))))))
                    (SQRT (+ (EXPT (CAR SELF) 2) (EXPT (CADR SELF) 2))))
                  (LET ((SELF (LET ((GLVAR4336
                                     (IF
                                      (> (TRUNCATE (CAADDR D) 2)
                                       (TRUNCATE (CADR (CADDR D)) 2))
                                      (LIST
                                       (ROUND
                                        (+
                                         (+ (CAADR D)
                                          (TRUNCATE (CAADDR D) 2))
                                         (SQRT
                                          (ABS
                                           (-
                                            (EXPT
                                             (TRUNCATE (CAADDR D) 2) 2)
                                            (EXPT
                                             (TRUNCATE (CADR (CADDR D))
                                              2)
                                             2))))))
                                       (+ (CADADR D)
                                        (TRUNCATE (CADR (CADDR D)) 2)))
                                      (LIST
                                       (+ (CAADR D)
                                        (TRUNCATE (CAADDR D) 2))
                                       (ROUND
                                        (+
                                         (+ (CADADR D)
                                          (TRUNCATE (CADR (CADDR D)) 2))
                                         (SQRT
                                          (ABS
                                           (-
                                            (EXPT
                                             (TRUNCATE (CAADDR D) 2) 2)
                                            (EXPT
                                             (TRUNCATE (CADR (CADDR D))
                                              2)
                                             2))))))))))
                                (LIST (- (CAR GLVAR4336) (CAR PT))
                                      (- (CADR GLVAR4336) (CADR PT))))))
                    (SQRT (+ (EXPT (CAR SELF) 2) (EXPT (CADR SELF) 2)))))
               (* 2
                  (MAX (TRUNCATE (CAADDR D) 2)
                       (TRUNCATE (CADR (CADDR D)) 2)))))
       2)))
(SETF (GET 'DRAW-ELLIPSE-SELECTEDP 'GLFNRESULTTYPE) 'BOOLEAN)


(DEFUN DRAW-TEST-ELLIPSE-SELECTEDP (E)
  (LET ((SIZE (THIRD E)) (OFFSET (SECOND E)))
    (DOTIMES (Y (+ (CADR SIZE) 10))
      (DOTIMES (X (+ (CAR SIZE) 10))
        (PRINC (IF (DRAW-ELLIPSE-SELECTEDP E
                       (LIST (+ X (CAR OFFSET) -5)
                             (+ Y (CADR OFFSET) -5))
                       (LIST 0 0))
                   "T" " ")))
      (TERPRI))))

(DEFUN DRAW-ELLIPSE-GET (DD W)
  (LET (ELL CENT)
    (SETQ CENT (DRAW-GET-CROSSHAIRS DD W))
    (SETQ ELL (WINDOW-GET-ELLIPSE W CENT))
    (LIST 'DRAW-ELLIPSE
          (LIST (- (CAAR ELL) (CAADR ELL))
                (- (CADAR ELL) (CADADR ELL)))
          (LIST (* 2 (CAADR ELL)) (* 2 (CADADR ELL))) NIL 0)))
(SETF (GET 'DRAW-ELLIPSE-GET 'GLFNRESULTTYPE) 'DRAW-ELLIPSE)


(DEFUN DRAW-NULL-DRAW (D W OFF) NIL)

(DEFUN DRAW-NULL-SELECTEDP (D PT OFF) NIL)

(DEFUN DRAW-BUTTON-DRAW (D W OFF)
  (LET ((GLVAR4338
            (LET ((GLVAR4337 (CADR D)))
              (LIST (+ (CAR OFF) (CAR GLVAR4337))
                    (+ (CADR OFF) (CADR GLVAR4337)))))
        (GLVAR4339 (COPY-LIST '(4 4))))
    (WINDOW-DRAW-BOX-XY W (CAR GLVAR4338) (CADR GLVAR4338)
        (CAR GLVAR4339) (CADR GLVAR4339) NIL)))

(DEFUN DRAW-BUTTON-SELECTEDP (D P OFF)
  (LET ((PTX (- (- (CAR P) (CAR OFF)) (CAADR D)))
        (PTY (- (- (CADR P) (CADR OFF)) (CADADR D))))
    (AND (> PTX -2) (< PTX 6) (> PTY -2) (< PTY 6))))
(SETF (GET 'DRAW-BUTTON-SELECTEDP 'GLFNRESULTTYPE) 'BOOLEAN)


(DEFUN DRAW-BUTTON-GET (DD W)
  (LET (CENT VAR)
    (PRINC "Enter button name: ")
    (SETQ VAR (READ))
    (SETQ CENT (DRAW-GET-CROSSHAIRS DD W))
    (LIST 'DRAW-BUTTON (LIST (+ -2 (CAR CENT)) (+ -2 (CADR CENT)))
          (COPY-LIST '(4 4)) VAR 0)))
(SETF (GET 'DRAW-BUTTON-GET 'GLFNRESULTTYPE) 'DRAW-BUTTON)


(DEFUN DRAW-ERASE-DRAW (D W OFF)
  (LET ((GLVAR4341
            (LET ((GLVAR4340 (CADR D)))
              (LIST (+ (CAR OFF) (CAR GLVAR4340))
                    (+ (CADR OFF) (CADR GLVAR4340)))))
        (GLVAR4342 (CADDR D)))
    (WINDOW-ERASE-AREA-XY W (CAR GLVAR4341) (CADR GLVAR4341)
        (CAR GLVAR4342) (CADR GLVAR4342))))

(DEFUN DRAW-ERASE-SELECTEDP (D P OFF)
  (LET ((PT (LIST (- (CAR P) (CAR OFF)) (- (CADR P) (CADR OFF)))))
    (AND (>= (CAR PT) (CAADR D)) (<= (CAR PT) (+ (CAADR D) (CAADDR D)))
         (>= (CADR PT) (CADADR D))
         (<= (CADR PT) (+ (CADADR D) (CADR (CADDR D)))))))
(SETF (GET 'DRAW-ERASE-SELECTEDP 'GLFNRESULTTYPE) 'BOOLEAN)


(DEFUN DRAW-ERASE-GET (DD W)
  (LET (BOX)
    (SETQ BOX (WINDOW-GET-REGION W))
    (LIST 'DRAW-ERASE (CAR BOX) (CADR BOX) NIL 0)))
(SETF (GET 'DRAW-ERASE-GET 'GLFNRESULTTYPE) 'DRAW-ERASE)


(DEFUN DRAW-DOT-DRAW (D W OFF)
  (WINDOW-DRAW-DOT-XY W (+ 2 (+ (CAR OFF) (CAADR D)))
      (+ 2 (+ (CADR OFF) (CADADR D)))))

(DEFUN DRAW-DOT-GET (DD W)
  (LET (CENT)
    (SETQ CENT (DRAW-GET-CROSSHAIRS DD W))
    (LIST 'DRAW-DOT (LIST (+ -2 (CAR CENT)) (+ -2 (CADR CENT)))
          (COPY-LIST '(4 4)) NIL 0)))
(SETF (GET 'DRAW-DOT-GET 'GLFNRESULTTYPE) 'DRAW-DOT)


(DEFUN DRAW-REFPT-DRAW (D W OFF)
  (WINDOW-DRAW-CROSSHAIRS-XY W (+ (CAR OFF) (CAADR D))
      (+ (CADR OFF) (CADADR D))))

(DEFUN DRAW-REFPT-SELECTEDP (D P OFF)
  (LET ((PTX (- (- (CAR P) (CAR OFF)) (CAADR D)))
        (PTY (- (- (CADR P) (CADR OFF)) (CADADR D))))
    (AND (> PTX -3) (< PTX 3) (> PTY -3) (< PTY 3))))
(SETF (GET 'DRAW-REFPT-SELECTEDP 'GLFNRESULTTYPE) 'BOOLEAN)


(DEFUN DRAW-REFPT-GET (DD W)
  (LET (CENT REFPT)
    (WHEN (SETQ REFPT (ASSOC 'DRAW-REFPT (CADDR DD)))
      (LET ((GC (CADDR *DRAW-WINDOW*)))
        (SETQ *WINDOW-SAVE-FUNCTION*
              (PROGN
                (XGETGCVALUES *WINDOW-DISPLAY* (CADDR *DRAW-WINDOW*)
                    GCFUNCTION *GC-VALUES*)
                (XGCVALUES-FUNCTION *GC-VALUES*)))
        (XSETFUNCTION *WINDOW-DISPLAY* GC GXCOPY)
        (SETQ *WINDOW-SAVE-FOREGROUND*
              (PROGN
                (XGETGCVALUES *WINDOW-DISPLAY* (CADDR *DRAW-WINDOW*)
                    GCFOREGROUND *GC-VALUES*)
                (XGCVALUES-FOREGROUND *GC-VALUES*)))
        (XSETFOREGROUND *WINDOW-DISPLAY* GC
            (PROGN
              (XGETGCVALUES *WINDOW-DISPLAY* (CADDR *DRAW-WINDOW*)
                  GCBACKGROUND *GC-VALUES*)
              (XGCVALUES-BACKGROUND *GC-VALUES*))))
      (DRAW-OBJECT-DRAW REFPT *DRAW-WINDOW* (COPY-LIST '(0 0)))
      (LET ((GC (CADDR *DRAW-WINDOW*)))
        (XSETFUNCTION *WINDOW-DISPLAY* GC *WINDOW-SAVE-FUNCTION*)
        (XSETFOREGROUND *WINDOW-DISPLAY* GC *WINDOW-SAVE-FOREGROUND*))
      (SETF (CADDR DD) (REMOVE REFPT (CADDR DD))))
    (SETQ CENT (DRAW-GET-CROSSHAIRS DD W))
    (LIST 'DRAW-REFPT CENT (COPY-LIST '(0 0)) NIL 0)))
(SETF (GET 'DRAW-REFPT-GET 'GLFNRESULTTYPE) 'DRAW-REFPT)


(DEFUN DRAW-DESC-REFPT (DD)
  (LET (REFPT)
    (SETQ REFPT (ASSOC 'DRAW-REFPT (CADDR DD)))
    (IF REFPT (CADR REFPT) (COPY-LIST '(0 0)))))
(SETF (GET 'DRAW-DESC-REFPT 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-TEXT-DRAW (D W OFF)
  (LET ((SSTR (STRINGIFY (CADDDR D))))
    (XDRAWIMAGESTRING *WINDOW-DISPLAY* (CADR W) (CADDR W)
        (+ (CAR OFF) (CAADR D))
        (+ -4 (- (CADDDR W) (+ (CADR OFF) (CADADR D))))
        (GET-C-STRING SSTR) (LENGTH SSTR))))

(DEFUN DRAW-TEXT-DRAW-OUTLINE (W X Y D)
  (SETF (SECOND D) (LIST X Y))
  (WINDOW-DRAW-BOX-XY W X (+ 2 Y) (CAADDR D) (CADR (CADDR D))))

(DEFUN DRAW-TEXT-SELECTEDP (D PT OFF)
  (LET ((PTP (LIST (- (CAR PT) (CAR OFF)) (- (CADR PT) (CADR OFF)))))
    (AND (>= (CAR PTP) (+ -2 (+ (CAADR D) (MIN 0 (CAADDR D)))))
         (<= (CAR PTP)
             (+ 2
                (+ (+ (CAADR D) (MIN 0 (CAADDR D))) (ABS (CAADDR D)))))
         (>= (CADR PTP) (+ -2 (+ (CADADR D) (MIN 0 (CADR (CADDR D))))))
         (<= (CADR PTP)
             (+ 2
                (+ (+ (CADADR D) (MIN 0 (CADR (CADDR D))))
                   (ABS (CADR (CADDR D)))))))))
(SETF (GET 'DRAW-TEXT-SELECTEDP 'GLFNRESULTTYPE) 'BOOLEAN)


(DEFUN DRAW-TEXT-GET (DD W)
  (LET (TXT LNG OFF)
    (PRINC "Enter text string: ")
    (SETQ TXT (STRINGIFY (READ)))
    (SETQ LNG
          (LET ((SSTR (STRINGIFY TXT)))
            (XTEXTWIDTH (SEVENTH W) (GET-C-STRING SSTR) (LENGTH SSTR))))
    (SETQ OFF (WINDOW-GET-BOX-POSITION W LNG 14))
    (LIST 'DRAW-TEXT OFF (LIST LNG 14) TXT 0)))
(SETF (GET 'DRAW-TEXT-GET 'GLFNRESULTTYPE) 'DRAW-TEXT)


(DEFUN DRAW-SNAPP (P1 OFF P2X P2Y)
  (IF (AND (< (ABS (- (- (CAR P1) (CAR OFF)) P2X)) 4)
           (< (ABS (- (- (CADR P1) (CADR OFF)) P2Y)) 4))
      (LIST (+ (CAR OFF) P2X) (+ (CADR OFF) P2Y))))
(SETF (GET 'DRAW-SNAPP 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-DOT-SNAP (D P OFF)
  (DRAW-SNAPP P OFF (+ 2 (CAADR D)) (+ 2 (CADADR D))))
(SETF (GET 'DRAW-DOT-SNAP 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-REFPT-SNAP (D P OFF)
  (DRAW-SNAPP P OFF (CAADR D) (CADADR D)))
(SETF (GET 'DRAW-REFPT-SNAP 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-LINE-SNAP (D P OFF)
  (OR (DRAW-SNAPP P OFF (CAADR D) (CADADR D))
      (DRAW-SNAPP P OFF (+ (CAADR D) (CAADDR D))
          (+ (CADADR D) (CADR (CADDR D))))))
(SETF (GET 'DRAW-LINE-SNAP 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-BOX-SNAP (D P OFF)
  (LET ((XOFF (CAADR D)) (YOFF (CADADR D)) (XSIZE (CAADDR D))
        (YSIZE (CADR (CADDR D))))
    (OR (DRAW-SNAPP P OFF XOFF YOFF)
        (DRAW-SNAPP P OFF (+ XOFF XSIZE) (+ YOFF YSIZE))
        (DRAW-SNAPP P OFF (+ XOFF XSIZE) YOFF)
        (DRAW-SNAPP P OFF XOFF (+ YOFF YSIZE))
        (DRAW-SNAPP P OFF (+ XOFF (TRUNCATE XSIZE 2)) YOFF)
        (DRAW-SNAPP P OFF XOFF (+ YOFF (TRUNCATE YSIZE 2)))
        (DRAW-SNAPP P OFF (+ XOFF (TRUNCATE XSIZE 2)) (+ YOFF YSIZE))
        (DRAW-SNAPP P OFF (+ XOFF XSIZE) (+ YOFF (TRUNCATE YSIZE 2))))))
(SETF (GET 'DRAW-BOX-SNAP 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-CIRCLE-SNAP (D P OFF)
  (OR (DRAW-SNAPP P OFF (+ (CAADR D) (TRUNCATE (CAADDR D) 2))
          (+ (CADADR D) (TRUNCATE (CAADDR D) 2)))
      (DRAW-SNAPP P OFF (+ (CAADR D) (TRUNCATE (CAADDR D) 2))
          (CADADR D))
      (DRAW-SNAPP P OFF (CAADR D)
          (+ (CADADR D) (TRUNCATE (CAADDR D) 2)))
      (DRAW-SNAPP P OFF (+ (CAADR D) (TRUNCATE (CAADDR D) 2))
          (+ (CADADR D) (CADR (CADDR D))))
      (DRAW-SNAPP P OFF (+ (CAADR D) (CAADDR D))
          (+ (CADADR D) (TRUNCATE (CAADDR D) 2)))))
(SETF (GET 'DRAW-CIRCLE-SNAP 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-ELLIPSE-SNAP (D P OFF)
  (OR (DRAW-SNAPP P OFF (+ (CAADR D) (TRUNCATE (CAADDR D) 2))
          (+ (CADADR D) (TRUNCATE (CADR (CADDR D)) 2)))
      (DRAW-SNAPP P OFF (+ (CAADR D) (TRUNCATE (CAADDR D) 2))
          (CADADR D))
      (DRAW-SNAPP P OFF (CAADR D)
          (+ (CADADR D) (TRUNCATE (CADR (CADDR D)) 2)))
      (DRAW-SNAPP P OFF (+ (CAADR D) (TRUNCATE (CAADDR D) 2))
          (+ (CADADR D) (CADR (CADDR D))))
      (DRAW-SNAPP P OFF (+ (CAADR D) (CAADDR D))
          (+ (CADADR D) (TRUNCATE (CADR (CADDR D)) 2)))))
(SETF (GET 'DRAW-ELLIPSE-SNAP 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-RCBOX-SNAP (D P OFF)
  (LET ((RX (TRUNCATE (CAADDR D) 2))
        (RY (TRUNCATE (CADR (CADDR D)) 2)))
    (OR (DRAW-SNAPP P OFF (+ (CAADR D) RX) (CADADR D))
        (DRAW-SNAPP P OFF (CAADR D) (+ (CADADR D) RY))
        (DRAW-SNAPP P OFF (+ (CAADR D) RX)
            (+ (CADADR D) (CADR (CADDR D))))
        (DRAW-SNAPP P OFF (+ (CAADR D) (CAADDR D)) (+ (CADADR D) RY)))))
(SETF (GET 'DRAW-RCBOX-SNAP 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-NO-SNAP (D P OFF) NIL)

(DEFUN DRAW-MULTI-DRAW (D W OFF)
  (DOLIST (SUBD (CADDDR D))
    (DRAW-OBJECT-DRAW SUBD W
        (LET ((GLVAR4346 (CADR D)))
          (LIST (+ (CAR GLVAR4346) (CAR OFF))
                (+ (CADR GLVAR4346) (CADR OFF)))))))

(DEFUN DRAW-INIT-MENUS ()
  (LET ((W (DRAW-WINDOW)))
    (WINDOW-CLEAR W)
    (DOLIST (FN '(DRAW-MENU-RECTANGLE DRAW-MENU-CIRCLE
                     DRAW-MENU-ELLIPSE DRAW-MENU-LINE DRAW-MENU-ARROW
                     DRAW-MENU-DOT DRAW-MENU-BUTTON DRAW-MENU-TEXT))
      (SETF (GET FN 'DISPLAY-SIZE) '(30 20)))
    (SETQ *DRAW-MENU-SET* (MENU-SET-CREATE W NIL))
    (MENU-SET-ADD-MENU *DRAW-MENU-SET* 'DRAW NIL "Draw"
        '((DRAW-MENU-RECTANGLE . RECTANGLE) (DRAW-MENU-RCBOX . RCBOX)
          (DRAW-MENU-CIRCLE . CIRCLE) (DRAW-MENU-ELLIPSE . ELLIPSE)
          (DRAW-MENU-LINE . LINE) (DRAW-MENU-ARROW . ARROW)
          (DRAW-MENU-DOT . DOT) (" " . ERASE)
          (DRAW-MENU-BUTTON . BUTTON) (DRAW-MENU-TEXT . TEXT)
          (DRAW-MENU-REFPT . REFPT))
        (LIST 0 0))
    (MENU-SET-ADJUST *DRAW-MENU-SET* 'DRAW 'TOP NIL 1)
    (MENU-SET-ADJUST *DRAW-MENU-SET* 'DRAW 'RIGHT NIL 2)
    (MENU-SET-ADD-MENU *DRAW-MENU-SET* 'COMMAND NIL "Commands"
        '(("Done" . DONE) ("Move" . MOVE) ("Delete" . DELETE)
          ("Copy" . COPY) ("Redraw" . REDRAW) ("Origin" . ORIGIN)
          ("LaTex Mode" . LATEXMODE) ("Make Program" . PROGRAM)
          ("Make LaTex" . LATEX))
        (LIST 0 0))
    (MENU-SET-ADJUST *DRAW-MENU-SET* 'COMMAND 'TOP 'DRAW 5)
    (MENU-SET-ADJUST *DRAW-MENU-SET* 'COMMAND 'RIGHT NIL 2)))

(DEFUN DRAW-MENU-RECTANGLE (W X Y)
  (WINDOW-DRAW-BOX-XY W (+ X 3) (+ Y 3) 24 14 1))

(DEFUN DRAW-MENU-RCBOX (W X Y)
  (WINDOW-DRAW-RCBOX-XY W (+ X 3) (+ Y 3) 24 14 3 1))

(DEFUN DRAW-MENU-CIRCLE (W X Y)
  (WINDOW-DRAW-CIRCLE-XY W (+ X 15) (+ Y 10) 8 1))

(DEFUN DRAW-MENU-ELLIPSE (W X Y)
  (WINDOW-DRAW-ELLIPSE-XY W (+ X 15) (+ Y 10) 12 8 1))

(DEFUN DRAW-MENU-LINE (W X Y)
  (WINDOW-DRAW-LINE-XY W (+ X 4) (+ Y 4) (+ X 26) (+ Y 16) 1))

(DEFUN DRAW-MENU-ARROW (W X Y)
  (WINDOW-DRAW-ARROW-XY W (+ X 4) (+ Y 4) (+ X 26) (+ Y 16) 1))

(DEFUN DRAW-MENU-DOT (W X Y) (WINDOW-DRAW-DOT-XY W (+ X 15) (+ Y 10)))

(DEFUN DRAW-MENU-BUTTON (W X Y)
  (WINDOW-DRAW-BOX-XY W (+ X 14) (+ Y 5) 4 4 1))

(DEFUN DRAW-MENU-TEXT (W X Y)
  (WINDOW-PRINTAT-XY W "A" (+ X 12) (+ Y 5)))

(DEFUN DRAW-MENU-REFPT (W X Y)
  (WINDOW-DRAW-CROSSHAIRS-XY W (+ X 15) (+ Y 9))
  (WINDOW-DRAW-CIRCLE-XY W (+ X 15) (+ Y 9) 2))

(DEFUN LATEX-LINE (FROMX FROMY X Y &OPTIONAL ARROWFLG)
  (LET (DX DY SX SY SIZ ERR ERRB)
    (SETQ DX (- X FROMX))
    (SETQ DY (- Y FROMY))
    (IF (= DX 0)
        (PROGN
          (SETQ SX 0)
          (SETQ SY (IF (>= DY 0) 1 -1))
          (SETQ SIZ (* (ABS DY) *DRAW-LATEX-FACTOR*)))
        (IF (= DY 0)
            (PROGN
              (SETQ SX (IF (>= DX 0) 1 -1))
              (SETQ SY 0)
              (SETQ SIZ (* (ABS DX) *DRAW-LATEX-FACTOR*)))
            (PROGN
              (SETQ ERR 9999)
              (SETQ SIZ (* (ABS DX) *DRAW-LATEX-FACTOR*))
              (DOTIMES (I (IF ARROWFLG 4 6))
                (DOTIMES (J (IF ARROWFLG 4 6))
                  (SETQ ERRB
                        (ABS (- (/ (FLOAT (1+ I)) (FLOAT (1+ J)))
                                (ABS (/ (FLOAT DX) (FLOAT DY))))))
                  (IF (AND (= (GCD (1+ I) (1+ J)) 1) (< ERRB ERR))
                      (PROGN
                        (SETQ ERR ERRB)
                        (SETQ SX (1+ I))
                        (SETQ SY (1+ J))))))
              (SETQ SX (* SX (LATEX-SIGN DX)))
              (SETQ SY (* SY (LATEX-SIGN DY))))))
    (FORMAT T "   \\put(~5,2F,~5,2F) {\\~A(~D,~D){~5,2F}}~%"
            (* FROMX *DRAW-LATEX-FACTOR*) (* FROMY *DRAW-LATEX-FACTOR*)
            (IF ARROWFLG "vector" "line") SX SY SIZ)))

(DEFUN LATEX-SIGN (X) (IF (>= X 0) 1 -1))

(DEFUN DRAW-OUTPUT (OUTFILENAME &OPTIONAL NAMES)
  (PROG (PRETTYSAVE LENGTHSAVE D FNNAME CODE)
    (OR NAMES (SETQ NAMES *DRAW-OBJECTS*))
    (IF (SYMBOLP NAMES) (SETQ NAMES (LIST NAMES)))
    (WITH-OPEN-FILE
        (OUTFILE OUTFILENAME :DIRECTION :OUTPUT :IF-EXISTS :SUPERSEDE)
      (SETQ PRETTYSAVE *PRINT-PRETTY*)
      (SETQ LENGTHSAVE *PRINT-LENGTH*)
      (SETQ *PRINT-PRETTY* T)
      (SETQ *PRINT-LENGTH* 80)
      (FORMAT OUTFILE "; ~A   ~A~%" OUTFILENAME (DRAW-GET-TIME-STRING))
      (DOLIST (NAME NAMES)
        (IF (SETQ D (GET NAME 'DRAW-DESCR))
            (PROGN
              (TERPRI OUTFILE)
              (PRINT (LIST 'SETF
                           (LIST 'GET (LIST 'QUOTE NAME) ''DRAW-DESCR)
                           (LIST 'QUOTE D))
                     OUTFILE)
              (IF (AND (SETQ FNNAME (DRAW-DESC-FNNAME D))
                       (SETQ CODE (SYMBOL-FUNCTION FNNAME)))
                  (PROGN
                    (TERPRI OUTFILE)
                    (PRINT (CONS 'DEFUN
                                 (IF (EQ (CAR CODE) 'LAMBDA-BLOCK)
                                     (CDR CODE)
                                     (CONS FNNAME (CDR CODE))))
                           OUTFILE)))))
        (IF (SETQ D (GET NAME 'PICMENU-SPEC))
            (PROGN
              (TERPRI OUTFILE)
              (PRINT (LIST 'SETF
                           (LIST 'GET (LIST 'QUOTE NAME)
                                 ''PICMENU-SPEC)
                           (LIST 'QUOTE D))
                     OUTFILE))))
      (TERPRI OUTFILE)
      (SETQ *PRINT-PRETTY* PRETTYSAVE)
      (SETQ *PRINT-LENGTH* LENGTHSAVE))
    (RETURN OUTFILENAME)))

(DEFUN DRAW-GET-TIME-STRING ()
  (LET (SECOND MINUTE HOUR DATE MONTH YEAR)
    (MULTIPLE-VALUE-SETQ (SECOND MINUTE HOUR DATE MONTH YEAR)
        (GET-DECODED-TIME))
    (FORMAT NIL "~2D ~A ~4D ~2D:~2D:~2D" DATE
            (NTH (1- MONTH)
                 '("Jan" "Feb" "Mar" "Apr" "May" "Jun" "Jul" "Aug"
                   "Sep" "Oct" "Nov" "Dec"))
            YEAR HOUR MINUTE SECOND)))

(DEFUN COMPILE-DRAW ()
  (GLCOMPFILES *DIRECTORY* '("glisp/vector.lsp" "X/dwindow.lsp")
      '("glisp/menu-set.lsp" "glisp/draw.lsp") "glisp/drawtrans.lsp"
      "glisp/draw-header.lsp")
  (CF DRAWTRANS))

(DEFUN DRAW-OUT (&OPTIONAL FILE NAMES)
  (OR NAMES (SETQ NAMES *DRAW-OBJECTS*))
  (IF (NOT (CONSP NAMES)) (SETQ NAMES (LIST NAMES)))
  (DRAW-OUTPUT (OR FILE "glisp/draw.del") NAMES)
  (SETQ *DRAW-OBJECTS* (SET-DIFFERENCE *DRAW-OBJECTS* NAMES)))
