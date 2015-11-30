/******************************************************************************
  题目: 判断用户输入的一系列日期，判断哪个更早。
		
  演示: Enter a date (mm/dd/yy): 3/6/8
		Enter a date (mm/dd/yy): 5/17/7
		Enter a date (mm/dd/yy): 6/3/7
		Enter a date (mm/dd/yy): 0/0/0
		5/17/07 is the earliest date
		----------------------------------------------------------------------
		Enter a date (mm/dd/yy): 12/31/14
		Enter a date (mm/dd/yy): 1/1/01
		Enter a date (mm/dd/yy): 1/2/1
		Enter a date (mm/dd/yy): 2/1/1
		Enter a date (mm/dd/yy): 0/0/0
		1/1/01 is the earliest date
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/19/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	int min_mm, min_dd, min_yy, min_date, mm, dd, yy, date;
	
	min_date = 99 * 365 + 12 * 31 + 31;
	
	for(;1;){
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &mm, &dd, &yy);
		date = yy * 365 + mm * 31 + dd;
		
		if(date == 0){
			break;
		}
		
		if(date < min_date){
			min_date = date;
			min_mm = mm; 
			min_dd = dd;
			min_yy = yy;
		}
	}
	
	printf("%d/%d/%.2d is the earliest date\n", min_mm, min_dd, min_yy);
	
	return 0;
}

