/******************************************************************************
   演示由命令行给出文件名，检测文件是否可以打开。

   (C) Nov 22 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	FILE *fp;
	
	if(argc != 2){
		fprintf(stderr, "usage: canopen filename\n");
		exit(EXIT_FAILURE);
	}
	
	if((fp = fopen(argv[1], "r")) == NULL){
		fprintf(stderr, "%s can't be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	fprintf(stderr, "%s can be opened\n", argv[1]);
	fclose(fp);
	return 0;
}