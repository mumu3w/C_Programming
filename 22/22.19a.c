/******************************************************************************
  Topic: DOS2UNIX.
  
  
  Demo: >19
		

   (C) Nov 26 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define CR '\x0d'
#define LF '\x0a'

int main(int argc, char *argv[]){
	FILE *old_fp, *new_fp;;
	int ch, line_feed;

	if(3 != argc){
		fprintf(stderr, "usage: dos2unix source dest");
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
	
	while(1 == fread(&ch, sizeof(char), 1, old_fp)){
		fwrite(&ch, sizeof(char), 1, new_fp);
		if(CR == ch){
			fread(&line_feed, sizeof(char), 1, old_fp);
			if(1 == line_feed && LF != line_feed){
				fwrite(&line_feed, sizeof(char), 1, new_fp);
			}
		}
	}
	
	fclose(old_fp);
	fclose(new_fp);
	return 0;
}