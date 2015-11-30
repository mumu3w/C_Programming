/******************************************************************************
   用位运算加密数据。

   (C) Nov 25 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define KEY '&'

int main(int argc, char *argv[]){
	FILE *fp, *new_fp;
	int orig_char, new_char;
	
	if(3 != argc){
		fprintf(stderr, "usage: program source_file dest_file\n");
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (fp = fopen(argv[1], "rb"))){
		fprintf(stderr, "无法打开文件 %s", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (new_fp = fopen(argv[2], "wb"))){
		fprintf(stderr, "无法打开文件 %s", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	while(EOF != (orig_char = fgetc(fp))){
		new_char = orig_char ^ KEY;
		fputc(new_char, new_fp);
	}
	
	fclose(fp);
	fclose(new_fp);
	return 0;
}