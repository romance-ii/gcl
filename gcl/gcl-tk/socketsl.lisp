(in-package "SI")



;     (clines "#define our_read_with_offset(fd,buffer,offset,nbytes,timeout) our_read(fd,&((buffer)->ust.ust_self[offset]),nbytes,timeout)")
;;(defun our-read-with-offset (fd buffer offset bytes-to-read timeout)
;;    (return bytes read)
;(defentry our-read-with-offset (int object int int int) (int "our_read_with_offset"))
(clines "#define our_write_object(fd,buffer,nbytes) our_write(fd,buffer->ust.ust_self,nbytes)")
;; (defun our-write (fd buffer nbytes) (return bytes-written))

(defentry our-write (int object int ) (int "our_write_object"))
(defentry print-to-string1 (object object object) (object print_to_string1))

(clines "#define reset_string_input_stream1(strm,string,start,end) reset_string_input_stream(strm,string,fix(start),fix(end))")
(defentry reset-string-input-stream (object object object object)  (object  "reset_string_input_stream1"))


;(clines "#define symbol_value_any(x) ((x)->s.s_dbind)")
;(defentry symbol-value-any (object) (object symbol_value_any))

;(clines "#define get_signals_allowed() signals_allowed")
;(defentry signals-allowed () (int "get_signals_allowed"))
;(defentry install_default_signals ()(int "install_default_signals"))

;(defentry unblock-signal (int) (int "unblock_signal"))


(defentry getpid () (int "getpid"))


