/**************************************************************/

#include <stdio.h>
#include <X11/Xlib.h>           /* the X library */
#include <X11/Xutil.h>          /* the X library */

   /* a few arbitary constants */
#define START_X         10
#define START_Y         20
#define WINDOW_WIDTH   225   
#define WINDOW_HEIGHT  400
#define BORDER_WIDTH     1
#define KEY_STR_LENGTH  20

Display *the_display;           /* the display that will be used */
int the_screen;                 /* the screen that will be used */
Window root_window;             /* the root window on the screen */
XSizeHints size_hints;          /* size hints for the window manager */
XEvent the_event;               /* the structure for the input event */
XSetWindowAttributes attributes;/* the windows attributes */

GC the_solid_GC,
   the_clear_GC;     /* the graphics contexts */

XGCValues the_solid_GC_values,
          the_clear_GC_values;

Colormap cmap;
XFontStruct *the_fontstruct;       /* the font info to be used */

Window open_window(void)
{
  Window the_window;              /* the window that will be opened */
  int i, stop;

  /* Set the display to be the default display (ie, your
     display as given in the environment variable DISPLAY). */

  if ((the_display = XOpenDisplay("")) == NULL)
    {
      printf("can't open display\n");
      return(-1);
    }

  /* A few useful values. */

  the_screen = DefaultScreen(the_display);
  root_window = RootWindow(the_display,the_screen);

  /* Set the size hints for the window manager. */

  size_hints.x = START_X;
  size_hints.y = START_Y;
  size_hints.width = WINDOW_WIDTH;
  size_hints.height = WINDOW_HEIGHT;
  size_hints.flags = PSize|PPosition;

  /* Create a window of fixed size, origin, and borderwidth.
     The window will have a black border and white background. */

  the_window = XCreateSimpleWindow(the_display,root_window,
				   size_hints.x,size_hints.y,size_hints.width,
				   size_hints.height,BORDER_WIDTH,
				   BlackPixel(the_display,the_screen),
				   WhitePixel(the_display,the_screen));
				   
  XSetStandardProperties(the_display,the_window,"My Window","My Icon",
			 None,NULL,NULL,&size_hints);

  cmap = DefaultColormap(the_display, the_screen);

  the_solid_GC = XCreateGC(the_display, the_window, None, &the_solid_GC_values);
  the_clear_GC = XCreateGC(the_display, the_window, None, &the_clear_GC_values);

  /* for a sun */
  XSetBackground(the_display, the_solid_GC, BlackPixel(the_display,the_screen));
  XSetForeground(the_display, the_solid_GC, BlackPixel(the_display,the_screen));

  XSetBackground(the_display, the_clear_GC, WhitePixel(the_display,the_screen));
  XSetForeground(the_display, the_clear_GC, WhitePixel(the_display,the_screen));

  if ((the_fontstruct = XLoadQueryFont(the_display,"8x13")) == NULL)
    {
      printf("could not open font\n");
      return(-1);
    }
  /* Put the font into the graphics context for draw operations. */
  XSetFont(the_display, the_solid_GC, the_fontstruct->fid);
  XSetFont(the_display, the_clear_GC, the_fontstruct->fid);

  /* Tell the server to make the window visible. */

  XMapWindow(the_display,the_window);

  attributes.bit_gravity = NorthWestGravity;
  XChangeWindowAttributes(the_display, the_window, CWBitGravity, &attributes);
  XFlush(the_display);
  return(the_window);
}

int close_window(Window the_window)
{
  XDestroyWindow(the_display, the_window);
  XFlush(the_display);
  return(1);
}

int draw_line(Window the_window, int x1, int y1, int x2, int y2)
{
  XDrawLine(the_display, the_window, the_solid_GC, x1, y1, x2, y2);
  XFlush(the_display);
  return(1);
}

int draw_arc(Window the_window, int x, int y, int width, int height, int angle1, int angle2)
{
  XDrawArc(the_display, the_window, the_solid_GC,
	   x, y, width, height, angle1, angle2);
  XFlush(the_display);
  return(1);
}

int fill_arc(Window the_window, int x, int y, int width, int height, int angle1, int angle2)
{
  XFillArc(the_display, the_window, the_solid_GC,
	   x, y, width, height, angle1, angle2);
  XFlush(the_display);
  return(1);
}

int clear_arc(Window the_window, int x, int y, int width, int height, int angle1, int angle2)
{
  XFillArc(the_display, the_window, the_clear_GC,
	   x, y, width, height, angle1, angle2);
  XFlush(the_display);
  return(1);
}

int set_arc_mode (int pie_or_chord)
{
  if (pie_or_chord == 0) {
    XSetArcMode(the_display, the_solid_GC, ArcChord);
    XSetArcMode(the_display, the_clear_GC, ArcChord);
  }
  else {
    XSetArcMode(the_display, the_solid_GC, ArcPieSlice);
    XSetArcMode(the_display, the_clear_GC, ArcPieSlice);
  }
  return(1);
}

int erase_line(Window the_window, int x1, int y1, int x2, int y2)
{
  XDrawLine(the_display, the_window, the_clear_GC, x1, y1, x2, y2);
  XFlush(the_display);
  return(1);
}

int draw_text(Window the_window, char *string, int x, int y)
{
  XDrawString(the_display, the_window, the_solid_GC, x, y,
	      string, strlen(string));
  XFlush(the_display);
  return(1);
}

int erase_text(Window the_window, char *string, int x, int y)
{
  XDrawString(the_display, the_window, the_clear_GC, x, y,
	      string, strlen(string));
  XFlush(the_display);
  return(1);
}

int clear_window(Window the_window)
{
  XClearWindow(the_display, the_window);
  XFlush(the_display);
  return(1);
}

int resize_window(Window the_window, int width, int height)
{
  XResizeWindow(the_display, the_window, width, height);
  XFlush(the_display);
  return(1);
}

int raise_window(Window the_window)
{
  XRaiseWindow(the_display, the_window);
  XFlush(the_display);
  return(1);
}

int use_font (char *font_name)
{
  if ((the_fontstruct = XLoadQueryFont(the_display, font_name)) == NULL)
    return(-1);

  /* Put the font into the graphics context for draw operations. */
  XSetFont(the_display, the_solid_GC, the_fontstruct->fid);
  XSetFont(the_display, the_clear_GC, the_fontstruct->fid);
  XFlush(the_display);
  return(1);
}



int set_background (Window the_window, char *color_string)
{
  XColor color;
  int result;

  if (result = XParseColor(the_display, cmap, color_string, &color)) {
    if (result = XAllocColor(the_display, cmap, &color)) {
      XSetWindowBackground(the_display, the_window, color.pixel);
      XSetBackground(the_display, the_clear_GC, color.pixel);
      XSetForeground(the_display, the_clear_GC, color.pixel);
      XFlush(the_display);
    }
  }
  return(result);
}

int set_foreground (char *color_string)
{
  XColor color;
  int result;

  if (result = XParseColor(the_display, cmap, color_string, &color)) {
    if (result = XAllocColor(the_display, cmap, &color)) {
      XSetForeground(the_display, the_solid_GC, color.pixel);
      XSetBackground(the_display, the_solid_GC, color.pixel);
      XFlush(the_display);
      return(1);
    }
  }
}
