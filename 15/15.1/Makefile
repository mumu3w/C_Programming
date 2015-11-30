CC		= gcc
CFLAGS	= -ansi -Werror -g -I./

OBJS	= justify.o line.o word.o

justify: $(OBJS)
		$(CC) $(CFLAGS) -o $@ $(OBJS)
		justify < quote.txt > newquote.txt
		
justify.o: justify.c line.h word.h

line.o: line.c line.h

word.o: word.c word.h

%o:%c
	$(CC) $(CFLAGS) $<
	
clean:
	-del *.o 
	-del *.exe