/******************************************************************************
   ͳ���ı��ļ����ʵ�������

   (C) Nov 25 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#ifndef TRUE
typedef int BOOL;
#define TRUE (1 == 1)
#define FALSE (0 == 1)
#endif

int main(int argc, char *argv[]){
	FILE *fp;
	int count = 0, ch;
	BOOL in_word;
	
	if(2 != argc){
		fprintf(stderr, "usage: program file\n");
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (fp = fopen(argv[1], "r"))){
		fprintf(stderr, "�޷����ļ� %s", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	in_word = FALSE;
	while(EOF != (ch = fgetc(fp))){
		if(isspace(ch)){
			in_word = FALSE;
		}else if(!in_word){
			in_word = TRUE;
			count++;
		}
	}
	
	fclose(fp);
	
	fprintf(stdout, "�ļ�%sһ���е���: %d", argv[1], count);
	
	return 0;
}