

typedef void (*handler_function_type)();
EXTER handler_function_type our_signal_handler[32];
void main_signal_handler();

   
#define signal_mask(n)  (1 << (n))
   
   
     
   
   
