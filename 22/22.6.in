/******************************************************************************
   按字节方式和字符方式显示文件的内容。

   (C) Nov 25 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define BUFFER_MAX 0x10

void print_bin(char buffer[], int n);
void print_text(char buffer[], int n);
void print(char buffer[], int n, int offset);

int main(int argc, char *argv[]){
	FILE *fp;
	int offset = 0, i;
	unsigned char buffer[BUFFER_MAX];
	
	if(2 != argc){
		fprintf(stderr, "usage: program file\n");
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (fp = fopen(argv[1], "rb"))){
		fprintf(stderr, "无法打开文件 %s", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	printf("Offset                        Bytes                          Characters\n");
	printf("------  ------------------------------------------------  ----------------\n");
	while(1){
		i = fread(buffer, sizeof(unsigned char), BUFFER_MAX, fp);
		if(0 == i){
			break;
		}
		
		print(buffer, i, offset);
		offset += BUFFER_MAX;
	}
	
	fclose(fp);
	return 0;
}

void print(char buffer[], int n, int offset){
	printf("%5X   ", offset);
	print_bin(buffer, n);
	printf("   ");
	print_text(buffer, n);
	printf("\n");
}

void print_bin(char buffer[], int n){
	int i;
	char HEX_CHAR[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	unsigned char high_char, low_char;
	
	for(i = 0; i < n; i++){
		high_char = buffer[i];
		low_char = buffer[i];
		high_char >>= 4;
		low_char &= 0xF;
		
		printf(" %c%c", HEX_CHAR[high_char], HEX_CHAR[low_char]);
	}
	
	for(i = 0; i < (BUFFER_MAX - n)*3; i++){
		printf(" ");
	}
}

void print_text(char buffer[], int n){
	int i;
	
	for(i = 0; i < n; i++){
		if(isprint(buffer[i])){
			printf("%c", buffer[i]);
		}else{
			printf(".");
		}
	}
}