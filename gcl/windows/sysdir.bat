cd %1
echo (setq si::*system-directory* (namestring(truename (make-pathname :name nil :type nil :defaults (si::argv 0))))) (si::save-system "modified.exe") | saved_gcl.exe 
del saved_gcl.exe
ren modified.exe saved_gcl.exe
pause
