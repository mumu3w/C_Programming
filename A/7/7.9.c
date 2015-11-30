/******************************************************************************
  题目: 要求用户输入12小时制时间，然后用24小时制显示出来。
		
  演示: Enter a 12-hour time: 9:11 PM
		Equivalent 24-hour time: 21:11
		----------------------------------------------------------------------
		Enter a 12-hour time: 12:45 PM
		Equivalent 24-hour time: 12:45
		----------------------------------------------------------------------
		Enter a 12-hour time: 9:12 AM
		Equivalent 24-hour time: 9:12
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/22/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define ARRAY_MAX 100

int main(){
	char str1[ARRAY_MAX];
	int clock, minute;
	
	printf("Enter a 12-hour time: ");
	scanf("%d:%d%s", &clock, &minute, str1);
	
	if(toupper(str1[0]) == 'P'){
		if(clock < 12){
			clock += 12;
		}
	}
	
	printf("Equivalent 24-hour time: %d:%d\n", clock, minute);
	
	return 0;
}