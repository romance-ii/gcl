;;#!/bin/sh
;; the next line restarts using wish 
;(exec :wish4.2 (tk-conc 0) "$@")
(in-package "TK")
;; widget --
;; This script demonstrates the various widgets provided by Tk,
;; along with many of the features of the Tk toolkit.  This file
;; only contains code to generate the main window for the
;; application, which invokes individual demonstrations.  The
;; code for the actual demonstrations is contained in separate
;; ".tcl" files is this directory, which are sourced by this script
;; as needed.
;;
;; SCCS: @(#) :widget 1.21 96/10/04 17:09:34

(apply 'destroy (winfo :child '|.| :return 'list))
(wm :title '|.| "Widget Demonstration")

;;----------------------------------------------------------------
;; The code below create the main window, consisting of a menu bar
;; and a text widget that explains how to use the program, plus lists
;; all of the demos as hypertext items.
;;----------------------------------------------------------------

(setq font '-*-Helvetica-Medium-R-Normal--*-140-*-*-*-*-*-*)
(frame '.menuBar)
(pack '.menuBar :side "top" :fill "x")
(menubutton '.menuBar.file :text "File" :menu '.menuBar.file.m :underline 0)
(menu '.menuBar.file.m)
(.menuBar.file.m :add :command :label "About '... " :command "aboutBox" 
    :underline 0 :accelerator "<F1>")
(.menuBar.file.m :add :sep)
(.menuBar.file.m :add :command :label "Quit" :command "exit" :underline 0)
(pack '.menuBar.file :side "left")
(bind '|.| "<F1>" 'aboutBox)

(frame '.textFrame)
(scrollbar '.s :orient "vertical" :command '(.t :yview) :highlightthickness 0 
    :takefocus 1)
(pack '.s :in '.textFrame :side "right" :fill "y" :padx 1)
(text '.t :yscrollcommand '(.s :set) :wrap "word" :width 60 :height 30 :font font 
    :setgrid 1 :highlightthickness 0 :padx 4 :pady 2 :takefocus 0)
(pack '.t :in '.textFrame :expand "y" :fill "both" :padx 1)
(pack  '.textFrame :expand "yes" :fill "both" :padx 1 :pady 2)

(frame '.statusBar)
(label '.statusBar.lab :text "   " :relief "sunken" :bd 1 
    :font :*-Helvetica-Medium-R-Normal--*-120-*-*-*-*-*-* :anchor "w")
(label '.statusBar.foo :width 8 :relief "sunken" :bd 1 
    :font :*-Helvetica-Medium-R-Normal--*-120-*-*-*-*-*-* :anchor "w")
(pack '.statusBar.lab :side "left" :padx 2 :expand "yes" :fill "both")
(pack '.statusBar.foo :side "left" :padx 2)
(pack '.statusBar :side "top" :fill "x" :pady 2)

;; Create a bunch of tags to use in the text widget, such as those for
;; section titles and demo descriptions.  Also define the bindings for
;; tags.

(.t :tag :configure "title" :font :*-Helvetica-Bold-R-Normal--*-180-*-*-*-*-*-*)

;; We put some "space" characters to the left and right of each demo description
;; so that the descriptions are highlighted only when the mouse cursor
;; is right over them (but :not when the cursor is to their left or right)
;;
(.t :tag :configure "demospace" :lmargin1 "1c" :lmargin2 "1c")


(if (equal (winfo :depth '|.| :return 'number) 1) (progn 
    (.t :tag :configure "demo" :lmargin1 "1c" :lmargin2 "1c" 
	:underline 1)
    (.t :tag :configure "visited" :lmargin1 "1c" :lmargin2 "1c" 
	:underline 1)
    (.t :tag :configure "hot" :background "black" :foreground "white")
 ) ;;else 
 (progn 
    (.t :tag :configure "demo" :lmargin1 "1c" :lmargin2 "1c" 
	:foreground "blue" :underline 1)
    (.t :tag :configure "visited" :lmargin1 "1c" :lmargin2 "1c" 
	:foreground "#303080" :underline 1)
    (.t :tag :configure "hot" :foreground "red" :underline 1)
))
(.t :tag :bind "demo" "<ButtonRelease-1>" 
    '(invoke (.t index "@%x,%y"))
)

(setq lastLine "")
(.t :tag :bind "demo" "<Enter>" '(progn
    (setq lastLine (.t :index "@" : |%x| :"," : |%y| "linestart" :return 'number))
    (.t :tag :add "hot" (tk-conc lastLine " +1 chars") (tk-conc lastLine " lineend -1 chars"))
    (.t :config :cursor "hand2")
    (showStatus (.t :index "@" : |%x| :"," : |%y| :return 'number))
    ))

(.t :tag :bind "demo" "<Leave>" '(progn
    (.t :tag :remove "hot" 1.0 end)
    (.t :config :cursor "xterm")
    (.statusBar.lab :config :text "")
)
(.t :tag :bind "demo" "<Motion>" '(progn
    (setq newLine [.t index {@%x,%y linestart}])
    (if ([string :compare newLine $lastLine] != 0) (progn 
	(.t :tag :remove "hot" 1.0 end)
	(setq lastLine newLine)

	(setq tags [.t tag names {@%x,%y}])
	(setq i [lsearch :glob tags "demo-*"])
	(if (funcall i >= 0) {)
	    (.t :tag :add "hot" (tk-conc lastLine " +1 chars") (tk-conc lastLine " lineend -1 chars"))
	)
    )
    (showStatus (.t :index "@%x,%y" :return 'number))
))

;; Create the text for the text widget.

(.t :insert end "Tk Widget Demonstrations\n" title)
(.t :insert end {)
(This :application provides a front end for several short scripts that demonstrate what you can do with Tk widgets.  Each of the numbered lines below describes a demonstration;  you can click on it to invoke the demonstration.  Once the demonstration window appears, you can click the "See Code" button to see the Tcl/Tk code that created the demonstration.  (if :you wish, you can edit the code and click the "Rerun Demo" button in the code window to reinvoke the demonstration with the modified code.)

}
(setq *newline* " 
 ") 
(.t :insert :end "Labels, buttons, checkbuttons, and radiobuttons" "title")
(.t :insert :end *newline* "demospace")
(.t :insert :end "1. Labels (text :and bitmaps)." "demo demo-label")
(.t :insert :end " \n " "demospace")
(.t :insert :end "2. Buttons." "demo demo-label")
(.t :insert :end *newline* "demospace")
(.t :insert :end "3. Checkbuttons (select :any of a group)." "demo demo-check")
(.t :insert :end *newline* "demospace")
(.t :insert :end "4. Radiobuttons (select :one of a group).""demo  demo-radio")
(.t :insert :end *newline* "demospace")
(.t :insert :end "5. A 15-puzzle game made out of buttons.""demo  demo-puzzle")
(.t :insert :end *newline* "demospace")
(.t :insert :end "6. Iconic buttons that use bitmaps." "demo  demo-icon")
(.t :insert :end *newline* "demospace")
(.t :insert :end "7. Two labels displaying images." "demo  demo-image1")
(.t :insert :end *newline* "demospace")
(.t :insert :end "8. A simple user interface for viewing images." 
    "demo  demo-image2")
(.t :insert :end *newline* "demospace")

(.t :insert :end *newline* : "Listboxes" "title")
(.t :insert :end *newline* "demospace")
(.t :insert :end "1. 50 states." "demo  demo-states")
(.t :insert :end *newline* "demospace")
(.t :insert :end "2. Colors: change the color scheme for the application." 
	"demo demo-colors")
(.t :insert :end *newline* "demospace")
(.t :insert :end "3. A collection of famous sayings." "demo  demo-sayings")
(.t :insert :end *newline* "demospace")

(.t :insert :end *newline* : "Entries" "title")
(.t :insert :end *newline* "demospace")
(.t :insert :end "1. Without scrollbars." "demo  demo-entry1")
(.t :insert :end *newline* "demospace")
(.t :insert :end "2. With scrollbars." "demo  demo-entry2")
(.t :insert :end *newline* "demospace")
(.t :insert :end "3. Simple Rolodex-like form." "demo  demo-form")
(.t :insert :end *newline* "demospace")

(.t :insert :end *newline* : "Text" "title")
(.t :insert :end *newline* "demospace")
(.t :insert :end "1. Basic editable text." "demo  demo-text")
(.t :insert :end *newline* "demospace")
(.t :insert :end "2. Text display styles." "demo  demo-style")
(.t :insert :end *newline* "demospace")
(.t :insert :end "3. Hypertext (tag :bindings)." "demo  demo-bind")
(.t :insert :end *newline* "demospace")
(.t :insert :end "4. A text widget with embedded windows." "demo  demo-twind")
(.t :insert :end *newline* "demospace")
(.t :insert :end "5. A search tool built with a text widget." "demo  demo-search")
(.t :insert :end *newline* "demospace")

(.t :insert :end *newline* : "Canvases" "title")
(.t :insert :end *newline* "demospace")
(.t :insert :end "1. The canvas item types." "demo  demo-items")
(.t :insert :end *newline* "demospace")
(.t :insert :end "2. A simple 2-D plot." "demo  demo-plot")
(.t :insert :end *newline* "demospace")
(.t :insert :end "3. Text items in canvases." "demo  demo-ctext")
(.t :insert :end *newline* "demospace")
(.t :insert :end "4. An editor for arrowheads on canvas lines." "demo  demo-arrow")
(.t :insert :end *newline* "demospace")
(.t :insert :end "5. A ruler with adjustable tab stops." "demo  demo-ruler")
(.t :insert :end *newline* "demospace")
(.t :insert :end "6. A building floor plan." "demo  demo-floor")
(.t :insert :end *newline* "demospace")
(.t :insert :end "7. A simple scrollable canvas." "demo  demo-cscroll")
(.t :insert :end *newline* "demospace")

(.t :insert :end *newline* : "Scales" "title")
(.t :insert :end *newline* "demospace")
(.t :insert :end "1. Vertical scale." "demo  demo-vscale")
(.t :insert :end *newline* "demospace")
(.t :insert :end "2. Horizontal scale." "demo  demo-hscale")
(.t :insert :end *newline* "demospace")

(.t :insert :end *newline* : "Menus" "title")
(.t :insert :end *newline* "demospace")
(.t :insert :end "1. A window containing several menus and cascades." 
	(demo demo-menu))
(.t :insert :end *newline* "demospace")

(.t :insert :end *newline* : "Common Dialogs" "title")
(.t :insert :end *newline* "demospace")
(.t :insert :end "1. Message boxes." "demo  demo-msgbox")
(.t :insert :end *newline* "demospace")
(.t :insert :end "2. File selection dialog." "demo  demo-filebox")
(.t :insert :end *newline* "demospace")
(.t :insert :end "3. Color picker." "demo  demo-clrpick")
(.t :insert :end *newline* "demospace")

(.t :insert :end *newline* :  "Miscellaneous" "title")
(.t :insert :end *newline* "demospace")
(.t :insert :end "1. The built-in bitmaps." "demo  demo-bitmap")
(.t :insert :end *newline* "demospace")
(.t :insert :end "2. A dialog box with a local grab." "demo  demo-dialog1")
(.t :insert :end *newline* "demospace")
(.t :insert :end "3. A dialog box with a global grab." "demo  demo-dialog2")
(.t :insert :end *newline* "demospace")

(.t :configure :state "disabled")
(focus '.s)

;; positionWindow --
;; This procedure is invoked by most of the demos to position a
;; new demo window.
;;
;; Arguments:
;; w -		The name of the window to position.

(defun positionWindow w 
    (wm :geometry w +300+300)
)

;; showVars --
;; Displays the values of one or more variables in a window, and
;; updates the display whenever any of the variables changes.
;;
;; Arguments:
;; w -		Name of new window to create for display.
;; args -	Any number of names of variables.

(defun showVars (w args) 
    (if (winfo :exists w) (destroy :w))
    (toplevel w)
    (wm :title w "Variable values")
    (label (conc w '."title") :text "Variable values:" :width 20 :anchor "center" 
	    :font :Adobe-helvetica-medium-r-normal--*-180-*-*-*-*-*-*)
    (pack (conc w '."title") :side "top" :fill "x")
    (setq len 1)
    foreach i args {
(	(if ([string :length $i] > len) (progn )
	    (setq len [string length $i])
(	))
    }
    foreach i args {
	(frame (conc w '|.| i))
	(label (conc w '|.| i '.name) :text (tk-conc i ": ") :width ( +  len 2) :anchor "w")
	(label (conc w '|.| i '.value) :textvar i :anchor "w")
	(pack (conc w '|.| i '.name) :side "left")
	(pack (conc w '|.| i '.value) :side "left" :expand 1 :fill "x")
	(pack (conc w '|.| i) :side "top" :anchor "w" :fill "x")
    }
    (button (conc w '.ok) :text "OK" :command (tk-conc "destroy " w))
    (pack (conc w '.ok) :side "bottom" :pady 2)
)

;; invoke --
;; This procedure is called when the user clicks on a demo description.
;; It is responsible for invoking the demonstration.
;;
;; Arguments:
;; index -	The index of the character that the user clicked on.

(defun invoke index 
    (global :tk_library)
    (setq tags [.t tag names $index])
    (setq i [lsearch :glob tags demo-*])
    (if (funcall i < 0) (progn 
	(return)
    )
    (setq cursor [.t cget :cursor])
    (.t :configure :cursor "watch")
    (update)
    (setq demo [string range [lindex tags $i] 5 end])
    (uplevel [list source [file join $tk_library demos (conc demo '.tcl)]])
    (update)
    (.t :configure :cursor cursor)

    (.t :tag :add visited (tk-conc index " linestart +1 chars") (tk-conc index " lineend -1 chars"))
)

;; showStatus --
;;
;;	Show the name of the demo program in the status bar. This procedure
;;	is called when the user moves the cursor over a demo description.
;;
(defun showStatus (index )
    ;(global :tk_library)
;    (setq index (round index))
    (setq tags (.t :tag "names" index :return 'string))
    (setq i (lsearch "-glob" tags "demo-*" :return 'number))
    (setq cursor (.t :cget :cursor :return 'string))
    (if (< i  0) (progn 
	(.statusBar.lab :config :text " ")
	(setq newcursor "xterm")
    ) ;;else 
 (progn 
	(setq demo
	      (string :range (lindex tags i :return 'string) 5 "end"
		      :return 'string))
	(.statusBar.lab :config :text (tk-conc "Run the \"" demo "\" sample program"))
	(setq newcursor "hand2")
    ))
    (if (string :compare cursor newcursor :return 'boolean)
	(.t :config :cursor newcursor)
    )
)


;; showCode --
;; This procedure creates a toplevel window that displays the code for
;; a demonstration and allows it to be edited and reinvoked.
;;
;; Arguments:
;; w -		The name of the demonstration's window, which can be
;;		used to derive the name of the file containing its code.

(defun showCode w 
    (global :tk_library)
    (setq file [string range w 1 end].tcl)
    (if ![winfo exists '.code] {
	(toplevel '.code)
	(frame '.code.buttons)
	(pack '.code.buttons :side "bottom" :fill "x")
	(button '.code.buttons.dismiss :text "Dismiss" :command "destroy '.code")
	(button '.code.buttons.rerun :text "Rerun Demo" :command {)
	    (eval [.code.text get 1.0 end])
	}
	(pack '.code.buttons.dismiss '.code.buttons.rerun :side "left" 
	    :expand 1 :pady 2)
	(frame '.code.frame)
	(pack  '.code.frame :expand "yes" :fill "both" :padx 1 :pady 1)
	(text '.code.text :height 40 :wrap "word
"	    :xscrollcommand ".code.xscroll set" 
	    :yscrollcommand ".code.yscroll set" 
	    :setgrid 1 :highlightthickness 0 :pady 2 :padx 3)
	(scrollbar '.code.xscroll :command ".code.text xview" 
	    :highlightthickness 0 :orient "horizontal")
	(scrollbar '.code.yscroll :command ".code.text yview" 
	    :highlightthickness 0 :orient "vertical")

	(grid '.code.text :in '.code.frame :padx 1 :pady 1 
	    :row 0 :column 0 :rowspan 1 :columnspan 1 :sticky "news")
	(grid '.code.yscroll :in '.code.frame :padx 1 :pady 1 
	    :row 0 :column 1 :rowspan 1 :columnspan 1 :sticky "news")
;;	grid '.code.xscroll :in '.code.frame :padx 1 :pady 1 
;;	    :row 1 :column 0 :rowspan 1 :columnspan 1 :sticky "news"
	(grid :rowconfig    '.code.frame 0 :weight 1 :minsize 0)
	(grid :columnconfig '.code.frame 0 :weight 1 :minsize 0)
    } else {
	(wm :deiconify '.code)
	(raise '.code)
    }
    (wm :title '.code (tk-conc "Demo code: [file join " tk "_library demos " file "]"))
    (wm :iconname '.code file)
    (setq id [open [file join $tk_library demos $file]])
    (.code.text :delete 1.0 end)
    (.code.text :insert 1.0 [read $id])
    (.code.text :mark set insert 1.0)
    (close id)
)

;; aboutBox --
;;
;;	Pops up a message box with an "about" message
;;
(defun aboutBox () 
    (tk_messageBox :icon "info" :type "ok" :title "About Widget Demo" :message 
"Tk widget demonstration\\n\\n
Copyright (c) 1996 Sun Microsystems, Inc.")
)

