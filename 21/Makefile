CC		= gcc

CFLAGS	= -Werror -ansi -g
LDFLAGS	= -g -static


.PHONY: all clean

all:   1


1: 21.1.o
	$(CC) $(LDFLAGS) -o $@ $<
	
%o:%c
	$(CC) $(CFLAGS) $<
	
	
clean:
	del *.o
	del *.exe