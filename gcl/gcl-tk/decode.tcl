# this file contains the protocol for receiving connections from GCL and
# other lisps [or other languages]
#  The communication is via a socket, and the data is packaged up into
#  packets, which we track letting the other side know how much is actually
#  received.   This protocol is to prevent problems with flooding a
#  communications channel.   The sender knows how many bytes are in the pipe.
#  the outer wrapper is
#   { char magic;
#     unsigned short length; /* including the header */
#     unsigned short received; /* incremental number of bytes received at the
#                                  other end of the channel */
# 				  

# (MAGIC1 MAGIC2 TYPE FLAG BODY-LENGTH NIL NIL MSG-INDEX NIL NIL)


    
set GclMTypes { m_not_used
     m_create_command
     m_reply
     m_call
     m_tcl_command
     m_tcl_command_wait_response
     m_tcl_clear_connection  
     m_tcl_link_text_variable
     m_set_lisp_loc
     m_tcl_set_text_variable
     m_tcl_unlink_text_variable}


proc GclDecodeMsg { msg } {

#  char magic1; \06
#  char magic2; 'A'
#  char type;  m_*
#  unsigned char flag;
#  unsigned char size[3];      /* of body */
#  unsigned char msg_id[3];     
#  char body[1];
    
    global GclMTypes
    if { [string match "\06A*" $msg] } {
	 binary scan [string range $msg 2 end] ccsc  type flag bodyLo bodyHi 
	set bodyLength [expr ($bodyLo & 0xffff)+ ($bodyHi >> 16)]
	set index [msgIndex $msg]
	set ans "xMsg-id=$index, type= [lindex $GclMTypes $type], length=$bodyLength, body=[string range $msg 10 [expr 10 + $bodyLength-1]]"
    } else {set ans "invalidmsg:<$msg>" }
}

#proc GclmsgIndex { msg } {
#     binary scan [string range $msg 7 9] sc   indLo indHi
#     set index [expr ($indLo & 0xffff)+ ($indHi >> 16)]
#    return $index
#}

proc Gclget3Bytes { s } {
    binary scan $s "sc" lo hi
    return [expr {  ($lo & 0xffff) + ($hi << 16) }]
}

proc GclMake3Bytes { n } {
   return [ string range [binary format i $n] 0 2]
}

proc debugSend { msg } {
    puts stderr $msg
     flush stderr
}
proc GclAnswerSocket { host port pid } {
    global GclSock GclPdata GclPacket
    set sock [socket $host $port]
    setupPacket $sock
    fconfigure $sock  -blocking 0 -translation {binary binary}
    # debugSend fconfigure:$sock:[fconfigure $sock]
    set GclSock $sock
    catch { unset GclPdata(data,$sock) }
    fileevent  $sock readable "GclReadAndAct1 $sock"
    set GclPdata(pid,$sock) $pid
    return $sock
}

proc setupPacket { sock } {
    global GclPacket
    # data including 5 byte headers
    set GclPacket(indata,$sock) ""
    set GclPacket(received,$sock) 0
    set GclPacket(sent_not_received,$sock) 0
    # the data after stripping headers
    set GclPacket(outdata,$sock) ""
}


proc GclRead1 { sock } {
    global GclPacket
    upvar #0 GclPacket(indata,$sock) indata
    set recd 0
    append indata [read $sock]
    set ll 0
    while { [set l [string length $indata]] >= 5 } {
	binary scan   $indata "css" magic length received
	# debugSend "magic=$magic,length=$length,received:=$received,indata=$indata"
	# -122 = signedchar(0206)
	if { $magic != -122 } {
	    error "bad magic"
	}
	# debugSend "test: $l >= $length + 5"
	if { $l >= $length } {
	    append GclPacket(outdata,$sock) [string range $indata 5 [expr $length -1]]
	    set indata [string range $indata $length end]
	    incr recd $received
	    incr ll $length
	} else { break
	}
	
    }
    incr GclPacket(received,$sock) $ll
    if { $recd } {
	incr GclPacket(sent_not_received,$sock) -$recd
    }
    if { $GclPacket(received,$sock) > 1500 } {
	sendReceiveConfirmation $sock
    }
    set res $GclPacket(outdata,$sock)
    set GclPacket(outdata,$sock) ""
    # debugSend "GclRead1--><$res>"
    return $res
}


proc sendReceiveConfirmation { sock } {
    GclWrite1 $sock ""
}

proc GclWrite1 { sock data } {
    global GclPacket
    # debugSend "entering GclWrite1"
    set length [expr 5 + [string length $data]]
    set hdr \206[binary format ss $length  $GclPacket(received,$sock)]
    # debugSend "hdr=$hdr, [array get GclPacket *]"
    set GclPacket(received,$sock) 0
    incr GclPacket(sent_not_received,$sock) $length
    #debugSend "GclWrite1:<$hdr$data>"
    puts -nonewline $sock $hdr$data
    flush $sock
}

