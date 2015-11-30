/******************************************************************************
  题目: 提示用户以(xxx) xxx-xxxx的格式输入电话号码，并以xxx.xxx.xxxx的格式显示
		该号码.
		
  演示: Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
		You entered : 404.817.6900
		----------------------------------------------------------------------
		Enter phone number [(xxx) xxx-xxxx]: (606) 919-8000
		You entered : 606.919.8000
		
  邮箱：mumu3w@outlook.com		
  
  时间：10/17/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	unsigned int num1, num2, num3;
	
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%u) %u-%u", &num1, &num2, &num3);
	printf("You entered : %u.%u.%u\n", num1, num2, num3);
	
	return 0;
}