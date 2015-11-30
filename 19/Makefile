CC		= gcc

CFLAGS	= -Werror -ansi -g
LDFLAGS	= -g -static


.PHONY: all clean

all: 1 2


1: 19.1.c stackADT2.c
	$(CC) $(LDFLAGS) -o $@ $< stackADT2.c
	
2: 19.2.c stackADT2.c
	$(CC) $(LDFLAGS) -o $@ $< stackADT2.c
	

clean:
	-del *.o
	-del *.exe