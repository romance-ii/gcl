;;;
;;; Japi is a cross-platform, easy to use (rough and ready) Java based GUI library
;;; Download a library and headers for your platform, and get the C examples
;;; and documentation from:
;;;
;;;     http://www.japi.de/
;;;
;;; This file shows how to use some of the available functions.  You may assume
;;; that the only functions tested so far in the binding are those which appear
;;; below, as this file doubles as the test program.  The binding is so simple
;;; however that so far no binding (APART FROM J_PRINT) has gone wrong of those
;;; tested so far! 
;;;
;;; Mike Thomas, 21 March 2003
;;;
;;; (load "c:/cvs/gcl/japitest.lsp")
;;;

(in-package :japi-primitives)

;;;----------------------------------------------------------------------
;;; General routines.
(defCfun "static void* int_ptr(object s)" 0 
" return(&fix(s));")
(defentry int-ptr (object) (int "int_ptr"))
(defCfun "static void* inta_ptr(object s)" 0 
" return(s->fixa.fixa_self);")
(defentry inta-ptr (object) (int "inta_ptr"))


;; Turn Japi system debug tracing on
;(j_setdebug 2)

;; Start up the Japi server (needs to find either "java" or "jre" in your path
(j_start)

;; Start up a Window frame and then show it
(setf frame (j_frame "GCL Japi binding Test and Demo Program"))
(j_show frame)

;; Simple message box, no buttons
(setf alert (j_messagebox frame "label1" "label2"))
(j_sleep 2000)
(j_dispose alert)

;; Message box variations with 1, 2 and 3 buttons
(setf alert (j_alertbox frame "label1" "label2" "OK"))
(setf alert (j_choicebox2 frame "label1" "label2" "Yes" "No"))
(setf alert (j_choicebox3 frame "label1" "label2" "Yes" "No" "Cancel"))


(defun drawgraphics (drawable xmin ymin xmax ymax)
  (let* ((fntsize 10)
	 (tmpstrx (format nil "XMax = ~D" xmax))
	 (tmpstry (format nil "YMax = ~D" ymax))
	 (tmpstrwidx (j_getstringwidth drawable tmpstrx))
	 (tmpstrwidy (j_getstringwidth drawable tmpstry)))
    (j_setfontsize drawable fntsize)
    (j_setnamedcolor drawable J_RED)

    (j_drawline drawable xmin ymin        (- xmax 1)      (- ymax 1))
    (j_drawline drawable xmin (- ymax 1)  (- xmax 1)      ymin)
    (j_drawrect drawable xmin ymin        (- xmax xmin 1) (- ymax xmin 1))

    (j_setnamedcolor drawable J_BLACK)
    (j_drawline drawable xmin (- ymax 30) (- xmax 1)      (- ymax 30))
    (j_drawstring drawable (- (/ xmax 2) (/ tmpstrwidx 2)) (- ymax 40) tmpstrx)

    (j_drawline drawable (+ xmin 30) ymin (+ xmin 30) (- ymax 1))
    (j_drawstring drawable (+ xmin 50) 40 tmpstry)

    (j_setnamedcolor drawable J_MAGENTA)
    (loop for i from 1 to 10
	  do (j_drawoval drawable
			 (+ xmin (/ (- xmax xmin) 2)) 
			 (+ ymin (/ (- ymax ymin) 2))
			 (* (/ (- xmax xmin) 20) i)
			 (* (/ (- ymax ymin) 20) i)))

    (j_setnamedcolor drawable J_BLUE)
    (let ((y ymin)
	  (teststr "JAPI Test Text"))
      (loop for i from 5 to 21 do
	    (j_setfontsize drawable i)
	    (let ((x (- xmax (j_getstringwidth drawable teststr))))
	      (setf y (+ y (j_getfontheight drawable)))
	      (j_drawstring drawable x y teststr))))))


(j_setborderlayout frame)

(setf menubar (j_menubar frame))
(setf file    (j_menu menubar "File"))
(setf print   (j_menuitem file "Print"))
(setf save    (j_menuitem file "Save BMP"))
(setf quit    (j_menuitem file "Quit"))
(setf canvas  (j_canvas frame 400 600))
(j_pack frame)
(j_show frame)

(drawgraphics canvas 0 0 (j_getwidth canvas) (j_getheight canvas))

(loop as obj = (j_nextaction)
      while (and (not (= obj frame)) (not (= obj quit)))
      do 
      (when (= obj canvas)
	(j_setnamedcolorbg canvas J_WHITE)
	(drawgraphics canvas 10 10 (- (j_getwidth canvas) 10) (- (j_getheight canvas) 10)))
      (when (= obj print)
	(let ((printer (j_printer frame)))
	  (when (> 0 printer)
	    (drawgraphics printer 40 40 (- (j_getwidth printer) 80) (- (j_getheight printer) 80))
	    (j_print printer))))
      (when (= obj save)
	(let ((image (j_image 600 800)))
	  (drawgraphics image 0 0 600 800)
	  (when (= 0 (j_saveimage image "test.bmp" J_BMP))
	    (j_alertbox frame "Problems" "Can't save the image" "OK")))))

(j_dispose canvas)
(j_dispose menubar)
(j_dispose file)
(j_dispose print)
(j_dispose save)
(j_dispose quit)
(j_dispose frame)

;; Try some mouse handling
(setf frame (j_frame "Move and drag the mouse"))
(j_setsize frame 430 240)
(j_setnamedcolorbg frame J_LIGHT_GRAY)

(setf canvas1 (j_canvas frame 200 200))
(setf canvas2 (j_canvas frame 200 200))

(j_setpos canvas1 10 30)
(j_setpos canvas2 220 30)

(setf pressed (j_mouselistener canvas1 J_PRESSED))
(setf dragged (j_mouselistener canvas1 J_DRAGGED))
(setf released (j_mouselistener canvas1 J_RELEASED))
(setf entered (j_mouselistener canvas2 J_ENTERERD))
(setf moved (j_mouselistener canvas2 J_MOVED))
(setf exited (j_mouselistener canvas2 J_EXITED))

(j_show frame)

; (defentry j_getmousepos1 ( int string string ) ( void "j_getmousepos" ))

(let ((xa (make-array 1 :initial-element 0 :element-type 'fixnum))
      (ya (make-array 1 :initial-element 0 :element-type 'fixnum))
      (x 0)
      (y 0)
      (startx 0)
      (starty 0))

  (loop as obj = (j_nextaction)
	while (and (not (= obj frame)) (not (= obj quit)))
	do 
	(when (= obj pressed)
	  (j_getmousepos pressed (inta-ptr xa) (inta-ptr ya))
	  (setf x (aref xa 0))
	  (setf y (aref ya 0))
	  (setf startx x)
	  (setf starty y))
	(when (= obj dragged)
	  (j_getmousepos dragged (inta-ptr xa) (inta-ptr ya))
	  (setf x (aref xa 0))
	  (setf y (aref ya 0))
	  (j_drawrect canvas1 startx starty (- x startx) (- y starty)))
	(when (= obj released)
	  (j_getmousepos released (inta-ptr xa) (inta-ptr ya))
	  (setf x (aref xa 0))
	  (setf y (aref ya 0))
	  (j_drawrect canvas1 startx starty (- x startx) (- y starty)))
	(when (= obj entered)
	  (j_getmousepos entered (inta-ptr xa) (inta-ptr ya))
	  (setf x (aref xa 0))
	  (setf y (aref ya 0))
	  (setf startx x)
	  (setf starty y))
	(when (= obj moved)
	  (j_getmousepos moved (inta-ptr xa) (inta-ptr ya))
	  (setf x (aref xa 0))
	  (setf y (aref ya 0))
	  (setf startx x)
	  (setf starty y)
	  (j_drawline canvas2 startx starty x y))
	(when (= obj exited)
	  (j_getmousepos exited (inta-ptr xa) (inta-ptr ya))
	  (setf x (aref xa 0))
	  (setf y (aref ya 0))
	  (j_drawline canvas2 startx starty x y))))


;; Kill the Japi GUI server
(j_quit)