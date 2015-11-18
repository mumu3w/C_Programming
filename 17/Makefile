CC		= gcc

CFLAGS	= -Werror -ansi -g
LDFLAGS	= -g -static


.PHONY: all clean

all:   1 2 3 5 6
	
1: 17.1.o readline.o
	$(CC) $(LDFLAGS) -o $@ $< readline.o
	
2: 17.2.o readline.o
	$(CC) $(LDFLAGS) -o $@ $< readline.o
	
3: 17.3.o readline.o
	$(CC) $(LDFLAGS) -o $@ $< readline.o
	
5: 17.5.o
	$(CC) $(LDFLAGS) -o $@ $<
	
6: 17.6.o
	$(CC) $(LDFLAGS) -o $@ $<
	
%o:%c
	$(CC) $(CFLAGS) $<
	
	
clean:
	del *.o
	del *.exe