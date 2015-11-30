CC		= gcc

CFLAGS	= -Werror -ansi -g -c
LDFLAGS	= -g -static


.PHONY: all clean

all: 1 2 3 4 5 6 7 8 9 10 11

1: 5.1.o
	$(CC) $(LDFLAGS) -o $@ $<

2: 5.2.o
	$(CC) $(LDFLAGS) -o $@ $<
	
3: 5.3.o
	$(CC) $(LDFLAGS) -o $@ $<
	
4: 5.4.o
	$(CC) $(LDFLAGS) -o $@ $<
	
5: 5.5.o
	$(CC) $(LDFLAGS) -o $@ $<
	
6: 5.6.o
	$(CC) $(LDFLAGS) -o $@ $<
	
7: 5.7.o
	$(CC) $(LDFLAGS) -o $@ $<
	
8: 5.8.o
	$(CC) $(LDFLAGS) -o $@ $<
	
9: 5.9.o
	$(CC) $(LDFLAGS) -o $@ $<
	
10: 5.10.o
	$(CC) $(LDFLAGS) -o $@ $<
	
11: 5.11.o
	$(CC) $(LDFLAGS) -o $@ $<
	
%o:%c
	$(CC) $(CFLAGS) $<

clean:
	-del *.o 
#	-del *.a 
#	-del *.dll
	-del *.exe 
#	-del *.def