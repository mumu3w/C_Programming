CC		= gcc

CFLAGS	= -Werror -ansi -g -c
LDFLAGS	= -g -static


.PHONY: all clean

all:   1 2a 2b 2c 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18
	
1: 13.1.o
	$(CC) $(LDFLAGS) -o $@ $<
	
2a: 13.2a.o
	$(CC) $(LDFLAGS) -o $@ $<
	
2b: 13.2b.o
	$(CC) $(LDFLAGS) -o $@ $<
	
2c: 13.2c.o
	$(CC) $(LDFLAGS) -o $@ $<
	
3: 13.3.o
	$(CC) $(LDFLAGS) -o $@ $<
	
4: 13.4.o
	$(CC) $(LDFLAGS) -o $@ $<
	
5: 13.5.o
	$(CC) $(LDFLAGS) -o $@ $<
	
6: 13.6.o
	$(CC) $(LDFLAGS) -o $@ $<
	
7: 13.7.o
	$(CC) $(LDFLAGS) -o $@ $<
	
8: 13.8.o
	$(CC) $(LDFLAGS) -o $@ $<
	
9: 13.9.o
	$(CC) $(LDFLAGS) -o $@ $<
	
10: 13.10.o
	$(CC) $(LDFLAGS) -o $@ $<
	
11: 13.11.o
	$(CC) $(LDFLAGS) -o $@ $<
	
12: 13.12.o
	$(CC) $(LDFLAGS) -o $@ $<
	
13: 13.13.o
	$(CC) $(LDFLAGS) -o $@ $<
	
14: 13.14.o
	$(CC) $(LDFLAGS) -o $@ $<
	
15: 13.15.o
	$(CC) $(LDFLAGS) -o $@ $<
	
16: 13.16.o
	$(CC) $(LDFLAGS) -o $@ $<
	
17: 13.17.o
	$(CC) $(LDFLAGS) -o $@ $<
	
18: 13.18.o
	$(CC) $(LDFLAGS) -o $@ $<
	
%o:%c
	$(CC) $(CFLAGS) $<

clean:
	-del *.o 
#	-del *.a 
#	-del *.dll
	-del *.exe 
#	-del *.def