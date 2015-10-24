/******************************************************************************
  题目: 对double类型组成的数列求和
		
  演示: 
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/22/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	double n, sum;
	
	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to terminate): ");
	
	scanf("%lf", &n);
	while(n != 0.0){
		sum += n;
		scanf("%lf", &n);
	}
	
	printf("This sum is: %f\n", sum);
	
	return 0;
}