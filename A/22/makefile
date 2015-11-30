CC		= gcc

CFLAGS	= -Werror -ansi -g
LDFLAGS	= -g -static


.PHONY: all clean

all: 1 2 3 4a 4b 4c 5 6 7a 7b 8 9 10 11 12 13 14 16 17 18 19a 19b


1: 22.1.o
	$(CC) $(LDFLAGS) -o $@ $<
	
2: 22.2.o
	$(CC) $(LDFLAGS) -o $@ $<
	
3: 22.3.o
	$(CC) $(LDFLAGS) -o $@ $<

4a: 22.4a.o
	$(CC) $(LDFLAGS) -o $@ $<
	
4b: 22.4b.o
	$(CC) $(LDFLAGS) -o $@ $<
	
4c: 22.4c.o
	$(CC) $(LDFLAGS) -o $@ $<

5: 22.5.o
	$(CC) $(LDFLAGS) -o $@ $<

6: 22.6.o
	$(CC) $(LDFLAGS) -o $@ $<

7a: 22.7a.o
	$(CC) $(LDFLAGS) -o $@ $<
	
7b: 22.7b.o
	$(CC) $(LDFLAGS) -o $@ $<
	
8: 22.8.o readline.o
	$(CC) $(LDFLAGS) -o $@ $< readline.o
	
9: 22.9.o
	$(CC) $(LDFLAGS) -o $@ $<
	
10: 22.10.o readline.o
	$(CC) $(LDFLAGS) -o $@ $< readline.o
	
11: 22.11.c
	$(CC) $(LDFLAGS) -o $@ $<
	
12: 22.12.c
	$(CC) $(LDFLAGS) -o $@ $<
	
13: 22.13.c
	$(CC) $(LDFLAGS) -o $@ $<
	
14: 22.14.c
	$(CC) $(LDFLAGS) -o $@ $<
	
16: 22.16.c
	$(CC) $(LDFLAGS) -o $@ $<
	
17: 22.17.c
	$(CC) $(LDFLAGS) -o $@ $<
	
18: 22.18.c
	$(CC) $(LDFLAGS) -o $@ $<
	
19a: 22.19a.c
	$(CC) $(LDFLAGS) -o $@ $<
	
19b: 22.19b.c
	$(CC) $(LDFLAGS) -o $@ $<
	
	
%o:%c
	$(CC) $(CFLAGS) $<
	
	
clean:
	del *.o
	del *.exe