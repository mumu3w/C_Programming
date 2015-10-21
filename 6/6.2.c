/******************************************************************************
  题目: 要求用户输入两个整数， 然后计算并显示这两个整数的最大公约数(GCD).
		
  演示: Enter two integers: 12 28
		Greatest common divisor: 4
		----------------------------------------------------------------------
		Enter two integers: 24 128
		Greatest common divisor: 8
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/19/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	int tmp, m, n;
	
	printf("Enter two integers: ");
	scanf("%d%d", &m, &n);
	
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
	
	printf("Greatest common divisor: %d\n", m);
	
	return 0;
}