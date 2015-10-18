/******************************************************************************
  题目: 提示用户输入两个日期，然后显示哪一个日期更早.
		
  演示: Enter first date (mm/dd/yy): 3/6/08
		Enter second date (mm/dd/yy): 5/17/07
		5/17/07 is earlier than 3/6/08
		----------------------------------------------------------------------
		Enter first date (mm/dd/yy): 4/3/15
		Enter second date (mm/dd/yy): 12/31/14
		12/31/14 is earlier than 4/3/15
		----------------------------------------------------------------------
		Enter first date (mm/dd/yy): 1/1/15
		Enter second date (mm/dd/yy): 12/31/14
		12/31/14 is earlier than 1/1/15
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/18/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	int mm, dd, yy, date, mm1, dd1, yy1, date1;
	
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &mm, &dd, &yy);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &mm1, &dd1, &yy1);
	
	date = yy * 365 + mm * 12 + dd;
	date1 = yy1 * 365 + mm1 * 12 + dd1;
	
	if(date < date1){
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", mm, dd, yy, mm1, dd1, yy1);
	}else{
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", mm1, dd1, yy1, mm, dd, yy);
	}
	
	return 0;
}

