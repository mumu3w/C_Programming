/******************************************************************************
   将任意数量的文件拼接在一起。

   (C) Nov 24 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	FILE **fp;
	FILE *new_fp;
	int file_num = argc - 2, i, ch;
	
	if(argc < 3){
		fprintf(stderr, "usage: 3 source ... dest!\n");
		exit(0);
	}

	if(NULL == (new_fp = fopen(argv[argc-1], "wb"))){
		fprintf(stderr, "%s can't be opened!\n", argv[argc-1]);
		exit(EXIT_FAILURE);
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
		
		while(EOF != (ch = fgetc(*(fp+i)))){
			fputc(ch, new_fp);
		}
		fclose(*(fp+i));
	}
	
	fclose(new_fp);
	free(fp);
	
	return 0;
}