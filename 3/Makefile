CC		= cl 
CFLAGS	= /nologo /Zi /Za /MTd /Od /TC

all : 1 2 3 4 5 6

1 : 3.1.c
	$(CC) $(CFLAGS) /Fe$@ $?
	
2 : 3.2.c
	$(CC) $(CFLAGS) /Fe$@ $?
	
3 : 3.3.c
	$(CC) $(CFLAGS) /Fe$@ $?
	
4 : 3.4.c
	$(CC) $(CFLAGS) /Fe$@ $?
	
5 : 3.5.c
	$(CC) $(CFLAGS) /Fe$@ $?
	
6 : 3.6.c
	$(CC) $(CFLAGS) /Fe$@ $?
	
clean : 
	-del *.ilk
	-del *.obj
	-del *.pdb
	-del *.exe