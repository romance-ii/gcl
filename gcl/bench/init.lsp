(si::set-hole-size 1000)
(allocate 'cons 2000  t)
(allocate 'fixnum 400)
(allocate 'cfun 400)
#-next (si::allocate-relocatable-pages 700 t)
;#+next (si::allocate-relocatable-pages 1000 t)
(gbc 1)
(setq si::*notify-gbc* t)
(setq compiler::*cc* (concatenate 'string compiler::*cc* " -O6 "))
(trace system)
;;so that the lisps do the same thing.
(setq *print-pretty* nil)
;#+sparc(setq compiler::*cc* (concatenate 'string compiler::*cc* " -O4 "))
;(setq compiler::*cc* "/u15/gcc-2/gcc -B/u15/gcc-2/ -I/u15/gcc-2/include -I/u15/gcc-2 -DVOL=volatile -W -DMUST_COPY_VA_LIST")
;(setq compiler::*cc* "mygcc -DVOL=volatile -W -DMUST_COPY_VA_LIST")
;(setq compiler::*cc* "cc -DVOL= ")
;(trace system)



;(setq compiler::*cc* "gcc -pipe -fwritable-strings  -DVOL=volatile -I/usr/local/src/gcl-2.2/o -fsigned-char -fcaller-saves -fomit-frame-pointer -funroll-loops -static -O6 -c -I. boyer.c -w ")



      




	 
    