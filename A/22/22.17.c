/******************************************************************************
  Topic: 从文件中读取一系列电话号码并以标准格式显示。
  
  
  Demo: >17 22.17.txt
		(404) 817-6900
		(215) 686-1776
		(312) 746-6000
		(877) 275-5273
		(617) 343-4200
		

   (C) Nov 26 2015  Mumu3w@outlook.com

******************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BUFFER_MAX 512

int read_line(char str[], int n, FILE **in_fp);


int main(int argc, char *argv[]){
	FILE *in_fp;
	char buffer[BUFFER_MAX+1];
	int j;
	int country, area, phone;
	
	if(2 != argc){
		fprintf(stderr, "usage: %s data_file\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (in_fp = fopen(argv[1], "r"))){
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	while(1){
		read_line(buffer, BUFFER_MAX, &in_fp);
		if(0 == strlen(buffer)){
			printf("debug");
			break;
		}
		for(j = 0; buffer[j] != '\0'; j++){
			if(!isdigit(buffer[j])){
				buffer[j] = ' ';
			}
		}
		if(3 == sscanf(buffer, "%3d%3d%4d", &country, &area, &phone)){
			fprintf(stdout, "(%d) %d-%d\n", country, area, phone);
		}else{
			fprintf(stderr, "Wrong number format\n");
		}
	}
	
	fclose(in_fp);
	return 0;
}

int read_line(char str[], int n, FILE **in_fp){
	int ch, i = 0;
	
	while(isspace(ch = fgetc(*in_fp))){
		;
	}

	while(ch != '\n' && ch != EOF){
		if(i < n){
			str[i++] = ch;
		}
		ch = fgetc(*in_fp);
	}
	str[i] = '\0';
	return i;
}