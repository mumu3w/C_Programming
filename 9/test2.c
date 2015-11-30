/******************************************************************************
  题目: 
		
  演示: 
		
  邮箱：	
  
  时间：10/26/2015 
  
******************************************************************************/

#include <stdio.h>

int power(int x, int n){
	if(n == 0){
		return 1;
	}else if(n % 2 == 0){
		return power(x, n / 2) * power(x, n / 2);
	}else{
		return x * power(x, n-1);
	}
}

int main(void){
	int x, i;
	double sum, tmp;
	
	printf("Enter a number: ");
	scanf("%d", &x);
	
	sum = 1;
	
	for(i = 1; 1; i++){
		tmp = 1.0 / power(x, i);
		if(tmp < 0.00001){
			break;
		}
		sum = sum + tmp;
	}
	
	printf("s=%f\n", sum);
	
	return 0;
}