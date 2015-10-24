/******************************************************************************
  题目: 打印一份列表，显示出每个数字在数中出现的次数。
		
  演示: Enter a number: 41271092
		Digit:          0   1   2   3   4   5   6   7   8   9
		Occurrences:    1   2   2   0   1   0   0   1   0   1
		----------------------------------------------------------------------
		Enter a number: 112233
		Digit:          0   1   2   3   4   5   6   7   8   9
		Occurrences:    0   2   2   2   0   0   0   0   0   0
		----------------------------------------------------------------------
		Enter a number: 123321
		Digit:          0   1   2   3   4   5   6   7   8   9
		Occurrences:    0   2   2   2   0   0   0   0   0   0
		----------------------------------------------------------------------
		Enter a number: 20203030
		Digit:          0   1   2   3   4   5   6   7   8   9
		Occurrences:    4   0   2   2   0   0   0   0   0   0
		
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
	
	printf("Digit:       ");
	for(i = 0; i < ARRAY_MAX; i++){
		printf("%4u", i);
	}
	printf("\nOccurrences: ");
	for(i = 0; i < ARRAY_MAX; i++){
		printf("%4u", digit_seen[i]);
	}
	
	return 0;
}