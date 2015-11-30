/******************************************************************************
   使用行程长度编码文件解压。

   (C) Nov 25 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	FILE *fp, *new_fp;
	char file_name[FILENAME_MAX];
	int str_len, i, count, ch;
	
	if(2 != argc){
		fprintf(stderr, "usage: program file\n");
		exit(EXIT_FAILURE);
	}
	
	if(!strstr(argv[1], ".rle")){
		fprintf(stderr, "文件的扩展名需要是.rle\n");
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (fp = fopen(argv[1], "rb"))){
		fprintf(stderr, "无法打开文件 %s", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	strcpy(file_name, argv[1]);
	str_len = strlen(file_name);
	file_name[str_len+1-4] = '\0';
	if(NULL == (new_fp = fopen(file_name, "wb"))){
		fprintf(stderr, "无法打开文件 %s", file_name);
		exit(EXIT_FAILURE);
	}
	
	while(1){
		if(EOF == (count = fgetc(fp))){
			break;
		}else{
			ch = fgetc(fp);
		}
		for(i = 0; i < count; i++){
			fputc(ch, new_fp);
		}
	}
	
	fclose(fp);
	fclose(new_fp);
	return 0;
}