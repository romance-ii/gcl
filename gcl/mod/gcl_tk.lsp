;;; Binding to the cross platform Japi GUI library from http://www.japi.de/

(eval-when (load eval)
	   (make-package "tk-primitives" :nicknames '(tkpr) :use '(lisp)))
(eval-when (compile)
	   (in-package "tk-primitives"))

(clines "#include <tcl.h>")
(clines "#include <tk.h>")

(clines "
extern Tcl_Interp *tcl_interpreter;

/* This flashes up the root Tk Window */

void tk_init ( void )
{
    if ( Tk_Init ( tcl_interpreter ) == TCL_ERROR ) {
        printf(\"Tk Init problem\n\");
    }
    Tcl_StaticPackage ( tcl_interpreter, \"Tk\", Tk_Init, Tk_SafeInit );
}

/* Use Tcl_EvalObj as it caches byte compiled expressions.
   Use deprecated Tcl_GetStringResult for now as Lisp knows strings. */

char *tk_evaluate ( char *tcl_expression_string )
{
    Tcl_Obj *expression = Tcl_NewStringObj ( tcl_expression_string, -1 );
    Tcl_Obj *result     = Tcl_EvalObj ( tcl_interpreter, expression );
    return ( Tcl_GetStringResult ( tcl_interpreter ) );
}

")

(defentry tk-init () ( void "tk_init" ))
(defentry tk-evaluate ( string ) ( string "tk_evaluate" ))
