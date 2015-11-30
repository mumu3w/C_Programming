CC		= gcc
AR		= ar
CFLAGS	= -I../lib -c -Werror -ansi
LDFLAGS	= -L../lib

RM		= -rm -fr

LIBNAME	= libmyc.a
OBJS	= error.o readline.o



.PHONY: all clean

all: $(LIBNAME)

$(LIBNAME): $(OBJS)
	$(AR) rcs $(LIBNAME) $(OBJS)

error.o: error.c myc.h

readline.o: readline.c myc.h

%o:%c
	$(CC) $(CFLAGS) $<

	
clean :
	@$(RM) $(OBJS) $(LIBNAME)
