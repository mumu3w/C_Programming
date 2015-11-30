/******************************************************************************
   位域演示。

   (C) Nov 19 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>

union{
	float f_num;
	struct{
		unsigned int fraction: 23;
		unsigned int exponent: 8;
		unsigned int sign: 1;
	}float_num;
}f;

int main(){
	f.float_num.sign = 1;
	f.float_num.exponent = 128;
	f.float_num.fraction = 0;
	
	printf("f: %.1f\n", f.f_num);
	
	return 0;
}