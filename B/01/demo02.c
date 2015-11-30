/******************************************************************************
  Topic: 
  
  
  Demo: >demo02
		

   (C) Mumu3w@outlook.com   Nov 30 2015

******************************************************************************/
#include <stdio.h>
#include "myc.h"

#define BUFFER 512

int main(void){
	char buffer[BUFFER+1];
	
	printf("Input string: ");
	read_line(buffer, BUFFER, stdin);
	printf("%s\n", buffer);
	
	return 0;
}