CC		= gcc
CFLAGS	= -ansi -Werror -g -I./

OBJS	= qsort.o quicksort.o

qsort: $(OBJS)
		$(CC) $(CFLAGS) -o $@ $(OBJS)
		
qsort.o: qsort.c quicksort.h

quicksort.o: quicksort.c quicksort.h

%o:%c
	$(CC) $(CFLAGS) $<
	
clean:
	-del *.o 
	-del *.exe