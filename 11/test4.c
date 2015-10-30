/******************************************************************************
  题目: 
		
  演示: day_of_year    70
		year           2011
		month          3
		day            11
		-----------------------------------------------------------------------
		day_of_year    70
		year           2012
		month          3
		day            10
		-----------------------------------------------------------------------
		day_of_year    366
		year           2012
		month          12
		day            31
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/29/2015 
  
******************************************************************************/

#include <stdio.h>

#define	MAX_MONTH	12

void split_date(int day_of_year, int year, int *month, int *day);

int main(void){
	int day_of_year = 366, year = 2012, month = 0, day = 0;
	
	split_date(day_of_year, year, &month, &day);
	
	printf("day_of_year    %d\n", day_of_year);
	printf("year           %d\n", year);
	printf("month          %d\n", month);
	printf("day            %d\n", day);
	
	return 0;
}

void split_date(int day_of_year, int year, int *month, int *day){
	int mm[MAX_MONTH] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	if((year%400 == 0) || (year%4 == 0 && year%100 != 0)){
		mm[1] = 29;
	}
	
	*month = 0;
	while(*month < MAX_MONTH){
		if(day_of_year - mm[(*month)] > 0){
			day_of_year -= mm[(*month)];
			(*month)++;
		}else{
			*day = day_of_year;
			break;
		}
	}
	
	(*month)++;
}