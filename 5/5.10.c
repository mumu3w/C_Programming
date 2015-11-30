/******************************************************************************
  题目: 把用数字表示的成绩转化为字母表示的等级.
		
  演示: Enter numerical grade: 89
		Letter grade: B
		----------------------------------------------------------------------
		Enter numerical grade: 59
		Letter grade: E
		----------------------------------------------------------------------
		Enter numerical grade: 100
		Letter grade: A
		----------------------------------------------------------------------
		Enter numerical grade: 70
		Letter grade: C
		----------------------------------------------------------------------
		Enter numerical grade: 60
		Letter grade: D
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/18/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	int score, tmp;
	
	printf("Enter numerical grade: ");
	scanf("%d", &score);
	
	if(score > 100 || score < 0){
		printf("error\n");
		return 0;
	}
	
	score /= 10;
	
	printf("Letter grade: ");
	switch(score){
		case 10:
		case 9:		printf("A\n");
					break;
		case 8:		printf("B\n");
					break;
		case 7:		printf("C\n");
					break;
		case 6:		printf("D\n");
					break;
		default: 	printf("E\n");
					break;
	}
	
	return 0;
}

