/******************************************************************************
  题目: 按“月/日/年”的格式接受用户输入的日期，然后按照“月 日, 年”的格式显示，其
		中“月”用英文全名.
		
  演示: 
		
  邮箱：mumu3w@outlook.com	
  
  时间：11/05/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>



int main(void){
	const char *month[] = {"January", "February", "March", 
							"April", "May", "June", 
							"July", "August", "September", 
							"October", "November", "December"};
							
	int dd, mm, yyyy;
	
	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);
	
	printf("You entered the date %s %.2d, %4d", month[mm-1], dd, yyyy);
	
	return 0;
}