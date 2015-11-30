/******************************************************************************
  题目: (练习题12)
		
  演示: largest         = 74
		second_largest  = 45
		0 1 3 4 5 6 7 9 45 74
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/31/2015 
  
******************************************************************************/

#include <stdio.h>

#define	MAX_ARRAY	10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void){
	int i;
	int a[MAX_ARRAY] = {45,6,7,74,5,9,4,3,1,0}, largest, second_largest;
	
	find_two_largest(a, MAX_ARRAY, &largest, &second_largest);
	
	printf("largest         = %d\n", largest);
	printf("second_largest  = %d\n", second_largest);
	
	for(i = 0; i < MAX_ARRAY; i++){
		printf("%d ", a[i]);
	}
	
	return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest){
	int i, pass, tmp;
	
	for(pass = 1; pass < n; pass++){
		for(i = 0; i < n - pass; i++){
			tmp = *(a+i);
			if(*(a+i+1) < tmp){
				*(a+i) = *(a+i+1);
				*(a+i+1) = tmp; 
			}
		}
	}
	
	*largest = *(a + n - 1);
	*second_largest = *(a + n - 2);;
}