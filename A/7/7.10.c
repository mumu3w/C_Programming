/******************************************************************************
  题目: 统计句子中的元音字母（a e i o u）的个数。
		
  演示: Enter a sentence: and that's the way it is.
		Your sentence contains 6 vowels.
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/22/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define ARRAY_MAX 100

int main(){
	char ch;
	int i = 0;
	
	printf("Enter a sentence: ");
	while((ch = getchar()) != '\n'){
		if(toupper(ch) == 'A' || toupper(ch) == 'E' || toupper(ch) == 'I' \
			|| toupper(ch) == 'O' || toupper(ch) == 'U'){
				
			i++;
			
		}
	}
	
	printf("Your sentence contains %d vowels.\n", i);
	
	return 0;
}