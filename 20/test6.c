﻿/******************************************************************************
   交换一个16bit变量的两个字节。

   (C) Nov 19 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>

unsigned short swap_bytes(unsigned short i);


int main(){
	unsigned short i;
	
	printf("Enter a hexadecimal number (uo to four digits): ");
	scanf("%hx", &i);
	
	printf("Number with bytes swapped: %hx", swap_bytes(i));
	
	return 0;
}

unsigned short swap_bytes(unsigned short i){
	return i << 8 | i >> 8;
}