/******************************************************************************
  Topic: 用凯撒加密方法对消息进行加密;用户输入待加密的消息和位移计数;该加密方
		 法把一条消息的每个字母用字母表中固定距离之后的那个字母来代替.
  
  
  Demo: >14
		Enter name of file to be encrypted: 22.14.txt
		Enter shift amount (1-25): 3
		

   (C) Nov 26 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int read_line(char str[], int n);


int main(int argc, char *argv[]){
	char infilename[FILENAME_MAX];
	char outfilename[FILENAME_MAX];
	FILE *in_fp;
	FILE *out_fp;
	int ch, n;
	
	fprintf(stdout, "Enter name of file to be encrypted: ");
	read_line(infilename, FILENAME_MAX-1);
	fprintf(stdout, "Enter shift amount (1-25): ");
	fscanf(stdin, "%d", &n);
	if(NULL == (in_fp = fopen(infilename, "rb"))){
		fprintf(stderr, "Can't open %s\n", infilename);
		exit(EXIT_FAILURE);
	}
	
	strcpy(outfilename, infilename);
	strcat(outfilename, ".enc");
	if(NULL == (out_fp = fopen(outfilename, "wb"))){
		fprintf(stderr, "Can't open %s\n", outfilename);
		exit(EXIT_FAILURE);
	}
	
	while(EOF != (ch = fgetc(in_fp))){
		if(ch >= 'a' && ch <= 'z'){
			ch = ((ch - 'a') + n) % 26 + 'a';
		}else if(ch >= 'A' && ch <= 'Z'){
			ch = ((ch - 'A') + n) % 26 + 'A';
		}
		fputc(ch, out_fp);
	}
	
	fclose(in_fp);
	fclose(out_fp);
	return 0;
}

int read_line(char str[], int n){
	int ch, i = 0;
	
	ch = getchar();
	while(ch != '\n' && ch != EOF){
		if(i < n){
			str[i++] = ch;
		}
		ch = getchar();
	}
	str[i] = '\0';
	return i;
}