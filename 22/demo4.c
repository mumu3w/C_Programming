/******************************************************************************
   演示产生临时文件。
   
   MinGW生成的临时文件名似乎不包括路径，导致创建临时文件失败！VC正常。

   (C) Nov 22 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	char *filename;
	FILE *tmpfp1, *tmpfp2;
	
	if((tmpfp2 = tmpfile()) == NULL){
		fprintf(stderr, "Failed to create temp file\n");
		exit(EXIT_FAILURE);
	}

	if((filename = tmpnam(NULL)) == NULL){
		fprintf(stderr, "Create temporary file name failure\n");
		exit(EXIT_FAILURE);	
	}
	
	if((tmpfp1 = fopen(filename, "w")) == NULL){
		fprintf(stderr, "Failed to create temp file\n");
		exit(EXIT_FAILURE);
	}
	
	fclose(tmpfp1);
	fclose(tmpfp2);
	return 0;
}