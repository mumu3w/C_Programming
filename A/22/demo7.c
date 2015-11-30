/******************************************************************************
   ²âÊÔscanf×ª»»ËµÃ÷¡£

   (C) Nov 23 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a, b;
	FILE *infp;
	
	infp = fopen("demo7.in", "r");
	if(infp == NULL){
		fprintf(stderr, "Can't open %s\n", "demo7.in");
		exit(EXIT_FAILURE);
	}
	
	printf("Enter two number: ");
	if(fscanf(infp, "%d%d", &a, &b) == EOF){
		fprintf(stderr, "Failed to read data\n");
		exit(EXIT_FAILURE);
	}
	
	printf("a = %d   b = %d\n", a, b);
	
	fclose(infp);
	
	return 0;
}