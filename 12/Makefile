CC		= gcc

CFLAGS	= -Werror -ansi -g -c
LDFLAGS	= -g -static


.PHONY: all clean

all:   3 4 5 6 7
	
3: 12.3.o
	$(CC) $(LDFLAGS) -o $@ $<
	
4: 12.4.o
	$(CC) $(LDFLAGS) -o $@ $<
	
5: 12.5.o
	$(CC) $(LDFLAGS) -o $@ $<
	
6: 12.6.o
	$(CC) $(LDFLAGS) -o $@ $<
	
7: 12.7.o
	$(CC) $(LDFLAGS) -o $@ $<
	
%o:%c
	$(CC) $(CFLAGS) $<

clean:
	-del *.o 
#	-del *.a 
#	-del *.dll
	-del *.exe 
#	-del *.def