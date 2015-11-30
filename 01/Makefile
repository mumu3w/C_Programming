CC		= gcc
CFLAGS	= -ansi -I../lib
LDFLAGS	= -L../lib -lmyc

RM		= -rm -fr

AOUT	= demo01 demo02



.PHONY: all clean
all : $(AOUT)

demo01 : demo01.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)
	
demo02 : demo02.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)
	
	
clean :
	@$(RM) $(AOUT)