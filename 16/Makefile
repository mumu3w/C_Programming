CC		= gcc

CFLAGS	= -Werror -ansi -g
LDFLAGS	= -g -static


.PHONY: all clean

all:   1 2 3 4 5 6


1: 16.1.o
	$(CC) $(LDFLAGS) -o $@ $<
	
2: 16.2.o readline.o
	$(CC) $(LDFLAGS) -o $@ $< readline.o
	
3: 16.3.o readline.o
	$(CC) $(LDFLAGS) -o $@ $< readline.o
	
4: 16.4.o readline.o
	$(CC) $(LDFLAGS) -o $@ $< readline.o
	
5: 16.5.o
	$(CC) $(LDFLAGS) -o $@ $<
	
6: 16.6.o
	$(CC) $(LDFLAGS) -o $@ $<
	
%o:%c
	$(CC) $(CFLAGS) $<
	
	
clean:
	del *.o
	del *.exe