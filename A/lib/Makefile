RM		= -del
CC		= gcc
AR		= ar
CFLAGS	= -static -g -c
LDFLAGS	= -static -g -L. -lmyc

AOUTS	= demo1
LIBNAEM	= libmyc.a
LIBOBJS	= error.o readline.o

.PHONY: all clean

all: myc $(AOUTS)

demo1: demo1.c
	$(CC) -o $@ $< $(LDFLAGS)

myc: $(LIBOBJS)
	$(AR) rcs $(LIBNAEM) $(LIBOBJS)
	
%o:%c
	$(CC) $(CFLAGS) $<
	
clean:
	$(RM) *.o
	$(RM) *.exe
	$(RM) $(LIBNAEM) $(LIBOBJS)
#	$(RM) $(AOUTS) 