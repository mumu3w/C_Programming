/******************************************************************************
   使用行程长度编码文件压缩。

   (C) Nov 25 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	FILE *fp, *new_fp;
	char file_name[FILENAME_MAX];
	int count = 0, file_pos, ch, over;
	
	if(2 != argc){
		fprintf(stderr, "usage: program file\n");
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (fp = fopen(argv[1], "rb"))){
		fprintf(stderr, "无法打开文件 %s", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	strcpy(file_name, argv[1]);
	strcat(file_name, ".rle");
	if(NULL == (new_fp = fopen(file_name, "wb"))){
		fprintf(stderr, "无法打开文件 %s", file_name);
		exit(EXIT_FAILURE);
	}
	
	while(EOF != (ch = fgetc(fp))){
		file_pos = ftell(fp);
		count++;
		while(EOF != (over = fgetc(fp))){
			if(ch == over){
				count++;
			}else{
				break;
			}
		}
		fputc(count, new_fp);
		fputc(ch, new_fp);
		fseek(fp, file_pos+count-1, SEEK_SET);
		count = 0;
	}
	
	fclose(fp);
	fclose(new_fp);
	return 0;
}