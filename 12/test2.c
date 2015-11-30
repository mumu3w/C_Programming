/******************************************************************************
  题目: (练习题6)
		
  演示: sum = 55
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/31/2015 
  
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_ARRAY 10

int sum_array(const int a[], int n);

int main(void){
	int num[MAX_ARRAY] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	printf("sum = %d\n", sum_array(num, MAX_ARRAY));
	
	return 0;
}

int sum_array(const int a[], int n){
	int i, sum;
	
	sum = 0;
/*	for(i = 0; i < n; i++){
		sum += *(a+i);
	}
*/
	i = 0;
	while(i < n){
		sum += *(a+i);
		i++;
	}
	
	return sum;
}