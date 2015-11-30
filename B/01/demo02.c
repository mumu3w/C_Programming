/******************************************************************************
  Topic: 
  
  
  Demo: >demo02
		

   (C) Mumu3w@outlook.com   Nov 30 2015

******************************************************************************/
#include <stdio.h>
#include "myc.h"

#define BUFFER_MAX 512

int main(void){
	char buffer[BUFFER_MAX+1];
	
	printf("Input string: ");
	read_line(buffer, BUFFER_MAX, stdin);
	printf("%s\n", buffer);
	
	return 0;
}