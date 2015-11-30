/******************************************************************************
  题目: 找出用户输入的一串数中的最大数， 程序需要提示用户一个一个的输入数。当
		用户输入0或负数时，程序必须显示出已输入的最大非负数.
		
  演示: Enter a number: 60
		Enter a number: 38.3
		Enter a number: 4.89
		Enter a number: 100.62
		Enter a number: 75.2295
		Enter a number: 0
		
		Enter a number entered was 100.62
		----------------------------------------------------------------------
		Enter a number: 33.333
		Enter a number: 33.334
		Enter a number: 0
		
		Enter a number entered was 33.33
		----------------------------------------------------------------------
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/19/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	float number = 0, max = 0;
	
	for(;;){
		printf("Enter a number: ");
		scanf("%f", &number);
		if(number <= 0){
			break;
		}
		if(number > max){
			max = number;
		}
	}
	
	printf("\nEnter a number entered was %.2f\n", max);
	
	return 0;
}