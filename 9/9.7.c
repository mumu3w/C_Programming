/******************************************************************************
  题目: 计算x的n次方。
		
  演示: Enter a number: 4
		Enter a power: 5
		4^5=1024
		-----------------------------------------------------------------------
		Enter a number: 2
		Enter a power: 8
		2^8=256
		-----------------------------------------------------------------------
		Enter a number: 2
		Enter a power: 16
		2^16=65536
		-----------------------------------------------------------------------
		Enter a number: 2
		Enter a power: 10
		2^10=1024
		-----------------------------------------------------------------------
		Enter a number: 2
		Enter a power: 9
		2^9=512
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/26/2015 
  
******************************************************************************/

#include <stdio.h>

int power(int x, int n);

int main(){
	int x, n;
	printf("Enter a number: ");
	scanf("%d", &x);
	printf("Enter a power: ");
	scanf("%d", &n);
	
	printf("%d^%d=%d\n", x, n, power(x, n));
	
	return 0;
}

int power(int x, int n){
	int product;
	if(n == 0){
		return 1;
	}else if(n % 2 == 0){
		product = power(x, n / 2);
		return product * product;
	}else{
		return x * power(x, n-1);
	}
}