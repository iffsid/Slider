/*****************************************************\
* XLIB-ACTIONS.H
* By: Jesse McClure (c) 2012-2014
* See slider.c or COPYING for license information
\*****************************************************/

#ifndef __XLIB_ACTIONS_H__
#define __XLIB_ACTIONS_H__

extern void buttonpress(XEvent *);
extern void expose(XEvent *);
extern void keypress(XEvent *);
extern void propertynotify(XEvent *);

extern void draw();

Display *dpy;
GC gc;
Window root, wshow;
int scr, sw, sh;
unsigned int dep;
Visual *vis;
Bool running;
Cursor invisible_cursor, crosshair_cursor;

extern int command(const char *);

#endif /* __XLIB_ACTIONS_H__ */
