#!/usr/bin/awk -f

/^@defun/ {
  a=split($0,A,"(");
  b=split($0,B,")");
  if (a==b) 
    print ; 
  else {
    i=1;
    c=$0;
  }
  next;
} 
{
  if (i) {
    sub("^ *","");
    c=c " " $0;
    a=split(c,A,"(");
    b=split(c,B,")");
    if (a==b) {
      print c;
      c="";
      i=0;
    }
  } else 
    print;
}
