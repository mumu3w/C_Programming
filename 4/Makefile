CC		= cl 
CFLAGS	= /nologo /Zi /Za /MTd /Od /TC

all : 1 2 3 4 5 6

1 : 4.1.c
	$(CC) $(CFLAGS) /Fe$@ $?
	
2 : 4.2.c
	$(CC) $(CFLAGS) /Fe$@ $?
	
3 : 4.3.c
	$(CC) $(CFLAGS) /Fe$@ $?
	
4 : 4.4.c
	$(CC) $(CFLAGS) /Fe$@ $?
	
5 : 4.5.c
	$(CC) $(CFLAGS) /Fe$@ $?
	
6 : 4.6.c
	$(CC) $(CFLAGS) /Fe$@ $?
	
clean : 
	-del *.ilk
	-del *.obj
	-del *.pdb
	-del *.exe