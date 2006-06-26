(load "/stage/ftp/pub/novak/xgcl-4/gcl_dwtrans.lsp")
(use-package 'xlib)
(load "/stage/ftp/pub/novak/xgcl-4/gcl_drawtrans.lsp")
(load "/stage/ftp/pub/novak/xgcl-4/gcl_editorstrans.lsp")
(load "/stage/ftp/pub/novak/xgcl-4/gcl_lispservertrans.lsp")
(load "/stage/ftp/pub/novak/xgcl-4/gcl_menu-settrans.lsp")
(load "/stage/ftp/pub/novak/xgcl-4/gcl_dwtest.lsp")
(load "/stage/ftp/pub/novak/xgcl-4/gcl_draw-gates.lsp")

(wtesta)
(wtestb)
(wtestc)
(wtestd)
(wteste)
(wtestf)
(wtestg)
(wtesth)
(wtesti)
(wtestj)
(wtestk)

(window-clear myw)
(edit-color myw)

(lisp-server)

(draw 'foo)

(window-draw-box-xy myw 48 48 204 204)
(window-edit myw 50 50 200 200 '("Now is the time" "for all" "good"))

(draw-nand myw 50 50)
