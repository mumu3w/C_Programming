CC		= gcc

CFLAGS	= -Werror -ansi -g -c
LDFLAGS	= -g -static


.PHONY: all clean

all:   1 2 3 4 5 6 7 8
	
1: 9.1.o
	$(CC) $(LDFLAGS) -o $@ $<
	
2: 9.2.o
	$(CC) $(LDFLAGS) -o $@ $<
	
3: 9.3.o
	$(CC) $(LDFLAGS) -o $@ $<
	
4: 9.4.o
	$(CC) $(LDFLAGS) -o $@ $<
	
5: 9.5.o
	$(CC) $(LDFLAGS) -o $@ $<
	
6: 9.6.o
	$(CC) $(LDFLAGS) -o $@ $<
	
7: 9.7.o
	$(CC) $(LDFLAGS) -o $@ $<
	
8: 9.8.o
	$(CC) $(LDFLAGS) -o $@ $<
	
%o:%c
	$(CC) $(CFLAGS) $<

clean:
	-del *.o 
#	-del *.a 
#	-del *.dll
	-del *.exe 
#	-del *.def