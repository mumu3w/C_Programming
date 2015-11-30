/******************************************************************************
  题目: 修改5.8.c，要求用户输入12小时制时间。
		
  演示: Enter a 12-hour time: 1:15p
		Closest departure time is 12:47 p.m., arriving at 3:00 p.m
		----------------------------------------------------------------------
		Enter a 12-hour time: 1:15 p
		Closest departure time is 12:47 p.m., arriving at 3:00 p.m
		----------------------------------------------------------------------
		Enter a 12-hour time: 1:15 P
		Closest departure time is 12:47 p.m., arriving at 3:00 p.m
		----------------------------------------------------------------------
		Enter a 12-hour time: 12:45Pm
		Closest departure time is 11:19 a.m., arriving at 1:31 p.m
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/22/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define ARRAY_MAX 100

int main(){
	char str1[ARRAY_MAX];
	int clock, minute, minute_sum1;
	
	printf("Enter a 12-hour time: ");
	scanf("%d:%d%s", &clock, &minute, str1);
	
	if(toupper(str1[0]) == 'P'){
		if(clock < 12){
			clock += 12;
		}
	}
	
	minute_sum1 = clock * 60 + minute;
	
	if(minute_sum1 > 21 * 60 + 45){
		printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m\n");
	}else if(minute_sum1 > 19 * 60 + 00){
		printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m\n");
	}else if(minute_sum1 > 15 * 60 + 45){
		printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m\n");
	}else if(minute_sum1 > 14 * 60 + 00){
		printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m\n");
	}else if(minute_sum1 > 12 * 60 + 47){
		printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m\n");
	}else if(minute_sum1 > 11 * 60 + 19){
		printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m\n");
	}else if(minute_sum1 > 9 * 60 + 43){
		printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m\n");
	}else if(minute_sum1 > 8 * 60 + 00){
		printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m\n");
	}else{
		printf("There is no flight.\n");
	}
	
	return 0;
}