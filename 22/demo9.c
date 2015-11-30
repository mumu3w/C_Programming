/******************************************************************************
   演示文件复制.

   (C) Nov 23 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
	FILE *old_fp, *new_fp;;
	char ch;

	if(3 != argc){
		fprintf(stderr, "usage: fcopy source dest");
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (old_fp = fopen(argv[1], "rb"))){
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (new_fp = fopen(argv[2], "wb"))){
		fprintf(stderr, "Can't open %s\n", argv[2]);
		fclose(old_fp);
		exit(EXIT_FAILURE);
	}
	
	while(EOF != (ch = fgetc(old_fp))){
		fputc(ch, new_fp);
	}
	
	fclose(old_fp);
	fclose(new_fp);
	
	return 0;
}