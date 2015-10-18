/******************************************************************************
  题目: 要求用户录入风速，然后显示相应的描述.
		
  演示: Enter a wind: 3
		Light air
		----------------------------------------------------------------------
		Enter a wind: 4
		Breeze
		----------------------------------------------------------------------
		Enter a wind: 28
		Gale
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/18/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	unsigned int wind;
	
	printf("Enter a wind: ");
	scanf("%u", &wind);
	
	if(wind < 1){
		printf("Calm\n");
	}else if(wind <= 3){
		printf("Light air\n");
	}else if(wind <= 27){
		printf("Breeze\n");
	}else if(wind <= 47){
		printf("Gale\n");
	}else if(wind <= 63){
		printf("Storm\n");
	}else{
		printf("Hurricane\n");
	}
	
	
	return 0;
}