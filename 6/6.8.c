/******************************************************************************
  题目: 编写程序显示单月的月历。用户指定这个月的天数和该月起始日是星期几。
		
  演示: Enter number of days int month: 31
		Enter starting day of the week (1=Sun, 7=Sat): 3
			   1  2  3  4  5
		 6  7  8  9 10 11 12
		13 14 15 16 17 18 19
		20 21 22 23 24 25 26
		27 28 29 30 31
		----------------------------------------------------------------------
		Enter number of days int month: 31
		Enter starting day of the week (1=Sun, 7=Sat): 4
				  1  2  3  4
		 5  6  7  8  9 10 11
		12 13 14 15 16 17 18
		19 20 21 22 23 24 25
		26 27 28 29 30 31
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/19/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	int i, week, days;
	
	printf("Enter number of days int month: ");
	scanf("%d", &days);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &week);
	
	for(i = 0; i < (week-1) * 3; i++){
		printf(" ");
	}
	
	for(i = 1; i <= days; i++){
		printf("%3d", i);
		if(!((i+week-1) % 7)){
			printf("\n");
		}
	}
	
	return 0;
}