.SUFFIXES: .o .c

HDIR	= ../h

OFLAG	= -O
ODIR	= .

-include ../makedefs

DOS_ODIR=.

CFLAGS	= -I. -I$(HDIR) $(ODIR_DEBUG)

.s.o:
	$(CC) -c $(OFLAG) $(CFLAGS) $*.c

.c.o:
	$(CC) -c $(OFLAG) $(CFLAGS) $*.c

OBJS	= $(EXX_DOS)

all:	$(OBJS)

clean:
	rm -f $(OBJS)


