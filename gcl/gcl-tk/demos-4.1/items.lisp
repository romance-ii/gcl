;;# items.lisp --  This demo has been converted for tk4.1 from the
;; corresponding tcl demo program.
;;
;; This demonstration script creates a canvas that displays the
;; canvas item types.
;;
;; @(#) :items.tcl 1.5 95/10/04 15:00:39

(defun positionwindow (w) 
    (wm :geometry w "+60+25")
)
(setq w '.items)
(if (winfo :exists w) (destroy w))
(toplevel w)
(wm :title w "Canvas Item Demonstration")
(wm :iconname w "Items")
(positionWindow w)
(setq c (conc w '.frame.c))
(setq font :Adobe-times-medium-r-normal--*-180* )
(label (conc w '.msg) :font font :wraplength "5i" :justify "left" :text "This window contains a canvas widget with examples of the various kinds of items supported by canvases.  The following operations are supported:\n  Button-1 drag:\tmoves item under pointer.\n  Button-2 drag:\trepositions view.\n  Button-3 drag:\tstrokes out area.\n  Ctrl+f:\t\tprints items under area.")
(pack (conc w '.msg) :side "top")

(frame (conc w '.buttons))
(pack  (conc w '.buttons) :side "bottom" :expand "y" :fill "x" :pady "2m")
(button (conc w '.buttons.dismiss) :text "Dismiss" :command (tk-conc "destroy " w))
(button (conc w '.buttons.code) :text "See Code" :command (tk-conc "showCode " w))
(pack (conc w '.buttons.dismiss) (conc w '.buttons.code) :side "left" :expand 1)

(frame (conc w '.frame))
(pack (conc w '.frame) :side "top" :fill "both" :expand "yes")

(canvas c :scrollregion "0c 0c 30c 24c" :width "15c" :height "10c" 
	:relief "sunken" :borderwidth 2 
	:xscrollcommand (tk-conc w ".frame.hscroll set") 
	:yscrollcommand (tk-conc w ".frame.vscroll set"))
(scrollbar (conc w '.frame.vscroll) :command (tk-conc c " yview"))
(scrollbar (conc w '.frame.hscroll) :orient "horiz" :command (tk-conc c " xview"))
(pack (conc w '.frame.hscroll) :side "bottom" :fill "x")
(pack (conc w '.frame.vscroll) :side "right" :fill "y")
(pack c :in (conc w '.frame) :expand "yes" :fill "both")

;; Display a 3x3 rectangular grid.

(funcall c :create "rect" "0c" "0c" "30c" "24c" :width 2)
(funcall c :create "line" "0c" "8c" "30c" "8c" :width 2)
(funcall c :create "line" "0c" "16c" "30c" "16c" :width 2)
(funcall c :create "line" "10c" "0c" "10c" "24c" :width 2)
(funcall c :create "line" "20c" "0c" "20c" "24c" :width 2)

(setq font1 :Adobe-Helvetica-Medium-R-Normal--*-120-*-*-*-*-*-*)
(setq font2 :Adobe-Helvetica-Bold-R-Normal--*-240-*-*-*-*-*-*)
(if (> (winfo :depth c :return 'number)  1) (progn 
    (setq blue "DeepSkyBlue3")
    (setq red "red")
    (setq bisque "bisque3")
    (setq green "SeaGreen3")
) ;;else 
 (progn 
    (setq blue "black")
    (setq red "black")
    (setq bisque "black")
    (setq green "black")
))

;; Set up demos within each of the areas of the grid.

(funcall c :create "text" "5c" '.2c :text "Lines" :anchor "n")
(funcall c :create "line" "1c" "1c" "3c" "1c" "1c" "4c" "3c" "4c" :width "2m" :fill blue 
	:cap "butt" :join "miter" :tags "item")
(funcall c :create "line" "4.67c" "1c" "4.67c" "4c" :arrow "last" :tags "item")
(funcall c :create "line" "6.33c" "1c" "6.33c" "4c" :arrow "both" :tags "item")
(funcall c :create "line" "5c" "6c" "9c" "6c" "9c" "1c" "8c" "1c" "8c" "4.8c" "8.8c" "4.8c" "8.8c" "1.2c" 
	"8.2c" "1.2c" "8.2c" "4.6c" "8.6c" "4.6c" "8.6c" "1.4c" "8.4c" "1.4c" "8.4c" "4.4c" 
	:width 3 :fill red :tags "item")
(funcall c :create "line" "1c" "5c" "7c" "5c" "7c" "7c" "9c" "7c" :width '.5c 
	:stipple "@" : *tk-library* : "/demos/images/gray25.bmp" 
	:arrow "both" :arrowshape "15 15 7" :tags "item")
(funcall c :create "line" "1c" "7c" "1.75c" "5.8c" "2.5c" "7c" "3.25c" "5.8c" "4c" "7c" :width '.5c 
	:cap "round" :join "round" :tags "item")

(funcall c :create "text" "15c" '.2c :text "Curves (smoothed :lines)" :anchor "n")
(funcall c :create "line" "11c" "4c" "11.5c" "1c" "13.5c" "1c" "14c" "4c" :smooth "on" 
	:fill blue :tags "item")
(funcall c :create "line" "15.5c" "1c" "19.5c" "1.5c" "15.5c" "4.5c" "19.5c" "4c" :smooth "on" 
	:arrow "both" :width 3 :tags "item")
(funcall c :create "line" "12c" "6c" "13.5c" "4.5c" "16.5c" "7.5c" "18c" "6c" 
	"16.5c" "4.5c" "13.5c" "7.5c" "12c" "6c" :smooth "on" :width "3m" :cap "round" 
	:stipple "@" : *tk-library* : "/demos/images/gray25.bmp" :fill red :tags "item")

(funcall c :create "text" "25c" '.2c :text "Polygons" :anchor "n")
(funcall c :create "polygon" "21c" "1.0c" "22.5c" "1.75c" "24c" "1.0c" "23.25c" "2.5c" 
	"24c" "4.0c" "22.5c" "3.25c" "21c" "4.0c" "21.75c" "2.5c" :fill green 
	:outline "black" :width 4 :tags "item")
(funcall c :create "polygon" "25c" "4c" "25c" "4c" "25c" "1c" "26c" "1c" "27c" "4c" "28c" "1c" 
	"29c" "1c" "29c" "4c" "29c" "4c" :fill red :smooth "on" :tags "item")
(funcall c :create "polygon" "22c" "4.5c" "25c" "4.5c" "25c" "6.75c" "28c" "6.75c" 
	"28c" "5.25c" "24c" "5.25c" "24c" "6.0c" "26c" "6c" "26c" "7.5c" "22c" "7.5c" 
	:stipple "@" : *tk-library* : "/demos/images/gray25.bmp" 
	:outline "black" :tags "item")

(funcall c :create "text" "5c" "8.2c" :text "Rectangles" :anchor "n")
(funcall c :create "rectangle" "1c" "9.5c" "4c" "12.5c" :outline red :width "3m" :tags "item")
(funcall c :create "rectangle" "0.5c" "13.5c" "4.5c" "15.5c" :fill green :tags "item")
(funcall c :create "rectangle" "6c" "10c" "9c" "15c" :outline "" 
	:stipple "@" : *tk-library* : "/demos/images/gray25.bmp" :fill blue :tags "item")

(funcall c :create "text" "15c" "8.2c" :text "Ovals" :anchor "n")
(funcall c :create "oval" "11c" "9.5c" "14c" "12.5c" :outline red :width "3m" :tags "item")
(funcall c :create "oval" "10.5c" "13.5c" "14.5c" "15.5c" :fill green :tags "item")
(funcall c :create "oval" "16c" "10c" "19c" "15c" :outline "" 
	:stipple "@" : *tk-library* : "/demos/images/gray25.bmp" :fill blue :tags "item")

(funcall c :create "text" "25c" "8.2c" :text "Text" :anchor "n")
(funcall c :create "rectangle" "22.4c" "8.9c" "22.6c" "9.1c")
(funcall c :create "text" "22.5c" "9c" :anchor "n" :font font1 :width "4c" 
	:text "A short string of text, word-wrapped, justified left, and anchored north (at :the top).  The rectangles show the anchor points for each piece of text." :tags "item")
(funcall c :create "rectangle" "25.4c" "10.9c" "25.6c" "11.1c")
(funcall c :create "text" "25.5c" "11c" :anchor "w" :font font1 :fill blue 
	:text "Several lines,\n each centered\nindividually,\nand all anchored\nat the left edge." 
	:justify "center" :tags "item")
(funcall c :create "rectangle" "24.9c" "13.9c" "25.1c" "14.1c")
(funcall c :create "text" "25c" "14c" :font font2 :anchor "c" :fill red :stipple "gray50" 
	:text "Stippled characters" :tags "item")

(funcall c :create "text" "5c" "16.2c" :text "Arcs" :anchor "n")
(funcall c :create "arc" "0.5c" "17c" "7c" "20c" :fill green :outline "black" 
	:start 45 :extent 270 :style "pieslice" :tags "item")
(funcall c :create "arc" "6.5c" "17c" "9.5c" "20c" :width "4m" :style "arc" 
	:outline blue :start -135 :extent 270 
	:outlinestipple "@" : *tk-library* : "/demos/images/gray25.bmp" :tags "item")
(funcall c :create "arc" "0.5c" "20c" "9.5c" "24c" :width "4m" :style "pieslice" 
	:fill "" :outline red :start 225 :extent -90 :tags "item")
(funcall c :create "arc" "5.5c" "20.5c" "9.5c" "23.5c" :width "4m" :style "chord" 
	:fill blue :outline "" :start 45 :extent 270  :tags "item")

(funcall c :create "text" "15c" "16.2c" :text "Bitmaps" :anchor "n")
(funcall c :create "bitmap" "13c" "20c" :bitmap "@" : *tk-library* : "/demos/images/face.bmp" :tags "item")
(funcall c :create "bitmap" "17c" "18.5c" 
	:bitmap "@" : *tk-library* : "/demos/images/noletter.bmp" :tags "item")
(funcall c :create "bitmap" "17c" "21.5c" 
	:bitmap "@" : *tk-library* : "/demos/images/letters.bmp" :tags "item")

(funcall c :create "text" "25c" "16.2c" :text "Windows" :anchor "n")
(button (conc c '.button) :text "Press Me" :command `(butpress ',c "red"))
(funcall c :create "window" "21c" "18c" :window (conc c '.button) :anchor "nw" :tags "item")
(entry (conc c '.entry) :width 20 :relief "sunken")
(funcall (conc c '.entry) :insert "end" "Edit this text")
(funcall c :create "window" "21c" "21c" :window (conc c '.entry) :anchor "nw" :tags "item")
(scale (conc c '.scale) :from 0 :to 100 :length "6c" :sliderlength '.4c 
	:width '.5c :tickinterval 0)
(funcall c :create "window" "28.5c" "17.5c" :window (conc c '.scale) :anchor "n" :tags "item")
(funcall c :create "text" "21c" "17.9c" :text "Button": :anchor "sw")
(funcall c :create "text" "21c" "20.9c" :text "Entry": :anchor "sw")
(funcall c :create "text" "28.5c" "17.4c" :text "Scale": :anchor "s")

;; Set up event bindings for canvas:

(funcall c :bind "item" "<Any-Enter>" `(itemEnter  ',c))
(funcall c :bind "item" "<Any-Leave>" `(itemLeave  ',c))
(bind c "<2>" (tk-conc c " scan mark %x %y"))
(bind c "<B2-Motion>" (tk-conc c " scan dragto %x %y"))
(bind c "<3>" `(itemMark  ',c  |%x| |%y|))
(bind c "<B3-Motion>" `(itemStroke  ',c  |%x| |%y|))
(bind c "<Control-f>" `(itemsUnderArea  ',c))
(bind c "<1>" `(itemStartDrag  ',c  |%x| |%y|))
(bind c "<B1-Motion>" `(itemDrag ',c |%x| |%y|))
(focus c)

;; Utility procedures for highlighting the item under the pointer:


(defvar *restorecmd* nil)

(defun itemEnter (c &aux type bg) 
					;    (global :*restorecmd*)
  (let ((current (funcall c :find "withtag" "current" :return 'string)))
    (if (equal current "") 	      (return-from itementer nil))
    (itemleave nil)

    (setq type (funcall c :type current :return 'string))
    (if (equal type  "window")
	(progn
	  (itemLeave nil)
	  (return-from itemEnter nil)))
    (if (equal type "bitmap")
	(progn
	  (setq bg (nth 4
			(funcall c :itemconf current :background
				 :return 'list-strings)))
	  (push `(,c :itemconfig ',current :background ',bg)  *restorecmd*)
	  (funcall c :itemconfig current :background "SteelBlue2")
	  (return-from itemEnter nil)))
    (setq fill (nth 4 (funcall c :itemconfig current :fill
			       :return 'list-strings)))
    (if (or (member type '("rectangle" "oval" "arg") :test 'equal)
	    (equal fill ""))
	(progn
	  (setq outline (nth 4 (funcall c :itemconfig current :outline :return 'list-strings)))
	  (push  `(,c :itemconfig ',current :outline ',outline)  *restorecmd*)
	  (funcall c :itemconfig current :outline "SteelBlue2"))
      (progn
	(push `(,c :itemconfig ',current :fill  ,fill)  *restorecmd*)
	(funcall c :itemconfig current :fill "SteelBlue2")))
    )
  )

(defun itemLeave (c) 
;    (global :*restorecmd*)
  (let ((tem  *restorecmd*))
    (setq  *restorecmd* nil)
    (dolist (v tem)
      (eval v))))


;; Utility procedures for stroking out a rectangle and printing what's
;; underneath the rectangle's area.

(defun itemMark (c x y) 
;    (global :areaX1 areaY1)
    (setq areaX1 (funcall c :canvasx x :return 'string))
    (setq areaY1 (funcall c :canvasy y :return 'string))
    (funcall c :delete "area")
)

(defun itemStroke (c x y ) 
  (declare (special areaX1 areaY1 areaX2 areaY2))
  (or *recursive*
      (let ((*recursive* t))
	(setq x (funcall c :canvasx x :return 'string))
	(setq y (funcall c :canvasy y :return 'string))
	(progn
	  (setq areaX2 x)
	  (setq areaY2 y)
	  ;; this next return 'stringis simply for TIMING!!!
	  ;; to make it wait for the result before going into subsequent!!
	  (funcall c :delete "area" :return 'string)
	  (funcall c :addtag "area" "withtag"
		   (funcall c :create "rect" areaX1 areaY1 x y 
			    :outline "black" :return 'string))

	  ))))

(defun itemsUnderArea (c) 
;    (global :areaX1 areaY1 areaX2 areaY2)
    (setq area (funcall c :find "withtag" "area" :return 'string))
    (setq me c)
    (setq items "")
    (dolist (i 
	     (funcall c :find "enclosed" areaX1 areaY1 areaX2 areaY2
		      :return 'list-strings))
	(if (search "item" (funcall c :gettags i :return 'string))
	    (setq items (tk-conc items " " i))))
    (print (tk-conc "Items enclosed by area: " items))
    (setq items "")
    (dolist (i 
	     (funcall c :find "overlapping" areaX1 areaY1 areaX2 areaY2
		      :return 'list-strings))
	(if (search "item" (funcall c :gettags i :return 'string))
	    (setq items (tk-conc items " " i))))
    (print (tk-conc "Items overlapping area: " items))
    (terpri)
    (force-output)
)

(setq areaX1 0)
(setq areaY1 0)
(setq areaX2 0)
(setq areaY2 0)

;; Utility procedures to support dragging of items.

(defun itemStartDrag (c x y) 
;    (global :lastX lastY)
    (setq lastX (funcall c :canvasx x :return 'number))
    (setq lastY (funcall c :canvasy y :return 'number))
)

(defun itemDrag (c x y) 
;    (global :lastX lastY)
    (setq x (funcall c :canvasx x :return 'number))
    (setq y (funcall c :canvasy y :return 'number))
    (funcall c :move "current" (- x lastX) (- y lastY))
    (setq lastX x)
    (setq lastY y)
)

(defvar *recursive* nil)
(defun itemDrag (c x y) 
;    (global :lastX lastY)
  (cond (*recursive* )
        (t (let ((*recursive* t))
    (setq x (funcall c :canvasx x :return 'number))
    (setq y (funcall c :canvasy y :return 'number))
    (funcall c :move "current" (- x lastX) (- y lastY))
    (setq lastX x)
    (setq lastY y)))))

;; Procedure that's invoked when the button embedded in the canvas
;; is invoked.

(defun butPress (w color) 
    (setq i (funcall w :create "text" "25c" "18.1c" :text "Ouch!!"
		     :fill color :anchor "n" :return 'string))
    (after 500 (tk-conc w " delete " i))
)
