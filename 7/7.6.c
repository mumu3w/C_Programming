/******************************************************************************
  题目: 显示C语言基本类型的大小。
		
  演示: 
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/22/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	
	printf("sizeof(char): %dByte\n", sizeof(char));
	printf("sizeof(short): %dByte\n", sizeof(short));
	printf("sizeof(int): %dByte\n", sizeof(int));
	printf("sizeof(long): %dByte\n", sizeof(long));
	printf("sizeof(float): %dByte\n", sizeof(float));
	printf("sizeof(double): %dByte\n", sizeof(double));
	printf("sizeof(long double): %dByte\n", sizeof(long double));
	
	return 0;
}