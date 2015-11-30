/******************************************************************************
  题目: 计算句子的平均词长。
		
  演示: Enter a sentence: it was deja vu all over again.
		Average word length: 3.4
		number = 24   i = 7
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/22/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define ARRAY_MAX 100

int main(){
	char ch;
	int status = 0, i = 0, number = 0;
	
	printf("Enter a sentence: ");
	
	while((ch = getchar()) != '\n'){
		if(ch == ' ' && status == 1){
			i++;
			status = 0;
		}else{
			number++;
			status = 1;
		}
	}
	
	if(ch != '\n'){
		i += 1;
	}
	
	printf("Average word length: %.1f\n", (float)number / i);
	printf("number = %d   i = %d", number, i);
	
	return 0;
}