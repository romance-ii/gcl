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
;;;
;;; HOW TO USE THIS FILE
;;;
;;; (compile-file "c:/cvs/gcl/japitest.lsp") (load "c:/cvs/gcl/japitest.o")
;;;
;;; Requires either "java" or "jre" in the path to work.
;;;

(in-package :japi-primitives)

;; Start up the Japi server (needs to find either "java" or "jre" in your path
(defmacro with-server ((app-name debug-level) . body)
  (multiple-value-bind (ds b)
		       (si::find-declarations body)
		       `(if (= 0 (j_start))
			    (format t (format nil "~S can't connect to the Japi GUI server." ,app-name))
			  (progn
			    (j_setdebug ,debug-level)
			    ,@ds
			    (unwind-protect
				(progn ,@b)
			      (j_quit))))))

;; Use a frame and clean up afterwards even if trouble ensues
(defmacro with-frame ((frame-var-name title) . body)
  (multiple-value-bind (ds b)
		       (si::find-declarations body)
		       `(let ((,frame-var-name (j_frame ,title)))
			  ,@ds
			  (unwind-protect
			      (progn ,@b)
			    (j_dispose ,frame-var-name)))))

;; Use a canvas and clean up afterwards even if trouble ensues
(defmacro with-canvas ((canvas-var-name frame-obj x-size y-size) . body)
  (multiple-value-bind (ds b)
		       (si::find-declarations body)
		       `(let ((,canvas-var-name (j_canvas ,frame-obj ,x-size ,y-size)))
			  ,@ds
			  (unwind-protect
			      (progn ,@b)
			    (j_dispose ,canvas-var-name)))))

;; Use a pulldown menu bar and clean up afterwards even if trouble ensues
(defmacro with-menu-bar ((bar-var-name frame-obj) . body)
  (multiple-value-bind (ds b)
		       (si::find-declarations body)
		       `(let ((,bar-var-name (j_menubar ,frame-obj)))
			  ,@ds
			  (unwind-protect
			      (progn ,@b)
			    (j_dispose ,bar-var-name)))))

;; Add a pulldown menu and clean up afterwards even if trouble ensues
(defmacro with-menu ((menu-var-name bar-obj title) . body)
  (multiple-value-bind (ds b)
		       (si::find-declarations body)
		       `(let ((,menu-var-name (j_menu ,bar-obj ,title)))
			  ,@ds
			  (unwind-protect
			      (progn ,@b)
			    (j_dispose ,menu-var-name)))))

;; Add a pulldown menu item and clean up afterwards even if trouble ensues
(defmacro with-menu-item ((item-var-name menu-obj title) . body)
  (multiple-value-bind (ds b)
		       (si::find-declarations body)
		       `(let ((,item-var-name (j_menuitem ,menu-obj ,title)))
			  ,@ds
			  (unwind-protect
			      (progn ,@b)
			    (j_dispose ,item-var-name)))))

;; Add a mouse listener and clean up afterwards even if trouble ensues
(defmacro with-mouse-listener ((var-name obj type) . body)
  (multiple-value-bind (ds b)
		       (si::find-declarations body)
		       `(let ((,var-name (j_mouselistener ,obj ,type)))
			  ,@ds
			  (unwind-protect
			      (progn ,@b)
			    (j_dispose ,var-name)))))

;; Run a five second frame in a Japi server
(with-server ("GCL Japi library test GUI 1" 0)
	     (with-frame (frame "Five Second Blank Test Frame") 
			 (j_show frame)
			 (j_sleep 5000)))

;; Get a pointer to an array of ints
(defCfun "static void* inta_ptr(object s)" 0 
  " return(s->fixa.fixa_self);")
(defentry inta-ptr (object) (int "inta_ptr"))

;; Draw function
(defun drawgraphics (drawable xmin ymin xmax ymax)
  (let* ((fntsize 10)
	 (tmpstrx (format nil "XMax = ~D" xmax))
	 (tmpstry (format nil "YMax = ~D" ymax))
	 (tmpstrwidx (j_getstringwidth drawable tmpstrx)))
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

;; Run some more extensive tests
(with-server
 ("GCL Japi library test GUI 2" 0)
 (with-frame
  (frame "Draw")
  (j_show frame)
  (let ((alert (j_messagebox frame "Two second alert box" "label"))) 
    (j_sleep 2000)
    (j_dispose alert))
  (let ((result1 (j_alertbox frame "label1" "label2" "OK"))
	(result2 (j_choicebox2 frame "label1" "label2" "Yes" "No"))
	(result3 (j_choicebox3 frame "label1" "label2" "Yes" "No" "Cancel")))
    (format t "Requestor results were: ~D, ~D, ~D~%" result1 result2 result3))
  (j_setborderlayout frame)
  (with-menu-bar
   (menubar frame)
   (with-menu
    (file menubar "File")
    (with-menu-item
     (print file "Print")
     (with-menu-item
      (save file "Save BMP")
      (with-menu-item
       (quit file "Quit")
       (with-canvas  
	(canvas frame 400 600)
	(j_pack frame)
	(drawgraphics canvas 0 0 (j_getwidth canvas) (j_getheight canvas))
	(j_show frame)
	(do ((obj (j_nextaction) (j_nextaction)))
	    ((or (= obj frame) (= obj quit)) t)
	    (when (= obj canvas)
	      (j_setnamedcolorbg canvas J_WHITE)
	      (drawgraphics canvas 10 10
			    (- (j_getwidth canvas) 10)
			    (- (j_getheight canvas) 10)))
	    (when (= obj print)
	      (let ((printer (j_printer frame)))
		(when (> 0 printer)
		  (drawgraphics printer 40 40
				(- (j_getwidth printer) 80)
				(- (j_getheight printer) 80))
		  (j_print printer))))
	    (when (= obj save)
	      (let ((image (j_image 600 800)))
		(drawgraphics image 0 0 600 800)
		(when (= 0 (j_saveimage image "test.bmp" J_BMP))
		  (j_alertbox frame "Problems" "Can't save the image" "OK")))))))))))))
;; Try some mouse handling
(with-server
 ("GCL Japi library test GUI 3" 0)
 (with-frame
  (frame "Move and drag the mouse")
  (j_setsize frame 430 240)
  (j_setnamedcolorbg frame J_LIGHT_GRAY)
  (with-canvas
   (canvas1 frame 200 200)
   (with-canvas
    (canvas2 frame 200 200)
    (j_setpos canvas1 10 30)
    (j_setpos canvas2 220 30)
    (with-mouse-listener
     (pressed canvas1 J_PRESSED)
     (with-mouse-listener
      (dragged canvas1 J_DRAGGED)
      (with-mouse-listener
       (released canvas1 J_RELEASED)
       (with-mouse-listener
	(entered canvas2 J_ENTERERD)
	(with-mouse-listener
	 (moved canvas2 J_MOVED)
	 (with-mouse-listener
	  (exited canvas2 J_EXITED)
	  (j_show frame)
          ;; Allocate immovable storage for passing data back from C land.
	  ;; Uses the GCL only make-array keyword :static
	  (let* ((xa (make-array 1 :initial-element 0 :element-type 'fixnum :static t))
		 (ya (make-array 1 :initial-element 0 :element-type 'fixnum :static t))
		 (pxa (inta-ptr xa))
		 (pya (inta-ptr ya))
		 (x 0)
		 (y 0)
		 (hold-start ())
		 (get-mouse-xy (lambda (obj)
				 (progn (j_getmousepos obj pxa pya)
					(setf x (aref xa 0))
					(setf y (aref ya 0)))))
		 (startx 0)
		 (starty 0))
	    (do ((obj (j_nextaction) (j_nextaction)))
		((= obj frame) t)
		(when (and hold-start (= obj pressed))
		  (funcall get-mouse-xy pressed)
		  (setf startx x)
		  (setf starty y)
		  (setf hold-start t))
		(when (= obj dragged)
		  (funcall get-mouse-xy dragged)
		  (j_drawrect canvas1 startx starty (- x startx) (- y starty)))
		(when (= obj released)
		  (setf hold-start ())
		  (funcall get-mouse-xy released)
		  (j_drawrect canvas1 startx starty (- x startx) (- y starty)))
		(when (= obj entered)
		  (funcall get-mouse-xy entered)
		  (setf startx x)
		  (setf starty y))
		(when (= obj moved)
		  (funcall get-mouse-xy moved)
		  (j_drawline canvas2 startx starty x y))
		(setf startx x)
		(setf starty y)
		(when (= obj exited)
		  (funcall get-mouse-xy exited)
		  (j_drawline canvas2 startx starty x y))))))))))))))

