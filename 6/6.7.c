/******************************************************************************
  题目: 重新安排程序square3.c，在for循环中对变量i进行初始化、判定以及自增操作。
		
  演示: This program prints a table of squares.
		Enter number of entries in table: 10
				1         1
				2         4
				3         9
				4        16
				5        25
				6        36
				7        49
				8        64
				9        81
			   10       100
		----------------------------------------------------------------------
		This program prints a table of squares.
		Enter number of entries in table: 5
				1         1
				2         4
				3         9
				4        16
				5        25
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/19/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	int n, i, odd, square;
	
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	
	odd = 3;
	for(i = 1, square = 1; i <= n; odd += 2, i++){
		printf("%10d%10d\n", i, square);
		square += odd;
	}
	
	return 0;
}