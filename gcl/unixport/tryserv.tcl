catch { close $server }  
proc jany { args } {
    global me ;
    set me [lindex $args 0] ;
    fconfigure $me -blocking 0 ;
    fileevent $me readable "joke $me"
}

proc joke { sock } {
    if { [eof $sock] } {
	puts "at end"
	close $sock
	return ""
    }
    set it [read $sock]
    puts "<$it>"
    return
}

set server [socket -server jany 4008]

proc send { s } { global me ;
                 puts $me $s ;
                 flush $me }
proc r { } {global me ; read $me }




