
set LongestMatchPossible 3000

proc MarkRegexps { w regexp tag tags {start 0.0} {end end}} {
 upvar #0 LongestMatchPossible longest
 $w mark set MaRe $start
 set found 0 
 while {[$w compare MaRe < $end]} {
    set began MaRe
    set text [$w get MaRe "MaRe + [expr 10 * $longest] chars"]
    set limit [expr 9 * $longest]
    set begin 0
    set last "-1 -1"
    while {[regexp -indices $regexp $text all j1 j2 j3 j4 j5 j6 j7 j8 \
                                      j9 ]} {
      incr found
      set i 1 
      set endmatch [lindex $all 1]
      $w tag add $tag "MaRe + [expr $begin + [lindex $all 0]] chars" \
                   "MaRe + [expr $begin + [lindex $all 1]] chars" 
      foreach ta $tags {
        set all [set j$i]
        incr i
        if { $all != "-1 -1" } {
#        puts stdout "ta=$ta taa=[set $ta]"
#        puts stdout "found $endmatch: `[string range $text [lindex $all 0] [lindex $all 1]]'"
        $w tag add $ta "MaRe + [expr $begin + [lindex $all 0]] chars" \
                   "MaRe + [expr $begin + [lindex $all 1]] chars" }
        }
#      puts stdout "found $endmatch: `[string range $text [expr $endmatch - 10] \
[expr $endmatch + 4]]'"
      set text [string  range $text $endmatch end]
      incr begin $endmatch
      if {[expr $begin >= $limit]} { set limit $begin ;break}
  }
   $w mark set MaRe "MaRe + $limit chars"
}
# puts stdout "found $found matches"
}
