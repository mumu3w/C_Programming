CC		= gcc

CFLAGS	= -Werror -ansi -g -c
LDFLAGS	= -g -static


.PHONY: all clean

all:   1 2 3 4
	
1: 11.1.o
	$(CC) $(LDFLAGS) -o $@ $<
	
2: 11.2.o
	$(CC) $(LDFLAGS) -o $@ $<
	
3: 11.3.o
	$(CC) $(LDFLAGS) -o $@ $<
	
4: 11.4.o
	$(CC) $(LDFLAGS) -o $@ $<
	
%o:%c
	$(CC) $(CFLAGS) $<

clean:
	-del *.o 
#	-del *.a 
#	-del *.dll
	-del *.exe 
#	-del *.def