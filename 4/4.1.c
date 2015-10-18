/******************************************************************************
  题目: 要求用户录入一个两位数，然后按数位的逆序打印出这个数.
		
  演示: Enter a two-digit number: 28
		The reversal is: 82
		-----------------------------------------------------------------------
		Enter a two-digit number: 96
		The reversal is: 69
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/17/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	unsigned int number, digits_1, digits_10;
	
	printf("Enter a two-digit number: ");
	scanf("%u", &number);
	digits_10 = number / 10;
	digits_1 = number % 10;
	printf("The reversal is: %u%u", digits_1, digits_10);
	
	return 0;
}