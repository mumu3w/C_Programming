CC		= gcc
CFLAGS	= -ansi -Werror -g -I./

OBJS	= rpn.o stack.o

rpn: $(OBJS)
		$(CC) $(CFLAGS) -o $@ $(OBJS)
		
rpn.o: rpn.c stack.h

stack.o: stack.c stack.h

%o:%c
	$(CC) $(CFLAGS) $<
	
clean:
	-del *.o 
	-del *.exe