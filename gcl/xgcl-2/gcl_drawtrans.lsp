; 27 Jan 2006 14:58:53 CST
; drawtrans.lsp  -- translation of draw.lsp       Gordon S. Novak Jr.

; Copyright (c) 2006 Gordon S. Novak Jr. and The University of Texas at Austin.

; This program is free software; you can redistribute it and/or modify
; it under the terms of the GNU General Public License as published by
; the Free Software Foundation; either version 2 of the License, or
; (at your option) any later version.

; This program is distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
; GNU General Public License for more details.

; You should have received a copy of the GNU General Public License
; along with this program; if not, write to the Free Software
; Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

; Written by: Gordon S. Novak Jr., Department of Computer Sciences,
; University of Texas at Austin  78712.    novak@cs.utexas.edu

(IN-PACKAGE :USER)

(defmacro while (test &rest forms) `(loop (unless ,test (return)) ,@forms) )

(defmacro nconc1 (lst x) `(nconc ,lst (cons ,x nil)))

(defmacro glmethod (class selector)
  `(cadr (assoc ,selector (getf (cdr (get ,class 'glstructure)) 'msg))) )

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
(SETF (GET 'MENU-SELECTION 'GLSTRUCTURE)
      '((LIST (PORT SYMBOL) (MENU-NAME SYMBOL) (BUTTON INTEGER))))
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
         (NEW-CONN MENU-CONNS-NEW-CONN)
         (NAMED-MENU MENU-CONNS-NAMED-MENU)
         (NAMED-ITEM MENU-CONNS-NAMED-ITEM))))


(DEFUN MENU-SET-CREATE (W &OPTIONAL FN) (LIST 'MENU-SET W NIL FN))
(SETF (GET 'MENU-SET-CREATE 'GLARGUMENTS)
      '((W WINDOW) (&OPTIONAL NIL) (FN NIL)))
(SETF (GET 'MENU-SET-CREATE 'GLFNRESULTTYPE) 'MENU-SET)


(DEFUN MENU-SET-SELECT (MS &OPTIONAL REDRAW ENABLED)
  (LET (RES RESB ITM SEL LASTX LASTY)
    (IF REDRAW (MENU-SET-DRAW MS))
    (WHILE (NOT (OR RES RESB))
           (SETQ ITM
                 (WINDOW-TRACK-MOUSE (CADR MS)
                     #'(LAMBDA (X Y CODE)
                         (OR (AND (PLUSP CODE) (SETQ LASTX X)
                                  (SETQ LASTY Y) CODE)
                             (SOME #'(LAMBDA (GLVAR22053)
                                       (IF
                                        (AND
                                         (>= X
                                          (FIFTH (CADDR GLVAR22053)))
                                         (<= X
                                          (+ (FIFTH (CADDR GLVAR22053))
                                           (SEVENTH (CADDR GLVAR22053))))
                                         (>= Y
                                          (SIXTH (CADDR GLVAR22053)))
                                         (<= Y
                                          (+ (SIXTH (CADDR GLVAR22053))
                                           (EIGHTH (CADDR GLVAR22053)))))
                                        GLVAR22053))
                                   (CADDR MS))))))
           (IF (NUMBERP ITM)
               (SETQ RESB (LIST (LIST LASTX LASTY) 'BACKGROUND ITM))
               (WHEN (OR (ATOM ENABLED) (MEMBER (CAR ITM) ENABLED))
                 (SETQ SEL (MENU-MSELECT (CADDR ITM) (EQ ENABLED T)))
                 (IF SEL
                     (SETQ RES (LIST SEL (CAR ITM) *WINDOW-MENU-CODE*))
                     (IF (AND *WINDOW-MENU-CODE*
                              (NOT (ZEROP *WINDOW-MENU-CODE*)))
                         (SETQ RES
                               (LIST NIL (CAR ITM) *WINDOW-MENU-CODE*)))))))
    (WINDOW-FORCE-OUTPUT (CADR MS))
    (OR RES RESB)))
(SETF (GET 'MENU-SET-SELECT 'GLARGUMENTS)
      '((MS MENU-SET) (&OPTIONAL NIL) (REDRAW BOOLEAN)
        (ENABLED (LISTOF SYMBOL))))
(SETF (GET 'MENU-SET-SELECT 'GLFNRESULTTYPE) 'MENU-SELECTION)


(DEFUN MENU-SET-ADD-MENU (MS NAME SYM TITLE ITEMS &OPTIONAL OFFSET)
  (LET (MENU)
    (SETQ MENU
          (MENU-CREATE ITEMS TITLE (CADR MS) (CAR OFFSET) (CADR OFFSET)
              T T))
    (MENU-INIT MENU)
    (IF (NOT OFFSET)
        (SETQ OFFSET
              (WINDOW-GET-BOX-POSITION (CADR MS) (SEVENTH MENU)
                  (EIGHTH MENU))))
    (SETF (FIFTH MENU) (CAR OFFSET))
    (SETF (SIXTH MENU) (CADR OFFSET))
    (MENU-SET-ADD-ITEM MS NAME SYM MENU)))

(DEFUN MENU-SET-ADD-ITEM (MS NAME SYM MENU)
  (SETF (CADDR MS) (NCONC (CADDR MS) (CONS (LIST NAME SYM MENU) NIL))))
(SETF (GET 'MENU-SET-ADD-ITEM 'GLARGUMENTS)
      '((MS MENU-SET) (NAME SYMBOL) (SYM SYMBOL) (MENU MENU)))
(SETF (GET 'MENU-SET-ADD-ITEM 'GLFNRESULTTYPE) '(LISTOF MENU-SET-ITEM))


(DEFUN MENU-SET-REMOVE-ITEMS (MS) (SETF (CADDR MS) NIL))
(SETF (GET 'MENU-SET-REMOVE-ITEMS 'GLARGUMENTS) '((MS MENU-SET)))
(SETF (GET 'MENU-SET-REMOVE-ITEMS 'GLFNRESULTTYPE)
      '(LISTOF MENU-SET-ITEM))


(DEFUN MENU-SET-ADD-PICMENU
       (MS NAME SYM TITLE SPEC &OPTIONAL OFFSET NOBOX)
  (LET (MENU MAXWIDTH MAXHEIGHT)
    (IF (AND SPEC (SYMBOLP SPEC)) (SETQ SPEC (GET SPEC 'PICMENU-SPEC)))
    (SETQ MENU
          (PICMENU-CREATE-FROM-SPEC SPEC TITLE (CADR MS) (CAR OFFSET)
              (CADR OFFSET) T T (NOT NOBOX)))
    (SETQ MAXWIDTH
          (MAX (IF TITLE (+ 6 (* 9 (LENGTH TITLE))) 0) (CADR SPEC)))
    (SETQ MAXHEIGHT (+ (IF TITLE 15 0) (CADDR SPEC)))
    (IF (NOT OFFSET)
        (SETQ OFFSET
              (WINDOW-GET-BOX-POSITION (CADR MS) MAXWIDTH MAXHEIGHT)))
    (SETF (FIFTH MENU) (CAR OFFSET))
    (SETF (SIXTH MENU) (CADR OFFSET))
    (MENU-SET-ADD-ITEM MS NAME SYM MENU)))
(SETF (GET 'MENU-SET-ADD-PICMENU 'GLARGUMENTS)
      '((MS MENU-SET) (NAME SYMBOL) (SYM SYMBOL) (TITLE STRING)
        (SPEC PICMENU-SPEC) (&OPTIONAL NIL) (OFFSET VECTOR)
        (NOBOX BOOLEAN)))
(SETF (GET 'MENU-SET-ADD-PICMENU 'GLFNRESULTTYPE)
      '(LISTOF MENU-SET-ITEM))


(DEFUN MENU-SET-ADD-COMPONENT (MS NAME &OPTIONAL OFFSET)
  (MENU-SET-ADD-PICMENU MS (MENU-SET-NAME NAME) NAME NIL NAME OFFSET T))
(SETF (GET 'MENU-SET-ADD-COMPONENT 'GLARGUMENTS)
      '((MS MENU-SET) (NAME SYMBOL) (&OPTIONAL NIL) (OFFSET VECTOR)))
(SETF (GET 'MENU-SET-ADD-COMPONENT 'GLFNRESULTTYPE)
      '(LISTOF MENU-SET-ITEM))


(DEFUN MENU-SET-ADD-BARMENU (MS NAME SYM MENU TITLE &OPTIONAL OFFSET)
  (BARMENU-INIT MENU)
  (IF (NOT OFFSET)
      (SETQ OFFSET
            (WINDOW-GET-BOX-POSITION (CADR MS) (SEVENTH MENU)
                (EIGHTH MENU))))
  (SETF (FIFTH MENU) (CAR OFFSET))
  (SETF (SIXTH MENU) (CADR OFFSET))
  (MENU-SET-ADD-ITEM MS NAME SYM MENU))
(SETF (GET 'MENU-SET-ADD-BARMENU 'GLARGUMENTS)
      '((MS MENU-SET) (NAME SYMBOL) (SYM SYMBOL) (MENU BARMENU)
        (TITLE STRING) (&OPTIONAL NIL) (OFFSET VECTOR)))
(SETF (GET 'MENU-SET-ADD-BARMENU 'GLFNRESULTTYPE)
      '(LISTOF MENU-SET-ITEM))


(DEFUN MENU-SET-NAME (NM)
  (INTERN (SYMBOL-NAME (GENSYM (SYMBOL-NAME NM)))))
(SETF (GET 'MENU-SET-NAME 'GLARGUMENTS) '((NM SYMBOL)))
(SETF (GET 'MENU-SET-NAME 'GLFNRESULTTYPE) 'SYMBOL)


(DEFUN MENU-SET-NAMED-ITEM (MS NAME) (ASSOC NAME (CADDR MS)))
(SETF (GET 'MENU-SET-NAMED-ITEM 'GLARGUMENTS)
      '((MS MENU-SET) (NAME SYMBOL)))
(SETF (GET 'MENU-SET-NAMED-ITEM 'GLFNRESULTTYPE) 'MENU-SET-ITEM)


(DEFUN MENU-SET-NAMED-MENU (MS NAME)
  (CADDR (MENU-SET-NAMED-ITEM MS NAME)))
(SETF (GET 'MENU-SET-NAMED-MENU 'GLARGUMENTS)
      '((MS MENU-SET) (NAME SYMBOL)))
(SETF (GET 'MENU-SET-NAMED-MENU 'GLFNRESULTTYPE) 'MENU-SET-MENU)


(DEFUN MENU-CONNS-NAMED-ITEM (MC NAME)
  (MENU-SET-NAMED-ITEM (CADR MC) NAME))
(SETF (GET 'MENU-CONNS-NAMED-ITEM 'GLARGUMENTS)
      '((MC MENU-CONNS) (NAME SYMBOL)))
(SETF (GET 'MENU-CONNS-NAMED-ITEM 'GLFNRESULTTYPE) 'MENU-SET-ITEM)


(DEFUN MENU-CONNS-NAMED-MENU (MC NAME)
  (MENU-SET-NAMED-MENU (CADR MC) NAME))
(SETF (GET 'MENU-CONNS-NAMED-MENU 'GLARGUMENTS)
      '((MC MENU-CONNS) (NAME SYMBOL)))
(SETF (GET 'MENU-CONNS-NAMED-MENU 'GLFNRESULTTYPE) 'MENU-SET-MENU)


(DEFUN MENU-SET-FIND-ITEM (MS POS)
  (LET (MITEM)
    (DOLIST (MI (CADDR MS))
      (IF (AND (>= (CAR POS)
                   (LET ((SELF (CADDR MI)))
                     (IF (CADDR SELF) (FIFTH SELF) 0)))
               (<= (CAR POS)
                   (+ (LET ((SELF (CADDR MI)))
                        (IF (CADDR SELF) (FIFTH SELF) 0))
                      (SEVENTH (CADDR MI))))
               (>= (CADR POS)
                   (LET ((SELF (CADDR MI)))
                     (IF (CADDR SELF) (SIXTH SELF) 0)))
               (<= (CADR POS)
                   (+ (LET ((SELF (CADDR MI)))
                        (IF (CADDR SELF) (SIXTH SELF) 0))
                      (EIGHTH (CADDR MI)))))
          (SETQ MITEM MI)))
    MITEM))
(SETF (GET 'MENU-SET-FIND-ITEM 'GLARGUMENTS)
      '((MS MENU-SET) (POS VECTOR)))
(SETF (GET 'MENU-SET-FIND-ITEM 'GLFNRESULTTYPE) 'MENU-SET-ITEM)


(DEFUN MENU-SET-DELETE-ITEM (MS MI)
  (SETF (CADDR MS) (REMOVE MI (CADDR MS))))
(SETF (GET 'MENU-SET-DELETE-ITEM 'GLARGUMENTS)
      '((MS MENU-SET) (MI MENU-SET-ITEM)))
(SETF (GET 'MENU-SET-DELETE-ITEM 'GLFNRESULTTYPE)
      '(LISTOF MENU-SET-ITEM))


(DEFUN MENU-SET-MOVE (MS)
  (LET (SEL M)
    (SETQ SEL (MENU-SET-SELECT MS NIL T))
    (SETQ M (MENU-SET-NAMED-MENU MS (CADR SEL)))
    (MENU-REPOSITION M)))

(DEFUN MENU-MDRAW (M)
  (CASE (FIRST M)
    (MENU (MENU-DRAW M))
    (PICMENU (PICMENU-DRAW M))
    (BARMENU (BARMENU-DRAW M))
    (TEXTMENU (TEXTMENU-DRAW M))
    (EDITMENU (EDITMENU-DRAW M))
    (T (GLSEND M DRAW))))

(DEFUN MENU-MSELECT (M &OPTIONAL ANYCLICK)
  (CASE (FIRST M)
    (MENU (MENU-SELECT M T))
    (PICMENU (PICMENU-SELECT M T ANYCLICK))
    (BARMENU (BARMENU-SELECT M))
    (TEXTMENU (TEXTMENU-SELECT M T))
    (EDITMENU (EDITMENU-SELECT M T))
    (T (GLSEND M SELECT))))

(DEFUN MENU-MITEM-POSITION (M NAME LOC)
  (CASE (FIRST M)
    (MENU (MENU-ITEM-POSITION M NAME LOC))
    (PICMENU (PICMENU-ITEM-POSITION M NAME LOC))
    (T (GLSEND M ITEM-POSITION NAME LOC))))

(DEFUN MENU-SET-DRAW (MS)
  (WINDOW-OPEN (CADR MS))
  (DOLIST (ITEM (CADDR MS)) (MENU-MDRAW (CADDR ITEM))))

(DEFUN MENU-SET-ITEM-POSITION (MS DESC &OPTIONAL LOC)
  (LET (M)
    (SETQ M (MENU-SET-NAMED-MENU MS (CADR DESC)))
    (OR (MENU-MITEM-POSITION M (CAR DESC) LOC)
        (MENU-MITEM-POSITION M NIL LOC))))
(SETF (GET 'MENU-SET-ITEM-POSITION 'GLARGUMENTS)
      '((MS MENU-SET) (DESC MENU-PORT) (&OPTIONAL NIL) (LOC SYMBOL)))
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
    (WINDOW-DRAW-CIRCLE (CADR MS) PA 3)
    (WINDOW-DRAW-LINE (CADR MS) PA PB)
    (WINDOW-DRAW-CIRCLE (CADR MS) PB 3)
    (WINDOW-FORCE-OUTPUT (CADR MS))))

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
(SETF (GET 'MENU-SET-ADJUST 'GLARGUMENTS)
      '((MS MENU-SET) (NAME SYMBOL) (EDGE SYMBOL) (FROM SYMBOL)
        (OFFSET INTEGER)))
(SETF (GET 'MENU-SET-ADJUST 'GLFNRESULTTYPE) 'INTEGER)


(DEFUN MENU-CONNS-CREATE (MS) (LIST 'MENU-CONNS MS NIL))
(SETF (GET 'MENU-CONNS-CREATE 'GLARGUMENTS) '((MS MENU-SET)))
(SETF (GET 'MENU-CONNS-CREATE 'GLFNRESULTTYPE) 'MENU-CONNS)


(DEFUN MENU-CONNS-DRAW (MC)
  (MENU-SET-DRAW (CADR MC))
  (DOLIST (C (CADDR MC)) (MENU-SET-DRAW-CONN (CADR MC) C)))

(DEFUN MENU-CONNS-MOVE (MC)
  (MENU-SET-MOVE (CADR MC))
  (WINDOW-CLEAR (CADADR MC))
  (MENU-CONNS-DRAW MC))

(DEFUN MENU-CONNS-REDRAW (MC)
  (WINDOW-CLEAR (CADADR MC))
  (MENU-CONNS-DRAW MC))

(DEFUN MENU-CONNS-ADD-CONN (MC)
  (LET (SEL SELB CONN)
    (SETQ SEL (MENU-SET-SELECT (CADR MC)))
    (IF (EQ (CADR SEL) 'BACKGROUND) SEL
        (PROGN
          (SETQ SELB (MENU-SET-SELECT (CADR MC)))
          (WHEN (NOT (EQ (CADR SELB) 'BACKGROUND))
            (SETQ CONN (LIST SEL SELB))
            (MENU-SET-DRAW-CONN (CADR MC) CONN)
            (SETF (CADDR MC) (NCONC (CADDR MC) (CONS CONN NIL))))
          NIL))))
(SETF (GET 'MENU-CONNS-ADD-CONN 'GLARGUMENTS) '((MC MENU-CONNS)))
(SETF (GET 'MENU-CONNS-ADD-CONN 'GLFNRESULTTYPE) 'MENU-SELECTION)


(DEFUN MENU-CONNS-NEW-CONN (MC FROMNAME FROMPORT TONAME TOPORT)
  (LET (CONN)
    (SETQ CONN (LIST (LIST FROMPORT FROMNAME) (LIST TOPORT TONAME)))
    (SETF (CADDR MC) (NCONC (CADDR MC) (CONS CONN NIL)))))
(SETF (GET 'MENU-CONNS-NEW-CONN 'GLARGUMENTS)
      '((MC MENU-CONNS) (FROMNAME SYMBOL) (FROMPORT SYMBOL)
        (TONAME SYMBOL) (TOPORT SYMBOL)))
(SETF (GET 'MENU-CONNS-NEW-CONN 'GLFNRESULTTYPE)
      '(LISTOF MENU-SET-CONN))


(DEFUN MENU-CONNS-ADD-ITEM (MC NAME SYM MENU)
  (MENU-SET-ADD-ITEM (CADR MC) NAME SYM MENU))
(SETF (GET 'MENU-CONNS-ADD-ITEM 'GLARGUMENTS)
      '((MC MENU-CONNS) (NAME SYMBOL) (SYM SYMBOL) (MENU MENU)))
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
        (WHEN (< (ABS (/ (- (* (- (CAADR LS) (CAAR LS))
                               (- (CADR PT) (CADAR LS)))
                            (* (- (CADADR LS) (CADAR LS))
                               (- (CAR PT) (CAAR LS))))
                         (SQRT (+ (EXPT (- (CAADR LS) (CAAR LS)) 2)
                                  (EXPT (- (CADADR LS) (CADAR LS)) 2)))))
                 5)
          (SETQ FOUND T)
          (SETQ RES CONN))))
    RES))
(SETF (GET 'MENU-CONNS-FIND-CONN 'GLARGUMENTS)
      '((MC MENU-CONNS) (PT VECTOR)))
(SETF (GET 'MENU-CONNS-FIND-CONN 'GLFNRESULTTYPE) 'MENU-SET-CONN)


(DEFUN MENU-CONNS-FIND-ITEM (MC PT) (MENU-SET-FIND-ITEM (CADR MC) PT))
(SETF (GET 'MENU-CONNS-FIND-ITEM 'GLARGUMENTS)
      '((MC MENU-CONNS) (PT VECTOR)))
(SETF (GET 'MENU-CONNS-FIND-ITEM 'GLFNRESULTTYPE) 'MENU-SET-ITEM)


(DEFUN MENU-CONNS-DELETE-CONN (MC CONN)
  (SETF (CADDR MC) (REMOVE CONN (CADDR MC))))
(SETF (GET 'MENU-CONNS-DELETE-CONN 'GLARGUMENTS)
      '((MC MENU-CONNS) (CONN MENU-SET-CONN)))
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
(SETF (GET 'MENU-CONNS-REMOVE-ITEMS 'GLARGUMENTS) '((MC MENU-CONNS)))
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
(SETF (GET 'MENU-CONNS-FIND-CONNS 'GLARGUMENTS)
      '((MC MENU-CONNS) (BOXNAME SYMBOL) (PORT SYMBOL)))
(SETF (GET 'MENU-CONNS-FIND-CONNS 'GLFNRESULTTYPE) '(LISTOF MENU-PORT))


(DEFUN COMPILE-MENU-SET ()
  (GLCOMPFILES *DIRECTORY* '("glisp/vector.lsp" "X/dwindow.lsp")
      '("glisp/menu-set.lsp") "glisp/menu-settrans.lsp"
      "glisp/menu-set-header.lsp")
  (COMPILE-FILE "glisp/menu-settrans.lsp"))

(DEFUN COMPILE-MENU-SETB ()
  (GLCOMPFILES *DIRECTORY*
      '("glisp/vector.lsp" "X/dwindow.lsp" "X/dwnoopen.lsp")
      '("glisp/menu-set.lsp") "glisp/menu-settrans.lsp"
      "glisp/menu-set-header.lsp"))

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
         (P1 ((IF (RADIUSX > RADIUSY)
                  (A VECTOR X = (X CENTER) - DELTA Y = (Y CENTER))
                  (A VECTOR X = (X CENTER) Y = (Y CENTER) - DELTA))))
         (P2 ((IF (RADIUSX > RADIUSY)
                  (A VECTOR X = (X CENTER) + DELTA Y = (Y CENTER))
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
    (WHEN (NOT DD)
      (SETQ DD
            (LIST 'DRAW-DESC NAME NIL (COPY-LIST '(0 0))
                  (COPY-LIST '(0 0))))
      (SETF (DRAW-DESCR NAME) DD))
    DD))
(SETF (GET 'DRAW-DESC 'GLARGUMENTS) '((NAME SYMBOL)))
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
    (WINDOW-OPEN W)
    (OR *DRAW-MENU-SET* (DRAW-INIT-MENUS))
    (SETQ DD (DRAW-DESC NAME))
    (UNLESS (MEMBER NAME *DRAW-OBJECTS*)
      (SETQ *DRAW-OBJECTS* (NCONC *DRAW-OBJECTS* (LIST NAME))))
    (DRAW-DESC-DRAW DD W)
    (WHILE (NOT DONE)
           (SETQ SEL (MENU-SET-SELECT *DRAW-MENU-SET* REDRAW))
           (SETQ REDRAW NIL)
           (CASE (CADR SEL)
             (COMMAND (CASE (CAR SEL)
                        (DONE (SETQ DONE T))
                        (MOVE (DRAW-DESC-MOVE DD W))
                        (DELETE (DRAW-DESC-DELETE DD W))
                        (COPY (DRAW-DESC-COPY DD W))
                        (REDRAW (WINDOW-CLEAR W) (SETQ REDRAW T)
                                (DRAW-DESC-DRAW DD W))
                        (ORIGIN (DRAW-DESC-ORIGIN DD W)
                                (WINDOW-CLEAR W) (SETQ REDRAW T)
                                (DRAW-DESC-DRAW DD W))
                        (PROGRAM (DRAW-DESC-PROGRAM DD))
                        (LATEX (DRAW-DESC-LATEX DD))
                        (LATEXMODE (SETQ *DRAW-LATEX-MODE*
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
                           (LIST (- (CAADR NEW) (CAR (CADDDR DD)))
                                 (- (CADADR NEW) (CADR (CADDDR DD)))))
                     (SETF (CADDR DD)
                           (NCONC (CADDR DD) (CONS NEW NIL)))
                     (DRAW-OBJECT-DRAW NEW W (CADDDR DD))))
             (BACKGROUND)))
    (SETF (DRAW-DESCR NAME) DD)
    (UNLESS *DRAW-LEAVE-WINDOW* (WINDOW-CLOSE W))
    NAME))
(SETF (GET 'DRAW 'GLARGUMENTS) '((NAME SYMBOL)))
(SETF (GET 'DRAW 'GLFNRESULTTYPE) 'SYMBOL)


(DEFUN DRAW-DESC-DRAW (DD W)
  (LET ((OFF (CADDDR DD)))
    (WINDOW-CLEAR W)
    (DOLIST (OBJ (CADDR DD)) (DRAW-OBJECT-DRAW OBJ W OFF))
    (WINDOW-FORCE-OUTPUT W)))

(DEFUN DRAW-DESC-SELECTED (DD P)
  (LET (OBJS OBJSB OBJ)
    (SETQ OBJS
          (MAPCAN #'(LAMBDA (OBJ)
                      (AND (DRAW-OBJECT-SELECTEDP OBJ P (CADDDR DD))
                           (CONS OBJ NIL)))
                  (CADDR DD)))
    (IF OBJS
        (IF (NULL (REST OBJS)) (SETQ OBJ (FIRST OBJS))
            (PROGN
              (SETQ OBJSB
                    (MAPCAN #'(LAMBDA (Z)
                                (AND (MEMBER (FIRST Z)
                                      '(DRAW-BUTTON DRAW-DOT))
                                     (CONS Z NIL)))
                            OBJS))
              (IF (AND OBJSB (NULL (REST OBJSB)))
                  (SETQ OBJ (FIRST OBJSB))))))
    OBJ))
(SETF (GET 'DRAW-DESC-SELECTED 'GLARGUMENTS)
      '((DD DRAW-DESC) (P VECTOR)))
(SETF (GET 'DRAW-DESC-SELECTED 'GLFNRESULTTYPE) 'DRAW-OBJECT)


(DEFUN DRAW-DESC-FIND (DD W &OPTIONAL CROSSFLG)
  (LET (P OBJ)
    (WHILE (NOT OBJ)
           (SETQ P
                 (IF CROSSFLG (DRAW-GET-CROSS DD W)
                     (DRAW-GET-CROSSHAIRS DD W)))
           (SETQ OBJ (DRAW-DESC-SELECTED DD P)))
    OBJ))
(SETF (GET 'DRAW-DESC-FIND 'GLARGUMENTS)
      '((DD DRAW-DESC) (W WINDOW) (&OPTIONAL NIL) (CROSSFLG BOOLEAN)))
(SETF (GET 'DRAW-DESC-FIND 'GLFNRESULTTYPE) 'DRAW-OBJECT)


(DEFUN DRAW-GET-CROSS (DD W) (DRAW-DESC-SNAP DD (WINDOW-GET-CROSS W)))
(SETF (GET 'DRAW-GET-CROSS 'GLARGUMENTS) '((DD DRAW-DESC) (W WINDOW)))
(SETF (GET 'DRAW-GET-CROSS 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-GET-CROSSHAIRS (DD W)
  (DRAW-DESC-SNAP DD (WINDOW-GET-CROSSHAIRS W)))
(SETF (GET 'DRAW-GET-CROSSHAIRS 'GLARGUMENTS)
      '((DD DRAW-DESC) (W WINDOW)))
(SETF (GET 'DRAW-GET-CROSSHAIRS 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-DESC-DELETE (DD W)
  (LET (OBJ)
    (SETQ OBJ (DRAW-DESC-FIND DD W T))
    (DRAW-OBJECT-ERASE OBJ W (CADDDR DD))
    (SETF (CADDR DD) (REMOVE OBJ (CADDR DD)))))
(SETF (GET 'DRAW-DESC-DELETE 'GLARGUMENTS)
      '((DD DRAW-DESC) (W WINDOW)))
(SETF (GET 'DRAW-DESC-DELETE 'GLFNRESULTTYPE) '(LISTOF DRAW-OBJECT))


(DEFUN DRAW-DESC-COPY (DD W)
  (LET (OBJ OBJB)
    (SETQ OBJ (DRAW-DESC-FIND DD W))
    (SETQ OBJB (COPY-TREE OBJ))
    (DRAW-GET-OBJECT-POS OBJB W)
    (SETF (CADR OBJB)
          (LIST (- (CAADR OBJB) (CAR (CADDDR DD)))
                (- (CADADR OBJB) (CADR (CADDDR DD)))))
    (DRAW-OBJECT-DRAW OBJB W (CADDDR DD))
    (WINDOW-FORCE-OUTPUT W)
    (SETF (CADDR DD) (NCONC (CADDR DD) (CONS OBJB NIL)))))
(SETF (GET 'DRAW-DESC-COPY 'GLARGUMENTS) '((DD DRAW-DESC) (W WINDOW)))
(SETF (GET 'DRAW-DESC-COPY 'GLFNRESULTTYPE) '(LISTOF DRAW-OBJECT))


(DEFUN DRAW-DESC-MOVE (DD W)
  (LET (OBJ)
    (IF (SETQ OBJ (DRAW-DESC-FIND DD W))
        (DRAW-OBJECT-MOVE OBJ W (CADDDR DD)))))

(DEFUN DRAW-DESC-ORIGIN (DD W)
  (LET (SEL)
    (DRAW-DESC-BOUNDS DD)
    (SETQ SEL (MENU '(("To zero" . TOZERO) ("Select" . SELECT))))
    (IF (EQ SEL 'SELECT)
        (SETF (CADDDR DD)
              (WINDOW-GET-BOX-POSITION W (CAR (FIFTH DD))
                  (CADR (FIFTH DD))))
        (IF (EQ SEL 'TOZERO) (SETF (CADDDR DD) (COPY-LIST '(0 0)))))))
(SETF (GET 'DRAW-DESC-ORIGIN 'GLARGUMENTS)
      '((DD DRAW-DESC) (W WINDOW)))
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
            (LIST (- (CAADR OBJ) (CAR BASEV))
                  (- (CADADR OBJ) (CADR BASEV)))))))

(DEFUN DRAW-DESC-LATEX (DD)
  (LET (BASE BX BY SX SY)
    (FORMAT T "   \\begin{picture}(~5,0F,~5,0F)(0,0)~%"
            (* (CAR (FIFTH DD)) *DRAW-LATEX-FACTOR*)
            (* (CADR (FIFTH DD)) *DRAW-LATEX-FACTOR*))
    (DOLIST (OBJ (CADDR DD))
      (SETQ BASE
            (LIST (+ (CAR (CADDDR DD)) (CAADR OBJ))
                  (+ (CADR (CADDDR DD)) (CADADR OBJ))))
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
                    "   \\put(~5,0F,~5,0F) {\\framebox(~5,0F,~5,0F)}~%"
                    BX BY SX SY))
        (DRAW-RCBOX
            (FORMAT T "   \\put(~5,0F,~5,0F) {\\oval(~5,0F,~5,0F)}~%"
                    (+ BX (/ SX 2)) (+ BY (/ SY 2)) SX SY))
        (DRAW-CIRCLE
            (FORMAT T "   \\put(~5,0F,~5,0F) {\\circle{~5,0F}}~%"
                    (+ BX (/ SX 2)) (+ BY (/ SY 2)) SX))
        (DRAW-ELLIPSE
            (FORMAT T "   \\put(~5,0F,~5,0F) {\\oval(~5,0F,~5,0F)}~%"
                    (+ BX (/ SX 2)) (+ BY (/ SY 2)) SX SY))
        (DRAW-BUTTON
            (FORMAT T
                    "   \\put(~5,0F,~5,0F) {\\framebox(~5,0F,~5,0F)}~%"
                    BX BY SX SY))
        (DRAW-ERASE)
        (DRAW-DOT
            (FORMAT T "   \\put(~5,0F,~5,0F) {\\circle*{~5,0F}}~%"
                    (+ BX (/ SX 2)) (+ BY (/ SY 2)) SX))
        (DRAW-TEXT
            (FORMAT T "   \\put(~5,0F,~5,0F) {~A}~%" BX
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
                                     ((GLVAR25425
                                       (LIST
                                        (+ (CAR (CADDDR DD))
                                         (CAADR OBJ))
                                        (+ (CADR (CADDDR DD))
                                         (CADADR OBJ))))
                                      (GLVAR25428 (DRAW-DESC-REFPT DD)))
                                      (LIST
                                       (- (CAR GLVAR25425)
                                        (CAR GLVAR25428))
                                       (- (CADR GLVAR25425)
                                        (CADR GLVAR25428)))))
                                   (SETQ BX (CAR BASE))
                                   (SETQ BY (CADR BASE))
                                   (SETQ SX (CAADDR OBJ))
                                   (SETQ SY (CADR (CADDR OBJ)))
                                   (SETQ TOX (+ BX SX))
                                   (SETQ TOY (+ BY SY))
                                   (IF (EQ (CAR OBJ) 'DRAW-CIRCLE)
                                    (SETQ R (/ (CAADDR OBJ) 2)))
                                   (WHEN (EQ (CAR OBJ) 'DRAW-ELLIPSE)
                                     (SETQ RX (/ (CAADDR OBJ) 2))
                                     (SETQ RY (/ (CADR (CADDR OBJ)) 2)))
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
(SETF (GET 'DRAW-DESC-PROGRAM 'GLARGUMENTS) '((DD DRAW-DESC)))
(SETF (GET 'DRAW-DESC-PROGRAM 'GLFNRESULTTYPE)
      '(LIST GLTYPE INTEGER INTEGER (LISTOF (LIST ANYTHING VECTOR))
             BOOLEAN SYMBOL SYMBOL))


(DEFUN DRAW-OPTIMIZE (X) (IF (FBOUNDP 'GLUNWRAP) (GLUNWRAP X NIL) X))

(DEFUN DRAW-DESC-FNNAME (DD)
  (INTERN (CONCATENATE 'STRING "DRAW-" (SYMBOL-NAME (CADR DD)))))
(SETF (GET 'DRAW-DESC-FNNAME 'GLARGUMENTS) '((DD DRAW-DESC)))
(SETF (GET 'DRAW-DESC-FNNAME 'GLFNRESULTTYPE) 'SYMBOL)


(DEFUN DRAW-DESC-PICMENU (DD)
  (LET (BUTTONS)
    (SETQ BUTTONS
          (MAPCAN #'(LAMBDA (OBJ)
                      (AND (EQ (FIRST OBJ) 'DRAW-BUTTON)
                           (CONS (LIST (CADDDR OBJ)
                                       (LET
                                        ((GLVAR25733
                                          (LET
                                           ((GLVAR25709
                                             (COPY-LIST '(2 2))))
                                            (LIST
                                             (+ (CAR GLVAR25709)
                                              (CAADR OBJ))
                                             (+ (CADR GLVAR25709)
                                              (CADADR OBJ))))))
                                         (LIST
                                          (+ (CAR GLVAR25733)
                                           (CAR (CADDDR DD)))
                                          (+ (CADR GLVAR25733)
                                           (CADR (CADDDR DD))))))
                                 NIL)))
                  (CADDR DD)))
    (IF BUTTONS
        (SETF (GET (CADR DD) 'PICMENU-SPEC)
              (LIST 'PICMENU-SPEC (CAR (FIFTH DD)) (CADR (FIFTH DD))
                    BUTTONS T (DRAW-DESC-FNNAME DD) '9X15)))))
(SETF (GET 'DRAW-DESC-PICMENU 'GLARGUMENTS) '((DD DRAW-DESC)))
(SETF (GET 'DRAW-DESC-PICMENU 'GLFNRESULTTYPE)
      '(LIST GLTYPE INTEGER INTEGER (LISTOF (LIST ANYTHING VECTOR))
             BOOLEAN SYMBOL SYMBOL))


(DEFUN DRAW-DESC-SNAP (DD P)
  (LET (PSNAP OBJ (OBJS (CADDR DD)))
    (IF *DRAW-SNAP-FLAG*
        (WHILE (AND OBJS (NOT PSNAP)) (SETQ OBJ (POP OBJS))
               (SETQ PSNAP (DRAW-OBJECT-SNAP OBJ P (CADDDR DD)))))
    (OR PSNAP P)))
(SETF (GET 'DRAW-DESC-SNAP 'GLARGUMENTS) '((DD DRAW-DESC) (P VECTOR)))
(SETF (GET 'DRAW-DESC-SNAP 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-OBJECT-MOVE (D W OFF)
  (DRAW-OBJECT-ERASE D W OFF)
  (DRAW-GET-OBJECT-POS D W)
  (SETF (CADR D)
        (LIST (- (CAADR D) (CAR OFF)) (- (CADADR D) (CADR OFF))))
  (DRAW-OBJECT-DRAW D W OFF)
  (WINDOW-FORCE-OUTPUT W))

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
(SETF (GET 'DRAW-GET-OBJECT-POS 'GLARGUMENTS)
      '((D DRAW-OBJECT) (W WINDOW)))
(SETF (GET 'DRAW-GET-OBJECT-POS 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-OBJECT-ERASE (D W OFF)
  (WHEN (NOT (EQ (FIRST D) 'DRAW-ERASE))
    (WINDOW-SET-XOR W)
    (DRAW-OBJECT-DRAW D W OFF)
    (WINDOW-UNSET W)))

(DEFUN DRAW-LINE-DRAW (D W OFF)
  (LET ((FROM (LIST (+ (CAR OFF) (CAADR D)) (+ (CADR OFF) (CADADR D))))
        (TO (LET ((GLVAR26041
                      (LIST (+ (CAR OFF) (CAADR D))
                            (+ (CADR OFF) (CADADR D)))))
              (LIST (+ (CAR GLVAR26041) (CAADDR D))
                    (+ (CADR GLVAR26041) (CADR (CADDR D)))))))
    (WINDOW-DRAW-LINE-XY W (CAR FROM) (CADR FROM) (CAR TO) (CADR TO))))

(DEFUN DRAW-ARROW-DRAW (D W OFF)
  (LET ((FROM (LIST (+ (CAR OFF) (CAADR D)) (+ (CADR OFF) (CADADR D))))
        (TO (LET ((GLVAR26179
                      (LIST (+ (CAR OFF) (CAADR D))
                            (+ (CADR OFF) (CADADR D)))))
              (LIST (+ (CAR GLVAR26179) (CAADDR D))
                    (+ (CADR GLVAR26179) (CADR (CADDR D)))))))
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
         (< (ABS (/ (- (* (CAADDR D) (- (CADR PTP) (CADADR D)))
                       (* (CADR (CADDR D)) (- (CAR PTP) (CAADR D))))
                    (SQRT (+ (EXPT (CAADDR D) 2)
                             (EXPT (CADR (CADDR D)) 2)))))
            5))))
(SETF (GET 'DRAW-LINE-SELECTEDP 'GLARGUMENTS)
      '((D DRAW-LINE) (PT VECTOR) (OFF VECTOR)))
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
(SETF (GET 'DRAW-LINE-GET 'GLARGUMENTS) '((DD DRAW-DESC) (W WINDOW)))
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
(SETF (GET 'DRAW-ARROW-GET 'GLARGUMENTS) '((DD DRAW-DESC) (W WINDOW)))
(SETF (GET 'DRAW-ARROW-GET 'GLFNRESULTTYPE) 'DRAW-ARROW)


(DEFUN DRAW-BOX-DRAW (D W OFF)
  (WINDOW-DRAW-BOX W
      (LIST (+ (CAR OFF) (CAADR D)) (+ (CADR OFF) (CADADR D)))
      (CADDR D)))

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
(SETF (GET 'DRAW-BOX-SELECTEDP 'GLARGUMENTS)
      '((D DRAW-BOX) (P VECTOR) (OFF VECTOR)))
(SETF (GET 'DRAW-BOX-SELECTEDP 'GLFNRESULTTYPE) 'BOOLEAN)


(DEFUN DRAW-BOX-GET (DD W)
  (LET (BOX)
    (SETQ BOX (WINDOW-GET-REGION W))
    (LIST 'DRAW-BOX (CAR BOX) (CADR BOX) NIL 0)))
(SETF (GET 'DRAW-BOX-GET 'GLARGUMENTS) '((DD DRAW-DESC) (W WINDOW)))
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
(SETF (GET 'DRAW-RCBOX-SELECTEDP 'GLARGUMENTS)
      '((D DRAW-BOX) (P VECTOR) (OFF VECTOR)))
(SETF (GET 'DRAW-RCBOX-SELECTEDP 'GLFNRESULTTYPE) 'BOOLEAN)


(DEFUN DRAW-RCBOX-GET (DD W)
  (LET (BOX)
    (SETQ BOX (WINDOW-GET-REGION W))
    (LIST 'DRAW-RCBOX (CAR BOX) (CADR BOX) NIL 0)))
(SETF (GET 'DRAW-RCBOX-GET 'GLARGUMENTS) '((DD DRAW-DESC) (W WINDOW)))
(SETF (GET 'DRAW-RCBOX-GET 'GLFNRESULTTYPE) 'DRAW-RCBOX)


(DEFUN DRAW-CIRCLE-DRAW (D W OFF)
  (WINDOW-DRAW-CIRCLE W
      (LET ((GLVAR27825
                (LET ((GLVAR27802
                          (LIST (/ (CAADDR D) 2)
                                (/ (CADR (CADDR D)) 2))))
                  (LIST (+ (CAADR D) (CAR GLVAR27802))
                        (+ (CADADR D) (CADR GLVAR27802))))))
        (LIST (+ (CAR OFF) (CAR GLVAR27825))
              (+ (CADR OFF) (CADR GLVAR27825))))
      (/ (CAADDR D) 2)))

(DEFUN DRAW-CIRCLE-SELECTEDP (D P OFF)
  (< (ABS (- (/ (CAADDR D) 2)
             (SQRT (LET ((SELF (LET ((GLVAR27972
                                      (LET
                                       ((GLVAR27949
                                         (LET
                                          ((GLVAR27928
                                            (LIST (/ (CAADDR D) 2)
                                             (/ (CADR (CADDR D)) 2))))
                                           (LIST
                                            (+ (CAADR D)
                                             (CAR GLVAR27928))
                                            (+ (CADADR D)
                                             (CADR GLVAR27928))))))
                                        (LIST
                                         (+ (CAR GLVAR27949) (CAR OFF))
                                         (+ (CADR GLVAR27949)
                                          (CADR OFF))))))
                                 (LIST (- (CAR GLVAR27972) (CAR P))
                                       (- (CADR GLVAR27972) (CADR P))))))
                     (+ (EXPT (CAR SELF) 2) (EXPT (CADR SELF) 2))))))
     5))
(SETF (GET 'DRAW-CIRCLE-SELECTEDP 'GLARGUMENTS)
      '((D DRAW-CIRCLE) (P VECTOR) (OFF VECTOR)))
(SETF (GET 'DRAW-CIRCLE-SELECTEDP 'GLFNRESULTTYPE) 'BOOLEAN)


(DEFUN DRAW-CIRCLE-GET (DD W)
  (LET (CIR CENT)
    (SETQ CENT (DRAW-GET-CROSSHAIRS DD W))
    (SETQ CIR (WINDOW-GET-CIRCLE W CENT))
    (LIST 'DRAW-CIRCLE
          (LIST (- (CAAR CIR) (CADR CIR)) (- (CADAR CIR) (CADR CIR)))
          (LIST (* 2 (CADR CIR)) (* 2 (CADR CIR))) NIL 0)))
(SETF (GET 'DRAW-CIRCLE-GET 'GLARGUMENTS) '((DD DRAW-DESC) (W WINDOW)))
(SETF (GET 'DRAW-CIRCLE-GET 'GLFNRESULTTYPE) 'DRAW-CIRCLE)


(DEFUN DRAW-ELLIPSE-DRAW (D W OFF)
  (LET ((C (LET ((GLVAR28162
                     (LET ((GLVAR28139
                               (LIST (/ (CAADDR D) 2)
                                     (/ (CADR (CADDR D)) 2))))
                       (LIST (+ (CAADR D) (CAR GLVAR28139))
                             (+ (CADADR D) (CADR GLVAR28139))))))
             (LIST (+ (CAR OFF) (CAR GLVAR28162))
                   (+ (CADR OFF) (CADR GLVAR28162))))))
    (WINDOW-DRAW-ELLIPSE-XY W (CAR C) (CADR C) (/ (CAADDR D) 2)
        (/ (CADR (CADDR D)) 2))))

(DEFUN DRAW-ELLIPSE-SELECTEDP (D P OFF)
  (LET ((PT (LIST (- (CAR P) (CAR OFF)) (- (CADR P) (CADR OFF)))))
    (< (ABS (- (+ (SQRT (LET ((SELF (LET
                                     ((GLVAR28502
                                       (IF
                                        (> (/ (CAADDR D) 2)
                                         (/ (CADR (CADDR D)) 2))
                                        (LIST
                                         (ROUND
                                          (-
                                           (+ (CAADR D)
                                            (/ (CAADDR D) 2))
                                           (SQRT
                                            (ABS
                                             (/
                                              (- (EXPT (CAADDR D) 2)
                                               (EXPT (CADR (CADDR D))
                                                2))
                                              4)))))
                                         (+ (CADADR D)
                                          (/ (CADR (CADDR D)) 2)))
                                        (LIST
                                         (+ (CAADR D) (/ (CAADDR D) 2))
                                         (ROUND
                                          (-
                                           (+ (CADADR D)
                                            (/ (CADR (CADDR D)) 2))
                                           (SQRT
                                            (ABS
                                             (/
                                              (- (EXPT (CAADDR D) 2)
                                               (EXPT (CADR (CADDR D))
                                                2))
                                              4)))))))))
                                      (LIST
                                       (- (CAR GLVAR28502) (CAR PT))
                                       (- (CADR GLVAR28502) (CADR PT))))))
                          (+ (EXPT (CAR SELF) 2) (EXPT (CADR SELF) 2))))
                  (SQRT (LET ((SELF (LET
                                     ((GLVAR28750
                                       (IF
                                        (> (/ (CAADDR D) 2)
                                         (/ (CADR (CADDR D)) 2))
                                        (LIST
                                         (ROUND
                                          (+
                                           (+ (CAADR D)
                                            (/ (CAADDR D) 2))
                                           (SQRT
                                            (ABS
                                             (/
                                              (- (EXPT (CAADDR D) 2)
                                               (EXPT (CADR (CADDR D))
                                                2))
                                              4)))))
                                         (+ (CADADR D)
                                          (/ (CADR (CADDR D)) 2)))
                                        (LIST
                                         (+ (CAADR D) (/ (CAADDR D) 2))
                                         (ROUND
                                          (+
                                           (+ (CADADR D)
                                            (/ (CADR (CADDR D)) 2))
                                           (SQRT
                                            (ABS
                                             (/
                                              (- (EXPT (CAADDR D) 2)
                                               (EXPT (CADR (CADDR D))
                                                2))
                                              4)))))))))
                                      (LIST
                                       (- (CAR GLVAR28750) (CAR PT))
                                       (- (CADR GLVAR28750) (CADR PT))))))
                          (+ (EXPT (CAR SELF) 2) (EXPT (CADR SELF) 2)))))
               (* 2 (MAX (/ (CAADDR D) 2) (/ (CADR (CADDR D)) 2)))))
       2)))
(SETF (GET 'DRAW-ELLIPSE-SELECTEDP 'GLARGUMENTS)
      '((D DRAW-ELLIPSE) (P VECTOR) (OFF VECTOR)))
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
(SETF (GET 'DRAW-ELLIPSE-GET 'GLARGUMENTS)
      '((DD DRAW-DESC) (W WINDOW)))
(SETF (GET 'DRAW-ELLIPSE-GET 'GLFNRESULTTYPE) 'DRAW-ELLIPSE)


(DEFUN DRAW-NULL-DRAW (D W OFF) NIL)

(DEFUN DRAW-NULL-SELECTEDP (D PT OFF) NIL)

(DEFUN DRAW-BUTTON-DRAW (D W OFF)
  (WINDOW-DRAW-BOX W
      (LIST (+ (CAR OFF) (CAADR D)) (+ (CADR OFF) (CADADR D)))
      (COPY-LIST '(4 4))))

(DEFUN DRAW-BUTTON-SELECTEDP (D P OFF)
  (LET ((PTX (- (- (CAR P) (CAR OFF)) (CAADR D)))
        (PTY (- (- (CADR P) (CADR OFF)) (CADADR D))))
    (AND (> PTX -2) (< PTX 6) (> PTY -2) (< PTY 6))))
(SETF (GET 'DRAW-BUTTON-SELECTEDP 'GLARGUMENTS)
      '((D DRAW-BUTTON) (P VECTOR) (OFF VECTOR)))
(SETF (GET 'DRAW-BUTTON-SELECTEDP 'GLFNRESULTTYPE) 'BOOLEAN)


(DEFUN DRAW-BUTTON-GET (DD W)
  (LET (CENT VAR)
    (PRINC "Enter button name: ")
    (SETQ VAR (READ))
    (SETQ CENT (DRAW-GET-CROSSHAIRS DD W))
    (LIST 'DRAW-BUTTON (LIST (+ -2 (CAR CENT)) (+ -2 (CADR CENT)))
          (COPY-LIST '(4 4)) VAR 0)))
(SETF (GET 'DRAW-BUTTON-GET 'GLARGUMENTS) '((DD DRAW-DESC) (W WINDOW)))
(SETF (GET 'DRAW-BUTTON-GET 'GLFNRESULTTYPE) 'DRAW-BUTTON)


(DEFUN DRAW-ERASE-DRAW (D W OFF)
  (WINDOW-ERASE-AREA W
      (LIST (+ (CAR OFF) (CAADR D)) (+ (CADR OFF) (CADADR D)))
      (CADDR D)))

(DEFUN DRAW-ERASE-SELECTEDP (D P OFF)
  (LET ((PT (LIST (- (CAR P) (CAR OFF)) (- (CADR P) (CADR OFF)))))
    (AND (>= (CAR PT) (CAADR D)) (<= (CAR PT) (+ (CAADR D) (CAADDR D)))
         (>= (CADR PT) (CADADR D))
         (<= (CADR PT) (+ (CADADR D) (CADR (CADDR D)))))))
(SETF (GET 'DRAW-ERASE-SELECTEDP 'GLARGUMENTS)
      '((D DRAW-BOX) (P VECTOR) (OFF VECTOR)))
(SETF (GET 'DRAW-ERASE-SELECTEDP 'GLFNRESULTTYPE) 'BOOLEAN)


(DEFUN DRAW-ERASE-GET (DD W)
  (LET (BOX)
    (SETQ BOX (WINDOW-GET-REGION W))
    (LIST 'DRAW-ERASE (CAR BOX) (CADR BOX) NIL 0)))
(SETF (GET 'DRAW-ERASE-GET 'GLARGUMENTS) '((DD DRAW-DESC) (W WINDOW)))
(SETF (GET 'DRAW-ERASE-GET 'GLFNRESULTTYPE) 'DRAW-ERASE)


(DEFUN DRAW-DOT-DRAW (D W OFF)
  (WINDOW-DRAW-DOT-XY W (+ 2 (+ (CAR OFF) (CAADR D)))
      (+ 2 (+ (CADR OFF) (CADADR D)))))

(DEFUN DRAW-DOT-GET (DD W)
  (LET (CENT)
    (SETQ CENT (DRAW-GET-CROSSHAIRS DD W))
    (LIST 'DRAW-DOT (LIST (+ -2 (CAR CENT)) (+ -2 (CADR CENT)))
          (COPY-LIST '(4 4)) NIL 0)))
(SETF (GET 'DRAW-DOT-GET 'GLARGUMENTS) '((DD DRAW-DESC) (W WINDOW)))
(SETF (GET 'DRAW-DOT-GET 'GLFNRESULTTYPE) 'DRAW-DOT)


(DEFUN DRAW-REFPT-DRAW (D W OFF)
  (WINDOW-DRAW-CROSSHAIRS-XY W (+ (CAR OFF) (CAADR D))
      (+ (CADR OFF) (CADADR D))))

(DEFUN DRAW-REFPT-SELECTEDP (D P OFF)
  (LET ((PTX (- (- (CAR P) (CAR OFF)) (CAADR D)))
        (PTY (- (- (CADR P) (CADR OFF)) (CADADR D))))
    (AND (> PTX -3) (< PTX 3) (> PTY -3) (< PTY 3))))
(SETF (GET 'DRAW-REFPT-SELECTEDP 'GLARGUMENTS)
      '((D DRAW-BUTTON) (P VECTOR) (OFF VECTOR)))
(SETF (GET 'DRAW-REFPT-SELECTEDP 'GLFNRESULTTYPE) 'BOOLEAN)


(DEFUN DRAW-REFPT-GET (DD W)
  (LET (CENT REFPT)
    (WHEN (SETQ REFPT (ASSOC 'DRAW-REFPT (CADDR DD)))
      (WINDOW-SET-ERASE *DRAW-WINDOW*)
      (DRAW-OBJECT-DRAW REFPT *DRAW-WINDOW* (COPY-LIST '(0 0)))
      (WINDOW-UNSET *DRAW-WINDOW*)
      (SETF (CADDR DD) (REMOVE REFPT (CADDR DD))))
    (SETQ CENT (DRAW-GET-CROSSHAIRS DD W))
    (LIST 'DRAW-REFPT CENT (COPY-LIST '(0 0)) NIL 0)))
(SETF (GET 'DRAW-REFPT-GET 'GLARGUMENTS) '((DD DRAW-DESC) (W WINDOW)))
(SETF (GET 'DRAW-REFPT-GET 'GLFNRESULTTYPE) 'DRAW-REFPT)


(DEFUN DRAW-DESC-REFPT (DD)
  (LET (REFPT)
    (SETQ REFPT (ASSOC 'DRAW-REFPT (CADDR DD)))
    (IF REFPT (CADR REFPT) (COPY-LIST '(0 0)))))
(SETF (GET 'DRAW-DESC-REFPT 'GLARGUMENTS) '((DD DRAW-DESC)))
(SETF (GET 'DRAW-DESC-REFPT 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-TEXT-DRAW (D W OFF)
  (WINDOW-PRINTAT-XY W (CADDDR D) (+ (CAR OFF) (CAADR D))
      (+ (CADR OFF) (CADADR D))))

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
(SETF (GET 'DRAW-TEXT-SELECTEDP 'GLARGUMENTS)
      '((D DRAW-TEXT) (PT VECTOR) (OFF VECTOR)))
(SETF (GET 'DRAW-TEXT-SELECTEDP 'GLFNRESULTTYPE) 'BOOLEAN)


(DEFUN DRAW-TEXT-GET (DD W)
  (LET (TXT LNG OFF)
    (PRINC "Enter text string: ")
    (SETQ TXT (STRINGIFY (READ)))
    (SETQ LNG (WINDOW-STRING-WIDTH W TXT))
    (SETQ OFF (WINDOW-GET-BOX-POSITION W LNG 14))
    (LIST 'DRAW-TEXT
          (LET ((GLVAR29986 (COPY-LIST '(0 4))))
            (LIST (+ (CAR OFF) (CAR GLVAR29986))
                  (+ (CADR OFF) (CADR GLVAR29986))))
          (LIST LNG 14) TXT 0)))
(SETF (GET 'DRAW-TEXT-GET 'GLARGUMENTS) '((DD DRAW-DESC) (W WINDOW)))
(SETF (GET 'DRAW-TEXT-GET 'GLFNRESULTTYPE) 'DRAW-TEXT)


(DEFUN DRAW-SNAPP (P1 OFF P2X P2Y)
  (IF (AND (< (ABS (- (- (CAR P1) (CAR OFF)) P2X)) 4)
           (< (ABS (- (- (CADR P1) (CADR OFF)) P2Y)) 4))
      (LIST (+ (CAR OFF) P2X) (+ (CADR OFF) P2Y))))
(SETF (GET 'DRAW-SNAPP 'GLARGUMENTS)
      '((P1 VECTOR) (OFF VECTOR) (P2X INTEGER) (P2Y INTEGER)))
(SETF (GET 'DRAW-SNAPP 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-DOT-SNAP (D P OFF)
  (DRAW-SNAPP P OFF (+ 2 (CAADR D)) (+ 2 (CADADR D))))
(SETF (GET 'DRAW-DOT-SNAP 'GLARGUMENTS)
      '((D DRAW-DOT) (P VECTOR) (OFF VECTOR)))
(SETF (GET 'DRAW-DOT-SNAP 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-REFPT-SNAP (D P OFF)
  (DRAW-SNAPP P OFF (CAADR D) (CADADR D)))
(SETF (GET 'DRAW-REFPT-SNAP 'GLARGUMENTS)
      '((D DRAW-REFPT) (P VECTOR) (OFF VECTOR)))
(SETF (GET 'DRAW-REFPT-SNAP 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-LINE-SNAP (D P OFF)
  (OR (DRAW-SNAPP P OFF (CAADR D) (CADADR D))
      (DRAW-SNAPP P OFF (+ (CAADR D) (CAADDR D))
          (+ (CADADR D) (CADR (CADDR D))))))
(SETF (GET 'DRAW-LINE-SNAP 'GLARGUMENTS)
      '((D DRAW-LINE) (P VECTOR) (OFF VECTOR)))
(SETF (GET 'DRAW-LINE-SNAP 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-BOX-SNAP (D P OFF)
  (LET ((XOFF (CAADR D)) (YOFF (CADADR D)) (XSIZE (CAADDR D))
        (YSIZE (CADR (CADDR D))))
    (OR (DRAW-SNAPP P OFF XOFF YOFF)
        (DRAW-SNAPP P OFF (+ XOFF XSIZE) (+ YOFF YSIZE))
        (DRAW-SNAPP P OFF (+ XOFF XSIZE) YOFF)
        (DRAW-SNAPP P OFF XOFF (+ YOFF YSIZE))
        (DRAW-SNAPP P OFF (+ XOFF (/ XSIZE 2)) YOFF)
        (DRAW-SNAPP P OFF XOFF (+ YOFF (/ YSIZE 2)))
        (DRAW-SNAPP P OFF (+ XOFF (/ XSIZE 2)) (+ YOFF YSIZE))
        (DRAW-SNAPP P OFF (+ XOFF XSIZE) (+ YOFF (/ YSIZE 2))))))
(SETF (GET 'DRAW-BOX-SNAP 'GLARGUMENTS)
      '((D DRAW-BOX) (P VECTOR) (OFF VECTOR)))
(SETF (GET 'DRAW-BOX-SNAP 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-CIRCLE-SNAP (D P OFF)
  (OR (DRAW-SNAPP P OFF (+ (CAADR D) (/ (CAADDR D) 2))
          (+ (CADADR D) (/ (CAADDR D) 2)))
      (DRAW-SNAPP P OFF (+ (CAADR D) (/ (CAADDR D) 2)) (CADADR D))
      (DRAW-SNAPP P OFF (CAADR D) (+ (CADADR D) (/ (CAADDR D) 2)))
      (DRAW-SNAPP P OFF (+ (CAADR D) (/ (CAADDR D) 2))
          (+ (CADADR D) (CADR (CADDR D))))
      (DRAW-SNAPP P OFF (+ (CAADR D) (CAADDR D))
          (+ (CADADR D) (/ (CAADDR D) 2)))))
(SETF (GET 'DRAW-CIRCLE-SNAP 'GLARGUMENTS)
      '((D DRAW-CIRCLE) (P VECTOR) (OFF VECTOR)))
(SETF (GET 'DRAW-CIRCLE-SNAP 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-ELLIPSE-SNAP (D P OFF)
  (OR (DRAW-SNAPP P OFF (+ (CAADR D) (/ (CAADDR D) 2))
          (+ (CADADR D) (/ (CADR (CADDR D)) 2)))
      (DRAW-SNAPP P OFF (+ (CAADR D) (/ (CAADDR D) 2)) (CADADR D))
      (DRAW-SNAPP P OFF (CAADR D)
          (+ (CADADR D) (/ (CADR (CADDR D)) 2)))
      (DRAW-SNAPP P OFF (+ (CAADR D) (/ (CAADDR D) 2))
          (+ (CADADR D) (CADR (CADDR D))))
      (DRAW-SNAPP P OFF (+ (CAADR D) (CAADDR D))
          (+ (CADADR D) (/ (CADR (CADDR D)) 2)))))
(SETF (GET 'DRAW-ELLIPSE-SNAP 'GLARGUMENTS)
      '((D DRAW-ELLIPSE) (P VECTOR) (OFF VECTOR)))
(SETF (GET 'DRAW-ELLIPSE-SNAP 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-RCBOX-SNAP (D P OFF)
  (LET ((RX (/ (CAADDR D) 2)) (RY (/ (CADR (CADDR D)) 2)))
    (OR (DRAW-SNAPP P OFF (+ (CAADR D) RX) (CADADR D))
        (DRAW-SNAPP P OFF (CAADR D) (+ (CADADR D) RY))
        (DRAW-SNAPP P OFF (+ (CAADR D) RX)
            (+ (CADADR D) (CADR (CADDR D))))
        (DRAW-SNAPP P OFF (+ (CAADR D) (CAADDR D)) (+ (CADADR D) RY)))))
(SETF (GET 'DRAW-RCBOX-SNAP 'GLARGUMENTS)
      '((D DRAW-RCBOX) (P VECTOR) (OFF VECTOR)))
(SETF (GET 'DRAW-RCBOX-SNAP 'GLFNRESULTTYPE) 'VECTOR)


(DEFUN DRAW-NO-SNAP (D P OFF) NIL)

(DEFUN DRAW-MULTI-DRAW (D W OFF)
  (LET ((TOTALOFF
            (LIST (+ (CAADR D) (CAR OFF)) (+ (CADADR D) (CADR OFF)))))
    (DOLIST (SUBD (CADDDR D)) (DRAW-OBJECT-DRAW SUBD W TOTALOFF))))

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
    (FORMAT T "   \\put(~5,0F,~5,0F) {\\~A(~D,~D){~5,0F}}~%"
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

(DEFUN COMPILE-DRAWB ()
  (GLCOMPFILES *DIRECTORY*
      '("glisp/vector.lsp" "X/dwindow.lsp" "X/dwnoopen.lsp")
      '("glisp/menu-set.lsp" "glisp/draw.lsp") "glisp/drawtrans.lsp"
      "glisp/draw-header.lsp"))

(DEFUN DRAW-OUT (&OPTIONAL NAMES FILE)
  (OR NAMES (SETQ NAMES *DRAW-OBJECTS*))
  (IF (NOT (CONSP NAMES)) (SETQ NAMES (LIST NAMES)))
  (DRAW-OUTPUT (OR FILE "glisp/draw.del") NAMES)
  (SETQ *DRAW-OBJECTS* (SET-DIFFERENCE *DRAW-OBJECTS* NAMES))
  NAMES)
