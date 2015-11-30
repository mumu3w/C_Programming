/******************************************************************************
   将文件中的字母转换成大写形式。

   (C) Nov 24 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){
	FILE *fp;
	int ch;
	
	if(2 != argc){
		fprintf(stderr, "usage: 2 test_file!\n");
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (fp = fopen(argv[1], "rb"))){
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	while(EOF != (ch = fgetc(fp))){
		fputc(toupper(ch), stdout);
	}
	
	fclose(fp);
	
	return 0;
}