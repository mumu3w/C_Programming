/******************************************************************************
  题目: 测试两个单词是否为变位词（相同字母的重新排列）
		
  演示: Enter first word: smartest
		Enter second word: mattress
		The words are anarams.
		----------------------------------------------------------------------
		Enter first word: dumbest
		Enter second word: stumble
		The words are not anarams.
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/24/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>


#define	ARRAY_MAX	26

int main(){
	int mark[ARRAY_MAX] = {0}, i = 0, sum = 0;
	char ch;
	
	printf("Enter first word: ");
	while((ch = getchar()) != '\n'){
		if(isalpha(ch)){
			ch = tolower(ch);
			mark[ch - 'a']++;
		}
	}
	
	printf("Enter second word: ");
	while((ch = getchar()) != '\n'){
		if(isalpha(ch)){
			ch = tolower(ch);
			mark[ch - 'a']--;
		}
	}
	
	for(i = 0; i < ARRAY_MAX; i++){
		if(mark[i] < 0){
			sum = 1;
			break;
		}
		sum += mark[i];
	}
	
	if(sum == 0){
		printf("The words are anarams.\n");
	}else{
		printf("The words are not anarams.\n");
	}
	
	return 0;
}