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
    (format t "In drawgraphics: drawable is ~D, xmin ~D, ymin ~D, xmax ~D, ymax ~D"
	    drawable xmin ymin xmax ymax)
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

;; Kill the Japi GUI server
(j_quit)