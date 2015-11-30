CC		= gcc
CFLAGS	= -ansi -I../lib
LDFLAGS	= -L../lib -lmyc

RM		= -rm -fr

AOUT	= demo01



.PHONY: all clean
all : $(AOUT)

demo01 : demo01.c
	$(CC) $(CFLAGS) -o $@ demo01.c $(LDFLAGS)
	
	
clean :
	@$(RM) $(AOUT)