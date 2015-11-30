CC		= gcc

CFLAGS	= -Werror -ansi -g -c
LDFLAGS	= -g -static


.PHONY: all clean

all: 1 2 3 4 5 6

1: 4.1.o
	$(CC) $(LDFLAGS) -o $@ $<
	
2: 4.2.o
	$(CC) $(LDFLAGS) -o $@ $<
	
3: 4.3.o
	$(CC) $(LDFLAGS) -o $@ $<
	
4: 4.4.o
	$(CC) $(LDFLAGS) -o $@ $<
	
5: 4.5.o
	$(CC) $(LDFLAGS) -o $@ $<
	
6: 4.6.o
	$(CC) $(LDFLAGS) -o $@ $<

%o:%c
	$(CC) $(CFLAGS) $<

clean:
	-del *.o 
#	-del *.a 
#	-del *.dll
	-del *.exe 
#	-del *.def