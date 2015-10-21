CC		= gcc

CFLAGS	= -Werror -ansi -g -c
LDFLAGS	= -g -static


.PHONY: all clean

all: 1 2 3 4 5 6 7 8 9 10 11 12

1: 6.1.o
	$(CC) $(LDFLAGS) -o $@ $<
	
2: 6.2.o
	$(CC) $(LDFLAGS) -o $@ $<
	
3: 6.3.o
	$(CC) $(LDFLAGS) -o $@ $<
	
4: 6.4.o
	$(CC) $(LDFLAGS) -o $@ $<
	
5: 6.5.o
	$(CC) $(LDFLAGS) -o $@ $<
	
6: 6.6.o
	$(CC) $(LDFLAGS) -o $@ $<
	
7: 6.7.o
	$(CC) $(LDFLAGS) -o $@ $<
	
8: 6.8.o
	$(CC) $(LDFLAGS) -o $@ $<
	
9: 6.9.o
	$(CC) $(LDFLAGS) -o $@ $<
	
10: 6.10.o
	$(CC) $(LDFLAGS) -o $@ $<
	
11: 6.11.o
	$(CC) $(LDFLAGS) -o $@ $<
	
12: 6.12.o
	$(CC) $(LDFLAGS) -o $@ $<
	
%o:%c
	$(CC) $(CFLAGS) $<

clean:
	-del *.o 
#	-del *.a 
#	-del *.dll
	-del *.exe 
#	-del *.def