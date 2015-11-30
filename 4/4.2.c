/******************************************************************************
  题目: 要求用户录入一个三位数，然后按数位的逆序打印出这个数.
		
  演示: Enter a three-digit number: 238
		The reversal is: 832
		-----------------------------------------------------------------------
		Enter a three-digit number: 456
		The reversal is: 654
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/17/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	unsigned int number, digits_1, digits_10, digits_100;
	
	printf("Enter a three-digit number: ");
	scanf("%u", &number);
	digits_100 = number / 100;
	digits_10 = (number - digits_100 * 100) / 10;
	digits_1 = (number - digits_100 * 100 - digits_10 * 10) % 10;
	printf("The reversal is: %u%u%u", digits_1, digits_10, digits_100);
	
	return 0;
}