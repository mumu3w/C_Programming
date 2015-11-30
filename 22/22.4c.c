/******************************************************************************
   统计文本文件中行的数量。

   (C) Nov 25 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char *argv[]){
	FILE *fp;
	int count = 1, ch;
	
	if(2 != argc){
		fprintf(stderr, "usage: program file\n");
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (fp = fopen(argv[1], "r"))){
		fprintf(stderr, "无法打开文件 %s", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	while(EOF != (ch = fgetc(fp))){
		if('\n' == ch){
			count++;
		}
	}
	
	fclose(fp);
	
	fprintf(stdout, "文件%s一共有行: %d", argv[1], count);
	
	return 0;
}