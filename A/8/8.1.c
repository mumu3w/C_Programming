/******************************************************************************
  题目: 显示出哪些数字有重复。
		
  演示: Enter a number: 939577
		Repeated digit(s):  7 9
		----------------------------------------------------------------------
		Enter a number: 111
		Repeated digit(s):  1
		----------------------------------------------------------------------
		Enter a number: 123321
		Repeated digit(s):  1 2 3
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/23/2015 
  
******************************************************************************/

#include <stdio.h>

#define TRUE	1
#define FALSE	0
typedef unsigned BOOL;

#define	ARRAY_MAX	10

int main(){
	unsigned digit_seen[ARRAY_MAX] = {0};
	unsigned digit, i;
	unsigned long n;
	
	printf("Enter a number: ");
	scanf("%ul", &n);
	
	while(n > 0){
		digit = n % 10;
		digit_seen[digit]++;
		n /= 10;
	}
	
	printf("Repeated digit(s): ");
	for(i = 0; i < ARRAY_MAX; i++){
		if(digit_seen[i] > 1){
			printf("%2u", i);
		}
	}
	
	return 0;
}