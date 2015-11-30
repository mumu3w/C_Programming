/******************************************************************************
  题目: 寻找最大值和最小值.
		
  演示: Enter 10 number to be sorted: 34 82 49 102 7 94 23 11 50 31
		Largest: 102
		Smallest: 7
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/31/2015 
  
******************************************************************************/

#include <stdio.h>

#define	ARRAY_MAX	10

void max_min(int a[], int *array_high, int *max, int *min);

int main(){
	int big, small;
	int a[ARRAY_MAX], i;
	
	printf("Enter %d number to be sorted: ", ARRAY_MAX);
	for(i = 0; i < ARRAY_MAX; i++){
		scanf("%d", (a+i));
	}
	
	max_min(a, &a[ARRAY_MAX - 1], &big, &small);
	
	printf("Largest: %d\n", big);
	printf("Smallest: %d\n", small);
	
	return 0;
}

void max_min(int a[], int *array_high, int *max, int *min){
	int *p = a;
	
	*max = *p;
	*min = *p;
	
	while(p <= array_high){
		if(*p > *max){
			*max = *p;
		}else if(*p < *min){
			*min = *p;
		}
		p++;
	}
}