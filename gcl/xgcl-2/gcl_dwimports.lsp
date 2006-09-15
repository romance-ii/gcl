; dwimports.lsp                 Gordon S. Novak Jr.              08 Sep 06

; Copyright (c) 2006 Gordon S. Novak Jr. and The University of Texas at Austin.

; This file imports symbols of the XGCL package; these symbols may be
; needed by a more serious user of some of the XGCL functions. 

; See the file gnu.license .

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

; Some of the files that interface to the Xlib are adapted from DEC/MIT files.
; See the file dec.copyright for details.

; This file should be loaded immediately after starting Lisp:
; If Lisp has seen any of these symbols, loading this file will cause an error.

(dolist (x '( xlib::picmenu-spec  xlib::picmenu-button xlib::rgb
 xlib::menu-window xlib::flat xlib::parent-window xlib::parent-offset-x
 xlib::parent-offset-y xlib::picture-width xlib::picture-height
 xlib::title xlib::permanent xlib::menu-font xlib::item-width xlib::item-height
 xlib::items xlib::menuw xlib::title-present xlib::width xlib::height
 xlib::base-x xlib::base-y xlib::offset xlib::size xlib::region xlib::voffset
 xlib::vsize xlib::init xlib::init? xlib::contains? xlib::create xlib::clear
 xlib::select xlib::select! xlib::choose xlib::draw xlib::destroy
 xlib::moveto-xy xlib::reposition xlib::box-item xlib::unbox-item
 xlib::display-item xlib::item-value xlib::item-position xlib::find-item-width
 xlib::find-item-height xlib::adjust-offset xlib::calculate-size
 xlib::menu-x xlib::menu-y xlib::spec xlib::boxflg xlib::deleted-buttons
 xlib::draw-button xlib::delete-named-button xlib::drawing-width
 xlib::drawing-height xlib::buttons xlib::dotflg xlib::drawfn xlib::menu-font
 xlib::offset xlib::size xlib::highlightfn xlib::unhighlightfn
 xlib::containsxy? xlib::color xlib::value xlib::maxval xlib::barwidth
 xlib::horizontal xlib::subtrackfn xlib::subtrackparms xlib::update-value
 xlib::gcontext xlib::parent xlib::drawable-height xlib::drawable-width
 xlib::label xlib::font xlib::width xlib::height xlib::left xlib::right
 xlib::top-neg-y xlib::leftmargin xlib::rightmargin xlib::yposition
 xlib::wfunction xlib::foreground xlib::background xlib::force-output
 xlib::set-font xlib::set-foreground xlib::set-background
 xlib::set-cursor xlib::set-erase xlib::set-xor xlib::set-invert xlib::set-copy
 xlib::set-line-width xlib::set-line-attr xlib::std-line-attr xlib::unset
 xlib::reset xlib::sync xlib::geometry xlib::size xlib::get-geometry
 xlib::reset-geometry xlib::query-pointer xlib::wait-exposure xlib::wait-unmap
 xlib::clear xlib::mapw xlib::unmap xlib::destroy
 xlib::positive-y xlib::drawline xlib::draw-line xlib::draw-line-xy
 xlib::draw-latex-xy xlib::draw-arrow-xy xlib::draw-arrow2-xy
 xlib::draw-arrowhead-xy xlib::draw-box xlib::draw-box-xy
 xlib::draw-box-corners xlib::draw-rcbox-xy xlib::xor-box-xy xlib::draw-circle
 xlib::draw-circle-xy xlib::draw-ellipse-xy xlib::draw-arc-xy xlib::invertarea
 xlib::invert-area xlib::invert-area-xy xlib::copy-area-xy xlib::printat
 xlib::printat-xy xlib::prettyprintat-xy xlib::prettyprintat xlib::string-width
 xlib::string-extents xlib::erase-area xlib::erase-area-xy xlib::erase-box-xy
 xlib::moveto-xy xlib::move xlib::paint xlib::centeroffset xlib::draw-border
 xlib::track-mouse xlib::track-mouse-in-region xlib::init-mouse-poll
 xlib::poll-mouse xlib::get-point xlib::get-click xlib::get-line-position
 xlib::get-latex-position xlib::get-icon-position xlib::get-box-position
 xlib::get-box-size xlib::get-region xlib::adjust-box-side
 xlib::get-mouse-position xlib::get-circle xlib::get-ellipse
 xlib::get-crosshairs xlib::draw-crosshairs-xy xlib::get-cross
 xlib::draw-cross-xy xlib::draw-dot-xy xlib::draw-vector-pt
 xlib::get-vector-end xlib::reset-color xlib::set-color-rgb xlib::set-color
 xlib::set-xcolor xlib::free-color xlib::get-chars xlib::input-string
 xlib::courier-bold-12 xlib::8x10 xlib::9x15 xlib::center xlib::top
 xlib::bottom xlib::xor xlib::erase xlib::copy xlib::buttonname
  )) (import x))
