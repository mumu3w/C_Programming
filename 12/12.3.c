/******************************************************************************
  题目: 逆序打印消息.
		
  演示: Enter a message: Don't get mad, get even.
		Reversal is: .neve teg ,dam teg t'noD
		-----------------------------------------------------------------------
		Enter a message: abcdefghijklmnopqrstuvwxyz01234
		Reversal is: 3210zyxwvutsrqponmlkjihgfedcba
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/31/2015 
  
******************************************************************************/

#include <stdio.h>

#define	MAX_ARRAY	30


int main(void){
	int i;
	char ch, str1[MAX_ARRAY];
	
	printf("Enter a message: ");
	i = 0;
	while((ch = getchar()) != '\n' && i < MAX_ARRAY){
		*(str1 + i) = ch;
		i++;
	}
	
	printf("Reversal is: ");
	i--;
	while(i >= 0){
		printf("%c", *(str1 + i));
		i--;
	}
	
	
	return 0;
}