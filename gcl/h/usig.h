

typedef void (*handler_function_type)();
EXTER handler_function_type our_signal_handler[32];
#ifdef __MINGW32__
void main_signal_handler (int signo);
#else
void main_signal_handler();
#endif

   
#define signal_mask(n)  (1 << (n))
   
   
     
   
   