proc GclReadAndAct1 { sock } {
    global GclPdata      GclMTypes
    upvar #0 GclPdata(data,$sock) msg
    set read [GclRead1 $sock]
    
    if { [string length $read] == 0 } {
	if { [eof $sock] } {
	    # debugSend "exitting since $sock is closed"
	    exit 1
	}
	return ""
	
    }
    
    append msg $read
    while { [set l [string length $msg]] >= 10 } {	
	#debugSend "msg=<$msg>"
	#debugSend [GclDecodeMsg $msg]
	binary scan $msg sccsc magic type flag bodyLo bodyHi
	if { $magic != 16646 } {
	    error "bad magic:[string range $msg 0 1]"
	}
	set bodyLength [expr ($bodyLo & 0xffff)+ ($bodyHi >> 16)]
	if { $l >= 10+$bodyLength } {
	    set toeval [list [lindex $GclMTypes $type]  $msg [string range $msg 10 [expr 10 + $bodyLength-1]]]
	    set msg [string range $msg  [expr 10 + $bodyLength] end]
	    #debugSend toeval=$toeval
	    if { [catch { eval $toeval } err] } {
		puts stderr "error in [lindex $toeval 0] [string range [lindex $toeval 1 ] 0 13]... [lindex $toeval 2]: $err"
		flush stderr
	    }
	}
    }
}




proc GclGetCString {s } {
   return [string range $s 0 [expr [string first \0 $s] -1]]
}

set GclSockMsgId 0

proc sock_write_str {typeflag  text } {
    global GclSock GclSockMsgId
    set msg "\06A$typeflag[GclMake3Bytes [string length $text]][GclMake3Bytes [incr GclSockMsgId]]$text"
    #debugSend sending:[GclDecodeMsg $msg]
    GclWrite1 $GclSock $msg
    
}

proc GclGenericCommand { n arg } {
    global GclSock
  # 2 == [lsearch $GclMTypes m_reply]
  sock_write_str "\3\0" "[GclMake3Bytes $n]$arg"
    signalParent $GclSock
}

proc GclGenericCommandStringify { n arglist lis } {
    global GclSock
    set i 0
    set ans "[GclMake3Bytes $n]("
    foreach v $lis {
	if { "s" == "[string range $arglist $i $i]" } {
	   append ans " \"" $v "\""
	} else { append ans " " $v
	}
    }
    append ans ")"
    sock_write_str "\3\0" $ans
    signalParent $GclSock
}
	    

proc m_create_command { msg body } {
    #debugSend "in m_create_command"
    set n [Gclget3Bytes $body]
    set arglist [GclGetCString [string range $body 3 end]]
#    "debugSend callback_$n:args=\$args  ;  GclGenericCommandStringify $n $arglist \$args" \

    if { "$arglist" == "" } {
    proc callback_$n { { arg1 "" } }   "GclGenericCommand $n \$arg1"
    } else {
    proc callback_$n { args }  "GclGenericCommandStringify $n $arglist \$args"
    }

}


proc m_tcl_command { msg body } {

    set body [string trimright  $body "\0"]
   # set body [GclGetCString $body]
   # set fail [catch { eval $body } res]
  # set fail [catch { eval $body } res]
    eval $body
    # set com "update idletasks"
    #after cancel $com
    #after 5 $com
   # update idletasks
   # puts stderr "doing $body" ; flush stderr
   # debugSend "in eval of <$body>: fail=$fail,res=<$res>"
}

proc m_tcl_command_wait_response { msg body } {
    global GclSock
    set body [string trimright  $body "\0"]
#    set body [GclGetCString $body]
    set fail  [catch { eval $body } res]
    # 2 == [lsearch $GclMTypes m_reply]
    sock_write_str "\2\0" "$fail[string range $msg 7 9]$res"
    # debugSend "    signalParent $GclSock"
    # no need to signal other side is waiting.
    # signalParent $GclSock
}

proc m_tcl_clear_connection { msg body } {
    global GclSock
    flush $GclSock
    set GclPdata($GclSock,data) ""
}

proc m_tcl_set_text_variable { msg body } {
    set n [string first \0 $body]
    set [string range $body 0 [expr  $n -1]] [string range $body [expr $n+1] end]
}

proc m_tcl_link_text_variable { msg body } {
    global GclPdata
    set i [Gclget3Bytes $body]
    set name [string range $body 3 end]
    uplevel #0 trace variable wu $name "GclTellLispVarChanged $i"
}

proc signalParent1 {sock  } {
    global GclPdata GclPacket
    if { $GclPacket(sent_not_received,$sock) } {
	exec kill -s SIGUSR1 $GclPdata(pid,$sock) &
    }
}


proc signalParent {sock } {
    global delay
    set com "signalParent1 $sock"
    after cancel $com
    after 5 $com
}


proc  GclTellLispVarChanged { i name1 name2 op } {
    global GclPdata
    upvar #0 $name1 val 
    # 8 == [lsearch $GclMTypes m_set_lisp_loc]
    sock_write_str \8\0 "[GclMake3Bytes $i]$val"
    signalParent $GclSock

}
    
proc m_tcl_unlink_text_variable { msg body } {
    set i [Gclget3Bytes  $body]
    set name [string range $body 3 end]
    trace vdelete $name wu "GclTellLispVarChanged $i"
}
 









