#!/bin/sh

EXT=@EXT@
VERS=@VERS@

. /etc/default/gcl$EXT
if ! set | grep -q -w GCL_ANSI ; then GCL_ANSI=$DEFAULT_GCL_ANSI ; fi
if ! set | grep -q -w GCL_PROF ; then GCL_PROF=$DEFAULT_GCL_PROF ; fi

if [ "$GCL_PROF" = "" ] ; then 
    DIR=/usr/lib/gcl-$VERS ; 
else
    DIR=/usr/lib/gcl-$VERS-prof ; 
fi

if [ "$GCL_ANSI" = "" ] ; then 
    EXE=saved_gcl;
else
    EXE=saved_ansi_gcl;
fi
SYS=$DIR/unixport

exec $SYS/$EXE -dir $SYS/ -libdir $DIR/ \
   -eval '(setq si::*allow-gzipped-file* t)' \
   -eval '(setq si::*tk-library* "/usr/lib/tk@TKVERS@")' \
     "$@"

# other options: -load /tmp/foo.o -load jo.lsp -eval "(joe 3)"
