/*-*-c++-*-*/

#include <stdio.h>
#include <setjmp.h>
#include <tclExtend.h>
#include <tk.h>

Tcl_Interp *tcliMain;		/* Main and only tcl interpreter instance */

static Tk_Window mainWindow;	/* The main window for the application.  If
				 * NULL then the application no longer
				 * exists. */

static int tty;			/* Non-zero means standard input is a
				 * terminal-like device.  Zero means it's
				 * a file. */

static int synchronize = 1;
static char *szname = "TCL/TK-Scheme";
static char *szdisplay = NULL;	/* "unix:0.0"; */

static Tcl_DString command;	/* Used to assemble lines of terminal input
				 * into Tcl commands. */
static int gotPartial = 0;	/* Partial command in buffer. */

static char exitCmd[] = "exit";
static char errorExitCmd[] = "destroy .";

extern int isatty _ANSI_ARGS_((int fd));
/*
int __TclX_AppInit(Tcl_Interp *interp) { return TCL_OK; }
*/
/*
 *----------------------------------------------------------------------
 *
 * StdinProc --
 *
 *	This procedure is invoked by the event dispatcher whenever
 *	standard input becomes readable.  It grabs the next line of
 *	input characters, adds them to a command being assembled, and
 *	executes the command if it's complete.
 *
 * Results:
 *	None.
 *
 * Side effects:
 *	Could be almost arbitrary, depending on the command that's
 *	typed.
 *
 *----------------------------------------------------------------------
 */

static void
StdinProc(ClientData clientData, int mask)
{
#define BUFFER_SIZE 4000
  char input[BUFFER_SIZE+1];
  char *cmd;
  int code, count;

  count = read(fileno(stdin), input, BUFFER_SIZE);
  if (count <= 0) {
    if (!gotPartial) {
      if (tty) {
	Tcl_VarEval(tcliMain, "exit", (char *) NULL);
	exit(1);
      }
      else {
	Tk_DeleteFileHandler(0);
      }
      return;
    }
    else {
      count = 0;
    }
  }
  cmd = Tcl_DStringAppend(&command, input, count);
  if (count != 0) {
    if ((input[count-1] != '\n') && (input[count-1] != ';')) {
      gotPartial = 1;
      goto exitPoint;
    }
    if (!Tcl_CommandComplete(cmd)) {
      gotPartial = 1;
      goto exitPoint;
    }
  }
  gotPartial = 0;

  /*
   * Disable the stdin file handler;  otherwise if the command
   * re-enters the event loop we might process commands from
   * stdin before the current command is finished.  Among other
   * things, this will trash the text of the command being evaluated.
   */

  Tk_CreateFileHandler(0, 0, StdinProc, (ClientData) 0);
  code = Tcl_RecordAndEval(tcliMain, cmd, 0);
  Tk_CreateFileHandler(0, TK_READABLE, StdinProc, (ClientData) 0);
  if (tty)
    TclX_PrintResult (tcliMain, code, cmd);
  Tcl_DStringFree(&command);

 exitPoint:
  if (tty) {
    TclX_OutputPrompt (tcliMain, !gotPartial);
  }
}

/*
 *----------------------------------------------------------------------
 *
 * SignalProc --
 *
 *	Function called on a signal generating an error to clear the stdin
 *   	buffer.
 *----------------------------------------------------------------------
 */
static void
SignalProc (int signalNum)
{
  tclGotErrorSignal = 0;
  Tcl_DStringFree (&command);
  gotPartial = 0;
  if (tty) {
    fputc ('\n', stdout);
    TclX_OutputPrompt (tcliMain, !gotPartial);
  }
}

char *TclTkInit()
{
  tcliMain = Tcl_CreateInterp();

  mainWindow = Tk_CreateMainWindow(tcliMain, szdisplay, szname, "Tk");
  if (mainWindow == NULL)
    fprintf(stderr, "Unable to create mainWindow : %s\n", tcliMain->result);

  Tk_SetClass(mainWindow, "Tk");
  if (synchronize)
    XSynchronize(Tk_Display(mainWindow), True);

  Tk_GeometryRequest(mainWindow, 200, 200);
  /*
     if (__TclX_AppInit(tcliMain) != TCL_OK)
     TclX_ErrorExit (tcliMain, 255);
     */
  Tcl_AppInit(tcliMain);

  return ".";
}

void TclTkMainLoop()
{
  /*
   * Set the "tcl_interactive" variable.
   */
  tty = isatty(0);
  Tcl_SetVar(tcliMain, "tcl_interactive",
	     tty ? "1" : "0", TCL_GLOBAL_ONLY);
/*
  TclX_EvalRCFile (tcliMain);
*/
  /*
   * Commands will come from standard input.  Set up a handler
   * to receive those characters and print a prompt if the input
   * device is a terminal.
   */
  tclErrorSignalProc = SignalProc;
  Tk_CreateFileHandler(0, TK_READABLE, StdinProc, (ClientData) 0);
  if (tty)
    TclX_OutputPrompt (tcliMain, 1);

  Tk_MainLoop();
  Tcl_GlobalEval(tcliMain, exitCmd);

}

main()
{
  TclTkInit();
  TclTkMainLoop();
}

int
Tcl_AppInit(interp)
    Tcl_Interp *interp;		/* Interpreter for application. */
{
    Tk_Window main;

    main = Tk_MainWindow(interp);

    /*
     * Call the init procedures for included packages.  Each call should
     * look like this:
     *
     * if (Mod_Init(interp) == TCL_ERROR) {
     *     return TCL_ERROR;
     * }
     *
     * where "Mod" is the name of the module.
     */

    if (Tcl_Init(interp) == TCL_ERROR) {
	return TCL_ERROR;
    }
    if (Tk_Init(interp) == TCL_ERROR) {
	return TCL_ERROR;
    }

    if (TclX_Init(interp) == TCL_ERROR)
      return TCL_ERROR;

    if (TkX_Init(interp) == TCL_ERROR)
      return TCL_ERROR;

    /*
     * Call Tcl_CreateCommand for application-specific commands, if
     * they weren't already created by the init procedures called above.
     */

    /*
     * Specify a user-specific startup file to invoke if the application
     * is run interactively.  Typically the startup file is "~/.apprc"
     * where "app" is the name of the application.  If this line is deleted
     * then no user-specific startup file will be run under any conditions.
     */

    tcl_RcFileName = "~/.wishrc";
    return TCL_OK;
}
