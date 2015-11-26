/******************************************************************************
   测试检测文件末尾和错误条件。

   (C) Nov 23 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int find_int(const char *filename);

int main(void){
	
	printf("a = %d\n", find_int("demo8.in"));
	
	return 0;
}

int find_int(const char *filename){
	FILE *fp = fopen(filename, "r");
	int n;
	
	if(fp == NULL){
		return -1;
	}
	
	while(fscanf(fp, "%d", &n) != 1){
		if(ferror(fp)){
			fclose(fp);
			return -2;
		}
		
		if(feof(fp)){
			fclose(fp);
			return -3;
		}
		
		fscanf(fp, "%*[^\n]");
	}
	
	fclose(fp);
	
	return n;
}