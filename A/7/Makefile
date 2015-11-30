CC		= gcc

CFLAGS	= -Werror -ansi -g -c
LDFLAGS	= -g -static


.PHONY: all clean

all:   2 3 4 5 6 7 8 9 10 11 12 13 14 15
	
2: 7.2.o
	$(CC) $(LDFLAGS) -o $@ $<
	
3: 7.3.o
	$(CC) $(LDFLAGS) -o $@ $<
	
4: 7.4.o
	$(CC) $(LDFLAGS) -o $@ $<
	
5: 7.5.o
	$(CC) $(LDFLAGS) -o $@ $<
	
6: 7.6.o
	$(CC) $(LDFLAGS) -o $@ $<
	
7: 7.7.o
	$(CC) $(LDFLAGS) -o $@ $<

8: 7.8.o
	$(CC) $(LDFLAGS) -o $@ $<
	
9: 7.9.o
	$(CC) $(LDFLAGS) -o $@ $<
	
10: 7.10.o
	$(CC) $(LDFLAGS) -o $@ $<
	
11: 7.11.o
	$(CC) $(LDFLAGS) -o $@ $<
	
12: 7.12.o
	$(CC) $(LDFLAGS) -o $@ $<
	
13: 7.13.o
	$(CC) $(LDFLAGS) -o $@ $<
	
14: 7.14.o
	$(CC) $(LDFLAGS) -o $@ $<
	
15: 7.15.o
	$(CC) $(LDFLAGS) -o $@ $<
	
%o:%c
	$(CC) $(CFLAGS) $<

clean:
	-del *.o 
#	-del *.a 
#	-del *.dll
	-del *.exe 
#	-del *.def