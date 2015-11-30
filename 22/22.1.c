/******************************************************************************
   打开与关闭任意数量的文件。

   (C) Nov 24 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	FILE **fp;
	int file_num = argc - 1, i;
	
	if(file_num == 0){
		fprintf(stderr, "No file!\n");
		exit(0);
	}
	
	fp = malloc(sizeof(FILE *) * file_num);
	if(fp == NULL){
		fprintf(stderr, "Out of memory!\n");
		exit(EXIT_FAILURE);
	}
	
	for(i = 0; i < file_num; i++){
		if((*(fp+i) = fopen(argv[i+1], "rb")) == NULL){
			fprintf(stderr, "%s can't be opened!\n", argv[i+1]);
			exit(EXIT_FAILURE);
		}else{
			fprintf(stderr, "%s can be opened!\n", argv[i+1]);
		}
		
		fclose(*(fp+i));
	}
	
	free(fp);
	
	return 0;
}