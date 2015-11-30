/******************************************************************************
  Topic: 文本格式化，使其从一个文本文件读取并写入另一个文本文件。程序从命令行获
		 取这两个文件名。
  
  
  Demo: >justify quote.txt newquote.txt
		

   (C) Nov 26 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line.h"
#include "word.h"


#define MAX_WORD_LEN 20


int main(int argc, char *argv[]){
	char word[MAX_WORD_LEN+2];
	int word_len;
	FILE *in_fp, *out_fp;
	
	if(3 != argc){
		fprintf(stderr, "usage: %s quote.txt newquote.txt\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (in_fp = fopen(argv[1], "r"))){
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (out_fp = fopen(argv[2], "w"))){
		fprintf(stderr, "Can't open %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	
	clear_line();
	for(;;){
		read_word(word, MAX_WORD_LEN+1, &in_fp);
		word_len = strlen(word);
		if(word_len == 0){
			flush_line(&out_fp);
			return 0;
		}
		if(word_len > MAX_WORD_LEN){
			word[MAX_WORD_LEN] = '*';
		}
		if(word_len + 1 > space_remaining()){
			write_line(&out_fp);
			clear_line();
		}
		add_word(word);
	}
	
	fclose(in_fp);
	fclose(out_fp);
	return 0;
}