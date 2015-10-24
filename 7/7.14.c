/******************************************************************************
  题目: 用牛顿方法计算正浮点数的平方根
		
  演示: Enter a positive number: 3
		Square root: 1.732051
		----------------------------------------------------------------------
		Enter a positive number: 4
		Square root: 2.000000
		----------------------------------------------------------------------
		Enter a positive number: 5
		Square root: 2.236068
		----------------------------------------------------------------------
		Enter a positive number: 5.2
		Square root: 2.280351
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/22/2015 
  
******************************************************************************/

#include <stdio.h>
#include <math.h>

#define ARRAY_MAX 100

int main(){
	double x, y = 1.0, tmp = 0.0;
	
	printf("Enter a positive number: ");
	scanf("%lf", &x);
	
	while(1){
		if(fabs(y - tmp) < (0.00001 * y)){
			break;
		}
		
		tmp = y;
		y = (y + x / y) / 2.0;
	}
	
	printf("Square root: %f", y);
	
	return 0;
}