/******************************************************************************
  题目: (练习题9)
		
  演示:   1.00
		  5.00
		 14.00
		 30.00
		 55.00
		 91.00
		140.00
		204.00
		285.00
		385.00
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/31/2015 
  
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_ARRAY 10

double inner_product(const double a[], const double b[], int n);

int main(void){
	double a[MAX_ARRAY] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	double b[MAX_ARRAY] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	inner_product(a, b, MAX_ARRAY);
	
	return 0;
}

double inner_product(const double a[], const double b[], int n){
	int i;
	double sum = 0;
	
	for(i = 0; i < n; i++){
		sum += *(a+i) * *(b+i);
		printf("%6.2f\n", sum);
	}
	
	return sum;
}