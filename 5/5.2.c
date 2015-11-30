/******************************************************************************
  题目: 要求用户输入24小时制的时间，然后显示12小时制的格式.
		
  演示: Enter a 24-hour time: 12:12
		Equivalent 12-hour time: 12:12 PM
		----------------------------------------------------------------------
		Enter a 24-hour time: 00:24
		Equivalent 12-hour time: 0:24 AM
		----------------------------------------------------------------------
		Enter a 24-hour time: 21:11
		Equivalent 12-hour time: 9:11 PM
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/18/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	unsigned int number1, number2;
	
	printf("Enter a 24-hour time: ");
	scanf("%u:%u", &number1, &number2);
	
	if(number1 >= 0 && number1 < 12){
		printf("Equivalent 12-hour time: %u:%u AM", number1, number2);
	}else if(number1 == 12){
		printf("Equivalent 12-hour time: %u:%u PM", number1, number2);
	}else if(number1 < 24 && number1 >= 12){
		number1 -= 12;
		printf("Equivalent 12-hour time: %u:%u PM", number1, number2);
	}else{
		printf("error.\n");
	}
	
	return 0;
}