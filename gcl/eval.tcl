# A frame, scrollbar, and text
frame .eval
set _t [text .eval.t -width 40 -height 15 -yscrollcommand {.eval.s set}]
scrollbar .eval.s -command {.eval.t yview}
pack .eval.s -side left -fill y
pack .eval.t -side right -fill both -expand true
pack .eval -fill both -expand true

# Insert the prompt and initialize the limit mark
.eval.t insert insert "Tcl eval log\n"
set prompt "tcl> "
.eval.t insert insert $prompt
.eval.t mark set limit insert
.eval.t mark gravity limit left
focus .eval.t

# Keybindings that limit input and eval things
bind .eval.t <Return> { _Eval .eval.t ; break }
bind .eval.t <Any-Key> {
    if [%W compare insert < limit] {
	%W mark set insert end
    }
}
bind .eval.t <BackSpace> {
    if {[%W tag nextrange sel 1.0 end] != ""} {
        %W delete sel.first sel.last
    } elseif [%W compare insert > limit] {
        %W delete insert-1c
        %W see insert
    }
    break
}
bindtags .eval.t {.eval.t Text all}

proc _Eval { t } {
    global prompt
    set command [$t get limit end]
    if [info complete $command] {
	$t insert insert \n
	$t mark set limit insert
	set err [catch {uplevel #0 $command} result]
	if {[string length $result] > 0} {
	    $t insert insert $result\n
	}
	$t insert insert $prompt
	$t see insert
	$t mark set limit insert
	return
    } else {
	$t insert insert \n
    }
}

rename puts putsSystem
proc puts args {
    if {[llength $args] > 3} {
	error "invalid arguments"
    }
    set newline "\n"
    if {[string match "-nonewline" [lindex $args 0]]} {
	set newline ""
	set args [lreplace $args 0 0]
    }
    if {[llength $args] == 1} {
	set chan stdout
	set string [lindex $args 0]$newline
    } else {
	set chan [lindex $args 0]
	set string [lindex $args 1]$newline
    }
    if [regexp (stdout|stderr) $chan] {
	.eval.t mark gravity limit right
	.eval.t insert limit $string
	.eval.t see limit
	.eval.t mark gravity limit left
    } else {
	putsSystem -nonewline $chan $string
    }
}
