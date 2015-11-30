/******************************************************************************
   统计文本文件中字符的数量。

   (C) Nov 25 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	FILE *fp;
	int count = 0;
	
	if(2 != argc){
		fprintf(stderr, "usage: program file\n");
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (fp = fopen(argv[1], "r"))){
		fprintf(stderr, "无法打开文件 %s", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	while(EOF != fgetc(fp)){
		count++;
	}
	
	fclose(fp);
	
	fprintf(stdout, "文件%s一共有字符: %d", argv[1], count);
	
	return 0;
}