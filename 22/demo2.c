/******************************************************************************
   演示为一个已经打开的流附加文件。

   (C) Nov 22 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "demo2.dat"
#define STDERR_NAME "stderr.out"

int main(void){
	FILE *fp;
	
	if(freopen(STDERR_NAME, "w", stderr) == NULL){
		fprintf(stdin, "%s can't be opened\n", FILE_NAME);
	}
	
	if((fp = fopen(FILE_NAME, "r")) == NULL){
		fprintf(stderr, "Can't open %s\n", FILE_NAME);
		exit(EXIT_FAILURE);
	}
	
	fclose(fp);
	return 0;
}