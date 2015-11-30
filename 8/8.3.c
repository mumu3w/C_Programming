/******************************************************************************
  题目: 修改8.1.c，使其可以录入多次数进行重复数字的判断。当用户输入的数小于或等
		于0时，程序终止。
		
  演示: Enter a number: 123321
		Repeated digit(s):  1 2 3
		Enter a number: 141516
		Repeated digit(s):  1
		Enter a number: 14141515
		Repeated digit(s):  1 4 5
		Enter a number: 0
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/23/2015 
  
******************************************************************************/

#include <stdio.h>

#define TRUE	1
#define FALSE	0
typedef unsigned BOOL;

#define	ARRAY_MAX	10

int main(){
	int digit_seen[ARRAY_MAX] = {0};
	int digit, i;
	long n;
	
	printf("Enter a number: ");
	scanf("%ld", &n);
	
	while(n > 0){
		while(n > 0){
			digit = n % 10;
			digit_seen[digit]++;
			n /= 10;
		}
		
		printf("Repeated digit(s): ");
		for(i = 0; i < ARRAY_MAX; i++){
			if(digit_seen[i] > 1){
				printf("%2d", i);
			}
		}
		
		printf("\nEnter a number: ");
		scanf("%ld", &n);
		for(i = 0; i < ARRAY_MAX; i++){
			digit_seen[i] = 0;
		}
	}
	
	return 0;
}