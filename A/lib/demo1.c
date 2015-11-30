#include <stdio.h>
#include "myc.h"

#define BUFFER_MAX 512


int main(int argc, char *argv[]){
	FILE *fp, *stdin_fp = stdin;
	char buffer[BUFFER_MAX+1];
	
	if(2 != argc){
		Error("usage: app filename\n");
	}
	
	fp = fopen(argv[1], "w");
	if(NULL == fp){
		Error("Can't open %s\n", argv[1]);
	}
	
	fprintf(stdout, "Enter string: ");
	read_line(buffer, BUFFER_MAX, &stdin_fp);
	fputs(buffer, fp);

	fclose(fp);
	return 0;
}