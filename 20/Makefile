CC		= gcc

CFLAGS	= -Werror -ansi -g
LDFLAGS	= -g -static


.PHONY: all clean

all:   1


1: 20.1.o
	$(CC) $(LDFLAGS) -o $@ $<
	
%o:%c
	$(CC) $(CFLAGS) $<
	
	
clean:
	del *.o
	del *.exe