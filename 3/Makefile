CC		= gcc

CFLAGS	= -Werror -ansi -g -c
LDFLAGS	= -g -static


.PHONY: all clean

all: 1 2 3 4 5 6

1: 3.1.o
	$(CC) $(LDFLAGS) -o $@ $<
	
2: 3.2.o
	$(CC) $(LDFLAGS) -o $@ $<
	
3: 3.3.o
	$(CC) $(LDFLAGS) -o $@ $<
	
4: 3.4.o
	$(CC) $(LDFLAGS) -o $@ $<
	
5: 3.5.o
	$(CC) $(LDFLAGS) -o $@ $<
	
6: 3.6.o
	$(CC) $(LDFLAGS) -o $@ $<

%o:%c
	$(CC) $(CFLAGS) $<

clean:
	-del *.o 
#	-del *.a 
#	-del *.dll
	-del *.exe 
#	-del *.def