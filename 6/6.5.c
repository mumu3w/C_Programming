/******************************************************************************
  题目: 要求用户录入一个数，然后按数位的逆序打印出这个数.
		
  演示: Enter a number: 123
		The reversal is: 321
		----------------------------------------------------------------------
		Enter a number: 159
		The reversal is: 951
		----------------------------------------------------------------------
		Enter a number: 65535
		The reversal is: 53556
		----------------------------------------------------------------------
		Enter a number: 12345678
		The reversal is: 87654321
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/17/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	int number, tmp;
	
	printf("Enter a number: ");
	scanf("%u", &number);
	printf("The reversal is: ");
	
	do{
		tmp = number % 10;
		number /= 10;
		printf("%d", tmp);
	}while(number > 0);
	
	return 0;
}