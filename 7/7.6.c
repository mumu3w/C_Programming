/******************************************************************************
  题目: 显示C语言基本类型的大小。
		
  演示: sizeof(char): 1Byte
		sizeof(short): 2Byte
		sizeof(int): 4Byte
		sizeof(long): 4Byte
		sizeof(float): 4Byte
		sizeof(double): 8Byte
		sizeof(long double): 16Byte
		
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