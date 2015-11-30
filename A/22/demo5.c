/******************************************************************************
   演示产生临时文件、重命名和删除文件。
   
   MinGW生成的临时文件名似乎不包括路径，导致创建临时文件失败！VC正常。

   (C) Nov 22 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define NEW_FILE_NAME "demo5.temp"

int main(void){
	char *filename;
	FILE *tmpfp1;

	if((filename = tmpnam(NULL)) == NULL){
		fprintf(stderr, "Create temporary file name failure\n");
		exit(EXIT_FAILURE);	
	}
	
	if((tmpfp1 = fopen(filename, "w")) == NULL){
		fprintf(stderr, "Failed to create temp file\n");
		exit(EXIT_FAILURE);
	}
	
	fclose(tmpfp1);
	
	if(rename(filename, NEW_FILE_NAME) != 0){
		fprintf(stderr, "Rename failed\n");
		exit(EXIT_FAILURE);
	}
	
	if(remove(NEW_FILE_NAME) != 0){
		fprintf(stderr, "Delete file failed\n");
		exit(EXIT_FAILURE);
	}
	
	return 0;
}