; dwexports.lsp         Gordon S. Novak Jr.           26 Jan 2006


(setf (get 'xlib::int-pos 'user::glfnresulttype) 'lisp::integer)

(in-package :xlib)

; exported symbols: from dwimports.lsp
(dolist (x '( menu stringify window picmenu textmenu editmenu barmenu
 window-get-mouse-position window-create window-set-font
 window-font-info window-gcontext window-parent
 window-drawable-height window-drawable-width window-label
 window-font window-foreground window-set-foreground
 window-background window-set-background window-wfunction
 window-get-geometry window-get-geometry-b window-sync
 window-screen-height window-geometry window-size
 window-left window-top-neg-y window-reset-geometry
 window-force-output window-query-pointer window-set-xor
 window-unset window-reset window-set-erase
 window-set-copy window-set-invert window-set-line-width
 window-set-line-attr window-std-line-attr window-draw-line
 window-draw-line-xy window-draw-arrowhead-xy
 window-draw-arrow-xy window-draw-arrow2-xy window-draw-box
 window-draw-box-xy window-xor-box-xy window-draw-box-corners
 window-draw-rcbox-xy window-draw-arc-xy
 window-draw-circle-xy window-draw-circle window-erase-area
 window-erase-area-xy window-erase-box-xy
 window-draw-ellipse-xy window-copy-area-xy window-invertarea
 window-invert-area window-invert-area-xy
 window-prettyprintat window-prettyprintat-xy window-printat
 window-printat-xy window-string-width window-string-height
 window-string-extents window-font-string-width
 window-yposition window-centeroffset dowindowcom
 window-menu window-close window-unmap window-open
 window-map window-destroy window-destroy-selected-window
 window-clear window-moveto-xy window-paint
 window-move window-draw-border window-track-mouse
 window-wait-exposure window-wait-unmap
 window-init-mouse-poll window-poll-mouse menu-init
 menu-calculate-size menu-adjust-offset menu-draw
 menu-item-value menu-find-item-width menu-find-item-height
 menu-clear menu-display-item menu-choose menu-box-item
 menu-unbox-item menu-item-position menu-select
 menu-select! menu-select-b menu-destroy
 menu-create menu-offset menu-size menu-moveto-xy
 menu-reposition picmenu-create picmenu-create-spec
 picmenu-create-from-spec picmenu-calculate-size picmenu-init
 picmenu-draw picmenu-draw-button picmenu-delete-named-button
 picmenu-select picmenu-box-item picmenu-unbox-item
 picmenu-destroy picmenu-button-containsxy?
 picmenu-item-position barmenu-create
 barmenu-calculate-size barmenu-init barmenu-draw
 barmenu-select barmenu-update-value window-get-point
 window-get-click window-get-line-position
 window-get-latex-position window-get-box-position
 window-get-icon-position window-get-region
 window-get-box-size window-track-mouse-in-region
 window-adjust-box-side window-adj-box-xy window-get-circle
 window-circle-radius window-draw-circle-pt
 window-get-ellipse window-draw-ellipse-pt
 window-draw-vector-pt window-get-vector-end
 window-get-crosshairs window-draw-crosshairs-xy
 window-get-cross window-draw-cross-xy window-draw-dot-xy
 window-draw-latex-xy window-reset-color
 window-set-color-rgb window-set-xcolor window-set-color
 window-set-color window-free-color window-get-chars
 window-process-char-event window-input-string
 window-input-char-fn window-draw-carat window-init-keymap
 window-set-cursor window-positive-y window-code-char
 window-get-raw-char
 window-print-line window-print-lines textmenu-create
 textmenu-calculate-size textmenu-init textmenu-draw
 textmenu-select textmenu-set-text textmenu
 editmenu editmenu-create editmenu-calculate-size
 editmenu-init editmenu-draw editmenu-display
 window-edit
 window-edit-display editmenu-carat editmenu-erase
 window-edit-erase editmenu-select editmenu-edit-fn
 window-edit-fn editmenu-setxy editmenu-char
 editmenu-edit
 *window-editmenu-kill-strings*
*window-add-menu-title*
*window-menu*
*mouse-x*
*mouse-y*
*mouse-window*
*window-fonts*
*window-display*
*window-screen*
*root-window*
*black-pixel*
*white-pixel*
*default-fg-color*
*default-bg-color*
*default-size-hints*
*default-GC*
*default-colormap*
*window-event*
*window-default-pos-x*
*window-default-pos-y*
*window-default-border*
*window-default-font-name*
*window-default-cursor*
*window-save-foreground*
*window-save-function*
*window-attributes*
*window-attr*
*menu-title-pad*
*root-return*
*child-return*
*root-x-return*
*root-y-return*
*win-x-return*
*win-y-return*
*mask-return*
*x-return*
*y-return*
*width-return*
*height-return*
*depth-return*
*border-width-return*
*text-width-return*
*direction-return*
*ascent-return*
*descent-return*
*overall-return*
*GC-Values*
*window-xcolor*
*window-menu-code*

*window-keymap*
*window-shiftkeymap*
*window-keyinit*
*window-meta*
*window-ctrl*
*window-shift*
*window-string*
*window-string-count*
*window-string-max*
*window-input-string-x*
*window-input-string-y*
*window-input-string-charwidth*

*window-shift-keys*
*window-control-keys*
*window-meta-keys*
*barmenu-update-value-cons*
*picmenu-no-selection*
*min-keycodes-return*
*max-keycodes-return*
*keycodes-return*
 ))
  (export x))         ; export the above symbols
