/******************************************************************************
  题目: 以mm/dd/yy的格式接收用户录入的日期信息，并以yyyymmdd的格式显示出来.
		
  演示: Enter a date (mm/dd/yyyy): 10/17/2015
		You entered the date: 20151017
		-----------------------------------------------------------------------
		Enter a date (mm/dd/yyyy): 1/9/2015
		You entered the date: 20150109
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/17/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	unsigned int yy, dd, mm;
	
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%u/%u/%u", &mm, &dd, &yy);
	printf("You entered the date: %u%2.2u%2.2u\n", yy, mm, dd);
	
	return 0;
}