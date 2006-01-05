; menu-set.lsp              Gordon S. Novak Jr.               05 Jan 95

; Functions to handle a set of menus within a single window.

; Copyright (c) 1995 Gordon S. Novak Jr. and The University of Texas at Austin.

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


; (wtesta)                             ; in dwtest.lsp, to create window myw
; (setq ms (menu-set-create myw nil))
; (menu-set-add-menu ms 'flag1 nil "Colors" '(red white blue))
;                 position w/mouse
; (menu-set-add-menu ms 'Test1 nil "Choice" '(yes no))
;                 position w/mouse
; do (wteste) to create the square picmenu
; (menu-set-add-picmenu ms 'square1 nil "Square" mypms)
; following is alternative -- window is too small to hold both square and cone
; create cone with draw
; (menu-set-add-picmenu ms 'cone1 'cone "Cone" 'cone)
; (menu-set-add-component ms 'nand)   ; load draw-gates for nand and cone
;
; (menu-set-draw ms)
; (menu-set-select ms)                ; click a menu or background
; (setq mc (menu-conns-create ms))    ; make a menu-conns object from menu set
; (menu-conns-add-conn mc)            ; click two buttons/menu items
; repeat above as desired
; (menu-conns-move mc)                ; click a menu and move it

(in-package :user)

(glispobjects

(menu-set (listobject (window     window)
		      (menu-items (listof menu-set-item))
		      (commandfn  anything))
  msg     ((draw          menu-set-draw)
	   (select        menu-set-select)
	   (named-menu    menu-set-named-menu)
	   (named-item    menu-set-named-item)
	   (add-menu      menu-set-add-menu)
	   (add-picmenu   menu-set-add-picmenu)
	   (add-component menu-set-add-component)
	   (add-barmenu   menu-set-add-barmenu)
	   (add-item      menu-set-add-item)
	   (find-item     menu-set-find-item)
	   (delete-item   menu-set-delete-item)
	   (remove-items  menu-set-remove-items)
	   (item-position menu-set-item-position)
	   (adjust        menu-set-adjust)
	   (move          menu-set-move)
	   (draw-conn     menu-set-draw-conn) )  )

(menu-set-item (list (menu-name        symbol)
		     (sym              anything) ; extra info
		     (menu             menu-set-menu) )
  prop   ((left      ((parent-offset-x menu)))
	  (bottom    ((parent-offset-y menu)))
	  (width     ((picture-width   menu)))
	  (height    ((picture-height  menu))) )
  supers (region)  )

(menu-set-menu (transparent menu)               ; menu or picmenu
  msg    ((draw    menu-mdraw)) )

(menu-port (list (port symbol) (menu-name symbol)) )

(menu-set-conn (list (from menu-port)
		     (to   menu-port)))

(menu-conns (listobject (menu-set    menu-set)
			(connections (listof menu-set-conn)))
  prop   ((window          ((window (menu-set self)))))
  msg    ((draw            menu-conns-draw)
	  (redraw          menu-conns-redraw)
	  (move            menu-conns-move)
	  (add-conn        menu-conns-add-conn)
	  (add-item        menu-conns-add-item open t)
	  (find-conn       menu-conns-find-conn)
	  (find-item       menu-conns-find-item)
	  (delete-item     menu-conns-delete-item)
	  (delete-conn     menu-conns-delete-conn)
	  (remove-items    menu-conns-remove-items)
	  (find-conns      menu-conns-find-conns)
	  (connected-ports menu-conns-connected-ports)
	  (named-menu      menu-conns-named-menu) ) )

 ) ; glispobjects

; 04 Sep 92; 09 Feb 94; 12 Oct 94
(gldefun menu-set-create (w\:window &optional fn)
  (a menu-set with window = w commandfn = fn))

; 05 Sep 92; 09 Sep 92; 10 Sep 92; 02 Nov 92; 05 May 93; 07 May 93; 04 Aug 93
; 03 Jan 94; 07 Jan 94; 03 May 94; 05 Jan 95
; Select from multiple menu-like regions within a window.
; Result is a list of the name of the menu and the value selected from it,
; e.g., (COMMAND QUIT) for selecting the QUIT item from the COMMAND menu.
; A click outside any menu returns ((x y) BACKGROUND button-code).
; enabled, if specified, is a list of names of menus enabled for selection.
(gldefun menu-set-select (ms\:menu-set &optional redraw\:boolean
				                 enabled\:(listof symbol))
  (result menu-port)
  (let (res\:menu-port resb itm\:menu-set-item sel\:symbol lastx lasty)
    (if redraw (draw ms))
    (while ~ (or res resb)
      (setq itm (window-track-mouse (window ms)
		  #'(lambda (x y code)
		      (or (and (> code 0)
			       (setq lastx x)
			       (setq lasty y)
			       code)
			  (that menu-item with
				(contains-xy (that menu-item) x y))))))
      (if (numberp itm)
	  then (resb \:= (list (a vector with x = lastx y = lasty)
			       'background itm))
	  else (if (or (atom enabled)
		       (member (menu-name itm) enabled))
		   then (sel \:= (menu-mselect (menu itm) (eq enabled t)))
		        (if sel
			    then (res \:= (a menu-port with
					     menu-name (menu-name itm)
					     port sel))
			    else (if (*window-menu-code* <> 0)
				     then (res \:= (a menu-port with
					     menu-name (menu-name itm)
					     port nil)))) ) ) )
    (force-output (window ms))
    (or res resb) ))

; 05 Sep 92; 25 Sep 92; 29 Sep 92
; Add a menu to a menu set.
; name is the name of the menu.  sym is extra info such as data type.
(gldefun menu-set-add-menu (ms\:menu-set name\:symbol sym\:symbol
					 title\:string items
					 &optional offset\:vector)
  (let (menu)
    (menu \:= (menu-create items title (window ms) (x offset) (y offset) t t))
    (init menu)
    (if ~ offset (offset \:= (get-box-position (window ms)
					       (picture-width menu)
					       (picture-height menu))))
    ((parent-offset-x menu) \:= (x offset))
    ((parent-offset-y menu) \:= (y offset))
    (add-item ms name sym menu) ))

; 25 Sep 92; 29 Sep 92; 07 May 93
(gldefun menu-set-add-item (ms\:menu-set name\:symbol sym\:symbol menu\:menu)
  ((menu-items ms) _+ (a menu-set-item with menu-name = name sym = sym
			 menu = menu)) )

; 25 Sep 92
(gldefun menu-set-remove-items (ms\:menu-set)
  ((menu-items ms) \:= nil) )

; 06 Sep 92; 08 Sep 92; 14 Sep 92; 25 Sep 92; 29 Sep 92
(gldefun menu-set-add-picmenu (ms\:menu-set name\:symbol sym\:symbol
					    title\:string
					    spec\:picmenu-spec
					    &optional offset\:vector
					    nobox\:boolean)
  (let (menu maxwidth maxheight)
    (if (symbolp spec)
	then (spec \:= (get spec 'picmenu-spec)) )
    (menu \:= (picmenu-create-from-spec spec title (window ms)
					(x offset) (y offset) t t (not nobox)))
    (maxwidth \:= (max (if title then ((* 9 (length title)) + 6)
		                      else 0)
		       (drawing-width spec)))
    (maxheight \:= (if title then 15 else 0) + (drawing-height spec))
    (if ~ offset (offset \:= (get-box-position (window ms)
					       maxwidth maxheight)))
    ((parent-offset-x menu) \:= (x offset))
    ((parent-offset-y menu) \:= (y offset))
    (add-item ms name sym menu) ))

; 11 Oct 93
(gldefun menu-set-add-component (ms\:menu-set name\:symbol
					      &optional offset\:vector)
    (menu-set-add-picmenu ms (menu-set-name name) name nil name offset t))

; 03 Jan 94
; Add a barmenu to a menu set.
(gldefun menu-set-add-barmenu (ms\:menu-set name\:symbol sym\:symbol
				 menu\:barmenu
				 title\:string &optional offset\:vector)
  (let ()
    (init menu)
    (if ~ offset (offset \:= (get-box-position (window ms)
					       (picture-width menu)
					       (picture-height menu))))
    ((parent-offset-x menu) \:= (x offset))
    ((parent-offset-y menu) \:= (y offset))
    (add-item ms name sym menu) ))

; 11 Oct 93
(gldefun menu-set-name (nm\:symbol) (result symbol)
  (intern (symbol-name (gensym (symbol-name nm)))) )

; 29 Sep 92; 07 May 93
(gldefun menu-set-named-item (ms\:menu-set name\:symbol)
  (result menu-set-item)
  (that menu-item with (menu-name (that menu-item)) = name) )

; 08 Sep 92; 29 Sep 92
(gldefun menu-set-named-menu (ms\:menu-set name\:symbol)
  (result menu-set-menu)
  (menu (named-item ms name)))

; 01 Feb 94
(gldefun menu-conns-named-menu (mc\:menu-conns name\:symbol)
  (result menu-set-menu)
  (named-menu (menu-set mc) name) )

; 29 Apr 93; 30 Apr 93
; Find the item at specified position, if any
(gldefun menu-set-find-item (ms\:menu-set pos\:vector)
  (result menu-set-item)
  (let (mitem)
    (for mi in (menu-items ms) do
      (if (contains? (menu mi) pos) then (mitem \:= mi)))
    mitem))

; 29 Apr 93
; Delete an item
(gldefun menu-set-delete-item (ms\:menu-set mi\:menu-set-item)
  ((menu-items ms) _- mi))

; 08 Sep 92; 10 Sep 92; 05 May 93; 06 May 93; 07 May 93
(gldefun menu-set-move (ms\:menu-set)
  (let (sel m)
    (sel \:= (menu-set-select ms nil t))
    (m \:= (named-menu ms (menu-name sel)))
    (menu-reposition m) ))

; 10 Sep 92; 05 Jan 94; 06 Jan 94
; Draw either a menu or picmenu
(gldefun menu-mdraw (m)
  (case (first m)
    (menu    (menu-draw m))
    (picmenu (picmenu-draw m))
    (barmenu (barmenu-draw m))
    (t (glsend m draw)) ) )

; 10 Sep 92; 29 Sep 92; 05 May 93; 03 Jan 94; 06 Jan 94
; Select from either a menu or picmenu
(gldefun menu-mselect (m &optional anyclick)
  (case (first m)
    (menu    (menu-select m t))
    (picmenu (picmenu-select m t anyclick))
    (barmenu (barmenu-select m))
    (t (glsend m select)) ) )

; 10 Sep 92; 06 Jan 94
; Get item position from either a menu or picmenu
(gldefun menu-mitem-position (m name loc)
  (case (first m)
    (menu    (menu-item-position m name loc))
    (picmenu (picmenu-item-position m name loc))
    (t (glsend m item-position name loc)) ) )

; 05 Sep 92; 08 Sep 92
(gldefun menu-set-draw (ms\:menu-set)
  (let ()
    (open (window ms))
    (for item in (menu-items ms) do (draw (menu item))) ))

; 08 Sep 92; 28 Sep 92; 07 May 93; 25 Jan 94
(gldefun menu-set-item-position (ms\:menu-set desc\:menu-port
					      &optional loc\:symbol)
  (result vector)
  (let (m)
    (m \:= (named-menu ms (menu-name desc)))
    (or (menu-mitem-position m (port desc) loc)
	(menu-mitem-position m nil loc)) ))    ; header if it cannot be found

; 08 Sep 92
(gldefun menu-set-draw-conn (ms\:menu-set conn\:menu-set-conn)
  (let (pa pb tmp (desca (from conn)) (descb (to conn)))
    (pa \:= (menu-set-item-position ms desca 'center))
    (pb \:= (menu-set-item-position ms descb 'center))
    (if ((x pa) > (x pb))
	then (tmp \:= desca)
             (desca \:= descb)
	     (descb \:= tmp))
    (pa \:= (menu-set-item-position ms desca 'right))
    (pb \:= (menu-set-item-position ms descb 'left))
    (draw-circle (window ms) pa 3)
    (draw-line (window ms) pa pb)
    (draw-circle (window ms) pb 3)
    (force-output (window ms)) ))

; 02 Dec 93; 07 Jan 94
(gldefun menu-set-adjust (ms\:menu-set name\:symbol edge\:symbol
				       from\:symbol offset\:integer)
  (let (m fromm place)
    (if (m \:= (named-item ms name))
	then (if from
		 then (fromm \:= (named-item ms from))
	              (place \:= (case edge
				   (top    (bottom fromm))
				   (bottom (top fromm))
				   (left   (right fromm))
				   (right  (left fromm))))
		 else (place \:= (case edge
				   (top    (height (window ms)))
				   ((bottom left) 0)
				   (right  (width (window ms))) )) )
	     (case edge (top ((bottom m) \:= place - (height m) - offset))
	                (bottom ((bottom m) \:= place + offset))
			(left   ((left m) \:= place + offset))
			(right  ((left m) \:= place - (width m) - offset)))) ))

; 12 Oct 94
(gldefun menu-conns-create (ms\:menu-set)
  (a menu-conns with menu-set = ms))

; 08 Sep 92
(gldefun menu-conns-draw (mc\:menu-conns)
  (let ()
    (draw (menu-set mc))
    (for c in (connections mc) (draw-conn (menu-set mc) c)) ))

; 08 Sep 92
(gldefun menu-conns-move (mc\:menu-conns)
  (let ()
    (menu-set-move (menu-set mc))
    (clear (window mc))
    (draw mc) ))

; 29 Apr 93
(gldefun menu-conns-redraw (mc\:menu-conns)
  (let ()
    (clear (window mc))
    (draw mc) ))

; 08 Sep 92; 07 May 93; 21 Oct 93; 05 Jan 95
(gldefun menu-conns-add-conn (mc\:menu-conns)
  (let (sel selb conn)
    (sel \:= (select (menu-set mc)))
    (if ((menu-name sel) = 'background)
	then sel
        else (selb \:= (select (menu-set mc)))
	     (if ((menu-name selb) <> 'background)
		 then (conn \:= (a menu-set-conn with from = sel to = selb))
		      (draw-conn (menu-set mc) conn)
		      ((connections mc) _+ conn))
	     nil) ))

; 30 Apr 93
(gldefun menu-conns-add-item
	 (mc\:menu-conns name\:symbol sym\:symbol menu\:menu)
  (add-item (menu-set mc) name sym menu))

; 29 Apr 93
; Find the connection that is selected by the given point, if any.
(gldefun menu-conns-find-conn (mc\:menu-conns pt\:vector)
  (result menu-set-conn)
  (let (ms ls found res pa pb tmp desca descb)
    (ls \:= (a line-segment))
    (ms \:= (menu-set mc))
    (for conn in (connections mc) when (not found) do
      (desca \:= (from conn))
      (descb \:= (to conn))
      (pa \:= (menu-set-item-position ms desca 'center))
      (pb \:= (menu-set-item-position ms descb 'center))
      (if ((x pa) > (x pb))
	  then (tmp \:= desca)
	       (desca \:= descb)
	       (descb \:= tmp))
      ((p1 ls) \:= (menu-set-item-position ms desca 'right))
      ((p2 ls) \:= (menu-set-item-position ms descb 'left))
      (if (< (distance ls pt) 5)
	  then (found \:= t)
	       (res \:= conn)) )
    res))

; 29 Apr 93; 30 Apr 93
; Find the menu item that is selected by the given point, if any.
(gldefun menu-conns-find-item (mc\:menu-conns pt\:vector)
  (result menu-set-item)
  (find-item (menu-set mc) pt))

; 29 Apr 93
; Delete a connection
(gldefun menu-conns-delete-conn (mc\:menu-conns conn\:menu-set-conn)
  ((connections mc) _- conn))

; 29 Apr 93; 07 May 93
; Delete a menu item and all its connections
(gldefun menu-conns-delete-item (mc\:menu-conns mi\:menu-set-item)
  (let (ms)
    (ms \:= (menu-set mc))
    (delete-item ms mi)
    (for conn in (connections mc) do
      (if (or ((menu-name (from conn)) = (menu-name mi))
	      ((menu-name (to conn))   = (menu-name mi)))
	  then (delete-conn mc conn))) ))

; 30 Apr 93
(gldefun menu-conns-remove-items (mc\:menu-conns)
  (remove-items (menu-set mc))
  ((connections mc) \:= nil))

; 30 Apr 93; 07 May 93
; find all ports of a given named menu that are connected to something
(gldefun menu-conns-connected-ports (mc\:menu-conns boxname\:symbol)
  (let (ports)
    (for conn in (connections mc) do
      (if (boxname = (menu-name (to conn)))
	  then (pushnew (port (to conn)) ports)
	  else (if (boxname = (menu-name (from conn)))
		   then (pushnew (port (from conn)) ports))))
    ports))

; 30 Apr 93; 07 May 93
; Find connections of a given port of a named box
(gldefun menu-conns-find-conns (mc\:menu-conns boxname\:symbol port\:symbol)
  (result (listof menu-port))
  (let (res)
    (for conn in (connections mc) do
      (if (and (boxname = (menu-name (to conn)))
	       (port = (port (to conn))))
	  (res _+ (from conn)))
      (if (and (boxname = (menu-name (from conn)))
	       (port = (port (from conn))))
	  (res _+ (to conn))) )
    res))

; 03 May 94
; Compile menu-set.lsp into a plain Lisp file
(defun compile-menu-set ()
  (glcompfiles *directory*
	       '("glisp/vector.lsp"          ; auxiliary files
                 "X/dwindow.lsp")
	       '("glisp/menu-set.lsp")          ; translated files
	       "glisp/menu-settrans.lsp"        ; output file
	       "glisp/menu-set-header.lsp")     ; header file
  (compile-file "glisp/menu-settrans.lsp")  )
