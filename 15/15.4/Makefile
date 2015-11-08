CC		= gcc
CFLAGS	= -ansi -Werror -g -I./

OBJS	= remind.o read_line.o

remind: $(OBJS)
		$(CC) $(CFLAGS) -o $@ $(OBJS)
		$@ < message.in > message.out
		
remind.o: remind.c read_line.h

read_line.o: read_line.c read_line.h

%o:%c
	$(CC) $(CFLAGS) $<
	
clean:
	-del *.o 
	-del *.exe