/******************************************************************************
  题目: 要求用户输入一个分数，然后将其约分为最简分式.
		
  演示: Enter a fraction: 6/12
		In lowest terms: 1/2
		----------------------------------------------------------------------
		Enter a fraction: 12/28
		In lowest terms: 3/7
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/30/2015 
  
******************************************************************************/

#include <stdio.h>

void reduce(int numertor, int denominator, int *reduced_numertor, int *reduced_denominator);

int main(){
	int numertor, denominator;
	int reduced_numertor, reduced_denominator;
	
	printf("Enter a fraction: ");
	scanf("%d/%d", &numertor, &denominator);
	
	reduce(numertor, denominator, &reduced_numertor, &reduced_denominator);
	
	printf("In lowest terms: %d/%d\n", reduced_numertor, reduced_denominator);
	
	return 0;
}

void reduce(int numertor, int denominator, int *reduced_numertor, int *reduced_denominator){
	int tmp;
	int m = numertor, n = denominator;
	
	/* Euclid算法 */
	for(;;){
		
		if(n == 0){
			break;
		}else{
			tmp = m % n;
			m = n;
			n = tmp;
		}
	}
	
	*reduced_numertor = numertor / m;
	*reduced_denominator = denominator / m;
}