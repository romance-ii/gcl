#!/bin/sh
export C_INCLUDE_PATH=/fix/s/camm/gcl/h:$C_INCLUDE_PATH
if [ "$GCL_ANSI" != "" ] ; then
exec /fix/s/camm/gcl/unixport/saved_ansi_gcl \
   -dir /fix/s/camm/gcl/unixport/ \
   -libdir /fix/s/camm/gcl/ \
   -eval '(setq si::*allow-gzipped-file* t)' \
   -eval '(setq si::*tk-library* "/usr/lib/tk8.3/../tk8.3")' \
   -eval '(si::init-readline)' \
     "$@"
else
exec /fix/s/camm/gcl/unixport/saved_ansi_gcl \
   -dir /fix/s/camm/gcl/unixport/ \
   -libdir /fix/s/camm/gcl/ \
   -eval '(setq si::*allow-gzipped-file* t)' \
   -eval '(setq si::*tk-library* "/usr/lib/tk8.3/../tk8.3")' \
   -eval '(si::init-readline)' \
     "$@"
fi
# other options: -load /tmp/foo.o -load jo.lsp -eval "(joe 3)"
