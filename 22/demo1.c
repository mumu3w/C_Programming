/******************************************************************************
   演示打开文件与关闭文件。

   (C) Nov 22 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "demo1.dat"

int main(void){
	FILE *fp;
	
	if((fp = fopen(FILE_NAME, "r")) == NULL){
		fprintf(stderr, "Can't open %s\n", FILE_NAME);
		exit(EXIT_FAILURE);
	}
	
	fclose(fp);
	return 0;
}