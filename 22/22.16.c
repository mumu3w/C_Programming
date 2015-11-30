/******************************************************************************
  Topic: ÎÄ¼þ¸´ÖÆ.
  
  
  Demo: >16
		

   (C) Nov 26 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_MAX 512

int main(int argc, char *argv[]){
	FILE *old_fp, *new_fp;;
	int count;
	char buffer[BUFFER_MAX];

	if(3 != argc){
		fprintf(stderr, "usage: fcopy source dest");
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (old_fp = fopen(argv[1], "rb"))){
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (new_fp = fopen(argv[2], "wb"))){
		fprintf(stderr, "Can't open %s\n", argv[2]);
		fclose(old_fp);
		exit(EXIT_FAILURE);
	}
	
	while(1){
		count = fread(buffer, sizeof(char), BUFFER_MAX, old_fp);
		fwrite(buffer, sizeof(char), count, new_fp);
		if(BUFFER_MAX != count){
			break;
		}
	}
	
	fclose(old_fp);
	fclose(new_fp);
	return 0;
}