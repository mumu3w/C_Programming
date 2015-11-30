CC		= gcc

CFLAGS	= -Werror -ansi -g -c
LDFLAGS	= -g -static


.PHONY: all clean

all:   1 2 3 4 5 6 7
	
1: 10.1.o
	$(CC) $(LDFLAGS) -o $@ $<
	
2: 10.2.o
	$(CC) $(LDFLAGS) -o $@ $<
	
3: 10.3.o
	$(CC) $(LDFLAGS) -o $@ $<
	
4: 10.4.o
	$(CC) $(LDFLAGS) -o $@ $<
	
5: 10.5.o
	$(CC) $(LDFLAGS) -o $@ $<
	
6: 10.6.o
	$(CC) $(LDFLAGS) -o $@ $<
	
7: 10.7.o
	$(CC) $(LDFLAGS) -o $@ $<
	
%o:%c
	$(CC) $(CFLAGS) $<

clean:
	-del *.o 
#	-del *.a 
#	-del *.dll
	-del *.exe 
#	-del *.def