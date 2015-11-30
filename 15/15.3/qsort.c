/******************************************************************************
  题目: 快速排序.
		
  演示: Enter 10 number to be sorted: 9 16 47 82 4 66 12 3 25 51
		In sorted order: 3 4 9 12 16 25 47 51 66 82
		
  邮箱：mumu3w@outlook.com	
  
  时间：11/08/2015 
  
******************************************************************************/

#include <stdio.h>
#include "quicksort.h"

#define	ARRAY_MAX	10

int main(){
	int a[ARRAY_MAX], i;
	
	printf("Enter %d number to be sorted: ", ARRAY_MAX);
	for(i = 0; i < ARRAY_MAX; i++){
		scanf("%d", (a+i));
	}
	
	quicksort(&a[0], &a[ARRAY_MAX - 1]);
	
	printf("In sorted order: ");
	for(i = 0; i < ARRAY_MAX; i++){
		printf("%d ", *(a+i));
	}
	printf("\n");
	
	return 0;
}