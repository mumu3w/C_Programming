/******************************************************************************
  题目: 分数相加，用户可以同时输入两个分数，中间用加号隔开.
		
  演示: Enter two fraction separated by a plus sign (x/x+x/x): 5/6+3/4
		The sum is: 38/24
		----------------------------------------------------------------------
		Enter two fraction separated by a plus sign (x/x+x/x): 6/7+8/9
		The sum is: 110/63
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/17/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	unsigned int num1, denom1, num2, denom2;
	
	printf("Enter two fraction separated by a plus sign (x/x+x/x): ");
	scanf("%u/%u+%u/%u", &num1, &denom1, &num2, &denom2);
	printf("The sum is: %u/%u", num1*denom2+num2*denom1, denom1*denom2);
	
	return 0;
}