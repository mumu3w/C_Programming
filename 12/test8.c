/******************************************************************************
  题目: (练习题16)
		
  演示: 
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/31/2015 
  
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define DAYS	7
#define HOURS	24

int find_largest(int a[], int n);

int main(void){
	int i;
	int temperatures[DAYS][HOURS] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 32}};
	
	for(i = 0; i < DAYS; i++){
		printf("max:%-3d\n", find_largest(temperatures[i], HOURS));
	}
	
	return 0;
}

int find_largest(int a[], int n){
	int *p = a, max;
	
	max = *p;
	while(p < a+n){
		if(*p > max){
			max = *p;
		}
		p++;
	}
	
	return max;
}